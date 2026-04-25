#ifndef RBT_NOTB_H
#define RBT_NOTB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte notb_initial_ram_0[] = {
		{ .addr = 0x5d328e, .byte = 0x46 },
		{ .addr = 0x5d328f, .byte = 0x17 },
		{ .addr = 0x5d3290, .byte = 0x84 },
		{ .addr = 0x5d3291, .byte = 0xac },
		{ .addr = 0x473368, .byte = 0xd8 },
		{ .addr = 0x473369, .byte = 0xd2 },
		{ .addr = 0x5d3292, .byte = 0x32 },
		{ .addr = 0x5d3293, .byte = 0x96 }
};

static const SST_RamByte notb_final_ram_0[] = {
		{ .addr = 0x5d328e, .byte = 0x46 },
		{ .addr = 0x5d328f, .byte = 0x17 },
		{ .addr = 0x5d3290, .byte = 0x84 },
		{ .addr = 0x5d3291, .byte = 0xac },
		{ .addr = 0x473368, .byte = 0x27 },
		{ .addr = 0x473369, .byte = 0xd2 },
		{ .addr = 0x5d3292, .byte = 0x32 },
		{ .addr = 0x5d3293, .byte = 0x96 }
};

static const SST_Transaction notb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4666216, .data = 55296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6107794, .data = 12950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4666216, .data = 9984, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_1[] = {
		{ .addr = 0x60d664, .byte = 0x46 },
		{ .addr = 0x60d665, .byte = 0x19 },
		{ .addr = 0x60d666, .byte = 0x99 },
		{ .addr = 0x60d667, .byte = 0x12 },
		{ .addr = 0x23590e, .byte = 0x62 },
		{ .addr = 0x23590f, .byte = 0xfe },
		{ .addr = 0x60d668, .byte = 0xe2 },
		{ .addr = 0x60d669, .byte = 0x5c }
};

static const SST_RamByte notb_final_ram_1[] = {
		{ .addr = 0x60d664, .byte = 0x46 },
		{ .addr = 0x60d665, .byte = 0x19 },
		{ .addr = 0x60d666, .byte = 0x99 },
		{ .addr = 0x60d667, .byte = 0x12 },
		{ .addr = 0x23590e, .byte = 0x9d },
		{ .addr = 0x23590f, .byte = 0xfe },
		{ .addr = 0x60d668, .byte = 0xe2 },
		{ .addr = 0x60d669, .byte = 0x5c }
};

static const SST_Transaction notb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2316558, .data = 25088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6346344, .data = 57948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2316558, .data = 40192, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_2[] = {
		{ .addr = 0xf867bc, .byte = 0x46 },
		{ .addr = 0xf867bd, .byte = 0x12 },
		{ .addr = 0xf867be, .byte = 0x8a },
		{ .addr = 0xf867bf, .byte = 0x0b },
		{ .addr = 0x20e85a, .byte = 0xda },
		{ .addr = 0x20e85b, .byte = 0x79 },
		{ .addr = 0xf867c0, .byte = 0x0c },
		{ .addr = 0xf867c1, .byte = 0x56 }
};

static const SST_RamByte notb_final_ram_2[] = {
		{ .addr = 0xf867bc, .byte = 0x46 },
		{ .addr = 0xf867bd, .byte = 0x12 },
		{ .addr = 0xf867be, .byte = 0x8a },
		{ .addr = 0xf867bf, .byte = 0x0b },
		{ .addr = 0x20e85a, .byte = 0xda },
		{ .addr = 0x20e85b, .byte = 0x86 },
		{ .addr = 0xf867c0, .byte = 0x0c },
		{ .addr = 0xf867c1, .byte = 0x56 }
};

static const SST_Transaction notb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2156634, .data = 121, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16279488, .data = 3158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2156634, .data = 134, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_3[] = {
		{ .addr = 0x6d800c, .byte = 0x46 },
		{ .addr = 0x6d800d, .byte = 0x1b },
		{ .addr = 0x6d800e, .byte = 0x00 },
		{ .addr = 0x6d800f, .byte = 0x81 },
		{ .addr = 0x701ef8, .byte = 0xc1 },
		{ .addr = 0x701ef9, .byte = 0x62 },
		{ .addr = 0x6d8010, .byte = 0x76 },
		{ .addr = 0x6d8011, .byte = 0x9f }
};

