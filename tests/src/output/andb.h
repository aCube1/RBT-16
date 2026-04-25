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

static const SST_RamByte andb_initial_ram_16[] = {
		{ .addr = 0x493e8a, .byte = 0xc6 },
		{ .addr = 0x493e8b, .byte = 0x1c },
		{ .addr = 0x493e8c, .byte = 0x34 },
		{ .addr = 0x493e8d, .byte = 0x57 },
		{ .addr = 0x199c56, .byte = 0x54 },
		{ .addr = 0x199c57, .byte = 0x33 },
		{ .addr = 0x493e8e, .byte = 0x3f },
		{ .addr = 0x493e8f, .byte = 0x13 }
};

static const SST_RamByte andb_final_ram_16[] = {
		{ .addr = 0x493e8a, .byte = 0xc6 },
		{ .addr = 0x493e8b, .byte = 0x1c },
		{ .addr = 0x493e8c, .byte = 0x34 },
		{ .addr = 0x493e8d, .byte = 0x57 },
		{ .addr = 0x199c56, .byte = 0x54 },
		{ .addr = 0x199c57, .byte = 0x33 },
		{ .addr = 0x493e8e, .byte = 0x3f },
		{ .addr = 0x493e8f, .byte = 0x13 }
};

static const SST_Transaction andb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1678422, .data = 21504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4800142, .data = 16147, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_17[] = {
		{ .addr = 0xe6b516, .byte = 0xcf },
		{ .addr = 0xe6b517, .byte = 0x1e },
		{ .addr = 0xe6b518, .byte = 0x9c },
		{ .addr = 0xe6b519, .byte = 0x56 },
		{ .addr = 0xc3a0d0, .byte = 0x18 },
		{ .addr = 0xc3a0d1, .byte = 0xd2 },
		{ .addr = 0xe6b51a, .byte = 0x0f },
		{ .addr = 0xe6b51b, .byte = 0x6a }
};

static const SST_RamByte andb_final_ram_17[] = {
		{ .addr = 0xe6b516, .byte = 0xcf },
		{ .addr = 0xe6b517, .byte = 0x1e },
		{ .addr = 0xe6b518, .byte = 0x9c },
		{ .addr = 0xe6b519, .byte = 0x56 },
		{ .addr = 0xc3a0d0, .byte = 0x10 },
		{ .addr = 0xc3a0d1, .byte = 0xd2 },
		{ .addr = 0xe6b51a, .byte = 0x0f },
		{ .addr = 0xe6b51b, .byte = 0x6a }
};

static const SST_Transaction andb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12820688, .data = 6144, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15119642, .data = 3946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12820688, .data = 4096, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_18[] = {
		{ .addr = 0x5d66d8, .byte = 0xcd },
		{ .addr = 0x5d66d9, .byte = 0x31 },
		{ .addr = 0x5d66da, .byte = 0xec },
		{ .addr = 0x5d66db, .byte = 0x4f },
		{ .addr = 0x5d66dc, .byte = 0xfa },
		{ .addr = 0x5d66dd, .byte = 0xff },
		{ .addr = 0x15f048, .byte = 0x66 },
		{ .addr = 0x15f049, .byte = 0x2b },
		{ .addr = 0x5d66de, .byte = 0x56 },
		{ .addr = 0x5d66df, .byte = 0x83 }
};

static const SST_RamByte andb_final_ram_18[] = {
		{ .addr = 0x5d66d8, .byte = 0xcd },
		{ .addr = 0x5d66d9, .byte = 0x31 },
		{ .addr = 0x5d66da, .byte = 0xec },
		{ .addr = 0x5d66db, .byte = 0x4f },
		{ .addr = 0x5d66dc, .byte = 0xfa },
		{ .addr = 0x5d66dd, .byte = 0xff },
		{ .addr = 0x15f048, .byte = 0x66 },
		{ .addr = 0x15f049, .byte = 0x2b },
		{ .addr = 0x5d66de, .byte = 0x56 },
		{ .addr = 0x5d66df, .byte = 0x83 }
};

static const SST_Transaction andb_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6121180, .data = 64255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1437768, .data = 26112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6121182, .data = 22147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1437768, .data = 26112, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_19[] = {
		{ .addr = 0x2503ba, .byte = 0xcf },
		{ .addr = 0x2503bb, .byte = 0x28 },
		{ .addr = 0x2503bc, .byte = 0x69 },
		{ .addr = 0x2503bd, .byte = 0x87 },
		{ .addr = 0x2503be, .byte = 0x0a },
		{ .addr = 0x2503bf, .byte = 0x0c },
		{ .addr = 0x089862, .byte = 0x69 },
		{ .addr = 0x089863, .byte = 0xcc },
		{ .addr = 0x2503c0, .byte = 0xac },
		{ .addr = 0x2503c1, .byte = 0xa8 }
};

