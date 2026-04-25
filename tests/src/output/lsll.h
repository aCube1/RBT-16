#ifndef RBT_LSLL_H
#define RBT_LSLL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte lsll_initial_ram_0[] = {
		{ .addr = 0xf9c6e2, .byte = 0xe1 },
		{ .addr = 0xf9c6e3, .byte = 0x8b },
		{ .addr = 0xf9c6e4, .byte = 0x7d },
		{ .addr = 0xf9c6e5, .byte = 0xfe },
		{ .addr = 0xf9c6e6, .byte = 0x75 },
		{ .addr = 0xf9c6e7, .byte = 0xbd }
};

static const SST_RamByte lsll_final_ram_0[] = {
		{ .addr = 0xf9c6e2, .byte = 0xe1 },
		{ .addr = 0xf9c6e3, .byte = 0x8b },
		{ .addr = 0xf9c6e4, .byte = 0x7d },
		{ .addr = 0xf9c6e5, .byte = 0xfe },
		{ .addr = 0xf9c6e6, .byte = 0x75 },
		{ .addr = 0xf9c6e7, .byte = 0xbd }
};

static const SST_Transaction lsll_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16369382, .data = 30141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsll_initial_ram_1[] = {
		{ .addr = 0x57b1ea, .byte = 0xe1 },
		{ .addr = 0x57b1eb, .byte = 0xae },
		{ .addr = 0x57b1ec, .byte = 0xe8 },
		{ .addr = 0x57b1ed, .byte = 0x32 },
		{ .addr = 0x57b1ee, .byte = 0x0a },
		{ .addr = 0x57b1ef, .byte = 0xcb }
};

static const SST_RamByte lsll_final_ram_1[] = {
		{ .addr = 0x57b1ea, .byte = 0xe1 },
		{ .addr = 0x57b1eb, .byte = 0xae },
		{ .addr = 0x57b1ec, .byte = 0xe8 },
		{ .addr = 0x57b1ed, .byte = 0x32 },
		{ .addr = 0x57b1ee, .byte = 0x0a },
		{ .addr = 0x57b1ef, .byte = 0xcb }
};

static const SST_Transaction lsll_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5747182, .data = 2763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 126 },
};

static const SST_RamByte lsll_initial_ram_2[] = {
		{ .addr = 0x7f4dc6, .byte = 0xe5 },
		{ .addr = 0x7f4dc7, .byte = 0xab },
		{ .addr = 0x7f4dc8, .byte = 0x69 },
		{ .addr = 0x7f4dc9, .byte = 0xec },
		{ .addr = 0x7f4dca, .byte = 0x31 },
		{ .addr = 0x7f4dcb, .byte = 0x3f }
};

static const SST_RamByte lsll_final_ram_2[] = {
		{ .addr = 0x7f4dc6, .byte = 0xe5 },
		{ .addr = 0x7f4dc7, .byte = 0xab },
		{ .addr = 0x7f4dc8, .byte = 0x69 },
		{ .addr = 0x7f4dc9, .byte = 0xec },
		{ .addr = 0x7f4dca, .byte = 0x31 },
		{ .addr = 0x7f4dcb, .byte = 0x3f }
};

static const SST_Transaction lsll_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8342986, .data = 12607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 60 },
};

static const SST_RamByte lsll_initial_ram_3[] = {
		{ .addr = 0xcf3390, .byte = 0xe7 },
		{ .addr = 0xcf3391, .byte = 0xad },
		{ .addr = 0xcf3392, .byte = 0xbb },
		{ .addr = 0xcf3393, .byte = 0x1e },
		{ .addr = 0xcf3394, .byte = 0xa8 },
		{ .addr = 0xcf3395, .byte = 0x71 }
};

static const SST_RamByte lsll_final_ram_3[] = {
		{ .addr = 0xcf3390, .byte = 0xe7 },
		{ .addr = 0xcf3391, .byte = 0xad },
		{ .addr = 0xcf3392, .byte = 0xbb },
		{ .addr = 0xcf3393, .byte = 0x1e },
		{ .addr = 0xcf3394, .byte = 0xa8 },
		{ .addr = 0xcf3395, .byte = 0x71 }
};

static const SST_Transaction lsll_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13579156, .data = 43121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 42 },
};

static const SST_RamByte lsll_initial_ram_4[] = {
		{ .addr = 0x368adc, .byte = 0xe9 },
		{ .addr = 0x368add, .byte = 0xa9 },
		{ .addr = 0x368ade, .byte = 0x7d },
		{ .addr = 0x368adf, .byte = 0xd2 },
		{ .addr = 0x368ae0, .byte = 0xcd },
		{ .addr = 0x368ae1, .byte = 0x2c }
};

static const SST_RamByte lsll_final_ram_4[] = {
		{ .addr = 0x368adc, .byte = 0xe9 },
		{ .addr = 0x368add, .byte = 0xa9 },
		{ .addr = 0x368ade, .byte = 0x7d },
		{ .addr = 0x368adf, .byte = 0xd2 },
		{ .addr = 0x368ae0, .byte = 0xcd },
		{ .addr = 0x368ae1, .byte = 0x2c }
};

static const SST_Transaction lsll_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3574496, .data = 52524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte lsll_initial_ram_5[] = {
		{ .addr = 0x9b12ea, .byte = 0xe1 },
		{ .addr = 0x9b12eb, .byte = 0x8f },
		{ .addr = 0x9b12ec, .byte = 0xf6 },
		{ .addr = 0x9b12ed, .byte = 0x12 },
		{ .addr = 0x9b12ee, .byte = 0xcf },
		{ .addr = 0x9b12ef, .byte = 0xff }
};

static const SST_RamByte lsll_final_ram_5[] = {
		{ .addr = 0x9b12ea, .byte = 0xe1 },
		{ .addr = 0x9b12eb, .byte = 0x8f },
		{ .addr = 0x9b12ec, .byte = 0xf6 },
		{ .addr = 0x9b12ed, .byte = 0x12 },
		{ .addr = 0x9b12ee, .byte = 0xcf },
		{ .addr = 0x9b12ef, .byte = 0xff }
};

static const SST_Transaction lsll_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10162926, .data = 53247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsll_initial_ram_6[] = {
		{ .addr = 0x1c385a, .byte = 0xe3 },
		{ .addr = 0x1c385b, .byte = 0x88 },
		{ .addr = 0x1c385c, .byte = 0xdd },
		{ .addr = 0x1c385d, .byte = 0x66 },
		{ .addr = 0x1c385e, .byte = 0x40 },
		{ .addr = 0x1c385f, .byte = 0x8a }
};

static const SST_RamByte lsll_final_ram_6[] = {
		{ .addr = 0x1c385a, .byte = 0xe3 },
		{ .addr = 0x1c385b, .byte = 0x88 },
		{ .addr = 0x1c385c, .byte = 0xdd },
		{ .addr = 0x1c385d, .byte = 0x66 },
		{ .addr = 0x1c385e, .byte = 0x40 },
		{ .addr = 0x1c385f, .byte = 0x8a }
};

static const SST_Transaction lsll_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1849438, .data = 16522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsll_initial_ram_7[] = {
		{ .addr = 0xddd18e, .byte = 0xe1 },
		{ .addr = 0xddd18f, .byte = 0x8b },
		{ .addr = 0xddd190, .byte = 0xc1 },
		{ .addr = 0xddd191, .byte = 0x85 },
		{ .addr = 0xddd192, .byte = 0x6d },
		{ .addr = 0xddd193, .byte = 0xb2 }
};

