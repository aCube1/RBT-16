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

const uint32_t TSTB_TEST_COUNT = 16;
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
};

#endif /* RBT_TSTB_H */