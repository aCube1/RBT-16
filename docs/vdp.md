# Video: codename - Killy

- Output: VGA-compatible
- Chip: FPGA
- Resolution: 640x480@60Hz
- VRAM: Dedicated 128KB. (Not accessible directly by the main CPU)
- Interrupts: H-Blank and V-Blank, with line counting
- Blitter: Fast memory operations and FX drawing.
    - Copy/Move chunks of data from: RAM->VRAM, VRAM->VRAM
    - Primitive drawing: Triangles, Quads and Polygons
    - Polygons can have flat color or a texture

---

## Colors and Palettes

- 16 palettes of 16 colors
- Background, Sprites and Bitmap all share the same palette base
- 12-bit RGB colors; 4096 possible combinations
- Color `#0000` is not rendered; Transparent color

```asm
; Palette Entry Format
Word 0:
	F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
	.  .  .  .  R  R  R  R  G  G  G  G  B  B  B  B

	[3:0]  B - blue component
	[7:4]  G - green component
	[11:8] R - red component
```

---

## Tiles

- Are stored in chunky 4bpp, with the maximum size of 8x8.
- Tiles can be merged to create large sprites.
- Sprites and Tilemaps have individual Tile base registers

> Tile size: (8 \* 8) / 2 -> 32B

---

## Sprite system

- Size: 8x8 up to 64x64 pixels
- Affine transform: Scale, Rotate, Skew
- Only have 96 hardware sprites
- Sprite priority: Can be draw above or below backgrounds

```asm
; Sprite Attribute Object layout
Word 0:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    V  .  v  h  W  W  x  x  x  x  x  x  x  x  x  x

    [9:0]   x - X position (0-1023)
    [11:10] W - sprite's width (8-64)
    [12:12] h - flip horizontal
    [13:13] v - flip vertical
    [15:15] V - visible

Word 1:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  H  H  .  y  y  y  y  y  y  y  y  y

    [9:0]   y - Y position (0-511)
    [11:10] H - sprite's height (8-64)

Word 2:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    P  P  p  p  p  p  t  t  t  t  t  t  t  t  t  t

    [9:0]   t - tile index (0-1023)
    [13:10] p - palette (0-15)
    [15:14] P - priority/z-index (00: Highest, 11: Lowest)

Word 3:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  .  .  .  .  .  .  .  .  .  .  A  A  A  A  A

   [4:0]   A - affine matrix index
   [15:15] a - affine enable
```

| Field         |   Bits   | Description                                      |
| ------------- | :------: | ------------------------------------------------ |
| X Position    | 10 bits  | 0-1023 horizontal; allows off-screen positioning |
| Y Position    |  9 bits  | 0-511 vertical; allows off-screen positioning    |
| Tile Index    | 10 bits  | Index of the first tile; Up to 1024 tiles        |
| Palette Index |  4 bits  | Selects one of 16 palettes in VRAM               |
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

> Sprite size table:

| value | size |
| :---: | :--: |
|  00   |  8   |
|  01   |  16  |
|  10   |  32  |
|  11   |  64  |

> Sprites with the same priority are ordered by first sprite in OAM
> appearing in the front. Priority order relative to the background:
>
> ```asm
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
    - Each layer is formed by Tile Attribute Objects
        - Can be scrolled

| Mode | Layers   |   Palette    |  Virtual Size   | Capabilities             |
| :--: | -------- | :----------: | :-------------: | ------------------------ |
|  00  | 4 Tiled  | `256; 16x16` |   1024x512px    | 4 static                 |
|  01  | 4 Tiled  | `256; 16x16` |   1024x512px    | 2 static + 2 affine      |
|  10  | 1 Bitmap |    `256`     | Up to 640x400px | 2/4/8bpp; not scrollable |
|  11  | None     |    `xxx`     |    Disabled     | Video blank              |

> Mode 11 is reserved: Video Display is turned off if enabled

> Mode 00: Affine control registers are ignored

> Affine transformation is applied on the top-left corner

### Tile Attribute Object

```asm
Word 0:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    v  h  p  p  p  p  t  t  t  t  t  t  t  t  t  t

    [9:0]   t - tile index (0-1023)
    [13:10] p - palette (0-15)
    [14:14] h - flip horizontal
    [15:15] v - flip vertical
