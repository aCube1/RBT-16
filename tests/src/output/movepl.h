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

const uint32_t MOVEPL_TEST_COUNT = 16;
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
};

#endif /* RBT_MOVEPL_H */