static const SST_RamByte andb_final_ram_19[] = {
		{ .addr = 0x2503ba, .byte = 0xcf },
		{ .addr = 0x2503bb, .byte = 0x28 },
		{ .addr = 0x2503bc, .byte = 0x69 },
		{ .addr = 0x2503bd, .byte = 0x87 },
		{ .addr = 0x2503be, .byte = 0x0a },
		{ .addr = 0x2503bf, .byte = 0x0c },
		{ .addr = 0x089862, .byte = 0x21 },
		{ .addr = 0x089863, .byte = 0xcc },
		{ .addr = 0x2503c0, .byte = 0xac },
		{ .addr = 0x2503c1, .byte = 0xa8 }
};

static const SST_Transaction andb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2425790, .data = 2572, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 563298, .data = 26880, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2425792, .data = 44200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 563298, .data = 8448, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_20[] = {
		{ .addr = 0xe8346c, .byte = 0xcf },
		{ .addr = 0xe8346d, .byte = 0x36 },
		{ .addr = 0xe8346e, .byte = 0xbf },
		{ .addr = 0xe8346f, .byte = 0xbf },
		{ .addr = 0xe83470, .byte = 0xca },
		{ .addr = 0xe83471, .byte = 0x39 },
		{ .addr = 0xf60896, .byte = 0x6f },
		{ .addr = 0xf60897, .byte = 0x4c },
		{ .addr = 0xe83472, .byte = 0x56 },
		{ .addr = 0xe83473, .byte = 0x4d }
};

static const SST_RamByte andb_final_ram_20[] = {
		{ .addr = 0xe8346c, .byte = 0xcf },
		{ .addr = 0xe8346d, .byte = 0x36 },
		{ .addr = 0xe8346e, .byte = 0xbf },
		{ .addr = 0xe8346f, .byte = 0xbf },
		{ .addr = 0xe83470, .byte = 0xca },
		{ .addr = 0xe83471, .byte = 0x39 },
		{ .addr = 0xf60896, .byte = 0x6f },
		{ .addr = 0xf60897, .byte = 0x08 },
		{ .addr = 0xe83472, .byte = 0x56 },
		{ .addr = 0xe83473, .byte = 0x4d }
};

static const SST_Transaction andb_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15217776, .data = 51769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16124054, .data = 76, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15217778, .data = 22093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16124054, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_21[] = {
		{ .addr = 0x00e778, .byte = 0xc1 },
		{ .addr = 0x00e779, .byte = 0x23 },
		{ .addr = 0x00e77a, .byte = 0xf2 },
		{ .addr = 0x00e77b, .byte = 0xb5 },
		{ .addr = 0x3bc414, .byte = 0xdb },
		{ .addr = 0x3bc415, .byte = 0x39 },
		{ .addr = 0x00e77c, .byte = 0xb4 },
		{ .addr = 0x00e77d, .byte = 0x4a }
};

static const SST_RamByte andb_final_ram_21[] = {
		{ .addr = 0x00e778, .byte = 0xc1 },
		{ .addr = 0x00e779, .byte = 0x23 },
		{ .addr = 0x00e77a, .byte = 0xf2 },
		{ .addr = 0x00e77b, .byte = 0xb5 },
		{ .addr = 0x3bc414, .byte = 0x58 },
		{ .addr = 0x3bc415, .byte = 0x39 },
		{ .addr = 0x00e77c, .byte = 0xb4 },
		{ .addr = 0x00e77d, .byte = 0x4a }
};

static const SST_Transaction andb_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3916820, .data = 56064, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 59260, .data = 46154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3916820, .data = 22528, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_22[] = {
		{ .addr = 0x3d6580, .byte = 0xca },
		{ .addr = 0x3d6581, .byte = 0x3c },
		{ .addr = 0x3d6582, .byte = 0xbb },
		{ .addr = 0x3d6583, .byte = 0x66 },
		{ .addr = 0x3d6584, .byte = 0x1f },
		{ .addr = 0x3d6585, .byte = 0xc2 },
		{ .addr = 0x3d6586, .byte = 0x84 },
		{ .addr = 0x3d6587, .byte = 0x26 }
};

