#ifndef RBT_EXTW_H
#define RBT_EXTW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte extw_initial_ram_0[] = {
		{ .addr = 0x23af82, .byte = 0x48 },
		{ .addr = 0x23af83, .byte = 0x82 },
		{ .addr = 0x23af84, .byte = 0xc5 },
		{ .addr = 0x23af85, .byte = 0x57 },
		{ .addr = 0x23af86, .byte = 0x81 },
		{ .addr = 0x23af87, .byte = 0xdb }
};

static const SST_RamByte extw_final_ram_0[] = {
		{ .addr = 0x23af82, .byte = 0x48 },
		{ .addr = 0x23af83, .byte = 0x82 },
		{ .addr = 0x23af84, .byte = 0xc5 },
		{ .addr = 0x23af85, .byte = 0x57 },
		{ .addr = 0x23af86, .byte = 0x81 },
		{ .addr = 0x23af87, .byte = 0xdb }
};

static const SST_Transaction extw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2338694, .data = 33243, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_1[] = {
		{ .addr = 0x66c92a, .byte = 0x48 },
		{ .addr = 0x66c92b, .byte = 0x80 },
		{ .addr = 0x66c92c, .byte = 0xd1 },
		{ .addr = 0x66c92d, .byte = 0x73 },
		{ .addr = 0x66c92e, .byte = 0x65 },
		{ .addr = 0x66c92f, .byte = 0x85 }
};

static const SST_RamByte extw_final_ram_1[] = {
		{ .addr = 0x66c92a, .byte = 0x48 },
		{ .addr = 0x66c92b, .byte = 0x80 },
		{ .addr = 0x66c92c, .byte = 0xd1 },
		{ .addr = 0x66c92d, .byte = 0x73 },
		{ .addr = 0x66c92e, .byte = 0x65 },
		{ .addr = 0x66c92f, .byte = 0x85 }
};

static const SST_Transaction extw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6736174, .data = 25989, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_2[] = {
		{ .addr = 0xedb39c, .byte = 0x48 },
		{ .addr = 0xedb39d, .byte = 0x86 },
		{ .addr = 0xedb39e, .byte = 0xe0 },
		{ .addr = 0xedb39f, .byte = 0x34 },
		{ .addr = 0xedb3a0, .byte = 0x5a },
		{ .addr = 0xedb3a1, .byte = 0x4c }
};

static const SST_RamByte extw_final_ram_2[] = {
		{ .addr = 0xedb39c, .byte = 0x48 },
		{ .addr = 0xedb39d, .byte = 0x86 },
		{ .addr = 0xedb39e, .byte = 0xe0 },
		{ .addr = 0xedb39f, .byte = 0x34 },
		{ .addr = 0xedb3a0, .byte = 0x5a },
		{ .addr = 0xedb3a1, .byte = 0x4c }
};

static const SST_Transaction extw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15578016, .data = 23116, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_3[] = {
		{ .addr = 0xae0dde, .byte = 0x48 },
		{ .addr = 0xae0ddf, .byte = 0x85 },
		{ .addr = 0xae0de0, .byte = 0x65 },
		{ .addr = 0xae0de1, .byte = 0xfd },
		{ .addr = 0xae0de2, .byte = 0xcc },
		{ .addr = 0xae0de3, .byte = 0xfe }
};

static const SST_RamByte extw_final_ram_3[] = {
		{ .addr = 0xae0dde, .byte = 0x48 },
		{ .addr = 0xae0ddf, .byte = 0x85 },
		{ .addr = 0xae0de0, .byte = 0x65 },
		{ .addr = 0xae0de1, .byte = 0xfd },
		{ .addr = 0xae0de2, .byte = 0xcc },
		{ .addr = 0xae0de3, .byte = 0xfe }
};

static const SST_Transaction extw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11406818, .data = 52478, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_4[] = {
		{ .addr = 0x2c3dd0, .byte = 0x48 },
		{ .addr = 0x2c3dd1, .byte = 0x85 },
		{ .addr = 0x2c3dd2, .byte = 0xf6 },
		{ .addr = 0x2c3dd3, .byte = 0x16 },
		{ .addr = 0x2c3dd4, .byte = 0x31 },
		{ .addr = 0x2c3dd5, .byte = 0x8e }
};

