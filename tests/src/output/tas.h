#ifndef RBT_TAS_H
#define RBT_TAS_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte tas_initial_ram_0[] = {
		{ .addr = 0xa69c20, .byte = 0x4a },
		{ .addr = 0xa69c21, .byte = 0xd1 },
		{ .addr = 0xa69c22, .byte = 0x94 },
		{ .addr = 0xa69c23, .byte = 0x42 },
		{ .addr = 0x609438, .byte = 0xe2 },
		{ .addr = 0x609439, .byte = 0xde },
		{ .addr = 0xa69c24, .byte = 0xb5 },
		{ .addr = 0xa69c25, .byte = 0x44 }
};

static const SST_RamByte tas_final_ram_0[] = {
		{ .addr = 0xa69c20, .byte = 0x4a },
		{ .addr = 0xa69c21, .byte = 0xd1 },
		{ .addr = 0xa69c22, .byte = 0x94 },
		{ .addr = 0xa69c23, .byte = 0x42 },
		{ .addr = 0x609438, .byte = 0xe2 },
		{ .addr = 0x609439, .byte = 0xde },
		{ .addr = 0xa69c24, .byte = 0xb5 },
		{ .addr = 0xa69c25, .byte = 0x44 }
};

static const SST_Transaction tas_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6329400, .data = 222, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6329400, .data = 222, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10918948, .data = 46404, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_1[] = {
		{ .addr = 0x471d62, .byte = 0x4a },
		{ .addr = 0x471d63, .byte = 0xc5 },
		{ .addr = 0x471d64, .byte = 0xbf },
		{ .addr = 0x471d65, .byte = 0x1f },
		{ .addr = 0x471d66, .byte = 0xd8 },
		{ .addr = 0x471d67, .byte = 0x94 }
};

static const SST_RamByte tas_final_ram_1[] = {
		{ .addr = 0x471d62, .byte = 0x4a },
		{ .addr = 0x471d63, .byte = 0xc5 },
		{ .addr = 0x471d64, .byte = 0xbf },
		{ .addr = 0x471d65, .byte = 0x1f },
		{ .addr = 0x471d66, .byte = 0xd8 },
		{ .addr = 0x471d67, .byte = 0x94 }
};

static const SST_Transaction tas_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4660582, .data = 55444, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_2[] = {
		{ .addr = 0x84a3b2, .byte = 0x4a },
		{ .addr = 0x84a3b3, .byte = 0xee },
		{ .addr = 0x84a3b4, .byte = 0x02 },
		{ .addr = 0x84a3b5, .byte = 0x38 },
		{ .addr = 0x84a3b6, .byte = 0x2e },
		{ .addr = 0x84a3b7, .byte = 0xba },
		{ .addr = 0x768082, .byte = 0xd5 },
		{ .addr = 0x768083, .byte = 0x95 },
		{ .addr = 0x84a3b8, .byte = 0xb0 },
		{ .addr = 0x84a3b9, .byte = 0x5a }
};

static const SST_RamByte tas_final_ram_2[] = {
		{ .addr = 0x84a3b2, .byte = 0x4a },
		{ .addr = 0x84a3b3, .byte = 0xee },
		{ .addr = 0x84a3b4, .byte = 0x02 },
		{ .addr = 0x84a3b5, .byte = 0x38 },
		{ .addr = 0x84a3b6, .byte = 0x2e },
		{ .addr = 0x84a3b7, .byte = 0xba },
		{ .addr = 0x768082, .byte = 0xd5 },
		{ .addr = 0x768083, .byte = 0x95 },
		{ .addr = 0x84a3b8, .byte = 0xb0 },
		{ .addr = 0x84a3b9, .byte = 0x5a }
};

static const SST_Transaction tas_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8692662, .data = 11962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7766146, .data = 54528, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7766146, .data = 54528, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8692664, .data = 45146, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_3[] = {
		{ .addr = 0xc92460, .byte = 0x4a },
		{ .addr = 0xc92461, .byte = 0xd4 },
		{ .addr = 0xc92462, .byte = 0x4a },
		{ .addr = 0xc92463, .byte = 0x64 },
		{ .addr = 0x110cd4, .byte = 0xd7 },
		{ .addr = 0x110cd5, .byte = 0xb6 },
		{ .addr = 0xc92464, .byte = 0xe3 },
		{ .addr = 0xc92465, .byte = 0x86 }
};

static const SST_RamByte tas_final_ram_3[] = {
		{ .addr = 0xc92460, .byte = 0x4a },
		{ .addr = 0xc92461, .byte = 0xd4 },
		{ .addr = 0xc92462, .byte = 0x4a },
		{ .addr = 0xc92463, .byte = 0x64 },
		{ .addr = 0x110cd4, .byte = 0xd7 },
		{ .addr = 0x110cd5, .byte = 0xb6 },
		{ .addr = 0xc92464, .byte = 0xe3 },
		{ .addr = 0xc92465, .byte = 0x86 }
};

static const SST_Transaction tas_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1117396, .data = 55040, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1117396, .data = 55040, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13182052, .data = 58246, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_4[] = {
		{ .addr = 0xb33fc0, .byte = 0x4a },
		{ .addr = 0xb33fc1, .byte = 0xf3 },
		{ .addr = 0xb33fc2, .byte = 0xc7 },
		{ .addr = 0xb33fc3, .byte = 0x40 },
		{ .addr = 0xb33fc4, .byte = 0xf1 },
		{ .addr = 0xb33fc5, .byte = 0x1c },
		{ .addr = 0xf3413e, .byte = 0x13 },
		{ .addr = 0xf3413f, .byte = 0xe7 },
		{ .addr = 0xb33fc6, .byte = 0xca },
		{ .addr = 0xb33fc7, .byte = 0x10 }
};

static const SST_RamByte tas_final_ram_4[] = {
		{ .addr = 0xb33fc0, .byte = 0x4a },
		{ .addr = 0xb33fc1, .byte = 0xf3 },
		{ .addr = 0xb33fc2, .byte = 0xc7 },
		{ .addr = 0xb33fc3, .byte = 0x40 },
		{ .addr = 0xb33fc4, .byte = 0xf1 },
		{ .addr = 0xb33fc5, .byte = 0x1c },
		{ .addr = 0xf3413e, .byte = 0x93 },
		{ .addr = 0xf3413f, .byte = 0xe7 },
		{ .addr = 0xb33fc6, .byte = 0xca },
		{ .addr = 0xb33fc7, .byte = 0x10 }
};

static const SST_Transaction tas_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11747268, .data = 61724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15941950, .data = 4864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15941950, .data = 37632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11747270, .data = 51728, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_5[] = {
		{ .addr = 0x683548, .byte = 0x4a },
		{ .addr = 0x683549, .byte = 0xc4 },
		{ .addr = 0x68354a, .byte = 0x52 },
		{ .addr = 0x68354b, .byte = 0x11 },
		{ .addr = 0x68354c, .byte = 0x5f },
		{ .addr = 0x68354d, .byte = 0x84 }
};

static const SST_RamByte tas_final_ram_5[] = {
		{ .addr = 0x683548, .byte = 0x4a },
		{ .addr = 0x683549, .byte = 0xc4 },
		{ .addr = 0x68354a, .byte = 0x52 },
		{ .addr = 0x68354b, .byte = 0x11 },
		{ .addr = 0x68354c, .byte = 0x5f },
		{ .addr = 0x68354d, .byte = 0x84 }
};

static const SST_Transaction tas_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6829388, .data = 24452, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_6[] = {
		{ .addr = 0xdb853c, .byte = 0x4a },
		{ .addr = 0xdb853d, .byte = 0xda },
		{ .addr = 0xdb853e, .byte = 0x1f },
		{ .addr = 0xdb853f, .byte = 0xfe },
		{ .addr = 0xa08d0c, .byte = 0x9e },
		{ .addr = 0xa08d0d, .byte = 0x4e },
		{ .addr = 0xdb8540, .byte = 0x91 },
		{ .addr = 0xdb8541, .byte = 0x76 }
};

static const SST_RamByte tas_final_ram_6[] = {
		{ .addr = 0xdb853c, .byte = 0x4a },
		{ .addr = 0xdb853d, .byte = 0xda },
		{ .addr = 0xdb853e, .byte = 0x1f },
		{ .addr = 0xdb853f, .byte = 0xfe },
		{ .addr = 0xa08d0c, .byte = 0x9e },
		{ .addr = 0xa08d0d, .byte = 0x4e },
		{ .addr = 0xdb8540, .byte = 0x91 },
		{ .addr = 0xdb8541, .byte = 0x76 }
};

