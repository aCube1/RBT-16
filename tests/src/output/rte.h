#ifndef RBT_RTE_H
#define RBT_RTE_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rte_initial_ram_0[] = {
		{ .addr = 0xee1eb4, .byte = 0x4e },
		{ .addr = 0xee1eb5, .byte = 0x73 },
		{ .addr = 0xee1eb6, .byte = 0x24 },
		{ .addr = 0xee1eb7, .byte = 0x9d },
		{ .addr = 0x000020, .byte = 0xdb },
		{ .addr = 0x000021, .byte = 0xe2 },
		{ .addr = 0x000022, .byte = 0xcf },
		{ .addr = 0x000023, .byte = 0x1c },
		{ .addr = 0xe2cf1c, .byte = 0x98 },
		{ .addr = 0xe2cf1d, .byte = 0xcb },
		{ .addr = 0xe2cf1e, .byte = 0x33 },
		{ .addr = 0xe2cf1f, .byte = 0x87 }
};

static const SST_RamByte rte_final_ram_0[] = {
		{ .addr = 0xee1eb4, .byte = 0x4e },
		{ .addr = 0xee1eb5, .byte = 0x73 },
		{ .addr = 0xee1eb6, .byte = 0x24 },
		{ .addr = 0xee1eb7, .byte = 0x9d },
		{ .addr = 0xa210e2, .byte = 0x1e },
		{ .addr = 0xa210e3, .byte = 0xb4 },
		{ .addr = 0xa210de, .byte = 0x03 },
		{ .addr = 0xa210df, .byte = 0x0a },
		{ .addr = 0xa210e0, .byte = 0x00 },
		{ .addr = 0xa210e1, .byte = 0xee },
		{ .addr = 0x000020, .byte = 0xdb },
		{ .addr = 0x000021, .byte = 0xe2 },
		{ .addr = 0x000022, .byte = 0xcf },
		{ .addr = 0x000023, .byte = 0x1c },
		{ .addr = 0xe2cf1c, .byte = 0x98 },
		{ .addr = 0xe2cf1d, .byte = 0xcb },
		{ .addr = 0xe2cf1e, .byte = 0x33 },
		{ .addr = 0xe2cf1f, .byte = 0x87 }
};

static const SST_Transaction rte_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10621154, .data = 7860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10621150, .data = 778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10621152, .data = 238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 56290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 53020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14864156, .data = 39115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14864158, .data = 13191, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_1[] = {
		{ .addr = 0xfc93ea, .byte = 0x4e },
		{ .addr = 0xfc93eb, .byte = 0x73 },
		{ .addr = 0xfc93ec, .byte = 0x64 },
		{ .addr = 0xfc93ed, .byte = 0xda },
		{ .addr = 0xddb142, .byte = 0x27 },
		{ .addr = 0xddb143, .byte = 0x5c },
		{ .addr = 0xddb144, .byte = 0x0b },
		{ .addr = 0xddb145, .byte = 0x13 },
		{ .addr = 0xddb146, .byte = 0x24 },
		{ .addr = 0xddb147, .byte = 0x9b },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0xbc },
		{ .addr = 0x00000e, .byte = 0xe2 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0xbce262, .byte = 0xef },
		{ .addr = 0xbce263, .byte = 0x4f },
		{ .addr = 0xbce264, .byte = 0x9d },
		{ .addr = 0xbce265, .byte = 0x8d }
};

static const SST_RamByte rte_final_ram_1[] = {
		{ .addr = 0xfc93ea, .byte = 0x4e },
		{ .addr = 0xfc93eb, .byte = 0x73 },
		{ .addr = 0xfc93ec, .byte = 0x64 },
		{ .addr = 0xfc93ed, .byte = 0xda },
		{ .addr = 0xddb142, .byte = 0x27 },
		{ .addr = 0xddb143, .byte = 0x1c },
		{ .addr = 0xddb144, .byte = 0x00 },
		{ .addr = 0xddb145, .byte = 0xfc },
		{ .addr = 0xddb146, .byte = 0x93 },
		{ .addr = 0xddb147, .byte = 0xec },
		{ .addr = 0xddb140, .byte = 0x4e },
		{ .addr = 0xddb141, .byte = 0x73 },
		{ .addr = 0xddb13e, .byte = 0x24 },
		{ .addr = 0xddb13f, .byte = 0x9b },
		{ .addr = 0xddb13a, .byte = 0x4e },
		{ .addr = 0xddb13b, .byte = 0x76 },
		{ .addr = 0xddb13c, .byte = 0x0b },
		{ .addr = 0xddb13d, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0xbc },
		{ .addr = 0x00000e, .byte = 0xe2 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0xbce262, .byte = 0xef },
		{ .addr = 0xbce263, .byte = 0x4f },
		{ .addr = 0xbce264, .byte = 0x9d },
		{ .addr = 0xbce265, .byte = 0x8d }
};

static const SST_Transaction rte_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528834, .data = 10076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528836, .data = 2835, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528838, .data = 9371, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1254554, .data = 29933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528838, .data = 37868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528834, .data = 10012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528836, .data = 252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528832, .data = 20083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528830, .data = 9371, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528826, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14528828, .data = 2835, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12378722, .data = 61263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12378724, .data = 40333, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_2[] = {
		{ .addr = 0x5abbac, .byte = 0x4e },
		{ .addr = 0x5abbad, .byte = 0x73 },
		{ .addr = 0x5abbae, .byte = 0x32 },
		{ .addr = 0x5abbaf, .byte = 0x7d },
		{ .addr = 0x000020, .byte = 0x0c },
		{ .addr = 0x000021, .byte = 0xd4 },
		{ .addr = 0x000022, .byte = 0xa8 },
		{ .addr = 0x000023, .byte = 0x8a },
		{ .addr = 0xd4a88a, .byte = 0x3a },
		{ .addr = 0xd4a88b, .byte = 0x3f },
		{ .addr = 0xd4a88c, .byte = 0x7b },
		{ .addr = 0xd4a88d, .byte = 0xfc }
};

