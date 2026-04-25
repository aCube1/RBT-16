#ifndef RBT_ROLL_H
#define RBT_ROLL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roll_initial_ram_0[] = {
		{ .addr = 0xd24658, .byte = 0xef },
		{ .addr = 0xd24659, .byte = 0xb8 },
		{ .addr = 0xd2465a, .byte = 0xf9 },
		{ .addr = 0xd2465b, .byte = 0x1e },
		{ .addr = 0xd2465c, .byte = 0xf8 },
		{ .addr = 0xd2465d, .byte = 0x97 }
};

static const SST_RamByte roll_final_ram_0[] = {
		{ .addr = 0xd24658, .byte = 0xef },
		{ .addr = 0xd24659, .byte = 0xb8 },
		{ .addr = 0xd2465a, .byte = 0xf9 },
		{ .addr = 0xd2465b, .byte = 0x1e },
		{ .addr = 0xd2465c, .byte = 0xf8 },
		{ .addr = 0xd2465d, .byte = 0x97 }
};

static const SST_Transaction roll_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13780572, .data = 63639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte roll_initial_ram_1[] = {
		{ .addr = 0xc151ca, .byte = 0xe7 },
		{ .addr = 0xc151cb, .byte = 0xbd },
		{ .addr = 0xc151cc, .byte = 0x65 },
		{ .addr = 0xc151cd, .byte = 0xa5 },
		{ .addr = 0xc151ce, .byte = 0x2f },
		{ .addr = 0xc151cf, .byte = 0x94 }
};

static const SST_RamByte roll_final_ram_1[] = {
		{ .addr = 0xc151ca, .byte = 0xe7 },
		{ .addr = 0xc151cb, .byte = 0xbd },
		{ .addr = 0xc151cc, .byte = 0x65 },
		{ .addr = 0xc151cd, .byte = 0xa5 },
		{ .addr = 0xc151ce, .byte = 0x2f },
		{ .addr = 0xc151cf, .byte = 0x94 }
};

static const SST_Transaction roll_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12669390, .data = 12180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte roll_initial_ram_2[] = {
		{ .addr = 0x77277e, .byte = 0xed },
		{ .addr = 0x77277f, .byte = 0x99 },
		{ .addr = 0x772780, .byte = 0x07 },
		{ .addr = 0x772781, .byte = 0x02 },
		{ .addr = 0x772782, .byte = 0xe7 },
		{ .addr = 0x772783, .byte = 0xd5 }
};

static const SST_RamByte roll_final_ram_2[] = {
		{ .addr = 0x77277e, .byte = 0xed },
		{ .addr = 0x77277f, .byte = 0x99 },
		{ .addr = 0x772780, .byte = 0x07 },
		{ .addr = 0x772781, .byte = 0x02 },
		{ .addr = 0x772782, .byte = 0xe7 },
		{ .addr = 0x772783, .byte = 0xd5 }
};

static const SST_Transaction roll_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7808898, .data = 59349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roll_initial_ram_3[] = {
		{ .addr = 0xc12d84, .byte = 0xe7 },
		{ .addr = 0xc12d85, .byte = 0x9c },
		{ .addr = 0xc12d86, .byte = 0xf9 },
		{ .addr = 0xc12d87, .byte = 0xfa },
		{ .addr = 0xc12d88, .byte = 0xa8 },
		{ .addr = 0xc12d89, .byte = 0x6c }
};

static const SST_RamByte roll_final_ram_3[] = {
		{ .addr = 0xc12d84, .byte = 0xe7 },
		{ .addr = 0xc12d85, .byte = 0x9c },
		{ .addr = 0xc12d86, .byte = 0xf9 },
		{ .addr = 0xc12d87, .byte = 0xfa },
		{ .addr = 0xc12d88, .byte = 0xa8 },
		{ .addr = 0xc12d89, .byte = 0x6c }
};

static const SST_Transaction roll_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12660104, .data = 43116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roll_initial_ram_4[] = {
		{ .addr = 0xe93f92, .byte = 0xe7 },
		{ .addr = 0xe93f93, .byte = 0xbb },
		{ .addr = 0xe93f94, .byte = 0x73 },
		{ .addr = 0xe93f95, .byte = 0x02 },
		{ .addr = 0xe93f96, .byte = 0x6c },
		{ .addr = 0xe93f97, .byte = 0x54 }
};

static const SST_RamByte roll_final_ram_4[] = {
		{ .addr = 0xe93f92, .byte = 0xe7 },
		{ .addr = 0xe93f93, .byte = 0xbb },
		{ .addr = 0xe93f94, .byte = 0x73 },
		{ .addr = 0xe93f95, .byte = 0x02 },
		{ .addr = 0xe93f96, .byte = 0x6c },
		{ .addr = 0xe93f97, .byte = 0x54 }
};

static const SST_Transaction roll_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15286166, .data = 27732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte roll_initial_ram_5[] = {
		{ .addr = 0x596378, .byte = 0xeb },
		{ .addr = 0x596379, .byte = 0xbe },
		{ .addr = 0x59637a, .byte = 0x53 },
		{ .addr = 0x59637b, .byte = 0xd3 },
		{ .addr = 0x59637c, .byte = 0x5d },
		{ .addr = 0x59637d, .byte = 0xdd }
};

static const SST_RamByte roll_final_ram_5[] = {
		{ .addr = 0x596378, .byte = 0xeb },
		{ .addr = 0x596379, .byte = 0xbe },
		{ .addr = 0x59637a, .byte = 0x53 },
		{ .addr = 0x59637b, .byte = 0xd3 },
		{ .addr = 0x59637c, .byte = 0x5d },
		{ .addr = 0x59637d, .byte = 0xdd }
};

static const SST_Transaction roll_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5858172, .data = 24029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 32 },
};

static const SST_RamByte roll_initial_ram_6[] = {
		{ .addr = 0xf5e0cc, .byte = 0xe1 },
		{ .addr = 0xf5e0cd, .byte = 0xba },
		{ .addr = 0xf5e0ce, .byte = 0x7c },
		{ .addr = 0xf5e0cf, .byte = 0x30 },
		{ .addr = 0xf5e0d0, .byte = 0xa4 },
		{ .addr = 0xf5e0d1, .byte = 0x44 }
};

static const SST_RamByte roll_final_ram_6[] = {
		{ .addr = 0xf5e0cc, .byte = 0xe1 },
		{ .addr = 0xf5e0cd, .byte = 0xba },
		{ .addr = 0xf5e0ce, .byte = 0x7c },
		{ .addr = 0xf5e0cf, .byte = 0x30 },
		{ .addr = 0xf5e0d0, .byte = 0xa4 },
		{ .addr = 0xf5e0d1, .byte = 0x44 }
};

static const SST_Transaction roll_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16113872, .data = 42052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 104 },
};

static const SST_RamByte roll_initial_ram_7[] = {
		{ .addr = 0x8ffed0, .byte = 0xe9 },
		{ .addr = 0x8ffed1, .byte = 0xbf },
		{ .addr = 0x8ffed2, .byte = 0x31 },
		{ .addr = 0x8ffed3, .byte = 0xf0 },
		{ .addr = 0x8ffed4, .byte = 0xbc },
		{ .addr = 0x8ffed5, .byte = 0x80 }
};

static const SST_RamByte roll_final_ram_7[] = {
		{ .addr = 0x8ffed0, .byte = 0xe9 },
		{ .addr = 0x8ffed1, .byte = 0xbf },
		{ .addr = 0x8ffed2, .byte = 0x31 },
		{ .addr = 0x8ffed3, .byte = 0xf0 },
		{ .addr = 0x8ffed4, .byte = 0xbc },
		{ .addr = 0x8ffed5, .byte = 0x80 }
};