static const SST_Transaction tas_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10521868, .data = 40448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10521868, .data = 40448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14386496, .data = 37238, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_7[] = {
		{ .addr = 0x1b96b0, .byte = 0x4a },
		{ .addr = 0x1b96b1, .byte = 0xf1 },
		{ .addr = 0x1b96b2, .byte = 0x18 },
		{ .addr = 0x1b96b3, .byte = 0xdd },
		{ .addr = 0x1b96b4, .byte = 0xc9 },
		{ .addr = 0x1b96b5, .byte = 0xbd },
		{ .addr = 0xc071d0, .byte = 0xff },
		{ .addr = 0xc071d1, .byte = 0xe5 },
		{ .addr = 0x1b96b6, .byte = 0xbe },
		{ .addr = 0x1b96b7, .byte = 0xdd }
};

static const SST_RamByte tas_final_ram_7[] = {
		{ .addr = 0x1b96b0, .byte = 0x4a },
		{ .addr = 0x1b96b1, .byte = 0xf1 },
		{ .addr = 0x1b96b2, .byte = 0x18 },
		{ .addr = 0x1b96b3, .byte = 0xdd },
		{ .addr = 0x1b96b4, .byte = 0xc9 },
		{ .addr = 0x1b96b5, .byte = 0xbd },
		{ .addr = 0xc071d0, .byte = 0xff },
		{ .addr = 0xc071d1, .byte = 0xe5 },
		{ .addr = 0x1b96b6, .byte = 0xbe },
		{ .addr = 0x1b96b7, .byte = 0xdd }
};

static const SST_Transaction tas_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1808052, .data = 51645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12612048, .data = 229, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12612048, .data = 229, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1808054, .data = 48861, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_8[] = {
		{ .addr = 0x547664, .byte = 0x4a },
		{ .addr = 0x547665, .byte = 0xc4 },
		{ .addr = 0x547666, .byte = 0x8f },
		{ .addr = 0x547667, .byte = 0xa6 },
		{ .addr = 0x547668, .byte = 0xf9 },
		{ .addr = 0x547669, .byte = 0x70 }
};

static const SST_RamByte tas_final_ram_8[] = {
		{ .addr = 0x547664, .byte = 0x4a },
		{ .addr = 0x547665, .byte = 0xc4 },
		{ .addr = 0x547666, .byte = 0x8f },
		{ .addr = 0x547667, .byte = 0xa6 },
		{ .addr = 0x547668, .byte = 0xf9 },
		{ .addr = 0x547669, .byte = 0x70 }
};

static const SST_Transaction tas_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5535336, .data = 63856, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_9[] = {
		{ .addr = 0x6656ec, .byte = 0x4a },
		{ .addr = 0x6656ed, .byte = 0xf1 },
		{ .addr = 0x6656ee, .byte = 0xdf },
		{ .addr = 0x6656ef, .byte = 0x9b },
		{ .addr = 0x6656f0, .byte = 0x2c },
		{ .addr = 0x6656f1, .byte = 0x9f },
		{ .addr = 0xab2a3e, .byte = 0xf4 },
		{ .addr = 0xab2a3f, .byte = 0x19 },
		{ .addr = 0x6656f2, .byte = 0x16 },
		{ .addr = 0x6656f3, .byte = 0x1a }
};

static const SST_RamByte tas_final_ram_9[] = {
		{ .addr = 0x6656ec, .byte = 0x4a },
		{ .addr = 0x6656ed, .byte = 0xf1 },
		{ .addr = 0x6656ee, .byte = 0xdf },
		{ .addr = 0x6656ef, .byte = 0x9b },
		{ .addr = 0x6656f0, .byte = 0x2c },
		{ .addr = 0x6656f1, .byte = 0x9f },
		{ .addr = 0xab2a3e, .byte = 0xf4 },
		{ .addr = 0xab2a3f, .byte = 0x99 },
		{ .addr = 0x6656f2, .byte = 0x16 },
		{ .addr = 0x6656f3, .byte = 0x1a }
};

static const SST_Transaction tas_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6706928, .data = 11423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11217470, .data = 25, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11217470, .data = 153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6706930, .data = 5658, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_10[] = {
		{ .addr = 0x3e9900, .byte = 0x4a },
		{ .addr = 0x3e9901, .byte = 0xf1 },
		{ .addr = 0x3e9902, .byte = 0xcf },
		{ .addr = 0x3e9903, .byte = 0xb6 },
		{ .addr = 0x3e9904, .byte = 0x50 },
		{ .addr = 0x3e9905, .byte = 0x90 },
		{ .addr = 0xe13652, .byte = 0xdf },
		{ .addr = 0xe13653, .byte = 0xec },
		{ .addr = 0x3e9906, .byte = 0xfd },
		{ .addr = 0x3e9907, .byte = 0xfa }
};

static const SST_RamByte tas_final_ram_10[] = {
		{ .addr = 0x3e9900, .byte = 0x4a },
		{ .addr = 0x3e9901, .byte = 0xf1 },
		{ .addr = 0x3e9902, .byte = 0xcf },
		{ .addr = 0x3e9903, .byte = 0xb6 },
		{ .addr = 0x3e9904, .byte = 0x50 },
		{ .addr = 0x3e9905, .byte = 0x90 },
		{ .addr = 0xe13652, .byte = 0xdf },
		{ .addr = 0xe13653, .byte = 0xec },
		{ .addr = 0x3e9906, .byte = 0xfd },
		{ .addr = 0x3e9907, .byte = 0xfa }
};

static const SST_Transaction tas_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4102404, .data = 20624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14759506, .data = 57088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14759506, .data = 57088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4102406, .data = 65018, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_11[] = {
		{ .addr = 0x090266, .byte = 0x4a },
		{ .addr = 0x090267, .byte = 0xdc },
		{ .addr = 0x090268, .byte = 0x25 },
		{ .addr = 0x090269, .byte = 0x44 },
		{ .addr = 0x51db38, .byte = 0x25 },
		{ .addr = 0x51db39, .byte = 0xb4 },
		{ .addr = 0x09026a, .byte = 0xa3 },
		{ .addr = 0x09026b, .byte = 0x11 }
};

static const SST_RamByte tas_final_ram_11[] = {
		{ .addr = 0x090266, .byte = 0x4a },
		{ .addr = 0x090267, .byte = 0xdc },
		{ .addr = 0x090268, .byte = 0x25 },
		{ .addr = 0x090269, .byte = 0x44 },
		{ .addr = 0x51db38, .byte = 0x25 },
		{ .addr = 0x51db39, .byte = 0xb4 },
		{ .addr = 0x09026a, .byte = 0xa3 },
		{ .addr = 0x09026b, .byte = 0x11 }
};

static const SST_Transaction tas_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5364536, .data = 180, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5364536, .data = 180, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 590442, .data = 41745, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_12[] = {
		{ .addr = 0x013d56, .byte = 0x4a },
		{ .addr = 0x013d57, .byte = 0xdd },
		{ .addr = 0x013d58, .byte = 0x7a },
		{ .addr = 0x013d59, .byte = 0x55 },
		{ .addr = 0xe14c7c, .byte = 0x93 },
		{ .addr = 0xe14c7d, .byte = 0x55 },
		{ .addr = 0x013d5a, .byte = 0x41 },
		{ .addr = 0x013d5b, .byte = 0x30 }
};

static const SST_RamByte tas_final_ram_12[] = {
		{ .addr = 0x013d56, .byte = 0x4a },
		{ .addr = 0x013d57, .byte = 0xdd },
		{ .addr = 0x013d58, .byte = 0x7a },
		{ .addr = 0x013d59, .byte = 0x55 },
		{ .addr = 0xe14c7c, .byte = 0x93 },
		{ .addr = 0xe14c7d, .byte = 0xd5 },
		{ .addr = 0x013d5a, .byte = 0x41 },
		{ .addr = 0x013d5b, .byte = 0x30 }
};

static const SST_Transaction tas_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14765180, .data = 85, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14765180, .data = 213, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 81242, .data = 16688, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_13[] = {
		{ .addr = 0xfab344, .byte = 0x4a },
		{ .addr = 0xfab345, .byte = 0xdc },
		{ .addr = 0xfab346, .byte = 0x33 },
		{ .addr = 0xfab347, .byte = 0x24 },
		{ .addr = 0x8db73c, .byte = 0xa3 },
		{ .addr = 0x8db73d, .byte = 0xef },
		{ .addr = 0xfab348, .byte = 0x29 },
		{ .addr = 0xfab349, .byte = 0x13 }
};

