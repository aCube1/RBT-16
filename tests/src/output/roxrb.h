#ifndef RBT_ROXRB_H
#define RBT_ROXRB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxrb_initial_ram_0[] = {
		{ .addr = 0x210384, .byte = 0xec },
		{ .addr = 0x210385, .byte = 0x31 },
		{ .addr = 0x210386, .byte = 0x03 },
		{ .addr = 0x210387, .byte = 0x3f },
		{ .addr = 0x210388, .byte = 0xeb },
		{ .addr = 0x210389, .byte = 0xb1 }
};

static const SST_RamByte roxrb_final_ram_0[] = {
		{ .addr = 0x210384, .byte = 0xec },
		{ .addr = 0x210385, .byte = 0x31 },
		{ .addr = 0x210386, .byte = 0x03 },
		{ .addr = 0x210387, .byte = 0x3f },
		{ .addr = 0x210388, .byte = 0xeb },
		{ .addr = 0x210389, .byte = 0xb1 }
};

static const SST_Transaction roxrb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2163592, .data = 60337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte roxrb_initial_ram_1[] = {
		{ .addr = 0x0d2a42, .byte = 0xe6 },
		{ .addr = 0x0d2a43, .byte = 0x37 },
		{ .addr = 0x0d2a44, .byte = 0x97 },
		{ .addr = 0x0d2a45, .byte = 0x15 },
		{ .addr = 0x0d2a46, .byte = 0xb3 },
		{ .addr = 0x0d2a47, .byte = 0x11 }
};

static const SST_RamByte roxrb_final_ram_1[] = {
		{ .addr = 0x0d2a42, .byte = 0xe6 },
		{ .addr = 0x0d2a43, .byte = 0x37 },
		{ .addr = 0x0d2a44, .byte = 0x97 },
		{ .addr = 0x0d2a45, .byte = 0x15 },
		{ .addr = 0x0d2a46, .byte = 0xb3 },
		{ .addr = 0x0d2a47, .byte = 0x11 }
};

static const SST_Transaction roxrb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 862790, .data = 45841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte roxrb_initial_ram_2[] = {
		{ .addr = 0xea7822, .byte = 0xec },
		{ .addr = 0xea7823, .byte = 0x14 },
		{ .addr = 0xea7824, .byte = 0xa2 },
		{ .addr = 0xea7825, .byte = 0x10 },
		{ .addr = 0xea7826, .byte = 0xfd },
		{ .addr = 0xea7827, .byte = 0x10 }
};

static const SST_RamByte roxrb_final_ram_2[] = {
		{ .addr = 0xea7822, .byte = 0xec },
		{ .addr = 0xea7823, .byte = 0x14 },
		{ .addr = 0xea7824, .byte = 0xa2 },
		{ .addr = 0xea7825, .byte = 0x10 },
		{ .addr = 0xea7826, .byte = 0xfd },
		{ .addr = 0xea7827, .byte = 0x10 }
};

static const SST_Transaction roxrb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15366182, .data = 64784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrb_initial_ram_3[] = {
		{ .addr = 0xf348a6, .byte = 0xe0 },
		{ .addr = 0xf348a7, .byte = 0x34 },
		{ .addr = 0xf348a8, .byte = 0x4c },
		{ .addr = 0xf348a9, .byte = 0xde },
		{ .addr = 0xf348aa, .byte = 0xdc },
		{ .addr = 0xf348ab, .byte = 0x77 }
};

static const SST_RamByte roxrb_final_ram_3[] = {
		{ .addr = 0xf348a6, .byte = 0xe0 },
		{ .addr = 0xf348a7, .byte = 0x34 },
		{ .addr = 0xf348a8, .byte = 0x4c },
		{ .addr = 0xf348a9, .byte = 0xde },
		{ .addr = 0xf348aa, .byte = 0xdc },
		{ .addr = 0xf348ab, .byte = 0x77 }
};

static const SST_Transaction roxrb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15943850, .data = 56439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 78 },
};

static const SST_RamByte roxrb_initial_ram_4[] = {
		{ .addr = 0xc95ec8, .byte = 0xe6 },
		{ .addr = 0xc95ec9, .byte = 0x13 },
		{ .addr = 0xc95eca, .byte = 0xaf },
		{ .addr = 0xc95ecb, .byte = 0x8c },
		{ .addr = 0xc95ecc, .byte = 0x3c },
		{ .addr = 0xc95ecd, .byte = 0x03 }
};

