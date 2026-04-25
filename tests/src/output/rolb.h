#ifndef RBT_ROLB_H
#define RBT_ROLB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rolb_initial_ram_0[] = {
		{ .addr = 0x2fe2e0, .byte = 0xeb },
		{ .addr = 0x2fe2e1, .byte = 0x1c },
		{ .addr = 0x2fe2e2, .byte = 0x7b },
		{ .addr = 0x2fe2e3, .byte = 0x95 },
		{ .addr = 0x2fe2e4, .byte = 0xc3 },
		{ .addr = 0x2fe2e5, .byte = 0xea }
};

static const SST_RamByte rolb_final_ram_0[] = {
		{ .addr = 0x2fe2e0, .byte = 0xeb },
		{ .addr = 0x2fe2e1, .byte = 0x1c },
		{ .addr = 0x2fe2e2, .byte = 0x7b },
		{ .addr = 0x2fe2e3, .byte = 0x95 },
		{ .addr = 0x2fe2e4, .byte = 0xc3 },
		{ .addr = 0x2fe2e5, .byte = 0xea }
};

static const SST_Transaction rolb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3138276, .data = 50154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rolb_initial_ram_1[] = {
		{ .addr = 0x41ae82, .byte = 0xe7 },
		{ .addr = 0x41ae83, .byte = 0x18 },
		{ .addr = 0x41ae84, .byte = 0xf0 },
		{ .addr = 0x41ae85, .byte = 0x1c },
		{ .addr = 0x41ae86, .byte = 0xd7 },
		{ .addr = 0x41ae87, .byte = 0x0d }
};

static const SST_RamByte rolb_final_ram_1[] = {
		{ .addr = 0x41ae82, .byte = 0xe7 },
		{ .addr = 0x41ae83, .byte = 0x18 },
		{ .addr = 0x41ae84, .byte = 0xf0 },
		{ .addr = 0x41ae85, .byte = 0x1c },
		{ .addr = 0x41ae86, .byte = 0xd7 },
		{ .addr = 0x41ae87, .byte = 0x0d }
};

static const SST_Transaction rolb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4304518, .data = 55053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rolb_initial_ram_2[] = {
		{ .addr = 0x2c54da, .byte = 0xe7 },
		{ .addr = 0x2c54db, .byte = 0x1f },
		{ .addr = 0x2c54dc, .byte = 0xbe },
		{ .addr = 0x2c54dd, .byte = 0x66 },
		{ .addr = 0x2c54de, .byte = 0x07 },
		{ .addr = 0x2c54df, .byte = 0x88 }
};

static const SST_RamByte rolb_final_ram_2[] = {
		{ .addr = 0x2c54da, .byte = 0xe7 },
		{ .addr = 0x2c54db, .byte = 0x1f },
		{ .addr = 0x2c54dc, .byte = 0xbe },
		{ .addr = 0x2c54dd, .byte = 0x66 },
		{ .addr = 0x2c54de, .byte = 0x07 },
		{ .addr = 0x2c54df, .byte = 0x88 }
};

static const SST_Transaction rolb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2905310, .data = 1928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rolb_initial_ram_3[] = {
		{ .addr = 0xe0b9d0, .byte = 0xe1 },
		{ .addr = 0xe0b9d1, .byte = 0x1e },
		{ .addr = 0xe0b9d2, .byte = 0xcf },
		{ .addr = 0xe0b9d3, .byte = 0x13 },
		{ .addr = 0xe0b9d4, .byte = 0x5f },
		{ .addr = 0xe0b9d5, .byte = 0xe8 }
};

static const SST_RamByte rolb_final_ram_3[] = {
		{ .addr = 0xe0b9d0, .byte = 0xe1 },
		{ .addr = 0xe0b9d1, .byte = 0x1e },
		{ .addr = 0xe0b9d2, .byte = 0xcf },
		{ .addr = 0xe0b9d3, .byte = 0x13 },
		{ .addr = 0xe0b9d4, .byte = 0x5f },
		{ .addr = 0xe0b9d5, .byte = 0xe8 }
};

