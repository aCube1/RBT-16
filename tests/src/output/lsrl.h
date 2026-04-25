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

static const SST_RamByte lsrl_initial_ram_16[] = {
		{ .addr = 0x3f8ef6, .byte = 0xe8 },
		{ .addr = 0x3f8ef7, .byte = 0x8a },
		{ .addr = 0x3f8ef8, .byte = 0x5c },
		{ .addr = 0x3f8ef9, .byte = 0x39 },
		{ .addr = 0x3f8efa, .byte = 0xc7 },
		{ .addr = 0x3f8efb, .byte = 0x92 }
};

static const SST_RamByte lsrl_final_ram_16[] = {
		{ .addr = 0x3f8ef6, .byte = 0xe8 },
		{ .addr = 0x3f8ef7, .byte = 0x8a },
		{ .addr = 0x3f8ef8, .byte = 0x5c },
		{ .addr = 0x3f8ef9, .byte = 0x39 },
		{ .addr = 0x3f8efa, .byte = 0xc7 },
		{ .addr = 0x3f8efb, .byte = 0x92 }
};

static const SST_Transaction lsrl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4165370, .data = 51090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsrl_initial_ram_17[] = {
		{ .addr = 0x08194c, .byte = 0xe6 },
		{ .addr = 0x08194d, .byte = 0x88 },
		{ .addr = 0x08194e, .byte = 0x10 },
		{ .addr = 0x08194f, .byte = 0xc3 },
		{ .addr = 0x081950, .byte = 0xf9 },
		{ .addr = 0x081951, .byte = 0xb3 }
};

static const SST_RamByte lsrl_final_ram_17[] = {
		{ .addr = 0x08194c, .byte = 0xe6 },
		{ .addr = 0x08194d, .byte = 0x88 },
		{ .addr = 0x08194e, .byte = 0x10 },
		{ .addr = 0x08194f, .byte = 0xc3 },
		{ .addr = 0x081950, .byte = 0xf9 },
		{ .addr = 0x081951, .byte = 0xb3 }
};

static const SST_Transaction lsrl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 530768, .data = 63923, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lsrl_initial_ram_18[] = {
		{ .addr = 0xf1db58, .byte = 0xe0 },
		{ .addr = 0xf1db59, .byte = 0x88 },
		{ .addr = 0xf1db5a, .byte = 0x5c },
		{ .addr = 0xf1db5b, .byte = 0x70 },
		{ .addr = 0xf1db5c, .byte = 0x4e },
		{ .addr = 0xf1db5d, .byte = 0xd3 }
};

static const SST_RamByte lsrl_final_ram_18[] = {
		{ .addr = 0xf1db58, .byte = 0xe0 },
		{ .addr = 0xf1db59, .byte = 0x88 },
		{ .addr = 0xf1db5a, .byte = 0x5c },
		{ .addr = 0xf1db5b, .byte = 0x70 },
		{ .addr = 0xf1db5c, .byte = 0x4e },
		{ .addr = 0xf1db5d, .byte = 0xd3 }
};

static const SST_Transaction lsrl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15850332, .data = 20179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsrl_initial_ram_19[] = {
		{ .addr = 0xc5eb8e, .byte = 0xea },
		{ .addr = 0xc5eb8f, .byte = 0x8b },
		{ .addr = 0xc5eb90, .byte = 0x59 },
		{ .addr = 0xc5eb91, .byte = 0xe1 },
		{ .addr = 0xc5eb92, .byte = 0xc9 },
		{ .addr = 0xc5eb93, .byte = 0x93 }
};

static const SST_RamByte lsrl_final_ram_19[] = {
		{ .addr = 0xc5eb8e, .byte = 0xea },
		{ .addr = 0xc5eb8f, .byte = 0x8b },
		{ .addr = 0xc5eb90, .byte = 0x59 },
		{ .addr = 0xc5eb91, .byte = 0xe1 },
		{ .addr = 0xc5eb92, .byte = 0xc9 },
		{ .addr = 0xc5eb93, .byte = 0x93 }
};

