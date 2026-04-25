#ifndef RBT_ORB_H
#define RBT_ORB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte orb_initial_ram_0[] = {
		{ .addr = 0xf5fb70, .byte = 0x80 },
		{ .addr = 0xf5fb71, .byte = 0x22 },
		{ .addr = 0xf5fb72, .byte = 0x66 },
		{ .addr = 0xf5fb73, .byte = 0xd5 },
		{ .addr = 0x9fbfe4, .byte = 0x15 },
		{ .addr = 0x9fbfe5, .byte = 0xac },
		{ .addr = 0xf5fb74, .byte = 0x04 },
		{ .addr = 0xf5fb75, .byte = 0x95 }
};

static const SST_RamByte orb_final_ram_0[] = {
		{ .addr = 0xf5fb70, .byte = 0x80 },
		{ .addr = 0xf5fb71, .byte = 0x22 },
		{ .addr = 0xf5fb72, .byte = 0x66 },
		{ .addr = 0xf5fb73, .byte = 0xd5 },
		{ .addr = 0x9fbfe4, .byte = 0x15 },
		{ .addr = 0x9fbfe5, .byte = 0xac },
		{ .addr = 0xf5fb74, .byte = 0x04 },
		{ .addr = 0xf5fb75, .byte = 0x95 }
};

static const SST_Transaction orb_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10469348, .data = 172, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16120692, .data = 1173, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_1[] = {
		{ .addr = 0x2bc32c, .byte = 0x82 },
		{ .addr = 0x2bc32d, .byte = 0x03 },
		{ .addr = 0x2bc32e, .byte = 0x1d },
		{ .addr = 0x2bc32f, .byte = 0x14 },
		{ .addr = 0x2bc330, .byte = 0x2e },
		{ .addr = 0x2bc331, .byte = 0xcf }
};

static const SST_RamByte orb_final_ram_1[] = {
		{ .addr = 0x2bc32c, .byte = 0x82 },
		{ .addr = 0x2bc32d, .byte = 0x03 },
		{ .addr = 0x2bc32e, .byte = 0x1d },
		{ .addr = 0x2bc32f, .byte = 0x14 },
		{ .addr = 0x2bc330, .byte = 0x2e },
		{ .addr = 0x2bc331, .byte = 0xcf }
};

static const SST_Transaction orb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2868016, .data = 11983, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_2[] = {
		{ .addr = 0x7e1920, .byte = 0x82 },
		{ .addr = 0x7e1921, .byte = 0x12 },
		{ .addr = 0x7e1922, .byte = 0xfd },
		{ .addr = 0x7e1923, .byte = 0x34 },
		{ .addr = 0xc38152, .byte = 0x71 },
		{ .addr = 0xc38153, .byte = 0x64 },
		{ .addr = 0x7e1924, .byte = 0xfe },
		{ .addr = 0x7e1925, .byte = 0xfc }
};

static const SST_RamByte orb_final_ram_2[] = {
		{ .addr = 0x7e1920, .byte = 0x82 },
		{ .addr = 0x7e1921, .byte = 0x12 },
		{ .addr = 0x7e1922, .byte = 0xfd },
		{ .addr = 0x7e1923, .byte = 0x34 },
		{ .addr = 0xc38152, .byte = 0x71 },
		{ .addr = 0xc38153, .byte = 0x64 },
		{ .addr = 0x7e1924, .byte = 0xfe },
		{ .addr = 0x7e1925, .byte = 0xfc }
};

static const SST_Transaction orb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12812626, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8263972, .data = 65276, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_3[] = {
		{ .addr = 0x1b7f74, .byte = 0x8b },
		{ .addr = 0x1b7f75, .byte = 0x31 },
		{ .addr = 0x1b7f76, .byte = 0xac },
		{ .addr = 0x1b7f77, .byte = 0x38 },
		{ .addr = 0x1b7f78, .byte = 0x30 },
		{ .addr = 0x1b7f79, .byte = 0x66 },
		{ .addr = 0x812e2e, .byte = 0xff },
		{ .addr = 0x812e2f, .byte = 0xde },
		{ .addr = 0x1b7f7a, .byte = 0x68 },
		{ .addr = 0x1b7f7b, .byte = 0xd6 }
};