static const SST_Transaction rolb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14727636, .data = 24552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte rolb_initial_ram_4[] = {
		{ .addr = 0xbcdba6, .byte = 0xed },
		{ .addr = 0xbcdba7, .byte = 0x1f },
		{ .addr = 0xbcdba8, .byte = 0x96 },
		{ .addr = 0xbcdba9, .byte = 0xf2 },
		{ .addr = 0xbcdbaa, .byte = 0x2c },
		{ .addr = 0xbcdbab, .byte = 0xe8 }
};

static const SST_RamByte rolb_final_ram_4[] = {
		{ .addr = 0xbcdba6, .byte = 0xed },
		{ .addr = 0xbcdba7, .byte = 0x1f },
		{ .addr = 0xbcdba8, .byte = 0x96 },
		{ .addr = 0xbcdba9, .byte = 0xf2 },
		{ .addr = 0xbcdbaa, .byte = 0x2c },
		{ .addr = 0xbcdbab, .byte = 0xe8 }
};

static const SST_Transaction rolb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12377002, .data = 11496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rolb_initial_ram_5[] = {
		{ .addr = 0x1d679e, .byte = 0xe1 },
		{ .addr = 0x1d679f, .byte = 0x1a },
		{ .addr = 0x1d67a0, .byte = 0x64 },
		{ .addr = 0x1d67a1, .byte = 0xcd },
		{ .addr = 0x1d67a2, .byte = 0xf7 },
		{ .addr = 0x1d67a3, .byte = 0x5c }
};

static const SST_RamByte rolb_final_ram_5[] = {
		{ .addr = 0x1d679e, .byte = 0xe1 },
		{ .addr = 0x1d679f, .byte = 0x1a },
		{ .addr = 0x1d67a0, .byte = 0x64 },
		{ .addr = 0x1d67a1, .byte = 0xcd },
		{ .addr = 0x1d67a2, .byte = 0xf7 },
		{ .addr = 0x1d67a3, .byte = 0x5c }
};

static const SST_Transaction rolb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1927074, .data = 63324, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte rolb_initial_ram_6[] = {
		{ .addr = 0x731558, .byte = 0xe3 },
		{ .addr = 0x731559, .byte = 0x1f },
		{ .addr = 0x73155a, .byte = 0x74 },
		{ .addr = 0x73155b, .byte = 0x14 },
		{ .addr = 0x73155c, .byte = 0xd9 },
		{ .addr = 0x73155d, .byte = 0x93 }
};

static const SST_RamByte rolb_final_ram_6[] = {
		{ .addr = 0x731558, .byte = 0xe3 },
		{ .addr = 0x731559, .byte = 0x1f },
		{ .addr = 0x73155a, .byte = 0x74 },
		{ .addr = 0x73155b, .byte = 0x14 },
		{ .addr = 0x73155c, .byte = 0xd9 },
		{ .addr = 0x73155d, .byte = 0x93 }
};

static const SST_Transaction rolb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7542108, .data = 55699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte rolb_initial_ram_7[] = {
		{ .addr = 0x415126, .byte = 0xe1 },
		{ .addr = 0x415127, .byte = 0x3f },
		{ .addr = 0x415128, .byte = 0x15 },
		{ .addr = 0x415129, .byte = 0xc0 },
		{ .addr = 0x41512a, .byte = 0xd8 },
		{ .addr = 0x41512b, .byte = 0xfc }
};

static const SST_RamByte rolb_final_ram_7[] = {
		{ .addr = 0x415126, .byte = 0xe1 },
		{ .addr = 0x415127, .byte = 0x3f },
		{ .addr = 0x415128, .byte = 0x15 },
		{ .addr = 0x415129, .byte = 0xc0 },
		{ .addr = 0x41512a, .byte = 0xd8 },
		{ .addr = 0x41512b, .byte = 0xfc }
};

static const SST_Transaction rolb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4280618, .data = 55548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 88 },
};

static const SST_RamByte rolb_initial_ram_8[] = {
		{ .addr = 0x27db0c, .byte = 0xe7 },
		{ .addr = 0x27db0d, .byte = 0x3b },
		{ .addr = 0x27db0e, .byte = 0xe9 },
		{ .addr = 0x27db0f, .byte = 0x0d },
		{ .addr = 0x27db10, .byte = 0x82 },
		{ .addr = 0x27db11, .byte = 0x51 }
};

