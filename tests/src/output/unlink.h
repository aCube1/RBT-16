#ifndef RBT_UNLINK_H
#define RBT_UNLINK_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte unlink_initial_ram_0[] = {
		{ .addr = 0x6929d4, .byte = 0x4e },
		{ .addr = 0x6929d5, .byte = 0x5c },
		{ .addr = 0x6929d6, .byte = 0x0b },
		{ .addr = 0x6929d7, .byte = 0x1b },
		{ .addr = 0x00000c, .byte = 0x18 },
		{ .addr = 0x00000d, .byte = 0x14 },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x145f7a, .byte = 0x5f },
		{ .addr = 0x145f7b, .byte = 0xf2 },
		{ .addr = 0x145f7c, .byte = 0x6a },
		{ .addr = 0x145f7d, .byte = 0xc7 }
};

static const SST_RamByte unlink_final_ram_0[] = {
		{ .addr = 0x6929d4, .byte = 0x4e },
		{ .addr = 0x6929d5, .byte = 0x5c },
		{ .addr = 0x6929d6, .byte = 0x0b },
		{ .addr = 0x6929d7, .byte = 0x1b },
		{ .addr = 0xf58234, .byte = 0x29 },
		{ .addr = 0xf58235, .byte = 0xd8 },
		{ .addr = 0xf58230, .byte = 0x24 },
		{ .addr = 0xf58231, .byte = 0x11 },
		{ .addr = 0xf58232, .byte = 0x00 },
		{ .addr = 0xf58233, .byte = 0x69 },
		{ .addr = 0xf5822e, .byte = 0x4e },
		{ .addr = 0xf5822f, .byte = 0x5c },
		{ .addr = 0xf5822c, .byte = 0xbc },
		{ .addr = 0xf5822d, .byte = 0x87 },
		{ .addr = 0xf58228, .byte = 0x4e },
		{ .addr = 0xf58229, .byte = 0x55 },
		{ .addr = 0xf5822a, .byte = 0xba },
		{ .addr = 0xf5822b, .byte = 0x89 },
		{ .addr = 0x00000c, .byte = 0x18 },
		{ .addr = 0x00000d, .byte = 0x14 },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x145f7a, .byte = 0x5f },
		{ .addr = 0x145f7b, .byte = 0xf2 },
		{ .addr = 0x145f7c, .byte = 0x6a },
		{ .addr = 0x145f7d, .byte = 0xc7 }
};

static const SST_Transaction unlink_transactions_0[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9026694, .data = 3928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16089652, .data = 10712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16089648, .data = 9233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16089650, .data = 105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16089646, .data = 20060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16089644, .data = 48263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16089640, .data = 20053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16089642, .data = 47753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1335162, .data = 24562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1335164, .data = 27335, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_1[] = {
		{ .addr = 0x10263e, .byte = 0x4e },
		{ .addr = 0x10263f, .byte = 0x5a },
		{ .addr = 0x102640, .byte = 0x2d },
		{ .addr = 0x102641, .byte = 0xa9 },
		{ .addr = 0x330920, .byte = 0x59 },
		{ .addr = 0x330921, .byte = 0xea },
		{ .addr = 0x330922, .byte = 0x6e },
		{ .addr = 0x330923, .byte = 0x1d },
		{ .addr = 0x102642, .byte = 0xc4 },
		{ .addr = 0x102643, .byte = 0x95 }
};

static const SST_RamByte unlink_final_ram_1[] = {
		{ .addr = 0x10263e, .byte = 0x4e },
		{ .addr = 0x10263f, .byte = 0x5a },
		{ .addr = 0x102640, .byte = 0x2d },
		{ .addr = 0x102641, .byte = 0xa9 },
		{ .addr = 0x330920, .byte = 0x59 },
		{ .addr = 0x330921, .byte = 0xea },
		{ .addr = 0x330922, .byte = 0x6e },
		{ .addr = 0x330923, .byte = 0x1d },
		{ .addr = 0x102642, .byte = 0xc4 },
		{ .addr = 0x102643, .byte = 0x95 }
};

static const SST_Transaction unlink_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3344672, .data = 23018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3344674, .data = 28189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1058370, .data = 50325, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_2[] = {
		{ .addr = 0xf6ffb0, .byte = 0x4e },
		{ .addr = 0xf6ffb1, .byte = 0x5c },
		{ .addr = 0xf6ffb2, .byte = 0x30 },
		{ .addr = 0xf6ffb3, .byte = 0xee },
		{ .addr = 0x00000c, .byte = 0x1c },
		{ .addr = 0x00000d, .byte = 0x4e },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x4e5f82, .byte = 0xb2 },
		{ .addr = 0x4e5f83, .byte = 0xef },
		{ .addr = 0x4e5f84, .byte = 0xd8 },
		{ .addr = 0x4e5f85, .byte = 0x63 }
};

static const SST_RamByte unlink_final_ram_2[] = {
		{ .addr = 0xf6ffb0, .byte = 0x4e },
		{ .addr = 0xf6ffb1, .byte = 0x5c },
		{ .addr = 0xf6ffb2, .byte = 0x30 },
		{ .addr = 0xf6ffb3, .byte = 0xee },
		{ .addr = 0xd1376e, .byte = 0xff },
		{ .addr = 0xd1376f, .byte = 0xb4 },
		{ .addr = 0xd1376a, .byte = 0x23 },
		{ .addr = 0xd1376b, .byte = 0x0c },
		{ .addr = 0xd1376c, .byte = 0x00 },
		{ .addr = 0xd1376d, .byte = 0xf6 },
		{ .addr = 0xd13768, .byte = 0x4e },
		{ .addr = 0xd13769, .byte = 0x5c },
		{ .addr = 0xd13766, .byte = 0x74 },
		{ .addr = 0xd13767, .byte = 0x63 },
		{ .addr = 0xd13762, .byte = 0x4e },
		{ .addr = 0xd13763, .byte = 0x55 },
		{ .addr = 0xd13764, .byte = 0xa7 },
		{ .addr = 0xd13765, .byte = 0x78 },
		{ .addr = 0x00000c, .byte = 0x1c },
		{ .addr = 0x00000d, .byte = 0x4e },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x4e5f82, .byte = 0xb2 },
		{ .addr = 0x4e5f83, .byte = 0xef },
		{ .addr = 0x4e5f84, .byte = 0xd8 },
		{ .addr = 0x4e5f85, .byte = 0x63 }
};

