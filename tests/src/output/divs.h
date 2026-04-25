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

static const SST_RamByte divs_initial_ram_16[] = {
		{ .addr = 0xdc1e8a, .byte = 0x89 },
		{ .addr = 0xdc1e8b, .byte = 0xfb },
		{ .addr = 0xdc1e8c, .byte = 0xa7 },
		{ .addr = 0xdc1e8d, .byte = 0xb9 },
		{ .addr = 0xdc1e8e, .byte = 0xf0 },
		{ .addr = 0xdc1e8f, .byte = 0x8b },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x0a21be, .byte = 0xef },
		{ .addr = 0x0a21bf, .byte = 0xbf },
		{ .addr = 0x0a21c0, .byte = 0x28 },
		{ .addr = 0x0a21c1, .byte = 0x1e }
};

static const SST_RamByte divs_final_ram_16[] = {
		{ .addr = 0xdc1e8a, .byte = 0x89 },
		{ .addr = 0xdc1e8b, .byte = 0xfb },
		{ .addr = 0xdc1e8c, .byte = 0xa7 },
		{ .addr = 0xdc1e8d, .byte = 0xb9 },
		{ .addr = 0xdc1e8e, .byte = 0xf0 },
		{ .addr = 0xdc1e8f, .byte = 0x8b },
		{ .addr = 0x57b218, .byte = 0x1e },
		{ .addr = 0x57b219, .byte = 0x8c },
		{ .addr = 0x57b214, .byte = 0x82 },
		{ .addr = 0x57b215, .byte = 0x03 },
		{ .addr = 0x57b216, .byte = 0x00 },
		{ .addr = 0x57b217, .byte = 0xdc },
		{ .addr = 0x57b212, .byte = 0x89 },
		{ .addr = 0x57b213, .byte = 0xfb },
		{ .addr = 0x57b210, .byte = 0xc5 },
		{ .addr = 0x57b211, .byte = 0x3b },
		{ .addr = 0x57b20c, .byte = 0x89 },
		{ .addr = 0x57b20d, .byte = 0xf2 },
		{ .addr = 0x57b20e, .byte = 0x00 },
		{ .addr = 0x57b20f, .byte = 0xdb },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0x0a },
		{ .addr = 0x00000e, .byte = 0x21 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x0a21be, .byte = 0xef },
		{ .addr = 0x0a21bf, .byte = 0xbf },
		{ .addr = 0x0a21c0, .byte = 0x28 },
		{ .addr = 0x0a21c1, .byte = 0x1e }
};

static const SST_Transaction divs_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14425742, .data = 61579, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14402874, .data = 31612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5747224, .data = 7820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5747220, .data = 33283, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5747222, .data = 220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5747218, .data = 35323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5747216, .data = 50491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5747212, .data = 35314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5747214, .data = 219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 26634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 663998, .data = 61375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 664000, .data = 10270, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_17[] = {
		{ .addr = 0x572182, .byte = 0x8b },
		{ .addr = 0x572183, .byte = 0xe8 },
		{ .addr = 0x572184, .byte = 0xe1 },
		{ .addr = 0x572185, .byte = 0xea },
		{ .addr = 0x572186, .byte = 0xa8 },
		{ .addr = 0x572187, .byte = 0xc5 },
		{ .addr = 0x00000c, .byte = 0x2f },
		{ .addr = 0x00000d, .byte = 0x36 },
		{ .addr = 0x00000e, .byte = 0x1c },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x361cd2, .byte = 0xe0 },
		{ .addr = 0x361cd3, .byte = 0x67 },
		{ .addr = 0x361cd4, .byte = 0x30 },
		{ .addr = 0x361cd5, .byte = 0x78 }
};

static const SST_RamByte divs_final_ram_17[] = {
		{ .addr = 0x572182, .byte = 0x8b },
		{ .addr = 0x572183, .byte = 0xe8 },
		{ .addr = 0x572184, .byte = 0xe1 },
		{ .addr = 0x572185, .byte = 0xea },
		{ .addr = 0x572186, .byte = 0xa8 },
		{ .addr = 0x572187, .byte = 0xc5 },
		{ .addr = 0x599b52, .byte = 0x21 },
		{ .addr = 0x599b53, .byte = 0x84 },
		{ .addr = 0x599b4e, .byte = 0x27 },
		{ .addr = 0x599b4f, .byte = 0x0d },
		{ .addr = 0x599b50, .byte = 0x00 },
		{ .addr = 0x599b51, .byte = 0x57 },
		{ .addr = 0x599b4c, .byte = 0x8b },
		{ .addr = 0x599b4d, .byte = 0xe8 },
		{ .addr = 0x599b4a, .byte = 0xed },
		{ .addr = 0x599b4b, .byte = 0x43 },
		{ .addr = 0x599b46, .byte = 0x8b },
		{ .addr = 0x599b47, .byte = 0xf5 },
		{ .addr = 0x599b48, .byte = 0x28 },
		{ .addr = 0x599b49, .byte = 0x50 },
		{ .addr = 0x00000c, .byte = 0x2f },
		{ .addr = 0x00000d, .byte = 0x36 },
		{ .addr = 0x00000e, .byte = 0x1c },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x361cd2, .byte = 0xe0 },
		{ .addr = 0x361cd3, .byte = 0x67 },
		{ .addr = 0x361cd4, .byte = 0x30 },
		{ .addr = 0x361cd5, .byte = 0x78 }
};

