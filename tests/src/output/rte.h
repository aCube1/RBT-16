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

static const SST_RamByte rte_initial_ram_16[] = {
		{ .addr = 0x4cbc10, .byte = 0x4e },
		{ .addr = 0x4cbc11, .byte = 0x73 },
		{ .addr = 0x4cbc12, .byte = 0x3c },
		{ .addr = 0x4cbc13, .byte = 0x77 },
		{ .addr = 0x000020, .byte = 0x7f },
		{ .addr = 0x000021, .byte = 0xc2 },
		{ .addr = 0x000022, .byte = 0xa6 },
		{ .addr = 0x000023, .byte = 0x20 },
		{ .addr = 0xc2a620, .byte = 0x10 },
		{ .addr = 0xc2a621, .byte = 0x17 },
		{ .addr = 0xc2a622, .byte = 0xd6 },
		{ .addr = 0xc2a623, .byte = 0x85 }
};

static const SST_RamByte rte_final_ram_16[] = {
		{ .addr = 0x4cbc10, .byte = 0x4e },
		{ .addr = 0x4cbc11, .byte = 0x73 },
		{ .addr = 0x4cbc12, .byte = 0x3c },
		{ .addr = 0x4cbc13, .byte = 0x77 },
		{ .addr = 0x015698, .byte = 0xbc },
		{ .addr = 0x015699, .byte = 0x10 },
		{ .addr = 0x015694, .byte = 0x03 },
		{ .addr = 0x015695, .byte = 0x0a },
		{ .addr = 0x015696, .byte = 0x00 },
		{ .addr = 0x015697, .byte = 0x4c },
		{ .addr = 0x000020, .byte = 0x7f },
		{ .addr = 0x000021, .byte = 0xc2 },
		{ .addr = 0x000022, .byte = 0xa6 },
		{ .addr = 0x000023, .byte = 0x20 },
		{ .addr = 0xc2a620, .byte = 0x10 },
		{ .addr = 0xc2a621, .byte = 0x17 },
		{ .addr = 0xc2a622, .byte = 0xd6 },
		{ .addr = 0xc2a623, .byte = 0x85 }
};

static const SST_Transaction rte_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 87704, .data = 48144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 87700, .data = 778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 87702, .data = 76, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 32706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 42528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12756512, .data = 4119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12756514, .data = 54917, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_17[] = {
		{ .addr = 0x124040, .byte = 0x4e },
		{ .addr = 0x124041, .byte = 0x73 },
		{ .addr = 0x124042, .byte = 0x7e },
		{ .addr = 0x124043, .byte = 0xd8 },
		{ .addr = 0x17dc32, .byte = 0x0f },
		{ .addr = 0x17dc33, .byte = 0x35 },
		{ .addr = 0x17dc34, .byte = 0x80 },
		{ .addr = 0x17dc35, .byte = 0xf9 },
		{ .addr = 0x17dc36, .byte = 0xda },
		{ .addr = 0x17dc37, .byte = 0xab },
		{ .addr = 0x00000c, .byte = 0x05 },
		{ .addr = 0x00000d, .byte = 0x1c },
		{ .addr = 0x00000e, .byte = 0xed },
		{ .addr = 0x00000f, .byte = 0x1c },
		{ .addr = 0x1ced1c, .byte = 0x23 },
		{ .addr = 0x1ced1d, .byte = 0xdd },
		{ .addr = 0x1ced1e, .byte = 0xbd },
		{ .addr = 0x1ced1f, .byte = 0x6d }
};

static const SST_RamByte rte_final_ram_17[] = {
		{ .addr = 0x124040, .byte = 0x4e },
		{ .addr = 0x124041, .byte = 0x73 },
		{ .addr = 0x124042, .byte = 0x7e },
		{ .addr = 0x124043, .byte = 0xd8 },
		{ .addr = 0x17dc32, .byte = 0x07 },
		{ .addr = 0x17dc33, .byte = 0x15 },
		{ .addr = 0x17dc34, .byte = 0x00 },
		{ .addr = 0x17dc35, .byte = 0x12 },
		{ .addr = 0x17dc36, .byte = 0x40 },
		{ .addr = 0x17dc37, .byte = 0x42 },
		{ .addr = 0x17dc30, .byte = 0x4e },
		{ .addr = 0x17dc31, .byte = 0x73 },
		{ .addr = 0x17dc2e, .byte = 0xda },
		{ .addr = 0x17dc2f, .byte = 0xab },
		{ .addr = 0x17dc2a, .byte = 0x4e },
		{ .addr = 0x17dc2b, .byte = 0x72 },
		{ .addr = 0x17dc2c, .byte = 0x80 },
		{ .addr = 0x17dc2d, .byte = 0xf9 },
		{ .addr = 0x00000c, .byte = 0x05 },
		{ .addr = 0x00000d, .byte = 0x1c },
		{ .addr = 0x00000e, .byte = 0xed },
		{ .addr = 0x00000f, .byte = 0x1c },
		{ .addr = 0x1ced1c, .byte = 0x23 },
		{ .addr = 0x1ced1d, .byte = 0xdd },
		{ .addr = 0x1ced1e, .byte = 0xbd },
		{ .addr = 0x1ced1f, .byte = 0x6d }
};

static const SST_Transaction rte_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563698, .data = 3893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563700, .data = 33017, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563702, .data = 55979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16374442, .data = 42164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563702, .data = 16450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563698, .data = 1813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563700, .data = 18, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563696, .data = 20083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563694, .data = 55979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563690, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1563692, .data = 33017, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 1308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1895708, .data = 9181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1895710, .data = 48493, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_18[] = {
		{ .addr = 0xbdbeea, .byte = 0x4e },
		{ .addr = 0xbdbeeb, .byte = 0x73 },
		{ .addr = 0xbdbeec, .byte = 0x3e },
		{ .addr = 0xbdbeed, .byte = 0xc4 },
		{ .addr = 0x000020, .byte = 0x93 },
		{ .addr = 0x000021, .byte = 0xa8 },
		{ .addr = 0x000022, .byte = 0x4f },
		{ .addr = 0x000023, .byte = 0xc2 },
		{ .addr = 0xa84fc2, .byte = 0x0e },
		{ .addr = 0xa84fc3, .byte = 0xc9 },
		{ .addr = 0xa84fc4, .byte = 0x8f },
		{ .addr = 0xa84fc5, .byte = 0x0c }
};