static const SST_RamByte tas_final_ram_13[] = {
		{ .addr = 0xfab344, .byte = 0x4a },
		{ .addr = 0xfab345, .byte = 0xdc },
		{ .addr = 0xfab346, .byte = 0x33 },
		{ .addr = 0xfab347, .byte = 0x24 },
		{ .addr = 0x8db73c, .byte = 0xa3 },
		{ .addr = 0x8db73d, .byte = 0xef },
		{ .addr = 0xfab348, .byte = 0x29 },
		{ .addr = 0xfab349, .byte = 0x13 }
};

static const SST_Transaction tas_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9287484, .data = 239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9287484, .data = 239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16429896, .data = 10515, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_14[] = {
		{ .addr = 0x903bf4, .byte = 0x4a },
		{ .addr = 0x903bf5, .byte = 0xc7 },
		{ .addr = 0x903bf6, .byte = 0xe5 },
		{ .addr = 0x903bf7, .byte = 0x74 },
		{ .addr = 0x903bf8, .byte = 0x54 },
		{ .addr = 0x903bf9, .byte = 0x1a }
};

static const SST_RamByte tas_final_ram_14[] = {
		{ .addr = 0x903bf4, .byte = 0x4a },
		{ .addr = 0x903bf5, .byte = 0xc7 },
		{ .addr = 0x903bf6, .byte = 0xe5 },
		{ .addr = 0x903bf7, .byte = 0x74 },
		{ .addr = 0x903bf8, .byte = 0x54 },
		{ .addr = 0x903bf9, .byte = 0x1a }
};

static const SST_Transaction tas_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9452536, .data = 21530, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_15[] = {
		{ .addr = 0x941932, .byte = 0x4a },
		{ .addr = 0x941933, .byte = 0xf7 },
		{ .addr = 0x941934, .byte = 0xb9 },
		{ .addr = 0x941935, .byte = 0x5b },
		{ .addr = 0x941936, .byte = 0x65 },
		{ .addr = 0x941937, .byte = 0x00 },
		{ .addr = 0x25757c, .byte = 0x91 },
		{ .addr = 0x25757d, .byte = 0x26 },
		{ .addr = 0x941938, .byte = 0x75 },
		{ .addr = 0x941939, .byte = 0xef }
};

static const SST_RamByte tas_final_ram_15[] = {
		{ .addr = 0x941932, .byte = 0x4a },
		{ .addr = 0x941933, .byte = 0xf7 },
		{ .addr = 0x941934, .byte = 0xb9 },
		{ .addr = 0x941935, .byte = 0x5b },
		{ .addr = 0x941936, .byte = 0x65 },
		{ .addr = 0x941937, .byte = 0x00 },
		{ .addr = 0x25757c, .byte = 0x91 },
		{ .addr = 0x25757d, .byte = 0xa6 },
		{ .addr = 0x941938, .byte = 0x75 },
		{ .addr = 0x941939, .byte = 0xef }
};

static const SST_Transaction tas_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9705782, .data = 25856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2454908, .data = 38, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2454908, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9705784, .data = 30191, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_16[] = {
		{ .addr = 0x9151de, .byte = 0x4a },
		{ .addr = 0x9151df, .byte = 0xde },
		{ .addr = 0x9151e0, .byte = 0x82 },
		{ .addr = 0x9151e1, .byte = 0x10 },
		{ .addr = 0x3925fc, .byte = 0x0b },
		{ .addr = 0x3925fd, .byte = 0xba },
		{ .addr = 0x9151e2, .byte = 0x45 },
		{ .addr = 0x9151e3, .byte = 0x3f }
};

static const SST_RamByte tas_final_ram_16[] = {
		{ .addr = 0x9151de, .byte = 0x4a },
		{ .addr = 0x9151df, .byte = 0xde },
		{ .addr = 0x9151e0, .byte = 0x82 },
		{ .addr = 0x9151e1, .byte = 0x10 },
		{ .addr = 0x3925fc, .byte = 0x8b },
		{ .addr = 0x3925fd, .byte = 0xba },
		{ .addr = 0x9151e2, .byte = 0x45 },
		{ .addr = 0x9151e3, .byte = 0x3f }
};

static const SST_Transaction tas_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3745276, .data = 2816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3745276, .data = 35584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9523682, .data = 17727, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_17[] = {
		{ .addr = 0x67953c, .byte = 0x4a },
		{ .addr = 0x67953d, .byte = 0xd3 },
		{ .addr = 0x67953e, .byte = 0x3c },
		{ .addr = 0x67953f, .byte = 0x8e },
		{ .addr = 0xd73b22, .byte = 0x55 },
		{ .addr = 0xd73b23, .byte = 0x76 },
		{ .addr = 0x679540, .byte = 0x37 },
		{ .addr = 0x679541, .byte = 0x8b }
};

static const SST_RamByte tas_final_ram_17[] = {
		{ .addr = 0x67953c, .byte = 0x4a },
		{ .addr = 0x67953d, .byte = 0xd3 },
		{ .addr = 0x67953e, .byte = 0x3c },
		{ .addr = 0x67953f, .byte = 0x8e },
		{ .addr = 0xd73b22, .byte = 0xd5 },
		{ .addr = 0xd73b23, .byte = 0x76 },
		{ .addr = 0x679540, .byte = 0x37 },
		{ .addr = 0x679541, .byte = 0x8b }
};

static const SST_Transaction tas_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14105378, .data = 21760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14105378, .data = 54528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6788416, .data = 14219, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_18[] = {
		{ .addr = 0x91b854, .byte = 0x4a },
		{ .addr = 0x91b855, .byte = 0xd7 },
		{ .addr = 0x91b856, .byte = 0x46 },
		{ .addr = 0x91b857, .byte = 0xdf },
		{ .addr = 0xb0f724, .byte = 0xf7 },
		{ .addr = 0xb0f725, .byte = 0xc5 },
		{ .addr = 0x91b858, .byte = 0x62 },
		{ .addr = 0x91b859, .byte = 0xa5 }
};

static const SST_RamByte tas_final_ram_18[] = {
		{ .addr = 0x91b854, .byte = 0x4a },
		{ .addr = 0x91b855, .byte = 0xd7 },
		{ .addr = 0x91b856, .byte = 0x46 },
		{ .addr = 0x91b857, .byte = 0xdf },
		{ .addr = 0xb0f724, .byte = 0xf7 },
		{ .addr = 0xb0f725, .byte = 0xc5 },
		{ .addr = 0x91b858, .byte = 0x62 },
		{ .addr = 0x91b859, .byte = 0xa5 }
};

static const SST_Transaction tas_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11597604, .data = 63232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11597604, .data = 63232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9549912, .data = 25253, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_19[] = {
		{ .addr = 0xdda8aa, .byte = 0x4a },
		{ .addr = 0xdda8ab, .byte = 0xdb },
		{ .addr = 0xdda8ac, .byte = 0x3a },
		{ .addr = 0xdda8ad, .byte = 0x87 },
		{ .addr = 0xae2100, .byte = 0x12 },
		{ .addr = 0xae2101, .byte = 0xc8 },
		{ .addr = 0xdda8ae, .byte = 0x26 },
		{ .addr = 0xdda8af, .byte = 0x7e }
};

static const SST_RamByte tas_final_ram_19[] = {
		{ .addr = 0xdda8aa, .byte = 0x4a },
		{ .addr = 0xdda8ab, .byte = 0xdb },
		{ .addr = 0xdda8ac, .byte = 0x3a },
		{ .addr = 0xdda8ad, .byte = 0x87 },
		{ .addr = 0xae2100, .byte = 0x92 },
		{ .addr = 0xae2101, .byte = 0xc8 },
		{ .addr = 0xdda8ae, .byte = 0x26 },
		{ .addr = 0xdda8af, .byte = 0x7e }
};

static const SST_Transaction tas_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11411712, .data = 4608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11411712, .data = 37376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14526638, .data = 9854, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_20[] = {
		{ .addr = 0xa63348, .byte = 0x4a },
		{ .addr = 0xa63349, .byte = 0xdf },
		{ .addr = 0xa6334a, .byte = 0xf9 },
		{ .addr = 0xa6334b, .byte = 0xb9 },
		{ .addr = 0xc7582a, .byte = 0xd8 },
		{ .addr = 0xc7582b, .byte = 0xef },
		{ .addr = 0xa6334c, .byte = 0x7a },
		{ .addr = 0xa6334d, .byte = 0x0f }
};