static const SST_RamByte roxrb_final_ram_4[] = {
		{ .addr = 0xc95ec8, .byte = 0xe6 },
		{ .addr = 0xc95ec9, .byte = 0x13 },
		{ .addr = 0xc95eca, .byte = 0xaf },
		{ .addr = 0xc95ecb, .byte = 0x8c },
		{ .addr = 0xc95ecc, .byte = 0x3c },
		{ .addr = 0xc95ecd, .byte = 0x03 }
};

static const SST_Transaction roxrb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13197004, .data = 15363, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrb_initial_ram_5[] = {
		{ .addr = 0x6dea1a, .byte = 0xe6 },
		{ .addr = 0x6dea1b, .byte = 0x32 },
		{ .addr = 0x6dea1c, .byte = 0x1d },
		{ .addr = 0x6dea1d, .byte = 0xf8 },
		{ .addr = 0x6dea1e, .byte = 0x4d },
		{ .addr = 0x6dea1f, .byte = 0x76 }
};

static const SST_RamByte roxrb_final_ram_5[] = {
		{ .addr = 0x6dea1a, .byte = 0xe6 },
		{ .addr = 0x6dea1b, .byte = 0x32 },
		{ .addr = 0x6dea1c, .byte = 0x1d },
		{ .addr = 0x6dea1d, .byte = 0xf8 },
		{ .addr = 0x6dea1e, .byte = 0x4d },
		{ .addr = 0x6dea1f, .byte = 0x76 }
};

static const SST_Transaction roxrb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7203358, .data = 19830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 40 },
};

static const SST_RamByte roxrb_initial_ram_6[] = {
		{ .addr = 0x7c7e82, .byte = 0xe4 },
		{ .addr = 0x7c7e83, .byte = 0x33 },
		{ .addr = 0x7c7e84, .byte = 0xb7 },
		{ .addr = 0x7c7e85, .byte = 0x53 },
		{ .addr = 0x7c7e86, .byte = 0x07 },
		{ .addr = 0x7c7e87, .byte = 0x7e }
};

static const SST_RamByte roxrb_final_ram_6[] = {
		{ .addr = 0x7c7e82, .byte = 0xe4 },
		{ .addr = 0x7c7e83, .byte = 0x33 },
		{ .addr = 0x7c7e84, .byte = 0xb7 },
		{ .addr = 0x7c7e85, .byte = 0x53 },
		{ .addr = 0x7c7e86, .byte = 0x07 },
		{ .addr = 0x7c7e87, .byte = 0x7e }
};

static const SST_Transaction roxrb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8158854, .data = 1918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

static const SST_RamByte roxrb_initial_ram_7[] = {
		{ .addr = 0xd6479a, .byte = 0xee },
		{ .addr = 0xd6479b, .byte = 0x11 },
		{ .addr = 0xd6479c, .byte = 0x13 },
		{ .addr = 0xd6479d, .byte = 0xf1 },
		{ .addr = 0xd6479e, .byte = 0x59 },
		{ .addr = 0xd6479f, .byte = 0x00 }
};

static const SST_RamByte roxrb_final_ram_7[] = {
		{ .addr = 0xd6479a, .byte = 0xee },
		{ .addr = 0xd6479b, .byte = 0x11 },
		{ .addr = 0xd6479c, .byte = 0x13 },
		{ .addr = 0xd6479d, .byte = 0xf1 },
		{ .addr = 0xd6479e, .byte = 0x59 },
		{ .addr = 0xd6479f, .byte = 0x00 }
};

static const SST_Transaction roxrb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14043038, .data = 22784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrb_initial_ram_8[] = {
		{ .addr = 0xcd0028, .byte = 0xe0 },
		{ .addr = 0xcd0029, .byte = 0x15 },
		{ .addr = 0xcd002a, .byte = 0x3d },
		{ .addr = 0xcd002b, .byte = 0xbb },
		{ .addr = 0xcd002c, .byte = 0xb6 },
		{ .addr = 0xcd002d, .byte = 0x0f }
};

