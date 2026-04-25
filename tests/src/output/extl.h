#ifndef RBT_EXTL_H
#define RBT_EXTL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte extl_initial_ram_0[] = {
		{ .addr = 0x548a12, .byte = 0x48 },
		{ .addr = 0x548a13, .byte = 0xc1 },
		{ .addr = 0x548a14, .byte = 0xf5 },
		{ .addr = 0x548a15, .byte = 0x60 },
		{ .addr = 0x548a16, .byte = 0x17 },
		{ .addr = 0x548a17, .byte = 0xe0 }
};

static const SST_RamByte extl_final_ram_0[] = {
		{ .addr = 0x548a12, .byte = 0x48 },
		{ .addr = 0x548a13, .byte = 0xc1 },
		{ .addr = 0x548a14, .byte = 0xf5 },
		{ .addr = 0x548a15, .byte = 0x60 },
		{ .addr = 0x548a16, .byte = 0x17 },
		{ .addr = 0x548a17, .byte = 0xe0 }
};

static const SST_Transaction extl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5540374, .data = 6112, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_1[] = {
		{ .addr = 0xdba396, .byte = 0x48 },
		{ .addr = 0xdba397, .byte = 0xc5 },
		{ .addr = 0xdba398, .byte = 0x87 },
		{ .addr = 0xdba399, .byte = 0x6c },
		{ .addr = 0xdba39a, .byte = 0x6e },
		{ .addr = 0xdba39b, .byte = 0x2c }
};

static const SST_RamByte extl_final_ram_1[] = {
		{ .addr = 0xdba396, .byte = 0x48 },
		{ .addr = 0xdba397, .byte = 0xc5 },
		{ .addr = 0xdba398, .byte = 0x87 },
		{ .addr = 0xdba399, .byte = 0x6c },
		{ .addr = 0xdba39a, .byte = 0x6e },
		{ .addr = 0xdba39b, .byte = 0x2c }
};

static const SST_Transaction extl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14394266, .data = 28204, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_2[] = {
		{ .addr = 0xe0e264, .byte = 0x48 },
		{ .addr = 0xe0e265, .byte = 0xc7 },
		{ .addr = 0xe0e266, .byte = 0x77 },
		{ .addr = 0xe0e267, .byte = 0x1e },
		{ .addr = 0xe0e268, .byte = 0x2a },
		{ .addr = 0xe0e269, .byte = 0xd2 }
};

static const SST_RamByte extl_final_ram_2[] = {
		{ .addr = 0xe0e264, .byte = 0x48 },
		{ .addr = 0xe0e265, .byte = 0xc7 },
		{ .addr = 0xe0e266, .byte = 0x77 },
		{ .addr = 0xe0e267, .byte = 0x1e },
		{ .addr = 0xe0e268, .byte = 0x2a },
		{ .addr = 0xe0e269, .byte = 0xd2 }
};

static const SST_Transaction extl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14738024, .data = 10962, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_3[] = {
		{ .addr = 0xff2d40, .byte = 0x48 },
		{ .addr = 0xff2d41, .byte = 0xc1 },
		{ .addr = 0xff2d42, .byte = 0x6c },
		{ .addr = 0xff2d43, .byte = 0x6f },
		{ .addr = 0xff2d44, .byte = 0x66 },
		{ .addr = 0xff2d45, .byte = 0x5e }
};

static const SST_RamByte extl_final_ram_3[] = {
		{ .addr = 0xff2d40, .byte = 0x48 },
		{ .addr = 0xff2d41, .byte = 0xc1 },
		{ .addr = 0xff2d42, .byte = 0x6c },
		{ .addr = 0xff2d43, .byte = 0x6f },
		{ .addr = 0xff2d44, .byte = 0x66 },
		{ .addr = 0xff2d45, .byte = 0x5e }
};

static const SST_Transaction extl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16723268, .data = 26206, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_4[] = {
		{ .addr = 0x91a5c0, .byte = 0x48 },
		{ .addr = 0x91a5c1, .byte = 0xc7 },
		{ .addr = 0x91a5c2, .byte = 0x4b },
		{ .addr = 0x91a5c3, .byte = 0xc4 },
		{ .addr = 0x91a5c4, .byte = 0x9e },
		{ .addr = 0x91a5c5, .byte = 0x07 }
};

