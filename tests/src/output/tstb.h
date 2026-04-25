#ifndef RBT_TSTB_H
#define RBT_TSTB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte tstb_initial_ram_0[] = {
		{ .addr = 0xe9b536, .byte = 0x4a },
		{ .addr = 0xe9b537, .byte = 0x05 },
		{ .addr = 0xe9b538, .byte = 0x30 },
		{ .addr = 0xe9b539, .byte = 0x3e },
		{ .addr = 0xe9b53a, .byte = 0x76 },
		{ .addr = 0xe9b53b, .byte = 0xf2 }
};

static const SST_RamByte tstb_final_ram_0[] = {
		{ .addr = 0xe9b536, .byte = 0x4a },
		{ .addr = 0xe9b537, .byte = 0x05 },
		{ .addr = 0xe9b538, .byte = 0x30 },
		{ .addr = 0xe9b539, .byte = 0x3e },
		{ .addr = 0xe9b53a, .byte = 0x76 },
		{ .addr = 0xe9b53b, .byte = 0xf2 }
};

static const SST_Transaction tstb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15316282, .data = 30450, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_1[] = {
		{ .addr = 0x1c446e, .byte = 0x4a },
		{ .addr = 0x1c446f, .byte = 0x03 },
		{ .addr = 0x1c4470, .byte = 0x08 },
		{ .addr = 0x1c4471, .byte = 0xeb },
		{ .addr = 0x1c4472, .byte = 0x6d },
		{ .addr = 0x1c4473, .byte = 0xda }
};

static const SST_RamByte tstb_final_ram_1[] = {
		{ .addr = 0x1c446e, .byte = 0x4a },
		{ .addr = 0x1c446f, .byte = 0x03 },
		{ .addr = 0x1c4470, .byte = 0x08 },
		{ .addr = 0x1c4471, .byte = 0xeb },
		{ .addr = 0x1c4472, .byte = 0x6d },
		{ .addr = 0x1c4473, .byte = 0xda }
};

static const SST_Transaction tstb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1852530, .data = 28122, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_2[] = {
		{ .addr = 0xefa2fe, .byte = 0x4a },
		{ .addr = 0xefa2ff, .byte = 0x26 },
		{ .addr = 0xefa300, .byte = 0xfd },
		{ .addr = 0xefa301, .byte = 0x90 },
		{ .addr = 0x31a48e, .byte = 0x62 },
		{ .addr = 0x31a48f, .byte = 0xbd },
		{ .addr = 0xefa302, .byte = 0xca },
		{ .addr = 0xefa303, .byte = 0x3d }
};

static const SST_RamByte tstb_final_ram_2[] = {
		{ .addr = 0xefa2fe, .byte = 0x4a },
		{ .addr = 0xefa2ff, .byte = 0x26 },
		{ .addr = 0xefa300, .byte = 0xfd },
		{ .addr = 0xefa301, .byte = 0x90 },
		{ .addr = 0x31a48e, .byte = 0x62 },
		{ .addr = 0x31a48f, .byte = 0xbd },
		{ .addr = 0xefa302, .byte = 0xca },
		{ .addr = 0xefa303, .byte = 0x3d }
};

static const SST_Transaction tstb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3253390, .data = 189, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15704834, .data = 51773, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_3[] = {
		{ .addr = 0x439518, .byte = 0x4a },
		{ .addr = 0x439519, .byte = 0x03 },
		{ .addr = 0x43951a, .byte = 0xa1 },
		{ .addr = 0x43951b, .byte = 0x1d },
		{ .addr = 0x43951c, .byte = 0x9c },
		{ .addr = 0x43951d, .byte = 0x9b }
};

static const SST_RamByte tstb_final_ram_3[] = {
		{ .addr = 0x439518, .byte = 0x4a },
		{ .addr = 0x439519, .byte = 0x03 },
		{ .addr = 0x43951a, .byte = 0xa1 },
		{ .addr = 0x43951b, .byte = 0x1d },
		{ .addr = 0x43951c, .byte = 0x9c },
		{ .addr = 0x43951d, .byte = 0x9b }
};

static const SST_Transaction tstb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4429084, .data = 40091, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_4[] = {
		{ .addr = 0x6577f8, .byte = 0x4a },
		{ .addr = 0x6577f9, .byte = 0x2c },
		{ .addr = 0x6577fa, .byte = 0xe2 },
		{ .addr = 0x6577fb, .byte = 0xa9 },
		{ .addr = 0x6577fc, .byte = 0x9e },
		{ .addr = 0x6577fd, .byte = 0xdf },
		{ .addr = 0x37d9d2, .byte = 0xd1 },
		{ .addr = 0x37d9d3, .byte = 0x9c },
		{ .addr = 0x6577fe, .byte = 0x1e },
		{ .addr = 0x6577ff, .byte = 0x61 }
};

static const SST_RamByte tstb_final_ram_4[] = {
		{ .addr = 0x6577f8, .byte = 0x4a },
		{ .addr = 0x6577f9, .byte = 0x2c },
		{ .addr = 0x6577fa, .byte = 0xe2 },
		{ .addr = 0x6577fb, .byte = 0xa9 },
		{ .addr = 0x6577fc, .byte = 0x9e },
		{ .addr = 0x6577fd, .byte = 0xdf },
		{ .addr = 0x37d9d2, .byte = 0xd1 },
		{ .addr = 0x37d9d3, .byte = 0x9c },
		{ .addr = 0x6577fe, .byte = 0x1e },
		{ .addr = 0x6577ff, .byte = 0x61 }
};

static const SST_Transaction tstb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6649852, .data = 40671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3660242, .data = 53504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6649854, .data = 7777, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_5[] = {
		{ .addr = 0x84f054, .byte = 0x4a },
		{ .addr = 0x84f055, .byte = 0x31 },
		{ .addr = 0x84f056, .byte = 0x5a },
		{ .addr = 0x84f057, .byte = 0x06 },
		{ .addr = 0x84f058, .byte = 0x45 },
		{ .addr = 0x84f059, .byte = 0x06 },
		{ .addr = 0xb53d2c, .byte = 0x19 },
		{ .addr = 0xb53d2d, .byte = 0x06 },
		{ .addr = 0x84f05a, .byte = 0x2f },
		{ .addr = 0x84f05b, .byte = 0x5f }
};

static const SST_RamByte tstb_final_ram_5[] = {
		{ .addr = 0x84f054, .byte = 0x4a },
		{ .addr = 0x84f055, .byte = 0x31 },
		{ .addr = 0x84f056, .byte = 0x5a },
		{ .addr = 0x84f057, .byte = 0x06 },
		{ .addr = 0x84f058, .byte = 0x45 },
		{ .addr = 0x84f059, .byte = 0x06 },
		{ .addr = 0xb53d2c, .byte = 0x19 },
		{ .addr = 0xb53d2d, .byte = 0x06 },
		{ .addr = 0x84f05a, .byte = 0x2f },
		{ .addr = 0x84f05b, .byte = 0x5f }
};

static const SST_Transaction tstb_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8712280, .data = 17670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11877676, .data = 6, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8712282, .data = 12127, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_6[] = {
		{ .addr = 0xe1e576, .byte = 0x4a },
		{ .addr = 0xe1e577, .byte = 0x25 },
		{ .addr = 0xe1e578, .byte = 0x37 },
		{ .addr = 0xe1e579, .byte = 0xb9 },
		{ .addr = 0xe96252, .byte = 0x1a },
		{ .addr = 0xe96253, .byte = 0x27 },
		{ .addr = 0xe1e57a, .byte = 0x76 },
		{ .addr = 0xe1e57b, .byte = 0xa9 }
};

static const SST_RamByte tstb_final_ram_6[] = {
		{ .addr = 0xe1e576, .byte = 0x4a },
		{ .addr = 0xe1e577, .byte = 0x25 },
		{ .addr = 0xe1e578, .byte = 0x37 },
		{ .addr = 0xe1e579, .byte = 0xb9 },
		{ .addr = 0xe96252, .byte = 0x1a },
		{ .addr = 0xe96253, .byte = 0x27 },
		{ .addr = 0xe1e57a, .byte = 0x76 },
		{ .addr = 0xe1e57b, .byte = 0xa9 }
};