static const SST_Transaction divs_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5710214, .data = 43205, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5303618, .data = 18268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5872466, .data = 8580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5872462, .data = 9997, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5872464, .data = 87, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5872460, .data = 35816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5872458, .data = 60739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5872454, .data = 35829, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5872456, .data = 10320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 12086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3546322, .data = 57447, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3546324, .data = 12408, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_18[] = {
		{ .addr = 0x0ffed6, .byte = 0x89 },
		{ .addr = 0x0ffed7, .byte = 0xd7 },
		{ .addr = 0x0ffed8, .byte = 0xee },
		{ .addr = 0x0ffed9, .byte = 0x77 },
		{ .addr = 0x55f5f8, .byte = 0x90 },
		{ .addr = 0x55f5f9, .byte = 0xef },
		{ .addr = 0x0ffeda, .byte = 0xe6 },
		{ .addr = 0x0ffedb, .byte = 0x73 }
};

static const SST_RamByte divs_final_ram_18[] = {
		{ .addr = 0x0ffed6, .byte = 0x89 },
		{ .addr = 0x0ffed7, .byte = 0xd7 },
		{ .addr = 0x0ffed8, .byte = 0xee },
		{ .addr = 0x0ffed9, .byte = 0x77 },
		{ .addr = 0x55f5f8, .byte = 0x90 },
		{ .addr = 0x55f5f9, .byte = 0xef },
		{ .addr = 0x0ffeda, .byte = 0xe6 },
		{ .addr = 0x0ffedb, .byte = 0x73 }
};

static const SST_Transaction divs_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5633528, .data = 37103, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 140 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1048282, .data = 58995, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_19[] = {
		{ .addr = 0xdfed3a, .byte = 0x83 },
		{ .addr = 0xdfed3b, .byte = 0xd3 },
		{ .addr = 0xdfed3c, .byte = 0xc5 },
		{ .addr = 0xdfed3d, .byte = 0x2e },
		{ .addr = 0x00000c, .byte = 0x8c },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xc7 },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0xd8c72a, .byte = 0xa5 },
		{ .addr = 0xd8c72b, .byte = 0x4c },
		{ .addr = 0xd8c72c, .byte = 0xd9 },
		{ .addr = 0xd8c72d, .byte = 0x80 }
};

static const SST_RamByte divs_final_ram_19[] = {
		{ .addr = 0xdfed3a, .byte = 0x83 },
		{ .addr = 0xdfed3b, .byte = 0xd3 },
		{ .addr = 0xdfed3c, .byte = 0xc5 },
		{ .addr = 0xdfed3d, .byte = 0x2e },
		{ .addr = 0x74eefc, .byte = 0xed },
		{ .addr = 0x74eefd, .byte = 0x3c },
		{ .addr = 0x74eef8, .byte = 0x03 },
		{ .addr = 0x74eef9, .byte = 0x01 },
		{ .addr = 0x74eefa, .byte = 0x00 },
		{ .addr = 0x74eefb, .byte = 0xdf },
		{ .addr = 0x74eef6, .byte = 0x83 },
		{ .addr = 0x74eef7, .byte = 0xd3 },
		{ .addr = 0x74eef4, .byte = 0x96 },
		{ .addr = 0x74eef5, .byte = 0x1d },
		{ .addr = 0x74eef0, .byte = 0x83 },
		{ .addr = 0x74eef1, .byte = 0xd1 },
		{ .addr = 0x74eef2, .byte = 0x42 },
		{ .addr = 0x74eef3, .byte = 0xfb },
		{ .addr = 0x00000c, .byte = 0x8c },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0xc7 },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0xd8c72a, .byte = 0xa5 },
		{ .addr = 0xd8c72b, .byte = 0x4c },
		{ .addr = 0xd8c72c, .byte = 0xd9 },
		{ .addr = 0xd8c72d, .byte = 0x80 }
};