static const SST_RamByte rte_final_ram_2[] = {
		{ .addr = 0x5abbac, .byte = 0x4e },
		{ .addr = 0x5abbad, .byte = 0x73 },
		{ .addr = 0x5abbae, .byte = 0x32 },
		{ .addr = 0x5abbaf, .byte = 0x7d },
		{ .addr = 0xe6cbee, .byte = 0xbb },
		{ .addr = 0xe6cbef, .byte = 0xac },
		{ .addr = 0xe6cbea, .byte = 0x01 },
		{ .addr = 0xe6cbeb, .byte = 0x1f },
		{ .addr = 0xe6cbec, .byte = 0x00 },
		{ .addr = 0xe6cbed, .byte = 0x5a },
		{ .addr = 0x000020, .byte = 0x0c },
		{ .addr = 0x000021, .byte = 0xd4 },
		{ .addr = 0x000022, .byte = 0xa8 },
		{ .addr = 0x000023, .byte = 0x8a },
		{ .addr = 0xd4a88a, .byte = 0x3a },
		{ .addr = 0xd4a88b, .byte = 0x3f },
		{ .addr = 0xd4a88c, .byte = 0x7b },
		{ .addr = 0xd4a88d, .byte = 0xfc }
};

static const SST_Transaction rte_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15125486, .data = 48044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15125482, .data = 287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15125484, .data = 90, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 3284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 43146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13936778, .data = 14911, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13936780, .data = 31740, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_3[] = {
		{ .addr = 0x12b564, .byte = 0x4e },
		{ .addr = 0x12b565, .byte = 0x73 },
		{ .addr = 0x12b566, .byte = 0x03 },
		{ .addr = 0x12b567, .byte = 0x0d },
		{ .addr = 0xa16c68, .byte = 0x69 },
		{ .addr = 0xa16c69, .byte = 0xae },
		{ .addr = 0xa16c6a, .byte = 0x01 },
		{ .addr = 0xa16c6b, .byte = 0x37 },
		{ .addr = 0xa16c6c, .byte = 0x3c },
		{ .addr = 0xa16c6d, .byte = 0xb0 },
		{ .addr = 0x373cb0, .byte = 0xdd },
		{ .addr = 0x373cb1, .byte = 0x2a },
		{ .addr = 0x373cb2, .byte = 0x1e },
		{ .addr = 0x373cb3, .byte = 0x07 }
};

static const SST_RamByte rte_final_ram_3[] = {
		{ .addr = 0x12b564, .byte = 0x4e },
		{ .addr = 0x12b565, .byte = 0x73 },
		{ .addr = 0x12b566, .byte = 0x03 },
		{ .addr = 0x12b567, .byte = 0x0d },
		{ .addr = 0xa16c68, .byte = 0x69 },
		{ .addr = 0xa16c69, .byte = 0xae },
		{ .addr = 0xa16c6a, .byte = 0x01 },
		{ .addr = 0xa16c6b, .byte = 0x37 },
		{ .addr = 0xa16c6c, .byte = 0x3c },
		{ .addr = 0xa16c6d, .byte = 0xb0 },
		{ .addr = 0x373cb0, .byte = 0xdd },
		{ .addr = 0x373cb1, .byte = 0x2a },
		{ .addr = 0x373cb2, .byte = 0x1e },
		{ .addr = 0x373cb3, .byte = 0x07 }
};

static const SST_Transaction rte_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10579048, .data = 27054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10579050, .data = 311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10579052, .data = 15536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3620016, .data = 56618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3620018, .data = 7687, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_4[] = {
		{ .addr = 0x90843e, .byte = 0x4e },
		{ .addr = 0x90843f, .byte = 0x73 },
		{ .addr = 0x908440, .byte = 0x14 },
		{ .addr = 0x908441, .byte = 0x7e },
		{ .addr = 0xcbddae, .byte = 0x40 },
		{ .addr = 0xcbddaf, .byte = 0x84 },
		{ .addr = 0xcbddb0, .byte = 0x50 },
		{ .addr = 0xcbddb1, .byte = 0xaa },
		{ .addr = 0xcbddb2, .byte = 0xa8 },
		{ .addr = 0xcbddb3, .byte = 0x4f },
		{ .addr = 0x00000c, .byte = 0xc7 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x54 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0x5c5488, .byte = 0xcc },
		{ .addr = 0x5c5489, .byte = 0xe7 },
		{ .addr = 0x5c548a, .byte = 0x7a },
		{ .addr = 0x5c548b, .byte = 0x7d }
};

static const SST_RamByte rte_final_ram_4[] = {
		{ .addr = 0x90843e, .byte = 0x4e },
		{ .addr = 0x90843f, .byte = 0x73 },
		{ .addr = 0x908440, .byte = 0x14 },
		{ .addr = 0x908441, .byte = 0x7e },
		{ .addr = 0xcbddae, .byte = 0x00 },
		{ .addr = 0xcbddaf, .byte = 0x04 },
		{ .addr = 0xcbddb0, .byte = 0x00 },
		{ .addr = 0xcbddb1, .byte = 0x90 },
		{ .addr = 0xcbddb2, .byte = 0x84 },
		{ .addr = 0xcbddb3, .byte = 0x40 },
		{ .addr = 0xcbddac, .byte = 0x4e },
		{ .addr = 0xcbddad, .byte = 0x73 },
		{ .addr = 0xcbddaa, .byte = 0xa8 },
		{ .addr = 0xcbddab, .byte = 0x4f },
		{ .addr = 0xcbdda6, .byte = 0x4e },
		{ .addr = 0xcbdda7, .byte = 0x72 },
		{ .addr = 0xcbdda8, .byte = 0x50 },
		{ .addr = 0xcbdda9, .byte = 0xaa },
		{ .addr = 0x00000c, .byte = 0xc7 },
		{ .addr = 0x00000d, .byte = 0x5c },
		{ .addr = 0x00000e, .byte = 0x54 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0x5c5488, .byte = 0xcc },
		{ .addr = 0x5c5489, .byte = 0xe7 },
		{ .addr = 0x5c548a, .byte = 0x7a },
		{ .addr = 0x5c548b, .byte = 0x7d }
};

static const SST_Transaction rte_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360558, .data = 16516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360560, .data = 20650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360562, .data = 43087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11184206, .data = 19807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360562, .data = 33856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360558, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360560, .data = 144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360556, .data = 20083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360554, .data = 43087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360550, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13360552, .data = 20650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6050952, .data = 52455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6050954, .data = 31357, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_5[] = {
		{ .addr = 0xf037fc, .byte = 0x4e },
		{ .addr = 0xf037fd, .byte = 0x73 },
		{ .addr = 0xf037fe, .byte = 0x60 },
		{ .addr = 0xf037ff, .byte = 0x78 },
		{ .addr = 0x000020, .byte = 0xd6 },
		{ .addr = 0x000021, .byte = 0x36 },
		{ .addr = 0x000022, .byte = 0x76 },
		{ .addr = 0x000023, .byte = 0xd8 },
		{ .addr = 0x3676d8, .byte = 0x83 },
		{ .addr = 0x3676d9, .byte = 0xb6 },
		{ .addr = 0x3676da, .byte = 0xf7 },
		{ .addr = 0x3676db, .byte = 0x98 }
};