static const SST_RamByte tas_final_ram_20[] = {
		{ .addr = 0xa63348, .byte = 0x4a },
		{ .addr = 0xa63349, .byte = 0xdf },
		{ .addr = 0xa6334a, .byte = 0xf9 },
		{ .addr = 0xa6334b, .byte = 0xb9 },
		{ .addr = 0xc7582a, .byte = 0xd8 },
		{ .addr = 0xc7582b, .byte = 0xef },
		{ .addr = 0xa6334c, .byte = 0x7a },
		{ .addr = 0xa6334d, .byte = 0x0f }
};

static const SST_Transaction tas_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13064234, .data = 55296, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13064234, .data = 55296, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10892108, .data = 31247, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_21[] = {
		{ .addr = 0x60702c, .byte = 0x4a },
		{ .addr = 0x60702d, .byte = 0xd9 },
		{ .addr = 0x60702e, .byte = 0xed },
		{ .addr = 0x60702f, .byte = 0xd7 },
		{ .addr = 0x366ba6, .byte = 0xe5 },
		{ .addr = 0x366ba7, .byte = 0x5b },
		{ .addr = 0x607030, .byte = 0x7b },
		{ .addr = 0x607031, .byte = 0x24 }
};

static const SST_RamByte tas_final_ram_21[] = {
		{ .addr = 0x60702c, .byte = 0x4a },
		{ .addr = 0x60702d, .byte = 0xd9 },
		{ .addr = 0x60702e, .byte = 0xed },
		{ .addr = 0x60702f, .byte = 0xd7 },
		{ .addr = 0x366ba6, .byte = 0xe5 },
		{ .addr = 0x366ba7, .byte = 0xdb },
		{ .addr = 0x607030, .byte = 0x7b },
		{ .addr = 0x607031, .byte = 0x24 }
};

static const SST_Transaction tas_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3566502, .data = 91, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3566502, .data = 219, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6320176, .data = 31524, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_22[] = {
		{ .addr = 0x8f857e, .byte = 0x4a },
		{ .addr = 0x8f857f, .byte = 0xd9 },
		{ .addr = 0x8f8580, .byte = 0x09 },
		{ .addr = 0x8f8581, .byte = 0xd8 },
		{ .addr = 0x2cb98e, .byte = 0x3e },
		{ .addr = 0x2cb98f, .byte = 0xb9 },
		{ .addr = 0x8f8582, .byte = 0xf9 },
		{ .addr = 0x8f8583, .byte = 0x26 }
};

static const SST_RamByte tas_final_ram_22[] = {
		{ .addr = 0x8f857e, .byte = 0x4a },
		{ .addr = 0x8f857f, .byte = 0xd9 },
		{ .addr = 0x8f8580, .byte = 0x09 },
		{ .addr = 0x8f8581, .byte = 0xd8 },
		{ .addr = 0x2cb98e, .byte = 0xbe },
		{ .addr = 0x2cb98f, .byte = 0xb9 },
		{ .addr = 0x8f8582, .byte = 0xf9 },
		{ .addr = 0x8f8583, .byte = 0x26 }
};

static const SST_Transaction tas_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2931086, .data = 15872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2931086, .data = 48640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9405826, .data = 63782, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_23[] = {
		{ .addr = 0xae1bc4, .byte = 0x4a },
		{ .addr = 0xae1bc5, .byte = 0xde },
		{ .addr = 0xae1bc6, .byte = 0xfb },
		{ .addr = 0xae1bc7, .byte = 0x35 },
		{ .addr = 0x846e48, .byte = 0x6a },
		{ .addr = 0x846e49, .byte = 0xda },
		{ .addr = 0xae1bc8, .byte = 0x1e },
		{ .addr = 0xae1bc9, .byte = 0x64 }
};

static const SST_RamByte tas_final_ram_23[] = {
		{ .addr = 0xae1bc4, .byte = 0x4a },
		{ .addr = 0xae1bc5, .byte = 0xde },
		{ .addr = 0xae1bc6, .byte = 0xfb },
		{ .addr = 0xae1bc7, .byte = 0x35 },
		{ .addr = 0x846e48, .byte = 0xea },
		{ .addr = 0x846e49, .byte = 0xda },
		{ .addr = 0xae1bc8, .byte = 0x1e },
		{ .addr = 0xae1bc9, .byte = 0x64 }
};

static const SST_Transaction tas_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8678984, .data = 27136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8678984, .data = 59904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11410376, .data = 7780, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_24[] = {
		{ .addr = 0xb28416, .byte = 0x4a },
		{ .addr = 0xb28417, .byte = 0xc1 },
		{ .addr = 0xb28418, .byte = 0x73 },
		{ .addr = 0xb28419, .byte = 0xf1 },
		{ .addr = 0xb2841a, .byte = 0xfd },
		{ .addr = 0xb2841b, .byte = 0x44 }
};

static const SST_RamByte tas_final_ram_24[] = {
		{ .addr = 0xb28416, .byte = 0x4a },
		{ .addr = 0xb28417, .byte = 0xc1 },
		{ .addr = 0xb28418, .byte = 0x73 },
		{ .addr = 0xb28419, .byte = 0xf1 },
		{ .addr = 0xb2841a, .byte = 0xfd },
		{ .addr = 0xb2841b, .byte = 0x44 }
};

static const SST_Transaction tas_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11699226, .data = 64836, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_25[] = {
		{ .addr = 0xa73638, .byte = 0x4a },
		{ .addr = 0xa73639, .byte = 0xd8 },
		{ .addr = 0xa7363a, .byte = 0x1a },
		{ .addr = 0xa7363b, .byte = 0xac },
		{ .addr = 0x0919c0, .byte = 0x24 },
		{ .addr = 0x0919c1, .byte = 0x42 },
		{ .addr = 0xa7363c, .byte = 0xe1 },
		{ .addr = 0xa7363d, .byte = 0x2c }
};

static const SST_RamByte tas_final_ram_25[] = {
		{ .addr = 0xa73638, .byte = 0x4a },
		{ .addr = 0xa73639, .byte = 0xd8 },
		{ .addr = 0xa7363a, .byte = 0x1a },
		{ .addr = 0xa7363b, .byte = 0xac },
		{ .addr = 0x0919c0, .byte = 0x24 },
		{ .addr = 0x0919c1, .byte = 0xc2 },
		{ .addr = 0xa7363c, .byte = 0xe1 },
		{ .addr = 0xa7363d, .byte = 0x2c }
};

static const SST_Transaction tas_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 596416, .data = 66, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 596416, .data = 194, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10958396, .data = 57644, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_26[] = {
		{ .addr = 0x37db6c, .byte = 0x4a },
		{ .addr = 0x37db6d, .byte = 0xf3 },
		{ .addr = 0x37db6e, .byte = 0x8d },
		{ .addr = 0x37db6f, .byte = 0x11 },
		{ .addr = 0x37db70, .byte = 0x3f },
		{ .addr = 0x37db71, .byte = 0x49 },
		{ .addr = 0x1ee61a, .byte = 0x67 },
		{ .addr = 0x1ee61b, .byte = 0x5a },
		{ .addr = 0x37db72, .byte = 0x02 },
		{ .addr = 0x37db73, .byte = 0x8f }
};

static const SST_RamByte tas_final_ram_26[] = {
		{ .addr = 0x37db6c, .byte = 0x4a },
		{ .addr = 0x37db6d, .byte = 0xf3 },
		{ .addr = 0x37db6e, .byte = 0x8d },
		{ .addr = 0x37db6f, .byte = 0x11 },
		{ .addr = 0x37db70, .byte = 0x3f },
		{ .addr = 0x37db71, .byte = 0x49 },
		{ .addr = 0x1ee61a, .byte = 0x67 },
		{ .addr = 0x1ee61b, .byte = 0xda },
		{ .addr = 0x37db72, .byte = 0x02 },
		{ .addr = 0x37db73, .byte = 0x8f }
};

static const SST_Transaction tas_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3660656, .data = 16201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2024986, .data = 90, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2024986, .data = 218, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3660658, .data = 655, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_27[] = {
		{ .addr = 0x691bf2, .byte = 0x4a },
		{ .addr = 0x691bf3, .byte = 0xde },
		{ .addr = 0x691bf4, .byte = 0x93 },
		{ .addr = 0x691bf5, .byte = 0x0e },
		{ .addr = 0x634d64, .byte = 0xc8 },
		{ .addr = 0x634d65, .byte = 0x9b },
		{ .addr = 0x691bf6, .byte = 0x06 },
		{ .addr = 0x691bf7, .byte = 0x72 }
};

