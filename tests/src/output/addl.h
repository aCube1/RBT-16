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

static const SST_RamByte addl_initial_ram_16[] = {
		{ .addr = 0x2e173a, .byte = 0x5c },
		{ .addr = 0x2e173b, .byte = 0x9f },
		{ .addr = 0x2e173c, .byte = 0x58 },
		{ .addr = 0x2e173d, .byte = 0x0e },
		{ .addr = 0x93e308, .byte = 0x7f },
		{ .addr = 0x93e309, .byte = 0x16 },
		{ .addr = 0x93e30a, .byte = 0x98 },
		{ .addr = 0x93e30b, .byte = 0x2b },
		{ .addr = 0x2e173e, .byte = 0x50 },
		{ .addr = 0x2e173f, .byte = 0xea }
};

static const SST_RamByte addl_final_ram_16[] = {
		{ .addr = 0x2e173a, .byte = 0x5c },
		{ .addr = 0x2e173b, .byte = 0x9f },
		{ .addr = 0x2e173c, .byte = 0x58 },
		{ .addr = 0x2e173d, .byte = 0x0e },
		{ .addr = 0x93e308, .byte = 0x7f },
		{ .addr = 0x93e309, .byte = 0x16 },
		{ .addr = 0x93e30a, .byte = 0x98 },
		{ .addr = 0x93e30b, .byte = 0x31 },
		{ .addr = 0x2e173e, .byte = 0x50 },
		{ .addr = 0x2e173f, .byte = 0xea }
};

static const SST_Transaction addl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9691912, .data = 32534, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9691914, .data = 38955, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3020606, .data = 20714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9691914, .data = 38961, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9691912, .data = 32534, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_17[] = {
		{ .addr = 0x35240c, .byte = 0xde },
		{ .addr = 0x35240d, .byte = 0x96 },
		{ .addr = 0x35240e, .byte = 0xcb },
		{ .addr = 0x35240f, .byte = 0xd8 },
		{ .addr = 0xbda644, .byte = 0x1c },
		{ .addr = 0xbda645, .byte = 0x0e },
		{ .addr = 0xbda646, .byte = 0x84 },
		{ .addr = 0xbda647, .byte = 0x17 },
		{ .addr = 0x352410, .byte = 0x3d },
		{ .addr = 0x352411, .byte = 0xf4 }
};

static const SST_RamByte addl_final_ram_17[] = {
		{ .addr = 0x35240c, .byte = 0xde },
		{ .addr = 0x35240d, .byte = 0x96 },
		{ .addr = 0x35240e, .byte = 0xcb },
		{ .addr = 0x35240f, .byte = 0xd8 },
		{ .addr = 0xbda644, .byte = 0x1c },
		{ .addr = 0xbda645, .byte = 0x0e },
		{ .addr = 0xbda646, .byte = 0x84 },
		{ .addr = 0xbda647, .byte = 0x17 },
		{ .addr = 0x352410, .byte = 0x3d },
		{ .addr = 0x352411, .byte = 0xf4 }
};

static const SST_Transaction addl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12428868, .data = 7182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12428870, .data = 33815, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3482640, .data = 15860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addl_initial_ram_18[] = {
		{ .addr = 0x5043a8, .byte = 0xd0 },
		{ .addr = 0x5043a9, .byte = 0x87 },
		{ .addr = 0x5043aa, .byte = 0x87 },
		{ .addr = 0x5043ab, .byte = 0xbc },
		{ .addr = 0x5043ac, .byte = 0xbf },
		{ .addr = 0x5043ad, .byte = 0xe3 }
};

static const SST_RamByte addl_final_ram_18[] = {
		{ .addr = 0x5043a8, .byte = 0xd0 },
		{ .addr = 0x5043a9, .byte = 0x87 },
		{ .addr = 0x5043aa, .byte = 0x87 },
		{ .addr = 0x5043ab, .byte = 0xbc },
		{ .addr = 0x5043ac, .byte = 0xbf },
		{ .addr = 0x5043ad, .byte = 0xe3 }
};

static const SST_Transaction addl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5260204, .data = 49123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addl_initial_ram_19[] = {
		{ .addr = 0x05a046, .byte = 0xdd },
		{ .addr = 0x05a047, .byte = 0x99 },
		{ .addr = 0x05a048, .byte = 0xbb },
		{ .addr = 0x05a049, .byte = 0xa8 },
		{ .addr = 0x00000c, .byte = 0xb5 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xa6 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0xb2a6de, .byte = 0xbd },
		{ .addr = 0xb2a6df, .byte = 0xec },
		{ .addr = 0xb2a6e0, .byte = 0xcc },
		{ .addr = 0xb2a6e1, .byte = 0xbd }
};

static const SST_RamByte addl_final_ram_19[] = {
		{ .addr = 0x05a046, .byte = 0xdd },
		{ .addr = 0x05a047, .byte = 0x99 },
		{ .addr = 0x05a048, .byte = 0xbb },
		{ .addr = 0x05a049, .byte = 0xa8 },
		{ .addr = 0xc82836, .byte = 0xa0 },
		{ .addr = 0xc82837, .byte = 0x48 },
		{ .addr = 0xc82832, .byte = 0x80 },
		{ .addr = 0xc82833, .byte = 0x16 },
		{ .addr = 0xc82834, .byte = 0x00 },
		{ .addr = 0xc82835, .byte = 0x05 },
		{ .addr = 0xc82830, .byte = 0xdd },
		{ .addr = 0xc82831, .byte = 0x99 },
		{ .addr = 0xc8282e, .byte = 0xe7 },
		{ .addr = 0xc8282f, .byte = 0xa9 },
		{ .addr = 0xc8282a, .byte = 0xdd },
		{ .addr = 0xc8282b, .byte = 0x91 },
		{ .addr = 0xc8282c, .byte = 0x68 },
		{ .addr = 0xc8282d, .byte = 0xa8 },
		{ .addr = 0x00000c, .byte = 0xb5 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xa6 },
		{ .addr = 0x00000f, .byte = 0xde },
		{ .addr = 0xb2a6de, .byte = 0xbd },
		{ .addr = 0xb2a6df, .byte = 0xec },
		{ .addr = 0xb2a6e0, .byte = 0xcc },
		{ .addr = 0xb2a6e1, .byte = 0xbd }
};

