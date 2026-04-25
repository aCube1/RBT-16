#ifndef RBT_LSRL_H
#define RBT_LSRL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte lsrl_initial_ram_0[] = {
		{ .addr = 0xfb40a8, .byte = 0xe2 },
		{ .addr = 0xfb40a9, .byte = 0xaa },
		{ .addr = 0xfb40aa, .byte = 0xa8 },
		{ .addr = 0xfb40ab, .byte = 0x64 },
		{ .addr = 0xfb40ac, .byte = 0x43 },
		{ .addr = 0xfb40ad, .byte = 0x08 }
};

static const SST_RamByte lsrl_final_ram_0[] = {
		{ .addr = 0xfb40a8, .byte = 0xe2 },
		{ .addr = 0xfb40a9, .byte = 0xaa },
		{ .addr = 0xfb40aa, .byte = 0xa8 },
		{ .addr = 0xfb40ab, .byte = 0x64 },
		{ .addr = 0xfb40ac, .byte = 0x43 },
		{ .addr = 0xfb40ad, .byte = 0x08 }
};

static const SST_Transaction lsrl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16466092, .data = 17160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 118 },
};

static const SST_RamByte lsrl_initial_ram_1[] = {
		{ .addr = 0x51bba2, .byte = 0xea },
		{ .addr = 0x51bba3, .byte = 0xad },
		{ .addr = 0x51bba4, .byte = 0x83 },
		{ .addr = 0x51bba5, .byte = 0xcf },
		{ .addr = 0x51bba6, .byte = 0x29 },
		{ .addr = 0x51bba7, .byte = 0x9e }
};

static const SST_RamByte lsrl_final_ram_1[] = {
		{ .addr = 0x51bba2, .byte = 0xea },
		{ .addr = 0x51bba3, .byte = 0xad },
		{ .addr = 0x51bba4, .byte = 0x83 },
		{ .addr = 0x51bba5, .byte = 0xcf },
		{ .addr = 0x51bba6, .byte = 0x29 },
		{ .addr = 0x51bba7, .byte = 0x9e }
};

static const SST_Transaction lsrl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5356454, .data = 10654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte lsrl_initial_ram_2[] = {
		{ .addr = 0x22e328, .byte = 0xec },
		{ .addr = 0x22e329, .byte = 0x8b },
		{ .addr = 0x22e32a, .byte = 0x0d },
		{ .addr = 0x22e32b, .byte = 0x64 },
		{ .addr = 0x22e32c, .byte = 0xe3 },
		{ .addr = 0x22e32d, .byte = 0x97 }
};

static const SST_RamByte lsrl_final_ram_2[] = {
		{ .addr = 0x22e328, .byte = 0xec },
		{ .addr = 0x22e329, .byte = 0x8b },
		{ .addr = 0x22e32a, .byte = 0x0d },
		{ .addr = 0x22e32b, .byte = 0x64 },
		{ .addr = 0x22e32c, .byte = 0xe3 },
		{ .addr = 0x22e32d, .byte = 0x97 }
};

static const SST_Transaction lsrl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2286380, .data = 58263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrl_initial_ram_3[] = {
		{ .addr = 0xfde5fe, .byte = 0xe8 },
		{ .addr = 0xfde5ff, .byte = 0x89 },
		{ .addr = 0xfde600, .byte = 0x43 },
		{ .addr = 0xfde601, .byte = 0x30 },
		{ .addr = 0xfde602, .byte = 0x6f },
		{ .addr = 0xfde603, .byte = 0x64 }
};

static const SST_RamByte lsrl_final_ram_3[] = {
		{ .addr = 0xfde5fe, .byte = 0xe8 },
		{ .addr = 0xfde5ff, .byte = 0x89 },
		{ .addr = 0xfde600, .byte = 0x43 },
		{ .addr = 0xfde601, .byte = 0x30 },
		{ .addr = 0xfde602, .byte = 0x6f },
		{ .addr = 0xfde603, .byte = 0x64 }
};

static const SST_Transaction lsrl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16639490, .data = 28516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsrl_initial_ram_4[] = {
		{ .addr = 0x66e8ee, .byte = 0xe2 },
		{ .addr = 0x66e8ef, .byte = 0xad },
		{ .addr = 0x66e8f0, .byte = 0xa4 },
		{ .addr = 0x66e8f1, .byte = 0x0e },
		{ .addr = 0x66e8f2, .byte = 0x5b },
		{ .addr = 0x66e8f3, .byte = 0xf4 }
};

