#ifndef RBT_MOVEPL_H
#define RBT_MOVEPL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte movepl_initial_ram_0[] = {
		{ .addr = 0x1a9b92, .byte = 0x01 },
		{ .addr = 0x1a9b93, .byte = 0x4a },
		{ .addr = 0x1a9b94, .byte = 0xf2 },
		{ .addr = 0x1a9b95, .byte = 0xa4 },
		{ .addr = 0x1a9b96, .byte = 0xde },
		{ .addr = 0x1a9b97, .byte = 0x35 },
		{ .addr = 0x572694, .byte = 0x59 },
		{ .addr = 0x572695, .byte = 0xa8 },
		{ .addr = 0x572696, .byte = 0xfd },
		{ .addr = 0x572697, .byte = 0x4f },
		{ .addr = 0x572698, .byte = 0xc8 },
		{ .addr = 0x572699, .byte = 0xfc },
		{ .addr = 0x57269a, .byte = 0x2a },
		{ .addr = 0x57269b, .byte = 0xbc },
		{ .addr = 0x1a9b98, .byte = 0x28 },
		{ .addr = 0x1a9b99, .byte = 0xcd }
};

static const SST_RamByte movepl_final_ram_0[] = {
		{ .addr = 0x1a9b92, .byte = 0x01 },
		{ .addr = 0x1a9b93, .byte = 0x4a },
		{ .addr = 0x1a9b94, .byte = 0xf2 },
		{ .addr = 0x1a9b95, .byte = 0xa4 },
		{ .addr = 0x1a9b96, .byte = 0xde },
		{ .addr = 0x1a9b97, .byte = 0x35 },
		{ .addr = 0x572694, .byte = 0x59 },
		{ .addr = 0x572695, .byte = 0xa8 },
		{ .addr = 0x572696, .byte = 0xfd },
		{ .addr = 0x572697, .byte = 0x4f },
		{ .addr = 0x572698, .byte = 0xc8 },
		{ .addr = 0x572699, .byte = 0xfc },
		{ .addr = 0x57269a, .byte = 0x2a },
		{ .addr = 0x57269b, .byte = 0xbc },
		{ .addr = 0x1a9b98, .byte = 0x28 },
		{ .addr = 0x1a9b99, .byte = 0xcd }
};

static const SST_Transaction movepl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1743766, .data = 56885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5711508, .data = 168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5711510, .data = 79, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5711512, .data = 252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5711514, .data = 188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1743768, .data = 10445, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_1[] = {
		{ .addr = 0x7c8a28, .byte = 0x09 },
		{ .addr = 0x7c8a29, .byte = 0x4e },
		{ .addr = 0x7c8a2a, .byte = 0x9b },
		{ .addr = 0x7c8a2b, .byte = 0x6b },
		{ .addr = 0x7c8a2c, .byte = 0xec },
		{ .addr = 0x7c8a2d, .byte = 0x61 },
		{ .addr = 0x093176, .byte = 0xeb },
		{ .addr = 0x093177, .byte = 0xef },
		{ .addr = 0x093178, .byte = 0x28 },
		{ .addr = 0x093179, .byte = 0xcc },
		{ .addr = 0x09317a, .byte = 0xbf },
		{ .addr = 0x09317b, .byte = 0x92 },
		{ .addr = 0x09317c, .byte = 0xf7 },
		{ .addr = 0x09317d, .byte = 0xdf },
		{ .addr = 0x7c8a2e, .byte = 0xe5 },
		{ .addr = 0x7c8a2f, .byte = 0x0b }
};

static const SST_RamByte movepl_final_ram_1[] = {
		{ .addr = 0x7c8a28, .byte = 0x09 },
		{ .addr = 0x7c8a29, .byte = 0x4e },
		{ .addr = 0x7c8a2a, .byte = 0x9b },
		{ .addr = 0x7c8a2b, .byte = 0x6b },
		{ .addr = 0x7c8a2c, .byte = 0xec },
		{ .addr = 0x7c8a2d, .byte = 0x61 },
		{ .addr = 0x093176, .byte = 0xeb },
		{ .addr = 0x093177, .byte = 0xef },
		{ .addr = 0x093178, .byte = 0x28 },
		{ .addr = 0x093179, .byte = 0xcc },
		{ .addr = 0x09317a, .byte = 0xbf },
		{ .addr = 0x09317b, .byte = 0x92 },
		{ .addr = 0x09317c, .byte = 0xf7 },
		{ .addr = 0x09317d, .byte = 0xdf },
		{ .addr = 0x7c8a2e, .byte = 0xe5 },
		{ .addr = 0x7c8a2f, .byte = 0x0b }
};

static const SST_Transaction movepl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8161836, .data = 60513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 602486, .data = 60160, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 602488, .data = 10240, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 602490, .data = 48896, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 602492, .data = 63232, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8161838, .data = 58635, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_2[] = {
		{ .addr = 0x765778, .byte = 0x05 },
		{ .addr = 0x765779, .byte = 0xca },
		{ .addr = 0x76577a, .byte = 0xf1 },
		{ .addr = 0x76577b, .byte = 0x3d },
		{ .addr = 0x76577c, .byte = 0x1c },
		{ .addr = 0x76577d, .byte = 0xc7 },
		{ .addr = 0x76577e, .byte = 0xd9 },
		{ .addr = 0x76577f, .byte = 0x5e }
};

static const SST_RamByte movepl_final_ram_2[] = {
		{ .addr = 0x765778, .byte = 0x05 },
		{ .addr = 0x765779, .byte = 0xca },
		{ .addr = 0x76577a, .byte = 0xf1 },
		{ .addr = 0x76577b, .byte = 0x3d },
		{ .addr = 0x76577c, .byte = 0x1c },
		{ .addr = 0x76577d, .byte = 0xc7 },
		{ .addr = 0x6fb39e, .byte = 0xbd },
		{ .addr = 0x6fb39f, .byte = 0x00 },
		{ .addr = 0x6fb3a0, .byte = 0x27 },
		{ .addr = 0x6fb3a1, .byte = 0x00 },
		{ .addr = 0x6fb3a2, .byte = 0x68 },
		{ .addr = 0x6fb3a3, .byte = 0x00 },
		{ .addr = 0x6fb3a4, .byte = 0x62 },
		{ .addr = 0x6fb3a5, .byte = 0x00 },
		{ .addr = 0x76577e, .byte = 0xd9 },
		{ .addr = 0x76577f, .byte = 0x5e }
};

static const SST_Transaction movepl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7755644, .data = 7367, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7320478, .data = 48384, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7320480, .data = 9984, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7320482, .data = 26624, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7320484, .data = 25088, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7755646, .data = 55646, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_3[] = {
		{ .addr = 0xdcfd80, .byte = 0x07 },
		{ .addr = 0xdcfd81, .byte = 0xcf },
		{ .addr = 0xdcfd82, .byte = 0x59 },
		{ .addr = 0xdcfd83, .byte = 0xf9 },
		{ .addr = 0xdcfd84, .byte = 0x5d },
		{ .addr = 0xdcfd85, .byte = 0xa5 },
		{ .addr = 0xdcfd86, .byte = 0x3d },
		{ .addr = 0xdcfd87, .byte = 0x36 }
};

static const SST_RamByte movepl_final_ram_3[] = {
		{ .addr = 0xdcfd80, .byte = 0x07 },
		{ .addr = 0xdcfd81, .byte = 0xcf },
		{ .addr = 0xdcfd82, .byte = 0x59 },
		{ .addr = 0xdcfd83, .byte = 0xf9 },
		{ .addr = 0xdcfd84, .byte = 0x5d },
		{ .addr = 0xdcfd85, .byte = 0xa5 },
		{ .addr = 0xd0d4bc, .byte = 0x00 },
		{ .addr = 0xd0d4bd, .byte = 0xe0 },
		{ .addr = 0xd0d4be, .byte = 0x00 },
		{ .addr = 0xd0d4bf, .byte = 0x0f },
		{ .addr = 0xd0d4c0, .byte = 0x00 },
		{ .addr = 0xd0d4c1, .byte = 0x2a },
		{ .addr = 0xd0d4c2, .byte = 0x00 },
		{ .addr = 0xd0d4c3, .byte = 0xce },
		{ .addr = 0xdcfd86, .byte = 0x3d },
		{ .addr = 0xdcfd87, .byte = 0x36 }
};

static const SST_Transaction movepl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14482820, .data = 23973, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13685948, .data = 224, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13685950, .data = 15, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13685952, .data = 42, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13685954, .data = 206, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14482822, .data = 15670, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_4[] = {
		{ .addr = 0x2fe7dc, .byte = 0x01 },
		{ .addr = 0x2fe7dd, .byte = 0x4d },
		{ .addr = 0x2fe7de, .byte = 0x1c },
		{ .addr = 0x2fe7df, .byte = 0xad },
		{ .addr = 0x2fe7e0, .byte = 0x2e },
		{ .addr = 0x2fe7e1, .byte = 0x60 },
		{ .addr = 0xc17964, .byte = 0xf2 },
		{ .addr = 0xc17965, .byte = 0x77 },
		{ .addr = 0xc17966, .byte = 0xa6 },
		{ .addr = 0xc17967, .byte = 0x11 },
		{ .addr = 0xc17968, .byte = 0xcd },
		{ .addr = 0xc17969, .byte = 0x91 },
		{ .addr = 0xc1796a, .byte = 0xa0 },
		{ .addr = 0xc1796b, .byte = 0x86 },
		{ .addr = 0x2fe7e2, .byte = 0xa7 },
		{ .addr = 0x2fe7e3, .byte = 0x8a }
};

static const SST_RamByte movepl_final_ram_4[] = {
		{ .addr = 0x2fe7dc, .byte = 0x01 },
		{ .addr = 0x2fe7dd, .byte = 0x4d },
		{ .addr = 0x2fe7de, .byte = 0x1c },
		{ .addr = 0x2fe7df, .byte = 0xad },
		{ .addr = 0x2fe7e0, .byte = 0x2e },
		{ .addr = 0x2fe7e1, .byte = 0x60 },
		{ .addr = 0xc17964, .byte = 0xf2 },
		{ .addr = 0xc17965, .byte = 0x77 },
		{ .addr = 0xc17966, .byte = 0xa6 },
		{ .addr = 0xc17967, .byte = 0x11 },
		{ .addr = 0xc17968, .byte = 0xcd },
		{ .addr = 0xc17969, .byte = 0x91 },
		{ .addr = 0xc1796a, .byte = 0xa0 },
		{ .addr = 0xc1796b, .byte = 0x86 },
		{ .addr = 0x2fe7e2, .byte = 0xa7 },
		{ .addr = 0x2fe7e3, .byte = 0x8a }
};

static const SST_Transaction movepl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3139552, .data = 11872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12679524, .data = 119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12679526, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12679528, .data = 145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12679530, .data = 134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3139554, .data = 42890, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_5[] = {
		{ .addr = 0xc2487c, .byte = 0x0d },
		{ .addr = 0xc2487d, .byte = 0x4d },
		{ .addr = 0xc2487e, .byte = 0x3e },
		{ .addr = 0xc2487f, .byte = 0x57 },
		{ .addr = 0xc24880, .byte = 0x04 },
		{ .addr = 0xc24881, .byte = 0x22 },
		{ .addr = 0x6835f6, .byte = 0xde },
		{ .addr = 0x6835f7, .byte = 0xdd },
		{ .addr = 0x6835f8, .byte = 0xa0 },
		{ .addr = 0x6835f9, .byte = 0x6d },
		{ .addr = 0x6835fa, .byte = 0x99 },
		{ .addr = 0x6835fb, .byte = 0x19 },
		{ .addr = 0x6835fc, .byte = 0x05 },
		{ .addr = 0x6835fd, .byte = 0x8f },
		{ .addr = 0xc24882, .byte = 0x54 },
		{ .addr = 0xc24883, .byte = 0x5c }
};

