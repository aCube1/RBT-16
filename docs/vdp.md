# Video: codename - Killy

- Output: VGA-compatible
- Chip: FPGA
- Resolution: 640x480@60Hz
- VRAM: Dedicated 128KB. (Not accessible directly by the main CPU)

---

## Colors and Palettes

- 8 palettes of 16 colors
- 12-bit RGB colors; 4096 possible combinations
- Color `#0000` is not rendered; Transparent color

---

## Sprite system

- Size: 8x8 up to 64x64 pixels
- Affine fransform: Scale, Rotate, Skew
- Up to 96 sprites on screen
- Sprite priority: Can be draw above or below backgrounds

### Sprite Attribute Object layout

```
Word 0:
 F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
 V  .  v  h  W  W  x  x  x  x  x  x  x  x  x  x

 x - X position (0-1023)
 W - sprite's width (8-64)
 h - flip horizontal
 v - flip vertical
 V - visible

Word 1:
 F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
 .  .  .  .  H  H  y  y  y  y  y  y  y  y  y  y

 y - Y position (0-1023)
 H - sprite's height (8-64)

Word 2:
 F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
 P  P  p  p  p  .  t  t  t  t  t  t  t  t  t  t

 t - tile index (0-1023)
 p - palette (0-7)
 P - priority/z-index; 00: Highest, 11: Lowest

Word 3:
 F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
 a  .  .  .  .  .  .  .  .  .  .  A  A  A  A  A

 A - affine matrix index
 a - affine enabled
```

| Field         |   Bits   | Description                                      |
| ------------- | :------: | ------------------------------------------------ |
| X Position    | 10 bits  | 0-1023 horizontal; allows off-screen positioning |
| Y Position    | 10 bits  | 0-1023 vertical                                  |
| Tile Index    | 10 bits  | Index of the first tile; Up to 1024 tiles        |
| Palete Index  |  3 bits  | Selects one of 8 palettes in VRAM                |
| Size          | 2+2 bits | Selects sprite's width/height; HHxWW             |
| Flip H/V      | 1+1 bits | On bit set, flips sprite horizontally/vertically |
| Priority      |  2 bits  | Sprite Z-index relative to background layers     |
| Visible       |  1 bit   | If set, enable sprite visibility                 |
| Affine Index  |  5 bits  | Index of the affine matrix used                  |
| Affine Enable |  1 bit   | If set, enable sprite to be affine transformed   |

> OAM size: 4 words -> 8 bytes

> X/Y position wrap around the screen. So, setting the X position to 640
> actually represents the position 0 on screen

> Affine transformation is applied at the center of the sprite

> Sprites with the same priority are ordered by first sprite in OAM
> appearing in the front. Priority order relative to the background:
>
> ```
> | Front |
>  Sprite -> Priority 0
>   BG0
>  Sprite -> Priority 1
>   BG1
>  Sprite -> Priority 2
>   BG2
>  Sprite -> Priority 3
>   BG3
>  Backdrop
> | Back |
> ```

---

## Background system

- 4 Layers: can be static or affine transformed
- 3 Modes: Each mode has different capabilities
- Tiled modes:
    - Can be scrolled
    - Are formed by 128x128 tiles grouped by metatiles
    - Each entry is a 8-bit index of the Metatile

| Mode | Layers   |    Palette    |  Virtual Size   | Capabilities             |
| :--: | -------- | :-----------: | :-------------: | ------------------------ |
|  00  | 4 Tiled  | `128; 8 x 16` |   1024x1024px   | 4 static                 |
|  01  | 4 Tiled  | `128; 8 x 16` |   1024x1024px   | 2 static + 2 affine      |
|  10  | 1 Bitmap |     `256`     | Up to 640x400px | 2/4/8bpp; not scrollable |

> Mode 11 is reserved: Video Display must turn off if enabled

> Affine transformation is applied on the top-left corner

### Metatile

- Can fit up to 16x16 TAOs(Tile Attribute Objects)
- Maximum of unique 256 entries

#### Tile Attribute Object layout

```
Word 0:
 F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
 v  h  p  p  p  .  t  t  t  t  t  t  t  t  t  t

 t - tile index(0-1023)
 p - palette (0-7)
 h - flip horizontal
 v - flip vertical
```

| Field         |   Bits   | Description                                    |
| ------------- | :------: | ---------------------------------------------- |
| Tile Index    | 10 bits  | Index of the tile; Up to 1024 tiles            |
| Palette Index |  3 bits  | Selects on of 8 palettes in VRAM               |
| Flip H/V      | 1+1 bits | On bit set, flips tile horizontally/vertically |

> Tile attribute object size: 1 word -> 2 bytes

---

## Affine transform system

- Signed 16-bit fixed-point (8.8 format)
- Maximum of 32 unique entries
- Size per matrix: 16-bits x 4 -> 64-bits = 8 bytes

| Field | Notes                |
| :---: | -------------------- |
|   a   | H scale / cos(theta) |
|   b   | H skew / -sin(theta) |
|   c   | V scale / sin(theta) |
|   d   | V skew / cos(theta)  |

$$
\begin{bmatrix} X_{screen} \\ Y_{screen} \end{bmatrix} =
\begin{bmatrix} a & b \\ c & d \end{bmatrix}
\begin{bmatrix} x \\ y \end{bmatrix} -
\begin{bmatrix} Ox \\ Oy \end{bmatrix}
$$

$$
\begin{pmatrix} x & y \end{pmatrix} \rightarrow \text{Pixel local position} \\
\begin{pmatrix} Ox & Oy \end{pmatrix}\rightarrow \text{Object's origin} \\
$$

---