static const SST_RamByte extl_final_ram_4[] = {
		{ .addr = 0x91a5c0, .byte = 0x48 },
		{ .addr = 0x91a5c1, .byte = 0xc7 },
		{ .addr = 0x91a5c2, .byte = 0x4b },
		{ .addr = 0x91a5c3, .byte = 0xc4 },
		{ .addr = 0x91a5c4, .byte = 0x9e },
		{ .addr = 0x91a5c5, .byte = 0x07 }
};

static const SST_Transaction extl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9545156, .data = 40455, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_5[] = {
		{ .addr = 0xd2525e, .byte = 0x48 },
		{ .addr = 0xd2525f, .byte = 0xc5 },
		{ .addr = 0xd25260, .byte = 0xe6 },
		{ .addr = 0xd25261, .byte = 0x01 },
		{ .addr = 0xd25262, .byte = 0xb0 },
		{ .addr = 0xd25263, .byte = 0x93 }
};

static const SST_RamByte extl_final_ram_5[] = {
		{ .addr = 0xd2525e, .byte = 0x48 },
		{ .addr = 0xd2525f, .byte = 0xc5 },
		{ .addr = 0xd25260, .byte = 0xe6 },
		{ .addr = 0xd25261, .byte = 0x01 },
		{ .addr = 0xd25262, .byte = 0xb0 },
		{ .addr = 0xd25263, .byte = 0x93 }
};

static const SST_Transaction extl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13783650, .data = 45203, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_6[] = {
		{ .addr = 0x256900, .byte = 0x48 },
		{ .addr = 0x256901, .byte = 0xc2 },
		{ .addr = 0x256902, .byte = 0x3f },
		{ .addr = 0x256903, .byte = 0x36 },
		{ .addr = 0x256904, .byte = 0xfe },
		{ .addr = 0x256905, .byte = 0x80 }
};

static const SST_RamByte extl_final_ram_6[] = {
		{ .addr = 0x256900, .byte = 0x48 },
		{ .addr = 0x256901, .byte = 0xc2 },
		{ .addr = 0x256902, .byte = 0x3f },
		{ .addr = 0x256903, .byte = 0x36 },
		{ .addr = 0x256904, .byte = 0xfe },
		{ .addr = 0x256905, .byte = 0x80 }
};

static const SST_Transaction extl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2451716, .data = 65152, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_7[] = {
		{ .addr = 0x8d6a42, .byte = 0x48 },
		{ .addr = 0x8d6a43, .byte = 0xc7 },
		{ .addr = 0x8d6a44, .byte = 0xee },
		{ .addr = 0x8d6a45, .byte = 0x9f },
		{ .addr = 0x8d6a46, .byte = 0x40 },
		{ .addr = 0x8d6a47, .byte = 0x93 }
};

static const SST_RamByte extl_final_ram_7[] = {
		{ .addr = 0x8d6a42, .byte = 0x48 },
		{ .addr = 0x8d6a43, .byte = 0xc7 },
		{ .addr = 0x8d6a44, .byte = 0xee },
		{ .addr = 0x8d6a45, .byte = 0x9f },
		{ .addr = 0x8d6a46, .byte = 0x40 },
		{ .addr = 0x8d6a47, .byte = 0x93 }
};

static const SST_Transaction extl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9267782, .data = 16531, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_8[] = {
		{ .addr = 0x19f772, .byte = 0x48 },
		{ .addr = 0x19f773, .byte = 0xc6 },
		{ .addr = 0x19f774, .byte = 0x90 },
		{ .addr = 0x19f775, .byte = 0x80 },
		{ .addr = 0x19f776, .byte = 0xcb },
		{ .addr = 0x19f777, .byte = 0xf3 }
};

