#ifndef RBT_PEA_H
#define RBT_PEA_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte pea_initial_ram_0[] = {
		{ .addr = 0x932042, .byte = 0x48 },
		{ .addr = 0x932043, .byte = 0x75 },
		{ .addr = 0x932044, .byte = 0x5e },
		{ .addr = 0x932045, .byte = 0x5e },
		{ .addr = 0x932046, .byte = 0xd2 },
		{ .addr = 0x932047, .byte = 0x44 },
		{ .addr = 0x932048, .byte = 0x2c },
		{ .addr = 0x932049, .byte = 0xe7 }
};

static const SST_RamByte pea_final_ram_0[] = {
		{ .addr = 0x932042, .byte = 0x48 },
		{ .addr = 0x932043, .byte = 0x75 },
		{ .addr = 0x932044, .byte = 0x5e },
		{ .addr = 0x932045, .byte = 0x5e },
		{ .addr = 0x932046, .byte = 0xd2 },
		{ .addr = 0x932047, .byte = 0x44 },
		{ .addr = 0x932048, .byte = 0x2c },
		{ .addr = 0x932049, .byte = 0xe7 },
		{ .addr = 0x7102a0, .byte = 0xcd },
		{ .addr = 0x7102a1, .byte = 0xe2 },
		{ .addr = 0x7102a2, .byte = 0x85 },
		{ .addr = 0x7102a3, .byte = 0x95 }
};

static const SST_Transaction pea_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9642054, .data = 53828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9642056, .data = 11495, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7406240, .data = 52706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7406242, .data = 34197, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_1[] = {
		{ .addr = 0x92eb3a, .byte = 0x48 },
		{ .addr = 0x92eb3b, .byte = 0x78 },
		{ .addr = 0x92eb3c, .byte = 0x83 },
		{ .addr = 0x92eb3d, .byte = 0xb6 },
		{ .addr = 0x92eb3e, .byte = 0x96 },
		{ .addr = 0x92eb3f, .byte = 0xa0 },
		{ .addr = 0x92eb40, .byte = 0x9c },
		{ .addr = 0x92eb41, .byte = 0xea }
};

static const SST_RamByte pea_final_ram_1[] = {
		{ .addr = 0x92eb3a, .byte = 0x48 },
		{ .addr = 0x92eb3b, .byte = 0x78 },
		{ .addr = 0x92eb3c, .byte = 0x83 },
		{ .addr = 0x92eb3d, .byte = 0xb6 },
		{ .addr = 0x92eb3e, .byte = 0x96 },
		{ .addr = 0x92eb3f, .byte = 0xa0 },
		{ .addr = 0x195eea, .byte = 0xff },
		{ .addr = 0x195eeb, .byte = 0xff },
		{ .addr = 0x195eec, .byte = 0x83 },
		{ .addr = 0x195eed, .byte = 0xb6 },
		{ .addr = 0x92eb40, .byte = 0x9c },
		{ .addr = 0x92eb41, .byte = 0xea }
};

static const SST_Transaction pea_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9628478, .data = 38560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1662698, .data = 65535, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1662700, .data = 33718, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9628480, .data = 40170, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_2[] = {
		{ .addr = 0x7b2d58, .byte = 0x48 },
		{ .addr = 0x7b2d59, .byte = 0x6e },
		{ .addr = 0x7b2d5a, .byte = 0xc2 },
		{ .addr = 0x7b2d5b, .byte = 0x63 },
		{ .addr = 0x7b2d5c, .byte = 0xbb },
		{ .addr = 0x7b2d5d, .byte = 0x9b },
		{ .addr = 0x7b2d5e, .byte = 0x35 },
		{ .addr = 0x7b2d5f, .byte = 0x84 }
};

static const SST_RamByte pea_final_ram_2[] = {
		{ .addr = 0x7b2d58, .byte = 0x48 },
		{ .addr = 0x7b2d59, .byte = 0x6e },
		{ .addr = 0x7b2d5a, .byte = 0xc2 },
		{ .addr = 0x7b2d5b, .byte = 0x63 },
		{ .addr = 0x7b2d5c, .byte = 0xbb },
		{ .addr = 0x7b2d5d, .byte = 0x9b },
		{ .addr = 0x7b2d5e, .byte = 0x35 },
		{ .addr = 0x7b2d5f, .byte = 0x84 },
		{ .addr = 0x178680, .byte = 0xe4 },
		{ .addr = 0x178681, .byte = 0x20 },
		{ .addr = 0x178682, .byte = 0x6a },
		{ .addr = 0x178683, .byte = 0xc0 }
};

static const SST_Transaction pea_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8072540, .data = 48027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8072542, .data = 13700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1541760, .data = 58400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1541762, .data = 27328, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_3[] = {
		{ .addr = 0xa70ee2, .byte = 0x48 },
		{ .addr = 0xa70ee3, .byte = 0x73 },
		{ .addr = 0xa70ee4, .byte = 0x6c },
		{ .addr = 0xa70ee5, .byte = 0x61 },
		{ .addr = 0xa70ee6, .byte = 0x8a },
		{ .addr = 0xa70ee7, .byte = 0xf2 },
		{ .addr = 0xa70ee8, .byte = 0xd3 },
		{ .addr = 0xa70ee9, .byte = 0x4e }
};

static const SST_RamByte pea_final_ram_3[] = {
		{ .addr = 0xa70ee2, .byte = 0x48 },
		{ .addr = 0xa70ee3, .byte = 0x73 },
		{ .addr = 0xa70ee4, .byte = 0x6c },
		{ .addr = 0xa70ee5, .byte = 0x61 },
		{ .addr = 0xa70ee6, .byte = 0x8a },
		{ .addr = 0xa70ee7, .byte = 0xf2 },
		{ .addr = 0xa70ee8, .byte = 0xd3 },
		{ .addr = 0xa70ee9, .byte = 0x4e },
		{ .addr = 0x903312, .byte = 0x3a },
		{ .addr = 0x903313, .byte = 0x22 },
		{ .addr = 0x903314, .byte = 0xad },
		{ .addr = 0x903315, .byte = 0xfe }
};

static const SST_Transaction pea_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10948326, .data = 35570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10948328, .data = 54094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9450258, .data = 14882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9450260, .data = 44542, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_4[] = {
		{ .addr = 0x5ff2ce, .byte = 0x48 },
		{ .addr = 0x5ff2cf, .byte = 0x69 },
		{ .addr = 0x5ff2d0, .byte = 0x85 },
		{ .addr = 0x5ff2d1, .byte = 0x1f },
		{ .addr = 0x5ff2d2, .byte = 0xd3 },
		{ .addr = 0x5ff2d3, .byte = 0xbf },
		{ .addr = 0x5ff2d4, .byte = 0xa1 },
		{ .addr = 0x5ff2d5, .byte = 0x19 }
};

static const SST_RamByte pea_final_ram_4[] = {
		{ .addr = 0x5ff2ce, .byte = 0x48 },
		{ .addr = 0x5ff2cf, .byte = 0x69 },
		{ .addr = 0x5ff2d0, .byte = 0x85 },
		{ .addr = 0x5ff2d1, .byte = 0x1f },
		{ .addr = 0x5ff2d2, .byte = 0xd3 },
		{ .addr = 0x5ff2d3, .byte = 0xbf },
		{ .addr = 0x5ff2d4, .byte = 0xa1 },
		{ .addr = 0x5ff2d5, .byte = 0x19 },
		{ .addr = 0x89ad04, .byte = 0x4f },
		{ .addr = 0x89ad05, .byte = 0x64 },
		{ .addr = 0x89ad06, .byte = 0xba },
		{ .addr = 0x89ad07, .byte = 0xe7 }
};

static const SST_Transaction pea_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6288082, .data = 54207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6288084, .data = 41241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9022724, .data = 20324, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9022726, .data = 47847, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_5[] = {
		{ .addr = 0xbaf2b0, .byte = 0x48 },
		{ .addr = 0xbaf2b1, .byte = 0x6d },
		{ .addr = 0xbaf2b2, .byte = 0xe9 },
		{ .addr = 0xbaf2b3, .byte = 0x62 },
		{ .addr = 0xbaf2b4, .byte = 0x41 },
		{ .addr = 0xbaf2b5, .byte = 0x7b },
		{ .addr = 0xbaf2b6, .byte = 0xeb },
		{ .addr = 0xbaf2b7, .byte = 0xf6 }
};

static const SST_RamByte pea_final_ram_5[] = {
		{ .addr = 0xbaf2b0, .byte = 0x48 },
		{ .addr = 0xbaf2b1, .byte = 0x6d },
		{ .addr = 0xbaf2b2, .byte = 0xe9 },
		{ .addr = 0xbaf2b3, .byte = 0x62 },
		{ .addr = 0xbaf2b4, .byte = 0x41 },
		{ .addr = 0xbaf2b5, .byte = 0x7b },
		{ .addr = 0xbaf2b6, .byte = 0xeb },
		{ .addr = 0xbaf2b7, .byte = 0xf6 },
		{ .addr = 0x58d18c, .byte = 0x5a },
		{ .addr = 0x58d18d, .byte = 0xf0 },
		{ .addr = 0x58d18e, .byte = 0x61 },
		{ .addr = 0x58d18f, .byte = 0x97 }
};

