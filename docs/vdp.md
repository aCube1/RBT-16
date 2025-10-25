# Video: codename - Killy

- Output: VGA-compatible
- Chip: FPGA
- Resolution: 640x480@60Hz
- VRAM: Dedicated 128KB. (Not accessible directly by the main CPU)
- Interrupts: H-Blank and V-Blank, with line counting
- Blitter: Fast memory operations and FX drawing.
    - Copy/Move chunks of data from RAM->VRAM or VRAM->VRAM
    - Primitive drawing: Lines, Triangles, Quads and Polygons
    - Polygons can have flat color or a texture

---

## Colors and Palettes

- 8 palettes of 16 colors
- 12-bit RGB colors; 4096 possible combinations
- Color `#0000` is not rendered; Transparent color

---

## Tiles

- Are stored in 4bpp, with the maximum size of 8x8.
- They can be combined into bigger ones either with sprites or metatiles.
- Sprites and Tilemaps have individual Tile base registers

> Tile size: (8 \* 8) / 2 -> 32B

---

## Sprite system

- Size: 8x8 up to 64x64 pixels
- Affine fransform: Scale, Rotate, Skew
- Up to 96 sprites on screen
- Sprite priority: Can be draw above or below backgrounds

### Sprite Attribute Object layout

```asm
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
    .  .  .  .  H  H  y  y  y  y  y  y  y  y  y  y

    [9:0]   y - Y position (0-1023)
    [11:10] H - sprite's height (8-64)

Word 2:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    P  P  p  p  p  .  t  t  t  t  t  t  t  t  t  t

    [9:0]   t - tile index (0-1023)
    [13:11] p - palette (0-7)
    [15:14] P - priority/z-index (00: Highest, 11: Lowest)

Word 3:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  .  .  .  .  .  .  .  .  .  .  A  A  A  A  A

   [4:0]   A - affine matrix index
   [15:15] a - affine enabled
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
    - Can be scrolled
    - Are formed by 128x128 tiles grouped by metatiles
    - Each entry is a 8-bit index of the Metatile

| Mode | Layers   |    Palette    |  Virtual Size   | Capabilities             |
| :--: | -------- | :-----------: | :-------------: | ------------------------ |
|  00  | 4 Tiled  | `128; 8 x 16` |   1024x1024px   | 4 static                 |
|  01  | 4 Tiled  | `128; 8 x 16` |   1024x1024px   | 2 static + 2 affine      |
|  10  | 1 Bitmap |     `256`     | Up to 640x400px | 2/4/8bpp; not scrollable |
|  11  | None     |     `xxx`     |    Disabled     | Video blank              |

> Mode 11 is reserved: Video Display is turned off if enabled

> Affine transformation is applied on the top-left corner

### Metatile

- Can fit up to 16x16 TAOs(Tile Attribute Objects)
- Maximum of unique 256 entries

#### Tile Attribute Object layout

```asm
Word 0:
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    v  h  p  p  p  .  t  t  t  t  t  t  t  t  t  t

    [9:0]   t - tile index (0-1023)
    [13:11] p - palette (0-7)
    [14:14] h - flip horizontal
    [15:15] v - flip vertical
