# Overview

A micro-computer inspired by the Atari ST and Amiga 500.

---

### Hardware Specifications

- CPU: Motorola 68010 at ~8MHz;
- RAM: Shipped with 512KB of Static RAM. Eight SRAM slots of 512KB, up to 4MB max RAM;
- ROM: TODO!

### IO Connectors:

- 4 x Expansion slots (Custom Bus)
- 2 x SNES controllers
- 2 x PS/2 mouse and keyboard ports
- 1 x I2C port
- 1 x SD Card slot
- 2 x MIDI DIN 5-pin (IN/OUT)
- 1 x 3.5mm audio jack
- 2 x RCA Jacks (Stereo)

---

### Video: codename - Killy

- Output: VGA (DE-15)
- Chip: FPGA
- Resolution: 320x240
- VRAM: 128KB. Not shared with the main RAM, only accessible by registers
- Colors: Up to 256 colors can be displayed at same time (4 palettes each for sprites
  and backgrounds, each palette with 16 entries of 555 RGB)

#### Sprite system:

- Sprite: 8x8 -> 64x64 pixels, affine transformations: Scale, Rotate, Skew
- Draw order sprites can be drawn above or below backgrounds

#### OAM Layout:

| Field         | Bits     | Description                                                |
| ------------- | -------- | ---------------------------------------------------------- |
| X Position    | 9 bits   | 0-511 horizontal; allows off-screen positioning            |
| Y Position    | 9 bits   | 0-511 vertical                                             |
| Tile Index    | 10 bits  | Index into the tile graphics in VRAM (supports 1024 tiles) |
| Width/Height  | 3+3 bits | Sprite size in tiles (1-8 tiles per axis)                  |
| Palette       | 2 bits   | Selects one of the 4 palettes stored in VRAM               |
| Flip H/V      | 1+1 bits | Horizontal/Vertical mirroring                              |
| Affine enable | 1 bit    | Sprite uses affine transform                               |
| Affine index  | 6 bits   | Index into Affine Matrix Table (supports 32 entries)       |
| Priority      | 2 bits   | Rendering order relative to the background                 |
| Reserved      | 2 bits   | Reserved for future use                                    |

> Size per OAM: 48bits (6B)

#### Background system:

- Up to 4 background layers.
- 40x30 tiles can be displayed on screen

| Mode | Layer   |   Palette    | Size      | Capabilities                     |
| :--: | ------- | :----------: | --------- | -------------------------------- |
| 0b00 | 4 Tiled | `64; 4 x 16` | 1024x1024 | All layers are static            |
| 0b01 | 2 Tiled | `64; 4 x 16` | 1024x1024 | Layers can be affine transformed |
| 0b10 | 1 Tiled |    `256`     | 320x240   | Double buffered                  |

- Layer control layout

| Field    |  Bits   | Description                 |
| -------- | :-----: | --------------------------- |
| Enable   |  1 bit  | Enable - 1=on, 0=off        |
| Priority | 2 bits  | `00`: Highest, `11`: Lowest |
| Reserved | 13 bits | Unused                      |

##### Background OAM:

| Field      | Bits    | Description                                                |
| ---------- | ------- | ---------------------------------------------------------- |
| Tile Index | 10 bits | Index into the tile graphics in VRAM (supports 2048 tiles) |
| Palette    | 2 bits  | Selects one of the 4 palettes stored in VRAM               |
| Flip H/V   | 2 bits  | Horizontal/Vertical Mirror                                 |
| Reserved   | 2 bits  | Reserved for future use                                    |

> Size per OAM: 16bits (2B)

#### VRAM Layout:

- Tile: 8x8 pixels x 4bpp = 32B

| Region          |  Size   | Notes                                   |
| --------------- | :-----: | --------------------------------------- |
| Sprite Palette  |  128B   | 4 Palettes x 16 555RGB colors           |
| Sprite Tiles    |  32KB   | 1024 Tile entries, 4bpp                 |
| Sprite OAM      |  552B   | 92 sprites x 6B                         |
| Affine Matrices |  512B   | 64 matrizes x 8B = 512B                 |
| Background Data | ~94.8KB | Reserved to be used by background modes |

> Used: 33,960B = ~33.164KB

##### Background Mode 0b00:

| Region             | Size | Notes                         |
| ------------------ | :--: | ----------------------------- |
| Background Palette | 128B | 4 Palettes x 16 555RGB colors |
| Layer 0 Data       | 2KB  | 32x32 OAM Data                |
| Layer 1 Data       | 2KB  | 32x32 OAM Data                |
| Layer 2 Data       | 2KB  | 32x32 OAM Data                |
| Layer 3 Data       | 2KB  | 32x32 OAM Data                |

> Used:

##### Background Mode 0b01:

| Region             | Size | Notes                         |
| ------------------ | :--: | ----------------------------- |
| Background Palette | 128B | 4 Palettes x 16 555RGB colors |
| Layer 0 Data       | 2KB  | 32x32 OAM Data                |
| Layer 1 Data       | 2KB  | 32x32 OAM Data                |
| Layer 0 Transform  |  8B  | Affine Matrix                 |
| Layer 1 Transform  |  8B  | Affine Matrix                 |

##### Background Mode 0b10:

| Region          |  Size   | Notes                       |
| --------------- | :-----: | --------------------------- |
| Bitmap Palette  |  512B   | 256 entries of 555RGB color |
| Bitmap Buffer 0 | 37.5KB  | 320x240, 4bpp               |
| Bitmap Buffer 1 | 37.5KB  | 320x240, 4bpp               |
| Unused          | ~19.3KB | Free/Unused memory          |

> Used: 77,312B (75.5KB)

> Total Used: 33,960B + 77,312B = 111,272B (~108.7KB)

#### Affined Matrix Table:

- Maximum of 32 unique entries
- 2x2 matrix per affine-enable sprite
- Uses 16-bit fixed-point (8.8) for each value
- Size per matrix: 64 bits = 8 bytes

| Field | Notes                         |
| :---: | ----------------------------- |
|   a   | Horizontal scale / cos(theta) |
|   b   | Horizontal skew / -sin(theta) |
|   c   | Vertical scale / sin(theta)   |
|   d   | Vertical skew / cos(theta)    |

$$

	\begin{bmatrix}
		X\tiny{screen} \\
		Y\tiny{screen}
	\end{bmatrix}
	=
	\begin{bmatrix}
		a & b \\
		c & d
	\end{bmatrix}
	\begin{bmatrix}
		x \\
		y
	\end{bmatrix}
	+
	\begin{bmatrix}
		X_0 \\
		Y_0
	\end{bmatrix}
$$

- (a, b, c, d) -> Affine Matrix
- (x, y) -> Sprite-local pixel
- (X0, Y0) -> Sprite's position

---

### Audio: codename - Cibo

- Output: 3.5mm stereo jack + 2 RCA stereo
- APU: Z80 at ~4MHz
- PSG(YM2149): 3 square wave + 1 noise channels
- PCM: 2 sample channels; Sample rate 8-bits

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
	(aCube) - AUDIO: Design seems pretty complex.
	(aCube) - AUDIO: Improve audio capabilities.

TODO:
	Improve video capabilities and learn more about what can be executed by the PPU.
-->
