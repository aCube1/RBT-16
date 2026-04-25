#ifndef RBT_ROXRL_H
#define RBT_ROXRL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxrl_initial_ram_0[] = {
		{ .addr = 0xf39b80, .byte = 0xe4 },
		{ .addr = 0xf39b81, .byte = 0x91 },
		{ .addr = 0xf39b82, .byte = 0x0c },
		{ .addr = 0xf39b83, .byte = 0x21 },
		{ .addr = 0xf39b84, .byte = 0x60 },
		{ .addr = 0xf39b85, .byte = 0x78 }
};

static const SST_RamByte roxrl_final_ram_0[] = {
		{ .addr = 0xf39b80, .byte = 0xe4 },
		{ .addr = 0xf39b81, .byte = 0x91 },
		{ .addr = 0xf39b82, .byte = 0x0c },
		{ .addr = 0xf39b83, .byte = 0x21 },
		{ .addr = 0xf39b84, .byte = 0x60 },
		{ .addr = 0xf39b85, .byte = 0x78 }
};

static const SST_Transaction roxrl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15965060, .data = 24696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrl_initial_ram_1[] = {
		{ .addr = 0x80ea54, .byte = 0xe2 },
		{ .addr = 0x80ea55, .byte = 0xb5 },
		{ .addr = 0x80ea56, .byte = 0x09 },
		{ .addr = 0x80ea57, .byte = 0x9b },
		{ .addr = 0x80ea58, .byte = 0x14 },
		{ .addr = 0x80ea59, .byte = 0x29 }
};

static const SST_RamByte roxrl_final_ram_1[] = {
		{ .addr = 0x80ea54, .byte = 0xe2 },
		{ .addr = 0x80ea55, .byte = 0xb5 },
		{ .addr = 0x80ea56, .byte = 0x09 },
		{ .addr = 0x80ea57, .byte = 0x9b },
		{ .addr = 0x80ea58, .byte = 0x14 },
		{ .addr = 0x80ea59, .byte = 0x29 }
};

static const SST_Transaction roxrl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8448600, .data = 5161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte roxrl_initial_ram_2[] = {
		{ .addr = 0xdc7316, .byte = 0xea },
		{ .addr = 0xdc7317, .byte = 0xb4 },
		{ .addr = 0xdc7318, .byte = 0xac },
		{ .addr = 0xdc7319, .byte = 0xc0 },
		{ .addr = 0xdc731a, .byte = 0x4c },
		{ .addr = 0xdc731b, .byte = 0x5e }
};

static const SST_RamByte roxrl_final_ram_2[] = {
		{ .addr = 0xdc7316, .byte = 0xea },
		{ .addr = 0xdc7317, .byte = 0xb4 },
		{ .addr = 0xdc7318, .byte = 0xac },
		{ .addr = 0xdc7319, .byte = 0xc0 },
		{ .addr = 0xdc731a, .byte = 0x4c },
		{ .addr = 0xdc731b, .byte = 0x5e }
};

static const SST_Transaction roxrl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14447386, .data = 19550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte roxrl_initial_ram_3[] = {
		{ .addr = 0xab7292, .byte = 0xe6 },
		{ .addr = 0xab7293, .byte = 0x95 },
		{ .addr = 0xab7294, .byte = 0xa9 },
		{ .addr = 0xab7295, .byte = 0xe0 },
		{ .addr = 0xab7296, .byte = 0x50 },
		{ .addr = 0xab7297, .byte = 0x8b }
};

static const SST_RamByte roxrl_final_ram_3[] = {
		{ .addr = 0xab7292, .byte = 0xe6 },
		{ .addr = 0xab7293, .byte = 0x95 },
		{ .addr = 0xab7294, .byte = 0xa9 },
		{ .addr = 0xab7295, .byte = 0xe0 },
		{ .addr = 0xab7296, .byte = 0x50 },
		{ .addr = 0xab7297, .byte = 0x8b }
};

static const SST_Transaction roxrl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11235990, .data = 20619, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrl_initial_ram_4[] = {
		{ .addr = 0x2c9ef4, .byte = 0xec },
		{ .addr = 0x2c9ef5, .byte = 0xb5 },
		{ .addr = 0x2c9ef6, .byte = 0xe8 },
		{ .addr = 0x2c9ef7, .byte = 0x5e },
		{ .addr = 0x2c9ef8, .byte = 0x8d },
		{ .addr = 0x2c9ef9, .byte = 0x10 }
};

