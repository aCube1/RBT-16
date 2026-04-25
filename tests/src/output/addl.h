#ifndef RBT_ADDL_H
#define RBT_ADDL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addl_initial_ram_0[] = {
		{ .addr = 0x2ec604, .byte = 0xdb },
		{ .addr = 0x2ec605, .byte = 0xb3 },
		{ .addr = 0x2ec606, .byte = 0x0c },
		{ .addr = 0x2ec607, .byte = 0x4f },
		{ .addr = 0x2ec608, .byte = 0x06 },
		{ .addr = 0x2ec609, .byte = 0xb7 },
		{ .addr = 0x00000c, .byte = 0xe0 },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0xe9 },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x10e916, .byte = 0x0a },
		{ .addr = 0x10e917, .byte = 0x3a },
		{ .addr = 0x10e918, .byte = 0xdc },
		{ .addr = 0x10e919, .byte = 0xee }
};

static const SST_RamByte addl_final_ram_0[] = {
		{ .addr = 0x2ec604, .byte = 0xdb },
		{ .addr = 0x2ec605, .byte = 0xb3 },
		{ .addr = 0x2ec606, .byte = 0x0c },
		{ .addr = 0x2ec607, .byte = 0x4f },
		{ .addr = 0x2ec608, .byte = 0x06 },
		{ .addr = 0x2ec609, .byte = 0xb7 },
		{ .addr = 0x4542aa, .byte = 0xc6 },
		{ .addr = 0x4542ab, .byte = 0x06 },
		{ .addr = 0x4542a6, .byte = 0x23 },
		{ .addr = 0x4542a7, .byte = 0x13 },
		{ .addr = 0x4542a8, .byte = 0x00 },
		{ .addr = 0x4542a9, .byte = 0x2e },
		{ .addr = 0x4542a4, .byte = 0xdb },
		{ .addr = 0x4542a5, .byte = 0xb3 },
		{ .addr = 0x4542a2, .byte = 0x8b },
		{ .addr = 0x4542a3, .byte = 0x61 },
		{ .addr = 0x45429e, .byte = 0xdb },
		{ .addr = 0x45429f, .byte = 0xb5 },
		{ .addr = 0x4542a0, .byte = 0xe0 },
		{ .addr = 0x4542a1, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0xe0 },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0xe9 },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x10e916, .byte = 0x0a },
		{ .addr = 0x10e917, .byte = 0x3a },
		{ .addr = 0x10e918, .byte = 0xdc },
		{ .addr = 0x10e919, .byte = 0xee }
};

static const SST_Transaction addl_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3065352, .data = 1719, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3574624, .data = 14714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4539050, .data = 50694, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4539046, .data = 8979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4539048, .data = 46, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4539044, .data = 56243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4539042, .data = 35681, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4539038, .data = 56245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4539040, .data = 57398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 59670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1108246, .data = 2618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1108248, .data = 56558, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_1[] = {
		{ .addr = 0xba0ba2, .byte = 0xdd },
		{ .addr = 0xba0ba3, .byte = 0x93 },
		{ .addr = 0xba0ba4, .byte = 0x3b },
		{ .addr = 0xba0ba5, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0xf2 },
		{ .addr = 0x00000d, .byte = 0xc2 },
		{ .addr = 0x00000e, .byte = 0x24 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0xc2240e, .byte = 0xfb },
		{ .addr = 0xc2240f, .byte = 0x1d },
		{ .addr = 0xc22410, .byte = 0x9d },
		{ .addr = 0xc22411, .byte = 0xed }
};

static const SST_RamByte addl_final_ram_1[] = {
		{ .addr = 0xba0ba2, .byte = 0xdd },
		{ .addr = 0xba0ba3, .byte = 0x93 },
		{ .addr = 0xba0ba4, .byte = 0x3b },
		{ .addr = 0xba0ba5, .byte = 0xef },
		{ .addr = 0x112076, .byte = 0x0b },
		{ .addr = 0x112077, .byte = 0xa4 },
		{ .addr = 0x112072, .byte = 0xa5 },
		{ .addr = 0x112073, .byte = 0x1f },
		{ .addr = 0x112074, .byte = 0x00 },
		{ .addr = 0x112075, .byte = 0xba },
		{ .addr = 0x112070, .byte = 0xdd },
		{ .addr = 0x112071, .byte = 0x93 },
		{ .addr = 0x11206e, .byte = 0x3e },
		{ .addr = 0x11206f, .byte = 0x37 },
		{ .addr = 0x11206a, .byte = 0xdd },
		{ .addr = 0x11206b, .byte = 0x95 },
		{ .addr = 0x11206c, .byte = 0xa2 },
		{ .addr = 0x11206d, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0xf2 },
		{ .addr = 0x00000d, .byte = 0xc2 },
		{ .addr = 0x00000e, .byte = 0x24 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0xc2240e, .byte = 0xfb },
		{ .addr = 0xc2240f, .byte = 0x1d },
		{ .addr = 0xc22410, .byte = 0x9d },
		{ .addr = 0xc22411, .byte = 0xed }
};