static const SST_RamByte rte_final_ram_5[] = {
		{ .addr = 0xf037fc, .byte = 0x4e },
		{ .addr = 0xf037fd, .byte = 0x73 },
		{ .addr = 0xf037fe, .byte = 0x60 },
		{ .addr = 0xf037ff, .byte = 0x78 },
		{ .addr = 0xe2e782, .byte = 0x37 },
		{ .addr = 0xe2e783, .byte = 0xfc },
		{ .addr = 0xe2e77e, .byte = 0x02 },
		{ .addr = 0xe2e77f, .byte = 0x14 },
		{ .addr = 0xe2e780, .byte = 0x00 },
		{ .addr = 0xe2e781, .byte = 0xf0 },
		{ .addr = 0x000020, .byte = 0xd6 },
		{ .addr = 0x000021, .byte = 0x36 },
		{ .addr = 0x000022, .byte = 0x76 },
		{ .addr = 0x000023, .byte = 0xd8 },
		{ .addr = 0x3676d8, .byte = 0x83 },
		{ .addr = 0x3676d9, .byte = 0xb6 },
		{ .addr = 0x3676da, .byte = 0xf7 },
		{ .addr = 0x3676db, .byte = 0x98 }
};

static const SST_Transaction rte_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14870402, .data = 14332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14870398, .data = 532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14870400, .data = 240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 54838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 30424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3569368, .data = 33718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3569370, .data = 63384, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_6[] = {
		{ .addr = 0x584642, .byte = 0x4e },
		{ .addr = 0x584643, .byte = 0x73 },
		{ .addr = 0x584644, .byte = 0x2e },
		{ .addr = 0x584645, .byte = 0xaa },
		{ .addr = 0x000020, .byte = 0xda },
		{ .addr = 0x000021, .byte = 0xfe },
		{ .addr = 0x000022, .byte = 0x83 },
		{ .addr = 0x000023, .byte = 0xe2 },
		{ .addr = 0xfe83e2, .byte = 0x35 },
		{ .addr = 0xfe83e3, .byte = 0x6f },
		{ .addr = 0xfe83e4, .byte = 0xb6 },
		{ .addr = 0xfe83e5, .byte = 0x82 }
};

static const SST_RamByte rte_final_ram_6[] = {
		{ .addr = 0x584642, .byte = 0x4e },
		{ .addr = 0x584643, .byte = 0x73 },
		{ .addr = 0x584644, .byte = 0x2e },
		{ .addr = 0x584645, .byte = 0xaa },
		{ .addr = 0x3a78b2, .byte = 0x46 },
		{ .addr = 0x3a78b3, .byte = 0x42 },
		{ .addr = 0x3a78ae, .byte = 0x03 },
		{ .addr = 0x3a78af, .byte = 0x0c },
		{ .addr = 0x3a78b0, .byte = 0x00 },
		{ .addr = 0x3a78b1, .byte = 0x58 },
		{ .addr = 0x000020, .byte = 0xda },
		{ .addr = 0x000021, .byte = 0xfe },
		{ .addr = 0x000022, .byte = 0x83 },
		{ .addr = 0x000023, .byte = 0xe2 },
		{ .addr = 0xfe83e2, .byte = 0x35 },
		{ .addr = 0xfe83e3, .byte = 0x6f },
		{ .addr = 0xfe83e4, .byte = 0xb6 },
		{ .addr = 0xfe83e5, .byte = 0x82 }
};

static const SST_Transaction rte_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3831986, .data = 17986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3831982, .data = 780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3831984, .data = 88, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 56062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 33762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16679906, .data = 13679, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16679908, .data = 46722, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_7[] = {
		{ .addr = 0xb1b956, .byte = 0x4e },
		{ .addr = 0xb1b957, .byte = 0x73 },
		{ .addr = 0xb1b958, .byte = 0x00 },
		{ .addr = 0xb1b959, .byte = 0xd7 },
		{ .addr = 0x000020, .byte = 0x32 },
		{ .addr = 0x000021, .byte = 0x2a },
		{ .addr = 0x000022, .byte = 0x49 },
		{ .addr = 0x000023, .byte = 0x9e },
		{ .addr = 0x2a499e, .byte = 0xaf },
		{ .addr = 0x2a499f, .byte = 0x39 },
		{ .addr = 0x2a49a0, .byte = 0xd0 },
		{ .addr = 0x2a49a1, .byte = 0x8e }
};

static const SST_RamByte rte_final_ram_7[] = {
		{ .addr = 0xb1b956, .byte = 0x4e },
		{ .addr = 0xb1b957, .byte = 0x73 },
		{ .addr = 0xb1b958, .byte = 0x00 },
		{ .addr = 0xb1b959, .byte = 0xd7 },
		{ .addr = 0x4fb3dc, .byte = 0xb9 },
		{ .addr = 0x4fb3dd, .byte = 0x56 },
		{ .addr = 0x4fb3d8, .byte = 0x05 },
		{ .addr = 0x4fb3d9, .byte = 0x11 },
		{ .addr = 0x4fb3da, .byte = 0x00 },
		{ .addr = 0x4fb3db, .byte = 0xb1 },
		{ .addr = 0x000020, .byte = 0x32 },
		{ .addr = 0x000021, .byte = 0x2a },
		{ .addr = 0x000022, .byte = 0x49 },
		{ .addr = 0x000023, .byte = 0x9e },
		{ .addr = 0x2a499e, .byte = 0xaf },
		{ .addr = 0x2a499f, .byte = 0x39 },
		{ .addr = 0x2a49a0, .byte = 0xd0 },
		{ .addr = 0x2a49a1, .byte = 0x8e }
};