static const SST_RamByte tas_final_ram_27[] = {
		{ .addr = 0x691bf2, .byte = 0x4a },
		{ .addr = 0x691bf3, .byte = 0xde },
		{ .addr = 0x691bf4, .byte = 0x93 },
		{ .addr = 0x691bf5, .byte = 0x0e },
		{ .addr = 0x634d64, .byte = 0xc8 },
		{ .addr = 0x634d65, .byte = 0x9b },
		{ .addr = 0x691bf6, .byte = 0x06 },
		{ .addr = 0x691bf7, .byte = 0x72 }
};

static const SST_Transaction tas_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6507876, .data = 51200, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6507876, .data = 51200, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6888438, .data = 1650, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_28[] = {
		{ .addr = 0xb029d6, .byte = 0x4a },
		{ .addr = 0xb029d7, .byte = 0xec },
		{ .addr = 0xb029d8, .byte = 0x74 },
		{ .addr = 0xb029d9, .byte = 0xa9 },
		{ .addr = 0xb029da, .byte = 0x13 },
		{ .addr = 0xb029db, .byte = 0xd0 },
		{ .addr = 0xff6cec, .byte = 0x3b },
		{ .addr = 0xff6ced, .byte = 0x8f },
		{ .addr = 0xb029dc, .byte = 0xa6 },
		{ .addr = 0xb029dd, .byte = 0x50 }
};

static const SST_RamByte tas_final_ram_28[] = {
		{ .addr = 0xb029d6, .byte = 0x4a },
		{ .addr = 0xb029d7, .byte = 0xec },
		{ .addr = 0xb029d8, .byte = 0x74 },
		{ .addr = 0xb029d9, .byte = 0xa9 },
		{ .addr = 0xb029da, .byte = 0x13 },
		{ .addr = 0xb029db, .byte = 0xd0 },
		{ .addr = 0xff6cec, .byte = 0xbb },
		{ .addr = 0xff6ced, .byte = 0x8f },
		{ .addr = 0xb029dc, .byte = 0xa6 },
		{ .addr = 0xb029dd, .byte = 0x50 }
};

static const SST_Transaction tas_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11545050, .data = 5072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16739564, .data = 15104, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16739564, .data = 47872, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11545052, .data = 42576, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_29[] = {
		{ .addr = 0xc9a3e4, .byte = 0x4a },
		{ .addr = 0xc9a3e5, .byte = 0xde },
		{ .addr = 0xc9a3e6, .byte = 0xef },
		{ .addr = 0xc9a3e7, .byte = 0xee },
		{ .addr = 0x6dde96, .byte = 0x60 },
		{ .addr = 0x6dde97, .byte = 0xd1 },
		{ .addr = 0xc9a3e8, .byte = 0xaf },
		{ .addr = 0xc9a3e9, .byte = 0x9e }
};

static const SST_RamByte tas_final_ram_29[] = {
		{ .addr = 0xc9a3e4, .byte = 0x4a },
		{ .addr = 0xc9a3e5, .byte = 0xde },
		{ .addr = 0xc9a3e6, .byte = 0xef },
		{ .addr = 0xc9a3e7, .byte = 0xee },
		{ .addr = 0x6dde96, .byte = 0x60 },
		{ .addr = 0x6dde97, .byte = 0xd1 },
		{ .addr = 0xc9a3e8, .byte = 0xaf },
		{ .addr = 0xc9a3e9, .byte = 0x9e }
};

static const SST_Transaction tas_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7200406, .data = 209, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7200406, .data = 209, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13214696, .data = 44958, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_30[] = {
		{ .addr = 0x45a7ee, .byte = 0x4a },
		{ .addr = 0x45a7ef, .byte = 0xd9 },
		{ .addr = 0x45a7f0, .byte = 0x36 },
		{ .addr = 0x45a7f1, .byte = 0xd0 },
		{ .addr = 0x2d76ec, .byte = 0xf6 },
		{ .addr = 0x2d76ed, .byte = 0x09 },
		{ .addr = 0x45a7f2, .byte = 0xdc },
		{ .addr = 0x45a7f3, .byte = 0xc3 }
};

static const SST_RamByte tas_final_ram_30[] = {
		{ .addr = 0x45a7ee, .byte = 0x4a },
		{ .addr = 0x45a7ef, .byte = 0xd9 },
		{ .addr = 0x45a7f0, .byte = 0x36 },
		{ .addr = 0x45a7f1, .byte = 0xd0 },
		{ .addr = 0x2d76ec, .byte = 0xf6 },
		{ .addr = 0x2d76ed, .byte = 0x89 },
		{ .addr = 0x45a7f2, .byte = 0xdc },
		{ .addr = 0x45a7f3, .byte = 0xc3 }
};

static const SST_Transaction tas_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2979564, .data = 9, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2979564, .data = 137, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4564978, .data = 56515, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tas_initial_ram_31[] = {
		{ .addr = 0x42b848, .byte = 0x4a },
		{ .addr = 0x42b849, .byte = 0xc5 },
		{ .addr = 0x42b84a, .byte = 0xd5 },
		{ .addr = 0x42b84b, .byte = 0x72 },
		{ .addr = 0x42b84c, .byte = 0x4c },
		{ .addr = 0x42b84d, .byte = 0x71 }
};

static const SST_RamByte tas_final_ram_31[] = {
		{ .addr = 0x42b848, .byte = 0x4a },
		{ .addr = 0x42b849, .byte = 0xc5 },
		{ .addr = 0x42b84a, .byte = 0xd5 },
		{ .addr = 0x42b84b, .byte = 0x72 },
		{ .addr = 0x42b84c, .byte = 0x4c },
		{ .addr = 0x42b84d, .byte = 0x71 }
};