static const SST_RamByte notb_final_ram_3[] = {
		{ .addr = 0x6d800c, .byte = 0x46 },
		{ .addr = 0x6d800d, .byte = 0x1b },
		{ .addr = 0x6d800e, .byte = 0x00 },
		{ .addr = 0x6d800f, .byte = 0x81 },
		{ .addr = 0x701ef8, .byte = 0x3e },
		{ .addr = 0x701ef9, .byte = 0x62 },
		{ .addr = 0x6d8010, .byte = 0x76 },
		{ .addr = 0x6d8011, .byte = 0x9f }
};

static const SST_Transaction notb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7347960, .data = 49408, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7176208, .data = 30367, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7347960, .data = 15872, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_4[] = {
		{ .addr = 0x6a829a, .byte = 0x46 },
		{ .addr = 0x6a829b, .byte = 0x1d },
		{ .addr = 0x6a829c, .byte = 0xbe },
		{ .addr = 0x6a829d, .byte = 0x69 },
		{ .addr = 0x75a672, .byte = 0x3e },
		{ .addr = 0x75a673, .byte = 0xca },
		{ .addr = 0x6a829e, .byte = 0x51 },
		{ .addr = 0x6a829f, .byte = 0xa8 }
};

static const SST_RamByte notb_final_ram_4[] = {
		{ .addr = 0x6a829a, .byte = 0x46 },
		{ .addr = 0x6a829b, .byte = 0x1d },
		{ .addr = 0x6a829c, .byte = 0xbe },
		{ .addr = 0x6a829d, .byte = 0x69 },
		{ .addr = 0x75a672, .byte = 0xc1 },
		{ .addr = 0x75a673, .byte = 0xca },
		{ .addr = 0x6a829e, .byte = 0x51 },
		{ .addr = 0x6a829f, .byte = 0xa8 }
};

static const SST_Transaction notb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7710322, .data = 15872, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6980254, .data = 20904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7710322, .data = 49408, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_5[] = {
		{ .addr = 0x6357d4, .byte = 0x46 },
		{ .addr = 0x6357d5, .byte = 0x38 },
		{ .addr = 0x6357d6, .byte = 0x8b },
		{ .addr = 0x6357d7, .byte = 0xea },
		{ .addr = 0x6357d8, .byte = 0x3f },
		{ .addr = 0x6357d9, .byte = 0x56 },
		{ .addr = 0xff8bea, .byte = 0x3a },
		{ .addr = 0xff8beb, .byte = 0xaa },
		{ .addr = 0x6357da, .byte = 0x92 },
		{ .addr = 0x6357db, .byte = 0x76 }
};

static const SST_RamByte notb_final_ram_5[] = {
		{ .addr = 0x6357d4, .byte = 0x46 },
		{ .addr = 0x6357d5, .byte = 0x38 },
		{ .addr = 0x6357d6, .byte = 0x8b },
		{ .addr = 0x6357d7, .byte = 0xea },
		{ .addr = 0x6357d8, .byte = 0x3f },
		{ .addr = 0x6357d9, .byte = 0x56 },
		{ .addr = 0xff8bea, .byte = 0xc5 },
		{ .addr = 0xff8beb, .byte = 0xaa },
		{ .addr = 0x6357da, .byte = 0x92 },
		{ .addr = 0x6357db, .byte = 0x76 }
};

static const SST_Transaction notb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6510552, .data = 16214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16747498, .data = 14848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6510554, .data = 37494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16747498, .data = 50432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_6[] = {
		{ .addr = 0xae5d3c, .byte = 0x46 },
		{ .addr = 0xae5d3d, .byte = 0x2b },
		{ .addr = 0xae5d3e, .byte = 0xe2 },
		{ .addr = 0xae5d3f, .byte = 0x3c },
		{ .addr = 0xae5d40, .byte = 0x80 },
		{ .addr = 0xae5d41, .byte = 0x86 },
		{ .addr = 0x6e69de, .byte = 0x2e },
		{ .addr = 0x6e69df, .byte = 0xb2 },
		{ .addr = 0xae5d42, .byte = 0x27 },
		{ .addr = 0xae5d43, .byte = 0x00 }
};