static const SST_Transaction tstb_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15295058, .data = 39, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14804346, .data = 30377, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_7[] = {
		{ .addr = 0x333854, .byte = 0x4a },
		{ .addr = 0x333855, .byte = 0x1d },
		{ .addr = 0x333856, .byte = 0x2d },
		{ .addr = 0x333857, .byte = 0xf1 },
		{ .addr = 0x417ea6, .byte = 0x44 },
		{ .addr = 0x417ea7, .byte = 0xe3 },
		{ .addr = 0x333858, .byte = 0x79 },
		{ .addr = 0x333859, .byte = 0x11 }
};

static const SST_RamByte tstb_final_ram_7[] = {
		{ .addr = 0x333854, .byte = 0x4a },
		{ .addr = 0x333855, .byte = 0x1d },
		{ .addr = 0x333856, .byte = 0x2d },
		{ .addr = 0x333857, .byte = 0xf1 },
		{ .addr = 0x417ea6, .byte = 0x44 },
		{ .addr = 0x417ea7, .byte = 0xe3 },
		{ .addr = 0x333858, .byte = 0x79 },
		{ .addr = 0x333859, .byte = 0x11 }
};

static const SST_Transaction tstb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4292262, .data = 17408, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3356760, .data = 30993, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_8[] = {
		{ .addr = 0x36cd80, .byte = 0x4a },
		{ .addr = 0x36cd81, .byte = 0x24 },
		{ .addr = 0x36cd82, .byte = 0x1b },
		{ .addr = 0x36cd83, .byte = 0xf8 },
		{ .addr = 0xa9d378, .byte = 0xfd },
		{ .addr = 0xa9d379, .byte = 0x78 },
		{ .addr = 0x36cd84, .byte = 0xc6 },
		{ .addr = 0x36cd85, .byte = 0x7f }
};

static const SST_RamByte tstb_final_ram_8[] = {
		{ .addr = 0x36cd80, .byte = 0x4a },
		{ .addr = 0x36cd81, .byte = 0x24 },
		{ .addr = 0x36cd82, .byte = 0x1b },
		{ .addr = 0x36cd83, .byte = 0xf8 },
		{ .addr = 0xa9d378, .byte = 0xfd },
		{ .addr = 0xa9d379, .byte = 0x78 },
		{ .addr = 0x36cd84, .byte = 0xc6 },
		{ .addr = 0x36cd85, .byte = 0x7f }
};

static const SST_Transaction tstb_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11129720, .data = 64768, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3591556, .data = 50815, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_9[] = {
		{ .addr = 0xd57098, .byte = 0x4a },
		{ .addr = 0xd57099, .byte = 0x2f },
		{ .addr = 0xd5709a, .byte = 0x68 },
		{ .addr = 0xd5709b, .byte = 0xab },
		{ .addr = 0xd5709c, .byte = 0x20 },
		{ .addr = 0xd5709d, .byte = 0xc0 },
		{ .addr = 0x9e4650, .byte = 0xe8 },
		{ .addr = 0x9e4651, .byte = 0xc5 },
		{ .addr = 0xd5709e, .byte = 0x72 },
		{ .addr = 0xd5709f, .byte = 0x84 }
};

static const SST_RamByte tstb_final_ram_9[] = {
		{ .addr = 0xd57098, .byte = 0x4a },
		{ .addr = 0xd57099, .byte = 0x2f },
		{ .addr = 0xd5709a, .byte = 0x68 },
		{ .addr = 0xd5709b, .byte = 0xab },
		{ .addr = 0xd5709c, .byte = 0x20 },
		{ .addr = 0xd5709d, .byte = 0xc0 },
		{ .addr = 0x9e4650, .byte = 0xe8 },
		{ .addr = 0x9e4651, .byte = 0xc5 },
		{ .addr = 0xd5709e, .byte = 0x72 },
		{ .addr = 0xd5709f, .byte = 0x84 }
};

static const SST_Transaction tstb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13987996, .data = 8384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10372688, .data = 197, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13987998, .data = 29316, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_10[] = {
		{ .addr = 0x35e1a4, .byte = 0x4a },
		{ .addr = 0x35e1a5, .byte = 0x2e },
		{ .addr = 0x35e1a6, .byte = 0x27 },
		{ .addr = 0x35e1a7, .byte = 0x75 },
		{ .addr = 0x35e1a8, .byte = 0x44 },
		{ .addr = 0x35e1a9, .byte = 0x73 },
		{ .addr = 0xcd97ee, .byte = 0xd8 },
		{ .addr = 0xcd97ef, .byte = 0x08 },
		{ .addr = 0x35e1aa, .byte = 0xb0 },
		{ .addr = 0x35e1ab, .byte = 0x5b }
};

static const SST_RamByte tstb_final_ram_10[] = {
		{ .addr = 0x35e1a4, .byte = 0x4a },
		{ .addr = 0x35e1a5, .byte = 0x2e },
		{ .addr = 0x35e1a6, .byte = 0x27 },
		{ .addr = 0x35e1a7, .byte = 0x75 },
		{ .addr = 0x35e1a8, .byte = 0x44 },
		{ .addr = 0x35e1a9, .byte = 0x73 },
		{ .addr = 0xcd97ee, .byte = 0xd8 },
		{ .addr = 0xcd97ef, .byte = 0x08 },
		{ .addr = 0x35e1aa, .byte = 0xb0 },
		{ .addr = 0x35e1ab, .byte = 0x5b }
};

static const SST_Transaction tstb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3531176, .data = 17523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13473774, .data = 8, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3531178, .data = 45147, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_11[] = {
		{ .addr = 0x653142, .byte = 0x4a },
		{ .addr = 0x653143, .byte = 0x24 },
		{ .addr = 0x653144, .byte = 0x68 },
		{ .addr = 0x653145, .byte = 0x60 },
		{ .addr = 0xcaa266, .byte = 0xd1 },
		{ .addr = 0xcaa267, .byte = 0x2d },
		{ .addr = 0x653146, .byte = 0xca },
		{ .addr = 0x653147, .byte = 0xda }
};

static const SST_RamByte tstb_final_ram_11[] = {
		{ .addr = 0x653142, .byte = 0x4a },
		{ .addr = 0x653143, .byte = 0x24 },
		{ .addr = 0x653144, .byte = 0x68 },
		{ .addr = 0x653145, .byte = 0x60 },
		{ .addr = 0xcaa266, .byte = 0xd1 },
		{ .addr = 0xcaa267, .byte = 0x2d },
		{ .addr = 0x653146, .byte = 0xca },
		{ .addr = 0x653147, .byte = 0xda }
};

static const SST_Transaction tstb_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13279846, .data = 53504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6631750, .data = 51930, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_12[] = {
		{ .addr = 0x6d6e34, .byte = 0x4a },
		{ .addr = 0x6d6e35, .byte = 0x23 },
		{ .addr = 0x6d6e36, .byte = 0x1f },
		{ .addr = 0x6d6e37, .byte = 0xa6 },
		{ .addr = 0x9c8710, .byte = 0x34 },
		{ .addr = 0x9c8711, .byte = 0x34 },
		{ .addr = 0x6d6e38, .byte = 0x05 },
		{ .addr = 0x6d6e39, .byte = 0x93 }
};

static const SST_RamByte tstb_final_ram_12[] = {
		{ .addr = 0x6d6e34, .byte = 0x4a },
		{ .addr = 0x6d6e35, .byte = 0x23 },
		{ .addr = 0x6d6e36, .byte = 0x1f },
		{ .addr = 0x6d6e37, .byte = 0xa6 },
		{ .addr = 0x9c8710, .byte = 0x34 },
		{ .addr = 0x9c8711, .byte = 0x34 },
		{ .addr = 0x6d6e38, .byte = 0x05 },
		{ .addr = 0x6d6e39, .byte = 0x93 }
};

static const SST_Transaction tstb_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10258192, .data = 52, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7171640, .data = 1427, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_13[] = {
		{ .addr = 0x892c04, .byte = 0x4a },
		{ .addr = 0x892c05, .byte = 0x04 },
		{ .addr = 0x892c06, .byte = 0x3d },
		{ .addr = 0x892c07, .byte = 0x7c },
		{ .addr = 0x892c08, .byte = 0xee },
		{ .addr = 0x892c09, .byte = 0x2e }
};