static const SST_Transaction addl_transactions_1[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16072246, .data = 34675, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1122422, .data = 2980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1122418, .data = 42271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1122420, .data = 186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1122416, .data = 56723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1122414, .data = 15927, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1122410, .data = 56725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1122412, .data = 41717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 9230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12723214, .data = 64285, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12723216, .data = 40429, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_2[] = {
		{ .addr = 0x57d58a, .byte = 0xdc },
		{ .addr = 0x57d58b, .byte = 0x9a },
		{ .addr = 0x57d58c, .byte = 0x0d },
		{ .addr = 0x57d58d, .byte = 0xec },
		{ .addr = 0x9d2ac2, .byte = 0x94 },
		{ .addr = 0x9d2ac3, .byte = 0xe5 },
		{ .addr = 0x9d2ac4, .byte = 0x8f },
		{ .addr = 0x9d2ac5, .byte = 0xc6 },
		{ .addr = 0x57d58e, .byte = 0xa4 },
		{ .addr = 0x57d58f, .byte = 0xfa }
};

static const SST_RamByte addl_final_ram_2[] = {
		{ .addr = 0x57d58a, .byte = 0xdc },
		{ .addr = 0x57d58b, .byte = 0x9a },
		{ .addr = 0x57d58c, .byte = 0x0d },
		{ .addr = 0x57d58d, .byte = 0xec },
		{ .addr = 0x9d2ac2, .byte = 0x94 },
		{ .addr = 0x9d2ac3, .byte = 0xe5 },
		{ .addr = 0x9d2ac4, .byte = 0x8f },
		{ .addr = 0x9d2ac5, .byte = 0xc6 },
		{ .addr = 0x57d58e, .byte = 0xa4 },
		{ .addr = 0x57d58f, .byte = 0xfa }
};

static const SST_Transaction addl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10300098, .data = 38117, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10300100, .data = 36806, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5756302, .data = 42234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addl_initial_ram_3[] = {
		{ .addr = 0x4220f6, .byte = 0xde },
		{ .addr = 0x4220f7, .byte = 0xa3 },
		{ .addr = 0x4220f8, .byte = 0x6c },
		{ .addr = 0x4220f9, .byte = 0xf4 },
		{ .addr = 0x9d57a4, .byte = 0x69 },
		{ .addr = 0x9d57a5, .byte = 0x9a },
		{ .addr = 0x9d57a6, .byte = 0x4a },
		{ .addr = 0x9d57a7, .byte = 0x8a },
		{ .addr = 0x4220fa, .byte = 0x57 },
		{ .addr = 0x4220fb, .byte = 0xb0 }
};

static const SST_RamByte addl_final_ram_3[] = {
		{ .addr = 0x4220f6, .byte = 0xde },
		{ .addr = 0x4220f7, .byte = 0xa3 },
		{ .addr = 0x4220f8, .byte = 0x6c },
		{ .addr = 0x4220f9, .byte = 0xf4 },
		{ .addr = 0x9d57a4, .byte = 0x69 },
		{ .addr = 0x9d57a5, .byte = 0x9a },
		{ .addr = 0x9d57a6, .byte = 0x4a },
		{ .addr = 0x9d57a7, .byte = 0x8a },
		{ .addr = 0x4220fa, .byte = 0x57 },
		{ .addr = 0x4220fb, .byte = 0xb0 }
};

static const SST_Transaction addl_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10311588, .data = 27034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10311590, .data = 19082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4333818, .data = 22448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addl_initial_ram_4[] = {
		{ .addr = 0x28155e, .byte = 0x54 },
		{ .addr = 0x28155f, .byte = 0x89 },
		{ .addr = 0x281560, .byte = 0xf6 },
		{ .addr = 0x281561, .byte = 0x31 },
		{ .addr = 0x281562, .byte = 0x9f },
		{ .addr = 0x281563, .byte = 0x2a }
};

static const SST_RamByte addl_final_ram_4[] = {
		{ .addr = 0x28155e, .byte = 0x54 },
		{ .addr = 0x28155f, .byte = 0x89 },
		{ .addr = 0x281560, .byte = 0xf6 },
		{ .addr = 0x281561, .byte = 0x31 },
		{ .addr = 0x281562, .byte = 0x9f },
		{ .addr = 0x281563, .byte = 0x2a }
};

static const SST_Transaction addl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2626914, .data = 40746, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addl_initial_ram_5[] = {
		{ .addr = 0xcf99a8, .byte = 0x5c },
		{ .addr = 0xcf99a9, .byte = 0xb9 },
		{ .addr = 0xcf99aa, .byte = 0xe0 },
		{ .addr = 0xcf99ab, .byte = 0x64 },
		{ .addr = 0xcf99ac, .byte = 0xb8 },
		{ .addr = 0xcf99ad, .byte = 0xeb },
		{ .addr = 0xcf99ae, .byte = 0x72 },
		{ .addr = 0xcf99af, .byte = 0x69 },
		{ .addr = 0x00000c, .byte = 0xa4 },
		{ .addr = 0x00000d, .byte = 0x0c },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x0cd620, .byte = 0x97 },
		{ .addr = 0x0cd621, .byte = 0xbf },
		{ .addr = 0x0cd622, .byte = 0xe8 },
		{ .addr = 0x0cd623, .byte = 0x4b }
};

static const SST_RamByte addl_final_ram_5[] = {
		{ .addr = 0xcf99a8, .byte = 0x5c },
		{ .addr = 0xcf99a9, .byte = 0xb9 },
		{ .addr = 0xcf99aa, .byte = 0xe0 },
		{ .addr = 0xcf99ab, .byte = 0x64 },
		{ .addr = 0xcf99ac, .byte = 0xb8 },
		{ .addr = 0xcf99ad, .byte = 0xeb },
		{ .addr = 0xcf99ae, .byte = 0x72 },
		{ .addr = 0xcf99af, .byte = 0x69 },
		{ .addr = 0x49f2b0, .byte = 0x99 },
		{ .addr = 0x49f2b1, .byte = 0xae },
		{ .addr = 0x49f2ac, .byte = 0x20 },
		{ .addr = 0x49f2ad, .byte = 0x0f },
		{ .addr = 0x49f2ae, .byte = 0x00 },
		{ .addr = 0x49f2af, .byte = 0xcf },
		{ .addr = 0x49f2aa, .byte = 0x5c },
		{ .addr = 0x49f2ab, .byte = 0xb9 },
		{ .addr = 0x49f2a8, .byte = 0xb8 },
		{ .addr = 0x49f2a9, .byte = 0xeb },
		{ .addr = 0x49f2a4, .byte = 0x5c },
		{ .addr = 0x49f2a5, .byte = 0xb5 },
		{ .addr = 0x49f2a6, .byte = 0xe0 },
		{ .addr = 0x49f2a7, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0xa4 },
		{ .addr = 0x00000d, .byte = 0x0c },
		{ .addr = 0x00000e, .byte = 0xd6 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x0cd620, .byte = 0x97 },
		{ .addr = 0x0cd621, .byte = 0xbf },
		{ .addr = 0x0cd622, .byte = 0xe8 },
		{ .addr = 0x0cd623, .byte = 0x4b }
};