static const SST_RamByte rolb_final_ram_8[] = {
		{ .addr = 0x27db0c, .byte = 0xe7 },
		{ .addr = 0x27db0d, .byte = 0x3b },
		{ .addr = 0x27db0e, .byte = 0xe9 },
		{ .addr = 0x27db0f, .byte = 0x0d },
		{ .addr = 0x27db10, .byte = 0x82 },
		{ .addr = 0x27db11, .byte = 0x51 }
};

static const SST_Transaction rolb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2611984, .data = 33361, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 92 },
};

static const SST_RamByte rolb_initial_ram_9[] = {
		{ .addr = 0xbaca54, .byte = 0xe7 },
		{ .addr = 0xbaca55, .byte = 0x3a },
		{ .addr = 0xbaca56, .byte = 0xd1 },
		{ .addr = 0xbaca57, .byte = 0x8c },
		{ .addr = 0xbaca58, .byte = 0x26 },
		{ .addr = 0xbaca59, .byte = 0x36 }
};

static const SST_RamByte rolb_final_ram_9[] = {
		{ .addr = 0xbaca54, .byte = 0xe7 },
		{ .addr = 0xbaca55, .byte = 0x3a },
		{ .addr = 0xbaca56, .byte = 0xd1 },
		{ .addr = 0xbaca57, .byte = 0x8c },
		{ .addr = 0xbaca58, .byte = 0x26 },
		{ .addr = 0xbaca59, .byte = 0x36 }
};

static const SST_Transaction rolb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12241496, .data = 9782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 110 },
};

static const SST_RamByte rolb_initial_ram_10[] = {
		{ .addr = 0x12952a, .byte = 0xe9 },
		{ .addr = 0x12952b, .byte = 0x39 },
		{ .addr = 0x12952c, .byte = 0xf3 },
		{ .addr = 0x12952d, .byte = 0xcd },
		{ .addr = 0x12952e, .byte = 0xe3 },
		{ .addr = 0x12952f, .byte = 0x36 }
};

static const SST_RamByte rolb_final_ram_10[] = {
		{ .addr = 0x12952a, .byte = 0xe9 },
		{ .addr = 0x12952b, .byte = 0x39 },
		{ .addr = 0x12952c, .byte = 0xf3 },
		{ .addr = 0x12952d, .byte = 0xcd },
		{ .addr = 0x12952e, .byte = 0xe3 },
		{ .addr = 0x12952f, .byte = 0x36 }
};

static const SST_Transaction rolb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1217838, .data = 58166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 96 },
};

static const SST_RamByte rolb_initial_ram_11[] = {
		{ .addr = 0xca8662, .byte = 0xe9 },
		{ .addr = 0xca8663, .byte = 0x3a },
		{ .addr = 0xca8664, .byte = 0x18 },
		{ .addr = 0xca8665, .byte = 0x20 },
		{ .addr = 0xca8666, .byte = 0xb2 },
		{ .addr = 0xca8667, .byte = 0x62 }
};

static const SST_RamByte rolb_final_ram_11[] = {
		{ .addr = 0xca8662, .byte = 0xe9 },
		{ .addr = 0xca8663, .byte = 0x3a },
		{ .addr = 0xca8664, .byte = 0x18 },
		{ .addr = 0xca8665, .byte = 0x20 },
		{ .addr = 0xca8666, .byte = 0xb2 },
		{ .addr = 0xca8667, .byte = 0x62 }
};

static const SST_Transaction rolb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13272678, .data = 45666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 112 },
};

static const SST_RamByte rolb_initial_ram_12[] = {
		{ .addr = 0x615498, .byte = 0xe7 },
		{ .addr = 0x615499, .byte = 0x38 },
		{ .addr = 0x61549a, .byte = 0x98 },
		{ .addr = 0x61549b, .byte = 0x83 },
		{ .addr = 0x61549c, .byte = 0xc7 },
		{ .addr = 0x61549d, .byte = 0xdc }
};

static const SST_RamByte rolb_final_ram_12[] = {
		{ .addr = 0x615498, .byte = 0xe7 },
		{ .addr = 0x615499, .byte = 0x38 },
		{ .addr = 0x61549a, .byte = 0x98 },
		{ .addr = 0x61549b, .byte = 0x83 },
		{ .addr = 0x61549c, .byte = 0xc7 },
		{ .addr = 0x61549d, .byte = 0xdc }
};

