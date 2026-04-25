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

const uint32_t STOP_TEST_COUNT = 16;
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
};

#endif /* RBT_STOP_H */