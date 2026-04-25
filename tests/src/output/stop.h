#ifndef RBT_STOP_H
#define RBT_STOP_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte stop_initial_ram_0[] = {
		{ .addr = 0xec2718, .byte = 0x4e },
		{ .addr = 0xec2719, .byte = 0x72 },
		{ .addr = 0xec271a, .byte = 0x40 },
		{ .addr = 0xec271b, .byte = 0xdd },
		{ .addr = 0x000020, .byte = 0xf6 },
		{ .addr = 0x000021, .byte = 0x70 },
		{ .addr = 0x000022, .byte = 0xb0 },
		{ .addr = 0x000023, .byte = 0x8e },
		{ .addr = 0x70b08e, .byte = 0x71 },
		{ .addr = 0x70b08f, .byte = 0xc6 },
		{ .addr = 0x70b090, .byte = 0x6a },
		{ .addr = 0x70b091, .byte = 0xff }
};

static const SST_RamByte stop_final_ram_0[] = {
		{ .addr = 0xec2718, .byte = 0x4e },
		{ .addr = 0xec2719, .byte = 0x72 },
		{ .addr = 0xec271a, .byte = 0x40 },
		{ .addr = 0xec271b, .byte = 0xdd },
		{ .addr = 0x35063a, .byte = 0x27 },
		{ .addr = 0x35063b, .byte = 0x18 },
		{ .addr = 0x350636, .byte = 0x86 },
		{ .addr = 0x350637, .byte = 0x1a },
		{ .addr = 0x350638, .byte = 0x00 },
		{ .addr = 0x350639, .byte = 0xec },
		{ .addr = 0x000020, .byte = 0xf6 },
		{ .addr = 0x000021, .byte = 0x70 },
		{ .addr = 0x000022, .byte = 0xb0 },
		{ .addr = 0x000023, .byte = 0x8e },
		{ .addr = 0x70b08e, .byte = 0x71 },
		{ .addr = 0x70b08f, .byte = 0xc6 },
		{ .addr = 0x70b090, .byte = 0x6a },
		{ .addr = 0x70b091, .byte = 0xff }
};

static const SST_Transaction stop_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3475002, .data = 10008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3474998, .data = 34330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3475000, .data = 236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 63088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 45198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7385230, .data = 29126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7385232, .data = 27391, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_1[] = {
		{ .addr = 0xaddb5e, .byte = 0x4e },
		{ .addr = 0xaddb5f, .byte = 0x72 },
		{ .addr = 0xaddb60, .byte = 0x12 },
		{ .addr = 0xaddb61, .byte = 0x25 }
};

static const SST_RamByte stop_final_ram_1[] = {
		{ .addr = 0xaddb5e, .byte = 0x4e },
		{ .addr = 0xaddb5f, .byte = 0x72 },
		{ .addr = 0xaddb60, .byte = 0x12 },
		{ .addr = 0xaddb61, .byte = 0x25 }
};

static const SST_Transaction stop_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_2[] = {
		{ .addr = 0x4cb0da, .byte = 0x4e },
		{ .addr = 0x4cb0db, .byte = 0x72 },
		{ .addr = 0x4cb0dc, .byte = 0x52 },
		{ .addr = 0x4cb0dd, .byte = 0xf2 },
		{ .addr = 0x000020, .byte = 0x9a },
		{ .addr = 0x000021, .byte = 0xa8 },
		{ .addr = 0x000022, .byte = 0x6f },
		{ .addr = 0x000023, .byte = 0x20 },
		{ .addr = 0xa86f20, .byte = 0x93 },
		{ .addr = 0xa86f21, .byte = 0x48 },
		{ .addr = 0xa86f22, .byte = 0x5d },
		{ .addr = 0xa86f23, .byte = 0x60 }
};

static const SST_RamByte stop_final_ram_2[] = {
		{ .addr = 0x4cb0da, .byte = 0x4e },
		{ .addr = 0x4cb0db, .byte = 0x72 },
		{ .addr = 0x4cb0dc, .byte = 0x52 },
		{ .addr = 0x4cb0dd, .byte = 0xf2 },
		{ .addr = 0xc6c7e4, .byte = 0xb0 },
		{ .addr = 0xc6c7e5, .byte = 0xda },
		{ .addr = 0xc6c7e0, .byte = 0x04 },
		{ .addr = 0xc6c7e1, .byte = 0x13 },
		{ .addr = 0xc6c7e2, .byte = 0x00 },
		{ .addr = 0xc6c7e3, .byte = 0x4c },
		{ .addr = 0x000020, .byte = 0x9a },
		{ .addr = 0x000021, .byte = 0xa8 },
		{ .addr = 0x000022, .byte = 0x6f },
		{ .addr = 0x000023, .byte = 0x20 },
		{ .addr = 0xa86f20, .byte = 0x93 },
		{ .addr = 0xa86f21, .byte = 0x48 },
		{ .addr = 0xa86f22, .byte = 0x5d },
		{ .addr = 0xa86f23, .byte = 0x60 }
};

static const SST_Transaction stop_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13027300, .data = 45274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13027296, .data = 1043, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13027298, .data = 76, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 39592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 28448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11038496, .data = 37704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11038498, .data = 23904, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_3[] = {
		{ .addr = 0xacab3a, .byte = 0x4e },
		{ .addr = 0xacab3b, .byte = 0x72 },
		{ .addr = 0xacab3c, .byte = 0xc3 },
		{ .addr = 0xacab3d, .byte = 0x98 },
		{ .addr = 0x000020, .byte = 0x40 },
		{ .addr = 0x000021, .byte = 0x46 },
		{ .addr = 0x000022, .byte = 0x0b },
		{ .addr = 0x000023, .byte = 0x18 },
		{ .addr = 0x460b18, .byte = 0xff },
		{ .addr = 0x460b19, .byte = 0x3b },
		{ .addr = 0x460b1a, .byte = 0xe6 },
		{ .addr = 0x460b1b, .byte = 0x24 }
};

static const SST_RamByte stop_final_ram_3[] = {
		{ .addr = 0xacab3a, .byte = 0x4e },
		{ .addr = 0xacab3b, .byte = 0x72 },
		{ .addr = 0xacab3c, .byte = 0xc3 },
		{ .addr = 0xacab3d, .byte = 0x98 },
		{ .addr = 0xaab756, .byte = 0xab },
		{ .addr = 0xaab757, .byte = 0x3a },
		{ .addr = 0xaab752, .byte = 0x03 },
		{ .addr = 0xaab753, .byte = 0x0a },
		{ .addr = 0xaab754, .byte = 0x00 },
		{ .addr = 0xaab755, .byte = 0xac },
		{ .addr = 0x000020, .byte = 0x40 },
		{ .addr = 0x000021, .byte = 0x46 },
		{ .addr = 0x000022, .byte = 0x0b },
		{ .addr = 0x000023, .byte = 0x18 },
		{ .addr = 0x460b18, .byte = 0xff },
		{ .addr = 0x460b19, .byte = 0x3b },
		{ .addr = 0x460b1a, .byte = 0xe6 },
		{ .addr = 0x460b1b, .byte = 0x24 }
};

static const SST_Transaction stop_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188054, .data = 43834, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188050, .data = 778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188052, .data = 172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 16454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 2840, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4590360, .data = 65339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4590362, .data = 58916, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_4[] = {
		{ .addr = 0x219404, .byte = 0x4e },
		{ .addr = 0x219405, .byte = 0x72 },
		{ .addr = 0x219406, .byte = 0x9b },
		{ .addr = 0x219407, .byte = 0xf7 }
};

static const SST_RamByte stop_final_ram_4[] = {
		{ .addr = 0x219404, .byte = 0x4e },
		{ .addr = 0x219405, .byte = 0x72 },
		{ .addr = 0x219406, .byte = 0x9b },
		{ .addr = 0x219407, .byte = 0xf7 }
};

static const SST_Transaction stop_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_5[] = {
		{ .addr = 0xe3ebba, .byte = 0x4e },
		{ .addr = 0xe3ebbb, .byte = 0x72 },
		{ .addr = 0xe3ebbc, .byte = 0x5a },
		{ .addr = 0xe3ebbd, .byte = 0x47 }
};

static const SST_RamByte stop_final_ram_5[] = {
		{ .addr = 0xe3ebba, .byte = 0x4e },
		{ .addr = 0xe3ebbb, .byte = 0x72 },
		{ .addr = 0xe3ebbc, .byte = 0x5a },
		{ .addr = 0xe3ebbd, .byte = 0x47 }
};

static const SST_Transaction stop_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_6[] = {
		{ .addr = 0x78e0c2, .byte = 0x4e },
		{ .addr = 0x78e0c3, .byte = 0x72 },
		{ .addr = 0x78e0c4, .byte = 0x1d },
		{ .addr = 0x78e0c5, .byte = 0x37 },
		{ .addr = 0x000020, .byte = 0xd1 },
		{ .addr = 0x000021, .byte = 0x42 },
		{ .addr = 0x000022, .byte = 0xbc },
		{ .addr = 0x000023, .byte = 0x16 },
		{ .addr = 0x42bc16, .byte = 0x12 },
		{ .addr = 0x42bc17, .byte = 0xf6 },
		{ .addr = 0x42bc18, .byte = 0x13 },
		{ .addr = 0x42bc19, .byte = 0x52 }
};