static const SST_Transaction roll_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9436884, .data = 48256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 126 },
};

static const SST_RamByte roll_initial_ram_8[] = {
		{ .addr = 0xab91e6, .byte = 0xef },
		{ .addr = 0xab91e7, .byte = 0x9c },
		{ .addr = 0xab91e8, .byte = 0xa3 },
		{ .addr = 0xab91e9, .byte = 0x67 },
		{ .addr = 0xab91ea, .byte = 0x13 },
		{ .addr = 0xab91eb, .byte = 0x80 }
};

static const SST_RamByte roll_final_ram_8[] = {
		{ .addr = 0xab91e6, .byte = 0xef },
		{ .addr = 0xab91e7, .byte = 0x9c },
		{ .addr = 0xab91e8, .byte = 0xa3 },
		{ .addr = 0xab91e9, .byte = 0x67 },
		{ .addr = 0xab91ea, .byte = 0x13 },
		{ .addr = 0xab91eb, .byte = 0x80 }
};

static const SST_Transaction roll_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11244010, .data = 4992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roll_initial_ram_9[] = {
		{ .addr = 0x40354e, .byte = 0xe9 },
		{ .addr = 0x40354f, .byte = 0xbc },
		{ .addr = 0x403550, .byte = 0xc0 },
		{ .addr = 0x403551, .byte = 0x07 },
		{ .addr = 0x403552, .byte = 0x38 },
		{ .addr = 0x403553, .byte = 0x27 }
};

static const SST_RamByte roll_final_ram_9[] = {
		{ .addr = 0x40354e, .byte = 0xe9 },
		{ .addr = 0x40354f, .byte = 0xbc },
		{ .addr = 0x403550, .byte = 0xc0 },
		{ .addr = 0x403551, .byte = 0x07 },
		{ .addr = 0x403552, .byte = 0x38 },
		{ .addr = 0x403553, .byte = 0x27 }
};

static const SST_Transaction roll_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4207954, .data = 14375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 116 },
};

static const SST_RamByte roll_initial_ram_10[] = {
		{ .addr = 0x672e46, .byte = 0xe1 },
		{ .addr = 0x672e47, .byte = 0xbe },
		{ .addr = 0x672e48, .byte = 0x50 },
		{ .addr = 0x672e49, .byte = 0xc6 },
		{ .addr = 0x672e4a, .byte = 0x3e },
		{ .addr = 0x672e4b, .byte = 0xfb }
};

static const SST_RamByte roll_final_ram_10[] = {
		{ .addr = 0x672e46, .byte = 0xe1 },
		{ .addr = 0x672e47, .byte = 0xbe },
		{ .addr = 0x672e48, .byte = 0x50 },
		{ .addr = 0x672e49, .byte = 0xc6 },
		{ .addr = 0x672e4a, .byte = 0x3e },
		{ .addr = 0x672e4b, .byte = 0xfb }
};

static const SST_Transaction roll_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6762058, .data = 16123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

static const SST_RamByte roll_initial_ram_11[] = {
		{ .addr = 0x3217be, .byte = 0xe7 },
		{ .addr = 0x3217bf, .byte = 0xb8 },
		{ .addr = 0x3217c0, .byte = 0x5e },
		{ .addr = 0x3217c1, .byte = 0x57 },
		{ .addr = 0x3217c2, .byte = 0x9c },
		{ .addr = 0x3217c3, .byte = 0xef }
};

static const SST_RamByte roll_final_ram_11[] = {
		{ .addr = 0x3217be, .byte = 0xe7 },
		{ .addr = 0x3217bf, .byte = 0xb8 },
		{ .addr = 0x3217c0, .byte = 0x5e },
		{ .addr = 0x3217c1, .byte = 0x57 },
		{ .addr = 0x3217c2, .byte = 0x9c },
		{ .addr = 0x3217c3, .byte = 0xef }
};

static const SST_Transaction roll_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3282882, .data = 40175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte roll_initial_ram_12[] = {
		{ .addr = 0x30016c, .byte = 0xef },
		{ .addr = 0x30016d, .byte = 0xbe },
		{ .addr = 0x30016e, .byte = 0xe3 },
		{ .addr = 0x30016f, .byte = 0xa4 },
		{ .addr = 0x300170, .byte = 0x9b },
		{ .addr = 0x300171, .byte = 0xed }
};

static const SST_RamByte roll_final_ram_12[] = {
		{ .addr = 0x30016c, .byte = 0xef },
		{ .addr = 0x30016d, .byte = 0xbe },
		{ .addr = 0x30016e, .byte = 0xe3 },
		{ .addr = 0x30016f, .byte = 0xa4 },
		{ .addr = 0x300170, .byte = 0x9b },
		{ .addr = 0x300171, .byte = 0xed }
};

static const SST_Transaction roll_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3146096, .data = 39917, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

static const SST_RamByte roll_initial_ram_13[] = {
		{ .addr = 0xbe5c52, .byte = 0xe3 },
		{ .addr = 0xbe5c53, .byte = 0x9e },
		{ .addr = 0xbe5c54, .byte = 0x9b },
		{ .addr = 0xbe5c55, .byte = 0x54 },
		{ .addr = 0xbe5c56, .byte = 0xcf },
		{ .addr = 0xbe5c57, .byte = 0xeb }
};

static const SST_RamByte roll_final_ram_13[] = {
		{ .addr = 0xbe5c52, .byte = 0xe3 },
		{ .addr = 0xbe5c53, .byte = 0x9e },
		{ .addr = 0xbe5c54, .byte = 0x9b },
		{ .addr = 0xbe5c55, .byte = 0x54 },
		{ .addr = 0xbe5c56, .byte = 0xcf },
		{ .addr = 0xbe5c57, .byte = 0xeb }
};

static const SST_Transaction roll_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12475478, .data = 53227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roll_initial_ram_14[] = {
		{ .addr = 0x82fd62, .byte = 0xe5 },
		{ .addr = 0x82fd63, .byte = 0xbc },
		{ .addr = 0x82fd64, .byte = 0xd6 },
		{ .addr = 0x82fd65, .byte = 0x12 },
		{ .addr = 0x82fd66, .byte = 0x0e },
		{ .addr = 0x82fd67, .byte = 0x3f }
};

static const SST_RamByte roll_final_ram_14[] = {
		{ .addr = 0x82fd62, .byte = 0xe5 },
		{ .addr = 0x82fd63, .byte = 0xbc },
		{ .addr = 0x82fd64, .byte = 0xd6 },
		{ .addr = 0x82fd65, .byte = 0x12 },
		{ .addr = 0x82fd66, .byte = 0x0e },
		{ .addr = 0x82fd67, .byte = 0x3f }
};

static const SST_Transaction roll_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8584550, .data = 3647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 130 },
};

static const SST_RamByte roll_initial_ram_15[] = {
		{ .addr = 0x070b48, .byte = 0xe7 },
		{ .addr = 0x070b49, .byte = 0xbf },
		{ .addr = 0x070b4a, .byte = 0x4f },
		{ .addr = 0x070b4b, .byte = 0xdd },
		{ .addr = 0x070b4c, .byte = 0x51 },
		{ .addr = 0x070b4d, .byte = 0x3f }
};

