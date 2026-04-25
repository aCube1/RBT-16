#ifndef RBT_ROXRB_H
#define RBT_ROXRB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxrb_initial_ram_0[] = {
		{ .addr = 0x210384, .byte = 0xec },
		{ .addr = 0x210385, .byte = 0x31 },
		{ .addr = 0x210386, .byte = 0x03 },
		{ .addr = 0x210387, .byte = 0x3f },
		{ .addr = 0x210388, .byte = 0xeb },
		{ .addr = 0x210389, .byte = 0xb1 }
};

static const SST_RamByte roxrb_final_ram_0[] = {
		{ .addr = 0x210384, .byte = 0xec },
		{ .addr = 0x210385, .byte = 0x31 },
		{ .addr = 0x210386, .byte = 0x03 },
		{ .addr = 0x210387, .byte = 0x3f },
		{ .addr = 0x210388, .byte = 0xeb },
		{ .addr = 0x210389, .byte = 0xb1 }
};

static const SST_Transaction roxrb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2163592, .data = 60337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte roxrb_initial_ram_1[] = {
		{ .addr = 0x0d2a42, .byte = 0xe6 },
		{ .addr = 0x0d2a43, .byte = 0x37 },
		{ .addr = 0x0d2a44, .byte = 0x97 },
		{ .addr = 0x0d2a45, .byte = 0x15 },
		{ .addr = 0x0d2a46, .byte = 0xb3 },
		{ .addr = 0x0d2a47, .byte = 0x11 }
};

static const SST_RamByte roxrb_final_ram_1[] = {
		{ .addr = 0x0d2a42, .byte = 0xe6 },
		{ .addr = 0x0d2a43, .byte = 0x37 },
		{ .addr = 0x0d2a44, .byte = 0x97 },
		{ .addr = 0x0d2a45, .byte = 0x15 },
		{ .addr = 0x0d2a46, .byte = 0xb3 },
		{ .addr = 0x0d2a47, .byte = 0x11 }
};

static const SST_Transaction roxrb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 862790, .data = 45841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte roxrb_initial_ram_2[] = {
		{ .addr = 0xea7822, .byte = 0xec },
		{ .addr = 0xea7823, .byte = 0x14 },
		{ .addr = 0xea7824, .byte = 0xa2 },
		{ .addr = 0xea7825, .byte = 0x10 },
		{ .addr = 0xea7826, .byte = 0xfd },
		{ .addr = 0xea7827, .byte = 0x10 }
};

static const SST_RamByte roxrb_final_ram_2[] = {
		{ .addr = 0xea7822, .byte = 0xec },
		{ .addr = 0xea7823, .byte = 0x14 },
		{ .addr = 0xea7824, .byte = 0xa2 },
		{ .addr = 0xea7825, .byte = 0x10 },
		{ .addr = 0xea7826, .byte = 0xfd },
		{ .addr = 0xea7827, .byte = 0x10 }
};

static const SST_Transaction roxrb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15366182, .data = 64784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrb_initial_ram_3[] = {
		{ .addr = 0xf348a6, .byte = 0xe0 },
		{ .addr = 0xf348a7, .byte = 0x34 },
		{ .addr = 0xf348a8, .byte = 0x4c },
		{ .addr = 0xf348a9, .byte = 0xde },
		{ .addr = 0xf348aa, .byte = 0xdc },
		{ .addr = 0xf348ab, .byte = 0x77 }
};

static const SST_RamByte roxrb_final_ram_3[] = {
		{ .addr = 0xf348a6, .byte = 0xe0 },
		{ .addr = 0xf348a7, .byte = 0x34 },
		{ .addr = 0xf348a8, .byte = 0x4c },
		{ .addr = 0xf348a9, .byte = 0xde },
		{ .addr = 0xf348aa, .byte = 0xdc },
		{ .addr = 0xf348ab, .byte = 0x77 }
};

static const SST_Transaction roxrb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15943850, .data = 56439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 78 },
};

static const SST_RamByte roxrb_initial_ram_4[] = {
		{ .addr = 0xc95ec8, .byte = 0xe6 },
		{ .addr = 0xc95ec9, .byte = 0x13 },
		{ .addr = 0xc95eca, .byte = 0xaf },
		{ .addr = 0xc95ecb, .byte = 0x8c },
		{ .addr = 0xc95ecc, .byte = 0x3c },
		{ .addr = 0xc95ecd, .byte = 0x03 }
};

static const SST_RamByte roxrb_final_ram_4[] = {
		{ .addr = 0xc95ec8, .byte = 0xe6 },
		{ .addr = 0xc95ec9, .byte = 0x13 },
		{ .addr = 0xc95eca, .byte = 0xaf },
		{ .addr = 0xc95ecb, .byte = 0x8c },
		{ .addr = 0xc95ecc, .byte = 0x3c },
		{ .addr = 0xc95ecd, .byte = 0x03 }
};

static const SST_Transaction roxrb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13197004, .data = 15363, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrb_initial_ram_5[] = {
		{ .addr = 0x6dea1a, .byte = 0xe6 },
		{ .addr = 0x6dea1b, .byte = 0x32 },
		{ .addr = 0x6dea1c, .byte = 0x1d },
		{ .addr = 0x6dea1d, .byte = 0xf8 },
		{ .addr = 0x6dea1e, .byte = 0x4d },
		{ .addr = 0x6dea1f, .byte = 0x76 }
};

static const SST_RamByte roxrb_final_ram_5[] = {
		{ .addr = 0x6dea1a, .byte = 0xe6 },
		{ .addr = 0x6dea1b, .byte = 0x32 },
		{ .addr = 0x6dea1c, .byte = 0x1d },
		{ .addr = 0x6dea1d, .byte = 0xf8 },
		{ .addr = 0x6dea1e, .byte = 0x4d },
		{ .addr = 0x6dea1f, .byte = 0x76 }
};

static const SST_Transaction roxrb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7203358, .data = 19830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 40 },
};

static const SST_RamByte roxrb_initial_ram_6[] = {
		{ .addr = 0x7c7e82, .byte = 0xe4 },
		{ .addr = 0x7c7e83, .byte = 0x33 },
		{ .addr = 0x7c7e84, .byte = 0xb7 },
		{ .addr = 0x7c7e85, .byte = 0x53 },
		{ .addr = 0x7c7e86, .byte = 0x07 },
		{ .addr = 0x7c7e87, .byte = 0x7e }
};

static const SST_RamByte roxrb_final_ram_6[] = {
		{ .addr = 0x7c7e82, .byte = 0xe4 },
		{ .addr = 0x7c7e83, .byte = 0x33 },
		{ .addr = 0x7c7e84, .byte = 0xb7 },
		{ .addr = 0x7c7e85, .byte = 0x53 },
		{ .addr = 0x7c7e86, .byte = 0x07 },
		{ .addr = 0x7c7e87, .byte = 0x7e }
};

static const SST_Transaction roxrb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8158854, .data = 1918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

static const SST_RamByte roxrb_initial_ram_7[] = {
		{ .addr = 0xd6479a, .byte = 0xee },
		{ .addr = 0xd6479b, .byte = 0x11 },
		{ .addr = 0xd6479c, .byte = 0x13 },
		{ .addr = 0xd6479d, .byte = 0xf1 },
		{ .addr = 0xd6479e, .byte = 0x59 },
		{ .addr = 0xd6479f, .byte = 0x00 }
};

