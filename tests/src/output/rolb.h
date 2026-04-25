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

static const SST_RamByte rolb_initial_ram_16[] = {
		{ .addr = 0x0be2f4, .byte = 0xef },
		{ .addr = 0x0be2f5, .byte = 0x19 },
		{ .addr = 0x0be2f6, .byte = 0xeb },
		{ .addr = 0x0be2f7, .byte = 0xf0 },
		{ .addr = 0x0be2f8, .byte = 0x28 },
		{ .addr = 0x0be2f9, .byte = 0xfc }
};

static const SST_RamByte rolb_final_ram_16[] = {
		{ .addr = 0x0be2f4, .byte = 0xef },
		{ .addr = 0x0be2f5, .byte = 0x19 },
		{ .addr = 0x0be2f6, .byte = 0xeb },
		{ .addr = 0x0be2f7, .byte = 0xf0 },
		{ .addr = 0x0be2f8, .byte = 0x28 },
		{ .addr = 0x0be2f9, .byte = 0xfc }
};

static const SST_Transaction rolb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 779000, .data = 10492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rolb_initial_ram_17[] = {
		{ .addr = 0xe28832, .byte = 0xeb },
		{ .addr = 0xe28833, .byte = 0x3c },
		{ .addr = 0xe28834, .byte = 0x34 },
		{ .addr = 0xe28835, .byte = 0xf3 },
		{ .addr = 0xe28836, .byte = 0x39 },
		{ .addr = 0xe28837, .byte = 0x36 }
};

static const SST_RamByte rolb_final_ram_17[] = {
		{ .addr = 0xe28832, .byte = 0xeb },
		{ .addr = 0xe28833, .byte = 0x3c },
		{ .addr = 0xe28834, .byte = 0x34 },
		{ .addr = 0xe28835, .byte = 0xf3 },
		{ .addr = 0xe28836, .byte = 0x39 },
		{ .addr = 0xe28837, .byte = 0x36 }
};

static const SST_Transaction rolb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14846006, .data = 14646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 34 },
};

static const SST_RamByte rolb_initial_ram_18[] = {
		{ .addr = 0x0b2844, .byte = 0xe7 },
		{ .addr = 0x0b2845, .byte = 0x18 },
		{ .addr = 0x0b2846, .byte = 0xcf },
		{ .addr = 0x0b2847, .byte = 0xa4 },
		{ .addr = 0x0b2848, .byte = 0x87 },
		{ .addr = 0x0b2849, .byte = 0xe1 }
};

static const SST_RamByte rolb_final_ram_18[] = {
		{ .addr = 0x0b2844, .byte = 0xe7 },
		{ .addr = 0x0b2845, .byte = 0x18 },
		{ .addr = 0x0b2846, .byte = 0xcf },
		{ .addr = 0x0b2847, .byte = 0xa4 },
		{ .addr = 0x0b2848, .byte = 0x87 },
		{ .addr = 0x0b2849, .byte = 0xe1 }
};

static const SST_Transaction rolb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 731208, .data = 34785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rolb_initial_ram_19[] = {
		{ .addr = 0x65dd68, .byte = 0xe1 },
		{ .addr = 0x65dd69, .byte = 0x3d },
		{ .addr = 0x65dd6a, .byte = 0x2d },
		{ .addr = 0x65dd6b, .byte = 0xe6 },
		{ .addr = 0x65dd6c, .byte = 0xd7 },
		{ .addr = 0x65dd6d, .byte = 0x2c }
};

static const SST_RamByte rolb_final_ram_19[] = {
		{ .addr = 0x65dd68, .byte = 0xe1 },
		{ .addr = 0x65dd69, .byte = 0x3d },
		{ .addr = 0x65dd6a, .byte = 0x2d },
		{ .addr = 0x65dd6b, .byte = 0xe6 },
		{ .addr = 0x65dd6c, .byte = 0xd7 },
		{ .addr = 0x65dd6d, .byte = 0x2c }
};

static const SST_Transaction rolb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6675820, .data = 55084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte rolb_initial_ram_20[] = {
		{ .addr = 0x3676c0, .byte = 0xeb },
		{ .addr = 0x3676c1, .byte = 0x3b },
		{ .addr = 0x3676c2, .byte = 0xb0 },
		{ .addr = 0x3676c3, .byte = 0xb3 },
		{ .addr = 0x3676c4, .byte = 0xa0 },
		{ .addr = 0x3676c5, .byte = 0x69 }
};