static const SST_RamByte roll_final_ram_15[] = {
		{ .addr = 0x070b48, .byte = 0xe7 },
		{ .addr = 0x070b49, .byte = 0xbf },
		{ .addr = 0x070b4a, .byte = 0x4f },
		{ .addr = 0x070b4b, .byte = 0xdd },
		{ .addr = 0x070b4c, .byte = 0x51 },
		{ .addr = 0x070b4d, .byte = 0x3f }
};

static const SST_Transaction roll_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 461644, .data = 20799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte roll_initial_ram_16[] = {
		{ .addr = 0x0b9db2, .byte = 0xe3 },
		{ .addr = 0x0b9db3, .byte = 0xb8 },
		{ .addr = 0x0b9db4, .byte = 0xab },
		{ .addr = 0x0b9db5, .byte = 0x0e },
		{ .addr = 0x0b9db6, .byte = 0xd1 },
		{ .addr = 0x0b9db7, .byte = 0xa3 }
};

static const SST_RamByte roll_final_ram_16[] = {
		{ .addr = 0x0b9db2, .byte = 0xe3 },
		{ .addr = 0x0b9db3, .byte = 0xb8 },
		{ .addr = 0x0b9db4, .byte = 0xab },
		{ .addr = 0x0b9db5, .byte = 0x0e },
		{ .addr = 0x0b9db6, .byte = 0xd1 },
		{ .addr = 0x0b9db7, .byte = 0xa3 }
};

static const SST_Transaction roll_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 761270, .data = 53667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 96 },
};

static const SST_RamByte roll_initial_ram_17[] = {
		{ .addr = 0xf59b6e, .byte = 0xef },
		{ .addr = 0xf59b6f, .byte = 0xbe },
		{ .addr = 0xf59b70, .byte = 0x1f },
		{ .addr = 0xf59b71, .byte = 0xdb },
		{ .addr = 0xf59b72, .byte = 0x6c },
		{ .addr = 0xf59b73, .byte = 0x72 }
};

static const SST_RamByte roll_final_ram_17[] = {
		{ .addr = 0xf59b6e, .byte = 0xef },
		{ .addr = 0xf59b6f, .byte = 0xbe },
		{ .addr = 0xf59b70, .byte = 0x1f },
		{ .addr = 0xf59b71, .byte = 0xdb },
		{ .addr = 0xf59b72, .byte = 0x6c },
		{ .addr = 0xf59b73, .byte = 0x72 }
};

static const SST_Transaction roll_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16096114, .data = 27762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 26 },
};

static const SST_RamByte roll_initial_ram_18[] = {
		{ .addr = 0x214d26, .byte = 0xe5 },
		{ .addr = 0x214d27, .byte = 0x9c },
		{ .addr = 0x214d28, .byte = 0x31 },
		{ .addr = 0x214d29, .byte = 0x1d },
		{ .addr = 0x214d2a, .byte = 0xad },
		{ .addr = 0x214d2b, .byte = 0x39 }
};

static const SST_RamByte roll_final_ram_18[] = {
		{ .addr = 0x214d26, .byte = 0xe5 },
		{ .addr = 0x214d27, .byte = 0x9c },
		{ .addr = 0x214d28, .byte = 0x31 },
		{ .addr = 0x214d29, .byte = 0x1d },
		{ .addr = 0x214d2a, .byte = 0xad },
		{ .addr = 0x214d2b, .byte = 0x39 }
};

static const SST_Transaction roll_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2182442, .data = 44345, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roll_initial_ram_19[] = {
		{ .addr = 0x871efc, .byte = 0xeb },
		{ .addr = 0x871efd, .byte = 0xbb },
		{ .addr = 0x871efe, .byte = 0xea },
		{ .addr = 0x871eff, .byte = 0x8a },
		{ .addr = 0x871f00, .byte = 0x1b },
		{ .addr = 0x871f01, .byte = 0x4f }
};

static const SST_RamByte roll_final_ram_19[] = {
		{ .addr = 0x871efc, .byte = 0xeb },
		{ .addr = 0x871efd, .byte = 0xbb },
		{ .addr = 0x871efe, .byte = 0xea },
		{ .addr = 0x871eff, .byte = 0x8a },
		{ .addr = 0x871f00, .byte = 0x1b },
		{ .addr = 0x871f01, .byte = 0x4f }
};

static const SST_Transaction roll_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8855296, .data = 6991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 26 },
};

static const SST_RamByte roll_initial_ram_20[] = {
		{ .addr = 0x281434, .byte = 0xe1 },
		{ .addr = 0x281435, .byte = 0x9a },
		{ .addr = 0x281436, .byte = 0x70 },
		{ .addr = 0x281437, .byte = 0x83 },
		{ .addr = 0x281438, .byte = 0x5b },
		{ .addr = 0x281439, .byte = 0xe2 }
};

static const SST_RamByte roll_final_ram_20[] = {
		{ .addr = 0x281434, .byte = 0xe1 },
		{ .addr = 0x281435, .byte = 0x9a },
		{ .addr = 0x281436, .byte = 0x70 },
		{ .addr = 0x281437, .byte = 0x83 },
		{ .addr = 0x281438, .byte = 0x5b },
		{ .addr = 0x281439, .byte = 0xe2 }
};

static const SST_Transaction roll_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2626616, .data = 23522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte roll_initial_ram_21[] = {
		{ .addr = 0x6e877a, .byte = 0xe9 },
		{ .addr = 0x6e877b, .byte = 0xba },
		{ .addr = 0x6e877c, .byte = 0xc7 },
		{ .addr = 0x6e877d, .byte = 0xfc },
		{ .addr = 0x6e877e, .byte = 0x6a },
		{ .addr = 0x6e877f, .byte = 0x73 }
};

static const SST_RamByte roll_final_ram_21[] = {
		{ .addr = 0x6e877a, .byte = 0xe9 },
		{ .addr = 0x6e877b, .byte = 0xba },
		{ .addr = 0x6e877c, .byte = 0xc7 },
		{ .addr = 0x6e877d, .byte = 0xfc },
		{ .addr = 0x6e877e, .byte = 0x6a },
		{ .addr = 0x6e877f, .byte = 0x73 }
};

static const SST_Transaction roll_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7243646, .data = 27251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 120 },
};

static const SST_RamByte roll_initial_ram_22[] = {
		{ .addr = 0x0e178a, .byte = 0xe9 },
		{ .addr = 0x0e178b, .byte = 0xbd },
		{ .addr = 0x0e178c, .byte = 0x42 },
		{ .addr = 0x0e178d, .byte = 0xe3 },
		{ .addr = 0x0e178e, .byte = 0xae },
		{ .addr = 0x0e178f, .byte = 0xf8 }
};

static const SST_RamByte roll_final_ram_22[] = {
		{ .addr = 0x0e178a, .byte = 0xe9 },
		{ .addr = 0x0e178b, .byte = 0xbd },
		{ .addr = 0x0e178c, .byte = 0x42 },
		{ .addr = 0x0e178d, .byte = 0xe3 },
		{ .addr = 0x0e178e, .byte = 0xae },
		{ .addr = 0x0e178f, .byte = 0xf8 }
};

static const SST_Transaction roll_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 923534, .data = 44792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 76 },
};

static const SST_RamByte roll_initial_ram_23[] = {
		{ .addr = 0x719e1e, .byte = 0xeb },
		{ .addr = 0x719e1f, .byte = 0xb9 },
		{ .addr = 0x719e20, .byte = 0x62 },
		{ .addr = 0x719e21, .byte = 0xe0 },
		{ .addr = 0x719e22, .byte = 0xa6 },
		{ .addr = 0x719e23, .byte = 0x90 }
};

