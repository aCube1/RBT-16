#ifndef RBT_DIVS_H
#define RBT_DIVS_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte divs_initial_ram_0[] = {
		{ .addr = 0x0fbd4c, .byte = 0x87 },
		{ .addr = 0x0fbd4d, .byte = 0xf5 },
		{ .addr = 0x0fbd4e, .byte = 0x07 },
		{ .addr = 0x0fbd4f, .byte = 0xfb },
		{ .addr = 0x0fbd50, .byte = 0x6c },
		{ .addr = 0x0fbd51, .byte = 0x85 },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0x323a78, .byte = 0x71 },
		{ .addr = 0x323a79, .byte = 0x26 },
		{ .addr = 0x323a7a, .byte = 0x1a },
		{ .addr = 0x323a7b, .byte = 0x6a }
};

static const SST_RamByte divs_final_ram_0[] = {
		{ .addr = 0x0fbd4c, .byte = 0x87 },
		{ .addr = 0x0fbd4d, .byte = 0xf5 },
		{ .addr = 0x0fbd4e, .byte = 0x07 },
		{ .addr = 0x0fbd4f, .byte = 0xfb },
		{ .addr = 0x0fbd50, .byte = 0x6c },
		{ .addr = 0x0fbd51, .byte = 0x85 },
		{ .addr = 0x32fe7a, .byte = 0xbd },
		{ .addr = 0x32fe7b, .byte = 0x4e },
		{ .addr = 0x32fe76, .byte = 0xa7 },
		{ .addr = 0x32fe77, .byte = 0x09 },
		{ .addr = 0x32fe78, .byte = 0x00 },
		{ .addr = 0x32fe79, .byte = 0x0f },
		{ .addr = 0x32fe74, .byte = 0x87 },
		{ .addr = 0x32fe75, .byte = 0xf5 },
		{ .addr = 0x32fe72, .byte = 0x76 },
		{ .addr = 0x32fe73, .byte = 0xbd },
		{ .addr = 0x32fe6e, .byte = 0x87 },
		{ .addr = 0x32fe6f, .byte = 0xf5 },
		{ .addr = 0x32fe70, .byte = 0x7a },
		{ .addr = 0x32fe71, .byte = 0x6f },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0x323a78, .byte = 0x71 },
		{ .addr = 0x323a79, .byte = 0x26 },
		{ .addr = 0x323a7a, .byte = 0x1a },
		{ .addr = 0x323a7b, .byte = 0x6a }
};

static const SST_Transaction divs_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1031504, .data = 27781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7304892, .data = 34896, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3341946, .data = 48462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3341942, .data = 42761, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3341944, .data = 15, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3341940, .data = 34805, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3341938, .data = 30397, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3341934, .data = 34805, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3341936, .data = 31343, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3291768, .data = 28966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3291770, .data = 6762, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_1[] = {
		{ .addr = 0x2eb9c8, .byte = 0x85 },
		{ .addr = 0x2eb9c9, .byte = 0xf7 },
		{ .addr = 0x2eb9ca, .byte = 0x31 },
		{ .addr = 0x2eb9cb, .byte = 0xcf },
		{ .addr = 0x2eb9cc, .byte = 0x8b },
		{ .addr = 0x2eb9cd, .byte = 0xe8 },
		{ .addr = 0x00000c, .byte = 0x7a },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0xe1 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0xdae182, .byte = 0x1c },
		{ .addr = 0xdae183, .byte = 0xe3 },
		{ .addr = 0xdae184, .byte = 0xa3 },
		{ .addr = 0xdae185, .byte = 0xef }
};

static const SST_RamByte divs_final_ram_1[] = {
		{ .addr = 0x2eb9c8, .byte = 0x85 },
		{ .addr = 0x2eb9c9, .byte = 0xf7 },
		{ .addr = 0x2eb9ca, .byte = 0x31 },
		{ .addr = 0x2eb9cb, .byte = 0xcf },
		{ .addr = 0x2eb9cc, .byte = 0x8b },
		{ .addr = 0x2eb9cd, .byte = 0xe8 },
		{ .addr = 0x51b012, .byte = 0xb9 },
		{ .addr = 0x51b013, .byte = 0xca },
		{ .addr = 0x51b00e, .byte = 0x23 },
		{ .addr = 0x51b00f, .byte = 0x08 },
		{ .addr = 0x51b010, .byte = 0x00 },
		{ .addr = 0x51b011, .byte = 0x2e },
		{ .addr = 0x51b00c, .byte = 0x85 },
		{ .addr = 0x51b00d, .byte = 0xf7 },
		{ .addr = 0x51b00a, .byte = 0x80 },
		{ .addr = 0x51b00b, .byte = 0xc1 },
		{ .addr = 0x51b006, .byte = 0x85 },
		{ .addr = 0x51b007, .byte = 0xf5 },
		{ .addr = 0x51b008, .byte = 0x00 },
		{ .addr = 0x51b009, .byte = 0x51 },
		{ .addr = 0x00000c, .byte = 0x7a },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0xe1 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0xdae182, .byte = 0x1c },
		{ .addr = 0xdae183, .byte = 0xe3 },
		{ .addr = 0xdae184, .byte = 0xa3 },
		{ .addr = 0xdae185, .byte = 0xef }
};

static const SST_Transaction divs_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3062220, .data = 35816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5341376, .data = 5590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5353490, .data = 47562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5353486, .data = 8968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5353488, .data = 46, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5353484, .data = 34295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5353482, .data = 32961, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5353478, .data = 34293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5353480, .data = 81, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14344578, .data = 7395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14344580, .data = 41967, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_2[] = {
		{ .addr = 0x84e8ee, .byte = 0x87 },
		{ .addr = 0x84e8ef, .byte = 0xd0 },
		{ .addr = 0x84e8f0, .byte = 0xb8 },
		{ .addr = 0x84e8f1, .byte = 0x23 },
		{ .addr = 0xc8643e, .byte = 0x8b },
		{ .addr = 0xc8643f, .byte = 0x97 },
		{ .addr = 0x84e8f2, .byte = 0x73 },
		{ .addr = 0x84e8f3, .byte = 0x1d }
};