static const SST_RamByte roxrb_final_ram_8[] = {
		{ .addr = 0xcd0028, .byte = 0xe0 },
		{ .addr = 0xcd0029, .byte = 0x15 },
		{ .addr = 0xcd002a, .byte = 0x3d },
		{ .addr = 0xcd002b, .byte = 0xbb },
		{ .addr = 0xcd002c, .byte = 0xb6 },
		{ .addr = 0xcd002d, .byte = 0x0f }
};

static const SST_Transaction roxrb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13434924, .data = 46607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrb_initial_ram_9[] = {
		{ .addr = 0xa074c2, .byte = 0xe4 },
		{ .addr = 0xa074c3, .byte = 0x30 },
		{ .addr = 0xa074c4, .byte = 0xee },
		{ .addr = 0xa074c5, .byte = 0x0f },
		{ .addr = 0xa074c6, .byte = 0x56 },
		{ .addr = 0xa074c7, .byte = 0xe5 }
};

static const SST_RamByte roxrb_final_ram_9[] = {
		{ .addr = 0xa074c2, .byte = 0xe4 },
		{ .addr = 0xa074c3, .byte = 0x30 },
		{ .addr = 0xa074c4, .byte = 0xee },
		{ .addr = 0xa074c5, .byte = 0x0f },
		{ .addr = 0xa074c6, .byte = 0x56 },
		{ .addr = 0xa074c7, .byte = 0xe5 }
};

static const SST_Transaction roxrb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10515654, .data = 22245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 120 },
};

static const SST_RamByte roxrb_initial_ram_10[] = {
		{ .addr = 0x7eb562, .byte = 0xe6 },
		{ .addr = 0x7eb563, .byte = 0x15 },
		{ .addr = 0x7eb564, .byte = 0xdc },
		{ .addr = 0x7eb565, .byte = 0xb9 },
		{ .addr = 0x7eb566, .byte = 0x47 },
		{ .addr = 0x7eb567, .byte = 0x3b }
};

static const SST_RamByte roxrb_final_ram_10[] = {
		{ .addr = 0x7eb562, .byte = 0xe6 },
		{ .addr = 0x7eb563, .byte = 0x15 },
		{ .addr = 0x7eb564, .byte = 0xdc },
		{ .addr = 0x7eb565, .byte = 0xb9 },
		{ .addr = 0x7eb566, .byte = 0x47 },
		{ .addr = 0x7eb567, .byte = 0x3b }
};

static const SST_Transaction roxrb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8303974, .data = 18235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrb_initial_ram_11[] = {
		{ .addr = 0x601d22, .byte = 0xe2 },
		{ .addr = 0x601d23, .byte = 0x11 },
		{ .addr = 0x601d24, .byte = 0xa9 },
		{ .addr = 0x601d25, .byte = 0x00 },
		{ .addr = 0x601d26, .byte = 0xaf },
		{ .addr = 0x601d27, .byte = 0x26 }
};

static const SST_RamByte roxrb_final_ram_11[] = {
		{ .addr = 0x601d22, .byte = 0xe2 },
		{ .addr = 0x601d23, .byte = 0x11 },
		{ .addr = 0x601d24, .byte = 0xa9 },
		{ .addr = 0x601d25, .byte = 0x00 },
		{ .addr = 0x601d26, .byte = 0xaf },
		{ .addr = 0x601d27, .byte = 0x26 }
};

static const SST_Transaction roxrb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6298918, .data = 44838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte roxrb_initial_ram_12[] = {
		{ .addr = 0x2f287c, .byte = 0xe8 },
		{ .addr = 0x2f287d, .byte = 0x13 },
		{ .addr = 0x2f287e, .byte = 0xcf },
		{ .addr = 0x2f287f, .byte = 0x96 },
		{ .addr = 0x2f2880, .byte = 0xa5 },
		{ .addr = 0x2f2881, .byte = 0x3c }
};

static const SST_RamByte roxrb_final_ram_12[] = {
		{ .addr = 0x2f287c, .byte = 0xe8 },
		{ .addr = 0x2f287d, .byte = 0x13 },
		{ .addr = 0x2f287e, .byte = 0xcf },
		{ .addr = 0x2f287f, .byte = 0x96 },
		{ .addr = 0x2f2880, .byte = 0xa5 },
		{ .addr = 0x2f2881, .byte = 0x3c }
};

