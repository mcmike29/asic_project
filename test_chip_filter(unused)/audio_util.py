import numpy as np
import scipy.io.wavfile as wavfile

def wav_normalized_samples(path, num_samples=None):
    rate, data = wavfile.read(path)
    if data.ndim > 1:
        data = data[:, 0]  # mono channel

    # Remove leading silence (optional)
    nonzero_indices = np.where(np.abs(data) > 100)[0]  # tweak threshold if needed
    if len(nonzero_indices) == 0:
        raise ValueError("No nonzero samples found.")

    start_idx = nonzero_indices[0]
    data = data[start_idx:]

    if num_samples is not None:
        data = data[:num_samples]

    max_val = np.max(np.abs(data))
    if max_val == 0:
        raise ValueError("WAV file contains silence or zero signal.")

    data = data / max_val  # normalize to [-1, 1]
    q15_data = np.clip((data * (2**15 - 1)).astype(np.int16), -32768, 32767)

    return q15_data