static const SST_RamByte stop_final_ram_6[] = {
		{ .addr = 0x78e0c2, .byte = 0x4e },
		{ .addr = 0x78e0c3, .byte = 0x72 },
		{ .addr = 0x78e0c4, .byte = 0x1d },
		{ .addr = 0x78e0c5, .byte = 0x37 },
		{ .addr = 0x5910c2, .byte = 0xe0 },
		{ .addr = 0x5910c3, .byte = 0xc2 },
		{ .addr = 0x5910be, .byte = 0x04 },
		{ .addr = 0x5910bf, .byte = 0x0d },
		{ .addr = 0x5910c0, .byte = 0x00 },
		{ .addr = 0x5910c1, .byte = 0x78 },
		{ .addr = 0x000020, .byte = 0xd1 },
		{ .addr = 0x000021, .byte = 0x42 },
		{ .addr = 0x000022, .byte = 0xbc },
		{ .addr = 0x000023, .byte = 0x16 },
		{ .addr = 0x42bc16, .byte = 0x12 },
		{ .addr = 0x42bc17, .byte = 0xf6 },
		{ .addr = 0x42bc18, .byte = 0x13 },
		{ .addr = 0x42bc19, .byte = 0x52 }
};

static const SST_Transaction stop_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5836994, .data = 57538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5836990, .data = 1037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5836992, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 53570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 48150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4373526, .data = 4854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4373528, .data = 4946, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_7[] = {
		{ .addr = 0x48ae44, .byte = 0x4e },
		{ .addr = 0x48ae45, .byte = 0x72 },
		{ .addr = 0x48ae46, .byte = 0x19 },
		{ .addr = 0x48ae47, .byte = 0x06 }
};

static const SST_RamByte stop_final_ram_7[] = {
		{ .addr = 0x48ae44, .byte = 0x4e },
		{ .addr = 0x48ae45, .byte = 0x72 },
		{ .addr = 0x48ae46, .byte = 0x19 },
		{ .addr = 0x48ae47, .byte = 0x06 }
};

static const SST_Transaction stop_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_8[] = {
		{ .addr = 0xcb1a6c, .byte = 0x4e },
		{ .addr = 0xcb1a6d, .byte = 0x72 },
		{ .addr = 0xcb1a6e, .byte = 0x28 },
		{ .addr = 0xcb1a6f, .byte = 0x28 },
		{ .addr = 0x000020, .byte = 0xfd },
		{ .addr = 0x000021, .byte = 0xd8 },
		{ .addr = 0x000022, .byte = 0x99 },
		{ .addr = 0x000023, .byte = 0x38 },
		{ .addr = 0xd89938, .byte = 0xc3 },
		{ .addr = 0xd89939, .byte = 0xbf },
		{ .addr = 0xd8993a, .byte = 0xc4 },
		{ .addr = 0xd8993b, .byte = 0x43 }
};

static const SST_RamByte stop_final_ram_8[] = {
		{ .addr = 0xcb1a6c, .byte = 0x4e },
		{ .addr = 0xcb1a6d, .byte = 0x72 },
		{ .addr = 0xcb1a6e, .byte = 0x28 },
		{ .addr = 0xcb1a6f, .byte = 0x28 },
		{ .addr = 0xe43a60, .byte = 0x1a },
		{ .addr = 0xe43a61, .byte = 0x6c },
		{ .addr = 0xe43a5c, .byte = 0x01 },
		{ .addr = 0xe43a5d, .byte = 0x01 },
		{ .addr = 0xe43a5e, .byte = 0x00 },
		{ .addr = 0xe43a5f, .byte = 0xcb },
		{ .addr = 0x000020, .byte = 0xfd },
		{ .addr = 0x000021, .byte = 0xd8 },
		{ .addr = 0x000022, .byte = 0x99 },
		{ .addr = 0x000023, .byte = 0x38 },
		{ .addr = 0xd89938, .byte = 0xc3 },
		{ .addr = 0xd89939, .byte = 0xbf },
		{ .addr = 0xd8993a, .byte = 0xc4 },
		{ .addr = 0xd8993b, .byte = 0x43 }
};

static const SST_Transaction stop_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14957152, .data = 6764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14957148, .data = 257, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14957150, .data = 203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 64984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 39224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14195000, .data = 50111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14195002, .data = 50243, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_9[] = {
		{ .addr = 0xdfafea, .byte = 0x4e },
		{ .addr = 0xdfafeb, .byte = 0x72 },
		{ .addr = 0xdfafec, .byte = 0x18 },
		{ .addr = 0xdfafed, .byte = 0x31 },
		{ .addr = 0x000020, .byte = 0x21 },
		{ .addr = 0x000021, .byte = 0x60 },
		{ .addr = 0x000022, .byte = 0x8f },
		{ .addr = 0x000023, .byte = 0x5c },
		{ .addr = 0x608f5c, .byte = 0x4f },
		{ .addr = 0x608f5d, .byte = 0x35 },
		{ .addr = 0x608f5e, .byte = 0xb4 },
		{ .addr = 0x608f5f, .byte = 0x21 }
};

static const SST_RamByte stop_final_ram_9[] = {
		{ .addr = 0xdfafea, .byte = 0x4e },
		{ .addr = 0xdfafeb, .byte = 0x72 },
		{ .addr = 0xdfafec, .byte = 0x18 },
		{ .addr = 0xdfafed, .byte = 0x31 },
		{ .addr = 0x8e7bd4, .byte = 0xaf },
		{ .addr = 0x8e7bd5, .byte = 0xea },
		{ .addr = 0x8e7bd0, .byte = 0x81 },
		{ .addr = 0x8e7bd1, .byte = 0x1b },
		{ .addr = 0x8e7bd2, .byte = 0x00 },
		{ .addr = 0x8e7bd3, .byte = 0xdf },
		{ .addr = 0x000020, .byte = 0x21 },
		{ .addr = 0x000021, .byte = 0x60 },
		{ .addr = 0x000022, .byte = 0x8f },
		{ .addr = 0x000023, .byte = 0x5c },
		{ .addr = 0x608f5c, .byte = 0x4f },
		{ .addr = 0x608f5d, .byte = 0x35 },
		{ .addr = 0x608f5e, .byte = 0xb4 },
		{ .addr = 0x608f5f, .byte = 0x21 }
};

static const SST_Transaction stop_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9337812, .data = 45034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9337808, .data = 33051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9337810, .data = 223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 8544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 36700, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6328156, .data = 20277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6328158, .data = 46113, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_10[] = {
		{ .addr = 0x42f98a, .byte = 0x4e },
		{ .addr = 0x42f98b, .byte = 0x72 },
		{ .addr = 0x42f98c, .byte = 0xdc },
		{ .addr = 0x42f98d, .byte = 0x62 },
		{ .addr = 0x000020, .byte = 0xd6 },
		{ .addr = 0x000021, .byte = 0x9a },
		{ .addr = 0x000022, .byte = 0x73 },
		{ .addr = 0x000023, .byte = 0xc6 },
		{ .addr = 0x9a73c6, .byte = 0x62 },
		{ .addr = 0x9a73c7, .byte = 0x5e },
		{ .addr = 0x9a73c8, .byte = 0xa2 },
		{ .addr = 0x9a73c9, .byte = 0x3f }
};

static const SST_RamByte stop_final_ram_10[] = {
		{ .addr = 0x42f98a, .byte = 0x4e },
		{ .addr = 0x42f98b, .byte = 0x72 },
		{ .addr = 0x42f98c, .byte = 0xdc },
		{ .addr = 0x42f98d, .byte = 0x62 },
		{ .addr = 0xb59042, .byte = 0xf9 },
		{ .addr = 0xb59043, .byte = 0x8a },
		{ .addr = 0xb5903e, .byte = 0x81 },
		{ .addr = 0xb5903f, .byte = 0x14 },
		{ .addr = 0xb59040, .byte = 0x00 },
		{ .addr = 0xb59041, .byte = 0x42 },
		{ .addr = 0x000020, .byte = 0xd6 },
		{ .addr = 0x000021, .byte = 0x9a },
		{ .addr = 0x000022, .byte = 0x73 },
		{ .addr = 0x000023, .byte = 0xc6 },
		{ .addr = 0x9a73c6, .byte = 0x62 },
		{ .addr = 0x9a73c7, .byte = 0x5e },
		{ .addr = 0x9a73c8, .byte = 0xa2 },
		{ .addr = 0x9a73c9, .byte = 0x3f }
};

static const SST_Transaction stop_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11898946, .data = 63882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11898942, .data = 33044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11898944, .data = 66, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 54938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 29638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10122182, .data = 25182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10122184, .data = 41535, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_11[] = {
		{ .addr = 0x171f48, .byte = 0x4e },
		{ .addr = 0x171f49, .byte = 0x72 },
		{ .addr = 0x171f4a, .byte = 0x36 },
		{ .addr = 0x171f4b, .byte = 0xa0 }
};