static const SST_Transaction rte_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5223388, .data = 47446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5223384, .data = 1297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5223386, .data = 177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 12842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 18846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2771358, .data = 44857, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2771360, .data = 53390, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_8[] = {
		{ .addr = 0x8d94ae, .byte = 0x4e },
		{ .addr = 0x8d94af, .byte = 0x73 },
		{ .addr = 0x8d94b0, .byte = 0x65 },
		{ .addr = 0x8d94b1, .byte = 0x5f },
		{ .addr = 0xd6462a, .byte = 0x83 },
		{ .addr = 0xd6462b, .byte = 0x29 },
		{ .addr = 0xd6462c, .byte = 0xd4 },
		{ .addr = 0xd6462d, .byte = 0x2e },
		{ .addr = 0xd6462e, .byte = 0x8a },
		{ .addr = 0xd6462f, .byte = 0xce },
		{ .addr = 0x2e8ace, .byte = 0xf5 },
		{ .addr = 0x2e8acf, .byte = 0x79 },
		{ .addr = 0x2e8ad0, .byte = 0x50 },
		{ .addr = 0x2e8ad1, .byte = 0xc6 }
};

static const SST_RamByte rte_final_ram_8[] = {
		{ .addr = 0x8d94ae, .byte = 0x4e },
		{ .addr = 0x8d94af, .byte = 0x73 },
		{ .addr = 0x8d94b0, .byte = 0x65 },
		{ .addr = 0x8d94b1, .byte = 0x5f },
		{ .addr = 0xd6462a, .byte = 0x83 },
		{ .addr = 0xd6462b, .byte = 0x29 },
		{ .addr = 0xd6462c, .byte = 0xd4 },
		{ .addr = 0xd6462d, .byte = 0x2e },
		{ .addr = 0xd6462e, .byte = 0x8a },
		{ .addr = 0xd6462f, .byte = 0xce },
		{ .addr = 0x2e8ace, .byte = 0xf5 },
		{ .addr = 0x2e8acf, .byte = 0x79 },
		{ .addr = 0x2e8ad0, .byte = 0x50 },
		{ .addr = 0x2e8ad1, .byte = 0xc6 }
};

static const SST_Transaction rte_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14042666, .data = 33577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14042668, .data = 54318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14042670, .data = 35534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3050190, .data = 62841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3050192, .data = 20678, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_9[] = {
		{ .addr = 0x1513ba, .byte = 0x4e },
		{ .addr = 0x1513bb, .byte = 0x73 },
		{ .addr = 0x1513bc, .byte = 0x3f },
		{ .addr = 0x1513bd, .byte = 0x6e },
		{ .addr = 0xf613a8, .byte = 0x7e },
		{ .addr = 0xf613a9, .byte = 0x51 },
		{ .addr = 0xf613aa, .byte = 0x73 },
		{ .addr = 0xf613ab, .byte = 0xbf },
		{ .addr = 0xf613ac, .byte = 0x8c },
		{ .addr = 0xf613ad, .byte = 0xc4 },
		{ .addr = 0xbf8cc4, .byte = 0x5d },
		{ .addr = 0xbf8cc5, .byte = 0x8b },
		{ .addr = 0xbf8cc6, .byte = 0x29 },
		{ .addr = 0xbf8cc7, .byte = 0xa2 }
};

static const SST_RamByte rte_final_ram_9[] = {
		{ .addr = 0x1513ba, .byte = 0x4e },
		{ .addr = 0x1513bb, .byte = 0x73 },
		{ .addr = 0x1513bc, .byte = 0x3f },
		{ .addr = 0x1513bd, .byte = 0x6e },
		{ .addr = 0xf613a8, .byte = 0x7e },
		{ .addr = 0xf613a9, .byte = 0x51 },
		{ .addr = 0xf613aa, .byte = 0x73 },
		{ .addr = 0xf613ab, .byte = 0xbf },
		{ .addr = 0xf613ac, .byte = 0x8c },
		{ .addr = 0xf613ad, .byte = 0xc4 },
		{ .addr = 0xbf8cc4, .byte = 0x5d },
		{ .addr = 0xbf8cc5, .byte = 0x8b },
		{ .addr = 0xbf8cc6, .byte = 0x29 },
		{ .addr = 0xbf8cc7, .byte = 0xa2 }
};

static const SST_Transaction rte_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16126888, .data = 32337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16126890, .data = 29631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16126892, .data = 36036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12553412, .data = 23947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12553414, .data = 10658, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_10[] = {
		{ .addr = 0xcde7e6, .byte = 0x4e },
		{ .addr = 0xcde7e7, .byte = 0x73 },
		{ .addr = 0xcde7e8, .byte = 0x7f },
		{ .addr = 0xcde7e9, .byte = 0x47 },
		{ .addr = 0x000020, .byte = 0x09 },
		{ .addr = 0x000021, .byte = 0x56 },
		{ .addr = 0x000022, .byte = 0xa0 },
		{ .addr = 0x000023, .byte = 0xb2 },
		{ .addr = 0x56a0b2, .byte = 0x5c },
		{ .addr = 0x56a0b3, .byte = 0xfb },
		{ .addr = 0x56a0b4, .byte = 0x24 },
		{ .addr = 0x56a0b5, .byte = 0x90 }
};

static const SST_RamByte rte_final_ram_10[] = {
		{ .addr = 0xcde7e6, .byte = 0x4e },
		{ .addr = 0xcde7e7, .byte = 0x73 },
		{ .addr = 0xcde7e8, .byte = 0x7f },
		{ .addr = 0xcde7e9, .byte = 0x47 },
		{ .addr = 0xceb6c8, .byte = 0xe7 },
		{ .addr = 0xceb6c9, .byte = 0xe6 },
		{ .addr = 0xceb6c4, .byte = 0x04 },
		{ .addr = 0xceb6c5, .byte = 0x09 },
		{ .addr = 0xceb6c6, .byte = 0x00 },
		{ .addr = 0xceb6c7, .byte = 0xcd },
		{ .addr = 0x000020, .byte = 0x09 },
		{ .addr = 0x000021, .byte = 0x56 },
		{ .addr = 0x000022, .byte = 0xa0 },
		{ .addr = 0x000023, .byte = 0xb2 },
		{ .addr = 0x56a0b2, .byte = 0x5c },
		{ .addr = 0x56a0b3, .byte = 0xfb },
		{ .addr = 0x56a0b4, .byte = 0x24 },
		{ .addr = 0x56a0b5, .byte = 0x90 }
};

