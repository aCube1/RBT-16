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

static const SST_RamByte orb_initial_ram_16[] = {
		{ .addr = 0x2b340e, .byte = 0x80 },
		{ .addr = 0x2b340f, .byte = 0x14 },
		{ .addr = 0x2b3410, .byte = 0x63 },
		{ .addr = 0x2b3411, .byte = 0x38 },
		{ .addr = 0x2c6848, .byte = 0xf2 },
		{ .addr = 0x2c6849, .byte = 0xe6 },
		{ .addr = 0x2b3412, .byte = 0x07 },
		{ .addr = 0x2b3413, .byte = 0x76 }
};

static const SST_RamByte orb_final_ram_16[] = {
		{ .addr = 0x2b340e, .byte = 0x80 },
		{ .addr = 0x2b340f, .byte = 0x14 },
		{ .addr = 0x2b3410, .byte = 0x63 },
		{ .addr = 0x2b3411, .byte = 0x38 },
		{ .addr = 0x2c6848, .byte = 0xf2 },
		{ .addr = 0x2c6849, .byte = 0xe6 },
		{ .addr = 0x2b3412, .byte = 0x07 },
		{ .addr = 0x2b3413, .byte = 0x76 }
};

static const SST_Transaction orb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2910280, .data = 61952, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2831378, .data = 1910, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_17[] = {
		{ .addr = 0xcc0678, .byte = 0x88 },
		{ .addr = 0xcc0679, .byte = 0x2f },
		{ .addr = 0xcc067a, .byte = 0xf9 },
		{ .addr = 0xcc067b, .byte = 0x80 },
		{ .addr = 0xcc067c, .byte = 0xaa },
		{ .addr = 0xcc067d, .byte = 0x44 },
		{ .addr = 0x9d5592, .byte = 0xaf },
		{ .addr = 0x9d5593, .byte = 0x28 },
		{ .addr = 0xcc067e, .byte = 0x47 },
		{ .addr = 0xcc067f, .byte = 0x30 }
};

static const SST_RamByte orb_final_ram_17[] = {
		{ .addr = 0xcc0678, .byte = 0x88 },
		{ .addr = 0xcc0679, .byte = 0x2f },
		{ .addr = 0xcc067a, .byte = 0xf9 },
		{ .addr = 0xcc067b, .byte = 0x80 },
		{ .addr = 0xcc067c, .byte = 0xaa },
		{ .addr = 0xcc067d, .byte = 0x44 },
		{ .addr = 0x9d5592, .byte = 0xaf },
		{ .addr = 0x9d5593, .byte = 0x28 },
		{ .addr = 0xcc067e, .byte = 0x47 },
		{ .addr = 0xcc067f, .byte = 0x30 }
};

static const SST_Transaction orb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13371004, .data = 43588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10311058, .data = 44800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13371006, .data = 18224, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_18[] = {
		{ .addr = 0xdd8574, .byte = 0x88 },
		{ .addr = 0xdd8575, .byte = 0x18 },
		{ .addr = 0xdd8576, .byte = 0x2f },
		{ .addr = 0xdd8577, .byte = 0x76 },
		{ .addr = 0x4d7592, .byte = 0x49 },
		{ .addr = 0x4d7593, .byte = 0x00 },
		{ .addr = 0xdd8578, .byte = 0xf8 },
		{ .addr = 0xdd8579, .byte = 0x88 }
};

static const SST_RamByte orb_final_ram_18[] = {
		{ .addr = 0xdd8574, .byte = 0x88 },
		{ .addr = 0xdd8575, .byte = 0x18 },
		{ .addr = 0xdd8576, .byte = 0x2f },
		{ .addr = 0xdd8577, .byte = 0x76 },
		{ .addr = 0x4d7592, .byte = 0x49 },
		{ .addr = 0x4d7593, .byte = 0x00 },
		{ .addr = 0xdd8578, .byte = 0xf8 },
		{ .addr = 0xdd8579, .byte = 0x88 }
};

static const SST_Transaction orb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5076370, .data = 0, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14517624, .data = 63624, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_19[] = {
		{ .addr = 0xa741cc, .byte = 0x8b },
		{ .addr = 0xa741cd, .byte = 0x21 },
		{ .addr = 0xa741ce, .byte = 0x51 },
		{ .addr = 0xa741cf, .byte = 0x4a },
		{ .addr = 0xe57cb6, .byte = 0x77 },
		{ .addr = 0xe57cb7, .byte = 0x34 },
		{ .addr = 0xa741d0, .byte = 0x8d },
		{ .addr = 0xa741d1, .byte = 0x11 }
};