static const SST_RamByte rte_final_ram_18[] = {
		{ .addr = 0xbdbeea, .byte = 0x4e },
		{ .addr = 0xbdbeeb, .byte = 0x73 },
		{ .addr = 0xbdbeec, .byte = 0x3e },
		{ .addr = 0xbdbeed, .byte = 0xc4 },
		{ .addr = 0xbcb51c, .byte = 0xbe },
		{ .addr = 0xbcb51d, .byte = 0xea },
		{ .addr = 0xbcb518, .byte = 0x86 },
		{ .addr = 0xbcb519, .byte = 0x0c },
		{ .addr = 0xbcb51a, .byte = 0x00 },
		{ .addr = 0xbcb51b, .byte = 0xbd },
		{ .addr = 0x000020, .byte = 0x93 },
		{ .addr = 0x000021, .byte = 0xa8 },
		{ .addr = 0x000022, .byte = 0x4f },
		{ .addr = 0x000023, .byte = 0xc2 },
		{ .addr = 0xa84fc2, .byte = 0x0e },
		{ .addr = 0xa84fc3, .byte = 0xc9 },
		{ .addr = 0xa84fc4, .byte = 0x8f },
		{ .addr = 0xa84fc5, .byte = 0x0c }
};

static const SST_Transaction rte_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12367132, .data = 48874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12367128, .data = 34316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12367130, .data = 189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 37800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 20418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11030466, .data = 3785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11030468, .data = 36620, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_19[] = {
		{ .addr = 0x766478, .byte = 0x4e },
		{ .addr = 0x766479, .byte = 0x73 },
		{ .addr = 0x76647a, .byte = 0xcf },
		{ .addr = 0x76647b, .byte = 0x6c },
		{ .addr = 0x000020, .byte = 0x8e },
		{ .addr = 0x000021, .byte = 0xe4 },
		{ .addr = 0x000022, .byte = 0xe7 },
		{ .addr = 0x000023, .byte = 0xd8 },
		{ .addr = 0xe4e7d8, .byte = 0xa2 },
		{ .addr = 0xe4e7d9, .byte = 0x0c },
		{ .addr = 0xe4e7da, .byte = 0x74 },
		{ .addr = 0xe4e7db, .byte = 0x34 }
};

static const SST_RamByte rte_final_ram_19[] = {
		{ .addr = 0x766478, .byte = 0x4e },
		{ .addr = 0x766479, .byte = 0x73 },
		{ .addr = 0x76647a, .byte = 0xcf },
		{ .addr = 0x76647b, .byte = 0x6c },
		{ .addr = 0x497a24, .byte = 0x64 },
		{ .addr = 0x497a25, .byte = 0x78 },
		{ .addr = 0x497a20, .byte = 0x84 },
		{ .addr = 0x497a21, .byte = 0x0a },
		{ .addr = 0x497a22, .byte = 0x00 },
		{ .addr = 0x497a23, .byte = 0x76 },
		{ .addr = 0x000020, .byte = 0x8e },
		{ .addr = 0x000021, .byte = 0xe4 },
		{ .addr = 0x000022, .byte = 0xe7 },
		{ .addr = 0x000023, .byte = 0xd8 },
		{ .addr = 0xe4e7d8, .byte = 0xa2 },
		{ .addr = 0xe4e7d9, .byte = 0x0c },
		{ .addr = 0xe4e7da, .byte = 0x74 },
		{ .addr = 0xe4e7db, .byte = 0x34 }
};

static const SST_Transaction rte_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4815396, .data = 25720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4815392, .data = 33802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4815394, .data = 118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 36580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 59352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15001560, .data = 41484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15001562, .data = 29748, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_20[] = {
		{ .addr = 0x2d850c, .byte = 0x4e },
		{ .addr = 0x2d850d, .byte = 0x73 },
		{ .addr = 0x2d850e, .byte = 0x6c },
		{ .addr = 0x2d850f, .byte = 0xac },
		{ .addr = 0x000020, .byte = 0x98 },
		{ .addr = 0x000021, .byte = 0x8c },
		{ .addr = 0x000022, .byte = 0xa9 },
		{ .addr = 0x000023, .byte = 0x4c },
		{ .addr = 0x8ca94c, .byte = 0xe5 },
		{ .addr = 0x8ca94d, .byte = 0x0f },
		{ .addr = 0x8ca94e, .byte = 0x69 },
		{ .addr = 0x8ca94f, .byte = 0x3d }
};

static const SST_RamByte rte_final_ram_20[] = {
		{ .addr = 0x2d850c, .byte = 0x4e },
		{ .addr = 0x2d850d, .byte = 0x73 },
		{ .addr = 0x2d850e, .byte = 0x6c },
		{ .addr = 0x2d850f, .byte = 0xac },
		{ .addr = 0xc40150, .byte = 0x85 },
		{ .addr = 0xc40151, .byte = 0x0c },
		{ .addr = 0xc4014c, .byte = 0x83 },
		{ .addr = 0xc4014d, .byte = 0x0f },
		{ .addr = 0xc4014e, .byte = 0x00 },
		{ .addr = 0xc4014f, .byte = 0x2d },
		{ .addr = 0x000020, .byte = 0x98 },
		{ .addr = 0x000021, .byte = 0x8c },
		{ .addr = 0x000022, .byte = 0xa9 },
		{ .addr = 0x000023, .byte = 0x4c },
		{ .addr = 0x8ca94c, .byte = 0xe5 },
		{ .addr = 0x8ca94d, .byte = 0x0f },
		{ .addr = 0x8ca94e, .byte = 0x69 },
		{ .addr = 0x8ca94f, .byte = 0x3d }
};

static const SST_Transaction rte_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12845392, .data = 34060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12845388, .data = 33551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12845390, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 39052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 43340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9218380, .data = 58639, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9218382, .data = 26941, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_21[] = {
		{ .addr = 0x6aec06, .byte = 0x4e },
		{ .addr = 0x6aec07, .byte = 0x73 },
		{ .addr = 0x6aec08, .byte = 0x7b },
		{ .addr = 0x6aec09, .byte = 0x06 },
		{ .addr = 0x000020, .byte = 0x2c },
		{ .addr = 0x000021, .byte = 0x2e },
		{ .addr = 0x000022, .byte = 0xe2 },
		{ .addr = 0x000023, .byte = 0x92 },
		{ .addr = 0x2ee292, .byte = 0x06 },
		{ .addr = 0x2ee293, .byte = 0x61 },
		{ .addr = 0x2ee294, .byte = 0x5a },
		{ .addr = 0x2ee295, .byte = 0xd9 }
};