static const SST_RamByte rolb_final_ram_20[] = {
		{ .addr = 0x3676c0, .byte = 0xeb },
		{ .addr = 0x3676c1, .byte = 0x3b },
		{ .addr = 0x3676c2, .byte = 0xb0 },
		{ .addr = 0x3676c3, .byte = 0xb3 },
		{ .addr = 0x3676c4, .byte = 0xa0 },
		{ .addr = 0x3676c5, .byte = 0x69 }
};

static const SST_Transaction rolb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3569348, .data = 41065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte rolb_initial_ram_21[] = {
		{ .addr = 0xb781f2, .byte = 0xe9 },
		{ .addr = 0xb781f3, .byte = 0x3e },
		{ .addr = 0xb781f4, .byte = 0xca },
		{ .addr = 0xb781f5, .byte = 0x60 },
		{ .addr = 0xb781f6, .byte = 0xf3 },
		{ .addr = 0xb781f7, .byte = 0xd3 }
};

static const SST_RamByte rolb_final_ram_21[] = {
		{ .addr = 0xb781f2, .byte = 0xe9 },
		{ .addr = 0xb781f3, .byte = 0x3e },
		{ .addr = 0xb781f4, .byte = 0xca },
		{ .addr = 0xb781f5, .byte = 0x60 },
		{ .addr = 0xb781f6, .byte = 0xf3 },
		{ .addr = 0xb781f7, .byte = 0xd3 }
};

static const SST_Transaction rolb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12026358, .data = 62419, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte rolb_initial_ram_22[] = {
		{ .addr = 0xed4216, .byte = 0xe1 },
		{ .addr = 0xed4217, .byte = 0x18 },
		{ .addr = 0xed4218, .byte = 0x71 },
		{ .addr = 0xed4219, .byte = 0x99 },
		{ .addr = 0xed421a, .byte = 0xa2 },
		{ .addr = 0xed421b, .byte = 0x8f }
};

static const SST_RamByte rolb_final_ram_22[] = {
		{ .addr = 0xed4216, .byte = 0xe1 },
		{ .addr = 0xed4217, .byte = 0x18 },
		{ .addr = 0xed4218, .byte = 0x71 },
		{ .addr = 0xed4219, .byte = 0x99 },
		{ .addr = 0xed421a, .byte = 0xa2 },
		{ .addr = 0xed421b, .byte = 0x8f }
};

static const SST_Transaction rolb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15548954, .data = 41615, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte rolb_initial_ram_23[] = {
		{ .addr = 0xc109f8, .byte = 0xe5 },
		{ .addr = 0xc109f9, .byte = 0x3a },
		{ .addr = 0xc109fa, .byte = 0x7e },
		{ .addr = 0xc109fb, .byte = 0xef },
		{ .addr = 0xc109fc, .byte = 0x77 },
		{ .addr = 0xc109fd, .byte = 0xc5 }
};

static const SST_RamByte rolb_final_ram_23[] = {
		{ .addr = 0xc109f8, .byte = 0xe5 },
		{ .addr = 0xc109f9, .byte = 0x3a },
		{ .addr = 0xc109fa, .byte = 0x7e },
		{ .addr = 0xc109fb, .byte = 0xef },
		{ .addr = 0xc109fc, .byte = 0x77 },
		{ .addr = 0xc109fd, .byte = 0xc5 }
};

static const SST_Transaction rolb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12651004, .data = 30661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 88 },
};

static const SST_RamByte rolb_initial_ram_24[] = {
		{ .addr = 0x02f23a, .byte = 0xed },
		{ .addr = 0x02f23b, .byte = 0x1b },
		{ .addr = 0x02f23c, .byte = 0x22 },
		{ .addr = 0x02f23d, .byte = 0x3d },
		{ .addr = 0x02f23e, .byte = 0xb0 },
		{ .addr = 0x02f23f, .byte = 0x1a }
};

