module cocotb_iverilog_dump();
initial begin
    $dumpfile("sim_build/dynamic_noise_filter_top		.fst");
    $dumpvars(0, dynamic_noise_filter_top		);
end
endmodule