static const SST_Transaction unlink_transactions_2[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7894114, .data = 6217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711214, .data = 65460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711210, .data = 8972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711212, .data = 246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711208, .data = 20060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711206, .data = 29795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711202, .data = 20053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13711204, .data = 42872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5136258, .data = 45807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5136260, .data = 55395, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_3[] = {
		{ .addr = 0x943806, .byte = 0x4e },
		{ .addr = 0x943807, .byte = 0x5d },
		{ .addr = 0x943808, .byte = 0x3e },
		{ .addr = 0x943809, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0x96 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0x4e },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0xda4e7a, .byte = 0x34 },
		{ .addr = 0xda4e7b, .byte = 0x4b },
		{ .addr = 0xda4e7c, .byte = 0x04 },
		{ .addr = 0xda4e7d, .byte = 0xe0 }
};

static const SST_RamByte unlink_final_ram_3[] = {
		{ .addr = 0x943806, .byte = 0x4e },
		{ .addr = 0x943807, .byte = 0x5d },
		{ .addr = 0x943808, .byte = 0x3e },
		{ .addr = 0x943809, .byte = 0xd6 },
		{ .addr = 0x639d9c, .byte = 0x38 },
		{ .addr = 0x639d9d, .byte = 0x0a },
		{ .addr = 0x639d98, .byte = 0x00 },
		{ .addr = 0x639d99, .byte = 0x0b },
		{ .addr = 0x639d9a, .byte = 0x00 },
		{ .addr = 0x639d9b, .byte = 0x94 },
		{ .addr = 0x639d96, .byte = 0x4e },
		{ .addr = 0x639d97, .byte = 0x5d },
		{ .addr = 0x639d94, .byte = 0xe1 },
		{ .addr = 0x639d95, .byte = 0x77 },
		{ .addr = 0x639d90, .byte = 0x4e },
		{ .addr = 0x639d91, .byte = 0x51 },
		{ .addr = 0x639d92, .byte = 0x7e },
		{ .addr = 0x639d93, .byte = 0x2f },
		{ .addr = 0x00000c, .byte = 0x96 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0x4e },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0xda4e7a, .byte = 0x34 },
		{ .addr = 0xda4e7b, .byte = 0x4b },
		{ .addr = 0xda4e7c, .byte = 0x04 },
		{ .addr = 0xda4e7d, .byte = 0xe0 }
};

static const SST_Transaction unlink_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3137910, .data = 30838, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6528412, .data = 14346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6528408, .data = 11, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6528410, .data = 148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6528406, .data = 20061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6528404, .data = 57719, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6528400, .data = 20049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6528402, .data = 32303, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 20090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14306938, .data = 13387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14306940, .data = 1248, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_4[] = {
		{ .addr = 0x878c4a, .byte = 0x4e },
		{ .addr = 0x878c4b, .byte = 0x5b },
		{ .addr = 0x878c4c, .byte = 0x0f },
		{ .addr = 0x878c4d, .byte = 0x85 },
		{ .addr = 0x4126da, .byte = 0xdc },
		{ .addr = 0x4126db, .byte = 0xc2 },
		{ .addr = 0x4126dc, .byte = 0x9e },
		{ .addr = 0x4126dd, .byte = 0x37 },
		{ .addr = 0x878c4e, .byte = 0xef },
		{ .addr = 0x878c4f, .byte = 0x4a }
};

static const SST_RamByte unlink_final_ram_4[] = {
		{ .addr = 0x878c4a, .byte = 0x4e },
		{ .addr = 0x878c4b, .byte = 0x5b },
		{ .addr = 0x878c4c, .byte = 0x0f },
		{ .addr = 0x878c4d, .byte = 0x85 },
		{ .addr = 0x4126da, .byte = 0xdc },
		{ .addr = 0x4126db, .byte = 0xc2 },
		{ .addr = 0x4126dc, .byte = 0x9e },
		{ .addr = 0x4126dd, .byte = 0x37 },
		{ .addr = 0x878c4e, .byte = 0xef },
		{ .addr = 0x878c4f, .byte = 0x4a }
};

static const SST_Transaction unlink_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4269786, .data = 56514, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4269788, .data = 40503, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8883278, .data = 61258, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_5[] = {
		{ .addr = 0x7756da, .byte = 0x4e },
		{ .addr = 0x7756db, .byte = 0x5f },
		{ .addr = 0x7756dc, .byte = 0xd1 },
		{ .addr = 0x7756dd, .byte = 0x14 },
		{ .addr = 0x5d810a, .byte = 0x35 },
		{ .addr = 0x5d810b, .byte = 0xf6 },
		{ .addr = 0x5d810c, .byte = 0x64 },
		{ .addr = 0x5d810d, .byte = 0xaa },
		{ .addr = 0x7756de, .byte = 0x45 },
		{ .addr = 0x7756df, .byte = 0xbe }
};