static const SST_Transaction addl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13605292, .data = 47339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13605294, .data = 29289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6600938, .data = 32349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4846256, .data = 39342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4846252, .data = 8207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4846254, .data = 207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4846250, .data = 23737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4846248, .data = 47339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4846244, .data = 23733, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4846246, .data = 57444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 841248, .data = 38847, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 841250, .data = 59467, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_6[] = {
		{ .addr = 0x3cf8be, .byte = 0xd1 },
		{ .addr = 0x3cf8bf, .byte = 0xb0 },
		{ .addr = 0x3cf8c0, .byte = 0x86 },
		{ .addr = 0x3cf8c1, .byte = 0xa2 },
		{ .addr = 0x3cf8c2, .byte = 0xbb },
		{ .addr = 0x3cf8c3, .byte = 0xd8 },
		{ .addr = 0x10ad14, .byte = 0x5f },
		{ .addr = 0x10ad15, .byte = 0xa4 },
		{ .addr = 0x10ad16, .byte = 0x87 },
		{ .addr = 0x10ad17, .byte = 0xbc },
		{ .addr = 0x3cf8c4, .byte = 0x56 },
		{ .addr = 0x3cf8c5, .byte = 0xa2 }
};

static const SST_RamByte addl_final_ram_6[] = {
		{ .addr = 0x3cf8be, .byte = 0xd1 },
		{ .addr = 0x3cf8bf, .byte = 0xb0 },
		{ .addr = 0x3cf8c0, .byte = 0x86 },
		{ .addr = 0x3cf8c1, .byte = 0xa2 },
		{ .addr = 0x3cf8c2, .byte = 0xbb },
		{ .addr = 0x3cf8c3, .byte = 0xd8 },
		{ .addr = 0x10ad14, .byte = 0xc7 },
		{ .addr = 0x10ad15, .byte = 0x96 },
		{ .addr = 0x10ad16, .byte = 0x85 },
		{ .addr = 0x10ad17, .byte = 0xf1 },
		{ .addr = 0x3cf8c4, .byte = 0x56 },
		{ .addr = 0x3cf8c5, .byte = 0xa2 }
};

static const SST_Transaction addl_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3995842, .data = 48088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1092884, .data = 24484, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1092886, .data = 34748, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3995844, .data = 22178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1092886, .data = 34289, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1092884, .data = 51094, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_7[] = {
		{ .addr = 0xd407b2, .byte = 0xd9 },
		{ .addr = 0xd407b3, .byte = 0x95 },
		{ .addr = 0xd407b4, .byte = 0x1f },
		{ .addr = 0xd407b5, .byte = 0x22 },
		{ .addr = 0x00000c, .byte = 0x63 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0xd4 },
		{ .addr = 0x38e3d4, .byte = 0x36 },
		{ .addr = 0x38e3d5, .byte = 0xa3 },
		{ .addr = 0x38e3d6, .byte = 0xc3 },
		{ .addr = 0x38e3d7, .byte = 0x80 }
};

static const SST_RamByte addl_final_ram_7[] = {
		{ .addr = 0xd407b2, .byte = 0xd9 },
		{ .addr = 0xd407b3, .byte = 0x95 },
		{ .addr = 0xd407b4, .byte = 0x1f },
		{ .addr = 0xd407b5, .byte = 0x22 },
		{ .addr = 0x039c56, .byte = 0x07 },
		{ .addr = 0x039c57, .byte = 0xb4 },
		{ .addr = 0x039c52, .byte = 0x00 },
		{ .addr = 0x039c53, .byte = 0x12 },
		{ .addr = 0x039c54, .byte = 0x00 },
		{ .addr = 0x039c55, .byte = 0xd4 },
		{ .addr = 0x039c50, .byte = 0xd9 },
		{ .addr = 0x039c51, .byte = 0x95 },
		{ .addr = 0x039c4e, .byte = 0x53 },
		{ .addr = 0x039c4f, .byte = 0x99 },
		{ .addr = 0x039c4a, .byte = 0xd9 },
		{ .addr = 0x039c4b, .byte = 0x91 },
		{ .addr = 0x039c4c, .byte = 0x18 },
		{ .addr = 0x039c4d, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0x63 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0xd4 },
		{ .addr = 0x38e3d4, .byte = 0x36 },
		{ .addr = 0x38e3d5, .byte = 0xa3 },
		{ .addr = 0x38e3d6, .byte = 0xc3 },
		{ .addr = 0x38e3d7, .byte = 0x80 }
};