static const SST_Transaction rte_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13547208, .data = 59366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13547204, .data = 1033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13547206, .data = 205, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 2390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 41138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5677234, .data = 23803, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5677236, .data = 9360, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_11[] = {
		{ .addr = 0x278a72, .byte = 0x4e },
		{ .addr = 0x278a73, .byte = 0x73 },
		{ .addr = 0x278a74, .byte = 0x00 },
		{ .addr = 0x278a75, .byte = 0xdb },
		{ .addr = 0xc522d2, .byte = 0xe1 },
		{ .addr = 0xc522d3, .byte = 0xdf },
		{ .addr = 0xc522d4, .byte = 0x06 },
		{ .addr = 0xc522d5, .byte = 0x13 },
		{ .addr = 0xc522d6, .byte = 0xb5 },
		{ .addr = 0xc522d7, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x71 },
		{ .addr = 0x00000f, .byte = 0x1c },
		{ .addr = 0x3c711c, .byte = 0x56 },
		{ .addr = 0x3c711d, .byte = 0xd4 },
		{ .addr = 0x3c711e, .byte = 0x94 },
		{ .addr = 0x3c711f, .byte = 0x2a }
};

static const SST_RamByte rte_final_ram_11[] = {
		{ .addr = 0x278a72, .byte = 0x4e },
		{ .addr = 0x278a73, .byte = 0x73 },
		{ .addr = 0x278a74, .byte = 0x00 },
		{ .addr = 0x278a75, .byte = 0xdb },
		{ .addr = 0xc522d2, .byte = 0xa1 },
		{ .addr = 0xc522d3, .byte = 0x1f },
		{ .addr = 0xc522d4, .byte = 0x00 },
		{ .addr = 0xc522d5, .byte = 0x27 },
		{ .addr = 0xc522d6, .byte = 0x8a },
		{ .addr = 0xc522d7, .byte = 0x74 },
		{ .addr = 0xc522d0, .byte = 0x4e },
		{ .addr = 0xc522d1, .byte = 0x73 },
		{ .addr = 0xc522ce, .byte = 0xb5 },
		{ .addr = 0xc522cf, .byte = 0xf5 },
		{ .addr = 0xc522ca, .byte = 0x4e },
		{ .addr = 0xc522cb, .byte = 0x76 },
		{ .addr = 0xc522cc, .byte = 0x06 },
		{ .addr = 0xc522cd, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x71 },
		{ .addr = 0x00000f, .byte = 0x1c },
		{ .addr = 0x3c711c, .byte = 0x56 },
		{ .addr = 0x3c711d, .byte = 0xd4 },
		{ .addr = 0x3c711e, .byte = 0x94 },
		{ .addr = 0x3c711f, .byte = 0x2a }
};

static const SST_Transaction rte_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919506, .data = 57823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919508, .data = 1555, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919510, .data = 46581, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1291764, .data = 60814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919510, .data = 35444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919506, .data = 41247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919508, .data = 39, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919504, .data = 20083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919502, .data = 46581, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919498, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12919500, .data = 1555, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 28956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3961116, .data = 22228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3961118, .data = 37930, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_12[] = {
		{ .addr = 0x5ff6f2, .byte = 0x4e },
		{ .addr = 0x5ff6f3, .byte = 0x73 },
		{ .addr = 0x5ff6f4, .byte = 0x73 },
		{ .addr = 0x5ff6f5, .byte = 0xf3 },
		{ .addr = 0x3061f4, .byte = 0x52 },
		{ .addr = 0x3061f5, .byte = 0x8c },
		{ .addr = 0x3061f6, .byte = 0xea },
		{ .addr = 0x3061f7, .byte = 0x20 },
		{ .addr = 0x3061f8, .byte = 0x1e },
		{ .addr = 0x3061f9, .byte = 0xec },
		{ .addr = 0x201eec, .byte = 0xd2 },
		{ .addr = 0x201eed, .byte = 0x69 },
		{ .addr = 0x201eee, .byte = 0x86 },
		{ .addr = 0x201eef, .byte = 0xe0 }
};

static const SST_RamByte rte_final_ram_12[] = {
		{ .addr = 0x5ff6f2, .byte = 0x4e },
		{ .addr = 0x5ff6f3, .byte = 0x73 },
		{ .addr = 0x5ff6f4, .byte = 0x73 },
		{ .addr = 0x5ff6f5, .byte = 0xf3 },
		{ .addr = 0x3061f4, .byte = 0x52 },
		{ .addr = 0x3061f5, .byte = 0x8c },
		{ .addr = 0x3061f6, .byte = 0xea },
		{ .addr = 0x3061f7, .byte = 0x20 },
		{ .addr = 0x3061f8, .byte = 0x1e },
		{ .addr = 0x3061f9, .byte = 0xec },
		{ .addr = 0x201eec, .byte = 0xd2 },
		{ .addr = 0x201eed, .byte = 0x69 },
		{ .addr = 0x201eee, .byte = 0x86 },
		{ .addr = 0x201eef, .byte = 0xe0 }
};

static const SST_Transaction rte_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3170804, .data = 21132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3170806, .data = 59936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3170808, .data = 7916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2105068, .data = 53865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2105070, .data = 34528, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_13[] = {
		{ .addr = 0x1670e8, .byte = 0x4e },
		{ .addr = 0x1670e9, .byte = 0x73 },
		{ .addr = 0x1670ea, .byte = 0xcf },
		{ .addr = 0x1670eb, .byte = 0x06 },
		{ .addr = 0x000020, .byte = 0x13 },
		{ .addr = 0x000021, .byte = 0xf6 },
		{ .addr = 0x000022, .byte = 0xb1 },
		{ .addr = 0x000023, .byte = 0xbe },
		{ .addr = 0xf6b1be, .byte = 0x95 },
		{ .addr = 0xf6b1bf, .byte = 0x37 },
		{ .addr = 0xf6b1c0, .byte = 0x92 },
		{ .addr = 0xf6b1c1, .byte = 0xd3 }
};

static const SST_RamByte rte_final_ram_13[] = {
		{ .addr = 0x1670e8, .byte = 0x4e },
		{ .addr = 0x1670e9, .byte = 0x73 },
		{ .addr = 0x1670ea, .byte = 0xcf },
		{ .addr = 0x1670eb, .byte = 0x06 },
		{ .addr = 0x83ad8c, .byte = 0x70 },
		{ .addr = 0x83ad8d, .byte = 0xe8 },
		{ .addr = 0x83ad88, .byte = 0x85 },
		{ .addr = 0x83ad89, .byte = 0x09 },
		{ .addr = 0x83ad8a, .byte = 0x00 },
		{ .addr = 0x83ad8b, .byte = 0x16 },
		{ .addr = 0x000020, .byte = 0x13 },
		{ .addr = 0x000021, .byte = 0xf6 },
		{ .addr = 0x000022, .byte = 0xb1 },
		{ .addr = 0x000023, .byte = 0xbe },
		{ .addr = 0xf6b1be, .byte = 0x95 },
		{ .addr = 0xf6b1bf, .byte = 0x37 },
		{ .addr = 0xf6b1c0, .byte = 0x92 },
		{ .addr = 0xf6b1c1, .byte = 0xd3 }
};