static const SST_RamByte rte_final_ram_21[] = {
		{ .addr = 0x6aec06, .byte = 0x4e },
		{ .addr = 0x6aec07, .byte = 0x73 },
		{ .addr = 0x6aec08, .byte = 0x7b },
		{ .addr = 0x6aec09, .byte = 0x06 },
		{ .addr = 0xee6020, .byte = 0xec },
		{ .addr = 0xee6021, .byte = 0x06 },
		{ .addr = 0xee601c, .byte = 0x03 },
		{ .addr = 0xee601d, .byte = 0x09 },
		{ .addr = 0xee601e, .byte = 0x00 },
		{ .addr = 0xee601f, .byte = 0x6a },
		{ .addr = 0x000020, .byte = 0x2c },
		{ .addr = 0x000021, .byte = 0x2e },
		{ .addr = 0x000022, .byte = 0xe2 },
		{ .addr = 0x000023, .byte = 0x92 },
		{ .addr = 0x2ee292, .byte = 0x06 },
		{ .addr = 0x2ee293, .byte = 0x61 },
		{ .addr = 0x2ee294, .byte = 0x5a },
		{ .addr = 0x2ee295, .byte = 0xd9 }
};

static const SST_Transaction rte_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15622176, .data = 60422, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15622172, .data = 777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15622174, .data = 106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 11310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 58002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3072658, .data = 1633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3072660, .data = 23257, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_22[] = {
		{ .addr = 0x31c060, .byte = 0x4e },
		{ .addr = 0x31c061, .byte = 0x73 },
		{ .addr = 0x31c062, .byte = 0xae },
		{ .addr = 0x31c063, .byte = 0x08 },
		{ .addr = 0x7b43f6, .byte = 0xe4 },
		{ .addr = 0x7b43f7, .byte = 0x88 },
		{ .addr = 0x7b43f8, .byte = 0xba },
		{ .addr = 0x7b43f9, .byte = 0xd8 },
		{ .addr = 0x7b43fa, .byte = 0xac },
		{ .addr = 0x7b43fb, .byte = 0x5d },
		{ .addr = 0x00000c, .byte = 0xd0 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0xdaa49e, .byte = 0x38 },
		{ .addr = 0xdaa49f, .byte = 0x80 },
		{ .addr = 0xdaa4a0, .byte = 0x6a },
		{ .addr = 0xdaa4a1, .byte = 0xf1 }
};

static const SST_RamByte rte_final_ram_22[] = {
		{ .addr = 0x31c060, .byte = 0x4e },
		{ .addr = 0x31c061, .byte = 0x73 },
		{ .addr = 0x31c062, .byte = 0xae },
		{ .addr = 0x31c063, .byte = 0x08 },
		{ .addr = 0x7b43f6, .byte = 0xa4 },
		{ .addr = 0x7b43f7, .byte = 0x08 },
		{ .addr = 0x7b43f8, .byte = 0x00 },
		{ .addr = 0x7b43f9, .byte = 0x31 },
		{ .addr = 0x7b43fa, .byte = 0xc0 },
		{ .addr = 0x7b43fb, .byte = 0x62 },
		{ .addr = 0x7b43f4, .byte = 0x4e },
		{ .addr = 0x7b43f5, .byte = 0x73 },
		{ .addr = 0x7b43f2, .byte = 0xac },
		{ .addr = 0x7b43f3, .byte = 0x5d },
		{ .addr = 0x7b43ee, .byte = 0x4e },
		{ .addr = 0x7b43ef, .byte = 0x76 },
		{ .addr = 0x7b43f0, .byte = 0xba },
		{ .addr = 0x7b43f1, .byte = 0xd8 },
		{ .addr = 0x00000c, .byte = 0xd0 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0xdaa49e, .byte = 0x38 },
		{ .addr = 0xdaa49f, .byte = 0x80 },
		{ .addr = 0xdaa4a0, .byte = 0x6a },
		{ .addr = 0xdaa4a1, .byte = 0xf1 }
};

static const SST_Transaction rte_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078326, .data = 58504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078328, .data = 47832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078330, .data = 44125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14199900, .data = 53802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078330, .data = 49250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078326, .data = 41992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078328, .data = 49, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078324, .data = 20083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078322, .data = 44125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078318, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078320, .data = 47832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53466, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14328990, .data = 14464, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14328992, .data = 27377, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_23[] = {
		{ .addr = 0x0edae8, .byte = 0x4e },
		{ .addr = 0x0edae9, .byte = 0x73 },
		{ .addr = 0x0edaea, .byte = 0xca },
		{ .addr = 0x0edaeb, .byte = 0x42 },
		{ .addr = 0x000020, .byte = 0x3c },
		{ .addr = 0x000021, .byte = 0x0c },
		{ .addr = 0x000022, .byte = 0x56 },
		{ .addr = 0x000023, .byte = 0x6a },
		{ .addr = 0x0c566a, .byte = 0x88 },
		{ .addr = 0x0c566b, .byte = 0x49 },
		{ .addr = 0x0c566c, .byte = 0xb7 },
		{ .addr = 0x0c566d, .byte = 0x38 }
};

static const SST_RamByte rte_final_ram_23[] = {
		{ .addr = 0x0edae8, .byte = 0x4e },
		{ .addr = 0x0edae9, .byte = 0x73 },
		{ .addr = 0x0edaea, .byte = 0xca },
		{ .addr = 0x0edaeb, .byte = 0x42 },
		{ .addr = 0xb298b0, .byte = 0xda },
		{ .addr = 0xb298b1, .byte = 0xe8 },
		{ .addr = 0xb298ac, .byte = 0x03 },
		{ .addr = 0xb298ad, .byte = 0x13 },
		{ .addr = 0xb298ae, .byte = 0x00 },
		{ .addr = 0xb298af, .byte = 0x0e },
		{ .addr = 0x000020, .byte = 0x3c },
		{ .addr = 0x000021, .byte = 0x0c },
		{ .addr = 0x000022, .byte = 0x56 },
		{ .addr = 0x000023, .byte = 0x6a },
		{ .addr = 0x0c566a, .byte = 0x88 },
		{ .addr = 0x0c566b, .byte = 0x49 },
		{ .addr = 0x0c566c, .byte = 0xb7 },
		{ .addr = 0x0c566d, .byte = 0x38 }
};