static const SST_RamByte unlink_final_ram_5[] = {
		{ .addr = 0x7756da, .byte = 0x4e },
		{ .addr = 0x7756db, .byte = 0x5f },
		{ .addr = 0x7756dc, .byte = 0xd1 },
		{ .addr = 0x7756dd, .byte = 0x14 },
		{ .addr = 0x5d810a, .byte = 0x35 },
		{ .addr = 0x5d810b, .byte = 0xf6 },
		{ .addr = 0x5d810c, .byte = 0x64 },
		{ .addr = 0x5d810d, .byte = 0xaa },
		{ .addr = 0x7756de, .byte = 0x45 },
		{ .addr = 0x7756df, .byte = 0xbe }
};

static const SST_Transaction unlink_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6127882, .data = 13814, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6127884, .data = 25770, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7821022, .data = 17854, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_6[] = {
		{ .addr = 0x2f4dee, .byte = 0x4e },
		{ .addr = 0x2f4def, .byte = 0x5a },
		{ .addr = 0x2f4df0, .byte = 0xbb },
		{ .addr = 0x2f4df1, .byte = 0x0e },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0x0a },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0x380a3e, .byte = 0x88 },
		{ .addr = 0x380a3f, .byte = 0x70 },
		{ .addr = 0x380a40, .byte = 0xfa },
		{ .addr = 0x380a41, .byte = 0x37 }
};

static const SST_RamByte unlink_final_ram_6[] = {
		{ .addr = 0x2f4dee, .byte = 0x4e },
		{ .addr = 0x2f4def, .byte = 0x5a },
		{ .addr = 0x2f4df0, .byte = 0xbb },
		{ .addr = 0x2f4df1, .byte = 0x0e },
		{ .addr = 0xa8043e, .byte = 0x4d },
		{ .addr = 0xa8043f, .byte = 0xf2 },
		{ .addr = 0xa8043a, .byte = 0x84 },
		{ .addr = 0xa8043b, .byte = 0x08 },
		{ .addr = 0xa8043c, .byte = 0x00 },
		{ .addr = 0xa8043d, .byte = 0x2f },
		{ .addr = 0xa80438, .byte = 0x4e },
		{ .addr = 0xa80439, .byte = 0x5a },
		{ .addr = 0xa80436, .byte = 0x9b },
		{ .addr = 0xa80437, .byte = 0x5b },
		{ .addr = 0xa80432, .byte = 0x4e },
		{ .addr = 0xa80433, .byte = 0x51 },
		{ .addr = 0xa80434, .byte = 0x18 },
		{ .addr = 0xa80435, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0x0a },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0x380a3e, .byte = 0x88 },
		{ .addr = 0x380a3f, .byte = 0x70 },
		{ .addr = 0x380a40, .byte = 0xfa },
		{ .addr = 0x380a41, .byte = 0x37 }
};

static const SST_Transaction unlink_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14916442, .data = 24342, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11011134, .data = 19954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11011130, .data = 33800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11011132, .data = 47, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11011128, .data = 20058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11011126, .data = 39771, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11011122, .data = 20049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11011124, .data = 6371, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 2622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3672638, .data = 34928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3672640, .data = 64055, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_7[] = {
		{ .addr = 0x62f41a, .byte = 0x4e },
		{ .addr = 0x62f41b, .byte = 0x58 },
		{ .addr = 0x62f41c, .byte = 0x38 },
		{ .addr = 0x62f41d, .byte = 0xcf },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0xf4 },
		{ .addr = 0x0235f4, .byte = 0xf6 },
		{ .addr = 0x0235f5, .byte = 0x5c },
		{ .addr = 0x0235f6, .byte = 0x61 },
		{ .addr = 0x0235f7, .byte = 0xcc }
};

static const SST_RamByte unlink_final_ram_7[] = {
		{ .addr = 0x62f41a, .byte = 0x4e },
		{ .addr = 0x62f41b, .byte = 0x58 },
		{ .addr = 0x62f41c, .byte = 0x38 },
		{ .addr = 0x62f41d, .byte = 0xcf },
		{ .addr = 0x250242, .byte = 0xf4 },
		{ .addr = 0x250243, .byte = 0x1e },
		{ .addr = 0x25023e, .byte = 0x06 },
		{ .addr = 0x25023f, .byte = 0x15 },
		{ .addr = 0x250240, .byte = 0x00 },
		{ .addr = 0x250241, .byte = 0x62 },
		{ .addr = 0x25023c, .byte = 0x4e },
		{ .addr = 0x25023d, .byte = 0x58 },
		{ .addr = 0x25023a, .byte = 0x15 },
		{ .addr = 0x25023b, .byte = 0x7b },
		{ .addr = 0x250236, .byte = 0x4e },
		{ .addr = 0x250237, .byte = 0x51 },
		{ .addr = 0x250238, .byte = 0xb5 },
		{ .addr = 0x250239, .byte = 0x38 },
		{ .addr = 0x00000c, .byte = 0x91 },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0x35 },
		{ .addr = 0x00000f, .byte = 0xf4 },
		{ .addr = 0x0235f4, .byte = 0xf6 },
		{ .addr = 0x0235f5, .byte = 0x5c },
		{ .addr = 0x0235f6, .byte = 0x61 },
		{ .addr = 0x0235f7, .byte = 0xcc }
};