static const SST_RamByte roxrl_final_ram_4[] = {
		{ .addr = 0x2c9ef4, .byte = 0xec },
		{ .addr = 0x2c9ef5, .byte = 0xb5 },
		{ .addr = 0x2c9ef6, .byte = 0xe8 },
		{ .addr = 0x2c9ef7, .byte = 0x5e },
		{ .addr = 0x2c9ef8, .byte = 0x8d },
		{ .addr = 0x2c9ef9, .byte = 0x10 }
};

static const SST_Transaction roxrl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2924280, .data = 36112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte roxrl_initial_ram_5[] = {
		{ .addr = 0xc4c722, .byte = 0xec },
		{ .addr = 0xc4c723, .byte = 0x93 },
		{ .addr = 0xc4c724, .byte = 0x1c },
		{ .addr = 0xc4c725, .byte = 0x5f },
		{ .addr = 0xc4c726, .byte = 0x5c },
		{ .addr = 0xc4c727, .byte = 0xd4 }
};

static const SST_RamByte roxrl_final_ram_5[] = {
		{ .addr = 0xc4c722, .byte = 0xec },
		{ .addr = 0xc4c723, .byte = 0x93 },
		{ .addr = 0xc4c724, .byte = 0x1c },
		{ .addr = 0xc4c725, .byte = 0x5f },
		{ .addr = 0xc4c726, .byte = 0x5c },
		{ .addr = 0xc4c727, .byte = 0xd4 }
};

static const SST_Transaction roxrl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12896038, .data = 23764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrl_initial_ram_6[] = {
		{ .addr = 0x45b8fe, .byte = 0xe2 },
		{ .addr = 0x45b8ff, .byte = 0x92 },
		{ .addr = 0x45b900, .byte = 0xb5 },
		{ .addr = 0x45b901, .byte = 0x4d },
		{ .addr = 0x45b902, .byte = 0x3d },
		{ .addr = 0x45b903, .byte = 0x85 }
};

static const SST_RamByte roxrl_final_ram_6[] = {
		{ .addr = 0x45b8fe, .byte = 0xe2 },
		{ .addr = 0x45b8ff, .byte = 0x92 },
		{ .addr = 0x45b900, .byte = 0xb5 },
		{ .addr = 0x45b901, .byte = 0x4d },
		{ .addr = 0x45b902, .byte = 0x3d },
		{ .addr = 0x45b903, .byte = 0x85 }
};

static const SST_Transaction roxrl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4569346, .data = 15749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrl_initial_ram_7[] = {
		{ .addr = 0x7c5ef0, .byte = 0xe6 },
		{ .addr = 0x7c5ef1, .byte = 0x97 },
		{ .addr = 0x7c5ef2, .byte = 0x0a },
		{ .addr = 0x7c5ef3, .byte = 0x9b },
		{ .addr = 0x7c5ef4, .byte = 0x62 },
		{ .addr = 0x7c5ef5, .byte = 0xa5 }
};

static const SST_RamByte roxrl_final_ram_7[] = {
		{ .addr = 0x7c5ef0, .byte = 0xe6 },
		{ .addr = 0x7c5ef1, .byte = 0x97 },
		{ .addr = 0x7c5ef2, .byte = 0x0a },
		{ .addr = 0x7c5ef3, .byte = 0x9b },
		{ .addr = 0x7c5ef4, .byte = 0x62 },
		{ .addr = 0x7c5ef5, .byte = 0xa5 }
};

static const SST_Transaction roxrl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8150772, .data = 25253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrl_initial_ram_8[] = {
		{ .addr = 0xb8df64, .byte = 0xe8 },
		{ .addr = 0xb8df65, .byte = 0xb6 },
		{ .addr = 0xb8df66, .byte = 0xc6 },
		{ .addr = 0xb8df67, .byte = 0x4a },
		{ .addr = 0xb8df68, .byte = 0x7d },
		{ .addr = 0xb8df69, .byte = 0x06 }
};