static const SST_RamByte extl_final_ram_8[] = {
		{ .addr = 0x19f772, .byte = 0x48 },
		{ .addr = 0x19f773, .byte = 0xc6 },
		{ .addr = 0x19f774, .byte = 0x90 },
		{ .addr = 0x19f775, .byte = 0x80 },
		{ .addr = 0x19f776, .byte = 0xcb },
		{ .addr = 0x19f777, .byte = 0xf3 }
};

static const SST_Transaction extl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1701750, .data = 52211, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_9[] = {
		{ .addr = 0x10208e, .byte = 0x48 },
		{ .addr = 0x10208f, .byte = 0xc4 },
		{ .addr = 0x102090, .byte = 0x39 },
		{ .addr = 0x102091, .byte = 0x9e },
		{ .addr = 0x102092, .byte = 0xe5 },
		{ .addr = 0x102093, .byte = 0x4f }
};

static const SST_RamByte extl_final_ram_9[] = {
		{ .addr = 0x10208e, .byte = 0x48 },
		{ .addr = 0x10208f, .byte = 0xc4 },
		{ .addr = 0x102090, .byte = 0x39 },
		{ .addr = 0x102091, .byte = 0x9e },
		{ .addr = 0x102092, .byte = 0xe5 },
		{ .addr = 0x102093, .byte = 0x4f }
};

static const SST_Transaction extl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1056914, .data = 58703, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_10[] = {
		{ .addr = 0x1d1cba, .byte = 0x48 },
		{ .addr = 0x1d1cbb, .byte = 0xc4 },
		{ .addr = 0x1d1cbc, .byte = 0x2b },
		{ .addr = 0x1d1cbd, .byte = 0x2c },
		{ .addr = 0x1d1cbe, .byte = 0x7d },
		{ .addr = 0x1d1cbf, .byte = 0x57 }
};

static const SST_RamByte extl_final_ram_10[] = {
		{ .addr = 0x1d1cba, .byte = 0x48 },
		{ .addr = 0x1d1cbb, .byte = 0xc4 },
		{ .addr = 0x1d1cbc, .byte = 0x2b },
		{ .addr = 0x1d1cbd, .byte = 0x2c },
		{ .addr = 0x1d1cbe, .byte = 0x7d },
		{ .addr = 0x1d1cbf, .byte = 0x57 }
};

static const SST_Transaction extl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1907902, .data = 32087, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_11[] = {
		{ .addr = 0x4f6af0, .byte = 0x48 },
		{ .addr = 0x4f6af1, .byte = 0xc4 },
		{ .addr = 0x4f6af2, .byte = 0x84 },
		{ .addr = 0x4f6af3, .byte = 0x3d },
		{ .addr = 0x4f6af4, .byte = 0x56 },
		{ .addr = 0x4f6af5, .byte = 0xcb }
};

static const SST_RamByte extl_final_ram_11[] = {
		{ .addr = 0x4f6af0, .byte = 0x48 },
		{ .addr = 0x4f6af1, .byte = 0xc4 },
		{ .addr = 0x4f6af2, .byte = 0x84 },
		{ .addr = 0x4f6af3, .byte = 0x3d },
		{ .addr = 0x4f6af4, .byte = 0x56 },
		{ .addr = 0x4f6af5, .byte = 0xcb }
};

static const SST_Transaction extl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5204724, .data = 22219, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_12[] = {
		{ .addr = 0x270ea8, .byte = 0x48 },
		{ .addr = 0x270ea9, .byte = 0xc5 },
		{ .addr = 0x270eaa, .byte = 0x58 },
		{ .addr = 0x270eab, .byte = 0x59 },
		{ .addr = 0x270eac, .byte = 0x36 },
		{ .addr = 0x270ead, .byte = 0xae }
};

static const SST_RamByte extl_final_ram_12[] = {
		{ .addr = 0x270ea8, .byte = 0x48 },
		{ .addr = 0x270ea9, .byte = 0xc5 },
		{ .addr = 0x270eaa, .byte = 0x58 },
		{ .addr = 0x270eab, .byte = 0x59 },
		{ .addr = 0x270eac, .byte = 0x36 },
		{ .addr = 0x270ead, .byte = 0xae }
};

