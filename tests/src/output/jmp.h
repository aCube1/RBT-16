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

const uint32_t JMP_TEST_COUNT = 16;
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
};

#endif /* RBT_JMP_H */