static const SST_RamByte notb_final_ram_6[] = {
		{ .addr = 0xae5d3c, .byte = 0x46 },
		{ .addr = 0xae5d3d, .byte = 0x2b },
		{ .addr = 0xae5d3e, .byte = 0xe2 },
		{ .addr = 0xae5d3f, .byte = 0x3c },
		{ .addr = 0xae5d40, .byte = 0x80 },
		{ .addr = 0xae5d41, .byte = 0x86 },
		{ .addr = 0x6e69de, .byte = 0xd1 },
		{ .addr = 0x6e69df, .byte = 0xb2 },
		{ .addr = 0xae5d42, .byte = 0x27 },
		{ .addr = 0xae5d43, .byte = 0x00 }
};

static const SST_Transaction notb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11427136, .data = 32902, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7236062, .data = 11776, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11427138, .data = 9984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7236062, .data = 53504, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_7[] = {
		{ .addr = 0xcb10ce, .byte = 0x46 },
		{ .addr = 0xcb10cf, .byte = 0x37 },
		{ .addr = 0xcb10d0, .byte = 0x23 },
		{ .addr = 0xcb10d1, .byte = 0xf1 },
		{ .addr = 0xcb10d2, .byte = 0x17 },
		{ .addr = 0xcb10d3, .byte = 0xe0 },
		{ .addr = 0xe957a2, .byte = 0x85 },
		{ .addr = 0xe957a3, .byte = 0xc3 },
		{ .addr = 0xcb10d4, .byte = 0x3f },
		{ .addr = 0xcb10d5, .byte = 0xee }
};

static const SST_RamByte notb_final_ram_7[] = {
		{ .addr = 0xcb10ce, .byte = 0x46 },
		{ .addr = 0xcb10cf, .byte = 0x37 },
		{ .addr = 0xcb10d0, .byte = 0x23 },
		{ .addr = 0xcb10d1, .byte = 0xf1 },
		{ .addr = 0xcb10d2, .byte = 0x17 },
		{ .addr = 0xcb10d3, .byte = 0xe0 },
		{ .addr = 0xe957a2, .byte = 0x85 },
		{ .addr = 0xe957a3, .byte = 0x3c },
		{ .addr = 0xcb10d4, .byte = 0x3f },
		{ .addr = 0xcb10d5, .byte = 0xee }
};

static const SST_Transaction notb_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13308114, .data = 6112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15292322, .data = 195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13308116, .data = 16366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15292322, .data = 60, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_8[] = {
		{ .addr = 0x8d939c, .byte = 0x46 },
		{ .addr = 0x8d939d, .byte = 0x37 },
		{ .addr = 0x8d939e, .byte = 0xc7 },
		{ .addr = 0x8d939f, .byte = 0xea },
		{ .addr = 0x8d93a0, .byte = 0x90 },
		{ .addr = 0x8d93a1, .byte = 0x18 },
		{ .addr = 0x1cd932, .byte = 0x8e },
		{ .addr = 0x1cd933, .byte = 0xad },
		{ .addr = 0x8d93a2, .byte = 0xb0 },
		{ .addr = 0x8d93a3, .byte = 0x46 }
};

static const SST_RamByte notb_final_ram_8[] = {
		{ .addr = 0x8d939c, .byte = 0x46 },
		{ .addr = 0x8d939d, .byte = 0x37 },
		{ .addr = 0x8d939e, .byte = 0xc7 },
		{ .addr = 0x8d939f, .byte = 0xea },
		{ .addr = 0x8d93a0, .byte = 0x90 },
		{ .addr = 0x8d93a1, .byte = 0x18 },
		{ .addr = 0x1cd932, .byte = 0x8e },
		{ .addr = 0x1cd933, .byte = 0x52 },
		{ .addr = 0x8d93a2, .byte = 0xb0 },
		{ .addr = 0x8d93a3, .byte = 0x46 }
};

static const SST_Transaction notb_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9278368, .data = 36888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1890610, .data = 173, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9278370, .data = 45126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1890610, .data = 82, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_9[] = {
		{ .addr = 0x0f83de, .byte = 0x46 },
		{ .addr = 0x0f83df, .byte = 0x26 },
		{ .addr = 0x0f83e0, .byte = 0xa3 },
		{ .addr = 0x0f83e1, .byte = 0x20 },
		{ .addr = 0xbb8b40, .byte = 0xe1 },
		{ .addr = 0xbb8b41, .byte = 0xc2 },
		{ .addr = 0x0f83e2, .byte = 0x7f },
		{ .addr = 0x0f83e3, .byte = 0xbf }
};