static const SST_Transaction unlink_transactions_7[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3675514, .data = 43890, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2425410, .data = 62494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2425406, .data = 1557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2425408, .data = 98, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2425404, .data = 20056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2425402, .data = 5499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2425398, .data = 20049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2425400, .data = 46392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 144884, .data = 63068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 144886, .data = 25036, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_8[] = {
		{ .addr = 0x8dd792, .byte = 0x4e },
		{ .addr = 0x8dd793, .byte = 0x5f },
		{ .addr = 0x8dd794, .byte = 0x33 },
		{ .addr = 0x8dd795, .byte = 0xb8 },
		{ .addr = 0x4197de, .byte = 0x03 },
		{ .addr = 0x4197df, .byte = 0x6f },
		{ .addr = 0x4197e0, .byte = 0x49 },
		{ .addr = 0x4197e1, .byte = 0x33 },
		{ .addr = 0x8dd796, .byte = 0x46 },
		{ .addr = 0x8dd797, .byte = 0x9f }
};

static const SST_RamByte unlink_final_ram_8[] = {
		{ .addr = 0x8dd792, .byte = 0x4e },
		{ .addr = 0x8dd793, .byte = 0x5f },
		{ .addr = 0x8dd794, .byte = 0x33 },
		{ .addr = 0x8dd795, .byte = 0xb8 },
		{ .addr = 0x4197de, .byte = 0x03 },
		{ .addr = 0x4197df, .byte = 0x6f },
		{ .addr = 0x4197e0, .byte = 0x49 },
		{ .addr = 0x4197e1, .byte = 0x33 },
		{ .addr = 0x8dd796, .byte = 0x46 },
		{ .addr = 0x8dd797, .byte = 0x9f }
};

static const SST_Transaction unlink_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4298718, .data = 879, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4298720, .data = 18739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9295766, .data = 18079, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_9[] = {
		{ .addr = 0xed988e, .byte = 0x4e },
		{ .addr = 0xed988f, .byte = 0x59 },
		{ .addr = 0xed9890, .byte = 0x09 },
		{ .addr = 0xed9891, .byte = 0x26 },
		{ .addr = 0x5a8fde, .byte = 0x4e },
		{ .addr = 0x5a8fdf, .byte = 0x8f },
		{ .addr = 0x5a8fe0, .byte = 0x47 },
		{ .addr = 0x5a8fe1, .byte = 0xff },
		{ .addr = 0xed9892, .byte = 0xb0 },
		{ .addr = 0xed9893, .byte = 0x22 }
};

static const SST_RamByte unlink_final_ram_9[] = {
		{ .addr = 0xed988e, .byte = 0x4e },
		{ .addr = 0xed988f, .byte = 0x59 },
		{ .addr = 0xed9890, .byte = 0x09 },
		{ .addr = 0xed9891, .byte = 0x26 },
		{ .addr = 0x5a8fde, .byte = 0x4e },
		{ .addr = 0x5a8fdf, .byte = 0x8f },
		{ .addr = 0x5a8fe0, .byte = 0x47 },
		{ .addr = 0x5a8fe1, .byte = 0xff },
		{ .addr = 0xed9892, .byte = 0xb0 },
		{ .addr = 0xed9893, .byte = 0x22 }
};

static const SST_Transaction unlink_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5935070, .data = 20111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5935072, .data = 18431, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15571090, .data = 45090, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_10[] = {
		{ .addr = 0x4c5b8c, .byte = 0x4e },
		{ .addr = 0x4c5b8d, .byte = 0x5b },
		{ .addr = 0x4c5b8e, .byte = 0x16 },
		{ .addr = 0x4c5b8f, .byte = 0x74 },
		{ .addr = 0x052d5a, .byte = 0x81 },
		{ .addr = 0x052d5b, .byte = 0x07 },
		{ .addr = 0x052d5c, .byte = 0x25 },
		{ .addr = 0x052d5d, .byte = 0x10 },
		{ .addr = 0x4c5b90, .byte = 0x4d },
		{ .addr = 0x4c5b91, .byte = 0x20 }
};

static const SST_RamByte unlink_final_ram_10[] = {
		{ .addr = 0x4c5b8c, .byte = 0x4e },
		{ .addr = 0x4c5b8d, .byte = 0x5b },
		{ .addr = 0x4c5b8e, .byte = 0x16 },
		{ .addr = 0x4c5b8f, .byte = 0x74 },
		{ .addr = 0x052d5a, .byte = 0x81 },
		{ .addr = 0x052d5b, .byte = 0x07 },
		{ .addr = 0x052d5c, .byte = 0x25 },
		{ .addr = 0x052d5d, .byte = 0x10 },
		{ .addr = 0x4c5b90, .byte = 0x4d },
		{ .addr = 0x4c5b91, .byte = 0x20 }
};

static const SST_Transaction unlink_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 339290, .data = 33031, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 339292, .data = 9488, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5004176, .data = 19744, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_11[] = {
		{ .addr = 0x3ad256, .byte = 0x4e },
		{ .addr = 0x3ad257, .byte = 0x5b },
		{ .addr = 0x3ad258, .byte = 0xf6 },
		{ .addr = 0x3ad259, .byte = 0x54 },
		{ .addr = 0x19fd9a, .byte = 0x44 },
		{ .addr = 0x19fd9b, .byte = 0xfc },
		{ .addr = 0x19fd9c, .byte = 0x1f },
		{ .addr = 0x19fd9d, .byte = 0x1c },
		{ .addr = 0x3ad25a, .byte = 0xfe },
		{ .addr = 0x3ad25b, .byte = 0x3e }
};

static const SST_RamByte unlink_final_ram_11[] = {
		{ .addr = 0x3ad256, .byte = 0x4e },
		{ .addr = 0x3ad257, .byte = 0x5b },
		{ .addr = 0x3ad258, .byte = 0xf6 },
		{ .addr = 0x3ad259, .byte = 0x54 },
		{ .addr = 0x19fd9a, .byte = 0x44 },
		{ .addr = 0x19fd9b, .byte = 0xfc },
		{ .addr = 0x19fd9c, .byte = 0x1f },
		{ .addr = 0x19fd9d, .byte = 0x1c },
		{ .addr = 0x3ad25a, .byte = 0xfe },
		{ .addr = 0x3ad25b, .byte = 0x3e }
};

static const SST_Transaction unlink_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1703322, .data = 17660, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1703324, .data = 7964, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3854938, .data = 65086, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_12[] = {
		{ .addr = 0xfee93e, .byte = 0x4e },
		{ .addr = 0xfee93f, .byte = 0x5b },
		{ .addr = 0xfee940, .byte = 0x4e },
		{ .addr = 0xfee941, .byte = 0xc0 },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0xc6 },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xc66994, .byte = 0x95 },
		{ .addr = 0xc66995, .byte = 0x15 },
		{ .addr = 0xc66996, .byte = 0xbf },
		{ .addr = 0xc66997, .byte = 0x35 }
};