static const SST_Transaction divs_transactions_19[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16487964, .data = 7764, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7663356, .data = 60732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7663352, .data = 769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7663354, .data = 223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7663350, .data = 33747, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7663348, .data = 38429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7663344, .data = 33745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7663346, .data = 17147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 36056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14206762, .data = 42316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14206764, .data = 55680, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_20[] = {
		{ .addr = 0x0f1ddc, .byte = 0x81 },
		{ .addr = 0x0f1ddd, .byte = 0xdf },
		{ .addr = 0x0f1dde, .byte = 0x3a },
		{ .addr = 0x0f1ddf, .byte = 0x54 },
		{ .addr = 0x483f36, .byte = 0x39 },
		{ .addr = 0x483f37, .byte = 0x92 },
		{ .addr = 0x0f1de0, .byte = 0x01 },
		{ .addr = 0x0f1de1, .byte = 0xba }
};

static const SST_RamByte divs_final_ram_20[] = {
		{ .addr = 0x0f1ddc, .byte = 0x81 },
		{ .addr = 0x0f1ddd, .byte = 0xdf },
		{ .addr = 0x0f1dde, .byte = 0x3a },
		{ .addr = 0x0f1ddf, .byte = 0x54 },
		{ .addr = 0x483f36, .byte = 0x39 },
		{ .addr = 0x483f37, .byte = 0x92 },
		{ .addr = 0x0f1de0, .byte = 0x01 },
		{ .addr = 0x0f1de1, .byte = 0xba }
};

static const SST_Transaction divs_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4734774, .data = 14738, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 138 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 990688, .data = 442, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_21[] = {
		{ .addr = 0x667db4, .byte = 0x87 },
		{ .addr = 0x667db5, .byte = 0xed },
		{ .addr = 0x667db6, .byte = 0xf0 },
		{ .addr = 0x667db7, .byte = 0xc9 },
		{ .addr = 0x667db8, .byte = 0x92 },
		{ .addr = 0x667db9, .byte = 0x85 },
		{ .addr = 0x101838, .byte = 0x4f },
		{ .addr = 0x101839, .byte = 0x5a },
		{ .addr = 0x667dba, .byte = 0x07 },
		{ .addr = 0x667dbb, .byte = 0x6e }
};

static const SST_RamByte divs_final_ram_21[] = {
		{ .addr = 0x667db4, .byte = 0x87 },
		{ .addr = 0x667db5, .byte = 0xed },
		{ .addr = 0x667db6, .byte = 0xf0 },
		{ .addr = 0x667db7, .byte = 0xc9 },
		{ .addr = 0x667db8, .byte = 0x92 },
		{ .addr = 0x667db9, .byte = 0x85 },
		{ .addr = 0x101838, .byte = 0x4f },
		{ .addr = 0x101839, .byte = 0x5a },
		{ .addr = 0x667dba, .byte = 0x07 },
		{ .addr = 0x667dbb, .byte = 0x6e }
};

static const SST_Transaction divs_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6716856, .data = 37509, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1054776, .data = 20314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6716858, .data = 1902, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_22[] = {
		{ .addr = 0x8c6806, .byte = 0x83 },
		{ .addr = 0x8c6807, .byte = 0xec },
		{ .addr = 0x8c6808, .byte = 0x7f },
		{ .addr = 0x8c6809, .byte = 0x87 },
		{ .addr = 0x8c680a, .byte = 0x47 },
		{ .addr = 0x8c680b, .byte = 0x10 },
		{ .addr = 0x00000c, .byte = 0xe4 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0x5c807c, .byte = 0x41 },
		{ .addr = 0x5c807d, .byte = 0x31 },
		{ .addr = 0x5c807e, .byte = 0x84 },
		{ .addr = 0x5c807f, .byte = 0x77 }
};

static const SST_RamByte divs_final_ram_22[] = {
		{ .addr = 0x8c6806, .byte = 0x83 },
		{ .addr = 0x8c6807, .byte = 0xec },
		{ .addr = 0x8c6808, .byte = 0x7f },
		{ .addr = 0x8c6809, .byte = 0x87 },
		{ .addr = 0x8c680a, .byte = 0x47 },
		{ .addr = 0x8c680b, .byte = 0x10 },
		{ .addr = 0xb190ec, .byte = 0x68 },
		{ .addr = 0xb190ed, .byte = 0x08 },
		{ .addr = 0xb190e8, .byte = 0xa3 },
		{ .addr = 0xb190e9, .byte = 0x00 },
		{ .addr = 0xb190ea, .byte = 0x00 },
		{ .addr = 0xb190eb, .byte = 0x8c },
		{ .addr = 0xb190e6, .byte = 0x83 },
		{ .addr = 0xb190e7, .byte = 0xec },
		{ .addr = 0xb190e4, .byte = 0x36 },
		{ .addr = 0xb190e5, .byte = 0x71 },
		{ .addr = 0xb190e0, .byte = 0x83 },
		{ .addr = 0xb190e1, .byte = 0xf5 },
		{ .addr = 0xb190e2, .byte = 0x10 },
		{ .addr = 0xb190e3, .byte = 0x02 },
		{ .addr = 0x00000c, .byte = 0xe4 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0x5c807c, .byte = 0x41 },
		{ .addr = 0x5c807d, .byte = 0x31 },
		{ .addr = 0x5c807e, .byte = 0x84 },
		{ .addr = 0x5c807f, .byte = 0x77 }
};

static const SST_Transaction divs_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9201674, .data = 18192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 145008, .data = 48932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11636972, .data = 26632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11636968, .data = 41728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11636970, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11636966, .data = 33772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11636964, .data = 13937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11636960, .data = 33781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11636962, .data = 4098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6062204, .data = 16689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6062206, .data = 33911, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_23[] = {
		{ .addr = 0xf8d2ce, .byte = 0x81 },
		{ .addr = 0xf8d2cf, .byte = 0xd7 },
		{ .addr = 0xf8d2d0, .byte = 0x3f },
		{ .addr = 0xf8d2d1, .byte = 0xa3 },
		{ .addr = 0x7b540e, .byte = 0x08 },
		{ .addr = 0x7b540f, .byte = 0x2d },
		{ .addr = 0xf8d2d2, .byte = 0x49 },
		{ .addr = 0xf8d2d3, .byte = 0xb5 }
};

static const SST_RamByte divs_final_ram_23[] = {
		{ .addr = 0xf8d2ce, .byte = 0x81 },
		{ .addr = 0xf8d2cf, .byte = 0xd7 },
		{ .addr = 0xf8d2d0, .byte = 0x3f },
		{ .addr = 0xf8d2d1, .byte = 0xa3 },
		{ .addr = 0x7b540e, .byte = 0x08 },
		{ .addr = 0x7b540f, .byte = 0x2d },
		{ .addr = 0xf8d2d2, .byte = 0x49 },
		{ .addr = 0xf8d2d3, .byte = 0xb5 }
};

static const SST_Transaction divs_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8082446, .data = 2093, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16306898, .data = 18869, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_24[] = {
		{ .addr = 0x810994, .byte = 0x87 },
		{ .addr = 0x810995, .byte = 0xf0 },
		{ .addr = 0x810996, .byte = 0xde },
		{ .addr = 0x810997, .byte = 0xd0 },
		{ .addr = 0x810998, .byte = 0xaf },
		{ .addr = 0x810999, .byte = 0xe0 },
		{ .addr = 0x00000c, .byte = 0x8a },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x3d },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x7e3d08, .byte = 0x16 },
		{ .addr = 0x7e3d09, .byte = 0x8f },
		{ .addr = 0x7e3d0a, .byte = 0x53 },
		{ .addr = 0x7e3d0b, .byte = 0x6b }
};