static const SST_RamByte movepl_final_ram_5[] = {
		{ .addr = 0xc2487c, .byte = 0x0d },
		{ .addr = 0xc2487d, .byte = 0x4d },
		{ .addr = 0xc2487e, .byte = 0x3e },
		{ .addr = 0xc2487f, .byte = 0x57 },
		{ .addr = 0xc24880, .byte = 0x04 },
		{ .addr = 0xc24881, .byte = 0x22 },
		{ .addr = 0x6835f6, .byte = 0xde },
		{ .addr = 0x6835f7, .byte = 0xdd },
		{ .addr = 0x6835f8, .byte = 0xa0 },
		{ .addr = 0x6835f9, .byte = 0x6d },
		{ .addr = 0x6835fa, .byte = 0x99 },
		{ .addr = 0x6835fb, .byte = 0x19 },
		{ .addr = 0x6835fc, .byte = 0x05 },
		{ .addr = 0x6835fd, .byte = 0x8f },
		{ .addr = 0xc24882, .byte = 0x54 },
		{ .addr = 0xc24883, .byte = 0x5c }
};

static const SST_Transaction movepl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12732544, .data = 1058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6829558, .data = 56832, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6829560, .data = 40960, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6829562, .data = 39168, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6829564, .data = 1280, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12732546, .data = 21596, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_6[] = {
		{ .addr = 0xe049c0, .byte = 0x0d },
		{ .addr = 0xe049c1, .byte = 0x4d },
		{ .addr = 0xe049c2, .byte = 0x2e },
		{ .addr = 0xe049c3, .byte = 0xd4 },
		{ .addr = 0xe049c4, .byte = 0x4a },
		{ .addr = 0xe049c5, .byte = 0xa9 },
		{ .addr = 0x91cc32, .byte = 0x65 },
		{ .addr = 0x91cc33, .byte = 0x9b },
		{ .addr = 0x91cc34, .byte = 0x9d },
		{ .addr = 0x91cc35, .byte = 0xd1 },
		{ .addr = 0x91cc36, .byte = 0xd6 },
		{ .addr = 0x91cc37, .byte = 0x60 },
		{ .addr = 0x91cc38, .byte = 0x4b },
		{ .addr = 0x91cc39, .byte = 0xfb },
		{ .addr = 0xe049c6, .byte = 0x97 },
		{ .addr = 0xe049c7, .byte = 0xf2 }
};

static const SST_RamByte movepl_final_ram_6[] = {
		{ .addr = 0xe049c0, .byte = 0x0d },
		{ .addr = 0xe049c1, .byte = 0x4d },
		{ .addr = 0xe049c2, .byte = 0x2e },
		{ .addr = 0xe049c3, .byte = 0xd4 },
		{ .addr = 0xe049c4, .byte = 0x4a },
		{ .addr = 0xe049c5, .byte = 0xa9 },
		{ .addr = 0x91cc32, .byte = 0x65 },
		{ .addr = 0x91cc33, .byte = 0x9b },
		{ .addr = 0x91cc34, .byte = 0x9d },
		{ .addr = 0x91cc35, .byte = 0xd1 },
		{ .addr = 0x91cc36, .byte = 0xd6 },
		{ .addr = 0x91cc37, .byte = 0x60 },
		{ .addr = 0x91cc38, .byte = 0x4b },
		{ .addr = 0x91cc39, .byte = 0xfb },
		{ .addr = 0xe049c6, .byte = 0x97 },
		{ .addr = 0xe049c7, .byte = 0xf2 }
};

static const SST_Transaction movepl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14698948, .data = 19113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9554994, .data = 155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9554996, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9554998, .data = 96, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9555000, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14698950, .data = 38898, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_7[] = {
		{ .addr = 0xc6091a, .byte = 0x0b },
		{ .addr = 0xc6091b, .byte = 0x4f },
		{ .addr = 0xc6091c, .byte = 0x96 },
		{ .addr = 0xc6091d, .byte = 0x91 },
		{ .addr = 0xc6091e, .byte = 0x35 },
		{ .addr = 0xc6091f, .byte = 0xd8 },
		{ .addr = 0xad0bda, .byte = 0x45 },
		{ .addr = 0xad0bdb, .byte = 0x70 },
		{ .addr = 0xad0bdc, .byte = 0xc7 },
		{ .addr = 0xad0bdd, .byte = 0x31 },
		{ .addr = 0xad0bde, .byte = 0x38 },
		{ .addr = 0xad0bdf, .byte = 0xa1 },
		{ .addr = 0xad0be0, .byte = 0x33 },
		{ .addr = 0xad0be1, .byte = 0x73 },
		{ .addr = 0xc60920, .byte = 0x60 },
		{ .addr = 0xc60921, .byte = 0x78 }
};

static const SST_RamByte movepl_final_ram_7[] = {
		{ .addr = 0xc6091a, .byte = 0x0b },
		{ .addr = 0xc6091b, .byte = 0x4f },
		{ .addr = 0xc6091c, .byte = 0x96 },
		{ .addr = 0xc6091d, .byte = 0x91 },
		{ .addr = 0xc6091e, .byte = 0x35 },
		{ .addr = 0xc6091f, .byte = 0xd8 },
		{ .addr = 0xad0bda, .byte = 0x45 },
		{ .addr = 0xad0bdb, .byte = 0x70 },
		{ .addr = 0xad0bdc, .byte = 0xc7 },
		{ .addr = 0xad0bdd, .byte = 0x31 },
		{ .addr = 0xad0bde, .byte = 0x38 },
		{ .addr = 0xad0bdf, .byte = 0xa1 },
		{ .addr = 0xad0be0, .byte = 0x33 },
		{ .addr = 0xad0be1, .byte = 0x73 },
		{ .addr = 0xc60920, .byte = 0x60 },
		{ .addr = 0xc60921, .byte = 0x78 }
};

static const SST_Transaction movepl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12978462, .data = 13784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11340762, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11340764, .data = 49, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11340766, .data = 161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11340768, .data = 115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12978464, .data = 24696, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_8[] = {
		{ .addr = 0x139a06, .byte = 0x07 },
		{ .addr = 0x139a07, .byte = 0xcd },
		{ .addr = 0x139a08, .byte = 0x85 },
		{ .addr = 0x139a09, .byte = 0x86 },
		{ .addr = 0x139a0a, .byte = 0xef },
		{ .addr = 0x139a0b, .byte = 0xc0 },
		{ .addr = 0x139a0c, .byte = 0xa1 },
		{ .addr = 0x139a0d, .byte = 0xfe }
};

static const SST_RamByte movepl_final_ram_8[] = {
		{ .addr = 0x139a06, .byte = 0x07 },
		{ .addr = 0x139a07, .byte = 0xcd },
		{ .addr = 0x139a08, .byte = 0x85 },
		{ .addr = 0x139a09, .byte = 0x86 },
		{ .addr = 0x139a0a, .byte = 0xef },
		{ .addr = 0x139a0b, .byte = 0xc0 },
		{ .addr = 0xdec044, .byte = 0xe2 },
		{ .addr = 0xdec045, .byte = 0x00 },
		{ .addr = 0xdec046, .byte = 0xd1 },
		{ .addr = 0xdec047, .byte = 0x00 },
		{ .addr = 0xdec048, .byte = 0xbf },
		{ .addr = 0xdec049, .byte = 0x00 },
		{ .addr = 0xdec04a, .byte = 0x89 },
		{ .addr = 0xdec04b, .byte = 0x00 },
		{ .addr = 0x139a0c, .byte = 0xa1 },
		{ .addr = 0x139a0d, .byte = 0xfe }
};

static const SST_Transaction movepl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1284618, .data = 61376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14598212, .data = 57856, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14598214, .data = 53504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14598216, .data = 48896, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14598218, .data = 35072, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1284620, .data = 41470, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_9[] = {
		{ .addr = 0xc7f956, .byte = 0x03 },
		{ .addr = 0xc7f957, .byte = 0x4a },
		{ .addr = 0xc7f958, .byte = 0x6c },
		{ .addr = 0xc7f959, .byte = 0x0f },
		{ .addr = 0xc7f95a, .byte = 0x24 },
		{ .addr = 0xc7f95b, .byte = 0xfd },
		{ .addr = 0xe4ae3e, .byte = 0xeb },
		{ .addr = 0xe4ae3f, .byte = 0x76 },
		{ .addr = 0xe4ae40, .byte = 0xfc },
		{ .addr = 0xe4ae41, .byte = 0xe7 },
		{ .addr = 0xe4ae42, .byte = 0x70 },
		{ .addr = 0xe4ae43, .byte = 0x80 },
		{ .addr = 0xe4ae44, .byte = 0xc7 },
		{ .addr = 0xe4ae45, .byte = 0xb2 },
		{ .addr = 0xc7f95c, .byte = 0x28 },
		{ .addr = 0xc7f95d, .byte = 0xad }
};

static const SST_RamByte movepl_final_ram_9[] = {
		{ .addr = 0xc7f956, .byte = 0x03 },
		{ .addr = 0xc7f957, .byte = 0x4a },
		{ .addr = 0xc7f958, .byte = 0x6c },
		{ .addr = 0xc7f959, .byte = 0x0f },
		{ .addr = 0xc7f95a, .byte = 0x24 },
		{ .addr = 0xc7f95b, .byte = 0xfd },
		{ .addr = 0xe4ae3e, .byte = 0xeb },
		{ .addr = 0xe4ae3f, .byte = 0x76 },
		{ .addr = 0xe4ae40, .byte = 0xfc },
		{ .addr = 0xe4ae41, .byte = 0xe7 },
		{ .addr = 0xe4ae42, .byte = 0x70 },
		{ .addr = 0xe4ae43, .byte = 0x80 },
		{ .addr = 0xe4ae44, .byte = 0xc7 },
		{ .addr = 0xe4ae45, .byte = 0xb2 },
		{ .addr = 0xc7f95c, .byte = 0x28 },
		{ .addr = 0xc7f95d, .byte = 0xad }
};

static const SST_Transaction movepl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13105498, .data = 9469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14986814, .data = 60160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14986816, .data = 64512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14986818, .data = 28672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14986820, .data = 50944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13105500, .data = 10413, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_10[] = {
		{ .addr = 0x8e92de, .byte = 0x01 },
		{ .addr = 0x8e92df, .byte = 0x4c },
		{ .addr = 0x8e92e0, .byte = 0xa6 },
		{ .addr = 0x8e92e1, .byte = 0x33 },
		{ .addr = 0x8e92e2, .byte = 0x14 },
		{ .addr = 0x8e92e3, .byte = 0x54 },
		{ .addr = 0x8591d4, .byte = 0x41 },
		{ .addr = 0x8591d5, .byte = 0xcc },
		{ .addr = 0x8591d6, .byte = 0xfd },
		{ .addr = 0x8591d7, .byte = 0x8e },
		{ .addr = 0x8591d8, .byte = 0x9b },
		{ .addr = 0x8591d9, .byte = 0xf6 },
		{ .addr = 0x8591da, .byte = 0xea },
		{ .addr = 0x8591db, .byte = 0x53 },
		{ .addr = 0x8e92e4, .byte = 0xf4 },
		{ .addr = 0x8e92e5, .byte = 0xbe }
};

static const SST_RamByte movepl_final_ram_10[] = {
		{ .addr = 0x8e92de, .byte = 0x01 },
		{ .addr = 0x8e92df, .byte = 0x4c },
		{ .addr = 0x8e92e0, .byte = 0xa6 },
		{ .addr = 0x8e92e1, .byte = 0x33 },
		{ .addr = 0x8e92e2, .byte = 0x14 },
		{ .addr = 0x8e92e3, .byte = 0x54 },
		{ .addr = 0x8591d4, .byte = 0x41 },
		{ .addr = 0x8591d5, .byte = 0xcc },
		{ .addr = 0x8591d6, .byte = 0xfd },
		{ .addr = 0x8591d7, .byte = 0x8e },
		{ .addr = 0x8591d8, .byte = 0x9b },
		{ .addr = 0x8591d9, .byte = 0xf6 },
		{ .addr = 0x8591da, .byte = 0xea },
		{ .addr = 0x8591db, .byte = 0x53 },
		{ .addr = 0x8e92e4, .byte = 0xf4 },
		{ .addr = 0x8e92e5, .byte = 0xbe }
};

