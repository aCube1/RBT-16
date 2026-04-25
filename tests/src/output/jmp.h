#ifndef RBT_JMP_H
#define RBT_JMP_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte jmp_initial_ram_0[] = {
		{ .addr = 0x2a7f8c, .byte = 0x4e },
		{ .addr = 0x2a7f8d, .byte = 0xed },
		{ .addr = 0x2a7f8e, .byte = 0x5e },
		{ .addr = 0x2a7f8f, .byte = 0x6d },
		{ .addr = 0xbaef38, .byte = 0xb6 },
		{ .addr = 0xbaef39, .byte = 0x50 },
		{ .addr = 0xbaef3a, .byte = 0x6d },
		{ .addr = 0xbaef3b, .byte = 0x80 }
};

static const SST_RamByte jmp_final_ram_0[] = {
		{ .addr = 0x2a7f8c, .byte = 0x4e },
		{ .addr = 0x2a7f8d, .byte = 0xed },
		{ .addr = 0x2a7f8e, .byte = 0x5e },
		{ .addr = 0x2a7f8f, .byte = 0x6d },
		{ .addr = 0xbaef38, .byte = 0xb6 },
		{ .addr = 0xbaef39, .byte = 0x50 },
		{ .addr = 0xbaef3a, .byte = 0x6d },
		{ .addr = 0xbaef3b, .byte = 0x80 }
};

static const SST_Transaction jmp_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12250936, .data = 46672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12250938, .data = 28032, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_1[] = {
		{ .addr = 0x458504, .byte = 0x4e },
		{ .addr = 0x458505, .byte = 0xd2 },
		{ .addr = 0x458506, .byte = 0x22 },
		{ .addr = 0x458507, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0x74 },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0x3d },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x683d54, .byte = 0x67 },
		{ .addr = 0x683d55, .byte = 0x22 },
		{ .addr = 0x683d56, .byte = 0x63 },
		{ .addr = 0x683d57, .byte = 0xdd }
};

static const SST_RamByte jmp_final_ram_1[] = {
		{ .addr = 0x458504, .byte = 0x4e },
		{ .addr = 0x458505, .byte = 0xd2 },
		{ .addr = 0x458506, .byte = 0x22 },
		{ .addr = 0x458507, .byte = 0x9d },
		{ .addr = 0x6f6700, .byte = 0x85 },
		{ .addr = 0x6f6701, .byte = 0x06 },
		{ .addr = 0x6f66fc, .byte = 0x23 },
		{ .addr = 0x6f66fd, .byte = 0x10 },
		{ .addr = 0x6f66fe, .byte = 0x00 },
		{ .addr = 0x6f66ff, .byte = 0x45 },
		{ .addr = 0x6f66fa, .byte = 0x4e },
		{ .addr = 0x6f66fb, .byte = 0xd2 },
		{ .addr = 0x6f66f8, .byte = 0x7f },
		{ .addr = 0x6f66f9, .byte = 0x87 },
		{ .addr = 0x6f66f4, .byte = 0x4e },
		{ .addr = 0x6f66f5, .byte = 0xd6 },
		{ .addr = 0x6f66f6, .byte = 0xe3 },
		{ .addr = 0x6f66f7, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0x74 },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0x3d },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x683d54, .byte = 0x67 },
		{ .addr = 0x683d55, .byte = 0x22 },
		{ .addr = 0x683d56, .byte = 0x63 },
		{ .addr = 0x683d57, .byte = 0xdd }
};

static const SST_Transaction jmp_transactions_1[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16613254, .data = 5992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7300864, .data = 34054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7300860, .data = 8976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7300862, .data = 69, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7300858, .data = 20178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7300856, .data = 32647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7300852, .data = 20182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7300854, .data = 58365, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6831444, .data = 26402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6831446, .data = 25565, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_2[] = {
		{ .addr = 0xaab278, .byte = 0x4e },
		{ .addr = 0xaab279, .byte = 0xd2 },
		{ .addr = 0xaab27a, .byte = 0xab },
		{ .addr = 0xaab27b, .byte = 0x62 },
		{ .addr = 0x281c12, .byte = 0x12 },
		{ .addr = 0x281c13, .byte = 0xbd },
		{ .addr = 0x281c14, .byte = 0xa9 },
		{ .addr = 0x281c15, .byte = 0x4b }
};

static const SST_RamByte jmp_final_ram_2[] = {
		{ .addr = 0xaab278, .byte = 0x4e },
		{ .addr = 0xaab279, .byte = 0xd2 },
		{ .addr = 0xaab27a, .byte = 0xab },
		{ .addr = 0xaab27b, .byte = 0x62 },
		{ .addr = 0x281c12, .byte = 0x12 },
		{ .addr = 0x281c13, .byte = 0xbd },
		{ .addr = 0x281c14, .byte = 0xa9 },
		{ .addr = 0x281c15, .byte = 0x4b }
};

static const SST_Transaction jmp_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2628626, .data = 4797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2628628, .data = 43339, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_3[] = {
		{ .addr = 0x032f6e, .byte = 0x4e },
		{ .addr = 0x032f6f, .byte = 0xf8 },
		{ .addr = 0x032f70, .byte = 0x4d },
		{ .addr = 0x032f71, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x1f },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x0e1fe2, .byte = 0xfd },
		{ .addr = 0x0e1fe3, .byte = 0x89 },
		{ .addr = 0x0e1fe4, .byte = 0xcf },
		{ .addr = 0x0e1fe5, .byte = 0xf0 }
};

static const SST_RamByte jmp_final_ram_3[] = {
		{ .addr = 0x032f6e, .byte = 0x4e },
		{ .addr = 0x032f6f, .byte = 0xf8 },
		{ .addr = 0x032f70, .byte = 0x4d },
		{ .addr = 0x032f71, .byte = 0xf5 },
		{ .addr = 0x6232bc, .byte = 0x2f },
		{ .addr = 0x6232bd, .byte = 0x70 },
		{ .addr = 0x6232b8, .byte = 0xa5 },
		{ .addr = 0x6232b9, .byte = 0x15 },
		{ .addr = 0x6232ba, .byte = 0x00 },
		{ .addr = 0x6232bb, .byte = 0x03 },
		{ .addr = 0x6232b6, .byte = 0x4e },
		{ .addr = 0x6232b7, .byte = 0xf8 },
		{ .addr = 0x6232b4, .byte = 0x4d },
		{ .addr = 0x6232b5, .byte = 0xf5 },
		{ .addr = 0x6232b0, .byte = 0x4e },
		{ .addr = 0x6232b1, .byte = 0xf6 },
		{ .addr = 0x6232b2, .byte = 0x00 },
		{ .addr = 0x6232b3, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x1f },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x0e1fe2, .byte = 0xfd },
		{ .addr = 0x0e1fe3, .byte = 0x89 },
		{ .addr = 0x0e1fe4, .byte = 0xcf },
		{ .addr = 0x0e1fe5, .byte = 0xf0 }
};

static const SST_Transaction jmp_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 19956, .data = 24398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6435516, .data = 12144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6435512, .data = 42261, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6435514, .data = 3, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6435510, .data = 20216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6435508, .data = 19957, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6435504, .data = 20214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6435506, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 925666, .data = 64905, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 925668, .data = 53232, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_4[] = {
		{ .addr = 0xa202e2, .byte = 0x4e },
		{ .addr = 0xa202e3, .byte = 0xf7 },
		{ .addr = 0xa202e4, .byte = 0x8a },
		{ .addr = 0xa202e5, .byte = 0x3a },
		{ .addr = 0xd11b36, .byte = 0x89 },
		{ .addr = 0xd11b37, .byte = 0x6e },
		{ .addr = 0xd11b38, .byte = 0xff },
		{ .addr = 0xd11b39, .byte = 0xec }
};

static const SST_RamByte jmp_final_ram_4[] = {
		{ .addr = 0xa202e2, .byte = 0x4e },
		{ .addr = 0xa202e3, .byte = 0xf7 },
		{ .addr = 0xa202e4, .byte = 0x8a },
		{ .addr = 0xa202e5, .byte = 0x3a },
		{ .addr = 0xd11b36, .byte = 0x89 },
		{ .addr = 0xd11b37, .byte = 0x6e },
		{ .addr = 0xd11b38, .byte = 0xff },
		{ .addr = 0xd11b39, .byte = 0xec }
};

static const SST_Transaction jmp_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13703990, .data = 35182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13703992, .data = 65516, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_5[] = {
		{ .addr = 0x96c682, .byte = 0x4e },
		{ .addr = 0x96c683, .byte = 0xf7 },
		{ .addr = 0x96c684, .byte = 0x53 },
		{ .addr = 0x96c685, .byte = 0x1a },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x82 },
		{ .addr = 0x00000e, .byte = 0x11 },
		{ .addr = 0x00000f, .byte = 0xce },
		{ .addr = 0x8211ce, .byte = 0xb6 },
		{ .addr = 0x8211cf, .byte = 0x24 },
		{ .addr = 0x8211d0, .byte = 0x83 },
		{ .addr = 0x8211d1, .byte = 0xa1 }
};