static const SST_Transaction tas_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4372556, .data = 19569, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase tas[] = {
	{
		.name = "000 TAS (A1) 4ad1",
		.initial = {
			.regs = {
				977090634, 3701951921, 3445948972, 996719339, 2754339530, 3223994515, 197781903, 1390960277, 2913762112, 3294663737, 3257528816, 3479158592, 1183975623, 398401328, 953502955, 10356042, 7233526, 34054, 10918948
			},
			.prefetch0 = 19153,
			.prefetch1 = 37954,
			.ram = tas_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				977090634, 3701951921, 3445948972, 996719339, 2754339530, 3223994515, 197781903, 1390960277, 2913762112, 3294663737, 3257528816, 3479158592, 1183975623, 398401328, 953502955, 10356042, 7233526, 34056, 10918950
			},
			.prefetch0 = 37954,
			.prefetch1 = 46404,
			.ram = tas_final_ram_0,
			.ram_len = 8,
		},
		.transactions = tas_transactions_0,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "001 TAS D5 4ac5",
		.initial = {
			.regs = {
				4119295949, 4179248917, 862435139, 2650834886, 3508633486, 1682037507, 3938702979, 1065246427, 1062954796, 216951212, 788163449, 4267682914, 2960797085, 1605683063, 2077982109, 7167072, 16752094, 34574, 4660582
			},
			.prefetch0 = 19141,
			.prefetch1 = 48927,
			.ram = tas_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4119295949, 4179248917, 862435139, 2650834886, 3508633486, 1682037635, 3938702979, 1065246427, 1062954796, 216951212, 788163449, 4267682914, 2960797085, 1605683063, 2077982109, 7167072, 16752094, 34560, 4660584
			},
			.prefetch0 = 48927,
			.prefetch1 = 55444,
			.ram = tas_final_ram_1,
			.ram_len = 6,
		},
		.transactions = tas_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 TAS (d16, A6) 4aee",
		.initial = {
			.regs = {
				1064119012, 4158797404, 2176247057, 649770127, 2331966085, 2720125314, 736272922, 3426172173, 3073639932, 1922673833, 119405589, 46218786, 3998999620, 1008869161, 2759229002, 1042258, 16550320, 34590, 8692662
			},
			.prefetch0 = 19182,
			.prefetch1 = 568,
			.ram = tas_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1064119012, 4158797404, 2176247057, 649770127, 2331966085, 2720125314, 736272922, 3426172173, 3073639932, 1922673833, 119405589, 46218786, 3998999620, 1008869161, 2759229002, 1042258, 16550320, 34584, 8692666
			},
			.prefetch0 = 11962,
			.prefetch1 = 45146,
			.ram = tas_final_ram_2,
			.ram_len = 10,
		},
		.transactions = tas_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 TAS (A4) 4ad4",
		.initial = {
			.regs = {
				391037677, 2150483627, 2497452008, 949646988, 3518578992, 2753996021, 576983527, 4198501770, 896583885, 1311259220, 91408083, 1108476777, 1259408596, 3069764279, 1946019634, 8141458, 11118734, 33544, 13182052
			},
			.prefetch0 = 19156,
			.prefetch1 = 19044,
			.ram = tas_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				391037677, 2150483627, 2497452008, 949646988, 3518578992, 2753996021, 576983527, 4198501770, 896583885, 1311259220, 91408083, 1108476777, 1259408596, 3069764279, 1946019634, 8141458, 11118734, 33544, 13182054
			},
			.prefetch0 = 19044,
			.prefetch1 = 58246,
			.ram = tas_final_ram_3,
			.ram_len = 8,
		},
		.transactions = tas_transactions_3,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "004 TAS (d8, A3, Xn) 4af3",
		.initial = {
			.regs = {
				904207508, 2532480491, 517288167, 1379013066, 3042549696, 2068659061, 914029257, 2437615672, 4236832938, 302928319, 1261105552, 2767428103, 965060343, 1612281059, 3435839108, 14277228, 3984028, 42255, 11747268
			},
			.prefetch0 = 19187,
			.prefetch1 = 51008,
			.ram = tas_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				904207508, 2532480491, 517288167, 1379013066, 3042549696, 2068659061, 914029257, 2437615672, 4236832938, 302928319, 1261105552, 2767428103, 965060343, 1612281059, 3435839108, 14277228, 3984028, 42240, 11747272
			},
			.prefetch0 = 61724,
			.prefetch1 = 51728,
			.ram = tas_final_ram_4,
			.ram_len = 10,
		},
		.transactions = tas_transactions_4,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "005 TAS D4 4ac4",
		.initial = {
			.regs = {
				525152372, 3714672950, 4032016931, 2057080710, 4109352648, 4052412063, 1723266161, 2560693656, 2407904224, 2697663681, 89381562, 2266533452, 169607678, 2757450484, 1744778842, 1699092, 14351908, 34071, 6829388
			},
			.prefetch0 = 19140,
			.prefetch1 = 21009,
			.ram = tas_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				525152372, 3714672950, 4032016931, 2057080710, 4109352648, 4052412063, 1723266161, 2560693656, 2407904224, 2697663681, 89381562, 2266533452, 169607678, 2757450484, 1744778842, 1699092, 14351908, 34072, 6829390
			},
			.prefetch0 = 21009,
			.prefetch1 = 24452,
			.ram = tas_final_ram_5,
			.ram_len = 6,
		},
		.transactions = tas_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 TAS (A2)+ 4ada",
		.initial = {
			.regs = {
				1781330078, 1468248034, 444748982, 2567936981, 2542144049, 1646720310, 2968587477, 3709415846, 2816009400, 2101569103, 2124451084, 1193434085, 2469549073, 3334305352, 977864190, 11550056, 2398666, 9247, 14386496
			},
			.prefetch0 = 19162,
			.prefetch1 = 8190,
			.ram = tas_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1781330078, 1468248034, 444748982, 2567936981, 2542144049, 1646720310, 2968587477, 3709415846, 2816009400, 2101569103, 2124451085, 1193434085, 2469549073, 3334305352, 977864190, 11550056, 2398666, 9240, 14386498
			},
			.prefetch0 = 8190,
			.prefetch1 = 37238,
			.ram = tas_final_ram_6,
			.ram_len = 8,
		},
		.transactions = tas_transactions_6,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "007 TAS (d8, A1, Xn) 4af1",
		.initial = {
			.regs = {
				1028631094, 3451320401, 3283250631, 1629521107, 4013656883, 1579961564, 918205446, 13063409, 531712185, 4094261667, 3452626177, 250113057, 3767474060, 907227649, 4085323858, 4334208, 13889662, 1539, 1808052
			},
			.prefetch0 = 19185,
			.prefetch1 = 6365,
			.ram = tas_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1028631094, 3451320401, 3283250631, 1629521107, 4013656883, 1579961564, 918205446, 13063409, 531712185, 4094261667, 3452626177, 250113057, 3767474060, 907227649, 4085323858, 4334208, 13889662, 1544, 1808056
			},
			.prefetch0 = 51645,
			.prefetch1 = 48861,
			.ram = tas_final_ram_7,
			.ram_len = 10,
		},
		.transactions = tas_transactions_7,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "008 TAS D4 4ac4",
		.initial = {
			.regs = {
				3605381465, 3287471543, 1499252610, 1420742093, 4203158272, 4046224665, 1036134210, 4198002150, 2916327246, 1891980502, 3245530000, 2495363006, 2684390716, 736962740, 476028837, 7328422, 10366280, 42522, 5535336
			},
			.prefetch0 = 19140,
			.prefetch1 = 36774,
			.ram = tas_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3605381465, 3287471543, 1499252610, 1420742093, 4203158400, 4046224665, 1036134210, 4198002150, 2916327246, 1891980502, 3245530000, 2495363006, 2684390716, 736962740, 476028837, 7328422, 10366280, 42516, 5535338
			},
			.prefetch0 = 36774,
			.prefetch1 = 63856,
			.ram = tas_final_ram_8,
			.ram_len = 6,
		},
		.transactions = tas_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 TAS (d8, A1, Xn) 4af1",
		.initial = {
			.regs = {
				2315420335, 3040746299, 1337371180, 1765339885, 1041425580, 1148961494, 465089518, 2163728314, 3597760213, 412008093, 2330386649, 2263642278, 293952946, 488401927, 1448561737, 6956694, 863806, 40978, 6706928
			},
			.prefetch0 = 19185,
			.prefetch1 = 57243,
			.ram = tas_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2315420335, 3040746299, 1337371180, 1765339885, 1041425580, 1148961494, 465089518, 2163728314, 3597760213, 412008093, 2330386649, 2263642278, 293952946, 488401927, 1448561737, 6956694, 863806, 40976, 6706932
			},
			.prefetch0 = 11423,
			.prefetch1 = 5658,
			.ram = tas_final_ram_9,
			.ram_len = 10,
		},
		.transactions = tas_transactions_9,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "010 TAS (d8, A1, Xn) 4af1",
		.initial = {
			.regs = {
				2192076609, 2631788171, 2599393078, 2011220043, 2918342531, 2099774372, 1983802332, 2581680257, 950712480, 959411977, 3479513470, 1215196750, 1353826195, 412867681, 1391168161, 8366758, 1712026, 42267, 4102404
			},
			.prefetch0 = 19185,
			.prefetch1 = 53174,
			.ram = tas_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2192076609, 2631788171, 2599393078, 2011220043, 2918342531, 2099774372, 1983802332, 2581680257, 950712480, 959411977, 3479513470, 1215196750, 1353826195, 412867681, 1391168161, 8366758, 1712026, 42264, 4102408
			},
			.prefetch0 = 20624,
			.prefetch1 = 65018,
			.ram = tas_final_ram_10,
			.ram_len = 10,
		},
		.transactions = tas_transactions_10,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "011 TAS (A4)+ 4adc",
		.initial = {
			.regs = {
				2245387401, 300177362, 1992375889, 3070304043, 2693327968, 2580496375, 4014270026, 1385989888, 2025931044, 1177678634, 1154992106, 3869131416, 2068962105, 3931825291, 180617417, 6946418, 9313554, 34572, 590442
			},
			.prefetch0 = 19164,
			.prefetch1 = 9540,
			.ram = tas_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2245387401, 300177362, 1992375889, 3070304043, 2693327968, 2580496375, 4014270026, 1385989888, 2025931044, 1177678634, 1154992106, 3869131416, 2068962106, 3931825291, 180617417, 6946418, 9313554, 34568, 590444
			},
			.prefetch0 = 9540,
			.prefetch1 = 41745,
			.ram = tas_final_ram_11,
			.ram_len = 8,
		},
		.transactions = tas_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 TAS (A5)+ 4add",
		.initial = {
			.regs = {
				913089748, 2408231203, 1478312305, 1712164154, 3607218699, 1705593673, 1623372903, 217293499, 308770689, 2504662362, 1723596347, 4162737690, 3798382065, 2195803261, 3800605035, 2024470, 13251882, 1285, 81242
			},
			.prefetch0 = 19165,
			.prefetch1 = 31317,
			.ram = tas_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				913089748, 2408231203, 1478312305, 1712164154, 3607218699, 1705593673, 1623372903, 217293499, 308770689, 2504662362, 1723596347, 4162737690, 3798382065, 2195803262, 3800605035, 2024470, 13251882, 1280, 81244
			},
			.prefetch0 = 31317,
			.prefetch1 = 16688,
			.ram = tas_final_ram_12,
			.ram_len = 8,
		},
		.transactions = tas_transactions_12,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "013 TAS (A4)+ 4adc",
		.initial = {
			.regs = {
				2548835038, 1496105342, 4053302948, 2234504117, 3534917968, 2972277693, 2647632705, 1006632662, 3348268543, 1827954314, 1431048398, 355276377, 3951933245, 3810269603, 795360481, 975670, 11101458, 42013, 16429896
			},
			.prefetch0 = 19164,
			.prefetch1 = 13092,
			.ram = tas_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2548835038, 1496105342, 4053302948, 2234504117, 3534917968, 2972277693, 2647632705, 1006632662, 3348268543, 1827954314, 1431048398, 355276377, 3951933246, 3810269603, 795360481, 975670, 11101458, 42008, 16429898
			},
			.prefetch0 = 13092,
			.prefetch1 = 10515,
			.ram = tas_final_ram_13,
			.ram_len = 8,
		},
		.transactions = tas_transactions_13,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "014 TAS D7 4ac7",
		.initial = {
			.regs = {
				4327719, 3908233787, 712181196, 3712015342, 1351739810, 1850057349, 9328544, 1533822078, 2444899662, 2052541105, 1315252453, 2078698291, 2660114367, 3877490628, 1785265240, 8558654, 11466230, 8969, 9452536
			},
			.prefetch0 = 19143,
			.prefetch1 = 58740,
			.ram = tas_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4327719, 3908233787, 712181196, 3712015342, 1351739810, 1850057349, 9328544, 1533822206, 2444899662, 2052541105, 1315252453, 2078698291, 2660114367, 3877490628, 1785265240, 8558654, 11466230, 8960, 9452538
			},
			.prefetch0 = 58740,
			.prefetch1 = 21530,
			.ram = tas_final_ram_14,
			.ram_len = 6,
		},
		.transactions = tas_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 TAS (d8, A7, Xn) 4af7",
		.initial = {
			.regs = {
				1288664610, 3851022892, 3357164906, 2911046249, 2683766325, 915614555, 799742905, 1375268369, 2461067118, 465573977, 1650173298, 164141568, 301941282, 1383065302, 3182781480, 2286868, 6085410, 8719, 9705782
			},
			.prefetch0 = 19191,
			.prefetch1 = 47451,
			.ram = tas_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1288664610, 3851022892, 3357164906, 2911046249, 2683766325, 915614555, 799742905, 1375268369, 2461067118, 465573977, 1650173298, 164141568, 301941282, 1383065302, 3182781480, 2286868, 6085410, 8704, 9705786
			},
			.prefetch0 = 25856,
			.prefetch1 = 30191,
			.ram = tas_final_ram_15,
			.ram_len = 10,
		},
		.transactions = tas_transactions_15,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "016 TAS (A6)+ 4ade",
		.initial = {
			.regs = {
				4278001697, 1375604805, 2121182169, 2146062247, 31190708, 3607281498, 1299053491, 3193648247, 3555912357, 2622664049, 1288878181, 2603752330, 287505384, 1190409848, 490284540, 11427616, 14146278, 41498, 9523682
			},
			.prefetch0 = 19166,
			.prefetch1 = 33296,
			.ram = tas_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4278001697, 1375604805, 2121182169, 2146062247, 31190708, 3607281498, 1299053491, 3193648247, 3555912357, 2622664049, 1288878181, 2603752330, 287505384, 1190409848, 490284541, 11427616, 14146278, 41488, 9523684
			},
			.prefetch0 = 33296,
			.prefetch1 = 17727,
			.ram = tas_final_ram_16,
			.ram_len = 8,
		},
		.transactions = tas_transactions_16,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "017 TAS (A3) 4ad3",
		.initial = {
			.regs = {
				3838419429, 2418252055, 3102131968, 3848670894, 2866276915, 1272284951, 2527292667, 731202780, 2410736557, 283222843, 3070010004, 3520543522, 3231144714, 420216864, 513153163, 8520856, 11650028, 42759, 6788416
			},
			.prefetch0 = 19155,
			.prefetch1 = 15502,
			.ram = tas_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3838419429, 2418252055, 3102131968, 3848670894, 2866276915, 1272284951, 2527292667, 731202780, 2410736557, 283222843, 3070010004, 3520543522, 3231144714, 420216864, 513153163, 8520856, 11650028, 42752, 6788418
			},
			.prefetch0 = 15502,
			.prefetch1 = 14219,
			.ram = tas_final_ram_17,
			.ram_len = 8,
		},
		.transactions = tas_transactions_17,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "018 TAS (A7) 4ad7",
		.initial = {
			.regs = {
				1940175852, 865603583, 2941358395, 2781425685, 2088961888, 4250388733, 862191735, 662197392, 2610597466, 178888178, 14259844, 1537952156, 2753771802, 4254564563, 2247738051, 8922572, 11597604, 10005, 9549912
			},
			.prefetch0 = 19159,
			.prefetch1 = 18143,
			.ram = tas_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1940175852, 865603583, 2941358395, 2781425685, 2088961888, 4250388733, 862191735, 662197392, 2610597466, 178888178, 14259844, 1537952156, 2753771802, 4254564563, 2247738051, 8922572, 11597604, 10008, 9549914
			},
			.prefetch0 = 18143,
			.prefetch1 = 25253,
			.ram = tas_final_ram_18,
			.ram_len = 8,
		},
		.transactions = tas_transactions_18,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "019 TAS (A3)+ 4adb",
		.initial = {
			.regs = {
				3745578157, 1863572397, 2708640200, 1987175237, 267257420, 1352366689, 355688089, 1206638200, 2491518408, 1755869342, 909228241, 3383632128, 1835796770, 4171186744, 2597940351, 5725314, 13196662, 41743, 14526638
			},
			.prefetch0 = 19163,
			.prefetch1 = 14983,
			.ram = tas_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3745578157, 1863572397, 2708640200, 1987175237, 267257420, 1352366689, 355688089, 1206638200, 2491518408, 1755869342, 909228241, 3383632129, 1835796770, 4171186744, 2597940351, 5725314, 13196662, 41728, 14526640
			},
			.prefetch0 = 14983,
			.prefetch1 = 9854,
			.ram = tas_final_ram_19,
			.ram_len = 8,
		},
		.transactions = tas_transactions_19,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "020 TAS (A7)+ 4adf",
		.initial = {
			.regs = {
				544276482, 1199911898, 2432340891, 2058760419, 2124003323, 1121578125, 1361458743, 3550605860, 204752017, 1125549029, 365377351, 96363992, 4290561202, 31332750, 647628716, 13064234, 8324568, 33793, 10892108
			},
			.prefetch0 = 19167,
			.prefetch1 = 63929,
			.ram = tas_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				544276482, 1199911898, 2432340891, 2058760419, 2124003323, 1121578125, 1361458743, 3550605860, 204752017, 1125549029, 365377351, 96363992, 4290561202, 31332750, 647628716, 13064236, 8324568, 33800, 10892110
			},
			.prefetch0 = 63929,
			.prefetch1 = 31247,
			.ram = tas_final_ram_20,
			.ram_len = 8,
		},
		.transactions = tas_transactions_20,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "021 TAS (A1)+ 4ad9",
		.initial = {
			.regs = {
				3014974061, 1805235462, 4169629202, 2441817053, 4026314401, 1812965403, 2595113775, 486587352, 709090227, 2067164071, 3375254809, 3949735305, 439342614, 1819651708, 3917359267, 16174056, 16216900, 33048, 6320176
			},
			.prefetch0 = 19161,
			.prefetch1 = 60887,
			.ram = tas_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3014974061, 1805235462, 4169629202, 2441817053, 4026314401, 1812965403, 2595113775, 486587352, 709090227, 2067164072, 3375254809, 3949735305, 439342614, 1819651708, 3917359267, 16174056, 16216900, 33040, 6320178
			},
			.prefetch0 = 60887,
			.prefetch1 = 31524,
			.ram = tas_final_ram_21,
			.ram_len = 8,
		},
		.transactions = tas_transactions_21,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "022 TAS (A1)+ 4ad9",
		.initial = {
			.regs = {
				2261313775, 3530561827, 3158029872, 304753338, 2198562058, 3688340059, 1688412984, 3993418277, 3478489246, 1345108366, 3969495106, 3515128311, 1001075776, 1767096326, 2703862221, 14963122, 11026368, 41992, 9405826
			},
			.prefetch0 = 19161,
			.prefetch1 = 2520,
			.ram = tas_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2261313775, 3530561827, 3158029872, 304753338, 2198562058, 3688340059, 1688412984, 3993418277, 3478489246, 1345108367, 3969495106, 3515128311, 1001075776, 1767096326, 2703862221, 14963122, 11026368, 41984, 9405828
			},
			.prefetch0 = 2520,
			.prefetch1 = 63782,
			.ram = tas_final_ram_22,
			.ram_len = 8,
		},
		.transactions = tas_transactions_22,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "023 TAS (A6)+ 4ade",
		.initial = {
			.regs = {
				1356641950, 855372375, 952203031, 3582528258, 2897414479, 2066287823, 4259414900, 2504575915, 1017044724, 2211933604, 1302400866, 1941873457, 1480111965, 1041670632, 3213127240, 5421764, 7050376, 9742, 11410376
			},
			.prefetch0 = 19166,
			.prefetch1 = 64309,
			.ram = tas_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1356641950, 855372375, 952203031, 3582528258, 2897414479, 2066287823, 4259414900, 2504575915, 1017044724, 2211933604, 1302400866, 1941873457, 1480111965, 1041670632, 3213127241, 5421764, 7050376, 9728, 11410378
			},
			.prefetch0 = 64309,
			.prefetch1 = 7780,
			.ram = tas_final_ram_23,
			.ram_len = 8,
		},
		.transactions = tas_transactions_23,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "024 TAS D1 4ac1",
		.initial = {
			.regs = {
				2789393764, 3140778197, 914882356, 1437557860, 2615910318, 1592528925, 517843328, 1358480020, 4197804996, 1893894730, 2288505387, 3965891056, 94204957, 2664217889, 2627120675, 15834754, 12108436, 42247, 11699226
			},
			.prefetch0 = 19137,
			.prefetch1 = 29681,
			.ram = tas_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2789393764, 3140778197, 914882356, 1437557860, 2615910318, 1592528925, 517843328, 1358480020, 4197804996, 1893894730, 2288505387, 3965891056, 94204957, 2664217889, 2627120675, 15834754, 12108436, 42248, 11699228
			},
			.prefetch0 = 29681,
			.prefetch1 = 64836,
			.ram = tas_final_ram_24,
			.ram_len = 6,
		},
		.transactions = tas_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 TAS (A0)+ 4ad8",
		.initial = {
			.regs = {
				107173976, 3327470616, 55414564, 851512811, 1776152835, 63888060, 4098131789, 3373777740, 269031873, 811727574, 2018273184, 4030554473, 1009409167, 3703289800, 2815791917, 13133842, 10194836, 33815, 10958396
			},
			.prefetch0 = 19160,
			.prefetch1 = 6828,
			.ram = tas_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				107173976, 3327470616, 55414564, 851512811, 1776152835, 63888060, 4098131789, 3373777740, 269031874, 811727574, 2018273184, 4030554473, 1009409167, 3703289800, 2815791917, 13133842, 10194836, 33808, 10958398
			},
			.prefetch0 = 6828,
			.prefetch1 = 57644,
			.ram = tas_final_ram_25,
			.ram_len = 8,
		},
		.transactions = tas_transactions_25,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "026 TAS (d8, A3, Xn) 4af3",
		.initial = {
			.regs = {
				1955615014, 2139675593, 2883433571, 523247946, 2249450230, 1823466947, 4262417144, 867175361, 430635654, 959316842, 2673395167, 544467844, 1094057621, 3108195977, 3873747006, 6928920, 1999450, 1816, 3660656
			},
			.prefetch0 = 19187,
			.prefetch1 = 36113,
			.ram = tas_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1955615014, 2139675593, 2883433571, 523247946, 2249450230, 1823466947, 4262417144, 867175361, 430635654, 959316842, 2673395167, 544467844, 1094057621, 3108195977, 3873747006, 6928920, 1999450, 1808, 3660660
			},
			.prefetch0 = 16201,
			.prefetch1 = 655,
			.ram = tas_final_ram_26,
			.ram_len = 10,
		},
		.transactions = tas_transactions_26,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "027 TAS (A6)+ 4ade",
		.initial = {
			.regs = {
				468176029, 8763597, 3920248088, 545606826, 1282619165, 2916621976, 3524097972, 551679628, 503178257, 1128784792, 1540106892, 2898338797, 1823010438, 2335503139, 2590199140, 16137910, 12122530, 33554, 6888438
			},
			.prefetch0 = 19166,
			.prefetch1 = 37646,
			.ram = tas_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				468176029, 8763597, 3920248088, 545606826, 1282619165, 2916621976, 3524097972, 551679628, 503178257, 1128784792, 1540106892, 2898338797, 1823010438, 2335503139, 2590199141, 16137910, 12122530, 33560, 6888440
			},
			.prefetch0 = 37646,
			.prefetch1 = 1650,
			.ram = tas_final_ram_27,
			.ram_len = 8,
		},
		.transactions = tas_transactions_27,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "028 TAS (d16, A4) 4aec",
		.initial = {
			.regs = {
				598622795, 3164942658, 2420553206, 2567280308, 1062333380, 2167963863, 1790388939, 3859881505, 484431059, 492991217, 1406036949, 2381278951, 2214524995, 269442121, 2391279353, 5629636, 5952914, 32780, 11545050
			},
			.prefetch0 = 19180,
			.prefetch1 = 29865,
			.ram = tas_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				598622795, 3164942658, 2420553206, 2567280308, 1062333380, 2167963863, 1790388939, 3859881505, 484431059, 492991217, 1406036949, 2381278951, 2214524995, 269442121, 2391279353, 5629636, 5952914, 32768, 11545054
			},
			.prefetch0 = 5072,
			.prefetch1 = 42576,
			.ram = tas_final_ram_28,
			.ram_len = 10,
		},
		.transactions = tas_transactions_28,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "029 TAS (A6)+ 4ade",
		.initial = {
			.regs = {
				760320174, 278682400, 2816325512, 848467330, 1073934266, 2285152899, 3098718039, 4241146808, 1198508751, 4179548017, 2841913215, 646479717, 1388164120, 3155907404, 2272124567, 3216354, 3349846, 1046, 13214696
			},
			.prefetch0 = 19166,
			.prefetch1 = 61422,
			.ram = tas_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				760320174, 278682400, 2816325512, 848467330, 1073934266, 2285152899, 3098718039, 4241146808, 1198508751, 4179548017, 2841913215, 646479717, 1388164120, 3155907404, 2272124568, 3216354, 3349846, 1048, 13214698
			},
			.prefetch0 = 61422,
			.prefetch1 = 44958,
			.ram = tas_final_ram_29,
			.ram_len = 8,
		},
		.transactions = tas_transactions_29,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "030 TAS (A1)+ 4ad9",
		.initial = {
			.regs = {
				3311318261, 1259939839, 2646471358, 4155211919, 2380252397, 705516393, 2877678935, 3127133103, 2731507245, 590182125, 3386189787, 4107321588, 749766280, 1275191400, 698530930, 15802200, 1227332, 1541, 4564978
			},
			.prefetch0 = 19161,
			.prefetch1 = 14032,
			.ram = tas_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3311318261, 1259939839, 2646471358, 4155211919, 2380252397, 705516393, 2877678935, 3127133103, 2731507245, 590182126, 3386189787, 4107321588, 749766280, 1275191400, 698530930, 15802200, 1227332, 1536, 4564980
			},
			.prefetch0 = 14032,
			.prefetch1 = 56515,
			.ram = tas_final_ram_30,
			.ram_len = 8,
		},
		.transactions = tas_transactions_30,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "031 TAS D5 4ac5",
		.initial = {
			.regs = {
				1978124569, 1937215830, 1326278559, 2721305501, 1983839541, 839093840, 2798561107, 915358179, 4155039302, 3394629749, 3334752176, 1508099157, 2501566254, 3982410855, 962438513, 5758418, 13142076, 41228, 4372556
			},
			.prefetch0 = 19141,
			.prefetch1 = 54642,
			.ram = tas_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1978124569, 1937215830, 1326278559, 2721305501, 1983839541, 839093968, 2798561107, 915358179, 4155039302, 3394629749, 3334752176, 1508099157, 2501566254, 3982410855, 962438513, 5758418, 13142076, 41216, 4372558
			},
			.prefetch0 = 54642,
			.prefetch1 = 19569,
			.ram = tas_final_ram_31,
			.ram_len = 6,
		},
		.transactions = tas_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_TAS_H */