static const SST_RamByte roll_final_ram_23[] = {
		{ .addr = 0x719e1e, .byte = 0xeb },
		{ .addr = 0x719e1f, .byte = 0xb9 },
		{ .addr = 0x719e20, .byte = 0x62 },
		{ .addr = 0x719e21, .byte = 0xe0 },
		{ .addr = 0x719e22, .byte = 0xa6 },
		{ .addr = 0x719e23, .byte = 0x90 }
};

static const SST_Transaction roll_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7446050, .data = 42640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 58 },
};

static const SST_RamByte roll_initial_ram_24[] = {
		{ .addr = 0x59aeae, .byte = 0xe1 },
		{ .addr = 0x59aeaf, .byte = 0xbd },
		{ .addr = 0x59aeb0, .byte = 0xdc },
		{ .addr = 0x59aeb1, .byte = 0x52 },
		{ .addr = 0x59aeb2, .byte = 0x09 },
		{ .addr = 0x59aeb3, .byte = 0x20 }
};

static const SST_RamByte roll_final_ram_24[] = {
		{ .addr = 0x59aeae, .byte = 0xe1 },
		{ .addr = 0x59aeaf, .byte = 0xbd },
		{ .addr = 0x59aeb0, .byte = 0xdc },
		{ .addr = 0x59aeb1, .byte = 0x52 },
		{ .addr = 0x59aeb2, .byte = 0x09 },
		{ .addr = 0x59aeb3, .byte = 0x20 }
};

static const SST_Transaction roll_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5877426, .data = 2336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

static const SST_RamByte roll_initial_ram_25[] = {
		{ .addr = 0x1dcffa, .byte = 0xe5 },
		{ .addr = 0x1dcffb, .byte = 0xb9 },
		{ .addr = 0x1dcffc, .byte = 0x3a },
		{ .addr = 0x1dcffd, .byte = 0xa1 },
		{ .addr = 0x1dcffe, .byte = 0x7f },
		{ .addr = 0x1dcfff, .byte = 0x24 }
};

static const SST_RamByte roll_final_ram_25[] = {
		{ .addr = 0x1dcffa, .byte = 0xe5 },
		{ .addr = 0x1dcffb, .byte = 0xb9 },
		{ .addr = 0x1dcffc, .byte = 0x3a },
		{ .addr = 0x1dcffd, .byte = 0xa1 },
		{ .addr = 0x1dcffe, .byte = 0x7f },
		{ .addr = 0x1dcfff, .byte = 0x24 }
};

static const SST_Transaction roll_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1953790, .data = 32548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 30 },
};

static const SST_RamByte roll_initial_ram_26[] = {
		{ .addr = 0x4b0dbc, .byte = 0xe1 },
		{ .addr = 0x4b0dbd, .byte = 0x9a },
		{ .addr = 0x4b0dbe, .byte = 0x2f },
		{ .addr = 0x4b0dbf, .byte = 0x50 },
		{ .addr = 0x4b0dc0, .byte = 0x54 },
		{ .addr = 0x4b0dc1, .byte = 0x44 }
};

static const SST_RamByte roll_final_ram_26[] = {
		{ .addr = 0x4b0dbc, .byte = 0xe1 },
		{ .addr = 0x4b0dbd, .byte = 0x9a },
		{ .addr = 0x4b0dbe, .byte = 0x2f },
		{ .addr = 0x4b0dbf, .byte = 0x50 },
		{ .addr = 0x4b0dc0, .byte = 0x54 },
		{ .addr = 0x4b0dc1, .byte = 0x44 }
};

static const SST_Transaction roll_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4918720, .data = 21572, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte roll_initial_ram_27[] = {
		{ .addr = 0x6bd73a, .byte = 0xed },
		{ .addr = 0x6bd73b, .byte = 0xbc },
		{ .addr = 0x6bd73c, .byte = 0x97 },
		{ .addr = 0x6bd73d, .byte = 0x31 },
		{ .addr = 0x6bd73e, .byte = 0xc0 },
		{ .addr = 0x6bd73f, .byte = 0x7f }
};

static const SST_RamByte roll_final_ram_27[] = {
		{ .addr = 0x6bd73a, .byte = 0xed },
		{ .addr = 0x6bd73b, .byte = 0xbc },
		{ .addr = 0x6bd73c, .byte = 0x97 },
		{ .addr = 0x6bd73d, .byte = 0x31 },
		{ .addr = 0x6bd73e, .byte = 0xc0 },
		{ .addr = 0x6bd73f, .byte = 0x7f }
};

static const SST_Transaction roll_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7067454, .data = 49279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 106 },
};

static const SST_RamByte roll_initial_ram_28[] = {
		{ .addr = 0xb213b2, .byte = 0xed },
		{ .addr = 0xb213b3, .byte = 0x99 },
		{ .addr = 0xb213b4, .byte = 0x03 },
		{ .addr = 0xb213b5, .byte = 0xa9 },
		{ .addr = 0xb213b6, .byte = 0xdf },
		{ .addr = 0xb213b7, .byte = 0xc9 }
};

static const SST_RamByte roll_final_ram_28[] = {
		{ .addr = 0xb213b2, .byte = 0xed },
		{ .addr = 0xb213b3, .byte = 0x99 },
		{ .addr = 0xb213b4, .byte = 0x03 },
		{ .addr = 0xb213b5, .byte = 0xa9 },
		{ .addr = 0xb213b6, .byte = 0xdf },
		{ .addr = 0xb213b7, .byte = 0xc9 }
};

static const SST_Transaction roll_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11670454, .data = 57289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roll_initial_ram_29[] = {
		{ .addr = 0x0db41a, .byte = 0xe3 },
		{ .addr = 0x0db41b, .byte = 0xba },
		{ .addr = 0x0db41c, .byte = 0x46 },
		{ .addr = 0x0db41d, .byte = 0xcb },
		{ .addr = 0x0db41e, .byte = 0x18 },
		{ .addr = 0x0db41f, .byte = 0x1d }
};

static const SST_RamByte roll_final_ram_29[] = {
		{ .addr = 0x0db41a, .byte = 0xe3 },
		{ .addr = 0x0db41b, .byte = 0xba },
		{ .addr = 0x0db41c, .byte = 0x46 },
		{ .addr = 0x0db41d, .byte = 0xcb },
		{ .addr = 0x0db41e, .byte = 0x18 },
		{ .addr = 0x0db41f, .byte = 0x1d }
};

static const SST_Transaction roll_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 898078, .data = 6173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 34 },
};

static const SST_RamByte roll_initial_ram_30[] = {
		{ .addr = 0x19f134, .byte = 0xeb },
		{ .addr = 0x19f135, .byte = 0xbb },
		{ .addr = 0x19f136, .byte = 0x28 },
		{ .addr = 0x19f137, .byte = 0x25 },
		{ .addr = 0x19f138, .byte = 0x93 },
		{ .addr = 0x19f139, .byte = 0x39 }
};

static const SST_RamByte roll_final_ram_30[] = {
		{ .addr = 0x19f134, .byte = 0xeb },
		{ .addr = 0x19f135, .byte = 0xbb },
		{ .addr = 0x19f136, .byte = 0x28 },
		{ .addr = 0x19f137, .byte = 0x25 },
		{ .addr = 0x19f138, .byte = 0x93 },
		{ .addr = 0x19f139, .byte = 0x39 }
};

static const SST_Transaction roll_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1700152, .data = 37689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 90 },
};