static const SST_Transaction lsrl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12970898, .data = 51603, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lsrl_initial_ram_20[] = {
		{ .addr = 0x6fce90, .byte = 0xe0 },
		{ .addr = 0x6fce91, .byte = 0xa9 },
		{ .addr = 0x6fce92, .byte = 0x8a },
		{ .addr = 0x6fce93, .byte = 0x4f },
		{ .addr = 0x6fce94, .byte = 0x88 },
		{ .addr = 0x6fce95, .byte = 0xf5 }
};

static const SST_RamByte lsrl_final_ram_20[] = {
		{ .addr = 0x6fce90, .byte = 0xe0 },
		{ .addr = 0x6fce91, .byte = 0xa9 },
		{ .addr = 0x6fce92, .byte = 0x8a },
		{ .addr = 0x6fce93, .byte = 0x4f },
		{ .addr = 0x6fce94, .byte = 0x88 },
		{ .addr = 0x6fce95, .byte = 0xf5 }
};

static const SST_Transaction lsrl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7327380, .data = 35061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte lsrl_initial_ram_21[] = {
		{ .addr = 0x3559c4, .byte = 0xea },
		{ .addr = 0x3559c5, .byte = 0x8b },
		{ .addr = 0x3559c6, .byte = 0xf8 },
		{ .addr = 0x3559c7, .byte = 0x03 },
		{ .addr = 0x3559c8, .byte = 0x85 },
		{ .addr = 0x3559c9, .byte = 0x3f }
};

static const SST_RamByte lsrl_final_ram_21[] = {
		{ .addr = 0x3559c4, .byte = 0xea },
		{ .addr = 0x3559c5, .byte = 0x8b },
		{ .addr = 0x3559c6, .byte = 0xf8 },
		{ .addr = 0x3559c7, .byte = 0x03 },
		{ .addr = 0x3559c8, .byte = 0x85 },
		{ .addr = 0x3559c9, .byte = 0x3f }
};

static const SST_Transaction lsrl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3496392, .data = 34111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lsrl_initial_ram_22[] = {
		{ .addr = 0x729a64, .byte = 0xe4 },
		{ .addr = 0x729a65, .byte = 0xac },
		{ .addr = 0x729a66, .byte = 0x8d },
		{ .addr = 0x729a67, .byte = 0xf4 },
		{ .addr = 0x729a68, .byte = 0x59 },
		{ .addr = 0x729a69, .byte = 0x98 }
};

static const SST_RamByte lsrl_final_ram_22[] = {
		{ .addr = 0x729a64, .byte = 0xe4 },
		{ .addr = 0x729a65, .byte = 0xac },
		{ .addr = 0x729a66, .byte = 0x8d },
		{ .addr = 0x729a67, .byte = 0xf4 },
		{ .addr = 0x729a68, .byte = 0x59 },
		{ .addr = 0x729a69, .byte = 0x98 }
};

static const SST_Transaction lsrl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7510632, .data = 22936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsrl_initial_ram_23[] = {
		{ .addr = 0xac961a, .byte = 0xe2 },
		{ .addr = 0xac961b, .byte = 0x8e },
		{ .addr = 0xac961c, .byte = 0x1a },
		{ .addr = 0xac961d, .byte = 0x23 },
		{ .addr = 0xac961e, .byte = 0x55 },
		{ .addr = 0xac961f, .byte = 0xed }
};

static const SST_RamByte lsrl_final_ram_23[] = {
		{ .addr = 0xac961a, .byte = 0xe2 },
		{ .addr = 0xac961b, .byte = 0x8e },
		{ .addr = 0xac961c, .byte = 0x1a },
		{ .addr = 0xac961d, .byte = 0x23 },
		{ .addr = 0xac961e, .byte = 0x55 },
		{ .addr = 0xac961f, .byte = 0xed }
};

static const SST_Transaction lsrl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11310622, .data = 21997, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrl_initial_ram_24[] = {
		{ .addr = 0xf16eaa, .byte = 0xe8 },
		{ .addr = 0xf16eab, .byte = 0x8a },
		{ .addr = 0xf16eac, .byte = 0xe9 },
		{ .addr = 0xf16ead, .byte = 0x66 },
		{ .addr = 0xf16eae, .byte = 0x25 },
		{ .addr = 0xf16eaf, .byte = 0xba }
};

