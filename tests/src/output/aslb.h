#ifndef RBT_ASLB_H
#define RBT_ASLB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte aslb_initial_ram_0[] = {
		{ .addr = 0xf84f74, .byte = 0xe3 },
		{ .addr = 0xf84f75, .byte = 0x02 },
		{ .addr = 0xf84f76, .byte = 0x7e },
		{ .addr = 0xf84f77, .byte = 0xad },
		{ .addr = 0xf84f78, .byte = 0xff },
		{ .addr = 0xf84f79, .byte = 0x87 }
};

static const SST_RamByte aslb_final_ram_0[] = {
		{ .addr = 0xf84f74, .byte = 0xe3 },
		{ .addr = 0xf84f75, .byte = 0x02 },
		{ .addr = 0xf84f76, .byte = 0x7e },
		{ .addr = 0xf84f77, .byte = 0xad },
		{ .addr = 0xf84f78, .byte = 0xff },
		{ .addr = 0xf84f79, .byte = 0x87 }
};

static const SST_Transaction aslb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16273272, .data = 65415, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte aslb_initial_ram_1[] = {
		{ .addr = 0xa4c93e, .byte = 0xe5 },
		{ .addr = 0xa4c93f, .byte = 0x23 },
		{ .addr = 0xa4c940, .byte = 0xb9 },
		{ .addr = 0xa4c941, .byte = 0xfd },
		{ .addr = 0xa4c942, .byte = 0x77 },
		{ .addr = 0xa4c943, .byte = 0x0b }
};

static const SST_RamByte aslb_final_ram_1[] = {
		{ .addr = 0xa4c93e, .byte = 0xe5 },
		{ .addr = 0xa4c93f, .byte = 0x23 },
		{ .addr = 0xa4c940, .byte = 0xb9 },
		{ .addr = 0xa4c941, .byte = 0xfd },
		{ .addr = 0xa4c942, .byte = 0x77 },
		{ .addr = 0xa4c943, .byte = 0x0b }
};

static const SST_Transaction aslb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10799426, .data = 30475, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 64 },
};

static const SST_RamByte aslb_initial_ram_2[] = {
		{ .addr = 0x6ff272, .byte = 0xe3 },
		{ .addr = 0x6ff273, .byte = 0x07 },
		{ .addr = 0x6ff274, .byte = 0xcb },
		{ .addr = 0x6ff275, .byte = 0x62 },
		{ .addr = 0x6ff276, .byte = 0xbf },
		{ .addr = 0x6ff277, .byte = 0x90 }
};

static const SST_RamByte aslb_final_ram_2[] = {
		{ .addr = 0x6ff272, .byte = 0xe3 },
		{ .addr = 0x6ff273, .byte = 0x07 },
		{ .addr = 0x6ff274, .byte = 0xcb },
		{ .addr = 0x6ff275, .byte = 0x62 },
		{ .addr = 0x6ff276, .byte = 0xbf },
		{ .addr = 0x6ff277, .byte = 0x90 }
};

static const SST_Transaction aslb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7336566, .data = 49040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte aslb_initial_ram_3[] = {
		{ .addr = 0xbf2ac8, .byte = 0xe7 },
		{ .addr = 0xbf2ac9, .byte = 0x23 },
		{ .addr = 0xbf2aca, .byte = 0x1f },
		{ .addr = 0xbf2acb, .byte = 0x6b },
		{ .addr = 0xbf2acc, .byte = 0x26 },
		{ .addr = 0xbf2acd, .byte = 0x1e }
};

static const SST_RamByte aslb_final_ram_3[] = {
		{ .addr = 0xbf2ac8, .byte = 0xe7 },
		{ .addr = 0xbf2ac9, .byte = 0x23 },
		{ .addr = 0xbf2aca, .byte = 0x1f },
		{ .addr = 0xbf2acb, .byte = 0x6b },
		{ .addr = 0xbf2acc, .byte = 0x26 },
		{ .addr = 0xbf2acd, .byte = 0x1e }
};