static const SST_RamByte tstb_final_ram_13[] = {
		{ .addr = 0x892c04, .byte = 0x4a },
		{ .addr = 0x892c05, .byte = 0x04 },
		{ .addr = 0x892c06, .byte = 0x3d },
		{ .addr = 0x892c07, .byte = 0x7c },
		{ .addr = 0x892c08, .byte = 0xee },
		{ .addr = 0x892c09, .byte = 0x2e }
};

static const SST_Transaction tstb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8989704, .data = 60974, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_14[] = {
		{ .addr = 0xa9ccc8, .byte = 0x4a },
		{ .addr = 0xa9ccc9, .byte = 0x1a },
		{ .addr = 0xa9ccca, .byte = 0x9e },
		{ .addr = 0xa9cccb, .byte = 0x1c },
		{ .addr = 0xfb876a, .byte = 0xbb },
		{ .addr = 0xfb876b, .byte = 0xd2 },
		{ .addr = 0xa9cccc, .byte = 0xa1 },
		{ .addr = 0xa9cccd, .byte = 0x89 }
};

static const SST_RamByte tstb_final_ram_14[] = {
		{ .addr = 0xa9ccc8, .byte = 0x4a },
		{ .addr = 0xa9ccc9, .byte = 0x1a },
		{ .addr = 0xa9ccca, .byte = 0x9e },
		{ .addr = 0xa9cccb, .byte = 0x1c },
		{ .addr = 0xfb876a, .byte = 0xbb },
		{ .addr = 0xfb876b, .byte = 0xd2 },
		{ .addr = 0xa9cccc, .byte = 0xa1 },
		{ .addr = 0xa9cccd, .byte = 0x89 }
};

static const SST_Transaction tstb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16484202, .data = 47872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11128012, .data = 41353, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_15[] = {
		{ .addr = 0xbd5dc0, .byte = 0x4a },
		{ .addr = 0xbd5dc1, .byte = 0x03 },
		{ .addr = 0xbd5dc2, .byte = 0x24 },
		{ .addr = 0xbd5dc3, .byte = 0xbd },
		{ .addr = 0xbd5dc4, .byte = 0x0e },
		{ .addr = 0xbd5dc5, .byte = 0x44 }
};

static const SST_RamByte tstb_final_ram_15[] = {
		{ .addr = 0xbd5dc0, .byte = 0x4a },
		{ .addr = 0xbd5dc1, .byte = 0x03 },
		{ .addr = 0xbd5dc2, .byte = 0x24 },
		{ .addr = 0xbd5dc3, .byte = 0xbd },
		{ .addr = 0xbd5dc4, .byte = 0x0e },
		{ .addr = 0xbd5dc5, .byte = 0x44 }
};

static const SST_Transaction tstb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12410308, .data = 3652, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_16[] = {
		{ .addr = 0xd44154, .byte = 0x4a },
		{ .addr = 0xd44155, .byte = 0x33 },
		{ .addr = 0xd44156, .byte = 0x6c },
		{ .addr = 0xd44157, .byte = 0xc0 },
		{ .addr = 0xd44158, .byte = 0x12 },
		{ .addr = 0xd44159, .byte = 0x77 },
		{ .addr = 0x01db56, .byte = 0x7b },
		{ .addr = 0x01db57, .byte = 0xc7 },
		{ .addr = 0xd4415a, .byte = 0x42 },
		{ .addr = 0xd4415b, .byte = 0x29 }
};

static const SST_RamByte tstb_final_ram_16[] = {
		{ .addr = 0xd44154, .byte = 0x4a },
		{ .addr = 0xd44155, .byte = 0x33 },
		{ .addr = 0xd44156, .byte = 0x6c },
		{ .addr = 0xd44157, .byte = 0xc0 },
		{ .addr = 0xd44158, .byte = 0x12 },
		{ .addr = 0xd44159, .byte = 0x77 },
		{ .addr = 0x01db56, .byte = 0x7b },
		{ .addr = 0x01db57, .byte = 0xc7 },
		{ .addr = 0xd4415a, .byte = 0x42 },
		{ .addr = 0xd4415b, .byte = 0x29 }
};

static const SST_Transaction tstb_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13910360, .data = 4727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 121686, .data = 199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13910362, .data = 16937, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_17[] = {
		{ .addr = 0x394cc2, .byte = 0x4a },
		{ .addr = 0x394cc3, .byte = 0x21 },
		{ .addr = 0x394cc4, .byte = 0x35 },
		{ .addr = 0x394cc5, .byte = 0x85 },
		{ .addr = 0x1cc91a, .byte = 0x36 },
		{ .addr = 0x1cc91b, .byte = 0x09 },
		{ .addr = 0x394cc6, .byte = 0xa5 },
		{ .addr = 0x394cc7, .byte = 0x99 }
};

static const SST_RamByte tstb_final_ram_17[] = {
		{ .addr = 0x394cc2, .byte = 0x4a },
		{ .addr = 0x394cc3, .byte = 0x21 },
		{ .addr = 0x394cc4, .byte = 0x35 },
		{ .addr = 0x394cc5, .byte = 0x85 },
		{ .addr = 0x1cc91a, .byte = 0x36 },
		{ .addr = 0x1cc91b, .byte = 0x09 },
		{ .addr = 0x394cc6, .byte = 0xa5 },
		{ .addr = 0x394cc7, .byte = 0x99 }
};

static const SST_Transaction tstb_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1886490, .data = 13824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3755206, .data = 42393, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_18[] = {
		{ .addr = 0xa9ee6c, .byte = 0x4a },
		{ .addr = 0xa9ee6d, .byte = 0x02 },
		{ .addr = 0xa9ee6e, .byte = 0x9c },
		{ .addr = 0xa9ee6f, .byte = 0xcd },
		{ .addr = 0xa9ee70, .byte = 0xd3 },
		{ .addr = 0xa9ee71, .byte = 0x1b }
};

static const SST_RamByte tstb_final_ram_18[] = {
		{ .addr = 0xa9ee6c, .byte = 0x4a },
		{ .addr = 0xa9ee6d, .byte = 0x02 },
		{ .addr = 0xa9ee6e, .byte = 0x9c },
		{ .addr = 0xa9ee6f, .byte = 0xcd },
		{ .addr = 0xa9ee70, .byte = 0xd3 },
		{ .addr = 0xa9ee71, .byte = 0x1b }
};

static const SST_Transaction tstb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11136624, .data = 54043, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_19[] = {
		{ .addr = 0x549404, .byte = 0x4a },
		{ .addr = 0x549405, .byte = 0x10 },
		{ .addr = 0x549406, .byte = 0x91 },
		{ .addr = 0x549407, .byte = 0x00 },
		{ .addr = 0x74a6b0, .byte = 0xa0 },
		{ .addr = 0x74a6b1, .byte = 0x5c },
		{ .addr = 0x549408, .byte = 0x29 },
		{ .addr = 0x549409, .byte = 0x07 }
};

static const SST_RamByte tstb_final_ram_19[] = {
		{ .addr = 0x549404, .byte = 0x4a },
		{ .addr = 0x549405, .byte = 0x10 },
		{ .addr = 0x549406, .byte = 0x91 },
		{ .addr = 0x549407, .byte = 0x00 },
		{ .addr = 0x74a6b0, .byte = 0xa0 },
		{ .addr = 0x74a6b1, .byte = 0x5c },
		{ .addr = 0x549408, .byte = 0x29 },
		{ .addr = 0x549409, .byte = 0x07 }
};

static const SST_Transaction tstb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7644848, .data = 40960, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5542920, .data = 10503, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_20[] = {
		{ .addr = 0xf59446, .byte = 0x4a },
		{ .addr = 0xf59447, .byte = 0x20 },
		{ .addr = 0xf59448, .byte = 0x32 },
		{ .addr = 0xf59449, .byte = 0xb0 },
		{ .addr = 0xdb49a2, .byte = 0x16 },
		{ .addr = 0xdb49a3, .byte = 0xf3 },
		{ .addr = 0xf5944a, .byte = 0x0b },
		{ .addr = 0xf5944b, .byte = 0x0b }
};