static const SST_RamByte extw_final_ram_4[] = {
		{ .addr = 0x2c3dd0, .byte = 0x48 },
		{ .addr = 0x2c3dd1, .byte = 0x85 },
		{ .addr = 0x2c3dd2, .byte = 0xf6 },
		{ .addr = 0x2c3dd3, .byte = 0x16 },
		{ .addr = 0x2c3dd4, .byte = 0x31 },
		{ .addr = 0x2c3dd5, .byte = 0x8e }
};

static const SST_Transaction extw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2899412, .data = 12686, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_5[] = {
		{ .addr = 0xa1a536, .byte = 0x48 },
		{ .addr = 0xa1a537, .byte = 0x81 },
		{ .addr = 0xa1a538, .byte = 0x17 },
		{ .addr = 0xa1a539, .byte = 0x33 },
		{ .addr = 0xa1a53a, .byte = 0x77 },
		{ .addr = 0xa1a53b, .byte = 0xfd }
};

static const SST_RamByte extw_final_ram_5[] = {
		{ .addr = 0xa1a536, .byte = 0x48 },
		{ .addr = 0xa1a537, .byte = 0x81 },
		{ .addr = 0xa1a538, .byte = 0x17 },
		{ .addr = 0xa1a539, .byte = 0x33 },
		{ .addr = 0xa1a53a, .byte = 0x77 },
		{ .addr = 0xa1a53b, .byte = 0xfd }
};

static const SST_Transaction extw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10593594, .data = 30717, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_6[] = {
		{ .addr = 0xafa1dc, .byte = 0x48 },
		{ .addr = 0xafa1dd, .byte = 0x86 },
		{ .addr = 0xafa1de, .byte = 0xd8 },
		{ .addr = 0xafa1df, .byte = 0xfd },
		{ .addr = 0xafa1e0, .byte = 0x38 },
		{ .addr = 0xafa1e1, .byte = 0x6a }
};

static const SST_RamByte extw_final_ram_6[] = {
		{ .addr = 0xafa1dc, .byte = 0x48 },
		{ .addr = 0xafa1dd, .byte = 0x86 },
		{ .addr = 0xafa1de, .byte = 0xd8 },
		{ .addr = 0xafa1df, .byte = 0xfd },
		{ .addr = 0xafa1e0, .byte = 0x38 },
		{ .addr = 0xafa1e1, .byte = 0x6a }
};

static const SST_Transaction extw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11510240, .data = 14442, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_7[] = {
		{ .addr = 0x7f49a6, .byte = 0x48 },
		{ .addr = 0x7f49a7, .byte = 0x80 },
		{ .addr = 0x7f49a8, .byte = 0x78 },
		{ .addr = 0x7f49a9, .byte = 0x17 },
		{ .addr = 0x7f49aa, .byte = 0x1f },
		{ .addr = 0x7f49ab, .byte = 0x67 }
};

static const SST_RamByte extw_final_ram_7[] = {
		{ .addr = 0x7f49a6, .byte = 0x48 },
		{ .addr = 0x7f49a7, .byte = 0x80 },
		{ .addr = 0x7f49a8, .byte = 0x78 },
		{ .addr = 0x7f49a9, .byte = 0x17 },
		{ .addr = 0x7f49aa, .byte = 0x1f },
		{ .addr = 0x7f49ab, .byte = 0x67 }
};

static const SST_Transaction extw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8341930, .data = 8039, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_8[] = {
		{ .addr = 0x67380c, .byte = 0x48 },
		{ .addr = 0x67380d, .byte = 0x85 },
		{ .addr = 0x67380e, .byte = 0x39 },
		{ .addr = 0x67380f, .byte = 0x12 },
		{ .addr = 0x673810, .byte = 0xc7 },
		{ .addr = 0x673811, .byte = 0x53 }
};

