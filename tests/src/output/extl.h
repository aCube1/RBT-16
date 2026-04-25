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

static const SST_RamByte extl_initial_ram_16[] = {
		{ .addr = 0x0f67c0, .byte = 0x48 },
		{ .addr = 0x0f67c1, .byte = 0xc1 },
		{ .addr = 0x0f67c2, .byte = 0x9a },
		{ .addr = 0x0f67c3, .byte = 0x7e },
		{ .addr = 0x0f67c4, .byte = 0x32 },
		{ .addr = 0x0f67c5, .byte = 0x40 }
};

static const SST_RamByte extl_final_ram_16[] = {
		{ .addr = 0x0f67c0, .byte = 0x48 },
		{ .addr = 0x0f67c1, .byte = 0xc1 },
		{ .addr = 0x0f67c2, .byte = 0x9a },
		{ .addr = 0x0f67c3, .byte = 0x7e },
		{ .addr = 0x0f67c4, .byte = 0x32 },
		{ .addr = 0x0f67c5, .byte = 0x40 }
};

static const SST_Transaction extl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1009604, .data = 12864, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_17[] = {
		{ .addr = 0xb68e8c, .byte = 0x48 },
		{ .addr = 0xb68e8d, .byte = 0xc4 },
		{ .addr = 0xb68e8e, .byte = 0x50 },
		{ .addr = 0xb68e8f, .byte = 0x3b },
		{ .addr = 0xb68e90, .byte = 0x2f },
		{ .addr = 0xb68e91, .byte = 0x2e }
};

static const SST_RamByte extl_final_ram_17[] = {
		{ .addr = 0xb68e8c, .byte = 0x48 },
		{ .addr = 0xb68e8d, .byte = 0xc4 },
		{ .addr = 0xb68e8e, .byte = 0x50 },
		{ .addr = 0xb68e8f, .byte = 0x3b },
		{ .addr = 0xb68e90, .byte = 0x2f },
		{ .addr = 0xb68e91, .byte = 0x2e }
};

static const SST_Transaction extl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11964048, .data = 12078, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_18[] = {
		{ .addr = 0x32c94a, .byte = 0x48 },
		{ .addr = 0x32c94b, .byte = 0xc0 },
		{ .addr = 0x32c94c, .byte = 0x88 },
		{ .addr = 0x32c94d, .byte = 0xee },
		{ .addr = 0x32c94e, .byte = 0xf8 },
		{ .addr = 0x32c94f, .byte = 0x2e }
};

static const SST_RamByte extl_final_ram_18[] = {
		{ .addr = 0x32c94a, .byte = 0x48 },
		{ .addr = 0x32c94b, .byte = 0xc0 },
		{ .addr = 0x32c94c, .byte = 0x88 },
		{ .addr = 0x32c94d, .byte = 0xee },
		{ .addr = 0x32c94e, .byte = 0xf8 },
		{ .addr = 0x32c94f, .byte = 0x2e }
};

static const SST_Transaction extl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3328334, .data = 63534, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_19[] = {
		{ .addr = 0x15569c, .byte = 0x48 },
		{ .addr = 0x15569d, .byte = 0xc0 },
		{ .addr = 0x15569e, .byte = 0xe3 },
		{ .addr = 0x15569f, .byte = 0x46 },
		{ .addr = 0x1556a0, .byte = 0x8e },
		{ .addr = 0x1556a1, .byte = 0x50 }
};

static const SST_RamByte extl_final_ram_19[] = {
		{ .addr = 0x15569c, .byte = 0x48 },
		{ .addr = 0x15569d, .byte = 0xc0 },
		{ .addr = 0x15569e, .byte = 0xe3 },
		{ .addr = 0x15569f, .byte = 0x46 },
		{ .addr = 0x1556a0, .byte = 0x8e },
		{ .addr = 0x1556a1, .byte = 0x50 }
};

static const SST_Transaction extl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1398432, .data = 36432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_20[] = {
		{ .addr = 0xa5099e, .byte = 0x48 },
		{ .addr = 0xa5099f, .byte = 0xc2 },
		{ .addr = 0xa509a0, .byte = 0x6f },
		{ .addr = 0xa509a1, .byte = 0x5a },
		{ .addr = 0xa509a2, .byte = 0x64 },
		{ .addr = 0xa509a3, .byte = 0x01 }
};