static const SST_RamByte tstb_final_ram_20[] = {
		{ .addr = 0xf59446, .byte = 0x4a },
		{ .addr = 0xf59447, .byte = 0x20 },
		{ .addr = 0xf59448, .byte = 0x32 },
		{ .addr = 0xf59449, .byte = 0xb0 },
		{ .addr = 0xdb49a2, .byte = 0x16 },
		{ .addr = 0xdb49a3, .byte = 0xf3 },
		{ .addr = 0xf5944a, .byte = 0x0b },
		{ .addr = 0xf5944b, .byte = 0x0b }
};

static const SST_Transaction tstb_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14371234, .data = 243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16094282, .data = 2827, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_21[] = {
		{ .addr = 0x766be0, .byte = 0x4a },
		{ .addr = 0x766be1, .byte = 0x28 },
		{ .addr = 0x766be2, .byte = 0x31 },
		{ .addr = 0x766be3, .byte = 0x2a },
		{ .addr = 0x766be4, .byte = 0x70 },
		{ .addr = 0x766be5, .byte = 0x46 },
		{ .addr = 0x858b12, .byte = 0x2c },
		{ .addr = 0x858b13, .byte = 0x06 },
		{ .addr = 0x766be6, .byte = 0xb2 },
		{ .addr = 0x766be7, .byte = 0x5a }
};

static const SST_RamByte tstb_final_ram_21[] = {
		{ .addr = 0x766be0, .byte = 0x4a },
		{ .addr = 0x766be1, .byte = 0x28 },
		{ .addr = 0x766be2, .byte = 0x31 },
		{ .addr = 0x766be3, .byte = 0x2a },
		{ .addr = 0x766be4, .byte = 0x70 },
		{ .addr = 0x766be5, .byte = 0x46 },
		{ .addr = 0x858b12, .byte = 0x2c },
		{ .addr = 0x858b13, .byte = 0x06 },
		{ .addr = 0x766be6, .byte = 0xb2 },
		{ .addr = 0x766be7, .byte = 0x5a }
};

static const SST_Transaction tstb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7760868, .data = 28742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8751890, .data = 6, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7760870, .data = 45658, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_22[] = {
		{ .addr = 0x4fc032, .byte = 0x4a },
		{ .addr = 0x4fc033, .byte = 0x23 },
		{ .addr = 0x4fc034, .byte = 0x66 },
		{ .addr = 0x4fc035, .byte = 0x55 },
		{ .addr = 0x4dd6b6, .byte = 0x99 },
		{ .addr = 0x4dd6b7, .byte = 0xb6 },
		{ .addr = 0x4fc036, .byte = 0x70 },
		{ .addr = 0x4fc037, .byte = 0xdc }
};

static const SST_RamByte tstb_final_ram_22[] = {
		{ .addr = 0x4fc032, .byte = 0x4a },
		{ .addr = 0x4fc033, .byte = 0x23 },
		{ .addr = 0x4fc034, .byte = 0x66 },
		{ .addr = 0x4fc035, .byte = 0x55 },
		{ .addr = 0x4dd6b6, .byte = 0x99 },
		{ .addr = 0x4dd6b7, .byte = 0xb6 },
		{ .addr = 0x4fc036, .byte = 0x70 },
		{ .addr = 0x4fc037, .byte = 0xdc }
};

static const SST_Transaction tstb_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5101238, .data = 182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5226550, .data = 28892, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_23[] = {
		{ .addr = 0x8f1a80, .byte = 0x4a },
		{ .addr = 0x8f1a81, .byte = 0x21 },
		{ .addr = 0x8f1a82, .byte = 0x31 },
		{ .addr = 0x8f1a83, .byte = 0x4d },
		{ .addr = 0xe61b58, .byte = 0xdb },
		{ .addr = 0xe61b59, .byte = 0x37 },
		{ .addr = 0x8f1a84, .byte = 0x01 },
		{ .addr = 0x8f1a85, .byte = 0x71 }
};

static const SST_RamByte tstb_final_ram_23[] = {
		{ .addr = 0x8f1a80, .byte = 0x4a },
		{ .addr = 0x8f1a81, .byte = 0x21 },
		{ .addr = 0x8f1a82, .byte = 0x31 },
		{ .addr = 0x8f1a83, .byte = 0x4d },
		{ .addr = 0xe61b58, .byte = 0xdb },
		{ .addr = 0xe61b59, .byte = 0x37 },
		{ .addr = 0x8f1a84, .byte = 0x01 },
		{ .addr = 0x8f1a85, .byte = 0x71 }
};

static const SST_Transaction tstb_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15080280, .data = 55, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9378436, .data = 369, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_24[] = {
		{ .addr = 0x07fe62, .byte = 0x4a },
		{ .addr = 0x07fe63, .byte = 0x2d },
		{ .addr = 0x07fe64, .byte = 0xd7 },
		{ .addr = 0x07fe65, .byte = 0x61 },
		{ .addr = 0x07fe66, .byte = 0x6d },
		{ .addr = 0x07fe67, .byte = 0x0b },
		{ .addr = 0xde5748, .byte = 0x53 },
		{ .addr = 0xde5749, .byte = 0xd5 },
		{ .addr = 0x07fe68, .byte = 0xad },
		{ .addr = 0x07fe69, .byte = 0x5d }
};

static const SST_RamByte tstb_final_ram_24[] = {
		{ .addr = 0x07fe62, .byte = 0x4a },
		{ .addr = 0x07fe63, .byte = 0x2d },
		{ .addr = 0x07fe64, .byte = 0xd7 },
		{ .addr = 0x07fe65, .byte = 0x61 },
		{ .addr = 0x07fe66, .byte = 0x6d },
		{ .addr = 0x07fe67, .byte = 0x0b },
		{ .addr = 0xde5748, .byte = 0x53 },
		{ .addr = 0xde5749, .byte = 0xd5 },
		{ .addr = 0x07fe68, .byte = 0xad },
		{ .addr = 0x07fe69, .byte = 0x5d }
};

static const SST_Transaction tstb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 523878, .data = 27915, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14571336, .data = 21248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 523880, .data = 44381, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_25[] = {
		{ .addr = 0xb2bdae, .byte = 0x4a },
		{ .addr = 0xb2bdaf, .byte = 0x24 },
		{ .addr = 0xb2bdb0, .byte = 0xbb },
		{ .addr = 0xb2bdb1, .byte = 0x29 },
		{ .addr = 0x514aaa, .byte = 0x87 },
		{ .addr = 0x514aab, .byte = 0x74 },
		{ .addr = 0xb2bdb2, .byte = 0x32 },
		{ .addr = 0xb2bdb3, .byte = 0x3d }
};

static const SST_RamByte tstb_final_ram_25[] = {
		{ .addr = 0xb2bdae, .byte = 0x4a },
		{ .addr = 0xb2bdaf, .byte = 0x24 },
		{ .addr = 0xb2bdb0, .byte = 0xbb },
		{ .addr = 0xb2bdb1, .byte = 0x29 },
		{ .addr = 0x514aaa, .byte = 0x87 },
		{ .addr = 0x514aab, .byte = 0x74 },
		{ .addr = 0xb2bdb2, .byte = 0x32 },
		{ .addr = 0xb2bdb3, .byte = 0x3d }
};

static const SST_Transaction tstb_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5327530, .data = 34560, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11713970, .data = 12861, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_26[] = {
		{ .addr = 0x2e3a60, .byte = 0x4a },
		{ .addr = 0x2e3a61, .byte = 0x00 },
		{ .addr = 0x2e3a62, .byte = 0x8f },
		{ .addr = 0x2e3a63, .byte = 0x7f },
		{ .addr = 0x2e3a64, .byte = 0x74 },
		{ .addr = 0x2e3a65, .byte = 0xcc }
};

static const SST_RamByte tstb_final_ram_26[] = {
		{ .addr = 0x2e3a60, .byte = 0x4a },
		{ .addr = 0x2e3a61, .byte = 0x00 },
		{ .addr = 0x2e3a62, .byte = 0x8f },
		{ .addr = 0x2e3a63, .byte = 0x7f },
		{ .addr = 0x2e3a64, .byte = 0x74 },
		{ .addr = 0x2e3a65, .byte = 0xcc }
};