static const SST_RamByte stop_final_ram_11[] = {
		{ .addr = 0x171f48, .byte = 0x4e },
		{ .addr = 0x171f49, .byte = 0x72 },
		{ .addr = 0x171f4a, .byte = 0x36 },
		{ .addr = 0x171f4b, .byte = 0xa0 }
};

static const SST_Transaction stop_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_12[] = {
		{ .addr = 0x9b2726, .byte = 0x4e },
		{ .addr = 0x9b2727, .byte = 0x72 },
		{ .addr = 0x9b2728, .byte = 0xe6 },
		{ .addr = 0x9b2729, .byte = 0xa5 },
		{ .addr = 0x000020, .byte = 0x45 },
		{ .addr = 0x000021, .byte = 0x76 },
		{ .addr = 0x000022, .byte = 0xe9 },
		{ .addr = 0x000023, .byte = 0x68 },
		{ .addr = 0x76e968, .byte = 0xa0 },
		{ .addr = 0x76e969, .byte = 0x15 },
		{ .addr = 0x76e96a, .byte = 0x4f },
		{ .addr = 0x76e96b, .byte = 0x4f }
};

static const SST_RamByte stop_final_ram_12[] = {
		{ .addr = 0x9b2726, .byte = 0x4e },
		{ .addr = 0x9b2727, .byte = 0x72 },
		{ .addr = 0x9b2728, .byte = 0xe6 },
		{ .addr = 0x9b2729, .byte = 0xa5 },
		{ .addr = 0xee463c, .byte = 0x27 },
		{ .addr = 0xee463d, .byte = 0x26 },
		{ .addr = 0xee4638, .byte = 0x05 },
		{ .addr = 0xee4639, .byte = 0x1a },
		{ .addr = 0xee463a, .byte = 0x00 },
		{ .addr = 0xee463b, .byte = 0x9b },
		{ .addr = 0x000020, .byte = 0x45 },
		{ .addr = 0x000021, .byte = 0x76 },
		{ .addr = 0x000022, .byte = 0xe9 },
		{ .addr = 0x000023, .byte = 0x68 },
		{ .addr = 0x76e968, .byte = 0xa0 },
		{ .addr = 0x76e969, .byte = 0x15 },
		{ .addr = 0x76e96a, .byte = 0x4f },
		{ .addr = 0x76e96b, .byte = 0x4f }
};

static const SST_Transaction stop_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15615548, .data = 10022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15615544, .data = 1306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15615546, .data = 155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 17782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 59752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7793000, .data = 40981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7793002, .data = 20303, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_13[] = {
		{ .addr = 0x91a712, .byte = 0x4e },
		{ .addr = 0x91a713, .byte = 0x72 },
		{ .addr = 0x91a714, .byte = 0x7c },
		{ .addr = 0x91a715, .byte = 0xc0 }
};

static const SST_RamByte stop_final_ram_13[] = {
		{ .addr = 0x91a712, .byte = 0x4e },
		{ .addr = 0x91a713, .byte = 0x72 },
		{ .addr = 0x91a714, .byte = 0x7c },
		{ .addr = 0x91a715, .byte = 0xc0 }
};

static const SST_Transaction stop_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_14[] = {
		{ .addr = 0x22fbca, .byte = 0x4e },
		{ .addr = 0x22fbcb, .byte = 0x72 },
		{ .addr = 0x22fbcc, .byte = 0x68 },
		{ .addr = 0x22fbcd, .byte = 0xb1 },
		{ .addr = 0x000020, .byte = 0x84 },
		{ .addr = 0x000021, .byte = 0xf8 },
		{ .addr = 0x000022, .byte = 0x71 },
		{ .addr = 0x000023, .byte = 0x9a },
		{ .addr = 0xf8719a, .byte = 0xe3 },
		{ .addr = 0xf8719b, .byte = 0x1f },
		{ .addr = 0xf8719c, .byte = 0xab },
		{ .addr = 0xf8719d, .byte = 0x6c }
};

static const SST_RamByte stop_final_ram_14[] = {
		{ .addr = 0x22fbca, .byte = 0x4e },
		{ .addr = 0x22fbcb, .byte = 0x72 },
		{ .addr = 0x22fbcc, .byte = 0x68 },
		{ .addr = 0x22fbcd, .byte = 0xb1 },
		{ .addr = 0x11b2da, .byte = 0xfb },
		{ .addr = 0x11b2db, .byte = 0xca },
		{ .addr = 0x11b2d6, .byte = 0x81 },
		{ .addr = 0x11b2d7, .byte = 0x00 },
		{ .addr = 0x11b2d8, .byte = 0x00 },
		{ .addr = 0x11b2d9, .byte = 0x22 },
		{ .addr = 0x000020, .byte = 0x84 },
		{ .addr = 0x000021, .byte = 0xf8 },
		{ .addr = 0x000022, .byte = 0x71 },
		{ .addr = 0x000023, .byte = 0x9a },
		{ .addr = 0xf8719a, .byte = 0xe3 },
		{ .addr = 0xf8719b, .byte = 0x1f },
		{ .addr = 0xf8719c, .byte = 0xab },
		{ .addr = 0xf8719d, .byte = 0x6c }
};

static const SST_Transaction stop_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159898, .data = 64458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159894, .data = 33024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159896, .data = 34, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 34040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 29082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16282010, .data = 58143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16282012, .data = 43884, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_15[] = {
		{ .addr = 0x1ddda2, .byte = 0x4e },
		{ .addr = 0x1ddda3, .byte = 0x72 },
		{ .addr = 0x1ddda4, .byte = 0x29 },
		{ .addr = 0x1ddda5, .byte = 0xac }
};

static const SST_RamByte stop_final_ram_15[] = {
		{ .addr = 0x1ddda2, .byte = 0x4e },
		{ .addr = 0x1ddda3, .byte = 0x72 },
		{ .addr = 0x1ddda4, .byte = 0x29 },
		{ .addr = 0x1ddda5, .byte = 0xac }
};

static const SST_Transaction stop_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_16[] = {
		{ .addr = 0x56c2c6, .byte = 0x4e },
		{ .addr = 0x56c2c7, .byte = 0x72 },
		{ .addr = 0x56c2c8, .byte = 0x14 },
		{ .addr = 0x56c2c9, .byte = 0x1f }
};

static const SST_RamByte stop_final_ram_16[] = {
		{ .addr = 0x56c2c6, .byte = 0x4e },
		{ .addr = 0x56c2c7, .byte = 0x72 },
		{ .addr = 0x56c2c8, .byte = 0x14 },
		{ .addr = 0x56c2c9, .byte = 0x1f }
};

static const SST_Transaction stop_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_17[] = {
		{ .addr = 0x9a2236, .byte = 0x4e },
		{ .addr = 0x9a2237, .byte = 0x72 },
		{ .addr = 0x9a2238, .byte = 0xe5 },
		{ .addr = 0x9a2239, .byte = 0x9d }
};

static const SST_RamByte stop_final_ram_17[] = {
		{ .addr = 0x9a2236, .byte = 0x4e },
		{ .addr = 0x9a2237, .byte = 0x72 },
		{ .addr = 0x9a2238, .byte = 0xe5 },
		{ .addr = 0x9a2239, .byte = 0x9d }
};

static const SST_Transaction stop_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_18[] = {
		{ .addr = 0x9bcfa0, .byte = 0x4e },
		{ .addr = 0x9bcfa1, .byte = 0x72 },
		{ .addr = 0x9bcfa2, .byte = 0x10 },
		{ .addr = 0x9bcfa3, .byte = 0xe7 }
};

static const SST_RamByte stop_final_ram_18[] = {
		{ .addr = 0x9bcfa0, .byte = 0x4e },
		{ .addr = 0x9bcfa1, .byte = 0x72 },
		{ .addr = 0x9bcfa2, .byte = 0x10 },
		{ .addr = 0x9bcfa3, .byte = 0xe7 }
};

static const SST_Transaction stop_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_19[] = {
		{ .addr = 0xbb34b6, .byte = 0x4e },
		{ .addr = 0xbb34b7, .byte = 0x72 },
		{ .addr = 0xbb34b8, .byte = 0x6a },
		{ .addr = 0xbb34b9, .byte = 0x6d }
};

static const SST_RamByte stop_final_ram_19[] = {
		{ .addr = 0xbb34b6, .byte = 0x4e },
		{ .addr = 0xbb34b7, .byte = 0x72 },
		{ .addr = 0xbb34b8, .byte = 0x6a },
		{ .addr = 0xbb34b9, .byte = 0x6d }
};

static const SST_Transaction stop_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_20[] = {
		{ .addr = 0xcc7f66, .byte = 0x4e },
		{ .addr = 0xcc7f67, .byte = 0x72 },
		{ .addr = 0xcc7f68, .byte = 0x8c },
		{ .addr = 0xcc7f69, .byte = 0x79 }
};