static const SST_RamByte divs_final_ram_24[] = {
		{ .addr = 0x810994, .byte = 0x87 },
		{ .addr = 0x810995, .byte = 0xf0 },
		{ .addr = 0x810996, .byte = 0xde },
		{ .addr = 0x810997, .byte = 0xd0 },
		{ .addr = 0x810998, .byte = 0xaf },
		{ .addr = 0x810999, .byte = 0xe0 },
		{ .addr = 0xf243b8, .byte = 0x09 },
		{ .addr = 0xf243b9, .byte = 0x96 },
		{ .addr = 0xf243b4, .byte = 0x82 },
		{ .addr = 0xf243b5, .byte = 0x14 },
		{ .addr = 0xf243b6, .byte = 0x00 },
		{ .addr = 0xf243b7, .byte = 0x81 },
		{ .addr = 0xf243b2, .byte = 0x87 },
		{ .addr = 0xf243b3, .byte = 0xf0 },
		{ .addr = 0xf243b0, .byte = 0x00 },
		{ .addr = 0xf243b1, .byte = 0xe3 },
		{ .addr = 0xf243ac, .byte = 0x87 },
		{ .addr = 0xf243ad, .byte = 0xf1 },
		{ .addr = 0xf243ae, .byte = 0xe6 },
		{ .addr = 0xf243af, .byte = 0xc5 },
		{ .addr = 0x00000c, .byte = 0x8a },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x3d },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x7e3d08, .byte = 0x16 },
		{ .addr = 0x7e3d09, .byte = 0x8f },
		{ .addr = 0x7e3d0a, .byte = 0x53 },
		{ .addr = 0x7e3d0b, .byte = 0x6b }
};

static const SST_Transaction divs_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8456600, .data = 45024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12910818, .data = 29610, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15877048, .data = 2454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15877044, .data = 33300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15877046, .data = 129, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15877042, .data = 34800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15877040, .data = 227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15877036, .data = 34801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15877038, .data = 59077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8273160, .data = 5775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8273162, .data = 21355, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_25[] = {
		{ .addr = 0x472532, .byte = 0x83 },
		{ .addr = 0x472533, .byte = 0xfb },
		{ .addr = 0x472534, .byte = 0x0b },
		{ .addr = 0x472535, .byte = 0x83 },
		{ .addr = 0x472536, .byte = 0xd2 },
		{ .addr = 0x472537, .byte = 0xb1 },
		{ .addr = 0x8bda90, .byte = 0x2e },
		{ .addr = 0x8bda91, .byte = 0x8b },
		{ .addr = 0x472538, .byte = 0xaa },
		{ .addr = 0x472539, .byte = 0x0f }
};

static const SST_RamByte divs_final_ram_25[] = {
		{ .addr = 0x472532, .byte = 0x83 },
		{ .addr = 0x472533, .byte = 0xfb },
		{ .addr = 0x472534, .byte = 0x0b },
		{ .addr = 0x472535, .byte = 0x83 },
		{ .addr = 0x472536, .byte = 0xd2 },
		{ .addr = 0x472537, .byte = 0xb1 },
		{ .addr = 0x8bda90, .byte = 0x2e },
		{ .addr = 0x8bda91, .byte = 0x8b },
		{ .addr = 0x472538, .byte = 0xaa },
		{ .addr = 0x472539, .byte = 0x0f }
};

static const SST_Transaction divs_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4662582, .data = 53937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9165456, .data = 11915, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4662584, .data = 43535, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_26[] = {
		{ .addr = 0x7cb018, .byte = 0x87 },
		{ .addr = 0x7cb019, .byte = 0xd5 },
		{ .addr = 0x7cb01a, .byte = 0xad },
		{ .addr = 0x7cb01b, .byte = 0x17 },
		{ .addr = 0x35a380, .byte = 0xd0 },
		{ .addr = 0x35a381, .byte = 0xe5 },
		{ .addr = 0x7cb01c, .byte = 0x15 },
		{ .addr = 0x7cb01d, .byte = 0xa4 }
};

static const SST_RamByte divs_final_ram_26[] = {
		{ .addr = 0x7cb018, .byte = 0x87 },
		{ .addr = 0x7cb019, .byte = 0xd5 },
		{ .addr = 0x7cb01a, .byte = 0xad },
		{ .addr = 0x7cb01b, .byte = 0x17 },
		{ .addr = 0x35a380, .byte = 0xd0 },
		{ .addr = 0x35a381, .byte = 0xe5 },
		{ .addr = 0x7cb01c, .byte = 0x15 },
		{ .addr = 0x7cb01d, .byte = 0xa4 }
};

static const SST_Transaction divs_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3515264, .data = 53477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8171548, .data = 5540, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_27[] = {
		{ .addr = 0xe807a6, .byte = 0x87 },
		{ .addr = 0xe807a7, .byte = 0xc5 },
		{ .addr = 0xe807a8, .byte = 0x81 },
		{ .addr = 0xe807a9, .byte = 0x4e },
		{ .addr = 0xe807aa, .byte = 0x7a },
		{ .addr = 0xe807ab, .byte = 0x82 }
};