static const SST_Transaction movepl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9343714, .data = 5204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8753620, .data = 16640, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8753622, .data = 64768, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8753624, .data = 39680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8753626, .data = 59904, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9343716, .data = 62654, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_11[] = {
		{ .addr = 0x770368, .byte = 0x05 },
		{ .addr = 0x770369, .byte = 0x4b },
		{ .addr = 0x77036a, .byte = 0xab },
		{ .addr = 0x77036b, .byte = 0xcf },
		{ .addr = 0x77036c, .byte = 0x22 },
		{ .addr = 0x77036d, .byte = 0xcf },
		{ .addr = 0xdf443a, .byte = 0x9b },
		{ .addr = 0xdf443b, .byte = 0x6e },
		{ .addr = 0xdf443c, .byte = 0x90 },
		{ .addr = 0xdf443d, .byte = 0xb8 },
		{ .addr = 0xdf443e, .byte = 0xd6 },
		{ .addr = 0xdf443f, .byte = 0x50 },
		{ .addr = 0xdf4440, .byte = 0x35 },
		{ .addr = 0xdf4441, .byte = 0xe2 },
		{ .addr = 0x77036e, .byte = 0x86 },
		{ .addr = 0x77036f, .byte = 0x54 }
};

static const SST_RamByte movepl_final_ram_11[] = {
		{ .addr = 0x770368, .byte = 0x05 },
		{ .addr = 0x770369, .byte = 0x4b },
		{ .addr = 0x77036a, .byte = 0xab },
		{ .addr = 0x77036b, .byte = 0xcf },
		{ .addr = 0x77036c, .byte = 0x22 },
		{ .addr = 0x77036d, .byte = 0xcf },
		{ .addr = 0xdf443a, .byte = 0x9b },
		{ .addr = 0xdf443b, .byte = 0x6e },
		{ .addr = 0xdf443c, .byte = 0x90 },
		{ .addr = 0xdf443d, .byte = 0xb8 },
		{ .addr = 0xdf443e, .byte = 0xd6 },
		{ .addr = 0xdf443f, .byte = 0x50 },
		{ .addr = 0xdf4440, .byte = 0x35 },
		{ .addr = 0xdf4441, .byte = 0xe2 },
		{ .addr = 0x77036e, .byte = 0x86 },
		{ .addr = 0x77036f, .byte = 0x54 }
};

static const SST_Transaction movepl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7799660, .data = 8911, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14631994, .data = 110, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14631996, .data = 184, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14631998, .data = 80, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14632000, .data = 226, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7799662, .data = 34388, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_12[] = {
		{ .addr = 0x004220, .byte = 0x07 },
		{ .addr = 0x004221, .byte = 0xc8 },
		{ .addr = 0x004222, .byte = 0x57 },
		{ .addr = 0x004223, .byte = 0x91 },
		{ .addr = 0x004224, .byte = 0x00 },
		{ .addr = 0x004225, .byte = 0x08 },
		{ .addr = 0x004226, .byte = 0xcf },
		{ .addr = 0x004227, .byte = 0x46 }
};

static const SST_RamByte movepl_final_ram_12[] = {
		{ .addr = 0x004220, .byte = 0x07 },
		{ .addr = 0x004221, .byte = 0xc8 },
		{ .addr = 0x004222, .byte = 0x57 },
		{ .addr = 0x004223, .byte = 0x91 },
		{ .addr = 0x004224, .byte = 0x00 },
		{ .addr = 0x004225, .byte = 0x08 },
		{ .addr = 0xe14732, .byte = 0x00 },
		{ .addr = 0xe14733, .byte = 0x2e },
		{ .addr = 0xe14734, .byte = 0x00 },
		{ .addr = 0xe14735, .byte = 0x46 },
		{ .addr = 0xe14736, .byte = 0x00 },
		{ .addr = 0xe14737, .byte = 0xb1 },
		{ .addr = 0xe14738, .byte = 0x00 },
		{ .addr = 0xe14739, .byte = 0xa5 },
		{ .addr = 0x004226, .byte = 0xcf },
		{ .addr = 0x004227, .byte = 0x46 }
};

static const SST_Transaction movepl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16932, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14763826, .data = 46, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14763828, .data = 70, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14763830, .data = 177, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14763832, .data = 165, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16934, .data = 53062, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_13[] = {
		{ .addr = 0x4041ae, .byte = 0x0b },
		{ .addr = 0x4041af, .byte = 0xca },
		{ .addr = 0x4041b0, .byte = 0xd9 },
		{ .addr = 0x4041b1, .byte = 0x51 },
		{ .addr = 0x4041b2, .byte = 0x0a },
		{ .addr = 0x4041b3, .byte = 0x51 },
		{ .addr = 0x4041b4, .byte = 0x61 },
		{ .addr = 0x4041b5, .byte = 0x5b }
};

static const SST_RamByte movepl_final_ram_13[] = {
		{ .addr = 0x4041ae, .byte = 0x0b },
		{ .addr = 0x4041af, .byte = 0xca },
		{ .addr = 0x4041b0, .byte = 0xd9 },
		{ .addr = 0x4041b1, .byte = 0x51 },
		{ .addr = 0x4041b2, .byte = 0x0a },
		{ .addr = 0x4041b3, .byte = 0x51 },
		{ .addr = 0xcc68d6, .byte = 0x69 },
		{ .addr = 0xcc68d7, .byte = 0x00 },
		{ .addr = 0xcc68d8, .byte = 0xfe },
		{ .addr = 0xcc68d9, .byte = 0x00 },
		{ .addr = 0xcc68da, .byte = 0x45 },
		{ .addr = 0xcc68db, .byte = 0x00 },
		{ .addr = 0xcc68dc, .byte = 0x10 },
		{ .addr = 0xcc68dd, .byte = 0x00 },
		{ .addr = 0x4041b4, .byte = 0x61 },
		{ .addr = 0x4041b5, .byte = 0x5b }
};

static const SST_Transaction movepl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4211122, .data = 2641, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13396182, .data = 26880, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13396184, .data = 65024, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13396186, .data = 17664, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13396188, .data = 4096, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4211124, .data = 24923, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_14[] = {
		{ .addr = 0xaa46ca, .byte = 0x0b },
		{ .addr = 0xaa46cb, .byte = 0x4d },
		{ .addr = 0xaa46cc, .byte = 0x89 },
		{ .addr = 0xaa46cd, .byte = 0x9b },
		{ .addr = 0xaa46ce, .byte = 0xc3 },
		{ .addr = 0xaa46cf, .byte = 0xce },
		{ .addr = 0x8473ac, .byte = 0xe0 },
		{ .addr = 0x8473ad, .byte = 0xf7 },
		{ .addr = 0x8473ae, .byte = 0x32 },
		{ .addr = 0x8473af, .byte = 0x07 },
		{ .addr = 0x8473b0, .byte = 0xe8 },
		{ .addr = 0x8473b1, .byte = 0xdb },
		{ .addr = 0x8473b2, .byte = 0x24 },
		{ .addr = 0x8473b3, .byte = 0x00 },
		{ .addr = 0xaa46d0, .byte = 0x91 },
		{ .addr = 0xaa46d1, .byte = 0x1a }
};

static const SST_RamByte movepl_final_ram_14[] = {
		{ .addr = 0xaa46ca, .byte = 0x0b },
		{ .addr = 0xaa46cb, .byte = 0x4d },
		{ .addr = 0xaa46cc, .byte = 0x89 },
		{ .addr = 0xaa46cd, .byte = 0x9b },
		{ .addr = 0xaa46ce, .byte = 0xc3 },
		{ .addr = 0xaa46cf, .byte = 0xce },
		{ .addr = 0x8473ac, .byte = 0xe0 },
		{ .addr = 0x8473ad, .byte = 0xf7 },
		{ .addr = 0x8473ae, .byte = 0x32 },
		{ .addr = 0x8473af, .byte = 0x07 },
		{ .addr = 0x8473b0, .byte = 0xe8 },
		{ .addr = 0x8473b1, .byte = 0xdb },
		{ .addr = 0x8473b2, .byte = 0x24 },
		{ .addr = 0x8473b3, .byte = 0x00 },
		{ .addr = 0xaa46d0, .byte = 0x91 },
		{ .addr = 0xaa46d1, .byte = 0x1a }
};

static const SST_Transaction movepl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11159246, .data = 50126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8680364, .data = 57344, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8680366, .data = 12800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8680368, .data = 59392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8680370, .data = 9216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11159248, .data = 37146, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_15[] = {
		{ .addr = 0x668b92, .byte = 0x0d },
		{ .addr = 0x668b93, .byte = 0x4a },
		{ .addr = 0x668b94, .byte = 0x52 },
		{ .addr = 0x668b95, .byte = 0x9d },
		{ .addr = 0x668b96, .byte = 0x35 },
		{ .addr = 0x668b97, .byte = 0x4d },
		{ .addr = 0x15b876, .byte = 0xdb },
		{ .addr = 0x15b877, .byte = 0xe6 },
		{ .addr = 0x15b878, .byte = 0xe2 },
		{ .addr = 0x15b879, .byte = 0xb2 },
		{ .addr = 0x15b87a, .byte = 0xb8 },
		{ .addr = 0x15b87b, .byte = 0xac },
		{ .addr = 0x15b87c, .byte = 0x7c },
		{ .addr = 0x15b87d, .byte = 0x36 },
		{ .addr = 0x668b98, .byte = 0x2c },
		{ .addr = 0x668b99, .byte = 0xe6 }
};

static const SST_RamByte movepl_final_ram_15[] = {
		{ .addr = 0x668b92, .byte = 0x0d },
		{ .addr = 0x668b93, .byte = 0x4a },
		{ .addr = 0x668b94, .byte = 0x52 },
		{ .addr = 0x668b95, .byte = 0x9d },
		{ .addr = 0x668b96, .byte = 0x35 },
		{ .addr = 0x668b97, .byte = 0x4d },
		{ .addr = 0x15b876, .byte = 0xdb },
		{ .addr = 0x15b877, .byte = 0xe6 },
		{ .addr = 0x15b878, .byte = 0xe2 },
		{ .addr = 0x15b879, .byte = 0xb2 },
		{ .addr = 0x15b87a, .byte = 0xb8 },
		{ .addr = 0x15b87b, .byte = 0xac },
		{ .addr = 0x15b87c, .byte = 0x7c },
		{ .addr = 0x15b87d, .byte = 0x36 },
		{ .addr = 0x668b98, .byte = 0x2c },
		{ .addr = 0x668b99, .byte = 0xe6 }
};

static const SST_Transaction movepl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6720406, .data = 13645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1423478, .data = 230, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1423480, .data = 178, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1423482, .data = 172, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1423484, .data = 54, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6720408, .data = 11494, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_16[] = {
		{ .addr = 0x830058, .byte = 0x01 },
		{ .addr = 0x830059, .byte = 0x4c },
		{ .addr = 0x83005a, .byte = 0x3f },
		{ .addr = 0x83005b, .byte = 0xc3 },
		{ .addr = 0x83005c, .byte = 0xf3 },
		{ .addr = 0x83005d, .byte = 0xaa },
		{ .addr = 0xe52204, .byte = 0x5d },
		{ .addr = 0xe52205, .byte = 0xa7 },
		{ .addr = 0xe52206, .byte = 0x8e },
		{ .addr = 0xe52207, .byte = 0xf2 },
		{ .addr = 0xe52208, .byte = 0xc1 },
		{ .addr = 0xe52209, .byte = 0xe7 },
		{ .addr = 0xe5220a, .byte = 0x0f },
		{ .addr = 0xe5220b, .byte = 0x74 },
		{ .addr = 0x83005e, .byte = 0x10 },
		{ .addr = 0x83005f, .byte = 0xde }
};