static const SST_RamByte extw_final_ram_8[] = {
		{ .addr = 0x67380c, .byte = 0x48 },
		{ .addr = 0x67380d, .byte = 0x85 },
		{ .addr = 0x67380e, .byte = 0x39 },
		{ .addr = 0x67380f, .byte = 0x12 },
		{ .addr = 0x673810, .byte = 0xc7 },
		{ .addr = 0x673811, .byte = 0x53 }
};

static const SST_Transaction extw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6764560, .data = 51027, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_9[] = {
		{ .addr = 0xb9a8ba, .byte = 0x48 },
		{ .addr = 0xb9a8bb, .byte = 0x87 },
		{ .addr = 0xb9a8bc, .byte = 0x62 },
		{ .addr = 0xb9a8bd, .byte = 0x90 },
		{ .addr = 0xb9a8be, .byte = 0x26 },
		{ .addr = 0xb9a8bf, .byte = 0x37 }
};

static const SST_RamByte extw_final_ram_9[] = {
		{ .addr = 0xb9a8ba, .byte = 0x48 },
		{ .addr = 0xb9a8bb, .byte = 0x87 },
		{ .addr = 0xb9a8bc, .byte = 0x62 },
		{ .addr = 0xb9a8bd, .byte = 0x90 },
		{ .addr = 0xb9a8be, .byte = 0x26 },
		{ .addr = 0xb9a8bf, .byte = 0x37 }
};

static const SST_Transaction extw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12167358, .data = 9783, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_10[] = {
		{ .addr = 0x8da62e, .byte = 0x48 },
		{ .addr = 0x8da62f, .byte = 0x82 },
		{ .addr = 0x8da630, .byte = 0xcd },
		{ .addr = 0x8da631, .byte = 0xb3 },
		{ .addr = 0x8da632, .byte = 0x69 },
		{ .addr = 0x8da633, .byte = 0x2c }
};

static const SST_RamByte extw_final_ram_10[] = {
		{ .addr = 0x8da62e, .byte = 0x48 },
		{ .addr = 0x8da62f, .byte = 0x82 },
		{ .addr = 0x8da630, .byte = 0xcd },
		{ .addr = 0x8da631, .byte = 0xb3 },
		{ .addr = 0x8da632, .byte = 0x69 },
		{ .addr = 0x8da633, .byte = 0x2c }
};

static const SST_Transaction extw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9283122, .data = 26924, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_11[] = {
		{ .addr = 0x92d6dc, .byte = 0x48 },
		{ .addr = 0x92d6dd, .byte = 0x83 },
		{ .addr = 0x92d6de, .byte = 0xb5 },
		{ .addr = 0x92d6df, .byte = 0xc5 },
		{ .addr = 0x92d6e0, .byte = 0xf8 },
		{ .addr = 0x92d6e1, .byte = 0x4a }
};

static const SST_RamByte extw_final_ram_11[] = {
		{ .addr = 0x92d6dc, .byte = 0x48 },
		{ .addr = 0x92d6dd, .byte = 0x83 },
		{ .addr = 0x92d6de, .byte = 0xb5 },
		{ .addr = 0x92d6df, .byte = 0xc5 },
		{ .addr = 0x92d6e0, .byte = 0xf8 },
		{ .addr = 0x92d6e1, .byte = 0x4a }
};

static const SST_Transaction extw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9623264, .data = 63562, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_12[] = {
		{ .addr = 0x6f2d48, .byte = 0x48 },
		{ .addr = 0x6f2d49, .byte = 0x86 },
		{ .addr = 0x6f2d4a, .byte = 0xa3 },
		{ .addr = 0x6f2d4b, .byte = 0x3a },
		{ .addr = 0x6f2d4c, .byte = 0x9d },
		{ .addr = 0x6f2d4d, .byte = 0x0e }
};