static const SST_RamByte divs_final_ram_27[] = {
		{ .addr = 0xe807a6, .byte = 0x87 },
		{ .addr = 0xe807a7, .byte = 0xc5 },
		{ .addr = 0xe807a8, .byte = 0x81 },
		{ .addr = 0xe807a9, .byte = 0x4e },
		{ .addr = 0xe807aa, .byte = 0x7a },
		{ .addr = 0xe807ab, .byte = 0x82 }
};

static const SST_Transaction divs_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 12 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15206314, .data = 31362, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_28[] = {
		{ .addr = 0x0da950, .byte = 0x8b },
		{ .addr = 0x0da951, .byte = 0xf6 },
		{ .addr = 0x0da952, .byte = 0x7c },
		{ .addr = 0x0da953, .byte = 0x3c },
		{ .addr = 0x0da954, .byte = 0xd9 },
		{ .addr = 0x0da955, .byte = 0x66 },
		{ .addr = 0x14ac36, .byte = 0xc5 },
		{ .addr = 0x14ac37, .byte = 0xc9 },
		{ .addr = 0x0da956, .byte = 0xd4 },
		{ .addr = 0x0da957, .byte = 0xff }
};

static const SST_RamByte divs_final_ram_28[] = {
		{ .addr = 0x0da950, .byte = 0x8b },
		{ .addr = 0x0da951, .byte = 0xf6 },
		{ .addr = 0x0da952, .byte = 0x7c },
		{ .addr = 0x0da953, .byte = 0x3c },
		{ .addr = 0x0da954, .byte = 0xd9 },
		{ .addr = 0x0da955, .byte = 0x66 },
		{ .addr = 0x14ac36, .byte = 0xc5 },
		{ .addr = 0x14ac37, .byte = 0xc9 },
		{ .addr = 0x0da956, .byte = 0xd4 },
		{ .addr = 0x0da957, .byte = 0xff }
};

static const SST_Transaction divs_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 895316, .data = 55654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1354806, .data = 50633, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 895318, .data = 54527, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_29[] = {
		{ .addr = 0xed4576, .byte = 0x8b },
		{ .addr = 0xed4577, .byte = 0xdf },
		{ .addr = 0xed4578, .byte = 0x45 },
		{ .addr = 0xed4579, .byte = 0x59 },
		{ .addr = 0x3018a0, .byte = 0x46 },
		{ .addr = 0x3018a1, .byte = 0x63 },
		{ .addr = 0xed457a, .byte = 0x2c },
		{ .addr = 0xed457b, .byte = 0xfd }
};

static const SST_RamByte divs_final_ram_29[] = {
		{ .addr = 0xed4576, .byte = 0x8b },
		{ .addr = 0xed4577, .byte = 0xdf },
		{ .addr = 0xed4578, .byte = 0x45 },
		{ .addr = 0xed4579, .byte = 0x59 },
		{ .addr = 0x3018a0, .byte = 0x46 },
		{ .addr = 0x3018a1, .byte = 0x63 },
		{ .addr = 0xed457a, .byte = 0x2c },
		{ .addr = 0xed457b, .byte = 0xfd }
};

static const SST_Transaction divs_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3152032, .data = 18019, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15549818, .data = 11517, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_30[] = {
		{ .addr = 0x77016a, .byte = 0x8f },
		{ .addr = 0x77016b, .byte = 0xf5 },
		{ .addr = 0x77016c, .byte = 0x91 },
		{ .addr = 0x77016d, .byte = 0xc9 },
		{ .addr = 0x77016e, .byte = 0xaf },
		{ .addr = 0x77016f, .byte = 0x9f },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0x8e354e, .byte = 0xba },
		{ .addr = 0x8e354f, .byte = 0x96 },
		{ .addr = 0x8e3550, .byte = 0x28 },
		{ .addr = 0x8e3551, .byte = 0x8e }
};

static const SST_RamByte divs_final_ram_30[] = {
		{ .addr = 0x77016a, .byte = 0x8f },
		{ .addr = 0x77016b, .byte = 0xf5 },
		{ .addr = 0x77016c, .byte = 0x91 },
		{ .addr = 0x77016d, .byte = 0xc9 },
		{ .addr = 0x77016e, .byte = 0xaf },
		{ .addr = 0x77016f, .byte = 0x9f },
		{ .addr = 0x1a25aa, .byte = 0x01 },
		{ .addr = 0x1a25ab, .byte = 0x6c },
		{ .addr = 0x1a25a6, .byte = 0xa5 },
		{ .addr = 0x1a25a7, .byte = 0x16 },
		{ .addr = 0x1a25a8, .byte = 0x00 },
		{ .addr = 0x1a25a9, .byte = 0x77 },
		{ .addr = 0x1a25a4, .byte = 0x8f },
		{ .addr = 0x1a25a5, .byte = 0xf5 },
		{ .addr = 0x1a25a2, .byte = 0x3b },
		{ .addr = 0x1a25a3, .byte = 0xe1 },
		{ .addr = 0x1a259e, .byte = 0x8f },
		{ .addr = 0x1a259f, .byte = 0xf5 },
		{ .addr = 0x1a25a0, .byte = 0x68 },
		{ .addr = 0x1a25a1, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0x8e354e, .byte = 0xba },
		{ .addr = 0x8e354f, .byte = 0x96 },
		{ .addr = 0x8e3550, .byte = 0x28 },
		{ .addr = 0x8e3551, .byte = 0x8e }
};