static const SST_RamByte jmp_final_ram_5[] = {
		{ .addr = 0x96c682, .byte = 0x4e },
		{ .addr = 0x96c683, .byte = 0xf7 },
		{ .addr = 0x96c684, .byte = 0x53 },
		{ .addr = 0x96c685, .byte = 0x1a },
		{ .addr = 0x352db2, .byte = 0xc6 },
		{ .addr = 0x352db3, .byte = 0x84 },
		{ .addr = 0x352dae, .byte = 0x26 },
		{ .addr = 0x352daf, .byte = 0x1c },
		{ .addr = 0x352db0, .byte = 0x00 },
		{ .addr = 0x352db1, .byte = 0x96 },
		{ .addr = 0x352dac, .byte = 0x4e },
		{ .addr = 0x352dad, .byte = 0xf7 },
		{ .addr = 0x352daa, .byte = 0x96 },
		{ .addr = 0x352dab, .byte = 0x7d },
		{ .addr = 0x352da6, .byte = 0x4e },
		{ .addr = 0x352da7, .byte = 0xf6 },
		{ .addr = 0x352da8, .byte = 0x00 },
		{ .addr = 0x352da9, .byte = 0x35 },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x82 },
		{ .addr = 0x00000e, .byte = 0x11 },
		{ .addr = 0x00000f, .byte = 0xce },
		{ .addr = 0x8211ce, .byte = 0xb6 },
		{ .addr = 0x8211cf, .byte = 0x24 },
		{ .addr = 0x8211d0, .byte = 0x83 },
		{ .addr = 0x8211d1, .byte = 0xa1 }
};

static const SST_Transaction jmp_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3511932, .data = 1049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3485106, .data = 50820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3485102, .data = 9756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3485104, .data = 150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3485100, .data = 20215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3485098, .data = 38525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3485094, .data = 20214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3485096, .data = 53, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8524238, .data = 46628, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8524240, .data = 33697, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_6[] = {
		{ .addr = 0x5adbe0, .byte = 0x4e },
		{ .addr = 0x5adbe1, .byte = 0xe8 },
		{ .addr = 0x5adbe2, .byte = 0x67 },
		{ .addr = 0x5adbe3, .byte = 0x2c },
		{ .addr = 0x88682c, .byte = 0xf7 },
		{ .addr = 0x88682d, .byte = 0x2f },
		{ .addr = 0x88682e, .byte = 0xe1 },
		{ .addr = 0x88682f, .byte = 0x88 }
};

static const SST_RamByte jmp_final_ram_6[] = {
		{ .addr = 0x5adbe0, .byte = 0x4e },
		{ .addr = 0x5adbe1, .byte = 0xe8 },
		{ .addr = 0x5adbe2, .byte = 0x67 },
		{ .addr = 0x5adbe3, .byte = 0x2c },
		{ .addr = 0x88682c, .byte = 0xf7 },
		{ .addr = 0x88682d, .byte = 0x2f },
		{ .addr = 0x88682e, .byte = 0xe1 },
		{ .addr = 0x88682f, .byte = 0x88 }
};

static const SST_Transaction jmp_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8939564, .data = 63279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8939566, .data = 57736, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_7[] = {
		{ .addr = 0x98e642, .byte = 0x4e },
		{ .addr = 0x98e643, .byte = 0xf8 },
		{ .addr = 0x98e644, .byte = 0x8c },
		{ .addr = 0x98e645, .byte = 0x06 },
		{ .addr = 0xff8c06, .byte = 0x33 },
		{ .addr = 0xff8c07, .byte = 0x68 },
		{ .addr = 0xff8c08, .byte = 0x22 },
		{ .addr = 0xff8c09, .byte = 0x7e }
};

static const SST_RamByte jmp_final_ram_7[] = {
		{ .addr = 0x98e642, .byte = 0x4e },
		{ .addr = 0x98e643, .byte = 0xf8 },
		{ .addr = 0x98e644, .byte = 0x8c },
		{ .addr = 0x98e645, .byte = 0x06 },
		{ .addr = 0xff8c06, .byte = 0x33 },
		{ .addr = 0xff8c07, .byte = 0x68 },
		{ .addr = 0xff8c08, .byte = 0x22 },
		{ .addr = 0xff8c09, .byte = 0x7e }
};

static const SST_Transaction jmp_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16747526, .data = 13160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16747528, .data = 8830, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_8[] = {
		{ .addr = 0xad0f82, .byte = 0x4e },
		{ .addr = 0xad0f83, .byte = 0xef },
		{ .addr = 0xad0f84, .byte = 0x24 },
		{ .addr = 0xad0f85, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x7019e8, .byte = 0x34 },
		{ .addr = 0x7019e9, .byte = 0xb9 },
		{ .addr = 0x7019ea, .byte = 0x2c },
		{ .addr = 0x7019eb, .byte = 0x64 }
};

static const SST_RamByte jmp_final_ram_8[] = {
		{ .addr = 0xad0f82, .byte = 0x4e },
		{ .addr = 0xad0f83, .byte = 0xef },
		{ .addr = 0xad0f84, .byte = 0x24 },
		{ .addr = 0xad0f85, .byte = 0x1f },
		{ .addr = 0x835be0, .byte = 0x0f },
		{ .addr = 0x835be1, .byte = 0x84 },
		{ .addr = 0x835bdc, .byte = 0x20 },
		{ .addr = 0x835bdd, .byte = 0x18 },
		{ .addr = 0x835bde, .byte = 0x00 },
		{ .addr = 0x835bdf, .byte = 0xad },
		{ .addr = 0x835bda, .byte = 0x4e },
		{ .addr = 0x835bdb, .byte = 0xef },
		{ .addr = 0x835bd8, .byte = 0x80 },
		{ .addr = 0x835bd9, .byte = 0x01 },
		{ .addr = 0x835bd4, .byte = 0x4e },
		{ .addr = 0x835bd5, .byte = 0xf6 },
		{ .addr = 0x835bd6, .byte = 0x00 },
		{ .addr = 0x835bd7, .byte = 0x83 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x19 },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0x7019e8, .byte = 0x34 },
		{ .addr = 0x7019e9, .byte = 0xb9 },
		{ .addr = 0x7019ea, .byte = 0x2c },
		{ .addr = 0x7019eb, .byte = 0x64 }
};

static const SST_Transaction jmp_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8617984, .data = 53, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608736, .data = 3972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608732, .data = 8216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608734, .data = 173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608730, .data = 20207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608728, .data = 32769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608724, .data = 20214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8608726, .data = 131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7346664, .data = 13497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7346666, .data = 11364, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_9[] = {
		{ .addr = 0xd29766, .byte = 0x4e },
		{ .addr = 0xd29767, .byte = 0xf5 },
		{ .addr = 0xd29768, .byte = 0xcf },
		{ .addr = 0xd29769, .byte = 0x6e },
		{ .addr = 0x2d7476, .byte = 0x7f },
		{ .addr = 0x2d7477, .byte = 0xe1 },
		{ .addr = 0x2d7478, .byte = 0xc0 },
		{ .addr = 0x2d7479, .byte = 0x6b }
};

static const SST_RamByte jmp_final_ram_9[] = {
		{ .addr = 0xd29766, .byte = 0x4e },
		{ .addr = 0xd29767, .byte = 0xf5 },
		{ .addr = 0xd29768, .byte = 0xcf },
		{ .addr = 0xd29769, .byte = 0x6e },
		{ .addr = 0x2d7476, .byte = 0x7f },
		{ .addr = 0x2d7477, .byte = 0xe1 },
		{ .addr = 0x2d7478, .byte = 0xc0 },
		{ .addr = 0x2d7479, .byte = 0x6b }
};

static const SST_Transaction jmp_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2978934, .data = 32737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2978936, .data = 49259, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_10[] = {
		{ .addr = 0x982012, .byte = 0x4e },
		{ .addr = 0x982013, .byte = 0xf9 },
		{ .addr = 0x982014, .byte = 0x08 },
		{ .addr = 0x982015, .byte = 0x38 },
		{ .addr = 0x982016, .byte = 0x28 },
		{ .addr = 0x982017, .byte = 0xde },
		{ .addr = 0x3828de, .byte = 0xde },
		{ .addr = 0x3828df, .byte = 0xc1 },
		{ .addr = 0x3828e0, .byte = 0x1f },
		{ .addr = 0x3828e1, .byte = 0x66 }
};

static const SST_RamByte jmp_final_ram_10[] = {
		{ .addr = 0x982012, .byte = 0x4e },
		{ .addr = 0x982013, .byte = 0xf9 },
		{ .addr = 0x982014, .byte = 0x08 },
		{ .addr = 0x982015, .byte = 0x38 },
		{ .addr = 0x982016, .byte = 0x28 },
		{ .addr = 0x982017, .byte = 0xde },
		{ .addr = 0x3828de, .byte = 0xde },
		{ .addr = 0x3828df, .byte = 0xc1 },
		{ .addr = 0x3828e0, .byte = 0x1f },
		{ .addr = 0x3828e1, .byte = 0x66 }
};

static const SST_Transaction jmp_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9969686, .data = 10462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3680478, .data = 57025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3680480, .data = 8038, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_11[] = {
		{ .addr = 0x799f20, .byte = 0x4e },
		{ .addr = 0x799f21, .byte = 0xd5 },
		{ .addr = 0x799f22, .byte = 0xf5 },
		{ .addr = 0x799f23, .byte = 0xaa },
		{ .addr = 0xafbe2a, .byte = 0x28 },
		{ .addr = 0xafbe2b, .byte = 0x1d },
		{ .addr = 0xafbe2c, .byte = 0x82 },
		{ .addr = 0xafbe2d, .byte = 0xf2 }
};