static const SST_Transaction extl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2559660, .data = 13998, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_13[] = {
		{ .addr = 0x2488ee, .byte = 0x48 },
		{ .addr = 0x2488ef, .byte = 0xc5 },
		{ .addr = 0x2488f0, .byte = 0x37 },
		{ .addr = 0x2488f1, .byte = 0x38 },
		{ .addr = 0x2488f2, .byte = 0x45 },
		{ .addr = 0x2488f3, .byte = 0x37 }
};

static const SST_RamByte extl_final_ram_13[] = {
		{ .addr = 0x2488ee, .byte = 0x48 },
		{ .addr = 0x2488ef, .byte = 0xc5 },
		{ .addr = 0x2488f0, .byte = 0x37 },
		{ .addr = 0x2488f1, .byte = 0x38 },
		{ .addr = 0x2488f2, .byte = 0x45 },
		{ .addr = 0x2488f3, .byte = 0x37 }
};

static const SST_Transaction extl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2394354, .data = 17719, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_14[] = {
		{ .addr = 0x89f37e, .byte = 0x48 },
		{ .addr = 0x89f37f, .byte = 0xc3 },
		{ .addr = 0x89f380, .byte = 0xd7 },
		{ .addr = 0x89f381, .byte = 0x9a },
		{ .addr = 0x89f382, .byte = 0x8d },
		{ .addr = 0x89f383, .byte = 0x00 }
};

static const SST_RamByte extl_final_ram_14[] = {
		{ .addr = 0x89f37e, .byte = 0x48 },
		{ .addr = 0x89f37f, .byte = 0xc3 },
		{ .addr = 0x89f380, .byte = 0xd7 },
		{ .addr = 0x89f381, .byte = 0x9a },
		{ .addr = 0x89f382, .byte = 0x8d },
		{ .addr = 0x89f383, .byte = 0x00 }
};

static const SST_Transaction extl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9040770, .data = 36096, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_15[] = {
		{ .addr = 0xcafba8, .byte = 0x48 },
		{ .addr = 0xcafba9, .byte = 0xc4 },
		{ .addr = 0xcafbaa, .byte = 0x09 },
		{ .addr = 0xcafbab, .byte = 0x39 },
		{ .addr = 0xcafbac, .byte = 0xeb },
		{ .addr = 0xcafbad, .byte = 0x3a }
};

static const SST_RamByte extl_final_ram_15[] = {
		{ .addr = 0xcafba8, .byte = 0x48 },
		{ .addr = 0xcafba9, .byte = 0xc4 },
		{ .addr = 0xcafbaa, .byte = 0x09 },
		{ .addr = 0xcafbab, .byte = 0x39 },
		{ .addr = 0xcafbac, .byte = 0xeb },
		{ .addr = 0xcafbad, .byte = 0x3a }
};