static const SST_RamByte extl_final_ram_20[] = {
		{ .addr = 0xa5099e, .byte = 0x48 },
		{ .addr = 0xa5099f, .byte = 0xc2 },
		{ .addr = 0xa509a0, .byte = 0x6f },
		{ .addr = 0xa509a1, .byte = 0x5a },
		{ .addr = 0xa509a2, .byte = 0x64 },
		{ .addr = 0xa509a3, .byte = 0x01 }
};

static const SST_Transaction extl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10815906, .data = 25601, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_21[] = {
		{ .addr = 0x895be8, .byte = 0x48 },
		{ .addr = 0x895be9, .byte = 0xc7 },
		{ .addr = 0x895bea, .byte = 0x65 },
		{ .addr = 0x895beb, .byte = 0x5d },
		{ .addr = 0x895bec, .byte = 0x29 },
		{ .addr = 0x895bed, .byte = 0x24 }
};

static const SST_RamByte extl_final_ram_21[] = {
		{ .addr = 0x895be8, .byte = 0x48 },
		{ .addr = 0x895be9, .byte = 0xc7 },
		{ .addr = 0x895bea, .byte = 0x65 },
		{ .addr = 0x895beb, .byte = 0x5d },
		{ .addr = 0x895bec, .byte = 0x29 },
		{ .addr = 0x895bed, .byte = 0x24 }
};

static const SST_Transaction extl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9001964, .data = 10532, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_22[] = {
		{ .addr = 0x1163cc, .byte = 0x48 },
		{ .addr = 0x1163cd, .byte = 0xc3 },
		{ .addr = 0x1163ce, .byte = 0x56 },
		{ .addr = 0x1163cf, .byte = 0xe2 },
		{ .addr = 0x1163d0, .byte = 0xbf },
		{ .addr = 0x1163d1, .byte = 0x56 }
};

static const SST_RamByte extl_final_ram_22[] = {
		{ .addr = 0x1163cc, .byte = 0x48 },
		{ .addr = 0x1163cd, .byte = 0xc3 },
		{ .addr = 0x1163ce, .byte = 0x56 },
		{ .addr = 0x1163cf, .byte = 0xe2 },
		{ .addr = 0x1163d0, .byte = 0xbf },
		{ .addr = 0x1163d1, .byte = 0x56 }
};

static const SST_Transaction extl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1139664, .data = 48982, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_23[] = {
		{ .addr = 0x1ce76c, .byte = 0x48 },
		{ .addr = 0x1ce76d, .byte = 0xc5 },
		{ .addr = 0x1ce76e, .byte = 0x49 },
		{ .addr = 0x1ce76f, .byte = 0xdb },
		{ .addr = 0x1ce770, .byte = 0x50 },
		{ .addr = 0x1ce771, .byte = 0x4b }
};

static const SST_RamByte extl_final_ram_23[] = {
		{ .addr = 0x1ce76c, .byte = 0x48 },
		{ .addr = 0x1ce76d, .byte = 0xc5 },
		{ .addr = 0x1ce76e, .byte = 0x49 },
		{ .addr = 0x1ce76f, .byte = 0xdb },
		{ .addr = 0x1ce770, .byte = 0x50 },
		{ .addr = 0x1ce771, .byte = 0x4b }
};

static const SST_Transaction extl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1894256, .data = 20555, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_24[] = {
		{ .addr = 0xc69a92, .byte = 0x48 },
		{ .addr = 0xc69a93, .byte = 0xc3 },
		{ .addr = 0xc69a94, .byte = 0x20 },
		{ .addr = 0xc69a95, .byte = 0x84 },
		{ .addr = 0xc69a96, .byte = 0x37 },
		{ .addr = 0xc69a97, .byte = 0x3e }
};

static const SST_RamByte extl_final_ram_24[] = {
		{ .addr = 0xc69a92, .byte = 0x48 },
		{ .addr = 0xc69a93, .byte = 0xc3 },
		{ .addr = 0xc69a94, .byte = 0x20 },
		{ .addr = 0xc69a95, .byte = 0x84 },
		{ .addr = 0xc69a96, .byte = 0x37 },
		{ .addr = 0xc69a97, .byte = 0x3e }
};