static const SST_Transaction addl_transactions_19[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11069352, .data = 9883, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13117494, .data = 41032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13117490, .data = 32790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13117492, .data = 5, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13117488, .data = 56729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13117486, .data = 59305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13117482, .data = 56721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13117484, .data = 26792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11708126, .data = 48620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11708128, .data = 52413, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_20[] = {
		{ .addr = 0x9453d0, .byte = 0x58 },
		{ .addr = 0x9453d1, .byte = 0x98 },
		{ .addr = 0x9453d2, .byte = 0x4a },
		{ .addr = 0x9453d3, .byte = 0x5d },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x55 },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0xaa553e, .byte = 0xa7 },
		{ .addr = 0xaa553f, .byte = 0x4b },
		{ .addr = 0xaa5540, .byte = 0x0b },
		{ .addr = 0xaa5541, .byte = 0x42 }
};

static const SST_RamByte addl_final_ram_20[] = {
		{ .addr = 0x9453d0, .byte = 0x58 },
		{ .addr = 0x9453d1, .byte = 0x98 },
		{ .addr = 0x9453d2, .byte = 0x4a },
		{ .addr = 0x9453d3, .byte = 0x5d },
		{ .addr = 0xb25e30, .byte = 0x53 },
		{ .addr = 0xb25e31, .byte = 0xd2 },
		{ .addr = 0xb25e2c, .byte = 0x25 },
		{ .addr = 0xb25e2d, .byte = 0x10 },
		{ .addr = 0xb25e2e, .byte = 0x00 },
		{ .addr = 0xb25e2f, .byte = 0x94 },
		{ .addr = 0xb25e2a, .byte = 0x58 },
		{ .addr = 0xb25e2b, .byte = 0x98 },
		{ .addr = 0xb25e28, .byte = 0x1a },
		{ .addr = 0xb25e29, .byte = 0x91 },
		{ .addr = 0xb25e24, .byte = 0x58 },
		{ .addr = 0xb25e25, .byte = 0x95 },
		{ .addr = 0xb25e26, .byte = 0xda },
		{ .addr = 0xb25e27, .byte = 0x7b },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0x55 },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0xaa553e, .byte = 0xa7 },
		{ .addr = 0xaa553f, .byte = 0x4b },
		{ .addr = 0xaa5540, .byte = 0x0b },
		{ .addr = 0xaa5541, .byte = 0x42 }
};

static const SST_Transaction addl_transactions_20[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8067728, .data = 1265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11689520, .data = 21458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11689516, .data = 9488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11689518, .data = 148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11689514, .data = 22680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11689512, .data = 6801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11689508, .data = 22677, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11689510, .data = 55931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21822, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11162942, .data = 42827, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11162944, .data = 2882, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_21[] = {
		{ .addr = 0xea7242, .byte = 0xd8 },
		{ .addr = 0xea7243, .byte = 0xa9 },
		{ .addr = 0xea7244, .byte = 0xa8 },
		{ .addr = 0xea7245, .byte = 0x94 },
		{ .addr = 0xea7246, .byte = 0x5f },
		{ .addr = 0xea7247, .byte = 0x03 },
		{ .addr = 0xf74848, .byte = 0xe5 },
		{ .addr = 0xf74849, .byte = 0x9f },
		{ .addr = 0xf7484a, .byte = 0xcd },
		{ .addr = 0xf7484b, .byte = 0x51 },
		{ .addr = 0xea7248, .byte = 0x96 },
		{ .addr = 0xea7249, .byte = 0xca }
};

static const SST_RamByte addl_final_ram_21[] = {
		{ .addr = 0xea7242, .byte = 0xd8 },
		{ .addr = 0xea7243, .byte = 0xa9 },
		{ .addr = 0xea7244, .byte = 0xa8 },
		{ .addr = 0xea7245, .byte = 0x94 },
		{ .addr = 0xea7246, .byte = 0x5f },
		{ .addr = 0xea7247, .byte = 0x03 },
		{ .addr = 0xf74848, .byte = 0xe5 },
		{ .addr = 0xf74849, .byte = 0x9f },
		{ .addr = 0xf7484a, .byte = 0xcd },
		{ .addr = 0xf7484b, .byte = 0x51 },
		{ .addr = 0xea7248, .byte = 0x96 },
		{ .addr = 0xea7249, .byte = 0xca }
};

static const SST_Transaction addl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15364678, .data = 24323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16205896, .data = 58783, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16205898, .data = 52561, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15364680, .data = 38602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addl_initial_ram_22[] = {
		{ .addr = 0x37809a, .byte = 0x5e },
		{ .addr = 0x37809b, .byte = 0x9e },
		{ .addr = 0x37809c, .byte = 0x7b },
		{ .addr = 0x37809d, .byte = 0xce },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xd9 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0x7cd906, .byte = 0x41 },
		{ .addr = 0x7cd907, .byte = 0x7e },
		{ .addr = 0x7cd908, .byte = 0xdd },
		{ .addr = 0x7cd909, .byte = 0xb8 }
};

