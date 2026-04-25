#ifndef RBT_ANDB_H
#define RBT_ANDB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte andb_initial_ram_0[] = {
		{ .addr = 0xd785fc, .byte = 0xcd },
		{ .addr = 0xd785fd, .byte = 0x11 },
		{ .addr = 0xd785fe, .byte = 0x45 },
		{ .addr = 0xd785ff, .byte = 0xae },
		{ .addr = 0x47f4fc, .byte = 0x68 },
		{ .addr = 0x47f4fd, .byte = 0x2c },
		{ .addr = 0xd78600, .byte = 0xd8 },
		{ .addr = 0xd78601, .byte = 0x34 }
};

static const SST_RamByte andb_final_ram_0[] = {
		{ .addr = 0xd785fc, .byte = 0xcd },
		{ .addr = 0xd785fd, .byte = 0x11 },
		{ .addr = 0xd785fe, .byte = 0x45 },
		{ .addr = 0xd785ff, .byte = 0xae },
		{ .addr = 0x47f4fc, .byte = 0x68 },
		{ .addr = 0x47f4fd, .byte = 0x08 },
		{ .addr = 0xd78600, .byte = 0xd8 },
		{ .addr = 0xd78601, .byte = 0x34 }
};

static const SST_Transaction andb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4715772, .data = 44, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14124544, .data = 55348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4715772, .data = 8, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_1[] = {
		{ .addr = 0xbf343c, .byte = 0xcf },
		{ .addr = 0xbf343d, .byte = 0x23 },
		{ .addr = 0xbf343e, .byte = 0x73 },
		{ .addr = 0xbf343f, .byte = 0xa5 },
		{ .addr = 0x7babe2, .byte = 0xa5 },
		{ .addr = 0x7babe3, .byte = 0x3b },
		{ .addr = 0xbf3440, .byte = 0xfd },
		{ .addr = 0xbf3441, .byte = 0xdc }
};

static const SST_RamByte andb_final_ram_1[] = {
		{ .addr = 0xbf343c, .byte = 0xcf },
		{ .addr = 0xbf343d, .byte = 0x23 },
		{ .addr = 0xbf343e, .byte = 0x73 },
		{ .addr = 0xbf343f, .byte = 0xa5 },
		{ .addr = 0x7babe2, .byte = 0xa5 },
		{ .addr = 0x7babe3, .byte = 0x2b },
		{ .addr = 0xbf3440, .byte = 0xfd },
		{ .addr = 0xbf3441, .byte = 0xdc }
};

static const SST_Transaction andb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8104930, .data = 59, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12530752, .data = 64988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8104930, .data = 43, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_2[] = {
		{ .addr = 0x58a12e, .byte = 0x02 },
		{ .addr = 0x58a12f, .byte = 0x2d },
		{ .addr = 0x58a130, .byte = 0xac },
		{ .addr = 0x58a131, .byte = 0xb7 },
		{ .addr = 0x58a132, .byte = 0x89 },
		{ .addr = 0x58a133, .byte = 0x6f },
		{ .addr = 0x58a134, .byte = 0x9f },
		{ .addr = 0x58a135, .byte = 0xee },
		{ .addr = 0xefc3a6, .byte = 0x10 },
		{ .addr = 0xefc3a7, .byte = 0x00 },
		{ .addr = 0x58a136, .byte = 0xb0 },
		{ .addr = 0x58a137, .byte = 0x97 }
};

static const SST_RamByte andb_final_ram_2[] = {
		{ .addr = 0x58a12e, .byte = 0x02 },
		{ .addr = 0x58a12f, .byte = 0x2d },
		{ .addr = 0x58a130, .byte = 0xac },
		{ .addr = 0x58a131, .byte = 0xb7 },
		{ .addr = 0x58a132, .byte = 0x89 },
		{ .addr = 0x58a133, .byte = 0x6f },
		{ .addr = 0x58a134, .byte = 0x9f },
		{ .addr = 0x58a135, .byte = 0xee },
		{ .addr = 0xefc3a6, .byte = 0x10 },
		{ .addr = 0xefc3a7, .byte = 0x00 },
		{ .addr = 0x58a136, .byte = 0xb0 },
		{ .addr = 0x58a137, .byte = 0x97 }
};

