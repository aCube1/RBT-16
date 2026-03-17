# Overview

&nbsp;&nbsp;&nbsp;&nbsp;A micro-computer inspired by the Atari ST and Amiga 500.

&nbsp;&nbsp;&nbsp;&nbsp;The RBT-16 is a micro-computer designed to be an Atari STe and Amiga 500
successor, not limited by their technology and history, but by what we have
and know today. The RBT-16 is a middle ground between 3 worlds: Atari,
Commodore and IBM.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Our design goal is to have something fun and interesting to play and use.

---

## Hardware Specifications

- CPU: Motorola 68000 at ~8/12MHz
- VDP: Tang Nano 9K. Codename - Killy
- APU: YM3812 (OPL2) + DAC
- RAM: Shipped with 256KB of Static RAM; Has four RAM expansion modules,
  with up to 4MB max RAM
- ROM: 256KB Flash; Stores BIOS and Kernel

> CPU can be boosted by software up to 12MHz

> ROM can be rewritten and/or replaced. <br>

> ROM0 -> /UDS chip (D8-D15, even addresses) <br>
> ROM1 -> /LDS chip (D0-D7, odd addresses)

- [RAM Subsystem](docs/ram.md)

### IO Connectors:

- 2 x SNES Controllers
- 2 x PS/2 Mouse and Keyboard Ports
- 1 x microSD Card Slot
- 1 x 3.5mm Audio Jack
- 1 x RCA Jack
- 4 x 2x50 Card Edge Connectors/Expansion Card (Parallel Bus)

### Chips references

- [Video Display Processor](docs/vdp.md)

<!--
NOTES:
	(uotlaf) - CPU: Possibility to change CPU clock via software using
custom wiring.
	(YAN) - CPU: Test clock frequencies stability.
	(aCube) - ROM: Should the ROM be updated from the microSD card? It will
require a read-only bootloader section.
	(YAN) - APU: Use the YM2413 OPLL FM chip as an alternative audio chip
	(aCube) - SD Card: SPI controller should reside inside the VDP. This
simplify implementation.

REFS:
	CPU: MC68000P12 | MC68010P12
	APU: YM3812 | YM2413
	FPGA: Tang Nano 9K
	SRAM:
		- AS6C4008-55PCN -> 512Kx8 = 512KB
		- AS6C1008-55PCN -> 128Kx8 = 128K
	ROM:
		- SST39SF010A -> Flash 128Kx8 = 128KB
		- SST39SF040  -> Flash 512Kx8 = 512KB
	ICs:
		- 74HC138 -> Decoder
		- 74HC139 -> Decoder
		- 74HCT244 -> one-way 8-bit buffer, 5V |-> 3.3V
		- 74HCT245 -> bidirectional 8-bit buffer, 5V <-> 3.3V
	PINs:
		- 2x50 Card Edge Connectors
		- 2x30 Card Edge Connectors
-->

---

> Documentation is licensed under CC BY-SA 4.0. <br>
> See https://creativecommons.org/licenses/by-sa/4.0/