static const SST_RamByte roxrb_final_ram_7[] = {
		{ .addr = 0xd6479a, .byte = 0xee },
		{ .addr = 0xd6479b, .byte = 0x11 },
		{ .addr = 0xd6479c, .byte = 0x13 },
		{ .addr = 0xd6479d, .byte = 0xf1 },
		{ .addr = 0xd6479e, .byte = 0x59 },
		{ .addr = 0xd6479f, .byte = 0x00 }
};

static const SST_Transaction roxrb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14043038, .data = 22784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrb_initial_ram_8[] = {
		{ .addr = 0xcd0028, .byte = 0xe0 },
		{ .addr = 0xcd0029, .byte = 0x15 },
		{ .addr = 0xcd002a, .byte = 0x3d },
		{ .addr = 0xcd002b, .byte = 0xbb },
		{ .addr = 0xcd002c, .byte = 0xb6 },
		{ .addr = 0xcd002d, .byte = 0x0f }
};

static const SST_RamByte roxrb_final_ram_8[] = {
		{ .addr = 0xcd0028, .byte = 0xe0 },
		{ .addr = 0xcd0029, .byte = 0x15 },
		{ .addr = 0xcd002a, .byte = 0x3d },
		{ .addr = 0xcd002b, .byte = 0xbb },
		{ .addr = 0xcd002c, .byte = 0xb6 },
		{ .addr = 0xcd002d, .byte = 0x0f }
};

static const SST_Transaction roxrb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13434924, .data = 46607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrb_initial_ram_9[] = {
		{ .addr = 0xa074c2, .byte = 0xe4 },
		{ .addr = 0xa074c3, .byte = 0x30 },
		{ .addr = 0xa074c4, .byte = 0xee },
		{ .addr = 0xa074c5, .byte = 0x0f },
		{ .addr = 0xa074c6, .byte = 0x56 },
		{ .addr = 0xa074c7, .byte = 0xe5 }
};

static const SST_RamByte roxrb_final_ram_9[] = {
		{ .addr = 0xa074c2, .byte = 0xe4 },
		{ .addr = 0xa074c3, .byte = 0x30 },
		{ .addr = 0xa074c4, .byte = 0xee },
		{ .addr = 0xa074c5, .byte = 0x0f },
		{ .addr = 0xa074c6, .byte = 0x56 },
		{ .addr = 0xa074c7, .byte = 0xe5 }
};

static const SST_Transaction roxrb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10515654, .data = 22245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 120 },
};

static const SST_RamByte roxrb_initial_ram_10[] = {
		{ .addr = 0x7eb562, .byte = 0xe6 },
		{ .addr = 0x7eb563, .byte = 0x15 },
		{ .addr = 0x7eb564, .byte = 0xdc },
		{ .addr = 0x7eb565, .byte = 0xb9 },
		{ .addr = 0x7eb566, .byte = 0x47 },
		{ .addr = 0x7eb567, .byte = 0x3b }
};

static const SST_RamByte roxrb_final_ram_10[] = {
		{ .addr = 0x7eb562, .byte = 0xe6 },
		{ .addr = 0x7eb563, .byte = 0x15 },
		{ .addr = 0x7eb564, .byte = 0xdc },
		{ .addr = 0x7eb565, .byte = 0xb9 },
		{ .addr = 0x7eb566, .byte = 0x47 },
		{ .addr = 0x7eb567, .byte = 0x3b }
};

static const SST_Transaction roxrb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8303974, .data = 18235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrb_initial_ram_11[] = {
		{ .addr = 0x601d22, .byte = 0xe2 },
		{ .addr = 0x601d23, .byte = 0x11 },
		{ .addr = 0x601d24, .byte = 0xa9 },
		{ .addr = 0x601d25, .byte = 0x00 },
		{ .addr = 0x601d26, .byte = 0xaf },
		{ .addr = 0x601d27, .byte = 0x26 }
};

static const SST_RamByte roxrb_final_ram_11[] = {
		{ .addr = 0x601d22, .byte = 0xe2 },
		{ .addr = 0x601d23, .byte = 0x11 },
		{ .addr = 0x601d24, .byte = 0xa9 },
		{ .addr = 0x601d25, .byte = 0x00 },
		{ .addr = 0x601d26, .byte = 0xaf },
		{ .addr = 0x601d27, .byte = 0x26 }
};

static const SST_Transaction roxrb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6298918, .data = 44838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte roxrb_initial_ram_12[] = {
		{ .addr = 0x2f287c, .byte = 0xe8 },
		{ .addr = 0x2f287d, .byte = 0x13 },
		{ .addr = 0x2f287e, .byte = 0xcf },
		{ .addr = 0x2f287f, .byte = 0x96 },
		{ .addr = 0x2f2880, .byte = 0xa5 },
		{ .addr = 0x2f2881, .byte = 0x3c }
};

static const SST_RamByte roxrb_final_ram_12[] = {
		{ .addr = 0x2f287c, .byte = 0xe8 },
		{ .addr = 0x2f287d, .byte = 0x13 },
		{ .addr = 0x2f287e, .byte = 0xcf },
		{ .addr = 0x2f287f, .byte = 0x96 },
		{ .addr = 0x2f2880, .byte = 0xa5 },
		{ .addr = 0x2f2881, .byte = 0x3c }
};

static const SST_Transaction roxrb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3090560, .data = 42300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrb_initial_ram_13[] = {
		{ .addr = 0x9a67dc, .byte = 0xe0 },
		{ .addr = 0x9a67dd, .byte = 0x17 },
		{ .addr = 0x9a67de, .byte = 0x6f },
		{ .addr = 0x9a67df, .byte = 0x3a },
		{ .addr = 0x9a67e0, .byte = 0xcf },
		{ .addr = 0x9a67e1, .byte = 0x62 }
};

static const SST_RamByte roxrb_final_ram_13[] = {
		{ .addr = 0x9a67dc, .byte = 0xe0 },
		{ .addr = 0x9a67dd, .byte = 0x17 },
		{ .addr = 0x9a67de, .byte = 0x6f },
		{ .addr = 0x9a67df, .byte = 0x3a },
		{ .addr = 0x9a67e0, .byte = 0xcf },
		{ .addr = 0x9a67e1, .byte = 0x62 }
};

static const SST_Transaction roxrb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10119136, .data = 53090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrb_initial_ram_14[] = {
		{ .addr = 0xf458bc, .byte = 0xec },
		{ .addr = 0xf458bd, .byte = 0x17 },
		{ .addr = 0xf458be, .byte = 0x2c },
		{ .addr = 0xf458bf, .byte = 0x3b },
		{ .addr = 0xf458c0, .byte = 0x03 },
		{ .addr = 0xf458c1, .byte = 0xbe }
};

static const SST_RamByte roxrb_final_ram_14[] = {
		{ .addr = 0xf458bc, .byte = 0xec },
		{ .addr = 0xf458bd, .byte = 0x17 },
		{ .addr = 0xf458be, .byte = 0x2c },
		{ .addr = 0xf458bf, .byte = 0x3b },
		{ .addr = 0xf458c0, .byte = 0x03 },
		{ .addr = 0xf458c1, .byte = 0xbe }
};