static const SST_RamByte orb_final_ram_3[] = {
		{ .addr = 0x1b7f74, .byte = 0x8b },
		{ .addr = 0x1b7f75, .byte = 0x31 },
		{ .addr = 0x1b7f76, .byte = 0xac },
		{ .addr = 0x1b7f77, .byte = 0x38 },
		{ .addr = 0x1b7f78, .byte = 0x30 },
		{ .addr = 0x1b7f79, .byte = 0x66 },
		{ .addr = 0x812e2e, .byte = 0xff },
		{ .addr = 0x812e2f, .byte = 0xde },
		{ .addr = 0x1b7f7a, .byte = 0x68 },
		{ .addr = 0x1b7f7b, .byte = 0xd6 }
};

static const SST_Transaction orb_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1802104, .data = 12390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8465966, .data = 65280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1802106, .data = 26838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8465966, .data = 65280, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_4[] = {
		{ .addr = 0x6e2360, .byte = 0x81 },
		{ .addr = 0x6e2361, .byte = 0x11 },
		{ .addr = 0x6e2362, .byte = 0xa4 },
		{ .addr = 0x6e2363, .byte = 0x25 },
		{ .addr = 0xd3ec56, .byte = 0x08 },
		{ .addr = 0xd3ec57, .byte = 0x91 },
		{ .addr = 0x6e2364, .byte = 0x14 },
		{ .addr = 0x6e2365, .byte = 0xab }
};

static const SST_RamByte orb_final_ram_4[] = {
		{ .addr = 0x6e2360, .byte = 0x81 },
		{ .addr = 0x6e2361, .byte = 0x11 },
		{ .addr = 0x6e2362, .byte = 0xa4 },
		{ .addr = 0x6e2363, .byte = 0x25 },
		{ .addr = 0xd3ec56, .byte = 0xae },
		{ .addr = 0xd3ec57, .byte = 0x91 },
		{ .addr = 0x6e2364, .byte = 0x14 },
		{ .addr = 0x6e2365, .byte = 0xab }
};

static const SST_Transaction orb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13888598, .data = 2048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7218020, .data = 5291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13888598, .data = 44544, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_5[] = {
		{ .addr = 0xea6934, .byte = 0x89 },
		{ .addr = 0xea6935, .byte = 0x13 },
		{ .addr = 0xea6936, .byte = 0x05 },
		{ .addr = 0xea6937, .byte = 0x46 },
		{ .addr = 0x0e59b8, .byte = 0x7d },
		{ .addr = 0x0e59b9, .byte = 0x65 },
		{ .addr = 0xea6938, .byte = 0xdc },
		{ .addr = 0xea6939, .byte = 0xac }
};

static const SST_RamByte orb_final_ram_5[] = {
		{ .addr = 0xea6934, .byte = 0x89 },
		{ .addr = 0xea6935, .byte = 0x13 },
		{ .addr = 0xea6936, .byte = 0x05 },
		{ .addr = 0xea6937, .byte = 0x46 },
		{ .addr = 0x0e59b8, .byte = 0x7f },
		{ .addr = 0x0e59b9, .byte = 0x65 },
		{ .addr = 0xea6938, .byte = 0xdc },
		{ .addr = 0xea6939, .byte = 0xac }
};

static const SST_Transaction orb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 940472, .data = 32000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15362360, .data = 56492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 940472, .data = 32512, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_6[] = {
		{ .addr = 0x02134e, .byte = 0x80 },
		{ .addr = 0x02134f, .byte = 0x3b },
		{ .addr = 0x021350, .byte = 0x60 },
		{ .addr = 0x021351, .byte = 0x1b },
		{ .addr = 0x021352, .byte = 0x56 },
		{ .addr = 0x021353, .byte = 0x88 },
		{ .addr = 0x01e35c, .byte = 0xbf },
		{ .addr = 0x01e35d, .byte = 0x7e },
		{ .addr = 0x021354, .byte = 0xb6 },
		{ .addr = 0x021355, .byte = 0xda }
};

static const SST_RamByte orb_final_ram_6[] = {
		{ .addr = 0x02134e, .byte = 0x80 },
		{ .addr = 0x02134f, .byte = 0x3b },
		{ .addr = 0x021350, .byte = 0x60 },
		{ .addr = 0x021351, .byte = 0x1b },
		{ .addr = 0x021352, .byte = 0x56 },
		{ .addr = 0x021353, .byte = 0x88 },
		{ .addr = 0x01e35c, .byte = 0xbf },
		{ .addr = 0x01e35d, .byte = 0x7e },
		{ .addr = 0x021354, .byte = 0xb6 },
		{ .addr = 0x021355, .byte = 0xda }
};

