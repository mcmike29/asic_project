`timescale 1ns/1ps

module tb_dynamic_noise_reduction;

  // DUT I/O
  logic clk = 0;
  logic reset;
  logic spi_clk = 0;
  logic spi_mosi;
  logic spi_miso;
  logic spi_sel;

  // Clock generation
  always #5 clk = ~clk;       // 100 MHz system clock
  always #100 spi_clk = ~spi_clk;  // 5 MHz SPI clock

  // Instantiate DUT (update this module name as needed)
  dynamic_noise_filter_top dut (
    .clk(clk),
    .reset(reset),
    .spi_clk(spi_clk),
    .spi_mosi(spi_mosi),
    .spi_miso(spi_miso),
    .spi_sel(spi_sel)
  );

  // File handles
  integer sample_file, log_file;
  integer i;
  logic [15:0] sample;

  initial begin
    $dumpfile("wave.vcd");       // Name of the output VCD file
    $dumpvars(0, tb_dynamic_noise_reduction); // Dump all variables recursively from the top module

    // Initialize
    reset = 1;
    spi_sel = 1;
    spi_mosi = 0;

    repeat (5) @(posedge clk);
    reset = 0;

    // Open files
    sample_file = $fopen("short_audio_input.txt", "r");
    log_file = $fopen("spi_output_log.txt", "w");

    if (sample_file == 0) begin
      $fatal(1, "Failed to open short_audio_input.txt");
    end

    // Processes exactly 16 samples just for SPI interface testing and a viewable waveform
    for (i = 0; i < 16; i++) begin
      if (!$feof(sample_file)) begin
        void'($fscanf(sample_file, "%d\n", sample));
        send_spi_word(sample);
      end else begin
        $fatal(1, "Reached end of file before 16 samples");
      end
    end

    // // Main loop: read each sample and send over SPI
    // while (!$feof(sample_file)) begin
    //   void'($fscanf(sample_file, "%d\n", sample));
    //   send_spi_word(sample);
    // end

    $fclose(sample_file);
    $fclose(log_file);
    #1000;
    $finish;
  end

  // SPI transfer task (16 bits MSB-first)
  task send_spi_word(input logic [15:0] word);
    integer bit_index;
    logic [15:0] result;
    result = 0;

    spi_sel = 0;

    for (bit_index = 15; bit_index >= 0; bit_index--) begin
      spi_mosi = word[bit_index];
      #50 spi_clk = 1;  // Rising edge
      #50 spi_clk = 0;  // Falling edge
    end

    spi_sel = 1;

    // Optionally log the output
    $fwrite(log_file, "%0d\n", dut.spi_miso);

    #200; // Inter-transfer delay
  endtask

endmodule