static const SST_RamByte stop_final_ram_20[] = {
		{ .addr = 0xcc7f66, .byte = 0x4e },
		{ .addr = 0xcc7f67, .byte = 0x72 },
		{ .addr = 0xcc7f68, .byte = 0x8c },
		{ .addr = 0xcc7f69, .byte = 0x79 }
};

static const SST_Transaction stop_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_21[] = {
		{ .addr = 0xa47504, .byte = 0x4e },
		{ .addr = 0xa47505, .byte = 0x72 },
		{ .addr = 0xa47506, .byte = 0x7e },
		{ .addr = 0xa47507, .byte = 0x96 },
		{ .addr = 0x000020, .byte = 0x48 },
		{ .addr = 0x000021, .byte = 0x74 },
		{ .addr = 0x000022, .byte = 0xe7 },
		{ .addr = 0x000023, .byte = 0x42 },
		{ .addr = 0x74e742, .byte = 0x8c },
		{ .addr = 0x74e743, .byte = 0x76 },
		{ .addr = 0x74e744, .byte = 0xc8 },
		{ .addr = 0x74e745, .byte = 0x9c }
};

static const SST_RamByte stop_final_ram_21[] = {
		{ .addr = 0xa47504, .byte = 0x4e },
		{ .addr = 0xa47505, .byte = 0x72 },
		{ .addr = 0xa47506, .byte = 0x7e },
		{ .addr = 0xa47507, .byte = 0x96 },
		{ .addr = 0x5ffe84, .byte = 0x75 },
		{ .addr = 0x5ffe85, .byte = 0x04 },
		{ .addr = 0x5ffe80, .byte = 0x81 },
		{ .addr = 0x5ffe81, .byte = 0x07 },
		{ .addr = 0x5ffe82, .byte = 0x00 },
		{ .addr = 0x5ffe83, .byte = 0xa4 },
		{ .addr = 0x000020, .byte = 0x48 },
		{ .addr = 0x000021, .byte = 0x74 },
		{ .addr = 0x000022, .byte = 0xe7 },
		{ .addr = 0x000023, .byte = 0x42 },
		{ .addr = 0x74e742, .byte = 0x8c },
		{ .addr = 0x74e743, .byte = 0x76 },
		{ .addr = 0x74e744, .byte = 0xc8 },
		{ .addr = 0x74e745, .byte = 0x9c }
};

static const SST_Transaction stop_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291076, .data = 29956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291072, .data = 33031, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291074, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 18548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 59202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7661378, .data = 35958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7661380, .data = 51356, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_22[] = {
		{ .addr = 0x8ae750, .byte = 0x4e },
		{ .addr = 0x8ae751, .byte = 0x72 },
		{ .addr = 0x8ae752, .byte = 0x60 },
		{ .addr = 0x8ae753, .byte = 0xa9 }
};

static const SST_RamByte stop_final_ram_22[] = {
		{ .addr = 0x8ae750, .byte = 0x4e },
		{ .addr = 0x8ae751, .byte = 0x72 },
		{ .addr = 0x8ae752, .byte = 0x60 },
		{ .addr = 0x8ae753, .byte = 0xa9 }
};

static const SST_Transaction stop_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_23[] = {
		{ .addr = 0xc91e82, .byte = 0x4e },
		{ .addr = 0xc91e83, .byte = 0x72 },
		{ .addr = 0xc91e84, .byte = 0xcb },
		{ .addr = 0xc91e85, .byte = 0xa1 }
};

static const SST_RamByte stop_final_ram_23[] = {
		{ .addr = 0xc91e82, .byte = 0x4e },
		{ .addr = 0xc91e83, .byte = 0x72 },
		{ .addr = 0xc91e84, .byte = 0xcb },
		{ .addr = 0xc91e85, .byte = 0xa1 }
};

static const SST_Transaction stop_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_24[] = {
		{ .addr = 0xeb9026, .byte = 0x4e },
		{ .addr = 0xeb9027, .byte = 0x72 },
		{ .addr = 0xeb9028, .byte = 0x5a },
		{ .addr = 0xeb9029, .byte = 0x58 },
		{ .addr = 0x000020, .byte = 0x9d },
		{ .addr = 0x000021, .byte = 0x2c },
		{ .addr = 0x000022, .byte = 0x44 },
		{ .addr = 0x000023, .byte = 0x42 },
		{ .addr = 0x2c4442, .byte = 0x77 },
		{ .addr = 0x2c4443, .byte = 0xbc },
		{ .addr = 0x2c4444, .byte = 0x7b },
		{ .addr = 0x2c4445, .byte = 0x1d }
};

static const SST_RamByte stop_final_ram_24[] = {
		{ .addr = 0xeb9026, .byte = 0x4e },
		{ .addr = 0xeb9027, .byte = 0x72 },
		{ .addr = 0xeb9028, .byte = 0x5a },
		{ .addr = 0xeb9029, .byte = 0x58 },
		{ .addr = 0x2dd1e8, .byte = 0x90 },
		{ .addr = 0x2dd1e9, .byte = 0x26 },
		{ .addr = 0x2dd1e4, .byte = 0x06 },
		{ .addr = 0x2dd1e5, .byte = 0x0a },
		{ .addr = 0x2dd1e6, .byte = 0x00 },
		{ .addr = 0x2dd1e7, .byte = 0xeb },
		{ .addr = 0x000020, .byte = 0x9d },
		{ .addr = 0x000021, .byte = 0x2c },
		{ .addr = 0x000022, .byte = 0x44 },
		{ .addr = 0x000023, .byte = 0x42 },
		{ .addr = 0x2c4442, .byte = 0x77 },
		{ .addr = 0x2c4443, .byte = 0xbc },
		{ .addr = 0x2c4444, .byte = 0x7b },
		{ .addr = 0x2c4445, .byte = 0x1d }
};

static const SST_Transaction stop_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3002856, .data = 36902, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3002852, .data = 1546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3002854, .data = 235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 40236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 17474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2901058, .data = 30652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2901060, .data = 31517, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_25[] = {
		{ .addr = 0x5d65f8, .byte = 0x4e },
		{ .addr = 0x5d65f9, .byte = 0x72 },
		{ .addr = 0x5d65fa, .byte = 0xf2 },
		{ .addr = 0x5d65fb, .byte = 0x95 },
		{ .addr = 0x000020, .byte = 0xf7 },
		{ .addr = 0x000021, .byte = 0x9c },
		{ .addr = 0x000022, .byte = 0xcc },
		{ .addr = 0x000023, .byte = 0x7e },
		{ .addr = 0x9ccc7e, .byte = 0x2b },
		{ .addr = 0x9ccc7f, .byte = 0x2e },
		{ .addr = 0x9ccc80, .byte = 0xa0 },
		{ .addr = 0x9ccc81, .byte = 0xae }
};

static const SST_RamByte stop_final_ram_25[] = {
		{ .addr = 0x5d65f8, .byte = 0x4e },
		{ .addr = 0x5d65f9, .byte = 0x72 },
		{ .addr = 0x5d65fa, .byte = 0xf2 },
		{ .addr = 0x5d65fb, .byte = 0x95 },
		{ .addr = 0x6f35f4, .byte = 0x65 },
		{ .addr = 0x6f35f5, .byte = 0xf8 },
		{ .addr = 0x6f35f0, .byte = 0x84 },
		{ .addr = 0x6f35f1, .byte = 0x06 },
		{ .addr = 0x6f35f2, .byte = 0x00 },
		{ .addr = 0x6f35f3, .byte = 0x5d },
		{ .addr = 0x000020, .byte = 0xf7 },
		{ .addr = 0x000021, .byte = 0x9c },
		{ .addr = 0x000022, .byte = 0xcc },
		{ .addr = 0x000023, .byte = 0x7e },
		{ .addr = 0x9ccc7e, .byte = 0x2b },
		{ .addr = 0x9ccc7f, .byte = 0x2e },
		{ .addr = 0x9ccc80, .byte = 0xa0 },
		{ .addr = 0x9ccc81, .byte = 0xae }
};

static const SST_Transaction stop_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7288308, .data = 26104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7288304, .data = 33798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7288306, .data = 93, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 63388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 52350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10275966, .data = 11054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10275968, .data = 41134, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_26[] = {
		{ .addr = 0x9dbc1e, .byte = 0x4e },
		{ .addr = 0x9dbc1f, .byte = 0x72 },
		{ .addr = 0x9dbc20, .byte = 0x52 },
		{ .addr = 0x9dbc21, .byte = 0x94 },
		{ .addr = 0x000020, .byte = 0x55 },
		{ .addr = 0x000021, .byte = 0x98 },
		{ .addr = 0x000022, .byte = 0x96 },
		{ .addr = 0x000023, .byte = 0xa8 },
		{ .addr = 0x9896a8, .byte = 0xa8 },
		{ .addr = 0x9896a9, .byte = 0xad },
		{ .addr = 0x9896aa, .byte = 0xde },
		{ .addr = 0x9896ab, .byte = 0x5c }
};