static const SST_RamByte addl_final_ram_22[] = {
		{ .addr = 0x37809a, .byte = 0x5e },
		{ .addr = 0x37809b, .byte = 0x9e },
		{ .addr = 0x37809c, .byte = 0x7b },
		{ .addr = 0x37809d, .byte = 0xce },
		{ .addr = 0x4e2eaa, .byte = 0x80 },
		{ .addr = 0x4e2eab, .byte = 0x9c },
		{ .addr = 0x4e2ea6, .byte = 0x01 },
		{ .addr = 0x4e2ea7, .byte = 0x17 },
		{ .addr = 0x4e2ea8, .byte = 0x00 },
		{ .addr = 0x4e2ea9, .byte = 0x37 },
		{ .addr = 0x4e2ea4, .byte = 0x5e },
		{ .addr = 0x4e2ea5, .byte = 0x9e },
		{ .addr = 0x4e2ea2, .byte = 0x29 },
		{ .addr = 0x4e2ea3, .byte = 0x83 },
		{ .addr = 0x4e2e9e, .byte = 0x5e },
		{ .addr = 0x4e2e9f, .byte = 0x91 },
		{ .addr = 0x4e2ea0, .byte = 0xf1 },
		{ .addr = 0x4e2ea1, .byte = 0x0c },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xd9 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0x7cd906, .byte = 0x41 },
		{ .addr = 0x7cd907, .byte = 0x7e },
		{ .addr = 0x7cd908, .byte = 0xdd },
		{ .addr = 0x7cd909, .byte = 0xb8 }
};

static const SST_Transaction addl_transactions_22[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 797058, .data = 41540, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5123754, .data = 32924, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5123750, .data = 279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5123752, .data = 55, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5123748, .data = 24222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5123746, .data = 10627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5123742, .data = 24209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5123744, .data = 61708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 55558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8182022, .data = 16766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8182024, .data = 56760, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_23[] = {
		{ .addr = 0x769702, .byte = 0xd1 },
		{ .addr = 0x769703, .byte = 0xb6 },
		{ .addr = 0x769704, .byte = 0xf2 },
		{ .addr = 0x769705, .byte = 0xfd },
		{ .addr = 0x769706, .byte = 0x33 },
		{ .addr = 0x769707, .byte = 0x4e },
		{ .addr = 0xcdd068, .byte = 0xdf },
		{ .addr = 0xcdd069, .byte = 0x79 },
		{ .addr = 0xcdd06a, .byte = 0x8a },
		{ .addr = 0xcdd06b, .byte = 0x81 },
		{ .addr = 0x769708, .byte = 0x4b },
		{ .addr = 0x769709, .byte = 0xff }
};

static const SST_RamByte addl_final_ram_23[] = {
		{ .addr = 0x769702, .byte = 0xd1 },
		{ .addr = 0x769703, .byte = 0xb6 },
		{ .addr = 0x769704, .byte = 0xf2 },
		{ .addr = 0x769705, .byte = 0xfd },
		{ .addr = 0x769706, .byte = 0x33 },
		{ .addr = 0x769707, .byte = 0x4e },
		{ .addr = 0xcdd068, .byte = 0x97 },
		{ .addr = 0xcdd069, .byte = 0xce },
		{ .addr = 0xcdd06a, .byte = 0x83 },
		{ .addr = 0xcdd06b, .byte = 0x3e },
		{ .addr = 0x769708, .byte = 0x4b },
		{ .addr = 0x769709, .byte = 0xff }
};

static const SST_Transaction addl_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7771910, .data = 13134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13488232, .data = 57209, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13488234, .data = 35457, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7771912, .data = 19455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13488234, .data = 33598, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13488232, .data = 38862, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_24[] = {
		{ .addr = 0x4af80a, .byte = 0x5e },
		{ .addr = 0x4af80b, .byte = 0xaa },
		{ .addr = 0x4af80c, .byte = 0x03 },
		{ .addr = 0x4af80d, .byte = 0x00 },
		{ .addr = 0x4af80e, .byte = 0xfd },
		{ .addr = 0x4af80f, .byte = 0x24 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x6e },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0x726e66, .byte = 0x69 },
		{ .addr = 0x726e67, .byte = 0xe1 },
		{ .addr = 0x726e68, .byte = 0x32 },
		{ .addr = 0x726e69, .byte = 0x81 }
};

static const SST_RamByte addl_final_ram_24[] = {
		{ .addr = 0x4af80a, .byte = 0x5e },
		{ .addr = 0x4af80b, .byte = 0xaa },
		{ .addr = 0x4af80c, .byte = 0x03 },
		{ .addr = 0x4af80d, .byte = 0x00 },
		{ .addr = 0x4af80e, .byte = 0xfd },
		{ .addr = 0x4af80f, .byte = 0x24 },
		{ .addr = 0x94606a, .byte = 0xf8 },
		{ .addr = 0x94606b, .byte = 0x0c },
		{ .addr = 0x946066, .byte = 0xa6 },
		{ .addr = 0x946067, .byte = 0x1c },
		{ .addr = 0x946068, .byte = 0x00 },
		{ .addr = 0x946069, .byte = 0x4a },
		{ .addr = 0x946064, .byte = 0x5e },
		{ .addr = 0x946065, .byte = 0xaa },
		{ .addr = 0x946062, .byte = 0x06 },
		{ .addr = 0x946063, .byte = 0x23 },
		{ .addr = 0x94605e, .byte = 0x5e },
		{ .addr = 0x94605f, .byte = 0xb5 },
		{ .addr = 0x946060, .byte = 0xab },
		{ .addr = 0x946061, .byte = 0xf4 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x6e },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0x726e66, .byte = 0x69 },
		{ .addr = 0x726e67, .byte = 0xe1 },
		{ .addr = 0x726e68, .byte = 0x32 },
		{ .addr = 0x726e69, .byte = 0x81 }
};