static const SST_Transaction orb_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 136018, .data = 22152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 123740, .data = 48896, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 136020, .data = 46810, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_7[] = {
		{ .addr = 0x943a52, .byte = 0x8f },
		{ .addr = 0x943a53, .byte = 0x1d },
		{ .addr = 0x943a54, .byte = 0x6a },
		{ .addr = 0x943a55, .byte = 0x72 },
		{ .addr = 0x17ee1c, .byte = 0x50 },
		{ .addr = 0x17ee1d, .byte = 0xfe },
		{ .addr = 0x943a56, .byte = 0x31 },
		{ .addr = 0x943a57, .byte = 0xa3 }
};

static const SST_RamByte orb_final_ram_7[] = {
		{ .addr = 0x943a52, .byte = 0x8f },
		{ .addr = 0x943a53, .byte = 0x1d },
		{ .addr = 0x943a54, .byte = 0x6a },
		{ .addr = 0x943a55, .byte = 0x72 },
		{ .addr = 0x17ee1c, .byte = 0x5d },
		{ .addr = 0x17ee1d, .byte = 0xfe },
		{ .addr = 0x943a56, .byte = 0x31 },
		{ .addr = 0x943a57, .byte = 0xa3 }
};

static const SST_Transaction orb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1568284, .data = 20480, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9714262, .data = 12707, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1568284, .data = 23808, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_8[] = {
		{ .addr = 0xf1b95e, .byte = 0x82 },
		{ .addr = 0xf1b95f, .byte = 0x28 },
		{ .addr = 0xf1b960, .byte = 0xcf },
		{ .addr = 0xf1b961, .byte = 0xa8 },
		{ .addr = 0xf1b962, .byte = 0x5b },
		{ .addr = 0xf1b963, .byte = 0x58 },
		{ .addr = 0xc450c0, .byte = 0x5b },
		{ .addr = 0xc450c1, .byte = 0x86 },
		{ .addr = 0xf1b964, .byte = 0xb2 },
		{ .addr = 0xf1b965, .byte = 0x31 }
};

static const SST_RamByte orb_final_ram_8[] = {
		{ .addr = 0xf1b95e, .byte = 0x82 },
		{ .addr = 0xf1b95f, .byte = 0x28 },
		{ .addr = 0xf1b960, .byte = 0xcf },
		{ .addr = 0xf1b961, .byte = 0xa8 },
		{ .addr = 0xf1b962, .byte = 0x5b },
		{ .addr = 0xf1b963, .byte = 0x58 },
		{ .addr = 0xc450c0, .byte = 0x5b },
		{ .addr = 0xc450c1, .byte = 0x86 },
		{ .addr = 0xf1b964, .byte = 0xb2 },
		{ .addr = 0xf1b965, .byte = 0x31 }
};

static const SST_Transaction orb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15841634, .data = 23384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12865728, .data = 23296, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15841636, .data = 45617, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_9[] = {
		{ .addr = 0x985b8a, .byte = 0x81 },
		{ .addr = 0x985b8b, .byte = 0x14 },
		{ .addr = 0x985b8c, .byte = 0xda },
		{ .addr = 0x985b8d, .byte = 0x1c },
		{ .addr = 0x21e6ca, .byte = 0xe1 },
		{ .addr = 0x21e6cb, .byte = 0x73 },
		{ .addr = 0x985b8e, .byte = 0xd5 },
		{ .addr = 0x985b8f, .byte = 0xa7 }
};

static const SST_RamByte orb_final_ram_9[] = {
		{ .addr = 0x985b8a, .byte = 0x81 },
		{ .addr = 0x985b8b, .byte = 0x14 },
		{ .addr = 0x985b8c, .byte = 0xda },
		{ .addr = 0x985b8d, .byte = 0x1c },
		{ .addr = 0x21e6ca, .byte = 0xf7 },
		{ .addr = 0x21e6cb, .byte = 0x73 },
		{ .addr = 0x985b8e, .byte = 0xd5 },
		{ .addr = 0x985b8f, .byte = 0xa7 }
};