static const SST_Transaction addl_transactions_7[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3560344, .data = 30070, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 236630, .data = 1972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 236626, .data = 18, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 236628, .data = 212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 236624, .data = 55701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 236622, .data = 21401, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 236618, .data = 55697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 236620, .data = 6198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58324, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3728340, .data = 13987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3728342, .data = 50048, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_8[] = {
		{ .addr = 0x8cc134, .byte = 0xd2 },
		{ .addr = 0x8cc135, .byte = 0x99 },
		{ .addr = 0x8cc136, .byte = 0x4e },
		{ .addr = 0x8cc137, .byte = 0xa9 },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x76f782, .byte = 0xfd },
		{ .addr = 0x76f783, .byte = 0x47 },
		{ .addr = 0x76f784, .byte = 0x80 },
		{ .addr = 0x76f785, .byte = 0x56 }
};

static const SST_RamByte addl_final_ram_8[] = {
		{ .addr = 0x8cc134, .byte = 0xd2 },
		{ .addr = 0x8cc135, .byte = 0x99 },
		{ .addr = 0x8cc136, .byte = 0x4e },
		{ .addr = 0x8cc137, .byte = 0xa9 },
		{ .addr = 0x2c177a, .byte = 0xc1 },
		{ .addr = 0x2c177b, .byte = 0x36 },
		{ .addr = 0x2c1776, .byte = 0x25 },
		{ .addr = 0x2c1777, .byte = 0x08 },
		{ .addr = 0x2c1778, .byte = 0x00 },
		{ .addr = 0x2c1779, .byte = 0x8c },
		{ .addr = 0x2c1774, .byte = 0xd2 },
		{ .addr = 0x2c1775, .byte = 0x99 },
		{ .addr = 0x2c1772, .byte = 0x4a },
		{ .addr = 0x2c1773, .byte = 0x69 },
		{ .addr = 0x2c176e, .byte = 0xd2 },
		{ .addr = 0x2c176f, .byte = 0x95 },
		{ .addr = 0x2c1770, .byte = 0xa2 },
		{ .addr = 0x2c1771, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0xf7 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x76f782, .byte = 0xfd },
		{ .addr = 0x76f783, .byte = 0x47 },
		{ .addr = 0x76f784, .byte = 0x80 },
		{ .addr = 0x76f785, .byte = 0x56 }
};

static const SST_Transaction addl_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9587304, .data = 31419, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2889594, .data = 49462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2889590, .data = 9480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2889592, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2889588, .data = 53913, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2889586, .data = 19049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2889582, .data = 53909, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2889584, .data = 41618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7796610, .data = 64839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7796612, .data = 32854, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_9[] = {
		{ .addr = 0xfeda6c, .byte = 0xd0 },
		{ .addr = 0xfeda6d, .byte = 0x9d },
		{ .addr = 0xfeda6e, .byte = 0x19 },
		{ .addr = 0xfeda6f, .byte = 0x56 },
		{ .addr = 0x6a41f8, .byte = 0xb2 },
		{ .addr = 0x6a41f9, .byte = 0xfc },
		{ .addr = 0x6a41fa, .byte = 0x96 },
		{ .addr = 0x6a41fb, .byte = 0x56 },
		{ .addr = 0xfeda70, .byte = 0x78 },
		{ .addr = 0xfeda71, .byte = 0x98 }
};

static const SST_RamByte addl_final_ram_9[] = {
		{ .addr = 0xfeda6c, .byte = 0xd0 },
		{ .addr = 0xfeda6d, .byte = 0x9d },
		{ .addr = 0xfeda6e, .byte = 0x19 },
		{ .addr = 0xfeda6f, .byte = 0x56 },
		{ .addr = 0x6a41f8, .byte = 0xb2 },
		{ .addr = 0x6a41f9, .byte = 0xfc },
		{ .addr = 0x6a41fa, .byte = 0x96 },
		{ .addr = 0x6a41fb, .byte = 0x56 },
		{ .addr = 0xfeda70, .byte = 0x78 },
		{ .addr = 0xfeda71, .byte = 0x98 }
};

static const SST_Transaction addl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6963704, .data = 45820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6963706, .data = 38486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16702064, .data = 30872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addl_initial_ram_10[] = {
		{ .addr = 0x50bdcc, .byte = 0xd9 },
		{ .addr = 0x50bdcd, .byte = 0xa8 },
		{ .addr = 0x50bdce, .byte = 0xc2 },
		{ .addr = 0x50bdcf, .byte = 0x06 },
		{ .addr = 0x50bdd0, .byte = 0x11 },
		{ .addr = 0x50bdd1, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0x05 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x27 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x7e27f0, .byte = 0x56 },
		{ .addr = 0x7e27f1, .byte = 0x6d },
		{ .addr = 0x7e27f2, .byte = 0x30 },
		{ .addr = 0x7e27f3, .byte = 0xfb }
};

static const SST_RamByte addl_final_ram_10[] = {
		{ .addr = 0x50bdcc, .byte = 0xd9 },
		{ .addr = 0x50bdcd, .byte = 0xa8 },
		{ .addr = 0x50bdce, .byte = 0xc2 },
		{ .addr = 0x50bdcf, .byte = 0x06 },
		{ .addr = 0x50bdd0, .byte = 0x11 },
		{ .addr = 0x50bdd1, .byte = 0x30 },
		{ .addr = 0xdf108e, .byte = 0xbd },
		{ .addr = 0xdf108f, .byte = 0xce },
		{ .addr = 0xdf108a, .byte = 0xa4 },
		{ .addr = 0xdf108b, .byte = 0x0a },
		{ .addr = 0xdf108c, .byte = 0x00 },
		{ .addr = 0xdf108d, .byte = 0x50 },
		{ .addr = 0xdf1088, .byte = 0xd9 },
		{ .addr = 0xdf1089, .byte = 0xa8 },
		{ .addr = 0xdf1086, .byte = 0xc5 },
		{ .addr = 0xdf1087, .byte = 0x41 },
		{ .addr = 0xdf1082, .byte = 0xd9 },
		{ .addr = 0xdf1083, .byte = 0xb5 },
		{ .addr = 0xdf1084, .byte = 0x3e },
		{ .addr = 0xdf1085, .byte = 0x91 },
		{ .addr = 0x00000c, .byte = 0x05 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x27 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0x7e27f0, .byte = 0x56 },
		{ .addr = 0x7e27f1, .byte = 0x6d },
		{ .addr = 0x7e27f2, .byte = 0x30 },
		{ .addr = 0x7e27f3, .byte = 0xfb }
};