static const SST_Transaction aslb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12528332, .data = 9758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte aslb_initial_ram_4[] = {
		{ .addr = 0xeb5566, .byte = 0xe1 },
		{ .addr = 0xeb5567, .byte = 0x27 },
		{ .addr = 0xeb5568, .byte = 0xc8 },
		{ .addr = 0xeb5569, .byte = 0x4c },
		{ .addr = 0xeb556a, .byte = 0xaf },
		{ .addr = 0xeb556b, .byte = 0x40 }
};

static const SST_RamByte aslb_final_ram_4[] = {
		{ .addr = 0xeb5566, .byte = 0xe1 },
		{ .addr = 0xeb5567, .byte = 0x27 },
		{ .addr = 0xeb5568, .byte = 0xc8 },
		{ .addr = 0xeb5569, .byte = 0x4c },
		{ .addr = 0xeb556a, .byte = 0xaf },
		{ .addr = 0xeb556b, .byte = 0x40 }
};

static const SST_Transaction aslb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15422826, .data = 44864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte aslb_initial_ram_5[] = {
		{ .addr = 0x5c82c0, .byte = 0xe9 },
		{ .addr = 0x5c82c1, .byte = 0x26 },
		{ .addr = 0x5c82c2, .byte = 0xd7 },
		{ .addr = 0x5c82c3, .byte = 0x72 },
		{ .addr = 0x5c82c4, .byte = 0x8e },
		{ .addr = 0x5c82c5, .byte = 0x6f }
};

static const SST_RamByte aslb_final_ram_5[] = {
		{ .addr = 0x5c82c0, .byte = 0xe9 },
		{ .addr = 0x5c82c1, .byte = 0x26 },
		{ .addr = 0x5c82c2, .byte = 0xd7 },
		{ .addr = 0x5c82c3, .byte = 0x72 },
		{ .addr = 0x5c82c4, .byte = 0x8e },
		{ .addr = 0x5c82c5, .byte = 0x6f }
};

static const SST_Transaction aslb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6062788, .data = 36463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 36 },
};

static const SST_RamByte aslb_initial_ram_6[] = {
		{ .addr = 0x2e41d2, .byte = 0xeb },
		{ .addr = 0x2e41d3, .byte = 0x07 },
		{ .addr = 0x2e41d4, .byte = 0x4a },
		{ .addr = 0x2e41d5, .byte = 0xe0 },
		{ .addr = 0x2e41d6, .byte = 0xe4 },
		{ .addr = 0x2e41d7, .byte = 0x25 }
};

static const SST_RamByte aslb_final_ram_6[] = {
		{ .addr = 0x2e41d2, .byte = 0xeb },
		{ .addr = 0x2e41d3, .byte = 0x07 },
		{ .addr = 0x2e41d4, .byte = 0x4a },
		{ .addr = 0x2e41d5, .byte = 0xe0 },
		{ .addr = 0x2e41d6, .byte = 0xe4 },
		{ .addr = 0x2e41d7, .byte = 0x25 }
};

static const SST_Transaction aslb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3031510, .data = 58405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte aslb_initial_ram_7[] = {
		{ .addr = 0x6c6fe0, .byte = 0xe9 },
		{ .addr = 0x6c6fe1, .byte = 0x23 },
		{ .addr = 0x6c6fe2, .byte = 0x75 },
		{ .addr = 0x6c6fe3, .byte = 0x03 },
		{ .addr = 0x6c6fe4, .byte = 0xbb },
		{ .addr = 0x6c6fe5, .byte = 0x68 }
};

static const SST_RamByte aslb_final_ram_7[] = {
		{ .addr = 0x6c6fe0, .byte = 0xe9 },
		{ .addr = 0x6c6fe1, .byte = 0x23 },
		{ .addr = 0x6c6fe2, .byte = 0x75 },
		{ .addr = 0x6c6fe3, .byte = 0x03 },
		{ .addr = 0x6c6fe4, .byte = 0xbb },
		{ .addr = 0x6c6fe5, .byte = 0x68 }
};

static const SST_Transaction aslb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7106532, .data = 47976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte aslb_initial_ram_8[] = {
		{ .addr = 0xd9480c, .byte = 0xe3 },
		{ .addr = 0xd9480d, .byte = 0x07 },
		{ .addr = 0xd9480e, .byte = 0x2c },
		{ .addr = 0xd9480f, .byte = 0x83 },
		{ .addr = 0xd94810, .byte = 0x93 },
		{ .addr = 0xd94811, .byte = 0xea }
};