static const SST_RamByte stop_final_ram_26[] = {
		{ .addr = 0x9dbc1e, .byte = 0x4e },
		{ .addr = 0x9dbc1f, .byte = 0x72 },
		{ .addr = 0x9dbc20, .byte = 0x52 },
		{ .addr = 0x9dbc21, .byte = 0x94 },
		{ .addr = 0xcbbfe2, .byte = 0xbc },
		{ .addr = 0xcbbfe3, .byte = 0x1e },
		{ .addr = 0xcbbfde, .byte = 0x02 },
		{ .addr = 0xcbbfdf, .byte = 0x10 },
		{ .addr = 0xcbbfe0, .byte = 0x00 },
		{ .addr = 0xcbbfe1, .byte = 0x9d },
		{ .addr = 0x000020, .byte = 0x55 },
		{ .addr = 0x000021, .byte = 0x98 },
		{ .addr = 0x000022, .byte = 0x96 },
		{ .addr = 0x000023, .byte = 0xa8 },
		{ .addr = 0x9896a8, .byte = 0xa8 },
		{ .addr = 0x9896a9, .byte = 0xad },
		{ .addr = 0x9896aa, .byte = 0xde },
		{ .addr = 0x9896ab, .byte = 0x5c }
};

static const SST_Transaction stop_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13352930, .data = 48158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13352926, .data = 528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13352928, .data = 157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 21912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 38568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10000040, .data = 43181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10000042, .data = 56924, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_27[] = {
		{ .addr = 0x71f4fc, .byte = 0x4e },
		{ .addr = 0x71f4fd, .byte = 0x72 },
		{ .addr = 0x71f4fe, .byte = 0x5a },
		{ .addr = 0x71f4ff, .byte = 0x91 },
		{ .addr = 0x000020, .byte = 0xb7 },
		{ .addr = 0x000021, .byte = 0x60 },
		{ .addr = 0x000022, .byte = 0xf6 },
		{ .addr = 0x000023, .byte = 0x40 },
		{ .addr = 0x60f640, .byte = 0x50 },
		{ .addr = 0x60f641, .byte = 0xc6 },
		{ .addr = 0x60f642, .byte = 0x3a },
		{ .addr = 0x60f643, .byte = 0x52 }
};

static const SST_RamByte stop_final_ram_27[] = {
		{ .addr = 0x71f4fc, .byte = 0x4e },
		{ .addr = 0x71f4fd, .byte = 0x72 },
		{ .addr = 0x71f4fe, .byte = 0x5a },
		{ .addr = 0x71f4ff, .byte = 0x91 },
		{ .addr = 0xe56954, .byte = 0xf4 },
		{ .addr = 0xe56955, .byte = 0xfc },
		{ .addr = 0xe56950, .byte = 0x02 },
		{ .addr = 0xe56951, .byte = 0x16 },
		{ .addr = 0xe56952, .byte = 0x00 },
		{ .addr = 0xe56953, .byte = 0x71 },
		{ .addr = 0x000020, .byte = 0xb7 },
		{ .addr = 0x000021, .byte = 0x60 },
		{ .addr = 0x000022, .byte = 0xf6 },
		{ .addr = 0x000023, .byte = 0x40 },
		{ .addr = 0x60f640, .byte = 0x50 },
		{ .addr = 0x60f641, .byte = 0xc6 },
		{ .addr = 0x60f642, .byte = 0x3a },
		{ .addr = 0x60f643, .byte = 0x52 }
};

static const SST_Transaction stop_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15034708, .data = 62716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15034704, .data = 534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15034706, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 46944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 63040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6354496, .data = 20678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6354498, .data = 14930, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_28[] = {
		{ .addr = 0xa6f6a4, .byte = 0x4e },
		{ .addr = 0xa6f6a5, .byte = 0x72 },
		{ .addr = 0xa6f6a6, .byte = 0xb5 },
		{ .addr = 0xa6f6a7, .byte = 0x98 },
		{ .addr = 0x000020, .byte = 0x9d },
		{ .addr = 0x000021, .byte = 0xe6 },
		{ .addr = 0x000022, .byte = 0xe2 },
		{ .addr = 0x000023, .byte = 0xfc },
		{ .addr = 0xe6e2fc, .byte = 0x6d },
		{ .addr = 0xe6e2fd, .byte = 0xde },
		{ .addr = 0xe6e2fe, .byte = 0x4a },
		{ .addr = 0xe6e2ff, .byte = 0xbb }
};

static const SST_RamByte stop_final_ram_28[] = {
		{ .addr = 0xa6f6a4, .byte = 0x4e },
		{ .addr = 0xa6f6a5, .byte = 0x72 },
		{ .addr = 0xa6f6a6, .byte = 0xb5 },
		{ .addr = 0xa6f6a7, .byte = 0x98 },
		{ .addr = 0x2637da, .byte = 0xf6 },
		{ .addr = 0x2637db, .byte = 0xa4 },
		{ .addr = 0x2637d6, .byte = 0x84 },
		{ .addr = 0x2637d7, .byte = 0x00 },
		{ .addr = 0x2637d8, .byte = 0x00 },
		{ .addr = 0x2637d9, .byte = 0xa6 },
		{ .addr = 0x000020, .byte = 0x9d },
		{ .addr = 0x000021, .byte = 0xe6 },
		{ .addr = 0x000022, .byte = 0xe2 },
		{ .addr = 0x000023, .byte = 0xfc },
		{ .addr = 0xe6e2fc, .byte = 0x6d },
		{ .addr = 0xe6e2fd, .byte = 0xde },
		{ .addr = 0xe6e2fe, .byte = 0x4a },
		{ .addr = 0xe6e2ff, .byte = 0xbb }
};

static const SST_Transaction stop_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2504666, .data = 63140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2504662, .data = 33792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2504664, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 32, .data = 40422, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 34, .data = 58108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15131388, .data = 28126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15131390, .data = 19131, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte stop_initial_ram_29[] = {
		{ .addr = 0x700476, .byte = 0x4e },
		{ .addr = 0x700477, .byte = 0x72 },
		{ .addr = 0x700478, .byte = 0x41 },
		{ .addr = 0x700479, .byte = 0x8f }
};

static const SST_RamByte stop_final_ram_29[] = {
		{ .addr = 0x700476, .byte = 0x4e },
		{ .addr = 0x700477, .byte = 0x72 },
		{ .addr = 0x700478, .byte = 0x41 },
		{ .addr = 0x700479, .byte = 0x8f }
};

static const SST_Transaction stop_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_30[] = {
		{ .addr = 0xf8774a, .byte = 0x4e },
		{ .addr = 0xf8774b, .byte = 0x72 },
		{ .addr = 0xf8774c, .byte = 0x79 },
		{ .addr = 0xf8774d, .byte = 0x42 }
};

static const SST_RamByte stop_final_ram_30[] = {
		{ .addr = 0xf8774a, .byte = 0x4e },
		{ .addr = 0xf8774b, .byte = 0x72 },
		{ .addr = 0xf8774c, .byte = 0x79 },
		{ .addr = 0xf8774d, .byte = 0x42 }
};

static const SST_Transaction stop_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte stop_initial_ram_31[] = {
		{ .addr = 0x3bad14, .byte = 0x4e },
		{ .addr = 0x3bad15, .byte = 0x72 },
		{ .addr = 0x3bad16, .byte = 0x82 },
		{ .addr = 0x3bad17, .byte = 0xb8 }
};

static const SST_RamByte stop_final_ram_31[] = {
		{ .addr = 0x3bad14, .byte = 0x4e },
		{ .addr = 0x3bad15, .byte = 0x72 },
		{ .addr = 0x3bad16, .byte = 0x82 },
		{ .addr = 0x3bad17, .byte = 0xb8 }
};