static const SST_Transaction roxrb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3090560, .data = 42300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrb_initial_ram_13[] = {
		{ .addr = 0x9a67dc, .byte = 0xe0 },
		{ .addr = 0x9a67dd, .byte = 0x17 },
		{ .addr = 0x9a67de, .byte = 0x6f },
		{ .addr = 0x9a67df, .byte = 0x3a },
		{ .addr = 0x9a67e0, .byte = 0xcf },
		{ .addr = 0x9a67e1, .byte = 0x62 }
};

static const SST_RamByte roxrb_final_ram_13[] = {
		{ .addr = 0x9a67dc, .byte = 0xe0 },
		{ .addr = 0x9a67dd, .byte = 0x17 },
		{ .addr = 0x9a67de, .byte = 0x6f },
		{ .addr = 0x9a67df, .byte = 0x3a },
		{ .addr = 0x9a67e0, .byte = 0xcf },
		{ .addr = 0x9a67e1, .byte = 0x62 }
};

static const SST_Transaction roxrb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10119136, .data = 53090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrb_initial_ram_14[] = {
		{ .addr = 0xf458bc, .byte = 0xec },
		{ .addr = 0xf458bd, .byte = 0x17 },
		{ .addr = 0xf458be, .byte = 0x2c },
		{ .addr = 0xf458bf, .byte = 0x3b },
		{ .addr = 0xf458c0, .byte = 0x03 },
		{ .addr = 0xf458c1, .byte = 0xbe }
};

static const SST_RamByte roxrb_final_ram_14[] = {
		{ .addr = 0xf458bc, .byte = 0xec },
		{ .addr = 0xf458bd, .byte = 0x17 },
		{ .addr = 0xf458be, .byte = 0x2c },
		{ .addr = 0xf458bf, .byte = 0x3b },
		{ .addr = 0xf458c0, .byte = 0x03 },
		{ .addr = 0xf458c1, .byte = 0xbe }
};

static const SST_Transaction roxrb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16013504, .data = 958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrb_initial_ram_15[] = {
		{ .addr = 0xb2b928, .byte = 0xe8 },
		{ .addr = 0xb2b929, .byte = 0x31 },
		{ .addr = 0xb2b92a, .byte = 0x50 },
		{ .addr = 0xb2b92b, .byte = 0x9a },
		{ .addr = 0xb2b92c, .byte = 0x1c },
		{ .addr = 0xb2b92d, .byte = 0xf0 }
};

static const SST_RamByte roxrb_final_ram_15[] = {
		{ .addr = 0xb2b928, .byte = 0xe8 },
		{ .addr = 0xb2b929, .byte = 0x31 },
		{ .addr = 0xb2b92a, .byte = 0x50 },
		{ .addr = 0xb2b92b, .byte = 0x9a },
		{ .addr = 0xb2b92c, .byte = 0x1c },
		{ .addr = 0xb2b92d, .byte = 0xf0 }
};

static const SST_Transaction roxrb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11712812, .data = 7408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