```

| Field         |   Bits   | Description                                    |
| ------------- | :------: | ---------------------------------------------- |
| Tile Index    | 10 bits  | Index of the tile; Up to 1024 tiles            |
| Palette Index |  4 bits  | Selects one of 16 palettes in VRAM             |
| Flip H/V      | 1+1 bits | On bit set, flips tile horizontally/vertically |

> Tile Attribute Object size: 1 word -> 2 bytes

### Bitmap Mode

- 3 possible canvas resolutions:
    1. 320x200 2/4/8bpp
    2. 640x200 2/4bpp
    3. 640x400 2bpp

- If enabled, scrolling registers values are ignored
- Sprites cannot be used while bitmap is enabled. VDP skips sprite processing
- Color mapping in bitmap modes:
    - 8bpp (320x200x8):
        - Each pixel = 8-bit value (0-255)
        - Bits `[7:4]` = palette index (0-15)
        - Bits `[3:0]` = color index within palette (0-15)
        - Direct index into palette RAM at PALETTE_BASE
    - 4bpp (320x200x4, 640x200x4):
        - Each pixel = 4-bit value (0-15)
        - Uses palette 0 only (first 16 colors at PALETTE_BASE)
    - 2bpp (320x200x2, 640x200x2, 640x400x2):
        - Each pixel = 2-bit value (0-3)
        - Uses first 4 colors from palette 0 (PALETTE_BASE + 0x00..0x07)

---

## Affine transform system

- Signed 16-bit fixed-point (8.8 format)
- Maximum of 32 unique entries
- Size per matrix: 16-bits x 4 -> 64-bits = 8 bytes

![](https://latex.codecogs.com/svg.image?%7B%5Ccolor%7BGray%7D%5Cbegin%7Bbmatrix%7DX_%7Bscreen%7D%5C%5CY_%7Bscreen%7D%5C%5C%5Cend%7Bbmatrix%7D%3D%5Cbegin%7Bbmatrix%7Da%26b%5C%5Cc%26d%5C%5C%5Cend%7Bbmatrix%7D%5Cbegin%7Bbmatrix%7Dx%20-%20O_X%5C%5Cy%20-O_Y%5C%5C%5Cend%7Bbmatrix%7D%7D%0A "Affine Formula")

| Field | Notes                |
| :---: | -------------------- |
|   a   | H scale / cos(theta) |
|   b   | H skew / -sin(theta) |
|   c   | V skew / sin(theta)  |
|   d   | V scale / cos(theta) |

$\left[x   \; y   \right] \rightarrow \text{Pixel local position}$

$\left[O_X \; O_Y \right] \rightarrow \text{Object's origin position}$

---

## VDP MMIO Registers

> VDP_ADDR: 0xf8'0000

```asm
;=========================
; Global control & status
;=========================
VDP_ADDR + 0x0000 -> VDP_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  V  H  B  I  .  .  .  .  .  .  M  M

    [1:0]   M - MODE -> Video Mode (00=Tiled, 01=Tiled+Affine, 10=Bitmap, 11=Blank)
    [8:8]   I - LINE_IRQ_E -> Line-compare interrupt enable
    [9:9]   B - BLT_IRQ_E -> Blitter interrupt enable
    [10:10] H - HB_IRQ_E -> H-Blank interrupt enable
    [11:11] V - VB_IRQ_E -> V-Blank interrupt enable

VDP_ADDR + 0x0002 -> VDP_STATUS | R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  v  h  .  L  L  L  L  L  L  L  L  L

    [8:0]   L - CUR_LINE -> Current scanline (0-479 Visible, 0-511 Total)
    [10:10] h - HBLANK -> H-Blank active
    [11:11] v - VBLANK -> V-Blank active

; Current scanline stops at 0x1ff through lines 512-524

VDP_ADDR + 0x0004 -> VDP_SCANLINE_CMP | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    l  .  .  .  .  .  .  L  L  L  L  L  L  L  L  L

    [8:0]   L - LINE -> Line-compare value (0-511)
	[15:15] l - LINE_MATCH -> Line-compare match

; Triggers an interrupt when the current scanline matches

VDP_ADDR + 0x0006 -> VDP_BACKDROP | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  r  r  r  r  g  g  g  g  b  b  b  b

    [3:0]  b - BLUE -> Blue component (0-15)
    [7:4]  g - GREEN -> Green component (0-15)
    [11:8] r - RED -> Red component (0-15)

; Backdrop color is displayed where no layers are visible