static const SST_Transaction rte_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11704496, .data = 56040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11704492, .data = 787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11704494, .data = 14, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 15372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 22122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 808554, .data = 34889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 808556, .data = 46904, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_24[] = {
		{ .addr = 0xa5b9a6, .byte = 0x4e },
		{ .addr = 0xa5b9a7, .byte = 0x73 },
		{ .addr = 0xa5b9a8, .byte = 0x03 },
		{ .addr = 0xa5b9a9, .byte = 0xbf },
		{ .addr = 0x000020, .byte = 0x47 },
		{ .addr = 0x000021, .byte = 0xb2 },
		{ .addr = 0x000022, .byte = 0xb1 },
		{ .addr = 0x000023, .byte = 0xd6 },
		{ .addr = 0xb2b1d6, .byte = 0x30 },
		{ .addr = 0xb2b1d7, .byte = 0x3c },
		{ .addr = 0xb2b1d8, .byte = 0x83 },
		{ .addr = 0xb2b1d9, .byte = 0x35 }
};

static const SST_RamByte rte_final_ram_24[] = {
		{ .addr = 0xa5b9a6, .byte = 0x4e },
		{ .addr = 0xa5b9a7, .byte = 0x73 },
		{ .addr = 0xa5b9a8, .byte = 0x03 },
		{ .addr = 0xa5b9a9, .byte = 0xbf },
		{ .addr = 0xa5e81a, .byte = 0xb9 },
		{ .addr = 0xa5e81b, .byte = 0xa6 },
		{ .addr = 0xa5e816, .byte = 0x87 },
		{ .addr = 0xa5e817, .byte = 0x0d },
		{ .addr = 0xa5e818, .byte = 0x00 },
		{ .addr = 0xa5e819, .byte = 0xa5 },
		{ .addr = 0x000020, .byte = 0x47 },
		{ .addr = 0x000021, .byte = 0xb2 },
		{ .addr = 0x000022, .byte = 0xb1 },
		{ .addr = 0x000023, .byte = 0xd6 },
		{ .addr = 0xb2b1d6, .byte = 0x30 },
		{ .addr = 0xb2b1d7, .byte = 0x3c },
		{ .addr = 0xb2b1d8, .byte = 0x83 },
		{ .addr = 0xb2b1d9, .byte = 0x35 }
};

static const SST_Transaction rte_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10872858, .data = 47526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10872854, .data = 34573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10872856, .data = 165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 18354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 45526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11710934, .data = 12348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11710936, .data = 33589, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_25[] = {
		{ .addr = 0x0261f8, .byte = 0x4e },
		{ .addr = 0x0261f9, .byte = 0x73 },
		{ .addr = 0x0261fa, .byte = 0x85 },
		{ .addr = 0x0261fb, .byte = 0xfc },
		{ .addr = 0xac9726, .byte = 0xb1 },
		{ .addr = 0xac9727, .byte = 0xbe },
		{ .addr = 0xac9728, .byte = 0xac },
		{ .addr = 0xac9729, .byte = 0x80 },
		{ .addr = 0xac972a, .byte = 0x6e },
		{ .addr = 0xac972b, .byte = 0xf1 },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x3b },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x7e3b82, .byte = 0x8b },
		{ .addr = 0x7e3b83, .byte = 0xd6 },
		{ .addr = 0x7e3b84, .byte = 0xb3 },
		{ .addr = 0x7e3b85, .byte = 0x1f }
};

static const SST_RamByte rte_final_ram_25[] = {
		{ .addr = 0x0261f8, .byte = 0x4e },
		{ .addr = 0x0261f9, .byte = 0x73 },
		{ .addr = 0x0261fa, .byte = 0x85 },
		{ .addr = 0x0261fb, .byte = 0xfc },
		{ .addr = 0xac9726, .byte = 0xa1 },
		{ .addr = 0xac9727, .byte = 0x1e },
		{ .addr = 0xac9728, .byte = 0x00 },
		{ .addr = 0xac9729, .byte = 0x02 },
		{ .addr = 0xac972a, .byte = 0x61 },
		{ .addr = 0xac972b, .byte = 0xfa },
		{ .addr = 0xac9724, .byte = 0x4e },
		{ .addr = 0xac9725, .byte = 0x73 },
		{ .addr = 0xac9722, .byte = 0x6e },
		{ .addr = 0xac9723, .byte = 0xf1 },
		{ .addr = 0xac971e, .byte = 0x4e },
		{ .addr = 0xac971f, .byte = 0x76 },
		{ .addr = 0xac9720, .byte = 0xac },
		{ .addr = 0xac9721, .byte = 0x80 },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0x7e },
		{ .addr = 0x00000e, .byte = 0x3b },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x7e3b82, .byte = 0x8b },
		{ .addr = 0x7e3b83, .byte = 0xd6 },
		{ .addr = 0x7e3b84, .byte = 0xb3 },
		{ .addr = 0x7e3b85, .byte = 0x1f }
};

static const SST_Transaction rte_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310886, .data = 45502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310888, .data = 44160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310890, .data = 28401, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8417008, .data = 41416, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310890, .data = 25082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310886, .data = 41246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310888, .data = 2, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310884, .data = 20083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310882, .data = 28401, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310878, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11310880, .data = 44160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8272770, .data = 35798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8272772, .data = 45855, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_26[] = {
		{ .addr = 0x709f9e, .byte = 0x4e },
		{ .addr = 0x709f9f, .byte = 0x73 },
		{ .addr = 0x709fa0, .byte = 0xa0 },
		{ .addr = 0x709fa1, .byte = 0xba },
		{ .addr = 0x000020, .byte = 0xe9 },
		{ .addr = 0x000021, .byte = 0xbc },
		{ .addr = 0x000022, .byte = 0x17 },
		{ .addr = 0x000023, .byte = 0xd4 },
		{ .addr = 0xbc17d4, .byte = 0xf4 },
		{ .addr = 0xbc17d5, .byte = 0x4e },
		{ .addr = 0xbc17d6, .byte = 0x44 },
		{ .addr = 0xbc17d7, .byte = 0x70 }
};