static const SST_RamByte unlink_final_ram_12[] = {
		{ .addr = 0xfee93e, .byte = 0x4e },
		{ .addr = 0xfee93f, .byte = 0x5b },
		{ .addr = 0xfee940, .byte = 0x4e },
		{ .addr = 0xfee941, .byte = 0xc0 },
		{ .addr = 0x315722, .byte = 0xe9 },
		{ .addr = 0x315723, .byte = 0x42 },
		{ .addr = 0x31571e, .byte = 0x02 },
		{ .addr = 0x31571f, .byte = 0x09 },
		{ .addr = 0x315720, .byte = 0x00 },
		{ .addr = 0x315721, .byte = 0xfe },
		{ .addr = 0x31571c, .byte = 0x4e },
		{ .addr = 0x31571d, .byte = 0x5b },
		{ .addr = 0x31571a, .byte = 0xc6 },
		{ .addr = 0x31571b, .byte = 0xb9 },
		{ .addr = 0x315716, .byte = 0x4e },
		{ .addr = 0x315717, .byte = 0x51 },
		{ .addr = 0x315718, .byte = 0x08 },
		{ .addr = 0x315719, .byte = 0xae },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0xc6 },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xc66994, .byte = 0x95 },
		{ .addr = 0xc66995, .byte = 0x15 },
		{ .addr = 0xc66996, .byte = 0xbf },
		{ .addr = 0xc66997, .byte = 0x35 }
};

static const SST_Transaction unlink_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11454136, .data = 17871, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3233570, .data = 59714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3233566, .data = 521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3233568, .data = 254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3233564, .data = 20059, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3233562, .data = 50873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3233558, .data = 20049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3233560, .data = 2222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27028, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13003156, .data = 38165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13003158, .data = 48949, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_13[] = {
		{ .addr = 0x316bd8, .byte = 0x4e },
		{ .addr = 0x316bd9, .byte = 0x59 },
		{ .addr = 0x316bda, .byte = 0xe9 },
		{ .addr = 0x316bdb, .byte = 0x5d },
		{ .addr = 0xd456b6, .byte = 0xf7 },
		{ .addr = 0xd456b7, .byte = 0xe6 },
		{ .addr = 0xd456b8, .byte = 0xa2 },
		{ .addr = 0xd456b9, .byte = 0x00 },
		{ .addr = 0x316bdc, .byte = 0xae },
		{ .addr = 0x316bdd, .byte = 0x35 }
};

static const SST_RamByte unlink_final_ram_13[] = {
		{ .addr = 0x316bd8, .byte = 0x4e },
		{ .addr = 0x316bd9, .byte = 0x59 },
		{ .addr = 0x316bda, .byte = 0xe9 },
		{ .addr = 0x316bdb, .byte = 0x5d },
		{ .addr = 0xd456b6, .byte = 0xf7 },
		{ .addr = 0xd456b7, .byte = 0xe6 },
		{ .addr = 0xd456b8, .byte = 0xa2 },
		{ .addr = 0xd456b9, .byte = 0x00 },
		{ .addr = 0x316bdc, .byte = 0xae },
		{ .addr = 0x316bdd, .byte = 0x35 }
};

static const SST_Transaction unlink_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13915830, .data = 63462, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13915832, .data = 41472, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3238876, .data = 44597, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_14[] = {
		{ .addr = 0x223cde, .byte = 0x4e },
		{ .addr = 0x223cdf, .byte = 0x5b },
		{ .addr = 0x223ce0, .byte = 0x09 },
		{ .addr = 0x223ce1, .byte = 0x89 },
		{ .addr = 0x00000c, .byte = 0x31 },
		{ .addr = 0x00000d, .byte = 0xc6 },
		{ .addr = 0x00000e, .byte = 0x3e },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0xc63e78, .byte = 0xdd },
		{ .addr = 0xc63e79, .byte = 0x00 },
		{ .addr = 0xc63e7a, .byte = 0xf3 },
		{ .addr = 0xc63e7b, .byte = 0x95 }
};

