#ifndef RBT_ROXLL_H
#define RBT_ROXLL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxll_initial_ram_0[] = {
		{ .addr = 0x82108e, .byte = 0xe7 },
		{ .addr = 0x82108f, .byte = 0x91 },
		{ .addr = 0x821090, .byte = 0x66 },
		{ .addr = 0x821091, .byte = 0x18 },
		{ .addr = 0x821092, .byte = 0x96 },
		{ .addr = 0x821093, .byte = 0xa4 }
};

static const SST_RamByte roxll_final_ram_0[] = {
		{ .addr = 0x82108e, .byte = 0xe7 },
		{ .addr = 0x82108f, .byte = 0x91 },
		{ .addr = 0x821090, .byte = 0x66 },
		{ .addr = 0x821091, .byte = 0x18 },
		{ .addr = 0x821092, .byte = 0x96 },
		{ .addr = 0x821093, .byte = 0xa4 }
};

static const SST_Transaction roxll_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8523922, .data = 38564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxll_initial_ram_1[] = {
		{ .addr = 0x2fbfd2, .byte = 0xe1 },
		{ .addr = 0x2fbfd3, .byte = 0xb4 },
		{ .addr = 0x2fbfd4, .byte = 0x1c },
		{ .addr = 0x2fbfd5, .byte = 0xb0 },
		{ .addr = 0x2fbfd6, .byte = 0xe0 },
		{ .addr = 0x2fbfd7, .byte = 0x6a }
};

static const SST_RamByte roxll_final_ram_1[] = {
		{ .addr = 0x2fbfd2, .byte = 0xe1 },
		{ .addr = 0x2fbfd3, .byte = 0xb4 },
		{ .addr = 0x2fbfd4, .byte = 0x1c },
		{ .addr = 0x2fbfd5, .byte = 0xb0 },
		{ .addr = 0x2fbfd6, .byte = 0xe0 },
		{ .addr = 0x2fbfd7, .byte = 0x6a }
};

static const SST_Transaction roxll_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3129302, .data = 57450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 22 },
};

static const SST_RamByte roxll_initial_ram_2[] = {
		{ .addr = 0xd65380, .byte = 0xeb },
		{ .addr = 0xd65381, .byte = 0xb3 },
		{ .addr = 0xd65382, .byte = 0x59 },
		{ .addr = 0xd65383, .byte = 0x3c },
		{ .addr = 0xd65384, .byte = 0xa6 },
		{ .addr = 0xd65385, .byte = 0x04 }
};

static const SST_RamByte roxll_final_ram_2[] = {
		{ .addr = 0xd65380, .byte = 0xeb },
		{ .addr = 0xd65381, .byte = 0xb3 },
		{ .addr = 0xd65382, .byte = 0x59 },
		{ .addr = 0xd65383, .byte = 0x3c },
		{ .addr = 0xd65384, .byte = 0xa6 },
		{ .addr = 0xd65385, .byte = 0x04 }
};

static const SST_Transaction roxll_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14046084, .data = 42500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxll_initial_ram_3[] = {
		{ .addr = 0xcaa68c, .byte = 0xe1 },
		{ .addr = 0xcaa68d, .byte = 0xb3 },
		{ .addr = 0xcaa68e, .byte = 0x98 },
		{ .addr = 0xcaa68f, .byte = 0xca },
		{ .addr = 0xcaa690, .byte = 0xda },
		{ .addr = 0xcaa691, .byte = 0xa8 }
};

static const SST_RamByte roxll_final_ram_3[] = {
		{ .addr = 0xcaa68c, .byte = 0xe1 },
		{ .addr = 0xcaa68d, .byte = 0xb3 },
		{ .addr = 0xcaa68e, .byte = 0x98 },
		{ .addr = 0xcaa68f, .byte = 0xca },
		{ .addr = 0xcaa690, .byte = 0xda },
		{ .addr = 0xcaa691, .byte = 0xa8 }
};

static const SST_Transaction roxll_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13280912, .data = 55976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 36 },
};

static const SST_RamByte roxll_initial_ram_4[] = {
		{ .addr = 0xb95d4a, .byte = 0xeb },
		{ .addr = 0xb95d4b, .byte = 0xb5 },
		{ .addr = 0xb95d4c, .byte = 0xf6 },
		{ .addr = 0xb95d4d, .byte = 0x28 },
		{ .addr = 0xb95d4e, .byte = 0x03 },
		{ .addr = 0xb95d4f, .byte = 0x13 }
};