static const SST_Transaction roxrb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16013504, .data = 958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrb_initial_ram_15[] = {
		{ .addr = 0xb2b928, .byte = 0xe8 },
		{ .addr = 0xb2b929, .byte = 0x31 },
		{ .addr = 0xb2b92a, .byte = 0x50 },
		{ .addr = 0xb2b92b, .byte = 0x9a },
		{ .addr = 0xb2b92c, .byte = 0x1c },
		{ .addr = 0xb2b92d, .byte = 0xf0 }
};

static const SST_RamByte roxrb_final_ram_15[] = {
		{ .addr = 0xb2b928, .byte = 0xe8 },
		{ .addr = 0xb2b929, .byte = 0x31 },
		{ .addr = 0xb2b92a, .byte = 0x50 },
		{ .addr = 0xb2b92b, .byte = 0x9a },
		{ .addr = 0xb2b92c, .byte = 0x1c },
		{ .addr = 0xb2b92d, .byte = 0xf0 }
};

static const SST_Transaction roxrb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11712812, .data = 7408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

static const SST_RamByte roxrb_initial_ram_16[] = {
		{ .addr = 0xa63c30, .byte = 0xec },
		{ .addr = 0xa63c31, .byte = 0x11 },
		{ .addr = 0xa63c32, .byte = 0x9b },
		{ .addr = 0xa63c33, .byte = 0xb7 },
		{ .addr = 0xa63c34, .byte = 0x43 },
		{ .addr = 0xa63c35, .byte = 0x9d }
};

static const SST_RamByte roxrb_final_ram_16[] = {
		{ .addr = 0xa63c30, .byte = 0xec },
		{ .addr = 0xa63c31, .byte = 0x11 },
		{ .addr = 0xa63c32, .byte = 0x9b },
		{ .addr = 0xa63c33, .byte = 0xb7 },
		{ .addr = 0xa63c34, .byte = 0x43 },
		{ .addr = 0xa63c35, .byte = 0x9d }
};

static const SST_Transaction roxrb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10894388, .data = 17309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrb_initial_ram_17[] = {
		{ .addr = 0x6aaca2, .byte = 0xec },
		{ .addr = 0x6aaca3, .byte = 0x34 },
		{ .addr = 0x6aaca4, .byte = 0xb1 },
		{ .addr = 0x6aaca5, .byte = 0x9b },
		{ .addr = 0x6aaca6, .byte = 0x8d },
		{ .addr = 0x6aaca7, .byte = 0x42 }
};

static const SST_RamByte roxrb_final_ram_17[] = {
		{ .addr = 0x6aaca2, .byte = 0xec },
		{ .addr = 0x6aaca3, .byte = 0x34 },
		{ .addr = 0x6aaca4, .byte = 0xb1 },
		{ .addr = 0x6aaca5, .byte = 0x9b },
		{ .addr = 0x6aaca6, .byte = 0x8d },
		{ .addr = 0x6aaca7, .byte = 0x42 }
};

static const SST_Transaction roxrb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6991014, .data = 36162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 78 },
};

static const SST_RamByte roxrb_initial_ram_18[] = {
		{ .addr = 0x9a689a, .byte = 0xec },
		{ .addr = 0x9a689b, .byte = 0x33 },
		{ .addr = 0x9a689c, .byte = 0x2b },
		{ .addr = 0x9a689d, .byte = 0xc2 },
		{ .addr = 0x9a689e, .byte = 0x0a },
		{ .addr = 0x9a689f, .byte = 0x72 }
};

static const SST_RamByte roxrb_final_ram_18[] = {
		{ .addr = 0x9a689a, .byte = 0xec },
		{ .addr = 0x9a689b, .byte = 0x33 },
		{ .addr = 0x9a689c, .byte = 0x2b },
		{ .addr = 0x9a689d, .byte = 0xc2 },
		{ .addr = 0x9a689e, .byte = 0x0a },
		{ .addr = 0x9a689f, .byte = 0x72 }
};

static const SST_Transaction roxrb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10119326, .data = 2674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 54 },
};

static const SST_RamByte roxrb_initial_ram_19[] = {
		{ .addr = 0xabdcd2, .byte = 0xe0 },
		{ .addr = 0xabdcd3, .byte = 0x32 },
		{ .addr = 0xabdcd4, .byte = 0x67 },
		{ .addr = 0xabdcd5, .byte = 0xc9 },
		{ .addr = 0xabdcd6, .byte = 0xda },
		{ .addr = 0xabdcd7, .byte = 0x44 }
};

static const SST_RamByte roxrb_final_ram_19[] = {
		{ .addr = 0xabdcd2, .byte = 0xe0 },
		{ .addr = 0xabdcd3, .byte = 0x32 },
		{ .addr = 0xabdcd4, .byte = 0x67 },
		{ .addr = 0xabdcd5, .byte = 0xc9 },
		{ .addr = 0xabdcd6, .byte = 0xda },
		{ .addr = 0xabdcd7, .byte = 0x44 }
};

static const SST_Transaction roxrb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11263190, .data = 55876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 62 },
};

static const SST_RamByte roxrb_initial_ram_20[] = {
		{ .addr = 0xbae7a0, .byte = 0xe2 },
		{ .addr = 0xbae7a1, .byte = 0x16 },
		{ .addr = 0xbae7a2, .byte = 0x66 },
		{ .addr = 0xbae7a3, .byte = 0xc6 },
		{ .addr = 0xbae7a4, .byte = 0xf7 },
		{ .addr = 0xbae7a5, .byte = 0x51 }
};

static const SST_RamByte roxrb_final_ram_20[] = {
		{ .addr = 0xbae7a0, .byte = 0xe2 },
		{ .addr = 0xbae7a1, .byte = 0x16 },
		{ .addr = 0xbae7a2, .byte = 0x66 },
		{ .addr = 0xbae7a3, .byte = 0xc6 },
		{ .addr = 0xbae7a4, .byte = 0xf7 },
		{ .addr = 0xbae7a5, .byte = 0x51 }
};

static const SST_Transaction roxrb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12248996, .data = 63313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte roxrb_initial_ram_21[] = {
		{ .addr = 0x166f1a, .byte = 0xe4 },
		{ .addr = 0x166f1b, .byte = 0x34 },
		{ .addr = 0x166f1c, .byte = 0xcb },
		{ .addr = 0x166f1d, .byte = 0x5c },
		{ .addr = 0x166f1e, .byte = 0xfb },
		{ .addr = 0x166f1f, .byte = 0x54 }
};

static const SST_RamByte roxrb_final_ram_21[] = {
		{ .addr = 0x166f1a, .byte = 0xe4 },
		{ .addr = 0x166f1b, .byte = 0x34 },
		{ .addr = 0x166f1c, .byte = 0xcb },
		{ .addr = 0x166f1d, .byte = 0x5c },
		{ .addr = 0x166f1e, .byte = 0xfb },
		{ .addr = 0x166f1f, .byte = 0x54 }
};

static const SST_Transaction roxrb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1470238, .data = 64340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrb_initial_ram_22[] = {
		{ .addr = 0x7c42c0, .byte = 0xe6 },
		{ .addr = 0x7c42c1, .byte = 0x30 },
		{ .addr = 0x7c42c2, .byte = 0xa5 },
		{ .addr = 0x7c42c3, .byte = 0x7f },
		{ .addr = 0x7c42c4, .byte = 0xc1 },
		{ .addr = 0x7c42c5, .byte = 0x9e }
};