static const SST_RamByte jmp_final_ram_11[] = {
		{ .addr = 0x799f20, .byte = 0x4e },
		{ .addr = 0x799f21, .byte = 0xd5 },
		{ .addr = 0x799f22, .byte = 0xf5 },
		{ .addr = 0x799f23, .byte = 0xaa },
		{ .addr = 0xafbe2a, .byte = 0x28 },
		{ .addr = 0xafbe2b, .byte = 0x1d },
		{ .addr = 0xafbe2c, .byte = 0x82 },
		{ .addr = 0xafbe2d, .byte = 0xf2 }
};

static const SST_Transaction jmp_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11517482, .data = 10269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11517484, .data = 33522, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_12[] = {
		{ .addr = 0x16fef8, .byte = 0x4e },
		{ .addr = 0x16fef9, .byte = 0xeb },
		{ .addr = 0x16fefa, .byte = 0x64 },
		{ .addr = 0x16fefb, .byte = 0xd5 },
		{ .addr = 0x7e5e08, .byte = 0x6d },
		{ .addr = 0x7e5e09, .byte = 0xf4 },
		{ .addr = 0x7e5e0a, .byte = 0xb8 },
		{ .addr = 0x7e5e0b, .byte = 0xba }
};

static const SST_RamByte jmp_final_ram_12[] = {
		{ .addr = 0x16fef8, .byte = 0x4e },
		{ .addr = 0x16fef9, .byte = 0xeb },
		{ .addr = 0x16fefa, .byte = 0x64 },
		{ .addr = 0x16fefb, .byte = 0xd5 },
		{ .addr = 0x7e5e08, .byte = 0x6d },
		{ .addr = 0x7e5e09, .byte = 0xf4 },
		{ .addr = 0x7e5e0a, .byte = 0xb8 },
		{ .addr = 0x7e5e0b, .byte = 0xba }
};

static const SST_Transaction jmp_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8281608, .data = 28148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8281610, .data = 47290, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_13[] = {
		{ .addr = 0xbba844, .byte = 0x4e },
		{ .addr = 0xbba845, .byte = 0xf0 },
		{ .addr = 0xbba846, .byte = 0x0f },
		{ .addr = 0xbba847, .byte = 0xf3 },
		{ .addr = 0x7f7d9a, .byte = 0x91 },
		{ .addr = 0x7f7d9b, .byte = 0xde },
		{ .addr = 0x7f7d9c, .byte = 0x0c },
		{ .addr = 0x7f7d9d, .byte = 0xf5 }
};

static const SST_RamByte jmp_final_ram_13[] = {
		{ .addr = 0xbba844, .byte = 0x4e },
		{ .addr = 0xbba845, .byte = 0xf0 },
		{ .addr = 0xbba846, .byte = 0x0f },
		{ .addr = 0xbba847, .byte = 0xf3 },
		{ .addr = 0x7f7d9a, .byte = 0x91 },
		{ .addr = 0x7f7d9b, .byte = 0xde },
		{ .addr = 0x7f7d9c, .byte = 0x0c },
		{ .addr = 0x7f7d9d, .byte = 0xf5 }
};

static const SST_Transaction jmp_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8355226, .data = 37342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8355228, .data = 3317, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_14[] = {
		{ .addr = 0xee6b4a, .byte = 0x4e },
		{ .addr = 0xee6b4b, .byte = 0xd0 },
		{ .addr = 0xee6b4c, .byte = 0x58 },
		{ .addr = 0xee6b4d, .byte = 0xa5 },
		{ .addr = 0x42724c, .byte = 0xd1 },
		{ .addr = 0x42724d, .byte = 0x63 },
		{ .addr = 0x42724e, .byte = 0x9d },
		{ .addr = 0x42724f, .byte = 0x40 }
};

static const SST_RamByte jmp_final_ram_14[] = {
		{ .addr = 0xee6b4a, .byte = 0x4e },
		{ .addr = 0xee6b4b, .byte = 0xd0 },
		{ .addr = 0xee6b4c, .byte = 0x58 },
		{ .addr = 0xee6b4d, .byte = 0xa5 },
		{ .addr = 0x42724c, .byte = 0xd1 },
		{ .addr = 0x42724d, .byte = 0x63 },
		{ .addr = 0x42724e, .byte = 0x9d },
		{ .addr = 0x42724f, .byte = 0x40 }
};

static const SST_Transaction jmp_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4354636, .data = 53603, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4354638, .data = 40256, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_15[] = {
		{ .addr = 0x1bb7f4, .byte = 0x4e },
		{ .addr = 0x1bb7f5, .byte = 0xd6 },
		{ .addr = 0x1bb7f6, .byte = 0x73 },
		{ .addr = 0x1bb7f7, .byte = 0xce },
		{ .addr = 0x2a6bfc, .byte = 0xaa },
		{ .addr = 0x2a6bfd, .byte = 0xad },
		{ .addr = 0x2a6bfe, .byte = 0xce },
		{ .addr = 0x2a6bff, .byte = 0xc1 }
};

static const SST_RamByte jmp_final_ram_15[] = {
		{ .addr = 0x1bb7f4, .byte = 0x4e },
		{ .addr = 0x1bb7f5, .byte = 0xd6 },
		{ .addr = 0x1bb7f6, .byte = 0x73 },
		{ .addr = 0x1bb7f7, .byte = 0xce },
		{ .addr = 0x2a6bfc, .byte = 0xaa },
		{ .addr = 0x2a6bfd, .byte = 0xad },
		{ .addr = 0x2a6bfe, .byte = 0xce },
		{ .addr = 0x2a6bff, .byte = 0xc1 }
};

static const SST_Transaction jmp_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2780156, .data = 43693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2780158, .data = 52929, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_16[] = {
		{ .addr = 0x9391f4, .byte = 0x4e },
		{ .addr = 0x9391f5, .byte = 0xe8 },
		{ .addr = 0x9391f6, .byte = 0xaa },
		{ .addr = 0x9391f7, .byte = 0xfb },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0xc0329e, .byte = 0xa2 },
		{ .addr = 0xc0329f, .byte = 0xf7 },
		{ .addr = 0xc032a0, .byte = 0x67 },
		{ .addr = 0xc032a1, .byte = 0x42 }
};

static const SST_RamByte jmp_final_ram_16[] = {
		{ .addr = 0x9391f4, .byte = 0x4e },
		{ .addr = 0x9391f5, .byte = 0xe8 },
		{ .addr = 0x9391f6, .byte = 0xaa },
		{ .addr = 0x9391f7, .byte = 0xfb },
		{ .addr = 0x85efa2, .byte = 0x91 },
		{ .addr = 0x85efa3, .byte = 0xf6 },
		{ .addr = 0x85ef9e, .byte = 0x27 },
		{ .addr = 0x85ef9f, .byte = 0x0e },
		{ .addr = 0x85efa0, .byte = 0x00 },
		{ .addr = 0x85efa1, .byte = 0x93 },
		{ .addr = 0x85ef9c, .byte = 0x4e },
		{ .addr = 0x85ef9d, .byte = 0xe8 },
		{ .addr = 0x85ef9a, .byte = 0xf9 },
		{ .addr = 0x85ef9b, .byte = 0x99 },
		{ .addr = 0x85ef96, .byte = 0x4e },
		{ .addr = 0x85ef97, .byte = 0xf6 },
		{ .addr = 0x85ef98, .byte = 0x45 },
		{ .addr = 0x85ef99, .byte = 0xac },
		{ .addr = 0x00000c, .byte = 0x94 },
		{ .addr = 0x00000d, .byte = 0xc0 },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0xc0329e, .byte = 0xa2 },
		{ .addr = 0xc0329f, .byte = 0xf7 },
		{ .addr = 0xc032a0, .byte = 0x67 },
		{ .addr = 0xc032a1, .byte = 0x42 }
};

static const SST_Transaction jmp_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11336088, .data = 54745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8777634, .data = 37366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8777630, .data = 9998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8777632, .data = 147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8777628, .data = 20200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8777626, .data = 63897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8777622, .data = 20214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8777624, .data = 17836, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38080, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12595870, .data = 41719, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12595872, .data = 26434, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_17[] = {
		{ .addr = 0x32b986, .byte = 0x4e },
		{ .addr = 0x32b987, .byte = 0xf5 },
		{ .addr = 0x32b988, .byte = 0x7a },
		{ .addr = 0x32b989, .byte = 0x06 },
		{ .addr = 0xcb8b5e, .byte = 0x25 },
		{ .addr = 0xcb8b5f, .byte = 0x34 },
		{ .addr = 0xcb8b60, .byte = 0xc4 },
		{ .addr = 0xcb8b61, .byte = 0xb1 }
};

static const SST_RamByte jmp_final_ram_17[] = {
		{ .addr = 0x32b986, .byte = 0x4e },
		{ .addr = 0x32b987, .byte = 0xf5 },
		{ .addr = 0x32b988, .byte = 0x7a },
		{ .addr = 0x32b989, .byte = 0x06 },
		{ .addr = 0xcb8b5e, .byte = 0x25 },
		{ .addr = 0xcb8b5f, .byte = 0x34 },
		{ .addr = 0xcb8b60, .byte = 0xc4 },
		{ .addr = 0xcb8b61, .byte = 0xb1 }
};

static const SST_Transaction jmp_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13339486, .data = 9524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13339488, .data = 50353, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_18[] = {
		{ .addr = 0x18a6ca, .byte = 0x4e },
		{ .addr = 0x18a6cb, .byte = 0xf8 },
		{ .addr = 0x18a6cc, .byte = 0x7b },
		{ .addr = 0x18a6cd, .byte = 0x7c },
		{ .addr = 0x007b7c, .byte = 0x3c },
		{ .addr = 0x007b7d, .byte = 0x2e },
		{ .addr = 0x007b7e, .byte = 0x0c },
		{ .addr = 0x007b7f, .byte = 0xb4 }
};