static const SST_RamByte extw_final_ram_12[] = {
		{ .addr = 0x6f2d48, .byte = 0x48 },
		{ .addr = 0x6f2d49, .byte = 0x86 },
		{ .addr = 0x6f2d4a, .byte = 0xa3 },
		{ .addr = 0x6f2d4b, .byte = 0x3a },
		{ .addr = 0x6f2d4c, .byte = 0x9d },
		{ .addr = 0x6f2d4d, .byte = 0x0e }
};

static const SST_Transaction extw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7286092, .data = 40206, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_13[] = {
		{ .addr = 0x24d5aa, .byte = 0x48 },
		{ .addr = 0x24d5ab, .byte = 0x87 },
		{ .addr = 0x24d5ac, .byte = 0x57 },
		{ .addr = 0x24d5ad, .byte = 0x66 },
		{ .addr = 0x24d5ae, .byte = 0x71 },
		{ .addr = 0x24d5af, .byte = 0x53 }
};

static const SST_RamByte extw_final_ram_13[] = {
		{ .addr = 0x24d5aa, .byte = 0x48 },
		{ .addr = 0x24d5ab, .byte = 0x87 },
		{ .addr = 0x24d5ac, .byte = 0x57 },
		{ .addr = 0x24d5ad, .byte = 0x66 },
		{ .addr = 0x24d5ae, .byte = 0x71 },
		{ .addr = 0x24d5af, .byte = 0x53 }
};

static const SST_Transaction extw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2413998, .data = 29011, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_14[] = {
		{ .addr = 0x775190, .byte = 0x48 },
		{ .addr = 0x775191, .byte = 0x80 },
		{ .addr = 0x775192, .byte = 0x44 },
		{ .addr = 0x775193, .byte = 0x5c },
		{ .addr = 0x775194, .byte = 0xd4 },
		{ .addr = 0x775195, .byte = 0x0a }
};

static const SST_RamByte extw_final_ram_14[] = {
		{ .addr = 0x775190, .byte = 0x48 },
		{ .addr = 0x775191, .byte = 0x80 },
		{ .addr = 0x775192, .byte = 0x44 },
		{ .addr = 0x775193, .byte = 0x5c },
		{ .addr = 0x775194, .byte = 0xd4 },
		{ .addr = 0x775195, .byte = 0x0a }
};

static const SST_Transaction extw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7819668, .data = 54282, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extw_initial_ram_15[] = {
		{ .addr = 0xcba7c0, .byte = 0x48 },
		{ .addr = 0xcba7c1, .byte = 0x81 },
		{ .addr = 0xcba7c2, .byte = 0xee },
		{ .addr = 0xcba7c3, .byte = 0x88 },
		{ .addr = 0xcba7c4, .byte = 0xc5 },
		{ .addr = 0xcba7c5, .byte = 0x00 }
};

static const SST_RamByte extw_final_ram_15[] = {
		{ .addr = 0xcba7c0, .byte = 0x48 },
		{ .addr = 0xcba7c1, .byte = 0x81 },
		{ .addr = 0xcba7c2, .byte = 0xee },
		{ .addr = 0xcba7c3, .byte = 0x88 },
		{ .addr = 0xcba7c4, .byte = 0xc5 },
		{ .addr = 0xcba7c5, .byte = 0x00 }
};