static const SST_RamByte lsll_final_ram_7[] = {
		{ .addr = 0xddd18e, .byte = 0xe1 },
		{ .addr = 0xddd18f, .byte = 0x8b },
		{ .addr = 0xddd190, .byte = 0xc1 },
		{ .addr = 0xddd191, .byte = 0x85 },
		{ .addr = 0xddd192, .byte = 0x6d },
		{ .addr = 0xddd193, .byte = 0xb2 }
};

static const SST_Transaction lsll_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14537106, .data = 28082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsll_initial_ram_8[] = {
		{ .addr = 0xc58ce0, .byte = 0xe7 },
		{ .addr = 0xc58ce1, .byte = 0x8b },
		{ .addr = 0xc58ce2, .byte = 0x73 },
		{ .addr = 0xc58ce3, .byte = 0xb6 },
		{ .addr = 0xc58ce4, .byte = 0x26 },
		{ .addr = 0xc58ce5, .byte = 0x74 }
};

static const SST_RamByte lsll_final_ram_8[] = {
		{ .addr = 0xc58ce0, .byte = 0xe7 },
		{ .addr = 0xc58ce1, .byte = 0x8b },
		{ .addr = 0xc58ce2, .byte = 0x73 },
		{ .addr = 0xc58ce3, .byte = 0xb6 },
		{ .addr = 0xc58ce4, .byte = 0x26 },
		{ .addr = 0xc58ce5, .byte = 0x74 }
};

static const SST_Transaction lsll_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12946660, .data = 9844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lsll_initial_ram_9[] = {
		{ .addr = 0xc7d1e2, .byte = 0xe3 },
		{ .addr = 0xc7d1e3, .byte = 0x8b },
		{ .addr = 0xc7d1e4, .byte = 0xdc },
		{ .addr = 0xc7d1e5, .byte = 0x55 },
		{ .addr = 0xc7d1e6, .byte = 0xbc },
		{ .addr = 0xc7d1e7, .byte = 0x41 }
};

static const SST_RamByte lsll_final_ram_9[] = {
		{ .addr = 0xc7d1e2, .byte = 0xe3 },
		{ .addr = 0xc7d1e3, .byte = 0x8b },
		{ .addr = 0xc7d1e4, .byte = 0xdc },
		{ .addr = 0xc7d1e5, .byte = 0x55 },
		{ .addr = 0xc7d1e6, .byte = 0xbc },
		{ .addr = 0xc7d1e7, .byte = 0x41 }
};

static const SST_Transaction lsll_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13095398, .data = 48193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsll_initial_ram_10[] = {
		{ .addr = 0x2193c4, .byte = 0xe3 },
		{ .addr = 0x2193c5, .byte = 0xae },
		{ .addr = 0x2193c6, .byte = 0xe3 },
		{ .addr = 0x2193c7, .byte = 0x32 },
		{ .addr = 0x2193c8, .byte = 0x11 },
		{ .addr = 0x2193c9, .byte = 0xcd }
};

static const SST_RamByte lsll_final_ram_10[] = {
		{ .addr = 0x2193c4, .byte = 0xe3 },
		{ .addr = 0x2193c5, .byte = 0xae },
		{ .addr = 0x2193c6, .byte = 0xe3 },
		{ .addr = 0x2193c7, .byte = 0x32 },
		{ .addr = 0x2193c8, .byte = 0x11 },
		{ .addr = 0x2193c9, .byte = 0xcd }
};

static const SST_Transaction lsll_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2200520, .data = 4557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 104 },
};

static const SST_RamByte lsll_initial_ram_11[] = {
		{ .addr = 0x555f30, .byte = 0xe1 },
		{ .addr = 0x555f31, .byte = 0xac },
		{ .addr = 0x555f32, .byte = 0x31 },
		{ .addr = 0x555f33, .byte = 0x5e },
		{ .addr = 0x555f34, .byte = 0xdf },
		{ .addr = 0x555f35, .byte = 0xd1 }
};

static const SST_RamByte lsll_final_ram_11[] = {
		{ .addr = 0x555f30, .byte = 0xe1 },
		{ .addr = 0x555f31, .byte = 0xac },
		{ .addr = 0x555f32, .byte = 0x31 },
		{ .addr = 0x555f33, .byte = 0x5e },
		{ .addr = 0x555f34, .byte = 0xdf },
		{ .addr = 0x555f35, .byte = 0xd1 }
};

static const SST_Transaction lsll_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5594932, .data = 57297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 34 },
};

static const SST_RamByte lsll_initial_ram_12[] = {
		{ .addr = 0x55b3c0, .byte = 0xeb },
		{ .addr = 0x55b3c1, .byte = 0xa8 },
		{ .addr = 0x55b3c2, .byte = 0xf6 },
		{ .addr = 0x55b3c3, .byte = 0xca },
		{ .addr = 0x55b3c4, .byte = 0x53 },
		{ .addr = 0x55b3c5, .byte = 0x97 }
};

static const SST_RamByte lsll_final_ram_12[] = {
		{ .addr = 0x55b3c0, .byte = 0xeb },
		{ .addr = 0x55b3c1, .byte = 0xa8 },
		{ .addr = 0x55b3c2, .byte = 0xf6 },
		{ .addr = 0x55b3c3, .byte = 0xca },
		{ .addr = 0x55b3c4, .byte = 0x53 },
		{ .addr = 0x55b3c5, .byte = 0x97 }
};

static const SST_Transaction lsll_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5616580, .data = 21399, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte lsll_initial_ram_13[] = {
		{ .addr = 0x255646, .byte = 0xef },
		{ .addr = 0x255647, .byte = 0xae },
		{ .addr = 0x255648, .byte = 0x8a },
		{ .addr = 0x255649, .byte = 0x2b },
		{ .addr = 0x25564a, .byte = 0x55 },
		{ .addr = 0x25564b, .byte = 0x32 }
};

static const SST_RamByte lsll_final_ram_13[] = {
		{ .addr = 0x255646, .byte = 0xef },
		{ .addr = 0x255647, .byte = 0xae },
		{ .addr = 0x255648, .byte = 0x8a },
		{ .addr = 0x255649, .byte = 0x2b },
		{ .addr = 0x25564a, .byte = 0x55 },
		{ .addr = 0x25564b, .byte = 0x32 }
};

static const SST_Transaction lsll_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2446922, .data = 21810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 68 },
};

static const SST_RamByte lsll_initial_ram_14[] = {
		{ .addr = 0x5fa1e6, .byte = 0xe5 },
		{ .addr = 0x5fa1e7, .byte = 0xad },
		{ .addr = 0x5fa1e8, .byte = 0x13 },
		{ .addr = 0x5fa1e9, .byte = 0xc5 },
		{ .addr = 0x5fa1ea, .byte = 0x7f },
		{ .addr = 0x5fa1eb, .byte = 0x17 }
};

static const SST_RamByte lsll_final_ram_14[] = {
		{ .addr = 0x5fa1e6, .byte = 0xe5 },
		{ .addr = 0x5fa1e7, .byte = 0xad },
		{ .addr = 0x5fa1e8, .byte = 0x13 },
		{ .addr = 0x5fa1e9, .byte = 0xc5 },
		{ .addr = 0x5fa1ea, .byte = 0x7f },
		{ .addr = 0x5fa1eb, .byte = 0x17 }
};