static const SST_RamByte jmp_final_ram_18[] = {
		{ .addr = 0x18a6ca, .byte = 0x4e },
		{ .addr = 0x18a6cb, .byte = 0xf8 },
		{ .addr = 0x18a6cc, .byte = 0x7b },
		{ .addr = 0x18a6cd, .byte = 0x7c },
		{ .addr = 0x007b7c, .byte = 0x3c },
		{ .addr = 0x007b7d, .byte = 0x2e },
		{ .addr = 0x007b7e, .byte = 0x0c },
		{ .addr = 0x007b7f, .byte = 0xb4 }
};

static const SST_Transaction jmp_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 31612, .data = 15406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 31614, .data = 3252, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_19[] = {
		{ .addr = 0x1163ce, .byte = 0x4e },
		{ .addr = 0x1163cf, .byte = 0xd0 },
		{ .addr = 0x1163d0, .byte = 0xbd },
		{ .addr = 0x1163d1, .byte = 0x4a },
		{ .addr = 0x82d762, .byte = 0xb5 },
		{ .addr = 0x82d763, .byte = 0x92 },
		{ .addr = 0x82d764, .byte = 0xba },
		{ .addr = 0x82d765, .byte = 0x41 }
};

static const SST_RamByte jmp_final_ram_19[] = {
		{ .addr = 0x1163ce, .byte = 0x4e },
		{ .addr = 0x1163cf, .byte = 0xd0 },
		{ .addr = 0x1163d0, .byte = 0xbd },
		{ .addr = 0x1163d1, .byte = 0x4a },
		{ .addr = 0x82d762, .byte = 0xb5 },
		{ .addr = 0x82d763, .byte = 0x92 },
		{ .addr = 0x82d764, .byte = 0xba },
		{ .addr = 0x82d765, .byte = 0x41 }
};

static const SST_Transaction jmp_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8574818, .data = 46482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8574820, .data = 47681, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_20[] = {
		{ .addr = 0x0422e8, .byte = 0x4e },
		{ .addr = 0x0422e9, .byte = 0xf0 },
		{ .addr = 0x0422ea, .byte = 0xf5 },
		{ .addr = 0x0422eb, .byte = 0x06 },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0xcb },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0x42cb9e, .byte = 0x5f },
		{ .addr = 0x42cb9f, .byte = 0x52 },
		{ .addr = 0x42cba0, .byte = 0xde },
		{ .addr = 0x42cba1, .byte = 0xd2 }
};

static const SST_RamByte jmp_final_ram_20[] = {
		{ .addr = 0x0422e8, .byte = 0x4e },
		{ .addr = 0x0422e9, .byte = 0xf0 },
		{ .addr = 0x0422ea, .byte = 0xf5 },
		{ .addr = 0x0422eb, .byte = 0x06 },
		{ .addr = 0xe12772, .byte = 0x22 },
		{ .addr = 0xe12773, .byte = 0xea },
		{ .addr = 0xe1276e, .byte = 0x82 },
		{ .addr = 0xe1276f, .byte = 0x06 },
		{ .addr = 0xe12770, .byte = 0x00 },
		{ .addr = 0xe12771, .byte = 0x04 },
		{ .addr = 0xe1276c, .byte = 0x4e },
		{ .addr = 0xe1276d, .byte = 0xf0 },
		{ .addr = 0xe1276a, .byte = 0xb3 },
		{ .addr = 0xe1276b, .byte = 0x93 },
		{ .addr = 0xe12766, .byte = 0x4e },
		{ .addr = 0xe12767, .byte = 0xf2 },
		{ .addr = 0xe12768, .byte = 0x88 },
		{ .addr = 0xe12769, .byte = 0x01 },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0xcb },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0x42cb9e, .byte = 0x5f },
		{ .addr = 0x42cb9f, .byte = 0x52 },
		{ .addr = 0x42cba0, .byte = 0xde },
		{ .addr = 0x42cba1, .byte = 0xd2 }
};

static const SST_Transaction jmp_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 111506, .data = 17248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14755698, .data = 8938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14755694, .data = 33286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14755696, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14755692, .data = 20208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14755690, .data = 45971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14755686, .data = 20210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14755688, .data = 34817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4377502, .data = 24402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4377504, .data = 57042, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_21[] = {
		{ .addr = 0x710cae, .byte = 0x4e },
		{ .addr = 0x710caf, .byte = 0xf2 },
		{ .addr = 0x710cb0, .byte = 0x8f },
		{ .addr = 0x710cb1, .byte = 0xb9 },
		{ .addr = 0xd9f15a, .byte = 0x6c },
		{ .addr = 0xd9f15b, .byte = 0x27 },
		{ .addr = 0xd9f15c, .byte = 0x3f },
		{ .addr = 0xd9f15d, .byte = 0x54 }
};

static const SST_RamByte jmp_final_ram_21[] = {
		{ .addr = 0x710cae, .byte = 0x4e },
		{ .addr = 0x710caf, .byte = 0xf2 },
		{ .addr = 0x710cb0, .byte = 0x8f },
		{ .addr = 0x710cb1, .byte = 0xb9 },
		{ .addr = 0xd9f15a, .byte = 0x6c },
		{ .addr = 0xd9f15b, .byte = 0x27 },
		{ .addr = 0xd9f15c, .byte = 0x3f },
		{ .addr = 0xd9f15d, .byte = 0x54 }
};

static const SST_Transaction jmp_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14283098, .data = 27687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14283100, .data = 16212, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_22[] = {
		{ .addr = 0xa93878, .byte = 0x4e },
		{ .addr = 0xa93879, .byte = 0xd2 },
		{ .addr = 0xa9387a, .byte = 0x95 },
		{ .addr = 0xa9387b, .byte = 0x3e },
		{ .addr = 0x5fde46, .byte = 0x45 },
		{ .addr = 0x5fde47, .byte = 0x6f },
		{ .addr = 0x5fde48, .byte = 0x86 },
		{ .addr = 0x5fde49, .byte = 0x14 }
};

static const SST_RamByte jmp_final_ram_22[] = {
		{ .addr = 0xa93878, .byte = 0x4e },
		{ .addr = 0xa93879, .byte = 0xd2 },
		{ .addr = 0xa9387a, .byte = 0x95 },
		{ .addr = 0xa9387b, .byte = 0x3e },
		{ .addr = 0x5fde46, .byte = 0x45 },
		{ .addr = 0x5fde47, .byte = 0x6f },
		{ .addr = 0x5fde48, .byte = 0x86 },
		{ .addr = 0x5fde49, .byte = 0x14 }
};

static const SST_Transaction jmp_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6282822, .data = 17775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6282824, .data = 34324, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_23[] = {
		{ .addr = 0x8f2850, .byte = 0x4e },
		{ .addr = 0x8f2851, .byte = 0xef },
		{ .addr = 0x8f2852, .byte = 0xa4 },
		{ .addr = 0x8f2853, .byte = 0xb0 },
		{ .addr = 0x66755a, .byte = 0xad },
		{ .addr = 0x66755b, .byte = 0xa9 },
		{ .addr = 0x66755c, .byte = 0x33 },
		{ .addr = 0x66755d, .byte = 0xdf }
};

static const SST_RamByte jmp_final_ram_23[] = {
		{ .addr = 0x8f2850, .byte = 0x4e },
		{ .addr = 0x8f2851, .byte = 0xef },
		{ .addr = 0x8f2852, .byte = 0xa4 },
		{ .addr = 0x8f2853, .byte = 0xb0 },
		{ .addr = 0x66755a, .byte = 0xad },
		{ .addr = 0x66755b, .byte = 0xa9 },
		{ .addr = 0x66755c, .byte = 0x33 },
		{ .addr = 0x66755d, .byte = 0xdf }
};

static const SST_Transaction jmp_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6714714, .data = 44457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6714716, .data = 13279, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_24[] = {
		{ .addr = 0x021872, .byte = 0x4e },
		{ .addr = 0x021873, .byte = 0xfa },
		{ .addr = 0x021874, .byte = 0x26 },
		{ .addr = 0x021875, .byte = 0x40 },
		{ .addr = 0x023eb4, .byte = 0x16 },
		{ .addr = 0x023eb5, .byte = 0xb1 },
		{ .addr = 0x023eb6, .byte = 0x28 },
		{ .addr = 0x023eb7, .byte = 0xf6 }
};

static const SST_RamByte jmp_final_ram_24[] = {
		{ .addr = 0x021872, .byte = 0x4e },
		{ .addr = 0x021873, .byte = 0xfa },
		{ .addr = 0x021874, .byte = 0x26 },
		{ .addr = 0x021875, .byte = 0x40 },
		{ .addr = 0x023eb4, .byte = 0x16 },
		{ .addr = 0x023eb5, .byte = 0xb1 },
		{ .addr = 0x023eb6, .byte = 0x28 },
		{ .addr = 0x023eb7, .byte = 0xf6 }
};