const uint32_t ROXRB_TEST_COUNT = 16;
static const SST_TestCase roxrb[] = {
	{
		.name = "000 ROXR.b D6, D1 ec31",
		.initial = {
			.regs = {
				3623841440, 3198346320, 3386104119, 552690540, 4112752369, 2557529842, 1599728174, 1542238217, 2158505195, 4052486220, 3152230173, 3850791191, 2370211014, 797637923, 2900650829, 4168450, 5012426, 34306, 2163592
			},
			.prefetch0 = 60465,
			.prefetch1 = 831,
			.ram = roxrb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3623841440, 3198346280, 3386104119, 552690540, 4112752369, 2557529842, 1599728174, 1542238217, 2158505195, 4052486220, 3152230173, 3850791191, 2370211014, 797637923, 2900650829, 4168450, 5012426, 34304, 2163594
			},
			.prefetch0 = 831,
			.prefetch1 = 60337,
			.ram = roxrb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_0,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "001 ROXR.b D3, D7 e637",
		.initial = {
			.regs = {
				3955802285, 2873352649, 3896981049, 1712214939, 3867874357, 1521383477, 3818508784, 3713394239, 3173452334, 1762441970, 3674935749, 2521918737, 1785518079, 2622116907, 2557469463, 10029636, 1665662, 8194, 862790
			},
			.prefetch0 = 58935,
			.prefetch1 = 38677,
			.ram = roxrb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3955802285, 2873352649, 3896981049, 1712214939, 3867874357, 1521383477, 3818508784, 3713394239, 3173452334, 1762441970, 3674935749, 2521918737, 1785518079, 2622116907, 2557469463, 10029636, 1665662, 8192, 862792
			},
			.prefetch0 = 38677,
			.prefetch1 = 45841,
			.ram = roxrb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_1,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "002 ROXR.b 6, D4 ec14",
		.initial = {
			.regs = {
				3411919093, 270616134, 2073794802, 2861570520, 2410857770, 4140010555, 3775774448, 2017531986, 3557840843, 2730980962, 979664822, 3010001288, 2473355767, 2100044683, 1901575239, 14816566, 5779020, 1290, 15366182
			},
			.prefetch0 = 60436,
			.prefetch1 = 41488,
			.ram = roxrb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3411919093, 270616134, 2073794802, 2861570520, 2410857808, 4140010555, 3775774448, 2017531986, 3557840843, 2730980962, 979664822, 3010001288, 2473355767, 2100044683, 1901575239, 14816566, 5779020, 1297, 15366184
			},
			.prefetch0 = 41488,
			.prefetch1 = 64784,
			.ram = roxrb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_2,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "003 ROXR.b D0, D4 e034",
		.initial = {
			.regs = {
				24604646, 2491272822, 2163616301, 1786832284, 2746872398, 989869056, 3094405497, 2175956382, 4242925738, 1476640198, 2091356420, 2575558407, 3903436520, 303475217, 1228634161, 8111412, 3057864, 32794, 15943850
			},
			.prefetch0 = 57396,
			.prefetch1 = 19678,
			.ram = roxrb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				24604646, 2491272822, 2163616301, 1786832284, 2746872403, 989869056, 3094405497, 2175956382, 4242925738, 1476640198, 2091356420, 2575558407, 3903436520, 303475217, 1228634161, 8111412, 3057864, 32785, 15943852
			},
			.prefetch0 = 19678,
			.prefetch1 = 56439,
			.ram = roxrb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_3,
		.transactions_len = 2,
		.lenght = 82,
	},
	{
		.name = "004 ROXR.b 3, D3 e613",
		.initial = {
			.regs = {
				3436961865, 1569066274, 2308893182, 1593647778, 1233848092, 4189639450, 1643515893, 1027521833, 3771725428, 1448058382, 1915527917, 3939696227, 4194380249, 3863097121, 2507878080, 3468894, 5665150, 9993, 13197004
			},
			.prefetch0 = 58899,
			.prefetch1 = 44940,
			.ram = roxrb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3436961865, 1569066274, 2308893182, 1593647764, 1233848092, 4189639450, 1643515893, 1027521833, 3771725428, 1448058382, 1915527917, 3939696227, 4194380249, 3863097121, 2507878080, 3468894, 5665150, 9992, 13197006
			},
			.prefetch0 = 44940,
			.prefetch1 = 15363,
			.ram = roxrb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_4,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "005 ROXR.b D3, D2 e632",
		.initial = {
			.regs = {
				840009084, 1027738922, 3799379320, 4118073811, 3398162568, 1636909915, 2949656110, 2162327400, 2006330245, 2414729779, 1790982881, 405503359, 1570908301, 4208702647, 1796576049, 9641658, 8046968, 9501, 7203358
			},
			.prefetch0 = 58930,
			.prefetch1 = 7672,
			.ram = roxrb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				840009084, 1027738922, 3799379388, 4118073811, 3398162568, 1636909915, 2949656110, 2162327400, 2006330245, 2414729779, 1790982881, 405503359, 1570908301, 4208702647, 1796576049, 9641658, 8046968, 9480, 7203360
			},
			.prefetch0 = 7672,
			.prefetch1 = 19830,
			.ram = roxrb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_5,
		.transactions_len = 2,
		.lenght = 44,
	},
	{
		.name = "006 ROXR.b D2, D3 e433",
		.initial = {
			.regs = {
				1727092143, 3889552038, 3924715754, 2368386102, 1735619417, 1558650647, 2501334025, 1556456797, 1649535389, 821840276, 2972739306, 2674815682, 3611819032, 2377680886, 930213016, 13813158, 14930198, 41744, 8158854
			},
			.prefetch0 = 58419,
			.prefetch1 = 46931,
			.ram = roxrb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1727092143, 3889552038, 3924715754, 2368386228, 1735619417, 1558650647, 2501334025, 1556456797, 1649535389, 821840276, 2972739306, 2674815682, 3611819032, 2377680886, 930213016, 13813158, 14930198, 41753, 8158856
			},
			.prefetch0 = 46931,
			.prefetch1 = 1918,
			.ram = roxrb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_6,
		.transactions_len = 2,
		.lenght = 90,
	},
	{
		.name = "007 ROXR.b 7, D1 ee11",
		.initial = {
			.regs = {
				3775706477, 304201729, 3671068827, 2006807780, 824798765, 3076685385, 2791969991, 945063881, 3283850243, 3517878788, 1051899160, 2874815492, 3081525401, 3135280646, 2013181960, 9198562, 6903506, 40973, 14043038
			},
			.prefetch0 = 60945,
			.prefetch1 = 5105,
			.ram = roxrb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3775706477, 304201732, 3671068827, 2006807780, 824798765, 3076685385, 2791969991, 945063881, 3283850243, 3517878788, 1051899160, 2874815492, 3081525401, 3135280646, 2013181960, 9198562, 6903506, 40960, 14043040
			},
			.prefetch0 = 5105,
			.prefetch1 = 22784,
			.ram = roxrb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_7,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "008 ROXR.b 8, D5 e015",
		.initial = {
			.regs = {
				794885470, 2403002096, 464386449, 404458671, 2501737655, 3933984990, 1767254966, 3088238113, 3118953808, 435572837, 3294261675, 1010147109, 434998714, 1794133333, 2453639445, 5758548, 7679892, 34053, 13434924
			},
			.prefetch0 = 57365,
			.prefetch1 = 15803,
			.ram = roxrb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				794885470, 2403002096, 464386449, 404458671, 2501737655, 3933984956, 1767254966, 3088238113, 3118953808, 435572837, 3294261675, 1010147109, 434998714, 1794133333, 2453639445, 5758548, 7679892, 34073, 13434926
			},
			.prefetch0 = 15803,
			.prefetch1 = 46607,
			.ram = roxrb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_8,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "009 ROXR.b D2, D0 e430",
		.initial = {
			.regs = {
				4089985635, 2808374736, 3933962555, 1081452552, 3240735115, 975665174, 482933893, 1876312672, 1191988853, 508386147, 4291146973, 1966130476, 2603492198, 543824897, 448374893, 10380522, 2498626, 41739, 10515654
			},
			.prefetch0 = 58416,
			.prefetch1 = 60943,
			.ram = roxrb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4089985587, 2808374736, 3933962555, 1081452552, 3240735115, 975665174, 482933893, 1876312672, 1191988853, 508386147, 4291146973, 1966130476, 2603492198, 543824897, 448374893, 10380522, 2498626, 41728, 10515656
			},
			.prefetch0 = 60943,
			.prefetch1 = 22245,
			.ram = roxrb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_9,
		.transactions_len = 2,
		.lenght = 124,
	},
	{
		.name = "010 ROXR.b 3, D5 e615",
		.initial = {
			.regs = {
				821108416, 2500282072, 3483986035, 4084747875, 2283073786, 2011807223, 1543550232, 1663636161, 532553762, 4241826593, 3778612960, 1687925062, 1196850671, 36033142, 2072588760, 8520266, 2540568, 9476, 8303974
			},
			.prefetch0 = 58901,
			.prefetch1 = 56505,
			.ram = roxrb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				821108416, 2500282072, 3483986035, 4084747875, 2283073786, 2011807198, 1543550232, 1663636161, 532553762, 4241826593, 3778612960, 1687925062, 1196850671, 36033142, 2072588760, 8520266, 2540568, 9497, 8303976
			},
			.prefetch0 = 56505,
			.prefetch1 = 18235,
			.ram = roxrb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_10,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "011 ROXR.b 1, D1 e211",
		.initial = {
			.regs = {
				1017950149, 4272153014, 2798019645, 3355446016, 1141594779, 4037912480, 659667920, 4106854451, 640817104, 4282140208, 3445644131, 3768520027, 1543082044, 849479702, 3840667904, 1087678, 972562, 1816, 6298918
			},
			.prefetch0 = 57873,
			.prefetch1 = 43264,
			.ram = roxrb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1017950149, 4272153051, 2798019645, 3355446016, 1141594779, 4037912480, 659667920, 4106854451, 640817104, 4282140208, 3445644131, 3768520027, 1543082044, 849479702, 3840667904, 1087678, 972562, 1800, 6298920
			},
			.prefetch0 = 43264,
			.prefetch1 = 44838,
			.ram = roxrb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 ROXR.b 4, D3 e813",
		.initial = {
			.regs = {
				364797761, 4210731555, 1756957812, 2721559936, 3245518489, 2434835110, 829415840, 897631704, 134470206, 3186735632, 1636155367, 1913420021, 2200112801, 2777806332, 934086568, 13629388, 7904782, 34572, 3090560
			},
			.prefetch0 = 59411,
			.prefetch1 = 53142,
			.ram = roxrb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				364797761, 4210731555, 1756957812, 2721559816, 3245518489, 2434835110, 829415840, 897631704, 134470206, 3186735632, 1636155367, 1913420021, 2200112801, 2777806332, 934086568, 13629388, 7904782, 34560, 3090562
			},
			.prefetch0 = 53142,
			.prefetch1 = 42300,
			.ram = roxrb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_12,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "013 ROXR.b 8, D7 e017",
		.initial = {
			.regs = {
				1538957536, 3220783285, 1438230208, 2587211810, 1616796990, 43331087, 691020892, 4133488216, 3475196923, 4116264139, 2155963638, 784071170, 171640657, 4281669809, 2856544020, 16130158, 13273704, 41737, 10119136
			},
			.prefetch0 = 57367,
			.prefetch1 = 28474,
			.ram = roxrb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1538957536, 3220783285, 1438230208, 2587211810, 1616796990, 43331087, 691020892, 4133488304, 3475196923, 4116264139, 2155963638, 784071170, 171640657, 4281669809, 2856544020, 16130158, 13273704, 41736, 10119138
			},
			.prefetch0 = 28474,
			.prefetch1 = 53090,
			.ram = roxrb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_13,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "014 ROXR.b 6, D7 ec17",
		.initial = {
			.regs = {
				2249236637, 2862371381, 313846869, 3449455268, 3352146143, 854953721, 1664738564, 2082864736, 173055772, 3649505245, 4158176957, 1320148759, 3160610948, 585542590, 506713381, 11507614, 7752706, 9991, 16013504
			},
			.prefetch0 = 60439,
			.prefetch1 = 11323,
			.ram = roxrb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2249236637, 2862371381, 313846869, 3449455268, 3352146143, 854953721, 1664738564, 2082864641, 173055772, 3649505245, 4158176957, 1320148759, 3160610948, 585542590, 506713381, 11507614, 7752706, 10001, 16013506
			},
			.prefetch0 = 11323,
			.prefetch1 = 958,
			.ram = roxrb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_14,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "015 ROXR.b D4, D1 e831",
		.initial = {
			.regs = {
				4023968480, 1134613110, 3707019450, 2761405097, 1261242876, 2627374778, 2510066234, 3099765882, 3844692182, 3276201529, 2485436227, 897641558, 1715822972, 1176645119, 2584168451, 10507574, 12673544, 42765, 11712812
			},
			.prefetch0 = 59441,
			.prefetch1 = 20634,
			.ram = roxrb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4023968480, 1134613169, 3707019450, 2761405097, 1261242876, 2627374778, 2510066234, 3099765882, 3844692182, 3276201529, 2485436227, 897641558, 1715822972, 1176645119, 2584168451, 10507574, 12673544, 42777, 11712814
			},
			.prefetch0 = 20634,
			.prefetch1 = 7408,
			.ram = roxrb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_15,
		.transactions_len = 2,
		.lenght = 126,
	},
};

#endif /* RBT_ROXRB_H */