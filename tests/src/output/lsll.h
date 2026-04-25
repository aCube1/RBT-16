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

const uint32_t LSLL_TEST_COUNT = 16;
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
};

#endif /* RBT_LSLL_H */