static const SST_Transaction addl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5291472, .data = 4400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9553216, .data = 7473, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14618766, .data = 48590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14618762, .data = 41994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14618764, .data = 80, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14618760, .data = 55720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14618758, .data = 50497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14618754, .data = 55733, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14618756, .data = 16017, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 1406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 10224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8267760, .data = 22125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8267762, .data = 12539, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_11[] = {
		{ .addr = 0x328856, .byte = 0x56 },
		{ .addr = 0x328857, .byte = 0x8d },
		{ .addr = 0x328858, .byte = 0x24 },
		{ .addr = 0x328859, .byte = 0xf0 },
		{ .addr = 0x32885a, .byte = 0x9c },
		{ .addr = 0x32885b, .byte = 0xaa }
};

static const SST_RamByte addl_final_ram_11[] = {
		{ .addr = 0x328856, .byte = 0x56 },
		{ .addr = 0x328857, .byte = 0x8d },
		{ .addr = 0x328858, .byte = 0x24 },
		{ .addr = 0x328859, .byte = 0xf0 },
		{ .addr = 0x32885a, .byte = 0x9c },
		{ .addr = 0x32885b, .byte = 0xaa }
};

static const SST_Transaction addl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3311706, .data = 40106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addl_initial_ram_12[] = {
		{ .addr = 0xba8b12, .byte = 0xd0 },
		{ .addr = 0xba8b13, .byte = 0x8c },
		{ .addr = 0xba8b14, .byte = 0x20 },
		{ .addr = 0xba8b15, .byte = 0x37 },
		{ .addr = 0xba8b16, .byte = 0xed },
		{ .addr = 0xba8b17, .byte = 0x62 }
};

static const SST_RamByte addl_final_ram_12[] = {
		{ .addr = 0xba8b12, .byte = 0xd0 },
		{ .addr = 0xba8b13, .byte = 0x8c },
		{ .addr = 0xba8b14, .byte = 0x20 },
		{ .addr = 0xba8b15, .byte = 0x37 },
		{ .addr = 0xba8b16, .byte = 0xed },
		{ .addr = 0xba8b17, .byte = 0x62 }
};

static const SST_Transaction addl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12225302, .data = 60770, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addl_initial_ram_13[] = {
		{ .addr = 0x9a1074, .byte = 0xd7 },
		{ .addr = 0x9a1075, .byte = 0xb3 },
		{ .addr = 0x9a1076, .byte = 0x32 },
		{ .addr = 0x9a1077, .byte = 0xd2 },
		{ .addr = 0x9a1078, .byte = 0x0e },
		{ .addr = 0x9a1079, .byte = 0x12 },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0x60 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x6e60e2, .byte = 0xb3 },
		{ .addr = 0x6e60e3, .byte = 0xda },
		{ .addr = 0x6e60e4, .byte = 0x4f },
		{ .addr = 0x6e60e5, .byte = 0xa0 }
};

static const SST_RamByte addl_final_ram_13[] = {
		{ .addr = 0x9a1074, .byte = 0xd7 },
		{ .addr = 0x9a1075, .byte = 0xb3 },
		{ .addr = 0x9a1076, .byte = 0x32 },
		{ .addr = 0x9a1077, .byte = 0xd2 },
		{ .addr = 0x9a1078, .byte = 0x0e },
		{ .addr = 0x9a1079, .byte = 0x12 },
		{ .addr = 0xf5efa6, .byte = 0x10 },
		{ .addr = 0xf5efa7, .byte = 0x76 },
		{ .addr = 0xf5efa2, .byte = 0x26 },
		{ .addr = 0xf5efa3, .byte = 0x0f },
		{ .addr = 0xf5efa4, .byte = 0x00 },
		{ .addr = 0xf5efa5, .byte = 0x9a },
		{ .addr = 0xf5efa0, .byte = 0xd7 },
		{ .addr = 0xf5efa1, .byte = 0xb3 },
		{ .addr = 0xf5ef9e, .byte = 0xb5 },
		{ .addr = 0xf5ef9f, .byte = 0xc1 },
		{ .addr = 0xf5ef9a, .byte = 0xd7 },
		{ .addr = 0xf5ef9b, .byte = 0xb5 },
		{ .addr = 0xf5ef9c, .byte = 0xa3 },
		{ .addr = 0xf5ef9d, .byte = 0x0a },
		{ .addr = 0x00000c, .byte = 0x4c },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0x60 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x6e60e2, .byte = 0xb3 },
		{ .addr = 0x6e60e3, .byte = 0xda },
		{ .addr = 0x6e60e4, .byte = 0x4f },
		{ .addr = 0x6e60e5, .byte = 0xa0 }
};

static const SST_Transaction addl_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10096760, .data = 3602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 701888, .data = 62350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117670, .data = 4214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117666, .data = 9743, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117668, .data = 154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117664, .data = 55219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117662, .data = 46529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117658, .data = 55221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117660, .data = 41738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7233762, .data = 46042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7233764, .data = 20384, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_14[] = {
		{ .addr = 0x5b4bbc, .byte = 0xd8 },
		{ .addr = 0x5b4bbd, .byte = 0x86 },
		{ .addr = 0x5b4bbe, .byte = 0x84 },
		{ .addr = 0x5b4bbf, .byte = 0x3c },
		{ .addr = 0x5b4bc0, .byte = 0x02 },
		{ .addr = 0x5b4bc1, .byte = 0xc1 }
};