;=============
; VRAM access
;=============
VDP_ADDR + 0x0010 -> VDP_VRAM_ADDR_L | W/R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - ADDR_LOW -> VRAM address low word (VRAM_ADDR[15:0])

VDP_ADDR + 0x0012 -> VDP_VRAM_ADDR_H | W/R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    D  s  .  .  i  i  i  i  .  .  .  .  .  .  .  a

	[0:0]   a - ADDR_HIGH -> VRAM address high bit (VRAM_ADDR[16:16])
    [11:8]  i - INC_RATE -> Auto increment (0-15, see table below)
    [14:14] s - SIZE -> 1: word, 0: byte
	[15:15] D - DECR -> 1: decrement, 0: increment

; auto-increment table:
; value | increment | use case
; ----- | --------- | --------
;   0   |     0     | No auto-increment
;   1   |     1     | Sequential byte access
;   2   |     2     | Sequential word access
;   3   |     4     | Skip 4 bytes / 2 words
;   4   |     8     | Sprite OAM / affine matrix
;   5   |    16     | Skip 16 bytes
;   6   |    32     | Tile row (8x8 @ 4bpp = 32 bytes)
;   7   |    64     | Two tile rows / Two palettes
;   8   |    80     | Bitmap scanline (320x200x2bpp)
;   9   |   128     | Skip 128 bytes
;  10   |   160     | Bitmap scanline (320x200x4bpp, 640x200x2bpp, 640x400x2bpp)
;  11   |   256     | Palette map
;  12   |   320     | Bitmap scanline (320x200x8bpp, 640x200x4bpp)
;  13   |   512     | 512-byte boundary
;  14   |  1024     | 1KB boundary
;  15   |  2048     | 2KB boundary

; Note: WORD size mode is little-endian

VDP_ADDR + 0x0014 -> VDP_DATA | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    D  D  D  D  D  D  D  D  D  D  D  D  D  D  D  D

    [15:0] D - DATA -> VRAM data


;================
; Memory mapping
;================
VDP_ADDR + 0x0020 -> SPR_TILE_BASE | R/W
VDP_ADDR + 0x0022 -> BG_TILE_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  .  .  a  a  a  a  a  a

    [5:0] a - TILE_ADDR -> Tileset base address (2KB aligned)

; VRAM_ADDR = TILE_ADDR << 11

VDP_ADDR + 0x0024 -> PALETTE_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
	.  .  .  .  .  .  .  .  a  a  a  a  a  a  a  a

    [7:0] a - PAL_ADDR -> Palette base address (512-byte aligned)

; VRAM_ADDR = PAL_ADDR << 9

VDP_ADDR + 0x0028 -> SPR_OAM_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  a  a  a  a  a  a  a  a

    [7:0] a - OAM_ADDR -> Sprite's OAM base address (512-byte aligned)

; VRAM_ADDR = OAM_ADDR << 9

VDP_ADDR + 0x002a -> AFFINE_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  a  a  a  a  a  a  a  a

    [7:0] a - AFFINE_ADDR -> Affine matrices base address (512-byte aligned)

; VRAM_ADDR = AFFINE_BASE << 9


;=====================================
; Background layer control (4 layers)
;=====================================
VDP_ADDR + 0x0030 -> BG0_CTRL | R/W
VDP_ADDR + 0x0032 -> BG1_CTRL | R/W
VDP_ADDR + 0x0034 -> BG2_CTRL | R/W
VDP_ADDR + 0x0036 -> BG3_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    E  .  .  .  .  .  .  .  .  .  M  M  M  M  M  M

    [5:0]   M - MAP_ADDR -> Map base address (2KB aligned)
    [15:15] E - ENABLE -> Layer enable

; VRAM_ADDR = MAP_ADDR << 11

VDP_ADDR + 0x0040 -> BG0_SCROLL_X | R/W
VDP_ADDR + 0x0042 -> BG0_SCROLL_Y | R/W
VDP_ADDR + 0x0044 -> BG1_SCROLL_X | R/W
VDP_ADDR + 0x0046 -> BG1_SCROLL_Y | R/W
VDP_ADDR + 0x0048 -> BG2_SCROLL_X | R/W
VDP_ADDR + 0x004a -> BG2_SCROLL_Y | R/W
VDP_ADDR + 0x004c -> BG3_SCROLL_X | R/W
VDP_ADDR + 0x004e -> BG3_SCROLL_Y | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  x  x  x  x  x  x  x  x  x  x
	.  .  .  .  .  .  .  y  y  y  y  y  y  y  y  y

