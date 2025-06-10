import numpy as np
import scipy.io.wavfile as wavfile

def q15_to_float(q15_array):
    return np.clip(q15_array.astype(np.float32) / (2**15), -1.0, 1.0)

def save_q15_to_wav(txt_path, wav_path, sample_rate=16000):
    # Load Q15 output
    q15_data = np.loadtxt(txt_path, dtype=np.int16)
    
    # Convert to floating-point audio [-1, 1]
    float_audio = q15_to_float(q15_data)
    
    # Scale to 16-bit PCM range and convert to int16
    pcm_data = np.int16(float_audio * 32767)
    
    # Write to WAV
    wavfile.write(wav_path, sample_rate, pcm_data)
    print(f"[✔] Saved WAV to {wav_path}")

if __name__ == "__main__":
    save_q15_to_wav("filtered_output_q15.txt", "filtered_output.wav")