static const SST_RamByte unlink_final_ram_14[] = {
		{ .addr = 0x223cde, .byte = 0x4e },
		{ .addr = 0x223cdf, .byte = 0x5b },
		{ .addr = 0x223ce0, .byte = 0x09 },
		{ .addr = 0x223ce1, .byte = 0x89 },
		{ .addr = 0x77ffc8, .byte = 0x3c },
		{ .addr = 0x77ffc9, .byte = 0xe2 },
		{ .addr = 0x77ffc4, .byte = 0x21 },
		{ .addr = 0x77ffc5, .byte = 0x03 },
		{ .addr = 0x77ffc6, .byte = 0x00 },
		{ .addr = 0x77ffc7, .byte = 0x22 },
		{ .addr = 0x77ffc2, .byte = 0x4e },
		{ .addr = 0x77ffc3, .byte = 0x5b },
		{ .addr = 0x77ffc0, .byte = 0xef },
		{ .addr = 0x77ffc1, .byte = 0xed },
		{ .addr = 0x77ffbc, .byte = 0x4e },
		{ .addr = 0x77ffbd, .byte = 0x55 },
		{ .addr = 0x77ffbe, .byte = 0xcd },
		{ .addr = 0x77ffbf, .byte = 0xb2 },
		{ .addr = 0x00000c, .byte = 0x31 },
		{ .addr = 0x00000d, .byte = 0xc6 },
		{ .addr = 0x00000e, .byte = 0x3e },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0xc63e78, .byte = 0xdd },
		{ .addr = 0xc63e79, .byte = 0x00 },
		{ .addr = 0xc63e7a, .byte = 0xf3 },
		{ .addr = 0xc63e7b, .byte = 0x95 }
};