static const SST_Transaction extl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13015702, .data = 14142, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_25[] = {
		{ .addr = 0xe1cc5c, .byte = 0x48 },
		{ .addr = 0xe1cc5d, .byte = 0xc7 },
		{ .addr = 0xe1cc5e, .byte = 0xa8 },
		{ .addr = 0xe1cc5f, .byte = 0x87 },
		{ .addr = 0xe1cc60, .byte = 0x59 },
		{ .addr = 0xe1cc61, .byte = 0xba }
};

static const SST_RamByte extl_final_ram_25[] = {
		{ .addr = 0xe1cc5c, .byte = 0x48 },
		{ .addr = 0xe1cc5d, .byte = 0xc7 },
		{ .addr = 0xe1cc5e, .byte = 0xa8 },
		{ .addr = 0xe1cc5f, .byte = 0x87 },
		{ .addr = 0xe1cc60, .byte = 0x59 },
		{ .addr = 0xe1cc61, .byte = 0xba }
};

static const SST_Transaction extl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14797920, .data = 22970, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_26[] = {
		{ .addr = 0xde7dd0, .byte = 0x48 },
		{ .addr = 0xde7dd1, .byte = 0xc1 },
		{ .addr = 0xde7dd2, .byte = 0x00 },
		{ .addr = 0xde7dd3, .byte = 0x97 },
		{ .addr = 0xde7dd4, .byte = 0xe2 },
		{ .addr = 0xde7dd5, .byte = 0xb7 }
};

static const SST_RamByte extl_final_ram_26[] = {
		{ .addr = 0xde7dd0, .byte = 0x48 },
		{ .addr = 0xde7dd1, .byte = 0xc1 },
		{ .addr = 0xde7dd2, .byte = 0x00 },
		{ .addr = 0xde7dd3, .byte = 0x97 },
		{ .addr = 0xde7dd4, .byte = 0xe2 },
		{ .addr = 0xde7dd5, .byte = 0xb7 }
};

static const SST_Transaction extl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14581204, .data = 58039, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_27[] = {
		{ .addr = 0xf1c5f4, .byte = 0x48 },
		{ .addr = 0xf1c5f5, .byte = 0xc4 },
		{ .addr = 0xf1c5f6, .byte = 0xa8 },
		{ .addr = 0xf1c5f7, .byte = 0x6b },
		{ .addr = 0xf1c5f8, .byte = 0xe9 },
		{ .addr = 0xf1c5f9, .byte = 0x23 }
};

static const SST_RamByte extl_final_ram_27[] = {
		{ .addr = 0xf1c5f4, .byte = 0x48 },
		{ .addr = 0xf1c5f5, .byte = 0xc4 },
		{ .addr = 0xf1c5f6, .byte = 0xa8 },
		{ .addr = 0xf1c5f7, .byte = 0x6b },
		{ .addr = 0xf1c5f8, .byte = 0xe9 },
		{ .addr = 0xf1c5f9, .byte = 0x23 }
};

static const SST_Transaction extl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15844856, .data = 59683, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_28[] = {
		{ .addr = 0xe415c6, .byte = 0x48 },
		{ .addr = 0xe415c7, .byte = 0xc2 },
		{ .addr = 0xe415c8, .byte = 0xce },
		{ .addr = 0xe415c9, .byte = 0x7e },
		{ .addr = 0xe415ca, .byte = 0x5c },
		{ .addr = 0xe415cb, .byte = 0xcd }
};

static const SST_RamByte extl_final_ram_28[] = {
		{ .addr = 0xe415c6, .byte = 0x48 },
		{ .addr = 0xe415c7, .byte = 0xc2 },
		{ .addr = 0xe415c8, .byte = 0xce },
		{ .addr = 0xe415c9, .byte = 0x7e },
		{ .addr = 0xe415ca, .byte = 0x5c },
		{ .addr = 0xe415cb, .byte = 0xcd }
};