static const SST_RamByte andb_final_ram_22[] = {
		{ .addr = 0x3d6580, .byte = 0xca },
		{ .addr = 0x3d6581, .byte = 0x3c },
		{ .addr = 0x3d6582, .byte = 0xbb },
		{ .addr = 0x3d6583, .byte = 0x66 },
		{ .addr = 0x3d6584, .byte = 0x1f },
		{ .addr = 0x3d6585, .byte = 0xc2 },
		{ .addr = 0x3d6586, .byte = 0x84 },
		{ .addr = 0x3d6587, .byte = 0x26 }
};

static const SST_Transaction andb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4023684, .data = 8130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4023686, .data = 33830, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_23[] = {
		{ .addr = 0x3660a0, .byte = 0xc1 },
		{ .addr = 0x3660a1, .byte = 0x15 },
		{ .addr = 0x3660a2, .byte = 0x42 },
		{ .addr = 0x3660a3, .byte = 0xec },
		{ .addr = 0x9a35fe, .byte = 0x6b },
		{ .addr = 0x9a35ff, .byte = 0x84 },
		{ .addr = 0x3660a4, .byte = 0xd5 },
		{ .addr = 0x3660a5, .byte = 0x10 }
};

static const SST_RamByte andb_final_ram_23[] = {
		{ .addr = 0x3660a0, .byte = 0xc1 },
		{ .addr = 0x3660a1, .byte = 0x15 },
		{ .addr = 0x3660a2, .byte = 0x42 },
		{ .addr = 0x3660a3, .byte = 0xec },
		{ .addr = 0x9a35fe, .byte = 0x43 },
		{ .addr = 0x9a35ff, .byte = 0x84 },
		{ .addr = 0x3660a4, .byte = 0xd5 },
		{ .addr = 0x3660a5, .byte = 0x10 }
};

static const SST_Transaction andb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10106366, .data = 27392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3563684, .data = 54544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10106366, .data = 17152, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_24[] = {
		{ .addr = 0x20ad18, .byte = 0xc2 },
		{ .addr = 0x20ad19, .byte = 0x1e },
		{ .addr = 0x20ad1a, .byte = 0xa5 },
		{ .addr = 0x20ad1b, .byte = 0xa7 },
		{ .addr = 0x44e842, .byte = 0x54 },
		{ .addr = 0x44e843, .byte = 0xc4 },
		{ .addr = 0x20ad1c, .byte = 0x4a },
		{ .addr = 0x20ad1d, .byte = 0x63 }
};

static const SST_RamByte andb_final_ram_24[] = {
		{ .addr = 0x20ad18, .byte = 0xc2 },
		{ .addr = 0x20ad19, .byte = 0x1e },
		{ .addr = 0x20ad1a, .byte = 0xa5 },
		{ .addr = 0x20ad1b, .byte = 0xa7 },
		{ .addr = 0x44e842, .byte = 0x54 },
		{ .addr = 0x44e843, .byte = 0xc4 },
		{ .addr = 0x20ad1c, .byte = 0x4a },
		{ .addr = 0x20ad1d, .byte = 0x63 }
};

static const SST_Transaction andb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4515906, .data = 196, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2141468, .data = 19043, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_25[] = {
		{ .addr = 0xcd58ce, .byte = 0xc3 },
		{ .addr = 0xcd58cf, .byte = 0x2e },
		{ .addr = 0xcd58d0, .byte = 0xec },
		{ .addr = 0xcd58d1, .byte = 0x75 },
		{ .addr = 0xcd58d2, .byte = 0x77 },
		{ .addr = 0xcd58d3, .byte = 0xce },
		{ .addr = 0x1a5efa, .byte = 0x2d },
		{ .addr = 0x1a5efb, .byte = 0x87 },
		{ .addr = 0xcd58d4, .byte = 0xaf },
		{ .addr = 0xcd58d5, .byte = 0x6e }
};

static const SST_RamByte andb_final_ram_25[] = {
		{ .addr = 0xcd58ce, .byte = 0xc3 },
		{ .addr = 0xcd58cf, .byte = 0x2e },
		{ .addr = 0xcd58d0, .byte = 0xec },
		{ .addr = 0xcd58d1, .byte = 0x75 },
		{ .addr = 0xcd58d2, .byte = 0x77 },
		{ .addr = 0xcd58d3, .byte = 0xce },
		{ .addr = 0x1a5efa, .byte = 0x2d },
		{ .addr = 0x1a5efb, .byte = 0x87 },
		{ .addr = 0xcd58d4, .byte = 0xaf },
		{ .addr = 0xcd58d5, .byte = 0x6e }
};