static const SST_RamByte lsrl_final_ram_4[] = {
		{ .addr = 0x66e8ee, .byte = 0xe2 },
		{ .addr = 0x66e8ef, .byte = 0xad },
		{ .addr = 0x66e8f0, .byte = 0xa4 },
		{ .addr = 0x66e8f1, .byte = 0x0e },
		{ .addr = 0x66e8f2, .byte = 0x5b },
		{ .addr = 0x66e8f3, .byte = 0xf4 }
};

static const SST_Transaction lsrl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6744306, .data = 23540, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 58 },
};

static const SST_RamByte lsrl_initial_ram_5[] = {
		{ .addr = 0x7e5910, .byte = 0xec },
		{ .addr = 0x7e5911, .byte = 0x8b },
		{ .addr = 0x7e5912, .byte = 0x32 },
		{ .addr = 0x7e5913, .byte = 0x99 },
		{ .addr = 0x7e5914, .byte = 0x0b },
		{ .addr = 0x7e5915, .byte = 0x41 }
};

static const SST_RamByte lsrl_final_ram_5[] = {
		{ .addr = 0x7e5910, .byte = 0xec },
		{ .addr = 0x7e5911, .byte = 0x8b },
		{ .addr = 0x7e5912, .byte = 0x32 },
		{ .addr = 0x7e5913, .byte = 0x99 },
		{ .addr = 0x7e5914, .byte = 0x0b },
		{ .addr = 0x7e5915, .byte = 0x41 }
};

static const SST_Transaction lsrl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8280340, .data = 2881, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrl_initial_ram_6[] = {
		{ .addr = 0xd8a382, .byte = 0xea },
		{ .addr = 0xd8a383, .byte = 0x8b },
		{ .addr = 0xd8a384, .byte = 0x47 },
		{ .addr = 0xd8a385, .byte = 0x16 },
		{ .addr = 0xd8a386, .byte = 0x39 },
		{ .addr = 0xd8a387, .byte = 0xa1 }
};

static const SST_RamByte lsrl_final_ram_6[] = {
		{ .addr = 0xd8a382, .byte = 0xea },
		{ .addr = 0xd8a383, .byte = 0x8b },
		{ .addr = 0xd8a384, .byte = 0x47 },
		{ .addr = 0xd8a385, .byte = 0x16 },
		{ .addr = 0xd8a386, .byte = 0x39 },
		{ .addr = 0xd8a387, .byte = 0xa1 }
};

static const SST_Transaction lsrl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14197638, .data = 14753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lsrl_initial_ram_7[] = {
		{ .addr = 0x30aa34, .byte = 0xec },
		{ .addr = 0x30aa35, .byte = 0x88 },
		{ .addr = 0x30aa36, .byte = 0x48 },
		{ .addr = 0x30aa37, .byte = 0x35 },
		{ .addr = 0x30aa38, .byte = 0x32 },
		{ .addr = 0x30aa39, .byte = 0xe7 }
};

static const SST_RamByte lsrl_final_ram_7[] = {
		{ .addr = 0x30aa34, .byte = 0xec },
		{ .addr = 0x30aa35, .byte = 0x88 },
		{ .addr = 0x30aa36, .byte = 0x48 },
		{ .addr = 0x30aa37, .byte = 0x35 },
		{ .addr = 0x30aa38, .byte = 0x32 },
		{ .addr = 0x30aa39, .byte = 0xe7 }
};

static const SST_Transaction lsrl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3189304, .data = 13031, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrl_initial_ram_8[] = {
		{ .addr = 0xbc837c, .byte = 0xe2 },
		{ .addr = 0xbc837d, .byte = 0xa9 },
		{ .addr = 0xbc837e, .byte = 0xc7 },
		{ .addr = 0xbc837f, .byte = 0xc0 },
		{ .addr = 0xbc8380, .byte = 0x7e },
		{ .addr = 0xbc8381, .byte = 0x96 }
};

