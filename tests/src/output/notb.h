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

static const SST_RamByte notb_initial_ram_16[] = {
		{ .addr = 0x5fd2cc, .byte = 0x46 },
		{ .addr = 0x5fd2cd, .byte = 0x2f },
		{ .addr = 0x5fd2ce, .byte = 0x70 },
		{ .addr = 0x5fd2cf, .byte = 0x2e },
		{ .addr = 0x5fd2d0, .byte = 0x56 },
		{ .addr = 0x5fd2d1, .byte = 0xd5 },
		{ .addr = 0x00ee6a, .byte = 0x01 },
		{ .addr = 0x00ee6b, .byte = 0xd7 },
		{ .addr = 0x5fd2d2, .byte = 0x20 },
		{ .addr = 0x5fd2d3, .byte = 0xef }
};

static const SST_RamByte notb_final_ram_16[] = {
		{ .addr = 0x5fd2cc, .byte = 0x46 },
		{ .addr = 0x5fd2cd, .byte = 0x2f },
		{ .addr = 0x5fd2ce, .byte = 0x70 },
		{ .addr = 0x5fd2cf, .byte = 0x2e },
		{ .addr = 0x5fd2d0, .byte = 0x56 },
		{ .addr = 0x5fd2d1, .byte = 0xd5 },
		{ .addr = 0x00ee6a, .byte = 0xfe },
		{ .addr = 0x00ee6b, .byte = 0xd7 },
		{ .addr = 0x5fd2d2, .byte = 0x20 },
		{ .addr = 0x5fd2d3, .byte = 0xef }
};

static const SST_Transaction notb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6279888, .data = 22229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 61034, .data = 256, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6279890, .data = 8431, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 61034, .data = 65024, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_17[] = {
		{ .addr = 0x565e24, .byte = 0x46 },
		{ .addr = 0x565e25, .byte = 0x1b },
		{ .addr = 0x565e26, .byte = 0xe0 },
		{ .addr = 0x565e27, .byte = 0xdf },
		{ .addr = 0xab1faa, .byte = 0xad },
		{ .addr = 0xab1fab, .byte = 0x8a },
		{ .addr = 0x565e28, .byte = 0x5b },
		{ .addr = 0x565e29, .byte = 0x20 }
};

static const SST_RamByte notb_final_ram_17[] = {
		{ .addr = 0x565e24, .byte = 0x46 },
		{ .addr = 0x565e25, .byte = 0x1b },
		{ .addr = 0x565e26, .byte = 0xe0 },
		{ .addr = 0x565e27, .byte = 0xdf },
		{ .addr = 0xab1faa, .byte = 0xad },
		{ .addr = 0xab1fab, .byte = 0x75 },
		{ .addr = 0x565e28, .byte = 0x5b },
		{ .addr = 0x565e29, .byte = 0x20 }
};

static const SST_Transaction notb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11214762, .data = 138, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5660200, .data = 23328, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11214762, .data = 117, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_18[] = {
		{ .addr = 0xff46ea, .byte = 0x46 },
		{ .addr = 0xff46eb, .byte = 0x01 },
		{ .addr = 0xff46ec, .byte = 0x21 },
		{ .addr = 0xff46ed, .byte = 0xac },
		{ .addr = 0xff46ee, .byte = 0x90 },
		{ .addr = 0xff46ef, .byte = 0xd0 }
};

static const SST_RamByte notb_final_ram_18[] = {
		{ .addr = 0xff46ea, .byte = 0x46 },
		{ .addr = 0xff46eb, .byte = 0x01 },
		{ .addr = 0xff46ec, .byte = 0x21 },
		{ .addr = 0xff46ed, .byte = 0xac },
		{ .addr = 0xff46ee, .byte = 0x90 },
		{ .addr = 0xff46ef, .byte = 0xd0 }
};

static const SST_Transaction notb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16729838, .data = 37072, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_19[] = {
		{ .addr = 0x4c60d8, .byte = 0x46 },
		{ .addr = 0x4c60d9, .byte = 0x14 },
		{ .addr = 0x4c60da, .byte = 0x2f },
		{ .addr = 0x4c60db, .byte = 0xbc },
		{ .addr = 0xb17862, .byte = 0xf2 },
		{ .addr = 0xb17863, .byte = 0x96 },
		{ .addr = 0x4c60dc, .byte = 0xc6 },
		{ .addr = 0x4c60dd, .byte = 0x77 }
};