static const SST_Transaction orb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2221770, .data = 57600, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9984910, .data = 54695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2221770, .data = 63232, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_10[] = {
		{ .addr = 0xcb6c52, .byte = 0x86 },
		{ .addr = 0xcb6c53, .byte = 0x2e },
		{ .addr = 0xcb6c54, .byte = 0x59 },
		{ .addr = 0xcb6c55, .byte = 0x5f },
		{ .addr = 0xcb6c56, .byte = 0xc8 },
		{ .addr = 0xcb6c57, .byte = 0xf0 },
		{ .addr = 0xb4ead6, .byte = 0x59 },
		{ .addr = 0xb4ead7, .byte = 0xc8 },
		{ .addr = 0xcb6c58, .byte = 0xc1 },
		{ .addr = 0xcb6c59, .byte = 0x9a }
};

static const SST_RamByte orb_final_ram_10[] = {
		{ .addr = 0xcb6c52, .byte = 0x86 },
		{ .addr = 0xcb6c53, .byte = 0x2e },
		{ .addr = 0xcb6c54, .byte = 0x59 },
		{ .addr = 0xcb6c55, .byte = 0x5f },
		{ .addr = 0xcb6c56, .byte = 0xc8 },
		{ .addr = 0xcb6c57, .byte = 0xf0 },
		{ .addr = 0xb4ead6, .byte = 0x59 },
		{ .addr = 0xb4ead7, .byte = 0xc8 },
		{ .addr = 0xcb6c58, .byte = 0xc1 },
		{ .addr = 0xcb6c59, .byte = 0x9a }
};

static const SST_Transaction orb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13331542, .data = 51440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11856598, .data = 200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13331544, .data = 49562, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_11[] = {
		{ .addr = 0xb13dfe, .byte = 0x84 },
		{ .addr = 0xb13dff, .byte = 0x28 },
		{ .addr = 0xb13e00, .byte = 0x72 },
		{ .addr = 0xb13e01, .byte = 0xf8 },
		{ .addr = 0xb13e02, .byte = 0x43 },
		{ .addr = 0xb13e03, .byte = 0xe2 },
		{ .addr = 0xf9984c, .byte = 0x17 },
		{ .addr = 0xf9984d, .byte = 0xe7 },
		{ .addr = 0xb13e04, .byte = 0x76 },
		{ .addr = 0xb13e05, .byte = 0x94 }
};

static const SST_RamByte orb_final_ram_11[] = {
		{ .addr = 0xb13dfe, .byte = 0x84 },
		{ .addr = 0xb13dff, .byte = 0x28 },
		{ .addr = 0xb13e00, .byte = 0x72 },
		{ .addr = 0xb13e01, .byte = 0xf8 },
		{ .addr = 0xb13e02, .byte = 0x43 },
		{ .addr = 0xb13e03, .byte = 0xe2 },
		{ .addr = 0xf9984c, .byte = 0x17 },
		{ .addr = 0xf9984d, .byte = 0xe7 },
		{ .addr = 0xb13e04, .byte = 0x76 },
		{ .addr = 0xb13e05, .byte = 0x94 }
};

static const SST_Transaction orb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11615746, .data = 17378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16357452, .data = 5888, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11615748, .data = 30356, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_12[] = {
		{ .addr = 0x3222aa, .byte = 0x8a },
		{ .addr = 0x3222ab, .byte = 0x03 },
		{ .addr = 0x3222ac, .byte = 0xcf },
		{ .addr = 0x3222ad, .byte = 0xd7 },
		{ .addr = 0x3222ae, .byte = 0xb4 },
		{ .addr = 0x3222af, .byte = 0x8f }
};

static const SST_RamByte orb_final_ram_12[] = {
		{ .addr = 0x3222aa, .byte = 0x8a },
		{ .addr = 0x3222ab, .byte = 0x03 },
		{ .addr = 0x3222ac, .byte = 0xcf },
		{ .addr = 0x3222ad, .byte = 0xd7 },
		{ .addr = 0x3222ae, .byte = 0xb4 },
		{ .addr = 0x3222af, .byte = 0x8f }
};

static const SST_Transaction orb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3285678, .data = 46223, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_13[] = {
		{ .addr = 0xcca73a, .byte = 0x86 },
		{ .addr = 0xcca73b, .byte = 0x12 },
		{ .addr = 0xcca73c, .byte = 0x06 },
		{ .addr = 0xcca73d, .byte = 0x68 },
		{ .addr = 0xd50b82, .byte = 0x7a },
		{ .addr = 0xd50b83, .byte = 0x53 },
		{ .addr = 0xcca73e, .byte = 0xaf },
		{ .addr = 0xcca73f, .byte = 0xd5 }
};