static const SST_RamByte roxrl_final_ram_8[] = {
		{ .addr = 0xb8df64, .byte = 0xe8 },
		{ .addr = 0xb8df65, .byte = 0xb6 },
		{ .addr = 0xb8df66, .byte = 0xc6 },
		{ .addr = 0xb8df67, .byte = 0x4a },
		{ .addr = 0xb8df68, .byte = 0x7d },
		{ .addr = 0xb8df69, .byte = 0x06 }
};

static const SST_Transaction roxrl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12115816, .data = 32006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrl_initial_ram_9[] = {
		{ .addr = 0x687d58, .byte = 0xe8 },
		{ .addr = 0x687d59, .byte = 0x96 },
		{ .addr = 0x687d5a, .byte = 0x68 },
		{ .addr = 0x687d5b, .byte = 0x9d },
		{ .addr = 0x687d5c, .byte = 0x7c },
		{ .addr = 0x687d5d, .byte = 0xc9 }
};

static const SST_RamByte roxrl_final_ram_9[] = {
		{ .addr = 0x687d58, .byte = 0xe8 },
		{ .addr = 0x687d59, .byte = 0x96 },
		{ .addr = 0x687d5a, .byte = 0x68 },
		{ .addr = 0x687d5b, .byte = 0x9d },
		{ .addr = 0x687d5c, .byte = 0x7c },
		{ .addr = 0x687d5d, .byte = 0xc9 }
};

static const SST_Transaction roxrl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6847836, .data = 31945, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxrl_initial_ram_10[] = {
		{ .addr = 0x9c2218, .byte = 0xec },
		{ .addr = 0x9c2219, .byte = 0x95 },
		{ .addr = 0x9c221a, .byte = 0xc1 },
		{ .addr = 0x9c221b, .byte = 0x34 },
		{ .addr = 0x9c221c, .byte = 0xd3 },
		{ .addr = 0x9c221d, .byte = 0xbb }
};

static const SST_RamByte roxrl_final_ram_10[] = {
		{ .addr = 0x9c2218, .byte = 0xec },
		{ .addr = 0x9c2219, .byte = 0x95 },
		{ .addr = 0x9c221a, .byte = 0xc1 },
		{ .addr = 0x9c221b, .byte = 0x34 },
		{ .addr = 0x9c221c, .byte = 0xd3 },
		{ .addr = 0x9c221d, .byte = 0xbb }
};

static const SST_Transaction roxrl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10232348, .data = 54203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrl_initial_ram_11[] = {
		{ .addr = 0xba5188, .byte = 0xee },
		{ .addr = 0xba5189, .byte = 0x97 },
		{ .addr = 0xba518a, .byte = 0x5f },
		{ .addr = 0xba518b, .byte = 0x10 },
		{ .addr = 0xba518c, .byte = 0x32 },
		{ .addr = 0xba518d, .byte = 0x18 }
};

static const SST_RamByte roxrl_final_ram_11[] = {
		{ .addr = 0xba5188, .byte = 0xee },
		{ .addr = 0xba5189, .byte = 0x97 },
		{ .addr = 0xba518a, .byte = 0x5f },
		{ .addr = 0xba518b, .byte = 0x10 },
		{ .addr = 0xba518c, .byte = 0x32 },
		{ .addr = 0xba518d, .byte = 0x18 }
};

static const SST_Transaction roxrl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12210572, .data = 12824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrl_initial_ram_12[] = {
		{ .addr = 0xb2f5d8, .byte = 0xe0 },
		{ .addr = 0xb2f5d9, .byte = 0xb6 },
		{ .addr = 0xb2f5da, .byte = 0x6a },
		{ .addr = 0xb2f5db, .byte = 0x27 },
		{ .addr = 0xb2f5dc, .byte = 0xe0 },
		{ .addr = 0xb2f5dd, .byte = 0x08 }
};

static const SST_RamByte roxrl_final_ram_12[] = {
		{ .addr = 0xb2f5d8, .byte = 0xe0 },
		{ .addr = 0xb2f5d9, .byte = 0xb6 },
		{ .addr = 0xb2f5da, .byte = 0x6a },
		{ .addr = 0xb2f5db, .byte = 0x27 },
		{ .addr = 0xb2f5dc, .byte = 0xe0 },
		{ .addr = 0xb2f5dd, .byte = 0x08 }
};

