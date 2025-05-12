`timescale 1ns / 1ps

module tb_dynamic_noise_reduction; // invalid module item?

    parameter WIDTH = 16; // dupe instantiation here
    parameter CYCLES = 10;

    logic clk, reset;
    logic signed [WIDTH-1:0] x_in;
    logic signed [WIDTH-1:0] alpha;
    logic signed [WIDTH-1:0] y_out; // dupe instantiation here

    // Instantiate the DUT (Design Under Test)
    dynamic_noise_reduction #(.WIDTH(WIDTH)) dut (
        .clk(clk),
        .reset(reset),
        .x_in(x_in),
        .alpha(alpha),
        .y_out(y_out)
    );

    // Clock generation
    always #5 clk = ~clk;  // 100MHz clock

    // Sample input audio data (Q1.15 format)
    logic signed [WIDTH-1:0] test_input [0:CYCLES-1];

    // Initialize testbench
    initial begin
        $display("Starting testbench...");
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_dynamic_noise_reduction);

        clk = 0;
        reset = 1;
        alpha = 16'sd8192; // 0.25 in Q1.15 (8192 = 0x2000)
        x_in = 0;

        // Example signal: a sudden pulse in audio
        test_input[0] = 16'sd0;        // 0.0
        test_input[1] = 16'sd16384;    // 0.5
        test_input[2] = 16'sd32767;    // ~1.0
        test_input[3] = 16'sd0;        // back to 0.0
        test_input[4] = -16'sd16384;   // -0.5
        test_input[5] = -16'sd32767;   // -1.0
        test_input[6] = 16'sd0;
        test_input[7] = 16'sd8192;     // 0.25
        test_input[8] = 16'sd8192;     // steady
        test_input[9] = 16'sd0;

        #12 reset = 0;

        // Feed inputs one-by-one per cycle
        for (int i = 0; i < CYCLES; i++) begin
            x_in = test_input[i];
            @(posedge clk);
            $display("Cycle %0d: x_in = %0d, y_out = %0d", i, x_in, y_out);
        end

        // Finish sim
        #20;
        $finish;
    end

endmodule