static const SST_RamByte notb_final_ram_9[] = {
		{ .addr = 0x0f83de, .byte = 0x46 },
		{ .addr = 0x0f83df, .byte = 0x26 },
		{ .addr = 0x0f83e0, .byte = 0xa3 },
		{ .addr = 0x0f83e1, .byte = 0x20 },
		{ .addr = 0xbb8b40, .byte = 0xe1 },
		{ .addr = 0xbb8b41, .byte = 0x3d },
		{ .addr = 0x0f83e2, .byte = 0x7f },
		{ .addr = 0x0f83e3, .byte = 0xbf }
};

static const SST_Transaction notb_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12290880, .data = 194, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1016802, .data = 32703, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12290880, .data = 61, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_10[] = {
		{ .addr = 0x0dbc1a, .byte = 0x46 },
		{ .addr = 0x0dbc1b, .byte = 0x02 },
		{ .addr = 0x0dbc1c, .byte = 0x83 },
		{ .addr = 0x0dbc1d, .byte = 0xfb },
		{ .addr = 0x0dbc1e, .byte = 0x81 },
		{ .addr = 0x0dbc1f, .byte = 0x59 }
};

static const SST_RamByte notb_final_ram_10[] = {
		{ .addr = 0x0dbc1a, .byte = 0x46 },
		{ .addr = 0x0dbc1b, .byte = 0x02 },
		{ .addr = 0x0dbc1c, .byte = 0x83 },
		{ .addr = 0x0dbc1d, .byte = 0xfb },
		{ .addr = 0x0dbc1e, .byte = 0x81 },
		{ .addr = 0x0dbc1f, .byte = 0x59 }
};

static const SST_Transaction notb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 900126, .data = 33113, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_11[] = {
		{ .addr = 0x4bb61a, .byte = 0x46 },
		{ .addr = 0x4bb61b, .byte = 0x28 },
		{ .addr = 0x4bb61c, .byte = 0xfc },
		{ .addr = 0x4bb61d, .byte = 0xbc },
		{ .addr = 0x4bb61e, .byte = 0x51 },
		{ .addr = 0x4bb61f, .byte = 0x39 },
		{ .addr = 0x1a3e4c, .byte = 0x9e },
		{ .addr = 0x1a3e4d, .byte = 0x6c },
		{ .addr = 0x4bb620, .byte = 0x8f },
		{ .addr = 0x4bb621, .byte = 0xba }
};

static const SST_RamByte notb_final_ram_11[] = {
		{ .addr = 0x4bb61a, .byte = 0x46 },
		{ .addr = 0x4bb61b, .byte = 0x28 },
		{ .addr = 0x4bb61c, .byte = 0xfc },
		{ .addr = 0x4bb61d, .byte = 0xbc },
		{ .addr = 0x4bb61e, .byte = 0x51 },
		{ .addr = 0x4bb61f, .byte = 0x39 },
		{ .addr = 0x1a3e4c, .byte = 0x61 },
		{ .addr = 0x1a3e4d, .byte = 0x6c },
		{ .addr = 0x4bb620, .byte = 0x8f },
		{ .addr = 0x4bb621, .byte = 0xba }
};

static const SST_Transaction notb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4961822, .data = 20793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1719884, .data = 40448, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4961824, .data = 36794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1719884, .data = 24832, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_12[] = {
		{ .addr = 0x266196, .byte = 0x46 },
		{ .addr = 0x266197, .byte = 0x19 },
		{ .addr = 0x266198, .byte = 0xf7 },
		{ .addr = 0x266199, .byte = 0x35 },
		{ .addr = 0x501200, .byte = 0xb4 },
		{ .addr = 0x501201, .byte = 0xcb },
		{ .addr = 0x26619a, .byte = 0xdb },
		{ .addr = 0x26619b, .byte = 0xc0 }
};

static const SST_RamByte notb_final_ram_12[] = {
		{ .addr = 0x266196, .byte = 0x46 },
		{ .addr = 0x266197, .byte = 0x19 },
		{ .addr = 0x266198, .byte = 0xf7 },
		{ .addr = 0x266199, .byte = 0x35 },
		{ .addr = 0x501200, .byte = 0xb4 },
		{ .addr = 0x501201, .byte = 0x34 },
		{ .addr = 0x26619a, .byte = 0xdb },
		{ .addr = 0x26619b, .byte = 0xc0 }
};

