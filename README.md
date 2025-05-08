
CPU: Based on Motorola 68000 (m68k) at 8Mhz
RAM: Fixed 4MB, not expandable.

---

PPU:
- Resolution: Fixed 256x192 output resolution
- VRAM: Dedicated chip with 64KB of memory.
- Sprites: Can only fit 92 sprites per frame, sprites can go up 32x32 pixels wide
- Tiles: ?
- Colors: Fixed 64 colors palette[^1]
- Background: Up to 4 background layers; Has 4 modes.

Background modes:

| Mode | Layers | Types  | Palette | Size    | Capabilities                         |
| ---- | ------ | ------ | ------- | ------- | ------------------------------------ |
| 0    | 4      | Tiles  | Indexed | 512x512 | Cannot move each layer independently |
| 1    | 2      | Tiles  | Indexed | 512x512 | Can move each layer independently    |
| 2    | 2      | Bitmap | Indexed | 256x256 | Double buffered                      |
| 3    | 1      | Bitmap | RGB5    | 256x256 | Single buffer                        |

> [!NOTE] Changes to Mode 0 and 1:
> Mode 0: Maybe it's better to have 1 layer that can move independently, but the other 3 move together.
> Mode 1: Maybe add one more layer that move independently.

---

APU:
- Chip: RBS - Real Blast Sound (Emulated)
* PSG: 4 square and noise channels
* PCM: 4 sample channels; Sample Rate 8-bits

CPU must send commands to the APU FIFO buffer, each command set the attributes and data of each channel. To send any command to a channel, is necessary to send a command data to the correct register.

PSG registers:

| Address  | Lenght  | Name                         |
| -------- | ------- | ---------------------------- |
| 0x002000 | 2 bytes | Channel A status             |
| 0x002002 | 4 bytes | Channel A command attributes |
| 0x002006 | 4 bytes | Channel A command address    |
| 0x00200a | 2 bytes | Channel B status             |
| 0x00200c | 4 bytes | Channel B command attributes |
| 0x002010 | 4 bytes | Channel B command address    |
| 0x002014 | 2 bytes | Channel C status             |
| 0x002016 | 4 bytes | Channel C command attributes |
| 0x00201a | 4 bytes | Channel C command address    |
| 0x00201e | 2 bytes | Channel D status             |
| 0x002020 | 4 bytes | Channel D command attributes |
| 0x002024 | 4 bytes | Channel D command address    |

PSG command data:

| Byte | Bits        | Attribute                                                         |
| ---- | ----------- | ----------------------------------------------------------------- |
| 0    | `LLLL LLLL` | How much bytes to read                                            |
| 1    | `cccc cc00` | The first 6 bits determine how many times this command will cycle |
| 2    | `t000 0000` | Bit 0 is the channel type: `0: Noise` \| `1: Square`              |
| 3    | `0000 0000` | Reserved                                                          |
| 5..7 | `.... ....` | Source address                                                    |

[^1]: [[palette.png]]