static const SST_RamByte addl_final_ram_14[] = {
		{ .addr = 0x5b4bbc, .byte = 0xd8 },
		{ .addr = 0x5b4bbd, .byte = 0x86 },
		{ .addr = 0x5b4bbe, .byte = 0x84 },
		{ .addr = 0x5b4bbf, .byte = 0x3c },
		{ .addr = 0x5b4bc0, .byte = 0x02 },
		{ .addr = 0x5b4bc1, .byte = 0xc1 }
};

static const SST_Transaction addl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5983168, .data = 705, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addl_initial_ram_15[] = {
		{ .addr = 0x044dd8, .byte = 0x5e },
		{ .addr = 0x044dd9, .byte = 0xad },
		{ .addr = 0x044dda, .byte = 0x12 },
		{ .addr = 0x044ddb, .byte = 0xba },
		{ .addr = 0x044ddc, .byte = 0xf3 },
		{ .addr = 0x044ddd, .byte = 0xf9 },
		{ .addr = 0x41153c, .byte = 0x23 },
		{ .addr = 0x41153d, .byte = 0x40 },
		{ .addr = 0x41153e, .byte = 0xd6 },
		{ .addr = 0x41153f, .byte = 0xf4 },
		{ .addr = 0x044dde, .byte = 0xb7 },
		{ .addr = 0x044ddf, .byte = 0x29 }
};

static const SST_RamByte addl_final_ram_15[] = {
		{ .addr = 0x044dd8, .byte = 0x5e },
		{ .addr = 0x044dd9, .byte = 0xad },
		{ .addr = 0x044dda, .byte = 0x12 },
		{ .addr = 0x044ddb, .byte = 0xba },
		{ .addr = 0x044ddc, .byte = 0xf3 },
		{ .addr = 0x044ddd, .byte = 0xf9 },
		{ .addr = 0x41153c, .byte = 0x23 },
		{ .addr = 0x41153d, .byte = 0x40 },
		{ .addr = 0x41153e, .byte = 0xd6 },
		{ .addr = 0x41153f, .byte = 0xfb },
		{ .addr = 0x044dde, .byte = 0xb7 },
		{ .addr = 0x044ddf, .byte = 0x29 }
};