static const SST_RamByte orb_final_ram_13[] = {
		{ .addr = 0xcca73a, .byte = 0x86 },
		{ .addr = 0xcca73b, .byte = 0x12 },
		{ .addr = 0xcca73c, .byte = 0x06 },
		{ .addr = 0xcca73d, .byte = 0x68 },
		{ .addr = 0xd50b82, .byte = 0x7a },
		{ .addr = 0xd50b83, .byte = 0x53 },
		{ .addr = 0xcca73e, .byte = 0xaf },
		{ .addr = 0xcca73f, .byte = 0xd5 }
};

static const SST_Transaction orb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13962114, .data = 83, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13412158, .data = 45013, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_14[] = {
		{ .addr = 0x07276a, .byte = 0x86 },
		{ .addr = 0x07276b, .byte = 0x14 },
		{ .addr = 0x07276c, .byte = 0x4a },
		{ .addr = 0x07276d, .byte = 0x36 },
		{ .addr = 0xfd6e3a, .byte = 0x57 },
		{ .addr = 0xfd6e3b, .byte = 0xf0 },
		{ .addr = 0x07276e, .byte = 0xd5 },
		{ .addr = 0x07276f, .byte = 0x24 }
};

static const SST_RamByte orb_final_ram_14[] = {
		{ .addr = 0x07276a, .byte = 0x86 },
		{ .addr = 0x07276b, .byte = 0x14 },
		{ .addr = 0x07276c, .byte = 0x4a },
		{ .addr = 0x07276d, .byte = 0x36 },
		{ .addr = 0xfd6e3a, .byte = 0x57 },
		{ .addr = 0xfd6e3b, .byte = 0xf0 },
		{ .addr = 0x07276e, .byte = 0xd5 },
		{ .addr = 0x07276f, .byte = 0x24 }
};

static const SST_Transaction orb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16608826, .data = 22272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 468846, .data = 54564, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_15[] = {
		{ .addr = 0xc7f88a, .byte = 0x8d },
		{ .addr = 0xc7f88b, .byte = 0x31 },
		{ .addr = 0xc7f88c, .byte = 0xa0 },
		{ .addr = 0xc7f88d, .byte = 0xf3 },
		{ .addr = 0xc7f88e, .byte = 0x42 },
		{ .addr = 0xc7f88f, .byte = 0x52 },
		{ .addr = 0xec3e42, .byte = 0xa2 },
		{ .addr = 0xec3e43, .byte = 0x29 },
		{ .addr = 0xc7f890, .byte = 0x3e },
		{ .addr = 0xc7f891, .byte = 0x67 }
};

static const SST_RamByte orb_final_ram_15[] = {
		{ .addr = 0xc7f88a, .byte = 0x8d },
		{ .addr = 0xc7f88b, .byte = 0x31 },
		{ .addr = 0xc7f88c, .byte = 0xa0 },
		{ .addr = 0xc7f88d, .byte = 0xf3 },
		{ .addr = 0xc7f88e, .byte = 0x42 },
		{ .addr = 0xc7f88f, .byte = 0x52 },
		{ .addr = 0xec3e42, .byte = 0xb6 },
		{ .addr = 0xec3e43, .byte = 0x29 },
		{ .addr = 0xc7f890, .byte = 0x3e },
		{ .addr = 0xc7f891, .byte = 0x67 }
};