static const SST_Transaction roxrl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11728348, .data = 57352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte roxrl_initial_ram_13[] = {
		{ .addr = 0x0f6f5e, .byte = 0xe2 },
		{ .addr = 0x0f6f5f, .byte = 0xb4 },
		{ .addr = 0x0f6f60, .byte = 0xf7 },
		{ .addr = 0x0f6f61, .byte = 0x34 },
		{ .addr = 0x0f6f62, .byte = 0x85 },
		{ .addr = 0x0f6f63, .byte = 0xa9 }
};

static const SST_RamByte roxrl_final_ram_13[] = {
		{ .addr = 0x0f6f5e, .byte = 0xe2 },
		{ .addr = 0x0f6f5f, .byte = 0xb4 },
		{ .addr = 0x0f6f60, .byte = 0xf7 },
		{ .addr = 0x0f6f61, .byte = 0x34 },
		{ .addr = 0x0f6f62, .byte = 0x85 },
		{ .addr = 0x0f6f63, .byte = 0xa9 }
};

static const SST_Transaction roxrl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1011554, .data = 34217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte roxrl_initial_ram_14[] = {
		{ .addr = 0x4a44ea, .byte = 0xea },
		{ .addr = 0x4a44eb, .byte = 0x97 },
		{ .addr = 0x4a44ec, .byte = 0x77 },
		{ .addr = 0x4a44ed, .byte = 0x89 },
		{ .addr = 0x4a44ee, .byte = 0xc7 },
		{ .addr = 0x4a44ef, .byte = 0xcf }
};

static const SST_RamByte roxrl_final_ram_14[] = {
		{ .addr = 0x4a44ea, .byte = 0xea },
		{ .addr = 0x4a44eb, .byte = 0x97 },
		{ .addr = 0x4a44ec, .byte = 0x77 },
		{ .addr = 0x4a44ed, .byte = 0x89 },
		{ .addr = 0x4a44ee, .byte = 0xc7 },
		{ .addr = 0x4a44ef, .byte = 0xcf }
};

static const SST_Transaction roxrl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4867310, .data = 51151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrl_initial_ram_15[] = {
		{ .addr = 0x6e11d6, .byte = 0xe2 },
		{ .addr = 0x6e11d7, .byte = 0xb7 },
		{ .addr = 0x6e11d8, .byte = 0xe0 },
		{ .addr = 0x6e11d9, .byte = 0x97 },
		{ .addr = 0x6e11da, .byte = 0x63 },
		{ .addr = 0x6e11db, .byte = 0x9e }
};

static const SST_RamByte roxrl_final_ram_15[] = {
		{ .addr = 0x6e11d6, .byte = 0xe2 },
		{ .addr = 0x6e11d7, .byte = 0xb7 },
		{ .addr = 0x6e11d8, .byte = 0xe0 },
		{ .addr = 0x6e11d9, .byte = 0x97 },
		{ .addr = 0x6e11da, .byte = 0x63 },
		{ .addr = 0x6e11db, .byte = 0x9e }
};

static const SST_Transaction roxrl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7213530, .data = 25502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 84 },
};