static const SST_Transaction addl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 282076, .data = 62457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4265276, .data = 9024, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4265278, .data = 55028, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 282078, .data = 46889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4265278, .data = 55035, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4265276, .data = 9024, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ADDL_TEST_COUNT = 16;
static const SST_TestCase addl[] = {
	{
		.name = "000 ADD.l D5, (d8, A3, Xn) dbb3",
		.initial = {
			.regs = {
				2716418231, 4207376922, 2543932834, 4262317947, 3724476184, 22002888, 386349136, 3381172759, 2874603247, 2869405373, 1615831200, 1045252699, 2138434487, 709118711, 3722715766, 14939940, 4539052, 8979, 3065352
			},
			.prefetch0 = 56243,
			.prefetch1 = 3151,
			.ram = addl_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2716418231, 4207376922, 2543932834, 4262317947, 3724476184, 22002888, 386349136, 3381172759, 2874603247, 2869405373, 1615831200, 1045252699, 2138434487, 709118711, 3722715766, 14939940, 4539038, 8979, 3759204634
			},
			.prefetch0 = 2618,
			.prefetch1 = 56558,
			.ram = addl_final_ram_0,
			.ram_len = 28,
		},
		.transactions = addl_transactions_0,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "001 ADD.l D6, (A3) dd93",
		.initial = {
			.regs = {
				3432589107, 4281527657, 3791521753, 378949926, 1546601039, 2535113276, 2213181786, 2548804013, 4106088243, 281177683, 3664721777, 2733981239, 914647219, 3352637670, 1735969900, 15273886, 1122424, 42271, 12192678
			},
			.prefetch0 = 56723,
			.prefetch1 = 15343,
			.ram = addl_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3432589107, 4281527657, 3791521753, 378949926, 1546601039, 2535113276, 2213181786, 2548804013, 4106088243, 281177683, 3664721777, 2733981239, 914647219, 3352637670, 1735969900, 15273886, 1122410, 9503, 4072809490
			},
			.prefetch0 = 64285,
			.prefetch1 = 40429,
			.ram = addl_final_ram_1,
			.ram_len = 26,
		},
		.transactions = addl_transactions_1,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "002 ADD.l (A2)+, D6 dc9a",
		.initial = {
			.regs = {
				2918998470, 4280263269, 2217931224, 2018318373, 3381038019, 2592947732, 420430619, 1901456984, 1284790511, 3803555667, 1553803970, 298132349, 1168479489, 300992719, 3878284537, 9416820, 16613618, 1298, 5756302
			},
			.prefetch0 = 56474,
			.prefetch1 = 3564,
			.ram = addl_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2918998470, 4280263269, 2217931224, 2018318373, 3381038019, 2592947732, 2918503137, 1901456984, 1284790511, 3803555667, 1553803974, 298132349, 1168479489, 300992719, 3878284537, 9416820, 16613618, 1288, 5756304
			},
			.prefetch0 = 3564,
			.prefetch1 = 42234,
			.ram = addl_final_ram_2,
			.ram_len = 10,
		},
		.transactions = addl_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 ADD.l -(A3), D7 dea3",
		.initial = {
			.regs = {
				3405986006, 4212219698, 2311510561, 3536929394, 2107097787, 2147639860, 1131762157, 3982604027, 2680436001, 3739637617, 2694775374, 2812106664, 3714953158, 1666684492, 4000630423, 12008130, 10280640, 41489, 4333818
			},
			.prefetch0 = 56995,
			.prefetch1 = 27892,
			.ram = addl_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3405986006, 4212219698, 2311510561, 3536929394, 2107097787, 2147639860, 1131762157, 1459356037, 2680436001, 3739637617, 2694775374, 2812106660, 3714953158, 1666684492, 4000630423, 12008130, 10280640, 41489, 4333820
			},
			.prefetch0 = 27892,
			.prefetch1 = 22448,
			.ram = addl_final_ram_3,
			.ram_len = 10,
		},
		.transactions = addl_transactions_3,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "004 ADD.l 2, A1 5489",
		.initial = {
			.regs = {
				548901056, 447100471, 1057053824, 635801448, 953387538, 1158998895, 1588043205, 3793422409, 1248341714, 1102869094, 164984855, 3968194156, 2380423813, 262648387, 3215184732, 3772646, 11326036, 1793, 2626914
			},
			.prefetch0 = 21641,
			.prefetch1 = 63025,
			.ram = addl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				548901056, 447100471, 1057053824, 635801448, 953387538, 1158998895, 1588043205, 3793422409, 1248341714, 1102869096, 164984855, 3968194156, 2380423813, 262648387, 3215184732, 3772646, 11326036, 1793, 2626916
			},
			.prefetch0 = 63025,
			.prefetch1 = 40746,
			.ram = addl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = addl_transactions_4,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "005 ADD.l 6, (xxx).l 5cb9",
		.initial = {
			.regs = {
				1997083983, 277993933, 4188360493, 849379793, 533494464, 1653914432, 2995361858, 2871589849, 1153922268, 3113410786, 1656760732, 5634048, 4095767548, 3207175094, 2797531289, 5306890, 4846258, 8207, 13605292
			},
			.prefetch0 = 23737,
			.prefetch1 = 57444,
			.ram = addl_initial_ram_5,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1997083983, 277993933, 4188360493, 849379793, 533494464, 1653914432, 2995361858, 2871589849, 1153922268, 3113410786, 1656760732, 5634048, 4095767548, 3207175094, 2797531289, 5306890, 4846244, 8207, 2752304676
			},
			.prefetch0 = 38847,
			.prefetch1 = 59467,
			.ram = addl_final_ram_5,
			.ram_len = 30,
		},
		.transactions = addl_transactions_5,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "006 ADD.l D0, (d8, A0, Xn) d1b0",
		.initial = {
			.regs = {
				1743912501, 1272256636, 2462848492, 3654543459, 2388222383, 1526872963, 3713494227, 1808196193, 3457210041, 3383496409, 2635392400, 3777245247, 839453484, 1606817786, 3465463336, 11445380, 8284490, 34077, 3995842
			},
			.prefetch0 = 53680,
			.prefetch1 = 34466,
			.ram = addl_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1743912501, 1272256636, 2462848492, 3654543459, 2388222383, 1526872963, 3713494227, 1808196193, 3457210041, 3383496409, 2635392400, 3777245247, 839453484, 1606817786, 3465463336, 11445380, 8284490, 34058, 3995846
			},
			.prefetch0 = 48088,
			.prefetch1 = 22178,
			.ram = addl_final_ram_6,
			.ram_len = 12,
		},
		.transactions = addl_transactions_6,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "007 ADD.l D4, (A5) d995",
		.initial = {
			.regs = {
				4275265200, 1688433004, 152413994, 945638923, 3567006842, 3971514596, 3433837888, 2593205811, 3580982987, 3788413132, 1740031311, 2098501700, 2867245989, 406213529, 2566513197, 1481536, 236632, 18, 13895606
			},
			.prefetch0 = 55701,
			.prefetch1 = 7970,
			.ram = addl_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4275265200, 1688433004, 152413994, 945638923, 3567006842, 3971514596, 3433837888, 2593205811, 3580982987, 3788413132, 1740031311, 2098501700, 2867245989, 406213529, 2566513197, 1481536, 236618, 8210, 1664672728
			},
			.prefetch0 = 13987,
			.prefetch1 = 50048,
			.ram = addl_final_ram_7,
			.ram_len = 26,
		},
		.transactions = addl_transactions_7,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "008 ADD.l (A1)+, D1 d299",
		.initial = {
			.regs = {
				1532452410, 3215324121, 1518014027, 3338943692, 1300800977, 2746560567, 4069879382, 1792620120, 3233772024, 2727496297, 2723512734, 2244283223, 1250445678, 3740649802, 3274208627, 487548, 2889596, 9480, 9224504
			},
			.prefetch0 = 53913,
			.prefetch1 = 20137,
			.ram = addl_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1532452410, 3215324121, 1518014027, 3338943692, 1300800977, 2746560567, 4069879382, 1792620120, 3233772024, 2727496297, 2723512734, 2244283223, 1250445678, 3740649802, 3274208627, 487548, 2889582, 9480, 3849779078
			},
			.prefetch0 = 64839,
			.prefetch1 = 32854,
			.ram = addl_final_ram_8,
			.ram_len = 26,
		},
		.transactions = addl_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 ADD.l (A5)+, D0 d09d",
		.initial = {
			.regs = {
				1659698063, 2015515816, 332413709, 3989440373, 323481348, 3020303488, 412604149, 4264640919, 279092073, 2233607673, 3588400736, 393112519, 2623080901, 1097482744, 3711142302, 8651148, 10275580, 41501, 16702064
			},
			.prefetch0 = 53405,
			.prefetch1 = 6486,
			.ram = addl_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				367628773, 2015515816, 332413709, 3989440373, 323481348, 3020303488, 412604149, 4264640919, 279092073, 2233607673, 3588400736, 393112519, 2623080901, 1097482748, 3711142302, 8651148, 10275580, 41489, 16702066
			},
			.prefetch0 = 6486,
			.prefetch1 = 30872,
			.ram = addl_final_ram_9,
			.ram_len = 10,
		},
		.transactions = addl_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 ADD.l D4, (d16, A0) d9a8",
		.initial = {
			.regs = {
				3904726925, 2062411139, 3478231964, 2135163652, 2496136050, 1940428987, 3226982061, 1126942304, 1049756475, 2619605255, 3808441312, 695703918, 1979124163, 2913805513, 4241818870, 5865536, 14618768, 41994, 5291472
			},
			.prefetch0 = 55720,
			.prefetch1 = 49670,
			.ram = addl_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3904726925, 2062411139, 3478231964, 2135163652, 2496136050, 1940428987, 3226982061, 1126942304, 1049756475, 2619605255, 3808441312, 695703918, 1979124163, 2913805513, 4241818870, 5865536, 14618754, 9226, 92153844
			},
			.prefetch0 = 22125,
			.prefetch1 = 12539,
			.ram = addl_final_ram_10,
			.ram_len = 28,
		},
		.transactions = addl_transactions_10,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "011 ADD.l 3, A5 568d",
		.initial = {
			.regs = {
				4125627716, 3977477090, 4082198957, 1361324718, 817951423, 2037196598, 915960060, 3917224345, 3985541475, 3480128646, 4084403529, 4256561899, 2058235781, 3720735961, 1571371508, 437562, 5182342, 1566, 3311706
			},
			.prefetch0 = 22157,
			.prefetch1 = 9456,
			.ram = addl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4125627716, 3977477090, 4082198957, 1361324718, 817951423, 2037196598, 915960060, 3917224345, 3985541475, 3480128646, 4084403529, 4256561899, 2058235781, 3720735964, 1571371508, 437562, 5182342, 1566, 3311708
			},
			.prefetch0 = 9456,
			.prefetch1 = 40106,
			.ram = addl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = addl_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 ADD.l A4, D0 d08c",
		.initial = {
			.regs = {
				1568761592, 4121764311, 4252237787, 410032789, 1658915138, 2930238525, 3951116880, 131400227, 1840122565, 3071372006, 2140633626, 744706314, 2818792490, 3970853064, 1731034602, 8760846, 5795168, 9743, 12225302
			},
			.prefetch0 = 53388,
			.prefetch1 = 8247,
			.ram = addl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				92586786, 4121764311, 4252237787, 410032789, 1658915138, 2930238525, 3951116880, 131400227, 1840122565, 3071372006, 2140633626, 744706314, 2818792490, 3970853064, 1731034602, 8760846, 5795168, 9745, 12225304
			},
			.prefetch0 = 8247,
			.prefetch1 = 60770,
			.ram = addl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = addl_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 ADD.l D3, (d8, A3, Xn) d7b3",
		.initial = {
			.regs = {
				1384348319, 3809989403, 140879534, 2102331513, 3365701618, 108090722, 1253762964, 3981002143, 3802495517, 84269589, 3523393807, 2735385974, 213202702, 996097967, 37714447, 15624504, 16117672, 9743, 10096760
			},
			.prefetch0 = 55219,
			.prefetch1 = 13010,
			.ram = addl_initial_ram_13,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1384348319, 3809989403, 140879534, 2102331513, 3365701618, 108090722, 1253762964, 3981002143, 3802495517, 84269589, 3523393807, 2735385974, 213202702, 996097967, 37714447, 15624504, 16117658, 9743, 1282302182
			},
			.prefetch0 = 46042,
			.prefetch1 = 20384,
			.ram = addl_final_ram_13,
			.ram_len = 28,
		},
		.transactions = addl_transactions_13,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "014 ADD.l D6, D4 d886",
		.initial = {
			.regs = {
				2950198591, 1827429348, 2244961224, 3745455896, 3784088807, 3873675062, 2354834435, 3711918192, 3106505807, 3138855996, 325677739, 1381543348, 1186990175, 2578261958, 2578976954, 14086748, 6202668, 514, 5983168
			},
			.prefetch0 = 55430,
			.prefetch1 = 33852,
			.ram = addl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2950198591, 1827429348, 2244961224, 3745455896, 1843955946, 3873675062, 2354834435, 3711918192, 3106505807, 3138855996, 325677739, 1381543348, 1186990175, 2578261958, 2578976954, 14086748, 6202668, 531, 5983170
			},
			.prefetch0 = 33852,
			.prefetch1 = 705,
			.ram = addl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = addl_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 ADD.l 7, (d16, A5) 5ead",
		.initial = {
			.regs = {
				3331511371, 3421875688, 525165051, 1116437257, 1300128111, 1165965766, 900927771, 905807439, 13019155, 3790461863, 1891691475, 1817280324, 2956906970, 373359234, 584520243, 4345012, 12350638, 1311, 282076
			},
			.prefetch0 = 24237,
			.prefetch1 = 4794,
			.ram = addl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3331511371, 3421875688, 525165051, 1116437257, 1300128111, 1165965766, 900927771, 905807439, 13019155, 3790461863, 1891691475, 1817280324, 2956906970, 373359234, 584520243, 4345012, 12350638, 1280, 282080
			},
			.prefetch0 = 62457,
			.prefetch1 = 46889,
			.ram = addl_final_ram_15,
			.ram_len = 12,
		},
		.transactions = addl_transactions_15,
		.transactions_len = 6,
		.lenght = 24,
	},
};

#endif /* RBT_ADDL_H */