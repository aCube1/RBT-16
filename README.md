# Overview

&nbsp;&nbsp;&nbsp;&nbsp;A micro-computer inspired by the Atari ST and Amiga 500.

&nbsp;&nbsp;&nbsp;&nbsp;The RBT-16 is a micro-computer designed to be an Atari STe and Amiga 500
successor, not limited by their technology and history, but by what we have
and know today. The RBT-16 is a middle ground between 3 worlds: Atari,
Commodore and IBM.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Our design goal is to have something fun and interesting to play and use.

---

## Hardware Specifications

- CPU: Motorola 68010 at ~8/12MHz
- RAM: Shipped with 512KB of Static RAM. Eight SRAM slots of 512KB, up to 4MB max RAM
- ROM: 512KB Flash; BIOS/Kernel

> CPU can be boosted by software up to 12MHz

> ROM can be rewritten and replaced

### IO Connectors:

- 2 x SNES Controllers
- 2 x PS/2 Mouse and Keyboard Ports
- 1 x microSD Card Slot
- 1 x 3.5mm Audio Jack
- 1 x RCA Jack
- 4 x Card Edge Connectors/Expansion Card (Parallel Bus)

### RAM and Memory Map

- The RBT-16 is shipped with 512KB SRAM, but can be expanded up to 4MB.

|    Address Range    | Size  | Description                             |
| :-----------------: | :---: | --------------------------------------- |
| 0x00'0000-0x07'ffff | 512KB | Default 512KB RAM chip (Slot 0)         |
| 0x08'0000-0x3f'ffff | 3.5MB | RAM Expansion slots (Slots 1-7)         |
| 0x40'0000-0x7f'ffff |  4MB  | Mirrors 0x00'0000 to 0x3f'0000          |
| 0x80'0000-0x80'ffff | 64KB  | Expansion Card 0                        |
| 0x81'0000-0x81'ffff | 64KB  | Expansion Card 1                        |
| 0x82'0000-0x82'ffff | 64KB  | Expansion Card 2                        |
| 0x83'0000-0x83'ffff | 64KB  | Expansion Card 3                        |
| 0x84'0000-0xef'ffff | 6MB~  | Mirrors 0x80'0000 to 0x83'ffff          |
| 0xf0'0000-0xf7'ffff | 512KB | System ROM (BIOS/Kernel)                |
| 0xf8'0000-0xf8'ffff | 64KB  | Video MMIO (VDP)                        |
| 0xf9'0000-0xf9'ffff | 64KB  | Audio MMIO RAM                          |
| 0xfa'0000-0xfa'7fff | 32KB  | I/O registers (Controllers, PS/2, GPIO) |
| 0xfa'8000-0xfa'ffff | 32KB  | SD Card interface                       |
| 0xfb'0000-0xff'ffff | 320KB | Reserved / Debug IO (Does nothing)      |

> RAM is mirrored on disabled expansion slots. It wraps around at invalid address range.
> Memory Map is subject to changes

### Chips references

- [Video Display Processor](docs/vdp.md)
- [Audio Processor Unit](docs/apu.md)

<!--
NOTES:
	(uotlaf) - CPU: Possibility to change CPU clock via software using custom wiring.
	(YAN) - CPU: Test clock frequencies stability.
	(aCube) - ROM: Should the ROM be updated from the microSD card? It will require
a read-only bootloader section.
-->