static const SST_Transaction notb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5247488, .data = 203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2515354, .data = 56256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5247488, .data = 52, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_13[] = {
		{ .addr = 0x1da414, .byte = 0x46 },
		{ .addr = 0x1da415, .byte = 0x29 },
		{ .addr = 0x1da416, .byte = 0xac },
		{ .addr = 0x1da417, .byte = 0x52 },
		{ .addr = 0x1da418, .byte = 0x8a },
		{ .addr = 0x1da419, .byte = 0xe5 },
		{ .addr = 0x3e3bc4, .byte = 0xc6 },
		{ .addr = 0x3e3bc5, .byte = 0xdf },
		{ .addr = 0x1da41a, .byte = 0xf7 },
		{ .addr = 0x1da41b, .byte = 0x9b }
};

static const SST_RamByte notb_final_ram_13[] = {
		{ .addr = 0x1da414, .byte = 0x46 },
		{ .addr = 0x1da415, .byte = 0x29 },
		{ .addr = 0x1da416, .byte = 0xac },
		{ .addr = 0x1da417, .byte = 0x52 },
		{ .addr = 0x1da418, .byte = 0x8a },
		{ .addr = 0x1da419, .byte = 0xe5 },
		{ .addr = 0x3e3bc4, .byte = 0xc6 },
		{ .addr = 0x3e3bc5, .byte = 0x20 },
		{ .addr = 0x1da41a, .byte = 0xf7 },
		{ .addr = 0x1da41b, .byte = 0x9b }
};

static const SST_Transaction notb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1942552, .data = 35557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4078532, .data = 223, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1942554, .data = 63387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4078532, .data = 32, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_14[] = {
		{ .addr = 0xdd214a, .byte = 0x46 },
		{ .addr = 0xdd214b, .byte = 0x02 },
		{ .addr = 0xdd214c, .byte = 0x42 },
		{ .addr = 0xdd214d, .byte = 0xc2 },
		{ .addr = 0xdd214e, .byte = 0x6f },
		{ .addr = 0xdd214f, .byte = 0xe7 }
};

static const SST_RamByte notb_final_ram_14[] = {
		{ .addr = 0xdd214a, .byte = 0x46 },
		{ .addr = 0xdd214b, .byte = 0x02 },
		{ .addr = 0xdd214c, .byte = 0x42 },
		{ .addr = 0xdd214d, .byte = 0xc2 },
		{ .addr = 0xdd214e, .byte = 0x6f },
		{ .addr = 0xdd214f, .byte = 0xe7 }
};

static const SST_Transaction notb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14491982, .data = 28647, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_15[] = {
		{ .addr = 0x3a895c, .byte = 0x46 },
		{ .addr = 0x3a895d, .byte = 0x02 },
		{ .addr = 0x3a895e, .byte = 0xf9 },
		{ .addr = 0x3a895f, .byte = 0x9f },
		{ .addr = 0x3a8960, .byte = 0x7b },
		{ .addr = 0x3a8961, .byte = 0x42 }
};

static const SST_RamByte notb_final_ram_15[] = {
		{ .addr = 0x3a895c, .byte = 0x46 },
		{ .addr = 0x3a895d, .byte = 0x02 },
		{ .addr = 0x3a895e, .byte = 0xf9 },
		{ .addr = 0x3a895f, .byte = 0x9f },
		{ .addr = 0x3a8960, .byte = 0x7b },
		{ .addr = 0x3a8961, .byte = 0x42 }
};