static const SST_RamByte aslb_final_ram_8[] = {
		{ .addr = 0xd9480c, .byte = 0xe3 },
		{ .addr = 0xd9480d, .byte = 0x07 },
		{ .addr = 0xd9480e, .byte = 0x2c },
		{ .addr = 0xd9480f, .byte = 0x83 },
		{ .addr = 0xd94810, .byte = 0x93 },
		{ .addr = 0xd94811, .byte = 0xea }
};

static const SST_Transaction aslb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14239760, .data = 37866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte aslb_initial_ram_9[] = {
		{ .addr = 0x0b68da, .byte = 0xe1 },
		{ .addr = 0x0b68db, .byte = 0x26 },
		{ .addr = 0x0b68dc, .byte = 0x00 },
		{ .addr = 0x0b68dd, .byte = 0xd3 },
		{ .addr = 0x0b68de, .byte = 0xb6 },
		{ .addr = 0x0b68df, .byte = 0x4e }
};

static const SST_RamByte aslb_final_ram_9[] = {
		{ .addr = 0x0b68da, .byte = 0xe1 },
		{ .addr = 0x0b68db, .byte = 0x26 },
		{ .addr = 0x0b68dc, .byte = 0x00 },
		{ .addr = 0x0b68dd, .byte = 0xd3 },
		{ .addr = 0x0b68de, .byte = 0xb6 },
		{ .addr = 0x0b68df, .byte = 0x4e }
};

static const SST_Transaction aslb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 747742, .data = 46670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte aslb_initial_ram_10[] = {
		{ .addr = 0x46a156, .byte = 0xed },
		{ .addr = 0x46a157, .byte = 0x06 },
		{ .addr = 0x46a158, .byte = 0xa3 },
		{ .addr = 0x46a159, .byte = 0xe2 },
		{ .addr = 0x46a15a, .byte = 0x98 },
		{ .addr = 0x46a15b, .byte = 0xe3 }
};

static const SST_RamByte aslb_final_ram_10[] = {
		{ .addr = 0x46a156, .byte = 0xed },
		{ .addr = 0x46a157, .byte = 0x06 },
		{ .addr = 0x46a158, .byte = 0xa3 },
		{ .addr = 0x46a159, .byte = 0xe2 },
		{ .addr = 0x46a15a, .byte = 0x98 },
		{ .addr = 0x46a15b, .byte = 0xe3 }
};

static const SST_Transaction aslb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4628826, .data = 39139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte aslb_initial_ram_11[] = {
		{ .addr = 0x32e9a2, .byte = 0xe7 },
		{ .addr = 0x32e9a3, .byte = 0x24 },
		{ .addr = 0x32e9a4, .byte = 0x16 },
		{ .addr = 0x32e9a5, .byte = 0x6b },
		{ .addr = 0x32e9a6, .byte = 0xfb },
		{ .addr = 0x32e9a7, .byte = 0x7e }
};

static const SST_RamByte aslb_final_ram_11[] = {
		{ .addr = 0x32e9a2, .byte = 0xe7 },
		{ .addr = 0x32e9a3, .byte = 0x24 },
		{ .addr = 0x32e9a4, .byte = 0x16 },
		{ .addr = 0x32e9a5, .byte = 0x6b },
		{ .addr = 0x32e9a6, .byte = 0xfb },
		{ .addr = 0x32e9a7, .byte = 0x7e }
};

static const SST_Transaction aslb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3336614, .data = 64382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte aslb_initial_ram_12[] = {
		{ .addr = 0xde8d82, .byte = 0xed },
		{ .addr = 0xde8d83, .byte = 0x26 },
		{ .addr = 0xde8d84, .byte = 0x65 },
		{ .addr = 0xde8d85, .byte = 0x34 },
		{ .addr = 0xde8d86, .byte = 0x22 },
		{ .addr = 0xde8d87, .byte = 0x36 }
};

static const SST_RamByte aslb_final_ram_12[] = {
		{ .addr = 0xde8d82, .byte = 0xed },
		{ .addr = 0xde8d83, .byte = 0x26 },
		{ .addr = 0xde8d84, .byte = 0x65 },
		{ .addr = 0xde8d85, .byte = 0x34 },
		{ .addr = 0xde8d86, .byte = 0x22 },
		{ .addr = 0xde8d87, .byte = 0x36 }
};