static const SST_Transaction extl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13302700, .data = 60218, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t EXTL_TEST_COUNT = 16;
static const SST_TestCase extl[] = {
	{
		.name = "000 EXT.l D1 48c1",
		.initial = {
			.regs = {
				1084095360, 439979344, 2598479884, 1927068663, 75468569, 3995372392, 3097123319, 2894407397, 1004573750, 3335198915, 3766419635, 2643193439, 1513236470, 760830537, 3298629203, 16459498, 14796920, 3, 5540374
			},
			.prefetch0 = 18625,
			.prefetch1 = 62816,
			.ram = extl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1084095360, 4294937936, 2598479884, 1927068663, 75468569, 3995372392, 3097123319, 2894407397, 1004573750, 3335198915, 3766419635, 2643193439, 1513236470, 760830537, 3298629203, 16459498, 14796920, 8, 5540376
			},
			.prefetch0 = 62816,
			.prefetch1 = 6112,
			.ram = extl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = extl_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 EXT.l D5 48c5",
		.initial = {
			.regs = {
				2063401048, 3198551052, 1446319874, 2201883255, 3939228517, 704818689, 58472231, 3597424325, 2864533793, 4187436929, 3048022164, 3199114408, 3354255174, 323697457, 1220804867, 6280506, 2253014, 9218, 14394266
			},
			.prefetch0 = 18629,
			.prefetch1 = 34668,
			.ram = extl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2063401048, 3198551052, 1446319874, 2201883255, 3939228517, 4294946305, 58472231, 3597424325, 2864533793, 4187436929, 3048022164, 3199114408, 3354255174, 323697457, 1220804867, 6280506, 2253014, 9224, 14394268
			},
			.prefetch0 = 34668,
			.prefetch1 = 28204,
			.ram = extl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = extl_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 EXT.l D7 48c7",
		.initial = {
			.regs = {
				3544881344, 4188799231, 4203815185, 1959867817, 2418916454, 181300400, 2076511743, 3321838169, 3342600755, 4263770512, 2042973872, 1061284278, 1028547852, 4132064560, 1987604942, 15246040, 16769430, 33299, 14738024
			},
			.prefetch0 = 18631,
			.prefetch1 = 30494,
			.ram = extl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3544881344, 4188799231, 4203815185, 1959867817, 2418916454, 181300400, 2076511743, 14937, 3342600755, 4263770512, 2042973872, 1061284278, 1028547852, 4132064560, 1987604942, 15246040, 16769430, 33296, 14738026
			},
			.prefetch0 = 30494,
			.prefetch1 = 10962,
			.ram = extl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = extl_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 EXT.l D1 48c1",
		.initial = {
			.regs = {
				1065071861, 3682447702, 2205500405, 1051944633, 223460974, 385894992, 2878950052, 649862128, 2682255209, 876599128, 3046106566, 783349529, 3475618204, 2292879883, 2900626867, 14934318, 7283748, 32799, 16723268
			},
			.prefetch0 = 18625,
			.prefetch1 = 27759,
			.ram = extl_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1065071861, 4294947158, 2205500405, 1051944633, 223460974, 385894992, 2878950052, 649862128, 2682255209, 876599128, 3046106566, 783349529, 3475618204, 2292879883, 2900626867, 14934318, 7283748, 32792, 16723270
			},
			.prefetch0 = 27759,
			.prefetch1 = 26206,
			.ram = extl_final_ram_3,
			.ram_len = 6,
		},
		.transactions = extl_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 EXT.l D7 48c7",
		.initial = {
			.regs = {
				2665475238, 2920000745, 2996025681, 1917130661, 174224051, 1769422943, 1231952859, 1665983203, 2628077151, 3266400946, 1881407095, 3220216046, 2049433512, 2763681983, 864007958, 8836672, 14642822, 10005, 9545156
			},
			.prefetch0 = 18631,
			.prefetch1 = 19396,
			.ram = extl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2665475238, 2920000745, 2996025681, 1917130661, 174224051, 1769422943, 1231952859, 4294959843, 2628077151, 3266400946, 1881407095, 3220216046, 2049433512, 2763681983, 864007958, 8836672, 14642822, 10008, 9545158
			},
			.prefetch0 = 19396,
			.prefetch1 = 40455,
			.ram = extl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = extl_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 EXT.l D5 48c5",
		.initial = {
			.regs = {
				1115479751, 3211398894, 1010247469, 3468297664, 137426112, 2735684326, 2176291822, 3344872711, 3936489851, 3177621586, 776157049, 1673229074, 3798857, 912716079, 407215403, 2741436, 6731574, 32785, 13783650
			},
			.prefetch0 = 18629,
			.prefetch1 = 58881,
			.ram = extl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1115479751, 3211398894, 1010247469, 3468297664, 137426112, 15078, 2176291822, 3344872711, 3936489851, 3177621586, 776157049, 1673229074, 3798857, 912716079, 407215403, 2741436, 6731574, 32784, 13783652
			},
			.prefetch0 = 58881,
			.prefetch1 = 45203,
			.ram = extl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = extl_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 EXT.l D2 48c2",
		.initial = {
			.regs = {
				390020086, 477339162, 2940639335, 879520812, 3369997583, 212086906, 2227570973, 872395844, 631179392, 2392467395, 2326439291, 1641331713, 4177594352, 1467795926, 3613563554, 14831400, 15186090, 33537, 2451716
			},
			.prefetch0 = 18626,
			.prefetch1 = 16182,
			.ram = extl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				390020086, 477339162, 4294940775, 879520812, 3369997583, 212086906, 2227570973, 872395844, 631179392, 2392467395, 2326439291, 1641331713, 4177594352, 1467795926, 3613563554, 14831400, 15186090, 33544, 2451718
			},
			.prefetch0 = 16182,
			.prefetch1 = 65152,
			.ram = extl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = extl_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 EXT.l D7 48c7",
		.initial = {
			.regs = {
				3367565473, 591217501, 2263673477, 2946031815, 443933912, 1952553368, 632757025, 3776296292, 335479744, 879256821, 2120006629, 620835479, 739707323, 2199026636, 1754068813, 6460516, 12465472, 33051, 9267782
			},
			.prefetch0 = 18631,
			.prefetch1 = 61087,
			.ram = extl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3367565473, 591217501, 2263673477, 2946031815, 443933912, 1952553368, 632757025, 4294948196, 335479744, 879256821, 2120006629, 620835479, 739707323, 2199026636, 1754068813, 6460516, 12465472, 33048, 9267784
			},
			.prefetch0 = 61087,
			.prefetch1 = 16531,
			.ram = extl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = extl_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 EXT.l D6 48c6",
		.initial = {
			.regs = {
				977650006, 1910534608, 303381367, 1863435364, 2350663569, 3401682355, 3388863757, 1138542147, 3676378198, 3675329580, 2611647973, 3021510897, 3524210158, 3732732997, 1783283791, 16613558, 10178290, 41740, 1701750
			},
			.prefetch0 = 18630,
			.prefetch1 = 36992,
			.ram = extl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				977650006, 1910534608, 303381367, 1863435364, 2350663569, 3401682355, 4294964493, 1138542147, 3676378198, 3675329580, 2611647973, 3021510897, 3524210158, 3732732997, 1783283791, 16613558, 10178290, 41736, 1701752
			},
			.prefetch0 = 36992,
			.prefetch1 = 52211,
			.ram = extl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = extl_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 EXT.l D4 48c4",
		.initial = {
			.regs = {
				1508577508, 1811652997, 951077870, 3720946527, 382511118, 2021302720, 1191066753, 1854577595, 3859881549, 404225518, 1923359837, 1649977404, 2237139423, 2047812212, 70278313, 4300816, 6985556, 33055, 1056914
			},
			.prefetch0 = 18628,
			.prefetch1 = 14750,
			.ram = extl_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1508577508, 1811652997, 951077870, 3720946527, 4294944782, 2021302720, 1191066753, 1854577595, 3859881549, 404225518, 1923359837, 1649977404, 2237139423, 2047812212, 70278313, 4300816, 6985556, 33048, 1056916
			},
			.prefetch0 = 14750,
			.prefetch1 = 58703,
			.ram = extl_final_ram_9,
			.ram_len = 6,
		},
		.transactions = extl_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 EXT.l D4 48c4",
		.initial = {
			.regs = {
				2376254292, 343888695, 2973434779, 1209405227, 91728560, 720792590, 4205631811, 3709037770, 4290333444, 1924884345, 1177552316, 2185225006, 521496637, 3747033085, 665433600, 2784916, 8518182, 42015, 1907902
			},
			.prefetch0 = 18628,
			.prefetch1 = 11052,
			.ram = extl_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2376254292, 343888695, 2973434779, 1209405227, 4294945456, 720792590, 4205631811, 3709037770, 4290333444, 1924884345, 1177552316, 2185225006, 521496637, 3747033085, 665433600, 2784916, 8518182, 42008, 1907904
			},
			.prefetch0 = 11052,
			.prefetch1 = 32087,
			.ram = extl_final_ram_10,
			.ram_len = 6,
		},
		.transactions = extl_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 EXT.l D4 48c4",
		.initial = {
			.regs = {
				373838409, 422853726, 2592485518, 2912717919, 2446431688, 3580991635, 2025117768, 1388888952, 1310145340, 1851764227, 2515749343, 30409299, 2858687406, 559226565, 3936719467, 13374094, 13589978, 9477, 5204724
			},
			.prefetch0 = 18628,
			.prefetch1 = 33853,
			.ram = extl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				373838409, 422853726, 2592485518, 2912717919, 4294940104, 3580991635, 2025117768, 1388888952, 1310145340, 1851764227, 2515749343, 30409299, 2858687406, 559226565, 3936719467, 13374094, 13589978, 9480, 5204726
			},
			.prefetch0 = 33853,
			.prefetch1 = 22219,
			.ram = extl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = extl_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 EXT.l D5 48c5",
		.initial = {
			.regs = {
				3739834326, 832724265, 1815131111, 3341767322, 1373292029, 891345963, 2629724326, 1918240653, 4253500725, 3815514861, 3038330320, 1189200368, 813432569, 1441110667, 1381573295, 6059254, 7598224, 1292, 2559660
			},
			.prefetch0 = 18629,
			.prefetch1 = 22617,
			.ram = extl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3739834326, 832724265, 1815131111, 3341767322, 1373292029, 4294958123, 2629724326, 1918240653, 4253500725, 3815514861, 3038330320, 1189200368, 813432569, 1441110667, 1381573295, 6059254, 7598224, 1288, 2559662
			},
			.prefetch0 = 22617,
			.prefetch1 = 13998,
			.ram = extl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = extl_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 EXT.l D5 48c5",
		.initial = {
			.regs = {
				3755781466, 1544638806, 252667848, 982864654, 2996499378, 998323376, 2530911414, 483276363, 3351970122, 3847085518, 166552946, 3215190260, 1218385267, 540158373, 2138028180, 11251480, 15986398, 1050, 2394354
			},
			.prefetch0 = 18629,
			.prefetch1 = 14136,
			.ram = extl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3755781466, 1544638806, 252667848, 982864654, 2996499378, 13488, 2530911414, 483276363, 3351970122, 3847085518, 166552946, 3215190260, 1218385267, 540158373, 2138028180, 11251480, 15986398, 1040, 2394356
			},
			.prefetch0 = 14136,
			.prefetch1 = 17719,
			.ram = extl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = extl_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 EXT.l D3 48c3",
		.initial = {
			.regs = {
				4269820604, 2029978422, 2926132757, 733533942, 637704982, 3729877952, 1129815662, 2559151114, 642938980, 3520901103, 3537236820, 1370030498, 3606992422, 3007078447, 3687858281, 7621148, 6548146, 32788, 9040770
			},
			.prefetch0 = 18627,
			.prefetch1 = 55194,
			.ram = extl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4269820604, 2029978422, 2926132757, 4294956790, 637704982, 3729877952, 1129815662, 2559151114, 642938980, 3520901103, 3537236820, 1370030498, 3606992422, 3007078447, 3687858281, 7621148, 6548146, 32792, 9040772
			},
			.prefetch0 = 55194,
			.prefetch1 = 36096,
			.ram = extl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = extl_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 EXT.l D4 48c4",
		.initial = {
			.regs = {
				2810247364, 1411897034, 3945248945, 1660984217, 3523086679, 197524765, 704012984, 1249096051, 3757240551, 492249772, 3453881671, 1329679078, 288039593, 356639829, 4007499850, 12768772, 737852, 33538, 13302700
			},
			.prefetch0 = 18628,
			.prefetch1 = 2361,
			.ram = extl_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2810247364, 1411897034, 3945248945, 1660984217, 2391, 197524765, 704012984, 1249096051, 3757240551, 492249772, 3453881671, 1329679078, 288039593, 356639829, 4007499850, 12768772, 737852, 33536, 13302702
			},
			.prefetch0 = 2361,
			.prefetch1 = 60218,
			.ram = extl_final_ram_15,
			.ram_len = 6,
		},
		.transactions = extl_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_EXTL_H */