static const SST_Transaction jmp_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 147124, .data = 5809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 147126, .data = 10486, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_25[] = {
		{ .addr = 0x6720a6, .byte = 0x4e },
		{ .addr = 0x6720a7, .byte = 0xf2 },
		{ .addr = 0x6720a8, .byte = 0xfe },
		{ .addr = 0x6720a9, .byte = 0xeb },
		{ .addr = 0x00000c, .byte = 0x83 },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0x60 },
		{ .addr = 0xe2b460, .byte = 0xe9 },
		{ .addr = 0xe2b461, .byte = 0x2e },
		{ .addr = 0xe2b462, .byte = 0x54 },
		{ .addr = 0xe2b463, .byte = 0xc0 }
};

static const SST_RamByte jmp_final_ram_25[] = {
		{ .addr = 0x6720a6, .byte = 0x4e },
		{ .addr = 0x6720a7, .byte = 0xf2 },
		{ .addr = 0x6720a8, .byte = 0xfe },
		{ .addr = 0x6720a9, .byte = 0xeb },
		{ .addr = 0x4c9cb8, .byte = 0x20 },
		{ .addr = 0x4c9cb9, .byte = 0xa8 },
		{ .addr = 0x4c9cb4, .byte = 0x21 },
		{ .addr = 0x4c9cb5, .byte = 0x0e },
		{ .addr = 0x4c9cb6, .byte = 0x00 },
		{ .addr = 0x4c9cb7, .byte = 0x67 },
		{ .addr = 0x4c9cb2, .byte = 0x4e },
		{ .addr = 0x4c9cb3, .byte = 0xf2 },
		{ .addr = 0x4c9cb0, .byte = 0x6d },
		{ .addr = 0x4c9cb1, .byte = 0xf5 },
		{ .addr = 0x4c9cac, .byte = 0x4e },
		{ .addr = 0x4c9cad, .byte = 0xf6 },
		{ .addr = 0x4c9cae, .byte = 0x97 },
		{ .addr = 0x4c9caf, .byte = 0x77 },
		{ .addr = 0x00000c, .byte = 0x83 },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0x60 },
		{ .addr = 0xe2b460, .byte = 0xe9 },
		{ .addr = 0xe2b461, .byte = 0x2e },
		{ .addr = 0xe2b462, .byte = 0x54 },
		{ .addr = 0xe2b463, .byte = 0xc0 }
};

static const SST_Transaction jmp_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7826932, .data = 48635, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020856, .data = 8360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020852, .data = 8462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020854, .data = 103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020850, .data = 20210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020848, .data = 28149, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020844, .data = 20214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020846, .data = 38775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14857312, .data = 59694, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14857314, .data = 21696, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_26[] = {
		{ .addr = 0xe729b6, .byte = 0x4e },
		{ .addr = 0xe729b7, .byte = 0xf5 },
		{ .addr = 0xe729b8, .byte = 0xfa },
		{ .addr = 0xe729b9, .byte = 0x28 },
		{ .addr = 0x4b1dd8, .byte = 0x4b },
		{ .addr = 0x4b1dd9, .byte = 0x20 },
		{ .addr = 0x4b1dda, .byte = 0xa2 },
		{ .addr = 0x4b1ddb, .byte = 0x01 }
};

static const SST_RamByte jmp_final_ram_26[] = {
		{ .addr = 0xe729b6, .byte = 0x4e },
		{ .addr = 0xe729b7, .byte = 0xf5 },
		{ .addr = 0xe729b8, .byte = 0xfa },
		{ .addr = 0xe729b9, .byte = 0x28 },
		{ .addr = 0x4b1dd8, .byte = 0x4b },
		{ .addr = 0x4b1dd9, .byte = 0x20 },
		{ .addr = 0x4b1dda, .byte = 0xa2 },
		{ .addr = 0x4b1ddb, .byte = 0x01 }
};

static const SST_Transaction jmp_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4922840, .data = 19232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4922842, .data = 41473, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_27[] = {
		{ .addr = 0x084a38, .byte = 0x4e },
		{ .addr = 0x084a39, .byte = 0xec },
		{ .addr = 0x084a3a, .byte = 0xd6 },
		{ .addr = 0x084a3b, .byte = 0xf7 },
		{ .addr = 0xf5cae0, .byte = 0xcb },
		{ .addr = 0xf5cae1, .byte = 0x32 },
		{ .addr = 0xf5cae2, .byte = 0x77 },
		{ .addr = 0xf5cae3, .byte = 0x3e }
};

static const SST_RamByte jmp_final_ram_27[] = {
		{ .addr = 0x084a38, .byte = 0x4e },
		{ .addr = 0x084a39, .byte = 0xec },
		{ .addr = 0x084a3a, .byte = 0xd6 },
		{ .addr = 0x084a3b, .byte = 0xf7 },
		{ .addr = 0xf5cae0, .byte = 0xcb },
		{ .addr = 0xf5cae1, .byte = 0x32 },
		{ .addr = 0xf5cae2, .byte = 0x77 },
		{ .addr = 0xf5cae3, .byte = 0x3e }
};

static const SST_Transaction jmp_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16108256, .data = 52018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16108258, .data = 30526, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_28[] = {
		{ .addr = 0xcd998a, .byte = 0x4e },
		{ .addr = 0xcd998b, .byte = 0xd7 },
		{ .addr = 0xcd998c, .byte = 0x96 },
		{ .addr = 0xcd998d, .byte = 0xef },
		{ .addr = 0x898008, .byte = 0x5b },
		{ .addr = 0x898009, .byte = 0x32 },
		{ .addr = 0x89800a, .byte = 0x08 },
		{ .addr = 0x89800b, .byte = 0x06 }
};

static const SST_RamByte jmp_final_ram_28[] = {
		{ .addr = 0xcd998a, .byte = 0x4e },
		{ .addr = 0xcd998b, .byte = 0xd7 },
		{ .addr = 0xcd998c, .byte = 0x96 },
		{ .addr = 0xcd998d, .byte = 0xef },
		{ .addr = 0x898008, .byte = 0x5b },
		{ .addr = 0x898009, .byte = 0x32 },
		{ .addr = 0x89800a, .byte = 0x08 },
		{ .addr = 0x89800b, .byte = 0x06 }
};

static const SST_Transaction jmp_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9011208, .data = 23346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9011210, .data = 2054, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_29[] = {
		{ .addr = 0x033d3a, .byte = 0x4e },
		{ .addr = 0x033d3b, .byte = 0xf3 },
		{ .addr = 0x033d3c, .byte = 0xef },
		{ .addr = 0x033d3d, .byte = 0x0a },
		{ .addr = 0xd70ba2, .byte = 0x8b },
		{ .addr = 0xd70ba3, .byte = 0xd5 },
		{ .addr = 0xd70ba4, .byte = 0x91 },
		{ .addr = 0xd70ba5, .byte = 0xd8 }
};

static const SST_RamByte jmp_final_ram_29[] = {
		{ .addr = 0x033d3a, .byte = 0x4e },
		{ .addr = 0x033d3b, .byte = 0xf3 },
		{ .addr = 0x033d3c, .byte = 0xef },
		{ .addr = 0x033d3d, .byte = 0x0a },
		{ .addr = 0xd70ba2, .byte = 0x8b },
		{ .addr = 0xd70ba3, .byte = 0xd5 },
		{ .addr = 0xd70ba4, .byte = 0x91 },
		{ .addr = 0xd70ba5, .byte = 0xd8 }
};

static const SST_Transaction jmp_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14093218, .data = 35797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14093220, .data = 37336, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_30[] = {
		{ .addr = 0x8807d6, .byte = 0x4e },
		{ .addr = 0x8807d7, .byte = 0xe8 },
		{ .addr = 0x8807d8, .byte = 0x06 },
		{ .addr = 0x8807d9, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xd8bca2, .byte = 0xa0 },
		{ .addr = 0xd8bca3, .byte = 0xc1 },
		{ .addr = 0xd8bca4, .byte = 0x79 },
		{ .addr = 0xd8bca5, .byte = 0x6f }
};

static const SST_RamByte jmp_final_ram_30[] = {
		{ .addr = 0x8807d6, .byte = 0x4e },
		{ .addr = 0x8807d7, .byte = 0xe8 },
		{ .addr = 0x8807d8, .byte = 0x06 },
		{ .addr = 0x8807d9, .byte = 0x36 },
		{ .addr = 0x97a192, .byte = 0x07 },
		{ .addr = 0x97a193, .byte = 0xd8 },
		{ .addr = 0x97a18e, .byte = 0xa2 },
		{ .addr = 0x97a18f, .byte = 0x1d },
		{ .addr = 0x97a190, .byte = 0x00 },
		{ .addr = 0x97a191, .byte = 0x88 },
		{ .addr = 0x97a18c, .byte = 0x4e },
		{ .addr = 0x97a18d, .byte = 0xe8 },
		{ .addr = 0x97a18a, .byte = 0x3a },
		{ .addr = 0x97a18b, .byte = 0x79 },
		{ .addr = 0x97a186, .byte = 0x4e },
		{ .addr = 0x97a187, .byte = 0xf6 },
		{ .addr = 0x97a188, .byte = 0xb7 },
		{ .addr = 0x97a189, .byte = 0xbb },
		{ .addr = 0x00000c, .byte = 0x8b },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0xd8bca2, .byte = 0xa0 },
		{ .addr = 0xd8bca3, .byte = 0xc1 },
		{ .addr = 0xd8bca4, .byte = 0x79 },
		{ .addr = 0xd8bca5, .byte = 0x6f }
};