static const SST_Transaction extw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13346756, .data = 50432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t EXTW_TEST_COUNT = 16;
static const SST_TestCase extw[] = {
	{
		.name = "000 EXT.w D2 4882",
		.initial = {
			.regs = {
				3819345852, 1802571790, 2247905797, 3018080418, 1989524333, 3317799016, 113612003, 2306054450, 884290329, 3066226699, 4172221593, 3709084570, 1373732245, 1684373549, 2131941452, 1893728, 12735908, 40982, 2338694
			},
			.prefetch0 = 18562,
			.prefetch1 = 50519,
			.ram = extw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3819345852, 1802571790, 2247884805, 3018080418, 1989524333, 3317799016, 113612003, 2306054450, 884290329, 3066226699, 4172221593, 3709084570, 1373732245, 1684373549, 2131941452, 1893728, 12735908, 40976, 2338696
			},
			.prefetch0 = 50519,
			.prefetch1 = 33243,
			.ram = extw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = extw_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 EXT.w D0 4880",
		.initial = {
			.regs = {
				1111886379, 3653213632, 1923607819, 3306724444, 1089892789, 3459238458, 503093272, 609338756, 200492426, 3113876213, 1139877842, 1802459568, 4107336994, 2811932507, 1917882612, 2011324, 6222310, 1814, 6736174
			},
			.prefetch0 = 18560,
			.prefetch1 = 53619,
			.ram = extw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1111883819, 3653213632, 1923607819, 3306724444, 1089892789, 3459238458, 503093272, 609338756, 200492426, 3113876213, 1139877842, 1802459568, 4107336994, 2811932507, 1917882612, 2011324, 6222310, 1808, 6736176
			},
			.prefetch0 = 53619,
			.prefetch1 = 25989,
			.ram = extw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = extw_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 EXT.w D6 4886",
		.initial = {
			.regs = {
				709206787, 2615684537, 561285861, 837264161, 836841374, 2874606146, 3387030556, 4121909454, 1493899314, 3745154757, 391327930, 1242426876, 1197648510, 3755016701, 1594183728, 956484, 10013326, 9751, 15578016
			},
			.prefetch0 = 18566,
			.prefetch1 = 57396,
			.ram = extw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				709206787, 2615684537, 561285861, 837264161, 836841374, 2874606146, 3386966044, 4121909454, 1493899314, 3745154757, 391327930, 1242426876, 1197648510, 3755016701, 1594183728, 956484, 10013326, 9744, 15578018
			},
			.prefetch0 = 57396,
			.prefetch1 = 23116,
			.ram = extw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = extw_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 EXT.w D5 4885",
		.initial = {
			.regs = {
				1608703755, 3215227584, 416755473, 1803046733, 4127969695, 3559411352, 532956632, 1196213666, 2572409913, 1759634297, 3620469232, 120228248, 3847636865, 1299236178, 3101593615, 14997098, 11078268, 8214, 11406818
			},
			.prefetch0 = 18565,
			.prefetch1 = 26109,
			.ram = extw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1608703755, 3215227584, 416755473, 1803046733, 4127969695, 3559456664, 532956632, 1196213666, 2572409913, 1759634297, 3620469232, 120228248, 3847636865, 1299236178, 3101593615, 14997098, 11078268, 8216, 11406820
			},
			.prefetch0 = 26109,
			.prefetch1 = 52478,
			.ram = extw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = extw_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 EXT.w D5 4885",
		.initial = {
			.regs = {
				354502980, 3696491526, 925346363, 1862746723, 3789073851, 1145047034, 2036463119, 1114407518, 802761098, 1246838950, 1344283622, 3728108290, 3425286975, 2476860260, 761265801, 5509394, 10859966, 8714, 2899412
			},
			.prefetch0 = 18565,
			.prefetch1 = 62998,
			.ram = extw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				354502980, 3696491526, 925346363, 1862746723, 3789073851, 1145110522, 2036463119, 1114407518, 802761098, 1246838950, 1344283622, 3728108290, 3425286975, 2476860260, 761265801, 5509394, 10859966, 8712, 2899414
			},
			.prefetch0 = 62998,
			.prefetch1 = 12686,
			.ram = extw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = extw_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 EXT.w D1 4881",
		.initial = {
			.regs = {
				2339596301, 683703443, 1079919456, 1643784705, 2854139105, 2624993341, 1558351120, 3726930652, 2200204296, 1384601999, 2970833616, 2654219065, 770488690, 3532118675, 1821742197, 16144128, 12166926, 1305, 10593594
			},
			.prefetch0 = 18561,
			.prefetch1 = 5939,
			.ram = extw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2339596301, 683736979, 1079919456, 1643784705, 2854139105, 2624993341, 1558351120, 3726930652, 2200204296, 1384601999, 2970833616, 2654219065, 770488690, 3532118675, 1821742197, 16144128, 12166926, 1304, 10593596
			},
			.prefetch0 = 5939,
			.prefetch1 = 30717,
			.ram = extw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = extw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 EXT.w D6 4886",
		.initial = {
			.regs = {
				2752519455, 2034234412, 388284496, 3622411838, 2346984395, 1258673324, 3273578246, 4015740370, 2780818603, 1595521247, 2484846750, 4159258561, 1302631103, 2870886760, 1349228920, 7194240, 4774730, 256, 11510240
			},
			.prefetch0 = 18566,
			.prefetch1 = 55549,
			.ram = extw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2752519455, 2034234412, 388284496, 3622411838, 2346984395, 1258673324, 3273523206, 4015740370, 2780818603, 1595521247, 2484846750, 4159258561, 1302631103, 2870886760, 1349228920, 7194240, 4774730, 256, 11510242
			},
			.prefetch0 = 55549,
			.prefetch1 = 14442,
			.ram = extw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = extw_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 EXT.w D0 4880",
		.initial = {
			.regs = {
				2177813483, 4265664897, 928580475, 1558424988, 1639548980, 1660697532, 651224402, 2779077390, 3888987067, 3732265622, 1141289822, 543921708, 2534845509, 4035246611, 3134974364, 1314742, 1054904, 41499, 8341930
			},
			.prefetch0 = 18560,
			.prefetch1 = 30743,
			.ram = extw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2177826795, 4265664897, 928580475, 1558424988, 1639548980, 1660697532, 651224402, 2779077390, 3888987067, 3732265622, 1141289822, 543921708, 2534845509, 4035246611, 3134974364, 1314742, 1054904, 41496, 8341932
			},
			.prefetch0 = 30743,
			.prefetch1 = 8039,
			.ram = extw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = extw_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 EXT.w D5 4885",
		.initial = {
			.regs = {
				1829504001, 218855536, 62313384, 3870946722, 2742034828, 4081613680, 1084270412, 1539733555, 4217464260, 3822538312, 3555509472, 1808272364, 4097817794, 3934533248, 2156600106, 15180314, 14673640, 8961, 6764560
			},
			.prefetch0 = 18565,
			.prefetch1 = 14610,
			.ram = extw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1829504001, 218855536, 62313384, 3870946722, 2742034828, 4081582192, 1084270412, 1539733555, 4217464260, 3822538312, 3555509472, 1808272364, 4097817794, 3934533248, 2156600106, 15180314, 14673640, 8960, 6764562
			},
			.prefetch0 = 14610,
			.prefetch1 = 51027,
			.ram = extw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = extw_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 EXT.w D7 4887",
		.initial = {
			.regs = {
				3400063066, 2543341029, 3066758452, 1857896227, 2227988686, 3973906026, 1019035206, 311449458, 1823611227, 82640546, 3405140443, 1628384463, 4041206569, 1684045339, 1861746742, 9517036, 7294274, 42760, 12167358
			},
			.prefetch0 = 18567,
			.prefetch1 = 25232,
			.ram = extw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3400063066, 2543341029, 3066758452, 1857896227, 2227988686, 3973906026, 1019035206, 311427186, 1823611227, 82640546, 3405140443, 1628384463, 4041206569, 1684045339, 1861746742, 9517036, 7294274, 42752, 12167360
			},
			.prefetch0 = 25232,
			.prefetch1 = 9783,
			.ram = extw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = extw_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 EXT.w D2 4882",
		.initial = {
			.regs = {
				866892432, 3703102508, 675049562, 3705649915, 2339767268, 1472337478, 4276947967, 3320054101, 2075070443, 94982439, 570099896, 945410959, 196637978, 1265050887, 3429446021, 4560952, 10150712, 9237, 9283122
			},
			.prefetch0 = 18562,
			.prefetch1 = 52659,
			.ram = extw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				866892432, 3703102508, 675020890, 3705649915, 2339767268, 1472337478, 4276947967, 3320054101, 2075070443, 94982439, 570099896, 945410959, 196637978, 1265050887, 3429446021, 4560952, 10150712, 9232, 9283124
			},
			.prefetch0 = 52659,
			.prefetch1 = 26924,
			.ram = extw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = extw_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 EXT.w D3 4883",
		.initial = {
			.regs = {
				3206024747, 764526077, 635251506, 1830538834, 1141583896, 4059360304, 1106082345, 3238392247, 2565076416, 3006485834, 1066844955, 4000248421, 642616530, 2737140127, 3230422733, 5831330, 14388416, 9485, 9623264
			},
			.prefetch0 = 18563,
			.prefetch1 = 46533,
			.ram = extw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3206024747, 764526077, 635251506, 1830486098, 1141583896, 4059360304, 1106082345, 3238392247, 2565076416, 3006485834, 1066844955, 4000248421, 642616530, 2737140127, 3230422733, 5831330, 14388416, 9472, 9623266
			},
			.prefetch0 = 46533,
			.prefetch1 = 63562,
			.ram = extw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = extw_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 EXT.w D6 4886",
		.initial = {
			.regs = {
				745309224, 3447742721, 2649277148, 2882119459, 1093750280, 3673572030, 135328976, 3892342708, 2841847548, 147233401, 429750432, 1974699400, 860107291, 379127105, 3835139645, 7984920, 12327534, 9229, 7286092
			},
			.prefetch0 = 18566,
			.prefetch1 = 41786,
			.ram = extw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				745309224, 3447742721, 2649277148, 2882119459, 1093750280, 3673572030, 135331792, 3892342708, 2841847548, 147233401, 429750432, 1974699400, 860107291, 379127105, 3835139645, 7984920, 12327534, 9224, 7286094
			},
			.prefetch0 = 41786,
			.prefetch1 = 40206,
			.ram = extw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = extw_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 EXT.w D7 4887",
		.initial = {
			.regs = {
				1675967391, 2522844848, 1703031369, 1808150980, 3578863803, 1173154925, 1756914213, 319012635, 1682454110, 839539986, 2784871527, 790584951, 2921212153, 2741125205, 2785198236, 8436450, 1248226, 33283, 2413998
			},
			.prefetch0 = 18567,
			.prefetch1 = 22374,
			.ram = extw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1675967391, 2522844848, 1703031369, 1808150980, 3578863803, 1173154925, 1756914213, 318963739, 1682454110, 839539986, 2784871527, 790584951, 2921212153, 2741125205, 2785198236, 8436450, 1248226, 33280, 2414000
			},
			.prefetch0 = 22374,
			.prefetch1 = 29011,
			.ram = extw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = extw_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 EXT.w D0 4880",
		.initial = {
			.regs = {
				1652241747, 278156443, 2564270704, 1289020367, 4166534185, 2810560269, 2397972088, 1151636465, 865692543, 511226751, 2049065190, 3551549114, 1427598862, 453309268, 316022246, 7105468, 1321636, 41988, 7819668
			},
			.prefetch0 = 18560,
			.prefetch1 = 17500,
			.ram = extw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1652228179, 278156443, 2564270704, 1289020367, 4166534185, 2810560269, 2397972088, 1151636465, 865692543, 511226751, 2049065190, 3551549114, 1427598862, 453309268, 316022246, 7105468, 1321636, 41984, 7819670
			},
			.prefetch0 = 17500,
			.prefetch1 = 54282,
			.ram = extw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = extw_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 EXT.w D1 4881",
		.initial = {
			.regs = {
				3734682658, 1395262908, 4192910967, 754915488, 696009530, 1476871196, 3742269911, 4150507651, 912097165, 1932571957, 3313794851, 3400917867, 3615274769, 2272566917, 410220380, 16658086, 12735736, 269, 13346756
			},
			.prefetch0 = 18561,
			.prefetch1 = 61064,
			.ram = extw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3734682658, 1395326908, 4192910967, 754915488, 696009530, 1476871196, 3742269911, 4150507651, 912097165, 1932571957, 3313794851, 3400917867, 3615274769, 2272566917, 410220380, 16658086, 12735736, 264, 13346758
			},
			.prefetch0 = 61064,
			.prefetch1 = 50432,
			.ram = extw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = extw_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_EXTW_H */