static const SST_Transaction extl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14947786, .data = 23757, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_29[] = {
		{ .addr = 0x51a4d8, .byte = 0x48 },
		{ .addr = 0x51a4d9, .byte = 0xc0 },
		{ .addr = 0x51a4da, .byte = 0xae },
		{ .addr = 0x51a4db, .byte = 0xad },
		{ .addr = 0x51a4dc, .byte = 0x99 },
		{ .addr = 0x51a4dd, .byte = 0x3a }
};

static const SST_RamByte extl_final_ram_29[] = {
		{ .addr = 0x51a4d8, .byte = 0x48 },
		{ .addr = 0x51a4d9, .byte = 0xc0 },
		{ .addr = 0x51a4da, .byte = 0xae },
		{ .addr = 0x51a4db, .byte = 0xad },
		{ .addr = 0x51a4dc, .byte = 0x99 },
		{ .addr = 0x51a4dd, .byte = 0x3a }
};

static const SST_Transaction extl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5350620, .data = 39226, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_30[] = {
		{ .addr = 0xbb0e78, .byte = 0x48 },
		{ .addr = 0xbb0e79, .byte = 0xc2 },
		{ .addr = 0xbb0e7a, .byte = 0xe7 },
		{ .addr = 0xbb0e7b, .byte = 0x10 },
		{ .addr = 0xbb0e7c, .byte = 0x22 },
		{ .addr = 0xbb0e7d, .byte = 0xfa }
};

static const SST_RamByte extl_final_ram_30[] = {
		{ .addr = 0xbb0e78, .byte = 0x48 },
		{ .addr = 0xbb0e79, .byte = 0xc2 },
		{ .addr = 0xbb0e7a, .byte = 0xe7 },
		{ .addr = 0xbb0e7b, .byte = 0x10 },
		{ .addr = 0xbb0e7c, .byte = 0x22 },
		{ .addr = 0xbb0e7d, .byte = 0xfa }
};

static const SST_Transaction extl_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12258940, .data = 8954, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte extl_initial_ram_31[] = {
		{ .addr = 0x980ac2, .byte = 0x48 },
		{ .addr = 0x980ac3, .byte = 0xc0 },
		{ .addr = 0x980ac4, .byte = 0x77 },
		{ .addr = 0x980ac5, .byte = 0xf6 },
		{ .addr = 0x980ac6, .byte = 0x1c },
		{ .addr = 0x980ac7, .byte = 0x43 }
};

static const SST_RamByte extl_final_ram_31[] = {
		{ .addr = 0x980ac2, .byte = 0x48 },
		{ .addr = 0x980ac3, .byte = 0xc0 },
		{ .addr = 0x980ac4, .byte = 0x77 },
		{ .addr = 0x980ac5, .byte = 0xf6 },
		{ .addr = 0x980ac6, .byte = 0x1c },
		{ .addr = 0x980ac7, .byte = 0x43 }
};

