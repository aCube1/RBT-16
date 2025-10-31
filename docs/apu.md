# Audio: codename - Cibo

- Output: 3.5mm stereo jack + 2 RCA stereo
- APU: Modified Paula[^1] + YM2419 PSG
- Sampling: 4x 8-bit PCM channels @ up to 28kHz
- PSG: 3x square wave channels + noise generator

> Samples are streamed from main

> Paula's original floppy disk and serial controllers have been removed and
> replaced with a YM2419

---

## APU MMIO Registers

> APU_ADDR: 0xf9:0000

---

[^1] Paula FPGA: https://github.com/nonarkitten/amiga_replacement_project/blob/master/paula/Paula.v

<!--
	(YAN) - Use the YM2413 OPLL FM chip as the secondary audio chip
-->