static const SST_RamByte rte_final_ram_26[] = {
		{ .addr = 0x709f9e, .byte = 0x4e },
		{ .addr = 0x709f9f, .byte = 0x73 },
		{ .addr = 0x709fa0, .byte = 0xa0 },
		{ .addr = 0x709fa1, .byte = 0xba },
		{ .addr = 0xa19916, .byte = 0x9f },
		{ .addr = 0xa19917, .byte = 0x9e },
		{ .addr = 0xa19912, .byte = 0x05 },
		{ .addr = 0xa19913, .byte = 0x02 },
		{ .addr = 0xa19914, .byte = 0x00 },
		{ .addr = 0xa19915, .byte = 0x70 },
		{ .addr = 0x000020, .byte = 0xe9 },
		{ .addr = 0x000021, .byte = 0xbc },
		{ .addr = 0x000022, .byte = 0x17 },
		{ .addr = 0x000023, .byte = 0xd4 },
		{ .addr = 0xbc17d4, .byte = 0xf4 },
		{ .addr = 0xbc17d5, .byte = 0x4e },
		{ .addr = 0xbc17d6, .byte = 0x44 },
		{ .addr = 0xbc17d7, .byte = 0x70 }
};

static const SST_Transaction rte_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10590486, .data = 40862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10590482, .data = 1282, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10590484, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 59836, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 6100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12326868, .data = 62542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12326870, .data = 17520, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_27[] = {
		{ .addr = 0xdfd3aa, .byte = 0x4e },
		{ .addr = 0xdfd3ab, .byte = 0x73 },
		{ .addr = 0xdfd3ac, .byte = 0x37 },
		{ .addr = 0xdfd3ad, .byte = 0x85 },
		{ .addr = 0x64a5c6, .byte = 0xda },
		{ .addr = 0x64a5c7, .byte = 0xca },
		{ .addr = 0x64a5c8, .byte = 0xd4 },
		{ .addr = 0x64a5c9, .byte = 0xe8 },
		{ .addr = 0x64a5ca, .byte = 0x55 },
		{ .addr = 0x64a5cb, .byte = 0xce },
		{ .addr = 0xe855ce, .byte = 0x9f },
		{ .addr = 0xe855cf, .byte = 0x96 },
		{ .addr = 0xe855d0, .byte = 0x35 },
		{ .addr = 0xe855d1, .byte = 0x76 }
};

static const SST_RamByte rte_final_ram_27[] = {
		{ .addr = 0xdfd3aa, .byte = 0x4e },
		{ .addr = 0xdfd3ab, .byte = 0x73 },
		{ .addr = 0xdfd3ac, .byte = 0x37 },
		{ .addr = 0xdfd3ad, .byte = 0x85 },
		{ .addr = 0x64a5c6, .byte = 0xda },
		{ .addr = 0x64a5c7, .byte = 0xca },
		{ .addr = 0x64a5c8, .byte = 0xd4 },
		{ .addr = 0x64a5c9, .byte = 0xe8 },
		{ .addr = 0x64a5ca, .byte = 0x55 },
		{ .addr = 0x64a5cb, .byte = 0xce },
		{ .addr = 0xe855ce, .byte = 0x9f },
		{ .addr = 0xe855cf, .byte = 0x96 },
		{ .addr = 0xe855d0, .byte = 0x35 },
		{ .addr = 0xe855d1, .byte = 0x76 }
};

static const SST_Transaction rte_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6596038, .data = 56010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6596040, .data = 54504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6596042, .data = 21966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15226318, .data = 40854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15226320, .data = 13686, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_28[] = {
		{ .addr = 0xfadf8c, .byte = 0x4e },
		{ .addr = 0xfadf8d, .byte = 0x73 },
		{ .addr = 0xfadf8e, .byte = 0x9a },
		{ .addr = 0xfadf8f, .byte = 0x42 },
		{ .addr = 0x98013e, .byte = 0x3c },
		{ .addr = 0x98013f, .byte = 0x77 },
		{ .addr = 0x980140, .byte = 0x90 },
		{ .addr = 0x980141, .byte = 0x77 },
		{ .addr = 0x980142, .byte = 0xeb },
		{ .addr = 0x980143, .byte = 0xd8 },
		{ .addr = 0x77ebd8, .byte = 0xde },
		{ .addr = 0x77ebd9, .byte = 0xcf },
		{ .addr = 0x77ebda, .byte = 0x98 },
		{ .addr = 0x77ebdb, .byte = 0x57 }
};

static const SST_RamByte rte_final_ram_28[] = {
		{ .addr = 0xfadf8c, .byte = 0x4e },
		{ .addr = 0xfadf8d, .byte = 0x73 },
		{ .addr = 0xfadf8e, .byte = 0x9a },
		{ .addr = 0xfadf8f, .byte = 0x42 },
		{ .addr = 0x98013e, .byte = 0x3c },
		{ .addr = 0x98013f, .byte = 0x77 },
		{ .addr = 0x980140, .byte = 0x90 },
		{ .addr = 0x980141, .byte = 0x77 },
		{ .addr = 0x980142, .byte = 0xeb },
		{ .addr = 0x980143, .byte = 0xd8 },
		{ .addr = 0x77ebd8, .byte = 0xde },
		{ .addr = 0x77ebd9, .byte = 0xcf },
		{ .addr = 0x77ebda, .byte = 0x98 },
		{ .addr = 0x77ebdb, .byte = 0x57 }
};

static const SST_Transaction rte_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9961790, .data = 15479, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9961792, .data = 36983, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9961794, .data = 60376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7859160, .data = 57039, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7859162, .data = 38999, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_29[] = {
		{ .addr = 0x678aaa, .byte = 0x4e },
		{ .addr = 0x678aab, .byte = 0x73 },
		{ .addr = 0x678aac, .byte = 0x39 },
		{ .addr = 0x678aad, .byte = 0xbc },
		{ .addr = 0xc75faa, .byte = 0x8d },
		{ .addr = 0xc75fab, .byte = 0x2b },
		{ .addr = 0xc75fac, .byte = 0x96 },
		{ .addr = 0xc75fad, .byte = 0x41 },
		{ .addr = 0xc75fae, .byte = 0xfd },
		{ .addr = 0xc75faf, .byte = 0x4a },
		{ .addr = 0x41fd4a, .byte = 0x83 },
		{ .addr = 0x41fd4b, .byte = 0xba },
		{ .addr = 0x41fd4c, .byte = 0xad },
		{ .addr = 0x41fd4d, .byte = 0xe5 }
};

