> This document is a sketch, there's a chance it will not make it into the final revision

# PMMU: codename - Sanakan

- Chip: ASIC or CPLD
- Architecture: Paged Memory
- Virtual Address Space: 24-bits (16MB)
- Physical Address Space: 24-bits (16MB)
- Page Size: 64KB each
- Physical Frames: 256 frames
- Page Table: 256 entries
- TLB: 16 entries, PLRU (Pseudo-LRU)

---

## Address Encoding

```asm
Virtual Address (28-bits)
Word 0:
	F E D C B A 9 8 7 6 5 4 3 2 1 0
	O O O O O O O O O O O O O O O O
Word 1:
	F E D C B A 9 8 7 6 5 4 3 2 1 0
	. . . . . . . . p p p p p p p p

	[15:0]  O -> Offset within page
	[23:16] p -> Virtual page number (VPN)

Physical Address (24-bitss)
Word 0:
	F E D C B A 9 8 7 6 5 4 3 2 1 0
	O O O O O O O O O O O O O O O O
Word 1:
	F E D C B A 9 8 7 6 5 4 3 2 1 0
	. . . . . . . . F F F F F F F F

	[15:0]  O -> Offset within frame
	[23:16] F -> Physical frame number
```

### Page Table

```asm
Word 0:
	F E D C B A 9 8 7 6 5 4 3 2 1 0
	V U W . . . d a F F F F F F F F

	[7:0]   F - Physical frame number
	[8:8]   a - Accessed (set by hardware on read/write)
	[9:9]   d - Dirty (set by hardware on write)
	[13:13] W - Write protect (1: read-only, 0: read/write)
	[14:14] U - User-acessible (1: User+Supervisor, 0: Supervisor)
	[15:15] V - Valid (1: Mapped, 0: Unmapped)
```

> 256 x 16-bits = 512 bytes

## Translation

> `MMU_PTB`: Page Table Base register

1. CPU send Virtual Address
2. TLB lookup (fully associative)
    - On Hit -> Get physical address, checks protection bits
    - On Miss -> Read PTE from page table (`PTB + 2*p`), checks V
3. Protection check
    - If `V=0` -> `Page Fault`
    - If write and `W=1` -> `Write Protection`
    - If user-mode and `U=0` -> `User Violation`
4. On valid access -> physical address `(F << 16) | O` is returned, TLB updated

## Exceptions

| Priority |        Name        | Description                                 |
| :------: | :----------------: | :------------------------------------------ |
|   `0`    |    `Page Fault`    | Unmapped page (`V=0`)                       |
|   `1`    | `Write Protection` | Write attempted (`W=1`)                     |
|   `2`    |  `User Violation`  | User access to Supervisor-only page (`U=0`) |
|   `3`    |     `TLB Miss`     | Page not present in TLB; Triggers PTE fetch |

> TODO: Handle PMMU exceptions
