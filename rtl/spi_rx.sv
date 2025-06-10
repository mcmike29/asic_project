// SPI (audio) receiver
module spi_rx (
    input logic clk,
    input logic reset,
    input logic sclk,
    input logic sel,    // SPI chip sel
    input logic mosi,   // SPI data in
    output logic [15:0] data_out,
    output logic valid_out  // signal for when next word is ready
);

    logic [15:0] shift_reg;
    logic [3:0] bit_cnt;
    logic sclk_prev;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            shift_reg <= 0;
            bit_cnt <= 0;
            sclk_prev <= 0;
            data_out <= 0;
            valid_out <= 0;
        end
        else begin
            sclk_prev <= sclk;
            valid_out <= 0;

            if (!sel && !sclk_prev && sclk) begin   // sclk rising edge
                shift_reg <= {shift_reg[14:0], mosi};
                bit_cnt <= bit_cnt + 1;

                if (bit_cnt == 15) begin
                    data_out <= {shift_reg[14:0], mosi};
                    valid_out <= 1;
                    bit_cnt <= 0;
                end
            end
        end
    end
endmodule