static const SST_RamByte divs_final_ram_2[] = {
		{ .addr = 0x84e8ee, .byte = 0x87 },
		{ .addr = 0x84e8ef, .byte = 0xd0 },
		{ .addr = 0x84e8f0, .byte = 0xb8 },
		{ .addr = 0x84e8f1, .byte = 0x23 },
		{ .addr = 0xc8643e, .byte = 0x8b },
		{ .addr = 0xc8643f, .byte = 0x97 },
		{ .addr = 0x84e8f2, .byte = 0x73 },
		{ .addr = 0x84e8f3, .byte = 0x1d }
};

static const SST_Transaction divs_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13132862, .data = 35735, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 136 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8710386, .data = 29469, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_3[] = {
		{ .addr = 0x3a118a, .byte = 0x81 },
		{ .addr = 0x3a118b, .byte = 0xf0 },
		{ .addr = 0x3a118c, .byte = 0xbf },
		{ .addr = 0x3a118d, .byte = 0x34 },
		{ .addr = 0x3a118e, .byte = 0x33 },
		{ .addr = 0x3a118f, .byte = 0x07 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0x53 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x12530e, .byte = 0x55 },
		{ .addr = 0x12530f, .byte = 0xe7 },
		{ .addr = 0x125310, .byte = 0x7a },
		{ .addr = 0x125311, .byte = 0xde }
};

static const SST_RamByte divs_final_ram_3[] = {
		{ .addr = 0x3a118a, .byte = 0x81 },
		{ .addr = 0x3a118b, .byte = 0xf0 },
		{ .addr = 0x3a118c, .byte = 0xbf },
		{ .addr = 0x3a118d, .byte = 0x34 },
		{ .addr = 0x3a118e, .byte = 0x33 },
		{ .addr = 0x3a118f, .byte = 0x07 },
		{ .addr = 0x8e8e70, .byte = 0x11 },
		{ .addr = 0x8e8e71, .byte = 0x8c },
		{ .addr = 0x8e8e6c, .byte = 0x24 },
		{ .addr = 0x8e8e6d, .byte = 0x12 },
		{ .addr = 0x8e8e6e, .byte = 0x00 },
		{ .addr = 0x8e8e6f, .byte = 0x3a },
		{ .addr = 0x8e8e6a, .byte = 0x81 },
		{ .addr = 0x8e8e6b, .byte = 0xf0 },
		{ .addr = 0x8e8e68, .byte = 0x2f },
		{ .addr = 0x8e8e69, .byte = 0x29 },
		{ .addr = 0x8e8e64, .byte = 0x81 },
		{ .addr = 0x8e8e65, .byte = 0xf5 },
		{ .addr = 0x8e8e66, .byte = 0x48 },
		{ .addr = 0x8e8e67, .byte = 0x07 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0x53 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x12530e, .byte = 0x55 },
		{ .addr = 0x12530f, .byte = 0xe7 },
		{ .addr = 0x125310, .byte = 0x7a },
		{ .addr = 0x125311, .byte = 0xde }
};

static const SST_Transaction divs_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3805582, .data = 13063, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 470824, .data = 19326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9342576, .data = 4492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9342572, .data = 9234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9342574, .data = 58, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9342570, .data = 33264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9342568, .data = 12073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9342564, .data = 33269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9342566, .data = 18439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1200910, .data = 21991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1200912, .data = 31454, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_4[] = {
		{ .addr = 0x99fe42, .byte = 0x81 },
		{ .addr = 0x99fe43, .byte = 0xe3 },
		{ .addr = 0x99fe44, .byte = 0x2b },
		{ .addr = 0x99fe45, .byte = 0xf0 },
		{ .addr = 0x4bbd7a, .byte = 0x74 },
		{ .addr = 0x4bbd7b, .byte = 0x56 },
		{ .addr = 0x99fe46, .byte = 0x3a },
		{ .addr = 0x99fe47, .byte = 0xb8 }
};

static const SST_RamByte divs_final_ram_4[] = {
		{ .addr = 0x99fe42, .byte = 0x81 },
		{ .addr = 0x99fe43, .byte = 0xe3 },
		{ .addr = 0x99fe44, .byte = 0x2b },
		{ .addr = 0x99fe45, .byte = 0xf0 },
		{ .addr = 0x4bbd7a, .byte = 0x74 },
		{ .addr = 0x4bbd7b, .byte = 0x56 },
		{ .addr = 0x99fe46, .byte = 0x3a },
		{ .addr = 0x99fe47, .byte = 0xb8 }
};

static const SST_Transaction divs_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4963706, .data = 29782, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 126 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10092102, .data = 15032, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_5[] = {
		{ .addr = 0x710088, .byte = 0x8f },
		{ .addr = 0x710089, .byte = 0xe0 },
		{ .addr = 0x71008a, .byte = 0x10 },
		{ .addr = 0x71008b, .byte = 0x70 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0x36 },
		{ .addr = 0xda2136, .byte = 0x3d },
		{ .addr = 0xda2137, .byte = 0x70 },
		{ .addr = 0xda2138, .byte = 0x31 },
		{ .addr = 0xda2139, .byte = 0x4c }
};