static const SST_RamByte notb_final_ram_19[] = {
		{ .addr = 0x4c60d8, .byte = 0x46 },
		{ .addr = 0x4c60d9, .byte = 0x14 },
		{ .addr = 0x4c60da, .byte = 0x2f },
		{ .addr = 0x4c60db, .byte = 0xbc },
		{ .addr = 0xb17862, .byte = 0x0d },
		{ .addr = 0xb17863, .byte = 0x96 },
		{ .addr = 0x4c60dc, .byte = 0xc6 },
		{ .addr = 0x4c60dd, .byte = 0x77 }
};

static const SST_Transaction notb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11630690, .data = 61952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5005532, .data = 50807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11630690, .data = 3328, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_20[] = {
		{ .addr = 0x433d78, .byte = 0x46 },
		{ .addr = 0x433d79, .byte = 0x11 },
		{ .addr = 0x433d7a, .byte = 0xec },
		{ .addr = 0x433d7b, .byte = 0x22 },
		{ .addr = 0xa928a0, .byte = 0xc2 },
		{ .addr = 0xa928a1, .byte = 0x21 },
		{ .addr = 0x433d7c, .byte = 0xfa },
		{ .addr = 0x433d7d, .byte = 0xbf }
};

static const SST_RamByte notb_final_ram_20[] = {
		{ .addr = 0x433d78, .byte = 0x46 },
		{ .addr = 0x433d79, .byte = 0x11 },
		{ .addr = 0x433d7a, .byte = 0xec },
		{ .addr = 0x433d7b, .byte = 0x22 },
		{ .addr = 0xa928a0, .byte = 0xc2 },
		{ .addr = 0xa928a1, .byte = 0xde },
		{ .addr = 0x433d7c, .byte = 0xfa },
		{ .addr = 0x433d7d, .byte = 0xbf }
};

static const SST_Transaction notb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11085984, .data = 33, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4406652, .data = 64191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11085984, .data = 222, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_21[] = {
		{ .addr = 0xc173f0, .byte = 0x46 },
		{ .addr = 0xc173f1, .byte = 0x34 },
		{ .addr = 0xc173f2, .byte = 0x0e },
		{ .addr = 0xc173f3, .byte = 0x07 },
		{ .addr = 0xc173f4, .byte = 0xab },
		{ .addr = 0xc173f5, .byte = 0x30 },
		{ .addr = 0xda7c26, .byte = 0x67 },
		{ .addr = 0xda7c27, .byte = 0xac },
		{ .addr = 0xc173f6, .byte = 0x39 },
		{ .addr = 0xc173f7, .byte = 0x99 }
};

static const SST_RamByte notb_final_ram_21[] = {
		{ .addr = 0xc173f0, .byte = 0x46 },
		{ .addr = 0xc173f1, .byte = 0x34 },
		{ .addr = 0xc173f2, .byte = 0x0e },
		{ .addr = 0xc173f3, .byte = 0x07 },
		{ .addr = 0xc173f4, .byte = 0xab },
		{ .addr = 0xc173f5, .byte = 0x30 },
		{ .addr = 0xda7c26, .byte = 0x98 },
		{ .addr = 0xda7c27, .byte = 0xac },
		{ .addr = 0xc173f6, .byte = 0x39 },
		{ .addr = 0xc173f7, .byte = 0x99 }
};

static const SST_Transaction notb_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12678132, .data = 43824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14318630, .data = 26368, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12678134, .data = 14745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14318630, .data = 38912, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_22[] = {
		{ .addr = 0x7b877e, .byte = 0x46 },
		{ .addr = 0x7b877f, .byte = 0x15 },
		{ .addr = 0x7b8780, .byte = 0x26 },
		{ .addr = 0x7b8781, .byte = 0x79 },
		{ .addr = 0x964d0a, .byte = 0x43 },
		{ .addr = 0x964d0b, .byte = 0xee },
		{ .addr = 0x7b8782, .byte = 0xcd },
		{ .addr = 0x7b8783, .byte = 0x1f }
};

static const SST_RamByte notb_final_ram_22[] = {
		{ .addr = 0x7b877e, .byte = 0x46 },
		{ .addr = 0x7b877f, .byte = 0x15 },
		{ .addr = 0x7b8780, .byte = 0x26 },
		{ .addr = 0x7b8781, .byte = 0x79 },
		{ .addr = 0x964d0a, .byte = 0xbc },
		{ .addr = 0x964d0b, .byte = 0xee },
		{ .addr = 0x7b8782, .byte = 0xcd },
		{ .addr = 0x7b8783, .byte = 0x1f }
};