static const SST_RamByte lsrl_final_ram_8[] = {
		{ .addr = 0xbc837c, .byte = 0xe2 },
		{ .addr = 0xbc837d, .byte = 0xa9 },
		{ .addr = 0xbc837e, .byte = 0xc7 },
		{ .addr = 0xbc837f, .byte = 0xc0 },
		{ .addr = 0xbc8380, .byte = 0x7e },
		{ .addr = 0xbc8381, .byte = 0x96 }
};

static const SST_Transaction lsrl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12354432, .data = 32406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 110 },
};

static const SST_RamByte lsrl_initial_ram_9[] = {
		{ .addr = 0x7287fa, .byte = 0xe2 },
		{ .addr = 0x7287fb, .byte = 0xae },
		{ .addr = 0x7287fc, .byte = 0x84 },
		{ .addr = 0x7287fd, .byte = 0x98 },
		{ .addr = 0x7287fe, .byte = 0x7a },
		{ .addr = 0x7287ff, .byte = 0x91 }
};

static const SST_RamByte lsrl_final_ram_9[] = {
		{ .addr = 0x7287fa, .byte = 0xe2 },
		{ .addr = 0x7287fb, .byte = 0xae },
		{ .addr = 0x7287fc, .byte = 0x84 },
		{ .addr = 0x7287fd, .byte = 0x98 },
		{ .addr = 0x7287fe, .byte = 0x7a },
		{ .addr = 0x7287ff, .byte = 0x91 }
};

static const SST_Transaction lsrl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7505918, .data = 31377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 80 },
};

static const SST_RamByte lsrl_initial_ram_10[] = {
		{ .addr = 0xd31066, .byte = 0xe0 },
		{ .addr = 0xd31067, .byte = 0x8e },
		{ .addr = 0xd31068, .byte = 0x8e },
		{ .addr = 0xd31069, .byte = 0xbd },
		{ .addr = 0xd3106a, .byte = 0x36 },
		{ .addr = 0xd3106b, .byte = 0x39 }
};

static const SST_RamByte lsrl_final_ram_10[] = {
		{ .addr = 0xd31066, .byte = 0xe0 },
		{ .addr = 0xd31067, .byte = 0x8e },
		{ .addr = 0xd31068, .byte = 0x8e },
		{ .addr = 0xd31069, .byte = 0xbd },
		{ .addr = 0xd3106a, .byte = 0x36 },
		{ .addr = 0xd3106b, .byte = 0x39 }
};

static const SST_Transaction lsrl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13832298, .data = 13881, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsrl_initial_ram_11[] = {
		{ .addr = 0x838f02, .byte = 0xe4 },
		{ .addr = 0x838f03, .byte = 0x8f },
		{ .addr = 0x838f04, .byte = 0xa6 },
		{ .addr = 0x838f05, .byte = 0x65 },
		{ .addr = 0x838f06, .byte = 0x48 },
		{ .addr = 0x838f07, .byte = 0xae }
};

static const SST_RamByte lsrl_final_ram_11[] = {
		{ .addr = 0x838f02, .byte = 0xe4 },
		{ .addr = 0x838f03, .byte = 0x8f },
		{ .addr = 0x838f04, .byte = 0xa6 },
		{ .addr = 0x838f05, .byte = 0x65 },
		{ .addr = 0x838f06, .byte = 0x48 },
		{ .addr = 0x838f07, .byte = 0xae }
};

static const SST_Transaction lsrl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8621830, .data = 18606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lsrl_initial_ram_12[] = {
		{ .addr = 0x3ee6a6, .byte = 0xe2 },
		{ .addr = 0x3ee6a7, .byte = 0x8b },
		{ .addr = 0x3ee6a8, .byte = 0xef },
		{ .addr = 0x3ee6a9, .byte = 0xf3 },
		{ .addr = 0x3ee6aa, .byte = 0x22 },
		{ .addr = 0x3ee6ab, .byte = 0xa7 }
};

static const SST_RamByte lsrl_final_ram_12[] = {
		{ .addr = 0x3ee6a6, .byte = 0xe2 },
		{ .addr = 0x3ee6a7, .byte = 0x8b },
		{ .addr = 0x3ee6a8, .byte = 0xef },
		{ .addr = 0x3ee6a9, .byte = 0xf3 },
		{ .addr = 0x3ee6aa, .byte = 0x22 },
		{ .addr = 0x3ee6ab, .byte = 0xa7 }
};