static const SST_RamByte roxrb_final_ram_22[] = {
		{ .addr = 0x7c42c0, .byte = 0xe6 },
		{ .addr = 0x7c42c1, .byte = 0x30 },
		{ .addr = 0x7c42c2, .byte = 0xa5 },
		{ .addr = 0x7c42c3, .byte = 0x7f },
		{ .addr = 0x7c42c4, .byte = 0xc1 },
		{ .addr = 0x7c42c5, .byte = 0x9e }
};

static const SST_Transaction roxrb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8143556, .data = 49566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 74 },
};

static const SST_RamByte roxrb_initial_ram_23[] = {
		{ .addr = 0x18f29c, .byte = 0xee },
		{ .addr = 0x18f29d, .byte = 0x33 },
		{ .addr = 0x18f29e, .byte = 0x21 },
		{ .addr = 0x18f29f, .byte = 0x5a },
		{ .addr = 0x18f2a0, .byte = 0xa1 },
		{ .addr = 0x18f2a1, .byte = 0xc6 }
};

static const SST_RamByte roxrb_final_ram_23[] = {
		{ .addr = 0x18f29c, .byte = 0xee },
		{ .addr = 0x18f29d, .byte = 0x33 },
		{ .addr = 0x18f29e, .byte = 0x21 },
		{ .addr = 0x18f29f, .byte = 0x5a },
		{ .addr = 0x18f2a0, .byte = 0xa1 },
		{ .addr = 0x18f2a1, .byte = 0xc6 }
};

static const SST_Transaction roxrb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1634976, .data = 41414, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte roxrb_initial_ram_24[] = {
		{ .addr = 0xb8a77a, .byte = 0xee },
		{ .addr = 0xb8a77b, .byte = 0x10 },
		{ .addr = 0xb8a77c, .byte = 0x6f },
		{ .addr = 0xb8a77d, .byte = 0xf8 },
		{ .addr = 0xb8a77e, .byte = 0xa5 },
		{ .addr = 0xb8a77f, .byte = 0x97 }
};

static const SST_RamByte roxrb_final_ram_24[] = {
		{ .addr = 0xb8a77a, .byte = 0xee },
		{ .addr = 0xb8a77b, .byte = 0x10 },
		{ .addr = 0xb8a77c, .byte = 0x6f },
		{ .addr = 0xb8a77d, .byte = 0xf8 },
		{ .addr = 0xb8a77e, .byte = 0xa5 },
		{ .addr = 0xb8a77f, .byte = 0x97 }
};

static const SST_Transaction roxrb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12101502, .data = 42391, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrb_initial_ram_25[] = {
		{ .addr = 0xb721de, .byte = 0xec },
		{ .addr = 0xb721df, .byte = 0x13 },
		{ .addr = 0xb721e0, .byte = 0x1a },
		{ .addr = 0xb721e1, .byte = 0x5f },
		{ .addr = 0xb721e2, .byte = 0xba },
		{ .addr = 0xb721e3, .byte = 0xa8 }
};

static const SST_RamByte roxrb_final_ram_25[] = {
		{ .addr = 0xb721de, .byte = 0xec },
		{ .addr = 0xb721df, .byte = 0x13 },
		{ .addr = 0xb721e0, .byte = 0x1a },
		{ .addr = 0xb721e1, .byte = 0x5f },
		{ .addr = 0xb721e2, .byte = 0xba },
		{ .addr = 0xb721e3, .byte = 0xa8 }
};

static const SST_Transaction roxrb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12001762, .data = 47784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrb_initial_ram_26[] = {
		{ .addr = 0xb1f398, .byte = 0xee },
		{ .addr = 0xb1f399, .byte = 0x13 },
		{ .addr = 0xb1f39a, .byte = 0xb1 },
		{ .addr = 0xb1f39b, .byte = 0x17 },
		{ .addr = 0xb1f39c, .byte = 0xaa },
		{ .addr = 0xb1f39d, .byte = 0xca }
};

static const SST_RamByte roxrb_final_ram_26[] = {
		{ .addr = 0xb1f398, .byte = 0xee },
		{ .addr = 0xb1f399, .byte = 0x13 },
		{ .addr = 0xb1f39a, .byte = 0xb1 },
		{ .addr = 0xb1f39b, .byte = 0x17 },
		{ .addr = 0xb1f39c, .byte = 0xaa },
		{ .addr = 0xb1f39d, .byte = 0xca }
};

static const SST_Transaction roxrb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11662236, .data = 43722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxrb_initial_ram_27[] = {
		{ .addr = 0xf3f4ec, .byte = 0xec },
		{ .addr = 0xf3f4ed, .byte = 0x36 },
		{ .addr = 0xf3f4ee, .byte = 0xc3 },
		{ .addr = 0xf3f4ef, .byte = 0x55 },
		{ .addr = 0xf3f4f0, .byte = 0xb1 },
		{ .addr = 0xf3f4f1, .byte = 0x97 }
};

static const SST_RamByte roxrb_final_ram_27[] = {
		{ .addr = 0xf3f4ec, .byte = 0xec },
		{ .addr = 0xf3f4ed, .byte = 0x36 },
		{ .addr = 0xf3f4ee, .byte = 0xc3 },
		{ .addr = 0xf3f4ef, .byte = 0x55 },
		{ .addr = 0xf3f4f0, .byte = 0xb1 },
		{ .addr = 0xf3f4f1, .byte = 0x97 }
};

static const SST_Transaction roxrb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15987952, .data = 45463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 76 },
};

static const SST_RamByte roxrb_initial_ram_28[] = {
		{ .addr = 0x3b13c0, .byte = 0xe0 },
		{ .addr = 0x3b13c1, .byte = 0x34 },
		{ .addr = 0x3b13c2, .byte = 0x58 },
		{ .addr = 0x3b13c3, .byte = 0x6d },
		{ .addr = 0x3b13c4, .byte = 0x86 },
		{ .addr = 0x3b13c5, .byte = 0x2b }
};

static const SST_RamByte roxrb_final_ram_28[] = {
		{ .addr = 0x3b13c0, .byte = 0xe0 },
		{ .addr = 0x3b13c1, .byte = 0x34 },
		{ .addr = 0x3b13c2, .byte = 0x58 },
		{ .addr = 0x3b13c3, .byte = 0x6d },
		{ .addr = 0x3b13c4, .byte = 0x86 },
		{ .addr = 0x3b13c5, .byte = 0x2b }
};

static const SST_Transaction roxrb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3871684, .data = 34347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte roxrb_initial_ram_29[] = {
		{ .addr = 0xfa0ce2, .byte = 0xe4 },
		{ .addr = 0xfa0ce3, .byte = 0x11 },
		{ .addr = 0xfa0ce4, .byte = 0xa4 },
		{ .addr = 0xfa0ce5, .byte = 0xc3 },
		{ .addr = 0xfa0ce6, .byte = 0xae },
		{ .addr = 0xfa0ce7, .byte = 0x57 }
};

static const SST_RamByte roxrb_final_ram_29[] = {
		{ .addr = 0xfa0ce2, .byte = 0xe4 },
		{ .addr = 0xfa0ce3, .byte = 0x11 },
		{ .addr = 0xfa0ce4, .byte = 0xa4 },
		{ .addr = 0xfa0ce5, .byte = 0xc3 },
		{ .addr = 0xfa0ce6, .byte = 0xae },
		{ .addr = 0xfa0ce7, .byte = 0x57 }
};