static const SST_Transaction pea_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12251828, .data = 16763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12251830, .data = 60406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5820812, .data = 23280, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5820814, .data = 24983, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_6[] = {
		{ .addr = 0x67a2da, .byte = 0x48 },
		{ .addr = 0x67a2db, .byte = 0x7a },
		{ .addr = 0x67a2dc, .byte = 0x69 },
		{ .addr = 0x67a2dd, .byte = 0x1b },
		{ .addr = 0x67a2de, .byte = 0x3e },
		{ .addr = 0x67a2df, .byte = 0xcd },
		{ .addr = 0x67a2e0, .byte = 0x6e },
		{ .addr = 0x67a2e1, .byte = 0xeb }
};

static const SST_RamByte pea_final_ram_6[] = {
		{ .addr = 0x67a2da, .byte = 0x48 },
		{ .addr = 0x67a2db, .byte = 0x7a },
		{ .addr = 0x67a2dc, .byte = 0x69 },
		{ .addr = 0x67a2dd, .byte = 0x1b },
		{ .addr = 0x67a2de, .byte = 0x3e },
		{ .addr = 0x67a2df, .byte = 0xcd },
		{ .addr = 0x67a2e0, .byte = 0x6e },
		{ .addr = 0x67a2e1, .byte = 0xeb },
		{ .addr = 0x144f68, .byte = 0x00 },
		{ .addr = 0x144f69, .byte = 0x68 },
		{ .addr = 0x144f6a, .byte = 0x0b },
		{ .addr = 0x144f6b, .byte = 0xf7 }
};

static const SST_Transaction pea_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6791902, .data = 16077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6791904, .data = 28395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1331048, .data = 104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1331050, .data = 3063, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_7[] = {
		{ .addr = 0x3f0158, .byte = 0x48 },
		{ .addr = 0x3f0159, .byte = 0x78 },
		{ .addr = 0x3f015a, .byte = 0xaf },
		{ .addr = 0x3f015b, .byte = 0x22 },
		{ .addr = 0x3f015c, .byte = 0xa8 },
		{ .addr = 0x3f015d, .byte = 0xa0 },
		{ .addr = 0x3f015e, .byte = 0x78 },
		{ .addr = 0x3f015f, .byte = 0xb5 }
};

static const SST_RamByte pea_final_ram_7[] = {
		{ .addr = 0x3f0158, .byte = 0x48 },
		{ .addr = 0x3f0159, .byte = 0x78 },
		{ .addr = 0x3f015a, .byte = 0xaf },
		{ .addr = 0x3f015b, .byte = 0x22 },
		{ .addr = 0x3f015c, .byte = 0xa8 },
		{ .addr = 0x3f015d, .byte = 0xa0 },
		{ .addr = 0xef0d60, .byte = 0xff },
		{ .addr = 0xef0d61, .byte = 0xff },
		{ .addr = 0xef0d62, .byte = 0xaf },
		{ .addr = 0xef0d63, .byte = 0x22 },
		{ .addr = 0x3f015e, .byte = 0x78 },
		{ .addr = 0x3f015f, .byte = 0xb5 }
};

static const SST_Transaction pea_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4129116, .data = 43168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15666528, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15666530, .data = 44834, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4129118, .data = 30901, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_8[] = {
		{ .addr = 0xf555d6, .byte = 0x48 },
		{ .addr = 0xf555d7, .byte = 0x6d },
		{ .addr = 0xf555d8, .byte = 0x5e },
		{ .addr = 0xf555d9, .byte = 0xee },
		{ .addr = 0xf555da, .byte = 0x34 },
		{ .addr = 0xf555db, .byte = 0x64 },
		{ .addr = 0xf555dc, .byte = 0xec },
		{ .addr = 0xf555dd, .byte = 0xbb }
};

static const SST_RamByte pea_final_ram_8[] = {
		{ .addr = 0xf555d6, .byte = 0x48 },
		{ .addr = 0xf555d7, .byte = 0x6d },
		{ .addr = 0xf555d8, .byte = 0x5e },
		{ .addr = 0xf555d9, .byte = 0xee },
		{ .addr = 0xf555da, .byte = 0x34 },
		{ .addr = 0xf555db, .byte = 0x64 },
		{ .addr = 0xf555dc, .byte = 0xec },
		{ .addr = 0xf555dd, .byte = 0xbb },
		{ .addr = 0xf26d80, .byte = 0x93 },
		{ .addr = 0xf26d81, .byte = 0xe8 },
		{ .addr = 0xf26d82, .byte = 0xd5 },
		{ .addr = 0xf26d83, .byte = 0xcb }
};

static const SST_Transaction pea_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16078298, .data = 13412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16078300, .data = 60603, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15887744, .data = 37864, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15887746, .data = 54731, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_9[] = {
		{ .addr = 0xf5c982, .byte = 0x48 },
		{ .addr = 0xf5c983, .byte = 0x76 },
		{ .addr = 0xf5c984, .byte = 0x50 },
		{ .addr = 0xf5c985, .byte = 0x72 },
		{ .addr = 0xf5c986, .byte = 0xf8 },
		{ .addr = 0xf5c987, .byte = 0xea },
		{ .addr = 0xf5c988, .byte = 0xf0 },
		{ .addr = 0xf5c989, .byte = 0xd0 }
};

static const SST_RamByte pea_final_ram_9[] = {
		{ .addr = 0xf5c982, .byte = 0x48 },
		{ .addr = 0xf5c983, .byte = 0x76 },
		{ .addr = 0xf5c984, .byte = 0x50 },
		{ .addr = 0xf5c985, .byte = 0x72 },
		{ .addr = 0xf5c986, .byte = 0xf8 },
		{ .addr = 0xf5c987, .byte = 0xea },
		{ .addr = 0xf5c988, .byte = 0xf0 },
		{ .addr = 0xf5c989, .byte = 0xd0 },
		{ .addr = 0xb89e20, .byte = 0x1b },
		{ .addr = 0xb89e21, .byte = 0xb0 },
		{ .addr = 0xb89e22, .byte = 0x30 },
		{ .addr = 0xb89e23, .byte = 0x4f }
};

static const SST_Transaction pea_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16107910, .data = 63722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16107912, .data = 61648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12099104, .data = 7088, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12099106, .data = 12367, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_10[] = {
		{ .addr = 0xa64804, .byte = 0x48 },
		{ .addr = 0xa64805, .byte = 0x6d },
		{ .addr = 0xa64806, .byte = 0x82 },
		{ .addr = 0xa64807, .byte = 0x31 },
		{ .addr = 0xa64808, .byte = 0x67 },
		{ .addr = 0xa64809, .byte = 0xc4 },
		{ .addr = 0xa6480a, .byte = 0xf0 },
		{ .addr = 0xa6480b, .byte = 0x78 }
};

static const SST_RamByte pea_final_ram_10[] = {
		{ .addr = 0xa64804, .byte = 0x48 },
		{ .addr = 0xa64805, .byte = 0x6d },
		{ .addr = 0xa64806, .byte = 0x82 },
		{ .addr = 0xa64807, .byte = 0x31 },
		{ .addr = 0xa64808, .byte = 0x67 },
		{ .addr = 0xa64809, .byte = 0xc4 },
		{ .addr = 0xa6480a, .byte = 0xf0 },
		{ .addr = 0xa6480b, .byte = 0x78 },
		{ .addr = 0xdaef0e, .byte = 0x30 },
		{ .addr = 0xdaef0f, .byte = 0x28 },
		{ .addr = 0xdaef10, .byte = 0xf0 },
		{ .addr = 0xdaef11, .byte = 0x7c }
};

static const SST_Transaction pea_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10897416, .data = 26564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10897418, .data = 61560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14348046, .data = 12328, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14348048, .data = 61564, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_11[] = {
		{ .addr = 0xf1e006, .byte = 0x48 },
		{ .addr = 0xf1e007, .byte = 0x6d },
		{ .addr = 0xf1e008, .byte = 0x79 },
		{ .addr = 0xf1e009, .byte = 0x8c },
		{ .addr = 0xf1e00a, .byte = 0x0c },
		{ .addr = 0xf1e00b, .byte = 0x07 },
		{ .addr = 0xf1e00c, .byte = 0x4f },
		{ .addr = 0xf1e00d, .byte = 0xa1 }
};

static const SST_RamByte pea_final_ram_11[] = {
		{ .addr = 0xf1e006, .byte = 0x48 },
		{ .addr = 0xf1e007, .byte = 0x6d },
		{ .addr = 0xf1e008, .byte = 0x79 },
		{ .addr = 0xf1e009, .byte = 0x8c },
		{ .addr = 0xf1e00a, .byte = 0x0c },
		{ .addr = 0xf1e00b, .byte = 0x07 },
		{ .addr = 0xf1e00c, .byte = 0x4f },
		{ .addr = 0xf1e00d, .byte = 0xa1 },
		{ .addr = 0xa5c476, .byte = 0xc9 },
		{ .addr = 0xa5c477, .byte = 0xca },
		{ .addr = 0xa5c478, .byte = 0x1a },
		{ .addr = 0xa5c479, .byte = 0x47 }
};

static const SST_Transaction pea_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15851530, .data = 3079, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15851532, .data = 20385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10863734, .data = 51658, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10863736, .data = 6727, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_12[] = {
		{ .addr = 0x48a8c8, .byte = 0x48 },
		{ .addr = 0x48a8c9, .byte = 0x68 },
		{ .addr = 0x48a8ca, .byte = 0x5d },
		{ .addr = 0x48a8cb, .byte = 0x81 },
		{ .addr = 0x48a8cc, .byte = 0x1b },
		{ .addr = 0x48a8cd, .byte = 0x84 },
		{ .addr = 0x48a8ce, .byte = 0x56 },
		{ .addr = 0x48a8cf, .byte = 0x13 }
};

