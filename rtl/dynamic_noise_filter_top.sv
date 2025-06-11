module dynamic_noise_filter_top (
    input logic clk,
    input logic reset,
    input logic spi_clk,
    input logic spi_sel,    // SPI chip sel
    input logic spi_mosi,   // SPI data in
    output logic spi_miso    // SPI data out
);
    // SPI I/O Interface
    logic [15:0] x_in;
    logic x_in_valid;
    logic [15:0] y_out;
    logic y_out_valid;

    logic signed [15:0] alpha;
    logic filter_enabled;

    // DFFRAM interface wires
    logic [7:0] ram_addr;
    logic [3:0] ram_we;
    logic ram_en;
    logic [31:0] ram_din, ram_dout;

    // Instantiate DFFRAM (256 x 32)
    DFFRAM256x32 config_ram (
        .CLK(clk),
        .WE0(ram_we),
        .EN0(ram_en),
        .Di0(ram_din),
        .Do0(ram_dout),
        .A0(ram_addr)
    );

    // Alpha and enable filter configuration from RAM
    localparam ALPHA_ADDR = 8'd0;
    localparam ENABLE_ADDR = 8'd1;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            alpha <= 16'sd8192;        // default 0.25 Q1.15
            filter_enabled <= 1'b1;
        end else if (ram_en && ram_we == 4'b0000) begin
            case (ram_addr)
                ALPHA_ADDR: alpha <= ram_dout[15:0];
                ENABLE_ADDR: filter_enabled <= ram_dout[0];
                default:      ; // No-op
            endcase
        end
    end

    spi_rx spi_in (
        .clk(clk),
        .reset(reset),
        .sclk(spi_clk),
        .sel(spi_sel),
        .mosi(spi_mosi),
        .data_out(x_in),
        .valid_out(x_in_valid)
    );

    // Filter
    logic signed [15:0] filtered_out;

    // rtl design
    dynamic_noise_reduction filter (
        .clk(clk),
        .reset(reset),
        .x_in(x_in),
        .alpha(alpha),
        .y_out(filtered_out)
    );

    assign y_out = filter_enabled ? filtered_out : x_in;
    assign y_out_valid = x_in_valid;

    spi_tx spi_out (
        .clk(clk),
        .reset(reset),
        .sclk(spi_clk),
        .sel(spi_sel),
        .data_in(y_out),
        .valid_in(x_in_valid),
        .miso(spi_miso)
    );

endmodule