static const SST_RamByte orb_final_ram_19[] = {
		{ .addr = 0xa741cc, .byte = 0x8b },
		{ .addr = 0xa741cd, .byte = 0x21 },
		{ .addr = 0xa741ce, .byte = 0x51 },
		{ .addr = 0xa741cf, .byte = 0x4a },
		{ .addr = 0xe57cb6, .byte = 0x7f },
		{ .addr = 0xe57cb7, .byte = 0x34 },
		{ .addr = 0xa741d0, .byte = 0x8d },
		{ .addr = 0xa741d1, .byte = 0x11 }
};

static const SST_Transaction orb_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15039670, .data = 30464, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10961360, .data = 36113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15039670, .data = 32512, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_20[] = {
		{ .addr = 0x3c6304, .byte = 0x89 },
		{ .addr = 0x3c6305, .byte = 0x2b },
		{ .addr = 0x3c6306, .byte = 0xfb },
		{ .addr = 0x3c6307, .byte = 0x2a },
		{ .addr = 0x3c6308, .byte = 0x06 },
		{ .addr = 0x3c6309, .byte = 0x9d },
		{ .addr = 0x5d2046, .byte = 0x52 },
		{ .addr = 0x5d2047, .byte = 0x2e },
		{ .addr = 0x3c630a, .byte = 0x1b },
		{ .addr = 0x3c630b, .byte = 0x0d }
};

static const SST_RamByte orb_final_ram_20[] = {
		{ .addr = 0x3c6304, .byte = 0x89 },
		{ .addr = 0x3c6305, .byte = 0x2b },
		{ .addr = 0x3c6306, .byte = 0xfb },
		{ .addr = 0x3c6307, .byte = 0x2a },
		{ .addr = 0x3c6308, .byte = 0x06 },
		{ .addr = 0x3c6309, .byte = 0x9d },
		{ .addr = 0x5d2046, .byte = 0xf3 },
		{ .addr = 0x5d2047, .byte = 0x2e },
		{ .addr = 0x3c630a, .byte = 0x1b },
		{ .addr = 0x3c630b, .byte = 0x0d }
};

static const SST_Transaction orb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3957512, .data = 1693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6103110, .data = 20992, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3957514, .data = 6925, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6103110, .data = 62208, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_21[] = {
		{ .addr = 0x3b43ee, .byte = 0x8d },
		{ .addr = 0x3b43ef, .byte = 0x35 },
		{ .addr = 0x3b43f0, .byte = 0x38 },
		{ .addr = 0x3b43f1, .byte = 0x5a },
		{ .addr = 0x3b43f2, .byte = 0x77 },
		{ .addr = 0x3b43f3, .byte = 0x62 },
		{ .addr = 0x54a3c0, .byte = 0x78 },
		{ .addr = 0x54a3c1, .byte = 0x8c },
		{ .addr = 0x3b43f4, .byte = 0x12 },
		{ .addr = 0x3b43f5, .byte = 0xba }
};

static const SST_RamByte orb_final_ram_21[] = {
		{ .addr = 0x3b43ee, .byte = 0x8d },
		{ .addr = 0x3b43ef, .byte = 0x35 },
		{ .addr = 0x3b43f0, .byte = 0x38 },
		{ .addr = 0x3b43f1, .byte = 0x5a },
		{ .addr = 0x3b43f2, .byte = 0x77 },
		{ .addr = 0x3b43f3, .byte = 0x62 },
		{ .addr = 0x54a3c0, .byte = 0x78 },
		{ .addr = 0x54a3c1, .byte = 0xde },
		{ .addr = 0x3b43f4, .byte = 0x12 },
		{ .addr = 0x3b43f5, .byte = 0xba }
};

static const SST_Transaction orb_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3884018, .data = 30562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5546944, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3884020, .data = 4794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5546944, .data = 222, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_22[] = {
		{ .addr = 0x6a306e, .byte = 0x8d },
		{ .addr = 0x6a306f, .byte = 0x1b },
		{ .addr = 0x6a3070, .byte = 0x27 },
		{ .addr = 0x6a3071, .byte = 0x31 },
		{ .addr = 0x4cf8f4, .byte = 0x86 },
		{ .addr = 0x4cf8f5, .byte = 0x02 },
		{ .addr = 0x6a3072, .byte = 0x6a },
		{ .addr = 0x6a3073, .byte = 0xa7 }
};