static const SST_RamByte pea_final_ram_12[] = {
		{ .addr = 0x48a8c8, .byte = 0x48 },
		{ .addr = 0x48a8c9, .byte = 0x68 },
		{ .addr = 0x48a8ca, .byte = 0x5d },
		{ .addr = 0x48a8cb, .byte = 0x81 },
		{ .addr = 0x48a8cc, .byte = 0x1b },
		{ .addr = 0x48a8cd, .byte = 0x84 },
		{ .addr = 0x48a8ce, .byte = 0x56 },
		{ .addr = 0x48a8cf, .byte = 0x13 },
		{ .addr = 0x240b2e, .byte = 0x7f },
		{ .addr = 0x240b2f, .byte = 0x15 },
		{ .addr = 0x240b30, .byte = 0x6f },
		{ .addr = 0x240b31, .byte = 0x73 }
};

static const SST_Transaction pea_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4761804, .data = 7044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4761806, .data = 22035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2362158, .data = 32533, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2362160, .data = 28531, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_13[] = {
		{ .addr = 0xab2df0, .byte = 0x48 },
		{ .addr = 0xab2df1, .byte = 0x7a },
		{ .addr = 0xab2df2, .byte = 0x84 },
		{ .addr = 0xab2df3, .byte = 0x54 },
		{ .addr = 0xab2df4, .byte = 0x57 },
		{ .addr = 0xab2df5, .byte = 0xd0 },
		{ .addr = 0xab2df6, .byte = 0xa8 },
		{ .addr = 0xab2df7, .byte = 0x88 }
};

static const SST_RamByte pea_final_ram_13[] = {
		{ .addr = 0xab2df0, .byte = 0x48 },
		{ .addr = 0xab2df1, .byte = 0x7a },
		{ .addr = 0xab2df2, .byte = 0x84 },
		{ .addr = 0xab2df3, .byte = 0x54 },
		{ .addr = 0xab2df4, .byte = 0x57 },
		{ .addr = 0xab2df5, .byte = 0xd0 },
		{ .addr = 0xab2df6, .byte = 0xa8 },
		{ .addr = 0xab2df7, .byte = 0x88 },
		{ .addr = 0xf45f2c, .byte = 0x00 },
		{ .addr = 0xf45f2d, .byte = 0xaa },
		{ .addr = 0xf45f2e, .byte = 0xb2 },
		{ .addr = 0xf45f2f, .byte = 0x46 }
};

static const SST_Transaction pea_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11218420, .data = 22480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11218422, .data = 43144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16015148, .data = 170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16015150, .data = 45638, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_14[] = {
		{ .addr = 0xd014dc, .byte = 0x48 },
		{ .addr = 0xd014dd, .byte = 0x76 },
		{ .addr = 0xd014de, .byte = 0xcc },
		{ .addr = 0xd014df, .byte = 0x10 },
		{ .addr = 0xd014e0, .byte = 0xc5 },
		{ .addr = 0xd014e1, .byte = 0x1e },
		{ .addr = 0xd014e2, .byte = 0x4f },
		{ .addr = 0xd014e3, .byte = 0x0f }
};

static const SST_RamByte pea_final_ram_14[] = {
		{ .addr = 0xd014dc, .byte = 0x48 },
		{ .addr = 0xd014dd, .byte = 0x76 },
		{ .addr = 0xd014de, .byte = 0xcc },
		{ .addr = 0xd014df, .byte = 0x10 },
		{ .addr = 0xd014e0, .byte = 0xc5 },
		{ .addr = 0xd014e1, .byte = 0x1e },
		{ .addr = 0xd014e2, .byte = 0x4f },
		{ .addr = 0xd014e3, .byte = 0x0f },
		{ .addr = 0x95f7e8, .byte = 0xdd },
		{ .addr = 0x95f7e9, .byte = 0x3c },
		{ .addr = 0x95f7ea, .byte = 0xb0 },
		{ .addr = 0x95f7eb, .byte = 0x96 }
};

static const SST_Transaction pea_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13636832, .data = 50462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13636834, .data = 20239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9828328, .data = 56636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9828330, .data = 45206, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_15[] = {
		{ .addr = 0x6a9590, .byte = 0x48 },
		{ .addr = 0x6a9591, .byte = 0x7a },
		{ .addr = 0x6a9592, .byte = 0xfa },
		{ .addr = 0x6a9593, .byte = 0x48 },
		{ .addr = 0x6a9594, .byte = 0x4a },
		{ .addr = 0x6a9595, .byte = 0x89 },
		{ .addr = 0x6a9596, .byte = 0xa0 },
		{ .addr = 0x6a9597, .byte = 0x51 }
};

static const SST_RamByte pea_final_ram_15[] = {
		{ .addr = 0x6a9590, .byte = 0x48 },
		{ .addr = 0x6a9591, .byte = 0x7a },
		{ .addr = 0x6a9592, .byte = 0xfa },
		{ .addr = 0x6a9593, .byte = 0x48 },
		{ .addr = 0x6a9594, .byte = 0x4a },
		{ .addr = 0x6a9595, .byte = 0x89 },
		{ .addr = 0x6a9596, .byte = 0xa0 },
		{ .addr = 0x6a9597, .byte = 0x51 },
		{ .addr = 0xc7f6f4, .byte = 0x00 },
		{ .addr = 0xc7f6f5, .byte = 0x6a },
		{ .addr = 0xc7f6f6, .byte = 0x8f },
		{ .addr = 0xc7f6f7, .byte = 0xda }
};

static const SST_Transaction pea_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6985108, .data = 19081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6985110, .data = 41041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13104884, .data = 106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13104886, .data = 36826, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_16[] = {
		{ .addr = 0x1bbc40, .byte = 0x48 },
		{ .addr = 0x1bbc41, .byte = 0x68 },
		{ .addr = 0x1bbc42, .byte = 0x60 },
		{ .addr = 0x1bbc43, .byte = 0xbd },
		{ .addr = 0x1bbc44, .byte = 0xd9 },
		{ .addr = 0x1bbc45, .byte = 0x22 },
		{ .addr = 0x1bbc46, .byte = 0x7c },
		{ .addr = 0x1bbc47, .byte = 0x19 }
};

static const SST_RamByte pea_final_ram_16[] = {
		{ .addr = 0x1bbc40, .byte = 0x48 },
		{ .addr = 0x1bbc41, .byte = 0x68 },
		{ .addr = 0x1bbc42, .byte = 0x60 },
		{ .addr = 0x1bbc43, .byte = 0xbd },
		{ .addr = 0x1bbc44, .byte = 0xd9 },
		{ .addr = 0x1bbc45, .byte = 0x22 },
		{ .addr = 0x1bbc46, .byte = 0x7c },
		{ .addr = 0x1bbc47, .byte = 0x19 },
		{ .addr = 0x1c2d2c, .byte = 0x0a },
		{ .addr = 0x1c2d2d, .byte = 0x17 },
		{ .addr = 0x1c2d2e, .byte = 0x5a },
		{ .addr = 0x1c2d2f, .byte = 0x28 }
};

static const SST_Transaction pea_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1817668, .data = 55586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1817670, .data = 31769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1846572, .data = 2583, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1846574, .data = 23080, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_17[] = {
		{ .addr = 0xdb2584, .byte = 0x48 },
		{ .addr = 0xdb2585, .byte = 0x6d },
		{ .addr = 0xdb2586, .byte = 0x2c },
		{ .addr = 0xdb2587, .byte = 0xb3 },
		{ .addr = 0xdb2588, .byte = 0xbc },
		{ .addr = 0xdb2589, .byte = 0x67 },
		{ .addr = 0xdb258a, .byte = 0xec },
		{ .addr = 0xdb258b, .byte = 0xd9 }
};

static const SST_RamByte pea_final_ram_17[] = {
		{ .addr = 0xdb2584, .byte = 0x48 },
		{ .addr = 0xdb2585, .byte = 0x6d },
		{ .addr = 0xdb2586, .byte = 0x2c },
		{ .addr = 0xdb2587, .byte = 0xb3 },
		{ .addr = 0xdb2588, .byte = 0xbc },
		{ .addr = 0xdb2589, .byte = 0x67 },
		{ .addr = 0xdb258a, .byte = 0xec },
		{ .addr = 0xdb258b, .byte = 0xd9 },
		{ .addr = 0x44c3e4, .byte = 0xec },
		{ .addr = 0x44c3e5, .byte = 0x0a },
		{ .addr = 0x44c3e6, .byte = 0xa5 },
		{ .addr = 0x44c3e7, .byte = 0x20 }
};

static const SST_Transaction pea_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14361992, .data = 48231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14361994, .data = 60633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4506596, .data = 60426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4506598, .data = 42272, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_18[] = {
		{ .addr = 0xa232e0, .byte = 0x48 },
		{ .addr = 0xa232e1, .byte = 0x68 },
		{ .addr = 0xa232e2, .byte = 0x22 },
		{ .addr = 0xa232e3, .byte = 0x3c },
		{ .addr = 0xa232e4, .byte = 0x08 },
		{ .addr = 0xa232e5, .byte = 0x43 },
		{ .addr = 0xa232e6, .byte = 0xf0 },
		{ .addr = 0xa232e7, .byte = 0xf3 }
};