static const SST_Transaction andb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5808434, .data = 35183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5808436, .data = 40942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15713190, .data = 4096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5808438, .data = 45207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15713190, .data = 4096, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_3[] = {
		{ .addr = 0x71ecc4, .byte = 0xc8 },
		{ .addr = 0x71ecc5, .byte = 0x2b },
		{ .addr = 0x71ecc6, .byte = 0x86 },
		{ .addr = 0x71ecc7, .byte = 0x34 },
		{ .addr = 0x71ecc8, .byte = 0x4a },
		{ .addr = 0x71ecc9, .byte = 0x75 },
		{ .addr = 0xb19f12, .byte = 0x5d },
		{ .addr = 0xb19f13, .byte = 0x67 },
		{ .addr = 0x71ecca, .byte = 0x62 },
		{ .addr = 0x71eccb, .byte = 0xd9 }
};

static const SST_RamByte andb_final_ram_3[] = {
		{ .addr = 0x71ecc4, .byte = 0xc8 },
		{ .addr = 0x71ecc5, .byte = 0x2b },
		{ .addr = 0x71ecc6, .byte = 0x86 },
		{ .addr = 0x71ecc7, .byte = 0x34 },
		{ .addr = 0x71ecc8, .byte = 0x4a },
		{ .addr = 0x71ecc9, .byte = 0x75 },
		{ .addr = 0xb19f12, .byte = 0x5d },
		{ .addr = 0xb19f13, .byte = 0x67 },
		{ .addr = 0x71ecca, .byte = 0x62 },
		{ .addr = 0x71eccb, .byte = 0xd9 }
};

static const SST_Transaction andb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7466184, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11640594, .data = 23808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7466186, .data = 25305, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_4[] = {
		{ .addr = 0xa87662, .byte = 0xcf },
		{ .addr = 0xa87663, .byte = 0x33 },
		{ .addr = 0xa87664, .byte = 0xa6 },
		{ .addr = 0xa87665, .byte = 0xb5 },
		{ .addr = 0xa87666, .byte = 0x8b },
		{ .addr = 0xa87667, .byte = 0xd5 },
		{ .addr = 0xa4bbe8, .byte = 0x9c },
		{ .addr = 0xa4bbe9, .byte = 0xd1 },
		{ .addr = 0xa87668, .byte = 0x0f },
		{ .addr = 0xa87669, .byte = 0x45 }
};

static const SST_RamByte andb_final_ram_4[] = {
		{ .addr = 0xa87662, .byte = 0xcf },
		{ .addr = 0xa87663, .byte = 0x33 },
		{ .addr = 0xa87664, .byte = 0xa6 },
		{ .addr = 0xa87665, .byte = 0xb5 },
		{ .addr = 0xa87666, .byte = 0x8b },
		{ .addr = 0xa87667, .byte = 0xd5 },
		{ .addr = 0xa4bbe8, .byte = 0x9c },
		{ .addr = 0xa4bbe9, .byte = 0xc1 },
		{ .addr = 0xa87668, .byte = 0x0f },
		{ .addr = 0xa87669, .byte = 0x45 }
};

static const SST_Transaction andb_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11040358, .data = 35797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10796008, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11040360, .data = 3909, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10796008, .data = 193, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_5[] = {
		{ .addr = 0x96f842, .byte = 0xc6 },
		{ .addr = 0x96f843, .byte = 0x2f },
		{ .addr = 0x96f844, .byte = 0x9c },
		{ .addr = 0x96f845, .byte = 0x4d },
		{ .addr = 0x96f846, .byte = 0xcb },
		{ .addr = 0x96f847, .byte = 0x65 },
		{ .addr = 0xa4fd34, .byte = 0x41 },
		{ .addr = 0xa4fd35, .byte = 0xe2 },
		{ .addr = 0x96f848, .byte = 0x45 },
		{ .addr = 0x96f849, .byte = 0x2f }
};

static const SST_RamByte andb_final_ram_5[] = {
		{ .addr = 0x96f842, .byte = 0xc6 },
		{ .addr = 0x96f843, .byte = 0x2f },
		{ .addr = 0x96f844, .byte = 0x9c },
		{ .addr = 0x96f845, .byte = 0x4d },
		{ .addr = 0x96f846, .byte = 0xcb },
		{ .addr = 0x96f847, .byte = 0x65 },
		{ .addr = 0xa4fd34, .byte = 0x41 },
		{ .addr = 0xa4fd35, .byte = 0xe2 },
		{ .addr = 0x96f848, .byte = 0x45 },
		{ .addr = 0x96f849, .byte = 0x2f }
};