static const SST_Transaction lsll_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6267370, .data = 32535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 38 },
};

static const SST_RamByte lsll_initial_ram_15[] = {
		{ .addr = 0x4a20d8, .byte = 0xe9 },
		{ .addr = 0x4a20d9, .byte = 0x8e },
		{ .addr = 0x4a20da, .byte = 0x4c },
		{ .addr = 0x4a20db, .byte = 0x16 },
		{ .addr = 0x4a20dc, .byte = 0x12 },
		{ .addr = 0x4a20dd, .byte = 0xec }
};

static const SST_RamByte lsll_final_ram_15[] = {
		{ .addr = 0x4a20d8, .byte = 0xe9 },
		{ .addr = 0x4a20d9, .byte = 0x8e },
		{ .addr = 0x4a20da, .byte = 0x4c },
		{ .addr = 0x4a20db, .byte = 0x16 },
		{ .addr = 0x4a20dc, .byte = 0x12 },
		{ .addr = 0x4a20dd, .byte = 0xec }
};

static const SST_Transaction lsll_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4858076, .data = 4844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsll_initial_ram_16[] = {
		{ .addr = 0xffa2b4, .byte = 0xe3 },
		{ .addr = 0xffa2b5, .byte = 0x8f },
		{ .addr = 0xffa2b6, .byte = 0x08 },
		{ .addr = 0xffa2b7, .byte = 0x72 },
		{ .addr = 0xffa2b8, .byte = 0x90 },
		{ .addr = 0xffa2b9, .byte = 0x8d }
};

static const SST_RamByte lsll_final_ram_16[] = {
		{ .addr = 0xffa2b4, .byte = 0xe3 },
		{ .addr = 0xffa2b5, .byte = 0x8f },
		{ .addr = 0xffa2b6, .byte = 0x08 },
		{ .addr = 0xffa2b7, .byte = 0x72 },
		{ .addr = 0xffa2b8, .byte = 0x90 },
		{ .addr = 0xffa2b9, .byte = 0x8d }
};

static const SST_Transaction lsll_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16753336, .data = 37005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsll_initial_ram_17[] = {
		{ .addr = 0xa86e62, .byte = 0xe7 },
		{ .addr = 0xa86e63, .byte = 0xa9 },
		{ .addr = 0xa86e64, .byte = 0xdb },
		{ .addr = 0xa86e65, .byte = 0x3c },
		{ .addr = 0xa86e66, .byte = 0x32 },
		{ .addr = 0xa86e67, .byte = 0xd7 }
};

static const SST_RamByte lsll_final_ram_17[] = {
		{ .addr = 0xa86e62, .byte = 0xe7 },
		{ .addr = 0xa86e63, .byte = 0xa9 },
		{ .addr = 0xa86e64, .byte = 0xdb },
		{ .addr = 0xa86e65, .byte = 0x3c },
		{ .addr = 0xa86e66, .byte = 0x32 },
		{ .addr = 0xa86e67, .byte = 0xd7 }
};

static const SST_Transaction lsll_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11038310, .data = 13015, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 104 },
};

static const SST_RamByte lsll_initial_ram_18[] = {
		{ .addr = 0xad9280, .byte = 0xed },
		{ .addr = 0xad9281, .byte = 0x8f },
		{ .addr = 0xad9282, .byte = 0x02 },
		{ .addr = 0xad9283, .byte = 0xce },
		{ .addr = 0xad9284, .byte = 0xe9 },
		{ .addr = 0xad9285, .byte = 0x4a }
};

static const SST_RamByte lsll_final_ram_18[] = {
		{ .addr = 0xad9280, .byte = 0xed },
		{ .addr = 0xad9281, .byte = 0x8f },
		{ .addr = 0xad9282, .byte = 0x02 },
		{ .addr = 0xad9283, .byte = 0xce },
		{ .addr = 0xad9284, .byte = 0xe9 },
		{ .addr = 0xad9285, .byte = 0x4a }
};

static const SST_Transaction lsll_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11375236, .data = 59722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsll_initial_ram_19[] = {
		{ .addr = 0x2e5682, .byte = 0xef },
		{ .addr = 0x2e5683, .byte = 0xab },
		{ .addr = 0x2e5684, .byte = 0xde },
		{ .addr = 0x2e5685, .byte = 0xc6 },
		{ .addr = 0x2e5686, .byte = 0xb7 },
		{ .addr = 0x2e5687, .byte = 0xcf }
};

static const SST_RamByte lsll_final_ram_19[] = {
		{ .addr = 0x2e5682, .byte = 0xef },
		{ .addr = 0x2e5683, .byte = 0xab },
		{ .addr = 0x2e5684, .byte = 0xde },
		{ .addr = 0x2e5685, .byte = 0xc6 },
		{ .addr = 0x2e5686, .byte = 0xb7 },
		{ .addr = 0x2e5687, .byte = 0xcf }
};

static const SST_Transaction lsll_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3036806, .data = 47055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 42 },
};

static const SST_RamByte lsll_initial_ram_20[] = {
		{ .addr = 0x67834e, .byte = 0xe1 },
		{ .addr = 0x67834f, .byte = 0x8a },
		{ .addr = 0x678350, .byte = 0xf1 },
		{ .addr = 0x678351, .byte = 0x23 },
		{ .addr = 0x678352, .byte = 0x68 },
		{ .addr = 0x678353, .byte = 0xa8 }
};

static const SST_RamByte lsll_final_ram_20[] = {
		{ .addr = 0x67834e, .byte = 0xe1 },
		{ .addr = 0x67834f, .byte = 0x8a },
		{ .addr = 0x678350, .byte = 0xf1 },
		{ .addr = 0x678351, .byte = 0x23 },
		{ .addr = 0x678352, .byte = 0x68 },
		{ .addr = 0x678353, .byte = 0xa8 }
};

static const SST_Transaction lsll_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6783826, .data = 26792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsll_initial_ram_21[] = {
		{ .addr = 0xadd382, .byte = 0xed },
		{ .addr = 0xadd383, .byte = 0x89 },
		{ .addr = 0xadd384, .byte = 0xce },
		{ .addr = 0xadd385, .byte = 0x99 },
		{ .addr = 0xadd386, .byte = 0xbd },
		{ .addr = 0xadd387, .byte = 0x67 }
};

static const SST_RamByte lsll_final_ram_21[] = {
		{ .addr = 0xadd382, .byte = 0xed },
		{ .addr = 0xadd383, .byte = 0x89 },
		{ .addr = 0xadd384, .byte = 0xce },
		{ .addr = 0xadd385, .byte = 0x99 },
		{ .addr = 0xadd386, .byte = 0xbd },
		{ .addr = 0xadd387, .byte = 0x67 }
};

static const SST_Transaction lsll_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11391878, .data = 48487, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsll_initial_ram_22[] = {
		{ .addr = 0x2e8868, .byte = 0xe7 },
		{ .addr = 0x2e8869, .byte = 0x8c },
		{ .addr = 0x2e886a, .byte = 0x44 },
		{ .addr = 0x2e886b, .byte = 0x9e },
		{ .addr = 0x2e886c, .byte = 0x17 },
		{ .addr = 0x2e886d, .byte = 0x13 }
};