static const SST_RamByte orb_final_ram_22[] = {
		{ .addr = 0x6a306e, .byte = 0x8d },
		{ .addr = 0x6a306f, .byte = 0x1b },
		{ .addr = 0x6a3070, .byte = 0x27 },
		{ .addr = 0x6a3071, .byte = 0x31 },
		{ .addr = 0x4cf8f4, .byte = 0x86 },
		{ .addr = 0x4cf8f5, .byte = 0x6f },
		{ .addr = 0x6a3072, .byte = 0x6a },
		{ .addr = 0x6a3073, .byte = 0xa7 }
};

static const SST_Transaction orb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5044468, .data = 2, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6959218, .data = 27303, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5044468, .data = 111, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_23[] = {
		{ .addr = 0x41b0c8, .byte = 0x8d },
		{ .addr = 0x41b0c9, .byte = 0x1d },
		{ .addr = 0x41b0ca, .byte = 0xf3 },
		{ .addr = 0x41b0cb, .byte = 0x7e },
		{ .addr = 0x4c2802, .byte = 0xa8 },
		{ .addr = 0x4c2803, .byte = 0x9c },
		{ .addr = 0x41b0cc, .byte = 0x3e },
		{ .addr = 0x41b0cd, .byte = 0x0b }
};

static const SST_RamByte orb_final_ram_23[] = {
		{ .addr = 0x41b0c8, .byte = 0x8d },
		{ .addr = 0x41b0c9, .byte = 0x1d },
		{ .addr = 0x41b0ca, .byte = 0xf3 },
		{ .addr = 0x41b0cb, .byte = 0x7e },
		{ .addr = 0x4c2802, .byte = 0xed },
		{ .addr = 0x4c2803, .byte = 0x9c },
		{ .addr = 0x41b0cc, .byte = 0x3e },
		{ .addr = 0x41b0cd, .byte = 0x0b }
};

static const SST_Transaction orb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4990978, .data = 43008, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4305100, .data = 15883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4990978, .data = 60672, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_24[] = {
		{ .addr = 0x34e15c, .byte = 0x85 },
		{ .addr = 0x34e15d, .byte = 0x32 },
		{ .addr = 0x34e15e, .byte = 0x41 },
		{ .addr = 0x34e15f, .byte = 0x40 },
		{ .addr = 0x34e160, .byte = 0xdb },
		{ .addr = 0x34e161, .byte = 0x8e },
		{ .addr = 0x7da2dc, .byte = 0x75 },
		{ .addr = 0x7da2dd, .byte = 0x39 },
		{ .addr = 0x34e162, .byte = 0xd9 },
		{ .addr = 0x34e163, .byte = 0x9a }
};

static const SST_RamByte orb_final_ram_24[] = {
		{ .addr = 0x34e15c, .byte = 0x85 },
		{ .addr = 0x34e15d, .byte = 0x32 },
		{ .addr = 0x34e15e, .byte = 0x41 },
		{ .addr = 0x34e15f, .byte = 0x40 },
		{ .addr = 0x34e160, .byte = 0xdb },
		{ .addr = 0x34e161, .byte = 0x8e },
		{ .addr = 0x7da2dc, .byte = 0xf7 },
		{ .addr = 0x7da2dd, .byte = 0x39 },
		{ .addr = 0x34e162, .byte = 0xd9 },
		{ .addr = 0x34e163, .byte = 0x9a }
};

static const SST_Transaction orb_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3465568, .data = 56206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8233692, .data = 29952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3465570, .data = 55706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8233692, .data = 63232, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_25[] = {
		{ .addr = 0x530c44, .byte = 0x88 },
		{ .addr = 0x530c45, .byte = 0x16 },
		{ .addr = 0x530c46, .byte = 0x78 },
		{ .addr = 0x530c47, .byte = 0x89 },
		{ .addr = 0xa26fc2, .byte = 0xf8 },
		{ .addr = 0xa26fc3, .byte = 0x70 },
		{ .addr = 0x530c48, .byte = 0x31 },
		{ .addr = 0x530c49, .byte = 0xc1 }
};