static const SST_RamByte roxll_final_ram_4[] = {
		{ .addr = 0xb95d4a, .byte = 0xeb },
		{ .addr = 0xb95d4b, .byte = 0xb5 },
		{ .addr = 0xb95d4c, .byte = 0xf6 },
		{ .addr = 0xb95d4d, .byte = 0x28 },
		{ .addr = 0xb95d4e, .byte = 0x03 },
		{ .addr = 0xb95d4f, .byte = 0x13 }
};

static const SST_Transaction roxll_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12148046, .data = 787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 68 },
};

static const SST_RamByte roxll_initial_ram_5[] = {
		{ .addr = 0x0bafbe, .byte = 0xe7 },
		{ .addr = 0x0bafbf, .byte = 0x96 },
		{ .addr = 0x0bafc0, .byte = 0x04 },
		{ .addr = 0x0bafc1, .byte = 0xb9 },
		{ .addr = 0x0bafc2, .byte = 0x3c },
		{ .addr = 0x0bafc3, .byte = 0x88 }
};

static const SST_RamByte roxll_final_ram_5[] = {
		{ .addr = 0x0bafbe, .byte = 0xe7 },
		{ .addr = 0x0bafbf, .byte = 0x96 },
		{ .addr = 0x0bafc0, .byte = 0x04 },
		{ .addr = 0x0bafc1, .byte = 0xb9 },
		{ .addr = 0x0bafc2, .byte = 0x3c },
		{ .addr = 0x0bafc3, .byte = 0x88 }
};

static const SST_Transaction roxll_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 765890, .data = 15496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxll_initial_ram_6[] = {
		{ .addr = 0xd1a7b2, .byte = 0xe3 },
		{ .addr = 0xd1a7b3, .byte = 0xb3 },
		{ .addr = 0xd1a7b4, .byte = 0xf3 },
		{ .addr = 0xd1a7b5, .byte = 0x95 },
		{ .addr = 0xd1a7b6, .byte = 0xd0 },
		{ .addr = 0xd1a7b7, .byte = 0xf3 }
};

static const SST_RamByte roxll_final_ram_6[] = {
		{ .addr = 0xd1a7b2, .byte = 0xe3 },
		{ .addr = 0xd1a7b3, .byte = 0xb3 },
		{ .addr = 0xd1a7b4, .byte = 0xf3 },
		{ .addr = 0xd1a7b5, .byte = 0x95 },
		{ .addr = 0xd1a7b6, .byte = 0xd0 },
		{ .addr = 0xd1a7b7, .byte = 0xf3 }
};

static const SST_Transaction roxll_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13739958, .data = 53491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 92 },
};

static const SST_RamByte roxll_initial_ram_7[] = {
		{ .addr = 0x362526, .byte = 0xe5 },
		{ .addr = 0x362527, .byte = 0x95 },
		{ .addr = 0x362528, .byte = 0xf9 },
		{ .addr = 0x362529, .byte = 0xd2 },
		{ .addr = 0x36252a, .byte = 0xa1 },
		{ .addr = 0x36252b, .byte = 0x51 }
};

static const SST_RamByte roxll_final_ram_7[] = {
		{ .addr = 0x362526, .byte = 0xe5 },
		{ .addr = 0x362527, .byte = 0x95 },
		{ .addr = 0x362528, .byte = 0xf9 },
		{ .addr = 0x362529, .byte = 0xd2 },
		{ .addr = 0x36252a, .byte = 0xa1 },
		{ .addr = 0x36252b, .byte = 0x51 }
};

static const SST_Transaction roxll_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3548458, .data = 41297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxll_initial_ram_8[] = {
		{ .addr = 0x07bfb2, .byte = 0xe3 },
		{ .addr = 0x07bfb3, .byte = 0x97 },
		{ .addr = 0x07bfb4, .byte = 0x82 },
		{ .addr = 0x07bfb5, .byte = 0xf0 },
		{ .addr = 0x07bfb6, .byte = 0xbf },
		{ .addr = 0x07bfb7, .byte = 0x3e }
};