static const SST_Transaction extl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9964230, .data = 7235, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 EXT.l D1 48c1",
		.initial = {
			.regs = {
				3374356073, 3553179333, 4069482561, 2194609185, 1355913084, 534074448, 1944028902, 287018475, 2591605451, 4240847349, 678578317, 156686038, 3335927514, 795921348, 3501048240, 2528232, 12326638, 9224, 1009604
			},
			.prefetch0 = 18625,
			.prefetch1 = 39550,
			.ram = extl_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3374356073, 14021, 4069482561, 2194609185, 1355913084, 534074448, 1944028902, 287018475, 2591605451, 4240847349, 678578317, 156686038, 3335927514, 795921348, 3501048240, 2528232, 12326638, 9216, 1009606
			},
			.prefetch0 = 39550,
			.prefetch1 = 12864,
			.ram = extl_final_ram_16,
			.ram_len = 6,
		},
		.transactions = extl_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 EXT.l D4 48c4",
		.initial = {
			.regs = {
				2815723690, 4117774237, 2770255687, 626829259, 2305272345, 2250053296, 3354462058, 1116800990, 4158574223, 2752808030, 166088336, 3402289004, 4102105227, 1172324144, 3195646834, 9870730, 1079104, 1036, 11964048
			},
			.prefetch0 = 18628,
			.prefetch1 = 20539,
			.ram = extl_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2815723690, 4117774237, 2770255687, 626829259, 4294945305, 2250053296, 3354462058, 1116800990, 4158574223, 2752808030, 166088336, 3402289004, 4102105227, 1172324144, 3195646834, 9870730, 1079104, 1032, 11964050
			},
			.prefetch0 = 20539,
			.prefetch1 = 12078,
			.ram = extl_final_ram_17,
			.ram_len = 6,
		},
		.transactions = extl_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 EXT.l D0 48c0",
		.initial = {
			.regs = {
				1880161704, 1919066953, 2937031250, 512221937, 3212276567, 594290912, 983486142, 1879378314, 2105555864, 1675121338, 2619702914, 1057649299, 3645384647, 3907570230, 351462162, 7909320, 16483962, 1031, 3328334
			},
			.prefetch0 = 18624,
			.prefetch1 = 35054,
			.ram = extl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4294966696, 1919066953, 2937031250, 512221937, 3212276567, 594290912, 983486142, 1879378314, 2105555864, 1675121338, 2619702914, 1057649299, 3645384647, 3907570230, 351462162, 7909320, 16483962, 1032, 3328336
			},
			.prefetch0 = 35054,
			.prefetch1 = 63534,
			.ram = extl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = extl_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 EXT.l D0 48c0",
		.initial = {
			.regs = {
				2347728286, 3532073139, 868983114, 2946158502, 3672231912, 31097557, 1712376966, 3831826137, 109062650, 367864659, 4252837199, 2376103981, 1567950013, 2888081924, 1985150713, 9366916, 6943238, 42261, 1398432
			},
			.prefetch0 = 18624,
			.prefetch1 = 58182,
			.ram = extl_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				32158, 3532073139, 868983114, 2946158502, 3672231912, 31097557, 1712376966, 3831826137, 109062650, 367864659, 4252837199, 2376103981, 1567950013, 2888081924, 1985150713, 9366916, 6943238, 42256, 1398434
			},
			.prefetch0 = 58182,
			.prefetch1 = 36432,
			.ram = extl_final_ram_19,
			.ram_len = 6,
		},
		.transactions = extl_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 EXT.l D2 48c2",
		.initial = {
			.regs = {
				4272934438, 2731021083, 617893120, 3909470091, 2235670576, 622577364, 517220566, 1005015488, 1749006599, 1156219107, 1854583474, 3830065752, 1848011415, 2307922792, 2827817299, 12828396, 7717460, 30, 10815906
			},
			.prefetch0 = 18626,
			.prefetch1 = 28506,
			.ram = extl_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4272934438, 2731021083, 19712, 3909470091, 2235670576, 622577364, 517220566, 1005015488, 1749006599, 1156219107, 1854583474, 3830065752, 1848011415, 2307922792, 2827817299, 12828396, 7717460, 16, 10815908
			},
			.prefetch0 = 28506,
			.prefetch1 = 25601,
			.ram = extl_final_ram_20,
			.ram_len = 6,
		},
		.transactions = extl_transactions_20,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "021 EXT.l D7 48c7",
		.initial = {
			.regs = {
				3667980482, 2575269421, 4271511892, 2708328328, 854336324, 4201587393, 4186384800, 1970906255, 2472284246, 1968353150, 3246090093, 3525501618, 1628705899, 258114344, 54998655, 2866712, 49118, 1816, 9001964
			},
			.prefetch0 = 18631,
			.prefetch1 = 25949,
			.ram = extl_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3667980482, 2575269421, 4271511892, 2708328328, 854336324, 4201587393, 4186384800, 4294943887, 2472284246, 1968353150, 3246090093, 3525501618, 1628705899, 258114344, 54998655, 2866712, 49118, 1816, 9001966
			},
			.prefetch0 = 25949,
			.prefetch1 = 10532,
			.ram = extl_final_ram_21,
			.ram_len = 6,
		},
		.transactions = extl_transactions_21,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "022 EXT.l D3 48c3",
		.initial = {
			.regs = {
				3297689984, 255536464, 1181035277, 3703379525, 3615828447, 866345812, 213100791, 2675775334, 2927831885, 4136965630, 682543001, 1179395791, 3752883850, 1747819742, 4028244747, 11291956, 4860032, 1805, 1139664
			},
			.prefetch0 = 18627,
			.prefetch1 = 22242,
			.ram = extl_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3297689984, 255536464, 1181035277, 5701, 3615828447, 866345812, 213100791, 2675775334, 2927831885, 4136965630, 682543001, 1179395791, 3752883850, 1747819742, 4028244747, 11291956, 4860032, 1792, 1139666
			},
			.prefetch0 = 22242,
			.prefetch1 = 48982,
			.ram = extl_final_ram_22,
			.ram_len = 6,
		},
		.transactions = extl_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 EXT.l D5 48c5",
		.initial = {
			.regs = {
				553625119, 1656048100, 2014963477, 3190325013, 592148547, 2604243888, 1600142601, 2347598300, 2939556260, 1053292731, 2044097978, 3312675371, 336869605, 2272825812, 4066391005, 7508832, 12511518, 9989, 1894256
			},
			.prefetch0 = 18629,
			.prefetch1 = 18907,
			.ram = extl_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				553625119, 1656048100, 2014963477, 3190325013, 592148547, 4294941616, 1600142601, 2347598300, 2939556260, 1053292731, 2044097978, 3312675371, 336869605, 2272825812, 4066391005, 7508832, 12511518, 9992, 1894258
			},
			.prefetch0 = 18907,
			.prefetch1 = 20555,
			.ram = extl_final_ram_23,
			.ram_len = 6,
		},
		.transactions = extl_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 EXT.l D3 48c3",
		.initial = {
			.regs = {
				49331769, 3381039914, 40416, 156344387, 2486836806, 2529308755, 1980001813, 1066148326, 2581792150, 3213692354, 2665452507, 1479584578, 2977785243, 1702431872, 115182622, 4310210, 13170640, 1289, 13015702
			},
			.prefetch0 = 18627,
			.prefetch1 = 8324,
			.ram = extl_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				49331769, 3381039914, 40416, 4294942787, 2486836806, 2529308755, 1980001813, 1066148326, 2581792150, 3213692354, 2665452507, 1479584578, 2977785243, 1702431872, 115182622, 4310210, 13170640, 1288, 13015704
			},
			.prefetch0 = 8324,
			.prefetch1 = 14142,
			.ram = extl_final_ram_24,
			.ram_len = 6,
		},
		.transactions = extl_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 EXT.l D7 48c7",
		.initial = {
			.regs = {
				1388843860, 2654380813, 898601033, 29949309, 2359094820, 2229750062, 4184788660, 3673659649, 843281061, 830578740, 3011812212, 1046649694, 23985404, 1885750949, 2754737299, 7591120, 9257096, 41985, 14797920
			},
			.prefetch0 = 18631,
			.prefetch1 = 43143,
			.ram = extl_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1388843860, 2654380813, 898601033, 29949309, 2359094820, 2229750062, 4184788660, 4294940929, 843281061, 830578740, 3011812212, 1046649694, 23985404, 1885750949, 2754737299, 7591120, 9257096, 41992, 14797922
			},
			.prefetch0 = 43143,
			.prefetch1 = 22970,
			.ram = extl_final_ram_25,
			.ram_len = 6,
		},
		.transactions = extl_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 EXT.l D1 48c1",
		.initial = {
			.regs = {
				59084060, 42677931, 3925062276, 851493846, 477582982, 3078213678, 2196487251, 632650383, 1252913388, 4231886603, 3569344373, 1844564906, 610928079, 708668993, 2681737148, 2746592, 16619502, 34584, 14581204
			},
			.prefetch0 = 18625,
			.prefetch1 = 151,
			.ram = extl_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				59084060, 13995, 3925062276, 851493846, 477582982, 3078213678, 2196487251, 632650383, 1252913388, 4231886603, 3569344373, 1844564906, 610928079, 708668993, 2681737148, 2746592, 16619502, 34576, 14581206
			},
			.prefetch0 = 151,
			.prefetch1 = 58039,
			.ram = extl_final_ram_26,
			.ram_len = 6,
		},
		.transactions = extl_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 EXT.l D4 48c4",
		.initial = {
			.regs = {
				1635571394, 364874595, 4116122867, 1014165950, 2352879185, 3355359036, 2489805481, 138006265, 2201600864, 474654143, 4077321093, 66619493, 3314484163, 1805569453, 332477719, 7466028, 2348998, 42247, 15844856
			},
			.prefetch0 = 18628,
			.prefetch1 = 43115,
			.ram = extl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1635571394, 364874595, 4116122867, 1014165950, 5713, 3355359036, 2489805481, 138006265, 2201600864, 474654143, 4077321093, 66619493, 3314484163, 1805569453, 332477719, 7466028, 2348998, 42240, 15844858
			},
			.prefetch0 = 43115,
			.prefetch1 = 59683,
			.ram = extl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = extl_transactions_27,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "028 EXT.l D2 48c2",
		.initial = {
			.regs = {
				3851877207, 43057048, 2471573092, 3972727142, 187609838, 783161361, 3558258415, 3143465813, 3095466526, 1611805902, 3397949083, 3236649559, 3795135619, 2318966373, 4026679794, 11545770, 14631204, 42498, 14947786
			},
			.prefetch0 = 18626,
			.prefetch1 = 52862,
			.ram = extl_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3851877207, 43057048, 13924, 3972727142, 187609838, 783161361, 3558258415, 3143465813, 3095466526, 1611805902, 3397949083, 3236649559, 3795135619, 2318966373, 4026679794, 11545770, 14631204, 42496, 14947788
			},
			.prefetch0 = 52862,
			.prefetch1 = 23757,
			.ram = extl_final_ram_28,
			.ram_len = 6,
		},
		.transactions = extl_transactions_28,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "029 EXT.l D0 48c0",
		.initial = {
			.regs = {
				3864908921, 2937924859, 1882932223, 3537001637, 1430366109, 917042640, 1936183909, 573753062, 177666365, 3199298777, 3197913450, 137736984, 4019674768, 1031174676, 4147530337, 14147614, 4391038, 284, 5350620
			},
			.prefetch0 = 18624,
			.prefetch1 = 44717,
			.ram = extl_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4294956153, 2937924859, 1882932223, 3537001637, 1430366109, 917042640, 1936183909, 573753062, 177666365, 3199298777, 3197913450, 137736984, 4019674768, 1031174676, 4147530337, 14147614, 4391038, 280, 5350622
			},
			.prefetch0 = 44717,
			.prefetch1 = 39226,
			.ram = extl_final_ram_29,
			.ram_len = 6,
		},
		.transactions = extl_transactions_29,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "030 EXT.l D2 48c2",
		.initial = {
			.regs = {
				4217729842, 2340183000, 2739190252, 3218615936, 2873609141, 395390124, 2038154619, 760232000, 717931317, 688484526, 3251322346, 3349463320, 1474108833, 2000686011, 1823699013, 11869248, 6429906, 1045, 12258940
			},
			.prefetch0 = 18626,
			.prefetch1 = 59152,
			.ram = extl_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4217729842, 2340183000, 4294949356, 3218615936, 2873609141, 395390124, 2038154619, 760232000, 717931317, 688484526, 3251322346, 3349463320, 1474108833, 2000686011, 1823699013, 11869248, 6429906, 1048, 12258942
			},
			.prefetch0 = 59152,
			.prefetch1 = 8954,
			.ram = extl_final_ram_30,
			.ram_len = 6,
		},
		.transactions = extl_transactions_30,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "031 EXT.l D0 48c0",
		.initial = {
			.regs = {
				2153289050, 10204208, 2847709693, 946037390, 3094614293, 2056928491, 4013208846, 4143446638, 337736425, 303107763, 309751414, 179452484, 1095012777, 687900645, 1634690411, 10367816, 2994522, 41475, 9964230
			},
			.prefetch0 = 18624,
			.prefetch1 = 30710,
			.ram = extl_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4294939994, 10204208, 2847709693, 946037390, 3094614293, 2056928491, 4013208846, 4143446638, 337736425, 303107763, 309751414, 179452484, 1095012777, 687900645, 1634690411, 10367816, 2994522, 41480, 9964232
			},
			.prefetch0 = 30710,
			.prefetch1 = 7235,
			.ram = extl_final_ram_31,
			.ram_len = 6,
		},
		.transactions = extl_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_EXTL_H */