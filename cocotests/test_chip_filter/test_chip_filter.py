import cocotb
from cocotb.triggers import RisingEdge, FallingEdge, Timer
from cocotb.clock import Clock
from cocotb.binary import BinaryValue
import numpy as np
from scipy.io.wavfile import read

from audio_util import wav_normalized_samples

@cocotb.test()
async def run_filter_test(dut):
    clk_freq_hz = 100_000_000  # 100 MHz system clock
    spi_freq_hz = 5_000_000   # 2 MHz SPI clock
    spi_period_ns = int(1e9 / spi_freq_hz)
    
    # Setup system clock
    cocotb.start_soon(Clock(dut.clk, 5, units="ns").start())

    dut.reset.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.reset.value = 0
    
    # rate, data = read("input.wav")
    # print("Sample Rate:", rate)
    # print("Max amplitude:", max(abs(data)))
    
    # Parse audio file
    samples = wav_normalized_samples("input.wav")
    received = []
    
    async def spi_transfer(word):
        result = 0
        dut.spi_sel.value = 0 # or just .sel.value
        await Timer(spi_period_ns // 4, units='ns')  # setup delay

        # Send 16 bits MSB-first
        for i in range(16):
            bit = int((word >> (15 - i)) & 1)
            dut.spi_mosi.value = bit
            await Timer(spi_period_ns // 2, units='ns')
            dut.spi_clk.value = 1
            await Timer(spi_period_ns // 2, units='ns')
            dut.spi_clk.value = 0
        await Timer(spi_period_ns // 4, units='ns')  # hold time

        # Receive 16 bits MSB-first
        for i in range(16):
            await Timer(spi_period_ns // 2, units='ns')
            dut.spi_clk.value = 1
            await Timer(spi_period_ns // 2, units='ns')
            result = (result << 1) | dut.spi_miso.value.integer
            dut.spi_clk.value = 0

        dut.spi_sel.value = 1
        await Timer(spi_period_ns, units='ns')
        return result
        
    # Run transfer loop
    for i, sample in enumerate(samples):
        result = await spi_transfer(sample)
        received.append(result)
        dut._log.info(f"Sample {i}: sent {sample:#06x}, received {result:#06x}")
        
    np.savetxt("filtered_output_q15.txt", received, fmt="%d")
    