static const SST_RamByte rte_final_ram_29[] = {
		{ .addr = 0x678aaa, .byte = 0x4e },
		{ .addr = 0x678aab, .byte = 0x73 },
		{ .addr = 0x678aac, .byte = 0x39 },
		{ .addr = 0x678aad, .byte = 0xbc },
		{ .addr = 0xc75faa, .byte = 0x8d },
		{ .addr = 0xc75fab, .byte = 0x2b },
		{ .addr = 0xc75fac, .byte = 0x96 },
		{ .addr = 0xc75fad, .byte = 0x41 },
		{ .addr = 0xc75fae, .byte = 0xfd },
		{ .addr = 0xc75faf, .byte = 0x4a },
		{ .addr = 0x41fd4a, .byte = 0x83 },
		{ .addr = 0x41fd4b, .byte = 0xba },
		{ .addr = 0x41fd4c, .byte = 0xad },
		{ .addr = 0x41fd4d, .byte = 0xe5 }
};

static const SST_Transaction rte_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13066154, .data = 36139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13066156, .data = 38465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13066158, .data = 64842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4324682, .data = 33722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4324684, .data = 44517, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_30[] = {
		{ .addr = 0x640a58, .byte = 0x4e },
		{ .addr = 0x640a59, .byte = 0x73 },
		{ .addr = 0x640a5a, .byte = 0x35 },
		{ .addr = 0x640a5b, .byte = 0x0c },
		{ .addr = 0x000020, .byte = 0x93 },
		{ .addr = 0x000021, .byte = 0x9c },
		{ .addr = 0x000022, .byte = 0xc5 },
		{ .addr = 0x000023, .byte = 0x14 },
		{ .addr = 0x9cc514, .byte = 0xc6 },
		{ .addr = 0x9cc515, .byte = 0x0a },
		{ .addr = 0x9cc516, .byte = 0xcd },
		{ .addr = 0x9cc517, .byte = 0x6d }
};

static const SST_RamByte rte_final_ram_30[] = {
		{ .addr = 0x640a58, .byte = 0x4e },
		{ .addr = 0x640a59, .byte = 0x73 },
		{ .addr = 0x640a5a, .byte = 0x35 },
		{ .addr = 0x640a5b, .byte = 0x0c },
		{ .addr = 0xfc555e, .byte = 0x0a },
		{ .addr = 0xfc555f, .byte = 0x58 },
		{ .addr = 0xfc555a, .byte = 0x86 },
		{ .addr = 0xfc555b, .byte = 0x1c },
		{ .addr = 0xfc555c, .byte = 0x00 },
		{ .addr = 0xfc555d, .byte = 0x64 },
		{ .addr = 0x000020, .byte = 0x93 },
		{ .addr = 0x000021, .byte = 0x9c },
		{ .addr = 0x000022, .byte = 0xc5 },
		{ .addr = 0x000023, .byte = 0x14 },
		{ .addr = 0x9cc514, .byte = 0xc6 },
		{ .addr = 0x9cc515, .byte = 0x0a },
		{ .addr = 0x9cc516, .byte = 0xcd },
		{ .addr = 0x9cc517, .byte = 0x6d }
};

static const SST_Transaction rte_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16536926, .data = 2648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16536922, .data = 34332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16536924, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 37788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 50452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10274068, .data = 50698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10274070, .data = 52589, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rte_initial_ram_31[] = {
		{ .addr = 0xb48882, .byte = 0x4e },
		{ .addr = 0xb48883, .byte = 0x73 },
		{ .addr = 0xb48884, .byte = 0xed },
		{ .addr = 0xb48885, .byte = 0xae },
		{ .addr = 0x4422b6, .byte = 0x3c },
		{ .addr = 0x4422b7, .byte = 0x76 },
		{ .addr = 0x4422b8, .byte = 0x8a },
		{ .addr = 0x4422b9, .byte = 0x82 },
		{ .addr = 0x4422ba, .byte = 0xcc },
		{ .addr = 0x4422bb, .byte = 0xf4 },
		{ .addr = 0x82ccf4, .byte = 0x88 },
		{ .addr = 0x82ccf5, .byte = 0x9b },
		{ .addr = 0x82ccf6, .byte = 0x0c },
		{ .addr = 0x82ccf7, .byte = 0xb5 }
};

static const SST_RamByte rte_final_ram_31[] = {
		{ .addr = 0xb48882, .byte = 0x4e },
		{ .addr = 0xb48883, .byte = 0x73 },
		{ .addr = 0xb48884, .byte = 0xed },
		{ .addr = 0xb48885, .byte = 0xae },
		{ .addr = 0x4422b6, .byte = 0x3c },
		{ .addr = 0x4422b7, .byte = 0x76 },
		{ .addr = 0x4422b8, .byte = 0x8a },
		{ .addr = 0x4422b9, .byte = 0x82 },
		{ .addr = 0x4422ba, .byte = 0xcc },
		{ .addr = 0x4422bb, .byte = 0xf4 },
		{ .addr = 0x82ccf4, .byte = 0x88 },
		{ .addr = 0x82ccf5, .byte = 0x9b },
		{ .addr = 0x82ccf6, .byte = 0x0c },
		{ .addr = 0x82ccf7, .byte = 0xb5 }
};