static const SST_RamByte rolb_final_ram_24[] = {
		{ .addr = 0x02f23a, .byte = 0xed },
		{ .addr = 0x02f23b, .byte = 0x1b },
		{ .addr = 0x02f23c, .byte = 0x22 },
		{ .addr = 0x02f23d, .byte = 0x3d },
		{ .addr = 0x02f23e, .byte = 0xb0 },
		{ .addr = 0x02f23f, .byte = 0x1a }
};

static const SST_Transaction rolb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 193086, .data = 45082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rolb_initial_ram_25[] = {
		{ .addr = 0x3c38fe, .byte = 0xe5 },
		{ .addr = 0x3c38ff, .byte = 0x1c },
		{ .addr = 0x3c3900, .byte = 0x9f },
		{ .addr = 0x3c3901, .byte = 0xd6 },
		{ .addr = 0x3c3902, .byte = 0x41 },
		{ .addr = 0x3c3903, .byte = 0x60 }
};

static const SST_RamByte rolb_final_ram_25[] = {
		{ .addr = 0x3c38fe, .byte = 0xe5 },
		{ .addr = 0x3c38ff, .byte = 0x1c },
		{ .addr = 0x3c3900, .byte = 0x9f },
		{ .addr = 0x3c3901, .byte = 0xd6 },
		{ .addr = 0x3c3902, .byte = 0x41 },
		{ .addr = 0x3c3903, .byte = 0x60 }
};

static const SST_Transaction rolb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3946754, .data = 16736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte rolb_initial_ram_26[] = {
		{ .addr = 0x00e702, .byte = 0xe3 },
		{ .addr = 0x00e703, .byte = 0x3a },
		{ .addr = 0x00e704, .byte = 0xa8 },
		{ .addr = 0x00e705, .byte = 0x90 },
		{ .addr = 0x00e706, .byte = 0x0d },
		{ .addr = 0x00e707, .byte = 0x7e }
};

static const SST_RamByte rolb_final_ram_26[] = {
		{ .addr = 0x00e702, .byte = 0xe3 },
		{ .addr = 0x00e703, .byte = 0x3a },
		{ .addr = 0x00e704, .byte = 0xa8 },
		{ .addr = 0x00e705, .byte = 0x90 },
		{ .addr = 0x00e706, .byte = 0x0d },
		{ .addr = 0x00e707, .byte = 0x7e }
};

static const SST_Transaction rolb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 59142, .data = 3454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte rolb_initial_ram_27[] = {
		{ .addr = 0xdcf36c, .byte = 0xeb },
		{ .addr = 0xdcf36d, .byte = 0x1f },
		{ .addr = 0xdcf36e, .byte = 0xd1 },
		{ .addr = 0xdcf36f, .byte = 0x94 },
		{ .addr = 0xdcf370, .byte = 0x1a },
		{ .addr = 0xdcf371, .byte = 0x0e }
};

static const SST_RamByte rolb_final_ram_27[] = {
		{ .addr = 0xdcf36c, .byte = 0xeb },
		{ .addr = 0xdcf36d, .byte = 0x1f },
		{ .addr = 0xdcf36e, .byte = 0xd1 },
		{ .addr = 0xdcf36f, .byte = 0x94 },
		{ .addr = 0xdcf370, .byte = 0x1a },
		{ .addr = 0xdcf371, .byte = 0x0e }
};

static const SST_Transaction rolb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14480240, .data = 6670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rolb_initial_ram_28[] = {
		{ .addr = 0x539cd2, .byte = 0xe7 },
		{ .addr = 0x539cd3, .byte = 0x3b },
		{ .addr = 0x539cd4, .byte = 0x53 },
		{ .addr = 0x539cd5, .byte = 0x5b },
		{ .addr = 0x539cd6, .byte = 0x41 },
		{ .addr = 0x539cd7, .byte = 0xb2 }
};

static const SST_RamByte rolb_final_ram_28[] = {
		{ .addr = 0x539cd2, .byte = 0xe7 },
		{ .addr = 0x539cd3, .byte = 0x3b },
		{ .addr = 0x539cd4, .byte = 0x53 },
		{ .addr = 0x539cd5, .byte = 0x5b },
		{ .addr = 0x539cd6, .byte = 0x41 },
		{ .addr = 0x539cd7, .byte = 0xb2 }
};