static const SST_Transaction jmp_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12270200, .data = 53969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9937298, .data = 2008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9937294, .data = 41501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9937296, .data = 136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9937292, .data = 20200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9937290, .data = 14969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9937286, .data = 20214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9937288, .data = 47035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14204066, .data = 41153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14204068, .data = 31087, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte jmp_initial_ram_31[] = {
		{ .addr = 0x67cb12, .byte = 0x4e },
		{ .addr = 0x67cb13, .byte = 0xe9 },
		{ .addr = 0x67cb14, .byte = 0x04 },
		{ .addr = 0x67cb15, .byte = 0x0b },
		{ .addr = 0xbdd908, .byte = 0x17 },
		{ .addr = 0xbdd909, .byte = 0x1f },
		{ .addr = 0xbdd90a, .byte = 0x6b },
		{ .addr = 0xbdd90b, .byte = 0x71 }
};

static const SST_RamByte jmp_final_ram_31[] = {
		{ .addr = 0x67cb12, .byte = 0x4e },
		{ .addr = 0x67cb13, .byte = 0xe9 },
		{ .addr = 0x67cb14, .byte = 0x04 },
		{ .addr = 0x67cb15, .byte = 0x0b },
		{ .addr = 0xbdd908, .byte = 0x17 },
		{ .addr = 0xbdd909, .byte = 0x1f },
		{ .addr = 0xbdd90a, .byte = 0x6b },
		{ .addr = 0xbdd90b, .byte = 0x71 }
};