static const SST_Transaction roxrb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16387302, .data = 44631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrb_initial_ram_30[] = {
		{ .addr = 0x811290, .byte = 0xec },
		{ .addr = 0x811291, .byte = 0x10 },
		{ .addr = 0x811292, .byte = 0x37 },
		{ .addr = 0x811293, .byte = 0xf2 },
		{ .addr = 0x811294, .byte = 0x16 },
		{ .addr = 0x811295, .byte = 0x82 }
};

static const SST_RamByte roxrb_final_ram_30[] = {
		{ .addr = 0x811290, .byte = 0xec },
		{ .addr = 0x811291, .byte = 0x10 },
		{ .addr = 0x811292, .byte = 0x37 },
		{ .addr = 0x811293, .byte = 0xf2 },
		{ .addr = 0x811294, .byte = 0x16 },
		{ .addr = 0x811295, .byte = 0x82 }
};

static const SST_Transaction roxrb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8458900, .data = 5762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrb_initial_ram_31[] = {
		{ .addr = 0x2752c4, .byte = 0xe8 },
		{ .addr = 0x2752c5, .byte = 0x37 },
		{ .addr = 0x2752c6, .byte = 0x6b },
		{ .addr = 0x2752c7, .byte = 0x79 },
		{ .addr = 0x2752c8, .byte = 0xf2 },
		{ .addr = 0x2752c9, .byte = 0x70 }
};

static const SST_RamByte roxrb_final_ram_31[] = {
		{ .addr = 0x2752c4, .byte = 0xe8 },
		{ .addr = 0x2752c5, .byte = 0x37 },
		{ .addr = 0x2752c6, .byte = 0x6b },
		{ .addr = 0x2752c7, .byte = 0x79 },
		{ .addr = 0x2752c8, .byte = 0xf2 },
		{ .addr = 0x2752c9, .byte = 0x70 }
};

static const SST_Transaction roxrb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2577096, .data = 62064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