static const SST_Transaction rte_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8629644, .data = 28904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8629640, .data = 34057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8629642, .data = 22, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 5110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 45502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16167358, .data = 38199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16167360, .data = 37587, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_14[] = {
		{ .addr = 0x739232, .byte = 0x4e },
		{ .addr = 0x739233, .byte = 0x73 },
		{ .addr = 0x739234, .byte = 0x2b },
		{ .addr = 0x739235, .byte = 0x81 },
		{ .addr = 0x000020, .byte = 0x1d },
		{ .addr = 0x000021, .byte = 0x38 },
		{ .addr = 0x000022, .byte = 0x26 },
		{ .addr = 0x000023, .byte = 0xd8 },
		{ .addr = 0x3826d8, .byte = 0x81 },
		{ .addr = 0x3826d9, .byte = 0x1b },
		{ .addr = 0x3826da, .byte = 0x3f },
		{ .addr = 0x3826db, .byte = 0xd9 }
};

static const SST_RamByte rte_final_ram_14[] = {
		{ .addr = 0x739232, .byte = 0x4e },
		{ .addr = 0x739233, .byte = 0x73 },
		{ .addr = 0x739234, .byte = 0x2b },
		{ .addr = 0x739235, .byte = 0x81 },
		{ .addr = 0xf2cd20, .byte = 0x92 },
		{ .addr = 0xf2cd21, .byte = 0x32 },
		{ .addr = 0xf2cd1c, .byte = 0x87 },
		{ .addr = 0xf2cd1d, .byte = 0x08 },
		{ .addr = 0xf2cd1e, .byte = 0x00 },
		{ .addr = 0xf2cd1f, .byte = 0x73 },
		{ .addr = 0x000020, .byte = 0x1d },
		{ .addr = 0x000021, .byte = 0x38 },
		{ .addr = 0x000022, .byte = 0x26 },
		{ .addr = 0x000023, .byte = 0xd8 },
		{ .addr = 0x3826d8, .byte = 0x81 },
		{ .addr = 0x3826d9, .byte = 0x1b },
		{ .addr = 0x3826da, .byte = 0x3f },
		{ .addr = 0x3826db, .byte = 0xd9 }
};

static const SST_Transaction rte_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15912224, .data = 37426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15912220, .data = 34568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15912222, .data = 115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 7480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 9944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3679960, .data = 33051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3679962, .data = 16345, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_15[] = {
		{ .addr = 0xcd945a, .byte = 0x4e },
		{ .addr = 0xcd945b, .byte = 0x73 },
		{ .addr = 0xcd945c, .byte = 0x73 },
		{ .addr = 0xcd945d, .byte = 0xe6 },
		{ .addr = 0x7f2320, .byte = 0xa3 },
		{ .addr = 0x7f2321, .byte = 0xbd },
		{ .addr = 0x7f2322, .byte = 0x5c },
		{ .addr = 0x7f2323, .byte = 0x1c },
		{ .addr = 0x7f2324, .byte = 0x53 },
		{ .addr = 0x7f2325, .byte = 0x80 },
		{ .addr = 0x1c5380, .byte = 0xac },
		{ .addr = 0x1c5381, .byte = 0x0f },
		{ .addr = 0x1c5382, .byte = 0xde },
		{ .addr = 0x1c5383, .byte = 0x29 }
};

static const SST_RamByte rte_final_ram_15[] = {
		{ .addr = 0xcd945a, .byte = 0x4e },
		{ .addr = 0xcd945b, .byte = 0x73 },
		{ .addr = 0xcd945c, .byte = 0x73 },
		{ .addr = 0xcd945d, .byte = 0xe6 },
		{ .addr = 0x7f2320, .byte = 0xa3 },
		{ .addr = 0x7f2321, .byte = 0xbd },
		{ .addr = 0x7f2322, .byte = 0x5c },
		{ .addr = 0x7f2323, .byte = 0x1c },
		{ .addr = 0x7f2324, .byte = 0x53 },
		{ .addr = 0x7f2325, .byte = 0x80 },
		{ .addr = 0x1c5380, .byte = 0xac },
		{ .addr = 0x1c5381, .byte = 0x0f },
		{ .addr = 0x1c5382, .byte = 0xde },
		{ .addr = 0x1c5383, .byte = 0x29 }
};