static const SST_RamByte orb_final_ram_25[] = {
		{ .addr = 0x530c44, .byte = 0x88 },
		{ .addr = 0x530c45, .byte = 0x16 },
		{ .addr = 0x530c46, .byte = 0x78 },
		{ .addr = 0x530c47, .byte = 0x89 },
		{ .addr = 0xa26fc2, .byte = 0xf8 },
		{ .addr = 0xa26fc3, .byte = 0x70 },
		{ .addr = 0x530c48, .byte = 0x31 },
		{ .addr = 0x530c49, .byte = 0xc1 }
};

static const SST_Transaction orb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10645442, .data = 112, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5442632, .data = 12737, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_26[] = {
		{ .addr = 0xd8af16, .byte = 0x8a },
		{ .addr = 0xd8af17, .byte = 0x05 },
		{ .addr = 0xd8af18, .byte = 0xc1 },
		{ .addr = 0xd8af19, .byte = 0x9f },
		{ .addr = 0xd8af1a, .byte = 0x83 },
		{ .addr = 0xd8af1b, .byte = 0x24 }
};

static const SST_RamByte orb_final_ram_26[] = {
		{ .addr = 0xd8af16, .byte = 0x8a },
		{ .addr = 0xd8af17, .byte = 0x05 },
		{ .addr = 0xd8af18, .byte = 0xc1 },
		{ .addr = 0xd8af19, .byte = 0x9f },
		{ .addr = 0xd8af1a, .byte = 0x83 },
		{ .addr = 0xd8af1b, .byte = 0x24 }
};

static const SST_Transaction orb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14200602, .data = 33572, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_27[] = {
		{ .addr = 0x2c3022, .byte = 0x88 },
		{ .addr = 0x2c3023, .byte = 0x1d },
		{ .addr = 0x2c3024, .byte = 0x36 },
		{ .addr = 0x2c3025, .byte = 0x9c },
		{ .addr = 0x370104, .byte = 0x21 },
		{ .addr = 0x370105, .byte = 0x69 },
		{ .addr = 0x2c3026, .byte = 0x2d },
		{ .addr = 0x2c3027, .byte = 0xce }
};

static const SST_RamByte orb_final_ram_27[] = {
		{ .addr = 0x2c3022, .byte = 0x88 },
		{ .addr = 0x2c3023, .byte = 0x1d },
		{ .addr = 0x2c3024, .byte = 0x36 },
		{ .addr = 0x2c3025, .byte = 0x9c },
		{ .addr = 0x370104, .byte = 0x21 },
		{ .addr = 0x370105, .byte = 0x69 },
		{ .addr = 0x2c3026, .byte = 0x2d },
		{ .addr = 0x2c3027, .byte = 0xce }
};

static const SST_Transaction orb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3604740, .data = 8448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2895910, .data = 11726, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_28[] = {
		{ .addr = 0xb2e6b8, .byte = 0x81 },
		{ .addr = 0xb2e6b9, .byte = 0x29 },
		{ .addr = 0xb2e6ba, .byte = 0xd7 },
		{ .addr = 0xb2e6bb, .byte = 0x6b },
		{ .addr = 0xb2e6bc, .byte = 0x27 },
		{ .addr = 0xb2e6bd, .byte = 0x79 },
		{ .addr = 0xfa3d90, .byte = 0xcd },
		{ .addr = 0xfa3d91, .byte = 0xe4 },
		{ .addr = 0xb2e6be, .byte = 0xcf },
		{ .addr = 0xb2e6bf, .byte = 0x91 }
};

static const SST_RamByte orb_final_ram_28[] = {
		{ .addr = 0xb2e6b8, .byte = 0x81 },
		{ .addr = 0xb2e6b9, .byte = 0x29 },
		{ .addr = 0xb2e6ba, .byte = 0xd7 },
		{ .addr = 0xb2e6bb, .byte = 0x6b },
		{ .addr = 0xb2e6bc, .byte = 0x27 },
		{ .addr = 0xb2e6bd, .byte = 0x79 },
		{ .addr = 0xfa3d90, .byte = 0xff },
		{ .addr = 0xfa3d91, .byte = 0xe4 },
		{ .addr = 0xb2e6be, .byte = 0xcf },
		{ .addr = 0xb2e6bf, .byte = 0x91 }
};