static const SST_RamByte pea_final_ram_18[] = {
		{ .addr = 0xa232e0, .byte = 0x48 },
		{ .addr = 0xa232e1, .byte = 0x68 },
		{ .addr = 0xa232e2, .byte = 0x22 },
		{ .addr = 0xa232e3, .byte = 0x3c },
		{ .addr = 0xa232e4, .byte = 0x08 },
		{ .addr = 0xa232e5, .byte = 0x43 },
		{ .addr = 0xa232e6, .byte = 0xf0 },
		{ .addr = 0xa232e7, .byte = 0xf3 },
		{ .addr = 0x633d32, .byte = 0x02 },
		{ .addr = 0x633d33, .byte = 0x9f },
		{ .addr = 0x633d34, .byte = 0x22 },
		{ .addr = 0x633d35, .byte = 0xc0 }
};

static const SST_Transaction pea_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10629860, .data = 2115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10629862, .data = 61683, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6503730, .data = 671, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6503732, .data = 8896, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_19[] = {
		{ .addr = 0x44ba92, .byte = 0x48 },
		{ .addr = 0x44ba93, .byte = 0x70 },
		{ .addr = 0x44ba94, .byte = 0xa0 },
		{ .addr = 0x44ba95, .byte = 0x6e },
		{ .addr = 0x44ba96, .byte = 0x13 },
		{ .addr = 0x44ba97, .byte = 0x6a },
		{ .addr = 0x44ba98, .byte = 0x60 },
		{ .addr = 0x44ba99, .byte = 0xb2 }
};

static const SST_RamByte pea_final_ram_19[] = {
		{ .addr = 0x44ba92, .byte = 0x48 },
		{ .addr = 0x44ba93, .byte = 0x70 },
		{ .addr = 0x44ba94, .byte = 0xa0 },
		{ .addr = 0x44ba95, .byte = 0x6e },
		{ .addr = 0x44ba96, .byte = 0x13 },
		{ .addr = 0x44ba97, .byte = 0x6a },
		{ .addr = 0x44ba98, .byte = 0x60 },
		{ .addr = 0x44ba99, .byte = 0xb2 },
		{ .addr = 0xcff202, .byte = 0x6f },
		{ .addr = 0xcff203, .byte = 0x58 },
		{ .addr = 0xcff204, .byte = 0x72 },
		{ .addr = 0xcff205, .byte = 0x68 }
};

static const SST_Transaction pea_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4504214, .data = 4970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4504216, .data = 24754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13627906, .data = 28504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13627908, .data = 29288, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_20[] = {
		{ .addr = 0xdd1aa8, .byte = 0x48 },
		{ .addr = 0xdd1aa9, .byte = 0x68 },
		{ .addr = 0xdd1aaa, .byte = 0x02 },
		{ .addr = 0xdd1aab, .byte = 0x20 },
		{ .addr = 0xdd1aac, .byte = 0x38 },
		{ .addr = 0xdd1aad, .byte = 0x0f },
		{ .addr = 0xdd1aae, .byte = 0xcd },
		{ .addr = 0xdd1aaf, .byte = 0x30 }
};

static const SST_RamByte pea_final_ram_20[] = {
		{ .addr = 0xdd1aa8, .byte = 0x48 },
		{ .addr = 0xdd1aa9, .byte = 0x68 },
		{ .addr = 0xdd1aaa, .byte = 0x02 },
		{ .addr = 0xdd1aab, .byte = 0x20 },
		{ .addr = 0xdd1aac, .byte = 0x38 },
		{ .addr = 0xdd1aad, .byte = 0x0f },
		{ .addr = 0xdd1aae, .byte = 0xcd },
		{ .addr = 0xdd1aaf, .byte = 0x30 },
		{ .addr = 0xe2ab5a, .byte = 0x88 },
		{ .addr = 0xe2ab5b, .byte = 0x8b },
		{ .addr = 0xe2ab5c, .byte = 0x30 },
		{ .addr = 0xe2ab5d, .byte = 0xe6 }
};

static const SST_Transaction pea_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14490284, .data = 14351, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14490286, .data = 52528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14855002, .data = 34955, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14855004, .data = 12518, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_21[] = {
		{ .addr = 0x6d3730, .byte = 0x48 },
		{ .addr = 0x6d3731, .byte = 0x77 },
		{ .addr = 0x6d3732, .byte = 0x11 },
		{ .addr = 0x6d3733, .byte = 0xd9 },
		{ .addr = 0x6d3734, .byte = 0x22 },
		{ .addr = 0x6d3735, .byte = 0x1d },
		{ .addr = 0x6d3736, .byte = 0xee },
		{ .addr = 0x6d3737, .byte = 0x43 }
};

static const SST_RamByte pea_final_ram_21[] = {
		{ .addr = 0x6d3730, .byte = 0x48 },
		{ .addr = 0x6d3731, .byte = 0x77 },
		{ .addr = 0x6d3732, .byte = 0x11 },
		{ .addr = 0x6d3733, .byte = 0xd9 },
		{ .addr = 0x6d3734, .byte = 0x22 },
		{ .addr = 0x6d3735, .byte = 0x1d },
		{ .addr = 0x6d3736, .byte = 0xee },
		{ .addr = 0x6d3737, .byte = 0x43 },
		{ .addr = 0xc4abc8, .byte = 0x00 },
		{ .addr = 0xc4abc9, .byte = 0xc4 },
		{ .addr = 0xc4abca, .byte = 0x5c },
		{ .addr = 0xc4abcb, .byte = 0xdf }
};

static const SST_Transaction pea_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7157556, .data = 8733, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7157558, .data = 60995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12889032, .data = 196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12889034, .data = 23775, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_22[] = {
		{ .addr = 0x826fbc, .byte = 0x48 },
		{ .addr = 0x826fbd, .byte = 0x52 },
		{ .addr = 0x826fbe, .byte = 0x91 },
		{ .addr = 0x826fbf, .byte = 0x25 },
		{ .addr = 0x826fc0, .byte = 0x9d },
		{ .addr = 0x826fc1, .byte = 0xa2 }
};

static const SST_RamByte pea_final_ram_22[] = {
		{ .addr = 0x826fbc, .byte = 0x48 },
		{ .addr = 0x826fbd, .byte = 0x52 },
		{ .addr = 0x826fbe, .byte = 0x91 },
		{ .addr = 0x826fbf, .byte = 0x25 },
		{ .addr = 0x826fc0, .byte = 0x9d },
		{ .addr = 0x826fc1, .byte = 0xa2 },
		{ .addr = 0x9c6fa2, .byte = 0xb8 },
		{ .addr = 0x9c6fa3, .byte = 0xe8 },
		{ .addr = 0x9c6fa4, .byte = 0x3c },
		{ .addr = 0x9c6fa5, .byte = 0x71 }
};

static const SST_Transaction pea_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8548288, .data = 40354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10252194, .data = 47336, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10252196, .data = 15473, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_23[] = {
		{ .addr = 0x675d68, .byte = 0x48 },
		{ .addr = 0x675d69, .byte = 0x53 },
		{ .addr = 0x675d6a, .byte = 0x10 },
		{ .addr = 0x675d6b, .byte = 0x4b },
		{ .addr = 0x675d6c, .byte = 0xd3 },
		{ .addr = 0x675d6d, .byte = 0xb1 }
};

static const SST_RamByte pea_final_ram_23[] = {
		{ .addr = 0x675d68, .byte = 0x48 },
		{ .addr = 0x675d69, .byte = 0x53 },
		{ .addr = 0x675d6a, .byte = 0x10 },
		{ .addr = 0x675d6b, .byte = 0x4b },
		{ .addr = 0x675d6c, .byte = 0xd3 },
		{ .addr = 0x675d6d, .byte = 0xb1 },
		{ .addr = 0x64f090, .byte = 0x73 },
		{ .addr = 0x64f091, .byte = 0x62 },
		{ .addr = 0x64f092, .byte = 0xa8 },
		{ .addr = 0x64f093, .byte = 0xb7 }
};

static const SST_Transaction pea_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6774124, .data = 54193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6615184, .data = 29538, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6615186, .data = 43191, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_24[] = {
		{ .addr = 0x7c8172, .byte = 0x48 },
		{ .addr = 0x7c8173, .byte = 0x76 },
		{ .addr = 0x7c8174, .byte = 0x31 },
		{ .addr = 0x7c8175, .byte = 0x6a },
		{ .addr = 0x7c8176, .byte = 0x26 },
		{ .addr = 0x7c8177, .byte = 0x22 },
		{ .addr = 0x7c8178, .byte = 0x1b },
		{ .addr = 0x7c8179, .byte = 0x9b }
};

static const SST_RamByte pea_final_ram_24[] = {
		{ .addr = 0x7c8172, .byte = 0x48 },
		{ .addr = 0x7c8173, .byte = 0x76 },
		{ .addr = 0x7c8174, .byte = 0x31 },
		{ .addr = 0x7c8175, .byte = 0x6a },
		{ .addr = 0x7c8176, .byte = 0x26 },
		{ .addr = 0x7c8177, .byte = 0x22 },
		{ .addr = 0x7c8178, .byte = 0x1b },
		{ .addr = 0x7c8179, .byte = 0x9b },
		{ .addr = 0x33cef8, .byte = 0x4e },
		{ .addr = 0x33cef9, .byte = 0xa9 },
		{ .addr = 0x33cefa, .byte = 0xf4 },
		{ .addr = 0x33cefb, .byte = 0x84 }
};