static const SST_Transaction notb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9850122, .data = 17152, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8095618, .data = 52511, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9850122, .data = 48128, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_23[] = {
		{ .addr = 0xc81de0, .byte = 0x46 },
		{ .addr = 0xc81de1, .byte = 0x1e },
		{ .addr = 0xc81de2, .byte = 0xd4 },
		{ .addr = 0xc81de3, .byte = 0x5e },
		{ .addr = 0x9b93a8, .byte = 0x01 },
		{ .addr = 0x9b93a9, .byte = 0x73 },
		{ .addr = 0xc81de4, .byte = 0xdb },
		{ .addr = 0xc81de5, .byte = 0xa0 }
};

static const SST_RamByte notb_final_ram_23[] = {
		{ .addr = 0xc81de0, .byte = 0x46 },
		{ .addr = 0xc81de1, .byte = 0x1e },
		{ .addr = 0xc81de2, .byte = 0xd4 },
		{ .addr = 0xc81de3, .byte = 0x5e },
		{ .addr = 0x9b93a8, .byte = 0xfe },
		{ .addr = 0x9b93a9, .byte = 0x73 },
		{ .addr = 0xc81de4, .byte = 0xdb },
		{ .addr = 0xc81de5, .byte = 0xa0 }
};

static const SST_Transaction notb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10195880, .data = 256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13114852, .data = 56224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10195880, .data = 65024, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_24[] = {
		{ .addr = 0x6b2256, .byte = 0x46 },
		{ .addr = 0x6b2257, .byte = 0x34 },
		{ .addr = 0x6b2258, .byte = 0xd8 },
		{ .addr = 0x6b2259, .byte = 0x44 },
		{ .addr = 0x6b225a, .byte = 0xa9 },
		{ .addr = 0x6b225b, .byte = 0xf4 },
		{ .addr = 0x7bcc08, .byte = 0x4c },
		{ .addr = 0x7bcc09, .byte = 0x65 },
		{ .addr = 0x6b225c, .byte = 0x92 },
		{ .addr = 0x6b225d, .byte = 0x4e }
};

static const SST_RamByte notb_final_ram_24[] = {
		{ .addr = 0x6b2256, .byte = 0x46 },
		{ .addr = 0x6b2257, .byte = 0x34 },
		{ .addr = 0x6b2258, .byte = 0xd8 },
		{ .addr = 0x6b2259, .byte = 0x44 },
		{ .addr = 0x6b225a, .byte = 0xa9 },
		{ .addr = 0x6b225b, .byte = 0xf4 },
		{ .addr = 0x7bcc08, .byte = 0xb3 },
		{ .addr = 0x7bcc09, .byte = 0x65 },
		{ .addr = 0x6b225c, .byte = 0x92 },
		{ .addr = 0x6b225d, .byte = 0x4e }
};

static const SST_Transaction notb_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7021146, .data = 43508, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113160, .data = 19456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7021148, .data = 37454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8113160, .data = 45824, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_25[] = {
		{ .addr = 0x31ac16, .byte = 0x46 },
		{ .addr = 0x31ac17, .byte = 0x1f },
		{ .addr = 0x31ac18, .byte = 0xb1 },
		{ .addr = 0x31ac19, .byte = 0x52 },
		{ .addr = 0xd3d526, .byte = 0x02 },
		{ .addr = 0xd3d527, .byte = 0x5b },
		{ .addr = 0x31ac1a, .byte = 0x03 },
		{ .addr = 0x31ac1b, .byte = 0xd7 }
};

static const SST_RamByte notb_final_ram_25[] = {
		{ .addr = 0x31ac16, .byte = 0x46 },
		{ .addr = 0x31ac17, .byte = 0x1f },
		{ .addr = 0x31ac18, .byte = 0xb1 },
		{ .addr = 0x31ac19, .byte = 0x52 },
		{ .addr = 0xd3d526, .byte = 0xfd },
		{ .addr = 0xd3d527, .byte = 0x5b },
		{ .addr = 0x31ac1a, .byte = 0x03 },
		{ .addr = 0x31ac1b, .byte = 0xd7 }
};