static const SST_RamByte roxll_final_ram_8[] = {
		{ .addr = 0x07bfb2, .byte = 0xe3 },
		{ .addr = 0x07bfb3, .byte = 0x97 },
		{ .addr = 0x07bfb4, .byte = 0x82 },
		{ .addr = 0x07bfb5, .byte = 0xf0 },
		{ .addr = 0x07bfb6, .byte = 0xbf },
		{ .addr = 0x07bfb7, .byte = 0x3e }
};

static const SST_Transaction roxll_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 507830, .data = 48958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxll_initial_ram_9[] = {
		{ .addr = 0xfb832c, .byte = 0xe5 },
		{ .addr = 0xfb832d, .byte = 0x92 },
		{ .addr = 0xfb832e, .byte = 0x0e },
		{ .addr = 0xfb832f, .byte = 0xbb },
		{ .addr = 0xfb8330, .byte = 0x13 },
		{ .addr = 0xfb8331, .byte = 0x18 }
};

static const SST_RamByte roxll_final_ram_9[] = {
		{ .addr = 0xfb832c, .byte = 0xe5 },
		{ .addr = 0xfb832d, .byte = 0x92 },
		{ .addr = 0xfb832e, .byte = 0x0e },
		{ .addr = 0xfb832f, .byte = 0xbb },
		{ .addr = 0xfb8330, .byte = 0x13 },
		{ .addr = 0xfb8331, .byte = 0x18 }
};

static const SST_Transaction roxll_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16483120, .data = 4888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxll_initial_ram_10[] = {
		{ .addr = 0xea6656, .byte = 0xe7 },
		{ .addr = 0xea6657, .byte = 0x94 },
		{ .addr = 0xea6658, .byte = 0xec },
		{ .addr = 0xea6659, .byte = 0x0e },
		{ .addr = 0xea665a, .byte = 0x36 },
		{ .addr = 0xea665b, .byte = 0x7e }
};

static const SST_RamByte roxll_final_ram_10[] = {
		{ .addr = 0xea6656, .byte = 0xe7 },
		{ .addr = 0xea6657, .byte = 0x94 },
		{ .addr = 0xea6658, .byte = 0xec },
		{ .addr = 0xea6659, .byte = 0x0e },
		{ .addr = 0xea665a, .byte = 0x36 },
		{ .addr = 0xea665b, .byte = 0x7e }
};

static const SST_Transaction roxll_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15361626, .data = 13950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxll_initial_ram_11[] = {
		{ .addr = 0x48a324, .byte = 0xe5 },
		{ .addr = 0x48a325, .byte = 0xb6 },
		{ .addr = 0x48a326, .byte = 0x02 },
		{ .addr = 0x48a327, .byte = 0x6c },
		{ .addr = 0x48a328, .byte = 0x83 },
		{ .addr = 0x48a329, .byte = 0xef }
};

static const SST_RamByte roxll_final_ram_11[] = {
		{ .addr = 0x48a324, .byte = 0xe5 },
		{ .addr = 0x48a325, .byte = 0xb6 },
		{ .addr = 0x48a326, .byte = 0x02 },
		{ .addr = 0x48a327, .byte = 0x6c },
		{ .addr = 0x48a328, .byte = 0x83 },
		{ .addr = 0x48a329, .byte = 0xef }
};

static const SST_Transaction roxll_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4760360, .data = 33775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte roxll_initial_ram_12[] = {
		{ .addr = 0xa84b5a, .byte = 0xef },
		{ .addr = 0xa84b5b, .byte = 0x92 },
		{ .addr = 0xa84b5c, .byte = 0x70 },
		{ .addr = 0xa84b5d, .byte = 0xe7 },
		{ .addr = 0xa84b5e, .byte = 0x65 },
		{ .addr = 0xa84b5f, .byte = 0xba }
};

static const SST_RamByte roxll_final_ram_12[] = {
		{ .addr = 0xa84b5a, .byte = 0xef },
		{ .addr = 0xa84b5b, .byte = 0x92 },
		{ .addr = 0xa84b5c, .byte = 0x70 },
		{ .addr = 0xa84b5d, .byte = 0xe7 },
		{ .addr = 0xa84b5e, .byte = 0x65 },
		{ .addr = 0xa84b5f, .byte = 0xba }
};