static const SST_RamByte divs_final_ram_5[] = {
		{ .addr = 0x710088, .byte = 0x8f },
		{ .addr = 0x710089, .byte = 0xe0 },
		{ .addr = 0x71008a, .byte = 0x10 },
		{ .addr = 0x71008b, .byte = 0x70 },
		{ .addr = 0xd037a6, .byte = 0x00 },
		{ .addr = 0xd037a7, .byte = 0x8c },
		{ .addr = 0xd037a2, .byte = 0x22 },
		{ .addr = 0xd037a3, .byte = 0x1a },
		{ .addr = 0xd037a4, .byte = 0x00 },
		{ .addr = 0xd037a5, .byte = 0x71 },
		{ .addr = 0xd037a0, .byte = 0x8f },
		{ .addr = 0xd037a1, .byte = 0xe0 },
		{ .addr = 0xd0379e, .byte = 0x34 },
		{ .addr = 0xd0379f, .byte = 0x23 },
		{ .addr = 0xd0379a, .byte = 0x8f },
		{ .addr = 0xd0379b, .byte = 0xf5 },
		{ .addr = 0xd0379c, .byte = 0x6e },
		{ .addr = 0xd0379d, .byte = 0x18 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0x36 },
		{ .addr = 0xda2136, .byte = 0x3d },
		{ .addr = 0xda2137, .byte = 0x70 },
		{ .addr = 0xda2138, .byte = 0x31 },
		{ .addr = 0xda2139, .byte = 0x4c }
};

static const SST_Transaction divs_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1586210, .data = 1168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13645734, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13645730, .data = 8730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13645732, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13645728, .data = 36832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13645726, .data = 13347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13645722, .data = 36853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13645724, .data = 28184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14295350, .data = 15728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14295352, .data = 12620, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_6[] = {
		{ .addr = 0x896a60, .byte = 0x8d },
		{ .addr = 0x896a61, .byte = 0xdd },
		{ .addr = 0x896a62, .byte = 0x74 },
		{ .addr = 0x896a63, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0xd5 },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x62 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x40620e, .byte = 0xb4 },
		{ .addr = 0x40620f, .byte = 0x3c },
		{ .addr = 0x406210, .byte = 0xce },
		{ .addr = 0x406211, .byte = 0xe2 }
};

static const SST_RamByte divs_final_ram_6[] = {
		{ .addr = 0x896a60, .byte = 0x8d },
		{ .addr = 0x896a61, .byte = 0xdd },
		{ .addr = 0x896a62, .byte = 0x74 },
		{ .addr = 0x896a63, .byte = 0xf0 },
		{ .addr = 0xd13a6a, .byte = 0x6a },
		{ .addr = 0xd13a6b, .byte = 0x62 },
		{ .addr = 0xd13a66, .byte = 0x07 },
		{ .addr = 0xd13a67, .byte = 0x19 },
		{ .addr = 0xd13a68, .byte = 0x00 },
		{ .addr = 0xd13a69, .byte = 0x89 },
		{ .addr = 0xd13a64, .byte = 0x8d },
		{ .addr = 0xd13a65, .byte = 0xdd },
		{ .addr = 0xd13a62, .byte = 0xdb },
		{ .addr = 0xd13a63, .byte = 0x05 },
		{ .addr = 0xd13a5e, .byte = 0x8d },
		{ .addr = 0xd13a5f, .byte = 0xd1 },
		{ .addr = 0xd13a60, .byte = 0x6a },
		{ .addr = 0xd13a61, .byte = 0xdd },
		{ .addr = 0x00000c, .byte = 0xd5 },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x62 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x40620e, .byte = 0xb4 },
		{ .addr = 0x40620f, .byte = 0x3c },
		{ .addr = 0x406210, .byte = 0xce },
		{ .addr = 0x406211, .byte = 0xe2 }
};

static const SST_Transaction divs_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14539524, .data = 9598, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711978, .data = 27234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711974, .data = 1817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711976, .data = 137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711972, .data = 36317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711970, .data = 56069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711966, .data = 36305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711968, .data = 27357, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4219406, .data = 46140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4219408, .data = 52962, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_7[] = {
		{ .addr = 0x3010ae, .byte = 0x85 },
		{ .addr = 0x3010af, .byte = 0xeb },
		{ .addr = 0x3010b0, .byte = 0x4b },
		{ .addr = 0x3010b1, .byte = 0x15 },
		{ .addr = 0x3010b2, .byte = 0x67 },
		{ .addr = 0x3010b3, .byte = 0x5b },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0x2e },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0x2e65fa, .byte = 0x6a },
		{ .addr = 0x2e65fb, .byte = 0x32 },
		{ .addr = 0x2e65fc, .byte = 0x4e },
		{ .addr = 0x2e65fd, .byte = 0x06 }
};

static const SST_RamByte divs_final_ram_7[] = {
		{ .addr = 0x3010ae, .byte = 0x85 },
		{ .addr = 0x3010af, .byte = 0xeb },
		{ .addr = 0x3010b0, .byte = 0x4b },
		{ .addr = 0x3010b1, .byte = 0x15 },
		{ .addr = 0x3010b2, .byte = 0x67 },
		{ .addr = 0x3010b3, .byte = 0x5b },
		{ .addr = 0xf27810, .byte = 0x10 },
		{ .addr = 0xf27811, .byte = 0xb0 },
		{ .addr = 0xf2780c, .byte = 0x84 },
		{ .addr = 0xf2780d, .byte = 0x1c },
		{ .addr = 0xf2780e, .byte = 0x00 },
		{ .addr = 0xf2780f, .byte = 0x30 },
		{ .addr = 0xf2780a, .byte = 0x85 },
		{ .addr = 0xf2780b, .byte = 0xeb },
		{ .addr = 0xf27808, .byte = 0xb1 },
		{ .addr = 0xf27809, .byte = 0xc1 },
		{ .addr = 0xf27804, .byte = 0x85 },
		{ .addr = 0xf27805, .byte = 0xf1 },
		{ .addr = 0xf27806, .byte = 0x07 },
		{ .addr = 0xf27807, .byte = 0x89 },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0x2e },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0x2e65fa, .byte = 0x6a },
		{ .addr = 0x2e65fb, .byte = 0x32 },
		{ .addr = 0x2e65fc, .byte = 0x4e },
		{ .addr = 0x2e65fd, .byte = 0x06 }
};