static const SST_Transaction rolb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6378652, .data = 51164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 58 },
};

static const SST_RamByte rolb_initial_ram_13[] = {
		{ .addr = 0xe26dd0, .byte = 0xe9 },
		{ .addr = 0xe26dd1, .byte = 0x18 },
		{ .addr = 0xe26dd2, .byte = 0xeb },
		{ .addr = 0xe26dd3, .byte = 0x49 },
		{ .addr = 0xe26dd4, .byte = 0x5c },
		{ .addr = 0xe26dd5, .byte = 0xb1 }
};

static const SST_RamByte rolb_final_ram_13[] = {
		{ .addr = 0xe26dd0, .byte = 0xe9 },
		{ .addr = 0xe26dd1, .byte = 0x18 },
		{ .addr = 0xe26dd2, .byte = 0xeb },
		{ .addr = 0xe26dd3, .byte = 0x49 },
		{ .addr = 0xe26dd4, .byte = 0x5c },
		{ .addr = 0xe26dd5, .byte = 0xb1 }
};

static const SST_Transaction rolb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14839252, .data = 23729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte rolb_initial_ram_14[] = {
		{ .addr = 0x701288, .byte = 0xef },
		{ .addr = 0x701289, .byte = 0x3b },
		{ .addr = 0x70128a, .byte = 0x5e },
		{ .addr = 0x70128b, .byte = 0x8f },
		{ .addr = 0x70128c, .byte = 0x08 },
		{ .addr = 0x70128d, .byte = 0x24 }
};

static const SST_RamByte rolb_final_ram_14[] = {
		{ .addr = 0x701288, .byte = 0xef },
		{ .addr = 0x701289, .byte = 0x3b },
		{ .addr = 0x70128a, .byte = 0x5e },
		{ .addr = 0x70128b, .byte = 0x8f },
		{ .addr = 0x70128c, .byte = 0x08 },
		{ .addr = 0x70128d, .byte = 0x24 }
};

static const SST_Transaction rolb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7344780, .data = 2084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte rolb_initial_ram_15[] = {
		{ .addr = 0xade8b2, .byte = 0xed },
		{ .addr = 0xade8b3, .byte = 0x3f },
		{ .addr = 0xade8b4, .byte = 0xa6 },
		{ .addr = 0xade8b5, .byte = 0xd0 },
		{ .addr = 0xade8b6, .byte = 0xb5 },
		{ .addr = 0xade8b7, .byte = 0x62 }
};

static const SST_RamByte rolb_final_ram_15[] = {
		{ .addr = 0xade8b2, .byte = 0xed },
		{ .addr = 0xade8b3, .byte = 0x3f },
		{ .addr = 0xade8b4, .byte = 0xa6 },
		{ .addr = 0xade8b5, .byte = 0xd0 },
		{ .addr = 0xade8b6, .byte = 0xb5 },
		{ .addr = 0xade8b7, .byte = 0x62 }
};

static const SST_Transaction rolb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11397302, .data = 46434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