static const SST_Transaction stop_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_TestCase stop[] = {
	{
		.name = "000 STOP # 4e72",
		.initial = {
			.regs = {
				2431338843, 1097904765, 2362176531, 2327491436, 738827858, 357731005, 2389080449, 2189612291, 862186975, 1774396471, 3921212015, 584200441, 2740188619, 2431828463, 3150012923, 15728486, 3475004, 34330, 15476508
			},
			.prefetch0 = 20082,
			.prefetch1 = 16605,
			.ram = stop_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2431338843, 1097904765, 2362176531, 2327491436, 738827858, 357731005, 2389080449, 2189612291, 862186975, 1774396471, 3921212015, 584200441, 2740188619, 2431828463, 3150012923, 15728486, 3474998, 9754, 4134580370
			},
			.prefetch0 = 29126,
			.prefetch1 = 27391,
			.ram = stop_final_ram_0,
			.ram_len = 18,
		},
		.transactions = stop_transactions_0,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "001 STOP # 4e72",
		.initial = {
			.regs = {
				839304515, 1799999958, 1703377638, 165857838, 1865113316, 2680359742, 4153420059, 4291563577, 3822810755, 1406439095, 3893643480, 2173747257, 2753299877, 550871704, 3946963373, 4444210, 5815584, 42783, 11393890
			},
			.prefetch0 = 20082,
			.prefetch1 = 4645,
			.ram = stop_initial_ram_1,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				839304515, 1799999958, 1703377638, 165857838, 1865113316, 2680359742, 4153420059, 4291563577, 3822810755, 1406439095, 3893643480, 2173747257, 2753299877, 550871704, 3946963373, 4444210, 5815584, 517, 11393890
			},
			.prefetch0 = 20082,
			.prefetch1 = 4645,
			.ram = stop_final_ram_1,
			.ram_len = 4,
		},
		.transactions = stop_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 STOP # 4e72",
		.initial = {
			.regs = {
				4023860081, 327262317, 1051201999, 2910610824, 1709880656, 1904636818, 2363058444, 237522409, 1367495768, 2286247723, 3095378784, 1658415053, 2266917389, 3174395133, 4158560963, 3023936, 13027302, 1043, 5026014
			},
			.prefetch0 = 20082,
			.prefetch1 = 21234,
			.ram = stop_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4023860081, 327262317, 1051201999, 2910610824, 1709880656, 1904636818, 2363058444, 237522409, 1367495768, 2286247723, 3095378784, 1658415053, 2266917389, 3174395133, 4158560963, 3023936, 13027296, 9235, 2594729764
			},
			.prefetch0 = 37704,
			.prefetch1 = 23904,
			.ram = stop_final_ram_2,
			.ram_len = 18,
		},
		.transactions = stop_transactions_2,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "003 STOP # 4e72",
		.initial = {
			.regs = {
				422780831, 1818018471, 3570536660, 2994972030, 1967249392, 3554808973, 1387779496, 3932408787, 3241153885, 3612975185, 1196397804, 3404337773, 3404144789, 1460732510, 1160011035, 11768858, 11188056, 778, 11316030
			},
			.prefetch0 = 20082,
			.prefetch1 = 50072,
			.ram = stop_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				422780831, 1818018471, 3570536660, 2994972030, 1967249392, 3554808973, 1387779496, 3932408787, 3241153885, 3612975185, 1196397804, 3404337773, 3404144789, 1460732510, 1160011035, 11768858, 11188050, 8970, 1078332188
			},
			.prefetch0 = 65339,
			.prefetch1 = 58916,
			.ram = stop_final_ram_3,
			.ram_len = 18,
		},
		.transactions = stop_transactions_3,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "004 STOP # 4e72",
		.initial = {
			.regs = {
				830312572, 3686261518, 822430431, 737647285, 1649479619, 1826265112, 2132221174, 3208467742, 111453996, 1877052932, 3812490923, 3411078984, 2476617633, 1003708302, 540630255, 15093770, 16172506, 42250, 2200584
			},
			.prefetch0 = 20082,
			.prefetch1 = 39927,
			.ram = stop_initial_ram_4,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				830312572, 3686261518, 822430431, 737647285, 1649479619, 1826265112, 2132221174, 3208467742, 111453996, 1877052932, 3812490923, 3411078984, 2476617633, 1003708302, 540630255, 15093770, 16172506, 33559, 2200584
			},
			.prefetch0 = 20082,
			.prefetch1 = 39927,
			.ram = stop_final_ram_4,
			.ram_len = 4,
		},
		.transactions = stop_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 STOP # 4e72",
		.initial = {
			.regs = {
				3489699909, 1726283936, 1106038218, 3937638209, 468599426, 329806794, 3762582313, 4226535977, 1361159858, 4262869436, 3978966279, 3183749024, 1434299736, 4198261174, 900609967, 3798264, 171508, 8217, 14937022
			},
			.prefetch0 = 20082,
			.prefetch1 = 23111,
			.ram = stop_initial_ram_5,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				3489699909, 1726283936, 1106038218, 3937638209, 468599426, 329806794, 3762582313, 4226535977, 1361159858, 4262869436, 3978966279, 3183749024, 1434299736, 4198261174, 900609967, 3798264, 171508, 519, 14937022
			},
			.prefetch0 = 20082,
			.prefetch1 = 23111,
			.ram = stop_final_ram_5,
			.ram_len = 4,
		},
		.transactions = stop_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 STOP # 4e72",
		.initial = {
			.regs = {
				1493490810, 225249933, 2456413857, 1496964696, 832929532, 1947366036, 3524429448, 1106358186, 241213700, 2346899964, 1118418849, 909327263, 1189213702, 887684335, 2851419573, 3443844, 5836996, 1037, 7921862
			},
			.prefetch0 = 20082,
			.prefetch1 = 7479,
			.ram = stop_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1493490810, 225249933, 2456413857, 1496964696, 832929532, 1947366036, 3524429448, 1106358186, 241213700, 2346899964, 1118418849, 909327263, 1189213702, 887684335, 2851419573, 3443844, 5836990, 9229, 3510811674
			},
			.prefetch0 = 4854,
			.prefetch1 = 4946,
			.ram = stop_final_ram_6,
			.ram_len = 18,
		},
		.transactions = stop_transactions_6,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "007 STOP # 4e72",
		.initial = {
			.regs = {
				3106116668, 2709295982, 2952565299, 1911526653, 140988834, 1990473298, 2084265779, 3681712696, 2286684321, 2107884485, 3199424317, 3890526360, 3817964616, 1152622931, 3495904721, 11503674, 9251298, 41756, 4763208
			},
			.prefetch0 = 20082,
			.prefetch1 = 6406,
			.ram = stop_initial_ram_7,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				3106116668, 2709295982, 2952565299, 1911526653, 140988834, 1990473298, 2084265779, 3681712696, 2286684321, 2107884485, 3199424317, 3890526360, 3817964616, 1152622931, 3495904721, 11503674, 9251298, 262, 4763208
			},
			.prefetch0 = 20082,
			.prefetch1 = 6406,
			.ram = stop_final_ram_7,
			.ram_len = 4,
		},
		.transactions = stop_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 STOP # 4e72",
		.initial = {
			.regs = {
				1368889837, 3119781903, 1609035721, 161547601, 3670217439, 4289206568, 396289887, 2786709473, 3805567317, 728909531, 682436866, 2480675984, 1395397397, 1436106776, 157608950, 552306, 14957154, 257, 13310576
			},
			.prefetch0 = 20082,
			.prefetch1 = 10280,
			.ram = stop_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1368889837, 3119781903, 1609035721, 161547601, 3670217439, 4289206568, 396289887, 2786709473, 3805567317, 728909531, 682436866, 2480675984, 1395397397, 1436106776, 157608950, 552306, 14957148, 8449, 4258830652
			},
			.prefetch0 = 50111,
			.prefetch1 = 50243,
			.ram = stop_final_ram_8,
			.ram_len = 18,
		},
		.transactions = stop_transactions_8,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "009 STOP # 4e72",
		.initial = {
			.regs = {
				3229587625, 907572779, 2972813591, 818205756, 2254144202, 3156691555, 3321429315, 2898587349, 2856050674, 3787494165, 1725460279, 119559904, 513879125, 166159320, 792264771, 11192776, 9337814, 33051, 14659566
			},
			.prefetch0 = 20082,
			.prefetch1 = 6193,
			.ram = stop_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3229587625, 907572779, 2972813591, 818205756, 2254144202, 3156691555, 3321429315, 2898587349, 2856050674, 3787494165, 1725460279, 119559904, 513879125, 166159320, 792264771, 11192776, 9337808, 8475, 559976288
			},
			.prefetch0 = 20277,
			.prefetch1 = 46113,
			.ram = stop_final_ram_9,
			.ram_len = 18,
		},
		.transactions = stop_transactions_9,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "010 STOP # 4e72",
		.initial = {
			.regs = {
				3993020105, 1475721755, 3385688296, 1537837941, 2936232488, 268305264, 2353428028, 161957080, 3038796623, 3565805771, 318804692, 1017227485, 1595286224, 1237163313, 3796354484, 2438248, 11898948, 33044, 4389262
			},
			.prefetch0 = 20082,
			.prefetch1 = 56418,
			.ram = stop_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3993020105, 1475721755, 3385688296, 1537837941, 2936232488, 268305264, 2353428028, 161957080, 3038796623, 3565805771, 318804692, 1017227485, 1595286224, 1237163313, 3796354484, 2438248, 11898942, 8468, 3600446410
			},
			.prefetch0 = 25182,
			.prefetch1 = 41535,
			.ram = stop_final_ram_10,
			.ram_len = 18,
		},
		.transactions = stop_transactions_10,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "011 STOP # 4e72",
		.initial = {
			.regs = {
				2174707818, 3242494516, 2663994603, 326004331, 2129236678, 1129396925, 1231969199, 237795920, 27925177, 821129702, 2327139734, 4157913449, 1534066597, 364501066, 227257075, 11552906, 15057626, 41491, 1515340
			},
			.prefetch0 = 20082,
			.prefetch1 = 13984,
			.ram = stop_initial_ram_11,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				2174707818, 3242494516, 2663994603, 326004331, 2129236678, 1129396925, 1231969199, 237795920, 27925177, 821129702, 2327139734, 4157913449, 1534066597, 364501066, 227257075, 11552906, 15057626, 9728, 1515340
			},
			.prefetch0 = 20082,
			.prefetch1 = 13984,
			.ram = stop_final_ram_11,
			.ram_len = 4,
		},
		.transactions = stop_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 STOP # 4e72",
		.initial = {
			.regs = {
				2872958426, 125684100, 1414472738, 1542845160, 177950211, 3020362944, 3028637292, 3034250166, 3517012787, 2463160948, 1258047758, 2236067455, 3646400884, 3396085767, 1851820423, 3958958, 15615550, 1306, 10168106
			},
			.prefetch0 = 20082,
			.prefetch1 = 59045,
			.ram = stop_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2872958426, 125684100, 1414472738, 1542845160, 177950211, 3020362944, 3028637292, 3034250166, 3517012787, 2463160948, 1258047758, 2236067455, 3646400884, 3396085767, 1851820423, 3958958, 15615544, 9498, 1165420908
			},
			.prefetch0 = 40981,
			.prefetch1 = 20303,
			.ram = stop_final_ram_12,
			.ram_len = 18,
		},
		.transactions = stop_transactions_12,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "013 STOP # 4e72",
		.initial = {
			.regs = {
				1260825351, 2533514668, 2966625404, 1578228080, 1385858008, 1615291176, 4207107283, 4245881445, 3045131131, 1102160243, 3294234886, 3717464039, 500906702, 1054660741, 472779843, 4496358, 3332716, 8200, 9545494
			},
			.prefetch0 = 20082,
			.prefetch1 = 31936,
			.ram = stop_initial_ram_13,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				1260825351, 2533514668, 2966625404, 1578228080, 1385858008, 1615291176, 4207107283, 4245881445, 3045131131, 1102160243, 3294234886, 3717464039, 500906702, 1054660741, 472779843, 4496358, 3332716, 9216, 9545494
			},
			.prefetch0 = 20082,
			.prefetch1 = 31936,
			.ram = stop_final_ram_13,
			.ram_len = 4,
		},
		.transactions = stop_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 STOP # 4e72",
		.initial = {
			.regs = {
				1103321329, 1317042449, 632941308, 1614084323, 1974660, 1056807829, 2314268254, 4200806145, 1117862464, 3568623276, 393645089, 652868276, 2489565255, 285547284, 391645198, 5265556, 1159900, 33024, 2292686
			},
			.prefetch0 = 20082,
			.prefetch1 = 26801,
			.ram = stop_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1103321329, 1317042449, 632941308, 1614084323, 1974660, 1056807829, 2314268254, 4200806145, 1117862464, 3568623276, 393645089, 652868276, 2489565255, 285547284, 391645198, 5265556, 1159894, 8448, 2230874526
			},
			.prefetch0 = 58143,
			.prefetch1 = 43884,
			.ram = stop_final_ram_14,
			.ram_len = 18,
		},
		.transactions = stop_transactions_14,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "015 STOP # 4e72",
		.initial = {
			.regs = {
				740478452, 1160996667, 343232567, 2440014407, 649029117, 1327655653, 1503381274, 3795956866, 2145712545, 3308630716, 3463823703, 2509109279, 724142963, 71670121, 2343612160, 7200682, 11703366, 42013, 1957286
			},
			.prefetch0 = 20082,
			.prefetch1 = 10668,
			.ram = stop_initial_ram_15,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				740478452, 1160996667, 343232567, 2440014407, 649029117, 1327655653, 1503381274, 3795956866, 2145712545, 3308630716, 3463823703, 2509109279, 724142963, 71670121, 2343612160, 7200682, 11703366, 8460, 1957286
			},
			.prefetch0 = 20082,
			.prefetch1 = 10668,
			.ram = stop_final_ram_15,
			.ram_len = 4,
		},
		.transactions = stop_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "016 STOP # 4e72",
		.initial = {
			.regs = {
				416432765, 3741398033, 3508148147, 530459634, 1894454169, 1529366138, 332723573, 1697399717, 1933197810, 2779059729, 3469930555, 2674538298, 1546632906, 2594718249, 363900936, 8735974, 3858706, 8724, 5685962
			},
			.prefetch0 = 20082,
			.prefetch1 = 5151,
			.ram = stop_initial_ram_16,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				416432765, 3741398033, 3508148147, 530459634, 1894454169, 1529366138, 332723573, 1697399717, 1933197810, 2779059729, 3469930555, 2674538298, 1546632906, 2594718249, 363900936, 8735974, 3858706, 1055, 5685962
			},
			.prefetch0 = 20082,
			.prefetch1 = 5151,
			.ram = stop_final_ram_16,
			.ram_len = 4,
		},
		.transactions = stop_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 STOP # 4e72",
		.initial = {
			.regs = {
				1180084987, 141778678, 361898362, 1419193374, 1605170762, 1113413339, 2111368276, 1429539961, 617657809, 3212032078, 1961772505, 1457837755, 2234984623, 2108234306, 1324731332, 2126194, 9383474, 40990, 10101306
			},
			.prefetch0 = 20082,
			.prefetch1 = 58781,
			.ram = stop_initial_ram_17,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				1180084987, 141778678, 361898362, 1419193374, 1605170762, 1113413339, 2111368276, 1429539961, 617657809, 3212032078, 1961772505, 1457837755, 2234984623, 2108234306, 1324731332, 2126194, 9383474, 42269, 10101306
			},
			.prefetch0 = 20082,
			.prefetch1 = 58781,
			.ram = stop_final_ram_17,
			.ram_len = 4,
		},
		.transactions = stop_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 STOP # 4e72",
		.initial = {
			.regs = {
				2108638632, 677691371, 2238973556, 2485352652, 3493968554, 4072846828, 1926097300, 105044238, 2397407159, 3699200190, 74824451, 2605929115, 3960489445, 646505080, 3046321376, 3085844, 818730, 9503, 10211236
			},
			.prefetch0 = 20082,
			.prefetch1 = 4327,
			.ram = stop_initial_ram_18,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				2108638632, 677691371, 2238973556, 2485352652, 3493968554, 4072846828, 1926097300, 105044238, 2397407159, 3699200190, 74824451, 2605929115, 3960489445, 646505080, 3046321376, 3085844, 818730, 7, 10211236
			},
			.prefetch0 = 20082,
			.prefetch1 = 4327,
			.ram = stop_final_ram_18,
			.ram_len = 4,
		},
		.transactions = stop_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 STOP # 4e72",
		.initial = {
			.regs = {
				2835170728, 3080542451, 2389596957, 2637301103, 3526203755, 3034562865, 2566653521, 2155673348, 946921946, 2720813274, 3060253728, 3918850049, 2080691741, 2594775184, 3729364764, 15010994, 7429204, 9998, 12268730
			},
			.prefetch0 = 20082,
			.prefetch1 = 27245,
			.ram = stop_initial_ram_19,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				2835170728, 3080542451, 2389596957, 2637301103, 3526203755, 3034562865, 2566653521, 2155673348, 946921946, 2720813274, 3060253728, 3918850049, 2080691741, 2594775184, 3729364764, 15010994, 7429204, 8717, 12268730
			},
			.prefetch0 = 20082,
			.prefetch1 = 27245,
			.ram = stop_final_ram_19,
			.ram_len = 4,
		},
		.transactions = stop_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 STOP # 4e72",
		.initial = {
			.regs = {
				312887898, 381132866, 633226868, 3386037849, 3288316549, 1898937715, 339287053, 2130878049, 2540544016, 782497911, 2522393475, 1366493564, 1310171608, 783138922, 1049761672, 14327736, 13720144, 40973, 13401962
			},
			.prefetch0 = 20082,
			.prefetch1 = 35961,
			.ram = stop_initial_ram_20,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				312887898, 381132866, 633226868, 3386037849, 3288316549, 1898937715, 339287053, 2130878049, 2540544016, 782497911, 2522393475, 1366493564, 1310171608, 783138922, 1049761672, 14327736, 13720144, 33817, 13401962
			},
			.prefetch0 = 20082,
			.prefetch1 = 35961,
			.ram = stop_final_ram_20,
			.ram_len = 4,
		},
		.transactions = stop_transactions_20,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "021 STOP # 4e72",
		.initial = {
			.regs = {
				2337437502, 1000888058, 1721965457, 3003922021, 3309298128, 2542358583, 3812919647, 2101420229, 169273003, 3786993698, 3403504952, 2352353078, 2799509020, 1474331606, 3061485443, 12492448, 6291078, 33031, 10777864
			},
			.prefetch0 = 20082,
			.prefetch1 = 32406,
			.ram = stop_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2337437502, 1000888058, 1721965457, 3003922021, 3309298128, 2542358583, 3812919647, 2101420229, 169273003, 3786993698, 3403504952, 2352353078, 2799509020, 1474331606, 3061485443, 12492448, 6291072, 8455, 1215620934
			},
			.prefetch0 = 35958,
			.prefetch1 = 51356,
			.ram = stop_final_ram_21,
			.ram_len = 18,
		},
		.transactions = stop_transactions_21,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "022 STOP # 4e72",
		.initial = {
			.regs = {
				1032435156, 856963629, 1565615279, 2423795412, 1781305863, 1746351130, 158271084, 798801462, 2082665278, 1677863114, 3691493243, 3961997421, 1595052166, 2296899279, 2131719154, 5496294, 5702420, 41500, 9103188
			},
			.prefetch0 = 20082,
			.prefetch1 = 24745,
			.ram = stop_initial_ram_22,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				1032435156, 856963629, 1565615279, 2423795412, 1781305863, 1746351130, 158271084, 798801462, 2082665278, 1677863114, 3691493243, 3961997421, 1595052166, 2296899279, 2131719154, 5496294, 5702420, 8201, 9103188
			},
			.prefetch0 = 20082,
			.prefetch1 = 24745,
			.ram = stop_final_ram_22,
			.ram_len = 4,
		},
		.transactions = stop_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 STOP # 4e72",
		.initial = {
			.regs = {
				3464503638, 551141579, 2801113153, 3837400954, 2949603523, 2346198537, 1402213677, 1533991305, 3080737344, 2902091983, 558738576, 1071016690, 1910836915, 1492039877, 1552633595, 5922350, 12147228, 41231, 13180550
			},
			.prefetch0 = 20082,
			.prefetch1 = 52129,
			.ram = stop_initial_ram_23,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				3464503638, 551141579, 2801113153, 3837400954, 2949603523, 2346198537, 1402213677, 1533991305, 3080737344, 2902091983, 558738576, 1071016690, 1910836915, 1492039877, 1552633595, 5922350, 12147228, 33537, 13180550
			},
			.prefetch0 = 20082,
			.prefetch1 = 52129,
			.ram = stop_final_ram_23,
			.ram_len = 4,
		},
		.transactions = stop_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 STOP # 4e72",
		.initial = {
			.regs = {
				2756820562, 320402148, 2825716118, 559490178, 699955130, 3781086366, 3177969670, 2407937077, 2716560674, 3233107889, 3663827313, 4072063569, 3642013240, 7458736, 2302246297, 263710, 3002858, 1546, 15437866
			},
			.prefetch0 = 20082,
			.prefetch1 = 23128,
			.ram = stop_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2756820562, 320402148, 2825716118, 559490178, 699955130, 3781086366, 3177969670, 2407937077, 2716560674, 3233107889, 3663827313, 4072063569, 3642013240, 7458736, 2302246297, 263710, 3002852, 9738, 2636923974
			},
			.prefetch0 = 30652,
			.prefetch1 = 31517,
			.ram = stop_final_ram_24,
			.ram_len = 18,
		},
		.transactions = stop_transactions_24,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "025 STOP # 4e72",
		.initial = {
			.regs = {
				2696388516, 821589244, 87807569, 2772360794, 1180666726, 3968814954, 2707464725, 240248830, 2640684903, 270188058, 2849444398, 224847615, 3891248000, 2778795116, 3516905589, 4316764, 7288310, 33798, 6120956
			},
			.prefetch0 = 20082,
			.prefetch1 = 62101,
			.ram = stop_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2696388516, 821589244, 87807569, 2772360794, 1180666726, 3968814954, 2707464725, 240248830, 2640684903, 270188058, 2849444398, 224847615, 3891248000, 2778795116, 3516905589, 4316764, 7288304, 9222, 4154248322
			},
			.prefetch0 = 11054,
			.prefetch1 = 41134,
			.ram = stop_final_ram_25,
			.ram_len = 18,
		},
		.transactions = stop_transactions_25,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "026 STOP # 4e72",
		.initial = {
			.regs = {
				865458911, 1816874529, 2538661196, 2147158069, 4272677737, 4087678135, 2500875487, 604483476, 1025851788, 3237988908, 875109714, 3557835852, 514407608, 349944600, 440099396, 3812912, 13352932, 528, 10337314
			},
			.prefetch0 = 20082,
			.prefetch1 = 21140,
			.ram = stop_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				865458911, 1816874529, 2538661196, 2147158069, 4272677737, 4087678135, 2500875487, 604483476, 1025851788, 3237988908, 875109714, 3557835852, 514407608, 349944600, 440099396, 3812912, 13352926, 8720, 1436063404
			},
			.prefetch0 = 43181,
			.prefetch1 = 56924,
			.ram = stop_final_ram_26,
			.ram_len = 18,
		},
		.transactions = stop_transactions_26,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "027 STOP # 4e72",
		.initial = {
			.regs = {
				545416054, 4169135323, 354424580, 3254629407, 653339587, 1951971831, 661870991, 3965462404, 1830025280, 26174751, 314063155, 1294938644, 1963147128, 49460151, 738218050, 2167126, 15034710, 534, 7468288
			},
			.prefetch0 = 20082,
			.prefetch1 = 23185,
			.ram = stop_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				545416054, 4169135323, 354424580, 3254629407, 653339587, 1951971831, 661870991, 3965462404, 1830025280, 26174751, 314063155, 1294938644, 1963147128, 49460151, 738218050, 2167126, 15034704, 8726, 3076585028
			},
			.prefetch0 = 20678,
			.prefetch1 = 14930,
			.ram = stop_final_ram_27,
			.ram_len = 18,
		},
		.transactions = stop_transactions_27,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "028 STOP # 4e72",
		.initial = {
			.regs = {
				1034719858, 1864668381, 2497987490, 2619875451, 2839439877, 1071561355, 3508648256, 1120652840, 3528673888, 3020770755, 1559926355, 2125581903, 1026947123, 135719492, 1092644665, 12531850, 2504668, 33792, 10942120
			},
			.prefetch0 = 20082,
			.prefetch1 = 46488,
			.ram = stop_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1034719858, 1864668381, 2497987490, 2619875451, 2839439877, 1071561355, 3508648256, 1120652840, 3528673888, 3020770755, 1559926355, 2125581903, 1026947123, 135719492, 1092644665, 12531850, 2504662, 9216, 2649154304
			},
			.prefetch0 = 28126,
			.prefetch1 = 19131,
			.ram = stop_final_ram_28,
			.ram_len = 18,
		},
		.transactions = stop_transactions_28,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "029 STOP # 4e72",
		.initial = {
			.regs = {
				1910732503, 3978119890, 2263450092, 916276231, 4179011293, 3445311795, 1773551290, 3752858868, 255627563, 2687254848, 2808960353, 1056032672, 3732724968, 2073167949, 1851975601, 5374494, 4563394, 42269, 7341178
			},
			.prefetch0 = 20082,
			.prefetch1 = 16783,
			.ram = stop_initial_ram_29,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				1910732503, 3978119890, 2263450092, 916276231, 4179011293, 3445311795, 1773551290, 3752858868, 255627563, 2687254848, 2808960353, 1056032672, 3732724968, 2073167949, 1851975601, 5374494, 4563394, 271, 7341178
			},
			.prefetch0 = 20082,
			.prefetch1 = 16783,
			.ram = stop_final_ram_29,
			.ram_len = 4,
		},
		.transactions = stop_transactions_29,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "030 STOP # 4e72",
		.initial = {
			.regs = {
				999559659, 289523606, 728713668, 3486322279, 1093344219, 3261656991, 3563131905, 3505005061, 2412044541, 1525147623, 2991882583, 2578739704, 2781610487, 2165056110, 2487679366, 13302606, 10131958, 42764, 16283470
			},
			.prefetch0 = 20082,
			.prefetch1 = 31042,
			.ram = stop_initial_ram_30,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				999559659, 289523606, 728713668, 3486322279, 1093344219, 3261656991, 3563131905, 3505005061, 2412044541, 1525147623, 2991882583, 2578739704, 2781610487, 2165056110, 2487679366, 13302606, 10131958, 8450, 16283470
			},
			.prefetch0 = 20082,
			.prefetch1 = 31042,
			.ram = stop_final_ram_30,
			.ram_len = 4,
		},
		.transactions = stop_transactions_30,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "031 STOP # 4e72",
		.initial = {
			.regs = {
				2181053596, 3014422782, 3158013243, 1513343855, 2364468223, 3708794231, 3856812943, 2951824421, 3132628040, 2014500553, 3118572909, 3019654480, 3642764094, 2205519956, 3600684350, 1488846, 181018, 41243, 3910936
			},
			.prefetch0 = 20082,
			.prefetch1 = 33464,
			.ram = stop_initial_ram_31,
			.ram_len = 4,
		},
		.final = {
			.regs = {
				2181053596, 3014422782, 3158013243, 1513343855, 2364468223, 3708794231, 3856812943, 2951824421, 3132628040, 2014500553, 3118572909, 3019654480, 3642764094, 2205519956, 3600684350, 1488846, 181018, 33304, 3910936
			},
			.prefetch0 = 20082,
			.prefetch1 = 33464,
			.ram = stop_final_ram_31,
			.ram_len = 4,
		},
		.transactions = stop_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_STOP_H */