static const SST_Transaction orb_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13105294, .data = 16978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15482434, .data = 41472, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13105296, .data = 15975, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15482434, .data = 46592, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ORB_TEST_COUNT = 16;
static const SST_TestCase orb[] = {
	{
		.name = "000 OR.b -(A2), D0 8022",
		.initial = {
			.regs = {
				1464886001, 422299933, 2061943005, 2014634987, 1578524256, 28073932, 3805994012, 147848747, 891510178, 3370414180, 1621082086, 3960798794, 2962935417, 2540983209, 3063807864, 15445762, 13322440, 543, 16120692
			},
			.prefetch0 = 32802,
			.prefetch1 = 26325,
			.ram = orb_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1464886013, 422299933, 2061943005, 2014634987, 1578524256, 28073932, 3805994012, 147848747, 891510178, 3370414180, 1621082085, 3960798794, 2962935417, 2540983209, 3063807864, 15445762, 13322440, 536, 16120694
			},
			.prefetch0 = 26325,
			.prefetch1 = 1173,
			.ram = orb_final_ram_0,
			.ram_len = 8,
		},
		.transactions = orb_transactions_0,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "001 OR.b D3, D1 8203",
		.initial = {
			.regs = {
				1651319411, 2119498725, 660358539, 437517659, 1175122783, 4268516259, 602560416, 697887696, 3331017155, 756064101, 628879992, 4164982032, 4017760317, 634519026, 3357704150, 9312770, 13987136, 8984, 2868016
			},
			.prefetch0 = 33283,
			.prefetch1 = 7444,
			.ram = orb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1651319411, 2119498751, 660358539, 437517659, 1175122783, 4268516259, 602560416, 697887696, 3331017155, 756064101, 628879992, 4164982032, 4017760317, 634519026, 3357704150, 9312770, 13987136, 8984, 2868018
			},
			.prefetch0 = 7444,
			.prefetch1 = 11983,
			.ram = orb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = orb_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 OR.b (A2), D1 8212",
		.initial = {
			.regs = {
				2830635655, 860997722, 1647750826, 2331622690, 661645759, 1245047213, 3160196694, 3972029180, 4120208329, 599697505, 3921903955, 2340740990, 917139807, 535735754, 2881353778, 8580692, 1369914, 41754, 8263972
			},
			.prefetch0 = 33298,
			.prefetch1 = 64820,
			.ram = orb_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2830635655, 860997758, 1647750826, 2331622690, 661645759, 1245047213, 3160196694, 3972029180, 4120208329, 599697505, 3921903955, 2340740990, 917139807, 535735754, 2881353778, 8580692, 1369914, 41744, 8263974
			},
			.prefetch0 = 64820,
			.prefetch1 = 65276,
			.ram = orb_final_ram_2,
			.ram_len = 8,
		},
		.transactions = orb_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 OR.b D5, (d8, A1, Xn) 8b31",
		.initial = {
			.regs = {
				3896448381, 1482923597, 915165923, 4204876357, 2285541960, 1521974145, 2277964627, 743902355, 2340538344, 767124611, 2949106035, 3688181467, 3645854171, 2727606522, 3724758536, 15431798, 11601942, 41491, 1802104
			},
			.prefetch0 = 35633,
			.prefetch1 = 44088,
			.ram = orb_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3896448381, 1482923597, 915165923, 4204876357, 2285541960, 1521974145, 2277964627, 743902355, 2340538344, 767124611, 2949106035, 3688181467, 3645854171, 2727606522, 3724758536, 15431798, 11601942, 41496, 1802108
			},
			.prefetch0 = 12390,
			.prefetch1 = 26838,
			.ram = orb_final_ram_3,
			.ram_len = 10,
		},
		.transactions = orb_transactions_3,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "004 OR.b D0, (A1) 8111",
		.initial = {
			.regs = {
				2959207078, 1320099344, 4001253373, 504323071, 2774360768, 1948101987, 1575266710, 1496959599, 509535614, 1221848150, 2359839359, 3144100255, 3508256194, 3732554015, 3487334636, 991960, 1165866, 9751, 7218020
			},
			.prefetch0 = 33041,
			.prefetch1 = 42021,
			.ram = orb_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2959207078, 1320099344, 4001253373, 504323071, 2774360768, 1948101987, 1575266710, 1496959599, 509535614, 1221848150, 2359839359, 3144100255, 3508256194, 3732554015, 3487334636, 991960, 1165866, 9752, 7218022
			},
			.prefetch0 = 42021,
			.prefetch1 = 5291,
			.ram = orb_final_ram_4,
			.ram_len = 8,
		},
		.transactions = orb_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 OR.b D4, (A3) 8913",
		.initial = {
			.regs = {
				2593190689, 764744611, 2400446251, 2493914802, 874638379, 564459689, 1151465821, 1133302507, 2623571648, 2580397026, 2733573533, 4279130552, 827985536, 1126797201, 1638189308, 13665936, 11564514, 42774, 15362360
			},
			.prefetch0 = 35091,
			.prefetch1 = 1350,
			.ram = orb_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2593190689, 764744611, 2400446251, 2493914802, 874638379, 564459689, 1151465821, 1133302507, 2623571648, 2580397026, 2733573533, 4279130552, 827985536, 1126797201, 1638189308, 13665936, 11564514, 42768, 15362362
			},
			.prefetch0 = 1350,
			.prefetch1 = 56492,
			.ram = orb_final_ram_5,
			.ram_len = 8,
		},
		.transactions = orb_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 OR.b (d8, PC, Xn), D0 803b",
		.initial = {
			.regs = {
				3816690501, 2739434442, 893291824, 408264794, 3536972921, 1528047571, 2789724145, 2229185124, 541369046, 2127190997, 3580064203, 1369828546, 1047741214, 3854547583, 4216898610, 1438982, 9136584, 42247, 136018
			},
			.prefetch0 = 32827,
			.prefetch1 = 24603,
			.ram = orb_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3816690687, 2739434442, 893291824, 408264794, 3536972921, 1528047571, 2789724145, 2229185124, 541369046, 2127190997, 3580064203, 1369828546, 1047741214, 3854547583, 4216898610, 1438982, 9136584, 42248, 136022
			},
			.prefetch0 = 22152,
			.prefetch1 = 46810,
			.ram = orb_final_ram_6,
			.ram_len = 10,
		},
		.transactions = orb_transactions_6,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "007 OR.b D7, (A5)+ 8f1d",
		.initial = {
			.regs = {
				1431900443, 1592920100, 2637217218, 1691047428, 4001627515, 3375946024, 4242664300, 2269351261, 2030413691, 1682505831, 3628136135, 3427494864, 3769180992, 2182606364, 68395337, 4942622, 6106624, 798, 9714262
			},
			.prefetch0 = 36637,
			.prefetch1 = 27250,
			.ram = orb_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1431900443, 1592920100, 2637217218, 1691047428, 4001627515, 3375946024, 4242664300, 2269351261, 2030413691, 1682505831, 3628136135, 3427494864, 3769180992, 2182606365, 68395337, 4942622, 6106624, 784, 9714264
			},
			.prefetch0 = 27250,
			.prefetch1 = 12707,
			.ram = orb_final_ram_7,
			.ram_len = 8,
		},
		.transactions = orb_transactions_7,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "008 OR.b (d16, A0), D1 8228",
		.initial = {
			.regs = {
				802864220, 3351737812, 2085033984, 2969651780, 3642189117, 2651650325, 47716716, 3768533273, 2915336472, 1023471880, 2700103789, 2961132614, 3706339002, 1517132166, 881647186, 13943294, 14348718, 32777, 15841634
			},
			.prefetch0 = 33320,
			.prefetch1 = 53160,
			.ram = orb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				802864220, 3351737823, 2085033984, 2969651780, 3642189117, 2651650325, 47716716, 3768533273, 2915336472, 1023471880, 2700103789, 2961132614, 3706339002, 1517132166, 881647186, 13943294, 14348718, 32776, 15841638
			},
			.prefetch0 = 23384,
			.prefetch1 = 45617,
			.ram = orb_final_ram_8,
			.ram_len = 10,
		},
		.transactions = orb_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 OR.b D0, (A4) 8114",
		.initial = {
			.regs = {
				538252598, 859328831, 3296560443, 1519222757, 2115201032, 1272478812, 3861205809, 3286026832, 332242079, 1083650263, 1949368935, 1918176999, 3290556106, 893424293, 4067336130, 577106, 4776352, 33817, 9984910
			},
			.prefetch0 = 33044,
			.prefetch1 = 55836,
			.ram = orb_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				538252598, 859328831, 3296560443, 1519222757, 2115201032, 1272478812, 3861205809, 3286026832, 332242079, 1083650263, 1949368935, 1918176999, 3290556106, 893424293, 4067336130, 577106, 4776352, 33816, 9984912
			},
			.prefetch0 = 55836,
			.prefetch1 = 54695,
			.ram = orb_final_ram_9,
			.ram_len = 8,
		},
		.transactions = orb_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 OR.b (d16, A6), D3 862e",
		.initial = {
			.regs = {
				2073427721, 4092408658, 572425726, 1229348810, 3083214567, 2015201510, 3729288852, 1157172073, 3576384607, 1944503285, 59115978, 2674731483, 184899379, 540763022, 2343866744, 10187188, 5240074, 8981, 13331542
			},
			.prefetch0 = 34350,
			.prefetch1 = 22879,
			.ram = orb_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2073427721, 4092408658, 572425726, 1229348810, 3083214567, 2015201510, 3729288852, 1157172073, 3576384607, 1944503285, 59115978, 2674731483, 184899379, 540763022, 2343866744, 10187188, 5240074, 8984, 13331546
			},
			.prefetch0 = 51440,
			.prefetch1 = 49562,
			.ram = orb_final_ram_10,
			.ram_len = 10,
		},
		.transactions = orb_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 OR.b (d16, A0), D2 8428",
		.initial = {
			.regs = {
				1194085482, 3178389374, 1741513737, 2717238882, 1631045420, 1578241477, 2016122615, 2136471886, 3841533268, 2223275659, 3727050852, 3781591919, 4001586353, 1232001039, 2069908591, 13153598, 13841652, 33817, 11615746
			},
			.prefetch0 = 33832,
			.prefetch1 = 29432,
			.ram = orb_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1194085482, 3178389374, 1741513759, 2717238882, 1631045420, 1578241477, 2016122615, 2136471886, 3841533268, 2223275659, 3727050852, 3781591919, 4001586353, 1232001039, 2069908591, 13153598, 13841652, 33808, 11615750
			},
			.prefetch0 = 17378,
			.prefetch1 = 30356,
			.ram = orb_final_ram_11,
			.ram_len = 10,
		},
		.transactions = orb_transactions_11,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "012 OR.b D3, D5 8a03",
		.initial = {
			.regs = {
				945326302, 1089716324, 792031820, 1831434704, 4175819394, 581719931, 399235990, 2740411146, 676635219, 940068739, 820993625, 440898379, 4009284556, 1458776454, 935466347, 6146604, 7932028, 42261, 3285678
			},
			.prefetch0 = 35331,
			.prefetch1 = 53207,
			.ram = orb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				945326302, 1089716324, 792031820, 1831434704, 4175819394, 581720059, 399235990, 2740411146, 676635219, 940068739, 820993625, 440898379, 4009284556, 1458776454, 935466347, 6146604, 7932028, 42264, 3285680
			},
			.prefetch0 = 53207,
			.prefetch1 = 46223,
			.ram = orb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = orb_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 OR.b (A2), D3 8612",
		.initial = {
			.regs = {
				869165866, 1416671952, 2342506609, 1750476362, 3222516917, 1043973834, 1515746332, 2038469654, 1136538510, 4288930411, 3738504067, 1415793225, 2018889507, 537780994, 676708045, 1491170, 2625396, 42253, 13412158
			},
			.prefetch0 = 34322,
			.prefetch1 = 1640,
			.ram = orb_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				869165866, 1416671952, 2342506609, 1750476379, 3222516917, 1043973834, 1515746332, 2038469654, 1136538510, 4288930411, 3738504067, 1415793225, 2018889507, 537780994, 676708045, 1491170, 2625396, 42240, 13412160
			},
			.prefetch0 = 1640,
			.prefetch1 = 45013,
			.ram = orb_final_ram_13,
			.ram_len = 8,
		},
		.transactions = orb_transactions_13,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "014 OR.b (A4), D3 8614",
		.initial = {
			.regs = {
				877884429, 4225968337, 3147512960, 2536268423, 3603454338, 3113776294, 2190557410, 819090478, 4121378222, 3210750486, 2843625126, 3362275817, 2818403898, 2386911699, 3261870364, 4504504, 6539232, 8193, 468846
			},
			.prefetch0 = 34324,
			.prefetch1 = 18998,
			.ram = orb_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				877884429, 4225968337, 3147512960, 2536268503, 3603454338, 3113776294, 2190557410, 819090478, 4121378222, 3210750486, 2843625126, 3362275817, 2818403898, 2386911699, 3261870364, 4504504, 6539232, 8200, 468848
			},
			.prefetch0 = 18998,
			.prefetch1 = 54564,
			.ram = orb_final_ram_14,
			.ram_len = 8,
		},
		.transactions = orb_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 OR.b D6, (d8, A1, Xn) 8d31",
		.initial = {
			.regs = {
				320094756, 3257004118, 876994043, 1194953657, 3447000069, 2624522299, 143543956, 3737941113, 3797811814, 1944854686, 2622430641, 1576422971, 1619938293, 601088699, 4204755420, 16554184, 7827676, 34564, 13105294
			},
			.prefetch0 = 36145,
			.prefetch1 = 41203,
			.ram = orb_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				320094756, 3257004118, 876994043, 1194953657, 3447000069, 2624522299, 143543956, 3737941113, 3797811814, 1944854686, 2622430641, 1576422971, 1619938293, 601088699, 4204755420, 16554184, 7827676, 34568, 13105298
			},
			.prefetch0 = 16978,
			.prefetch1 = 15975,
			.ram = orb_final_ram_15,
			.ram_len = 10,
		},
		.transactions = orb_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_ORB_H */