static const SST_RamByte movepl_final_ram_16[] = {
		{ .addr = 0x830058, .byte = 0x01 },
		{ .addr = 0x830059, .byte = 0x4c },
		{ .addr = 0x83005a, .byte = 0x3f },
		{ .addr = 0x83005b, .byte = 0xc3 },
		{ .addr = 0x83005c, .byte = 0xf3 },
		{ .addr = 0x83005d, .byte = 0xaa },
		{ .addr = 0xe52204, .byte = 0x5d },
		{ .addr = 0xe52205, .byte = 0xa7 },
		{ .addr = 0xe52206, .byte = 0x8e },
		{ .addr = 0xe52207, .byte = 0xf2 },
		{ .addr = 0xe52208, .byte = 0xc1 },
		{ .addr = 0xe52209, .byte = 0xe7 },
		{ .addr = 0xe5220a, .byte = 0x0f },
		{ .addr = 0xe5220b, .byte = 0x74 },
		{ .addr = 0x83005e, .byte = 0x10 },
		{ .addr = 0x83005f, .byte = 0xde }
};

static const SST_Transaction movepl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8585308, .data = 62378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15016452, .data = 167, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15016454, .data = 242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15016456, .data = 231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15016458, .data = 116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8585310, .data = 4318, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_17[] = {
		{ .addr = 0x585452, .byte = 0x07 },
		{ .addr = 0x585453, .byte = 0xcb },
		{ .addr = 0x585454, .byte = 0xe4 },
		{ .addr = 0x585455, .byte = 0xc1 },
		{ .addr = 0x585456, .byte = 0x24 },
		{ .addr = 0x585457, .byte = 0xc5 },
		{ .addr = 0x585458, .byte = 0xba },
		{ .addr = 0x585459, .byte = 0x45 }
};

static const SST_RamByte movepl_final_ram_17[] = {
		{ .addr = 0x585452, .byte = 0x07 },
		{ .addr = 0x585453, .byte = 0xcb },
		{ .addr = 0x585454, .byte = 0xe4 },
		{ .addr = 0x585455, .byte = 0xc1 },
		{ .addr = 0x585456, .byte = 0x24 },
		{ .addr = 0x585457, .byte = 0xc5 },
		{ .addr = 0x5dfa86, .byte = 0x00 },
		{ .addr = 0x5dfa87, .byte = 0x3e },
		{ .addr = 0x5dfa88, .byte = 0x00 },
		{ .addr = 0x5dfa89, .byte = 0xcf },
		{ .addr = 0x5dfa8a, .byte = 0x00 },
		{ .addr = 0x5dfa8b, .byte = 0xbf },
		{ .addr = 0x5dfa8c, .byte = 0x00 },
		{ .addr = 0x5dfa8d, .byte = 0x44 },
		{ .addr = 0x585458, .byte = 0xba },
		{ .addr = 0x585459, .byte = 0x45 }
};

static const SST_Transaction movepl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5788758, .data = 9413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6158982, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6158984, .data = 207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6158986, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6158988, .data = 68, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5788760, .data = 47685, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_18[] = {
		{ .addr = 0xd53768, .byte = 0x0b },
		{ .addr = 0xd53769, .byte = 0x48 },
		{ .addr = 0xd5376a, .byte = 0x57 },
		{ .addr = 0xd5376b, .byte = 0x9a },
		{ .addr = 0xd5376c, .byte = 0x6e },
		{ .addr = 0xd5376d, .byte = 0x57 },
		{ .addr = 0x5ad94e, .byte = 0xf1 },
		{ .addr = 0x5ad94f, .byte = 0xf8 },
		{ .addr = 0x5ad950, .byte = 0xf3 },
		{ .addr = 0x5ad951, .byte = 0x09 },
		{ .addr = 0x5ad952, .byte = 0x72 },
		{ .addr = 0x5ad953, .byte = 0xc7 },
		{ .addr = 0x5ad954, .byte = 0xdf },
		{ .addr = 0x5ad955, .byte = 0xc1 },
		{ .addr = 0xd5376e, .byte = 0xc3 },
		{ .addr = 0xd5376f, .byte = 0x97 }
};

static const SST_RamByte movepl_final_ram_18[] = {
		{ .addr = 0xd53768, .byte = 0x0b },
		{ .addr = 0xd53769, .byte = 0x48 },
		{ .addr = 0xd5376a, .byte = 0x57 },
		{ .addr = 0xd5376b, .byte = 0x9a },
		{ .addr = 0xd5376c, .byte = 0x6e },
		{ .addr = 0xd5376d, .byte = 0x57 },
		{ .addr = 0x5ad94e, .byte = 0xf1 },
		{ .addr = 0x5ad94f, .byte = 0xf8 },
		{ .addr = 0x5ad950, .byte = 0xf3 },
		{ .addr = 0x5ad951, .byte = 0x09 },
		{ .addr = 0x5ad952, .byte = 0x72 },
		{ .addr = 0x5ad953, .byte = 0xc7 },
		{ .addr = 0x5ad954, .byte = 0xdf },
		{ .addr = 0x5ad955, .byte = 0xc1 },
		{ .addr = 0xd5376e, .byte = 0xc3 },
		{ .addr = 0xd5376f, .byte = 0x97 }
};

static const SST_Transaction movepl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13973356, .data = 28247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5953870, .data = 61696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5953872, .data = 62208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5953874, .data = 29184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5953876, .data = 57088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13973358, .data = 50071, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_19[] = {
		{ .addr = 0x5bf602, .byte = 0x01 },
		{ .addr = 0x5bf603, .byte = 0x4c },
		{ .addr = 0x5bf604, .byte = 0x81 },
		{ .addr = 0x5bf605, .byte = 0xcf },
		{ .addr = 0x5bf606, .byte = 0xf3 },
		{ .addr = 0x5bf607, .byte = 0xe1 },
		{ .addr = 0x296938, .byte = 0x64 },
		{ .addr = 0x296939, .byte = 0xab },
		{ .addr = 0x29693a, .byte = 0x56 },
		{ .addr = 0x29693b, .byte = 0xc4 },
		{ .addr = 0x29693c, .byte = 0x0b },
		{ .addr = 0x29693d, .byte = 0xf4 },
		{ .addr = 0x29693e, .byte = 0x9d },
		{ .addr = 0x29693f, .byte = 0x0d },
		{ .addr = 0x5bf608, .byte = 0x96 },
		{ .addr = 0x5bf609, .byte = 0x2b }
};

static const SST_RamByte movepl_final_ram_19[] = {
		{ .addr = 0x5bf602, .byte = 0x01 },
		{ .addr = 0x5bf603, .byte = 0x4c },
		{ .addr = 0x5bf604, .byte = 0x81 },
		{ .addr = 0x5bf605, .byte = 0xcf },
		{ .addr = 0x5bf606, .byte = 0xf3 },
		{ .addr = 0x5bf607, .byte = 0xe1 },
		{ .addr = 0x296938, .byte = 0x64 },
		{ .addr = 0x296939, .byte = 0xab },
		{ .addr = 0x29693a, .byte = 0x56 },
		{ .addr = 0x29693b, .byte = 0xc4 },
		{ .addr = 0x29693c, .byte = 0x0b },
		{ .addr = 0x29693d, .byte = 0xf4 },
		{ .addr = 0x29693e, .byte = 0x9d },
		{ .addr = 0x29693f, .byte = 0x0d },
		{ .addr = 0x5bf608, .byte = 0x96 },
		{ .addr = 0x5bf609, .byte = 0x2b }
};

static const SST_Transaction movepl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6026758, .data = 62433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2713912, .data = 25600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2713914, .data = 22016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2713916, .data = 2816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2713918, .data = 40192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6026760, .data = 38443, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_20[] = {
		{ .addr = 0x17e980, .byte = 0x0f },
		{ .addr = 0x17e981, .byte = 0xcb },
		{ .addr = 0x17e982, .byte = 0x3e },
		{ .addr = 0x17e983, .byte = 0xec },
		{ .addr = 0x17e984, .byte = 0xf6 },
		{ .addr = 0x17e985, .byte = 0x3d },
		{ .addr = 0x17e986, .byte = 0x71 },
		{ .addr = 0x17e987, .byte = 0x45 }
};

static const SST_RamByte movepl_final_ram_20[] = {
		{ .addr = 0x17e980, .byte = 0x0f },
		{ .addr = 0x17e981, .byte = 0xcb },
		{ .addr = 0x17e982, .byte = 0x3e },
		{ .addr = 0x17e983, .byte = 0xec },
		{ .addr = 0x17e984, .byte = 0xf6 },
		{ .addr = 0x17e985, .byte = 0x3d },
		{ .addr = 0x01d248, .byte = 0xdd },
		{ .addr = 0x01d249, .byte = 0x00 },
		{ .addr = 0x01d24a, .byte = 0x22 },
		{ .addr = 0x01d24b, .byte = 0x00 },
		{ .addr = 0x01d24c, .byte = 0x9e },
		{ .addr = 0x01d24d, .byte = 0x00 },
		{ .addr = 0x01d24e, .byte = 0x83 },
		{ .addr = 0x01d24f, .byte = 0x00 },
		{ .addr = 0x17e986, .byte = 0x71 },
		{ .addr = 0x17e987, .byte = 0x45 }
};

static const SST_Transaction movepl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1567108, .data = 63037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 119368, .data = 56576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 119370, .data = 8704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 119372, .data = 40448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 119374, .data = 33536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1567110, .data = 28997, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_21[] = {
		{ .addr = 0xdcfe0a, .byte = 0x01 },
		{ .addr = 0xdcfe0b, .byte = 0x4a },
		{ .addr = 0xdcfe0c, .byte = 0x9c },
		{ .addr = 0xdcfe0d, .byte = 0xf2 },
		{ .addr = 0xdcfe0e, .byte = 0x39 },
		{ .addr = 0xdcfe0f, .byte = 0x24 },
		{ .addr = 0xc4fa4a, .byte = 0xb2 },
		{ .addr = 0xc4fa4b, .byte = 0xba },
		{ .addr = 0xc4fa4c, .byte = 0x33 },
		{ .addr = 0xc4fa4d, .byte = 0x7b },
		{ .addr = 0xc4fa4e, .byte = 0x9d },
		{ .addr = 0xc4fa4f, .byte = 0xa5 },
		{ .addr = 0xc4fa50, .byte = 0xa5 },
		{ .addr = 0xc4fa51, .byte = 0x17 },
		{ .addr = 0xdcfe10, .byte = 0x6f },
		{ .addr = 0xdcfe11, .byte = 0x25 }
};

static const SST_RamByte movepl_final_ram_21[] = {
		{ .addr = 0xdcfe0a, .byte = 0x01 },
		{ .addr = 0xdcfe0b, .byte = 0x4a },
		{ .addr = 0xdcfe0c, .byte = 0x9c },
		{ .addr = 0xdcfe0d, .byte = 0xf2 },
		{ .addr = 0xdcfe0e, .byte = 0x39 },
		{ .addr = 0xdcfe0f, .byte = 0x24 },
		{ .addr = 0xc4fa4a, .byte = 0xb2 },
		{ .addr = 0xc4fa4b, .byte = 0xba },
		{ .addr = 0xc4fa4c, .byte = 0x33 },
		{ .addr = 0xc4fa4d, .byte = 0x7b },
		{ .addr = 0xc4fa4e, .byte = 0x9d },
		{ .addr = 0xc4fa4f, .byte = 0xa5 },
		{ .addr = 0xc4fa50, .byte = 0xa5 },
		{ .addr = 0xc4fa51, .byte = 0x17 },
		{ .addr = 0xdcfe10, .byte = 0x6f },
		{ .addr = 0xdcfe11, .byte = 0x25 }
};

static const SST_Transaction movepl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14482958, .data = 14628, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12909130, .data = 45568, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12909132, .data = 13056, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12909134, .data = 40192, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12909136, .data = 42240, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14482960, .data = 28453, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_22[] = {
		{ .addr = 0x358d34, .byte = 0x05 },
		{ .addr = 0x358d35, .byte = 0xcd },
		{ .addr = 0x358d36, .byte = 0xdc },
		{ .addr = 0x358d37, .byte = 0x80 },
		{ .addr = 0x358d38, .byte = 0x23 },
		{ .addr = 0x358d39, .byte = 0x0b },
		{ .addr = 0x358d3a, .byte = 0xfa },
		{ .addr = 0x358d3b, .byte = 0x75 }
};