static const SST_Transaction rolb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5479638, .data = 16818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 42 },
};

static const SST_RamByte rolb_initial_ram_29[] = {
		{ .addr = 0x662f78, .byte = 0xe3 },
		{ .addr = 0x662f79, .byte = 0x3c },
		{ .addr = 0x662f7a, .byte = 0x99 },
		{ .addr = 0x662f7b, .byte = 0x20 },
		{ .addr = 0x662f7c, .byte = 0x10 },
		{ .addr = 0x662f7d, .byte = 0xbf }
};

static const SST_RamByte rolb_final_ram_29[] = {
		{ .addr = 0x662f78, .byte = 0xe3 },
		{ .addr = 0x662f79, .byte = 0x3c },
		{ .addr = 0x662f7a, .byte = 0x99 },
		{ .addr = 0x662f7b, .byte = 0x20 },
		{ .addr = 0x662f7c, .byte = 0x10 },
		{ .addr = 0x662f7d, .byte = 0xbf }
};

static const SST_Transaction rolb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6696828, .data = 4287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 62 },
};

static const SST_RamByte rolb_initial_ram_30[] = {
		{ .addr = 0xe9582c, .byte = 0xef },
		{ .addr = 0xe9582d, .byte = 0x19 },
		{ .addr = 0xe9582e, .byte = 0x38 },
		{ .addr = 0xe9582f, .byte = 0x8e },
		{ .addr = 0xe95830, .byte = 0xe0 },
		{ .addr = 0xe95831, .byte = 0x5e }
};

static const SST_RamByte rolb_final_ram_30[] = {
		{ .addr = 0xe9582c, .byte = 0xef },
		{ .addr = 0xe9582d, .byte = 0x19 },
		{ .addr = 0xe9582e, .byte = 0x38 },
		{ .addr = 0xe9582f, .byte = 0x8e },
		{ .addr = 0xe95830, .byte = 0xe0 },
		{ .addr = 0xe95831, .byte = 0x5e }
};

static const SST_Transaction rolb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15292464, .data = 57438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rolb_initial_ram_31[] = {
		{ .addr = 0x91d09c, .byte = 0xe5 },
		{ .addr = 0x91d09d, .byte = 0x1d },
		{ .addr = 0x91d09e, .byte = 0x06 },
		{ .addr = 0x91d09f, .byte = 0xe7 },
		{ .addr = 0x91d0a0, .byte = 0x35 },
		{ .addr = 0x91d0a1, .byte = 0xc6 }
};

static const SST_RamByte rolb_final_ram_31[] = {
		{ .addr = 0x91d09c, .byte = 0xe5 },
		{ .addr = 0x91d09d, .byte = 0x1d },
		{ .addr = 0x91d09e, .byte = 0x06 },
		{ .addr = 0x91d09f, .byte = 0xe7 },
		{ .addr = 0x91d0a0, .byte = 0x35 },
		{ .addr = 0x91d0a1, .byte = 0xc6 }
};