static const SST_Transaction rte_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8332064, .data = 41917, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8332066, .data = 23580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8332068, .data = 21376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1856384, .data = 44047, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1856386, .data = 56873, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t RTE_TEST_COUNT = 16;
static const SST_TestCase rte[] = {
	{
		.name = "000 RTE 4e73",
		.initial = {
			.regs = {
				2007613906, 3706720267, 1617529897, 1478009187, 377458258, 3442747953, 961913447, 3748574403, 764235716, 3367791794, 2831329522, 575282664, 1029867960, 2013620114, 1419658330, 4721610, 10621156, 778, 15605432
			},
			.prefetch0 = 20083,
			.prefetch1 = 9373,
			.ram = rte_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2007613906, 3706720267, 1617529897, 1478009187, 377458258, 3442747953, 961913447, 3748574403, 764235716, 3367791794, 2831329522, 575282664, 1029867960, 2013620114, 1419658330, 4721610, 10621150, 8970, 3689074464
			},
			.prefetch0 = 39115,
			.prefetch1 = 13191,
			.ram = rte_final_ram_0,
			.ram_len = 18,
		},
		.transactions = rte_transactions_0,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "001 RTE 4e73",
		.initial = {
			.regs = {
				4093639827, 797852204, 3347682999, 3224296149, 2587359628, 425403558, 1560234881, 502428737, 2240473734, 3790802902, 351870154, 2831304355, 500155422, 1532361779, 988388490, 8235970, 14528834, 9728, 16552942
			},
			.prefetch0 = 20083,
			.prefetch1 = 25818,
			.ram = rte_initial_ram_1,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				4093639827, 797852204, 3347682999, 3224296149, 2587359628, 425403558, 1560234881, 502428737, 2240473734, 3790802902, 351870154, 2831304355, 500155422, 1532361779, 988388490, 8235970, 14528826, 10012, 2814173798
			},
			.prefetch0 = 61263,
			.prefetch1 = 40333,
			.ram = rte_final_ram_1,
			.ram_len = 26,
		},
		.transactions = rte_transactions_1,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "002 RTE 4e73",
		.initial = {
			.regs = {
				2355569500, 375477428, 3453393552, 1316034171, 3309616410, 324891696, 810249802, 2046051050, 1873776239, 2860897493, 4006167705, 3728266336, 2459151575, 985720719, 2999779519, 8127750, 15125488, 287, 5946288
			},
			.prefetch0 = 20083,
			.prefetch1 = 12925,
			.ram = rte_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2355569500, 375477428, 3453393552, 1316034171, 3309616410, 324891696, 810249802, 2046051050, 1873776239, 2860897493, 4006167705, 3728266336, 2459151575, 985720719, 2999779519, 8127750, 15125482, 8479, 215263374
			},
			.prefetch0 = 14911,
			.prefetch1 = 31740,
			.ram = rte_final_ram_2,
			.ram_len = 18,
		},
		.transactions = rte_transactions_2,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "003 RTE 4e73",
		.initial = {
			.regs = {
				1776270254, 2506574791, 3520125561, 2044760348, 1827112428, 3151224290, 1261826121, 1444301867, 4028976359, 2345205629, 2663873961, 321373566, 3646059625, 637961217, 1292930569, 1119670, 10579048, 9503, 1226088
			},
			.prefetch0 = 20083,
			.prefetch1 = 781,
			.ram = rte_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1776270254, 2506574791, 3520125561, 2044760348, 1827112428, 3151224290, 1261826121, 1444301867, 4028976359, 2345205629, 2663873961, 321373566, 3646059625, 637961217, 1292930569, 1119670, 10579054, 8462, 20397236
			},
			.prefetch0 = 56618,
			.prefetch1 = 7687,
			.ram = rte_final_ram_3,
			.ram_len = 14,
		},
		.transactions = rte_transactions_3,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "004 RTE 4e73",
		.initial = {
			.regs = {
				1373408156, 1346269509, 3073046030, 1770567240, 2660246998, 2468667511, 3984155930, 2865614253, 2474862898, 3643428145, 52266642, 2037738200, 203891332, 103886412, 3191416825, 3122992, 13360558, 8723, 9471042
			},
			.prefetch0 = 20083,
			.prefetch1 = 5246,
			.ram = rte_initial_ram_4,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				1373408156, 1346269509, 3073046030, 1770567240, 2660246998, 2468667511, 3984155930, 2865614253, 2474862898, 3643428145, 52266642, 2037738200, 203891332, 103886412, 3191416825, 3122992, 13360550, 8196, 3344716940
			},
			.prefetch0 = 52455,
			.prefetch1 = 31357,
			.ram = rte_final_ram_4,
			.ram_len = 26,
		},
		.transactions = rte_transactions_4,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "005 RTE 4e73",
		.initial = {
			.regs = {
				1025859902, 4139158414, 1844162193, 1521407929, 2898353352, 47275701, 3086955758, 4067337858, 1151777395, 1151064009, 1186898314, 471332257, 3649652869, 2642482523, 691206194, 10186802, 14870404, 532, 15742976
			},
			.prefetch0 = 20083,
			.prefetch1 = 24696,
			.ram = rte_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1025859902, 4139158414, 1844162193, 1521407929, 2898353352, 47275701, 3086955758, 4067337858, 1151777395, 1151064009, 1186898314, 471332257, 3649652869, 2642482523, 691206194, 10186802, 14870398, 8724, 3593893596
			},
			.prefetch0 = 33718,
			.prefetch1 = 63384,
			.ram = rte_final_ram_5,
			.ram_len = 18,
		},
		.transactions = rte_transactions_5,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "006 RTE 4e73",
		.initial = {
			.regs = {
				803381264, 533969115, 2220509465, 3550597647, 3147236824, 2373269992, 2611957691, 1037033535, 2046628531, 1771067305, 1157879494, 2180371257, 371133245, 1501935335, 2041057294, 11102428, 3831988, 780, 5785158
			},
			.prefetch0 = 20083,
			.prefetch1 = 11946,
			.ram = rte_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				803381264, 533969115, 2220509465, 3550597647, 3147236824, 2373269992, 2611957691, 1037033535, 2046628531, 1771067305, 1157879494, 2180371257, 371133245, 1501935335, 2041057294, 11102428, 3831982, 8972, 3674112998
			},
			.prefetch0 = 13679,
			.prefetch1 = 46722,
			.ram = rte_final_ram_6,
			.ram_len = 18,
		},
		.transactions = rte_transactions_6,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "007 RTE 4e73",
		.initial = {
			.regs = {
				1627165522, 283028902, 4030545582, 2295367971, 1317378055, 390350822, 3754915840, 391563747, 2029428655, 95112315, 1379181108, 1111768571, 710943557, 3800559787, 782376717, 12702368, 5223390, 1297, 11647322
			},
			.prefetch0 = 20083,
			.prefetch1 = 215,
			.ram = rte_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1627165522, 283028902, 4030545582, 2295367971, 1317378055, 390350822, 3754915840, 391563747, 2029428655, 95112315, 1379181108, 1111768571, 710943557, 3800559787, 782376717, 12702368, 5223384, 9489, 841632162
			},
			.prefetch0 = 44857,
			.prefetch1 = 53390,
			.ram = rte_final_ram_7,
			.ram_len = 18,
		},
		.transactions = rte_transactions_7,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "008 RTE 4e73",
		.initial = {
			.regs = {
				3185866649, 654333665, 721205063, 3715632491, 3849534110, 187204015, 2016633686, 3508396928, 1494281680, 3187495985, 3869204965, 872750979, 2457036684, 311201100, 1361799635, 8847436, 14042666, 42497, 9278642
			},
			.prefetch0 = 20083,
			.prefetch1 = 25951,
			.ram = rte_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3185866649, 654333665, 721205063, 3715632491, 3849534110, 187204015, 2016633686, 3508396928, 1494281680, 3187495985, 3869204965, 872750979, 2457036684, 311201100, 1361799635, 8847436, 14042672, 33545, 3559819986
			},
			.prefetch0 = 62841,
			.prefetch1 = 20678,
			.ram = rte_final_ram_8,
			.ram_len = 14,
		},
		.transactions = rte_transactions_8,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "009 RTE 4e73",
		.initial = {
			.regs = {
				1334862006, 4250301182, 1090319296, 4018161806, 2225946303, 1467563318, 588260097, 2811387350, 688672346, 3865486565, 2952965163, 3541106890, 1224845757, 3534623403, 1252152951, 5244974, 16126888, 40963, 1381310
			},
			.prefetch0 = 20083,
			.prefetch1 = 16238,
			.ram = rte_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1334862006, 4250301182, 1090319296, 4018161806, 2225946303, 1467563318, 588260097, 2811387350, 688672346, 3865486565, 2952965163, 3541106890, 1224845757, 3534623403, 1252152951, 5244974, 16126894, 9745, 1941933256
			},
			.prefetch0 = 23947,
			.prefetch1 = 10658,
			.ram = rte_final_ram_9,
			.ram_len = 14,
		},
		.transactions = rte_transactions_9,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "010 RTE 4e73",
		.initial = {
			.regs = {
				2836001109, 3466447134, 163734729, 3086429462, 4273496528, 3732942933, 833158843, 2228022517, 430454862, 3450151664, 3522938161, 2372488341, 2483963838, 1287448512, 1459957695, 4885490, 13547210, 1033, 13494250
			},
			.prefetch0 = 20083,
			.prefetch1 = 32583,
			.ram = rte_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2836001109, 3466447134, 163734729, 3086429462, 4273496528, 3732942933, 833158843, 2228022517, 430454862, 3450151664, 3522938161, 2372488341, 2483963838, 1287448512, 1459957695, 4885490, 13547204, 9225, 156672182
			},
			.prefetch0 = 23803,
			.prefetch1 = 9360,
			.ram = rte_final_ram_10,
			.ram_len = 18,
		},
		.transactions = rte_transactions_10,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "011 RTE 4e73",
		.initial = {
			.regs = {
				719189496, 105368998, 2664286385, 4289147168, 2265453219, 367770280, 3360524305, 2244864898, 2708086321, 3312429945, 3266608359, 3922271106, 4090073269, 1133012838, 307242028, 7134240, 12919506, 9731, 2591350
			},
			.prefetch0 = 20083,
			.prefetch1 = 219,
			.ram = rte_initial_ram_11,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				719189496, 105368998, 2664286385, 4289147168, 2265453219, 367770280, 3360524305, 2244864898, 2708086321, 3312429945, 3266608359, 3922271106, 4090073269, 1133012838, 307242028, 7134240, 12919498, 8479, 876376352
			},
			.prefetch0 = 22228,
			.prefetch1 = 37930,
			.ram = rte_final_ram_11,
			.ram_len = 26,
		},
		.transactions = rte_transactions_11,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "012 RTE 4e73",
		.initial = {
			.regs = {
				1095895555, 1154250302, 2684921217, 223695961, 3235920678, 4146560978, 2739228771, 3508521208, 237014833, 4104132838, 883524356, 2401308344, 3384211677, 2297790584, 582562696, 3971988, 3170804, 40980, 6289142
			},
			.prefetch0 = 20083,
			.prefetch1 = 29683,
			.ram = rte_initial_ram_12,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1095895555, 1154250302, 2684921217, 223695961, 3235920678, 4146560978, 2739228771, 3508521208, 237014833, 4104132838, 883524356, 2401308344, 3384211677, 2297790584, 582562696, 3971988, 3170810, 524, 3927973616
			},
			.prefetch0 = 53865,
			.prefetch1 = 34528,
			.ram = rte_final_ram_12,
			.ram_len = 14,
		},
		.transactions = rte_transactions_12,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "013 RTE 4e73",
		.initial = {
			.regs = {
				3607721443, 299611715, 3320931504, 3511579806, 2450899273, 3570664984, 1451586086, 3208669568, 4008183771, 3926324204, 96355670, 130928414, 1296358308, 1417281528, 2227245925, 11349682, 8629646, 34057, 1470700
			},
			.prefetch0 = 20083,
			.prefetch1 = 52998,
			.ram = rte_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3607721443, 299611715, 3320931504, 3511579806, 2450899273, 3570664984, 1451586086, 3208669568, 4008183771, 3926324204, 96355670, 130928414, 1296358308, 1417281528, 2227245925, 11349682, 8629640, 9481, 334934466
			},
			.prefetch0 = 38199,
			.prefetch1 = 37587,
			.ram = rte_final_ram_13,
			.ram_len = 18,
		},
		.transactions = rte_transactions_13,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "014 RTE 4e73",
		.initial = {
			.regs = {
				3218462874, 3071174343, 1463319490, 231846511, 3861567010, 4133604634, 4189209199, 2297146582, 88658934, 3769454602, 3628761111, 1093637073, 38206720, 1838089842, 4094740918, 15669400, 15912226, 34568, 7574070
			},
			.prefetch0 = 20083,
			.prefetch1 = 11137,
			.ram = rte_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3218462874, 3071174343, 1463319490, 231846511, 3861567010, 4133604634, 4189209199, 2297146582, 88658934, 3769454602, 3628761111, 1093637073, 38206720, 1838089842, 4094740918, 15669400, 15912220, 9992, 490219228
			},
			.prefetch0 = 33051,
			.prefetch1 = 16345,
			.ram = rte_final_ram_14,
			.ram_len = 18,
		},
		.transactions = rte_transactions_14,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "015 RTE 4e73",
		.initial = {
			.regs = {
				3582084834, 3229209495, 1913532483, 2015753619, 440980590, 225083569, 2688986679, 2904318190, 138422680, 1210457645, 2838798661, 1776415615, 919263809, 3721682860, 2221342923, 6457140, 8332064, 40988, 13472862
			},
			.prefetch0 = 20083,
			.prefetch1 = 29670,
			.ram = rte_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3582084834, 3229209495, 1913532483, 2015753619, 440980590, 225083569, 2688986679, 2904318190, 138422680, 1210457645, 2838798661, 1776415615, 919263809, 3721682860, 2221342923, 6457140, 8332070, 41757, 1545360260
			},
			.prefetch0 = 44047,
			.prefetch1 = 56873,
			.ram = rte_final_ram_15,
			.ram_len = 14,
		},
		.transactions = rte_transactions_15,
		.transactions_len = 5,
		.lenght = 20,
	},
};

#endif /* RBT_RTE_H */