static const SST_Transaction lsrl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4122282, .data = 8871, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrl_initial_ram_13[] = {
		{ .addr = 0xed40fa, .byte = 0xea },
		{ .addr = 0xed40fb, .byte = 0x8f },
		{ .addr = 0xed40fc, .byte = 0xbf },
		{ .addr = 0xed40fd, .byte = 0x9f },
		{ .addr = 0xed40fe, .byte = 0x9f },
		{ .addr = 0xed40ff, .byte = 0xad }
};

static const SST_RamByte lsrl_final_ram_13[] = {
		{ .addr = 0xed40fa, .byte = 0xea },
		{ .addr = 0xed40fb, .byte = 0x8f },
		{ .addr = 0xed40fc, .byte = 0xbf },
		{ .addr = 0xed40fd, .byte = 0x9f },
		{ .addr = 0xed40fe, .byte = 0x9f },
		{ .addr = 0xed40ff, .byte = 0xad }
};

static const SST_Transaction lsrl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15548670, .data = 40877, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lsrl_initial_ram_14[] = {
		{ .addr = 0x513578, .byte = 0xe4 },
		{ .addr = 0x513579, .byte = 0xa9 },
		{ .addr = 0x51357a, .byte = 0x9c },
		{ .addr = 0x51357b, .byte = 0x9c },
		{ .addr = 0x51357c, .byte = 0xb1 },
		{ .addr = 0x51357d, .byte = 0x8a }
};

static const SST_RamByte lsrl_final_ram_14[] = {
		{ .addr = 0x513578, .byte = 0xe4 },
		{ .addr = 0x513579, .byte = 0xa9 },
		{ .addr = 0x51357a, .byte = 0x9c },
		{ .addr = 0x51357b, .byte = 0x9c },
		{ .addr = 0x51357c, .byte = 0xb1 },
		{ .addr = 0x51357d, .byte = 0x8a }
};

static const SST_Transaction lsrl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5322108, .data = 45450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 66 },
};

static const SST_RamByte lsrl_initial_ram_15[] = {
		{ .addr = 0xb74728, .byte = 0xe0 },
		{ .addr = 0xb74729, .byte = 0x8f },
		{ .addr = 0xb7472a, .byte = 0x1b },
		{ .addr = 0xb7472b, .byte = 0xdd },
		{ .addr = 0xb7472c, .byte = 0x45 },
		{ .addr = 0xb7472d, .byte = 0xd9 }
};

static const SST_RamByte lsrl_final_ram_15[] = {
		{ .addr = 0xb74728, .byte = 0xe0 },
		{ .addr = 0xb74729, .byte = 0x8f },
		{ .addr = 0xb7472a, .byte = 0x1b },
		{ .addr = 0xb7472b, .byte = 0xdd },
		{ .addr = 0xb7472c, .byte = 0x45 },
		{ .addr = 0xb7472d, .byte = 0xd9 }
};

static const SST_Transaction lsrl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12011308, .data = 17881, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