static const SST_RamByte lsrl_final_ram_24[] = {
		{ .addr = 0xf16eaa, .byte = 0xe8 },
		{ .addr = 0xf16eab, .byte = 0x8a },
		{ .addr = 0xf16eac, .byte = 0xe9 },
		{ .addr = 0xf16ead, .byte = 0x66 },
		{ .addr = 0xf16eae, .byte = 0x25 },
		{ .addr = 0xf16eaf, .byte = 0xba }
};

static const SST_Transaction lsrl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15822510, .data = 9658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsrl_initial_ram_25[] = {
		{ .addr = 0x478890, .byte = 0xe4 },
		{ .addr = 0x478891, .byte = 0xac },
		{ .addr = 0x478892, .byte = 0xb4 },
		{ .addr = 0x478893, .byte = 0x1f },
		{ .addr = 0x478894, .byte = 0x89 },
		{ .addr = 0x478895, .byte = 0x82 }
};

static const SST_RamByte lsrl_final_ram_25[] = {
		{ .addr = 0x478890, .byte = 0xe4 },
		{ .addr = 0x478891, .byte = 0xac },
		{ .addr = 0x478892, .byte = 0xb4 },
		{ .addr = 0x478893, .byte = 0x1f },
		{ .addr = 0x478894, .byte = 0x89 },
		{ .addr = 0x478895, .byte = 0x82 }
};

static const SST_Transaction lsrl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4688020, .data = 35202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte lsrl_initial_ram_26[] = {
		{ .addr = 0x197b54, .byte = 0xe8 },
		{ .addr = 0x197b55, .byte = 0x8d },
		{ .addr = 0x197b56, .byte = 0x9e },
		{ .addr = 0x197b57, .byte = 0x6f },
		{ .addr = 0x197b58, .byte = 0x84 },
		{ .addr = 0x197b59, .byte = 0xc8 }
};

static const SST_RamByte lsrl_final_ram_26[] = {
		{ .addr = 0x197b54, .byte = 0xe8 },
		{ .addr = 0x197b55, .byte = 0x8d },
		{ .addr = 0x197b56, .byte = 0x9e },
		{ .addr = 0x197b57, .byte = 0x6f },
		{ .addr = 0x197b58, .byte = 0x84 },
		{ .addr = 0x197b59, .byte = 0xc8 }
};

static const SST_Transaction lsrl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1669976, .data = 33992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsrl_initial_ram_27[] = {
		{ .addr = 0x342b8e, .byte = 0xee },
		{ .addr = 0x342b8f, .byte = 0xae },
		{ .addr = 0x342b90, .byte = 0x01 },
		{ .addr = 0x342b91, .byte = 0xbd },
		{ .addr = 0x342b92, .byte = 0x8f },
		{ .addr = 0x342b93, .byte = 0xfb }
};

static const SST_RamByte lsrl_final_ram_27[] = {
		{ .addr = 0x342b8e, .byte = 0xee },
		{ .addr = 0x342b8f, .byte = 0xae },
		{ .addr = 0x342b90, .byte = 0x01 },
		{ .addr = 0x342b91, .byte = 0xbd },
		{ .addr = 0x342b92, .byte = 0x8f },
		{ .addr = 0x342b93, .byte = 0xfb }
};

static const SST_Transaction lsrl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3419026, .data = 36859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte lsrl_initial_ram_28[] = {
		{ .addr = 0xbd3ea8, .byte = 0xee },
		{ .addr = 0xbd3ea9, .byte = 0x89 },
		{ .addr = 0xbd3eaa, .byte = 0xc8 },
		{ .addr = 0xbd3eab, .byte = 0xe6 },
		{ .addr = 0xbd3eac, .byte = 0x55 },
		{ .addr = 0xbd3ead, .byte = 0xbe }
};

static const SST_RamByte lsrl_final_ram_28[] = {
		{ .addr = 0xbd3ea8, .byte = 0xee },
		{ .addr = 0xbd3ea9, .byte = 0x89 },
		{ .addr = 0xbd3eaa, .byte = 0xc8 },
		{ .addr = 0xbd3eab, .byte = 0xe6 },
		{ .addr = 0xbd3eac, .byte = 0x55 },
		{ .addr = 0xbd3ead, .byte = 0xbe }
};