static const SST_TestCase roxrb[] = {
	{
		.name = "000 ROXR.b D6, D1 ec31",
		.initial = {
			.regs = {
				3623841440, 3198346320, 3386104119, 552690540, 4112752369, 2557529842, 1599728174, 1542238217, 2158505195, 4052486220, 3152230173, 3850791191, 2370211014, 797637923, 2900650829, 4168450, 5012426, 34306, 2163592
			},
			.prefetch0 = 60465,
			.prefetch1 = 831,
			.ram = roxrb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3623841440, 3198346280, 3386104119, 552690540, 4112752369, 2557529842, 1599728174, 1542238217, 2158505195, 4052486220, 3152230173, 3850791191, 2370211014, 797637923, 2900650829, 4168450, 5012426, 34304, 2163594
			},
			.prefetch0 = 831,
			.prefetch1 = 60337,
			.ram = roxrb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_0,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "001 ROXR.b D3, D7 e637",
		.initial = {
			.regs = {
				3955802285, 2873352649, 3896981049, 1712214939, 3867874357, 1521383477, 3818508784, 3713394239, 3173452334, 1762441970, 3674935749, 2521918737, 1785518079, 2622116907, 2557469463, 10029636, 1665662, 8194, 862790
			},
			.prefetch0 = 58935,
			.prefetch1 = 38677,
			.ram = roxrb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3955802285, 2873352649, 3896981049, 1712214939, 3867874357, 1521383477, 3818508784, 3713394239, 3173452334, 1762441970, 3674935749, 2521918737, 1785518079, 2622116907, 2557469463, 10029636, 1665662, 8192, 862792
			},
			.prefetch0 = 38677,
			.prefetch1 = 45841,
			.ram = roxrb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_1,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "002 ROXR.b 6, D4 ec14",
		.initial = {
			.regs = {
				3411919093, 270616134, 2073794802, 2861570520, 2410857770, 4140010555, 3775774448, 2017531986, 3557840843, 2730980962, 979664822, 3010001288, 2473355767, 2100044683, 1901575239, 14816566, 5779020, 1290, 15366182
			},
			.prefetch0 = 60436,
			.prefetch1 = 41488,
			.ram = roxrb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3411919093, 270616134, 2073794802, 2861570520, 2410857808, 4140010555, 3775774448, 2017531986, 3557840843, 2730980962, 979664822, 3010001288, 2473355767, 2100044683, 1901575239, 14816566, 5779020, 1297, 15366184
			},
			.prefetch0 = 41488,
			.prefetch1 = 64784,
			.ram = roxrb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_2,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "003 ROXR.b D0, D4 e034",
		.initial = {
			.regs = {
				24604646, 2491272822, 2163616301, 1786832284, 2746872398, 989869056, 3094405497, 2175956382, 4242925738, 1476640198, 2091356420, 2575558407, 3903436520, 303475217, 1228634161, 8111412, 3057864, 32794, 15943850
			},
			.prefetch0 = 57396,
			.prefetch1 = 19678,
			.ram = roxrb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				24604646, 2491272822, 2163616301, 1786832284, 2746872403, 989869056, 3094405497, 2175956382, 4242925738, 1476640198, 2091356420, 2575558407, 3903436520, 303475217, 1228634161, 8111412, 3057864, 32785, 15943852
			},
			.prefetch0 = 19678,
			.prefetch1 = 56439,
			.ram = roxrb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_3,
		.transactions_len = 2,
		.lenght = 82,
	},
	{
		.name = "004 ROXR.b 3, D3 e613",
		.initial = {
			.regs = {
				3436961865, 1569066274, 2308893182, 1593647778, 1233848092, 4189639450, 1643515893, 1027521833, 3771725428, 1448058382, 1915527917, 3939696227, 4194380249, 3863097121, 2507878080, 3468894, 5665150, 9993, 13197004
			},
			.prefetch0 = 58899,
			.prefetch1 = 44940,
			.ram = roxrb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3436961865, 1569066274, 2308893182, 1593647764, 1233848092, 4189639450, 1643515893, 1027521833, 3771725428, 1448058382, 1915527917, 3939696227, 4194380249, 3863097121, 2507878080, 3468894, 5665150, 9992, 13197006
			},
			.prefetch0 = 44940,
			.prefetch1 = 15363,
			.ram = roxrb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_4,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "005 ROXR.b D3, D2 e632",
		.initial = {
			.regs = {
				840009084, 1027738922, 3799379320, 4118073811, 3398162568, 1636909915, 2949656110, 2162327400, 2006330245, 2414729779, 1790982881, 405503359, 1570908301, 4208702647, 1796576049, 9641658, 8046968, 9501, 7203358
			},
			.prefetch0 = 58930,
			.prefetch1 = 7672,
			.ram = roxrb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				840009084, 1027738922, 3799379388, 4118073811, 3398162568, 1636909915, 2949656110, 2162327400, 2006330245, 2414729779, 1790982881, 405503359, 1570908301, 4208702647, 1796576049, 9641658, 8046968, 9480, 7203360
			},
			.prefetch0 = 7672,
			.prefetch1 = 19830,
			.ram = roxrb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_5,
		.transactions_len = 2,
		.lenght = 44,
	},
	{
		.name = "006 ROXR.b D2, D3 e433",
		.initial = {
			.regs = {
				1727092143, 3889552038, 3924715754, 2368386102, 1735619417, 1558650647, 2501334025, 1556456797, 1649535389, 821840276, 2972739306, 2674815682, 3611819032, 2377680886, 930213016, 13813158, 14930198, 41744, 8158854
			},
			.prefetch0 = 58419,
			.prefetch1 = 46931,
			.ram = roxrb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1727092143, 3889552038, 3924715754, 2368386228, 1735619417, 1558650647, 2501334025, 1556456797, 1649535389, 821840276, 2972739306, 2674815682, 3611819032, 2377680886, 930213016, 13813158, 14930198, 41753, 8158856
			},
			.prefetch0 = 46931,
			.prefetch1 = 1918,
			.ram = roxrb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_6,
		.transactions_len = 2,
		.lenght = 90,
	},
	{
		.name = "007 ROXR.b 7, D1 ee11",
		.initial = {
			.regs = {
				3775706477, 304201729, 3671068827, 2006807780, 824798765, 3076685385, 2791969991, 945063881, 3283850243, 3517878788, 1051899160, 2874815492, 3081525401, 3135280646, 2013181960, 9198562, 6903506, 40973, 14043038
			},
			.prefetch0 = 60945,
			.prefetch1 = 5105,
			.ram = roxrb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3775706477, 304201732, 3671068827, 2006807780, 824798765, 3076685385, 2791969991, 945063881, 3283850243, 3517878788, 1051899160, 2874815492, 3081525401, 3135280646, 2013181960, 9198562, 6903506, 40960, 14043040
			},
			.prefetch0 = 5105,
			.prefetch1 = 22784,
			.ram = roxrb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_7,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "008 ROXR.b 8, D5 e015",
		.initial = {
			.regs = {
				794885470, 2403002096, 464386449, 404458671, 2501737655, 3933984990, 1767254966, 3088238113, 3118953808, 435572837, 3294261675, 1010147109, 434998714, 1794133333, 2453639445, 5758548, 7679892, 34053, 13434924
			},
			.prefetch0 = 57365,
			.prefetch1 = 15803,
			.ram = roxrb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				794885470, 2403002096, 464386449, 404458671, 2501737655, 3933984956, 1767254966, 3088238113, 3118953808, 435572837, 3294261675, 1010147109, 434998714, 1794133333, 2453639445, 5758548, 7679892, 34073, 13434926
			},
			.prefetch0 = 15803,
			.prefetch1 = 46607,
			.ram = roxrb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_8,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "009 ROXR.b D2, D0 e430",
		.initial = {
			.regs = {
				4089985635, 2808374736, 3933962555, 1081452552, 3240735115, 975665174, 482933893, 1876312672, 1191988853, 508386147, 4291146973, 1966130476, 2603492198, 543824897, 448374893, 10380522, 2498626, 41739, 10515654
			},
			.prefetch0 = 58416,
			.prefetch1 = 60943,
			.ram = roxrb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4089985587, 2808374736, 3933962555, 1081452552, 3240735115, 975665174, 482933893, 1876312672, 1191988853, 508386147, 4291146973, 1966130476, 2603492198, 543824897, 448374893, 10380522, 2498626, 41728, 10515656
			},
			.prefetch0 = 60943,
			.prefetch1 = 22245,
			.ram = roxrb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_9,
		.transactions_len = 2,
		.lenght = 124,
	},
	{
		.name = "010 ROXR.b 3, D5 e615",
		.initial = {
			.regs = {
				821108416, 2500282072, 3483986035, 4084747875, 2283073786, 2011807223, 1543550232, 1663636161, 532553762, 4241826593, 3778612960, 1687925062, 1196850671, 36033142, 2072588760, 8520266, 2540568, 9476, 8303974
			},
			.prefetch0 = 58901,
			.prefetch1 = 56505,
			.ram = roxrb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				821108416, 2500282072, 3483986035, 4084747875, 2283073786, 2011807198, 1543550232, 1663636161, 532553762, 4241826593, 3778612960, 1687925062, 1196850671, 36033142, 2072588760, 8520266, 2540568, 9497, 8303976
			},
			.prefetch0 = 56505,
			.prefetch1 = 18235,
			.ram = roxrb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_10,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "011 ROXR.b 1, D1 e211",
		.initial = {
			.regs = {
				1017950149, 4272153014, 2798019645, 3355446016, 1141594779, 4037912480, 659667920, 4106854451, 640817104, 4282140208, 3445644131, 3768520027, 1543082044, 849479702, 3840667904, 1087678, 972562, 1816, 6298918
			},
			.prefetch0 = 57873,
			.prefetch1 = 43264,
			.ram = roxrb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1017950149, 4272153051, 2798019645, 3355446016, 1141594779, 4037912480, 659667920, 4106854451, 640817104, 4282140208, 3445644131, 3768520027, 1543082044, 849479702, 3840667904, 1087678, 972562, 1800, 6298920
			},
			.prefetch0 = 43264,
			.prefetch1 = 44838,
			.ram = roxrb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 ROXR.b 4, D3 e813",
		.initial = {
			.regs = {
				364797761, 4210731555, 1756957812, 2721559936, 3245518489, 2434835110, 829415840, 897631704, 134470206, 3186735632, 1636155367, 1913420021, 2200112801, 2777806332, 934086568, 13629388, 7904782, 34572, 3090560
			},
			.prefetch0 = 59411,
			.prefetch1 = 53142,
			.ram = roxrb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				364797761, 4210731555, 1756957812, 2721559816, 3245518489, 2434835110, 829415840, 897631704, 134470206, 3186735632, 1636155367, 1913420021, 2200112801, 2777806332, 934086568, 13629388, 7904782, 34560, 3090562
			},
			.prefetch0 = 53142,
			.prefetch1 = 42300,
			.ram = roxrb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_12,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "013 ROXR.b 8, D7 e017",
		.initial = {
			.regs = {
				1538957536, 3220783285, 1438230208, 2587211810, 1616796990, 43331087, 691020892, 4133488216, 3475196923, 4116264139, 2155963638, 784071170, 171640657, 4281669809, 2856544020, 16130158, 13273704, 41737, 10119136
			},
			.prefetch0 = 57367,
			.prefetch1 = 28474,
			.ram = roxrb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1538957536, 3220783285, 1438230208, 2587211810, 1616796990, 43331087, 691020892, 4133488304, 3475196923, 4116264139, 2155963638, 784071170, 171640657, 4281669809, 2856544020, 16130158, 13273704, 41736, 10119138
			},
			.prefetch0 = 28474,
			.prefetch1 = 53090,
			.ram = roxrb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_13,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "014 ROXR.b 6, D7 ec17",
		.initial = {
			.regs = {
				2249236637, 2862371381, 313846869, 3449455268, 3352146143, 854953721, 1664738564, 2082864736, 173055772, 3649505245, 4158176957, 1320148759, 3160610948, 585542590, 506713381, 11507614, 7752706, 9991, 16013504
			},
			.prefetch0 = 60439,
			.prefetch1 = 11323,
			.ram = roxrb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2249236637, 2862371381, 313846869, 3449455268, 3352146143, 854953721, 1664738564, 2082864641, 173055772, 3649505245, 4158176957, 1320148759, 3160610948, 585542590, 506713381, 11507614, 7752706, 10001, 16013506
			},
			.prefetch0 = 11323,
			.prefetch1 = 958,
			.ram = roxrb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_14,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "015 ROXR.b D4, D1 e831",
		.initial = {
			.regs = {
				4023968480, 1134613110, 3707019450, 2761405097, 1261242876, 2627374778, 2510066234, 3099765882, 3844692182, 3276201529, 2485436227, 897641558, 1715822972, 1176645119, 2584168451, 10507574, 12673544, 42765, 11712812
			},
			.prefetch0 = 59441,
			.prefetch1 = 20634,
			.ram = roxrb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4023968480, 1134613169, 3707019450, 2761405097, 1261242876, 2627374778, 2510066234, 3099765882, 3844692182, 3276201529, 2485436227, 897641558, 1715822972, 1176645119, 2584168451, 10507574, 12673544, 42777, 11712814
			},
			.prefetch0 = 20634,
			.prefetch1 = 7408,
			.ram = roxrb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_15,
		.transactions_len = 2,
		.lenght = 126,
	},
	{
		.name = "016 ROXR.b 6, D1 ec11",
		.initial = {
			.regs = {
				817549490, 2540614412, 3713835760, 589428415, 3048239557, 610880737, 1566430257, 883400051, 3647496916, 2555820967, 3245135353, 3959587006, 1209109752, 3341974723, 2182044216, 9379134, 11529436, 42761, 10894388
			},
			.prefetch0 = 60433,
			.prefetch1 = 39863,
			.ram = roxrb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				817549490, 2540614496, 3713835760, 589428415, 3048239557, 610880737, 1566430257, 883400051, 3647496916, 2555820967, 3245135353, 3959587006, 1209109752, 3341974723, 2182044216, 9379134, 11529436, 42752, 10894390
			},
			.prefetch0 = 39863,
			.prefetch1 = 17309,
			.ram = roxrb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_16,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "017 ROXR.b D6, D4 ec34",
		.initial = {
			.regs = {
				540800061, 1690568945, 39375077, 2710430459, 957527787, 2809370476, 3638679142, 1510968493, 111212425, 349133206, 2114049121, 3347195426, 3898446284, 1282838442, 3991505140, 11903078, 13646340, 269, 6991014
			},
			.prefetch0 = 60468,
			.prefetch1 = 45467,
			.ram = roxrb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				540800061, 1690568945, 39375077, 2710430459, 957527738, 2809370476, 3638679142, 1510968493, 111212425, 349133206, 2114049121, 3347195426, 3898446284, 1282838442, 3991505140, 11903078, 13646340, 281, 6991016
			},
			.prefetch0 = 45467,
			.prefetch1 = 36162,
			.ram = roxrb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_17,
		.transactions_len = 2,
		.lenght = 82,
	},
	{
		.name = "018 ROXR.b D6, D3 ec33",
		.initial = {
			.regs = {
				2126514152, 3839702939, 1612381361, 2453008683, 1220177025, 1477877203, 41290714, 1254759093, 2964502673, 1389067192, 3245943564, 2052539642, 3024662521, 4086795975, 1769088652, 5335382, 1099854, 41745, 10119326
			},
			.prefetch0 = 60467,
			.prefetch1 = 11202,
			.ram = roxrb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2126514152, 3839702939, 1612381361, 2453008727, 1220177025, 1477877203, 41290714, 1254759093, 2964502673, 1389067192, 3245943564, 2052539642, 3024662521, 4086795975, 1769088652, 5335382, 1099854, 41728, 10119328
			},
			.prefetch0 = 11202,
			.prefetch1 = 2674,
			.ram = roxrb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_18,
		.transactions_len = 2,
		.lenght = 58,
	},
	{
		.name = "019 ROXR.b D0, D2 e032",
		.initial = {
			.regs = {
				1397731422, 2786946755, 3437457254, 3513641090, 2146756249, 2863953856, 1871531731, 2560714349, 469908412, 3472131417, 1528267510, 81627263, 1157099910, 4039062022, 2217960789, 11358680, 4986636, 8450, 11263190
			},
			.prefetch0 = 57394,
			.prefetch1 = 26569,
			.ram = roxrb_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1397731422, 2786946755, 3437457292, 3513641090, 2146756249, 2863953856, 1871531731, 2560714349, 469908412, 3472131417, 1528267510, 81627263, 1157099910, 4039062022, 2217960789, 11358680, 4986636, 8473, 11263192
			},
			.prefetch0 = 26569,
			.prefetch1 = 55876,
			.ram = roxrb_final_ram_19,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_19,
		.transactions_len = 2,
		.lenght = 66,
	},
	{
		.name = "020 ROXR.b 1, D6 e216",
		.initial = {
			.regs = {
				3994440002, 1673073665, 2684403457, 4258196302, 2683999572, 3284533726, 4118024729, 1541881571, 1091332620, 204360661, 3220723665, 1272067738, 2864932270, 3995941469, 3282524405, 6847978, 13401882, 8460, 12248996
			},
			.prefetch0 = 57878,
			.prefetch1 = 26310,
			.ram = roxrb_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3994440002, 1673073665, 2684403457, 4258196302, 2683999572, 3284533726, 4118024716, 1541881571, 1091332620, 204360661, 3220723665, 1272067738, 2864932270, 3995941469, 3282524405, 6847978, 13401882, 8465, 12248998
			},
			.prefetch0 = 26310,
			.prefetch1 = 63313,
			.ram = roxrb_final_ram_20,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_20,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "021 ROXR.b D2, D4 e434",
		.initial = {
			.regs = {
				33609449, 2466349691, 296258628, 2103586343, 3072305779, 1386776539, 2876043186, 2404778424, 1977777922, 4269416279, 2092831162, 971532684, 2245459272, 130240465, 3931524941, 3269694, 645410, 8731, 1470238
			},
			.prefetch0 = 58420,
			.prefetch1 = 52060,
			.ram = roxrb_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				33609449, 2466349691, 296258628, 2103586343, 3072305783, 1386776539, 2876043186, 2404778424, 1977777922, 4269416279, 2092831162, 971532684, 2245459272, 130240465, 3931524941, 3269694, 645410, 8704, 1470240
			},
			.prefetch0 = 52060,
			.prefetch1 = 64340,
			.ram = roxrb_final_ram_21,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_21,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "022 ROXR.b D3, D0 e630",
		.initial = {
			.regs = {
				1564241605, 737534397, 1318442273, 3045290596, 564406798, 3797412976, 2338091209, 3605995661, 3673306817, 2311084476, 1174283957, 2384396616, 2858003107, 3945921764, 1623163289, 10257390, 16299714, 14, 8143556
			},
			.prefetch0 = 58928,
			.prefetch1 = 42367,
			.ram = roxrb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1564241605, 737534397, 1318442273, 3045290596, 564406798, 3797412976, 2338091209, 3605995661, 3673306817, 2311084476, 1174283957, 2384396616, 2858003107, 3945921764, 1623163289, 10257390, 16299714, 8, 8143558
			},
			.prefetch0 = 42367,
			.prefetch1 = 49566,
			.ram = roxrb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_22,
		.transactions_len = 2,
		.lenght = 78,
	},
	{
		.name = "023 ROXR.b D7, D3 ee33",
		.initial = {
			.regs = {
				2773201423, 1441880964, 2208517773, 1203217131, 1657263510, 531173563, 3997010895, 820645851, 2905924207, 696516658, 3839702447, 3389366204, 420105436, 3494694886, 1553839176, 1488382, 4427908, 42517, 1634976
			},
			.prefetch0 = 60979,
			.prefetch1 = 8538,
			.ram = roxrb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2773201423, 1441880964, 2208517773, 1203217131, 1657263510, 531173563, 3997010895, 820645851, 2905924207, 696516658, 3839702447, 3389366204, 420105436, 3494694886, 1553839176, 1488382, 4427908, 42521, 1634978
			},
			.prefetch0 = 8538,
			.prefetch1 = 41414,
			.ram = roxrb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_23,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "024 ROXR.b 7, D0 ee10",
		.initial = {
			.regs = {
				3952298631, 419174529, 834744076, 3843224413, 681088084, 600670279, 3087681778, 939887462, 2003916852, 527827928, 2022084943, 1976207905, 2557244667, 1189093076, 2591155615, 11004798, 1198862, 42520, 12101502
			},
			.prefetch0 = 60944,
			.prefetch1 = 28664,
			.ram = roxrb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3952298527, 419174529, 834744076, 3843224413, 681088084, 600670279, 3087681778, 939887462, 2003916852, 527827928, 2022084943, 1976207905, 2557244667, 1189093076, 2591155615, 11004798, 1198862, 42496, 12101504
			},
			.prefetch0 = 28664,
			.prefetch1 = 42391,
			.ram = roxrb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_24,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "025 ROXR.b 6, D3 ec13",
		.initial = {
			.regs = {
				2569954501, 951347377, 1123926980, 2539226460, 3450076861, 3323190853, 1710906650, 573721822, 2080343237, 2577779004, 3855988432, 460144791, 1345005593, 2790503384, 1880846677, 16011502, 2939146, 9483, 12001762
			},
			.prefetch0 = 60435,
			.prefetch1 = 6751,
			.ram = roxrb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2569954501, 951347377, 1123926980, 2539226593, 3450076861, 3323190853, 1710906650, 573721822, 2080343237, 2577779004, 3855988432, 460144791, 1345005593, 2790503384, 1880846677, 16011502, 2939146, 9480, 12001764
			},
			.prefetch0 = 6751,
			.prefetch1 = 47784,
			.ram = roxrb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_25,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "026 ROXR.b 7, D3 ee13",
		.initial = {
			.regs = {
				187263851, 2279366214, 1188763626, 3849005291, 1669836243, 2864208123, 2001977590, 3497933682, 1058785047, 2716070352, 2182199710, 1505623487, 3375429111, 1807809414, 3469667341, 16016464, 12630240, 1820, 11662236
			},
			.prefetch0 = 60947,
			.prefetch1 = 45335,
			.ram = roxrb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				187263851, 2279366214, 1188763626, 3849005231, 1669836243, 2864208123, 2001977590, 3497933682, 1058785047, 2716070352, 2182199710, 1505623487, 3375429111, 1807809414, 3469667341, 16016464, 12630240, 1817, 11662238
			},
			.prefetch0 = 45335,
			.prefetch1 = 43722,
			.ram = roxrb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_26,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "027 ROXR.b D6, D6 ec36",
		.initial = {
			.regs = {
				2379326067, 56603618, 2485042314, 1834577077, 1234893295, 3214200123, 1484186533, 3379004655, 2618903250, 3247553441, 1905542942, 1363786162, 2930743513, 2615026149, 3788944676, 3669488, 15018100, 1559, 15987952
			},
			.prefetch0 = 60470,
			.prefetch1 = 50005,
			.ram = roxrb_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2379326067, 56603618, 2485042314, 1834577077, 1234893295, 3214200123, 1484186578, 3379004655, 2618903250, 3247553441, 1905542942, 1363786162, 2930743513, 2615026149, 3788944676, 3669488, 15018100, 1561, 15987954
			},
			.prefetch0 = 50005,
			.prefetch1 = 45463,
			.ram = roxrb_final_ram_27,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_27,
		.transactions_len = 2,
		.lenght = 80,
	},
	{
		.name = "028 ROXR.b D0, D4 e034",
		.initial = {
			.regs = {
				3977575807, 2490599720, 2625178884, 3531969243, 134058094, 1961806860, 712112208, 2444135867, 1209160725, 4098597137, 1422812686, 552005692, 1289268368, 1268586274, 1275136457, 9831636, 11404014, 8715, 3871684
			},
			.prefetch0 = 57396,
			.prefetch1 = 22637,
			.ram = roxrb_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3977575807, 2490599720, 2625178884, 3531969243, 134058094, 1961806860, 712112208, 2444135867, 1209160725, 4098597137, 1422812686, 552005692, 1289268368, 1268586274, 1275136457, 9831636, 11404014, 8704, 3871686
			},
			.prefetch0 = 22637,
			.prefetch1 = 34347,
			.ram = roxrb_final_ram_28,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_28,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "029 ROXR.b 2, D1 e411",
		.initial = {
			.regs = {
				2936285670, 539281765, 3254545982, 4285144071, 653912756, 2323860683, 3071729203, 221551644, 1082481204, 1101729191, 1832363795, 2813327035, 2349257097, 1455376911, 4101073015, 8125956, 7380592, 9984, 16387302
			},
			.prefetch0 = 58385,
			.prefetch1 = 42179,
			.ram = roxrb_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2936285670, 539281817, 3254545982, 4285144071, 653912756, 2323860683, 3071729203, 221551644, 1082481204, 1101729191, 1832363795, 2813327035, 2349257097, 1455376911, 4101073015, 8125956, 7380592, 9992, 16387304
			},
			.prefetch0 = 42179,
			.prefetch1 = 44631,
			.ram = roxrb_final_ram_29,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_29,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "030 ROXR.b 6, D0 ec10",
		.initial = {
			.regs = {
				630437167, 892690193, 4240727411, 2774640613, 553973800, 4241868676, 559899437, 2314460162, 1612300101, 116618226, 1019323402, 3681653344, 2615977061, 1170041001, 3504323187, 2994276, 8090854, 18, 8458900
			},
			.prefetch0 = 60432,
			.prefetch1 = 14322,
			.ram = roxrb_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				630437244, 892690193, 4240727411, 2774640613, 553973800, 4241868676, 559899437, 2314460162, 1612300101, 116618226, 1019323402, 3681653344, 2615977061, 1170041001, 3504323187, 2994276, 8090854, 17, 8458902
			},
			.prefetch0 = 14322,
			.prefetch1 = 5762,
			.ram = roxrb_final_ram_30,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_30,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "031 ROXR.b D4, D7 e837",
		.initial = {
			.regs = {
				3470694160, 2290568524, 1036276470, 2315329125, 483713291, 3724104187, 203781103, 585345770, 2078552015, 3553633940, 3562593032, 735718019, 2644351607, 2525015057, 2889071246, 10118934, 16504150, 33282, 2577096
			},
			.prefetch0 = 59447,
			.prefetch1 = 27513,
			.ram = roxrb_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3470694160, 2290568524, 1036276470, 2315329125, 483713291, 3724104187, 203781103, 585345594, 2078552015, 3553633940, 3562593032, 735718019, 2644351607, 2525015057, 2889071246, 10118934, 16504150, 33297, 2577098
			},
			.prefetch0 = 27513,
			.prefetch1 = 62064,
			.ram = roxrb_final_ram_31,
			.ram_len = 6,
		},
		.transactions = roxrb_transactions_31,
		.transactions_len = 2,
		.lenght = 28,
	},
};

#endif /* RBT_ROXRB_H */