static const SST_Transaction tstb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3029604, .data = 29900, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_27[] = {
		{ .addr = 0xc32e8e, .byte = 0x4a },
		{ .addr = 0xc32e8f, .byte = 0x30 },
		{ .addr = 0xc32e90, .byte = 0x7e },
		{ .addr = 0xc32e91, .byte = 0x39 },
		{ .addr = 0xc32e92, .byte = 0xda },
		{ .addr = 0xc32e93, .byte = 0x5f },
		{ .addr = 0xadf584, .byte = 0x43 },
		{ .addr = 0xadf585, .byte = 0x55 },
		{ .addr = 0xc32e94, .byte = 0x71 },
		{ .addr = 0xc32e95, .byte = 0x5b }
};

static const SST_RamByte tstb_final_ram_27[] = {
		{ .addr = 0xc32e8e, .byte = 0x4a },
		{ .addr = 0xc32e8f, .byte = 0x30 },
		{ .addr = 0xc32e90, .byte = 0x7e },
		{ .addr = 0xc32e91, .byte = 0x39 },
		{ .addr = 0xc32e92, .byte = 0xda },
		{ .addr = 0xc32e93, .byte = 0x5f },
		{ .addr = 0xadf584, .byte = 0x43 },
		{ .addr = 0xadf585, .byte = 0x55 },
		{ .addr = 0xc32e94, .byte = 0x71 },
		{ .addr = 0xc32e95, .byte = 0x5b }
};

static const SST_Transaction tstb_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12791442, .data = 55903, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11400580, .data = 17152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12791444, .data = 29019, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_28[] = {
		{ .addr = 0xceb6ea, .byte = 0x4a },
		{ .addr = 0xceb6eb, .byte = 0x25 },
		{ .addr = 0xceb6ec, .byte = 0x1d },
		{ .addr = 0xceb6ed, .byte = 0x6f },
		{ .addr = 0x7f1dea, .byte = 0xb5 },
		{ .addr = 0x7f1deb, .byte = 0x7a },
		{ .addr = 0xceb6ee, .byte = 0xb0 },
		{ .addr = 0xceb6ef, .byte = 0x58 }
};

static const SST_RamByte tstb_final_ram_28[] = {
		{ .addr = 0xceb6ea, .byte = 0x4a },
		{ .addr = 0xceb6eb, .byte = 0x25 },
		{ .addr = 0xceb6ec, .byte = 0x1d },
		{ .addr = 0xceb6ed, .byte = 0x6f },
		{ .addr = 0x7f1dea, .byte = 0xb5 },
		{ .addr = 0x7f1deb, .byte = 0x7a },
		{ .addr = 0xceb6ee, .byte = 0xb0 },
		{ .addr = 0xceb6ef, .byte = 0x58 }
};

static const SST_Transaction tstb_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8330730, .data = 122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13547246, .data = 45144, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_29[] = {
		{ .addr = 0x0e2312, .byte = 0x4a },
		{ .addr = 0x0e2313, .byte = 0x11 },
		{ .addr = 0x0e2314, .byte = 0xf6 },
		{ .addr = 0x0e2315, .byte = 0xa4 },
		{ .addr = 0x8d4108, .byte = 0x7b },
		{ .addr = 0x8d4109, .byte = 0x06 },
		{ .addr = 0x0e2316, .byte = 0x1c },
		{ .addr = 0x0e2317, .byte = 0xc5 }
};

static const SST_RamByte tstb_final_ram_29[] = {
		{ .addr = 0x0e2312, .byte = 0x4a },
		{ .addr = 0x0e2313, .byte = 0x11 },
		{ .addr = 0x0e2314, .byte = 0xf6 },
		{ .addr = 0x0e2315, .byte = 0xa4 },
		{ .addr = 0x8d4108, .byte = 0x7b },
		{ .addr = 0x8d4109, .byte = 0x06 },
		{ .addr = 0x0e2316, .byte = 0x1c },
		{ .addr = 0x0e2317, .byte = 0xc5 }
};

static const SST_Transaction tstb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9257224, .data = 6, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 926486, .data = 7365, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_30[] = {
		{ .addr = 0x3da35a, .byte = 0x4a },
		{ .addr = 0x3da35b, .byte = 0x13 },
		{ .addr = 0x3da35c, .byte = 0xc6 },
		{ .addr = 0x3da35d, .byte = 0x9f },
		{ .addr = 0xc0e42c, .byte = 0xab },
		{ .addr = 0xc0e42d, .byte = 0xab },
		{ .addr = 0x3da35e, .byte = 0xc7 },
		{ .addr = 0x3da35f, .byte = 0x63 }
};

static const SST_RamByte tstb_final_ram_30[] = {
		{ .addr = 0x3da35a, .byte = 0x4a },
		{ .addr = 0x3da35b, .byte = 0x13 },
		{ .addr = 0x3da35c, .byte = 0xc6 },
		{ .addr = 0x3da35d, .byte = 0x9f },
		{ .addr = 0xc0e42c, .byte = 0xab },
		{ .addr = 0xc0e42d, .byte = 0xab },
		{ .addr = 0x3da35e, .byte = 0xc7 },
		{ .addr = 0x3da35f, .byte = 0x63 }
};

static const SST_Transaction tstb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12641324, .data = 171, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4039518, .data = 51043, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstb_initial_ram_31[] = {
		{ .addr = 0xb72340, .byte = 0x4a },
		{ .addr = 0xb72341, .byte = 0x10 },
		{ .addr = 0xb72342, .byte = 0x8c },
		{ .addr = 0xb72343, .byte = 0x15 },
		{ .addr = 0x7a66d0, .byte = 0x83 },
		{ .addr = 0x7a66d1, .byte = 0xad },
		{ .addr = 0xb72344, .byte = 0x7b },
		{ .addr = 0xb72345, .byte = 0x52 }
};

static const SST_RamByte tstb_final_ram_31[] = {
		{ .addr = 0xb72340, .byte = 0x4a },
		{ .addr = 0xb72341, .byte = 0x10 },
		{ .addr = 0xb72342, .byte = 0x8c },
		{ .addr = 0xb72343, .byte = 0x15 },
		{ .addr = 0x7a66d0, .byte = 0x83 },
		{ .addr = 0x7a66d1, .byte = 0xad },
		{ .addr = 0xb72344, .byte = 0x7b },
		{ .addr = 0xb72345, .byte = 0x52 }
};