static const SST_Transaction andb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13457618, .data = 30670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1728250, .data = 11520, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13457620, .data = 44910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1728250, .data = 11520, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_26[] = {
		{ .addr = 0xccee14, .byte = 0xcd },
		{ .addr = 0xccee15, .byte = 0x23 },
		{ .addr = 0xccee16, .byte = 0x81 },
		{ .addr = 0xccee17, .byte = 0xec },
		{ .addr = 0xd29854, .byte = 0xe4 },
		{ .addr = 0xd29855, .byte = 0xc9 },
		{ .addr = 0xccee18, .byte = 0x12 },
		{ .addr = 0xccee19, .byte = 0x79 }
};

static const SST_RamByte andb_final_ram_26[] = {
		{ .addr = 0xccee14, .byte = 0xcd },
		{ .addr = 0xccee15, .byte = 0x23 },
		{ .addr = 0xccee16, .byte = 0x81 },
		{ .addr = 0xccee17, .byte = 0xec },
		{ .addr = 0xd29854, .byte = 0x84 },
		{ .addr = 0xd29855, .byte = 0xc9 },
		{ .addr = 0xccee18, .byte = 0x12 },
		{ .addr = 0xccee19, .byte = 0x79 }
};

static const SST_Transaction andb_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13801556, .data = 58368, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13430296, .data = 4729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13801556, .data = 33792, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_27[] = {
		{ .addr = 0xa1e8f2, .byte = 0xc7 },
		{ .addr = 0xa1e8f3, .byte = 0x1e },
		{ .addr = 0xa1e8f4, .byte = 0x2e },
		{ .addr = 0xa1e8f5, .byte = 0x21 },
		{ .addr = 0x8417a6, .byte = 0x93 },
		{ .addr = 0x8417a7, .byte = 0xdf },
		{ .addr = 0xa1e8f6, .byte = 0x72 },
		{ .addr = 0xa1e8f7, .byte = 0x05 }
};

static const SST_RamByte andb_final_ram_27[] = {
		{ .addr = 0xa1e8f2, .byte = 0xc7 },
		{ .addr = 0xa1e8f3, .byte = 0x1e },
		{ .addr = 0xa1e8f4, .byte = 0x2e },
		{ .addr = 0xa1e8f5, .byte = 0x21 },
		{ .addr = 0x8417a6, .byte = 0x02 },
		{ .addr = 0x8417a7, .byte = 0xdf },
		{ .addr = 0xa1e8f6, .byte = 0x72 },
		{ .addr = 0xa1e8f7, .byte = 0x05 }
};

static const SST_Transaction andb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8656806, .data = 37632, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10610934, .data = 29189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8656806, .data = 512, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_28[] = {
		{ .addr = 0xd6d952, .byte = 0xcc },
		{ .addr = 0xd6d953, .byte = 0x01 },
		{ .addr = 0xd6d954, .byte = 0xfe },
		{ .addr = 0xd6d955, .byte = 0x91 },
		{ .addr = 0xd6d956, .byte = 0xb9 },
		{ .addr = 0xd6d957, .byte = 0xb4 }
};

static const SST_RamByte andb_final_ram_28[] = {
		{ .addr = 0xd6d952, .byte = 0xcc },
		{ .addr = 0xd6d953, .byte = 0x01 },
		{ .addr = 0xd6d954, .byte = 0xfe },
		{ .addr = 0xd6d955, .byte = 0x91 },
		{ .addr = 0xd6d956, .byte = 0xb9 },
		{ .addr = 0xd6d957, .byte = 0xb4 }
};

static const SST_Transaction andb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14080342, .data = 47540, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_29[] = {
		{ .addr = 0xd206b8, .byte = 0xcd },
		{ .addr = 0xd206b9, .byte = 0x16 },
		{ .addr = 0xd206ba, .byte = 0x86 },
		{ .addr = 0xd206bb, .byte = 0xa6 },
		{ .addr = 0x549478, .byte = 0xd4 },
		{ .addr = 0x549479, .byte = 0x2b },
		{ .addr = 0xd206bc, .byte = 0x2d },
		{ .addr = 0xd206bd, .byte = 0x37 }
};