static const SST_Transaction andb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9893958, .data = 52069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10812724, .data = 226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9893960, .data = 17711, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_6[] = {
		{ .addr = 0x9c43dc, .byte = 0xc6 },
		{ .addr = 0x9c43dd, .byte = 0x20 },
		{ .addr = 0x9c43de, .byte = 0x0d },
		{ .addr = 0x9c43df, .byte = 0xa8 },
		{ .addr = 0x424816, .byte = 0x8b },
		{ .addr = 0x424817, .byte = 0x27 },
		{ .addr = 0x9c43e0, .byte = 0x3c },
		{ .addr = 0x9c43e1, .byte = 0xbb }
};

static const SST_RamByte andb_final_ram_6[] = {
		{ .addr = 0x9c43dc, .byte = 0xc6 },
		{ .addr = 0x9c43dd, .byte = 0x20 },
		{ .addr = 0x9c43de, .byte = 0x0d },
		{ .addr = 0x9c43df, .byte = 0xa8 },
		{ .addr = 0x424816, .byte = 0x8b },
		{ .addr = 0x424817, .byte = 0x27 },
		{ .addr = 0x9c43e0, .byte = 0x3c },
		{ .addr = 0x9c43e1, .byte = 0xbb }
};

static const SST_Transaction andb_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4343830, .data = 39, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10240992, .data = 15547, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_7[] = {
		{ .addr = 0xd183ba, .byte = 0xc5 },
		{ .addr = 0xd183bb, .byte = 0x21 },
		{ .addr = 0xd183bc, .byte = 0x20 },
		{ .addr = 0xd183bd, .byte = 0xc4 },
		{ .addr = 0x54b2d0, .byte = 0x3d },
		{ .addr = 0x54b2d1, .byte = 0x98 },
		{ .addr = 0xd183be, .byte = 0xde },
		{ .addr = 0xd183bf, .byte = 0x7d }
};

static const SST_RamByte andb_final_ram_7[] = {
		{ .addr = 0xd183ba, .byte = 0xc5 },
		{ .addr = 0xd183bb, .byte = 0x21 },
		{ .addr = 0xd183bc, .byte = 0x20 },
		{ .addr = 0xd183bd, .byte = 0xc4 },
		{ .addr = 0x54b2d0, .byte = 0x15 },
		{ .addr = 0x54b2d1, .byte = 0x98 },
		{ .addr = 0xd183be, .byte = 0xde },
		{ .addr = 0xd183bf, .byte = 0x7d }
};

static const SST_Transaction andb_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5550800, .data = 15616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13730750, .data = 56957, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5550800, .data = 5376, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_8[] = {
		{ .addr = 0xee1e4e, .byte = 0xc5 },
		{ .addr = 0xee1e4f, .byte = 0x1a },
		{ .addr = 0xee1e50, .byte = 0x9e },
		{ .addr = 0xee1e51, .byte = 0x5c },
		{ .addr = 0x4934b4, .byte = 0xe2 },
		{ .addr = 0x4934b5, .byte = 0xac },
		{ .addr = 0xee1e52, .byte = 0x75 },
		{ .addr = 0xee1e53, .byte = 0x76 }
};

static const SST_RamByte andb_final_ram_8[] = {
		{ .addr = 0xee1e4e, .byte = 0xc5 },
		{ .addr = 0xee1e4f, .byte = 0x1a },
		{ .addr = 0xee1e50, .byte = 0x9e },
		{ .addr = 0xee1e51, .byte = 0x5c },
		{ .addr = 0x4934b4, .byte = 0xe2 },
		{ .addr = 0x4934b5, .byte = 0x2c },
		{ .addr = 0xee1e52, .byte = 0x75 },
		{ .addr = 0xee1e53, .byte = 0x76 }
};

static const SST_Transaction andb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4797620, .data = 172, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15605330, .data = 30070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4797620, .data = 44, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_9[] = {
		{ .addr = 0x227080, .byte = 0xc4 },
		{ .addr = 0x227081, .byte = 0x37 },
		{ .addr = 0x227082, .byte = 0xff },
		{ .addr = 0x227083, .byte = 0xb6 },
		{ .addr = 0x227084, .byte = 0x33 },
		{ .addr = 0x227085, .byte = 0x9c },
		{ .addr = 0xac5e92, .byte = 0x97 },
		{ .addr = 0xac5e93, .byte = 0x78 },
		{ .addr = 0x227086, .byte = 0x60 },
		{ .addr = 0x227087, .byte = 0x00 }
};