static const SST_Transaction divs_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3150002, .data = 26459, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9023936, .data = 8138, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890448, .data = 4272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890444, .data = 33820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890446, .data = 48, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890442, .data = 34283, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890440, .data = 45505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890436, .data = 34289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890438, .data = 1929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3040762, .data = 27186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3040764, .data = 19974, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_8[] = {
		{ .addr = 0xb1d29e, .byte = 0x81 },
		{ .addr = 0xb1d29f, .byte = 0xda },
		{ .addr = 0xb1d2a0, .byte = 0xe5 },
		{ .addr = 0xb1d2a1, .byte = 0x1d },
		{ .addr = 0x00000c, .byte = 0xa8 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xbe },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0xe8be08, .byte = 0x22 },
		{ .addr = 0xe8be09, .byte = 0x33 },
		{ .addr = 0xe8be0a, .byte = 0x4e },
		{ .addr = 0xe8be0b, .byte = 0x99 }
};

static const SST_RamByte divs_final_ram_8[] = {
		{ .addr = 0xb1d29e, .byte = 0x81 },
		{ .addr = 0xb1d29f, .byte = 0xda },
		{ .addr = 0xb1d2a0, .byte = 0xe5 },
		{ .addr = 0xb1d2a1, .byte = 0x1d },
		{ .addr = 0x1cfbdc, .byte = 0xd2 },
		{ .addr = 0x1cfbdd, .byte = 0xa0 },
		{ .addr = 0x1cfbd8, .byte = 0x20 },
		{ .addr = 0x1cfbd9, .byte = 0x1e },
		{ .addr = 0x1cfbda, .byte = 0x00 },
		{ .addr = 0x1cfbdb, .byte = 0xb1 },
		{ .addr = 0x1cfbd6, .byte = 0x81 },
		{ .addr = 0x1cfbd7, .byte = 0xda },
		{ .addr = 0x1cfbd4, .byte = 0xbf },
		{ .addr = 0x1cfbd5, .byte = 0xf1 },
		{ .addr = 0x1cfbd0, .byte = 0x81 },
		{ .addr = 0x1cfbd1, .byte = 0xd5 },
		{ .addr = 0x1cfbd2, .byte = 0x3e },
		{ .addr = 0x1cfbd3, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0xa8 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xbe },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0xe8be08, .byte = 0x22 },
		{ .addr = 0xe8be09, .byte = 0x33 },
		{ .addr = 0xe8be0a, .byte = 0x4e },
		{ .addr = 0xe8be0b, .byte = 0x99 }
};

static const SST_Transaction divs_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16105456, .data = 29443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1899484, .data = 53920, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1899480, .data = 8222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1899482, .data = 177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1899478, .data = 33242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1899476, .data = 49137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1899472, .data = 33237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1899474, .data = 16117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15253000, .data = 8755, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15253002, .data = 20121, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_9[] = {
		{ .addr = 0x81a564, .byte = 0x8b },
		{ .addr = 0x81a565, .byte = 0xdf },
		{ .addr = 0x81a566, .byte = 0x0c },
		{ .addr = 0x81a567, .byte = 0xf9 },
		{ .addr = 0x3ef050, .byte = 0x6a },
		{ .addr = 0x3ef051, .byte = 0xad },
		{ .addr = 0x81a568, .byte = 0xf0 },
		{ .addr = 0x81a569, .byte = 0xff }
};

static const SST_RamByte divs_final_ram_9[] = {
		{ .addr = 0x81a564, .byte = 0x8b },
		{ .addr = 0x81a565, .byte = 0xdf },
		{ .addr = 0x81a566, .byte = 0x0c },
		{ .addr = 0x81a567, .byte = 0xf9 },
		{ .addr = 0x3ef050, .byte = 0x6a },
		{ .addr = 0x3ef051, .byte = 0xad },
		{ .addr = 0x81a568, .byte = 0xf0 },
		{ .addr = 0x81a569, .byte = 0xff }
};

static const SST_Transaction divs_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4124752, .data = 27309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 138 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8496488, .data = 61695, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_10[] = {
		{ .addr = 0x903960, .byte = 0x81 },
		{ .addr = 0x903961, .byte = 0xe0 },
		{ .addr = 0x903962, .byte = 0x6b },
		{ .addr = 0x903963, .byte = 0x11 },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0xd8 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x22d822, .byte = 0x9a },
		{ .addr = 0x22d823, .byte = 0x18 },
		{ .addr = 0x22d824, .byte = 0xbd },
		{ .addr = 0x22d825, .byte = 0xeb }
};

static const SST_RamByte divs_final_ram_10[] = {
		{ .addr = 0x903960, .byte = 0x81 },
		{ .addr = 0x903961, .byte = 0xe0 },
		{ .addr = 0x903962, .byte = 0x6b },
		{ .addr = 0x903963, .byte = 0x11 },
		{ .addr = 0xb32bbc, .byte = 0x39 },
		{ .addr = 0xb32bbd, .byte = 0x64 },
		{ .addr = 0xb32bb8, .byte = 0x20 },
		{ .addr = 0xb32bb9, .byte = 0x01 },
		{ .addr = 0xb32bba, .byte = 0x00 },
		{ .addr = 0xb32bbb, .byte = 0x90 },
		{ .addr = 0xb32bb6, .byte = 0x81 },
		{ .addr = 0xb32bb7, .byte = 0xe0 },
		{ .addr = 0xb32bb4, .byte = 0x9f },
		{ .addr = 0xb32bb5, .byte = 0x11 },
		{ .addr = 0xb32bb0, .byte = 0x81 },
		{ .addr = 0xb32bb1, .byte = 0xf5 },
		{ .addr = 0xb32bb2, .byte = 0xc1 },
		{ .addr = 0xb32bb3, .byte = 0x8f },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0xd8 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x22d822, .byte = 0x9a },
		{ .addr = 0x22d823, .byte = 0x18 },
		{ .addr = 0x22d824, .byte = 0xbd },
		{ .addr = 0x22d825, .byte = 0xeb }
};