static const SST_RamByte movepl_final_ram_22[] = {
		{ .addr = 0x358d34, .byte = 0x05 },
		{ .addr = 0x358d35, .byte = 0xcd },
		{ .addr = 0x358d36, .byte = 0xdc },
		{ .addr = 0x358d37, .byte = 0x80 },
		{ .addr = 0x358d38, .byte = 0x23 },
		{ .addr = 0x358d39, .byte = 0x0b },
		{ .addr = 0x0cf76a, .byte = 0x00 },
		{ .addr = 0x0cf76b, .byte = 0xb1 },
		{ .addr = 0x0cf76c, .byte = 0x00 },
		{ .addr = 0x0cf76d, .byte = 0x4c },
		{ .addr = 0x0cf76e, .byte = 0x00 },
		{ .addr = 0x0cf76f, .byte = 0xe5 },
		{ .addr = 0x0cf770, .byte = 0x00 },
		{ .addr = 0x0cf771, .byte = 0x2d },
		{ .addr = 0x358d3a, .byte = 0xfa },
		{ .addr = 0x358d3b, .byte = 0x75 }
};

static const SST_Transaction movepl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3509560, .data = 8971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 849770, .data = 177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 849772, .data = 76, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 849774, .data = 229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 849776, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3509562, .data = 64117, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_23[] = {
		{ .addr = 0x714c48, .byte = 0x0f },
		{ .addr = 0x714c49, .byte = 0xcc },
		{ .addr = 0x714c4a, .byte = 0x4f },
		{ .addr = 0x714c4b, .byte = 0xff },
		{ .addr = 0x714c4c, .byte = 0x7b },
		{ .addr = 0x714c4d, .byte = 0xf2 },
		{ .addr = 0x714c4e, .byte = 0x03 },
		{ .addr = 0x714c4f, .byte = 0x58 }
};

static const SST_RamByte movepl_final_ram_23[] = {
		{ .addr = 0x714c48, .byte = 0x0f },
		{ .addr = 0x714c49, .byte = 0xcc },
		{ .addr = 0x714c4a, .byte = 0x4f },
		{ .addr = 0x714c4b, .byte = 0xff },
		{ .addr = 0x714c4c, .byte = 0x7b },
		{ .addr = 0x714c4d, .byte = 0xf2 },
		{ .addr = 0xb9d162, .byte = 0x00 },
		{ .addr = 0xb9d163, .byte = 0x0e },
		{ .addr = 0xb9d164, .byte = 0x00 },
		{ .addr = 0xb9d165, .byte = 0xa9 },
		{ .addr = 0xb9d166, .byte = 0x00 },
		{ .addr = 0xb9d167, .byte = 0x93 },
		{ .addr = 0xb9d168, .byte = 0x00 },
		{ .addr = 0xb9d169, .byte = 0x88 },
		{ .addr = 0x714c4e, .byte = 0x03 },
		{ .addr = 0x714c4f, .byte = 0x58 }
};

static const SST_Transaction movepl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7425100, .data = 31730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177762, .data = 14, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177764, .data = 169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177766, .data = 147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177768, .data = 136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7425102, .data = 856, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_24[] = {
		{ .addr = 0x416b00, .byte = 0x0f },
		{ .addr = 0x416b01, .byte = 0x48 },
		{ .addr = 0x416b02, .byte = 0x67 },
		{ .addr = 0x416b03, .byte = 0x71 },
		{ .addr = 0x416b04, .byte = 0xcb },
		{ .addr = 0x416b05, .byte = 0x4c },
		{ .addr = 0x95014e, .byte = 0x61 },
		{ .addr = 0x95014f, .byte = 0x80 },
		{ .addr = 0x950150, .byte = 0x33 },
		{ .addr = 0x950151, .byte = 0xcb },
		{ .addr = 0x950152, .byte = 0xdb },
		{ .addr = 0x950153, .byte = 0x39 },
		{ .addr = 0x950154, .byte = 0x9e },
		{ .addr = 0x950155, .byte = 0xe4 },
		{ .addr = 0x416b06, .byte = 0xde },
		{ .addr = 0x416b07, .byte = 0xad }
};

static const SST_RamByte movepl_final_ram_24[] = {
		{ .addr = 0x416b00, .byte = 0x0f },
		{ .addr = 0x416b01, .byte = 0x48 },
		{ .addr = 0x416b02, .byte = 0x67 },
		{ .addr = 0x416b03, .byte = 0x71 },
		{ .addr = 0x416b04, .byte = 0xcb },
		{ .addr = 0x416b05, .byte = 0x4c },
		{ .addr = 0x95014e, .byte = 0x61 },
		{ .addr = 0x95014f, .byte = 0x80 },
		{ .addr = 0x950150, .byte = 0x33 },
		{ .addr = 0x950151, .byte = 0xcb },
		{ .addr = 0x950152, .byte = 0xdb },
		{ .addr = 0x950153, .byte = 0x39 },
		{ .addr = 0x950154, .byte = 0x9e },
		{ .addr = 0x950155, .byte = 0xe4 },
		{ .addr = 0x416b06, .byte = 0xde },
		{ .addr = 0x416b07, .byte = 0xad }
};

static const SST_Transaction movepl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4287236, .data = 52044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9765198, .data = 24832, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9765200, .data = 13056, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9765202, .data = 56064, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9765204, .data = 40448, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4287238, .data = 57005, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_25[] = {
		{ .addr = 0x567876, .byte = 0x0f },
		{ .addr = 0x567877, .byte = 0x48 },
		{ .addr = 0x567878, .byte = 0x54 },
		{ .addr = 0x567879, .byte = 0x39 },
		{ .addr = 0x56787a, .byte = 0xa5 },
		{ .addr = 0x56787b, .byte = 0xb8 },
		{ .addr = 0x6f8e3e, .byte = 0x05 },
		{ .addr = 0x6f8e3f, .byte = 0xad },
		{ .addr = 0x6f8e40, .byte = 0xb4 },
		{ .addr = 0x6f8e41, .byte = 0x20 },
		{ .addr = 0x6f8e42, .byte = 0xb8 },
		{ .addr = 0x6f8e43, .byte = 0x77 },
		{ .addr = 0x6f8e44, .byte = 0x69 },
		{ .addr = 0x6f8e45, .byte = 0xfe },
		{ .addr = 0x56787c, .byte = 0x55 },
		{ .addr = 0x56787d, .byte = 0x67 }
};

static const SST_RamByte movepl_final_ram_25[] = {
		{ .addr = 0x567876, .byte = 0x0f },
		{ .addr = 0x567877, .byte = 0x48 },
		{ .addr = 0x567878, .byte = 0x54 },
		{ .addr = 0x567879, .byte = 0x39 },
		{ .addr = 0x56787a, .byte = 0xa5 },
		{ .addr = 0x56787b, .byte = 0xb8 },
		{ .addr = 0x6f8e3e, .byte = 0x05 },
		{ .addr = 0x6f8e3f, .byte = 0xad },
		{ .addr = 0x6f8e40, .byte = 0xb4 },
		{ .addr = 0x6f8e41, .byte = 0x20 },
		{ .addr = 0x6f8e42, .byte = 0xb8 },
		{ .addr = 0x6f8e43, .byte = 0x77 },
		{ .addr = 0x6f8e44, .byte = 0x69 },
		{ .addr = 0x6f8e45, .byte = 0xfe },
		{ .addr = 0x56787c, .byte = 0x55 },
		{ .addr = 0x56787d, .byte = 0x67 }
};

static const SST_Transaction movepl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5666938, .data = 42424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7310910, .data = 1280, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7310912, .data = 46080, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7310914, .data = 47104, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7310916, .data = 26880, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5666940, .data = 21863, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_26[] = {
		{ .addr = 0xb833ce, .byte = 0x0b },
		{ .addr = 0xb833cf, .byte = 0x48 },
		{ .addr = 0xb833d0, .byte = 0x50 },
		{ .addr = 0xb833d1, .byte = 0x2f },
		{ .addr = 0xb833d2, .byte = 0x5b },
		{ .addr = 0xb833d3, .byte = 0xf1 },
		{ .addr = 0xe770e4, .byte = 0x20 },
		{ .addr = 0xe770e5, .byte = 0x30 },
		{ .addr = 0xe770e6, .byte = 0x2a },
		{ .addr = 0xe770e7, .byte = 0xd8 },
		{ .addr = 0xe770e8, .byte = 0xf5 },
		{ .addr = 0xe770e9, .byte = 0x9f },
		{ .addr = 0xe770ea, .byte = 0xf1 },
		{ .addr = 0xe770eb, .byte = 0x17 },
		{ .addr = 0xb833d4, .byte = 0xdf },
		{ .addr = 0xb833d5, .byte = 0x8d }
};

static const SST_RamByte movepl_final_ram_26[] = {
		{ .addr = 0xb833ce, .byte = 0x0b },
		{ .addr = 0xb833cf, .byte = 0x48 },
		{ .addr = 0xb833d0, .byte = 0x50 },
		{ .addr = 0xb833d1, .byte = 0x2f },
		{ .addr = 0xb833d2, .byte = 0x5b },
		{ .addr = 0xb833d3, .byte = 0xf1 },
		{ .addr = 0xe770e4, .byte = 0x20 },
		{ .addr = 0xe770e5, .byte = 0x30 },
		{ .addr = 0xe770e6, .byte = 0x2a },
		{ .addr = 0xe770e7, .byte = 0xd8 },
		{ .addr = 0xe770e8, .byte = 0xf5 },
		{ .addr = 0xe770e9, .byte = 0x9f },
		{ .addr = 0xe770ea, .byte = 0xf1 },
		{ .addr = 0xe770eb, .byte = 0x17 },
		{ .addr = 0xb833d4, .byte = 0xdf },
		{ .addr = 0xb833d5, .byte = 0x8d }
};

static const SST_Transaction movepl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12071890, .data = 23537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15167716, .data = 48, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15167718, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15167720, .data = 159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15167722, .data = 23, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12071892, .data = 57229, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_27[] = {
		{ .addr = 0xcc6398, .byte = 0x0d },
		{ .addr = 0xcc6399, .byte = 0x48 },
		{ .addr = 0xcc639a, .byte = 0x3b },
		{ .addr = 0xcc639b, .byte = 0xaa },
		{ .addr = 0xcc639c, .byte = 0xf3 },
		{ .addr = 0xcc639d, .byte = 0x2f },
		{ .addr = 0x4c3678, .byte = 0x65 },
		{ .addr = 0x4c3679, .byte = 0x3e },
		{ .addr = 0x4c367a, .byte = 0x6a },
		{ .addr = 0x4c367b, .byte = 0x1f },
		{ .addr = 0x4c367c, .byte = 0x39 },
		{ .addr = 0x4c367d, .byte = 0x0d },
		{ .addr = 0x4c367e, .byte = 0xdb },
		{ .addr = 0x4c367f, .byte = 0x0f },
		{ .addr = 0xcc639e, .byte = 0xb8 },
		{ .addr = 0xcc639f, .byte = 0x01 }
};

static const SST_RamByte movepl_final_ram_27[] = {
		{ .addr = 0xcc6398, .byte = 0x0d },
		{ .addr = 0xcc6399, .byte = 0x48 },
		{ .addr = 0xcc639a, .byte = 0x3b },
		{ .addr = 0xcc639b, .byte = 0xaa },
		{ .addr = 0xcc639c, .byte = 0xf3 },
		{ .addr = 0xcc639d, .byte = 0x2f },
		{ .addr = 0x4c3678, .byte = 0x65 },
		{ .addr = 0x4c3679, .byte = 0x3e },
		{ .addr = 0x4c367a, .byte = 0x6a },
		{ .addr = 0x4c367b, .byte = 0x1f },
		{ .addr = 0x4c367c, .byte = 0x39 },
		{ .addr = 0x4c367d, .byte = 0x0d },
		{ .addr = 0x4c367e, .byte = 0xdb },
		{ .addr = 0x4c367f, .byte = 0x0f },
		{ .addr = 0xcc639e, .byte = 0xb8 },
		{ .addr = 0xcc639f, .byte = 0x01 }
};