static const SST_RamByte andb_final_ram_9[] = {
		{ .addr = 0x227080, .byte = 0xc4 },
		{ .addr = 0x227081, .byte = 0x37 },
		{ .addr = 0x227082, .byte = 0xff },
		{ .addr = 0x227083, .byte = 0xb6 },
		{ .addr = 0x227084, .byte = 0x33 },
		{ .addr = 0x227085, .byte = 0x9c },
		{ .addr = 0xac5e92, .byte = 0x97 },
		{ .addr = 0xac5e93, .byte = 0x78 },
		{ .addr = 0x227086, .byte = 0x60 },
		{ .addr = 0x227087, .byte = 0x00 }
};

static const SST_Transaction andb_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2257028, .data = 13212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11296402, .data = 38656, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2257030, .data = 24576, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_10[] = {
		{ .addr = 0x7709b8, .byte = 0xcb },
		{ .addr = 0x7709b9, .byte = 0x10 },
		{ .addr = 0x7709ba, .byte = 0xaf },
		{ .addr = 0x7709bb, .byte = 0xba },
		{ .addr = 0x835c24, .byte = 0x7b },
		{ .addr = 0x835c25, .byte = 0xec },
		{ .addr = 0x7709bc, .byte = 0x8b },
		{ .addr = 0x7709bd, .byte = 0x3d }
};

static const SST_RamByte andb_final_ram_10[] = {
		{ .addr = 0x7709b8, .byte = 0xcb },
		{ .addr = 0x7709b9, .byte = 0x10 },
		{ .addr = 0x7709ba, .byte = 0xaf },
		{ .addr = 0x7709bb, .byte = 0xba },
		{ .addr = 0x835c24, .byte = 0x7b },
		{ .addr = 0x835c25, .byte = 0x6c },
		{ .addr = 0x7709bc, .byte = 0x8b },
		{ .addr = 0x7709bd, .byte = 0x3d }
};

static const SST_Transaction andb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608804, .data = 236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7801276, .data = 35645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608804, .data = 108, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_11[] = {
		{ .addr = 0x6d5c9a, .byte = 0xc8 },
		{ .addr = 0x6d5c9b, .byte = 0x1c },
		{ .addr = 0x6d5c9c, .byte = 0x9a },
		{ .addr = 0x6d5c9d, .byte = 0x69 },
		{ .addr = 0x6a697c, .byte = 0x07 },
		{ .addr = 0x6a697d, .byte = 0xf3 },
		{ .addr = 0x6d5c9e, .byte = 0x62 },
		{ .addr = 0x6d5c9f, .byte = 0x1d }
};

static const SST_RamByte andb_final_ram_11[] = {
		{ .addr = 0x6d5c9a, .byte = 0xc8 },
		{ .addr = 0x6d5c9b, .byte = 0x1c },
		{ .addr = 0x6d5c9c, .byte = 0x9a },
		{ .addr = 0x6d5c9d, .byte = 0x69 },
		{ .addr = 0x6a697c, .byte = 0x07 },
		{ .addr = 0x6a697d, .byte = 0xf3 },
		{ .addr = 0x6d5c9e, .byte = 0x62 },
		{ .addr = 0x6d5c9f, .byte = 0x1d }
};

static const SST_Transaction andb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6973820, .data = 1792, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7167134, .data = 25117, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_12[] = {
		{ .addr = 0x04ca82, .byte = 0xc2 },
		{ .addr = 0x04ca83, .byte = 0x11 },
		{ .addr = 0x04ca84, .byte = 0xb1 },
		{ .addr = 0x04ca85, .byte = 0xe8 },
		{ .addr = 0xe3f376, .byte = 0x18 },
		{ .addr = 0xe3f377, .byte = 0x3e },
		{ .addr = 0x04ca86, .byte = 0xe1 },
		{ .addr = 0x04ca87, .byte = 0xa1 }
};

static const SST_RamByte andb_final_ram_12[] = {
		{ .addr = 0x04ca82, .byte = 0xc2 },
		{ .addr = 0x04ca83, .byte = 0x11 },
		{ .addr = 0x04ca84, .byte = 0xb1 },
		{ .addr = 0x04ca85, .byte = 0xe8 },
		{ .addr = 0xe3f376, .byte = 0x18 },
		{ .addr = 0xe3f377, .byte = 0x3e },
		{ .addr = 0x04ca86, .byte = 0xe1 },
		{ .addr = 0x04ca87, .byte = 0xa1 }
};

static const SST_Transaction andb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14938998, .data = 6144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 313990, .data = 57761, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_13[] = {
		{ .addr = 0xb6fd84, .byte = 0xc6 },
		{ .addr = 0xb6fd85, .byte = 0x1c },
		{ .addr = 0xb6fd86, .byte = 0xec },
		{ .addr = 0xb6fd87, .byte = 0xb9 },
		{ .addr = 0x568bbc, .byte = 0xc4 },
		{ .addr = 0x568bbd, .byte = 0x36 },
		{ .addr = 0xb6fd88, .byte = 0xda },
		{ .addr = 0xb6fd89, .byte = 0x93 }
};

