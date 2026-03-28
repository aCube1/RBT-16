# RAM and Memory Map

- The RBT-16 is shipped with 256KB SRAM, but can expanded up to 4MB
- Expansion is made by Memory Modules
    - 4 slots total on the main board
    - Connector: 2x30 edge connector
    - Module size is flexible; The Main board doesn't care what's on the module,
      only that it responds to `/CS`
    - Present Detect (PD) pins: 3 pins on the connector, encode the size
      in hardware (see table below)
    - Supported module sizes: 256KB, 512KB and 1MB
- System should refuse to boot if Slot 0 is unpopulated

| PD2 | PD1 | PD0 | Size      |
| :-: | :-: | :-: | :-------- |
|  0  |  0  |  0  | No Module |
|  0  |  0  |  1  | 256KB     |
|  0  |  1  |  0  | 512KB     |
|  0  |  1  |  1  | 1MB       |
|  1  |  0  |  0  | Reserved  |
|  1  |  0  |  1  | Reserved  |
|  1  |  1  |  0  | Reserved  |
|  1  |  1  |  1  | Reserved  |

## Main Memory Map

|    Address Range    | Size  | Description                     |
| :-----------------: | :---: | ------------------------------- |
| 0x00'0000-0x0f'ffff |  1MB  | RAM Slot 0                      |
| 0x10'0000-0x1f'ffff |  1MB  | RAM Slot 1                      |
| 0x20'0000-0x2f'ffff |  1MB  | RAM Slot 2                      |
| 0x30'0000-0x3f'ffff |  1MB  | RAM Slot 3                      |
| 0x40'0000-0xef'ffff | 11MB  | Reserved (Triggers /BERR)       |
| 0xf0'0000-0xf3'ffff | 256KB | Kernel ROM (BIOS)               |
| 0xf4'0000-0xf7'ffff | 256KB | Kernel ROM mirror               |
| 0xf8'0000-0xfa'ffff | 192KB | Reserved (Does nothing, /DTACK) |
| 0xfb'0000-0xfb'ffff | 64KB  | MMIO (see MMIO Memory Map)      |
| 0xfc'0000-0xfc'ffff | 64KB  | Expansion Card 0                |
| 0xfd'0000-0xfd'ffff | 64KB  | Expansion Card 1                |
| 0xfe'0000-0xfe'ffff | 64KB  | Expansion Card 2                |
| 0xff'0000-0xff'ffff | 64KB  | Expansion Card 3                |

> Disabled Expansion Cards triggers /BERR if accessed

> Memory Map is subject to changes

### RAM layout

|    Address Range    | Size  | Description                         |
| :-----------------: | :---: | ----------------------------------- |
| 0x00'0000-0x00'03ff |  1KB  | Exception Vector Table              |
| 0x00'0400-0x00'0fff |  3KB  | BIOS Memory / Boot Info             |
| 0x00'1000-0x00'ffff | 60KB  | Kernel Heap                         |
| 0x01'0000-0x0f'ffff | 960KB | Userspace (Slot 0 remainder)        |
| 0x10'0000-0x3f'ffff |  3MB  | Userspace (Slots 1-3, if populated) |

> RAM is mirrored on disabled RAM slots. It wraps around at
> invalid address range.

### MMIO Memory Map

| Start Address | Description       |
| :-----------: | ----------------- |
|    0x0000     | VDP Registers     |
|    0x0100     | I/O (SNES, PS/2)  |
|    0x0200     | System Control    |
| 0x0300-0xffff | Reserved (/DTACK) |

> MMIO memory region starts at: 0xfb'0000

> Each MMIO region is 256-bytes wide

#### MMIO - VDP Registers

- [Video Display Processor](docs/vdp.md)

#### MMIO - IO

All registers are accessible by the I/O Conttroller register map

> IO_MMIO: 0xfb'0100