static const SST_Transaction lsrl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12402348, .data = 21950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrl_initial_ram_29[] = {
		{ .addr = 0xcaecb4, .byte = 0xec },
		{ .addr = 0xcaecb5, .byte = 0x8d },
		{ .addr = 0xcaecb6, .byte = 0xb3 },
		{ .addr = 0xcaecb7, .byte = 0xbd },
		{ .addr = 0xcaecb8, .byte = 0x64 },
		{ .addr = 0xcaecb9, .byte = 0x1e }
};

static const SST_RamByte lsrl_final_ram_29[] = {
		{ .addr = 0xcaecb4, .byte = 0xec },
		{ .addr = 0xcaecb5, .byte = 0x8d },
		{ .addr = 0xcaecb6, .byte = 0xb3 },
		{ .addr = 0xcaecb7, .byte = 0xbd },
		{ .addr = 0xcaecb8, .byte = 0x64 },
		{ .addr = 0xcaecb9, .byte = 0x1e }
};

static const SST_Transaction lsrl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13298872, .data = 25630, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrl_initial_ram_30[] = {
		{ .addr = 0x179396, .byte = 0xe8 },
		{ .addr = 0x179397, .byte = 0xaf },
		{ .addr = 0x179398, .byte = 0x33 },
		{ .addr = 0x179399, .byte = 0x46 },
		{ .addr = 0x17939a, .byte = 0x23 },
		{ .addr = 0x17939b, .byte = 0xe8 }
};

static const SST_RamByte lsrl_final_ram_30[] = {
		{ .addr = 0x179396, .byte = 0xe8 },
		{ .addr = 0x179397, .byte = 0xaf },
		{ .addr = 0x179398, .byte = 0x33 },
		{ .addr = 0x179399, .byte = 0x46 },
		{ .addr = 0x17939a, .byte = 0x23 },
		{ .addr = 0x17939b, .byte = 0xe8 }
};

static const SST_Transaction lsrl_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1545114, .data = 9192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 118 },
};

static const SST_RamByte lsrl_initial_ram_31[] = {
		{ .addr = 0x270af4, .byte = 0xea },
		{ .addr = 0x270af5, .byte = 0x8e },
		{ .addr = 0x270af6, .byte = 0x50 },
		{ .addr = 0x270af7, .byte = 0xfc },
		{ .addr = 0x270af8, .byte = 0xe4 },
		{ .addr = 0x270af9, .byte = 0xaa }
};

static const SST_RamByte lsrl_final_ram_31[] = {
		{ .addr = 0x270af4, .byte = 0xea },
		{ .addr = 0x270af5, .byte = 0x8e },
		{ .addr = 0x270af6, .byte = 0x50 },
		{ .addr = 0x270af7, .byte = 0xfc },
		{ .addr = 0x270af8, .byte = 0xe4 },
		{ .addr = 0x270af9, .byte = 0xaa }
};