static const SST_Transaction roxll_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11029342, .data = 26042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxll_initial_ram_13[] = {
		{ .addr = 0xfa00dc, .byte = 0xe5 },
		{ .addr = 0xfa00dd, .byte = 0x93 },
		{ .addr = 0xfa00de, .byte = 0x49 },
		{ .addr = 0xfa00df, .byte = 0x5d },
		{ .addr = 0xfa00e0, .byte = 0x90 },
		{ .addr = 0xfa00e1, .byte = 0x7c }
};

static const SST_RamByte roxll_final_ram_13[] = {
		{ .addr = 0xfa00dc, .byte = 0xe5 },
		{ .addr = 0xfa00dd, .byte = 0x93 },
		{ .addr = 0xfa00de, .byte = 0x49 },
		{ .addr = 0xfa00df, .byte = 0x5d },
		{ .addr = 0xfa00e0, .byte = 0x90 },
		{ .addr = 0xfa00e1, .byte = 0x7c }
};

static const SST_Transaction roxll_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16384224, .data = 36988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxll_initial_ram_14[] = {
		{ .addr = 0xbdfcb0, .byte = 0xe9 },
		{ .addr = 0xbdfcb1, .byte = 0x97 },
		{ .addr = 0xbdfcb2, .byte = 0xf3 },
		{ .addr = 0xbdfcb3, .byte = 0xeb },
		{ .addr = 0xbdfcb4, .byte = 0xc0 },
		{ .addr = 0xbdfcb5, .byte = 0x9c }
};

static const SST_RamByte roxll_final_ram_14[] = {
		{ .addr = 0xbdfcb0, .byte = 0xe9 },
		{ .addr = 0xbdfcb1, .byte = 0x97 },
		{ .addr = 0xbdfcb2, .byte = 0xf3 },
		{ .addr = 0xbdfcb3, .byte = 0xeb },
		{ .addr = 0xbdfcb4, .byte = 0xc0 },
		{ .addr = 0xbdfcb5, .byte = 0x9c }
};

static const SST_Transaction roxll_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12450996, .data = 49308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxll_initial_ram_15[] = {
		{ .addr = 0xb21244, .byte = 0xe9 },
		{ .addr = 0xb21245, .byte = 0x93 },
		{ .addr = 0xb21246, .byte = 0x65 },
		{ .addr = 0xb21247, .byte = 0x91 },
		{ .addr = 0xb21248, .byte = 0x62 },
		{ .addr = 0xb21249, .byte = 0xd7 }
};

static const SST_RamByte roxll_final_ram_15[] = {
		{ .addr = 0xb21244, .byte = 0xe9 },
		{ .addr = 0xb21245, .byte = 0x93 },
		{ .addr = 0xb21246, .byte = 0x65 },
		{ .addr = 0xb21247, .byte = 0x91 },
		{ .addr = 0xb21248, .byte = 0x62 },
		{ .addr = 0xb21249, .byte = 0xd7 }
};

static const SST_Transaction roxll_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11670088, .data = 25303, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

