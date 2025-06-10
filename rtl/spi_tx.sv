// SPI (audio) Transmitter
module spi_tx (
    input logic clk,
    input logic reset,
    input logic sclk,
    input logic sel,    // SPI chip sel
    input logic [15:0] data_in,
    input logic valid_in,
    output logic miso
);

    logic [15:0] shift_reg;
    logic [3:0] bit_cnt;
    logic sclk_prev;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            shift_reg <= 0;
            bit_cnt <= 0;
            sclk_prev <= 0;
            miso <= 0;
        end
        else begin
            sclk_prev <= sclk;

            if (!sel) begin
                if (valid_in && bit_cnt == 0) begin
                    shift_reg <= data_in;
                    miso <= data_in[15];
                    bit_cnt <= 1;
                end
                else if (sclk_prev && !sclk && bit_cnt != 0) begin  // sclk falling edge
                    shift_reg <= {shift_reg[14:0], 1'b0};
                    miso <= shift_reg[14];
                    bit_cnt <= (bit_cnt == 16) ? 0 : bit_cnt + 1;
                end
            end
        end
    end
endmodule
                