static const SST_Transaction unlink_transactions_14[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11726828, .data = 11073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7864264, .data = 15586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7864260, .data = 8451, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7864262, .data = 34, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7864258, .data = 20059, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7864256, .data = 61421, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7864252, .data = 20053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7864254, .data = 52658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 12742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12992120, .data = 56576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12992122, .data = 62357, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte unlink_initial_ram_15[] = {
		{ .addr = 0x3e4924, .byte = 0x4e },
		{ .addr = 0x3e4925, .byte = 0x5f },
		{ .addr = 0x3e4926, .byte = 0x79 },
		{ .addr = 0x3e4927, .byte = 0xdc },
		{ .addr = 0xf86278, .byte = 0x8c },
		{ .addr = 0xf86279, .byte = 0x02 },
		{ .addr = 0xf8627a, .byte = 0x21 },
		{ .addr = 0xf8627b, .byte = 0x6a },
		{ .addr = 0x3e4928, .byte = 0xeb },
		{ .addr = 0x3e4929, .byte = 0x41 }
};

static const SST_RamByte unlink_final_ram_15[] = {
		{ .addr = 0x3e4924, .byte = 0x4e },
		{ .addr = 0x3e4925, .byte = 0x5f },
		{ .addr = 0x3e4926, .byte = 0x79 },
		{ .addr = 0x3e4927, .byte = 0xdc },
		{ .addr = 0xf86278, .byte = 0x8c },
		{ .addr = 0xf86279, .byte = 0x02 },
		{ .addr = 0xf8627a, .byte = 0x21 },
		{ .addr = 0xf8627b, .byte = 0x6a },
		{ .addr = 0x3e4928, .byte = 0xeb },
		{ .addr = 0x3e4929, .byte = 0x41 }
};

static const SST_Transaction unlink_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16278136, .data = 35842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16278138, .data = 8554, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4081960, .data = 60225, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t UNLINK_TEST_COUNT = 16;
static const SST_TestCase unlink[] = {
	{
		.name = "000 UNLINK A4 4e5c",
		.initial = {
			.regs = {
				4188436590, 403533247, 615474429, 3747526936, 3825585159, 2489378293, 1133655991, 4128972051, 1694106958, 3493144052, 581047800, 4261867541, 3129588871, 1826850257, 3304415370, 10090944, 16089654, 9233, 6891992
			},
			.prefetch0 = 20060,
			.prefetch1 = 2843,
			.ram = unlink_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4188436590, 403533247, 615474429, 3747526936, 3825585159, 2489378293, 1133655991, 4128972051, 1694106958, 3493144052, 581047800, 4261867541, 3129588871, 1826850257, 3304415370, 10090944, 16089640, 9233, 403988350
			},
			.prefetch0 = 24562,
			.prefetch1 = 27335,
			.ram = unlink_final_ram_0,
			.ram_len = 26,
		},
		.transactions = unlink_transactions_0,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "001 UNLINK A2 4e5a",
		.initial = {
			.regs = {
				2916556167, 428099635, 118450567, 2077910253, 2330782894, 3217358451, 1502496035, 1434474488, 2781200437, 2029487232, 1127418144, 1656483408, 988249728, 2986607512, 3983882045, 3802566, 1720518, 9733, 1058370
			},
			.prefetch0 = 20058,
			.prefetch1 = 11689,
			.ram = unlink_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2916556167, 428099635, 118450567, 2077910253, 2330782894, 3217358451, 1502496035, 1434474488, 2781200437, 2029487232, 1508535837, 1656483408, 988249728, 2986607512, 3983882045, 3802566, 1127418148, 9733, 1058372
			},
			.prefetch0 = 11689,
			.prefetch1 = 50325,
			.ram = unlink_final_ram_1,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 UNLINK A4 4e5c",
		.initial = {
			.regs = {
				2464812048, 1910430910, 2625009549, 2112861808, 106316100, 1749984205, 3768588459, 3624450333, 1810881534, 1634486090, 19272764, 1164584857, 2809689187, 3805761134, 1509184346, 4216640, 13711216, 8972, 16187316
			},
			.prefetch0 = 20060,
			.prefetch1 = 12526,
			.ram = unlink_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2464812048, 1910430910, 2625009549, 2112861808, 106316100, 1749984205, 3768588459, 3624450333, 1810881534, 1634486090, 19272764, 1164584857, 2809689187, 3805761134, 1509184346, 4216640, 13711202, 8972, 474898310
			},
			.prefetch0 = 45807,
			.prefetch1 = 55395,
			.ram = unlink_final_ram_2,
			.ram_len = 26,
		},
		.transactions = unlink_transactions_2,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "003 UNLINK A5 4e5d",
		.initial = {
			.regs = {
				2314677101, 1985362491, 184094830, 686046782, 1383002937, 2707387473, 1400822321, 3983166397, 2787255861, 1148335722, 2505350268, 1603072724, 3434376466, 2117067127, 1864787031, 9918730, 6528414, 11, 9713674
			},
			.prefetch0 = 20061,
			.prefetch1 = 16086,
			.ram = unlink_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2314677101, 1985362491, 184094830, 686046782, 1383002937, 2707387473, 1400822321, 3983166397, 2787255861, 1148335722, 2505350268, 1603072724, 3434376466, 2117067127, 1864787031, 9918730, 6528400, 8203, 2530889342
			},
			.prefetch0 = 13387,
			.prefetch1 = 1248,
			.ram = unlink_final_ram_3,
			.ram_len = 26,
		},
		.transactions = unlink_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 UNLINK A3 4e5b",
		.initial = {
			.regs = {
				1115577196, 3338960708, 2762876085, 1064534924, 446812821, 467858398, 1134627641, 2506393309, 3135629330, 3148221795, 132669232, 1564550874, 4032345811, 1592063851, 2493824882, 15322692, 14382574, 777, 8883278
			},
			.prefetch0 = 20059,
			.prefetch1 = 3973,
			.ram = unlink_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1115577196, 3338960708, 2762876085, 1064534924, 446812821, 467858398, 1134627641, 2506393309, 3135629330, 3148221795, 132669232, 3703742007, 4032345811, 1592063851, 2493824882, 1564550878, 14382574, 777, 8883280
			},
			.prefetch0 = 3973,
			.prefetch1 = 61258,
			.ram = unlink_final_ram_4,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 UNLINK A7 4e5f",
		.initial = {
			.regs = {
				3702335850, 2954601213, 1879391986, 595783446, 118188681, 801100433, 2248118727, 354924751, 545216569, 1276460825, 3454661591, 1605177323, 1135451124, 2455742942, 1504260609, 6127882, 2389860, 790, 7821022
			},
			.prefetch0 = 20063,
			.prefetch1 = 53524,
			.ram = unlink_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3702335850, 2954601213, 1879391986, 595783446, 118188681, 801100433, 2248118727, 354924751, 545216569, 1276460825, 3454661591, 1605177323, 1135451124, 2455742942, 1504260609, 905340074, 2389860, 790, 7821024
			},
			.prefetch0 = 53524,
			.prefetch1 = 17854,
			.ram = unlink_final_ram_5,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 UNLINK A2 4e5a",
		.initial = {
			.regs = {
				1994689663, 2759939379, 2644865604, 379599552, 56819541, 3860134968, 3508677848, 2325185067, 2375667324, 3116989120, 417569627, 3323688928, 2112520364, 1961658388, 383901931, 13505796, 11011136, 33800, 3100146
			},
			.prefetch0 = 20058,
			.prefetch1 = 47886,
			.ram = unlink_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1994689663, 2759939379, 2644865604, 379599552, 56819541, 3860134968, 3508677848, 2325185067, 2375667324, 3116989120, 417569627, 3323688928, 2112520364, 1961658388, 383901931, 13505796, 11011122, 9224, 3778546242
			},
			.prefetch0 = 34928,
			.prefetch1 = 64055,
			.ram = unlink_final_ram_6,
			.ram_len = 26,
		},
		.transactions = unlink_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 UNLINK A0 4e58",
		.initial = {
			.regs = {
				3621378054, 1174713557, 1026938086, 2420359610, 3191094583, 1833548077, 3059582205, 2542355426, 3040351611, 1158049333, 1404930848, 3282515905, 2978454544, 2106295503, 746921544, 12079690, 2425412, 1557, 6485022
			},
			.prefetch0 = 20056,
			.prefetch1 = 14543,
			.ram = unlink_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3621378054, 1174713557, 1026938086, 2420359610, 3191094583, 1833548077, 3059582205, 2542355426, 3040351611, 1158049333, 1404930848, 3282515905, 2978454544, 2106295503, 746921544, 12079690, 2425398, 9749, 2432841208
			},
			.prefetch0 = 63068,
			.prefetch1 = 25036,
			.ram = unlink_final_ram_7,
			.ram_len = 26,
		},
		.transactions = unlink_transactions_7,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "008 UNLINK A7 4e5f",
		.initial = {
			.regs = {
				3192183333, 4165220809, 3357039034, 1974438171, 3089981551, 3966612674, 3704855483, 1758637800, 3254401045, 1316543756, 2578383993, 3864329209, 3757038247, 2978611277, 3824084087, 1965980, 4298718, 9229, 9295766
			},
			.prefetch0 = 20063,
			.prefetch1 = 13240,
			.ram = unlink_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3192183333, 4165220809, 3357039034, 1974438171, 3089981551, 3966612674, 3704855483, 1758637800, 3254401045, 1316543756, 2578383993, 3864329209, 3757038247, 2978611277, 3824084087, 1965980, 57624883, 9229, 9295768
			},
			.prefetch0 = 13240,
			.prefetch1 = 18079,
			.ram = unlink_final_ram_8,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 UNLINK A1 4e59",
		.initial = {
			.regs = {
				2189342021, 2275664498, 3541966197, 893359101, 1663478489, 1189204981, 2289664451, 3828678699, 1927133126, 156930014, 948184157, 277058024, 441216983, 3248706486, 3519496560, 11981920, 8302272, 8708, 15571090
			},
			.prefetch0 = 20057,
			.prefetch1 = 2342,
			.ram = unlink_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2189342021, 2275664498, 3541966197, 893359101, 1663478489, 1189204981, 2289664451, 3828678699, 1927133126, 1318012927, 948184157, 277058024, 441216983, 3248706486, 3519496560, 11981920, 156930018, 8708, 15571092
			},
			.prefetch0 = 2342,
			.prefetch1 = 45090,
			.ram = unlink_final_ram_9,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 UNLINK A3 4e5b",
		.initial = {
			.regs = {
				1796048260, 863494256, 1402610221, 251402629, 4191229937, 1969510506, 1174334898, 2733165247, 3508076823, 613506839, 164671722, 1342516570, 2767763581, 2451062103, 760731952, 15982382, 6718368, 1054, 5004176
			},
			.prefetch0 = 20059,
			.prefetch1 = 5748,
			.ram = unlink_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1796048260, 863494256, 1402610221, 251402629, 4191229937, 1969510506, 1174334898, 2733165247, 3508076823, 613506839, 164671722, 2164729104, 2767763581, 2451062103, 760731952, 1342516574, 6718368, 1054, 5004178
			},
			.prefetch0 = 5748,
			.prefetch1 = 19744,
			.ram = unlink_final_ram_10,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 UNLINK A3 4e5b",
		.initial = {
			.regs = {
				804615984, 1590481632, 295663310, 3919531664, 3071065312, 3449019524, 205441330, 1243205866, 4258756398, 3952138062, 2079087805, 3810131354, 33319580, 538587639, 110912959, 4820274, 4575100, 33538, 3854938
			},
			.prefetch0 = 20059,
			.prefetch1 = 63060,
			.ram = unlink_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				804615984, 1590481632, 295663310, 3919531664, 3071065312, 3449019524, 205441330, 1243205866, 4258756398, 3952138062, 2079087805, 1157373724, 33319580, 538587639, 110912959, 3810131358, 4575100, 33538, 3854940
			},
			.prefetch0 = 63060,
			.prefetch1 = 65086,
			.ram = unlink_final_ram_11,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_11,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "012 UNLINK A3 4e5b",
		.initial = {
			.regs = {
				3640591469, 1255561828, 2748914366, 4100699582, 3247074502, 2291848373, 708539008, 3610304852, 3829003386, 489837881, 498485397, 145671865, 4160707412, 700539849, 4035067652, 7268960, 3233572, 521, 16705858
			},
			.prefetch0 = 20059,
			.prefetch1 = 20160,
			.ram = unlink_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3640591469, 1255561828, 2748914366, 4100699582, 3247074502, 2291848373, 708539008, 3610304852, 3829003386, 489837881, 498485397, 145671865, 4160707412, 700539849, 4035067652, 7268960, 3233558, 8713, 2982570392
			},
			.prefetch0 = 38165,
			.prefetch1 = 48949,
			.ram = unlink_final_ram_12,
			.ram_len = 26,
		},
		.transactions = unlink_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 UNLINK A1 4e59",
		.initial = {
			.regs = {
				1030177717, 2414120507, 580811306, 1930151715, 3577913163, 2972758212, 2273817345, 3448161063, 3369420083, 1523865270, 1298989429, 4215664804, 99329046, 3203067254, 3190113226, 10746346, 5818126, 1025, 3238876
			},
			.prefetch0 = 20057,
			.prefetch1 = 59741,
			.ram = unlink_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1030177717, 2414120507, 580811306, 1930151715, 3577913163, 2972758212, 2273817345, 3448161063, 3369420083, 4159087104, 1298989429, 4215664804, 99329046, 3203067254, 3190113226, 1523865274, 5818126, 1025, 3238878
			},
			.prefetch0 = 59741,
			.prefetch1 = 44597,
			.ram = unlink_final_ram_13,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_13,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "014 UNLINK A3 4e5b",
		.initial = {
			.regs = {
				239414, 3940425643, 897155165, 2013256349, 608453634, 2718888265, 3499451895, 3428599012, 687828103, 3524465722, 1524596772, 3451056109, 3881278802, 4187040780, 1241381358, 8571152, 7864266, 8451, 2243810
			},
			.prefetch0 = 20059,
			.prefetch1 = 2441,
			.ram = unlink_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				239414, 3940425643, 897155165, 2013256349, 608453634, 2718888265, 3499451895, 3428599012, 687828103, 3524465722, 1524596772, 3451056109, 3881278802, 4187040780, 1241381358, 8571152, 7864252, 8451, 835075708
			},
			.prefetch0 = 56576,
			.prefetch1 = 62357,
			.ram = unlink_final_ram_14,
			.ram_len = 26,
		},
		.transactions = unlink_transactions_14,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "015 UNLINK A7 4e5f",
		.initial = {
			.regs = {
				1247602754, 2620146418, 2648054199, 1997147791, 1026351835, 1505581896, 2874306541, 2599138534, 2189207988, 1594782363, 3763138, 3960454352, 3227477666, 3105736325, 1265831043, 5311660, 16278136, 9475, 4081960
			},
			.prefetch0 = 20063,
			.prefetch1 = 31196,
			.ram = unlink_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1247602754, 2620146418, 2648054199, 1997147791, 1026351835, 1505581896, 2874306541, 2599138534, 2189207988, 1594782363, 3763138, 3960454352, 3227477666, 3105736325, 1265831043, 5311660, 2348949866, 9475, 4081962
			},
			.prefetch0 = 31196,
			.prefetch1 = 60225,
			.ram = unlink_final_ram_15,
			.ram_len = 10,
		},
		.transactions = unlink_transactions_15,
		.transactions_len = 3,
		.lenght = 12,
	},
};

#endif /* RBT_UNLINK_H */