static const SST_Transaction notb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13882662, .data = 512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3255322, .data = 983, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13882662, .data = 64768, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_26[] = {
		{ .addr = 0x59dc22, .byte = 0x46 },
		{ .addr = 0x59dc23, .byte = 0x2a },
		{ .addr = 0x59dc24, .byte = 0xe6 },
		{ .addr = 0x59dc25, .byte = 0x47 },
		{ .addr = 0x59dc26, .byte = 0xcf },
		{ .addr = 0x59dc27, .byte = 0x7c },
		{ .addr = 0xfba5f2, .byte = 0x2e },
		{ .addr = 0xfba5f3, .byte = 0x41 },
		{ .addr = 0x59dc28, .byte = 0x66 },
		{ .addr = 0x59dc29, .byte = 0x0a }
};

static const SST_RamByte notb_final_ram_26[] = {
		{ .addr = 0x59dc22, .byte = 0x46 },
		{ .addr = 0x59dc23, .byte = 0x2a },
		{ .addr = 0x59dc24, .byte = 0xe6 },
		{ .addr = 0x59dc25, .byte = 0x47 },
		{ .addr = 0x59dc26, .byte = 0xcf },
		{ .addr = 0x59dc27, .byte = 0x7c },
		{ .addr = 0xfba5f2, .byte = 0x2e },
		{ .addr = 0xfba5f3, .byte = 0xbe },
		{ .addr = 0x59dc28, .byte = 0x66 },
		{ .addr = 0x59dc29, .byte = 0x0a }
};

static const SST_Transaction notb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5889062, .data = 53116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16492018, .data = 65, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5889064, .data = 26122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16492018, .data = 190, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_27[] = {
		{ .addr = 0xbb0b84, .byte = 0x46 },
		{ .addr = 0xbb0b85, .byte = 0x01 },
		{ .addr = 0xbb0b86, .byte = 0x25 },
		{ .addr = 0xbb0b87, .byte = 0x44 },
		{ .addr = 0xbb0b88, .byte = 0x6e },
		{ .addr = 0xbb0b89, .byte = 0xe3 }
};

static const SST_RamByte notb_final_ram_27[] = {
		{ .addr = 0xbb0b84, .byte = 0x46 },
		{ .addr = 0xbb0b85, .byte = 0x01 },
		{ .addr = 0xbb0b86, .byte = 0x25 },
		{ .addr = 0xbb0b87, .byte = 0x44 },
		{ .addr = 0xbb0b88, .byte = 0x6e },
		{ .addr = 0xbb0b89, .byte = 0xe3 }
};

static const SST_Transaction notb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12258184, .data = 28387, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_28[] = {
		{ .addr = 0xcc4aa8, .byte = 0x46 },
		{ .addr = 0xcc4aa9, .byte = 0x33 },
		{ .addr = 0xcc4aaa, .byte = 0x6e },
		{ .addr = 0xcc4aab, .byte = 0xa3 },
		{ .addr = 0xcc4aac, .byte = 0x7f },
		{ .addr = 0xcc4aad, .byte = 0x6c },
		{ .addr = 0x38c1f6, .byte = 0x09 },
		{ .addr = 0x38c1f7, .byte = 0x2d },
		{ .addr = 0xcc4aae, .byte = 0x6a },
		{ .addr = 0xcc4aaf, .byte = 0x2f }
};

static const SST_RamByte notb_final_ram_28[] = {
		{ .addr = 0xcc4aa8, .byte = 0x46 },
		{ .addr = 0xcc4aa9, .byte = 0x33 },
		{ .addr = 0xcc4aaa, .byte = 0x6e },
		{ .addr = 0xcc4aab, .byte = 0xa3 },
		{ .addr = 0xcc4aac, .byte = 0x7f },
		{ .addr = 0xcc4aad, .byte = 0x6c },
		{ .addr = 0x38c1f6, .byte = 0x09 },
		{ .addr = 0x38c1f7, .byte = 0xd2 },
		{ .addr = 0xcc4aae, .byte = 0x6a },
		{ .addr = 0xcc4aaf, .byte = 0x2f }
};

static const SST_Transaction notb_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13388460, .data = 32620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3719670, .data = 45, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13388462, .data = 27183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3719670, .data = 210, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_29[] = {
		{ .addr = 0x7653f6, .byte = 0x46 },
		{ .addr = 0x7653f7, .byte = 0x27 },
		{ .addr = 0x7653f8, .byte = 0x1c },
		{ .addr = 0x7653f9, .byte = 0xaf },
		{ .addr = 0x0f9a90, .byte = 0xa4 },
		{ .addr = 0x0f9a91, .byte = 0xc4 },
		{ .addr = 0x7653fa, .byte = 0xae },
		{ .addr = 0x7653fb, .byte = 0xbc }
};