static const SST_Transaction divs_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7799150, .data = 44959, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10304480, .data = 61571, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1713578, .data = 364, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1713574, .data = 42262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1713576, .data = 119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1713572, .data = 36853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1713570, .data = 15329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1713566, .data = 36853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1713568, .data = 26781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19598, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9319758, .data = 47766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9319760, .data = 10382, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divs_initial_ram_31[] = {
		{ .addr = 0xf05ce2, .byte = 0x81 },
		{ .addr = 0xf05ce3, .byte = 0xc1 },
		{ .addr = 0xf05ce4, .byte = 0x93 },
		{ .addr = 0xf05ce5, .byte = 0x2a },
		{ .addr = 0xf05ce6, .byte = 0xe2 },
		{ .addr = 0xf05ce7, .byte = 0xb6 }
};

static const SST_RamByte divs_final_ram_31[] = {
		{ .addr = 0xf05ce2, .byte = 0x81 },
		{ .addr = 0xf05ce3, .byte = 0xc1 },
		{ .addr = 0xf05ce4, .byte = 0x93 },
		{ .addr = 0xf05ce5, .byte = 0x2a },
		{ .addr = 0xf05ce6, .byte = 0xe2 },
		{ .addr = 0xf05ce7, .byte = 0xb6 }
};