static const SST_Transaction addl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4913166, .data = 64804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15992354, .data = 45008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9724010, .data = 63500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9724006, .data = 42524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9724008, .data = 74, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9724004, .data = 24234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9724002, .data = 1571, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9723998, .data = 24245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9724000, .data = 44020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 28262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7499366, .data = 27105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7499368, .data = 12929, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_25[] = {
		{ .addr = 0xe26be8, .byte = 0xd4 },
		{ .addr = 0xe26be9, .byte = 0xb8 },
		{ .addr = 0xe26bea, .byte = 0x73 },
		{ .addr = 0xe26beb, .byte = 0x1d },
		{ .addr = 0xe26bec, .byte = 0x68 },
		{ .addr = 0xe26bed, .byte = 0xe2 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0x9e1024, .byte = 0x8b },
		{ .addr = 0x9e1025, .byte = 0x59 },
		{ .addr = 0x9e1026, .byte = 0x34 },
		{ .addr = 0x9e1027, .byte = 0x5f }
};

static const SST_RamByte addl_final_ram_25[] = {
		{ .addr = 0xe26be8, .byte = 0xd4 },
		{ .addr = 0xe26be9, .byte = 0xb8 },
		{ .addr = 0xe26bea, .byte = 0x73 },
		{ .addr = 0xe26beb, .byte = 0x1d },
		{ .addr = 0xe26bec, .byte = 0x68 },
		{ .addr = 0xe26bed, .byte = 0xe2 },
		{ .addr = 0xde34ac, .byte = 0x6b },
		{ .addr = 0xde34ad, .byte = 0xec },
		{ .addr = 0xde34a8, .byte = 0x81 },
		{ .addr = 0xde34a9, .byte = 0x00 },
		{ .addr = 0xde34aa, .byte = 0x00 },
		{ .addr = 0xde34ab, .byte = 0xe2 },
		{ .addr = 0xde34a6, .byte = 0xd4 },
		{ .addr = 0xde34a7, .byte = 0xb8 },
		{ .addr = 0xde34a4, .byte = 0x73 },
		{ .addr = 0xde34a5, .byte = 0x1d },
		{ .addr = 0xde34a0, .byte = 0xd4 },
		{ .addr = 0xde34a1, .byte = 0xb1 },
		{ .addr = 0xde34a2, .byte = 0x00 },
		{ .addr = 0xde34a3, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0x9e1024, .byte = 0x8b },
		{ .addr = 0x9e1025, .byte = 0x59 },
		{ .addr = 0x9e1026, .byte = 0x34 },
		{ .addr = 0x9e1027, .byte = 0x5f }
};

static const SST_Transaction addl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14838764, .data = 26850, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 29468, .data = 54965, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14562476, .data = 27628, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14562472, .data = 33024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14562474, .data = 226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14562470, .data = 54456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14562468, .data = 29469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14562464, .data = 54449, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14562466, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10358820, .data = 35673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10358822, .data = 13407, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_26[] = {
		{ .addr = 0xbf707c, .byte = 0x5a },
		{ .addr = 0xbf707d, .byte = 0xad },
		{ .addr = 0xbf707e, .byte = 0x8c },
		{ .addr = 0xbf707f, .byte = 0x80 },
		{ .addr = 0xbf7080, .byte = 0x16 },
		{ .addr = 0xbf7081, .byte = 0x9f },
		{ .addr = 0x3049ca, .byte = 0x10 },
		{ .addr = 0x3049cb, .byte = 0x7a },
		{ .addr = 0x3049cc, .byte = 0x3b },
		{ .addr = 0x3049cd, .byte = 0xee },
		{ .addr = 0xbf7082, .byte = 0xd0 },
		{ .addr = 0xbf7083, .byte = 0x27 }
};

static const SST_RamByte addl_final_ram_26[] = {
		{ .addr = 0xbf707c, .byte = 0x5a },
		{ .addr = 0xbf707d, .byte = 0xad },
		{ .addr = 0xbf707e, .byte = 0x8c },
		{ .addr = 0xbf707f, .byte = 0x80 },
		{ .addr = 0xbf7080, .byte = 0x16 },
		{ .addr = 0xbf7081, .byte = 0x9f },
		{ .addr = 0x3049ca, .byte = 0x10 },
		{ .addr = 0x3049cb, .byte = 0x7a },
		{ .addr = 0x3049cc, .byte = 0x3b },
		{ .addr = 0x3049cd, .byte = 0xf3 },
		{ .addr = 0xbf7082, .byte = 0xd0 },
		{ .addr = 0xbf7083, .byte = 0x27 }
};

static const SST_Transaction addl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12546176, .data = 5791, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3164618, .data = 4218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3164620, .data = 15342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12546178, .data = 53287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3164620, .data = 15347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3164618, .data = 4218, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_27[] = {
		{ .addr = 0x76482a, .byte = 0x58 },
		{ .addr = 0x76482b, .byte = 0xb1 },
		{ .addr = 0x76482c, .byte = 0x84 },
		{ .addr = 0x76482d, .byte = 0xed },
		{ .addr = 0x76482e, .byte = 0x4c },
		{ .addr = 0x76482f, .byte = 0xd5 },
		{ .addr = 0x4eab42, .byte = 0xe6 },
		{ .addr = 0x4eab43, .byte = 0xc4 },
		{ .addr = 0x4eab44, .byte = 0x8a },
		{ .addr = 0x4eab45, .byte = 0x05 },
		{ .addr = 0x764830, .byte = 0x7d },
		{ .addr = 0x764831, .byte = 0xd1 }
};