static const SST_Transaction jmp_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12441864, .data = 5919, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12441866, .data = 27505, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase jmp[] = {
	{
		.name = "000 JMP (d16, A5) 4eed",
		.initial = {
			.regs = {
				745889030, 751113020, 2468056411, 91420713, 1920717159, 183156110, 2387904918, 2689567734, 942442625, 1780494319, 1538762649, 2721591091, 4025689279, 1757057227, 1932686148, 11061346, 12702386, 9231, 2785168
			},
			.prefetch0 = 20205,
			.prefetch1 = 24173,
			.ram = jmp_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				745889030, 751113020, 2468056411, 91420713, 1920717159, 183156110, 2387904918, 2689567734, 942442625, 1780494319, 1538762649, 2721591091, 4025689279, 1757057227, 1932686148, 11061346, 12702386, 9231, 1757081404
			},
			.prefetch0 = 46672,
			.prefetch1 = 28032,
			.ram = jmp_final_ram_0,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_0,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "001 JMP (A2) 4ed2",
		.initial = {
			.regs = {
				1168967385, 1879568743, 2460849320, 3020245185, 3699630890, 3284337486, 3172290214, 3839789171, 2144399886, 1849481331, 3825041287, 1358439059, 971992146, 1695847265, 1089594493, 15591476, 7300866, 8976, 4556040
			},
			.prefetch0 = 20178,
			.prefetch1 = 8861,
			.ram = jmp_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1168967385, 1879568743, 2460849320, 3020245185, 3699630890, 3284337486, 3172290214, 3839789171, 2144399886, 1849481331, 3825041287, 1358439059, 971992146, 1695847265, 1089594493, 15591476, 7300852, 8976, 1952988504
			},
			.prefetch0 = 26402,
			.prefetch1 = 25565,
			.ram = jmp_final_ram_1,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_1,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "002 JMP (A2) 4ed2",
		.initial = {
			.regs = {
				3744390971, 310280575, 2083613810, 2869483669, 2736033861, 3855679803, 377307942, 280803634, 2237884922, 362595010, 4146600978, 2084742503, 2539469226, 1920363500, 2826393125, 2247958, 14131648, 1806, 11186812
			},
			.prefetch0 = 20178,
			.prefetch1 = 43874,
			.ram = jmp_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3744390971, 310280575, 2083613810, 2869483669, 2736033861, 3855679803, 377307942, 280803634, 2237884922, 362595010, 4146600978, 2084742503, 2539469226, 1920363500, 2826393125, 2247958, 14131648, 1806, 4146600982
			},
			.prefetch0 = 4797,
			.prefetch1 = 43339,
			.ram = jmp_final_ram_2,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 JMP (xxx).w 4ef8",
		.initial = {
			.regs = {
				3841736442, 4124189041, 1115993178, 4137528513, 3155810608, 1467216892, 3560237015, 1264336041, 35627439, 377631785, 868535209, 2339283519, 2649503626, 2494095171, 2946200242, 7108242, 6435518, 42261, 208754
			},
			.prefetch0 = 20216,
			.prefetch1 = 19957,
			.ram = jmp_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3841736442, 4124189041, 1115993178, 4137528513, 3155810608, 1467216892, 3560237015, 1264336041, 35627439, 377631785, 868535209, 2339283519, 2649503626, 2494095171, 2946200242, 7108242, 6435504, 9493, 4111343590
			},
			.prefetch0 = 64905,
			.prefetch1 = 53232,
			.ram = jmp_final_ram_3,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 JMP (d8, A7, Xn) 4ef7",
		.initial = {
			.regs = {
				1333550614, 1476034778, 1198296505, 91925410, 588574685, 516334369, 1191777173, 1148176610, 996106054, 3406147452, 477269836, 3881352575, 3006760061, 467133272, 2403470043, 3749442, 7453622, 42776, 10617574
			},
			.prefetch0 = 20215,
			.prefetch1 = 35386,
			.ram = jmp_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1333550614, 1476034778, 1198296505, 91925410, 588574685, 516334369, 1191777173, 1148176610, 996106054, 3406147452, 477269836, 3881352575, 3006760061, 467133272, 2403470043, 3749442, 7453622, 42776, 1003559738
			},
			.prefetch0 = 35182,
			.prefetch1 = 65516,
			.ram = jmp_final_ram_4,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_4,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "005 JMP (d8, A7, Xn) 4ef7",
		.initial = {
			.regs = {
				726203651, 1744331740, 263930873, 4231326900, 3383664181, 2761517231, 894969550, 3456343703, 2798097528, 2394635255, 184239991, 3359829455, 912895291, 1947682302, 2432325766, 13683788, 3485108, 9756, 9881222
			},
			.prefetch0 = 20215,
			.prefetch1 = 21274,
			.ram = jmp_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				726203651, 1744331740, 263930873, 4231326900, 3383664181, 2761517231, 894969550, 3456343703, 2798097528, 2394635255, 184239991, 3359829455, 912895291, 1947682302, 2432325766, 13683788, 3485094, 9756, 1250038226
			},
			.prefetch0 = 46628,
			.prefetch1 = 33697,
			.ram = jmp_final_ram_5,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_5,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "006 JMP (d16, A0) 4ee8",
		.initial = {
			.regs = {
				2877076546, 3492751054, 3585577028, 1309775052, 3027328271, 3332355231, 2669650523, 426130657, 2038956288, 3236644081, 2935942730, 1321196420, 3150477539, 660594346, 1791982121, 11500226, 6319676, 8218, 5954532
			},
			.prefetch0 = 20200,
			.prefetch1 = 26412,
			.ram = jmp_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2877076546, 3492751054, 3585577028, 1309775052, 3027328271, 3332355231, 2669650523, 426130657, 2038956288, 3236644081, 2935942730, 1321196420, 3150477539, 660594346, 1791982121, 11500226, 6319676, 8218, 2038982704
			},
			.prefetch0 = 63279,
			.prefetch1 = 57736,
			.ram = jmp_final_ram_6,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_6,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "007 JMP (xxx).w 4ef8",
		.initial = {
			.regs = {
				3345218311, 3686349087, 3713770471, 4045459675, 1916403803, 3241527607, 552024866, 529362447, 1669920917, 1654336700, 330217161, 1453898574, 538226412, 3939903736, 2728566505, 1743036, 4341624, 8976, 10020422
			},
			.prefetch0 = 20216,
			.prefetch1 = 35846,
			.ram = jmp_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3345218311, 3686349087, 3713770471, 4045459675, 1916403803, 3241527607, 552024866, 529362447, 1669920917, 1654336700, 330217161, 1453898574, 538226412, 3939903736, 2728566505, 1743036, 4341624, 8976, 4294937610
			},
			.prefetch0 = 13160,
			.prefetch1 = 8830,
			.ram = jmp_final_ram_7,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_7,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "008 JMP (d16, A7) 4eef",
		.initial = {
			.regs = {
				2093055628, 260891228, 1127801473, 4148373816, 2245313832, 2507987471, 1127494420, 402446754, 1997229007, 3832960531, 2181711069, 2774846489, 21458390, 2565226489, 4053136877, 8302286, 8608738, 8216, 11341702
			},
			.prefetch0 = 20207,
			.prefetch1 = 9247,
			.ram = jmp_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2093055628, 260891228, 1127801473, 4148373816, 2245313832, 2507987471, 1127494420, 402446754, 1997229007, 3832960531, 2181711069, 2774846489, 21458390, 2565226489, 4053136877, 8302286, 8608724, 8216, 2926582252
			},
			.prefetch0 = 13497,
			.prefetch1 = 11364,
			.ram = jmp_final_ram_8,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_8,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "009 JMP (d8, A5, Xn) 4ef5",
		.initial = {
			.regs = {
				1159967522, 915938394, 277504641, 42911554, 446219367, 3264763146, 1155757040, 2214500467, 2960663007, 2183597375, 3506402611, 2794700358, 4021850522, 2071257710, 3271574298, 3610948, 15834580, 33556, 13801322
			},
			.prefetch0 = 20213,
			.prefetch1 = 53102,
			.ram = jmp_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1159967522, 915938394, 277504641, 42911554, 446219367, 3264763146, 1155757040, 2214500467, 2960663007, 2183597375, 3506402611, 2794700358, 4021850522, 2071257710, 3271574298, 3610948, 15834580, 33556, 1798141050
			},
			.prefetch0 = 32737,
			.prefetch1 = 49259,
			.ram = jmp_final_ram_9,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_9,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "010 JMP (xxx).l 4ef9",
		.initial = {
			.regs = {
				3880464524, 2808220004, 2045762850, 443381186, 2467162037, 3449525060, 1750524506, 3135507282, 851763121, 3540414242, 2784369079, 1712161024, 1112914564, 3232703885, 516400255, 1806528, 11110876, 42246, 9969686
			},
			.prefetch0 = 20217,
			.prefetch1 = 2104,
			.ram = jmp_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3880464524, 2808220004, 2045762850, 443381186, 2467162037, 3449525060, 1750524506, 3135507282, 851763121, 3540414242, 2784369079, 1712161024, 1112914564, 3232703885, 516400255, 1806528, 11110876, 42246, 137898210
			},
			.prefetch0 = 57025,
			.prefetch1 = 8038,
			.ram = jmp_final_ram_10,
			.ram_len = 10,
		},
		.transactions = jmp_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 JMP (A5) 4ed5",
		.initial = {
			.regs = {
				947531099, 1831410319, 2171952928, 1316727136, 832692452, 4112952046, 1825099189, 3559929462, 2847749030, 2113242221, 4120833115, 2753700839, 506399831, 3903831594, 1608415670, 13302508, 3345378, 8470, 7970596
			},
			.prefetch0 = 20181,
			.prefetch1 = 62890,
			.ram = jmp_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				947531099, 1831410319, 2171952928, 1316727136, 832692452, 4112952046, 1825099189, 3559929462, 2847749030, 2113242221, 4120833115, 2753700839, 506399831, 3903831594, 1608415670, 13302508, 3345378, 8470, 3903831598
			},
			.prefetch0 = 10269,
			.prefetch1 = 33522,
			.ram = jmp_final_ram_11,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 JMP (d16, A3) 4eeb",
		.initial = {
			.regs = {
				1554322138, 3555111002, 3456425468, 3639416885, 3586878702, 1770014252, 1921043706, 1715780008, 3064926503, 1466754689, 1980290016, 1853749555, 3319505685, 3404795350, 901862477, 3596634, 3716154, 1031, 1507068
			},
			.prefetch0 = 20203,
			.prefetch1 = 25813,
			.ram = jmp_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1554322138, 3555111002, 3456425468, 3639416885, 3586878702, 1770014252, 1921043706, 1715780008, 3064926503, 1466754689, 1980290016, 1853749555, 3319505685, 3404795350, 901862477, 3596634, 3716154, 1031, 1853775372
			},
			.prefetch0 = 28148,
			.prefetch1 = 47290,
			.ram = jmp_final_ram_12,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_12,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "013 JMP (d8, A0, Xn) 4ef0",
		.initial = {
			.regs = {
				1783406667, 1169256440, 2280356960, 1535167131, 3188903637, 3189367785, 1622207081, 2148566365, 808639836, 770738819, 1829690747, 4244890889, 2385936782, 3819321824, 2904184590, 11613990, 16624840, 34326, 12298312
			},
			.prefetch0 = 20208,
			.prefetch1 = 4083,
			.ram = jmp_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1783406667, 1169256440, 2280356960, 1535167131, 3188903637, 3189367785, 1622207081, 2148566365, 808639836, 770738819, 1829690747, 4244890889, 2385936782, 3819321824, 2904184590, 11613990, 16624840, 34326, 2592046494
			},
			.prefetch0 = 37342,
			.prefetch1 = 3317,
			.ram = jmp_final_ram_13,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_13,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "014 JMP (A0) 4ed0",
		.initial = {
			.regs = {
				3734703093, 2526349333, 1275116828, 2379475847, 340197187, 3757010854, 931229866, 3584982025, 1497526860, 2084776297, 1071459570, 3141657617, 3074497665, 1785183144, 3214220407, 10848448, 10370294, 40971, 15625038
			},
			.prefetch0 = 20176,
			.prefetch1 = 22693,
			.ram = jmp_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3734703093, 2526349333, 1275116828, 2379475847, 340197187, 3757010854, 931229866, 3584982025, 1497526860, 2084776297, 1071459570, 3141657617, 3074497665, 1785183144, 3214220407, 10848448, 10370294, 40971, 1497526864
			},
			.prefetch0 = 53603,
			.prefetch1 = 40256,
			.ram = jmp_final_ram_14,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 JMP (A6) 4ed6",
		.initial = {
			.regs = {
				3420215983, 2360623485, 1441826155, 3112128570, 2810648436, 3673726976, 388056326, 1311805518, 3185632648, 624882207, 1087735489, 2488855681, 2246402366, 1790902479, 1932159996, 7869726, 11847944, 33285, 1816568
			},
			.prefetch0 = 20182,
			.prefetch1 = 29646,
			.ram = jmp_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3420215983, 2360623485, 1441826155, 3112128570, 2810648436, 3673726976, 388056326, 1311805518, 3185632648, 624882207, 1087735489, 2488855681, 2246402366, 1790902479, 1932159996, 7869726, 11847944, 33285, 1932160000
			},
			.prefetch0 = 43693,
			.prefetch1 = 52929,
			.ram = jmp_final_ram_15,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_15,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "016 JMP (d16, A0) 4ee8",
		.initial = {
			.regs = {
				3414977570, 2378098068, 2393721954, 1806287473, 3245244978, 3827834848, 1649076372, 2050677061, 1168985758, 2858331007, 3635461157, 3216976809, 3439744356, 4038088564, 3851135482, 10244368, 8777636, 9998, 9671160
			},
			.prefetch0 = 20200,
			.prefetch1 = 43771,
			.ram = jmp_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3414977570, 2378098068, 2393721954, 1806287473, 3245244978, 3827834848, 1649076372, 2050677061, 1168985758, 2858331007, 3635461157, 3216976809, 3439744356, 4038088564, 3851135482, 10244368, 8777622, 9998, 2495623842
			},
			.prefetch0 = 41719,
			.prefetch1 = 26434,
			.ram = jmp_final_ram_16,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_16,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "017 JMP (d8, A5, Xn) 4ef5",
		.initial = {
			.regs = {
				807406128, 2649330731, 566692503, 2220139782, 4078858890, 3310667492, 4078755339, 1307256373, 3865287195, 1481329589, 2844275228, 1804502124, 4231218251, 3588252963, 2828569793, 4538556, 252804, 41481, 3324298
			},
			.prefetch0 = 20213,
			.prefetch1 = 31238,
			.ram = jmp_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				807406128, 2649330731, 566692503, 2220139782, 4078858890, 3310667492, 4078755339, 1307256373, 3865287195, 1481329589, 2844275228, 1804502124, 4231218251, 3588252963, 2828569793, 4538556, 252804, 41481, 600542050
			},
			.prefetch0 = 9524,
			.prefetch1 = 50353,
			.ram = jmp_final_ram_17,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_17,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "018 JMP (xxx).w 4ef8",
		.initial = {
			.regs = {
				1666642336, 613605199, 4071640408, 767466635, 1863967283, 2090684911, 1064454739, 1028506696, 279751790, 3169291651, 646184875, 3804599427, 2841103965, 3272141618, 1401041353, 8958574, 2790586, 9994, 1615566
			},
			.prefetch0 = 20216,
			.prefetch1 = 31612,
			.ram = jmp_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1666642336, 613605199, 4071640408, 767466635, 1863967283, 2090684911, 1064454739, 1028506696, 279751790, 3169291651, 646184875, 3804599427, 2841103965, 3272141618, 1401041353, 8958574, 2790586, 9994, 31616
			},
			.prefetch0 = 15406,
			.prefetch1 = 3252,
			.ram = jmp_final_ram_18,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_18,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "019 JMP (A0) 4ed0",
		.initial = {
			.regs = {
				656855465, 273179432, 1940834870, 1919811286, 4225059176, 2166419772, 1040535919, 988120061, 2676152162, 3728404436, 2607683084, 1453640843, 3683518992, 1431445532, 1692922200, 14720806, 11740980, 42503, 1139666
			},
			.prefetch0 = 20176,
			.prefetch1 = 48458,
			.ram = jmp_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				656855465, 273179432, 1940834870, 1919811286, 4225059176, 2166419772, 1040535919, 988120061, 2676152162, 3728404436, 2607683084, 1453640843, 3683518992, 1431445532, 1692922200, 14720806, 11740980, 42503, 2676152166
			},
			.prefetch0 = 46482,
			.prefetch1 = 47681,
			.ram = jmp_final_ram_19,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 JMP (d8, A0, Xn) 4ef0",
		.initial = {
			.regs = {
				2024379872, 2992899412, 3258301024, 2808101224, 3275905821, 2969575810, 1770561434, 1037479392, 2281828111, 4095531664, 4200588485, 3068723547, 534901688, 2104001312, 806712397, 2344062, 14755700, 33286, 271084
			},
			.prefetch0 = 20208,
			.prefetch1 = 62726,
			.ram = jmp_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2024379872, 2992899412, 3258301024, 2808101224, 3275905821, 2969575810, 1770561434, 1037479392, 2281828111, 4095531664, 4200588485, 3068723547, 534901688, 2104001312, 806712397, 2344062, 14755686, 8710, 893569954
			},
			.prefetch0 = 24402,
			.prefetch1 = 57042,
			.ram = jmp_final_ram_20,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_20,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "021 JMP (d8, A2, Xn) 4ef2",
		.initial = {
			.regs = {
				2299759576, 430607630, 358992389, 2575312809, 2004638293, 3754895374, 2652161450, 3261419728, 1184559127, 8482980, 3779002762, 2814888358, 3543334289, 1717470681, 3294562866, 7710132, 14106088, 1290, 7408818
			},
			.prefetch0 = 20210,
			.prefetch1 = 36793,
			.ram = jmp_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2299759576, 430607630, 358992389, 2575312809, 2004638293, 3754895374, 2652161450, 3261419728, 1184559127, 8482980, 3779002762, 2814888358, 3543334289, 1717470681, 3294562866, 7710132, 14106088, 1290, 668594526
			},
			.prefetch0 = 27687,
			.prefetch1 = 16212,
			.ram = jmp_final_ram_21,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_21,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "022 JMP (A2) 4ed2",
		.initial = {
			.regs = {
				2089215344, 4108123351, 1849528018, 541053858, 1521682139, 1321914431, 1470647979, 2750122796, 741559432, 1839352746, 3462389318, 3590087808, 2084766236, 1290763676, 3653039433, 16123248, 8280304, 42002, 11090044
			},
			.prefetch0 = 20178,
			.prefetch1 = 38206,
			.ram = jmp_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2089215344, 4108123351, 1849528018, 541053858, 1521682139, 1321914431, 1470647979, 2750122796, 741559432, 1839352746, 3462389318, 3590087808, 2084766236, 1290763676, 3653039433, 16123248, 8280304, 42002, 3462389322
			},
			.prefetch0 = 17775,
			.prefetch1 = 34324,
			.ram = jmp_final_ram_22,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_22,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "023 JMP (d16, A7) 4eef",
		.initial = {
			.regs = {
				2835312699, 91464885, 3676307672, 694680618, 381152295, 598546865, 3984177874, 2489373009, 40554602, 4007942519, 2936928915, 324753690, 2872240045, 1744911972, 3127180675, 298604, 6738090, 41241, 9381972
			},
			.prefetch0 = 20207,
			.prefetch1 = 42160,
			.ram = jmp_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2835312699, 91464885, 3676307672, 694680618, 381152295, 598546865, 3984177874, 2489373009, 40554602, 4007942519, 2936928915, 324753690, 2872240045, 1744911972, 3127180675, 298604, 6738090, 41241, 6714718
			},
			.prefetch0 = 44457,
			.prefetch1 = 13279,
			.ram = jmp_final_ram_23,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_23,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "024 JMP (d16, PC) 4efa",
		.initial = {
			.regs = {
				3758287553, 2921974543, 1810189194, 1409876103, 160219264, 4277540922, 1061210531, 877082556, 2011374975, 2732391604, 769747697, 1589446477, 2864568355, 1757094458, 3962847220, 16310576, 8460710, 34585, 137334
			},
			.prefetch0 = 20218,
			.prefetch1 = 9792,
			.ram = jmp_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3758287553, 2921974543, 1810189194, 1409876103, 160219264, 4277540922, 1061210531, 877082556, 2011374975, 2732391604, 769747697, 1589446477, 2864568355, 1757094458, 3962847220, 16310576, 8460710, 34585, 147128
			},
			.prefetch0 = 5809,
			.prefetch1 = 10486,
			.ram = jmp_final_ram_24,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_24,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "025 JMP (d8, A2, Xn) 4ef2",
		.initial = {
			.regs = {
				400958699, 3480741585, 1891020439, 50185471, 1221358016, 3670487004, 2178570849, 887604769, 2890715568, 1785638232, 2536165712, 3850304143, 2985772923, 921197315, 1768778977, 14835132, 5020858, 8462, 6758570
			},
			.prefetch0 = 20210,
			.prefetch1 = 65259,
			.ram = jmp_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				400958699, 3480741585, 1891020439, 50185471, 1221358016, 3670487004, 2178570849, 887604769, 2890715568, 1785638232, 2536165712, 3850304143, 2985772923, 921197315, 1768778977, 14835132, 5020844, 8462, 2212672612
			},
			.prefetch0 = 59694,
			.prefetch1 = 21696,
			.ram = jmp_final_ram_25,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_25,
		.transactions_len = 15,
		.lenght = 64,
	},
	{
		.name = "026 JMP (d8, A5, Xn) 4ef5",
		.initial = {
			.regs = {
				4025966814, 1083610831, 2339083580, 1296989991, 391989833, 4007426393, 530542823, 3990664695, 177543646, 2033912212, 3718280630, 3996490259, 589435688, 393269970, 517129562, 14306014, 5347524, 526, 15149498
			},
			.prefetch0 = 20213,
			.prefetch1 = 64040,
			.ram = jmp_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4025966814, 1083610831, 2339083580, 1296989991, 391989833, 4007426393, 530542823, 3990664695, 177543646, 2033912212, 3718280630, 3996490259, 589435688, 393269970, 517129562, 14306014, 5347524, 526, 407576028
			},
			.prefetch0 = 19232,
			.prefetch1 = 41473,
			.ram = jmp_final_ram_26,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_26,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "027 JMP (d16, A4) 4eec",
		.initial = {
			.regs = {
				344314314, 3994997948, 1638078727, 631255201, 1360553337, 3074644586, 2022051198, 1985130705, 2828984883, 3643514508, 3053519127, 1356067123, 1358296041, 2762454280, 2673117304, 13516864, 6959290, 32779, 543292
			},
			.prefetch0 = 20204,
			.prefetch1 = 55031,
			.ram = jmp_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				344314314, 3994997948, 1638078727, 631255201, 1360553337, 3074644586, 2022051198, 1985130705, 2828984883, 3643514508, 3053519127, 1356067123, 1358296041, 2762454280, 2673117304, 13516864, 6959290, 32779, 1358285540
			},
			.prefetch0 = 52018,
			.prefetch1 = 30526,
			.ram = jmp_final_ram_27,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_27,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "028 JMP (A7) 4ed7",
		.initial = {
			.regs = {
				1023950495, 1960787024, 296166985, 918560472, 2459352257, 328139652, 1490708918, 3535308395, 1717562286, 369585270, 3416971949, 1196623874, 3620914810, 3459976843, 89621697, 9011208, 2795366, 272, 13474190
			},
			.prefetch0 = 20183,
			.prefetch1 = 38639,
			.ram = jmp_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1023950495, 1960787024, 296166985, 918560472, 2459352257, 328139652, 1490708918, 3535308395, 1717562286, 369585270, 3416971949, 1196623874, 3620914810, 3459976843, 89621697, 9011208, 2795366, 272, 9011212
			},
			.prefetch0 = 23346,
			.prefetch1 = 2054,
			.ram = jmp_final_ram_28,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_28,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "029 JMP (d8, A3, Xn) 4ef3",
		.initial = {
			.regs = {
				1028191369, 3553133557, 3280825996, 1526433496, 3394157601, 3391346360, 2775956784, 1256047831, 3910794893, 423419032, 1015950189, 1235666275, 2597121667, 1241944977, 2368751157, 11558412, 9292716, 1055, 212286
			},
			.prefetch0 = 20211,
			.prefetch1 = 61194,
			.ram = jmp_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1028191369, 3553133557, 3280825996, 1526433496, 3394157601, 3391346360, 2775956784, 1256047831, 3910794893, 423419032, 1015950189, 1235666275, 2597121667, 1241944977, 2368751157, 11558412, 9292716, 1055, 3604417446
			},
			.prefetch0 = 35797,
			.prefetch1 = 37336,
			.ram = jmp_final_ram_29,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_29,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "030 JMP (d16, A0) 4ee8",
		.initial = {
			.regs = {
				1605914699, 1997878668, 1515809662, 1267689512, 1132555135, 3545846124, 907465271, 2557670226, 3082499139, 1062417874, 1284004273, 3093180541, 565047058, 3401489000, 3932741722, 12527686, 9937300, 41501, 8914906
			},
			.prefetch0 = 20200,
			.prefetch1 = 1590,
			.ram = jmp_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1605914699, 1997878668, 1515809662, 1267689512, 1132555135, 3545846124, 907465271, 2557670226, 3082499139, 1062417874, 1284004273, 3093180541, 565047058, 3401489000, 3932741722, 12527686, 9937286, 8733, 2346237094
			},
			.prefetch0 = 41153,
			.prefetch1 = 31087,
			.ram = jmp_final_ram_30,
			.ram_len = 26,
		},
		.transactions = jmp_transactions_30,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "031 JMP (d16, A1) 4ee9",
		.initial = {
			.regs = {
				315825075, 2066929340, 1083664234, 3536929096, 2415729921, 2191523919, 1971857242, 319822880, 3281581023, 2176701693, 724124005, 388437283, 1453806701, 1517774913, 3202541776, 8187518, 3073930, 42759, 6802198
			},
			.prefetch0 = 20201,
			.prefetch1 = 1035,
			.ram = jmp_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				315825075, 2066929340, 1083664234, 3536929096, 2415729921, 2191523919, 1971857242, 319822880, 3281581023, 2176701693, 724124005, 388437283, 1453806701, 1517774913, 3202541776, 8187518, 3073930, 42759, 2176702732
			},
			.prefetch0 = 5919,
			.prefetch1 = 27505,
			.ram = jmp_final_ram_31,
			.ram_len = 8,
		},
		.transactions = jmp_transactions_31,
		.transactions_len = 3,
		.lenght = 10,
	},
};

#endif /* RBT_JMP_H */