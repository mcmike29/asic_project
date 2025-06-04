module dynamic_noise_filter_top (
    input logic clk,
    input logic reset,
    input logic spi_clk,
    input logic spi_sel,    // SPI chip sel
    input logic spi_mosi,   // SPI data in
    input logic spi_miso    // SPI data out
);
    // SPI I/O Interface
    logic [15:0] x_in;
    logic x_in_valid;
    logic [15:0] y_out;
    logic y_out_valid;

    logic signed [15:0] alpha;

    spi_rx spi_in (
        .clk(clk),
        .reset(reset),
        .sclk(spi_clk),
        .sel(spi_sel),
        .mosi(spi_mosi),
        .data_out(x_in),
        .valid_out(x_in_valid)
    );

    // rtl design
    dynamic_noise_reduction filter (
        .clk(clk),
        .reset(reset),
        .x_in(x_in),
        .alpha(alpha),
        .y_out(y_out)
    );

    spi_tx spi_out (
        .clk(clk),
        .reset(reset),
        .sclk(spi_clk),
        .sel(spi_sel),
        .data_in(y_out),
        .valid_in(x_in_valid),
        .miso(spi_miso)
    );

    // Instantiate DFFRAM module here later...

    // alpha default is 0.25
    initial alpha = 16'sd8192;

endmodule