static const SST_RamByte roll_initial_ram_31[] = {
		{ .addr = 0x640616, .byte = 0xed },
		{ .addr = 0x640617, .byte = 0x9d },
		{ .addr = 0x640618, .byte = 0x4b },
		{ .addr = 0x640619, .byte = 0xdc },
		{ .addr = 0x64061a, .byte = 0x94 },
		{ .addr = 0x64061b, .byte = 0x7b }
};

static const SST_RamByte roll_final_ram_31[] = {
		{ .addr = 0x640616, .byte = 0xed },
		{ .addr = 0x640617, .byte = 0x9d },
		{ .addr = 0x640618, .byte = 0x4b },
		{ .addr = 0x640619, .byte = 0xdc },
		{ .addr = 0x64061a, .byte = 0x94 },
		{ .addr = 0x64061b, .byte = 0x7b }
};

static const SST_Transaction roll_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6555162, .data = 38011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_TestCase roll[] = {
	{
		.name = "000 ROL.l D7, D0 efb8",
		.initial = {
			.regs = {
				295350685, 1290224561, 202247791, 2997091738, 2379467381, 951256509, 3876128624, 3840337621, 1396228345, 1200069987, 3443579832, 2560296284, 2988992071, 2661556390, 1342203178, 10556802, 53978, 42514, 13780572
			},
			.prefetch0 = 61368,
			.prefetch1 = 63774,
			.ram = roll_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				866267990, 1290224561, 202247791, 2997091738, 2379467381, 951256509, 3876128624, 3840337621, 1396228345, 1200069987, 3443579832, 2560296284, 2988992071, 2661556390, 1342203178, 10556802, 53978, 42512, 13780574
			},
			.prefetch0 = 63774,
			.prefetch1 = 63639,
			.ram = roll_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roll_transactions_0,
		.transactions_len = 2,
		.lenght = 50,
	},
	{
		.name = "001 ROL.l D3, D5 e7bd",
		.initial = {
			.regs = {
				4191420782, 467690294, 3000930876, 714533594, 3912049031, 3801835082, 2147659231, 4018753994, 1517124845, 1829728849, 628612816, 1944057153, 1583612400, 558730882, 920210453, 12956534, 10720096, 8978, 12669390
			},
			.prefetch0 = 59325,
			.prefetch1 = 26021,
			.ram = roll_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4191420782, 467690294, 3000930876, 714533594, 3912049031, 730492313, 2147659231, 4018753994, 1517124845, 1829728849, 628612816, 1944057153, 1583612400, 558730882, 920210453, 12956534, 10720096, 8977, 12669392
			},
			.prefetch0 = 26021,
			.prefetch1 = 12180,
			.ram = roll_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roll_transactions_1,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "002 ROL.l 6, D1 ed99",
		.initial = {
			.regs = {
				2465695027, 3836016676, 4061101102, 1314018526, 1879129557, 2818659402, 2391855978, 3178244369, 2886940224, 1235942703, 2490663546, 783105591, 2277520201, 1292156298, 974282359, 3072694, 11103294, 15, 7808898
			},
			.prefetch0 = 60825,
			.prefetch1 = 1794,
			.ram = roll_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2465695027, 691931449, 4061101102, 1314018526, 1879129557, 2818659402, 2391855978, 3178244369, 2886940224, 1235942703, 2490663546, 783105591, 2277520201, 1292156298, 974282359, 3072694, 11103294, 1, 7808900
			},
			.prefetch0 = 1794,
			.prefetch1 = 59349,
			.ram = roll_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roll_transactions_2,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "003 ROL.l 3, D4 e79c",
		.initial = {
			.regs = {
				1729338366, 3291294630, 3285150122, 3170156585, 3166847176, 1365637062, 1700546757, 16094007, 1001714134, 2850305196, 3510402705, 3747923842, 1428615468, 2003754457, 1385331774, 15673006, 13883356, 40965, 12660104
			},
			.prefetch0 = 59292,
			.prefetch1 = 63994,
			.ram = roll_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1729338366, 3291294630, 3285150122, 3170156585, 3859940933, 1365637062, 1700546757, 16094007, 1001714134, 2850305196, 3510402705, 3747923842, 1428615468, 2003754457, 1385331774, 15673006, 13883356, 40969, 12660106
			},
			.prefetch0 = 63994,
			.prefetch1 = 43116,
			.ram = roll_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roll_transactions_3,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "004 ROL.l D3, D3 e7bb",
		.initial = {
			.regs = {
				4121722702, 471577710, 3472743991, 3044390910, 2456749908, 2546207156, 3279115450, 2670631909, 2040181274, 1834697483, 1305931998, 1429628233, 2910364686, 2880732449, 2872710657, 12833328, 3366376, 1046, 15286166
			},
			.prefetch0 = 59323,
			.prefetch1 = 29442,
			.ram = roll_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4121722702, 471577710, 3472743991, 2908581375, 2456749908, 2546207156, 3279115450, 2670631909, 2040181274, 1834697483, 1305931998, 1429628233, 2910364686, 2880732449, 2872710657, 12833328, 3366376, 1049, 15286168
			},
			.prefetch0 = 29442,
			.prefetch1 = 27732,
			.ram = roll_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roll_transactions_4,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "005 ROL.l D5, D6 ebbe",
		.initial = {
			.regs = {
				3464386487, 2462281154, 941885528, 208847516, 3733686386, 3750681294, 1303121584, 1066306191, 4125439734, 1450622064, 1127560554, 3779618925, 1983365463, 1148266265, 228467436, 9026098, 16101912, 41731, 5858172
			},
			.prefetch0 = 60350,
			.prefetch1 = 21459,
			.ram = roll_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3464386487, 2462281154, 941885528, 208847516, 3733686386, 3750681294, 61608811, 1066306191, 4125439734, 1450622064, 1127560554, 3779618925, 1983365463, 1148266265, 228467436, 9026098, 16101912, 41729, 5858174
			},
			.prefetch0 = 21459,
			.prefetch1 = 24029,
			.ram = roll_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roll_transactions_5,
		.transactions_len = 2,
		.lenght = 36,
	},
	{
		.name = "006 ROL.l D0, D2 e1ba",
		.initial = {
			.regs = {
				282465714, 1132024332, 978433021, 4084678799, 3391181420, 554582968, 3453339633, 488100068, 2863376067, 3078349844, 2941325679, 3811198210, 3119024200, 2046584786, 4116454439, 5261584, 7744348, 40977, 16113872
			},
			.prefetch0 = 57786,
			.prefetch1 = 31792,
			.ram = roll_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				282465714, 1132024332, 3488934214, 4084678799, 3391181420, 554582968, 3453339633, 488100068, 2863376067, 3078349844, 2941325679, 3811198210, 3119024200, 2046584786, 4116454439, 5261584, 7744348, 40984, 16113874
			},
			.prefetch0 = 31792,
			.prefetch1 = 42052,
			.ram = roll_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roll_transactions_6,
		.transactions_len = 2,
		.lenght = 108,
	},
	{
		.name = "007 ROL.l D4, D7 e9bf",
		.initial = {
			.regs = {
				908113580, 3231028916, 4072844342, 2723275613, 2948273277, 1694377669, 3568093815, 3542188429, 1626233546, 1599744932, 3892431474, 3946845151, 957711763, 2960182802, 2286965650, 7489554, 7023792, 42765, 9436884
			},
			.prefetch0 = 59839,
			.prefetch1 = 12784,
			.ram = roll_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				908113580, 3231028916, 4072844342, 2723275613, 2948273277, 1694377669, 3568093815, 3127128113, 1626233546, 1599744932, 3892431474, 3946845151, 957711763, 2960182802, 2286965650, 7489554, 7023792, 42761, 9436886
			},
			.prefetch0 = 12784,
			.prefetch1 = 48256,
			.ram = roll_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roll_transactions_7,
		.transactions_len = 2,
		.lenght = 130,
	},
	{
		.name = "008 ROL.l 7, D4 ef9c",
		.initial = {
			.regs = {
				70439537, 1238033683, 1033293375, 3947156578, 2058119191, 195231978, 1922670264, 3688514406, 127733463, 1918971474, 826859861, 25147846, 3440369848, 266135461, 957885266, 4297170, 14339188, 34048, 11244010
			},
			.prefetch0 = 61340,
			.prefetch1 = 41831,
			.ram = roll_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				70439537, 1238033683, 1033293375, 3947156578, 1446251453, 195231978, 1922670264, 3688514406, 127733463, 1918971474, 826859861, 25147846, 3440369848, 266135461, 957885266, 4297170, 14339188, 34049, 11244012
			},
			.prefetch0 = 41831,
			.prefetch1 = 4992,
			.ram = roll_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roll_transactions_8,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "009 ROL.l D4, D4 e9bc",
		.initial = {
			.regs = {
				3002821388, 3714640314, 4022590035, 2276760286, 4009456248, 1923616196, 512881701, 2859740730, 2972537502, 820100265, 1741918593, 4196198791, 236692755, 1147845049, 918863724, 8471554, 14816388, 8734, 4207954
			},
			.prefetch0 = 59836,
			.prefetch1 = 49159,
			.ram = roll_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3002821388, 3714640314, 4022590035, 2276760286, 2028927858, 1923616196, 512881701, 2859740730, 2972537502, 820100265, 1741918593, 4196198791, 236692755, 1147845049, 918863724, 8471554, 14816388, 8720, 4207956
			},
			.prefetch0 = 49159,
			.prefetch1 = 14375,
			.ram = roll_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roll_transactions_9,
		.transactions_len = 2,
		.lenght = 120,
	},
	{
		.name = "010 ROL.l D0, D6 e1be",
		.initial = {
			.regs = {
				2498485898, 1465904394, 1539137888, 55829004, 2942920827, 3639432051, 2314912028, 1968230052, 788407848, 863764333, 2714018208, 1375361062, 177791401, 3358994718, 1301116930, 12872368, 16248064, 40988, 6762058
			},
			.prefetch0 = 57790,
			.prefetch1 = 20678,
			.ram = roll_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2498485898, 1465904394, 1539137888, 55829004, 2942920827, 3639432051, 3942937127, 1968230052, 788407848, 863764333, 2714018208, 1375361062, 177791401, 3358994718, 1301116930, 12872368, 16248064, 40985, 6762060
			},
			.prefetch0 = 20678,
			.prefetch1 = 16123,
			.ram = roll_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roll_transactions_10,
		.transactions_len = 2,
		.lenght = 28,
	},
	{
		.name = "011 ROL.l D3, D0 e7b8",
		.initial = {
			.regs = {
				503260847, 2887775067, 3423655194, 4085051695, 1006625195, 182015893, 3028402569, 1122732660, 1744042062, 586890821, 4242099867, 1196262118, 3641760633, 394498986, 272241245, 4373608, 12544824, 9733, 3282882
			},
			.prefetch0 = 59320,
			.prefetch1 = 24151,
			.ram = roll_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2471988991, 2887775067, 3423655194, 4085051695, 1006625195, 182015893, 3028402569, 1122732660, 1744042062, 586890821, 4242099867, 1196262118, 3641760633, 394498986, 272241245, 4373608, 12544824, 9737, 3282884
			},
			.prefetch0 = 24151,
			.prefetch1 = 40175,
			.ram = roll_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roll_transactions_11,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "012 ROL.l D7, D6 efbe",
		.initial = {
			.regs = {
				933936879, 2036039113, 3003097354, 1650879724, 2611898809, 2697604964, 1665860413, 518583401, 1957533232, 390529036, 2575731107, 915381698, 3049301113, 2434261622, 2463980365, 15465284, 3530014, 1819, 3146096
			},
			.prefetch0 = 61374,
			.prefetch1 = 58276,
			.ram = roll_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				933936879, 2036039113, 3003097354, 1650879724, 2611898809, 2697604964, 2517007046, 518583401, 1957533232, 390529036, 2575731107, 915381698, 3049301113, 2434261622, 2463980365, 15465284, 3530014, 1816, 3146098
			},
			.prefetch0 = 58276,
			.prefetch1 = 39917,
			.ram = roll_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roll_transactions_12,
		.transactions_len = 2,
		.lenght = 90,
	},
	{
		.name = "013 ROL.l 1, D6 e39e",
		.initial = {
			.regs = {
				828697475, 2545267383, 2615509875, 3367764314, 2140999248, 4058287349, 2676555036, 1188951419, 1319321355, 4092309822, 3822468406, 70585897, 2898194611, 3209812876, 738457250, 7208050, 13380702, 34064, 12475478
			},
			.prefetch0 = 58270,
			.prefetch1 = 39764,
			.ram = roll_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				828697475, 2545267383, 2615509875, 3367764314, 2140999248, 4058287349, 1058142777, 1188951419, 1319321355, 4092309822, 3822468406, 70585897, 2898194611, 3209812876, 738457250, 7208050, 13380702, 34065, 12475480
			},
			.prefetch0 = 39764,
			.prefetch1 = 53227,
			.ram = roll_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roll_transactions_13,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "014 ROL.l D2, D4 e5bc",
		.initial = {
			.regs = {
				3639219334, 2027538987, 3239924991, 2268708973, 1407264629, 687514056, 147020609, 3447822131, 1760647528, 355927373, 2522374212, 362937463, 1483144792, 3153932662, 2900449258, 12191218, 10354746, 42508, 8584550
			},
			.prefetch0 = 58812,
			.prefetch1 = 54802,
			.ram = roll_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3639219334, 2027538987, 3239924991, 2268708973, 2851115962, 687514056, 147020609, 3447822131, 1760647528, 355927373, 2522374212, 362937463, 1483144792, 3153932662, 2900449258, 12191218, 10354746, 42504, 8584552
			},
			.prefetch0 = 54802,
			.prefetch1 = 3647,
			.ram = roll_final_ram_14,
			.ram_len = 6,
		},
		.transactions = roll_transactions_14,
		.transactions_len = 2,
		.lenght = 134,
	},
	{
		.name = "015 ROL.l D3, D7 e7bf",
		.initial = {
			.regs = {
				3952924461, 2836803344, 3384847454, 3698341886, 4135972188, 2908829728, 1547801108, 2286466097, 3414525726, 3551047203, 3117152574, 3813688348, 4209137608, 1717651956, 3501570498, 4494402, 8258534, 42015, 461644
			},
			.prefetch0 = 59327,
			.prefetch1 = 20445,
			.ram = roll_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3952924461, 2836803344, 3384847454, 3698341886, 4135972188, 2908829728, 1547801108, 1645358348, 3414525726, 3551047203, 3117152574, 3813688348, 4209137608, 1717651956, 3501570498, 4494402, 8258534, 42000, 461646
			},
			.prefetch0 = 20445,
			.prefetch1 = 20799,
			.ram = roll_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roll_transactions_15,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "016 ROL.l D1, D0 e3b8",
		.initial = {
			.regs = {
				56871467, 2127641454, 1369253566, 2483967767, 1853150305, 1778879337, 2197374747, 3750041392, 3095630160, 1923890647, 3182499115, 4080341541, 3176343168, 690432118, 4187652685, 829578, 269330, 10009, 761270
			},
			.prefetch0 = 58296,
			.prefetch1 = 43790,
			.ram = roll_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4069179608, 2127641454, 1369253566, 2483967767, 1853150305, 1778879337, 2197374747, 3750041392, 3095630160, 1923890647, 3182499115, 4080341541, 3176343168, 690432118, 4187652685, 829578, 269330, 10008, 761272
			},
			.prefetch0 = 43790,
			.prefetch1 = 53667,
			.ram = roll_final_ram_16,
			.ram_len = 6,
		},
		.transactions = roll_transactions_16,
		.transactions_len = 2,
		.lenght = 100,
	},
	{
		.name = "017 ROL.l D7, D6 efbe",
		.initial = {
			.regs = {
				2180345033, 531780166, 3210560622, 3154147291, 3124920179, 625160030, 687703999, 2584711499, 3158010131, 1394531090, 135241665, 2956673065, 1850929953, 470759564, 1258936422, 3111506, 2255182, 8200, 16096114
			},
			.prefetch0 = 61374,
			.prefetch1 = 8155,
			.ram = roll_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2180345033, 531780166, 3210560622, 3154147291, 3124920179, 625160030, 3963484487, 2584711499, 3158010131, 1394531090, 135241665, 2956673065, 1850929953, 470759564, 1258936422, 3111506, 2255182, 8201, 16096116
			},
			.prefetch0 = 8155,
			.prefetch1 = 27762,
			.ram = roll_final_ram_17,
			.ram_len = 6,
		},
		.transactions = roll_transactions_17,
		.transactions_len = 2,
		.lenght = 30,
	},
	{
		.name = "018 ROL.l 2, D4 e59c",
		.initial = {
			.regs = {
				3449980721, 2973403898, 1356434425, 4223797464, 1725419517, 2727318356, 3962119780, 1396395605, 1944110195, 3989065519, 3839704368, 3440059875, 4010278080, 1961687608, 3417605489, 10350438, 5061584, 515, 2182442
			},
			.prefetch0 = 58780,
			.prefetch1 = 12573,
			.ram = roll_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3449980721, 2973403898, 1356434425, 4223797464, 2606710773, 2727318356, 3962119780, 1396395605, 1944110195, 3989065519, 3839704368, 3440059875, 4010278080, 1961687608, 3417605489, 10350438, 5061584, 521, 2182444
			},
			.prefetch0 = 12573,
			.prefetch1 = 44345,
			.ram = roll_final_ram_18,
			.ram_len = 6,
		},
		.transactions = roll_transactions_18,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "019 ROL.l D5, D3 ebbb",
		.initial = {
			.regs = {
				2123517392, 1522805958, 2706917450, 4020657647, 1274397941, 4078996427, 3405603985, 674939657, 2286957999, 1804288033, 3027213893, 1479330609, 915223163, 3754499340, 3453976310, 7579362, 4738674, 33046, 8855296
			},
			.prefetch0 = 60347,
			.prefetch1 = 60042,
			.ram = roll_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2123517392, 1522805958, 2706917450, 854556541, 1274397941, 4078996427, 3405603985, 674939657, 2286957999, 1804288033, 3027213893, 1479330609, 915223163, 3754499340, 3453976310, 7579362, 4738674, 33041, 8855298
			},
			.prefetch0 = 60042,
			.prefetch1 = 6991,
			.ram = roll_final_ram_19,
			.ram_len = 6,
		},
		.transactions = roll_transactions_19,
		.transactions_len = 2,
		.lenght = 30,
	},
	{
		.name = "020 ROL.l 8, D2 e19a",
		.initial = {
			.regs = {
				2681494597, 2481937446, 1855674251, 1430395573, 12530129, 608850109, 1154262558, 2882910445, 2507832203, 829158223, 3945195997, 327959113, 863675523, 512260605, 4014408962, 5210048, 1397206, 8218, 2626616
			},
			.prefetch0 = 57754,
			.prefetch1 = 28803,
			.ram = roll_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2681494597, 2481937446, 2606205806, 1430395573, 12530129, 608850109, 1154262558, 2882910445, 2507832203, 829158223, 3945195997, 327959113, 863675523, 512260605, 4014408962, 5210048, 1397206, 8216, 2626618
			},
			.prefetch0 = 28803,
			.prefetch1 = 23522,
			.ram = roll_final_ram_20,
			.ram_len = 6,
		},
		.transactions = roll_transactions_20,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "021 ROL.l D4, D2 e9ba",
		.initial = {
			.regs = {
				2139570906, 998959613, 3246429274, 3684281452, 3534603450, 1947072584, 3336282989, 247257971, 2089684117, 1344322123, 4230897265, 4130742817, 2878776749, 1851138600, 3430514703, 13964646, 7025606, 1561, 7243646
			},
			.prefetch0 = 59834,
			.prefetch1 = 51196,
			.ram = roll_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2139570906, 998959613, 1795555921, 3684281452, 3534603450, 1947072584, 3336282989, 247257971, 2089684117, 1344322123, 4230897265, 4130742817, 2878776749, 1851138600, 3430514703, 13964646, 7025606, 1553, 7243648
			},
			.prefetch0 = 51196,
			.prefetch1 = 27251,
			.ram = roll_final_ram_21,
			.ram_len = 6,
		},
		.transactions = roll_transactions_21,
		.transactions_len = 2,
		.lenght = 124,
	},
	{
		.name = "022 ROL.l D4, D5 e9bd",
		.initial = {
			.regs = {
				3496342890, 2694396427, 2855138026, 2940485473, 481679396, 2629149540, 1056154977, 2875537836, 3976804651, 86677441, 806903000, 2497138566, 4029508998, 2869519754, 307189003, 7202500, 4401734, 8193, 923534
			},
			.prefetch0 = 59837,
			.prefetch1 = 17123,
			.ram = roll_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3496342890, 2694396427, 2855138026, 2940485473, 481679396, 3411686985, 1056154977, 2875537836, 3976804651, 86677441, 806903000, 2497138566, 4029508998, 2869519754, 307189003, 7202500, 4401734, 8201, 923536
			},
			.prefetch0 = 17123,
			.prefetch1 = 44792,
			.ram = roll_final_ram_22,
			.ram_len = 6,
		},
		.transactions = roll_transactions_22,
		.transactions_len = 2,
		.lenght = 80,
	},
	{
		.name = "023 ROL.l D5, D1 ebb9",
		.initial = {
			.regs = {
				2411732119, 240710811, 2685505708, 2911493360, 427784100, 1639264603, 3142460461, 1353359187, 1235559645, 1438530544, 2053877467, 3153300429, 306072401, 3996152297, 2911889455, 7600090, 15621172, 34574, 7446050
			},
			.prefetch0 = 60345,
			.prefetch1 = 25312,
			.ram = roll_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2411732119, 3631400868, 2685505708, 2911493360, 427784100, 1639264603, 3142460461, 1353359187, 1235559645, 1438530544, 2053877467, 3153300429, 306072401, 3996152297, 2911889455, 7600090, 15621172, 34568, 7446052
			},
			.prefetch0 = 25312,
			.prefetch1 = 42640,
			.ram = roll_final_ram_23,
			.ram_len = 6,
		},
		.transactions = roll_transactions_23,
		.transactions_len = 2,
		.lenght = 62,
	},
	{
		.name = "024 ROL.l D0, D5 e1bd",
		.initial = {
			.regs = {
				785169226, 3050511361, 3180169173, 1536520024, 2451040841, 4046287400, 4197211102, 4143712886, 1891192488, 1515558635, 2669560784, 1677464783, 3044715923, 571580437, 3244737738, 12393184, 2883564, 41984, 5877426
			},
			.prefetch0 = 57789,
			.prefetch1 = 56402,
			.ram = roll_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				785169226, 3050511361, 3180169173, 1536520024, 2451040841, 3049825220, 4197211102, 4143712886, 1891192488, 1515558635, 2669560784, 1677464783, 3044715923, 571580437, 3244737738, 12393184, 2883564, 41992, 5877428
			},
			.prefetch0 = 56402,
			.prefetch1 = 2336,
			.ram = roll_final_ram_24,
			.ram_len = 6,
		},
		.transactions = roll_transactions_24,
		.transactions_len = 2,
		.lenght = 28,
	},
	{
		.name = "025 ROL.l D2, D1 e5b9",
		.initial = {
			.regs = {
				1161413692, 2102132239, 2898882509, 1504941883, 4079900687, 3604283975, 2728001139, 1462419408, 1798212488, 2502665500, 2220222214, 2610062133, 837314658, 1430217267, 2763919201, 12516830, 2255606, 41752, 1953790
			},
			.prefetch0 = 58809,
			.prefetch1 = 15009,
			.ram = roll_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1161413692, 2143416233, 2898882509, 1504941883, 4079900687, 3604283975, 2728001139, 1462419408, 1798212488, 2502665500, 2220222214, 2610062133, 837314658, 1430217267, 2763919201, 12516830, 2255606, 41745, 1953792
			},
			.prefetch0 = 15009,
			.prefetch1 = 32548,
			.ram = roll_final_ram_25,
			.ram_len = 6,
		},
		.transactions = roll_transactions_25,
		.transactions_len = 2,
		.lenght = 34,
	},
	{
		.name = "026 ROL.l 8, D2 e19a",
		.initial = {
			.regs = {
				3630832905, 242313782, 619089347, 544157382, 953225941, 3617987309, 2664274253, 2758973965, 1706906811, 876119604, 4086570174, 1569875438, 3175247916, 3609018052, 934221236, 12882064, 6257100, 8456, 4918720
			},
			.prefetch0 = 57754,
			.prefetch1 = 12112,
			.ram = roll_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3630832905, 242313782, 3868050212, 544157382, 953225941, 3617987309, 2664274253, 2758973965, 1706906811, 876119604, 4086570174, 1569875438, 3175247916, 3609018052, 934221236, 12882064, 6257100, 8456, 4918722
			},
			.prefetch0 = 12112,
			.prefetch1 = 21572,
			.ram = roll_final_ram_26,
			.ram_len = 6,
		},
		.transactions = roll_transactions_26,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "027 ROL.l D6, D4 edbc",
		.initial = {
			.regs = {
				2688269098, 1938096524, 2247002706, 667900747, 4215002315, 802157941, 751478387, 2861500701, 1922035447, 118380662, 3825502238, 4150180010, 806964816, 26927787, 3243458516, 16014816, 7869760, 42752, 7067454
			},
			.prefetch0 = 60860,
			.prefetch1 = 38705,
			.ram = roll_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2688269098, 1938096524, 2247002706, 667900747, 2791299550, 802157941, 751478387, 2861500701, 1922035447, 118380662, 3825502238, 4150180010, 806964816, 26927787, 3243458516, 16014816, 7869760, 42760, 7067456
			},
			.prefetch0 = 38705,
			.prefetch1 = 49279,
			.ram = roll_final_ram_27,
			.ram_len = 6,
		},
		.transactions = roll_transactions_27,
		.transactions_len = 2,
		.lenght = 110,
	},
	{
		.name = "028 ROL.l 6, D1 ed99",
		.initial = {
			.regs = {
				1898115550, 1863204100, 2312964411, 1985711480, 2721774086, 2315690464, 339439552, 28706653, 3878938515, 3286154379, 686510788, 3523689611, 2981375979, 3096723657, 3725590006, 3336800, 10876860, 259, 11670454
			},
			.prefetch0 = 60825,
			.prefetch1 = 937,
			.ram = roll_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1898115550, 3280945435, 2312964411, 1985711480, 2721774086, 2315690464, 339439552, 28706653, 3878938515, 3286154379, 686510788, 3523689611, 2981375979, 3096723657, 3725590006, 3336800, 10876860, 265, 11670456
			},
			.prefetch0 = 937,
			.prefetch1 = 57289,
			.ram = roll_final_ram_28,
			.ram_len = 6,
		},
		.transactions = roll_transactions_28,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "029 ROL.l D1, D2 e3ba",
		.initial = {
			.regs = {
				3346649651, 3488163855, 4216730845, 749751921, 3483138778, 2678661307, 3482391101, 3046224719, 3163833730, 866866691, 2417394302, 135990769, 1297551664, 375362277, 1684136853, 10335384, 15435156, 34574, 898078
			},
			.prefetch0 = 58298,
			.prefetch1 = 18123,
			.ram = roll_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3346649651, 3488163855, 443481515, 749751921, 3483138778, 2678661307, 3482391101, 3046224719, 3163833730, 866866691, 2417394302, 135990769, 1297551664, 375362277, 1684136853, 10335384, 15435156, 34561, 898080
			},
			.prefetch0 = 18123,
			.prefetch1 = 6173,
			.ram = roll_final_ram_29,
			.ram_len = 6,
		},
		.transactions = roll_transactions_29,
		.transactions_len = 2,
		.lenght = 38,
	},
	{
		.name = "030 ROL.l D5, D3 ebbb",
		.initial = {
			.regs = {
				563196491, 2858642096, 2161283396, 1830275465, 1442580004, 2190559915, 3062630192, 1356304702, 3487420734, 3123930832, 1871342128, 325462426, 1363074795, 3918111857, 1413242450, 4705494, 11390928, 41246, 1700152
			},
			.prefetch0 = 60347,
			.prefetch1 = 10277,
			.ram = roll_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				563196491, 2858642096, 2161283396, 3192671080, 1442580004, 2190559915, 3062630192, 1356304702, 3487420734, 3123930832, 1871342128, 325462426, 1363074795, 3918111857, 1413242450, 4705494, 11390928, 41240, 1700154
			},
			.prefetch0 = 10277,
			.prefetch1 = 37689,
			.ram = roll_final_ram_30,
			.ram_len = 6,
		},
		.transactions = roll_transactions_30,
		.transactions_len = 2,
		.lenght = 94,
	},
	{
		.name = "031 ROL.l 6, D5 ed9d",
		.initial = {
			.regs = {
				652925343, 3923059745, 778724809, 232346492, 2222912199, 4025995735, 1375828468, 1535359832, 449410234, 1893573883, 3490791243, 1982832943, 1111049784, 1715224381, 2435413062, 973490, 14843582, 8218, 6555162
			},
			.prefetch0 = 60829,
			.prefetch1 = 19420,
			.ram = roll_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				652925343, 3923059745, 778724809, 232346492, 2222912199, 4260656635, 1375828468, 1535359832, 449410234, 1893573883, 3490791243, 1982832943, 1111049784, 1715224381, 2435413062, 973490, 14843582, 8217, 6555164
			},
			.prefetch0 = 19420,
			.prefetch1 = 38011,
			.ram = roll_final_ram_31,
			.ram_len = 6,
		},
		.transactions = roll_transactions_31,
		.transactions_len = 2,
		.lenght = 20,
	},
};

#endif /* RBT_ROLL_H */