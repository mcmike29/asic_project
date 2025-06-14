import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
import numpy as np
from audio_util import wav_normalized_samples
import  q15_to_wav as q15
from scipy.io.wavfile import write as wav_write


# samples = wav_normalized_samples("input.wav", num_samples=256)  # or 128, etc.
# np.savetxt("short_audio_input.txt", samples, fmt="%d")

@cocotb.test()
async def fast_filter_test(dut):
    # Set up a fast clock for direct RTL interaction
    cocotb.start_soon(Clock(dut.clk, 2, units="ns").start())

    # Reset the DUT
    dut.reset.value = 1
    for _ in range(5):
        await RisingEdge(dut.clk)
    dut.reset.value = 0

    # Load normalized audio samples (Q1.15)
    input_samples = wav_normalized_samples("input.wav", num_samples=32000)
    output_samples = []

    # Set alpha to 0.25 (8192 in Q1.15)
    dut.alpha.value = 8192

    # Feed samples to the filter
    for sample in input_samples:
        dut.x_in.value = int(sample)
        await RisingEdge(dut.clk)
        output = dut.y_out.value.signed_integer
        output_samples.append(output)

    # Save the output as WAV
    float_audio = q15.q15_to_float(np.array(output_samples))
    wav_data = np.int16(float_audio * 32767)
    wav_write("filtered_output_fast.wav", 16000, wav_data)
    dut._log.info("Filtered audio written to 'filtered_output_fast.wav'")