```

| Field         |   Bits   | Description                                    |
| ------------- | :------: | ---------------------------------------------- |
| Tile Index    | 10 bits  | Index of the tile; Up to 1024 tiles            |
| Palette Index |  3 bits  | Selects on of 8 palettes in VRAM               |
| Flip H/V      | 1+1 bits | On bit set, flips tile horizontally/vertically |

> Tile attribute object size: 1 word -> 2 bytes

### Bitmap Mode

- 3 possible canvas resolutions:
    1. 320x200 2/4/8bpp
    2. 640x200 2/4bpp
    3. 640x400 2bpp

- If enabled, scrolling registers values are ignored
- Color mapping in bitmap modes:
    - 8bpp (320x200x8):
        - Each pixel = 8-bit value (0-255)
        - Direct index into palette RAM at BG_PALETTE_BASE
        - Can access all 256 colors from all 8 palettes
    - 4bpp (320x200x4, 640x200x4):
        - Each pixel = 4-bit value (0-15)
        - Uses first 16 colors from palette RAM at BG_PALETTE_BASE
    - 2bpp (320x200x2, 640x200x2, 640x400x2):
        - Each pixel = 2-bit value (0-3)
        - Uses first 4 colors from palette RAM at BG_PALETTE_BASE

---

## Affine transform system

- Signed 16-bit fixed-point (8.8 format)
- Maximum of 32 unique entries
- Size per matrix: 16-bits x 4 -> 64-bits = 8 bytes

![](https://latex.codecogs.com/svg.image?%7B%5Ccolor%7BGray%7D%5Cbegin%7Bbmatrix%7DX_%7Bscreen%7D%5C%5CY_%7Bscreen%7D%5C%5C%5Cend%7Bbmatrix%7D=%5Cbegin%7Bbmatrix%7Da&b%5C%5Cc&d%5C%5C%5Cend%7Bbmatrix%7D%5Cbegin%7Bbmatrix%7Dx%5C%5Cy%5C%5C%5Cend%7Bbmatrix%7D-%5Cbegin%7Bbmatrix%7DO_X%5C%5CO_Y%5C%5C%5Cend%7Bbmatrix%7D%7D "Affine Formula")

| Field | Notes                |
| :---: | -------------------- |
|   a   | H scale / cos(theta) |
|   b   | H skew / -sin(theta) |
|   c   | V scale / sin(theta) |
|   d   | V skew / cos(theta)  |

> $\left[x   \; y   \right] \rightarrow \text{Pixel local position}$ <br>
> $\left[O_X \; O_Y \right] \rightarrow \text{Object's origin position}$ <br>

---

## VDP MMIO Registers

> VDP_ADDR: 0xf8:0000

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
    .  .  .  .  v  h  l  L  L  L  L  L  L  L  L  L

    [8:0]   L - CUR_LINE -> Current scanline (0-479 Visible, 0-511 Total)
    [9:9]   l - LINE_MATCH -> Line-compare match
    [10:10] h - HBLANK -> H-Blank active
    [11:11] v - VBLANK -> V-Blank active

VDP_ADDR + 0x0004 -> VDP_SCANLINE_CMP | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  L  L  L  L  L  L  L  L  L

    [8:0] L - LINE - Line-compare value (0-511)

; Triggers interrupt when current scanline matches

VDP_ADDR + 0x0006 -> VDP_BACKDROP | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  r  r  r  r  g  g  g  g  b  b  b  b

    [3:0]  b - BLUE -> Blue component (0-15)
    [7:4]  g - GREEN -> Green component (0-15)
    [11:8] r - RED -> Reg component (0-15)

; Backdrop color displayed where no layers are visible

;=============
; VRAM access
;=============
VDP_ADDR + 0x0010 -> VDP_VRAM_ADDR_L | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - ADDR_LOW -> VRAM address low word (VRAM_ADDR[15:0])

VDP_ADDR + 0x0012 -> VDP_VRAM_ADDR_H | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  s  D  i  i  i  i  .  .  .  .  .  .  .  a

    [0:0]   a - ADDR_HI -> VRAM address high byte (VRAM_ADDR[16])
    [11:8]  i - INC_RATE -> Auto increment (0-15, see table below)
    [12:12] D - DECR -> 1: decrement, 0: increment
    [13:13] s - SIZE -> 1: word, 0: byte

; auto-increment
; 0 -> 0     8 -> 128
; 1 -> 1     9 -> 256
; 2 -> 2     10 -> 512
; 3 -> 4     11 -> 1024
; 4 -> 8     12 -> 40
; 5 -> 16    13 -> 80
; 6 -> 32    14 -> 200
; 7 -> 64    15 -> 320

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
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - TILE_ADDR -> Tileset base address (32-byte aligned)

; VRAM_ADDR[16:5] = TILE_BASE

VDP_ADDR + 0x0024 -> SPR_PALETTE_BASE | R/W
VDP_ADDR + 0x0026 -> BG_PALETTE_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - PAL_ADDR -> Palette base address (256-byte aligned)

; VRAM_ADDR[16:8] = PAL_ADDR

VDP_ADDR + 0x028 -> SPR_OAM_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - OAM_ADDR -> Sprite's OAM base address (32-byte aligned)

; VRAM_ADDR[16:5] = OAM_ADDR

VDP_ADDR + 0x02a -> AFFINE_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - AFFINE_ADDR -> Affine matrices base address (64-byte aligned)

; VRAM_ADDR[16:6] = AFFINE_BASE

VDP_ADDR + 0x02c -> META_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - METATILE_ADDR -> Metatiles base address (128-byte aligned)

; VRAM_ADDR[16:7] = METATILE_BASE

;=====================================
; Background layer control (4 layers)
;=====================================
VDP_ADDR + 0x0030 -> BG0_CTRL | R/W
VDP_ADDR + 0x0032 -> BG1_CTRL | R/W
VDP_ADDR + 0x0034 -> BG2_CTRL | R/W
VDP_ADDR + 0x0036 -> BG3_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    E  S  S  M  M  M  M  M  M  M  M  M  M  M  M  M

    [12:0]  M - MAP_BASE -> Metatile map base address (256-byte aligned)
    [14:13] S - METASIZE -> Metatile size (00: 2x2, 01: 4x4, 10: 8x8)
    [15:15] E - ENABLE -> Layer enable

; VRAM_ADDR[16:8] = MAP_BASE

VDP_ADDR + 0x0040 -> BG0_SCROLL_X | R/W
VDP_ADDR + 0x0042 -> BG0_SCROLL_Y | R/W
VDP_ADDR + 0x0044 -> BG1_SCROLL_X | R/W
VDP_ADDR + 0x0046 -> BG1_SCROLL_Y | R/W
VDP_ADDR + 0x0048 -> BG2_SCROLL_X | R/W
VDP_ADDR + 0x004a -> BG2_SCROLL_Y | R/W
VDP_ADDR + 0x004c -> BG3_SCROLL_X | R/W
VDP_ADDR + 0x004e -> BG3_SCROLL_Y | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  s  s  s  s  s  s  s  s  s  s

    [9:0] s - SCROLL -> Scroll position (0-1023)

;==========================
; Affine transform control
;==========================
VDP_ADDR + 0x0050 -> BG0_AFFINE | R/W
VDP_ADDR + 0x0052 -> BG1_AFFINE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  .  .  .  .  .  .  .  .  .  .  A  A  A  A  A

    [4:0]   A - AFFINE_IDX -> Index of the affine matrix (0-31)
    [15:15] a - AFFINE_E -> Affine enable

;=====================
; Bitmap mode control
;=====================
VDP_ADDR + 0x0060 -> BMP_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  a  a  a  .  .  .  .  .  M  M  M

    [2:0]  M - BMP_MODE -> Bitmap Mode (0-7, see table below)
    [10:8] a - BMP_ADDR -> Bitmap base address (see alignment table below)

; Valid bitmap modes
; 000 -> 320x200x8    100 -> 640x200x2
; 001 -> 320x200x4    101 -> 640x400x2
; 010 -> 320x200x2    110 -> Invalid
; 011 -> 640x200x4    111 -> Invalid

; Alignment
; 8bpp modes: 64KB alignment (VRAM_ADDR[16:16] = BMP_ADDR[0:0])
; 4bpp modes: 32KB alignment (VRAM_ADDR[16:15] = BMP_ADDR[1:0])
; 2bpp modes: 16KB alignment (VRAM_ADDR[16:14] = BMP_ADDR[2:0])

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
    .  .  .  .  .  .  .  .  d  d  d  d  d  d  d  d

    [7:0] d - BLT_DEST_HI -> Destination address high byte

VDP_ADDR + 0x0088 -> BLT_SIZE | W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    h  h  h  h  h  h  h  h  w  w  w  w  w  w  w  w

    [7:0]  w - WIDTH -> Blit width in bytes (1-256)
    [15:8] h - HEIGHT -> Blit height in rows (1-256)

VDP_ADDR + 0x008a -> BLT_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  S  A  .  T  T  .  .  .  .  O  O  O  O

    [3:0]   O - OP -> Operation (0000: Copy, 0001: Fill, 0010: Pattern, 0011: Clear)
    [9:8]   T - TYPE -> Transfer type (00: VRAM->VRAM, 01: RAM->VRAM, 10: RAM->Audio)
    [11:11] A - ABORT -> Abort current blit (write-only)
    [12:12] S - START -> Start blit operation (write-only)

VDP_ADDR + 0x008c -> BLT_STATUS | R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    D  B  E  I  .  .  .  .  .  .  .  .  .  .  .  .

    [12:12] I - IRQ -> Blitter IRQ pending
    [13:13] E - ERR -> Illegal parameter
    [14:14] B - BUSY -> Blitter operation running
    [15:15] D - DONE -> Completed sucessfully

VDP_ADDR + 0x008e -> BLT_PATTERN | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    p  p  p  p  p  p  p  p  p  p  p  p  p  p  p  p

    [15:0] p - PATTERN -> 16-bit pattern data repeated horizontally

;====================
; Blitter FX drawing
;====================
VDP_ADDR + 0x0090 -> FX_CTRL | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  S  T  V  V  V  V  .  .  .  .  O  O  O  O

    [3:0]   O - OP -> Polygon operation (0000: Line, 0001: Triangle,
0010: Quad, 0011: Polygon)
    [11:8]  V - VERT_COUNT -> Number of vertices (only for polygon mode, 3-18)
    [12:12] T - TEXTURED -> 1: Textured, 0: Flat Color
    [13:13] S - START -> Start polygon operation (write-only)

VDP_ADDR + 0x0092 -> FX_COLOR | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    c  c  c  c  c  c  c  c  c  c  c  c  c  c  c  c

    [15:0] c - COLOR_IDX -> Color index (2/4/8bpp)

VDP_ADDR + 0x0094 -> FX_VERTEX_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - VERTEX_ADDR -> Vertex data base address (64-byte aligned)

; VRAM_ADDR[16:6] = VERTEX_ADDR

VDP_ADDR + 0x0096 -> FX_TEX_BASE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    a  a  a  a  a  a  a  a  a  a  a  a  a  a  a  a

    [15:0] a - TEX_ADDR -> Texture base address (32-byte aligned)

; VRAM_ADDR[16:5] = TEX_ADDR

VDP_ADDR + 0x0098 -> FX_TEX_SIZE | R/W
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    .  .  .  .  .  .  .  .  .  .  S  S  S  S  S  S

    [5:0] S - TEX_SIZE -> Texture size (8-256, see table below)

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
VDP_ADDR + 0x00f2 -> VDP_ID1 | R ; 0x42 ('B')
VDP_ADDR + 0x00f4 -> VDP_ID2 | R ; 0x45 ('E')
VDP_ADDR + 0x00f6 -> VDP_ID3 | R ; 0x0a ('\n')
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    i  i  i  i  i  i  i  i  i  i  i  i  i  i  i  i

    [63:0] i - ID -> Ascii text "GBE\n"


VDP_ADDR + 0x00f8 -> VDP_REV0 | R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    N  N  N  N  N  N  N  N  m  m  m  m  m  m  m  m

    [7:0]  m - VER_MAJOR -> Major revision
    [15:8] N - VER_MINOR -> Minor revision

VDP_ADDR + 0x00fc -> VDP_BUILD_L | R
VDP_ADDR + 0x00fe -> VDP_BUILD_H | R
    F  E  D  C  B  A  9  8  7  6  5  4  3  2  1  0
    B  B  B  B  B  B  B  B  B  B  B  B  B  B  B  B

    [31:0] B - Build hash identifier
```

<!--
TODO:
	Improve video capabilities and learn more about what can be executed by the VDP.
-->