; BG_SCROLL_X
    [9:0] x - SCROLL_X -> Scroll X position (0-1023)
; BG_SCROLL_Y
	[8:0] y - SCROLL_Y -> Scroll Y position (0-511)


;==========================
; Affine transform control
;==========================
VDP_ADDR + 0x0050 -> ABG0_CTRL | R/W
VDP_ADDR + 0x0052 -> ABG1_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  .  .  .  .  .  b  b  .  .  .  A  A  A  A  A

    [4:0]   A - AFFINE_IDX -> Index of the affine matrix (0-31)
	[9:8]   b - BG_SELECT -> Select background (00: BG0, 01: BG1, 10: BG2, 11: BG3)
    [15:15] a - AFFINE_E -> Affine enable

; BG_SELECT selects which background will act as affine

; Note: If same BG is selected in both ABG0_CTRL and ABG1_CTRL
; with both enabled, the background is disabled entirely


;=====================
; Bitmap mode control
;=====================
VDP_ADDR + 0x0060 -> BMP_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  M  M  M  .  .  a  a  a  a  a  a

    [5:0]  a - BMP_ADDR -> Bitmap base address (2KB aligned)
	[10:8] M - BMP_MODE -> Bitmap Mode (0-7, see table below)

; Valid bitmap modes
; 000 -> 320x200x8    100 -> 640x200x2
; 001 -> 320x200x4    101 -> 640x400x2
; 010 -> 320x200x2    110 -> Invalid
; 011 -> 640x200x4    111 -> Invalid

; VRAM_ADDR = BMP_ADDR << 11
; For large modes:
;   - 8bpp: BMP_ADDR must be multiple of 32 (64KB aligned)
;   - 4bpp: BMP_ADDR multiple of 16 (32KB aligned)
;   - 2bpp: BMP_ADDR multiple of 8  (16KB aligned)


;================
; Blitter Engine
;================
VDP_ADDR + 0x0080 -> BLT_SRC_L | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - BLT_SRC_LOW -> Source address low word

VDP_ADDR + 0x0082 -> BLT_SRC_H | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  a  a  a  a  a  a  a  a

    [7:0] a - BLT_SRC_HI -> Source address high byte

VDP_ADDR + 0x0084 -> BLT_DST_L | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    d  d  d  d  d  d  d  d  d  d  d  d  d  d  d  d

    [15:0] d - BLT_DEST_LOW -> Destination address low word

VDP_ADDR + 0x0086 -> BLT_DST_H | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  .  .  .  .  .  .  .  d

    [0:0] d - BLT_DEST_HI -> VRAM destination address high bit

VDP_ADDR + 0x0088 -> BLT_SIZE | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    h  h  h  h  h  h  h  h  w  w  w  w  w  w  w  w

    [7:0]  w - WIDTH -> Blit width in bytes (stored: 0-255, effective: 1-256)
    [15:8] h - HEIGHT -> Blit height in rows (stored: 0-255, effective: 1-256)

; Size is computed as: (W+1) x (H+1)

VDP_ADDR + 0x008a -> BLT_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  S  A  .  .  T  T  .  .  .  .  O  O  O  O

    [3:0]   O - OP -> Operation (0000: Copy, 0001: Fill, 0010: Pattern,
0011: Clear, 0100-1111: undefined)
    [9:8]   T - TYPE -> Transfer type (00: VRAM->VRAM, 01: RAM->VRAM,
10-11: undefined)
    [12:12] A - ABORT -> Abort current blit (write-only)
    [13:13] S - START -> Start blit operation (write-only)

; Note: if transfer type is VRAM->VRAM, only the first 17-bits
; from BLT_SRC address are used: BLT_SRC[16:0], the upper are ignored

VDP_ADDR + 0x008c -> BLT_STATUS | R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    D  B  E  I  .  .  .  .  .  .  .  .  .  .  .  .

    [12:12] I - IRQ -> Blitter IRQ pending
    [13:13] E - ERR -> Illegal parameter
    [14:14] B - BUSY -> Blitter operation running
    [15:15] D - DONE -> Completed successfully

VDP_ADDR + 0x008e -> BLT_PATTERN | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    p  p  p  p  p  p  p  p  p  p  p  p  p  p  p  p

    [15:0] p - PATTERN -> 16-bit pattern data repeated horizontally