static const SST_RamByte andb_final_ram_13[] = {
		{ .addr = 0xb6fd84, .byte = 0xc6 },
		{ .addr = 0xb6fd85, .byte = 0x1c },
		{ .addr = 0xb6fd86, .byte = 0xec },
		{ .addr = 0xb6fd87, .byte = 0xb9 },
		{ .addr = 0x568bbc, .byte = 0xc4 },
		{ .addr = 0x568bbd, .byte = 0x36 },
		{ .addr = 0xb6fd88, .byte = 0xda },
		{ .addr = 0xb6fd89, .byte = 0x93 }
};

static const SST_Transaction andb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5671868, .data = 50176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11992456, .data = 55955, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_14[] = {
		{ .addr = 0x4812b6, .byte = 0xc1 },
		{ .addr = 0x4812b7, .byte = 0x33 },
		{ .addr = 0x4812b8, .byte = 0xff },
		{ .addr = 0x4812b9, .byte = 0x4d },
		{ .addr = 0x4812ba, .byte = 0x39 },
		{ .addr = 0x4812bb, .byte = 0x1e },
		{ .addr = 0xa4b694, .byte = 0xa2 },
		{ .addr = 0xa4b695, .byte = 0xea },
		{ .addr = 0x4812bc, .byte = 0xd0 },
		{ .addr = 0x4812bd, .byte = 0x53 }
};

static const SST_RamByte andb_final_ram_14[] = {
		{ .addr = 0x4812b6, .byte = 0xc1 },
		{ .addr = 0x4812b7, .byte = 0x33 },
		{ .addr = 0x4812b8, .byte = 0xff },
		{ .addr = 0x4812b9, .byte = 0x4d },
		{ .addr = 0x4812ba, .byte = 0x39 },
		{ .addr = 0x4812bb, .byte = 0x1e },
		{ .addr = 0xa4b694, .byte = 0xa2 },
		{ .addr = 0xa4b695, .byte = 0xaa },
		{ .addr = 0x4812bc, .byte = 0xd0 },
		{ .addr = 0x4812bd, .byte = 0x53 }
};

static const SST_Transaction andb_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4723386, .data = 14622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10794644, .data = 234, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4723388, .data = 53331, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10794644, .data = 170, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_15[] = {
		{ .addr = 0xe21522, .byte = 0xc6 },
		{ .addr = 0xe21523, .byte = 0x24 },
		{ .addr = 0xe21524, .byte = 0x42 },
		{ .addr = 0xe21525, .byte = 0xf8 },
		{ .addr = 0xc4e8e2, .byte = 0x8d },
		{ .addr = 0xc4e8e3, .byte = 0x1c },
		{ .addr = 0xe21526, .byte = 0xb5 },
		{ .addr = 0xe21527, .byte = 0x43 }
};

static const SST_RamByte andb_final_ram_15[] = {
		{ .addr = 0xe21522, .byte = 0xc6 },
		{ .addr = 0xe21523, .byte = 0x24 },
		{ .addr = 0xe21524, .byte = 0x42 },
		{ .addr = 0xe21525, .byte = 0xf8 },
		{ .addr = 0xc4e8e2, .byte = 0x8d },
		{ .addr = 0xc4e8e3, .byte = 0x1c },
		{ .addr = 0xe21526, .byte = 0xb5 },
		{ .addr = 0xe21527, .byte = 0x43 }
};