static const SST_RamByte lsll_final_ram_22[] = {
		{ .addr = 0x2e8868, .byte = 0xe7 },
		{ .addr = 0x2e8869, .byte = 0x8c },
		{ .addr = 0x2e886a, .byte = 0x44 },
		{ .addr = 0x2e886b, .byte = 0x9e },
		{ .addr = 0x2e886c, .byte = 0x17 },
		{ .addr = 0x2e886d, .byte = 0x13 }
};

static const SST_Transaction lsll_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3049580, .data = 5907, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lsll_initial_ram_23[] = {
		{ .addr = 0xc08218, .byte = 0xeb },
		{ .addr = 0xc08219, .byte = 0xae },
		{ .addr = 0xc0821a, .byte = 0x9a },
		{ .addr = 0xc0821b, .byte = 0x11 },
		{ .addr = 0xc0821c, .byte = 0xc0 },
		{ .addr = 0xc0821d, .byte = 0xa1 }
};

static const SST_RamByte lsll_final_ram_23[] = {
		{ .addr = 0xc08218, .byte = 0xeb },
		{ .addr = 0xc08219, .byte = 0xae },
		{ .addr = 0xc0821a, .byte = 0x9a },
		{ .addr = 0xc0821b, .byte = 0x11 },
		{ .addr = 0xc0821c, .byte = 0xc0 },
		{ .addr = 0xc0821d, .byte = 0xa1 }
};

static const SST_Transaction lsll_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12616220, .data = 49313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 40 },
};

static const SST_RamByte lsll_initial_ram_24[] = {
		{ .addr = 0x7e8c64, .byte = 0xed },
		{ .addr = 0x7e8c65, .byte = 0x8d },
		{ .addr = 0x7e8c66, .byte = 0xce },
		{ .addr = 0x7e8c67, .byte = 0xf9 },
		{ .addr = 0x7e8c68, .byte = 0x0b },
		{ .addr = 0x7e8c69, .byte = 0x10 }
};

static const SST_RamByte lsll_final_ram_24[] = {
		{ .addr = 0x7e8c64, .byte = 0xed },
		{ .addr = 0x7e8c65, .byte = 0x8d },
		{ .addr = 0x7e8c66, .byte = 0xce },
		{ .addr = 0x7e8c67, .byte = 0xf9 },
		{ .addr = 0x7e8c68, .byte = 0x0b },
		{ .addr = 0x7e8c69, .byte = 0x10 }
};

static const SST_Transaction lsll_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8293480, .data = 2832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsll_initial_ram_25[] = {
		{ .addr = 0x37561c, .byte = 0xe9 },
		{ .addr = 0x37561d, .byte = 0xaf },
		{ .addr = 0x37561e, .byte = 0xba },
		{ .addr = 0x37561f, .byte = 0x8b },
		{ .addr = 0x375620, .byte = 0xd8 },
		{ .addr = 0x375621, .byte = 0x74 }
};

static const SST_RamByte lsll_final_ram_25[] = {
		{ .addr = 0x37561c, .byte = 0xe9 },
		{ .addr = 0x37561d, .byte = 0xaf },
		{ .addr = 0x37561e, .byte = 0xba },
		{ .addr = 0x37561f, .byte = 0x8b },
		{ .addr = 0x375620, .byte = 0xd8 },
		{ .addr = 0x375621, .byte = 0x74 }
};

static const SST_Transaction lsll_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3626528, .data = 55412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 26 },
};

static const SST_RamByte lsll_initial_ram_26[] = {
		{ .addr = 0xdd9768, .byte = 0xef },
		{ .addr = 0xdd9769, .byte = 0x8a },
		{ .addr = 0xdd976a, .byte = 0xa5 },
		{ .addr = 0xdd976b, .byte = 0x9e },
		{ .addr = 0xdd976c, .byte = 0xec },
		{ .addr = 0xdd976d, .byte = 0xee }
};

static const SST_RamByte lsll_final_ram_26[] = {
		{ .addr = 0xdd9768, .byte = 0xef },
		{ .addr = 0xdd9769, .byte = 0x8a },
		{ .addr = 0xdd976a, .byte = 0xa5 },
		{ .addr = 0xdd976b, .byte = 0x9e },
		{ .addr = 0xdd976c, .byte = 0xec },
		{ .addr = 0xdd976d, .byte = 0xee }
};

static const SST_Transaction lsll_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14522220, .data = 60654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsll_initial_ram_27[] = {
		{ .addr = 0x00e992, .byte = 0xe9 },
		{ .addr = 0x00e993, .byte = 0x8e },
		{ .addr = 0x00e994, .byte = 0x25 },
		{ .addr = 0x00e995, .byte = 0x24 },
		{ .addr = 0x00e996, .byte = 0xbe },
		{ .addr = 0x00e997, .byte = 0xff }
};

static const SST_RamByte lsll_final_ram_27[] = {
		{ .addr = 0x00e992, .byte = 0xe9 },
		{ .addr = 0x00e993, .byte = 0x8e },
		{ .addr = 0x00e994, .byte = 0x25 },
		{ .addr = 0x00e995, .byte = 0x24 },
		{ .addr = 0x00e996, .byte = 0xbe },
		{ .addr = 0x00e997, .byte = 0xff }
};

static const SST_Transaction lsll_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 59798, .data = 48895, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsll_initial_ram_28[] = {
		{ .addr = 0x365c68, .byte = 0xe3 },
		{ .addr = 0x365c69, .byte = 0xa8 },
		{ .addr = 0x365c6a, .byte = 0x48 },
		{ .addr = 0x365c6b, .byte = 0x13 },
		{ .addr = 0x365c6c, .byte = 0x33 },
		{ .addr = 0x365c6d, .byte = 0x98 }
};

static const SST_RamByte lsll_final_ram_28[] = {
		{ .addr = 0x365c68, .byte = 0xe3 },
		{ .addr = 0x365c69, .byte = 0xa8 },
		{ .addr = 0x365c6a, .byte = 0x48 },
		{ .addr = 0x365c6b, .byte = 0x13 },
		{ .addr = 0x365c6c, .byte = 0x33 },
		{ .addr = 0x365c6d, .byte = 0x98 }
};

static const SST_Transaction lsll_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3562604, .data = 13208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsll_initial_ram_29[] = {
		{ .addr = 0x31c38a, .byte = 0xe5 },
		{ .addr = 0x31c38b, .byte = 0xaf },
		{ .addr = 0x31c38c, .byte = 0xa4 },
		{ .addr = 0x31c38d, .byte = 0xd5 },
		{ .addr = 0x31c38e, .byte = 0x96 },
		{ .addr = 0x31c38f, .byte = 0xf1 }
};

static const SST_RamByte lsll_final_ram_29[] = {
		{ .addr = 0x31c38a, .byte = 0xe5 },
		{ .addr = 0x31c38b, .byte = 0xaf },
		{ .addr = 0x31c38c, .byte = 0xa4 },
		{ .addr = 0x31c38d, .byte = 0xd5 },
		{ .addr = 0x31c38e, .byte = 0x96 },
		{ .addr = 0x31c38f, .byte = 0xf1 }
};

static const SST_Transaction lsll_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3261326, .data = 38641, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsll_initial_ram_30[] = {
		{ .addr = 0x0009cc, .byte = 0xed },
		{ .addr = 0x0009cd, .byte = 0xae },
		{ .addr = 0x0009ce, .byte = 0x13 },
		{ .addr = 0x0009cf, .byte = 0x44 },
		{ .addr = 0x0009d0, .byte = 0xd2 },
		{ .addr = 0x0009d1, .byte = 0x8a }
};