static const SST_Transaction divs_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9412368, .data = 52180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742140, .data = 14692, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742136, .data = 8193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742138, .data = 144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742134, .data = 33248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742132, .data = 40721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742128, .data = 33269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11742130, .data = 49551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 55330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2283554, .data = 39448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2283556, .data = 48619, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_11[] = {
		{ .addr = 0x8d8350, .byte = 0x8b },
		{ .addr = 0x8d8351, .byte = 0xd5 },
		{ .addr = 0x8d8352, .byte = 0x61 },
		{ .addr = 0x8d8353, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0x1f },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x77 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0x1a77de, .byte = 0x0e },
		{ .addr = 0x1a77df, .byte = 0x67 },
		{ .addr = 0x1a77e0, .byte = 0x6e },
		{ .addr = 0x1a77e1, .byte = 0xe7 }
};

static const SST_RamByte divs_final_ram_11[] = {
		{ .addr = 0x8d8350, .byte = 0x8b },
		{ .addr = 0x8d8351, .byte = 0xd5 },
		{ .addr = 0x8d8352, .byte = 0x61 },
		{ .addr = 0x8d8353, .byte = 0x00 },
		{ .addr = 0xfc5bf2, .byte = 0x83 },
		{ .addr = 0xfc5bf3, .byte = 0x52 },
		{ .addr = 0xfc5bee, .byte = 0x26 },
		{ .addr = 0xfc5bef, .byte = 0x02 },
		{ .addr = 0xfc5bf0, .byte = 0x00 },
		{ .addr = 0xfc5bf1, .byte = 0x8d },
		{ .addr = 0xfc5bec, .byte = 0x8b },
		{ .addr = 0xfc5bed, .byte = 0xd5 },
		{ .addr = 0xfc5bea, .byte = 0xa5 },
		{ .addr = 0xfc5beb, .byte = 0x83 },
		{ .addr = 0xfc5be6, .byte = 0x8b },
		{ .addr = 0xfc5be7, .byte = 0xd5 },
		{ .addr = 0xfc5be8, .byte = 0xa8 },
		{ .addr = 0xfc5be9, .byte = 0x84 },
		{ .addr = 0x00000c, .byte = 0x1f },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x77 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0x1a77de, .byte = 0x0e },
		{ .addr = 0x1a77df, .byte = 0x67 },
		{ .addr = 0x1a77e0, .byte = 0x6e },
		{ .addr = 0x1a77e1, .byte = 0xe7 }
};

static const SST_Transaction divs_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8693122, .data = 49514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16538610, .data = 33618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16538606, .data = 9730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16538608, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16538604, .data = 35797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16538602, .data = 42371, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16538598, .data = 35797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16538600, .data = 43140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30686, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1734622, .data = 3687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1734624, .data = 28391, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_12[] = {
		{ .addr = 0x7f39b4, .byte = 0x87 },
		{ .addr = 0x7f39b5, .byte = 0xfc },
		{ .addr = 0x7f39b6, .byte = 0x62 },
		{ .addr = 0x7f39b7, .byte = 0xaa },
		{ .addr = 0x7f39b8, .byte = 0x96 },
		{ .addr = 0x7f39b9, .byte = 0xec },
		{ .addr = 0x7f39ba, .byte = 0xbf },
		{ .addr = 0x7f39bb, .byte = 0x77 }
};

static const SST_RamByte divs_final_ram_12[] = {
		{ .addr = 0x7f39b4, .byte = 0x87 },
		{ .addr = 0x7f39b5, .byte = 0xfc },
		{ .addr = 0x7f39b6, .byte = 0x62 },
		{ .addr = 0x7f39b7, .byte = 0xaa },
		{ .addr = 0x7f39b8, .byte = 0x96 },
		{ .addr = 0x7f39b9, .byte = 0xec },
		{ .addr = 0x7f39ba, .byte = 0xbf },
		{ .addr = 0x7f39bb, .byte = 0x77 }
};

static const SST_Transaction divs_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8337848, .data = 38636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8337850, .data = 49015, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_13[] = {
		{ .addr = 0x30f974, .byte = 0x89 },
		{ .addr = 0x30f975, .byte = 0xf8 },
		{ .addr = 0x30f976, .byte = 0x3f },
		{ .addr = 0x30f977, .byte = 0xbc },
		{ .addr = 0x30f978, .byte = 0xeb },
		{ .addr = 0x30f979, .byte = 0x73 },
		{ .addr = 0x003fbc, .byte = 0x27 },
		{ .addr = 0x003fbd, .byte = 0xc6 },
		{ .addr = 0x30f97a, .byte = 0xa0 },
		{ .addr = 0x30f97b, .byte = 0x12 }
};

static const SST_RamByte divs_final_ram_13[] = {
		{ .addr = 0x30f974, .byte = 0x89 },
		{ .addr = 0x30f975, .byte = 0xf8 },
		{ .addr = 0x30f976, .byte = 0x3f },
		{ .addr = 0x30f977, .byte = 0xbc },
		{ .addr = 0x30f978, .byte = 0xeb },
		{ .addr = 0x30f979, .byte = 0x73 },
		{ .addr = 0x003fbc, .byte = 0x27 },
		{ .addr = 0x003fbd, .byte = 0xc6 },
		{ .addr = 0x30f97a, .byte = 0xa0 },
		{ .addr = 0x30f97b, .byte = 0x12 }
};

static const SST_Transaction divs_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3209592, .data = 60275, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16316, .data = 10182, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3209594, .data = 40978, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_14[] = {
		{ .addr = 0xb195e2, .byte = 0x8f },
		{ .addr = 0xb195e3, .byte = 0xdc },
		{ .addr = 0xb195e4, .byte = 0x64 },
		{ .addr = 0xb195e5, .byte = 0x16 },
		{ .addr = 0x3d0ac6, .byte = 0xe3 },
		{ .addr = 0x3d0ac7, .byte = 0x7a },
		{ .addr = 0xb195e6, .byte = 0xcd },
		{ .addr = 0xb195e7, .byte = 0x86 }
};