static const SST_Transaction aslb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14585222, .data = 8758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 38 },
};

static const SST_RamByte aslb_initial_ram_13[] = {
		{ .addr = 0xeb9e96, .byte = 0xe3 },
		{ .addr = 0xeb9e97, .byte = 0x24 },
		{ .addr = 0xeb9e98, .byte = 0x0b },
		{ .addr = 0xeb9e99, .byte = 0x79 },
		{ .addr = 0xeb9e9a, .byte = 0xdb },
		{ .addr = 0xeb9e9b, .byte = 0xf4 }
};

static const SST_RamByte aslb_final_ram_13[] = {
		{ .addr = 0xeb9e96, .byte = 0xe3 },
		{ .addr = 0xeb9e97, .byte = 0x24 },
		{ .addr = 0xeb9e98, .byte = 0x0b },
		{ .addr = 0xeb9e99, .byte = 0x79 },
		{ .addr = 0xeb9e9a, .byte = 0xdb },
		{ .addr = 0xeb9e9b, .byte = 0xf4 }
};

static const SST_Transaction aslb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15441562, .data = 56308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 96 },
};

static const SST_RamByte aslb_initial_ram_14[] = {
		{ .addr = 0x09f274, .byte = 0xe5 },
		{ .addr = 0x09f275, .byte = 0x27 },
		{ .addr = 0x09f276, .byte = 0xff },
		{ .addr = 0x09f277, .byte = 0xf4 },
		{ .addr = 0x09f278, .byte = 0x3a },
		{ .addr = 0x09f279, .byte = 0xdb }
};

static const SST_RamByte aslb_final_ram_14[] = {
		{ .addr = 0x09f274, .byte = 0xe5 },
		{ .addr = 0x09f275, .byte = 0x27 },
		{ .addr = 0x09f276, .byte = 0xff },
		{ .addr = 0x09f277, .byte = 0xf4 },
		{ .addr = 0x09f278, .byte = 0x3a },
		{ .addr = 0x09f279, .byte = 0xdb }
};

static const SST_Transaction aslb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 651896, .data = 15067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte aslb_initial_ram_15[] = {
		{ .addr = 0xeea4da, .byte = 0xe5 },
		{ .addr = 0xeea4db, .byte = 0x26 },
		{ .addr = 0xeea4dc, .byte = 0xf7 },
		{ .addr = 0xeea4dd, .byte = 0x5e },
		{ .addr = 0xeea4de, .byte = 0x43 },
		{ .addr = 0xeea4df, .byte = 0x95 }
};

static const SST_RamByte aslb_final_ram_15[] = {
		{ .addr = 0xeea4da, .byte = 0xe5 },
		{ .addr = 0xeea4db, .byte = 0x26 },
		{ .addr = 0xeea4dc, .byte = 0xf7 },
		{ .addr = 0xeea4dd, .byte = 0x5e },
		{ .addr = 0xeea4de, .byte = 0x43 },
		{ .addr = 0xeea4df, .byte = 0x95 }
};

static const SST_Transaction aslb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15639774, .data = 17301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 116 },
};