static const SST_RamByte lsll_final_ram_30[] = {
		{ .addr = 0x0009cc, .byte = 0xed },
		{ .addr = 0x0009cd, .byte = 0xae },
		{ .addr = 0x0009ce, .byte = 0x13 },
		{ .addr = 0x0009cf, .byte = 0x44 },
		{ .addr = 0x0009d0, .byte = 0xd2 },
		{ .addr = 0x0009d1, .byte = 0x8a }
};

static const SST_Transaction lsll_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2512, .data = 53898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 54 },
};

static const SST_RamByte lsll_initial_ram_31[] = {
		{ .addr = 0x04661e, .byte = 0xe1 },
		{ .addr = 0x04661f, .byte = 0xae },
		{ .addr = 0x046620, .byte = 0xaf },
		{ .addr = 0x046621, .byte = 0x68 },
		{ .addr = 0x046622, .byte = 0x53 },
		{ .addr = 0x046623, .byte = 0x0d }
};

static const SST_RamByte lsll_final_ram_31[] = {
		{ .addr = 0x04661e, .byte = 0xe1 },
		{ .addr = 0x04661f, .byte = 0xae },
		{ .addr = 0x046620, .byte = 0xaf },
		{ .addr = 0x046621, .byte = 0x68 },
		{ .addr = 0x046622, .byte = 0x53 },
		{ .addr = 0x046623, .byte = 0x0d }
};

static const SST_Transaction lsll_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 288290, .data = 21261, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 120 },
};