static const SST_Transaction movepl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13394844, .data = 62255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4994680, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4994682, .data = 31, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4994684, .data = 13, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4994686, .data = 15, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13394846, .data = 47105, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_28[] = {
		{ .addr = 0xedd548, .byte = 0x09 },
		{ .addr = 0xedd549, .byte = 0xcc },
		{ .addr = 0xedd54a, .byte = 0xd5 },
		{ .addr = 0xedd54b, .byte = 0xe0 },
		{ .addr = 0xedd54c, .byte = 0x39 },
		{ .addr = 0xedd54d, .byte = 0xe0 },
		{ .addr = 0xedd54e, .byte = 0xbd },
		{ .addr = 0xedd54f, .byte = 0x41 }
};

static const SST_RamByte movepl_final_ram_28[] = {
		{ .addr = 0xedd548, .byte = 0x09 },
		{ .addr = 0xedd549, .byte = 0xcc },
		{ .addr = 0xedd54a, .byte = 0xd5 },
		{ .addr = 0xedd54b, .byte = 0xe0 },
		{ .addr = 0xedd54c, .byte = 0x39 },
		{ .addr = 0xedd54d, .byte = 0xe0 },
		{ .addr = 0x6748ae, .byte = 0x00 },
		{ .addr = 0x6748af, .byte = 0x32 },
		{ .addr = 0x6748b0, .byte = 0x00 },
		{ .addr = 0x6748b1, .byte = 0x0f },
		{ .addr = 0x6748b2, .byte = 0x00 },
		{ .addr = 0x6748b3, .byte = 0x45 },
		{ .addr = 0x6748b4, .byte = 0x00 },
		{ .addr = 0x6748b5, .byte = 0xeb },
		{ .addr = 0xedd54e, .byte = 0xbd },
		{ .addr = 0xedd54f, .byte = 0x41 }
};

static const SST_Transaction movepl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15586636, .data = 14816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6768814, .data = 50, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6768816, .data = 15, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6768818, .data = 69, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6768820, .data = 235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15586638, .data = 48449, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_29[] = {
		{ .addr = 0xd2cada, .byte = 0x09 },
		{ .addr = 0xd2cadb, .byte = 0xca },
		{ .addr = 0xd2cadc, .byte = 0xae },
		{ .addr = 0xd2cadd, .byte = 0xc7 },
		{ .addr = 0xd2cade, .byte = 0xab },
		{ .addr = 0xd2cadf, .byte = 0xa4 },
		{ .addr = 0xd2cae0, .byte = 0x14 },
		{ .addr = 0xd2cae1, .byte = 0x08 }
};

static const SST_RamByte movepl_final_ram_29[] = {
		{ .addr = 0xd2cada, .byte = 0x09 },
		{ .addr = 0xd2cadb, .byte = 0xca },
		{ .addr = 0xd2cadc, .byte = 0xae },
		{ .addr = 0xd2cadd, .byte = 0xc7 },
		{ .addr = 0xd2cade, .byte = 0xab },
		{ .addr = 0xd2cadf, .byte = 0xa4 },
		{ .addr = 0x0f3450, .byte = 0xe0 },
		{ .addr = 0x0f3451, .byte = 0x00 },
		{ .addr = 0x0f3452, .byte = 0x05 },
		{ .addr = 0x0f3453, .byte = 0x00 },
		{ .addr = 0x0f3454, .byte = 0xcb },
		{ .addr = 0x0f3455, .byte = 0x00 },
		{ .addr = 0x0f3456, .byte = 0x1c },
		{ .addr = 0x0f3457, .byte = 0x00 },
		{ .addr = 0xd2cae0, .byte = 0x14 },
		{ .addr = 0xd2cae1, .byte = 0x08 }
};

static const SST_Transaction movepl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13814494, .data = 43940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 996432, .data = 57344, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 996434, .data = 1280, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 996436, .data = 51968, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 996438, .data = 7168, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13814496, .data = 5128, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_30[] = {
		{ .addr = 0x8ac030, .byte = 0x01 },
		{ .addr = 0x8ac031, .byte = 0x48 },
		{ .addr = 0x8ac032, .byte = 0x6b },
		{ .addr = 0x8ac033, .byte = 0x57 },
		{ .addr = 0x8ac034, .byte = 0xa8 },
		{ .addr = 0x8ac035, .byte = 0x70 },
		{ .addr = 0xb2f6fe, .byte = 0x34 },
		{ .addr = 0xb2f6ff, .byte = 0x6c },
		{ .addr = 0xb2f700, .byte = 0x59 },
		{ .addr = 0xb2f701, .byte = 0x0a },
		{ .addr = 0xb2f702, .byte = 0xa7 },
		{ .addr = 0xb2f703, .byte = 0x08 },
		{ .addr = 0xb2f704, .byte = 0x21 },
		{ .addr = 0xb2f705, .byte = 0x25 },
		{ .addr = 0x8ac036, .byte = 0x89 },
		{ .addr = 0x8ac037, .byte = 0x07 }
};

static const SST_RamByte movepl_final_ram_30[] = {
		{ .addr = 0x8ac030, .byte = 0x01 },
		{ .addr = 0x8ac031, .byte = 0x48 },
		{ .addr = 0x8ac032, .byte = 0x6b },
		{ .addr = 0x8ac033, .byte = 0x57 },
		{ .addr = 0x8ac034, .byte = 0xa8 },
		{ .addr = 0x8ac035, .byte = 0x70 },
		{ .addr = 0xb2f6fe, .byte = 0x34 },
		{ .addr = 0xb2f6ff, .byte = 0x6c },
		{ .addr = 0xb2f700, .byte = 0x59 },
		{ .addr = 0xb2f701, .byte = 0x0a },
		{ .addr = 0xb2f702, .byte = 0xa7 },
		{ .addr = 0xb2f703, .byte = 0x08 },
		{ .addr = 0xb2f704, .byte = 0x21 },
		{ .addr = 0xb2f705, .byte = 0x25 },
		{ .addr = 0x8ac036, .byte = 0x89 },
		{ .addr = 0x8ac037, .byte = 0x07 }
};

static const SST_Transaction movepl_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9093172, .data = 43120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11728638, .data = 13312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11728640, .data = 22784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11728642, .data = 42752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11728644, .data = 8448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9093174, .data = 35079, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepl_initial_ram_31[] = {
		{ .addr = 0x5a1c2c, .byte = 0x03 },
		{ .addr = 0x5a1c2d, .byte = 0x4f },
		{ .addr = 0x5a1c2e, .byte = 0xec },
		{ .addr = 0x5a1c2f, .byte = 0x34 },
		{ .addr = 0x5a1c30, .byte = 0xe0 },
		{ .addr = 0x5a1c31, .byte = 0x68 },
		{ .addr = 0xf68b12, .byte = 0x24 },
		{ .addr = 0xf68b13, .byte = 0x86 },
		{ .addr = 0xf68b14, .byte = 0xef },
		{ .addr = 0xf68b15, .byte = 0xc6 },
		{ .addr = 0xf68b16, .byte = 0xcb },
		{ .addr = 0xf68b17, .byte = 0xde },
		{ .addr = 0xf68b18, .byte = 0xef },
		{ .addr = 0xf68b19, .byte = 0x28 },
		{ .addr = 0x5a1c32, .byte = 0xfd },
		{ .addr = 0x5a1c33, .byte = 0x26 }
};

static const SST_RamByte movepl_final_ram_31[] = {
		{ .addr = 0x5a1c2c, .byte = 0x03 },
		{ .addr = 0x5a1c2d, .byte = 0x4f },
		{ .addr = 0x5a1c2e, .byte = 0xec },
		{ .addr = 0x5a1c2f, .byte = 0x34 },
		{ .addr = 0x5a1c30, .byte = 0xe0 },
		{ .addr = 0x5a1c31, .byte = 0x68 },
		{ .addr = 0xf68b12, .byte = 0x24 },
		{ .addr = 0xf68b13, .byte = 0x86 },
		{ .addr = 0xf68b14, .byte = 0xef },
		{ .addr = 0xf68b15, .byte = 0xc6 },
		{ .addr = 0xf68b16, .byte = 0xcb },
		{ .addr = 0xf68b17, .byte = 0xde },
		{ .addr = 0xf68b18, .byte = 0xef },
		{ .addr = 0xf68b19, .byte = 0x28 },
		{ .addr = 0x5a1c32, .byte = 0xfd },
		{ .addr = 0x5a1c33, .byte = 0x26 }
};