static const SST_Transaction orb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11724476, .data = 10105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16399760, .data = 52480, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11724478, .data = 53137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16399760, .data = 65280, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_29[] = {
		{ .addr = 0x9312d8, .byte = 0x80 },
		{ .addr = 0x9312d9, .byte = 0x26 },
		{ .addr = 0x9312da, .byte = 0x76 },
		{ .addr = 0x9312db, .byte = 0x80 },
		{ .addr = 0x470820, .byte = 0x86 },
		{ .addr = 0x470821, .byte = 0xa2 },
		{ .addr = 0x9312dc, .byte = 0x8f },
		{ .addr = 0x9312dd, .byte = 0xdc }
};

static const SST_RamByte orb_final_ram_29[] = {
		{ .addr = 0x9312d8, .byte = 0x80 },
		{ .addr = 0x9312d9, .byte = 0x26 },
		{ .addr = 0x9312da, .byte = 0x76 },
		{ .addr = 0x9312db, .byte = 0x80 },
		{ .addr = 0x470820, .byte = 0x86 },
		{ .addr = 0x470821, .byte = 0xa2 },
		{ .addr = 0x9312dc, .byte = 0x8f },
		{ .addr = 0x9312dd, .byte = 0xdc }
};

static const SST_Transaction orb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4655136, .data = 162, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9638620, .data = 36828, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_30[] = {
		{ .addr = 0x500956, .byte = 0x81 },
		{ .addr = 0x500957, .byte = 0x23 },
		{ .addr = 0x500958, .byte = 0x07 },
		{ .addr = 0x500959, .byte = 0x79 },
		{ .addr = 0x465440, .byte = 0x5a },
		{ .addr = 0x465441, .byte = 0xa9 },
		{ .addr = 0x50095a, .byte = 0x8d },
		{ .addr = 0x50095b, .byte = 0x88 }
};

static const SST_RamByte orb_final_ram_30[] = {
		{ .addr = 0x500956, .byte = 0x81 },
		{ .addr = 0x500957, .byte = 0x23 },
		{ .addr = 0x500958, .byte = 0x07 },
		{ .addr = 0x500959, .byte = 0x79 },
		{ .addr = 0x465440, .byte = 0x5a },
		{ .addr = 0x465441, .byte = 0xb9 },
		{ .addr = 0x50095a, .byte = 0x8d },
		{ .addr = 0x50095b, .byte = 0x88 }
};

static const SST_Transaction orb_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4609088, .data = 169, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5245274, .data = 36232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4609088, .data = 185, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte orb_initial_ram_31[] = {
		{ .addr = 0x4362a2, .byte = 0x87 },
		{ .addr = 0x4362a3, .byte = 0x21 },
		{ .addr = 0x4362a4, .byte = 0x22 },
		{ .addr = 0x4362a5, .byte = 0x23 },
		{ .addr = 0xae886e, .byte = 0xe9 },
		{ .addr = 0xae886f, .byte = 0xfb },
		{ .addr = 0x4362a6, .byte = 0x8d },
		{ .addr = 0x4362a7, .byte = 0xdc }
};

static const SST_RamByte orb_final_ram_31[] = {
		{ .addr = 0x4362a2, .byte = 0x87 },
		{ .addr = 0x4362a3, .byte = 0x21 },
		{ .addr = 0x4362a4, .byte = 0x22 },
		{ .addr = 0x4362a5, .byte = 0x23 },
		{ .addr = 0xae886e, .byte = 0xe9 },
		{ .addr = 0xae886f, .byte = 0xff },
		{ .addr = 0x4362a6, .byte = 0x8d },
		{ .addr = 0x4362a7, .byte = 0xdc }
};