static const SST_Transaction rte_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4465334, .data = 15478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4465336, .data = 35458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4465338, .data = 52468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8572148, .data = 34971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8572150, .data = 3253, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 RTE 4e73",
		.initial = {
			.regs = {
				1749916274, 3193086415, 2441419826, 3126170306, 1737763555, 3637906511, 2317963575, 2100187646, 59653364, 3397796402, 121652410, 65914348, 2063233414, 2185649447, 1998827698, 12967560, 87706, 778, 5028884
			},
			.prefetch0 = 20083,
			.prefetch1 = 15479,
			.ram = rte_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1749916274, 3193086415, 2441419826, 3126170306, 1737763555, 3637906511, 2317963575, 2100187646, 59653364, 3397796402, 121652410, 65914348, 2063233414, 2185649447, 1998827698, 12967560, 87700, 8970, 2143462948
			},
			.prefetch0 = 4119,
			.prefetch1 = 54917,
			.ram = rte_final_ram_16,
			.ram_len = 18,
		},
		.transactions = rte_transactions_16,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "017 RTE 4e73",
		.initial = {
			.regs = {
				920604786, 631683183, 3813920752, 3068521935, 954297799, 1354962942, 1118705415, 835519543, 2043394923, 4160825562, 172187582, 247818383, 340164846, 3234695725, 2335072886, 14242952, 1563698, 8964, 1196100
			},
			.prefetch0 = 20083,
			.prefetch1 = 32472,
			.ram = rte_initial_ram_17,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				920604786, 631683183, 3813920752, 3068521935, 954297799, 1354962942, 1118705415, 835519543, 2043394923, 4160825562, 172187582, 247818383, 340164846, 3234695725, 2335072886, 14242952, 1563690, 10005, 85781792
			},
			.prefetch0 = 9181,
			.prefetch1 = 48493,
			.ram = rte_final_ram_17,
			.ram_len = 26,
		},
		.transactions = rte_transactions_17,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "018 RTE 4e73",
		.initial = {
			.regs = {
				2954000818, 2011095519, 1156784565, 2706659014, 2964779527, 991488716, 1695983802, 556944550, 2807360159, 1220661755, 338604188, 2097793178, 2332422239, 1546656046, 1472827988, 13417824, 12367134, 34316, 12435182
			},
			.prefetch0 = 20083,
			.prefetch1 = 16068,
			.ram = rte_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2954000818, 2011095519, 1156784565, 2706659014, 2964779527, 991488716, 1695983802, 556944550, 2807360159, 1220661755, 338604188, 2097793178, 2332422239, 1546656046, 1472827988, 13417824, 12367128, 9740, 2477281222
			},
			.prefetch0 = 3785,
			.prefetch1 = 36620,
			.ram = rte_final_ram_18,
			.ram_len = 18,
		},
		.transactions = rte_transactions_18,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "019 RTE 4e73",
		.initial = {
			.regs = {
				411217050, 2155467223, 3804389961, 1327998358, 332829269, 3343500554, 2622767043, 3539646401, 3524279598, 743162233, 2504017412, 2917321203, 2117412594, 245738620, 3609395732, 13238166, 4815398, 33802, 7758972
			},
			.prefetch0 = 20083,
			.prefetch1 = 53100,
			.ram = rte_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				411217050, 2155467223, 3804389961, 1327998358, 332829269, 3343500554, 2622767043, 3539646401, 3524279598, 743162233, 2504017412, 2917321203, 2117412594, 245738620, 3609395732, 13238166, 4815392, 9226, 2397366236
			},
			.prefetch0 = 41484,
			.prefetch1 = 29748,
			.ram = rte_final_ram_19,
			.ram_len = 18,
		},
		.transactions = rte_transactions_19,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "020 RTE 4e73",
		.initial = {
			.regs = {
				3662579906, 843460132, 1745504194, 690436681, 266226929, 1864439894, 184387375, 3819604651, 2999383838, 3397967961, 584848235, 4195135015, 2600280252, 3572317616, 675085414, 15275060, 12845394, 33551, 2983184
			},
			.prefetch0 = 20083,
			.prefetch1 = 27820,
			.ram = rte_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3662579906, 843460132, 1745504194, 690436681, 266226929, 1864439894, 184387375, 3819604651, 2999383838, 3397967961, 584848235, 4195135015, 2600280252, 3572317616, 675085414, 15275060, 12845388, 8975, 2559355216
			},
			.prefetch0 = 58639,
			.prefetch1 = 26941,
			.ram = rte_final_ram_20,
			.ram_len = 18,
		},
		.transactions = rte_transactions_20,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "021 RTE 4e73",
		.initial = {
			.regs = {
				253567720, 397202639, 2476265114, 16640670, 2040161146, 576002680, 408194074, 2049522422, 865421258, 972094014, 4206947249, 4146432947, 3450388051, 1801271648, 359130323, 7076202, 15622178, 777, 7007242
			},
			.prefetch0 = 20083,
			.prefetch1 = 31494,
			.ram = rte_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				253567720, 397202639, 2476265114, 16640670, 2040161146, 576002680, 408194074, 2049522422, 865421258, 972094014, 4206947249, 4146432947, 3450388051, 1801271648, 359130323, 7076202, 15622172, 8969, 741270166
			},
			.prefetch0 = 1633,
			.prefetch1 = 23257,
			.ram = rte_final_ram_21,
			.ram_len = 18,
		},
		.transactions = rte_transactions_21,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "022 RTE 4e73",
		.initial = {
			.regs = {
				4214573557, 1725948552, 2203170665, 617226989, 2189050818, 2304374532, 351517682, 3724689545, 3637005675, 3855142680, 960509734, 2704798802, 966566285, 3562556523, 780931050, 8923940, 8078326, 9986, 3260516
			},
			.prefetch0 = 20083,
			.prefetch1 = 44552,
			.ram = rte_initial_ram_22,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				4214573557, 1725948552, 2203170665, 617226989, 2189050818, 2304374532, 351517682, 3724689545, 3637005675, 3855142680, 960509734, 2704798802, 966566285, 3562556523, 780931050, 8923940, 8078318, 9224, 3503989922
			},
			.prefetch0 = 14464,
			.prefetch1 = 27377,
			.ram = rte_final_ram_22,
			.ram_len = 26,
		},
		.transactions = rte_transactions_22,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "023 RTE 4e73",
		.initial = {
			.regs = {
				337407224, 2909497860, 714120002, 3669097369, 122515809, 2756579090, 2074986556, 1053509564, 1328719517, 1232706703, 3720576174, 4092115694, 397371144, 3839752161, 3727259066, 2120582, 11704498, 787, 973548
			},
			.prefetch0 = 20083,
			.prefetch1 = 51778,
			.ram = rte_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				337407224, 2909497860, 714120002, 3669097369, 122515809, 2756579090, 2074986556, 1053509564, 1328719517, 1232706703, 3720576174, 4092115694, 397371144, 3839752161, 3727259066, 2120582, 11704492, 8979, 1007441518
			},
			.prefetch0 = 34889,
			.prefetch1 = 46904,
			.ram = rte_final_ram_23,
			.ram_len = 18,
		},
		.transactions = rte_transactions_23,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "024 RTE 4e73",
		.initial = {
			.regs = {
				389372501, 2328699888, 1158192975, 3342523638, 3598593550, 2393912056, 902184162, 4268947789, 3401411145, 3056584095, 3113141931, 2666805058, 258185889, 799802223, 1169411270, 11840112, 10872860, 34573, 10860970
			},
			.prefetch0 = 20083,
			.prefetch1 = 959,
			.ram = rte_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				389372501, 2328699888, 1158192975, 3342523638, 3598593550, 2393912056, 902184162, 4268947789, 3401411145, 3056584095, 3113141931, 2666805058, 258185889, 799802223, 1169411270, 11840112, 10872854, 9997, 1202893274
			},
			.prefetch0 = 12348,
			.prefetch1 = 33589,
			.ram = rte_final_ram_24,
			.ram_len = 18,
		},
		.transactions = rte_transactions_24,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "025 RTE 4e73",
		.initial = {
			.regs = {
				740837569, 3783550061, 681177339, 4019466917, 4084727085, 3055710032, 3413724937, 2522402524, 3187873110, 1142498581, 3948734124, 2624120403, 832088692, 3959969024, 3127820487, 2126222, 11310886, 42768, 156156
			},
			.prefetch0 = 20083,
			.prefetch1 = 34300,
			.ram = rte_initial_ram_25,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				740837569, 3783550061, 681177339, 4019466917, 4084727085, 3055710032, 3413724937, 2522402524, 3187873110, 1142498581, 3948734124, 2624120403, 832088692, 3959969024, 3127820487, 2126222, 11310878, 8478, 2172533638
			},
			.prefetch0 = 35798,
			.prefetch1 = 45855,
			.ram = rte_final_ram_25,
			.ram_len = 26,
		},
		.transactions = rte_transactions_25,
		.transactions_len = 17,
		.lenght = 70,
	},
	{
		.name = "026 RTE 4e73",
		.initial = {
			.regs = {
				986696713, 1608972185, 3723386909, 4229907182, 3180194427, 1238797819, 1657157188, 192427306, 400064799, 2089350088, 1221007938, 2698455523, 2113896308, 1503649517, 4135708910, 5227162, 10590488, 1282, 7380898
			},
			.prefetch0 = 20083,
			.prefetch1 = 41146,
			.ram = rte_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				986696713, 1608972185, 3723386909, 4229907182, 3180194427, 1238797819, 1657157188, 192427306, 400064799, 2089350088, 1221007938, 2698455523, 2113896308, 1503649517, 4135708910, 5227162, 10590482, 9474, 3921418200
			},
			.prefetch0 = 62542,
			.prefetch1 = 17520,
			.ram = rte_final_ram_26,
			.ram_len = 18,
		},
		.transactions = rte_transactions_26,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "027 RTE 4e73",
		.initial = {
			.regs = {
				2657993482, 3125690378, 1492858059, 113763751, 2762890350, 4255561099, 3853951509, 1583965736, 16241097, 3754866048, 2271632659, 3870111490, 1284434973, 3216186560, 3898176409, 1167806, 6596038, 42251, 14668718
			},
			.prefetch0 = 20083,
			.prefetch1 = 14213,
			.ram = rte_initial_ram_27,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2657993482, 3125690378, 1492858059, 113763751, 2762890350, 4255561099, 3853951509, 1583965736, 16241097, 3754866048, 2271632659, 3870111490, 1284434973, 3216186560, 3898176409, 1167806, 6596044, 33290, 3571996114
			},
			.prefetch0 = 40854,
			.prefetch1 = 13686,
			.ram = rte_final_ram_27,
			.ram_len = 14,
		},
		.transactions = rte_transactions_27,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "028 RTE 4e73",
		.initial = {
			.regs = {
				2595795133, 1953051894, 3108929070, 1082642253, 3898111819, 1461656174, 3071174008, 2243877722, 1849385757, 2366289689, 3264849478, 2937118384, 135827415, 454370921, 1577412165, 1128530, 9961790, 8991, 16441232
			},
			.prefetch0 = 20083,
			.prefetch1 = 39490,
			.ram = rte_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2595795133, 1953051894, 3108929070, 1082642253, 3898111819, 1461656174, 3071174008, 2243877722, 1849385757, 2366289689, 3264849478, 2937118384, 135827415, 454370921, 1577412165, 1128530, 9961796, 9239, 2423778268
			},
			.prefetch0 = 57039,
			.prefetch1 = 38999,
			.ram = rte_final_ram_28,
			.ram_len = 14,
		},
		.transactions = rte_transactions_28,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "029 RTE 4e73",
		.initial = {
			.regs = {
				2592676974, 4050611293, 3033066439, 1951532479, 647513755, 1668398148, 735223447, 1231573468, 2001487184, 64102005, 1791972918, 2030004960, 1525713713, 440332498, 3564034983, 7464450, 13066154, 8466, 6785710
			},
			.prefetch0 = 20083,
			.prefetch1 = 14780,
			.ram = rte_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2592676974, 4050611293, 3033066439, 1951532479, 647513755, 1668398148, 735223447, 1231573468, 2001487184, 64102005, 1791972918, 2030004960, 1525713713, 440332498, 3564034983, 7464450, 13066160, 34059, 2520907086
			},
			.prefetch0 = 33722,
			.prefetch1 = 44517,
			.ram = rte_final_ram_29,
			.ram_len = 14,
		},
		.transactions = rte_transactions_29,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "030 RTE 4e73",
		.initial = {
			.regs = {
				2677034703, 1392406341, 1875505028, 2149935347, 497790085, 3388862881, 499309923, 1041629969, 2650321792, 2776452088, 801010007, 4155723923, 3398864518, 2388874391, 1603270479, 10433690, 16536928, 34332, 6556252
			},
			.prefetch0 = 20083,
			.prefetch1 = 13580,
			.ram = rte_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2677034703, 1392406341, 1875505028, 2149935347, 497790085, 3388862881, 499309923, 1041629969, 2650321792, 2776452088, 801010007, 4155723923, 3398864518, 2388874391, 1603270479, 10433690, 16536922, 9756, 2476524824
			},
			.prefetch0 = 50698,
			.prefetch1 = 52589,
			.ram = rte_final_ram_30,
			.ram_len = 18,
		},
		.transactions = rte_transactions_30,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "031 RTE 4e73",
		.initial = {
			.regs = {
				716428002, 20326946, 321174695, 4146984797, 634718632, 1016545409, 4156775089, 1257271631, 1112510292, 482230864, 577505740, 3071355584, 1161118138, 1866888309, 3035124143, 12911192, 4465334, 42015, 11831430
			},
			.prefetch0 = 20083,
			.prefetch1 = 60846,
			.ram = rte_initial_ram_31,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				716428002, 20326946, 321174695, 4146984797, 634718632, 1016545409, 4156775089, 1257271631, 1112510292, 482230864, 577505740, 3071355584, 1161118138, 1866888309, 3035124143, 12911192, 4465340, 9238, 2323827960
			},
			.prefetch0 = 34971,
			.prefetch1 = 3253,
			.ram = rte_final_ram_31,
			.ram_len = 14,
		},
		.transactions = rte_transactions_31,
		.transactions_len = 5,
		.lenght = 20,
	},
};

#endif /* RBT_RTE_H */