static const SST_Transaction rolb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9556128, .data = 13766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

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
	{
		.name = "016 ROL.b 7, D1 ef19",
		.initial = {
			.regs = {
				530544021, 840526350, 2586796202, 1944850098, 1164118093, 1175397117, 4080453519, 1638186718, 2474427547, 3944149220, 2166645898, 1723045459, 3782658524, 3414433244, 436975443, 15910934, 16738548, 15, 779000
			},
			.prefetch0 = 61209,
			.prefetch1 = 60400,
			.ram = rolb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				530544021, 840526343, 2586796202, 1944850098, 1164118093, 1175397117, 4080453519, 1638186718, 2474427547, 3944149220, 2166645898, 1723045459, 3782658524, 3414433244, 436975443, 15910934, 16738548, 1, 779002
			},
			.prefetch0 = 60400,
			.prefetch1 = 10492,
			.ram = rolb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_16,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "017 ROL.b D5, D4 eb3c",
		.initial = {
			.regs = {
				1070527760, 2336400472, 3851926200, 4012223974, 2132827166, 3644689424, 486041942, 628709282, 2173568894, 2319730534, 1564795311, 88053603, 1928378426, 3524059556, 979276332, 10872766, 14881378, 9231, 14846006
			},
			.prefetch0 = 60220,
			.prefetch1 = 13555,
			.ram = rolb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1070527760, 2336400472, 3851926200, 4012223974, 2132827166, 3644689424, 486041942, 628709282, 2173568894, 2319730534, 1564795311, 88053603, 1928378426, 3524059556, 979276332, 10872766, 14881378, 9216, 14846008
			},
			.prefetch0 = 13555,
			.prefetch1 = 14646,
			.ram = rolb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_17,
		.transactions_len = 2,
		.lenght = 38,
	},
	{
		.name = "018 ROL.b 3, D0 e718",
		.initial = {
			.regs = {
				477440888, 3665118792, 1573931814, 2690492441, 2330176374, 4049376732, 4271326830, 2285371756, 3280193665, 3033157566, 1617545409, 2103119393, 997473440, 3897056601, 3805272762, 6963946, 6854972, 41247, 731208
			},
			.prefetch0 = 59160,
			.prefetch1 = 53156,
			.ram = rolb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				477440963, 3665118792, 1573931814, 2690492441, 2330176374, 4049376732, 4271326830, 2285371756, 3280193665, 3033157566, 1617545409, 2103119393, 997473440, 3897056601, 3805272762, 6963946, 6854972, 41241, 731210
			},
			.prefetch0 = 53156,
			.prefetch1 = 34785,
			.ram = rolb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_18,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "019 ROL.b D0, D5 e13d",
		.initial = {
			.regs = {
				1417843184, 1100094406, 4089403432, 1258210268, 1241116811, 572454912, 1420158789, 1024173682, 125442271, 1901658617, 976403925, 3195609333, 2656293474, 464859132, 870379588, 16394254, 1172184, 33816, 6675820
			},
			.prefetch0 = 57661,
			.prefetch1 = 11750,
			.ram = rolb_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1417843184, 1100094406, 4089403432, 1258210268, 1241116811, 572454912, 1420158789, 1024173682, 125442271, 1901658617, 976403925, 3195609333, 2656293474, 464859132, 870379588, 16394254, 1172184, 33812, 6675822
			},
			.prefetch0 = 11750,
			.prefetch1 = 55084,
			.ram = rolb_final_ram_19,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_19,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "020 ROL.b D5, D3 eb3b",
		.initial = {
			.regs = {
				1224890989, 2439046427, 2994653109, 219200651, 3318481803, 3858248085, 89015216, 1421530620, 3400682402, 1179819627, 1165191945, 3716900635, 2460365583, 3166390700, 2265020519, 5675578, 12410390, 1041, 3569348
			},
			.prefetch0 = 60219,
			.prefetch1 = 45235,
			.ram = rolb_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1224890989, 2439046427, 2994653109, 219200625, 3318481803, 3858248085, 89015216, 1421530620, 3400682402, 1179819627, 1165191945, 3716900635, 2460365583, 3166390700, 2265020519, 5675578, 12410390, 1041, 3569350
			},
			.prefetch0 = 45235,
			.prefetch1 = 41065,
			.ram = rolb_final_ram_20,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_20,
		.transactions_len = 2,
		.lenght = 48,
	},
	{
		.name = "021 ROL.b D4, D6 e93e",
		.initial = {
			.regs = {
				1994201838, 1210517968, 475286802, 2309896370, 3466915253, 243540924, 1204903796, 3658615546, 3896375751, 453072641, 3079449620, 4052443385, 1602285361, 3385580760, 279505603, 13749576, 4029090, 34313, 12026358
			},
			.prefetch0 = 59710,
			.prefetch1 = 51808,
			.ram = rolb_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1994201838, 1210517968, 475286802, 2309896370, 3466915253, 243540924, 1204903822, 3658615546, 3896375751, 453072641, 3079449620, 4052443385, 1602285361, 3385580760, 279505603, 13749576, 4029090, 34312, 12026360
			},
			.prefetch0 = 51808,
			.prefetch1 = 62419,
			.ram = rolb_final_ram_21,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_21,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "022 ROL.b 8, D0 e118",
		.initial = {
			.regs = {
				3888417739, 3099099435, 3787045878, 783167977, 3429748149, 2737407827, 1693013133, 3625239023, 1620283346, 2375112261, 1378375027, 4294533461, 3949340261, 4184916213, 1884099275, 11326926, 11512698, 33281, 15548954
			},
			.prefetch0 = 57624,
			.prefetch1 = 29081,
			.ram = rolb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3888417739, 3099099435, 3787045878, 783167977, 3429748149, 2737407827, 1693013133, 3625239023, 1620283346, 2375112261, 1378375027, 4294533461, 3949340261, 4184916213, 1884099275, 11326926, 11512698, 33289, 15548956
			},
			.prefetch0 = 29081,
			.prefetch1 = 41615,
			.ram = rolb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_22,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "023 ROL.b D2, D2 e53a",
		.initial = {
			.regs = {
				2590552309, 1619395062, 869214251, 1914625597, 1340949477, 1722932041, 2774591579, 300883467, 60853628, 343200269, 903899585, 590581845, 3590943831, 3512755589, 2391586779, 9070172, 16372208, 1792, 12651004
			},
			.prefetch0 = 58682,
			.prefetch1 = 32495,
			.ram = rolb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2590552309, 1619395062, 869214297, 1914625597, 1340949477, 1722932041, 2774591579, 300883467, 60853628, 343200269, 903899585, 590581845, 3590943831, 3512755589, 2391586779, 9070172, 16372208, 1793, 12651006
			},
			.prefetch0 = 32495,
			.prefetch1 = 30661,
			.ram = rolb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_23,
		.transactions_len = 2,
		.lenght = 92,
	},
	{
		.name = "024 ROL.b 6, D3 ed1b",
		.initial = {
			.regs = {
				2720800286, 1794298533, 415946679, 2931705417, 2757913123, 895819445, 1918913918, 2617265347, 4168960685, 1151544233, 1572953301, 2104276463, 260390686, 3157588418, 1299900616, 6204010, 5610078, 41758, 193086
			},
			.prefetch0 = 60699,
			.prefetch1 = 8765,
			.ram = rolb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2720800286, 1794298533, 415946679, 2931705426, 2757913123, 895819445, 1918913918, 2617265347, 4168960685, 1151544233, 1572953301, 2104276463, 260390686, 3157588418, 1299900616, 6204010, 5610078, 41744, 193088
			},
			.prefetch0 = 8765,
			.prefetch1 = 45082,
			.ram = rolb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_24,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "025 ROL.b 2, D4 e51c",
		.initial = {
			.regs = {
				127535224, 3691199360, 3181575835, 1686179500, 861515171, 26715578, 650153423, 1957978373, 1326324758, 2694864789, 409600795, 2819878916, 428543133, 2719481767, 2009959505, 6452602, 10784106, 31, 3946754
			},
			.prefetch0 = 58652,
			.prefetch1 = 40918,
			.ram = rolb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				127535224, 3691199360, 3181575835, 1686179500, 861515150, 26715578, 650153423, 1957978373, 1326324758, 2694864789, 409600795, 2819878916, 428543133, 2719481767, 2009959505, 6452602, 10784106, 24, 3946756
			},
			.prefetch0 = 40918,
			.prefetch1 = 16736,
			.ram = rolb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_25,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "026 ROL.b D1, D2 e33a",
		.initial = {
			.regs = {
				3100975191, 1982937869, 3970164108, 1971181905, 250082390, 799712022, 1518352944, 713182032, 1739159880, 1114133534, 1258108446, 2483123092, 3698988796, 1584157952, 1161006182, 8230288, 7381262, 791, 59142
			},
			.prefetch0 = 58170,
			.prefetch1 = 43152,
			.ram = rolb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3100975191, 1982937869, 3970164113, 1971181905, 250082390, 799712022, 1518352944, 713182032, 1739159880, 1114133534, 1258108446, 2483123092, 3698988796, 1584157952, 1161006182, 8230288, 7381262, 793, 59144
			},
			.prefetch0 = 43152,
			.prefetch1 = 3454,
			.ram = rolb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_26,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "027 ROL.b 5, D7 eb1f",
		.initial = {
			.regs = {
				4004656598, 965240332, 1655382189, 1784336203, 77441977, 894949174, 984454814, 3248361088, 1559492930, 2870733343, 4025610105, 663938668, 4165622551, 2166845290, 1797194179, 13134372, 12023652, 9482, 14480240
			},
			.prefetch0 = 60191,
			.prefetch1 = 53652,
			.ram = rolb_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4004656598, 965240332, 1655382189, 1784336203, 77441977, 894949174, 984454814, 3248360976, 1559492930, 2870733343, 4025610105, 663938668, 4165622551, 2166845290, 1797194179, 13134372, 12023652, 9472, 14480242
			},
			.prefetch0 = 53652,
			.prefetch1 = 6670,
			.ram = rolb_final_ram_27,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_27,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "028 ROL.b D3, D3 e73b",
		.initial = {
			.regs = {
				3665140250, 2208820664, 3522092968, 2620719316, 988278748, 3767208698, 3108684404, 2065414759, 1537140008, 911180880, 3868811179, 2428340430, 2496880850, 1373087079, 2396683157, 15547264, 2319864, 9474, 5479638
			},
			.prefetch0 = 59195,
			.prefetch1 = 21339,
			.ram = rolb_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3665140250, 2208820664, 3522092968, 2620719181, 988278748, 3767208698, 3108684404, 2065414759, 1537140008, 911180880, 3868811179, 2428340430, 2496880850, 1373087079, 2396683157, 15547264, 2319864, 9473, 5479640
			},
			.prefetch0 = 21339,
			.prefetch1 = 16818,
			.ram = rolb_final_ram_28,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_28,
		.transactions_len = 2,
		.lenght = 46,
	},
	{
		.name = "029 ROL.b D1, D4 e33c",
		.initial = {
			.regs = {
				1261701766, 801871134, 1984639974, 3894731984, 2076774845, 2338590770, 36173524, 2316011585, 1046456814, 4156756661, 4072715349, 3322740426, 458469329, 149907545, 14742512, 2112578, 8587992, 1028, 6696828
			},
			.prefetch0 = 58172,
			.prefetch1 = 39200,
			.ram = rolb_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1261701766, 801871134, 1984639974, 3894731984, 2076774767, 2338590770, 36173524, 2316011585, 1046456814, 4156756661, 4072715349, 3322740426, 458469329, 149907545, 14742512, 2112578, 8587992, 1025, 6696830
			},
			.prefetch0 = 39200,
			.prefetch1 = 4287,
			.ram = rolb_final_ram_29,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_29,
		.transactions_len = 2,
		.lenght = 66,
	},
	{
		.name = "030 ROL.b 7, D1 ef19",
		.initial = {
			.regs = {
				906646111, 1142412146, 2969559121, 2740073496, 717803672, 1524410337, 3302464410, 2310322864, 1813733618, 3045520870, 1002079077, 1600140249, 2873167272, 2832025239, 303639451, 5581244, 126076, 1553, 15292464
			},
			.prefetch0 = 61209,
			.prefetch1 = 14478,
			.ram = rolb_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				906646111, 1142412089, 2969559121, 2740073496, 717803672, 1524410337, 3302464410, 2310322864, 1813733618, 3045520870, 1002079077, 1600140249, 2873167272, 2832025239, 303639451, 5581244, 126076, 1553, 15292466
			},
			.prefetch0 = 14478,
			.prefetch1 = 57438,
			.ram = rolb_final_ram_30,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_30,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "031 ROL.b 2, D5 e51d",
		.initial = {
			.regs = {
				1625963927, 3759388925, 3444275125, 3674812053, 308521318, 287033701, 3716048017, 967352987, 478319883, 610028907, 1732668311, 2715510909, 3943989959, 3571240499, 3597326120, 15842958, 10929134, 34569, 9556128
			},
			.prefetch0 = 58653,
			.prefetch1 = 1767,
			.ram = rolb_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1625963927, 3759388925, 3444275125, 3674812053, 308521318, 287033749, 3716048017, 967352987, 478319883, 610028907, 1732668311, 2715510909, 3943989959, 3571240499, 3597326120, 15842958, 10929134, 34569, 9556130
			},
			.prefetch0 = 1767,
			.prefetch1 = 13766,
			.ram = rolb_final_ram_31,
			.ram_len = 6,
		},
		.transactions = rolb_transactions_31,
		.transactions_len = 2,
		.lenght = 10,
	},
};

#endif /* RBT_ROLB_H */