static const SST_Transaction orb_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11438190, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4416166, .data = 36316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11438190, .data = 255, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 OR.b (A4), D0 8014",
		.initial = {
			.regs = {
				127068249, 3409344694, 3603113657, 774231763, 2224694402, 1106931013, 3934003464, 2925068005, 3222585553, 278080237, 2995062598, 197316144, 3861669960, 4202883255, 1406140082, 7095656, 5168630, 33815, 2831378
			},
			.prefetch0 = 32788,
			.prefetch1 = 25400,
			.ram = orb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				127068411, 3409344694, 3603113657, 774231763, 2224694402, 1106931013, 3934003464, 2925068005, 3222585553, 278080237, 2995062598, 197316144, 3861669960, 4202883255, 1406140082, 7095656, 5168630, 33816, 2831380
			},
			.prefetch0 = 25400,
			.prefetch1 = 1910,
			.ram = orb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = orb_transactions_16,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "017 OR.b (d16, A7), D4 882f",
		.initial = {
			.regs = {
				3576625721, 1007177697, 803379883, 410757717, 319954484, 1136984814, 4130754068, 905102957, 3462667945, 124260969, 2309061659, 1135075438, 3938489186, 510405067, 2823862922, 13769410, 10312722, 42759, 13371004
			},
			.prefetch0 = 34863,
			.prefetch1 = 63872,
			.ram = orb_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3576625721, 1007177697, 803379883, 410757717, 319954623, 1136984814, 4130754068, 905102957, 3462667945, 124260969, 2309061659, 1135075438, 3938489186, 510405067, 2823862922, 13769410, 10312722, 42760, 13371008
			},
			.prefetch0 = 43588,
			.prefetch1 = 18224,
			.ram = orb_final_ram_17,
			.ram_len = 10,
		},
		.transactions = orb_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 OR.b (A0)+, D4 8818",
		.initial = {
			.regs = {
				884437386, 3473930897, 694349630, 3264615134, 1569077672, 2422535900, 886253925, 4283742461, 1900901779, 4065329935, 1999516904, 2887854793, 1164416792, 4053506431, 3301852907, 1237788, 3677996, 1799, 14517624
			},
			.prefetch0 = 34840,
			.prefetch1 = 12150,
			.ram = orb_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				884437386, 3473930897, 694349630, 3264615134, 1569077672, 2422535900, 886253925, 4283742461, 1900901780, 4065329935, 1999516904, 2887854793, 1164416792, 4053506431, 3301852907, 1237788, 3677996, 1800, 14517626
			},
			.prefetch0 = 12150,
			.prefetch1 = 63624,
			.ram = orb_final_ram_18,
			.ram_len = 8,
		},
		.transactions = orb_transactions_18,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "019 OR.b D5, -(A1) 8b21",
		.initial = {
			.regs = {
				4058458016, 3662332038, 2488623204, 1094300004, 3775826940, 335334236, 2860350656, 2084541212, 3791611788, 551910583, 3870375718, 3550925623, 3761288363, 3302123999, 4091932010, 7526138, 15187264, 1030, 10961360
			},
			.prefetch0 = 35617,
			.prefetch1 = 20810,
			.ram = orb_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4058458016, 3662332038, 2488623204, 1094300004, 3775826940, 335334236, 2860350656, 2084541212, 3791611788, 551910582, 3870375718, 3550925623, 3761288363, 3302123999, 4091932010, 7526138, 15187264, 1024, 10961362
			},
			.prefetch0 = 20810,
			.prefetch1 = 36113,
			.ram = orb_final_ram_19,
			.ram_len = 8,
		},
		.transactions = orb_transactions_19,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "020 OR.b D4, (d16, A3) 892b",
		.initial = {
			.regs = {
				319838830, 521177574, 3002344302, 1058279520, 3928719027, 3053732916, 733992347, 3633899874, 848751167, 1543474193, 2453911300, 2237474076, 3546809825, 1634063167, 1660656327, 3948372, 8460852, 33560, 3957512
			},
			.prefetch0 = 35115,
			.prefetch1 = 64298,
			.ram = orb_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				319838830, 521177574, 3002344302, 1058279520, 3928719027, 3053732916, 733992347, 3633899874, 848751167, 1543474193, 2453911300, 2237474076, 3546809825, 1634063167, 1660656327, 3948372, 8460852, 33560, 3957516
			},
			.prefetch0 = 1693,
			.prefetch1 = 6925,
			.ram = orb_final_ram_20,
			.ram_len = 10,
		},
		.transactions = orb_transactions_20,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "021 OR.b D6, (d8, A5, Xn) 8d35",
		.initial = {
			.regs = {
				2452229107, 3126059959, 2494596785, 943482924, 346298772, 1176708277, 3444714970, 327274270, 496063560, 3110511082, 1123681976, 2403818475, 2004210246, 1545091899, 1343677236, 14752454, 4809126, 8468, 3884018
			},
			.prefetch0 = 36149,
			.prefetch1 = 14426,
			.ram = orb_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2452229107, 3126059959, 2494596785, 943482924, 346298772, 1176708277, 3444714970, 327274270, 496063560, 3110511082, 1123681976, 2403818475, 2004210246, 1545091899, 1343677236, 14752454, 4809126, 8472, 3884022
			},
			.prefetch0 = 30562,
			.prefetch1 = 4794,
			.ram = orb_final_ram_21,
			.ram_len = 10,
		},
		.transactions = orb_transactions_21,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "022 OR.b D6, (A3)+ 8d1b",
		.initial = {
			.regs = {
				874453761, 3005773727, 2298509760, 2175685386, 234875685, 3936467463, 271170669, 2208547560, 897348498, 3400253786, 1205344426, 1145895157, 3869668511, 4082514141, 1118481656, 16237748, 5656806, 33042, 6959218
			},
			.prefetch0 = 36123,
			.prefetch1 = 10033,
			.ram = orb_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				874453761, 3005773727, 2298509760, 2175685386, 234875685, 3936467463, 271170669, 2208547560, 897348498, 3400253786, 1205344426, 1145895158, 3869668511, 4082514141, 1118481656, 16237748, 5656806, 33040, 6959220
			},
			.prefetch0 = 10033,
			.prefetch1 = 27303,
			.ram = orb_final_ram_22,
			.ram_len = 8,
		},
		.transactions = orb_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 OR.b D6, (A5)+ 8d1d",
		.initial = {
			.regs = {
				3057359689, 1697194859, 3776456300, 2524337126, 3445504363, 858224022, 2726154989, 669478165, 1274321670, 180778798, 3957515179, 2133624798, 2378747461, 1766598658, 4099927573, 13966438, 4277124, 787, 4305100
			},
			.prefetch0 = 36125,
			.prefetch1 = 62334,
			.ram = orb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3057359689, 1697194859, 3776456300, 2524337126, 3445504363, 858224022, 2726154989, 669478165, 1274321670, 180778798, 3957515179, 2133624798, 2378747461, 1766598659, 4099927573, 13966438, 4277124, 792, 4305102
			},
			.prefetch0 = 62334,
			.prefetch1 = 15883,
			.ram = orb_final_ram_23,
			.ram_len = 8,
		},
		.transactions = orb_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 OR.b D2, (d8, A2, Xn) 8532",
		.initial = {
			.regs = {
				2591748227, 2346808603, 2918269942, 945197201, 3613149866, 3584222921, 3908964678, 1226313570, 2024063635, 2088419391, 461199346, 2802787709, 2280609169, 4203446268, 2763277125, 5553228, 6917296, 8976, 3465568
			},
			.prefetch0 = 34098,
			.prefetch1 = 16704,
			.ram = orb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2591748227, 2346808603, 2918269942, 945197201, 3613149866, 3584222921, 3908964678, 1226313570, 2024063635, 2088419391, 461199346, 2802787709, 2280609169, 4203446268, 2763277125, 5553228, 6917296, 8984, 3465572
			},
			.prefetch0 = 56206,
			.prefetch1 = 55706,
			.ram = orb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = orb_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 OR.b (A6), D4 8816",
		.initial = {
			.regs = {
				3127572136, 2140461332, 2091564839, 821220343, 1608283041, 279570870, 519160753, 2804921072, 3948218750, 2681510728, 138720767, 637382892, 2220328802, 485364494, 597848003, 10973912, 12737162, 34312, 5442632
			},
			.prefetch0 = 34838,
			.prefetch1 = 30857,
			.ram = orb_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3127572136, 2140461332, 2091564839, 821220343, 1608283121, 279570870, 519160753, 2804921072, 3948218750, 2681510728, 138720767, 637382892, 2220328802, 485364494, 597848003, 10973912, 12737162, 34312, 5442634
			},
			.prefetch0 = 30857,
			.prefetch1 = 12737,
			.ram = orb_final_ram_25,
			.ram_len = 8,
		},
		.transactions = orb_transactions_25,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "026 OR.b D5, D5 8a05",
		.initial = {
			.regs = {
				1872283653, 3274132056, 2589930510, 2798159797, 1930015515, 123427343, 3300119688, 2271670922, 2792310380, 2992935156, 281876950, 3594352057, 2540194164, 2472601624, 2175949080, 16765808, 3274648, 42013, 14200602
			},
			.prefetch0 = 35333,
			.prefetch1 = 49567,
			.ram = orb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1872283653, 3274132056, 2589930510, 2798159797, 1930015515, 123427343, 3300119688, 2271670922, 2792310380, 2992935156, 281876950, 3594352057, 2540194164, 2472601624, 2175949080, 16765808, 3274648, 42000, 14200604
			},
			.prefetch0 = 49567,
			.prefetch1 = 33572,
			.ram = orb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = orb_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 OR.b (A5)+, D4 881d",
		.initial = {
			.regs = {
				2735135871, 297790212, 1185151659, 716061113, 1367239704, 3360890628, 2014435046, 2510039213, 3299133896, 2049184666, 1006740305, 3103309499, 3166156709, 2050425092, 632841164, 12889940, 15815358, 9489, 2895910
			},
			.prefetch0 = 34845,
			.prefetch1 = 13980,
			.ram = orb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2735135871, 297790212, 1185151659, 716061113, 1367239737, 3360890628, 2014435046, 2510039213, 3299133896, 2049184666, 1006740305, 3103309499, 3166156709, 2050425093, 632841164, 12889940, 15815358, 9488, 2895912
			},
			.prefetch0 = 13980,
			.prefetch1 = 11726,
			.ram = orb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = orb_transactions_27,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "028 OR.b D0, (d16, A1) 8129",
		.initial = {
			.regs = {
				4075856435, 228860250, 3405595511, 3981755331, 738926338, 1156285908, 2454628998, 3250608590, 3611225990, 3304744485, 2100729163, 1439648544, 3134489200, 1752082270, 2907461248, 2712932, 4461306, 1819, 11724476
			},
			.prefetch0 = 33065,
			.prefetch1 = 55147,
			.ram = orb_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4075856435, 228860250, 3405595511, 3981755331, 738926338, 1156285908, 2454628998, 3250608590, 3611225990, 3304744485, 2100729163, 1439648544, 3134489200, 1752082270, 2907461248, 2712932, 4461306, 1816, 11724480
			},
			.prefetch0 = 10105,
			.prefetch1 = 53137,
			.ram = orb_final_ram_28,
			.ram_len = 10,
		},
		.transactions = orb_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 OR.b -(A6), D0 8026",
		.initial = {
			.regs = {
				1703899360, 820136782, 1503832825, 361022505, 2758612155, 3849984444, 3861915736, 1608282903, 1012304396, 118925361, 3178758048, 3799424979, 2284769953, 823545247, 2756118562, 3626048, 16585408, 530, 9638620
			},
			.prefetch0 = 32806,
			.prefetch1 = 30336,
			.ram = orb_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1703899362, 820136782, 1503832825, 361022505, 2758612155, 3849984444, 3861915736, 1608282903, 1012304396, 118925361, 3178758048, 3799424979, 2284769953, 823545247, 2756118561, 3626048, 16585408, 536, 9638622
			},
			.prefetch0 = 30336,
			.prefetch1 = 36828,
			.ram = orb_final_ram_29,
			.ram_len = 8,
		},
		.transactions = orb_transactions_29,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "030 OR.b D0, -(A3) 8123",
		.initial = {
			.regs = {
				1575403665, 3282132058, 2239119269, 3704502819, 2050964143, 3893147993, 1802218682, 3323408378, 1184526677, 3691347512, 1121928008, 2001097794, 3651522283, 1877122850, 272455029, 10992680, 6835942, 34315, 5245274
			},
			.prefetch0 = 33059,
			.prefetch1 = 1913,
			.ram = orb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1575403665, 3282132058, 2239119269, 3704502819, 2050964143, 3893147993, 1802218682, 3323408378, 1184526677, 3691347512, 1121928008, 2001097793, 3651522283, 1877122850, 272455029, 10992680, 6835942, 34312, 5245276
			},
			.prefetch0 = 1913,
			.prefetch1 = 36232,
			.ram = orb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = orb_transactions_30,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "031 OR.b D3, -(A1) 8721",
		.initial = {
			.regs = {
				1271329517, 13016918, 4171226305, 1112334364, 434589445, 2198085378, 3892589434, 3946855214, 2199294501, 749635696, 2887559184, 3664323647, 323148862, 1158906225, 2309940390, 3203912, 2112136, 9498, 4416166
			},
			.prefetch0 = 34593,
			.prefetch1 = 8739,
			.ram = orb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1271329517, 13016918, 4171226305, 1112334364, 434589445, 2198085378, 3892589434, 3946855214, 2199294501, 749635695, 2887559184, 3664323647, 323148862, 1158906225, 2309940390, 3203912, 2112136, 9496, 4416168
			},
			.prefetch0 = 8739,
			.prefetch1 = 36316,
			.ram = orb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = orb_transactions_31,
		.transactions_len = 4,
		.lenght = 14,
	},
};

#endif /* RBT_ORB_H */