module dynamic_noise_reduction #(
    parameter WIDTH = 16  // Q1.15 fixed-point
)(
    input  logic clk,
    input  logic reset,

    input  logic signed [WIDTH-1:0] x_in,       // current audio sample
    input  logic signed [WIDTH-1:0] alpha,      // filter weight coefficient (Q1.15) aka "a" variable

    output logic signed [WIDTH-1:0] y_out       // filtered output (Q1.15)
);

    // Internal registers
    logic signed [WIDTH-1:0] y_prev;
    logic signed [2 * WIDTH-1:0] a_x_product;       // alpha * x_in
    logic signed [2 * WIDTH-1:0] a_yprev_product;      // (1 - alpha) * y_prev        
    logic signed [2 * WIDTH-1:0] sum_shifted;
    logic signed [WIDTH-1:0] one_fixed;  // Fixed-point '1.0'

    // Extended versions to 32-bit for subtraction
    logic signed [2 * WIDTH-1:0] one_fixed_ext;
    logic signed [2 * WIDTH-1:0] alpha_ext;

    // Initialize 1.0 as 0x7FFF (Q1.15 format)
    initial begin
        one_fixed = 16'sd32767;  // 15 bit max number
    end

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            y_prev <= '0;
            y_out  <= '0;
        end 
        else begin
            // Sign-extend inputs to 32-bit before arithmetic
            one_fixed_ext = {{(WIDTH){one_fixed[WIDTH-1]}}, one_fixed};
            alpha_ext = {{(WIDTH){alpha[WIDTH-1]}}, alpha};

            // Step 1: Compute alpha * x[n]
            a_x_product = x_in * alpha;

            // Step 2: Compute (1 - alpha) * y[n-1]
            a_yprev_product = y_prev * (one_fixed_ext - alpha_ext);

            // Step 3: Add the two and shift right by 15 (Q1.15 normalization)
            sum_shifted = (a_x_product + a_yprev_product) >>> 15;
            // Step 4: Truncate result to 16-bit Q1.15 format
            y_out <= sum_shifted[WIDTH-1:0];
            // Step 5: Update y_prev
            y_prev <= sum_shifted[WIDTH-1:0];
        end
    end


endmodule