static const SST_RamByte notb_final_ram_29[] = {
		{ .addr = 0x7653f6, .byte = 0x46 },
		{ .addr = 0x7653f7, .byte = 0x27 },
		{ .addr = 0x7653f8, .byte = 0x1c },
		{ .addr = 0x7653f9, .byte = 0xaf },
		{ .addr = 0x0f9a90, .byte = 0x5b },
		{ .addr = 0x0f9a91, .byte = 0xc4 },
		{ .addr = 0x7653fa, .byte = 0xae },
		{ .addr = 0x7653fb, .byte = 0xbc }
};

static const SST_Transaction notb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1022608, .data = 41984, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7754746, .data = 44732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1022608, .data = 23296, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_30[] = {
		{ .addr = 0xf66ed6, .byte = 0x46 },
		{ .addr = 0xf66ed7, .byte = 0x2b },
		{ .addr = 0xf66ed8, .byte = 0xfd },
		{ .addr = 0xf66ed9, .byte = 0x6f },
		{ .addr = 0xf66eda, .byte = 0xea },
		{ .addr = 0xf66edb, .byte = 0x35 },
		{ .addr = 0x3d925a, .byte = 0xc7 },
		{ .addr = 0x3d925b, .byte = 0xe9 },
		{ .addr = 0xf66edc, .byte = 0xe0 },
		{ .addr = 0xf66edd, .byte = 0xdc }
};

static const SST_RamByte notb_final_ram_30[] = {
		{ .addr = 0xf66ed6, .byte = 0x46 },
		{ .addr = 0xf66ed7, .byte = 0x2b },
		{ .addr = 0xf66ed8, .byte = 0xfd },
		{ .addr = 0xf66ed9, .byte = 0x6f },
		{ .addr = 0xf66eda, .byte = 0xea },
		{ .addr = 0xf66edb, .byte = 0x35 },
		{ .addr = 0x3d925a, .byte = 0xc7 },
		{ .addr = 0x3d925b, .byte = 0x16 },
		{ .addr = 0xf66edc, .byte = 0xe0 },
		{ .addr = 0xf66edd, .byte = 0xdc }
};

static const SST_Transaction notb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16150234, .data = 59957, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4035162, .data = 233, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16150236, .data = 57564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4035162, .data = 22, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte notb_initial_ram_31[] = {
		{ .addr = 0xdb69d4, .byte = 0x46 },
		{ .addr = 0xdb69d5, .byte = 0x1e },
		{ .addr = 0xdb69d6, .byte = 0x75 },
		{ .addr = 0xdb69d7, .byte = 0x4f },
		{ .addr = 0xc6ad98, .byte = 0x61 },
		{ .addr = 0xc6ad99, .byte = 0x51 },
		{ .addr = 0xdb69d8, .byte = 0x3d },
		{ .addr = 0xdb69d9, .byte = 0x64 }
};

static const SST_RamByte notb_final_ram_31[] = {
		{ .addr = 0xdb69d4, .byte = 0x46 },
		{ .addr = 0xdb69d5, .byte = 0x1e },
		{ .addr = 0xdb69d6, .byte = 0x75 },
		{ .addr = 0xdb69d7, .byte = 0x4f },
		{ .addr = 0xc6ad98, .byte = 0x61 },
		{ .addr = 0xc6ad99, .byte = 0xae },
		{ .addr = 0xdb69d8, .byte = 0x3d },
		{ .addr = 0xdb69d9, .byte = 0x64 }
};