const uint32_t LSRL_TEST_COUNT = 16;
static const SST_TestCase lsrl[] = {
	{
		.name = "000 LSR.l D1, D2 e2aa",
		.initial = {
			.regs = {
				1451886717, 2451518905, 2667325714, 1214704149, 82497301, 2794953732, 2302808131, 1821088266, 1561357439, 4221139185, 3522782695, 2377701524, 3678414482, 518277178, 2313370385, 6516510, 15752052, 8982, 16466092
			},
			.prefetch0 = 58026,
			.prefetch1 = 43108,
			.ram = lsrl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1451886717, 2451518905, 0, 1214704149, 82497301, 2794953732, 2302808131, 1821088266, 1561357439, 4221139185, 3522782695, 2377701524, 3678414482, 518277178, 2313370385, 6516510, 15752052, 8964, 16466094
			},
			.prefetch0 = 43108,
			.prefetch1 = 17160,
			.ram = lsrl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_0,
		.transactions_len = 2,
		.lenght = 122,
	},
	{
		.name = "001 LSR.l D5, D5 eaad",
		.initial = {
			.regs = {
				2515136111, 3562296391, 4230183557, 1377745543, 2077656455, 2199802764, 4293167454, 3999774859, 597298122, 2986473443, 2834901839, 852843577, 1280234231, 4158069553, 1617833351, 16464656, 9999166, 42008, 5356454
			},
			.prefetch0 = 60077,
			.prefetch1 = 33743,
			.ram = lsrl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2515136111, 3562296391, 4230183557, 1377745543, 2077656455, 537061, 4293167454, 3999774859, 597298122, 2986473443, 2834901839, 852843577, 1280234231, 4158069553, 1617833351, 16464656, 9999166, 41984, 5356456
			},
			.prefetch0 = 33743,
			.prefetch1 = 10654,
			.ram = lsrl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_1,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "002 LSR.l 6, D3 ec8b",
		.initial = {
			.regs = {
				1147524804, 3922436735, 645768750, 1447391994, 3232547158, 2989171735, 2598023971, 3971097245, 882192657, 3477908789, 1992953398, 1347152256, 3759140271, 3109141447, 2173982794, 9291560, 3174350, 41491, 2286380
			},
			.prefetch0 = 60555,
			.prefetch1 = 3428,
			.ram = lsrl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1147524804, 3922436735, 645768750, 22615499, 3232547158, 2989171735, 2598023971, 3971097245, 882192657, 3477908789, 1992953398, 1347152256, 3759140271, 3109141447, 2173982794, 9291560, 3174350, 41489, 2286382
			},
			.prefetch0 = 3428,
			.prefetch1 = 58263,
			.ram = lsrl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_2,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "003 LSR.l 4, D1 e889",
		.initial = {
			.regs = {
				2275363788, 883427690, 2132787991, 3765765244, 1644687163, 530697120, 2008111783, 838642434, 3648245082, 184015371, 3169597129, 1445360736, 3010773868, 3701024616, 994577373, 1093880, 13565162, 8728, 16639490
			},
			.prefetch0 = 59529,
			.prefetch1 = 17200,
			.ram = lsrl_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2275363788, 55214230, 2132787991, 3765765244, 1644687163, 530697120, 2008111783, 838642434, 3648245082, 184015371, 3169597129, 1445360736, 3010773868, 3701024616, 994577373, 1093880, 13565162, 8721, 16639492
			},
			.prefetch0 = 17200,
			.prefetch1 = 28516,
			.ram = lsrl_final_ram_3,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_3,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "004 LSR.l D1, D5 e2ad",
		.initial = {
			.regs = {
				3051823879, 1967120987, 111597336, 4203612274, 4192480709, 678955902, 3968030267, 1720048166, 553675019, 4218620514, 1009139730, 216448552, 369198741, 3225084594, 2509867388, 13234918, 267516, 41494, 6744306
			},
			.prefetch0 = 58029,
			.prefetch1 = 41998,
			.ram = lsrl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3051823879, 1967120987, 111597336, 4203612274, 4192480709, 5, 3968030267, 1720048166, 553675019, 4218620514, 1009139730, 216448552, 369198741, 3225084594, 2509867388, 13234918, 267516, 41472, 6744308
			},
			.prefetch0 = 41998,
			.prefetch1 = 23540,
			.ram = lsrl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_4,
		.transactions_len = 2,
		.lenght = 62,
	},
	{
		.name = "005 LSR.l 6, D3 ec8b",
		.initial = {
			.regs = {
				2660451602, 2210780774, 649084200, 491713037, 2272180849, 1198191837, 4166816133, 1802674615, 769397996, 150556347, 3680824403, 272996499, 4100615756, 1462305437, 312034581, 12134406, 12870134, 41487, 8280340
			},
			.prefetch0 = 60555,
			.prefetch1 = 12953,
			.ram = lsrl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2660451602, 2210780774, 649084200, 7683016, 2272180849, 1198191837, 4166816133, 1802674615, 769397996, 150556347, 3680824403, 272996499, 4100615756, 1462305437, 312034581, 12134406, 12870134, 41472, 8280342
			},
			.prefetch0 = 12953,
			.prefetch1 = 2881,
			.ram = lsrl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_5,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "006 LSR.l 5, D3 ea8b",
		.initial = {
			.regs = {
				3648852129, 34834803, 904158660, 2880022605, 71521196, 3340002801, 1810923356, 3490013135, 3207454568, 4032276928, 3129362908, 3121413088, 1471668684, 1607519616, 2704344720, 13873990, 10563778, 8961, 14197638
			},
			.prefetch0 = 60043,
			.prefetch1 = 18198,
			.ram = lsrl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3648852129, 34834803, 904158660, 90000706, 71521196, 3340002801, 1810923356, 3490013135, 3207454568, 4032276928, 3129362908, 3121413088, 1471668684, 1607519616, 2704344720, 13873990, 10563778, 8960, 14197640
			},
			.prefetch0 = 18198,
			.prefetch1 = 14753,
			.ram = lsrl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_6,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "007 LSR.l 6, D0 ec88",
		.initial = {
			.regs = {
				775691319, 1608560358, 3314034205, 1064865349, 1487448691, 3381902780, 3640506886, 242765767, 3311065343, 1971208219, 4091104321, 589769660, 3153925439, 2503588805, 3742170420, 1395714, 7805922, 32796, 3189304
			},
			.prefetch0 = 60552,
			.prefetch1 = 18485,
			.ram = lsrl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				12120176, 1608560358, 3314034205, 1064865349, 1487448691, 3381902780, 3640506886, 242765767, 3311065343, 1971208219, 4091104321, 589769660, 3153925439, 2503588805, 3742170420, 1395714, 7805922, 32785, 3189306
			},
			.prefetch0 = 18485,
			.prefetch1 = 13031,
			.ram = lsrl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_7,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "008 LSR.l D1, D1 e2a9",
		.initial = {
			.regs = {
				1699209641, 4227658549, 2251675034, 1243779667, 3236160443, 4007353698, 2939522291, 4038538942, 1785089645, 2307224093, 2416006651, 2734146619, 1082727116, 3486681396, 3294591847, 13387640, 748118, 1567, 12354432
			},
			.prefetch0 = 58025,
			.prefetch1 = 51136,
			.ram = lsrl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1699209641, 0, 2251675034, 1243779667, 3236160443, 4007353698, 2939522291, 4038538942, 1785089645, 2307224093, 2416006651, 2734146619, 1082727116, 3486681396, 3294591847, 13387640, 748118, 1540, 12354434
			},
			.prefetch0 = 51136,
			.prefetch1 = 32406,
			.ram = lsrl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_8,
		.transactions_len = 2,
		.lenght = 114,
	},
	{
		.name = "009 LSR.l D1, D6 e2ae",
		.initial = {
			.regs = {
				2453532510, 3925803878, 2894667923, 2358961466, 1723335663, 3582071368, 3781777965, 2530106711, 2970827896, 568538615, 215048646, 2728182620, 3937281192, 4136983787, 70785675, 6601944, 7490130, 33027, 7505918
			},
			.prefetch0 = 58030,
			.prefetch1 = 33944,
			.ram = lsrl_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2453532510, 3925803878, 2894667923, 2358961466, 1723335663, 3582071368, 0, 2530106711, 2970827896, 568538615, 215048646, 2728182620, 3937281192, 4136983787, 70785675, 6601944, 7490130, 33028, 7505920
			},
			.prefetch0 = 33944,
			.prefetch1 = 31377,
			.ram = lsrl_final_ram_9,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_9,
		.transactions_len = 2,
		.lenght = 84,
	},
	{
		.name = "010 LSR.l 8, D6 e08e",
		.initial = {
			.regs = {
				3906685361, 4251292590, 1278357905, 2087366056, 3131037840, 3786720073, 2470529522, 3654970290, 842043229, 1028699114, 2061616121, 1245948790, 917754828, 1279233856, 3097844616, 3054104, 9250508, 40972, 13832298
			},
			.prefetch0 = 57486,
			.prefetch1 = 36541,
			.ram = lsrl_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3906685361, 4251292590, 1278357905, 2087366056, 3131037840, 3786720073, 9650505, 3654970290, 842043229, 1028699114, 2061616121, 1245948790, 917754828, 1279233856, 3097844616, 3054104, 9250508, 40977, 13832300
			},
			.prefetch0 = 36541,
			.prefetch1 = 13881,
			.ram = lsrl_final_ram_10,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_10,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "011 LSR.l 2, D7 e48f",
		.initial = {
			.regs = {
				1425895636, 2494875880, 2457949810, 361487193, 814899024, 21291662, 1731170838, 1874913570, 3283646207, 998346251, 2152964999, 1031695763, 3293266629, 1267463694, 3976760647, 4316196, 13421374, 9488, 8621830
			},
			.prefetch0 = 58511,
			.prefetch1 = 42597,
			.ram = lsrl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1425895636, 2494875880, 2457949810, 361487193, 814899024, 21291662, 1731170838, 468728392, 3283646207, 998346251, 2152964999, 1031695763, 3293266629, 1267463694, 3976760647, 4316196, 13421374, 9489, 8621832
			},
			.prefetch0 = 42597,
			.prefetch1 = 18606,
			.ram = lsrl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_11,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "012 LSR.l 1, D3 e28b",
		.initial = {
			.regs = {
				851280677, 2632577838, 318894457, 1989474471, 381114066, 1130979034, 14967855, 3493262460, 3228502280, 782407876, 1565929659, 623518081, 1096781002, 2627292947, 2505781899, 7078102, 7602504, 8976, 4122282
			},
			.prefetch0 = 57995,
			.prefetch1 = 61427,
			.ram = lsrl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				851280677, 2632577838, 318894457, 994737235, 381114066, 1130979034, 14967855, 3493262460, 3228502280, 782407876, 1565929659, 623518081, 1096781002, 2627292947, 2505781899, 7078102, 7602504, 8977, 4122284
			},
			.prefetch0 = 61427,
			.prefetch1 = 8871,
			.ram = lsrl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_12,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "013 LSR.l 5, D7 ea8f",
		.initial = {
			.regs = {
				1279186270, 3975806525, 2546494572, 3244464859, 2358887052, 2282248938, 249757373, 3779114089, 3615187867, 1018539935, 3131200934, 3475749909, 1878928924, 3016360011, 1075173641, 1598338, 7241420, 8728, 15548670
			},
			.prefetch0 = 60047,
			.prefetch1 = 49055,
			.ram = lsrl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1279186270, 3975806525, 2546494572, 3244464859, 2358887052, 2282248938, 249757373, 118097315, 3615187867, 1018539935, 3131200934, 3475749909, 1878928924, 3016360011, 1075173641, 1598338, 7241420, 8704, 15548672
			},
			.prefetch0 = 49055,
			.prefetch1 = 40877,
			.ram = lsrl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_13,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "014 LSR.l D2, D1 e4a9",
		.initial = {
			.regs = {
				2599234496, 2179792268, 3252446047, 3558664553, 711764240, 3734446447, 3989820625, 985717822, 3429851896, 2537813515, 774539103, 3455975933, 2518718903, 985868062, 686709614, 6485116, 5288696, 8215, 5322108
			},
			.prefetch0 = 58537,
			.prefetch1 = 40092,
			.ram = lsrl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2599234496, 1, 3252446047, 3558664553, 711764240, 3734446447, 3989820625, 985717822, 3429851896, 2537813515, 774539103, 3455975933, 2518718903, 985868062, 686709614, 6485116, 5288696, 8192, 5322110
			},
			.prefetch0 = 40092,
			.prefetch1 = 45450,
			.ram = lsrl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_14,
		.transactions_len = 2,
		.lenght = 70,
	},
	{
		.name = "015 LSR.l 8, D7 e08f",
		.initial = {
			.regs = {
				891154970, 4241339210, 22287940, 627667524, 4164257065, 1066434575, 4252524732, 3788965548, 2147890250, 1400092347, 136216444, 1101199870, 3895942681, 2354208465, 3268543063, 4918934, 4100966, 42013, 12011308
			},
			.prefetch0 = 57487,
			.prefetch1 = 7133,
			.ram = lsrl_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				891154970, 4241339210, 22287940, 627667524, 4164257065, 1066434575, 4252524732, 14800646, 2147890250, 1400092347, 136216444, 1101199870, 3895942681, 2354208465, 3268543063, 4918934, 4100966, 42001, 12011310
			},
			.prefetch0 = 7133,
			.prefetch1 = 17881,
			.ram = lsrl_final_ram_15,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_15,
		.transactions_len = 2,
		.lenght = 24,
	},
};

#endif /* RBT_LSRL_H */