const uint32_t ROXLL_TEST_COUNT = 16;
static const SST_TestCase roxll[] = {
	{
		.name = "000 ROXL.l 3, D1 e791",
		.initial = {
			.regs = {
				250172579, 1789076768, 773868069, 3443113245, 3317264784, 3546499369, 4130257380, 2442970974, 1162712535, 1665159052, 3523798496, 3831773315, 2096837057, 2638812258, 654807390, 14666150, 16038206, 10004, 8523922
			},
			.prefetch0 = 59281,
			.prefetch1 = 26136,
			.ram = roxll_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				250172579, 1427712261, 773868069, 3443113245, 3317264784, 3546499369, 4130257380, 2442970974, 1162712535, 1665159052, 3523798496, 3831773315, 2096837057, 2638812258, 654807390, 14666150, 16038206, 10001, 8523924
			},
			.prefetch0 = 26136,
			.prefetch1 = 38564,
			.ram = roxll_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_0,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "001 ROXL.l D0, D4 e1b4",
		.initial = {
			.regs = {
				1083057993, 2285383414, 662027695, 2657582003, 541516835, 1006688467, 1171482404, 3271634970, 3100282933, 3453109617, 1447089533, 3537124678, 22523675, 704863897, 2277349672, 13584782, 14966430, 33565, 3129302
			},
			.prefetch0 = 57780,
			.prefetch1 = 7344,
			.ram = roxll_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1083057993, 2285383414, 662027695, 2657582003, 2378712864, 1006688467, 1171482404, 3271634970, 3100282933, 3453109617, 1447089533, 3537124678, 22523675, 704863897, 2277349672, 13584782, 14966430, 33544, 3129304
			},
			.prefetch0 = 7344,
			.prefetch1 = 57450,
			.ram = roxll_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_1,
		.transactions_len = 2,
		.lenght = 26,
	},
	{
		.name = "002 ROXL.l D5, D3 ebb3",
		.initial = {
			.regs = {
				3849887591, 4090047993, 3857420828, 1530499959, 1996638121, 2482692102, 1476116376, 602643654, 1170692394, 923438780, 1333796281, 2426320670, 2392488112, 1837953764, 3193666425, 13729208, 6550480, 8968, 14046084
			},
			.prefetch0 = 60339,
			.prefetch1 = 22844,
			.ram = roxll_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3849887591, 4090047993, 3857420828, 3462716875, 1996638121, 2482692102, 1476116376, 602643654, 1170692394, 923438780, 1333796281, 2426320670, 2392488112, 1837953764, 3193666425, 13729208, 6550480, 8968, 14046086
			},
			.prefetch0 = 22844,
			.prefetch1 = 42500,
			.ram = roxll_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_2,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "003 ROXL.l D0, D3 e1b3",
		.initial = {
			.regs = {
				2895143504, 1013155624, 1313886525, 3099506729, 4243835049, 2763893082, 2412884651, 3384926651, 1398678895, 1230212270, 253795464, 1876932732, 2510633700, 3681542848, 2821138911, 3675058, 928772, 15, 13280912
			},
			.prefetch0 = 57779,
			.prefetch1 = 39114,
			.ram = roxll_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2895143504, 1013155624, 1313886525, 3089718367, 4243835049, 2763893082, 2412884651, 3384926651, 1398678895, 1230212270, 253795464, 1876932732, 2510633700, 3681542848, 2821138911, 3675058, 928772, 8, 13280914
			},
			.prefetch0 = 39114,
			.prefetch1 = 55976,
			.ram = roxll_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_3,
		.transactions_len = 2,
		.lenght = 40,
	},
	{
		.name = "004 ROXL.l D5, D5 ebb5",
		.initial = {
			.regs = {
				172708183, 901009742, 1738918261, 130895891, 3167715004, 3588817824, 1451958650, 2918046758, 1843615552, 2152618196, 1943129980, 2970227568, 1811941177, 3401359323, 962028483, 10517646, 8449626, 33541, 12148046
			},
			.prefetch0 = 60341,
			.prefetch1 = 63016,
			.ram = roxll_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				172708183, 901009742, 1738918261, 130895891, 3167715004, 1794408912, 1451958650, 2918046758, 1843615552, 2152618196, 1943129980, 2970227568, 1811941177, 3401359323, 962028483, 10517646, 8449626, 33536, 12148048
			},
			.prefetch0 = 63016,
			.prefetch1 = 787,
			.ram = roxll_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_4,
		.transactions_len = 2,
		.lenght = 72,
	},
	{
		.name = "005 ROXL.l 3, D6 e796",
		.initial = {
			.regs = {
				2905321296, 450506490, 3841250624, 4187441812, 2887255210, 2080412106, 158592124, 3845906731, 3695059711, 3792003258, 4141502669, 3003861165, 301670276, 4092264861, 494935648, 16088108, 6375960, 33810, 765890
			},
			.prefetch0 = 59286,
			.prefetch1 = 1209,
			.ram = roxll_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2905321296, 450506490, 3841250624, 4187441812, 2887255210, 2080412106, 1268736996, 3845906731, 3695059711, 3792003258, 4141502669, 3003861165, 301670276, 4092264861, 494935648, 16088108, 6375960, 33792, 765892
			},
			.prefetch0 = 1209,
			.prefetch1 = 15496,
			.ram = roxll_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_5,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "006 ROXL.l D1, D3 e3b3",
		.initial = {
			.regs = {
				3785157172, 2146300524, 2530410913, 1512427458, 1487613123, 3143625237, 3125581268, 603075267, 1217943426, 176111906, 1273106463, 3282724091, 3307089438, 1476563989, 3534355814, 2144150, 14969930, 772, 13739958
			},
			.prefetch0 = 58291,
			.prefetch1 = 62357,
			.ram = roxll_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3785157172, 2146300524, 2530410913, 780013928, 1487613123, 3143625237, 3125581268, 603075267, 1217943426, 176111906, 1273106463, 3282724091, 3307089438, 1476563989, 3534355814, 2144150, 14969930, 785, 13739960
			},
			.prefetch0 = 62357,
			.prefetch1 = 53491,
			.ram = roxll_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_6,
		.transactions_len = 2,
		.lenght = 96,
	},
	{
		.name = "007 ROXL.l 2, D5 e595",
		.initial = {
			.regs = {
				3115417963, 3735872797, 2000702225, 2662572727, 2384371180, 3848225577, 1790887226, 3763912332, 4205510818, 3047000673, 1387832023, 4139334624, 3499253830, 2631741500, 556050098, 9831208, 1647692, 34330, 3548458
			},
			.prefetch0 = 58773,
			.prefetch1 = 63954,
			.ram = roxll_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3115417963, 3735872797, 2000702225, 2662572727, 2384371180, 2508000423, 1790887226, 3763912332, 4205510818, 3047000673, 1387832023, 4139334624, 3499253830, 2631741500, 556050098, 9831208, 1647692, 34329, 3548460
			},
			.prefetch0 = 63954,
			.prefetch1 = 41297,
			.ram = roxll_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_7,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "008 ROXL.l 1, D7 e397",
		.initial = {
			.regs = {
				310803249, 4182291824, 1816989102, 1379194748, 175254784, 1852898212, 2631485154, 1164598328, 974809339, 3874373707, 601128007, 1119898802, 1558275783, 1976337372, 1756692677, 3499196, 5854132, 1289, 507830
			},
			.prefetch0 = 58263,
			.prefetch1 = 33520,
			.ram = roxll_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				310803249, 4182291824, 1816989102, 1379194748, 175254784, 1852898212, 2631485154, 2329196656, 974809339, 3874373707, 601128007, 1119898802, 1558275783, 1976337372, 1756692677, 3499196, 5854132, 1288, 507832
			},
			.prefetch0 = 33520,
			.prefetch1 = 48958,
			.ram = roxll_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_8,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "009 ROXL.l 2, D2 e592",
		.initial = {
			.regs = {
				1960631989, 3283576339, 2278480614, 1535519361, 2743645040, 381089544, 2368617107, 4210666107, 3266442869, 3571523603, 1826253932, 2883783112, 1752192234, 1318138780, 3088041734, 9244316, 11044622, 9750, 16483120
			},
			.prefetch0 = 58770,
			.prefetch1 = 3771,
			.ram = roxll_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1960631989, 3283576339, 523987867, 1535519361, 2743645040, 381089544, 2368617107, 4210666107, 3266442869, 3571523603, 1826253932, 2883783112, 1752192234, 1318138780, 3088041734, 9244316, 11044622, 9728, 16483122
			},
			.prefetch0 = 3771,
			.prefetch1 = 4888,
			.ram = roxll_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_9,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "010 ROXL.l 3, D4 e794",
		.initial = {
			.regs = {
				1613758465, 3350528797, 3288787814, 3097952008, 3644553990, 2527048640, 3999156431, 1215007827, 370362138, 3887676781, 3655360094, 2884469024, 1973756658, 2052799236, 2680605703, 16461500, 13708076, 33043, 15361626
			},
			.prefetch0 = 59284,
			.prefetch1 = 60430,
			.ram = roxll_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1613758465, 3350528797, 3288787814, 3097952008, 3386628151, 2527048640, 3999156431, 1215007827, 370362138, 3887676781, 3655360094, 2884469024, 1973756658, 2052799236, 2680605703, 16461500, 13708076, 33032, 15361628
			},
			.prefetch0 = 60430,
			.prefetch1 = 13950,
			.ram = roxll_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_10,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "011 ROXL.l D2, D6 e5b6",
		.initial = {
			.regs = {
				771934797, 705303911, 561494964, 1456214077, 3374037617, 1292458773, 800768923, 124118923, 509302825, 457874168, 1878815477, 2688246037, 3889953531, 2180318368, 3384708449, 483044, 1030324, 1025, 4760360
			},
			.prefetch0 = 58806,
			.prefetch1 = 620,
			.ram = roxll_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				771934797, 705303911, 561494964, 1456214077, 3374037617, 1292458773, 483966699, 124118923, 509302825, 457874168, 1878815477, 2688246037, 3889953531, 2180318368, 3384708449, 483044, 1030324, 1024, 4760362
			},
			.prefetch0 = 620,
			.prefetch1 = 33775,
			.ram = roxll_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_11,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "012 ROXL.l 7, D2 ef92",
		.initial = {
			.regs = {
				1780790178, 253950806, 1695101792, 3691571375, 1225308839, 577311738, 3387351913, 1576604554, 1877136063, 720776664, 3857225780, 1748703405, 1909251071, 468629214, 1062010431, 8150304, 13464522, 1039, 11029342
			},
			.prefetch0 = 61330,
			.prefetch1 = 28903,
			.ram = roxll_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1780790178, 253950806, 2224664601, 3691571375, 1225308839, 577311738, 3387351913, 1576604554, 1877136063, 720776664, 3857225780, 1748703405, 1909251071, 468629214, 1062010431, 8150304, 13464522, 1032, 11029344
			},
			.prefetch0 = 28903,
			.prefetch1 = 26042,
			.ram = roxll_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_12,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "013 ROXL.l 2, D3 e593",
		.initial = {
			.regs = {
				3279485955, 1764988489, 1621357038, 525664700, 4244091715, 1050827418, 3350461332, 277410974, 3350029959, 3810592058, 1620450948, 3571464561, 1043788907, 688140975, 3704880454, 10564522, 5966762, 34073, 16384224
			},
			.prefetch0 = 58771,
			.prefetch1 = 18781,
			.ram = roxll_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3279485955, 1764988489, 1621357038, 2102658802, 4244091715, 1050827418, 3350461332, 277410974, 3350029959, 3810592058, 1620450948, 3571464561, 1043788907, 688140975, 3704880454, 10564522, 5966762, 34048, 16384226
			},
			.prefetch0 = 18781,
			.prefetch1 = 36988,
			.ram = roxll_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_13,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "014 ROXL.l 4, D7 e997",
		.initial = {
			.regs = {
				4073222887, 715311655, 3516248560, 3831375631, 4104190440, 1620980276, 175667930, 756371473, 3359030949, 2609792826, 2175004658, 1755979358, 2501747618, 3823560311, 2211597023, 16468888, 1557964, 9996, 12450996
			},
			.prefetch0 = 59799,
			.prefetch1 = 62443,
			.ram = roxll_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4073222887, 715311655, 3516248560, 3831375631, 4104190440, 1620980276, 175667930, 3512008977, 3359030949, 2609792826, 2175004658, 1755979358, 2501747618, 3823560311, 2211597023, 16468888, 1557964, 9992, 12450998
			},
			.prefetch0 = 62443,
			.prefetch1 = 49308,
			.ram = roxll_final_ram_14,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_14,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "015 ROXL.l 4, D3 e993",
		.initial = {
			.regs = {
				4282778657, 3916887416, 558460767, 3804041182, 1743446159, 3620057065, 1358897636, 2011905087, 431661124, 4246043099, 3233164107, 4130220237, 1487119483, 2233499244, 2662905642, 10329208, 13526850, 33054, 11670088
			},
			.prefetch0 = 59795,
			.prefetch1 = 26001,
			.ram = roxll_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4282778657, 3916887416, 558460767, 735116783, 1743446159, 3620057065, 1358897636, 2011905087, 431661124, 4246043099, 3233164107, 4130220237, 1487119483, 2233499244, 2662905642, 10329208, 13526850, 33024, 11670090
			},
			.prefetch0 = 26001,
			.prefetch1 = 25303,
			.ram = roxll_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxll_transactions_15,
		.transactions_len = 2,
		.lenght = 16,
	},
};

#endif /* RBT_ROXLL_H */