static const SST_RamByte addl_final_ram_27[] = {
		{ .addr = 0x76482a, .byte = 0x58 },
		{ .addr = 0x76482b, .byte = 0xb1 },
		{ .addr = 0x76482c, .byte = 0x84 },
		{ .addr = 0x76482d, .byte = 0xed },
		{ .addr = 0x76482e, .byte = 0x4c },
		{ .addr = 0x76482f, .byte = 0xd5 },
		{ .addr = 0x4eab42, .byte = 0xe6 },
		{ .addr = 0x4eab43, .byte = 0xc4 },
		{ .addr = 0x4eab44, .byte = 0x8a },
		{ .addr = 0x4eab45, .byte = 0x09 },
		{ .addr = 0x764830, .byte = 0x7d },
		{ .addr = 0x764831, .byte = 0xd1 }
};

static const SST_Transaction addl_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7751726, .data = 19669, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5155650, .data = 59076, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5155652, .data = 35333, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7751728, .data = 32209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5155652, .data = 35337, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5155650, .data = 59076, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_28[] = {
		{ .addr = 0x8c3f70, .byte = 0xd2 },
		{ .addr = 0x8c3f71, .byte = 0x92 },
		{ .addr = 0x8c3f72, .byte = 0x12 },
		{ .addr = 0x8c3f73, .byte = 0x4a },
		{ .addr = 0x00000c, .byte = 0xf0 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0xcf },
		{ .addr = 0x00000f, .byte = 0x70 },
		{ .addr = 0xeacf70, .byte = 0xf1 },
		{ .addr = 0xeacf71, .byte = 0x19 },
		{ .addr = 0xeacf72, .byte = 0x6b },
		{ .addr = 0xeacf73, .byte = 0xfe }
};

static const SST_RamByte addl_final_ram_28[] = {
		{ .addr = 0x8c3f70, .byte = 0xd2 },
		{ .addr = 0x8c3f71, .byte = 0x92 },
		{ .addr = 0x8c3f72, .byte = 0x12 },
		{ .addr = 0x8c3f73, .byte = 0x4a },
		{ .addr = 0xebe678, .byte = 0x3f },
		{ .addr = 0xebe679, .byte = 0x72 },
		{ .addr = 0xebe674, .byte = 0x86 },
		{ .addr = 0xebe675, .byte = 0x13 },
		{ .addr = 0xebe676, .byte = 0x00 },
		{ .addr = 0xebe677, .byte = 0x8c },
		{ .addr = 0xebe672, .byte = 0xd2 },
		{ .addr = 0xebe673, .byte = 0x92 },
		{ .addr = 0xebe670, .byte = 0x1d },
		{ .addr = 0xebe671, .byte = 0x21 },
		{ .addr = 0xebe66c, .byte = 0xd2 },
		{ .addr = 0xebe66d, .byte = 0x91 },
		{ .addr = 0xebe66e, .byte = 0x76 },
		{ .addr = 0xebe66f, .byte = 0x7c },
		{ .addr = 0x00000c, .byte = 0xf0 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0xcf },
		{ .addr = 0x00000f, .byte = 0x70 },
		{ .addr = 0xeacf70, .byte = 0xf1 },
		{ .addr = 0xeacf71, .byte = 0x19 },
		{ .addr = 0xeacf72, .byte = 0x6b },
		{ .addr = 0xeacf73, .byte = 0xfe }
};