static const SST_RamByte andb_final_ram_29[] = {
		{ .addr = 0xd206b8, .byte = 0xcd },
		{ .addr = 0xd206b9, .byte = 0x16 },
		{ .addr = 0xd206ba, .byte = 0x86 },
		{ .addr = 0xd206bb, .byte = 0xa6 },
		{ .addr = 0x549478, .byte = 0xd4 },
		{ .addr = 0x549479, .byte = 0x29 },
		{ .addr = 0xd206bc, .byte = 0x2d },
		{ .addr = 0xd206bd, .byte = 0x37 }
};

static const SST_Transaction andb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5543032, .data = 43, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13764284, .data = 11575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5543032, .data = 41, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_30[] = {
		{ .addr = 0xfef992, .byte = 0x02 },
		{ .addr = 0xfef993, .byte = 0x34 },
		{ .addr = 0xfef994, .byte = 0x28 },
		{ .addr = 0xfef995, .byte = 0x35 },
		{ .addr = 0xfef996, .byte = 0xf6 },
		{ .addr = 0xfef997, .byte = 0x5e },
		{ .addr = 0xfef998, .byte = 0x75 },
		{ .addr = 0xfef999, .byte = 0x16 },
		{ .addr = 0x123832, .byte = 0x3a },
		{ .addr = 0x123833, .byte = 0x04 },
		{ .addr = 0xfef99a, .byte = 0xd2 },
		{ .addr = 0xfef99b, .byte = 0x56 }
};

static const SST_RamByte andb_final_ram_30[] = {
		{ .addr = 0xfef992, .byte = 0x02 },
		{ .addr = 0xfef993, .byte = 0x34 },
		{ .addr = 0xfef994, .byte = 0x28 },
		{ .addr = 0xfef995, .byte = 0x35 },
		{ .addr = 0xfef996, .byte = 0xf6 },
		{ .addr = 0xfef997, .byte = 0x5e },
		{ .addr = 0xfef998, .byte = 0x75 },
		{ .addr = 0xfef999, .byte = 0x16 },
		{ .addr = 0x123832, .byte = 0x30 },
		{ .addr = 0x123833, .byte = 0x04 },
		{ .addr = 0xfef99a, .byte = 0xd2 },
		{ .addr = 0xfef99b, .byte = 0x56 }
};

static const SST_Transaction andb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16710038, .data = 63070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16710040, .data = 29974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1194034, .data = 14848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16710042, .data = 53846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1194034, .data = 12288, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andb_initial_ram_31[] = {
		{ .addr = 0xbc6c22, .byte = 0x02 },
		{ .addr = 0xbc6c23, .byte = 0x06 },
		{ .addr = 0xbc6c24, .byte = 0x6e },
		{ .addr = 0xbc6c25, .byte = 0x2e },
		{ .addr = 0xbc6c26, .byte = 0x10 },
		{ .addr = 0xbc6c27, .byte = 0x70 },
		{ .addr = 0xbc6c28, .byte = 0x1f },
		{ .addr = 0xbc6c29, .byte = 0x39 }
};

static const SST_RamByte andb_final_ram_31[] = {
		{ .addr = 0xbc6c22, .byte = 0x02 },
		{ .addr = 0xbc6c23, .byte = 0x06 },
		{ .addr = 0xbc6c24, .byte = 0x6e },
		{ .addr = 0xbc6c25, .byte = 0x2e },
		{ .addr = 0xbc6c26, .byte = 0x10 },
		{ .addr = 0xbc6c27, .byte = 0x70 },
		{ .addr = 0xbc6c28, .byte = 0x1f },
		{ .addr = 0xbc6c29, .byte = 0x39 }
};