```asm
;=========================
; SNES Controllers
;=========================
IO_MMIO + 0x00 -> SNES0_DATA_L | R
IO_MMIO + 0x01 -> SNES0_DATA_H | R
IO_MMIO + 0x02 -> SNES1_DATA_L | R
IO_MMIO + 0x03 -> SNES1_DATA_H | R
IO_MMIO + 0x04 -> SNES2_DATA_L | R
IO_MMIO + 0x05 -> SNES2_DATA_H | R
IO_MMIO + 0x06 -> SNES3_DATA_L | R
IO_MMIO + 0x07 -> SNES3_DATA_H | R

LO_BYTE:
	7  6  5  4  3  2  1  0
	r  l  d  u  S  s  y  b

	[0:0]   b -> B button
	[1:1]   y -> Y button
	[2:2]   s -> Select
	[3:3]   S -> Start
	[4:4]   u -> Up-pad
	[5:5]   d -> Down-pad
	[6:6]   l -> Left-pad
	[7:7]   r -> Right-pad

HI_BYTE:
	7  6  5  4  3  2  1  0
	.  .  .  .  R  L  x  a

	[0:0] a -> A button
	[1:1] x -> X button
	[2:2] L -> Left shoulder
	[3:3] R -> Right shoulder


IO_MMIO + 0x08 -> PS2K_STATUS | R
IO_MMIO + 0x0a -> PS2M_STATUS | R
	7  6  5  4  3  2  1  0
	E  R  A  B  T  P  O  D

	[0:0] D - DATA_READY -> Set if Scancode is ready in PS2K_DATA
	[1:1] O - OVERRUN -> Set if Buffer overflowed (Cleared after PS2K_DATA read)
	[2:2] P - PARITY_ERR -> Reflects parity bit from last received data byte
	[3:3] T - TIMEOUT -> Set if no response from keyboard
	[4:4] B - CMD_BUSY -> Set if command is being processed, new commands ignored
	[5:5] A - CMD_ACK -> Set if last command was acknowledged (0xfa)
	[6:6] R - CMD_RESEND -> Set if last command requested resend (0xfe)
	[7:7] E - ERROR -> Set at unrecoverable error


IO_MMIO + 0x09 -> PS2K_DATA | R/W
IO_MMIO + 0x0b -> PS2M_DATA | R/W
	7  6  5  4  3  2  1  0
	d  d  d  d  d  d  d  d

	[7:0] d - DATA/COMMAND -> Data or command

; If read: Returns the next byte from device. For keyboard: scancode. For Mouse: one byte
; of 3-byte packed. Reading clears DATA_READY.
; If write: Sends a command byte to the device. If the command expects a data byte, write
; it immediately after. The firmware automatically retries on resend (up to 3 times).


IO_MMIO + 0x0c -> IRQ_ENABLE | R/W
	7  6  5  4  3  2  1  0
	.  .  M  K  S  S  S  S

	[3:0] S - SNESx_ENABLE -> Bitfield of which SNES controller is enabled
to send IRQs (see table below)
	[4:4] K - PS2K_ENABLE -> If set, enables keyboard to send IRQs
	[5:5] M - PS2M_ENABLE -> If set, enables mouse to send IRQs


IO_MMIO + 0x0d -> IRQ_FLAGS | R/W (write 1 to clear)
	7  6  5  4  3  2  1  0
	.  .  M  K  S  S  S  S

	[3:0] S - SNESx_IRQ -> Bitfield of which SNES controller sent by
current IRQ (see table below)
	[4:4] K - PS2K_IRQ -> Set if current IRQ was sent by the keyboard
	[5:5] M - PS2M_IRQ -> Set if current IRQ was sent by the mouse

; SNES controller bits:
; Bit 0 -> SNES controller on port 0
; Bit 1 -> SNES controller on port 1
; Bit 2 -> SNES controller on port 2
; Bit 3 -> SNES controller on port 3


IO_MMIO + 0x0e -> IO_FEATURES | R
	7  6  5  4  3  2  1  0
	.  .  M  K  S  S  S  S

	[3:0] S -> SNESx_PRN -> Bit field of which SNES controller is
detected or connected
	[4:4] K -> PS2K_PRN -> Set if PS/2 keyboard is present
	[5:5] M -> PS2M_PRN -> Set if PS/2 mouse is present


IO_MMIO + 0x0f -> VERSION | R
	7  6  5  4  3  2  1  0
	M  M  M  M  m  m  m  m

	[3:0] m -> MINOR -> Minor version number
	[7:4] M -> MAJOR -> Major version number

```

#### MMIO - System Control

> TODO!

---

> Documentation is licensed under CC BY-SA 4.0. <br>
> See https://creativecommons.org/licenses/by-sa/4.0/