static const SST_Transaction pea_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8159606, .data = 9762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8159608, .data = 7067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3395320, .data = 20137, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3395322, .data = 62596, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_25[] = {
		{ .addr = 0x0913be, .byte = 0x48 },
		{ .addr = 0x0913bf, .byte = 0x51 },
		{ .addr = 0x0913c0, .byte = 0x72 },
		{ .addr = 0x0913c1, .byte = 0x79 },
		{ .addr = 0x0913c2, .byte = 0x22 },
		{ .addr = 0x0913c3, .byte = 0x8d }
};

static const SST_RamByte pea_final_ram_25[] = {
		{ .addr = 0x0913be, .byte = 0x48 },
		{ .addr = 0x0913bf, .byte = 0x51 },
		{ .addr = 0x0913c0, .byte = 0x72 },
		{ .addr = 0x0913c1, .byte = 0x79 },
		{ .addr = 0x0913c2, .byte = 0x22 },
		{ .addr = 0x0913c3, .byte = 0x8d },
		{ .addr = 0x8df38e, .byte = 0x71 },
		{ .addr = 0x8df38f, .byte = 0xd3 },
		{ .addr = 0x8df390, .byte = 0x6d },
		{ .addr = 0x8df391, .byte = 0x2d }
};

static const SST_Transaction pea_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 594882, .data = 8845, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9302926, .data = 29139, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9302928, .data = 27949, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_26[] = {
		{ .addr = 0x27dada, .byte = 0x48 },
		{ .addr = 0x27dadb, .byte = 0x73 },
		{ .addr = 0x27dadc, .byte = 0x90 },
		{ .addr = 0x27dadd, .byte = 0x6c },
		{ .addr = 0x27dade, .byte = 0xd2 },
		{ .addr = 0x27dadf, .byte = 0x7f },
		{ .addr = 0x27dae0, .byte = 0x29 },
		{ .addr = 0x27dae1, .byte = 0x76 }
};

static const SST_RamByte pea_final_ram_26[] = {
		{ .addr = 0x27dada, .byte = 0x48 },
		{ .addr = 0x27dadb, .byte = 0x73 },
		{ .addr = 0x27dadc, .byte = 0x90 },
		{ .addr = 0x27dadd, .byte = 0x6c },
		{ .addr = 0x27dade, .byte = 0xd2 },
		{ .addr = 0x27dadf, .byte = 0x7f },
		{ .addr = 0x27dae0, .byte = 0x29 },
		{ .addr = 0x27dae1, .byte = 0x76 },
		{ .addr = 0x678b44, .byte = 0x9d },
		{ .addr = 0x678b45, .byte = 0x53 },
		{ .addr = 0x678b46, .byte = 0x11 },
		{ .addr = 0x678b47, .byte = 0x50 }
};

static const SST_Transaction pea_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2611934, .data = 53887, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2611936, .data = 10614, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6785860, .data = 40275, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6785862, .data = 4432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_27[] = {
		{ .addr = 0xb16bb6, .byte = 0x48 },
		{ .addr = 0xb16bb7, .byte = 0x55 },
		{ .addr = 0xb16bb8, .byte = 0x6a },
		{ .addr = 0xb16bb9, .byte = 0xc4 },
		{ .addr = 0xb16bba, .byte = 0x72 },
		{ .addr = 0xb16bbb, .byte = 0x38 }
};

static const SST_RamByte pea_final_ram_27[] = {
		{ .addr = 0xb16bb6, .byte = 0x48 },
		{ .addr = 0xb16bb7, .byte = 0x55 },
		{ .addr = 0xb16bb8, .byte = 0x6a },
		{ .addr = 0xb16bb9, .byte = 0xc4 },
		{ .addr = 0xb16bba, .byte = 0x72 },
		{ .addr = 0xb16bbb, .byte = 0x38 },
		{ .addr = 0xd7fa8c, .byte = 0x02 },
		{ .addr = 0xd7fa8d, .byte = 0xf8 },
		{ .addr = 0xd7fa8e, .byte = 0x8b },
		{ .addr = 0xd7fa8f, .byte = 0xf5 }
};

static const SST_Transaction pea_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11627450, .data = 29240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14154380, .data = 760, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14154382, .data = 35829, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_28[] = {
		{ .addr = 0xf992ee, .byte = 0x48 },
		{ .addr = 0xf992ef, .byte = 0x6d },
		{ .addr = 0xf992f0, .byte = 0xef },
		{ .addr = 0xf992f1, .byte = 0x4c },
		{ .addr = 0xf992f2, .byte = 0x2e },
		{ .addr = 0xf992f3, .byte = 0x43 },
		{ .addr = 0xf992f4, .byte = 0xb2 },
		{ .addr = 0xf992f5, .byte = 0x1f }
};

static const SST_RamByte pea_final_ram_28[] = {
		{ .addr = 0xf992ee, .byte = 0x48 },
		{ .addr = 0xf992ef, .byte = 0x6d },
		{ .addr = 0xf992f0, .byte = 0xef },
		{ .addr = 0xf992f1, .byte = 0x4c },
		{ .addr = 0xf992f2, .byte = 0x2e },
		{ .addr = 0xf992f3, .byte = 0x43 },
		{ .addr = 0xf992f4, .byte = 0xb2 },
		{ .addr = 0xf992f5, .byte = 0x1f },
		{ .addr = 0xc217a6, .byte = 0x8f },
		{ .addr = 0xc217a7, .byte = 0xd8 },
		{ .addr = 0xc217a8, .byte = 0xfc },
		{ .addr = 0xc217a9, .byte = 0xdf }
};

static const SST_Transaction pea_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16356082, .data = 11843, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16356084, .data = 45599, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12720038, .data = 36824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12720040, .data = 64735, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_29[] = {
		{ .addr = 0x4f39e8, .byte = 0x48 },
		{ .addr = 0x4f39e9, .byte = 0x69 },
		{ .addr = 0x4f39ea, .byte = 0xd2 },
		{ .addr = 0x4f39eb, .byte = 0x99 },
		{ .addr = 0x4f39ec, .byte = 0xc6 },
		{ .addr = 0x4f39ed, .byte = 0xc5 },
		{ .addr = 0x4f39ee, .byte = 0xda },
		{ .addr = 0x4f39ef, .byte = 0x97 }
};

static const SST_RamByte pea_final_ram_29[] = {
		{ .addr = 0x4f39e8, .byte = 0x48 },
		{ .addr = 0x4f39e9, .byte = 0x69 },
		{ .addr = 0x4f39ea, .byte = 0xd2 },
		{ .addr = 0x4f39eb, .byte = 0x99 },
		{ .addr = 0x4f39ec, .byte = 0xc6 },
		{ .addr = 0x4f39ed, .byte = 0xc5 },
		{ .addr = 0x4f39ee, .byte = 0xda },
		{ .addr = 0x4f39ef, .byte = 0x97 },
		{ .addr = 0x986e58, .byte = 0x90 },
		{ .addr = 0x986e59, .byte = 0xff },
		{ .addr = 0x986e5a, .byte = 0xc9 },
		{ .addr = 0x986e5b, .byte = 0xa2 }
};

static const SST_Transaction pea_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5192172, .data = 50885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5192174, .data = 55959, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9989720, .data = 37119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9989722, .data = 51618, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_30[] = {
		{ .addr = 0xbce300, .byte = 0x48 },
		{ .addr = 0xbce301, .byte = 0x51 },
		{ .addr = 0xbce302, .byte = 0xfe },
		{ .addr = 0xbce303, .byte = 0xec },
		{ .addr = 0xbce304, .byte = 0x41 },
		{ .addr = 0xbce305, .byte = 0x29 }
};

static const SST_RamByte pea_final_ram_30[] = {
		{ .addr = 0xbce300, .byte = 0x48 },
		{ .addr = 0xbce301, .byte = 0x51 },
		{ .addr = 0xbce302, .byte = 0xfe },
		{ .addr = 0xbce303, .byte = 0xec },
		{ .addr = 0xbce304, .byte = 0x41 },
		{ .addr = 0xbce305, .byte = 0x29 },
		{ .addr = 0x0cd992, .byte = 0xbe },
		{ .addr = 0x0cd993, .byte = 0x2e },
		{ .addr = 0x0cd994, .byte = 0x7d },
		{ .addr = 0x0cd995, .byte = 0x6f }
};

static const SST_Transaction pea_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12378884, .data = 16681, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 842130, .data = 48686, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 842132, .data = 32111, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte pea_initial_ram_31[] = {
		{ .addr = 0xad05bc, .byte = 0x48 },
		{ .addr = 0xad05bd, .byte = 0x74 },
		{ .addr = 0xad05be, .byte = 0x60 },
		{ .addr = 0xad05bf, .byte = 0x47 },
		{ .addr = 0xad05c0, .byte = 0xed },
		{ .addr = 0xad05c1, .byte = 0xa9 },
		{ .addr = 0xad05c2, .byte = 0xe7 },
		{ .addr = 0xad05c3, .byte = 0xf5 }
};

static const SST_RamByte pea_final_ram_31[] = {
		{ .addr = 0xad05bc, .byte = 0x48 },
		{ .addr = 0xad05bd, .byte = 0x74 },
		{ .addr = 0xad05be, .byte = 0x60 },
		{ .addr = 0xad05bf, .byte = 0x47 },
		{ .addr = 0xad05c0, .byte = 0xed },
		{ .addr = 0xad05c1, .byte = 0xa9 },
		{ .addr = 0xad05c2, .byte = 0xe7 },
		{ .addr = 0xad05c3, .byte = 0xf5 },
		{ .addr = 0x400b50, .byte = 0x48 },
		{ .addr = 0x400b51, .byte = 0xc0 },
		{ .addr = 0x400b52, .byte = 0xaf },
		{ .addr = 0x400b53, .byte = 0x81 }
};

