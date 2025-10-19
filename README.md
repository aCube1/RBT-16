# Overview

A micro-computer inspired by the Atari ST and Amiga 500.

---

## Hardware Specifications

- CPU: Motorola 68010 at ~8MHz;
- RAM: Shipped with 512KB of Static RAM. Eight SRAM slots of 512KB, up to 4MB max RAM;
- ROM: TODO!
- Blitter: TODO!

### IO Connectors:

- 4 x Expansion slots (Custom Bus)
- 2 x SNES controllers
- 2 x PS/2 mouse and keyboard ports
- 1 x I2C port
- 1 x SD Card slot
- 2 x MIDI DIN 5-pin (IN/OUT)
- 1 x 3.5mm audio jack
- 2 x RCA Jacks (Stereo)

### Hardware references

- [VDP](docs/vdp.md)

---

### Audio: codename - Cibo

- Output: 3.5mm stereo jack + 2 RCA stereo
- APU: Custom FPGA
- PSG: 4 square waves or noise channels
- PCM: 4 sample channels; Sample rate 16-bits

<!--
NOTES:
	(aCube) - CPU: Option to boost CPU clock to 12MHz.
	(Outlaf) - CPU: Possibility to change CPU clock via software using custom wiring.
	(aCube) - RAM: Decide how much RAM will be shipped by default, and how many SRAM
slots will be avaliable.
	(aCube) - RAM: Manager memory regions for each device, and how memory will be
interacted by the program.
	(aCube) - ROM: Decide how much ROM will be shipped for the Kernel.
	(aCube) - ROM: Will it replaceable? I think users must be able to update the
Kernel with a custom one, or update the shipped version to a new version.
	(aCube) - VIDEO: Decide how many VRAM will be shipped.
	(aCube) - AUDIO: Possible triangle or pulse wave channels?
	(aCube) - AUDIO: It should be better to split the square and noise channels
into their own channels, without the possibility of switching, but add two more channels
that can switch between triangle and noise.

TODO:
	Improve video capabilities and learn more about what can be executed by the VDP.
-->