static const SST_RamByte divs_final_ram_14[] = {
		{ .addr = 0xb195e2, .byte = 0x8f },
		{ .addr = 0xb195e3, .byte = 0xdc },
		{ .addr = 0xb195e4, .byte = 0x64 },
		{ .addr = 0xb195e5, .byte = 0x16 },
		{ .addr = 0x3d0ac6, .byte = 0xe3 },
		{ .addr = 0x3d0ac7, .byte = 0x7a },
		{ .addr = 0xb195e6, .byte = 0xcd },
		{ .addr = 0xb195e7, .byte = 0x86 }
};

static const SST_Transaction divs_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4000454, .data = 58234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11638246, .data = 52614, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_15[] = {
		{ .addr = 0xf51df2, .byte = 0x8f },
		{ .addr = 0xf51df3, .byte = 0xe6 },
		{ .addr = 0xf51df4, .byte = 0xb0 },
		{ .addr = 0xf51df5, .byte = 0x11 },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0x6c },
		{ .addr = 0xd8796c, .byte = 0x13 },
		{ .addr = 0xd8796d, .byte = 0x9f },
		{ .addr = 0xd8796e, .byte = 0x71 },
		{ .addr = 0xd8796f, .byte = 0xee }
};

static const SST_RamByte divs_final_ram_15[] = {
		{ .addr = 0xf51df2, .byte = 0x8f },
		{ .addr = 0xf51df3, .byte = 0xe6 },
		{ .addr = 0xf51df4, .byte = 0xb0 },
		{ .addr = 0xf51df5, .byte = 0x11 },
		{ .addr = 0x193730, .byte = 0x1d },
		{ .addr = 0x193731, .byte = 0xf6 },
		{ .addr = 0x19372c, .byte = 0xa6 },
		{ .addr = 0x19372d, .byte = 0x12 },
		{ .addr = 0x19372e, .byte = 0x00 },
		{ .addr = 0x19372f, .byte = 0xf5 },
		{ .addr = 0x19372a, .byte = 0x8f },
		{ .addr = 0x19372b, .byte = 0xe6 },
		{ .addr = 0x193728, .byte = 0x49 },
		{ .addr = 0x193729, .byte = 0xa1 },
		{ .addr = 0x193724, .byte = 0x8f },
		{ .addr = 0x193725, .byte = 0xf5 },
		{ .addr = 0x193726, .byte = 0x93 },
		{ .addr = 0x193727, .byte = 0x0a },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0x6c },
		{ .addr = 0xd8796c, .byte = 0x13 },
		{ .addr = 0xd8796d, .byte = 0x9f },
		{ .addr = 0xd8796e, .byte = 0x71 },
		{ .addr = 0xd8796f, .byte = 0xee }
};