static const SST_Transaction andb_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12904674, .data = 28, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14816550, .data = 46403, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ANDB_TEST_COUNT = 16;
static const SST_TestCase andb[] = {
	{
		.name = "000 AND.b D6, (A1) cd11",
		.initial = {
			.regs = {
				1410882485, 2524850606, 3640704972, 3188579189, 2123281346, 2336967668, 631222683, 1838937900, 3602543972, 239596797, 3487352494, 115237367, 4045880333, 2428669306, 4202824057, 1363352, 9697978, 28, 14124544
			},
			.prefetch0 = 52497,
			.prefetch1 = 17838,
			.ram = andb_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1410882485, 2524850606, 3640704972, 3188579189, 2123281346, 2336967668, 631222683, 1838937900, 3602543972, 239596797, 3487352494, 115237367, 4045880333, 2428669306, 4202824057, 1363352, 9697978, 16, 14124546
			},
			.prefetch0 = 17838,
			.prefetch1 = 55348,
			.ram = andb_final_ram_0,
			.ram_len = 8,
		},
		.transactions = andb_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 AND.b D7, -(A3) cf23",
		.initial = {
			.regs = {
				2216047117, 3981288001, 3673816827, 4119102179, 4188716941, 3074823836, 1209720401, 668571887, 2031049165, 923630683, 3066257497, 58436580, 3776984362, 721609114, 738325107, 9050152, 4127600, 1297, 12530752
			},
			.prefetch0 = 53027,
			.prefetch1 = 29605,
			.ram = andb_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2216047117, 3981288001, 3673816827, 4119102179, 4188716941, 3074823836, 1209720401, 668571887, 2031049165, 923630683, 3066257497, 58436579, 3776984362, 721609114, 738325107, 9050152, 4127600, 1296, 12530754
			},
			.prefetch0 = 29605,
			.prefetch1 = 64988,
			.ram = andb_final_ram_1,
			.ram_len = 8,
		},
		.transactions = andb_transactions_1,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "002 AND.b #, (d16, A5) 022d",
		.initial = {
			.regs = {
				1463483397, 2070730708, 1612615041, 3109605071, 2575586628, 717228107, 2964351329, 2196792176, 3035700485, 3102525069, 1127369500, 99675565, 3840380283, 2666543671, 3068315849, 12936558, 502868, 42525, 5808434
			},
			.prefetch0 = 557,
			.prefetch1 = 44215,
			.ram = andb_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1463483397, 2070730708, 1612615041, 3109605071, 2575586628, 717228107, 2964351329, 2196792176, 3035700485, 3102525069, 1127369500, 99675565, 3840380283, 2666543671, 3068315849, 12936558, 502868, 42512, 5808440
			},
			.prefetch0 = 40942,
			.prefetch1 = 45207,
			.ram = andb_final_ram_2,
			.ram_len = 12,
		},
		.transactions = andb_transactions_2,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "003 AND.b (d16, A3), D4 c82b",
		.initial = {
			.regs = {
				3056909007, 1280535822, 3940750143, 4115007428, 766161483, 3134384930, 2193954361, 2927210794, 37752782, 2680255910, 2417511356, 2058492126, 3710879680, 4287290600, 3907899983, 15649970, 1295958, 41480, 7466184
			},
			.prefetch0 = 51243,
			.prefetch1 = 34356,
			.ram = andb_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3056909007, 1280535822, 3940750143, 4115007428, 766161481, 3134384930, 2193954361, 2927210794, 37752782, 2680255910, 2417511356, 2058492126, 3710879680, 4287290600, 3907899983, 15649970, 1295958, 41472, 7466188
			},
			.prefetch0 = 19061,
			.prefetch1 = 25305,
			.ram = andb_final_ram_3,
			.ram_len = 10,
		},
		.transactions = andb_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 AND.b D7, (d8, A3, Xn) cf33",
		.initial = {
			.regs = {
				1774198043, 2927220140, 3542183399, 3718144428, 1618351610, 2214769727, 1980844814, 3509906117, 994635758, 3036042321, 2545502814, 1134850518, 22853334, 2865964811, 358022428, 3906084, 14411498, 42257, 11040358
			},
			.prefetch0 = 53043,
			.prefetch1 = 42677,
			.ram = andb_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1774198043, 2927220140, 3542183399, 3718144428, 1618351610, 2214769727, 1980844814, 3509906117, 994635758, 3036042321, 2545502814, 1134850518, 22853334, 2865964811, 358022428, 3906084, 14411498, 42264, 11040362
			},
			.prefetch0 = 35797,
			.prefetch1 = 3909,
			.ram = andb_final_ram_4,
			.ram_len = 10,
		},
		.transactions = andb_transactions_4,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "005 AND.b (d16, A7), D3 c62f",
		.initial = {
			.regs = {
				2630389265, 1293125446, 189713339, 3932431990, 1327097920, 601220224, 584345375, 633973886, 3367338685, 2286614209, 392503654, 824013253, 867230635, 2257521664, 1548553590, 37640, 10838248, 42768, 9893958
			},
			.prefetch0 = 50735,
			.prefetch1 = 40013,
			.ram = andb_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2630389265, 1293125446, 189713339, 3932431970, 1327097920, 601220224, 584345375, 633973886, 3367338685, 2286614209, 392503654, 824013253, 867230635, 2257521664, 1548553590, 37640, 10838248, 42768, 9893962
			},
			.prefetch0 = 52069,
			.prefetch1 = 17711,
			.ram = andb_final_ram_5,
			.ram_len = 10,
		},
		.transactions = andb_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 AND.b -(A0), D3 c620",
		.initial = {
			.regs = {
				2302410425, 3669321632, 100730916, 263822315, 3785665103, 3245314019, 2150816952, 1989383674, 440551448, 2927734716, 1654258847, 66855003, 4043629354, 4051430065, 3657901520, 4127584, 6378872, 32768, 10240992
			},
			.prefetch0 = 50720,
			.prefetch1 = 3496,
			.ram = andb_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2302410425, 3669321632, 100730916, 263822115, 3785665103, 3245314019, 2150816952, 1989383674, 440551447, 2927734716, 1654258847, 66855003, 4043629354, 4051430065, 3657901520, 4127584, 6378872, 32768, 10240994
			},
			.prefetch0 = 3496,
			.prefetch1 = 15547,
			.ram = andb_final_ram_6,
			.ram_len = 8,
		},
		.transactions = andb_transactions_6,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "007 AND.b D2, -(A1) c521",
		.initial = {
			.regs = {
				3799935369, 4020396336, 294582293, 348289506, 2384280856, 757638541, 2342069666, 3591423833, 1851262853, 1096069841, 2619746498, 3714436931, 3585027494, 396272900, 4203318497, 3233186, 15814256, 40971, 13730750
			},
			.prefetch0 = 50465,
			.prefetch1 = 8388,
			.ram = andb_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3799935369, 4020396336, 294582293, 348289506, 2384280856, 757638541, 2342069666, 3591423833, 1851262853, 1096069840, 2619746498, 3714436931, 3585027494, 396272900, 4203318497, 3233186, 15814256, 40960, 13730752
			},
			.prefetch0 = 8388,
			.prefetch1 = 56957,
			.ram = andb_final_ram_7,
			.ram_len = 8,
		},
		.transactions = andb_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 AND.b D2, (A2)+ c51a",
		.initial = {
			.regs = {
				557844450, 1693248207, 1949675630, 12543662, 2358296487, 3168064642, 2867797449, 283710449, 398894427, 927958867, 3796448437, 2060749820, 2778062857, 4264945476, 120029456, 11738436, 14231004, 32788, 15605330
			},
			.prefetch0 = 50458,
			.prefetch1 = 40540,
			.ram = andb_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				557844450, 1693248207, 1949675630, 12543662, 2358296487, 3168064642, 2867797449, 283710449, 398894427, 927958867, 3796448438, 2060749820, 2778062857, 4264945476, 120029456, 11738436, 14231004, 32784, 15605332
			},
			.prefetch0 = 40540,
			.prefetch1 = 30070,
			.ram = andb_final_ram_8,
			.ram_len = 8,
		},
		.transactions = andb_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 AND.b (d8, A7, Xn), D2 c437",
		.initial = {
			.regs = {
				2528615680, 109789433, 750584429, 3805913426, 1459975591, 1874256524, 2474439905, 2280850672, 789269376, 1205666361, 404994625, 730077949, 510030873, 1300687165, 1206805095, 14036846, 8456586, 1549, 2257028
			},
			.prefetch0 = 50231,
			.prefetch1 = 65462,
			.ram = andb_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2528615680, 109789433, 750584325, 3805913426, 1459975591, 1874256524, 2474439905, 2280850672, 789269376, 1205666361, 404994625, 730077949, 510030873, 1300687165, 1206805095, 14036846, 8456586, 1536, 2257032
			},
			.prefetch0 = 13212,
			.prefetch1 = 24576,
			.ram = andb_final_ram_9,
			.ram_len = 10,
		},
		.transactions = andb_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 AND.b D5, (A0) cb10",
		.initial = {
			.regs = {
				397647805, 2628029154, 3040098903, 3504620241, 1433028313, 1821939309, 831436779, 1358348749, 1115905061, 448929583, 3382775764, 1801111760, 4009617441, 1063960837, 2489235547, 6952414, 11201042, 40981, 7801276
			},
			.prefetch0 = 51984,
			.prefetch1 = 44986,
			.ram = andb_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				397647805, 2628029154, 3040098903, 3504620241, 1433028313, 1821939309, 831436779, 1358348749, 1115905061, 448929583, 3382775764, 1801111760, 4009617441, 1063960837, 2489235547, 6952414, 11201042, 40976, 7801278
			},
			.prefetch0 = 44986,
			.prefetch1 = 35645,
			.ram = andb_final_ram_10,
			.ram_len = 8,
		},
		.transactions = andb_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 AND.b (A4)+, D4 c81c",
		.initial = {
			.regs = {
				504240874, 2435863326, 841146458, 1982195252, 36896223, 1497802996, 3988126919, 188290738, 671229126, 3399291699, 1745927667, 1797961100, 2825546108, 2599355190, 834906450, 14938352, 594948, 34574, 7167134
			},
			.prefetch0 = 51228,
			.prefetch1 = 39529,
			.ram = andb_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				504240874, 2435863326, 841146458, 1982195252, 36896007, 1497802996, 3988126919, 188290738, 671229126, 3399291699, 1745927667, 1797961100, 2825546109, 2599355190, 834906450, 14938352, 594948, 34560, 7167136
			},
			.prefetch0 = 39529,
			.prefetch1 = 25117,
			.ram = andb_final_ram_11,
			.ram_len = 8,
		},
		.transactions = andb_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 AND.b (A1), D1 c211",
		.initial = {
			.regs = {
				870506709, 2673474440, 3895739881, 4123745727, 1910437486, 455417490, 3821360956, 2791370869, 2429650732, 3504599926, 2847498288, 1416663013, 3975591336, 782733759, 2474280997, 15984630, 11705732, 40985, 313990
			},
			.prefetch0 = 49681,
			.prefetch1 = 45544,
			.ram = andb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				870506709, 2673474312, 3895739881, 4123745727, 1910437486, 455417490, 3821360956, 2791370869, 2429650732, 3504599926, 2847498288, 1416663013, 3975591336, 782733759, 2474280997, 15984630, 11705732, 40976, 313992
			},
			.prefetch0 = 45544,
			.prefetch1 = 57761,
			.ram = andb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = andb_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 AND.b (A4)+, D3 c61c",
		.initial = {
			.regs = {
				3905098860, 1912313624, 3691856756, 87224465, 3182507040, 480592278, 2897562286, 4285489900, 2544078120, 2139113428, 114570467, 2645021411, 1096190908, 1725216270, 3832571909, 16261208, 9919472, 9231, 11992456
			},
			.prefetch0 = 50716,
			.prefetch1 = 60601,
			.ram = andb_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3905098860, 1912313624, 3691856756, 87224448, 3182507040, 480592278, 2897562286, 4285489900, 2544078120, 2139113428, 114570467, 2645021411, 1096190909, 1725216270, 3832571909, 16261208, 9919472, 9224, 11992458
			},
			.prefetch0 = 60601,
			.prefetch1 = 55955,
			.ram = andb_final_ram_13,
			.ram_len = 8,
		},
		.transactions = andb_transactions_13,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "014 AND.b D0, (d8, A3, Xn) c133",
		.initial = {
			.regs = {
				4286634922, 3653941815, 3371336301, 4117609041, 3719203296, 2908583397, 1076819537, 3441223574, 1567166521, 35300609, 1292233341, 3243507060, 2018475847, 3175073811, 784212727, 5290196, 14953864, 777, 4723386
			},
			.prefetch0 = 49459,
			.prefetch1 = 65357,
			.ram = andb_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4286634922, 3653941815, 3371336301, 4117609041, 3719203296, 2908583397, 1076819537, 3441223574, 1567166521, 35300609, 1292233341, 3243507060, 2018475847, 3175073811, 784212727, 5290196, 14953864, 776, 4723390
			},
			.prefetch0 = 14622,
			.prefetch1 = 53331,
			.ram = andb_final_ram_14,
			.ram_len = 10,
		},
		.transactions = andb_transactions_14,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "015 AND.b -(A4), D3 c624",
		.initial = {
			.regs = {
				2453911720, 3545186085, 2843899897, 2218769463, 588048523, 2721155027, 134924712, 1968455559, 851437166, 2405106480, 1015577226, 2170674821, 1271195876, 3144509003, 3473553593, 12547814, 3781600, 276, 14816550
			},
			.prefetch0 = 50724,
			.prefetch1 = 17144,
			.ram = andb_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2453911720, 3545186085, 2843899897, 2218769428, 588048523, 2721155027, 134924712, 1968455559, 851437166, 2405106480, 1015577226, 2170674821, 1271195875, 3144509003, 3473553593, 12547814, 3781600, 272, 14816552
			},
			.prefetch0 = 17144,
			.prefetch1 = 46403,
			.ram = andb_final_ram_15,
			.ram_len = 8,
		},
		.transactions = andb_transactions_15,
		.transactions_len = 3,
		.lenght = 10,
	},
};

#endif /* RBT_ANDB_H */