const uint32_t ASLB_TEST_COUNT = 16;
static const SST_TestCase aslb[] = {
	{
		.name = "000 ASL.b 1, D2 e302",
		.initial = {
			.regs = {
				875122622, 4111649065, 1754384516, 392181203, 3680896859, 2161660848, 3697039902, 3045704204, 445143942, 1442374805, 1099806095, 1182746079, 2955049898, 1151481773, 3019223192, 11073950, 16297356, 1792, 16273272
			},
			.prefetch0 = 58114,
			.prefetch1 = 32429,
			.ram = aslb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				875122622, 4111649065, 1754384392, 392181203, 3680896859, 2161660848, 3697039902, 3045704204, 445143942, 1442374805, 1099806095, 1182746079, 2955049898, 1151481773, 3019223192, 11073950, 16297356, 1811, 16273274
			},
			.prefetch0 = 32429,
			.prefetch1 = 65415,
			.ram = aslb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_0,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "001 ASL.b D2, D3 e523",
		.initial = {
			.regs = {
				3030575786, 3511820938, 2337428191, 2946033458, 3628142247, 590531522, 2856329829, 2634120375, 265220820, 246670546, 1690382286, 2801901279, 2951513553, 2179010049, 3083869311, 1175808, 11906106, 42781, 10799426
			},
			.prefetch0 = 58659,
			.prefetch1 = 47613,
			.ram = aslb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3030575786, 3511820938, 2337428191, 2946033408, 3628142247, 590531522, 2856329829, 2634120375, 265220820, 246670546, 1690382286, 2801901279, 2951513553, 2179010049, 3083869311, 1175808, 11906106, 42758, 10799428
			},
			.prefetch0 = 47613,
			.prefetch1 = 30475,
			.ram = aslb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_1,
		.transactions_len = 2,
		.lenght = 68,
	},
	{
		.name = "002 ASL.b 1, D7 e307",
		.initial = {
			.regs = {
				1597770583, 4025836866, 711038017, 1901274242, 3571016029, 3029954991, 3040580514, 630737688, 1575690797, 797902699, 2212508197, 269857002, 2038733373, 3853998130, 1793792447, 16479092, 2851026, 1048, 7336566
			},
			.prefetch0 = 58119,
			.prefetch1 = 52066,
			.ram = aslb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1597770583, 4025836866, 711038017, 1901274242, 3571016029, 3029954991, 3040580514, 630737712, 1575690797, 797902699, 2212508197, 269857002, 2038733373, 3853998130, 1793792447, 16479092, 2851026, 1024, 7336568
			},
			.prefetch0 = 52066,
			.prefetch1 = 49040,
			.ram = aslb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 ASL.b D3, D3 e723",
		.initial = {
			.regs = {
				1410158100, 1498140372, 1473999718, 318021325, 436793228, 1882162144, 2098510555, 3497399526, 2629885760, 1981837795, 2363461542, 1482934083, 2501809826, 2726031687, 889385485, 14754256, 3246104, 9503, 12528332
			},
			.prefetch0 = 59171,
			.prefetch1 = 8043,
			.ram = aslb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1410158100, 1498140372, 1473999718, 318021120, 436793228, 1882162144, 2098510555, 3497399526, 2629885760, 1981837795, 2363461542, 1482934083, 2501809826, 2726031687, 889385485, 14754256, 3246104, 9478, 12528334
			},
			.prefetch0 = 8043,
			.prefetch1 = 9758,
			.ram = aslb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_3,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "004 ASL.b D0, D7 e127",
		.initial = {
			.regs = {
				1509178980, 3921622327, 2470536441, 2729673097, 716263463, 1553364234, 2249155541, 1566813868, 3437208169, 3590712149, 2453369380, 1038024301, 201636254, 2060979242, 3165534078, 4019258, 16741458, 9746, 15422826
			},
			.prefetch0 = 57639,
			.prefetch1 = 51276,
			.ram = aslb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1509178980, 3921622327, 2470536441, 2729673097, 716263463, 1553364234, 2249155541, 1566813696, 3437208169, 3590712149, 2453369380, 1038024301, 201636254, 2060979242, 3165534078, 4019258, 16741458, 9734, 15422828
			},
			.prefetch0 = 51276,
			.prefetch1 = 44864,
			.ram = aslb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_4,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "005 ASL.b D4, D6 e926",
		.initial = {
			.regs = {
				1547596845, 903138311, 3706836669, 430916569, 1914282961, 362653380, 505648699, 2440009045, 4286303600, 4242002893, 1530302493, 2532376336, 532572148, 1874056445, 1440872708, 12525224, 10002774, 33811, 6062788
			},
			.prefetch0 = 59686,
			.prefetch1 = 55154,
			.ram = aslb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1547596845, 903138311, 3706836669, 430916569, 1914282961, 362653380, 505648640, 2440009045, 4286303600, 4242002893, 1530302493, 2532376336, 532572148, 1874056445, 1440872708, 12525224, 10002774, 33798, 6062790
			},
			.prefetch0 = 55154,
			.prefetch1 = 36463,
			.ram = aslb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_5,
		.transactions_len = 2,
		.lenght = 40,
	},
	{
		.name = "006 ASL.b 5, D7 eb07",
		.initial = {
			.regs = {
				2351259930, 649117854, 353710814, 3365193060, 3422874763, 2420251103, 525246193, 1249570133, 1678596981, 2595792638, 3252215563, 2153894695, 3125423185, 376296996, 175746366, 15050258, 6948990, 12, 3031510
			},
			.prefetch0 = 60167,
			.prefetch1 = 19168,
			.ram = aslb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2351259930, 649117854, 353710814, 3365193060, 3422874763, 2420251103, 525246193, 1249570208, 1678596981, 2595792638, 3252215563, 2153894695, 3125423185, 376296996, 175746366, 15050258, 6948990, 10, 3031512
			},
			.prefetch0 = 19168,
			.prefetch1 = 58405,
			.ram = aslb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_6,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "007 ASL.b D4, D3 e923",
		.initial = {
			.regs = {
				3852473912, 763694123, 3455485203, 1023355770, 3886098084, 121037806, 3994596308, 2993916853, 1592204032, 3730500381, 990373018, 3524401334, 931721584, 1679621593, 1902136107, 13871952, 13854862, 33816, 7106532
			},
			.prefetch0 = 59683,
			.prefetch1 = 29955,
			.ram = aslb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3852473912, 763694123, 3455485203, 1023355648, 3886098084, 121037806, 3994596308, 2993916853, 1592204032, 3730500381, 990373018, 3524401334, 931721584, 1679621593, 1902136107, 13871952, 13854862, 33798, 7106534
			},
			.prefetch0 = 29955,
			.prefetch1 = 47976,
			.ram = aslb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_7,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "008 ASL.b 1, D7 e307",
		.initial = {
			.regs = {
				3884419991, 909876010, 2350410199, 962003770, 2707762190, 722065665, 2502959497, 3248757874, 1951434705, 2056383953, 247238459, 2491987922, 765200319, 465573820, 2170986306, 12681146, 5035376, 8967, 14239760
			},
			.prefetch0 = 58119,
			.prefetch1 = 11395,
			.ram = aslb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3884419991, 909876010, 2350410199, 962003770, 2707762190, 722065665, 2502959497, 3248757988, 1951434705, 2056383953, 247238459, 2491987922, 765200319, 465573820, 2170986306, 12681146, 5035376, 8970, 14239762
			},
			.prefetch0 = 11395,
			.prefetch1 = 37866,
			.ram = aslb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_8,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "009 ASL.b D0, D6 e126",
		.initial = {
			.regs = {
				2906708405, 4122436232, 1812597943, 1382663010, 3780163860, 1035453183, 360779933, 1722480046, 956710992, 892486072, 2779886173, 1274467686, 1186633655, 3156435382, 2570642144, 11894536, 15220682, 42515, 747742
			},
			.prefetch0 = 57638,
			.prefetch1 = 211,
			.ram = aslb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2906708405, 4122436232, 1812597943, 1382663010, 3780163860, 1035453183, 360779776, 1722480046, 956710992, 892486072, 2779886173, 1274467686, 1186633655, 3156435382, 2570642144, 11894536, 15220682, 42502, 747744
			},
			.prefetch0 = 211,
			.prefetch1 = 46670,
			.ram = aslb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_9,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "010 ASL.b 6, D6 ed06",
		.initial = {
			.regs = {
				3240780809, 2354941875, 3831721728, 2652555904, 4015087090, 243865658, 3642405299, 3864764151, 3369967927, 2396718759, 4166086425, 3323360766, 2928226969, 142548733, 1233353681, 15663744, 15271354, 42496, 4628826
			},
			.prefetch0 = 60678,
			.prefetch1 = 41954,
			.ram = aslb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3240780809, 2354941875, 3831721728, 2652555904, 4015087090, 243865658, 3642405312, 3864764151, 3369967927, 2396718759, 4166086425, 3323360766, 2928226969, 142548733, 1233353681, 15663744, 15271354, 42506, 4628828
			},
			.prefetch0 = 41954,
			.prefetch1 = 39139,
			.ram = aslb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_10,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "011 ASL.b D3, D4 e724",
		.initial = {
			.regs = {
				1190591030, 2341566151, 3094297996, 3411821192, 4096381116, 2409452097, 4143674823, 3261929653, 389770374, 146217890, 3814953781, 3986908794, 2227169116, 1143947168, 3898471626, 10001858, 13297800, 8219, 3336614
			},
			.prefetch0 = 59172,
			.prefetch1 = 5739,
			.ram = aslb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1190591030, 2341566151, 3094297996, 3411821192, 4096380928, 2409452097, 4143674823, 3261929653, 389770374, 146217890, 3814953781, 3986908794, 2227169116, 1143947168, 3898471626, 10001858, 13297800, 8198, 3336616
			},
			.prefetch0 = 5739,
			.prefetch1 = 64382,
			.ram = aslb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_11,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "012 ASL.b D6, D6 ed26",
		.initial = {
			.regs = {
				1192326792, 2143992946, 4080418144, 617662268, 501318366, 1644338215, 1368736722, 3315036079, 1304247148, 2877293527, 698173967, 1545516183, 377336573, 3738672923, 1121912951, 1958924, 772690, 9247, 14585222
			},
			.prefetch0 = 60710,
			.prefetch1 = 25908,
			.ram = aslb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1192326792, 2143992946, 4080418144, 617662268, 501318366, 1644338215, 1368736512, 3315036079, 1304247148, 2877293527, 698173967, 1545516183, 377336573, 3738672923, 1121912951, 1958924, 772690, 9222, 14585224
			},
			.prefetch0 = 25908,
			.prefetch1 = 8758,
			.ram = aslb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_12,
		.transactions_len = 2,
		.lenght = 42,
	},
	{
		.name = "013 ASL.b D1, D4 e324",
		.initial = {
			.regs = {
				1582971497, 2399591279, 664317085, 1046234673, 1104914272, 2334852624, 1337950353, 319731780, 476218007, 3131423552, 1666448450, 3944683873, 911776358, 441683846, 2534652122, 7226442, 1647818, 34576, 15441562
			},
			.prefetch0 = 58148,
			.prefetch1 = 2937,
			.ram = aslb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1582971497, 2399591279, 664317085, 1046234673, 1104914176, 2334852624, 1337950353, 319731780, 476218007, 3131423552, 1666448450, 3944683873, 911776358, 441683846, 2534652122, 7226442, 1647818, 34566, 15441564
			},
			.prefetch0 = 2937,
			.prefetch1 = 56308,
			.ram = aslb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_13,
		.transactions_len = 2,
		.lenght = 100,
	},
	{
		.name = "014 ASL.b D2, D7 e527",
		.initial = {
			.regs = {
				49988630, 359606546, 3974760962, 222879908, 2052361934, 1605789514, 1911836941, 166409261, 1329635081, 3816128488, 1750612048, 3886527891, 2680875683, 3692631012, 1376632514, 3322826, 696192, 9245, 651896
			},
			.prefetch0 = 58663,
			.prefetch1 = 65524,
			.ram = aslb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				49988630, 359606546, 3974760962, 222879908, 2052361934, 1605789514, 1911836941, 166409396, 1329635081, 3816128488, 1750612048, 3886527891, 2680875683, 3692631012, 1376632514, 3322826, 696192, 9226, 651898
			},
			.prefetch0 = 65524,
			.prefetch1 = 15067,
			.ram = aslb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_14,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "015 ASL.b D2, D6 e526",
		.initial = {
			.regs = {
				1233849509, 2956929951, 3112545465, 2859079671, 3553390495, 3758840854, 2214664147, 3784835459, 429970112, 1659989113, 233165325, 2439853722, 3219342369, 2566087628, 907044594, 4286962, 14907276, 34051, 15639774
			},
			.prefetch0 = 58662,
			.prefetch1 = 63326,
			.ram = aslb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1233849509, 2956929951, 3112545465, 2859079671, 3553390495, 3758840854, 2214663936, 3784835459, 429970112, 1659989113, 233165325, 2439853722, 3219342369, 2566087628, 907044594, 4286962, 14907276, 34054, 15639776
			},
			.prefetch0 = 63326,
			.prefetch1 = 17301,
			.ram = aslb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = aslb_transactions_15,
		.transactions_len = 2,
		.lenght = 120,
	},
};

#endif /* RBT_ASLB_H */