static const SST_Transaction notb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13020568, .data = 81, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14379480, .data = 15716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13020568, .data = 174, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 NOT.b (d16, A7) 462f",
		.initial = {
			.regs = {
				2290521964, 2121092736, 1857070182, 3679014481, 1031654485, 126405729, 2428166570, 4204398984, 2615833272, 1020817432, 190786620, 3777065884, 583628143, 4079484595, 1347463392, 32316, 3445104, 33555, 6279888
			},
			.prefetch0 = 17967,
			.prefetch1 = 28718,
			.ram = notb_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2290521964, 2121092736, 1857070182, 3679014481, 1031654485, 126405729, 2428166570, 4204398984, 2615833272, 1020817432, 190786620, 3777065884, 583628143, 4079484595, 1347463392, 32316, 3445104, 33560, 6279892
			},
			.prefetch0 = 22229,
			.prefetch1 = 8431,
			.ram = notb_final_ram_16,
			.ram_len = 10,
		},
		.transactions = notb_transactions_16,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "017 NOT.b (A3)+ 461b",
		.initial = {
			.regs = {
				254024177, 2542122318, 3406627358, 2330226276, 1782219306, 2852466522, 2025595544, 1891775381, 2946478275, 3954265528, 603268345, 1303060395, 1129657516, 1773251864, 2778312011, 2385986, 11523200, 1284, 5660200
			},
			.prefetch0 = 17947,
			.prefetch1 = 57567,
			.ram = notb_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				254024177, 2542122318, 3406627358, 2330226276, 1782219306, 2852466522, 2025595544, 1891775381, 2946478275, 3954265528, 603268345, 1303060396, 1129657516, 1773251864, 2778312011, 2385986, 11523200, 1280, 5660202
			},
			.prefetch0 = 57567,
			.prefetch1 = 23328,
			.ram = notb_final_ram_17,
			.ram_len = 8,
		},
		.transactions = notb_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 NOT.b D1 4601",
		.initial = {
			.regs = {
				1230619757, 4086383795, 995156208, 1690162929, 1022947108, 621446394, 1792415137, 1122432753, 2954790749, 151172601, 3245457176, 1064880532, 1684106701, 618865053, 68613601, 14358898, 11821974, 8720, 16729838
			},
			.prefetch0 = 17921,
			.prefetch1 = 8620,
			.ram = notb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1230619757, 4086383692, 995156208, 1690162929, 1022947108, 621446394, 1792415137, 1122432753, 2954790749, 151172601, 3245457176, 1064880532, 1684106701, 618865053, 68613601, 14358898, 11821974, 8720, 16729840
			},
			.prefetch0 = 8620,
			.prefetch1 = 37072,
			.ram = notb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = notb_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 NOT.b (A4) 4614",
		.initial = {
			.regs = {
				3586717529, 3190949138, 2412011197, 3511048964, 597866875, 1637223888, 623870608, 2303038050, 2726027517, 1837275774, 1230427200, 872691170, 2511435874, 1939916552, 3062708218, 8587484, 1010844, 42002, 5005532
			},
			.prefetch0 = 17940,
			.prefetch1 = 12220,
			.ram = notb_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3586717529, 3190949138, 2412011197, 3511048964, 597866875, 1637223888, 623870608, 2303038050, 2726027517, 1837275774, 1230427200, 872691170, 2511435874, 1939916552, 3062708218, 8587484, 1010844, 42000, 5005534
			},
			.prefetch0 = 12220,
			.prefetch1 = 50807,
			.ram = notb_final_ram_19,
			.ram_len = 8,
		},
		.transactions = notb_transactions_19,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "020 NOT.b (A1) 4611",
		.initial = {
			.regs = {
				2924739964, 2343035664, 1778722489, 85517927, 2189806185, 3352701350, 1649126001, 3072944414, 2207683734, 1688807585, 3172375439, 554432741, 3035227207, 3682367156, 2472364662, 9736446, 10827544, 34331, 4406652
			},
			.prefetch0 = 17937,
			.prefetch1 = 60450,
			.ram = notb_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2924739964, 2343035664, 1778722489, 85517927, 2189806185, 3352701350, 1649126001, 3072944414, 2207683734, 1688807585, 3172375439, 554432741, 3035227207, 3682367156, 2472364662, 9736446, 10827544, 34328, 4406654
			},
			.prefetch0 = 60450,
			.prefetch1 = 64191,
			.ram = notb_final_ram_20,
			.ram_len = 8,
		},
		.transactions = notb_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 NOT.b (d8, A4, Xn) 4634",
		.initial = {
			.regs = {
				2168715484, 3528322247, 1632607346, 326149280, 1628460425, 4215987375, 2404388220, 1389833029, 693456182, 121043305, 2657887443, 295441757, 2392228675, 1185906404, 1107682965, 11313118, 4812368, 33565, 12678132
			},
			.prefetch0 = 17972,
			.prefetch1 = 3591,
			.ram = notb_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2168715484, 3528322247, 1632607346, 326149280, 1628460425, 4215987375, 2404388220, 1389833029, 693456182, 121043305, 2657887443, 295441757, 2392228675, 1185906404, 1107682965, 11313118, 4812368, 33560, 12678136
			},
			.prefetch0 = 43824,
			.prefetch1 = 14745,
			.ram = notb_final_ram_21,
			.ram_len = 10,
		},
		.transactions = notb_transactions_21,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "022 NOT.b (A5) 4615",
		.initial = {
			.regs = {
				3956490080, 224739010, 1881153321, 2152197783, 3135748160, 1423257448, 1707830319, 1339148758, 1812152649, 3675913278, 2414982387, 3403101986, 1874713336, 1704348938, 1382118282, 7170296, 8067234, 34050, 8095618
			},
			.prefetch0 = 17941,
			.prefetch1 = 9849,
			.ram = notb_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3956490080, 224739010, 1881153321, 2152197783, 3135748160, 1423257448, 1707830319, 1339148758, 1812152649, 3675913278, 2414982387, 3403101986, 1874713336, 1704348938, 1382118282, 7170296, 8067234, 34056, 8095620
			},
			.prefetch0 = 9849,
			.prefetch1 = 52511,
			.ram = notb_final_ram_22,
			.ram_len = 8,
		},
		.transactions = notb_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 NOT.b (A6)+ 461e",
		.initial = {
			.regs = {
				777235786, 2800819547, 972134862, 3437709555, 1258534376, 73578333, 1053964705, 3725983802, 3464487708, 2026877856, 3445873869, 1163648482, 1263388876, 296440115, 1906021288, 10743966, 13747056, 8962, 13114852
			},
			.prefetch0 = 17950,
			.prefetch1 = 54366,
			.ram = notb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				777235786, 2800819547, 972134862, 3437709555, 1258534376, 73578333, 1053964705, 3725983802, 3464487708, 2026877856, 3445873869, 1163648482, 1263388876, 296440115, 1906021289, 10743966, 13747056, 8968, 13114854
			},
			.prefetch0 = 54366,
			.prefetch1 = 56224,
			.ram = notb_final_ram_23,
			.ram_len = 8,
		},
		.transactions = notb_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 NOT.b (d8, A4, Xn) 4634",
		.initial = {
			.regs = {
				2205652539, 1305698367, 257623546, 3508601857, 667561043, 1194219666, 1547453281, 2868690490, 2722355389, 525694885, 2037549087, 1353719645, 4056098379, 2159584633, 112782154, 16182624, 13859326, 9225, 7021146
			},
			.prefetch0 = 17972,
			.prefetch1 = 55364,
			.ram = notb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2205652539, 1305698367, 257623546, 3508601857, 667561043, 1194219666, 1547453281, 2868690490, 2722355389, 525694885, 2037549087, 1353719645, 4056098379, 2159584633, 112782154, 16182624, 13859326, 9224, 7021150
			},
			.prefetch0 = 43508,
			.prefetch1 = 37454,
			.ram = notb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = notb_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 NOT.b (A7)+ 461f",
		.initial = {
			.regs = {
				2942905730, 2548226565, 808871932, 1042182864, 2565133248, 2282513169, 874593993, 1804432013, 3850303990, 2143169720, 3908824292, 1711952454, 2906635815, 2917498903, 1360148213, 4134186, 13882662, 8208, 3255322
			},
			.prefetch0 = 17951,
			.prefetch1 = 45394,
			.ram = notb_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2942905730, 2548226565, 808871932, 1042182864, 2565133248, 2282513169, 874593993, 1804432013, 3850303990, 2143169720, 3908824292, 1711952454, 2906635815, 2917498903, 1360148213, 4134186, 13882664, 8216, 3255324
			},
			.prefetch0 = 45394,
			.prefetch1 = 983,
			.ram = notb_final_ram_25,
			.ram_len = 8,
		},
		.transactions = notb_transactions_25,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "026 NOT.b (d16, A2) 462a",
		.initial = {
			.regs = {
				2664500032, 248915717, 380769100, 89503066, 1773507600, 3781384385, 1545484037, 1976401965, 598697810, 1560635107, 3187392428, 2251482473, 3931069672, 3187376628, 3645486591, 10157676, 3169700, 543, 5889062
			},
			.prefetch0 = 17962,
			.prefetch1 = 58951,
			.ram = notb_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2664500032, 248915717, 380769100, 89503066, 1773507600, 3781384385, 1545484037, 1976401965, 598697810, 1560635107, 3187392428, 2251482473, 3931069672, 3187376628, 3645486591, 10157676, 3169700, 536, 5889066
			},
			.prefetch0 = 53116,
			.prefetch1 = 26122,
			.ram = notb_final_ram_26,
			.ram_len = 10,
		},
		.transactions = notb_transactions_26,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "027 NOT.b D1 4601",
		.initial = {
			.regs = {
				3468065590, 1938134225, 430404607, 3170316163, 63212258, 128927083, 1649586742, 1554943423, 1974508695, 3692144308, 1280576977, 2724973729, 3575846189, 1844108924, 2884088749, 7783988, 3996758, 8721, 12258184
			},
			.prefetch0 = 17921,
			.prefetch1 = 9540,
			.ram = notb_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3468065590, 1938134062, 430404607, 3170316163, 63212258, 128927083, 1649586742, 1554943423, 1974508695, 3692144308, 1280576977, 2724973729, 3575846189, 1844108924, 2884088749, 7783988, 3996758, 8720, 12258186
			},
			.prefetch0 = 9540,
			.prefetch1 = 28387,
			.ram = notb_final_ram_27,
			.ram_len = 6,
		},
		.transactions = notb_transactions_27,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "028 NOT.b (d8, A3, Xn) 4633",
		.initial = {
			.regs = {
				4259648004, 1156666107, 2105239176, 2107076149, 3867881363, 403558338, 4239112352, 3301894765, 3512342624, 1913316739, 2679115026, 2492271028, 388351782, 240865871, 657118176, 2796238, 4579734, 1550, 13388460
			},
			.prefetch0 = 17971,
			.prefetch1 = 28323,
			.ram = notb_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4259648004, 1156666107, 2105239176, 2107076149, 3867881363, 403558338, 4239112352, 3301894765, 3512342624, 1913316739, 2679115026, 2492271028, 388351782, 240865871, 657118176, 2796238, 4579734, 1544, 13388464
			},
			.prefetch0 = 32620,
			.prefetch1 = 27183,
			.ram = notb_final_ram_28,
			.ram_len = 10,
		},
		.transactions = notb_transactions_28,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "029 NOT.b -(A7) 4627",
		.initial = {
			.regs = {
				3801291776, 1765190253, 3517370515, 1606500070, 30433957, 1296265406, 3008128048, 3855946258, 1504013569, 3206854200, 648934132, 1178608220, 863707198, 1209193353, 1970949660, 1022610, 15085106, 32779, 7754746
			},
			.prefetch0 = 17959,
			.prefetch1 = 7343,
			.ram = notb_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3801291776, 1765190253, 3517370515, 1606500070, 30433957, 1296265406, 3008128048, 3855946258, 1504013569, 3206854200, 648934132, 1178608220, 863707198, 1209193353, 1970949660, 1022608, 15085106, 32768, 7754748
			},
			.prefetch0 = 7343,
			.prefetch1 = 44732,
			.ram = notb_final_ram_29,
			.ram_len = 8,
		},
		.transactions = notb_transactions_29,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "030 NOT.b (d16, A3) 462b",
		.initial = {
			.regs = {
				2599212975, 3068903100, 385053974, 3288787361, 2971482214, 2122665093, 4019681744, 1259634276, 865751369, 192429615, 222628184, 2218628332, 478876430, 656878093, 4161109448, 11423016, 4006428, 34590, 16150234
			},
			.prefetch0 = 17963,
			.prefetch1 = 64879,
			.ram = notb_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2599212975, 3068903100, 385053974, 3288787361, 2971482214, 2122665093, 4019681744, 1259634276, 865751369, 192429615, 222628184, 2218628332, 478876430, 656878093, 4161109448, 11423016, 4006428, 34576, 16150238
			},
			.prefetch0 = 59957,
			.prefetch1 = 57564,
			.ram = notb_final_ram_30,
			.ram_len = 10,
		},
		.transactions = notb_transactions_30,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "031 NOT.b (A6)+ 461e",
		.initial = {
			.regs = {
				3463160448, 2224262130, 2646956651, 4164176556, 4010695652, 1211085893, 2296501485, 2428521617, 1121646440, 3663568807, 3976468734, 1415518850, 2987248675, 1752580958, 4257656217, 4587150, 16056208, 257, 14379480
			},
			.prefetch0 = 17950,
			.prefetch1 = 30031,
			.ram = notb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3463160448, 2224262130, 2646956651, 4164176556, 4010695652, 1211085893, 2296501485, 2428521617, 1121646440, 3663568807, 3976468734, 1415518850, 2987248675, 1752580958, 4257656218, 4587150, 16056208, 264, 14379482
			},
			.prefetch0 = 30031,
			.prefetch1 = 15716,
			.ram = notb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = notb_transactions_31,
		.transactions_len = 3,
		.lenght = 12,
	},
};

#endif /* RBT_NOTB_H */