static const SST_Transaction andb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12348454, .data = 4208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12348456, .data = 7993, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 AND.b (A4)+, D3 c61c",
		.initial = {
			.regs = {
				380061435, 157286084, 320209176, 441004627, 2018597908, 4176874128, 2370651185, 345769905, 3891546970, 20128903, 4212361669, 4106715993, 3843660886, 2485516893, 2181828436, 8197846, 7037992, 1550, 4800142
			},
			.prefetch0 = 50716,
			.prefetch1 = 13399,
			.ram = andb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				380061435, 157286084, 320209176, 441004624, 2018597908, 4176874128, 2370651185, 345769905, 3891546970, 20128903, 4212361669, 4106715993, 3843660887, 2485516893, 2181828436, 8197846, 7037992, 1536, 4800144
			},
			.prefetch0 = 13399,
			.prefetch1 = 16147,
			.ram = andb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = andb_transactions_16,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "017 AND.b D7, (A6)+ cf1e",
		.initial = {
			.regs = {
				1233864547, 4084078549, 979743021, 560151380, 1949841888, 3160492203, 1550108183, 1890108150, 1412118376, 332210050, 3149572409, 464899628, 1884694029, 862595584, 3334709456, 3050448, 4514726, 534, 15119642
			},
			.prefetch0 = 53022,
			.prefetch1 = 40022,
			.ram = andb_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1233864547, 4084078549, 979743021, 560151380, 1949841888, 3160492203, 1550108183, 1890108150, 1412118376, 332210050, 3149572409, 464899628, 1884694029, 862595584, 3334709457, 3050448, 4514726, 528, 15119644
			},
			.prefetch0 = 40022,
			.prefetch1 = 3946,
			.ram = andb_final_ram_17,
			.ram_len = 8,
		},
		.transactions = andb_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 AND.b D6, (d8, A1, Xn) cd31",
		.initial = {
			.regs = {
				194902884, 3885196002, 2881678756, 1167727740, 1652681058, 146245502, 1601795959, 2545999550, 1598531107, 2245090087, 11319673, 1197188183, 1832647124, 2767968127, 2286195922, 16181480, 2846608, 40985, 6121180
			},
			.prefetch0 = 52529,
			.prefetch1 = 60495,
			.ram = andb_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				194902884, 3885196002, 2881678756, 1167727740, 1652681058, 146245502, 1601795959, 2545999550, 1598531107, 2245090087, 11319673, 1197188183, 1832647124, 2767968127, 2286195922, 16181480, 2846608, 40976, 6121184
			},
			.prefetch0 = 64255,
			.prefetch1 = 22147,
			.ram = andb_final_ram_18,
			.ram_len = 10,
		},
		.transactions = andb_transactions_18,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "019 AND.b D7, (d16, A0) cf28",
		.initial = {
			.regs = {
				655205777, 1218025762, 1892876210, 2035000634, 3298666403, 3395658456, 1058410025, 3793120051, 2382900955, 3858792512, 3445824602, 444175770, 2988379272, 4140713826, 3142418259, 492238, 11317976, 22, 2425790
			},
			.prefetch0 = 53032,
			.prefetch1 = 27015,
			.ram = andb_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				655205777, 1218025762, 1892876210, 2035000634, 3298666403, 3395658456, 1058410025, 3793120051, 2382900955, 3858792512, 3445824602, 444175770, 2988379272, 4140713826, 3142418259, 492238, 11317976, 16, 2425794
			},
			.prefetch0 = 2572,
			.prefetch1 = 44200,
			.ram = andb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = andb_transactions_19,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "020 AND.b D7, (d8, A6, Xn) cf36",
		.initial = {
			.regs = {
				1264803211, 2875781849, 890275174, 2387595910, 166611685, 3559305750, 296583989, 937765288, 168907730, 2827369806, 3972459765, 4194983795, 2973143054, 101919059, 3941312869, 9644030, 10480006, 41225, 15217776
			},
			.prefetch0 = 53046,
			.prefetch1 = 49087,
			.ram = andb_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1264803211, 2875781849, 890275174, 2387595910, 166611685, 3559305750, 296583989, 937765288, 168907730, 2827369806, 3972459765, 4194983795, 2973143054, 101919059, 3941312869, 9644030, 10480006, 41216, 15217780
			},
			.prefetch0 = 51769,
			.prefetch1 = 22093,
			.ram = andb_final_ram_20,
			.ram_len = 10,
		},
		.transactions = andb_transactions_20,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "021 AND.b D0, -(A3) c123",
		.initial = {
			.regs = {
				1897626492, 3307983257, 872780046, 1182513155, 770410083, 3866317211, 1372502284, 1872447302, 3132363953, 1326493312, 1231937271, 4265329685, 172885750, 1597320825, 3204169299, 6214072, 12434422, 30, 59260
			},
			.prefetch0 = 49443,
			.prefetch1 = 62133,
			.ram = andb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1897626492, 3307983257, 872780046, 1182513155, 770410083, 3866317211, 1372502284, 1872447302, 3132363953, 1326493312, 1231937271, 4265329684, 172885750, 1597320825, 3204169299, 6214072, 12434422, 16, 59262
			},
			.prefetch0 = 62133,
			.prefetch1 = 46154,
			.ram = andb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = andb_transactions_21,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "022 AND.b #, D5 ca3c",
		.initial = {
			.regs = {
				1882081174, 3725622327, 6244196, 9259267, 1252748567, 921331828, 4135519519, 2433761234, 282643462, 262795445, 3439273596, 1039691736, 2338691443, 3675480672, 4226313210, 12599010, 4339854, 33290, 4023684
			},
			.prefetch0 = 51772,
			.prefetch1 = 47974,
			.ram = andb_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1882081174, 3725622327, 6244196, 9259267, 1252748567, 921331812, 4135519519, 2433761234, 282643462, 262795445, 3439273596, 1039691736, 2338691443, 3675480672, 4226313210, 12599010, 4339854, 33280, 4023688
			},
			.prefetch0 = 8130,
			.prefetch1 = 33830,
			.ram = andb_final_ram_22,
			.ram_len = 8,
		},
		.transactions = andb_transactions_22,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "023 AND.b D0, (A5) c115",
		.initial = {
			.regs = {
				1264691671, 1952796732, 508907581, 3127124851, 3289936810, 2861947182, 766890747, 2125541270, 1635207205, 3337779355, 632492021, 365591501, 2934135505, 1838822910, 3809278495, 15751514, 13135890, 8963, 3563684
			},
			.prefetch0 = 49429,
			.prefetch1 = 17132,
			.ram = andb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1264691671, 1952796732, 508907581, 3127124851, 3289936810, 2861947182, 766890747, 2125541270, 1635207205, 3337779355, 632492021, 365591501, 2934135505, 1838822910, 3809278495, 15751514, 13135890, 8960, 3563686
			},
			.prefetch0 = 17132,
			.prefetch1 = 54544,
			.ram = andb_final_ram_23,
			.ram_len = 8,
		},
		.transactions = andb_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 AND.b (A6)+, D1 c21e",
		.initial = {
			.regs = {
				3532191131, 844750685, 1129586980, 3735804141, 3395652199, 4259912246, 3911577441, 1951914803, 869316315, 2518724463, 2136984511, 220344241, 3331387038, 893878730, 3057969219, 9244232, 7132114, 1545, 2141468
			},
			.prefetch0 = 49694,
			.prefetch1 = 42407,
			.ram = andb_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3532191131, 844750660, 1129586980, 3735804141, 3395652199, 4259912246, 3911577441, 1951914803, 869316315, 2518724463, 2136984511, 220344241, 3331387038, 893878730, 3057969220, 9244232, 7132114, 1536, 2141470
			},
			.prefetch0 = 42407,
			.prefetch1 = 19043,
			.ram = andb_final_ram_24,
			.ram_len = 8,
		},
		.transactions = andb_transactions_24,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "025 AND.b D1, (d16, A6) c32e",
		.initial = {
			.regs = {
				2610327662, 174787133, 1471579992, 1419104987, 48215806, 1757646854, 772415380, 1930136785, 1060889464, 825600311, 1649414542, 3997806814, 3508185161, 1510660563, 3793384069, 8051452, 10175080, 9503, 13457618
			},
			.prefetch0 = 49966,
			.prefetch1 = 60533,
			.ram = andb_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2610327662, 174787133, 1471579992, 1419104987, 48215806, 1757646854, 772415380, 1930136785, 1060889464, 825600311, 1649414542, 3997806814, 3508185161, 1510660563, 3793384069, 8051452, 10175080, 9488, 13457622
			},
			.prefetch0 = 30670,
			.prefetch1 = 44910,
			.ram = andb_final_ram_25,
			.ram_len = 10,
		},
		.transactions = andb_transactions_25,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "026 AND.b D6, -(A3) cd23",
		.initial = {
			.regs = {
				3533416288, 2349804111, 2982967779, 1172695001, 2958181814, 1311858403, 3231079301, 2506212359, 244407252, 396574027, 226335819, 1070766165, 2349400662, 1220534156, 3392933917, 2044462, 8180230, 1300, 13430296
			},
			.prefetch0 = 52515,
			.prefetch1 = 33260,
			.ram = andb_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3533416288, 2349804111, 2982967779, 1172695001, 2958181814, 1311858403, 3231079301, 2506212359, 244407252, 396574027, 226335819, 1070766164, 2349400662, 1220534156, 3392933917, 2044462, 8180230, 1304, 13430298
			},
			.prefetch0 = 33260,
			.prefetch1 = 4729,
			.ram = andb_final_ram_26,
			.ram_len = 8,
		},
		.transactions = andb_transactions_26,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "027 AND.b D3, (A6)+ c71e",
		.initial = {
			.regs = {
				150058768, 1218069386, 281890094, 2582575110, 2160988619, 2657542438, 535139194, 4188496289, 1364316921, 101811173, 1753353773, 1785349806, 3015909364, 2489047809, 2625902502, 10280126, 9166472, 33795, 10610934
			},
			.prefetch0 = 50974,
			.prefetch1 = 11809,
			.ram = andb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				150058768, 1218069386, 281890094, 2582575110, 2160988619, 2657542438, 535139194, 4188496289, 1364316921, 101811173, 1753353773, 1785349806, 3015909364, 2489047809, 2625902503, 10280126, 9166472, 33792, 10610936
			},
			.prefetch0 = 11809,
			.prefetch1 = 29189,
			.ram = andb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = andb_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 AND.b D1, D6 cc01",
		.initial = {
			.regs = {
				872417722, 4144236731, 1459997966, 3527590675, 3009206331, 1018160786, 3056753958, 157999617, 2655381964, 3151430584, 1702072850, 351018744, 2851702129, 1684471091, 1734248235, 2313320, 16274562, 8976, 14080342
			},
			.prefetch0 = 52225,
			.prefetch1 = 65169,
			.ram = andb_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				872417722, 4144236731, 1459997966, 3527590675, 3009206331, 1018160786, 3056753954, 157999617, 2655381964, 3151430584, 1702072850, 351018744, 2851702129, 1684471091, 1734248235, 2313320, 16274562, 8976, 14080344
			},
			.prefetch0 = 65169,
			.prefetch1 = 47540,
			.ram = andb_final_ram_28,
			.ram_len = 6,
		},
		.transactions = andb_transactions_28,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "029 AND.b D6, (A6) cd16",
		.initial = {
			.regs = {
				650443114, 545706030, 1899508201, 1670276844, 123170989, 1106443442, 2952730157, 686229167, 261623433, 530184572, 2423553212, 1809112258, 1714153965, 3945099815, 1851036793, 1817604, 15791438, 8198, 13764284
			},
			.prefetch0 = 52502,
			.prefetch1 = 34470,
			.ram = andb_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				650443114, 545706030, 1899508201, 1670276844, 123170989, 1106443442, 2952730157, 686229167, 261623433, 530184572, 2423553212, 1809112258, 1714153965, 3945099815, 1851036793, 1817604, 15791438, 8192, 13764286
			},
			.prefetch0 = 34470,
			.prefetch1 = 11575,
			.ram = andb_final_ram_29,
			.ram_len = 8,
		},
		.transactions = andb_transactions_29,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "030 AND.b #, (d8, A4, Xn) 0234",
		.initial = {
			.regs = {
				3900590833, 17612313, 514894903, 205640089, 1096303166, 1611154391, 2345280269, 1489506485, 1180413016, 3211918171, 3114678339, 943770180, 2735897628, 1956261937, 2035390267, 987336, 13155256, 8206, 16710038
			},
			.prefetch0 = 564,
			.prefetch1 = 10293,
			.ram = andb_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3900590833, 17612313, 514894903, 205640089, 1096303166, 1611154391, 2345280269, 1489506485, 1180413016, 3211918171, 3114678339, 943770180, 2735897628, 1956261937, 2035390267, 987336, 13155256, 8192, 16710044
			},
			.prefetch0 = 29974,
			.prefetch1 = 53846,
			.ram = andb_final_ram_30,
			.ram_len = 12,
		},
		.transactions = andb_transactions_30,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "031 AND.b #, D6 0206",
		.initial = {
			.regs = {
				1700163383, 3062151335, 2201371304, 3948292598, 1123612457, 3635561464, 3143777961, 2080564144, 3831711040, 4175264492, 159112140, 226500468, 1736732143, 2770894556, 3396712390, 2707268, 4205680, 34573, 12348454
			},
			.prefetch0 = 518,
			.prefetch1 = 28206,
			.ram = andb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1700163383, 3062151335, 2201371304, 3948292598, 1123612457, 3635561464, 3143777832, 2080564144, 3831711040, 4175264492, 159112140, 226500468, 1736732143, 2770894556, 3396712390, 2707268, 4205680, 34560, 12348458
			},
			.prefetch0 = 4208,
			.prefetch1 = 7993,
			.ram = andb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = andb_transactions_31,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_ANDB_H */