static const SST_TestCase lsll[] = {
	{
		.name = "000 LSL.l 8, D3 e18b",
		.initial = {
			.regs = {
				2062035981, 1007843109, 2879661634, 75316724, 1441372217, 11302036, 3265089506, 1935558358, 241915969, 3874271221, 1138071793, 3842450313, 345828183, 3944270070, 1291001525, 5880452, 6353640, 34061, 16369382
			},
			.prefetch0 = 57739,
			.prefetch1 = 32254,
			.ram = lsll_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2062035981, 1007843109, 2879661634, 2101212160, 1441372217, 11302036, 3265089506, 1935558358, 241915969, 3874271221, 1138071793, 3842450313, 345828183, 3944270070, 1291001525, 5880452, 6353640, 34048, 16369384
			},
			.prefetch0 = 32254,
			.prefetch1 = 30141,
			.ram = lsll_final_ram_0,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_0,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "001 LSL.l D0, D6 e1ae",
		.initial = {
			.regs = {
				1126498557, 2131489867, 78459412, 1708161690, 3948299848, 974175521, 2678728008, 4157024684, 31460503, 3615839990, 601076187, 1636247796, 1768400584, 478952136, 887167743, 6661712, 16726514, 41736, 5747182
			},
			.prefetch0 = 57774,
			.prefetch1 = 59442,
			.ram = lsll_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1126498557, 2131489867, 78459412, 1708161690, 3948299848, 974175521, 0, 4157024684, 31460503, 3615839990, 601076187, 1636247796, 1768400584, 478952136, 887167743, 6661712, 16726514, 41732, 5747184
			},
			.prefetch0 = 59442,
			.prefetch1 = 2763,
			.ram = lsll_final_ram_1,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_1,
		.transactions_len = 2,
		.lenght = 130,
	},
	{
		.name = "002 LSL.l D2, D3 e5ab",
		.initial = {
			.regs = {
				1295836457, 1362169870, 1814889564, 973989023, 3996280150, 3949920218, 2982317994, 971237910, 933946066, 1457097107, 3392271563, 3334465447, 4172895869, 2870795622, 813409296, 10935410, 6743494, 42500, 8342986
			},
			.prefetch0 = 58795,
			.prefetch1 = 27116,
			.ram = lsll_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1295836457, 1362169870, 1814889564, 4026531840, 3996280150, 3949920218, 2982317994, 971237910, 933946066, 1457097107, 3392271563, 3334465447, 4172895869, 2870795622, 813409296, 10935410, 6743494, 42521, 8342988
			},
			.prefetch0 = 27116,
			.prefetch1 = 12607,
			.ram = lsll_final_ram_2,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_2,
		.transactions_len = 2,
		.lenght = 64,
	},
	{
		.name = "003 LSL.l D3, D5 e7ad",
		.initial = {
			.regs = {
				20553720, 2566227254, 1963479908, 2147995539, 4041502800, 429766055, 3296600544, 2714657360, 720404420, 2227475909, 3120136703, 2924024426, 1440341508, 2678588416, 791936117, 9913472, 962354, 1820, 13579156
			},
			.prefetch0 = 59309,
			.prefetch1 = 47902,
			.ram = lsll_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				20553720, 2566227254, 1963479908, 2147995539, 4041502800, 2906128384, 3296600544, 2714657360, 720404420, 2227475909, 3120136703, 2924024426, 1440341508, 2678588416, 791936117, 9913472, 962354, 1817, 13579158
			},
			.prefetch0 = 47902,
			.prefetch1 = 43121,
			.ram = lsll_final_ram_3,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_3,
		.transactions_len = 2,
		.lenght = 46,
	},
	{
		.name = "004 LSL.l D4, D1 e9a9",
		.initial = {
			.regs = {
				1201368613, 2611168500, 721068460, 920412847, 1610934708, 1058565118, 493622790, 2164722453, 44313422, 71487798, 1243380321, 1420596, 2157941955, 145033163, 1675579310, 145128, 9394048, 41500, 3574496
			},
			.prefetch0 = 59817,
			.prefetch1 = 32210,
			.ram = lsll_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1201368613, 0, 721068460, 920412847, 1610934708, 1058565118, 493622790, 2164722453, 44313422, 71487798, 1243380321, 1420596, 2157941955, 145033163, 1675579310, 145128, 9394048, 41476, 3574498
			},
			.prefetch0 = 32210,
			.prefetch1 = 52524,
			.ram = lsll_final_ram_4,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_4,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "005 LSL.l 8, D7 e18f",
		.initial = {
			.regs = {
				3810648686, 2979610827, 1000162746, 3089371947, 1428340723, 3451225190, 4183635016, 3031242186, 50453720, 809570720, 2963026351, 1377813002, 887364835, 3020449493, 974716852, 1876988, 5851866, 9219, 10162926
			},
			.prefetch0 = 57743,
			.prefetch1 = 62994,
			.ram = lsll_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3810648686, 2979610827, 1000162746, 3089371947, 1428340723, 3451225190, 4183635016, 2903886336, 50453720, 809570720, 2963026351, 1377813002, 887364835, 3020449493, 974716852, 1876988, 5851866, 9224, 10162928
			},
			.prefetch0 = 62994,
			.prefetch1 = 53247,
			.ram = lsll_final_ram_5,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_5,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "006 LSL.l 1, D0 e388",
		.initial = {
			.regs = {
				3095104402, 3000126633, 1423647538, 1586145908, 4012839067, 1044042015, 2765783731, 2350144082, 3077912611, 574613089, 515584803, 3293971202, 1319635247, 709154935, 3752472051, 12715172, 6230000, 8731, 1849438
			},
			.prefetch0 = 58248,
			.prefetch1 = 56678,
			.ram = lsll_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1895241508, 3000126633, 1423647538, 1586145908, 4012839067, 1044042015, 2765783731, 2350144082, 3077912611, 574613089, 515584803, 3293971202, 1319635247, 709154935, 3752472051, 12715172, 6230000, 8721, 1849440
			},
			.prefetch0 = 56678,
			.prefetch1 = 16522,
			.ram = lsll_final_ram_6,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_6,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "007 LSL.l 8, D3 e18b",
		.initial = {
			.regs = {
				2431186904, 4057184823, 2719381160, 1868759351, 3399947433, 2815817407, 1523966703, 3870448564, 2115307992, 569560908, 247227945, 3532769496, 2640167363, 294753069, 1619378750, 13253358, 7035310, 42503, 14537106
			},
			.prefetch0 = 57739,
			.prefetch1 = 49541,
			.ram = lsll_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2431186904, 4057184823, 2719381160, 1661024000, 3399947433, 2815817407, 1523966703, 3870448564, 2115307992, 569560908, 247227945, 3532769496, 2640167363, 294753069, 1619378750, 13253358, 7035310, 42513, 14537108
			},
			.prefetch0 = 49541,
			.prefetch1 = 28082,
			.ram = lsll_final_ram_7,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_7,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "008 LSL.l 3, D3 e78b",
		.initial = {
			.regs = {
				2124863917, 1822006135, 2751851355, 3770466273, 3559544790, 1202410991, 4035692186, 2713770118, 716102623, 3664661528, 3770367296, 2261225664, 3504222609, 459321083, 2138932915, 14065190, 16436068, 33030, 12946660
			},
			.prefetch0 = 59275,
			.prefetch1 = 29622,
			.ram = lsll_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2124863917, 1822006135, 2751851355, 98959112, 3559544790, 1202410991, 4035692186, 2713770118, 716102623, 3664661528, 3770367296, 2261225664, 3504222609, 459321083, 2138932915, 14065190, 16436068, 33041, 12946662
			},
			.prefetch0 = 29622,
			.prefetch1 = 9844,
			.ram = lsll_final_ram_8,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_8,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "009 LSL.l 1, D3 e38b",
		.initial = {
			.regs = {
				2829799643, 3740003872, 2164806856, 3746415416, 90611214, 1593480121, 358316052, 1179679684, 4061961506, 1473314615, 2537109858, 926061111, 750322056, 3561145679, 1351732550, 10034984, 13778256, 42779, 13095398
			},
			.prefetch0 = 58251,
			.prefetch1 = 56405,
			.ram = lsll_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2829799643, 3740003872, 2164806856, 3197863536, 90611214, 1593480121, 358316052, 1179679684, 4061961506, 1473314615, 2537109858, 926061111, 750322056, 3561145679, 1351732550, 10034984, 13778256, 42777, 13095400
			},
			.prefetch0 = 56405,
			.prefetch1 = 48193,
			.ram = lsll_final_ram_9,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_9,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "010 LSL.l D1, D6 e3ae",
		.initial = {
			.regs = {
				2011272314, 3856898930, 2895354594, 3784975027, 3922372299, 3934042378, 1321849329, 3375820331, 1306453598, 2981854492, 3569247839, 3546139612, 4154281642, 2670171258, 3812062604, 13414372, 16554618, 9759, 2200520
			},
			.prefetch0 = 58286,
			.prefetch1 = 58162,
			.ram = lsll_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2011272314, 3856898930, 2895354594, 3784975027, 3922372299, 3934042378, 0, 3375820331, 1306453598, 2981854492, 3569247839, 3546139612, 4154281642, 2670171258, 3812062604, 13414372, 16554618, 9732, 2200522
			},
			.prefetch0 = 58162,
			.prefetch1 = 4557,
			.ram = lsll_final_ram_10,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_10,
		.transactions_len = 2,
		.lenght = 108,
	},
	{
		.name = "011 LSL.l D0, D4 e1ac",
		.initial = {
			.regs = {
				1199434831, 3862973940, 2382870079, 1877956713, 4051712623, 2976337200, 2536130551, 4213290669, 166302986, 1889164469, 4178261233, 750124197, 2540168586, 3836004174, 3397642292, 994038, 14663784, 34580, 5594932
			},
			.prefetch0 = 57772,
			.prefetch1 = 12638,
			.ram = lsll_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1199434831, 3862973940, 2382870079, 1877956713, 490176512, 2976337200, 2536130551, 4213290669, 166302986, 1889164469, 4178261233, 750124197, 2540168586, 3836004174, 3397642292, 994038, 14663784, 34560, 5594934
			},
			.prefetch0 = 12638,
			.prefetch1 = 57297,
			.ram = lsll_final_ram_11,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_11,
		.transactions_len = 2,
		.lenght = 38,
	},
	{
		.name = "012 LSL.l D5, D0 eba8",
		.initial = {
			.regs = {
				2234870060, 3135613124, 1902463344, 1429161436, 3172218774, 2072046488, 3487441662, 186201447, 4081248206, 3570752627, 3967916543, 3815887132, 2436110217, 3561504924, 997297099, 9729006, 6959998, 41242, 5616580
			},
			.prefetch0 = 60328,
			.prefetch1 = 63178,
			.ram = lsll_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				738197504, 3135613124, 1902463344, 1429161436, 3172218774, 2072046488, 3487441662, 186201447, 4081248206, 3570752627, 3967916543, 3815887132, 2436110217, 3561504924, 997297099, 9729006, 6959998, 41233, 5616582
			},
			.prefetch0 = 63178,
			.prefetch1 = 21399,
			.ram = lsll_final_ram_12,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_12,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "013 LSL.l D7, D6 efae",
		.initial = {
			.regs = {
				2817653452, 1207713211, 3926630280, 120806843, 2229383450, 735053724, 3905870200, 3489844000, 3462320301, 2070060443, 3065902764, 2044909808, 3070959797, 2081436293, 1276023862, 9807474, 2517378, 42777, 2446922
			},
			.prefetch0 = 61358,
			.prefetch1 = 35371,
			.ram = lsll_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2817653452, 1207713211, 3926630280, 120806843, 2229383450, 735053724, 0, 3489844000, 3462320301, 2070060443, 3065902764, 2044909808, 3070959797, 2081436293, 1276023862, 9807474, 2517378, 42756, 2446924
			},
			.prefetch0 = 35371,
			.prefetch1 = 21810,
			.ram = lsll_final_ram_13,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_13,
		.transactions_len = 2,
		.lenght = 72,
	},
	{
		.name = "014 LSL.l D2, D5 e5ad",
		.initial = {
			.regs = {
				3618028502, 2759779792, 2192447569, 2416467410, 2911119824, 2708179409, 99345011, 1851120709, 2575127539, 3187124967, 2204846920, 2949122502, 1929752109, 3705149528, 2742820167, 12807116, 15140712, 10007, 6267370
			},
			.prefetch0 = 58797,
			.prefetch1 = 5061,
			.ram = lsll_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3618028502, 2759779792, 2192447569, 2416467410, 2911119824, 329383936, 99345011, 1851120709, 2575127539, 3187124967, 2204846920, 2949122502, 1929752109, 3705149528, 2742820167, 12807116, 15140712, 10001, 6267372
			},
			.prefetch0 = 5061,
			.prefetch1 = 32535,
			.ram = lsll_final_ram_14,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_14,
		.transactions_len = 2,
		.lenght = 42,
	},
	{
		.name = "015 LSL.l 4, D6 e98e",
		.initial = {
			.regs = {
				4049722074, 2220181376, 1978253494, 543371758, 2619528198, 159724602, 641082806, 3466848973, 2415865334, 3697554222, 122663365, 3480913214, 2134736660, 3593456261, 936446031, 15948664, 1523958, 8207, 4858076
			},
			.prefetch0 = 59790,
			.prefetch1 = 19478,
			.ram = lsll_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4049722074, 2220181376, 1978253494, 543371758, 2619528198, 159724602, 1667390304, 3466848973, 2415865334, 3697554222, 122663365, 3480913214, 2134736660, 3593456261, 936446031, 15948664, 1523958, 8192, 4858078
			},
			.prefetch0 = 19478,
			.prefetch1 = 4844,
			.ram = lsll_final_ram_15,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_15,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "016 LSL.l 1, D7 e38f",
		.initial = {
			.regs = {
				1874487065, 3719592813, 1821210758, 3182736845, 2850600167, 3154971406, 3044372049, 2941527925, 3839323478, 3548105061, 2007972044, 3580620786, 3940080268, 3170142536, 3178318547, 123760, 14323866, 9986, 16753336
			},
			.prefetch0 = 58255,
			.prefetch1 = 2162,
			.ram = lsll_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1874487065, 3719592813, 1821210758, 3182736845, 2850600167, 3154971406, 3044372049, 1588088554, 3839323478, 3548105061, 2007972044, 3580620786, 3940080268, 3170142536, 3178318547, 123760, 14323866, 10001, 16753338
			},
			.prefetch0 = 2162,
			.prefetch1 = 37005,
			.ram = lsll_final_ram_16,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_16,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "017 LSL.l D3, D1 e7a9",
		.initial = {
			.regs = {
				4165723820, 2636250828, 3692126103, 1177696242, 2051251598, 219223463, 4060678084, 2476650288, 3326731356, 4162610650, 3990210303, 1933937613, 796178396, 1510352171, 2433603553, 1078394, 5324668, 34070, 11038310
			},
			.prefetch0 = 59305,
			.prefetch1 = 56124,
			.ram = lsll_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4165723820, 0, 3692126103, 1177696242, 2051251598, 219223463, 4060678084, 2476650288, 3326731356, 4162610650, 3990210303, 1933937613, 796178396, 1510352171, 2433603553, 1078394, 5324668, 34052, 11038312
			},
			.prefetch0 = 56124,
			.prefetch1 = 13015,
			.ram = lsll_final_ram_17,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_17,
		.transactions_len = 2,
		.lenght = 108,
	},
	{
		.name = "018 LSL.l 6, D7 ed8f",
		.initial = {
			.regs = {
				1730609089, 1434928118, 3923088874, 1948431532, 2748265259, 2010774052, 1382425681, 1760719746, 1481448415, 3595109639, 2377920172, 3419205157, 3731533395, 2398488934, 1651685057, 6203088, 871960, 10007, 11375236
			},
			.prefetch0 = 60815,
			.prefetch1 = 718,
			.ram = lsll_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1730609089, 1434928118, 3923088874, 1948431532, 2748265259, 2010774052, 1382425681, 1016914048, 1481448415, 3595109639, 2377920172, 3419205157, 3731533395, 2398488934, 1651685057, 6203088, 871960, 9984, 11375238
			},
			.prefetch0 = 718,
			.prefetch1 = 59722,
			.ram = lsll_final_ram_18,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_18,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "019 LSL.l D7, D3 efab",
		.initial = {
			.regs = {
				3149997134, 2918818993, 3182230603, 3042004308, 575866885, 540371222, 3729625803, 846664595, 2544812406, 2925115468, 1557803081, 2260285814, 3101831953, 1852151984, 3103603604, 10846470, 7217384, 33281, 3036806
			},
			.prefetch0 = 61355,
			.prefetch1 = 57030,
			.ram = lsll_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3149997134, 2918818993, 3182230603, 1788870656, 575866885, 540371222, 3729625803, 846664595, 2544812406, 2925115468, 1557803081, 2260285814, 3101831953, 1852151984, 3103603604, 10846470, 7217384, 33280, 3036808
			},
			.prefetch0 = 57030,
			.prefetch1 = 47055,
			.ram = lsll_final_ram_19,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_19,
		.transactions_len = 2,
		.lenght = 46,
	},
	{
		.name = "020 LSL.l 8, D2 e18a",
		.initial = {
			.regs = {
				1910256091, 1425527014, 698562727, 958939909, 1189385413, 1221582983, 4155244324, 48629408, 1356135360, 4229925367, 2170056341, 3127161908, 3446298040, 2435213581, 3471943375, 6730962, 6485358, 33803, 6783826
			},
			.prefetch0 = 57738,
			.prefetch1 = 61731,
			.ram = lsll_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1910256091, 1425527014, 2738398976, 958939909, 1189385413, 1221582983, 4155244324, 48629408, 1356135360, 4229925367, 2170056341, 3127161908, 3446298040, 2435213581, 3471943375, 6730962, 6485358, 33817, 6783828
			},
			.prefetch0 = 61731,
			.prefetch1 = 26792,
			.ram = lsll_final_ram_20,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_20,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "021 LSL.l 6, D1 ed89",
		.initial = {
			.regs = {
				2531859175, 2050961356, 2312626063, 693887070, 2174862271, 1341941748, 2451658035, 468154676, 1194027742, 2241853633, 2080130888, 240366251, 1064008912, 2554879085, 2282089111, 11991128, 6897766, 14, 11391878
			},
			.prefetch0 = 60809,
			.prefetch1 = 52889,
			.ram = lsll_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2531859175, 2412507904, 2312626063, 693887070, 2174862271, 1341941748, 2451658035, 468154676, 1194027742, 2241853633, 2080130888, 240366251, 1064008912, 2554879085, 2282089111, 11991128, 6897766, 8, 11391880
			},
			.prefetch0 = 52889,
			.prefetch1 = 48487,
			.ram = lsll_final_ram_21,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_21,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "022 LSL.l 3, D4 e78c",
		.initial = {
			.regs = {
				3235355071, 1767562257, 3668477417, 1637990409, 1504062340, 3638495888, 2149160781, 295122627, 4099124388, 2461064132, 2674188752, 2677319155, 105777378, 3776964111, 311350960, 98436, 13431982, 1290, 3049580
			},
			.prefetch0 = 59276,
			.prefetch1 = 17566,
			.ram = lsll_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3235355071, 1767562257, 3668477417, 1637990409, 3442564128, 3638495888, 2149160781, 295122627, 4099124388, 2461064132, 2674188752, 2677319155, 105777378, 3776964111, 311350960, 98436, 13431982, 1288, 3049582
			},
			.prefetch0 = 17566,
			.prefetch1 = 5907,
			.ram = lsll_final_ram_22,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_22,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "023 LSL.l D5, D6 ebae",
		.initial = {
			.regs = {
				56606641, 506000612, 545972442, 203104910, 47118439, 1122934866, 2029181616, 3319420002, 3441932517, 2434474974, 2806189065, 2009142072, 693124652, 3121682736, 252073571, 7260378, 1745660, 9241, 12616220
			},
			.prefetch0 = 60334,
			.prefetch1 = 39441,
			.ram = lsll_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				56606641, 506000612, 545972442, 203104910, 47118439, 1122934866, 1790967808, 3319420002, 3441932517, 2434474974, 2806189065, 2009142072, 693124652, 3121682736, 252073571, 7260378, 1745660, 9233, 12616222
			},
			.prefetch0 = 39441,
			.prefetch1 = 49313,
			.ram = lsll_final_ram_23,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_23,
		.transactions_len = 2,
		.lenght = 44,
	},
	{
		.name = "024 LSL.l 6, D5 ed8d",
		.initial = {
			.regs = {
				1376996702, 869731218, 3646805460, 2685951337, 2553582062, 386204455, 284556199, 2309149390, 1331168976, 4136908654, 233239071, 85604501, 3285023665, 2198024673, 3025711563, 7648054, 5234644, 42244, 8293480
			},
			.prefetch0 = 60813,
			.prefetch1 = 52985,
			.ram = lsll_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1376996702, 869731218, 3646805460, 2685951337, 2553582062, 3242248640, 284556199, 2309149390, 1331168976, 4136908654, 233239071, 85604501, 3285023665, 2198024673, 3025711563, 7648054, 5234644, 42265, 8293482
			},
			.prefetch0 = 52985,
			.prefetch1 = 2832,
			.ram = lsll_final_ram_24,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_24,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "025 LSL.l D4, D7 e9af",
		.initial = {
			.regs = {
				1718450944, 829868871, 1108531149, 3079603240, 2266491915, 1903881495, 1939652842, 50330145, 3456798983, 2629000406, 3596541851, 3212429248, 4179630857, 2455183621, 838142733, 9332694, 5083936, 9758, 3626528
			},
			.prefetch0 = 59823,
			.prefetch1 = 47755,
			.ram = lsll_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1718450944, 829868871, 1108531149, 3079603240, 2266491915, 1903881495, 1939652842, 4291889152, 3456798983, 2629000406, 3596541851, 3212429248, 4179630857, 2455183621, 838142733, 9332694, 5083936, 9753, 3626530
			},
			.prefetch0 = 47755,
			.prefetch1 = 55412,
			.ram = lsll_final_ram_25,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_25,
		.transactions_len = 2,
		.lenght = 30,
	},
	{
		.name = "026 LSL.l 7, D2 ef8a",
		.initial = {
			.regs = {
				1960784752, 1441629667, 3490240818, 3921827642, 2006540230, 2446583868, 3094520885, 905613091, 3169837396, 2810864911, 4010598399, 4142738523, 2693663067, 823035422, 566011576, 13635144, 4229722, 533, 14522220
			},
			.prefetch0 = 61322,
			.prefetch1 = 42398,
			.ram = lsll_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1960784752, 1441629667, 74225920, 3921827642, 2006540230, 2446583868, 3094520885, 905613091, 3169837396, 2810864911, 4010598399, 4142738523, 2693663067, 823035422, 566011576, 13635144, 4229722, 512, 14522222
			},
			.prefetch0 = 42398,
			.prefetch1 = 60654,
			.ram = lsll_final_ram_26,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_26,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "027 LSL.l 4, D6 e98e",
		.initial = {
			.regs = {
				1027581734, 4226936726, 2507236868, 1675867044, 820505100, 51247252, 1147371304, 1145545101, 4098691681, 1610708032, 1547406485, 2577616899, 1081138659, 643320461, 4159383423, 13491890, 14783740, 1280, 59798
			},
			.prefetch0 = 59790,
			.prefetch1 = 9508,
			.ram = lsll_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1027581734, 4226936726, 2507236868, 1675867044, 820505100, 51247252, 1178071680, 1145545101, 4098691681, 1610708032, 1547406485, 2577616899, 1081138659, 643320461, 4159383423, 13491890, 14783740, 1280, 59800
			},
			.prefetch0 = 9508,
			.prefetch1 = 48895,
			.ram = lsll_final_ram_27,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_27,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "028 LSL.l D1, D0 e3a8",
		.initial = {
			.regs = {
				2325811592, 4100971399, 596245189, 535019047, 157531241, 2956215652, 2671158220, 1053529199, 3805149501, 1251974143, 3819693892, 3932380116, 1507279692, 3628344926, 3902429257, 15102990, 14109562, 8728, 3562604
			},
			.prefetch0 = 58280,
			.prefetch1 = 18451,
			.ram = lsll_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1351140352, 4100971399, 596245189, 535019047, 157531241, 2956215652, 2671158220, 1053529199, 3805149501, 1251974143, 3819693892, 3932380116, 1507279692, 3628344926, 3902429257, 15102990, 14109562, 8721, 3562606
			},
			.prefetch0 = 18451,
			.prefetch1 = 13208,
			.ram = lsll_final_ram_28,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_28,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "029 LSL.l D2, D7 e5af",
		.initial = {
			.regs = {
				2277493596, 1946737083, 4268209351, 1237642398, 122783814, 3501873204, 1187204415, 599640771, 1771131580, 1500070973, 3770079029, 2522264737, 2043760163, 287424998, 2379154831, 8993588, 1775416, 9242, 3261326
			},
			.prefetch0 = 58799,
			.prefetch1 = 42197,
			.ram = lsll_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2277493596, 1946737083, 4268209351, 1237642398, 122783814, 3501873204, 1187204415, 3739574656, 1771131580, 1500070973, 3770079029, 2522264737, 2043760163, 287424998, 2379154831, 8993588, 1775416, 9241, 3261328
			},
			.prefetch0 = 42197,
			.prefetch1 = 38641,
			.ram = lsll_final_ram_29,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_29,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "030 LSL.l D6, D6 edae",
		.initial = {
			.regs = {
				4076807642, 953632944, 4065480481, 2891703017, 871455690, 3572568099, 1282504601, 255472074, 3799380104, 1651181074, 578837175, 4044296075, 4238508375, 1437862394, 2479720546, 8738464, 12786774, 34576, 2512
			},
			.prefetch0 = 60846,
			.prefetch1 = 4932,
			.ram = lsll_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4076807642, 953632944, 4065480481, 2891703017, 871455690, 3572568099, 838860800, 255472074, 3799380104, 1651181074, 578837175, 4044296075, 4238508375, 1437862394, 2479720546, 8738464, 12786774, 34577, 2514
			},
			.prefetch0 = 4932,
			.prefetch1 = 53898,
			.ram = lsll_final_ram_30,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_30,
		.transactions_len = 2,
		.lenght = 58,
	},
	{
		.name = "031 LSL.l D0, D6 e1ae",
		.initial = {
			.regs = {
				2476353402, 2928160751, 2834420431, 390497727, 641315607, 2433306345, 2517974148, 2676974454, 2096158593, 2845363809, 2463503546, 1320275301, 809632201, 785516239, 1086691909, 1350410, 4094320, 1049, 288290
			},
			.prefetch0 = 57774,
			.prefetch1 = 44904,
			.ram = lsll_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2476353402, 2928160751, 2834420431, 390497727, 641315607, 2433306345, 0, 2676974454, 2096158593, 2845363809, 2463503546, 1320275301, 809632201, 785516239, 1086691909, 1350410, 4094320, 1028, 288292
			},
			.prefetch0 = 44904,
			.prefetch1 = 21261,
			.ram = lsll_final_ram_31,
			.ram_len = 6,
		},
		.transactions = lsll_transactions_31,
		.transactions_len = 2,
		.lenght = 124,
	},
};

#endif /* RBT_LSLL_H */