const uint32_t ROXRL_TEST_COUNT = 16;
static const SST_TestCase roxrl[] = {
	{
		.name = "000 ROXR.l 2, D1 e491",
		.initial = {
			.regs = {
				1626499950, 147021276, 1251612528, 1479115659, 2737996838, 2942975442, 1416156362, 3304479545, 2914351705, 3084561235, 1112006070, 2808150222, 1688000459, 2420340494, 654370242, 8418114, 5936636, 42251, 15965060
			},
			.prefetch0 = 58513,
			.prefetch1 = 3105,
			.ram = roxrl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1626499950, 36755319, 1251612528, 1479115659, 2737996838, 2942975442, 1416156362, 3304479545, 2914351705, 3084561235, 1112006070, 2808150222, 1688000459, 2420340494, 654370242, 8418114, 5936636, 42240, 15965062
			},
			.prefetch0 = 3105,
			.prefetch1 = 24696,
			.ram = roxrl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_0,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "001 ROXR.l D1, D5 e2b5",
		.initial = {
			.regs = {
				991317220, 2540418238, 806542493, 1900923686, 3395170519, 2849484149, 3229454956, 2263872114, 3988497409, 2628620864, 273855156, 304092709, 1903195361, 4034219102, 1537799079, 2728376, 2767172, 796, 8448600
			},
			.prefetch0 = 58037,
			.prefetch1 = 2459,
			.ram = roxrl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				991317220, 2540418238, 806542493, 1900923686, 3395170519, 2642073437, 3229454956, 2263872114, 3988497409, 2628620864, 273855156, 304092709, 1903195361, 4034219102, 1537799079, 2728376, 2767172, 776, 8448602
			},
			.prefetch0 = 2459,
			.prefetch1 = 5161,
			.ram = roxrl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_1,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "002 ROXR.l D5, D4 eab4",
		.initial = {
			.regs = {
				1956651829, 1452232921, 1973087049, 1852802191, 669307841, 3372800648, 584690886, 750598935, 3258242505, 3655155190, 2969830042, 2701260213, 923357171, 2256733873, 1769255746, 3429018, 16193880, 33801, 14447386
			},
			.prefetch0 = 60084,
			.prefetch1 = 44224,
			.ram = roxrl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1956651829, 1452232921, 1973087049, 1852802191, 2183652563, 3372800648, 584690886, 750598935, 3258242505, 3655155190, 2969830042, 2701260213, 923357171, 2256733873, 1769255746, 3429018, 16193880, 33817, 14447388
			},
			.prefetch0 = 44224,
			.prefetch1 = 19550,
			.ram = roxrl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_2,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "003 ROXR.l 3, D5 e695",
		.initial = {
			.regs = {
				3536969588, 3068269873, 1065836660, 2144791292, 2686733231, 3194510898, 3264465207, 342005572, 3818978065, 1999967666, 2039526591, 1400482842, 2030866605, 3332487239, 4035071842, 7012298, 7444880, 42496, 11235990
			},
			.prefetch0 = 59029,
			.prefetch1 = 43488,
			.ram = roxrl_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3536969588, 3068269873, 1065836660, 2144791292, 2686733231, 2546797510, 3264465207, 342005572, 3818978065, 1999967666, 2039526591, 1400482842, 2030866605, 3332487239, 4035071842, 7012298, 7444880, 42504, 11235992
			},
			.prefetch0 = 43488,
			.prefetch1 = 20619,
			.ram = roxrl_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_3,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "004 ROXR.l D6, D5 ecb5",
		.initial = {
			.regs = {
				1813091928, 2531297574, 1205638769, 1594108697, 3731589164, 3697979180, 3900937711, 1846421788, 3678290394, 2618857878, 4113478430, 793999268, 47954736, 1438112284, 2785806087, 11863764, 3307366, 8719, 2924280
			},
			.prefetch0 = 60597,
			.prefetch1 = 59486,
			.ram = roxrl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1813091928, 2531297574, 1205638769, 1594108697, 3731589164, 2036560298, 3900937711, 1846421788, 3678290394, 2618857878, 4113478430, 793999268, 47954736, 1438112284, 2785806087, 11863764, 3307366, 8721, 2924282
			},
			.prefetch0 = 59486,
			.prefetch1 = 36112,
			.ram = roxrl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_4,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "005 ROXR.l 6, D3 ec93",
		.initial = {
			.regs = {
				1655888437, 2629401214, 432246676, 3860498709, 1811881323, 1544536467, 2371354815, 2599937137, 1619681863, 119359961, 4274837479, 2299146970, 1963799473, 2451071703, 1204591049, 16242948, 14113398, 1540, 12896038
			},
			.prefetch0 = 60563,
			.prefetch1 = 7263,
			.ram = roxrl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1655888437, 2629401214, 432246676, 2878892580, 1811881323, 1544536467, 2371354815, 2599937137, 1619681863, 119359961, 4274837479, 2299146970, 1963799473, 2451071703, 1204591049, 16242948, 14113398, 1544, 12896040
			},
			.prefetch0 = 7263,
			.prefetch1 = 23764,
			.ram = roxrl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_5,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "006 ROXR.l 1, D2 e292",
		.initial = {
			.regs = {
				4117829999, 355449578, 569942580, 2335896185, 1232605764, 3485882107, 4263617545, 3336259691, 62760212, 1493696914, 3459108405, 2493053843, 2435191856, 1919575104, 3060895317, 15738264, 7463830, 42001, 4569346
			},
			.prefetch0 = 58002,
			.prefetch1 = 46413,
			.ram = roxrl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4117829999, 355449578, 2432454938, 2335896185, 1232605764, 3485882107, 4263617545, 3336259691, 62760212, 1493696914, 3459108405, 2493053843, 2435191856, 1919575104, 3060895317, 15738264, 7463830, 41992, 4569348
			},
			.prefetch0 = 46413,
			.prefetch1 = 15749,
			.ram = roxrl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_6,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "007 ROXR.l 3, D7 e697",
		.initial = {
			.regs = {
				4063602759, 89547651, 1375671943, 1169322347, 2599727435, 643066539, 188025064, 116053820, 1369408471, 415796924, 1613664805, 3096889471, 888901941, 2183372670, 976514829, 3547346, 9472830, 41757, 8150772
			},
			.prefetch0 = 59031,
			.prefetch1 = 2715,
			.ram = roxrl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4063602759, 89547651, 1375671943, 1169322347, 2599727435, 643066539, 188025064, 551377639, 1369408471, 415796924, 1613664805, 3096889471, 888901941, 2183372670, 976514829, 3547346, 9472830, 41745, 8150774
			},
			.prefetch0 = 2715,
			.prefetch1 = 25253,
			.ram = roxrl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_7,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "008 ROXR.l D4, D6 e8b6",
		.initial = {
			.regs = {
				4110494472, 1654203957, 3653488378, 3774089110, 3904184705, 3433940762, 4197096086, 369994971, 962292034, 2343035524, 1654002303, 781371929, 3264891412, 3292408287, 3890856905, 10091884, 2728242, 9997, 12115816
			},
			.prefetch0 = 59574,
			.prefetch1 = 50762,
			.ram = roxrl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4110494472, 1654203957, 3653488378, 3774089110, 3904184705, 3433940762, 2098548043, 369994971, 962292034, 2343035524, 1654002303, 781371929, 3264891412, 3292408287, 3890856905, 10091884, 2728242, 9984, 12115818
			},
			.prefetch0 = 50762,
			.prefetch1 = 32006,
			.ram = roxrl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_8,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "009 ROXR.l 4, D6 e896",
		.initial = {
			.regs = {
				3370192385, 1759545762, 1116520699, 2896025745, 2131262242, 3242267612, 2524054442, 511949087, 353926145, 1647939068, 196867871, 124831637, 1620769871, 897072847, 3117761056, 11740014, 10001584, 769, 6847836
			},
			.prefetch0 = 59542,
			.prefetch1 = 26781,
			.ram = roxrl_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3370192385, 1759545762, 1116520699, 2896025745, 2131262242, 3242267612, 1231495226, 511949087, 353926145, 1647939068, 196867871, 124831637, 1620769871, 897072847, 3117761056, 11740014, 10001584, 785, 6847838
			},
			.prefetch0 = 26781,
			.prefetch1 = 31945,
			.ram = roxrl_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_9,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "010 ROXR.l 6, D5 ec95",
		.initial = {
			.regs = {
				3668007481, 3154366283, 2250273247, 538572587, 3734173615, 246355737, 748226990, 926410510, 2858702319, 1381824269, 1777867190, 1592274694, 694434159, 2655446099, 2314544639, 13356178, 13225182, 33050, 10232348
			},
			.prefetch0 = 60565,
			.prefetch1 = 49460,
			.ram = roxrl_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3668007481, 3154366283, 2250273247, 538572587, 3734173615, 3426401372, 748226990, 926410510, 2858702319, 1381824269, 1777867190, 1592274694, 694434159, 2655446099, 2314544639, 13356178, 13225182, 33032, 10232350
			},
			.prefetch0 = 49460,
			.prefetch1 = 54203,
			.ram = roxrl_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_10,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "011 ROXR.l 7, D7 ee97",
		.initial = {
			.regs = {
				167825545, 2794421278, 552908411, 3576081173, 2984943620, 1393054592, 784741630, 1561272542, 2389757753, 3363776594, 2951918156, 3952918527, 4111093997, 679110858, 3671777702, 14393030, 8538216, 42496, 12210572
			},
			.prefetch0 = 61079,
			.prefetch1 = 24336,
			.ram = roxrl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				167825545, 2794421278, 552908411, 3576081173, 2984943620, 1393054592, 784741630, 2025463361, 2389757753, 3363776594, 2951918156, 3952918527, 4111093997, 679110858, 3671777702, 14393030, 8538216, 42513, 12210574
			},
			.prefetch0 = 24336,
			.prefetch1 = 12824,
			.ram = roxrl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_11,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "012 ROXR.l D0, D6 e0b6",
		.initial = {
			.regs = {
				4036930903, 3220824792, 3510905316, 984871424, 2937259082, 2490938048, 1475616941, 898471021, 3257819292, 421016185, 1860837826, 2284800071, 3285469316, 3684180578, 3034705890, 10142072, 3677086, 41226, 11728348
			},
			.prefetch0 = 57526,
			.prefetch1 = 27175,
			.ram = roxrl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4036930903, 3220824792, 3510905316, 984871424, 2937259082, 2490938048, 3498226863, 898471021, 3257819292, 421016185, 1860837826, 2284800071, 3285469316, 3684180578, 3034705890, 10142072, 3677086, 41241, 11728350
			},
			.prefetch0 = 27175,
			.prefetch1 = 57352,
			.ram = roxrl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_12,
		.transactions_len = 2,
		.lenght = 54,
	},
	{
		.name = "013 ROXR.l D1, D4 e2b4",
		.initial = {
			.regs = {
				710392794, 3781496803, 3558201406, 1781940415, 951669797, 718809129, 1463961073, 2188457621, 3290719267, 3241002651, 809651169, 1740229751, 612918724, 3171830012, 1333231027, 9206496, 5268146, 8, 1011554
			},
			.prefetch0 = 58036,
			.prefetch1 = 63284,
			.ram = roxrl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				710392794, 3781496803, 3558201406, 1781940415, 2385401097, 718809129, 1463961073, 2188457621, 3290719267, 3241002651, 809651169, 1740229751, 612918724, 3171830012, 1333231027, 9206496, 5268146, 8, 1011556
			},
			.prefetch0 = 63284,
			.prefetch1 = 34217,
			.ram = roxrl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_13,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "014 ROXR.l 5, D7 ea97",
		.initial = {
			.regs = {
				3069810650, 3610221899, 3301490355, 1750791016, 3949414552, 491489648, 113861611, 1709607806, 1687086112, 739294933, 2666656122, 3292582488, 904948662, 2656833321, 3942484076, 8224988, 5005452, 789, 4867310
			},
			.prefetch0 = 60055,
			.prefetch1 = 30601,
			.ram = roxrl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3069810650, 3610221899, 3301490355, 1750791016, 3949414552, 491489648, 113861611, 3945739355, 1687086112, 739294933, 2666656122, 3292582488, 904948662, 2656833321, 3942484076, 8224988, 5005452, 793, 4867312
			},
			.prefetch0 = 30601,
			.prefetch1 = 51151,
			.ram = roxrl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_14,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "015 ROXR.l D1, D7 e2b7",
		.initial = {
			.regs = {
				753964023, 1174823784, 2459167893, 3139255744, 2218546389, 4266586163, 1992962204, 950092747, 652530008, 2023447674, 3038366776, 1865491022, 1344201065, 1321139225, 2332625842, 560866, 6227050, 41489, 7213530
			},
			.prefetch0 = 58039,
			.prefetch1 = 57495,
			.ram = roxrl_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				753964023, 1174823784, 2459167893, 3139255744, 2218546389, 4266586163, 1992962204, 779174535, 652530008, 2023447674, 3038366776, 1865491022, 1344201065, 1321139225, 2332625842, 560866, 6227050, 41489, 7213532
			},
			.prefetch0 = 57495,
			.prefetch1 = 25502,
			.ram = roxrl_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxrl_transactions_15,
		.transactions_len = 2,
		.lenght = 88,
	},
};

#endif /* RBT_ROXRL_H */