static const SST_Transaction addl_transactions_28[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8133920, .data = 30346, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15459960, .data = 16242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15459956, .data = 34323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15459958, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15459954, .data = 53906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15459952, .data = 7457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15459948, .data = 53905, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15459950, .data = 30332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 53104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15388528, .data = 61721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15388530, .data = 27646, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addl_initial_ram_29[] = {
		{ .addr = 0xf5edf8, .byte = 0xda },
		{ .addr = 0xf5edf9, .byte = 0xbc },
		{ .addr = 0xf5edfa, .byte = 0xa4 },
		{ .addr = 0xf5edfb, .byte = 0x96 },
		{ .addr = 0xf5edfc, .byte = 0x22 },
		{ .addr = 0xf5edfd, .byte = 0x44 },
		{ .addr = 0xf5edfe, .byte = 0x26 },
		{ .addr = 0xf5edff, .byte = 0x0b },
		{ .addr = 0xf5ee00, .byte = 0x7a },
		{ .addr = 0xf5ee01, .byte = 0x8d }
};

static const SST_RamByte addl_final_ram_29[] = {
		{ .addr = 0xf5edf8, .byte = 0xda },
		{ .addr = 0xf5edf9, .byte = 0xbc },
		{ .addr = 0xf5edfa, .byte = 0xa4 },
		{ .addr = 0xf5edfb, .byte = 0x96 },
		{ .addr = 0xf5edfc, .byte = 0x22 },
		{ .addr = 0xf5edfd, .byte = 0x44 },
		{ .addr = 0xf5edfe, .byte = 0x26 },
		{ .addr = 0xf5edff, .byte = 0x0b },
		{ .addr = 0xf5ee00, .byte = 0x7a },
		{ .addr = 0xf5ee01, .byte = 0x8d }
};

static const SST_Transaction addl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16117244, .data = 8772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16117246, .data = 9739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16117248, .data = 31373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addl_initial_ram_30[] = {
		{ .addr = 0x06eeba, .byte = 0xd8 },
		{ .addr = 0x06eebb, .byte = 0x8c },
		{ .addr = 0x06eebc, .byte = 0xee },
		{ .addr = 0x06eebd, .byte = 0x01 },
		{ .addr = 0x06eebe, .byte = 0xd8 },
		{ .addr = 0x06eebf, .byte = 0x5a }
};

static const SST_RamByte addl_final_ram_30[] = {
		{ .addr = 0x06eeba, .byte = 0xd8 },
		{ .addr = 0x06eebb, .byte = 0x8c },
		{ .addr = 0x06eebc, .byte = 0xee },
		{ .addr = 0x06eebd, .byte = 0x01 },
		{ .addr = 0x06eebe, .byte = 0xd8 },
		{ .addr = 0x06eebf, .byte = 0x5a }
};

static const SST_Transaction addl_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 454334, .data = 55386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addl_initial_ram_31[] = {
		{ .addr = 0xcb95c0, .byte = 0x50 },
		{ .addr = 0xcb95c1, .byte = 0xb5 },
		{ .addr = 0xcb95c2, .byte = 0xdd },
		{ .addr = 0xcb95c3, .byte = 0x97 },
		{ .addr = 0xcb95c4, .byte = 0x09 },
		{ .addr = 0xcb95c5, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0x31 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0x43 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0xec43ec, .byte = 0xd4 },
		{ .addr = 0xec43ed, .byte = 0x20 },
		{ .addr = 0xec43ee, .byte = 0x83 },
		{ .addr = 0xec43ef, .byte = 0x3f }
};

static const SST_RamByte addl_final_ram_31[] = {
		{ .addr = 0xcb95c0, .byte = 0x50 },
		{ .addr = 0xcb95c1, .byte = 0xb5 },
		{ .addr = 0xcb95c2, .byte = 0xdd },
		{ .addr = 0xcb95c3, .byte = 0x97 },
		{ .addr = 0xcb95c4, .byte = 0x09 },
		{ .addr = 0xcb95c5, .byte = 0x64 },
		{ .addr = 0xecb858, .byte = 0x95 },
		{ .addr = 0xecb859, .byte = 0xc2 },
		{ .addr = 0xecb854, .byte = 0x04 },
		{ .addr = 0xecb855, .byte = 0x0e },
		{ .addr = 0xecb856, .byte = 0x00 },
		{ .addr = 0xecb857, .byte = 0xcb },
		{ .addr = 0xecb852, .byte = 0x50 },
		{ .addr = 0xecb853, .byte = 0xb5 },
		{ .addr = 0xecb850, .byte = 0x98 },
		{ .addr = 0xecb851, .byte = 0xb9 },
		{ .addr = 0xecb84c, .byte = 0x50 },
		{ .addr = 0xecb84d, .byte = 0xb1 },
		{ .addr = 0xecb84e, .byte = 0x36 },
		{ .addr = 0xecb84f, .byte = 0xe1 },
		{ .addr = 0x00000c, .byte = 0x31 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0x43 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0xec43ec, .byte = 0xd4 },
		{ .addr = 0xec43ed, .byte = 0x20 },
		{ .addr = 0xec43ee, .byte = 0x83 },
		{ .addr = 0xec43ef, .byte = 0x3f }
};

static const SST_Transaction addl_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13342148, .data = 2404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14784696, .data = 437, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15513688, .data = 38338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15513684, .data = 1038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15513686, .data = 203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15513682, .data = 20661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15513680, .data = 39097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15513676, .data = 20657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15513678, .data = 14049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 12780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15483884, .data = 54304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15483886, .data = 33599, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 ADD.l 6, (A7)+ 5c9f",
		.initial = {
			.regs = {
				1361319898, 324562049, 2614407579, 3299368940, 1745601361, 2768798198, 15648474, 2354636689, 3843670414, 721049800, 3679997632, 2892110070, 3959270221, 1091592683, 1350585554, 9691912, 4963838, 1284, 3020606
			},
			.prefetch0 = 23711,
			.prefetch1 = 22542,
			.ram = addl_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1361319898, 324562049, 2614407579, 3299368940, 1745601361, 2768798198, 15648474, 2354636689, 3843670414, 721049800, 3679997632, 2892110070, 3959270221, 1091592683, 1350585554, 9691916, 4963838, 1280, 3020608
			},
			.prefetch0 = 22542,
			.prefetch1 = 20714,
			.ram = addl_final_ram_16,
			.ram_len = 10,
		},
		.transactions = addl_transactions_16,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "017 ADD.l (A6), D7 de96",
		.initial = {
			.regs = {
				339142934, 1278125481, 3769541558, 1282274182, 2568160520, 3122113353, 1880371273, 3813151315, 1722025144, 3528206194, 367990078, 2478368826, 3399630373, 970355310, 3686639172, 6278628, 15556878, 40971, 3482640
			},
			.prefetch0 = 56982,
			.prefetch1 = 52184,
			.ram = addl_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				339142934, 1278125481, 3769541558, 1282274182, 2568160520, 3122113353, 1880371273, 4283864682, 1722025144, 3528206194, 367990078, 2478368826, 3399630373, 970355310, 3686639172, 6278628, 15556878, 40968, 3482642
			},
			.prefetch0 = 52184,
			.prefetch1 = 15860,
			.ram = addl_final_ram_17,
			.ram_len = 10,
		},
		.transactions = addl_transactions_17,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "018 ADD.l D7, D0 d087",
		.initial = {
			.regs = {
				659754612, 3835297232, 3293925835, 3560025151, 3422669927, 1405190420, 1794510748, 2712195336, 3038013251, 3859370852, 537383409, 959142328, 3171440220, 981124585, 2126818045, 1538378, 14119082, 33048, 5260204
			},
			.prefetch0 = 53383,
			.prefetch1 = 34748,
			.ram = addl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3371949948, 3835297232, 3293925835, 3560025151, 3422669927, 1405190420, 1794510748, 2712195336, 3038013251, 3859370852, 537383409, 959142328, 3171440220, 981124585, 2126818045, 1538378, 14119082, 33032, 5260206
			},
			.prefetch0 = 34748,
			.prefetch1 = 49123,
			.ram = addl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = addl_transactions_18,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "019 ADD.l D6, (A1)+ dd99",
		.initial = {
			.regs = {
				1394219047, 1758671748, 4134152374, 459203782, 1790265758, 4111025405, 2830795238, 620851733, 521826933, 1755899817, 2861795138, 3272535775, 4056210400, 2135791343, 2307489402, 11934006, 13117496, 32790, 368714
			},
			.prefetch0 = 56729,
			.prefetch1 = 48040,
			.ram = addl_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1394219047, 1758671748, 4134152374, 459203782, 1790265758, 4111025405, 2830795238, 620851733, 521826933, 1755899817, 2861795138, 3272535775, 4056210400, 2135791343, 2307489402, 11934006, 13117482, 8214, 3048384226
			},
			.prefetch0 = 48620,
			.prefetch1 = 52413,
			.ram = addl_final_ram_19,
			.ram_len = 26,
		},
		.transactions = addl_transactions_19,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "020 ADD.l 4, (A0)+ 5898",
		.initial = {
			.regs = {
				3926824427, 3921109848, 3592354991, 2967405052, 3207720035, 1096886133, 1749716779, 3989654766, 3665500817, 2124177301, 379031108, 4110134757, 2338499688, 2929596106, 2669444752, 2986718, 11689522, 9488, 9720788
			},
			.prefetch0 = 22680,
			.prefetch1 = 19037,
			.ram = addl_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3926824427, 3921109848, 3592354991, 2967405052, 3207720035, 1096886133, 1749716779, 3989654766, 3665500817, 2124177301, 379031108, 4110134757, 2338499688, 2929596106, 2669444752, 2986718, 11689508, 9488, 548033858
			},
			.prefetch0 = 42827,
			.prefetch1 = 2882,
			.ram = addl_final_ram_20,
			.ram_len = 26,
		},
		.transactions = addl_transactions_20,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "021 ADD.l (d16, A1), D4 d8a9",
		.initial = {
			.regs = {
				2492532184, 317115442, 1603401494, 2646944129, 1000067712, 2750897995, 2415890807, 1636078528, 3635408776, 905420724, 2549209307, 3477389252, 2626475479, 871174897, 2432384608, 7223816, 8300160, 23, 15364678
			},
			.prefetch0 = 55465,
			.prefetch1 = 43156,
			.ram = addl_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2492532184, 317115442, 1603401494, 2646944129, 557555665, 2750897995, 2415890807, 1636078528, 3635408776, 905420724, 2549209307, 3477389252, 2626475479, 871174897, 2432384608, 7223816, 8300160, 17, 15364682
			},
			.prefetch0 = 24323,
			.prefetch1 = 38602,
			.ram = addl_final_ram_21,
			.ram_len = 12,
		},
		.transactions = addl_transactions_21,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "022 ADD.l 7, (A6)+ 5e9e",
		.initial = {
			.regs = {
				1292119755, 3469358700, 3805091140, 4187549696, 1140304474, 2370777504, 2077803725, 878414399, 2202384623, 2602911618, 1829909148, 4223290746, 2517285116, 1170584238, 4044106115, 13107234, 5123756, 279, 3637406
			},
			.prefetch0 = 24222,
			.prefetch1 = 31694,
			.ram = addl_initial_ram_22,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1292119755, 3469358700, 3805091140, 4187549696, 1140304474, 2370777504, 2077803725, 878414399, 2202384623, 2602911618, 1829909148, 4223290746, 2517285116, 1170584238, 4044106115, 13107234, 5123742, 8471, 2692536586
			},
			.prefetch0 = 16766,
			.prefetch1 = 56760,
			.ram = addl_final_ram_22,
			.ram_len = 26,
		},
		.transactions = addl_transactions_22,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "023 ADD.l D0, (d8, A6, Xn) d1b6",
		.initial = {
			.regs = {
				3092576445, 3119958598, 2935340808, 120727866, 90711944, 1519004062, 1716426309, 3135335398, 4101693412, 1042619860, 3810144829, 2255342061, 4099743817, 1513710990, 1171146703, 10848412, 66678, 278, 7771910
			},
			.prefetch0 = 53686,
			.prefetch1 = 62205,
			.ram = addl_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3092576445, 3119958598, 2935340808, 120727866, 90711944, 1519004062, 1716426309, 3135335398, 4101693412, 1042619860, 3810144829, 2255342061, 4099743817, 1513710990, 1171146703, 10848412, 66678, 281, 7771914
			},
			.prefetch0 = 13134,
			.prefetch1 = 19455,
			.ram = addl_final_ram_23,
			.ram_len = 12,
		},
		.transactions = addl_transactions_23,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "024 ADD.l 7, (d16, A2) 5eaa",
		.initial = {
			.regs = {
				945820994, 768003991, 3759927483, 3633063065, 3446435661, 164672914, 2632074283, 2347757905, 3724153437, 1684580076, 2884895523, 609426440, 4142414188, 2999932770, 831748815, 14157068, 9724012, 42524, 4913166
			},
			.prefetch0 = 24234,
			.prefetch1 = 768,
			.ram = addl_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				945820994, 768003991, 3759927483, 3633063065, 3446435661, 164672914, 2632074283, 2347757905, 3724153437, 1684580076, 2884895523, 609426440, 4142414188, 2999932770, 831748815, 14157068, 9723998, 9756, 309489258
			},
			.prefetch0 = 27105,
			.prefetch1 = 12929,
			.ram = addl_final_ram_24,
			.ram_len = 28,
		},
		.transactions = addl_transactions_24,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "025 ADD.l (xxx).w, D2 d4b8",
		.initial = {
			.regs = {
				4131229450, 2349570807, 2200859248, 143054863, 1894476998, 1851206220, 3419004444, 30518663, 2755342220, 577850949, 4064570415, 135366872, 3631086212, 504005457, 1332945305, 6276686, 14562478, 33024, 14838764
			},
			.prefetch0 = 54456,
			.prefetch1 = 29469,
			.ram = addl_initial_ram_25,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4131229450, 2349570807, 2200859248, 143054863, 1894476998, 1851206220, 3419004444, 30518663, 2755342220, 577850949, 4064570415, 135366872, 3631086212, 504005457, 1332945305, 6276686, 14562464, 8448, 2443055144
			},
			.prefetch0 = 35673,
			.prefetch1 = 13407,
			.ram = addl_final_ram_25,
			.ram_len = 28,
		},
		.transactions = addl_transactions_25,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "026 ADD.l 5, (d16, A5) 5aad",
		.initial = {
			.regs = {
				3526132447, 1540309801, 4005112572, 534720824, 2561106143, 3539068783, 1610634602, 626587911, 289465396, 743869851, 2469404646, 458908002, 1127452742, 4113612106, 2077700261, 13236722, 13970618, 8473, 12546176
			},
			.prefetch0 = 23213,
			.prefetch1 = 35968,
			.ram = addl_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3526132447, 1540309801, 4005112572, 534720824, 2561106143, 3539068783, 1610634602, 626587911, 289465396, 743869851, 2469404646, 458908002, 1127452742, 4113612106, 2077700261, 13236722, 13970618, 8448, 12546180
			},
			.prefetch0 = 5791,
			.prefetch1 = 53287,
			.ram = addl_final_ram_26,
			.ram_len = 12,
		},
		.transactions = addl_transactions_26,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "027 ADD.l 4, (d8, A1, Xn) 58b1",
		.initial = {
			.regs = {
				1683909061, 3856858485, 3536553094, 3737213676, 1332580799, 2386438239, 2138913797, 3163989542, 3511963656, 407788365, 3608531956, 1473437033, 1751822631, 2290144232, 3087235272, 2248824, 9039786, 33035, 7751726
			},
			.prefetch0 = 22705,
			.prefetch1 = 34029,
			.ram = addl_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1683909061, 3856858485, 3536553094, 3737213676, 1332580799, 2386438239, 2138913797, 3163989542, 3511963656, 407788365, 3608531956, 1473437033, 1751822631, 2290144232, 3087235272, 2248824, 9039786, 33032, 7751730
			},
			.prefetch0 = 19669,
			.prefetch1 = 32209,
			.ram = addl_final_ram_27,
			.ram_len = 12,
		},
		.transactions = addl_transactions_27,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "028 ADD.l (A2), D1 d292",
		.initial = {
			.regs = {
				2123370549, 468510224, 1532593052, 2052603607, 3728233237, 965624677, 3418010748, 3422446298, 56515782, 3482037395, 1987845409, 4062942459, 3080160648, 300530691, 1184615471, 12843894, 15459962, 34323, 9191284
			},
			.prefetch0 = 53906,
			.prefetch1 = 4682,
			.ram = addl_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2123370549, 468510224, 1532593052, 2052603607, 3728233237, 965624677, 3418010748, 3422446298, 56515782, 3482037395, 1987845409, 4062942459, 3080160648, 300530691, 1184615471, 12843894, 15459948, 9747, 4041920372
			},
			.prefetch0 = 61721,
			.prefetch1 = 27646,
			.ram = addl_final_ram_28,
			.ram_len = 26,
		},
		.transactions = addl_transactions_28,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "029 ADD.l #, D5 dabc",
		.initial = {
			.regs = {
				3909848472, 1773631679, 114534439, 2507741756, 3951252950, 4159487381, 2996106809, 1674562758, 2682531057, 1177644735, 1981351394, 3830670882, 1188327754, 447194176, 1276619729, 13387280, 5766502, 9741, 16117244
			},
			.prefetch0 = 55996,
			.prefetch1 = 42134,
			.ram = addl_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3909848472, 1773631679, 114534439, 2507741756, 3951252950, 2625822681, 2996106809, 1674562758, 2682531057, 1177644735, 1981351394, 3830670882, 1188327754, 447194176, 1276619729, 13387280, 5766502, 9753, 16117250
			},
			.prefetch0 = 9739,
			.prefetch1 = 31373,
			.ram = addl_final_ram_29,
			.ram_len = 10,
		},
		.transactions = addl_transactions_29,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "030 ADD.l A4, D4 d88c",
		.initial = {
			.regs = {
				3082137340, 1439546748, 2577692729, 1178577750, 1933150309, 1831989569, 292890042, 374035028, 549135177, 2486335490, 3572971980, 2122553704, 797263477, 1340675309, 2956880745, 12592266, 6506748, 41728, 454334
			},
			.prefetch0 = 55436,
			.prefetch1 = 60929,
			.ram = addl_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3082137340, 1439546748, 2577692729, 1178577750, 2730413786, 1831989569, 292890042, 374035028, 549135177, 2486335490, 3572971980, 2122553704, 797263477, 1340675309, 2956880745, 12592266, 6506748, 41738, 454336
			},
			.prefetch0 = 60929,
			.prefetch1 = 55386,
			.ram = addl_final_ram_30,
			.ram_len = 6,
		},
		.transactions = addl_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 ADD.l 8, (d8, A5, Xn) 50b5",
		.initial = {
			.regs = {
				213673137, 4234724647, 3216333684, 536265707, 511700884, 1027097205, 4131252183, 3276720664, 746130001, 2590747755, 3693242208, 1604673238, 1040391310, 2607860881, 1061319835, 522368, 15513690, 1038, 13342148
			},
			.prefetch0 = 20661,
			.prefetch1 = 56727,
			.ram = addl_initial_ram_31,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				213673137, 4234724647, 3216333684, 536265707, 511700884, 1027097205, 4131252183, 3276720664, 746130001, 2590747755, 3693242208, 1604673238, 1040391310, 2607860881, 1061319835, 522368, 15513676, 9230, 837567472
			},
			.prefetch0 = 54304,
			.prefetch1 = 33599,
			.ram = addl_final_ram_31,
			.ram_len = 28,
		},
		.transactions = addl_transactions_31,
		.transactions_len = 16,
		.lenght = 64,
	},
};

#endif /* RBT_ADDL_H */