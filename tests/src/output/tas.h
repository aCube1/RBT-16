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

const uint32_t TAS_TEST_COUNT = 16;
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
};

#endif /* RBT_TAS_H */