static const SST_Transaction divs_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 14 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15752422, .data = 58038, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 DIVS (d8, PC, Xn), D4 89fb",
		.initial = {
			.regs = {
				35185264, 981516165, 3168198801, 2865545530, 4287724011, 1079227919, 371897205, 3311555474, 1259287710, 16956795, 2000332534, 599648968, 2997582413, 3883769146, 3868831309, 6458816, 5747226, 33283, 14425742
			},
			.prefetch0 = 35323,
			.prefetch1 = 42937,
			.ram = divs_initial_ram_16,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				35185264, 981516165, 3168198801, 2865545530, 4287724011, 1079227919, 371897205, 3311555474, 1259287710, 16956795, 2000332534, 599648968, 2997582413, 3883769146, 3868831309, 6458816, 5747212, 8707, 1745494466
			},
			.prefetch0 = 61375,
			.prefetch1 = 10270,
			.ram = divs_final_ram_16,
			.ram_len = 28,
		},
		.transactions = divs_transactions_16,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "017 DIVS (d16, A0), D5 8be8",
		.initial = {
			.regs = {
				331608919, 3373829344, 425301580, 1503319093, 4085839714, 2373587289, 783099517, 298802554, 676399961, 2749680654, 1955212103, 925628544, 4200244194, 282295020, 1923221224, 13580438, 5872468, 9997, 5710214
			},
			.prefetch0 = 35816,
			.prefetch1 = 57834,
			.ram = divs_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				331608919, 3373829344, 425301580, 1503319093, 4085839714, 2373587289, 783099517, 298802554, 676399961, 2749680654, 1955212103, 925628544, 4200244194, 282295020, 1923221224, 13580438, 5872454, 9997, 792075478
			},
			.prefetch0 = 57447,
			.prefetch1 = 12408,
			.ram = divs_final_ram_17,
			.ram_len = 28,
		},
		.transactions = divs_transactions_17,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "018 DIVS (A7), D4 89d7",
		.initial = {
			.regs = {
				1586735789, 614486632, 1898385873, 2297652156, 4229056802, 3866872177, 203977284, 363348493, 1578629917, 3283730040, 765341233, 633163830, 26334611, 2824586288, 3123075244, 5633528, 12667952, 1798, 1048282
			},
			.prefetch0 = 35287,
			.prefetch1 = 61047,
			.ram = divs_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1586735789, 614486632, 1898385873, 2297652156, 4111468814, 3866872177, 203977284, 363348493, 1578629917, 3283730040, 765341233, 633163830, 26334611, 2824586288, 3123075244, 5633528, 12667952, 1792, 1048284
			},
			.prefetch0 = 61047,
			.prefetch1 = 58995,
			.ram = divs_final_ram_18,
			.ram_len = 8,
		},
		.transactions = divs_transactions_18,
		.transactions_len = 3,
		.lenght = 148,
	},
	{
		.name = "019 DIVS (A3), D1 83d3",
		.initial = {
			.regs = {
				2319679470, 3540999130, 1594918037, 3727660610, 3254193629, 3107222117, 4286013566, 926192817, 1364430222, 3382382566, 3249149840, 1123784221, 1138478484, 591875552, 1480852937, 16294072, 7663358, 769, 14675262
			},
			.prefetch0 = 33747,
			.prefetch1 = 50478,
			.ram = divs_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2319679470, 3540999130, 1594918037, 3727660610, 3254193629, 3107222117, 4286013566, 926192817, 1364430222, 3382382566, 3249149840, 1123784221, 1138478484, 591875552, 1480852937, 16294072, 7663344, 8961, 2363017006
			},
			.prefetch0 = 42316,
			.prefetch1 = 55680,
			.ram = divs_final_ram_19,
			.ram_len = 26,
		},
		.transactions = divs_transactions_19,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "020 DIVS (A7)+, D0 81df",
		.initial = {
			.regs = {
				3716475839, 2171166284, 3751696316, 2697504694, 2689428161, 117415662, 1028826931, 2072760428, 3480875078, 81546357, 1835606637, 2304478551, 3925371180, 3833100737, 1620202983, 4734774, 13967566, 1289, 990688
			},
			.prefetch0 = 33247,
			.prefetch1 = 14932,
			.ram = divs_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3716475839, 2171166284, 3751696316, 2697504694, 2689428161, 117415662, 1028826931, 2072760428, 3480875078, 81546357, 1835606637, 2304478551, 3925371180, 3833100737, 1620202983, 4734776, 13967566, 1290, 990690
			},
			.prefetch0 = 14932,
			.prefetch1 = 442,
			.ram = divs_final_ram_20,
			.ram_len = 8,
		},
		.transactions = divs_transactions_20,
		.transactions_len = 3,
		.lenght = 146,
	},
	{
		.name = "021 DIVS (d16, A5), D3 87ed",
		.initial = {
			.regs = {
				3580560706, 1493896350, 1924673656, 1633686869, 2311337410, 1214524049, 2436634979, 711388648, 1839279408, 3305670638, 1249887918, 2264523939, 124581007, 2148542319, 1968574996, 10761200, 1140852, 42243, 6716856
			},
			.prefetch0 = 34797,
			.prefetch1 = 61641,
			.ram = divs_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3580560706, 1493896350, 1924673656, 1633686869, 2311337410, 1214524049, 2436634979, 711388648, 1839279408, 3305670638, 1249887918, 2264523939, 124581007, 2148542319, 1968574996, 10761200, 1140852, 42250, 6716860
			},
			.prefetch0 = 37509,
			.prefetch1 = 1902,
			.ram = divs_final_ram_21,
			.ram_len = 10,
		},
		.transactions = divs_transactions_21,
		.transactions_len = 4,
		.lenght = 24,
	},
	{
		.name = "022 DIVS (d16, A4), D1 83ec",
		.initial = {
			.regs = {
				1749321795, 2655199444, 974840210, 2206268555, 1751040931, 3467457950, 4266270642, 2338590192, 1868436510, 1107280157, 1561478953, 2920177571, 268547818, 1110734618, 1041490644, 12680054, 11636974, 41728, 9201674
			},
			.prefetch0 = 33772,
			.prefetch1 = 32647,
			.ram = divs_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1749321795, 2655199444, 974840210, 2206268555, 1751040931, 3467457950, 4266270642, 2338590192, 1868436510, 1107280157, 1561478953, 2920177571, 268547818, 1110734618, 1041490644, 12680054, 11636960, 8960, 3831267456
			},
			.prefetch0 = 16689,
			.prefetch1 = 33911,
			.ram = divs_final_ram_22,
			.ram_len = 28,
		},
		.transactions = divs_transactions_22,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "023 DIVS (A7), D0 81d7",
		.initial = {
			.regs = {
				1153352491, 1960910097, 1285070753, 2211133986, 3532208279, 1933524260, 1032448448, 4048999153, 2886006429, 3280435257, 855072140, 1969357213, 1702289652, 3964167180, 3801387984, 8082446, 15374024, 799, 16306898
			},
			.prefetch0 = 33239,
			.prefetch1 = 16291,
			.ram = divs_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1153352491, 1960910097, 1285070753, 2211133986, 3532208279, 1933524260, 1032448448, 4048999153, 2886006429, 3280435257, 855072140, 1969357213, 1702289652, 3964167180, 3801387984, 8082446, 15374024, 794, 16306900
			},
			.prefetch0 = 16291,
			.prefetch1 = 18869,
			.ram = divs_final_ram_23,
			.ram_len = 8,
		},
		.transactions = divs_transactions_23,
		.transactions_len = 3,
		.lenght = 20,
	},
	{
		.name = "024 DIVS (d8, A0, Xn), D3 87f0",
		.initial = {
			.regs = {
				317271891, 1315292037, 1596476229, 2334920100, 1884804754, 4124045384, 437822845, 3288445410, 1416999296, 4120609556, 2039078859, 732946442, 2784886130, 2454671251, 3477306581, 15913606, 15877050, 33300, 8456600
			},
			.prefetch0 = 34800,
			.prefetch1 = 57040,
			.ram = divs_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				317271891, 1315292037, 1596476229, 2334920100, 1884804754, 4124045384, 437822845, 3288445410, 1416999296, 4120609556, 2039078859, 732946442, 2784886130, 2454671251, 3477306581, 15913606, 15877036, 8724, 2323528972
			},
			.prefetch0 = 5775,
			.prefetch1 = 21355,
			.ram = divs_final_ram_24,
			.ram_len = 28,
		},
		.transactions = divs_transactions_24,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "025 DIVS (d8, PC, Xn), D1 83fb",
		.initial = {
			.regs = {
				1229239769, 952590303, 4281505402, 4087942945, 3857925693, 456361805, 479605319, 784854809, 3344463290, 4116891538, 2415866590, 141606027, 2226712675, 3543095802, 3119598715, 7312550, 3229092, 8461, 4662582
			},
			.prefetch0 = 33787,
			.prefetch1 = 2947,
			.ram = divs_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1229239769, 952590303, 4281505402, 4087942945, 3857925693, 456361805, 479605319, 784854809, 3344463290, 4116891538, 2415866590, 141606027, 2226712675, 3543095802, 3119598715, 7312550, 3229092, 8458, 4662586
			},
			.prefetch0 = 53937,
			.prefetch1 = 43535,
			.ram = divs_final_ram_25,
			.ram_len = 10,
		},
		.transactions = divs_transactions_25,
		.transactions_len = 5,
		.lenght = 26,
	},
	{
		.name = "026 DIVS (A5), D3 87d5",
		.initial = {
			.regs = {
				4056815355, 2265412985, 3729558972, 3091098997, 3781507317, 2954910803, 1402236520, 1925187926, 736763942, 1138724802, 1205752451, 1523785103, 3766864144, 1177920384, 3997135199, 4825188, 14219792, 8962, 8171548
			},
			.prefetch0 = 34773,
			.prefetch1 = 44311,
			.ram = divs_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4056815355, 2265412985, 3729558972, 3091098997, 3781507317, 2954910803, 1402236520, 1925187926, 736763942, 1138724802, 1205752451, 1523785103, 3766864144, 1177920384, 3997135199, 4825188, 14219792, 8970, 8171550
			},
			.prefetch0 = 44311,
			.prefetch1 = 5540,
			.ram = divs_final_ram_26,
			.ram_len = 8,
		},
		.transactions = divs_transactions_26,
		.transactions_len = 3,
		.lenght = 22,
	},
	{
		.name = "027 DIVS D5, D3 87c5",
		.initial = {
			.regs = {
				3419149232, 287344928, 3724353600, 2088917455, 3228690693, 1888218752, 3918663035, 2462894256, 3604886504, 3787936896, 4203780648, 399737260, 1162635357, 873439792, 975802608, 15556654, 1054976, 41477, 15206314
			},
			.prefetch0 = 34757,
			.prefetch1 = 33102,
			.ram = divs_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3419149232, 287344928, 3724353600, 2088917455, 3228690693, 1888218752, 3918663035, 2462894256, 3604886504, 3787936896, 4203780648, 399737260, 1162635357, 873439792, 975802608, 15556654, 1054976, 41482, 15206316
			},
			.prefetch0 = 33102,
			.prefetch1 = 31362,
			.ram = divs_final_ram_27,
			.ram_len = 6,
		},
		.transactions = divs_transactions_27,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "028 DIVS (d8, A6, Xn), D5 8bf6",
		.initial = {
			.regs = {
				1829389962, 2789987138, 1981986406, 6538911, 552923688, 2654704446, 989045479, 2126012255, 2327543521, 2441674787, 3587874635, 3253996838, 2501698759, 1151718825, 1666993307, 8379104, 7194018, 790, 895316
			},
			.prefetch0 = 35830,
			.prefetch1 = 31804,
			.ram = divs_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1829389962, 2789987138, 1981986406, 6538911, 552923688, 2654704446, 989045479, 2126012255, 2327543521, 2441674787, 3587874635, 3253996838, 2501698759, 1151718825, 1666993307, 8379104, 7194018, 794, 895320
			},
			.prefetch0 = 55654,
			.prefetch1 = 54527,
			.ram = divs_final_ram_28,
			.ram_len = 10,
		},
		.transactions = divs_transactions_28,
		.transactions_len = 5,
		.lenght = 28,
	},
	{
		.name = "029 DIVS (A7)+, D5 8bdf",
		.initial = {
			.regs = {
				4217124292, 1028686749, 1064341011, 4094305284, 693615395, 1933521238, 1828532160, 3158058785, 2460105445, 632046993, 2388821030, 551591466, 57129859, 2016156087, 420458645, 3152032, 9193974, 33035, 15549818
			},
			.prefetch0 = 35807,
			.prefetch1 = 17753,
			.ram = divs_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4217124292, 1028686749, 1064341011, 4094305284, 693615395, 1933521238, 1828532160, 3158058785, 2460105445, 632046993, 2388821030, 551591466, 57129859, 2016156087, 420458645, 3152034, 9193974, 33034, 15549820
			},
			.prefetch0 = 17753,
			.prefetch1 = 11517,
			.ram = divs_final_ram_29,
			.ram_len = 8,
		},
		.transactions = divs_transactions_29,
		.transactions_len = 3,
		.lenght = 20,
	},
	{
		.name = "030 DIVS (d8, A5, Xn), D7 8ff5",
		.initial = {
			.regs = {
				2277726239, 3265282484, 1441462555, 2118181960, 1215268509, 231632972, 13891673, 2746823957, 2124471812, 387896462, 2462855850, 2218762598, 3946651919, 1755146122, 3763167271, 6126132, 1713580, 42262, 7799150
			},
			.prefetch0 = 36853,
			.prefetch1 = 37321,
			.ram = divs_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2277726239, 3265282484, 1441462555, 2118181960, 1215268509, 231632972, 13891673, 2746823957, 2124471812, 387896462, 2462855850, 2218762598, 3946651919, 1755146122, 3763167271, 6126132, 1713566, 9494, 1284388178
			},
			.prefetch0 = 47766,
			.prefetch1 = 10382,
			.ram = divs_final_ram_30,
			.ram_len = 28,
		},
		.transactions = divs_transactions_30,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "031 DIVS D1, D0 81c1",
		.initial = {
			.regs = {
				2423247787, 2677620856, 2989175055, 2032950634, 1317883186, 3145116616, 1626577810, 655584797, 1321844534, 2044322083, 3225121836, 2394744964, 3455546614, 1784377263, 4107994082, 10911738, 14571962, 772, 15752422
			},
			.prefetch0 = 33217,
			.prefetch1 = 37674,
			.ram = divs_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2423247787, 2677620856, 2989175055, 2032950634, 1317883186, 3145116616, 1626577810, 655584797, 1321844534, 2044322083, 3225121836, 2394744964, 3455546614, 1784377263, 4107994082, 10911738, 14571962, 778, 15752424
			},
			.prefetch0 = 37674,
			.prefetch1 = 58038,
			.ram = divs_final_ram_31,
			.ram_len = 6,
		},
		.transactions = divs_transactions_31,
		.transactions_len = 2,
		.lenght = 18,
	},
};

#endif /* RBT_DIVS_H */