static const SST_Transaction pea_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11339200, .data = 60841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11339202, .data = 59381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4197200, .data = 18624, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4197202, .data = 44929, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase pea[] = {
	{
		.name = "000 PEA (d8, A5, Xn) 4875",
		.initial = {
			.regs = {
				865422286, 968813949, 2721818445, 2141489019, 3373891870, 2202925245, 924941020, 3937274480, 4011833265, 4130108710, 3872153481, 130708056, 3294091709, 1251249274, 3501493919, 59218, 7406244, 40976, 9642054
			},
			.prefetch0 = 18549,
			.prefetch1 = 24158,
			.ram = pea_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				865422286, 968813949, 2721818445, 2141489019, 3373891870, 2202925245, 924941020, 3937274480, 4011833265, 4130108710, 3872153481, 130708056, 3294091709, 1251249274, 3501493919, 59218, 7406240, 40976, 9642058
			},
			.prefetch0 = 53828,
			.prefetch1 = 11495,
			.ram = pea_final_ram_0,
			.ram_len = 12,
		},
		.transactions = pea_transactions_0,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "001 PEA (xxx).w 4878",
		.initial = {
			.regs = {
				3289565250, 4011893252, 2102651890, 1438353841, 3216710071, 4225114151, 860885459, 3589591808, 1252944647, 2335627757, 3760459204, 547475088, 858651673, 3902028922, 2708597751, 1662702, 14908120, 34571, 9628478
			},
			.prefetch0 = 18552,
			.prefetch1 = 33718,
			.ram = pea_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3289565250, 4011893252, 2102651890, 1438353841, 3216710071, 4225114151, 860885459, 3589591808, 1252944647, 2335627757, 3760459204, 547475088, 858651673, 3902028922, 2708597751, 1662698, 14908120, 34571, 9628482
			},
			.prefetch0 = 38560,
			.prefetch1 = 40170,
			.ram = pea_final_ram_1,
			.ram_len = 12,
		},
		.transactions = pea_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 PEA (d16, A6) 486e",
		.initial = {
			.regs = {
				3398907902, 452924062, 3307212369, 1037906416, 2317282544, 2048011155, 1581434649, 553508906, 97835393, 714758780, 2822340763, 3330845394, 1891736678, 115260120, 3827345501, 2710120, 1541764, 42253, 8072540
			},
			.prefetch0 = 18542,
			.prefetch1 = 49763,
			.ram = pea_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3398907902, 452924062, 3307212369, 1037906416, 2317282544, 2048011155, 1581434649, 553508906, 97835393, 714758780, 2822340763, 3330845394, 1891736678, 115260120, 3827345501, 2710120, 1541760, 42253, 8072544
			},
			.prefetch0 = 48027,
			.prefetch1 = 13700,
			.ram = pea_final_ram_2,
			.ram_len = 12,
		},
		.transactions = pea_transactions_2,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "003 PEA (d8, A3, Xn) 4873",
		.initial = {
			.regs = {
				2931134465, 3782968336, 138329325, 2970604060, 2562786870, 2755683871, 2140507416, 970072103, 2642369220, 1811530396, 4240018058, 3129811077, 1616313363, 3749561539, 1034092470, 6992076, 9450262, 41233, 10948326
			},
			.prefetch0 = 18547,
			.prefetch1 = 27745,
			.ram = pea_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2931134465, 3782968336, 138329325, 2970604060, 2562786870, 2755683871, 2140507416, 970072103, 2642369220, 1811530396, 4240018058, 3129811077, 1616313363, 3749561539, 1034092470, 6992076, 9450258, 41233, 10948330
			},
			.prefetch0 = 35570,
			.prefetch1 = 54094,
			.ram = pea_final_ram_3,
			.ram_len = 12,
		},
		.transactions = pea_transactions_3,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "004 PEA (d16, A1) 4869",
		.initial = {
			.regs = {
				2824529968, 3524662264, 416740148, 2232930729, 1553116227, 2991276554, 4051663477, 349156778, 3278766366, 1332032968, 3598639904, 2381844691, 452215475, 558556889, 1976339113, 15384114, 9022728, 40977, 6288082
			},
			.prefetch0 = 18537,
			.prefetch1 = 34079,
			.ram = pea_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2824529968, 3524662264, 416740148, 2232930729, 1553116227, 2991276554, 4051663477, 349156778, 3278766366, 1332032968, 3598639904, 2381844691, 452215475, 558556889, 1976339113, 15384114, 9022724, 40977, 6288086
			},
			.prefetch0 = 54207,
			.prefetch1 = 41241,
			.ram = pea_final_ram_4,
			.ram_len = 12,
		},
		.transactions = pea_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 PEA (d16, A5) 486d",
		.initial = {
			.regs = {
				3106458279, 2524501454, 289250422, 3409964691, 3644183757, 2910656202, 1345674, 4247573637, 2978778938, 940540890, 3761752451, 3854808827, 3907781156, 1525708853, 3845502096, 5820816, 16367404, 1310, 12251828
			},
			.prefetch0 = 18541,
			.prefetch1 = 59746,
			.ram = pea_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3106458279, 2524501454, 289250422, 3409964691, 3644183757, 2910656202, 1345674, 4247573637, 2978778938, 940540890, 3761752451, 3854808827, 3907781156, 1525708853, 3845502096, 5820812, 16367404, 1310, 12251832
			},
			.prefetch0 = 16763,
			.prefetch1 = 60406,
			.ram = pea_final_ram_5,
			.ram_len = 12,
		},
		.transactions = pea_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 PEA (d16, PC) 487a",
		.initial = {
			.regs = {
				861421766, 1016436798, 3571912074, 1391003369, 1694502600, 121702477, 3464161363, 1023294300, 3853589737, 2887730531, 76836255, 2220057042, 2449113385, 3654608260, 1784150562, 3722840, 1331052, 9500, 6791902
			},
			.prefetch0 = 18554,
			.prefetch1 = 26907,
			.ram = pea_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				861421766, 1016436798, 3571912074, 1391003369, 1694502600, 121702477, 3464161363, 1023294300, 3853589737, 2887730531, 76836255, 2220057042, 2449113385, 3654608260, 1784150562, 3722840, 1331048, 9500, 6791906
			},
			.prefetch0 = 16077,
			.prefetch1 = 28395,
			.ram = pea_final_ram_6,
			.ram_len = 12,
		},
		.transactions = pea_transactions_6,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "007 PEA (xxx).w 4878",
		.initial = {
			.regs = {
				935707297, 2732951824, 1835620958, 3024905968, 829014232, 639517078, 395531275, 1362120421, 1532672645, 2586707984, 1444062757, 1914457741, 201601520, 3010617534, 2395758717, 1981664, 15666532, 10009, 4129116
			},
			.prefetch0 = 18552,
			.prefetch1 = 44834,
			.ram = pea_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				935707297, 2732951824, 1835620958, 3024905968, 829014232, 639517078, 395531275, 1362120421, 1532672645, 2586707984, 1444062757, 1914457741, 201601520, 3010617534, 2395758717, 1981664, 15666528, 10009, 4129120
			},
			.prefetch0 = 43168,
			.prefetch1 = 30901,
			.ram = pea_final_ram_7,
			.ram_len = 12,
		},
		.transactions = pea_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 PEA (d16, A5) 486d",
		.initial = {
			.regs = {
				1829225432, 463923214, 94288391, 2953015135, 1586791375, 2268997664, 3397851651, 4015582656, 324327808, 2212005694, 3605273503, 606550872, 3018560707, 2481485533, 1742955607, 15887748, 29072, 791, 16078298
			},
			.prefetch0 = 18541,
			.prefetch1 = 24302,
			.ram = pea_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1829225432, 463923214, 94288391, 2953015135, 1586791375, 2268997664, 3397851651, 4015582656, 324327808, 2212005694, 3605273503, 606550872, 3018560707, 2481485533, 1742955607, 15887744, 29072, 791, 16078302
			},
			.prefetch0 = 13412,
			.prefetch1 = 60603,
			.ram = pea_final_ram_8,
			.ram_len = 12,
		},
		.transactions = pea_transactions_8,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "009 PEA (d8, A6, Xn) 4876",
		.initial = {
			.regs = {
				871409445, 3681953628, 588743107, 740007683, 3248905726, 3182307892, 2551813508, 207724981, 3069687370, 655574938, 2922665949, 2113880493, 4083247803, 526655577, 464520617, 12099108, 3964110, 521, 16107910
			},
			.prefetch0 = 18550,
			.prefetch1 = 20594,
			.ram = pea_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				871409445, 3681953628, 588743107, 740007683, 3248905726, 3182307892, 2551813508, 207724981, 3069687370, 655574938, 2922665949, 2113880493, 4083247803, 526655577, 464520617, 12099104, 3964110, 521, 16107914
			},
			.prefetch0 = 63722,
			.prefetch1 = 61648,
			.ram = pea_final_ram_9,
			.ram_len = 12,
		},
		.transactions = pea_transactions_9,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "010 PEA (d16, A5) 486d",
		.initial = {
			.regs = {
				242878399, 1531504161, 2904033667, 4143021093, 1187200119, 3757265955, 2795663782, 24051509, 1498731298, 2638844669, 1275219344, 2569744807, 2217402896, 808021579, 1657990853, 6235466, 14348050, 40970, 10897416
			},
			.prefetch0 = 18541,
			.prefetch1 = 33329,
			.ram = pea_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				242878399, 1531504161, 2904033667, 4143021093, 1187200119, 3757265955, 2795663782, 24051509, 1498731298, 2638844669, 1275219344, 2569744807, 2217402896, 808021579, 1657990853, 6235466, 14348046, 40970, 10897420
			},
			.prefetch0 = 26564,
			.prefetch1 = 61560,
			.ram = pea_final_ram_10,
			.ram_len = 12,
		},
		.transactions = pea_transactions_10,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "011 PEA (d16, A5) 486d",
		.initial = {
			.regs = {
				4049866173, 807858276, 1393641948, 3511689030, 991104149, 3912433379, 1667105229, 772609422, 1090301501, 431050700, 668106464, 3860100316, 966280554, 3385434299, 1966846339, 10863738, 11302890, 33814, 15851530
			},
			.prefetch0 = 18541,
			.prefetch1 = 31116,
			.ram = pea_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4049866173, 807858276, 1393641948, 3511689030, 991104149, 3912433379, 1667105229, 772609422, 1090301501, 431050700, 668106464, 3860100316, 966280554, 3385434299, 1966846339, 10863734, 11302890, 33814, 15851534
			},
			.prefetch0 = 3079,
			.prefetch1 = 20385,
			.ram = pea_final_ram_11,
			.ram_len = 12,
		},
		.transactions = pea_transactions_11,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "012 PEA (d16, A0) 4868",
		.initial = {
			.regs = {
				268055670, 4080213994, 866831966, 55386104, 488813847, 3832798949, 980717589, 3450691925, 2132087282, 580537613, 3217839562, 2975190382, 2368663612, 1323463514, 869969289, 2362162, 4179386, 1034, 4761804
			},
			.prefetch0 = 18536,
			.prefetch1 = 23937,
			.ram = pea_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				268055670, 4080213994, 866831966, 55386104, 488813847, 3832798949, 980717589, 3450691925, 2132087282, 580537613, 3217839562, 2975190382, 2368663612, 1323463514, 869969289, 2362158, 4179386, 1034, 4761808
			},
			.prefetch0 = 7044,
			.prefetch1 = 22035,
			.ram = pea_final_ram_12,
			.ram_len = 12,
		},
		.transactions = pea_transactions_12,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "013 PEA (d16, PC) 487a",
		.initial = {
			.regs = {
				2530702899, 230305016, 1514611446, 1050723193, 2477973964, 1947611908, 3512570122, 4090718567, 1534034472, 3317301023, 4285822898, 152838848, 3603221519, 1277006898, 2854919031, 2176426, 16015152, 41749, 11218420
			},
			.prefetch0 = 18554,
			.prefetch1 = 33876,
			.ram = pea_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2530702899, 230305016, 1514611446, 1050723193, 2477973964, 1947611908, 3512570122, 4090718567, 1534034472, 3317301023, 4285822898, 152838848, 3603221519, 1277006898, 2854919031, 2176426, 16015148, 41749, 11218424
			},
			.prefetch0 = 22480,
			.prefetch1 = 43144,
			.ram = pea_final_ram_13,
			.ram_len = 12,
		},
		.transactions = pea_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 PEA (d8, A6, Xn) 4876",
		.initial = {
			.regs = {
				2667562940, 543676121, 3670352480, 3557702839, 3122827998, 2854986067, 2421937611, 1780433401, 1737187035, 1515192533, 4268029569, 3724092850, 2798276516, 1856205985, 913465570, 7639752, 9828332, 9488, 13636832
			},
			.prefetch0 = 18550,
			.prefetch1 = 52240,
			.ram = pea_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2667562940, 543676121, 3670352480, 3557702839, 3122827998, 2854986067, 2421937611, 1780433401, 1737187035, 1515192533, 4268029569, 3724092850, 2798276516, 1856205985, 913465570, 7639752, 9828328, 9488, 13636836
			},
			.prefetch0 = 50462,
			.prefetch1 = 20239,
			.ram = pea_final_ram_14,
			.ram_len = 12,
		},
		.transactions = pea_transactions_14,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "015 PEA (d16, PC) 487a",
		.initial = {
			.regs = {
				529203822, 2110409768, 3686097894, 1624647588, 1999691467, 1087127415, 1333949010, 3450708862, 170198670, 2038117428, 159384914, 1031753863, 1614684373, 3672931502, 4218483540, 9762490, 13104888, 42769, 6985108
			},
			.prefetch0 = 18554,
			.prefetch1 = 64072,
			.ram = pea_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				529203822, 2110409768, 3686097894, 1624647588, 1999691467, 1087127415, 1333949010, 3450708862, 170198670, 2038117428, 159384914, 1031753863, 1614684373, 3672931502, 4218483540, 9762490, 13104884, 42769, 6985112
			},
			.prefetch0 = 19081,
			.prefetch1 = 41041,
			.ram = pea_final_ram_15,
			.ram_len = 12,
		},
		.transactions = pea_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "016 PEA (d16, A0) 4868",
		.initial = {
			.regs = {
				1499067768, 793794313, 1667162870, 525696704, 1305034991, 1824487271, 1266837937, 2025115935, 169277803, 3550725019, 2027960424, 638279681, 1200022817, 2133792492, 2275486683, 1846576, 11265620, 33805, 1817668
			},
			.prefetch0 = 18536,
			.prefetch1 = 24765,
			.ram = pea_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1499067768, 793794313, 1667162870, 525696704, 1305034991, 1824487271, 1266837937, 2025115935, 169277803, 3550725019, 2027960424, 638279681, 1200022817, 2133792492, 2275486683, 1846572, 11265620, 33805, 1817672
			},
			.prefetch0 = 55586,
			.prefetch1 = 31769,
			.ram = pea_final_ram_16,
			.ram_len = 12,
		},
		.transactions = pea_transactions_16,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "017 PEA (d16, A5) 486d",
		.initial = {
			.regs = {
				3982818199, 1072650586, 1829261101, 798857313, 3170028791, 3888482180, 1342218815, 826460456, 3424824916, 2202091490, 3394102181, 3149369910, 2559493723, 3960109165, 3881454875, 12381384, 4506600, 8470, 14361992
			},
			.prefetch0 = 18541,
			.prefetch1 = 11443,
			.ram = pea_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3982818199, 1072650586, 1829261101, 798857313, 3170028791, 3888482180, 1342218815, 826460456, 3424824916, 2202091490, 3394102181, 3149369910, 2559493723, 3960109165, 3881454875, 12381384, 4506596, 8470, 14361996
			},
			.prefetch0 = 48231,
			.prefetch1 = 60633,
			.ram = pea_final_ram_17,
			.ram_len = 12,
		},
		.transactions = pea_transactions_17,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "018 PEA (d16, A0) 4868",
		.initial = {
			.regs = {
				3988012346, 2321006342, 2962389275, 2078880664, 2432804180, 230521797, 3109321372, 1013932630, 43974788, 512692205, 3082524528, 3930994206, 588178587, 3383022361, 301556228, 6503734, 2689122, 33806, 10629860
			},
			.prefetch0 = 18536,
			.prefetch1 = 8764,
			.ram = pea_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3988012346, 2321006342, 2962389275, 2078880664, 2432804180, 230521797, 3109321372, 1013932630, 43974788, 512692205, 3082524528, 3930994206, 588178587, 3383022361, 301556228, 6503730, 2689122, 33806, 10629864
			},
			.prefetch0 = 2115,
			.prefetch1 = 61683,
			.ram = pea_final_ram_18,
			.ram_len = 12,
		},
		.transactions = pea_transactions_18,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "019 PEA (d8, A0, Xn) 4870",
		.initial = {
			.regs = {
				487565266, 2092062453, 284612937, 2452765057, 521390966, 2652800347, 1736934056, 1504554012, 1868042475, 855127342, 840327439, 2614806179, 870357945, 2001119580, 2461148509, 13627910, 12126924, 33808, 4504214
			},
			.prefetch0 = 18544,
			.prefetch1 = 41070,
			.ram = pea_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				487565266, 2092062453, 284612937, 2452765057, 521390966, 2652800347, 1736934056, 1504554012, 1868042475, 855127342, 840327439, 2614806179, 870357945, 2001119580, 2461148509, 13627906, 12126924, 33808, 4504218
			},
			.prefetch0 = 4970,
			.prefetch1 = 24754,
			.ram = pea_final_ram_19,
			.ram_len = 12,
		},
		.transactions = pea_transactions_19,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "020 PEA (d16, A0) 4868",
		.initial = {
			.regs = {
				2370268688, 3850099108, 2204846311, 2373079247, 1853666847, 3471969427, 4068416274, 1493081177, 2290822854, 550841727, 1469603322, 1713432688, 3940055568, 2967700314, 2635320455, 14855006, 6226458, 1562, 14490284
			},
			.prefetch0 = 18536,
			.prefetch1 = 544,
			.ram = pea_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2370268688, 3850099108, 2204846311, 2373079247, 1853666847, 3471969427, 4068416274, 1493081177, 2290822854, 550841727, 1469603322, 1713432688, 3940055568, 2967700314, 2635320455, 14855002, 6226458, 1562, 14490288
			},
			.prefetch0 = 14351,
			.prefetch1 = 52528,
			.ram = pea_final_ram_20,
			.ram_len = 12,
		},
		.transactions = pea_transactions_20,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "021 PEA (d8, A7, Xn) 4877",
		.initial = {
			.regs = {
				3458912936, 1484173626, 656458429, 3764597818, 3367271826, 3235742090, 1043256099, 3862507562, 3303813358, 3030080120, 687871581, 111379, 1182080527, 997760193, 994654351, 14918260, 12889036, 9477, 7157556
			},
			.prefetch0 = 18551,
			.prefetch1 = 4569,
			.ram = pea_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3458912936, 1484173626, 656458429, 3764597818, 3367271826, 3235742090, 1043256099, 3862507562, 3303813358, 3030080120, 687871581, 111379, 1182080527, 997760193, 994654351, 14918260, 12889032, 9477, 7157560
			},
			.prefetch0 = 8733,
			.prefetch1 = 60995,
			.ram = pea_final_ram_21,
			.ram_len = 12,
		},
		.transactions = pea_transactions_21,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "022 PEA (A2) 4852",
		.initial = {
			.regs = {
				956225441, 1298035749, 2395269531, 3627728909, 3033073798, 3383697335, 842749320, 3414695915, 1072753834, 151331282, 3102227569, 2138753611, 1759796365, 597919597, 3109746310, 10252198, 4094262, 33026, 8548288
			},
			.prefetch0 = 18514,
			.prefetch1 = 37157,
			.ram = pea_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				956225441, 1298035749, 2395269531, 3627728909, 3033073798, 3383697335, 842749320, 3414695915, 1072753834, 151331282, 3102227569, 2138753611, 1759796365, 597919597, 3109746310, 10252194, 4094262, 33026, 8548290
			},
			.prefetch0 = 37157,
			.prefetch1 = 40354,
			.ram = pea_final_ram_22,
			.ram_len = 10,
		},
		.transactions = pea_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 PEA (A3) 4853",
		.initial = {
			.regs = {
				1561418355, 2760856455, 686339894, 297569956, 4144870955, 556785136, 3612484341, 3513882633, 2951383851, 2853578996, 3005872459, 1935845559, 1863524248, 678092068, 1690622176, 6615188, 10595282, 33806, 6774124
			},
			.prefetch0 = 18515,
			.prefetch1 = 4171,
			.ram = pea_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1561418355, 2760856455, 686339894, 297569956, 4144870955, 556785136, 3612484341, 3513882633, 2951383851, 2853578996, 3005872459, 1935845559, 1863524248, 678092068, 1690622176, 6615184, 10595282, 33806, 6774126
			},
			.prefetch0 = 4171,
			.prefetch1 = 54193,
			.ram = pea_final_ram_23,
			.ram_len = 10,
		},
		.transactions = pea_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 PEA (d8, A6, Xn) 4876",
		.initial = {
			.regs = {
				3604395620, 3259160071, 4275250172, 2584944059, 2647596919, 2642570133, 1091824423, 4018588948, 3350586770, 3389232472, 3063496858, 3130339348, 488552315, 1802809644, 1319753311, 3395324, 14392570, 33041, 8159606
			},
			.prefetch0 = 18550,
			.prefetch1 = 12650,
			.ram = pea_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3604395620, 3259160071, 4275250172, 2584944059, 2647596919, 2642570133, 1091824423, 4018588948, 3350586770, 3389232472, 3063496858, 3130339348, 488552315, 1802809644, 1319753311, 3395320, 14392570, 33041, 8159610
			},
			.prefetch0 = 9762,
			.prefetch1 = 7067,
			.ram = pea_final_ram_24,
			.ram_len = 12,
		},
		.transactions = pea_transactions_24,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "025 PEA (A1) 4851",
		.initial = {
			.regs = {
				2297088978, 3527607213, 405327593, 461698996, 1122489416, 85138473, 1770645313, 2398275296, 512721077, 1909681453, 1910156688, 756420844, 3641931113, 2183951457, 137525932, 9302930, 10576080, 1294, 594882
			},
			.prefetch0 = 18513,
			.prefetch1 = 29305,
			.ram = pea_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2297088978, 3527607213, 405327593, 461698996, 1122489416, 85138473, 1770645313, 2398275296, 512721077, 1909681453, 1910156688, 756420844, 3641931113, 2183951457, 137525932, 9302926, 10576080, 1294, 594884
			},
			.prefetch0 = 29305,
			.prefetch1 = 8845,
			.ram = pea_final_ram_25,
			.ram_len = 10,
		},
		.transactions = pea_transactions_25,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "026 PEA (d8, A3, Xn) 4873",
		.initial = {
			.regs = {
				2173091167, 1948510976, 2004628983, 139370781, 1689071178, 2647466442, 1533580383, 1656746158, 829203301, 218890700, 2395608393, 2639466264, 2800260776, 1141227472, 1216966078, 11811090, 6785864, 9243, 2611934
			},
			.prefetch0 = 18547,
			.prefetch1 = 36972,
			.ram = pea_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2173091167, 1948510976, 2004628983, 139370781, 1689071178, 2647466442, 1533580383, 1656746158, 829203301, 218890700, 2395608393, 2639466264, 2800260776, 1141227472, 1216966078, 11811090, 6785860, 9243, 2611938
			},
			.prefetch0 = 53887,
			.prefetch1 = 10614,
			.ram = pea_final_ram_26,
			.ram_len = 12,
		},
		.transactions = pea_transactions_26,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "027 PEA (A5) 4855",
		.initial = {
			.regs = {
				3349370726, 4085177727, 2148291428, 1065836444, 3877615299, 3835414032, 439781275, 613080628, 2237797366, 2219549373, 2265654084, 406787620, 1574351290, 49843189, 1468703078, 14154384, 14501112, 33546, 11627450
			},
			.prefetch0 = 18517,
			.prefetch1 = 27332,
			.ram = pea_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3349370726, 4085177727, 2148291428, 1065836444, 3877615299, 3835414032, 439781275, 613080628, 2237797366, 2219549373, 2265654084, 406787620, 1574351290, 49843189, 1468703078, 14154380, 14501112, 33546, 11627452
			},
			.prefetch0 = 27332,
			.prefetch1 = 29240,
			.ram = pea_final_ram_27,
			.ram_len = 10,
		},
		.transactions = pea_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 PEA (d16, A5) 486d",
		.initial = {
			.regs = {
				3372541759, 2132103463, 964855621, 70903308, 1298483467, 1177916176, 1108428756, 519514529, 2302506513, 3461891741, 1222523228, 145217222, 776792027, 2413366675, 2094376334, 10740100, 12720042, 9239, 16356082
			},
			.prefetch0 = 18541,
			.prefetch1 = 61260,
			.ram = pea_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3372541759, 2132103463, 964855621, 70903308, 1298483467, 1177916176, 1108428756, 519514529, 2302506513, 3461891741, 1222523228, 145217222, 776792027, 2413366675, 2094376334, 10740100, 12720038, 9239, 16356086
			},
			.prefetch0 = 11843,
			.prefetch1 = 45599,
			.ram = pea_final_ram_28,
			.ram_len = 12,
		},
		.transactions = pea_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 PEA (d16, A1) 4869",
		.initial = {
			.regs = {
				370903147, 2040575283, 678314764, 1179691649, 979177321, 3618388457, 463739517, 3792472559, 3589594439, 2432694025, 2527625359, 1982659463, 2138475075, 4194221485, 3455906662, 16707744, 9989724, 8455, 5192172
			},
			.prefetch0 = 18537,
			.prefetch1 = 53913,
			.ram = pea_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				370903147, 2040575283, 678314764, 1179691649, 979177321, 3618388457, 463739517, 3792472559, 3589594439, 2432694025, 2527625359, 1982659463, 2138475075, 4194221485, 3455906662, 16707744, 9989720, 8455, 5192176
			},
			.prefetch0 = 50885,
			.prefetch1 = 55959,
			.ram = pea_final_ram_29,
			.ram_len = 12,
		},
		.transactions = pea_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 PEA (A1) 4851",
		.initial = {
			.regs = {
				2685230864, 1396296431, 2689036972, 2228566744, 3626833349, 3343516029, 1512143946, 4190097638, 3458982745, 3190717807, 1352756334, 4099388569, 1407231818, 89823544, 37476039, 3333216, 842134, 42243, 12378884
			},
			.prefetch0 = 18513,
			.prefetch1 = 65260,
			.ram = pea_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2685230864, 1396296431, 2689036972, 2228566744, 3626833349, 3343516029, 1512143946, 4190097638, 3458982745, 3190717807, 1352756334, 4099388569, 1407231818, 89823544, 37476039, 3333216, 842130, 42243, 12378886
			},
			.prefetch0 = 65260,
			.prefetch1 = 16681,
			.ram = pea_final_ram_30,
			.ram_len = 10,
		},
		.transactions = pea_transactions_30,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "031 PEA (d8, A4, Xn) 4874",
		.initial = {
			.regs = {
				1978257823, 1826934158, 2205523157, 3780115182, 2132525433, 871063146, 3215612770, 421947943, 2207163748, 1534246853, 4276347208, 1314898000, 1220563928, 4245355, 2132910983, 4197204, 14517240, 1543, 11339200
			},
			.prefetch0 = 18548,
			.prefetch1 = 24647,
			.ram = pea_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1978257823, 1826934158, 2205523157, 3780115182, 2132525433, 871063146, 3215612770, 421947943, 2207163748, 1534246853, 4276347208, 1314898000, 1220563928, 4245355, 2132910983, 4197200, 14517240, 1543, 11339204
			},
			.prefetch0 = 60841,
			.prefetch1 = 59381,
			.ram = pea_final_ram_31,
			.ram_len = 12,
		},
		.transactions = pea_transactions_31,
		.transactions_len = 6,
		.lenght = 20,
	},
};

#endif /* RBT_PEA_H */