static const SST_Transaction notb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3836256, .data = 31554, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NOTB_TEST_COUNT = 16;
static const SST_TestCase notb[] = {
	{
		.name = "000 NOT.b (A7) 4617",
		.initial = {
			.regs = {
				2559601891, 2054041401, 97028455, 910044421, 85557167, 2632298684, 1700730959, 936216423, 3811871237, 148047401, 3911004127, 3742298427, 1904513757, 811544757, 2425344126, 14768512, 4666216, 41224, 6107794
			},
			.prefetch0 = 17943,
			.prefetch1 = 33964,
			.ram = notb_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2559601891, 2054041401, 97028455, 910044421, 85557167, 2632298684, 1700730959, 936216423, 3811871237, 148047401, 3911004127, 3742298427, 1904513757, 811544757, 2425344126, 14768512, 4666216, 41216, 6107796
			},
			.prefetch0 = 33964,
			.prefetch1 = 12950,
			.ram = notb_final_ram_0,
			.ram_len = 8,
		},
		.transactions = notb_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 NOT.b (A1)+ 4619",
		.initial = {
			.regs = {
				198253343, 1452803808, 704640480, 2235147834, 3729299967, 646458041, 559780980, 783108876, 2902562430, 2535676174, 336924648, 2936721051, 1278858261, 650796374, 148016055, 7905636, 9110622, 9219, 6346344
			},
			.prefetch0 = 17945,
			.prefetch1 = 39186,
			.ram = notb_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				198253343, 1452803808, 704640480, 2235147834, 3729299967, 646458041, 559780980, 783108876, 2902562430, 2535676175, 336924648, 2936721051, 1278858261, 650796374, 148016055, 7905636, 9110622, 9224, 6346346
			},
			.prefetch0 = 39186,
			.prefetch1 = 57948,
			.ram = notb_final_ram_1,
			.ram_len = 8,
		},
		.transactions = notb_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 NOT.b (A2) 4612",
		.initial = {
			.regs = {
				1095406178, 1863690293, 816518898, 2284491193, 3106713505, 4191376396, 2463914596, 2109297126, 2693412701, 1740207072, 1210116187, 1940701818, 999163705, 3989320016, 2537238631, 13709446, 4542924, 1538, 16279488
			},
			.prefetch0 = 17938,
			.prefetch1 = 35339,
			.ram = notb_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1095406178, 1863690293, 816518898, 2284491193, 3106713505, 4191376396, 2463914596, 2109297126, 2693412701, 1740207072, 1210116187, 1940701818, 999163705, 3989320016, 2537238631, 13709446, 4542924, 1544, 16279490
			},
			.prefetch0 = 35339,
			.prefetch1 = 3158,
			.ram = notb_final_ram_2,
			.ram_len = 8,
		},
		.transactions = notb_transactions_2,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "003 NOT.b (A3)+ 461b",
		.initial = {
			.regs = {
				1748902322, 2310213093, 1002419870, 2687972278, 3772327941, 2560711569, 1908887730, 4195313205, 3759164431, 4117381680, 1827182772, 2859474680, 1546901985, 2273681538, 2780655123, 10740796, 2914616, 1816, 7176208
			},
			.prefetch0 = 17947,
			.prefetch1 = 129,
			.ram = notb_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1748902322, 2310213093, 1002419870, 2687972278, 3772327941, 2560711569, 1908887730, 4195313205, 3759164431, 4117381680, 1827182772, 2859474681, 1546901985, 2273681538, 2780655123, 10740796, 2914616, 1808, 7176210
			},
			.prefetch0 = 129,
			.prefetch1 = 30367,
			.ram = notb_final_ram_3,
			.ram_len = 8,
		},
		.transactions = notb_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 NOT.b (A5)+ 461d",
		.initial = {
			.regs = {
				3529180093, 3871826331, 2730231434, 3497913305, 1230589397, 3734060026, 129993462, 3279025773, 541239448, 1227302656, 2405996246, 3063222777, 2805542591, 74819186, 2170233134, 2798266, 2052268, 1800, 6980254
			},
			.prefetch0 = 17949,
			.prefetch1 = 48745,
			.ram = notb_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3529180093, 3871826331, 2730231434, 3497913305, 1230589397, 3734060026, 129993462, 3279025773, 541239448, 1227302656, 2405996246, 3063222777, 2805542591, 74819187, 2170233134, 2798266, 2052268, 1800, 6980256
			},
			.prefetch0 = 48745,
			.prefetch1 = 20904,
			.ram = notb_final_ram_4,
			.ram_len = 8,
		},
		.transactions = notb_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 NOT.b (xxx).w 4638",
		.initial = {
			.regs = {
				2721128178, 542135385, 4137542718, 586867019, 1660686522, 2534272089, 1409401114, 831043666, 4076110908, 3741411330, 2558176497, 3802071109, 3081852176, 2868463585, 3642379868, 6994146, 6610996, 42241, 6510552
			},
			.prefetch0 = 17976,
			.prefetch1 = 35818,
			.ram = notb_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2721128178, 542135385, 4137542718, 586867019, 1660686522, 2534272089, 1409401114, 831043666, 4076110908, 3741411330, 2558176497, 3802071109, 3081852176, 2868463585, 3642379868, 6994146, 6610996, 42248, 6510556
			},
			.prefetch0 = 16214,
			.prefetch1 = 37494,
			.ram = notb_final_ram_5,
			.ram_len = 10,
		},
		.transactions = notb_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 NOT.b (d16, A3) 462b",
		.initial = {
			.regs = {
				2885807756, 2647028838, 2417045164, 1695304670, 1240870127, 3553865403, 2781897185, 4260216737, 2207598692, 3903182481, 2000886474, 2876147618, 4277617609, 2461705363, 1956195816, 11457788, 5104234, 1033, 11427136
			},
			.prefetch0 = 17963,
			.prefetch1 = 57916,
			.ram = notb_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2885807756, 2647028838, 2417045164, 1695304670, 1240870127, 3553865403, 2781897185, 4260216737, 2207598692, 3903182481, 2000886474, 2876147618, 4277617609, 2461705363, 1956195816, 11457788, 5104234, 1032, 11427140
			},
			.prefetch0 = 32902,
			.prefetch1 = 9984,
			.ram = notb_final_ram_6,
			.ram_len = 10,
		},
		.transactions = notb_transactions_6,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "007 NOT.b (d8, A7, Xn) 4637",
		.initial = {
			.regs = {
				39875473, 652784080, 644654794, 3869626581, 2979773018, 3947805727, 3488347461, 77669553, 694599061, 642753430, 3910114980, 1067105292, 1027014055, 2915129847, 2895136023, 14372868, 15315176, 41227, 13308114
			},
			.prefetch0 = 17975,
			.prefetch1 = 9201,
			.ram = notb_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				39875473, 652784080, 644654794, 3869626581, 2979773018, 3947805727, 3488347461, 77669553, 694599061, 642753430, 3910114980, 1067105292, 1027014055, 2915129847, 2895136023, 14372868, 15315176, 41216, 13308118
			},
			.prefetch0 = 6112,
			.prefetch1 = 16366,
			.ram = notb_final_ram_7,
			.ram_len = 10,
		},
		.transactions = notb_transactions_7,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "008 NOT.b (d8, A7, Xn) 4637",
		.initial = {
			.regs = {
				987264308, 3947674794, 1618548658, 3000282249, 2178575350, 1641357881, 1673721341, 2240071452, 1847282929, 673840413, 1971820436, 2498560490, 3479801395, 953735537, 1774898735, 1919766, 13403252, 34335, 9278368
			},
			.prefetch0 = 17975,
			.prefetch1 = 51178,
			.ram = notb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				987264308, 3947674794, 1618548658, 3000282249, 2178575350, 1641357881, 1673721341, 2240071452, 1847282929, 673840413, 1971820436, 2498560490, 3479801395, 953735537, 1774898735, 1919766, 13403252, 34320, 9278372
			},
			.prefetch0 = 36888,
			.prefetch1 = 45126,
			.ram = notb_final_ram_8,
			.ram_len = 10,
		},
		.transactions = notb_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 NOT.b -(A6) 4626",
		.initial = {
			.regs = {
				2691101946, 1214687120, 4208329356, 1772081360, 1952540791, 1912446347, 2543942050, 3583410405, 3343244867, 595927853, 484154877, 3751458333, 1790943669, 17739388, 2830863170, 9173114, 13420382, 33303, 1016802
			},
			.prefetch0 = 17958,
			.prefetch1 = 41760,
			.ram = notb_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2691101946, 1214687120, 4208329356, 1772081360, 1952540791, 1912446347, 2543942050, 3583410405, 3343244867, 595927853, 484154877, 3751458333, 1790943669, 17739388, 2830863169, 9173114, 13420382, 33296, 1016804
			},
			.prefetch0 = 41760,
			.prefetch1 = 32703,
			.ram = notb_final_ram_9,
			.ram_len = 8,
		},
		.transactions = notb_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 NOT.b D2 4602",
		.initial = {
			.regs = {
				404293726, 1292329877, 3060764600, 2888515060, 3292440502, 2754873489, 4182782140, 1118232712, 176205123, 3514941187, 3068013667, 1331306797, 740054280, 1351443075, 1428903473, 1569710, 6151262, 9243, 900126
			},
			.prefetch0 = 17922,
			.prefetch1 = 33787,
			.ram = notb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				404293726, 1292329877, 3060764487, 2888515060, 3292440502, 2754873489, 4182782140, 1118232712, 176205123, 3514941187, 3068013667, 1331306797, 740054280, 1351443075, 1428903473, 1569710, 6151262, 9232, 900128
			},
			.prefetch0 = 33787,
			.prefetch1 = 33113,
			.ram = notb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = notb_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 NOT.b (d16, A0) 4628",
		.initial = {
			.regs = {
				2670277124, 3932187234, 436974433, 3638818003, 4147547753, 2700906362, 825655902, 2796432877, 3038396816, 3968206974, 4294492848, 3300082356, 40079219, 106894453, 2278747522, 13760384, 10617500, 770, 4961822
			},
			.prefetch0 = 17960,
			.prefetch1 = 64700,
			.ram = notb_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2670277124, 3932187234, 436974433, 3638818003, 4147547753, 2700906362, 825655902, 2796432877, 3038396816, 3968206974, 4294492848, 3300082356, 40079219, 106894453, 2278747522, 13760384, 10617500, 768, 4961826
			},
			.prefetch0 = 20793,
			.prefetch1 = 36794,
			.ram = notb_final_ram_11,
			.ram_len = 10,
		},
		.transactions = notb_transactions_11,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "012 NOT.b (A1)+ 4619",
		.initial = {
			.regs = {
				1626277820, 3311673840, 2021506128, 2194200029, 2465382996, 2292934356, 2951177001, 3918172913, 3851990260, 3226472961, 2840400175, 196417768, 2209194205, 605937874, 926271840, 5003014, 7711430, 9219, 2515354
			},
			.prefetch0 = 17945,
			.prefetch1 = 63285,
			.ram = notb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1626277820, 3311673840, 2021506128, 2194200029, 2465382996, 2292934356, 2951177001, 3918172913, 3851990260, 3226472962, 2840400175, 196417768, 2209194205, 605937874, 926271840, 5003014, 7711430, 9216, 2515356
			},
			.prefetch0 = 63285,
			.prefetch1 = 56256,
			.ram = notb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = notb_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 NOT.b (d16, A1) 4629",
		.initial = {
			.regs = {
				2536609826, 3473934039, 1410181674, 696591121, 3164841839, 1764962301, 2105284414, 3962919556, 1326199299, 2403241843, 1570799064, 2738546554, 3100574538, 2306152048, 3349304985, 10608958, 6647038, 1795, 1942552
			},
			.prefetch0 = 17961,
			.prefetch1 = 44114,
			.ram = notb_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2536609826, 3473934039, 1410181674, 696591121, 3164841839, 1764962301, 2105284414, 3962919556, 1326199299, 2403241843, 1570799064, 2738546554, 3100574538, 2306152048, 3349304985, 10608958, 6647038, 1792, 1942556
			},
			.prefetch0 = 35557,
			.prefetch1 = 63387,
			.ram = notb_final_ram_13,
			.ram_len = 10,
		},
		.transactions = notb_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 NOT.b D2 4602",
		.initial = {
			.regs = {
				4147290033, 2217654882, 2589318715, 3062612125, 3962168250, 754660898, 2257543183, 2794420947, 1905554261, 214981227, 1564344949, 2936997900, 4280399884, 2012021248, 2171946183, 10317734, 16688552, 9748, 14491982
			},
			.prefetch0 = 17922,
			.prefetch1 = 17090,
			.ram = notb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4147290033, 2217654882, 2589318852, 3062612125, 3962168250, 754660898, 2257543183, 2794420947, 1905554261, 214981227, 1564344949, 2936997900, 4280399884, 2012021248, 2171946183, 10317734, 16688552, 9752, 14491984
			},
			.prefetch0 = 17090,
			.prefetch1 = 28647,
			.ram = notb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = notb_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 NOT.b D2 4602",
		.initial = {
			.regs = {
				2314630833, 453361688, 3851555543, 3885778234, 1799301594, 3157102348, 1574377293, 63266036, 2344282377, 1588961988, 3966655741, 2755887788, 931468935, 2203892061, 691486578, 12937232, 12026082, 9233, 3836256
			},
			.prefetch0 = 17922,
			.prefetch1 = 63903,
			.ram = notb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2314630833, 453361688, 3851555368, 3885778234, 1799301594, 3157102348, 1574377293, 63266036, 2344282377, 1588961988, 3966655741, 2755887788, 931468935, 2203892061, 691486578, 12937232, 12026082, 9232, 3836258
			},
			.prefetch0 = 63903,
			.prefetch1 = 31554,
			.ram = notb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = notb_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_NOTB_H */