static const SST_Transaction divs_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 674208, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1652528, .data = 7670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1652524, .data = 42514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1652526, .data = 245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1652522, .data = 36838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1652520, .data = 18849, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1652516, .data = 36853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1652518, .data = 37642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14186860, .data = 5023, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14186862, .data = 29166, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t DIVS_TEST_COUNT = 16;
static const SST_TestCase divs[] = {
	{
		.name = "000 DIVS (d8, A5, Xn), D3 87f5",
		.initial = {
			.regs = {
				29756972, 616991612, 1976999711, 1678834343, 612027647, 4184950574, 3466407835, 1066071521, 2537772812, 2955085712, 610031400, 2987339094, 923989849, 2054121622, 2621212741, 7062182, 3341948, 42761, 1031504
			},
			.prefetch0 = 34805,
			.prefetch1 = 2043,
			.ram = divs_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				29756972, 616991612, 1976999711, 1678834343, 612027647, 4184950574, 3466407835, 1066071521, 2537772812, 2955085712, 610031400, 2987339094, 923989849, 2054121622, 2621212741, 7062182, 3341934, 9993, 3694279292
			},
			.prefetch0 = 28966,
			.prefetch1 = 6762,
			.ram = divs_final_ram_0,
			.ram_len = 28,
		},
		.transactions = divs_transactions_0,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "001 DIVS (d8, A7, Xn), D2 85f7",
		.initial = {
			.regs = {
				1595596929, 3285357498, 3789220682, 2328875230, 599975432, 1404704575, 4156240613, 1588954076, 3381726463, 1250549338, 4219667983, 4209089682, 3712304571, 1677281015, 2733520620, 14006654, 5353492, 8968, 3062220
			},
			.prefetch0 = 34295,
			.prefetch1 = 12751,
			.ram = divs_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1595596929, 3285357498, 3789220682, 2328875230, 599975432, 1404704575, 4156240613, 1588954076, 3381726463, 1250549338, 4219667983, 4209089682, 3712304571, 1677281015, 2733520620, 14006654, 5353478, 8968, 2061164934
			},
			.prefetch0 = 7395,
			.prefetch1 = 41967,
			.ram = divs_final_ram_1,
			.ram_len = 28,
		},
		.transactions = divs_transactions_1,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "002 DIVS (A0), D3 87d0",
		.initial = {
			.regs = {
				3730905521, 4253032358, 1387190809, 1473243411, 2216151219, 2778196963, 2601358124, 2612565091, 3452462142, 3393584991, 1993169350, 2423262333, 338396773, 3585098900, 2290388238, 5801102, 5134644, 32796, 8710386
			},
			.prefetch0 = 34768,
			.prefetch1 = 47139,
			.ram = divs_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3730905521, 4253032358, 1387190809, 1473243411, 2216151219, 2778196963, 2601358124, 2612565091, 3452462142, 3393584991, 1993169350, 2423262333, 338396773, 3585098900, 2290388238, 5801102, 5134644, 32794, 8710388
			},
			.prefetch0 = 47139,
			.prefetch1 = 29469,
			.ram = divs_final_ram_2,
			.ram_len = 8,
		},
		.transactions = divs_transactions_2,
		.transactions_len = 3,
		.lenght = 144,
	},
	{
		.name = "003 DIVS (d8, A0, Xn), D0 81f0",
		.initial = {
			.regs = {
				3193727324, 1264759021, 980936480, 783141281, 2047711502, 2419018340, 1103169245, 4226951488, 2351173041, 2137160950, 398231836, 3152224580, 1050837288, 3579450331, 1849132365, 9510436, 9342578, 9234, 3805582
			},
			.prefetch0 = 33264,
			.prefetch1 = 48948,
			.ram = divs_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3193727324, 1264759021, 980936480, 783141281, 2047711502, 2419018340, 1103169245, 4226951488, 2351173041, 2137160950, 398231836, 3152224580, 1050837288, 3579450331, 1849132365, 9510436, 9342564, 9234, 3390198546
			},
			.prefetch0 = 21991,
			.prefetch1 = 31454,
			.ram = divs_final_ram_3,
			.ram_len = 28,
		},
		.transactions = divs_transactions_3,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "004 DIVS -(A3), D0 81e3",
		.initial = {
			.regs = {
				1638657705, 1410559313, 722737389, 2933652320, 3805186707, 1911386333, 1223216715, 339701469, 4060669414, 2926818730, 2876044521, 1061928316, 2305678651, 2521729636, 4271869442, 13533150, 6411516, 1565, 10092102
			},
			.prefetch0 = 33251,
			.prefetch1 = 11248,
			.ram = divs_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1638657705, 1410559313, 722737389, 2933652320, 3805186707, 1911386333, 1223216715, 339701469, 4060669414, 2926818730, 2876044521, 1061928314, 2305678651, 2521729636, 4271869442, 13533150, 6411516, 1562, 10092104
			},
			.prefetch0 = 11248,
			.prefetch1 = 15032,
			.ram = divs_final_ram_4,
			.ram_len = 8,
		},
		.transactions = divs_transactions_4,
		.transactions_len = 4,
		.lenght = 136,
	},
	{
		.name = "005 DIVS -(A0), D7 8fe0",
		.initial = {
			.regs = {
				1363807490, 374804305, 733288781, 994751815, 605610528, 4111794459, 635258893, 62401765, 1847079973, 1360790771, 1914398673, 3748513157, 3566988953, 2510928286, 3193365311, 2999014, 13645736, 8730, 7405708
			},
			.prefetch0 = 36832,
			.prefetch1 = 4208,
			.ram = divs_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1363807490, 374804305, 733288781, 994751815, 605610528, 4111794459, 635258893, 62401765, 1847079971, 1360790771, 1914398673, 3748513157, 3566988953, 2510928286, 3193365311, 2999014, 13645722, 8730, 3789168954
			},
			.prefetch0 = 15728,
			.prefetch1 = 12620,
			.ram = divs_final_ram_5,
			.ram_len = 26,
		},
		.transactions = divs_transactions_5,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "006 DIVS (A5)+, D6 8ddd",
		.initial = {
			.regs = {
				2122887531, 1076793935, 25433223, 1567963241, 1768401742, 3976645943, 4167384613, 2785111558, 47401630, 850053098, 1646310580, 3111793819, 167606636, 1792924421, 2109501927, 13497506, 13711980, 1817, 9005668
			},
			.prefetch0 = 36317,
			.prefetch1 = 29936,
			.ram = divs_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2122887531, 1076793935, 25433223, 1567963241, 1768401742, 3976645943, 4167384613, 2785111558, 47401630, 850053098, 1646310580, 3111793819, 167606636, 1792924423, 2109501927, 13497506, 13711966, 10009, 3577766418
			},
			.prefetch0 = 46140,
			.prefetch1 = 52962,
			.ram = divs_final_ram_6,
			.ram_len = 26,
		},
		.transactions = divs_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 DIVS (d16, A3), D2 85eb",
		.initial = {
			.regs = {
				2831768779, 3462683079, 25517504, 4031159282, 614167966, 2116144746, 2193908099, 1388947059, 1308726395, 3540845678, 1198468866, 126445228, 339837743, 356679819, 3135979622, 13092398, 15890450, 33820, 3150002
			},
			.prefetch0 = 34283,
			.prefetch1 = 19221,
			.ram = divs_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2831768779, 3462683079, 25517504, 4031159282, 614167966, 2116144746, 2193908099, 1388947059, 1308726395, 3540845678, 1198468866, 126445228, 339837743, 356679819, 3135979622, 13092398, 15890436, 9244, 1328440830
			},
			.prefetch0 = 27186,
			.prefetch1 = 19974,
			.ram = divs_final_ram_7,
			.ram_len = 28,
		},
		.transactions = divs_transactions_7,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "008 DIVS (A2)+, D0 81da",
		.initial = {
			.regs = {
				410955405, 2418804279, 1048326078, 1753078933, 2524402299, 453364525, 3449712478, 2546366952, 3798288639, 2067330664, 1056292849, 4294354770, 789437087, 849307714, 3621441776, 5883950, 1899486, 8222, 11653794
			},
			.prefetch0 = 33242,
			.prefetch1 = 58653,
			.ram = divs_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				410955405, 2418804279, 1048326078, 1753078933, 2524402299, 453364525, 3449712478, 2546366952, 3798288639, 2067330664, 1056292851, 4294354770, 789437087, 849307714, 3621441776, 5883950, 1899472, 8222, 2833825292
			},
			.prefetch0 = 8755,
			.prefetch1 = 20121,
			.ram = divs_final_ram_8,
			.ram_len = 26,
		},
		.transactions = divs_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 DIVS (A7)+, D5 8bdf",
		.initial = {
			.regs = {
				2562527747, 1131912375, 3315112108, 4123366417, 1501988035, 838973264, 2427120746, 1239721482, 3535418833, 4135055238, 737512704, 1779339787, 909224407, 3374404596, 3687092281, 3404988, 4124752, 41487, 8496488
			},
			.prefetch0 = 35807,
			.prefetch1 = 3321,
			.ram = divs_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2562527747, 1131912375, 3315112108, 4123366417, 1501988035, 883128321, 2427120746, 1239721482, 3535418833, 4135055238, 737512704, 1779339787, 909224407, 3374404596, 3687092281, 3404988, 4124754, 41472, 8496490
			},
			.prefetch0 = 3321,
			.prefetch1 = 61695,
			.ram = divs_final_ram_9,
			.ram_len = 8,
		},
		.transactions = divs_transactions_9,
		.transactions_len = 3,
		.lenght = 146,
	},
	{
		.name = "010 DIVS -(A0), D0 81e0",
		.initial = {
			.regs = {
				1614097619, 764524828, 3401012792, 1151142162, 1338171034, 1142106865, 2523458165, 1451344514, 3247415059, 152213080, 3612277239, 3087874063, 2961720200, 1775758444, 4257583302, 10433856, 11742142, 8193, 9451876
			},
			.prefetch0 = 33248,
			.prefetch1 = 27409,
			.ram = divs_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1614097619, 764524828, 3401012792, 1151142162, 1338171034, 1142106865, 2523458165, 1451344514, 3247415057, 152213080, 3612277239, 3087874063, 2961720200, 1775758444, 4257583302, 10433856, 11742128, 8193, 1260574758
			},
			.prefetch0 = 39448,
			.prefetch1 = 48619,
			.ram = divs_final_ram_10,
			.ram_len = 26,
		},
		.transactions = divs_transactions_10,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "011 DIVS (A5), D5 8bd5",
		.initial = {
			.regs = {
				1305894673, 2294980097, 3127163234, 3912129299, 1689461757, 1025837452, 1380266757, 3591832427, 4139530250, 3479500719, 2120918721, 2893352563, 3942373500, 2827265411, 1540301733, 16531356, 16538612, 9730, 9274196
			},
			.prefetch0 = 35797,
			.prefetch1 = 24832,
			.ram = divs_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1305894673, 2294980097, 3127163234, 3912129299, 1689461757, 1025837452, 1380266757, 3591832427, 4139530250, 3479500719, 2120918721, 2893352563, 3942373500, 2827265411, 1540301733, 16531356, 16538598, 9730, 521828322
			},
			.prefetch0 = 3687,
			.prefetch1 = 28391,
			.ram = divs_final_ram_11,
			.ram_len = 26,
		},
		.transactions = divs_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 DIVS #, D3 87fc",
		.initial = {
			.regs = {
				1524752961, 1844708059, 3638302403, 2266250615, 2573224944, 597781585, 1193976245, 1460445798, 3085159043, 1351652348, 2948102478, 3824246067, 4263514948, 1475969002, 3571335857, 7781048, 6068838, 9738, 8337848
			},
			.prefetch0 = 34812,
			.prefetch1 = 25258,
			.ram = divs_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1524752961, 1844708059, 3638302403, 2266250615, 2573224944, 597781585, 1193976245, 1460445798, 3085159043, 1351652348, 2948102478, 3824246067, 4263514948, 1475969002, 3571335857, 7781048, 6068838, 9738, 8337852
			},
			.prefetch0 = 38636,
			.prefetch1 = 49015,
			.ram = divs_final_ram_12,
			.ram_len = 8,
		},
		.transactions = divs_transactions_12,
		.transactions_len = 3,
		.lenght = 22,
	},
	{
		.name = "013 DIVS (xxx).w, D4 89f8",
		.initial = {
			.regs = {
				2719661420, 1242649922, 1661083336, 990201769, 2678498413, 29657883, 525311044, 2072456868, 3338237748, 746331797, 3812038464, 2280527745, 1020392243, 1667229168, 4283152460, 13430740, 8936144, 1537, 3209592
			},
			.prefetch0 = 35320,
			.prefetch1 = 16316,
			.ram = divs_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2719661420, 1242649922, 1661083336, 990201769, 2678498413, 29657883, 525311044, 2072456868, 3338237748, 746331797, 3812038464, 2280527745, 1020392243, 1667229168, 4283152460, 13430740, 8936144, 1546, 3209596
			},
			.prefetch0 = 60275,
			.prefetch1 = 40978,
			.ram = divs_final_ram_13,
			.ram_len = 10,
		},
		.transactions = divs_transactions_13,
		.transactions_len = 4,
		.lenght = 26,
	},
	{
		.name = "014 DIVS (A4)+, D7 8fdc",
		.initial = {
			.regs = {
				3260598493, 3942045030, 4241249347, 2314592776, 1500808121, 389778283, 570203892, 491772229, 2919740921, 2727596098, 2238346734, 1534674315, 2856127174, 903821365, 3624599162, 10188866, 10291036, 40971, 11638246
			},
			.prefetch0 = 36828,
			.prefetch1 = 25622,
			.ram = divs_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3260598493, 3942045030, 4241249347, 2314592776, 1500808121, 389778283, 570203892, 491772229, 2919740921, 2727596098, 2238346734, 1534674315, 2856127176, 903821365, 3624599162, 10188866, 10291036, 40970, 11638248
			},
			.prefetch0 = 25622,
			.prefetch1 = 52614,
			.ram = divs_final_ram_14,
			.ram_len = 8,
		},
		.transactions = divs_transactions_14,
		.transactions_len = 3,
		.lenght = 20,
	},
	{
		.name = "015 DIVS -(A6), D7 8fe6",
		.initial = {
			.regs = {
				48614558, 3678431515, 3983303511, 875652471, 1336445004, 1317197034, 2863189636, 323232026, 2129900429, 666208153, 3956803669, 3551503406, 3417388879, 197215315, 2466924963, 1938, 1652530, 42514, 16063990
			},
			.prefetch0 = 36838,
			.prefetch1 = 45073,
			.ram = divs_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				48614558, 3678431515, 3983303511, 875652471, 1336445004, 1317197034, 2863189636, 323232026, 2129900429, 666208153, 3956803669, 3551503406, 3417388879, 197215315, 2466924961, 1938, 1652516, 9746, 1423473008
			},
			.prefetch0 = 5023,
			.prefetch1 = 29166,
			.ram = divs_final_ram_15,
			.ram_len = 26,
		},
		.transactions = divs_transactions_15,
		.transactions_len = 15,
		.lenght = 60,
	},
};

#endif /* RBT_DIVS_H */