static const SST_Transaction movepl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5905456, .data = 57448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16157458, .data = 9216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16157460, .data = 61184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16157462, .data = 51968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16157464, .data = 61184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5905458, .data = 64806, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase movepl[] = {
	{
		.name = "000 MOVEP.l (d16, A2), D0 014a",
		.initial = {
			.regs = {
				2979505002, 209276630, 2001096722, 3408373850, 343098753, 84110221, 3624173144, 3551189731, 2517387372, 1566803654, 358036465, 1400719130, 3361016488, 16268715, 66787001, 14019698, 238224, 8454, 1743766
			},
			.prefetch0 = 330,
			.prefetch1 = 62116,
			.ram = movepl_initial_ram_0,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2823814332, 209276630, 2001096722, 3408373850, 343098753, 84110221, 3624173144, 3551189731, 2517387372, 1566803654, 358036465, 1400719130, 3361016488, 16268715, 66787001, 14019698, 238224, 8454, 1743770
			},
			.prefetch0 = 56885,
			.prefetch1 = 10445,
			.ram = movepl_final_ram_0,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_0,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "001 MOVEP.l (d16, A6), D4 094e",
		.initial = {
			.regs = {
				2007491857, 2089777926, 2047732329, 253617275, 2848155611, 1768685712, 791348406, 854287106, 2299859413, 3932149034, 5732233, 1131589386, 173762160, 3929454002, 3607729675, 10731756, 7144698, 34591, 8161836
			},
			.prefetch0 = 2382,
			.prefetch1 = 39787,
			.ram = movepl_initial_ram_1,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2007491857, 2089777926, 2047732329, 253617275, 3945316343, 1768685712, 791348406, 854287106, 2299859413, 3932149034, 5732233, 1131589386, 173762160, 3929454002, 3607729675, 10731756, 7144698, 34591, 8161840
			},
			.prefetch0 = 60513,
			.prefetch1 = 58635,
			.ram = movepl_final_ram_1,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_1,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "002 MOVEP.l D2, (d16, A2) 05ca",
		.initial = {
			.regs = {
				2049748852, 1416327174, 3173476450, 3238029209, 338090004, 2161869196, 1078871683, 1355013312, 2381694667, 1943385412, 779076193, 675059184, 2167341232, 1061866032, 2117515293, 4976804, 10311806, 33046, 7755644
			},
			.prefetch0 = 1482,
			.prefetch1 = 61757,
			.ram = movepl_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2049748852, 1416327174, 3173476450, 3238029209, 338090004, 2161869196, 1078871683, 1355013312, 2381694667, 1943385412, 779076193, 675059184, 2167341232, 1061866032, 2117515293, 4976804, 10311806, 33046, 7755648
			},
			.prefetch0 = 7367,
			.prefetch1 = 55646,
			.ram = movepl_final_ram_2,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_2,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "003 MOVEP.l D3, (d16, A7) 07cf",
		.initial = {
			.regs = {
				266033809, 1884364687, 1282694855, 3759090382, 3863982308, 739468144, 4191635962, 1964316217, 512626001, 2312577327, 926652080, 926867739, 1252407127, 601352343, 605844298, 13662916, 1349392, 33038, 14482820
			},
			.prefetch0 = 1999,
			.prefetch1 = 23033,
			.ram = movepl_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				266033809, 1884364687, 1282694855, 3759090382, 3863982308, 739468144, 4191635962, 1964316217, 512626001, 2312577327, 926652080, 926867739, 1252407127, 601352343, 605844298, 13662916, 1349392, 33038, 14482824
			},
			.prefetch0 = 23973,
			.prefetch1 = 15670,
			.ram = movepl_final_ram_3,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_3,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "004 MOVEP.l (d16, A5), D0 014d",
		.initial = {
			.regs = {
				400064063, 3936386111, 4047031823, 3969093153, 3553484658, 1200606852, 3091790400, 1702499674, 2468356623, 437359343, 3711738929, 3500373125, 1924285093, 1388403896, 1600268085, 14083270, 11469944, 8726, 3139552
			},
			.prefetch0 = 333,
			.prefetch1 = 7341,
			.ram = movepl_initial_ram_4,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1997640070, 3936386111, 4047031823, 3969093153, 3553484658, 1200606852, 3091790400, 1702499674, 2468356623, 437359343, 3711738929, 3500373125, 1924285093, 1388403896, 1600268085, 14083270, 11469944, 8726, 3139556
			},
			.prefetch0 = 11872,
			.prefetch1 = 42890,
			.ram = movepl_final_ram_4,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_4,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "005 MOVEP.l (d16, A5), D6 0d4d",
		.initial = {
			.regs = {
				1648967797, 2373740557, 1607745207, 2777417993, 4099667869, 719755330, 9864275, 3016706267, 921876886, 3618320473, 3966813043, 444761577, 4131657951, 1869084575, 1862789171, 8537100, 16348586, 34309, 12732544
			},
			.prefetch0 = 3405,
			.prefetch1 = 15959,
			.ram = movepl_initial_ram_5,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1648967797, 2373740557, 1607745207, 2777417993, 4099667869, 719755330, 3735066885, 3016706267, 921876886, 3618320473, 3966813043, 444761577, 4131657951, 1869084575, 1862789171, 8537100, 16348586, 34309, 12732548
			},
			.prefetch0 = 1058,
			.prefetch1 = 21596,
			.ram = movepl_final_ram_5,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_5,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "006 MOVEP.l (d16, A5), D6 0d4d",
		.initial = {
			.regs = {
				3933775957, 1126769147, 765771382, 1743839247, 3844777714, 3354428905, 4186573970, 1538567668, 3886924167, 770394488, 947214073, 3164441411, 3880495259, 2593234271, 3932512373, 8374834, 10588850, 42517, 14698948
			},
			.prefetch0 = 3405,
			.prefetch1 = 11988,
			.ram = movepl_initial_ram_6,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3933775957, 1126769147, 765771382, 1743839247, 3844777714, 3354428905, 2614190331, 1538567668, 3886924167, 770394488, 947214073, 3164441411, 3880495259, 2593234271, 3932512373, 8374834, 10588850, 42517, 14698952
			},
			.prefetch0 = 19113,
			.prefetch1 = 38898,
			.ram = movepl_final_ram_6,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_6,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "007 MOVEP.l (d16, A7), D5 0b4f",
		.initial = {
			.regs = {
				3068058498, 1344604507, 1655439568, 3664961805, 3490390129, 1786941570, 3820973750, 1174846668, 3885182776, 1751597692, 1601524626, 3823384033, 3508859908, 33866305, 218616466, 476482, 11367754, 40965, 12978462
			},
			.prefetch0 = 2895,
			.prefetch1 = 38545,
			.ram = movepl_initial_ram_7,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3068058498, 1344604507, 1655439568, 3664961805, 3490390129, 1882300787, 3820973750, 1174846668, 3885182776, 1751597692, 1601524626, 3823384033, 3508859908, 33866305, 218616466, 476482, 11367754, 40965, 12978466
			},
			.prefetch0 = 13784,
			.prefetch1 = 24696,
			.ram = movepl_final_ram_7,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_7,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "008 MOVEP.l D3, (d16, A5) 07cd",
		.initial = {
			.regs = {
				1866148033, 2835785111, 3147740008, 3805396873, 2560773802, 3115354810, 2851234398, 3293029768, 25807849, 140213035, 3347369631, 690732918, 3103746287, 786381502, 265814511, 1644964, 3878238, 34079, 1284618
			},
			.prefetch0 = 1997,
			.prefetch1 = 34182,
			.ram = movepl_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1866148033, 2835785111, 3147740008, 3805396873, 2560773802, 3115354810, 2851234398, 3293029768, 25807849, 140213035, 3347369631, 690732918, 3103746287, 786381502, 265814511, 1644964, 3878238, 34079, 1284622
			},
			.prefetch0 = 61376,
			.prefetch1 = 41470,
			.ram = movepl_final_ram_8,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_8,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "009 MOVEP.l (d16, A2), D1 034a",
		.initial = {
			.regs = {
				2880769470, 3661175910, 2006487935, 3706212563, 1576009611, 544630733, 3133483457, 928541688, 3489433968, 1677953568, 1290027567, 1150556942, 340512862, 2852793567, 4108430313, 10833560, 16156858, 8221, 13105498
			},
			.prefetch0 = 842,
			.prefetch1 = 27663,
			.ram = movepl_initial_ram_9,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2880769470, 3959189703, 2006487935, 3706212563, 1576009611, 544630733, 3133483457, 928541688, 3489433968, 1677953568, 1290027567, 1150556942, 340512862, 2852793567, 4108430313, 10833560, 16156858, 8221, 13105502
			},
			.prefetch0 = 9469,
			.prefetch1 = 10413,
			.ram = movepl_final_ram_9,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_9,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "010 MOVEP.l (d16, A4), D0 014c",
		.initial = {
			.regs = {
				1030360811, 1345566138, 1962719592, 1347462726, 1264658236, 1460395217, 3359635275, 496449289, 3252978288, 1739331408, 1664432383, 1173933510, 2542136225, 186265109, 1404629241, 2375030, 618504, 34327, 9343714
			},
			.prefetch0 = 332,
			.prefetch1 = 42547,
			.ram = movepl_initial_ram_10,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1107139562, 1345566138, 1962719592, 1347462726, 1264658236, 1460395217, 3359635275, 496449289, 3252978288, 1739331408, 1664432383, 1173933510, 2542136225, 186265109, 1404629241, 2375030, 618504, 34327, 9343718
			},
			.prefetch0 = 5204,
			.prefetch1 = 62654,
			.ram = movepl_final_ram_10,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_10,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "011 MOVEP.l (d16, A3), D2 054b",
		.initial = {
			.regs = {
				1980682503, 733677539, 1934682504, 1651358959, 4173631452, 848515852, 3399177721, 4120378533, 1166233597, 2980394340, 1474073480, 3571423340, 44227096, 3963394845, 811207302, 13504976, 11287468, 773, 7799660
			},
			.prefetch0 = 1355,
			.prefetch1 = 43983,
			.ram = movepl_initial_ram_11,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1980682503, 733677539, 1857573090, 1651358959, 4173631452, 848515852, 3399177721, 4120378533, 1166233597, 2980394340, 1474073480, 3571423340, 44227096, 3963394845, 811207302, 13504976, 11287468, 773, 7799664
			},
			.prefetch0 = 8911,
			.prefetch1 = 34388,
			.ram = movepl_final_ram_11,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_11,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "012 MOVEP.l D3, (d16, A0) 07c8",
		.initial = {
			.regs = {
				2160060628, 1274025252, 3978193418, 776384933, 1102392771, 1190053574, 1695510463, 2451313246, 3940609954, 563692717, 3067376514, 3652625787, 2786345993, 1449803326, 2377622511, 440374, 10959974, 276, 16932
			},
			.prefetch0 = 1992,
			.prefetch1 = 22417,
			.ram = movepl_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2160060628, 1274025252, 3978193418, 776384933, 1102392771, 1190053574, 1695510463, 2451313246, 3940609954, 563692717, 3067376514, 3652625787, 2786345993, 1449803326, 2377622511, 440374, 10959974, 276, 16936
			},
			.prefetch0 = 8,
			.prefetch1 = 53062,
			.ram = movepl_final_ram_12,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_12,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "013 MOVEP.l D5, (d16, A2) 0bca",
		.initial = {
			.regs = {
				4011935271, 4130916487, 1808065814, 1137827253, 4151389692, 1778271504, 365536277, 1685067262, 2812610136, 3273827968, 1288474501, 4277637085, 1542033206, 1587489510, 2103098553, 15729350, 7347014, 538, 4211122
			},
			.prefetch0 = 3018,
			.prefetch1 = 55633,
			.ram = movepl_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4011935271, 4130916487, 1808065814, 1137827253, 4151389692, 1778271504, 365536277, 1685067262, 2812610136, 3273827968, 1288474501, 4277637085, 1542033206, 1587489510, 2103098553, 15729350, 7347014, 538, 4211126
			},
			.prefetch0 = 2641,
			.prefetch1 = 24923,
			.ram = movepl_final_ram_13,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_13,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "014 MOVEP.l (d16, A5), D5 0b4d",
		.initial = {
			.regs = {
				2833999207, 215281709, 2587194051, 262367257, 804638833, 3912482805, 1300680619, 414034527, 46259890, 4291792528, 1367292419, 928665785, 3259712587, 3280267793, 1410288967, 2837224, 11328300, 9217, 11159246
			},
			.prefetch0 = 2893,
			.prefetch1 = 35227,
			.ram = movepl_initial_ram_14,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2833999207, 215281709, 2587194051, 262367257, 804638833, 3761432612, 1300680619, 414034527, 46259890, 4291792528, 1367292419, 928665785, 3259712587, 3280267793, 1410288967, 2837224, 11328300, 9217, 11159250
			},
			.prefetch0 = 50126,
			.prefetch1 = 37146,
			.ram = movepl_final_ram_14,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_14,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "015 MOVEP.l (d16, A2), D6 0d4a",
		.initial = {
			.regs = {
				3637477351, 1102864078, 2038426439, 3868652566, 2832488396, 304737012, 559822960, 2762023977, 3736705149, 4162166561, 1293247962, 1188139401, 461384115, 3708096047, 1511919018, 10917138, 14146422, 1053, 6720406
			},
			.prefetch0 = 3402,
			.prefetch1 = 21149,
			.ram = movepl_initial_ram_15,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3637477351, 1102864078, 2038426439, 3868652566, 2832488396, 304737012, 3870469174, 2762023977, 3736705149, 4162166561, 1293247962, 1188139401, 461384115, 3708096047, 1511919018, 10917138, 14146422, 1053, 6720410
			},
			.prefetch0 = 13645,
			.prefetch1 = 11494,
			.ram = movepl_final_ram_15,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_15,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "016 MOVEP.l (d16, A4), D0 014c",
		.initial = {
			.regs = {
				3553260471, 4184150042, 1219480011, 781514221, 2721310237, 353885048, 1943820621, 1443106120, 1961978476, 2558267572, 2234299583, 3027903002, 350544450, 1648905534, 2131214022, 10806794, 11202044, 8725, 8585308
			},
			.prefetch0 = 332,
			.prefetch1 = 16323,
			.ram = movepl_initial_ram_16,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2817714036, 4184150042, 1219480011, 781514221, 2721310237, 353885048, 1943820621, 1443106120, 1961978476, 2558267572, 2234299583, 3027903002, 350544450, 1648905534, 2131214022, 10806794, 11202044, 8725, 8585312
			},
			.prefetch0 = 62378,
			.prefetch1 = 4318,
			.ram = movepl_final_ram_16,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_16,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "017 MOVEP.l D3, (d16, A3) 07cb",
		.initial = {
			.regs = {
				2937248996, 583838970, 885706146, 1053802308, 2614747553, 263039331, 1344865558, 233236532, 2780687345, 3952415042, 1787598302, 2707297734, 1852097003, 1770044141, 2620419625, 4725520, 14858930, 41222, 5788758
			},
			.prefetch0 = 1995,
			.prefetch1 = 58561,
			.ram = movepl_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2937248996, 583838970, 885706146, 1053802308, 2614747553, 263039331, 1344865558, 233236532, 2780687345, 3952415042, 1787598302, 2707297734, 1852097003, 1770044141, 2620419625, 4725520, 14858930, 41222, 5788762
			},
			.prefetch0 = 9413,
			.prefetch1 = 47685,
			.ram = movepl_final_ram_17,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_17,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "018 MOVEP.l (d16, A0), D5 0b48",
		.initial = {
			.regs = {
				2008131855, 1856870914, 1653701760, 2859394812, 1888115544, 3711316357, 3861803837, 4024229515, 2639954356, 3376410839, 2704624228, 2877921245, 624252558, 1546521329, 1870559007, 9733810, 16038324, 9497, 13973356
			},
			.prefetch0 = 2888,
			.prefetch1 = 22426,
			.ram = movepl_initial_ram_18,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2008131855, 1856870914, 1653701760, 2859394812, 1888115544, 4059263711, 3861803837, 4024229515, 2639954356, 3376410839, 2704624228, 2877921245, 624252558, 1546521329, 1870559007, 9733810, 16038324, 9497, 13973360
			},
			.prefetch0 = 28247,
			.prefetch1 = 50071,
			.ram = movepl_final_ram_18,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_18,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "019 MOVEP.l (d16, A4), D0 014c",
		.initial = {
			.regs = {
				2575257409, 2334090402, 2997435756, 3170978993, 2715419678, 1346664854, 215300435, 3736204522, 1214383151, 1587772701, 501119503, 3688175163, 4079609705, 3271539956, 642763750, 5297438, 14210634, 40971, 6026758
			},
			.prefetch0 = 332,
			.prefetch1 = 33231,
			.ram = movepl_initial_ram_19,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1683360669, 2334090402, 2997435756, 3170978993, 2715419678, 1346664854, 215300435, 3736204522, 1214383151, 1587772701, 501119503, 3688175163, 4079609705, 3271539956, 642763750, 5297438, 14210634, 40971, 6026762
			},
			.prefetch0 = 62433,
			.prefetch1 = 38443,
			.ram = movepl_final_ram_19,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_19,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "020 MOVEP.l D7, (d16, A3) 0fcb",
		.initial = {
			.regs = {
				3816672376, 3232796738, 1685016286, 2401892814, 2411717689, 1676285366, 3739789691, 3710033539, 1375467892, 148177863, 2176254499, 453088092, 1643052181, 3275385978, 4160887939, 485558, 7123372, 41231, 1567108
			},
			.prefetch0 = 4043,
			.prefetch1 = 16108,
			.ram = movepl_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3816672376, 3232796738, 1685016286, 2401892814, 2411717689, 1676285366, 3739789691, 3710033539, 1375467892, 148177863, 2176254499, 453088092, 1643052181, 3275385978, 4160887939, 485558, 7123372, 41231, 1567112
			},
			.prefetch0 = 63037,
			.prefetch1 = 28997,
			.ram = movepl_final_ram_20,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_20,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "021 MOVEP.l (d16, A2), D0 014a",
		.initial = {
			.regs = {
				1682868475, 2651871465, 4147159545, 4247389980, 1195359212, 3464987154, 3222664359, 3888400437, 3866746890, 564002957, 4274347352, 3031406806, 3425103383, 1783457001, 3138372567, 5568286, 8831328, 33799, 14482958
			},
			.prefetch0 = 330,
			.prefetch1 = 40178,
			.ram = movepl_initial_ram_21,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2989727141, 2651871465, 4147159545, 4247389980, 1195359212, 3464987154, 3222664359, 3888400437, 3866746890, 564002957, 4274347352, 3031406806, 3425103383, 1783457001, 3138372567, 5568286, 8831328, 33799, 14482962
			},
			.prefetch0 = 14628,
			.prefetch1 = 28453,
			.ram = movepl_final_ram_21,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_21,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "022 MOVEP.l D2, (d16, A5) 05cd",
		.initial = {
			.regs = {
				1832729813, 1495454755, 2974606637, 2811383933, 4206178361, 359047483, 1041332206, 338568648, 3904191357, 2067843261, 1320229923, 3020503604, 3591503401, 2400000747, 359961095, 13420506, 13206486, 9218, 3509560
			},
			.prefetch0 = 1485,
			.prefetch1 = 56448,
			.ram = movepl_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1832729813, 1495454755, 2974606637, 2811383933, 4206178361, 359047483, 1041332206, 338568648, 3904191357, 2067843261, 1320229923, 3020503604, 3591503401, 2400000747, 359961095, 13420506, 13206486, 9218, 3509564
			},
			.prefetch0 = 8971,
			.prefetch1 = 64117,
			.ram = movepl_final_ram_22,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_22,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "023 MOVEP.l D7, (d16, A4) 0fcc",
		.initial = {
			.regs = {
				2556698551, 3433335390, 2720173269, 2682189214, 3515639785, 2844372840, 2523478281, 245994376, 2618684188, 902932470, 279574293, 1519465057, 2931392868, 3751988822, 4140504268, 4375694, 6792514, 42007, 7425100
			},
			.prefetch0 = 4044,
			.prefetch1 = 20479,
			.ram = movepl_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2556698551, 3433335390, 2720173269, 2682189214, 3515639785, 2844372840, 2523478281, 245994376, 2618684188, 902932470, 279574293, 1519465057, 2931392868, 3751988822, 4140504268, 4375694, 6792514, 42007, 7425104
			},
			.prefetch0 = 31730,
			.prefetch1 = 856,
			.ram = movepl_final_ram_23,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_23,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "024 MOVEP.l (d16, A0), D7 0f48",
		.initial = {
			.regs = {
				3892233075, 678735097, 2656634344, 3948897638, 3661749384, 2525082705, 366551538, 3741016956, 445946333, 2749700677, 458920090, 3006145954, 1615625249, 730568297, 1065578500, 8601700, 4696910, 33797, 4287236
			},
			.prefetch0 = 3912,
			.prefetch1 = 26481,
			.ram = movepl_initial_ram_24,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3892233075, 678735097, 2656634344, 3948897638, 3661749384, 2525082705, 366551538, 1630788510, 445946333, 2749700677, 458920090, 3006145954, 1615625249, 730568297, 1065578500, 8601700, 4696910, 33797, 4287240
			},
			.prefetch0 = 52044,
			.prefetch1 = 57005,
			.ram = movepl_final_ram_24,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_24,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "025 MOVEP.l (d16, A0), D7 0f48",
		.initial = {
			.regs = {
				3841702016, 2773983914, 1298913848, 4206949614, 2355659779, 2185824491, 2080590203, 1427323795, 2288990725, 1723043097, 1905017604, 659125674, 2893734839, 3867550468, 1404473215, 5762524, 9184562, 258, 5666938
			},
			.prefetch0 = 3912,
			.prefetch1 = 21561,
			.ram = movepl_initial_ram_25,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3841702016, 2773983914, 1298913848, 4206949614, 2355659779, 2185824491, 2080590203, 95729769, 2288990725, 1723043097, 1905017604, 659125674, 2893734839, 3867550468, 1404473215, 5762524, 9184562, 258, 5666942
			},
			.prefetch0 = 42424,
			.prefetch1 = 21863,
			.ram = movepl_final_ram_25,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_25,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "026 MOVEP.l (d16, A0), D5 0b48",
		.initial = {
			.regs = {
				3369359351, 330271973, 2900010855, 2966566295, 3302127365, 1455560253, 3288026384, 1233628723, 1457987766, 2937236885, 1374803661, 149944939, 535693177, 3168952960, 3094897512, 2085702, 11584104, 42261, 12071890
			},
			.prefetch0 = 2888,
			.prefetch1 = 20527,
			.ram = movepl_initial_ram_26,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3369359351, 330271973, 2900010855, 2966566295, 3302127365, 819502871, 3288026384, 1233628723, 1457987766, 2937236885, 1374803661, 149944939, 535693177, 3168952960, 3094897512, 2085702, 11584104, 42261, 12071894
			},
			.prefetch0 = 23537,
			.prefetch1 = 57229,
			.ram = movepl_final_ram_26,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_26,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "027 MOVEP.l (d16, A0), D6 0d48",
		.initial = {
			.regs = {
				3439158861, 3867192602, 4245901327, 3778036064, 3172706000, 1804929546, 2014618674, 3981615342, 4232837839, 4072289194, 3050346538, 2595677893, 38724747, 3652836310, 3553128848, 7772104, 6127840, 9501, 13394844
			},
			.prefetch0 = 3400,
			.prefetch1 = 15274,
			.ram = movepl_initial_ram_27,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3439158861, 3867192602, 4245901327, 3778036064, 3172706000, 1804929546, 1042222351, 3981615342, 4232837839, 4072289194, 3050346538, 2595677893, 38724747, 3652836310, 3553128848, 7772104, 6127840, 9501, 13394848
			},
			.prefetch0 = 62255,
			.prefetch1 = 47105,
			.ram = movepl_final_ram_27,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_27,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "028 MOVEP.l D4, (d16, A4) 09cc",
		.initial = {
			.regs = {
				4132332624, 3642675274, 3496697201, 4192870520, 839861739, 390554379, 3299567682, 2274460107, 4273804663, 1017271110, 1336795390, 755565386, 3680989903, 2876648786, 3512143261, 3004276, 11795672, 40988, 15586636
			},
			.prefetch0 = 2508,
			.prefetch1 = 54752,
			.ram = movepl_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4132332624, 3642675274, 3496697201, 4192870520, 839861739, 390554379, 3299567682, 2274460107, 4273804663, 1017271110, 1336795390, 755565386, 3680989903, 2876648786, 3512143261, 3004276, 11795672, 40988, 15586640
			},
			.prefetch0 = 14816,
			.prefetch1 = 48449,
			.ram = movepl_final_ram_28,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_28,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "029 MOVEP.l D4, (d16, A2) 09ca",
		.initial = {
			.regs = {
				2373049291, 2061746484, 3377822880, 1475080458, 3758476060, 3792768532, 4283717621, 1779976718, 3939724976, 1784932663, 604997001, 3103444332, 372335979, 4172353732, 2430444779, 2910760, 10952842, 32796, 13814494
			},
			.prefetch0 = 2506,
			.prefetch1 = 44743,
			.ram = movepl_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2373049291, 2061746484, 3377822880, 1475080458, 3758476060, 3792768532, 4283717621, 1779976718, 3939724976, 1784932663, 604997001, 3103444332, 372335979, 4172353732, 2430444779, 2910760, 10952842, 32796, 13814498
			},
			.prefetch0 = 43940,
			.prefetch1 = 5128,
			.ram = movepl_final_ram_29,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_29,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "030 MOVEP.l (d16, A0), D0 0148",
		.initial = {
			.regs = {
				2396708211, 3822070296, 3335365919, 1060556040, 3738895219, 1912317164, 755884574, 2839234482, 4273114023, 1075426223, 4249182552, 2172276507, 818944649, 750149898, 779806810, 9021028, 8605290, 42783, 9093172
			},
			.prefetch0 = 328,
			.prefetch1 = 27479,
			.ram = movepl_initial_ram_30,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				878290721, 3822070296, 3335365919, 1060556040, 3738895219, 1912317164, 755884574, 2839234482, 4273114023, 1075426223, 4249182552, 2172276507, 818944649, 750149898, 779806810, 9021028, 8605290, 42783, 9093176
			},
			.prefetch0 = 43120,
			.prefetch1 = 35079,
			.ram = movepl_final_ram_30,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_30,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "031 MOVEP.l (d16, A7), D1 034f",
		.initial = {
			.regs = {
				1798718297, 2397893494, 2659312457, 2443980764, 1542085010, 1214822641, 687786317, 1334263913, 160116823, 1249344158, 1385913409, 301484680, 9291692, 3759900355, 383261354, 2899906, 16162526, 41993, 5905456
			},
			.prefetch0 = 847,
			.prefetch1 = 60468,
			.ram = movepl_initial_ram_31,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1798718297, 619695087, 2659312457, 2443980764, 1542085010, 1214822641, 687786317, 1334263913, 160116823, 1249344158, 1385913409, 301484680, 9291692, 3759900355, 383261354, 2899906, 16162526, 41993, 5905460
			},
			.prefetch0 = 57448,
			.prefetch1 = 64806,
			.ram = movepl_final_ram_31,
			.ram_len = 16,
		},
		.transactions = movepl_transactions_31,
		.transactions_len = 6,
		.lenght = 24,
	},
};

#endif /* RBT_MOVEPL_H */