;====================
; Blitter FX drawing
;====================
VDP_ADDR + 0x0090 -> FX_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  S  T  .  .  V  V  V  V

    [3:0] V - VERT_COUNT -> Number of vertices (only for polygon mode, 3-18)
    [6:6] T - TEXTURED -> 1: Textured, 0: Flat Color
    [7:7] S - START -> Start polygon operation (write-only)

; Effective vertex count = VERT_COUNT + 3

VDP_ADDR + 0x0092 -> FX_COLOR | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  c  c  c  c  c  c  c  c

    [7:0] c - COLOR_IDX -> Color index (2/4/8bpp)

VDP_ADDR + 0x0094 -> FX_VERTEX_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  .  .  a  a  a  a  a  a

    [5:0] a - VERTEX_ADDR -> Vertex data base address (2KB aligned)

; VRAM_ADDR = VERTEX_ADDR << 11

; Vertices are stored contiguously: 3 words (6 bytes) per vertex, no padding

; Vertex format:
; Word 0:
;   F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
;   .  .  .  .  .  .  x  x  x  x  x  x  x  x  x  x
;
;   [9:0] x -> X position (0-1023)
;
; Word 1:
;   F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
;   .  .  .  .  .  .  .  y  y  y  y  y  y  y  y  y
;
;   [8:0] y -> Y position (0-511)
;
; Word 2:
;   F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
;   v  v  v  v  v  v  v  v  U  U  U  U  U  U  U  U
;
;   [7:0]  U -> X texture position (0-255; effective: U mod TEX_SIZE_X)
;   [15:8] v -> Y texture position (0-255; effective: v mod TEX_SIZE_Y)

; Note: FX VDP isn't aware of screen boundaries, Polygons are still computed,
; even though, no write is made

VDP_ADDR + 0x0096 -> FX_TEX_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  .  .  a  a  a  a  a  a

    [5:0] a - TEX_ADDR -> Texture base address (2KB aligned)

; VRAM_ADDR = TEX_ADDR << 11

VDP_ADDR + 0x0098 -> FX_TEX_SIZE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  .  .  S  S  S  s  s  s

    [2:0] s - TEX_ASPECT -> Texture aspect-ratio (000: Square, 001: Wide, 010: Tall)
    [5:3] S - TEX_SIZE -> Texture size (8-256, see table below)

; Texture sizes
; Square             Wide               Tall
; 000 000: 8x8       001 000: 16x8      010 000: 8x16
; 000 001: 16x16     001 001: 32x8      010 001: 8x32
; 000 010: 32x32     001 010: 32x16     010 010: 16x32
; 000 011: 64x64     001 011: 64x32     010 011: 32x64
; 000 100: 128x128   001 100: 128x64    010 100: 64x128
; 000 101: 256x256   001 101: 256x128   010 101: 128x256
; 000 110: Reserved  001 110: Reserved  010 110: Reserved
; 000 111: Reserved  001 111: Reserved  010 111: Reserved
;
; 011 000-111 111: Reserved


;=========================
; Version and Identifiers
;=========================
VDP_ADDR + 0x00f0 -> VDP_ID0 | R ; 0x47 ('G')
VDP_ADDR + 0x00f1 -> VDP_ID1 | R ; 0x42 ('B')
VDP_ADDR + 0x00f2 -> VDP_ID2 | R ; 0x45 ('E')
VDP_ADDR + 0x00f3 -> VDP_ID3 | R ; 0x0a ('\n')
    7  6  5  4  3  2  1  0
    i  i  i  i  i  i  i  i

    [31:0] i - ID -> Ascii text "GBE\n"

; Combined 32-bit ID across VDP_ID0..VDP_ID3: [31:0]

; GBE stands for: Gravitational Beam Emitter from Blame!

VDP_ADDR + 0x00f4 -> VDP_REV0 | R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    N  N  N  N  N  N  N  N  m  m  m  m  m  m  m  m

    [7:0]  m - VER_MAJOR -> Major revision
    [15:8] N - VER_MINOR -> Minor revision

VDP_ADDR + 0x00f6 -> VDP_BUILD_L | R
VDP_ADDR + 0x00f8 -> VDP_BUILD_H | R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    B  B  B  B  B  B  B  B  B  B  B  B  B  B  B  B

    [31:0] B - BUILD_HASH -> Build hash identifier
```

<!--
TODO:
	Improve video capabilities and learn more about what can be executed by the VDP.
-->
