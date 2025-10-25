# Overview

&nbsp;&nbsp;&nbsp;&nbsp;A micro-computer inspired by the Atari ST and Amiga 500.

&nbsp;&nbsp;&nbsp;&nbsp;The RBT-16 is a micro-computer designed to be an Atari STe and Amiga 500
successor, not limited by their technology and history, but by what we have
and know today. The RBT-16 is a middle-term between 3 worlds: Atari,
Commodore and IBM.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Our design goal is to have something fun and interesting to play and use.

---

## Hardware Specifications

- CPU: Motorola 68010 at ~8/12MHz
- RAM: Shipped with 512KB of Static RAM. Eight SRAM slots of 512KB, up to 4MB max RAM
- ROM: Base 512KB system ROM

> CPU can be boosted by software up to 12MHz

### IO Connectors:

- 4 x Expansion slots (Custom Bus)
- 2 x SNES controllers
- 2 x PS/2 mouse and keyboard ports
- 1 x I2C port
- 1 x SD Card slot
- 2 x MIDI DIN 5-pin (IN/OUT)
- 1 x 3.5mm audio jack
- 2 x RCA Jacks (Stereo)

### RAM and Memory Map

- The RBT-16 is shipped with 512KB SRAM, but can expaned up to 4MB.
- Memory is managed by a PMMU chip on board.

|    Address Range    | Size  | Description                                  |
| :-----------------: | :---: | -------------------------------------------- |
| 0x00'0000-0x07'ffff | 512KB | Default 512KB RAM chip                       |
| 0x08'0000-0x3f'ffff | 3.5MB | RAM Expansion slots; 7 slots of 512KB        |
| 0x40'0000-0xef'ffff | 11MB  | Reserved; Bus exception on access            |
| 0xf0'0000-0xf7'ffff | 512KB | BIOS + System OS/DOS                         |
| 0xf8'0000-0xf8'ffff | 64KB  | Video MMIO                                   |
| 0xf9'0000-0xf9'ffff | 64KB  | Audio MMIO                                   |
| 0xfa'0000-0xfa'ffff | 64KB  | I/O registers (Controllers, SD Card, etc...) |
| 0xfb'0000-0xff'ffff | 320KB | Reserved; Future expansion/Debug I/O         |

> Memory Map is subject to changes

### Chips references

- [Video Display Processor](docs/vdp.md)
- [Audio Processor Unit](docs/apu.md)

<!--
NOTES:
	(uotlaf) - CPU: Possibility to change CPU clock via software using custom wiring.
	(aCube) - RAM: Manager memory regions for each device, and how memory will be
interacted by the program.
	(aCube) - ROM: Decide how much ROM will be shipped for the Kernel.
	(aCube) - ROM: Will it replaceable? I think users must be able to update the
Kernel with a custom one, or update the shipped version to a new version.
-->
