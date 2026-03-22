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

> RAM is mirrored on disabled expansion slots. It wraps around at
> invalid address range.

### MMIO Memory Map

| Start Address | Description            |
| :-----------: | ---------------------- |
|    0x0000     | VDP Registers          |
|    0x0100     | I/O (SNES, PS/2, GPIO) |
|    0x0200     | SD/SPI Controller      |
|    0x0300     | System Control         |
| 0x0400-0xffff | Reserved (/DTACK)      |

> MMIO memory region starts at: 0xfb'0000

> Each MMIO region is 256-bytes wide

#### MMIO - VDP Registers

- [Video Display Processor](docs/vdp.md)

#### MMIO - IO

> TODO!

#### MMIO - SD/SPI Controller

> TODO!

#### MMIO - System Control

> TODO!

---

> Documentation is licensed under CC BY-SA 4.0. <br>
> See https://creativecommons.org/licenses/by-sa/4.0/