const uint32_t ROLB_TEST_COUNT = 16;
static const SST_TestCase rolb[] = {
	{
		.name = "000 ROL.b 5, D4 eb1c",
		.initial = {
			.regs = {
				2517272444, 2265450936, 1004140053, 1657010017, 2442098835, 2304893628, 1293499442, 986914619, 2015161358, 4086230873, 3045446721, 3003015903, 323189962, 2814893831, 3927382775, 3430384, 16342792, 40961, 3138276
			},
			.prefetch0 = 60188,
			.prefetch1 = 31637,
			.ram = rolb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2517272444, 2265450936, 1004140053, 1657010017, 2442098802, 2304893628, 1293499442, 986914619, 2015161358, 4086230873, 3045446721, 3003015903, 323189962, 2814893831, 3927382775, 3430384, 16342792, 40960, 3138278
			},
			.prefetch0 = 31637,
			.prefetch1 = 50154,
			.ram = rolb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_0,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "001 ROL.b 3, D0 e718",
		.initial = {
			.regs = {
				557363020, 222979996, 2696534490, 2493432924, 1571087670, 4076375753, 690514296, 3205771710, 183174907, 3964430286, 572844784, 1525162119, 2575128978, 2087451765, 1924933974, 1158616, 2583548, 34328, 4304518
			},
			.prefetch0 = 59160,
			.prefetch1 = 61468,
			.ram = rolb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				557363042, 222979996, 2696534490, 2493432924, 1571087670, 4076375753, 690514296, 3205771710, 183174907, 3964430286, 572844784, 1525162119, 2575128978, 2087451765, 1924933974, 1158616, 2583548, 34320, 4304520
			},
			.prefetch0 = 61468,
			.prefetch1 = 55053,
			.ram = rolb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_1,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "002 ROL.b 3, D7 e71f",
		.initial = {
			.regs = {
				306651943, 2391638740, 445355771, 1196674084, 874774640, 1335028407, 1718064082, 2277163296, 270365577, 1204932636, 2979941970, 2986714793, 2741030392, 3366229005, 3877087357, 14331298, 4292116, 33797, 2905310
			},
			.prefetch0 = 59167,
			.prefetch1 = 48742,
			.ram = rolb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				306651943, 2391638740, 445355771, 1196674084, 874774640, 1335028407, 1718064082, 2277163265, 270365577, 1204932636, 2979941970, 2986714793, 2741030392, 3366229005, 3877087357, 14331298, 4292116, 33793, 2905312
			},
			.prefetch0 = 48742,
			.prefetch1 = 1928,
			.ram = rolb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_2,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "003 ROL.b 8, D6 e11e",
		.initial = {
			.regs = {
				2033138896, 293671136, 3954826209, 3769569832, 111302545, 373917263, 95853994, 4223699348, 116985440, 2213084231, 2693565169, 1825466444, 1814544839, 3417249895, 2186966446, 3768962, 1364376, 9991, 14727636
			},
			.prefetch0 = 57630,
			.prefetch1 = 53011,
			.ram = rolb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2033138896, 293671136, 3954826209, 3769569832, 111302545, 373917263, 95853994, 4223699348, 116985440, 2213084231, 2693565169, 1825466444, 1814544839, 3417249895, 2186966446, 3768962, 1364376, 9992, 14727638
			},
			.prefetch0 = 53011,
			.prefetch1 = 24552,
			.ram = rolb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_3,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "004 ROL.b 6, D7 ed1f",
		.initial = {
			.regs = {
				1637331727, 3285437965, 3875928933, 814381074, 1707197564, 1634418522, 2958657808, 3852870602, 450303520, 4097682415, 1572217456, 4253576308, 1648257150, 1876299861, 2120654243, 8629884, 15051632, 40987, 12377002
			},
			.prefetch0 = 60703,
			.prefetch1 = 38642,
			.ram = rolb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1637331727, 3285437965, 3875928933, 814381074, 1707197564, 1634418522, 2958657808, 3852870578, 450303520, 4097682415, 1572217456, 4253576308, 1648257150, 1876299861, 2120654243, 8629884, 15051632, 40984, 12377004
			},
			.prefetch0 = 38642,
			.prefetch1 = 11496,
			.ram = rolb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_4,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "005 ROL.b 8, D2 e11a",
		.initial = {
			.regs = {
				3121346295, 1935091482, 2321648807, 3575131145, 3806449809, 1134735384, 1919898078, 2353303365, 1547951000, 1435580320, 2282374373, 1277774797, 4294737208, 2615853422, 2470206333, 13524190, 13529614, 41485, 1927074
			},
			.prefetch0 = 57626,
			.prefetch1 = 25805,
			.ram = rolb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3121346295, 1935091482, 2321648807, 3575131145, 3806449809, 1134735384, 1919898078, 2353303365, 1547951000, 1435580320, 2282374373, 1277774797, 4294737208, 2615853422, 2470206333, 13524190, 13529614, 41481, 1927076
			},
			.prefetch0 = 25805,
			.prefetch1 = 63324,
			.ram = rolb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_5,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "006 ROL.b 1, D7 e31f",
		.initial = {
			.regs = {
				2080228600, 2392879428, 3498930338, 2044475427, 3967296173, 3212892119, 3731330743, 1024176039, 3068130624, 1211975360, 1373970970, 3388641526, 2534467839, 1727926412, 440142660, 2928568, 4404926, 33562, 7542108
			},
			.prefetch0 = 58143,
			.prefetch1 = 29716,
			.ram = rolb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2080228600, 2392879428, 3498930338, 2044475427, 3967296173, 3212892119, 3731330743, 1024175951, 3068130624, 1211975360, 1373970970, 3388641526, 2534467839, 1727926412, 440142660, 2928568, 4404926, 33553, 7542110
			},
			.prefetch0 = 29716,
			.prefetch1 = 55699,
			.ram = rolb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_6,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "007 ROL.b D0, D7 e13f",
		.initial = {
			.regs = {
				1896915883, 1076609924, 2389347442, 2321464520, 4156156061, 2944638282, 1688296616, 3755547062, 4131966644, 1201309374, 3275087374, 2177998037, 2674414833, 235171935, 4267248747, 6253938, 4222142, 42258, 4280618
			},
			.prefetch0 = 57663,
			.prefetch1 = 5568,
			.ram = rolb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1896915883, 1076609924, 2389347442, 2321464520, 4156156061, 2944638282, 1688296616, 3755547061, 4131966644, 1201309374, 3275087374, 2177998037, 2674414833, 235171935, 4267248747, 6253938, 4222142, 42265, 4280620
			},
			.prefetch0 = 5568,
			.prefetch1 = 55548,
			.ram = rolb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_7,
		.transactions_len = 2,
		.lenght = 92,
	},
	{
		.name = "008 ROL.b D3, D3 e73b",
		.initial = {
			.regs = {
				3849246057, 2967514573, 1480250322, 3401968749, 706725117, 3984562985, 3872875335, 1207834503, 1102243060, 2177052573, 1429863112, 23107573, 4116416851, 2085949970, 1666324075, 13681082, 7714024, 33792, 2611984
			},
			.prefetch0 = 59195,
			.prefetch1 = 59661,
			.ram = rolb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3849246057, 2967514573, 1480250322, 3401968813, 706725117, 3984562985, 3872875335, 1207834503, 1102243060, 2177052573, 1429863112, 23107573, 4116416851, 2085949970, 1666324075, 13681082, 7714024, 33801, 2611986
			},
			.prefetch0 = 59661,
			.prefetch1 = 33361,
			.ram = rolb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_8,
		.transactions_len = 2,
		.lenght = 96,
	},
	{
		.name = "009 ROL.b D3, D2 e73a",
		.initial = {
			.regs = {
				3306083787, 2285871643, 1045351345, 1692673270, 1446600989, 2372299166, 878817740, 3301461481, 2577110579, 518262105, 1628677442, 2646854919, 849673132, 2160486211, 557626768, 16195136, 3364250, 33550, 12241496
			},
			.prefetch0 = 59194,
			.prefetch1 = 53644,
			.ram = rolb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3306083787, 2285871643, 1045351276, 1692673270, 1446600989, 2372299166, 878817740, 3301461481, 2577110579, 518262105, 1628677442, 2646854919, 849673132, 2160486211, 557626768, 16195136, 3364250, 33536, 12241498
			},
			.prefetch0 = 53644,
			.prefetch1 = 9782,
			.ram = rolb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_9,
		.transactions_len = 2,
		.lenght = 114,
	},
	{
		.name = "010 ROL.b D4, D1 e939",
		.initial = {
			.regs = {
				4268230052, 2278571775, 1130927638, 215408043, 3001769455, 1718329167, 1554989579, 2781965532, 3306335240, 3905965229, 401447721, 1879269767, 2241729892, 3180356239, 401688969, 14127360, 124888, 34063, 1217838
			},
			.prefetch0 = 59705,
			.prefetch1 = 62413,
			.ram = rolb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4268230052, 2278571775, 1130927638, 215408043, 3001769455, 1718329167, 1554989579, 2781965532, 3306335240, 3905965229, 401447721, 1879269767, 2241729892, 3180356239, 401688969, 14127360, 124888, 34057, 1217840
			},
			.prefetch0 = 62413,
			.prefetch1 = 58166,
			.ram = rolb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_10,
		.transactions_len = 2,
		.lenght = 100,
	},
	{
		.name = "011 ROL.b D4, D2 e93a",
		.initial = {
			.regs = {
				2808414638, 1838772720, 878018766, 4279017592, 3958625079, 4261430675, 654331887, 1988691634, 2204572853, 330676880, 3773640364, 2733242185, 3736659768, 3305068786, 4253644418, 5686462, 2009906, 8465, 13272678
			},
			.prefetch0 = 59706,
			.prefetch1 = 6176,
			.ram = rolb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2808414638, 1838772720, 878018663, 4279017592, 3958625079, 4261430675, 654331887, 1988691634, 2204572853, 330676880, 3773640364, 2733242185, 3736659768, 3305068786, 4253644418, 5686462, 2009906, 8465, 13272680
			},
			.prefetch0 = 6176,
			.prefetch1 = 45666,
			.ram = rolb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_11,
		.transactions_len = 2,
		.lenght = 116,
	},
	{
		.name = "012 ROL.b D3, D0 e738",
		.initial = {
			.regs = {
				2649412653, 488906020, 3841888310, 1399100828, 1464644709, 4068516276, 4240415960, 1876828174, 2423627609, 3806031306, 2937776363, 349037438, 3924904199, 3504238528, 1508356198, 3130012, 11435284, 34078, 6378652
			},
			.prefetch0 = 59192,
			.prefetch1 = 39043,
			.ram = rolb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2649412818, 488906020, 3841888310, 1399100828, 1464644709, 4068516276, 4240415960, 1876828174, 2423627609, 3806031306, 2937776363, 349037438, 3924904199, 3504238528, 1508356198, 3130012, 11435284, 34072, 6378654
			},
			.prefetch0 = 39043,
			.prefetch1 = 51164,
			.ram = rolb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_12,
		.transactions_len = 2,
		.lenght = 62,
	},
	{
		.name = "013 ROL.b 4, D0 e918",
		.initial = {
			.regs = {
				2713204883, 2924489919, 1069964096, 3328736128, 752297381, 2172091413, 2930463800, 1938181077, 543370611, 1365600078, 3808356990, 277184952, 23562403, 3067534945, 2576977473, 9384208, 3232960, 42259, 14839252
			},
			.prefetch0 = 59672,
			.prefetch1 = 60233,
			.ram = rolb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2713204793, 2924489919, 1069964096, 3328736128, 752297381, 2172091413, 2930463800, 1938181077, 543370611, 1365600078, 3808356990, 277184952, 23562403, 3067534945, 2576977473, 9384208, 3232960, 42257, 14839254
			},
			.prefetch0 = 60233,
			.prefetch1 = 23729,
			.ram = rolb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_13,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "014 ROL.b D7, D3 ef3b",
		.initial = {
			.regs = {
				1076741321, 2593414939, 615500491, 3200446551, 99777743, 1420216958, 3523540861, 3522249279, 4120145091, 1640979233, 1610843156, 2270026336, 52248066, 1968672098, 2797448673, 5804572, 15784338, 1815, 7344780
			},
			.prefetch0 = 61243,
			.prefetch1 = 24207,
			.ram = rolb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1076741321, 2593414939, 615500491, 3200446635, 99777743, 1420216958, 3523540861, 3522249279, 4120145091, 1640979233, 1610843156, 2270026336, 52248066, 1968672098, 2797448673, 5804572, 15784338, 1817, 7344782
			},
			.prefetch0 = 24207,
			.prefetch1 = 2084,
			.ram = rolb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_14,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "015 ROL.b D6, D7 ed3f",
		.initial = {
			.regs = {
				2062038946, 1771536943, 852616501, 841370586, 2869710979, 1304781948, 4112015850, 184911933, 1490848449, 4164130760, 462972291, 1093592980, 1837923861, 3289434519, 2477306231, 15744812, 11045968, 41235, 11397302
			},
			.prefetch0 = 60735,
			.prefetch1 = 42704,
			.ram = rolb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2062038946, 1771536943, 852616501, 841370586, 2869710979, 1304781948, 4112015850, 184912116, 1490848449, 4164130760, 462972291, 1093592980, 1837923861, 3289434519, 2477306231, 15744812, 11045968, 41240, 11397304
			},
			.prefetch0 = 42704,
			.prefetch1 = 46434,
			.ram = rolb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_15,
		.transactions_len = 2,
		.lenght = 90,
	},
};

#endif /* RBT_ROLB_H */