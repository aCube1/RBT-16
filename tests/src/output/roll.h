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

const uint32_t ROLL_TEST_COUNT = 16;
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
};

#endif /* RBT_ROLL_H */