static const SST_Transaction lsrl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2558712, .data = 58538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

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
	{
		.name = "016 LSR.l 4, D2 e88a",
		.initial = {
			.regs = {
				3904040282, 681937549, 3358436900, 324082190, 3239637247, 3897159807, 2754561703, 555259276, 4169733040, 1637136847, 1632886548, 114948774, 3914479615, 2439146404, 3925628338, 12210674, 13487642, 32788, 4165370
			},
			.prefetch0 = 59530,
			.prefetch1 = 23609,
			.ram = lsrl_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3904040282, 681937549, 209902306, 324082190, 3239637247, 3897159807, 2754561703, 555259276, 4169733040, 1637136847, 1632886548, 114948774, 3914479615, 2439146404, 3925628338, 12210674, 13487642, 32768, 4165372
			},
			.prefetch0 = 23609,
			.prefetch1 = 51090,
			.ram = lsrl_final_ram_16,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_16,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "017 LSR.l 3, D0 e688",
		.initial = {
			.regs = {
				2092123141, 2607865380, 3708003067, 3099235960, 1255390412, 3845093610, 1318349325, 2039145611, 3376080713, 333126917, 2501509987, 2964192965, 3386602182, 2978705631, 289866559, 480766, 14578668, 8472, 530768
			},
			.prefetch0 = 59016,
			.prefetch1 = 4291,
			.ram = lsrl_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				261515392, 2607865380, 3708003067, 3099235960, 1255390412, 3845093610, 1318349325, 2039145611, 3376080713, 333126917, 2501509987, 2964192965, 3386602182, 2978705631, 289866559, 480766, 14578668, 8465, 530770
			},
			.prefetch0 = 4291,
			.prefetch1 = 63923,
			.ram = lsrl_final_ram_17,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_17,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "018 LSR.l 8, D0 e088",
		.initial = {
			.regs = {
				32556653, 661464134, 3173103405, 3489684551, 4194578426, 3175585405, 1892299146, 3557435479, 3070871416, 3077918966, 1495091285, 1127563251, 3610193543, 1207676755, 1688424604, 15377644, 6128586, 780, 15850332
			},
			.prefetch0 = 57480,
			.prefetch1 = 23664,
			.ram = lsrl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				127174, 661464134, 3173103405, 3489684551, 4194578426, 3175585405, 1892299146, 3557435479, 3070871416, 3077918966, 1495091285, 1127563251, 3610193543, 1207676755, 1688424604, 15377644, 6128586, 768, 15850334
			},
			.prefetch0 = 23664,
			.prefetch1 = 20179,
			.ram = lsrl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_18,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "019 LSR.l 5, D3 ea8b",
		.initial = {
			.regs = {
				3996162654, 3376648983, 3017643951, 4111765369, 2588480380, 2062930430, 3762876606, 1075323517, 2451046589, 980442780, 1515876175, 3487656493, 1922419280, 3463654642, 2878330601, 5919502, 14542648, 40971, 12970898
			},
			.prefetch0 = 60043,
			.prefetch1 = 23009,
			.ram = lsrl_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3996162654, 3376648983, 3017643951, 128492667, 2588480380, 2062930430, 3762876606, 1075323517, 2451046589, 980442780, 1515876175, 3487656493, 1922419280, 3463654642, 2878330601, 5919502, 14542648, 40977, 12970900
			},
			.prefetch0 = 23009,
			.prefetch1 = 51603,
			.ram = lsrl_final_ram_19,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_19,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "020 LSR.l D0, D1 e0a9",
		.initial = {
			.regs = {
				2423557566, 1369845014, 1858800896, 3263737825, 3671576640, 2850448958, 2376151587, 3052969965, 3912818898, 727206118, 2458744183, 4146596463, 124173892, 1086274097, 79414258, 6441642, 9534466, 42262, 7327380
			},
			.prefetch0 = 57513,
			.prefetch1 = 35407,
			.ram = lsrl_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2423557566, 0, 1858800896, 3263737825, 3671576640, 2850448958, 2376151587, 3052969965, 3912818898, 727206118, 2458744183, 4146596463, 124173892, 1086274097, 79414258, 6441642, 9534466, 42244, 7327382
			},
			.prefetch0 = 35407,
			.prefetch1 = 35061,
			.ram = lsrl_final_ram_20,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_20,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "021 LSR.l 5, D3 ea8b",
		.initial = {
			.regs = {
				2885640270, 3648213023, 1526630381, 1346880880, 3986924134, 2683914646, 2905975115, 511139839, 947402455, 870806192, 4261985166, 3197125836, 3388325876, 2541640253, 3617727558, 16445750, 7220020, 8965, 3496392
			},
			.prefetch0 = 60043,
			.prefetch1 = 63491,
			.ram = lsrl_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2885640270, 3648213023, 1526630381, 42090027, 3986924134, 2683914646, 2905975115, 511139839, 947402455, 870806192, 4261985166, 3197125836, 3388325876, 2541640253, 3617727558, 16445750, 7220020, 8977, 3496394
			},
			.prefetch0 = 63491,
			.prefetch1 = 34111,
			.ram = lsrl_final_ram_21,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_21,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "022 LSR.l D2, D4 e4ac",
		.initial = {
			.regs = {
				3840909940, 2687250957, 1937467848, 1170475701, 973645743, 1080300805, 3457621666, 641776677, 3215203037, 4255382740, 703010233, 3598719159, 3249786162, 1037538102, 2652687362, 2176922, 16632472, 33301, 7510632
			},
			.prefetch0 = 58540,
			.prefetch1 = 36340,
			.ram = lsrl_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3840909940, 2687250957, 1937467848, 1170475701, 3803303, 1080300805, 3457621666, 641776677, 3215203037, 4255382740, 703010233, 3598719159, 3249786162, 1037538102, 2652687362, 2176922, 16632472, 33297, 7510634
			},
			.prefetch0 = 36340,
			.prefetch1 = 22936,
			.ram = lsrl_final_ram_22,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_22,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "023 LSR.l 1, D6 e28e",
		.initial = {
			.regs = {
				2509948381, 2186276096, 3080715334, 2057263075, 4190688305, 3952994470, 631670742, 2214471963, 1559145809, 1250045721, 887267328, 3989600938, 2010846662, 2976610674, 1255038137, 61450, 6495810, 1555, 11310622
			},
			.prefetch0 = 57998,
			.prefetch1 = 6691,
			.ram = lsrl_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2509948381, 2186276096, 3080715334, 2057263075, 4190688305, 3952994470, 315835371, 2214471963, 1559145809, 1250045721, 887267328, 3989600938, 2010846662, 2976610674, 1255038137, 61450, 6495810, 1536, 11310624
			},
			.prefetch0 = 6691,
			.prefetch1 = 21997,
			.ram = lsrl_final_ram_23,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_23,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "024 LSR.l 4, D2 e88a",
		.initial = {
			.regs = {
				3448655311, 3427689801, 3938947533, 3507994287, 1086021999, 251223909, 2214889310, 1160847147, 3985624925, 3128440518, 3681242979, 1354668758, 2436288180, 1445151992, 1170135062, 2117616, 3173700, 33280, 15822510
			},
			.prefetch0 = 59530,
			.prefetch1 = 59750,
			.ram = lsrl_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3448655311, 3427689801, 246184220, 3507994287, 1086021999, 251223909, 2214889310, 1160847147, 3985624925, 3128440518, 3681242979, 1354668758, 2436288180, 1445151992, 1170135062, 2117616, 3173700, 33297, 15822512
			},
			.prefetch0 = 59750,
			.prefetch1 = 9658,
			.ram = lsrl_final_ram_24,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_24,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "025 LSR.l D2, D4 e4ac",
		.initial = {
			.regs = {
				4041382939, 4031983020, 1625853731, 923523840, 3859986955, 4080313196, 1130516184, 1220449624, 2382426346, 1814584211, 2072713807, 3530234419, 719538346, 681787327, 3979790763, 1067522, 13163912, 8716, 4688020
			},
			.prefetch0 = 58540,
			.prefetch1 = 46111,
			.ram = lsrl_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4041382939, 4031983020, 1625853731, 923523840, 0, 4080313196, 1130516184, 1220449624, 2382426346, 1814584211, 2072713807, 3530234419, 719538346, 681787327, 3979790763, 1067522, 13163912, 8708, 4688022
			},
			.prefetch0 = 46111,
			.prefetch1 = 35202,
			.ram = lsrl_final_ram_25,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_25,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "026 LSR.l 4, D5 e88d",
		.initial = {
			.regs = {
				113887707, 3635227632, 2287135566, 3660561803, 2002363481, 3992357532, 3091564147, 51415443, 3072357931, 2638835662, 2637959004, 2047841532, 2861774150, 1346878615, 4144686559, 12338198, 16771362, 32782, 1669976
			},
			.prefetch0 = 59533,
			.prefetch1 = 40559,
			.ram = lsrl_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				113887707, 3635227632, 2287135566, 3660561803, 2002363481, 249522345, 3091564147, 51415443, 3072357931, 2638835662, 2637959004, 2047841532, 2861774150, 1346878615, 4144686559, 12338198, 16771362, 32785, 1669978
			},
			.prefetch0 = 40559,
			.prefetch1 = 33992,
			.ram = lsrl_final_ram_26,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_26,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "027 LSR.l D7, D6 eeae",
		.initial = {
			.regs = {
				654784485, 3989912806, 4015988034, 1696623418, 3134434130, 3921669584, 3924925358, 1126925101, 3926362861, 3605005922, 4268328406, 665128016, 1733246063, 4079360283, 759404603, 10076376, 1836564, 34075, 3419026
			},
			.prefetch0 = 61102,
			.prefetch1 = 445,
			.ram = lsrl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				654784485, 3989912806, 4015988034, 1696623418, 3134434130, 3921669584, 0, 1126925101, 3926362861, 3605005922, 4268328406, 665128016, 1733246063, 4079360283, 759404603, 10076376, 1836564, 34052, 3419028
			},
			.prefetch0 = 445,
			.prefetch1 = 36859,
			.ram = lsrl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_27,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "028 LSR.l 7, D1 ee89",
		.initial = {
			.regs = {
				1064906188, 1211519863, 622321050, 111974873, 1152486744, 1064297222, 3147408540, 3186021485, 2944572036, 2890109623, 1518357098, 2038167003, 4219605811, 3622693738, 1666789891, 6609064, 7549266, 8195, 12402348
			},
			.prefetch0 = 61065,
			.prefetch1 = 51430,
			.ram = lsrl_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1064906188, 9464998, 622321050, 111974873, 1152486744, 1064297222, 3147408540, 3186021485, 2944572036, 2890109623, 1518357098, 2038167003, 4219605811, 3622693738, 1666789891, 6609064, 7549266, 8209, 12402350
			},
			.prefetch0 = 51430,
			.prefetch1 = 21950,
			.ram = lsrl_final_ram_28,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_28,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "029 LSR.l 6, D5 ec8d",
		.initial = {
			.regs = {
				4070363304, 2887371795, 1075953260, 2264010972, 994777805, 4017139507, 397210385, 2343904385, 1397782145, 1494015239, 4104143049, 3952794203, 342982907, 4285794484, 2714036527, 9425202, 7341148, 41218, 13298872
			},
			.prefetch0 = 60557,
			.prefetch1 = 46013,
			.ram = lsrl_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4070363304, 2887371795, 1075953260, 2264010972, 994777805, 62767804, 397210385, 2343904385, 1397782145, 1494015239, 4104143049, 3952794203, 342982907, 4285794484, 2714036527, 9425202, 7341148, 41233, 13298874
			},
			.prefetch0 = 46013,
			.prefetch1 = 25630,
			.ram = lsrl_final_ram_29,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_29,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "030 LSR.l D4, D7 e8af",
		.initial = {
			.regs = {
				2578096094, 2109293308, 1482515855, 637168343, 3935003769, 2299161566, 1040325510, 485704265, 264897419, 900660581, 202879465, 3962872459, 3068142022, 1327350527, 3167066868, 11121198, 13171124, 9494, 1545114
			},
			.prefetch0 = 59567,
			.prefetch1 = 13126,
			.ram = lsrl_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2578096094, 2109293308, 1482515855, 637168343, 3935003769, 2299161566, 1040325510, 0, 264897419, 900660581, 202879465, 3962872459, 3068142022, 1327350527, 3167066868, 11121198, 13171124, 9476, 1545116
			},
			.prefetch0 = 13126,
			.prefetch1 = 9192,
			.ram = lsrl_final_ram_30,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_30,
		.transactions_len = 2,
		.lenght = 122,
	},
	{
		.name = "031 LSR.l 5, D6 ea8e",
		.initial = {
			.regs = {
				698990990, 2405938642, 234404732, 4154848485, 2415309729, 2289273730, 2483275687, 1856240499, 311968881, 1114714970, 2342416995, 2688109778, 325080345, 3020757730, 3630807515, 4608138, 9878884, 8704, 2558712
			},
			.prefetch0 = 60046,
			.prefetch1 = 20732,
			.ram = lsrl_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				698990990, 2405938642, 234404732, 4154848485, 2415309729, 2289273730, 77602365, 1856240499, 311968881, 1114714970, 2342416995, 2688109778, 325080345, 3020757730, 3630807515, 4608138, 9878884, 8704, 2558714
			},
			.prefetch0 = 20732,
			.prefetch1 = 58538,
			.ram = lsrl_final_ram_31,
			.ram_len = 6,
		},
		.transactions = lsrl_transactions_31,
		.transactions_len = 2,
		.lenght = 18,
	},
};

#endif /* RBT_LSRL_H */