static const SST_Transaction tstb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8021712, .data = 33536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12002116, .data = 31570, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase tstb[] = {
	{
		.name = "000 TST.b D5 4a05",
		.initial = {
			.regs = {
				846714821, 646404932, 3022754438, 2410866885, 3580684883, 1697763789, 3779951095, 1665669656, 3887929160, 2583917214, 2491831459, 3744447675, 462312535, 3262836416, 1146829190, 9280610, 3889344, 8718, 15316282
			},
			.prefetch0 = 18949,
			.prefetch1 = 12350,
			.ram = tstb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				846714821, 646404932, 3022754438, 2410866885, 3580684883, 1697763789, 3779951095, 1665669656, 3887929160, 2583917214, 2491831459, 3744447675, 462312535, 3262836416, 1146829190, 9280610, 3889344, 8712, 15316284
			},
			.prefetch0 = 12350,
			.prefetch1 = 30450,
			.ram = tstb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = tstb_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 TST.b D3 4a03",
		.initial = {
			.regs = {
				3653478192, 4270069338, 3021428198, 996370356, 706472226, 4081505101, 939363309, 1390247191, 375600615, 3947954587, 460293041, 2091232588, 1569275036, 1288948268, 629785221, 4966152, 15634576, 1559, 1852530
			},
			.prefetch0 = 18947,
			.prefetch1 = 2283,
			.ram = tstb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3653478192, 4270069338, 3021428198, 996370356, 706472226, 4081505101, 939363309, 1390247191, 375600615, 3947954587, 460293041, 2091232588, 1569275036, 1288948268, 629785221, 4966152, 15634576, 1560, 1852532
			},
			.prefetch0 = 2283,
			.prefetch1 = 28122,
			.ram = tstb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = tstb_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 TST.b -(A6) 4a26",
		.initial = {
			.regs = {
				3394149799, 2432289084, 3575609669, 220149372, 4147814026, 951672593, 3741464514, 924224133, 1606749287, 1005609267, 438062614, 1169936169, 3899032377, 49552642, 1664197776, 7275496, 4416984, 32780, 15704834
			},
			.prefetch0 = 18982,
			.prefetch1 = 64912,
			.ram = tstb_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3394149799, 2432289084, 3575609669, 220149372, 4147814026, 951672593, 3741464514, 924224133, 1606749287, 1005609267, 438062614, 1169936169, 3899032377, 49552642, 1664197775, 7275496, 4416984, 32776, 15704836
			},
			.prefetch0 = 64912,
			.prefetch1 = 51773,
			.ram = tstb_final_ram_2,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_2,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "003 TST.b D3 4a03",
		.initial = {
			.regs = {
				3531313540, 2611956, 3887228338, 3504380689, 3729774346, 815942426, 1295795707, 9736355, 3356234418, 3736951169, 3310101754, 3610661738, 3488990658, 3681892337, 3625655281, 2936724, 10274730, 10014, 4429084
			},
			.prefetch0 = 18947,
			.prefetch1 = 41245,
			.ram = tstb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3531313540, 2611956, 3887228338, 3504380689, 3729774346, 815942426, 1295795707, 9736355, 3356234418, 3736951169, 3310101754, 3610661738, 3488990658, 3681892337, 3625655281, 2936724, 10274730, 10000, 4429086
			},
			.prefetch0 = 41245,
			.prefetch1 = 40091,
			.ram = tstb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = tstb_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 TST.b (d16, A4) 4a2c",
		.initial = {
			.regs = {
				3765042838, 2723690688, 2986989279, 884354712, 3003501393, 405160681, 3835526060, 2004172083, 1383200603, 637431811, 4193508660, 3292005185, 3526883113, 1137931956, 1656061425, 4489944, 14932092, 33821, 6649852
			},
			.prefetch0 = 18988,
			.prefetch1 = 58025,
			.ram = tstb_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3765042838, 2723690688, 2986989279, 884354712, 3003501393, 405160681, 3835526060, 2004172083, 1383200603, 637431811, 4193508660, 3292005185, 3526883113, 1137931956, 1656061425, 4489944, 14932092, 33816, 6649856
			},
			.prefetch0 = 40671,
			.prefetch1 = 7777,
			.ram = tstb_final_ram_4,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 TST.b (d8, A1, Xn) 4a31",
		.initial = {
			.regs = {
				3179715758, 4070748498, 4048030811, 580781650, 2759641051, 2068723379, 1669942169, 3350170645, 782229927, 2221344372, 3018764891, 34731418, 803419802, 2611742925, 2266055126, 10138068, 3761676, 8979, 8712280
			},
			.prefetch0 = 18993,
			.prefetch1 = 23046,
			.ram = tstb_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3179715758, 4070748498, 4048030811, 580781650, 2759641051, 2068723379, 1669942169, 3350170645, 782229927, 2221344372, 3018764891, 34731418, 803419802, 2611742925, 2266055126, 10138068, 3761676, 8976, 8712284
			},
			.prefetch0 = 17670,
			.prefetch1 = 12127,
			.ram = tstb_final_ram_5,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_5,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "006 TST.b -(A5) 4a25",
		.initial = {
			.regs = {
				594785978, 665955692, 2203316831, 1442102996, 3185534168, 2398394662, 2431946924, 3915310949, 1456012789, 3059135120, 584423315, 2242074402, 2115472767, 703160916, 1919771612, 15080442, 58076, 42754, 14804346
			},
			.prefetch0 = 18981,
			.prefetch1 = 14265,
			.ram = tstb_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				594785978, 665955692, 2203316831, 1442102996, 3185534168, 2398394662, 2431946924, 3915310949, 1456012789, 3059135120, 584423315, 2242074402, 2115472767, 703160915, 1919771612, 15080442, 58076, 42752, 14804348
			},
			.prefetch0 = 14265,
			.prefetch1 = 30377,
			.ram = tstb_final_ram_6,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_6,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "007 TST.b (A5)+ 4a1d",
		.initial = {
			.regs = {
				2232386342, 1286415155, 3631736557, 1108941731, 2383975319, 3863368299, 2280103326, 3534444061, 250569691, 2406487112, 2143640142, 1696439593, 3363341013, 1833008806, 3775844949, 1788948, 8814198, 0, 3356760
			},
			.prefetch0 = 18973,
			.prefetch1 = 11761,
			.ram = tstb_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2232386342, 1286415155, 3631736557, 1108941731, 2383975319, 3863368299, 2280103326, 3534444061, 250569691, 2406487112, 2143640142, 1696439593, 3363341013, 1833008807, 3775844949, 1788948, 8814198, 0, 3356762
			},
			.prefetch0 = 11761,
			.prefetch1 = 30993,
			.ram = tstb_final_ram_7,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_7,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "008 TST.b -(A4) 4a24",
		.initial = {
			.regs = {
				2796579161, 3190635072, 1814857510, 253742369, 140712533, 3316994811, 133468435, 169726511, 393763085, 2461149718, 3967135559, 3607848605, 2276053881, 1495905486, 2175829591, 1639120, 2376176, 264, 3591556
			},
			.prefetch0 = 18980,
			.prefetch1 = 7160,
			.ram = tstb_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2796579161, 3190635072, 1814857510, 253742369, 140712533, 3316994811, 133468435, 169726511, 393763085, 2461149718, 3967135559, 3607848605, 2276053880, 1495905486, 2175829591, 1639120, 2376176, 264, 3591558
			},
			.prefetch0 = 7160,
			.prefetch1 = 50815,
			.ram = tstb_final_ram_8,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_8,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "009 TST.b (d16, A7) 4a2f",
		.initial = {
			.regs = {
				560016343, 2355265452, 3511249197, 3848253671, 733235944, 2276780703, 3732083727, 2906885206, 1769877321, 1020891987, 2744472599, 187821374, 439630802, 3103483494, 2156746542, 10345894, 14108924, 1547, 13987996
			},
			.prefetch0 = 18991,
			.prefetch1 = 26795,
			.ram = tstb_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				560016343, 2355265452, 3511249197, 3848253671, 733235944, 2276780703, 3732083727, 2906885206, 1769877321, 1020891987, 2744472599, 187821374, 439630802, 3103483494, 2156746542, 10345894, 14108924, 1544, 13988000
			},
			.prefetch0 = 8384,
			.prefetch1 = 29316,
			.ram = tstb_final_ram_9,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 TST.b (d16, A6) 4a2e",
		.initial = {
			.regs = {
				3845898654, 3162164338, 2148331109, 1699063963, 2330221500, 3583919521, 3833212172, 1681648412, 370416501, 840743019, 3636206660, 1759243008, 1607252968, 2796979812, 1154314362, 4066974, 14292188, 34583, 3531176
			},
			.prefetch0 = 18990,
			.prefetch1 = 10101,
			.ram = tstb_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3845898654, 3162164338, 2148331109, 1699063963, 2330221500, 3583919521, 3833212172, 1681648412, 370416501, 840743019, 3636206660, 1759243008, 1607252968, 2796979812, 1154314362, 4066974, 14292188, 34576, 3531180
			},
			.prefetch0 = 17523,
			.prefetch1 = 45147,
			.ram = tstb_final_ram_10,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 TST.b -(A4) 4a24",
		.initial = {
			.regs = {
				1639060794, 2855370605, 1036086566, 1620741035, 1808288670, 436008654, 2557445313, 3912800559, 520129105, 481884960, 4164221910, 3010206819, 2680857191, 2222113464, 363537887, 5638066, 12224330, 33025, 6631750
			},
			.prefetch0 = 18980,
			.prefetch1 = 26720,
			.ram = tstb_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1639060794, 2855370605, 1036086566, 1620741035, 1808288670, 436008654, 2557445313, 3912800559, 520129105, 481884960, 4164221910, 3010206819, 2680857190, 2222113464, 363537887, 5638066, 12224330, 33032, 6631752
			},
			.prefetch0 = 26720,
			.prefetch1 = 51930,
			.ram = tstb_final_ram_11,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_11,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "012 TST.b -(A3) 4a23",
		.initial = {
			.regs = {
				819977642, 3664447582, 1761973869, 716991473, 360699483, 4257290356, 470224939, 1300225499, 1923456196, 3789758114, 1327298715, 2375845650, 2180912177, 557170918, 618715553, 3919598, 13494606, 42778, 7171640
			},
			.prefetch0 = 18979,
			.prefetch1 = 8102,
			.ram = tstb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				819977642, 3664447582, 1761973869, 716991473, 360699483, 4257290356, 470224939, 1300225499, 1923456196, 3789758114, 1327298715, 2375845649, 2180912177, 557170918, 618715553, 3919598, 13494606, 42768, 7171642
			},
			.prefetch0 = 8102,
			.prefetch1 = 1427,
			.ram = tstb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_12,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "013 TST.b D4 4a04",
		.initial = {
			.regs = {
				3519087367, 4051319600, 1809607452, 3178475887, 880433593, 3820339377, 400912759, 2988107072, 354952749, 205798692, 3737139176, 2867698811, 3642362995, 422160903, 2574504440, 2482392, 13238714, 33536, 8989704
			},
			.prefetch0 = 18948,
			.prefetch1 = 15740,
			.ram = tstb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3519087367, 4051319600, 1809607452, 3178475887, 880433593, 3820339377, 400912759, 2988107072, 354952749, 205798692, 3737139176, 2867698811, 3642362995, 422160903, 2574504440, 2482392, 13238714, 33544, 8989706
			},
			.prefetch0 = 15740,
			.prefetch1 = 60974,
			.ram = tstb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = tstb_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 TST.b (A2)+ 4a1a",
		.initial = {
			.regs = {
				2002792436, 3510313466, 2634965792, 2253972016, 2320967157, 1219676440, 206861695, 1562814306, 758571751, 3486058695, 3103491946, 2729903406, 3296846413, 4189272218, 3985864659, 14959846, 12499776, 42753, 11128012
			},
			.prefetch0 = 18970,
			.prefetch1 = 40476,
			.ram = tstb_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2002792436, 3510313466, 2634965792, 2253972016, 2320967157, 1219676440, 206861695, 1562814306, 758571751, 3486058695, 3103491947, 2729903406, 3296846413, 4189272218, 3985864659, 14959846, 12499776, 42760, 11128014
			},
			.prefetch0 = 40476,
			.prefetch1 = 41353,
			.ram = tstb_final_ram_14,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 TST.b D3 4a03",
		.initial = {
			.regs = {
				3129077036, 551790919, 2243030673, 3410683938, 3481522058, 3129961608, 1238272320, 685489281, 1851979219, 844418719, 2789958598, 2247927328, 4258931428, 525785423, 3143856938, 1261260, 16125324, 41734, 12410308
			},
			.prefetch0 = 18947,
			.prefetch1 = 9405,
			.ram = tstb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3129077036, 551790919, 2243030673, 3410683938, 3481522058, 3129961608, 1238272320, 685489281, 1851979219, 844418719, 2789958598, 2247927328, 4258931428, 525785423, 3143856938, 1261260, 16125324, 41728, 12410310
			},
			.prefetch0 = 9405,
			.prefetch1 = 3652,
			.ram = tstb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = tstb_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "016 TST.b (d8, A3, Xn) 4a33",
		.initial = {
			.regs = {
				2864312507, 3047579988, 1148863427, 654771727, 1092341240, 1880286887, 3904694584, 2928758428, 3602270119, 470649299, 1514168801, 121959007, 2343813544, 144678188, 3957738326, 9086090, 3914116, 42757, 13910360
			},
			.prefetch0 = 18995,
			.prefetch1 = 27840,
			.ram = tstb_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2864312507, 3047579988, 1148863427, 654771727, 1092341240, 1880286887, 3904694584, 2928758428, 3602270119, 470649299, 1514168801, 121959007, 2343813544, 144678188, 3957738326, 9086090, 3914116, 42760, 13910364
			},
			.prefetch0 = 4727,
			.prefetch1 = 16937,
			.ram = tstb_final_ram_16,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_16,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "017 TST.b -(A1) 4a21",
		.initial = {
			.regs = {
				217467747, 983682389, 843458096, 1207569911, 3379193475, 4062720157, 3340601369, 1728546129, 1090056370, 2333919515, 275487048, 1377254528, 1980154815, 4225957984, 1974197208, 6869226, 1520502, 41244, 3755206
			},
			.prefetch0 = 18977,
			.prefetch1 = 13701,
			.ram = tstb_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				217467747, 983682389, 843458096, 1207569911, 3379193475, 4062720157, 3340601369, 1728546129, 1090056370, 2333919514, 275487048, 1377254528, 1980154815, 4225957984, 1974197208, 6869226, 1520502, 41232, 3755208
			},
			.prefetch0 = 13701,
			.prefetch1 = 42393,
			.ram = tstb_final_ram_17,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_17,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "018 TST.b D2 4a02",
		.initial = {
			.regs = {
				3210168132, 1194020901, 1795697772, 2708495992, 1378610123, 4247379145, 888594843, 1975746468, 1237100009, 2917732874, 1328543413, 673440844, 961155738, 3047623405, 1662543258, 14368418, 257310, 41755, 11136624
			},
			.prefetch0 = 18946,
			.prefetch1 = 40141,
			.ram = tstb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3210168132, 1194020901, 1795697772, 2708495992, 1378610123, 4247379145, 888594843, 1975746468, 1237100009, 2917732874, 1328543413, 673440844, 961155738, 3047623405, 1662543258, 14368418, 257310, 41744, 11136626
			},
			.prefetch0 = 40141,
			.prefetch1 = 54043,
			.ram = tstb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = tstb_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 TST.b (A0) 4a10",
		.initial = {
			.regs = {
				3726326721, 3685197795, 3773986050, 93328678, 3295653498, 3910401469, 1995501678, 307824576, 3480528560, 915019022, 1901594201, 2212452857, 4068832920, 1920869124, 1250777402, 6302884, 2649296, 1299, 5542920
			},
			.prefetch0 = 18960,
			.prefetch1 = 37120,
			.ram = tstb_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3726326721, 3685197795, 3773986050, 93328678, 3295653498, 3910401469, 1995501678, 307824576, 3480528560, 915019022, 1901594201, 2212452857, 4068832920, 1920869124, 1250777402, 6302884, 2649296, 1304, 5542922
			},
			.prefetch0 = 37120,
			.prefetch1 = 10503,
			.ram = tstb_final_ram_19,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 TST.b -(A0) 4a20",
		.initial = {
			.regs = {
				3849525369, 2059155834, 3674904862, 2861612721, 301132190, 3247227313, 4168384968, 2993258925, 2077968804, 3259960100, 1711225775, 123057778, 1848992142, 302089394, 1888311119, 10637422, 5305186, 41238, 16094282
			},
			.prefetch0 = 18976,
			.prefetch1 = 12976,
			.ram = tstb_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3849525369, 2059155834, 3674904862, 2861612721, 301132190, 3247227313, 4168384968, 2993258925, 2077968803, 3259960100, 1711225775, 123057778, 1848992142, 302089394, 1888311119, 10637422, 5305186, 41240, 16094284
			},
			.prefetch0 = 12976,
			.prefetch1 = 2827,
			.ram = tstb_final_ram_20,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_20,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "021 TST.b (d16, A0) 4a28",
		.initial = {
			.regs = {
				2427809714, 3573521052, 4280053438, 2170798369, 1320885488, 981301129, 2748498479, 2567288375, 1971673577, 2852018907, 2081233906, 1749404899, 3258263229, 65048580, 1752432921, 11182362, 1824952, 515, 7760868
			},
			.prefetch0 = 18984,
			.prefetch1 = 12586,
			.ram = tstb_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2427809714, 3573521052, 4280053438, 2170798369, 1320885488, 981301129, 2748498479, 2567288375, 1971673577, 2852018907, 2081233906, 1749404899, 3258263229, 65048580, 1752432921, 11182362, 1824952, 512, 7760872
			},
			.prefetch0 = 28742,
			.prefetch1 = 45658,
			.ram = tstb_final_ram_21,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_21,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "022 TST.b -(A3) 4a23",
		.initial = {
			.regs = {
				3710621393, 1697479284, 163162186, 868831511, 1334625078, 1368143391, 1370081028, 2836062172, 2707576014, 3173112628, 2150670381, 1968035512, 1763816851, 2561200987, 887418408, 16333720, 6494022, 41753, 5226550
			},
			.prefetch0 = 18979,
			.prefetch1 = 26197,
			.ram = tstb_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3710621393, 1697479284, 163162186, 868831511, 1334625078, 1368143391, 1370081028, 2836062172, 2707576014, 3173112628, 2150670381, 1968035511, 1763816851, 2561200987, 887418408, 16333720, 6494022, 41752, 5226552
			},
			.prefetch0 = 26197,
			.prefetch1 = 28892,
			.ram = tstb_final_ram_22,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_22,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "023 TST.b -(A1) 4a21",
		.initial = {
			.regs = {
				4022732082, 2707043376, 3202042445, 296366331, 2902259479, 3297987432, 704513069, 3576366741, 816625706, 602282842, 3491624583, 1487796891, 2023237251, 251795079, 1122633435, 70106, 6303280, 8734, 9378436
			},
			.prefetch0 = 18977,
			.prefetch1 = 12621,
			.ram = tstb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4022732082, 2707043376, 3202042445, 296366331, 2902259479, 3297987432, 704513069, 3576366741, 816625706, 602282841, 3491624583, 1487796891, 2023237251, 251795079, 1122633435, 70106, 6303280, 8720, 9378438
			},
			.prefetch0 = 12621,
			.prefetch1 = 369,
			.ram = tstb_final_ram_23,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_23,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "024 TST.b (d16, A5) 4a2d",
		.initial = {
			.regs = {
				1217062405, 438745931, 1383537747, 179439854, 2092395902, 2210971880, 2218336281, 4116776101, 1136925438, 4277250956, 227934055, 1022229981, 2111838275, 702447591, 2452980657, 14698660, 11065202, 42752, 523878
			},
			.prefetch0 = 18989,
			.prefetch1 = 55137,
			.ram = tstb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1217062405, 438745931, 1383537747, 179439854, 2092395902, 2210971880, 2218336281, 4116776101, 1136925438, 4277250956, 227934055, 1022229981, 2111838275, 702447591, 2452980657, 14698660, 11065202, 42752, 523882
			},
			.prefetch0 = 27915,
			.prefetch1 = 44381,
			.ram = tstb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_24,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "025 TST.b -(A4) 4a24",
		.initial = {
			.regs = {
				3745419221, 2788429143, 663757074, 2976537987, 276998925, 2375996901, 1752189861, 1924893233, 2161108880, 3399624513, 3898299565, 2064206342, 2337360555, 711617951, 2476032024, 10609980, 11587786, 33293, 11713970
			},
			.prefetch0 = 18980,
			.prefetch1 = 47913,
			.ram = tstb_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3745419221, 2788429143, 663757074, 2976537987, 276998925, 2375996901, 1752189861, 1924893233, 2161108880, 3399624513, 3898299565, 2064206342, 2337360554, 711617951, 2476032024, 10609980, 11587786, 33288, 11713972
			},
			.prefetch0 = 47913,
			.prefetch1 = 12861,
			.ram = tstb_final_ram_25,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_25,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "026 TST.b D0 4a00",
		.initial = {
			.regs = {
				2338815112, 2311793481, 2530946593, 3828759503, 2637010397, 3026941692, 3606597139, 1777645388, 1571952662, 3078025246, 2246328051, 890558243, 2347718540, 577601684, 3658148322, 1091196, 6476490, 42506, 3029604
			},
			.prefetch0 = 18944,
			.prefetch1 = 36735,
			.ram = tstb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2338815112, 2311793481, 2530946593, 3828759503, 2637010397, 3026941692, 3606597139, 1777645388, 1571952662, 3078025246, 2246328051, 890558243, 2347718540, 577601684, 3658148322, 1091196, 6476490, 42504, 3029606
			},
			.prefetch0 = 36735,
			.prefetch1 = 29900,
			.ram = tstb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = tstb_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 TST.b (d8, A0, Xn) 4a30",
		.initial = {
			.regs = {
				3564178585, 4176167562, 3198918018, 3481050111, 1279813612, 296096517, 949920875, 83572434, 3836919417, 2032662217, 291299745, 1638106097, 224901578, 1233497198, 2260598189, 11088346, 15868680, 42271, 12791442
			},
			.prefetch0 = 18992,
			.prefetch1 = 32313,
			.ram = tstb_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3564178585, 4176167562, 3198918018, 3481050111, 1279813612, 296096517, 949920875, 83572434, 3836919417, 2032662217, 291299745, 1638106097, 224901578, 1233497198, 2260598189, 11088346, 15868680, 42256, 12791446
			},
			.prefetch0 = 55903,
			.prefetch1 = 29019,
			.ram = tstb_final_ram_27,
			.ram_len = 10,
		},
		.transactions = tstb_transactions_27,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "028 TST.b -(A5) 4a25",
		.initial = {
			.regs = {
				522987528, 4186530136, 1981483280, 3504093116, 3636740656, 289927203, 3081803225, 1494349414, 3218387272, 2250832395, 800812462, 2399300958, 169335589, 998186476, 4101676499, 13223622, 13579954, 8222, 13547246
			},
			.prefetch0 = 18981,
			.prefetch1 = 7535,
			.ram = tstb_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				522987528, 4186530136, 1981483280, 3504093116, 3636740656, 289927203, 3081803225, 1494349414, 3218387272, 2250832395, 800812462, 2399300958, 169335589, 998186475, 4101676499, 13223622, 13579954, 8208, 13547248
			},
			.prefetch0 = 7535,
			.prefetch1 = 45144,
			.ram = tstb_final_ram_28,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_28,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "029 TST.b (A1) 4a11",
		.initial = {
			.regs = {
				1558628575, 1693548968, 1607429429, 105109670, 4206780159, 2443935040, 3132885928, 3106675810, 357274241, 3045933321, 2864667601, 1368991945, 115220058, 1391827966, 477432112, 12949812, 11660858, 8710, 926486
			},
			.prefetch0 = 18961,
			.prefetch1 = 63140,
			.ram = tstb_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1558628575, 1693548968, 1607429429, 105109670, 4206780159, 2443935040, 3132885928, 3106675810, 357274241, 3045933321, 2864667601, 1368991945, 115220058, 1391827966, 477432112, 12949812, 11660858, 8704, 926488
			},
			.prefetch0 = 63140,
			.prefetch1 = 7365,
			.ram = tstb_final_ram_29,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_29,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "030 TST.b (A3) 4a13",
		.initial = {
			.regs = {
				3226428049, 3120495517, 2560521404, 898927383, 4103430006, 4015814673, 3846417277, 2473778383, 3530231522, 2303346578, 2822015616, 3401638957, 1892302992, 3735500316, 812781746, 553834, 2659500, 1542, 4039518
			},
			.prefetch0 = 18963,
			.prefetch1 = 50847,
			.ram = tstb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3226428049, 3120495517, 2560521404, 898927383, 4103430006, 4015814673, 3846417277, 2473778383, 3530231522, 2303346578, 2822015616, 3401638957, 1892302992, 3735500316, 812781746, 553834, 2659500, 1544, 4039520
			},
			.prefetch0 = 50847,
			.prefetch1 = 51043,
			.ram = tstb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 TST.b (A0) 4a10",
		.initial = {
			.regs = {
				1942902564, 899966320, 61555132, 2221693362, 2619565546, 985958412, 3023458382, 2731397497, 1534748368, 1237865167, 84928685, 39314393, 2003196848, 4203794837, 870993541, 3801728, 1334124, 9503, 12002116
			},
			.prefetch0 = 18960,
			.prefetch1 = 35861,
			.ram = tstb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1942902564, 899966320, 61555132, 2221693362, 2619565546, 985958412, 3023458382, 2731397497, 1534748368, 1237865167, 84928685, 39314393, 2003196848, 4203794837, 870993541, 3801728, 1334124, 9496, 12002118
			},
			.prefetch0 = 35861,
			.prefetch1 = 31570,
			.ram = tstb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = tstb_transactions_31,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_TSTB_H */