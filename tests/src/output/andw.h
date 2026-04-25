#ifndef RBT_ANDW_H
#define RBT_ANDW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte andw_initial_ram_0[] = {
		{ .addr = 0x860504, .byte = 0xcf },
		{ .addr = 0x860505, .byte = 0x5d },
		{ .addr = 0x860506, .byte = 0x9e },
		{ .addr = 0x860507, .byte = 0xc8 },
		{ .addr = 0x00000c, .byte = 0x13 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x603348, .byte = 0xe7 },
		{ .addr = 0x603349, .byte = 0xb1 },
		{ .addr = 0x60334a, .byte = 0x98 },
		{ .addr = 0x60334b, .byte = 0x94 }
};

static const SST_RamByte andw_final_ram_0[] = {
		{ .addr = 0x860504, .byte = 0xcf },
		{ .addr = 0x860505, .byte = 0x5d },
		{ .addr = 0x860506, .byte = 0x9e },
		{ .addr = 0x860507, .byte = 0xc8 },
		{ .addr = 0x9ed292, .byte = 0x05 },
		{ .addr = 0x9ed293, .byte = 0x06 },
		{ .addr = 0x9ed28e, .byte = 0xa7 },
		{ .addr = 0x9ed28f, .byte = 0x12 },
		{ .addr = 0x9ed290, .byte = 0x00 },
		{ .addr = 0x9ed291, .byte = 0x86 },
		{ .addr = 0x9ed28c, .byte = 0xcf },
		{ .addr = 0x9ed28d, .byte = 0x5d },
		{ .addr = 0x9ed28a, .byte = 0x13 },
		{ .addr = 0x9ed28b, .byte = 0xcd },
		{ .addr = 0x9ed286, .byte = 0xcf },
		{ .addr = 0x9ed287, .byte = 0x55 },
		{ .addr = 0x9ed288, .byte = 0x9c },
		{ .addr = 0x9ed289, .byte = 0xc6 },
		{ .addr = 0x00000c, .byte = 0x13 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x603348, .byte = 0xe7 },
		{ .addr = 0x603349, .byte = 0xb1 },
		{ .addr = 0x60334a, .byte = 0x98 },
		{ .addr = 0x60334b, .byte = 0x94 }
};

static const SST_Transaction andw_transactions_0[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12981196, .data = 52135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10408594, .data = 1286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10408590, .data = 42770, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10408592, .data = 134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10408588, .data = 53085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10408586, .data = 5069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10408582, .data = 53077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10408584, .data = 40134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6304584, .data = 59313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6304586, .data = 39060, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_1[] = {
		{ .addr = 0x0785d6, .byte = 0xcb },
		{ .addr = 0x0785d7, .byte = 0x57 },
		{ .addr = 0x0785d8, .byte = 0xdc },
		{ .addr = 0x0785d9, .byte = 0x93 },
		{ .addr = 0xf6313e, .byte = 0xd3 },
		{ .addr = 0xf6313f, .byte = 0x31 },
		{ .addr = 0x0785da, .byte = 0xa6 },
		{ .addr = 0x0785db, .byte = 0x30 }
};

static const SST_RamByte andw_final_ram_1[] = {
		{ .addr = 0x0785d6, .byte = 0xcb },
		{ .addr = 0x0785d7, .byte = 0x57 },
		{ .addr = 0x0785d8, .byte = 0xdc },
		{ .addr = 0x0785d9, .byte = 0x93 },
		{ .addr = 0xf6313e, .byte = 0xd3 },
		{ .addr = 0xf6313f, .byte = 0x20 },
		{ .addr = 0x0785da, .byte = 0xa6 },
		{ .addr = 0x0785db, .byte = 0x30 }
};

static const SST_Transaction andw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16134462, .data = 54065, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 493018, .data = 42544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16134462, .data = 54048, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_2[] = {
		{ .addr = 0xe4cc68, .byte = 0xc6 },
		{ .addr = 0xe4cc69, .byte = 0x40 },
		{ .addr = 0xe4cc6a, .byte = 0x9a },
		{ .addr = 0xe4cc6b, .byte = 0x10 },
		{ .addr = 0xe4cc6c, .byte = 0x78 },
		{ .addr = 0xe4cc6d, .byte = 0xb4 }
};

static const SST_RamByte andw_final_ram_2[] = {
		{ .addr = 0xe4cc68, .byte = 0xc6 },
		{ .addr = 0xe4cc69, .byte = 0x40 },
		{ .addr = 0xe4cc6a, .byte = 0x9a },
		{ .addr = 0xe4cc6b, .byte = 0x10 },
		{ .addr = 0xe4cc6c, .byte = 0x78 },
		{ .addr = 0xe4cc6d, .byte = 0xb4 }
};

static const SST_Transaction andw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14994540, .data = 30900, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_3[] = {
		{ .addr = 0x7165f2, .byte = 0xc9 },
		{ .addr = 0x7165f3, .byte = 0x5d },
		{ .addr = 0x7165f4, .byte = 0xe0 },
		{ .addr = 0x7165f5, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0x08 },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xa87812, .byte = 0xca },
		{ .addr = 0xa87813, .byte = 0xda },
		{ .addr = 0xa87814, .byte = 0xab },
		{ .addr = 0xa87815, .byte = 0xf3 }
};

static const SST_RamByte andw_final_ram_3[] = {
		{ .addr = 0x7165f2, .byte = 0xc9 },
		{ .addr = 0x7165f3, .byte = 0x5d },
		{ .addr = 0x7165f4, .byte = 0xe0 },
		{ .addr = 0x7165f5, .byte = 0xf0 },
		{ .addr = 0x11b1d0, .byte = 0x65 },
		{ .addr = 0x11b1d1, .byte = 0xf4 },
		{ .addr = 0x11b1cc, .byte = 0x85 },
		{ .addr = 0x11b1cd, .byte = 0x1f },
		{ .addr = 0x11b1ce, .byte = 0x00 },
		{ .addr = 0x11b1cf, .byte = 0x71 },
		{ .addr = 0x11b1ca, .byte = 0xc9 },
		{ .addr = 0x11b1cb, .byte = 0x5d },
		{ .addr = 0x11b1c8, .byte = 0xd7 },
		{ .addr = 0x11b1c9, .byte = 0xe1 },
		{ .addr = 0x11b1c4, .byte = 0xc9 },
		{ .addr = 0x11b1c5, .byte = 0x51 },
		{ .addr = 0x11b1c6, .byte = 0x62 },
		{ .addr = 0x11b1c7, .byte = 0xdd },
		{ .addr = 0x00000c, .byte = 0x08 },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xa87812, .byte = 0xca },
		{ .addr = 0xa87813, .byte = 0xda },
		{ .addr = 0xa87814, .byte = 0xab },
		{ .addr = 0xa87815, .byte = 0xf3 }
};

static const SST_Transaction andw_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14538720, .data = 48567, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159632, .data = 26100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159628, .data = 34079, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159630, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159626, .data = 51549, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159624, .data = 55265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159620, .data = 51537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1159622, .data = 25309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11040786, .data = 51930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11040788, .data = 44019, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_4[] = {
		{ .addr = 0xef90ca, .byte = 0xcc },
		{ .addr = 0xef90cb, .byte = 0x6a },
		{ .addr = 0xef90cc, .byte = 0x50 },
		{ .addr = 0xef90cd, .byte = 0xe3 },
		{ .addr = 0xef90ce, .byte = 0x56 },
		{ .addr = 0xef90cf, .byte = 0x4e },
		{ .addr = 0x00000c, .byte = 0xed },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0xec },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0xf8ece8, .byte = 0x12 },
		{ .addr = 0xf8ece9, .byte = 0xc9 },
		{ .addr = 0xf8ecea, .byte = 0x06 },
		{ .addr = 0xf8eceb, .byte = 0x4f }
};

static const SST_RamByte andw_final_ram_4[] = {
		{ .addr = 0xef90ca, .byte = 0xcc },
		{ .addr = 0xef90cb, .byte = 0x6a },
		{ .addr = 0xef90cc, .byte = 0x50 },
		{ .addr = 0xef90cd, .byte = 0xe3 },
		{ .addr = 0xef90ce, .byte = 0x56 },
		{ .addr = 0xef90cf, .byte = 0x4e },
		{ .addr = 0xefc096, .byte = 0x90 },
		{ .addr = 0xefc097, .byte = 0xcc },
		{ .addr = 0xefc092, .byte = 0x87 },
		{ .addr = 0xefc093, .byte = 0x07 },
		{ .addr = 0xefc094, .byte = 0x00 },
		{ .addr = 0xefc095, .byte = 0xef },
		{ .addr = 0xefc090, .byte = 0xcc },
		{ .addr = 0xefc091, .byte = 0x6a },
		{ .addr = 0xefc08e, .byte = 0xf5 },
		{ .addr = 0xefc08f, .byte = 0x05 },
		{ .addr = 0xefc08a, .byte = 0xcc },
		{ .addr = 0xefc08b, .byte = 0x71 },
		{ .addr = 0xefc08c, .byte = 0xc7 },
		{ .addr = 0xefc08d, .byte = 0xec },
		{ .addr = 0x00000c, .byte = 0xed },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0xec },
		{ .addr = 0x00000f, .byte = 0xe8 },
		{ .addr = 0xf8ece8, .byte = 0x12 },
		{ .addr = 0xf8ece9, .byte = 0xc9 },
		{ .addr = 0xf8ecea, .byte = 0x06 },
		{ .addr = 0xf8eceb, .byte = 0x4f }
};

static const SST_Transaction andw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15700174, .data = 22094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15529220, .data = 34372, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15712406, .data = 37068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15712402, .data = 34567, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15712404, .data = 239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15712400, .data = 52330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15712398, .data = 62725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15712394, .data = 52337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15712396, .data = 51180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60920, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16313576, .data = 4809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16313578, .data = 1615, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_5[] = {
		{ .addr = 0x91f1e8, .byte = 0xce },
		{ .addr = 0x91f1e9, .byte = 0x7c },
		{ .addr = 0x91f1ea, .byte = 0x48 },
		{ .addr = 0x91f1eb, .byte = 0x8c },
		{ .addr = 0x91f1ec, .byte = 0x8f },
		{ .addr = 0x91f1ed, .byte = 0xe7 },
		{ .addr = 0x91f1ee, .byte = 0x45 },
		{ .addr = 0x91f1ef, .byte = 0xde }
};

static const SST_RamByte andw_final_ram_5[] = {
		{ .addr = 0x91f1e8, .byte = 0xce },
		{ .addr = 0x91f1e9, .byte = 0x7c },
		{ .addr = 0x91f1ea, .byte = 0x48 },
		{ .addr = 0x91f1eb, .byte = 0x8c },
		{ .addr = 0x91f1ec, .byte = 0x8f },
		{ .addr = 0x91f1ed, .byte = 0xe7 },
		{ .addr = 0x91f1ee, .byte = 0x45 },
		{ .addr = 0x91f1ef, .byte = 0xde }
};

static const SST_Transaction andw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9564652, .data = 36839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9564654, .data = 17886, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_6[] = {
		{ .addr = 0xdc49f8, .byte = 0xc9 },
		{ .addr = 0xdc49f9, .byte = 0x52 },
		{ .addr = 0xdc49fa, .byte = 0x42 },
		{ .addr = 0xdc49fb, .byte = 0xd2 },
		{ .addr = 0x00000c, .byte = 0x25 },
		{ .addr = 0x00000d, .byte = 0x62 },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x62392c, .byte = 0x8f },
		{ .addr = 0x62392d, .byte = 0x3d },
		{ .addr = 0x62392e, .byte = 0x63 },
		{ .addr = 0x62392f, .byte = 0x19 }
};

static const SST_RamByte andw_final_ram_6[] = {
		{ .addr = 0xdc49f8, .byte = 0xc9 },
		{ .addr = 0xdc49f9, .byte = 0x52 },
		{ .addr = 0xdc49fa, .byte = 0x42 },
		{ .addr = 0xdc49fb, .byte = 0xd2 },
		{ .addr = 0xa8bb10, .byte = 0x49 },
		{ .addr = 0xa8bb11, .byte = 0xfa },
		{ .addr = 0xa8bb0c, .byte = 0xa1 },
		{ .addr = 0xa8bb0d, .byte = 0x14 },
		{ .addr = 0xa8bb0e, .byte = 0x00 },
		{ .addr = 0xa8bb0f, .byte = 0xdc },
		{ .addr = 0xa8bb0a, .byte = 0xc9 },
		{ .addr = 0xa8bb0b, .byte = 0x52 },
		{ .addr = 0xa8bb08, .byte = 0xd7 },
		{ .addr = 0xa8bb09, .byte = 0x89 },
		{ .addr = 0xa8bb04, .byte = 0xc9 },
		{ .addr = 0xa8bb05, .byte = 0x55 },
		{ .addr = 0xa8bb06, .byte = 0x11 },
		{ .addr = 0xa8bb07, .byte = 0x5b },
		{ .addr = 0x00000c, .byte = 0x25 },
		{ .addr = 0x00000d, .byte = 0x62 },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x62392c, .byte = 0x8f },
		{ .addr = 0x62392d, .byte = 0x3d },
		{ .addr = 0x62392e, .byte = 0x63 },
		{ .addr = 0x62392f, .byte = 0x19 }
};

static const SST_Transaction andw_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6018952, .data = 31114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11057936, .data = 18938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11057932, .data = 41236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11057934, .data = 220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11057930, .data = 51538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11057928, .data = 55177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11057924, .data = 51541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11057926, .data = 4443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6437164, .data = 36669, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6437166, .data = 25369, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_7[] = {
		{ .addr = 0xd8d26a, .byte = 0xc1 },
		{ .addr = 0xd8d26b, .byte = 0x60 },
		{ .addr = 0xd8d26c, .byte = 0x9d },
		{ .addr = 0xd8d26d, .byte = 0x5d },
		{ .addr = 0x1a9c36, .byte = 0xd3 },
		{ .addr = 0x1a9c37, .byte = 0x75 },
		{ .addr = 0xd8d26e, .byte = 0xbf },
		{ .addr = 0xd8d26f, .byte = 0x2b }
};

static const SST_RamByte andw_final_ram_7[] = {
		{ .addr = 0xd8d26a, .byte = 0xc1 },
		{ .addr = 0xd8d26b, .byte = 0x60 },
		{ .addr = 0xd8d26c, .byte = 0x9d },
		{ .addr = 0xd8d26d, .byte = 0x5d },
		{ .addr = 0x1a9c36, .byte = 0x03 },
		{ .addr = 0x1a9c37, .byte = 0x71 },
		{ .addr = 0xd8d26e, .byte = 0xbf },
		{ .addr = 0xd8d26f, .byte = 0x2b }
};

static const SST_Transaction andw_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1743926, .data = 54133, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14209646, .data = 48939, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1743926, .data = 881, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_8[] = {
		{ .addr = 0x62767a, .byte = 0xc7 },
		{ .addr = 0x62767b, .byte = 0x57 },
		{ .addr = 0x62767c, .byte = 0x42 },
		{ .addr = 0x62767d, .byte = 0x82 },
		{ .addr = 0xed10e6, .byte = 0xdd },
		{ .addr = 0xed10e7, .byte = 0x16 },
		{ .addr = 0x62767e, .byte = 0x95 },
		{ .addr = 0x62767f, .byte = 0xdc }
};

static const SST_RamByte andw_final_ram_8[] = {
		{ .addr = 0x62767a, .byte = 0xc7 },
		{ .addr = 0x62767b, .byte = 0x57 },
		{ .addr = 0x62767c, .byte = 0x42 },
		{ .addr = 0x62767d, .byte = 0x82 },
		{ .addr = 0xed10e6, .byte = 0x15 },
		{ .addr = 0xed10e7, .byte = 0x02 },
		{ .addr = 0x62767e, .byte = 0x95 },
		{ .addr = 0x62767f, .byte = 0xdc }
};

static const SST_Transaction andw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15536358, .data = 56598, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6452862, .data = 38364, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15536358, .data = 5378, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_9[] = {
		{ .addr = 0x45ceda, .byte = 0xc5 },
		{ .addr = 0x45cedb, .byte = 0x6f },
		{ .addr = 0x45cedc, .byte = 0xce },
		{ .addr = 0x45cedd, .byte = 0x2d },
		{ .addr = 0x45cede, .byte = 0x9b },
		{ .addr = 0x45cedf, .byte = 0xf6 },
		{ .addr = 0x00000c, .byte = 0xde },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0x8e },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0xa48e82, .byte = 0xdc },
		{ .addr = 0xa48e83, .byte = 0x37 },
		{ .addr = 0xa48e84, .byte = 0xdd },
		{ .addr = 0xa48e85, .byte = 0x7d }
};

static const SST_RamByte andw_final_ram_9[] = {
		{ .addr = 0x45ceda, .byte = 0xc5 },
		{ .addr = 0x45cedb, .byte = 0x6f },
		{ .addr = 0x45cedc, .byte = 0xce },
		{ .addr = 0x45cedd, .byte = 0x2d },
		{ .addr = 0x45cede, .byte = 0x9b },
		{ .addr = 0x45cedf, .byte = 0xf6 },
		{ .addr = 0xa82c06, .byte = 0xce },
		{ .addr = 0xa82c07, .byte = 0xdc },
		{ .addr = 0xa82c02, .byte = 0x81 },
		{ .addr = 0xa82c03, .byte = 0x0d },
		{ .addr = 0xa82c04, .byte = 0x00 },
		{ .addr = 0xa82c05, .byte = 0x45 },
		{ .addr = 0xa82c00, .byte = 0xc5 },
		{ .addr = 0xa82c01, .byte = 0x6f },
		{ .addr = 0xa82bfe, .byte = 0x67 },
		{ .addr = 0xa82bff, .byte = 0x11 },
		{ .addr = 0xa82bfa, .byte = 0xc5 },
		{ .addr = 0xa82bfb, .byte = 0x71 },
		{ .addr = 0xa82bfc, .byte = 0x00 },
		{ .addr = 0xa82bfd, .byte = 0xb2 },
		{ .addr = 0x00000c, .byte = 0xde },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0x8e },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0xa48e82, .byte = 0xdc },
		{ .addr = 0xa48e83, .byte = 0x37 },
		{ .addr = 0xa48e84, .byte = 0xdd },
		{ .addr = 0xa48e85, .byte = 0x7d }
};

static const SST_Transaction andw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4574942, .data = 39926, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11691792, .data = 53140, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11021318, .data = 52956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11021314, .data = 33037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11021316, .data = 69, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11021312, .data = 50543, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11021310, .data = 26385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11021306, .data = 50545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11021308, .data = 178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10784386, .data = 56375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10784388, .data = 56701, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_10[] = {
		{ .addr = 0x049fa4, .byte = 0xc3 },
		{ .addr = 0x049fa5, .byte = 0x70 },
		{ .addr = 0x049fa6, .byte = 0x82 },
		{ .addr = 0x049fa7, .byte = 0x19 },
		{ .addr = 0x049fa8, .byte = 0xcd },
		{ .addr = 0x049fa9, .byte = 0xe8 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0xb8 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xa4b85a, .byte = 0xa2 },
		{ .addr = 0xa4b85b, .byte = 0x01 },
		{ .addr = 0xa4b85c, .byte = 0x86 },
		{ .addr = 0xa4b85d, .byte = 0xc5 }
};

static const SST_RamByte andw_final_ram_10[] = {
		{ .addr = 0x049fa4, .byte = 0xc3 },
		{ .addr = 0x049fa5, .byte = 0x70 },
		{ .addr = 0x049fa6, .byte = 0x82 },
		{ .addr = 0x049fa7, .byte = 0x19 },
		{ .addr = 0x049fa8, .byte = 0xcd },
		{ .addr = 0x049fa9, .byte = 0xe8 },
		{ .addr = 0x38dd92, .byte = 0x9f },
		{ .addr = 0x38dd93, .byte = 0xa6 },
		{ .addr = 0x38dd8e, .byte = 0x20 },
		{ .addr = 0x38dd8f, .byte = 0x09 },
		{ .addr = 0x38dd90, .byte = 0x00 },
		{ .addr = 0x38dd91, .byte = 0x04 },
		{ .addr = 0x38dd8c, .byte = 0xc3 },
		{ .addr = 0x38dd8d, .byte = 0x70 },
		{ .addr = 0x38dd8a, .byte = 0xb5 },
		{ .addr = 0x38dd8b, .byte = 0xbf },
		{ .addr = 0x38dd86, .byte = 0xc3 },
		{ .addr = 0x38dd87, .byte = 0x75 },
		{ .addr = 0x38dd88, .byte = 0xc9 },
		{ .addr = 0x38dd89, .byte = 0xf2 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0xb8 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xa4b85a, .byte = 0xa2 },
		{ .addr = 0xa4b85b, .byte = 0x01 },
		{ .addr = 0xa4b85c, .byte = 0x86 },
		{ .addr = 0xa4b85d, .byte = 0xc5 }
};

static const SST_Transaction andw_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 303016, .data = 52712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15906238, .data = 5060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3726738, .data = 40870, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3726734, .data = 8201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3726736, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3726732, .data = 50032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3726730, .data = 46527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3726726, .data = 50037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3726728, .data = 51698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 47194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10795098, .data = 41473, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10795100, .data = 34501, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_11[] = {
		{ .addr = 0xf3206a, .byte = 0xca },
		{ .addr = 0xf3206b, .byte = 0x71 },
		{ .addr = 0xf3206c, .byte = 0x70 },
		{ .addr = 0xf3206d, .byte = 0xa4 },
		{ .addr = 0xf3206e, .byte = 0x9a },
		{ .addr = 0xf3206f, .byte = 0x7a },
		{ .addr = 0xe55312, .byte = 0x72 },
		{ .addr = 0xe55313, .byte = 0x73 },
		{ .addr = 0xf32070, .byte = 0x5a },
		{ .addr = 0xf32071, .byte = 0x3e }
};

static const SST_RamByte andw_final_ram_11[] = {
		{ .addr = 0xf3206a, .byte = 0xca },
		{ .addr = 0xf3206b, .byte = 0x71 },
		{ .addr = 0xf3206c, .byte = 0x70 },
		{ .addr = 0xf3206d, .byte = 0xa4 },
		{ .addr = 0xf3206e, .byte = 0x9a },
		{ .addr = 0xf3206f, .byte = 0x7a },
		{ .addr = 0xe55312, .byte = 0x72 },
		{ .addr = 0xe55313, .byte = 0x73 },
		{ .addr = 0xf32070, .byte = 0x5a },
		{ .addr = 0xf32071, .byte = 0x3e }
};

static const SST_Transaction andw_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15933550, .data = 39546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15029010, .data = 29299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15933552, .data = 23102, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_12[] = {
		{ .addr = 0x081768, .byte = 0xc0 },
		{ .addr = 0x081769, .byte = 0x7c },
		{ .addr = 0x08176a, .byte = 0x3f },
		{ .addr = 0x08176b, .byte = 0x3b },
		{ .addr = 0x08176c, .byte = 0xfb },
		{ .addr = 0x08176d, .byte = 0xbe },
		{ .addr = 0x08176e, .byte = 0x2f },
		{ .addr = 0x08176f, .byte = 0xc0 }
};

static const SST_RamByte andw_final_ram_12[] = {
		{ .addr = 0x081768, .byte = 0xc0 },
		{ .addr = 0x081769, .byte = 0x7c },
		{ .addr = 0x08176a, .byte = 0x3f },
		{ .addr = 0x08176b, .byte = 0x3b },
		{ .addr = 0x08176c, .byte = 0xfb },
		{ .addr = 0x08176d, .byte = 0xbe },
		{ .addr = 0x08176e, .byte = 0x2f },
		{ .addr = 0x08176f, .byte = 0xc0 }
};

static const SST_Transaction andw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 530284, .data = 64446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 530286, .data = 12224, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_13[] = {
		{ .addr = 0xdc1c64, .byte = 0xcd },
		{ .addr = 0xdc1c65, .byte = 0x5c },
		{ .addr = 0xdc1c66, .byte = 0xb3 },
		{ .addr = 0xdc1c67, .byte = 0xe2 },
		{ .addr = 0xa43de6, .byte = 0xa8 },
		{ .addr = 0xa43de7, .byte = 0xb2 },
		{ .addr = 0xdc1c68, .byte = 0x53 },
		{ .addr = 0xdc1c69, .byte = 0x6a }
};

static const SST_RamByte andw_final_ram_13[] = {
		{ .addr = 0xdc1c64, .byte = 0xcd },
		{ .addr = 0xdc1c65, .byte = 0x5c },
		{ .addr = 0xdc1c66, .byte = 0xb3 },
		{ .addr = 0xdc1c67, .byte = 0xe2 },
		{ .addr = 0xa43de6, .byte = 0x20 },
		{ .addr = 0xa43de7, .byte = 0x90 },
		{ .addr = 0xdc1c68, .byte = 0x53 },
		{ .addr = 0xdc1c69, .byte = 0x6a }
};

static const SST_Transaction andw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10763750, .data = 43186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14425192, .data = 21354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10763750, .data = 8336, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_14[] = {
		{ .addr = 0x2dade4, .byte = 0xc9 },
		{ .addr = 0x2dade5, .byte = 0x55 },
		{ .addr = 0x2dade6, .byte = 0xb1 },
		{ .addr = 0x2dade7, .byte = 0xb6 },
		{ .addr = 0x00000c, .byte = 0xb7 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0x5b },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x7a5b1a, .byte = 0x0d },
		{ .addr = 0x7a5b1b, .byte = 0x4f },
		{ .addr = 0x7a5b1c, .byte = 0x1d },
		{ .addr = 0x7a5b1d, .byte = 0x49 }
};

static const SST_RamByte andw_final_ram_14[] = {
		{ .addr = 0x2dade4, .byte = 0xc9 },
		{ .addr = 0x2dade5, .byte = 0x55 },
		{ .addr = 0x2dade6, .byte = 0xb1 },
		{ .addr = 0x2dade7, .byte = 0xb6 },
		{ .addr = 0xffba34, .byte = 0xad },
		{ .addr = 0xffba35, .byte = 0xe6 },
		{ .addr = 0xffba30, .byte = 0x26 },
		{ .addr = 0xffba31, .byte = 0x1a },
		{ .addr = 0xffba32, .byte = 0x00 },
		{ .addr = 0xffba33, .byte = 0x2d },
		{ .addr = 0xffba2e, .byte = 0xc9 },
		{ .addr = 0xffba2f, .byte = 0x55 },
		{ .addr = 0xffba2c, .byte = 0x38 },
		{ .addr = 0xffba2d, .byte = 0x31 },
		{ .addr = 0xffba28, .byte = 0xc9 },
		{ .addr = 0xffba29, .byte = 0x55 },
		{ .addr = 0xffba2a, .byte = 0x9f },
		{ .addr = 0xffba2b, .byte = 0x0e },
		{ .addr = 0x00000c, .byte = 0xb7 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0x5b },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x7a5b1a, .byte = 0x0d },
		{ .addr = 0x7a5b1b, .byte = 0x4f },
		{ .addr = 0x7a5b1c, .byte = 0x1d },
		{ .addr = 0x7a5b1d, .byte = 0x49 }
};

static const SST_Transaction andw_transactions_14[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 931888, .data = 65339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16759348, .data = 44518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16759344, .data = 9754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16759346, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16759342, .data = 51541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16759340, .data = 14385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16759336, .data = 51541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16759338, .data = 40718, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 23322, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8018714, .data = 3407, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8018716, .data = 7497, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_15[] = {
		{ .addr = 0x67a5a8, .byte = 0xcd },
		{ .addr = 0x67a5a9, .byte = 0x5b },
		{ .addr = 0x67a5aa, .byte = 0x4c },
		{ .addr = 0x67a5ab, .byte = 0x99 },
		{ .addr = 0x00000c, .byte = 0x9e },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0xdb },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0x30dbc0, .byte = 0x2e },
		{ .addr = 0x30dbc1, .byte = 0xe3 },
		{ .addr = 0x30dbc2, .byte = 0x2f },
		{ .addr = 0x30dbc3, .byte = 0xd3 }
};

static const SST_RamByte andw_final_ram_15[] = {
		{ .addr = 0x67a5a8, .byte = 0xcd },
		{ .addr = 0x67a5a9, .byte = 0x5b },
		{ .addr = 0x67a5aa, .byte = 0x4c },
		{ .addr = 0x67a5ab, .byte = 0x99 },
		{ .addr = 0x6ec530, .byte = 0xa5 },
		{ .addr = 0x6ec531, .byte = 0xaa },
		{ .addr = 0x6ec52c, .byte = 0x86 },
		{ .addr = 0x6ec52d, .byte = 0x0f },
		{ .addr = 0x6ec52e, .byte = 0x00 },
		{ .addr = 0x6ec52f, .byte = 0x67 },
		{ .addr = 0x6ec52a, .byte = 0xcd },
		{ .addr = 0x6ec52b, .byte = 0x5b },
		{ .addr = 0x6ec528, .byte = 0x9e },
		{ .addr = 0x6ec529, .byte = 0x2b },
		{ .addr = 0x6ec524, .byte = 0xcd },
		{ .addr = 0x6ec525, .byte = 0x51 },
		{ .addr = 0x6ec526, .byte = 0xdf },
		{ .addr = 0x6ec527, .byte = 0x75 },
		{ .addr = 0x00000c, .byte = 0x9e },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0xdb },
		{ .addr = 0x00000f, .byte = 0xc0 },
		{ .addr = 0x30dbc0, .byte = 0x2e },
		{ .addr = 0x30dbc1, .byte = 0xe3 },
		{ .addr = 0x30dbc2, .byte = 0x2f },
		{ .addr = 0x30dbc3, .byte = 0xd3 }
};

static const SST_Transaction andw_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7708202, .data = 43836, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7259440, .data = 42410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7259436, .data = 34319, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7259438, .data = 103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7259434, .data = 52571, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7259432, .data = 40491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7259428, .data = 52561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7259430, .data = 57205, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 40496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3201984, .data = 12003, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3201986, .data = 12243, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_16[] = {
		{ .addr = 0xfee368, .byte = 0xc8 },
		{ .addr = 0xfee369, .byte = 0x78 },
		{ .addr = 0xfee36a, .byte = 0x04 },
		{ .addr = 0xfee36b, .byte = 0xcb },
		{ .addr = 0xfee36c, .byte = 0x00 },
		{ .addr = 0xfee36d, .byte = 0xc1 },
		{ .addr = 0x00000c, .byte = 0xc7 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0x59 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0x965932, .byte = 0x05 },
		{ .addr = 0x965933, .byte = 0x8c },
		{ .addr = 0x965934, .byte = 0x73 },
		{ .addr = 0x965935, .byte = 0x67 }
};

static const SST_RamByte andw_final_ram_16[] = {
		{ .addr = 0xfee368, .byte = 0xc8 },
		{ .addr = 0xfee369, .byte = 0x78 },
		{ .addr = 0xfee36a, .byte = 0x04 },
		{ .addr = 0xfee36b, .byte = 0xcb },
		{ .addr = 0xfee36c, .byte = 0x00 },
		{ .addr = 0xfee36d, .byte = 0xc1 },
		{ .addr = 0xadd76a, .byte = 0xe3 },
		{ .addr = 0xadd76b, .byte = 0x6c },
		{ .addr = 0xadd766, .byte = 0x03 },
		{ .addr = 0xadd767, .byte = 0x1b },
		{ .addr = 0xadd768, .byte = 0x00 },
		{ .addr = 0xadd769, .byte = 0xfe },
		{ .addr = 0xadd764, .byte = 0xc8 },
		{ .addr = 0xadd765, .byte = 0x78 },
		{ .addr = 0xadd762, .byte = 0x04 },
		{ .addr = 0xadd763, .byte = 0xcb },
		{ .addr = 0xadd75e, .byte = 0xc8 },
		{ .addr = 0xadd75f, .byte = 0x71 },
		{ .addr = 0xadd760, .byte = 0x00 },
		{ .addr = 0xadd761, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xc7 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0x59 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0x965932, .byte = 0x05 },
		{ .addr = 0x965933, .byte = 0x8c },
		{ .addr = 0x965934, .byte = 0x73 },
		{ .addr = 0x965935, .byte = 0x67 }
};

static const SST_Transaction andw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16704364, .data = 193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1226, .data = 25272, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11392874, .data = 58220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11392870, .data = 795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11392872, .data = 254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11392868, .data = 51320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11392866, .data = 1227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11392862, .data = 51313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11392864, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22834, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9853234, .data = 1420, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9853236, .data = 29543, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_17[] = {
		{ .addr = 0xeb1d14, .byte = 0xc0 },
		{ .addr = 0xeb1d15, .byte = 0x6e },
		{ .addr = 0xeb1d16, .byte = 0xbf },
		{ .addr = 0xeb1d17, .byte = 0x6e },
		{ .addr = 0xeb1d18, .byte = 0x24 },
		{ .addr = 0xeb1d19, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0x40 },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0x9c },
		{ .addr = 0x54a49c, .byte = 0xf6 },
		{ .addr = 0x54a49d, .byte = 0x77 },
		{ .addr = 0x54a49e, .byte = 0x0d },
		{ .addr = 0x54a49f, .byte = 0x9c }
};

static const SST_RamByte andw_final_ram_17[] = {
		{ .addr = 0xeb1d14, .byte = 0xc0 },
		{ .addr = 0xeb1d15, .byte = 0x6e },
		{ .addr = 0xeb1d16, .byte = 0xbf },
		{ .addr = 0xeb1d17, .byte = 0x6e },
		{ .addr = 0xeb1d18, .byte = 0x24 },
		{ .addr = 0xeb1d19, .byte = 0xe3 },
		{ .addr = 0x40e0d8, .byte = 0x1d },
		{ .addr = 0x40e0d9, .byte = 0x16 },
		{ .addr = 0x40e0d4, .byte = 0x05 },
		{ .addr = 0x40e0d5, .byte = 0x16 },
		{ .addr = 0x40e0d6, .byte = 0x00 },
		{ .addr = 0x40e0d7, .byte = 0xeb },
		{ .addr = 0x40e0d2, .byte = 0xc0 },
		{ .addr = 0x40e0d3, .byte = 0x6e },
		{ .addr = 0x40e0d0, .byte = 0x4f },
		{ .addr = 0x40e0d1, .byte = 0x59 },
		{ .addr = 0x40e0cc, .byte = 0xc0 },
		{ .addr = 0x40e0cd, .byte = 0x71 },
		{ .addr = 0x40e0ce, .byte = 0x5e },
		{ .addr = 0x40e0cf, .byte = 0x3b },
		{ .addr = 0x00000c, .byte = 0x40 },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0x9c },
		{ .addr = 0x54a49c, .byte = 0xf6 },
		{ .addr = 0x54a49d, .byte = 0x77 },
		{ .addr = 0x54a49e, .byte = 0x0d },
		{ .addr = 0x54a49f, .byte = 0x9c }
};

static const SST_Transaction andw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15408408, .data = 9443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3886936, .data = 14380, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4251864, .data = 7446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4251860, .data = 1302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4251862, .data = 235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4251858, .data = 49262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4251856, .data = 20313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4251852, .data = 49265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4251854, .data = 24123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5547164, .data = 63095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5547166, .data = 3484, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_18[] = {
		{ .addr = 0xbaea5e, .byte = 0xc3 },
		{ .addr = 0xbaea5f, .byte = 0x73 },
		{ .addr = 0xbaea60, .byte = 0x1b },
		{ .addr = 0xbaea61, .byte = 0xa6 },
		{ .addr = 0xbaea62, .byte = 0xaa },
		{ .addr = 0xbaea63, .byte = 0x7a },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x80 },
		{ .addr = 0x00000e, .byte = 0x44 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0x804412, .byte = 0xd8 },
		{ .addr = 0x804413, .byte = 0x5b },
		{ .addr = 0x804414, .byte = 0xf2 },
		{ .addr = 0x804415, .byte = 0x6c }
};

static const SST_RamByte andw_final_ram_18[] = {
		{ .addr = 0xbaea5e, .byte = 0xc3 },
		{ .addr = 0xbaea5f, .byte = 0x73 },
		{ .addr = 0xbaea60, .byte = 0x1b },
		{ .addr = 0xbaea61, .byte = 0xa6 },
		{ .addr = 0xbaea62, .byte = 0xaa },
		{ .addr = 0xbaea63, .byte = 0x7a },
		{ .addr = 0x29bfee, .byte = 0xea },
		{ .addr = 0x29bfef, .byte = 0x60 },
		{ .addr = 0x29bfea, .byte = 0xa6 },
		{ .addr = 0x29bfeb, .byte = 0x14 },
		{ .addr = 0x29bfec, .byte = 0x00 },
		{ .addr = 0x29bfed, .byte = 0xba },
		{ .addr = 0x29bfe8, .byte = 0xc3 },
		{ .addr = 0x29bfe9, .byte = 0x73 },
		{ .addr = 0x29bfe6, .byte = 0xd3 },
		{ .addr = 0x29bfe7, .byte = 0x5f },
		{ .addr = 0x29bfe2, .byte = 0xc3 },
		{ .addr = 0x29bfe3, .byte = 0x75 },
		{ .addr = 0x29bfe4, .byte = 0xd7 },
		{ .addr = 0x29bfe5, .byte = 0xae },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x80 },
		{ .addr = 0x00000e, .byte = 0x44 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0x804412, .byte = 0xd8 },
		{ .addr = 0x804413, .byte = 0x5b },
		{ .addr = 0x804414, .byte = 0xf2 },
		{ .addr = 0x804415, .byte = 0x6c }
};

static const SST_Transaction andw_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12249698, .data = 43642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11457374, .data = 30987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736110, .data = 60000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736106, .data = 42516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736108, .data = 186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736104, .data = 50035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736102, .data = 54111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736098, .data = 50037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736100, .data = 55214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19328, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8406034, .data = 55387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8406036, .data = 62060, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_19[] = {
		{ .addr = 0x251562, .byte = 0xc6 },
		{ .addr = 0x251563, .byte = 0x54 },
		{ .addr = 0x251564, .byte = 0x8c },
		{ .addr = 0x251565, .byte = 0xbe },
		{ .addr = 0xb12080, .byte = 0x1b },
		{ .addr = 0xb12081, .byte = 0x99 },
		{ .addr = 0x251566, .byte = 0xea },
		{ .addr = 0x251567, .byte = 0x2f }
};

static const SST_RamByte andw_final_ram_19[] = {
		{ .addr = 0x251562, .byte = 0xc6 },
		{ .addr = 0x251563, .byte = 0x54 },
		{ .addr = 0x251564, .byte = 0x8c },
		{ .addr = 0x251565, .byte = 0xbe },
		{ .addr = 0xb12080, .byte = 0x1b },
		{ .addr = 0xb12081, .byte = 0x99 },
		{ .addr = 0x251566, .byte = 0xea },
		{ .addr = 0x251567, .byte = 0x2f }
};

static const SST_Transaction andw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11608192, .data = 7065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2430310, .data = 59951, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_20[] = {
		{ .addr = 0xa15cd6, .byte = 0x02 },
		{ .addr = 0xa15cd7, .byte = 0x44 },
		{ .addr = 0xa15cd8, .byte = 0x71 },
		{ .addr = 0xa15cd9, .byte = 0xc5 },
		{ .addr = 0xa15cda, .byte = 0x9c },
		{ .addr = 0xa15cdb, .byte = 0x14 },
		{ .addr = 0xa15cdc, .byte = 0x94 },
		{ .addr = 0xa15cdd, .byte = 0x5c }
};

static const SST_RamByte andw_final_ram_20[] = {
		{ .addr = 0xa15cd6, .byte = 0x02 },
		{ .addr = 0xa15cd7, .byte = 0x44 },
		{ .addr = 0xa15cd8, .byte = 0x71 },
		{ .addr = 0xa15cd9, .byte = 0xc5 },
		{ .addr = 0xa15cda, .byte = 0x9c },
		{ .addr = 0xa15cdb, .byte = 0x14 },
		{ .addr = 0xa15cdc, .byte = 0x94 },
		{ .addr = 0xa15cdd, .byte = 0x5c }
};

static const SST_Transaction andw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10575066, .data = 39956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10575068, .data = 37980, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_21[] = {
		{ .addr = 0x11d44e, .byte = 0xc2 },
		{ .addr = 0x11d44f, .byte = 0x59 },
		{ .addr = 0x11d450, .byte = 0xc8 },
		{ .addr = 0x11d451, .byte = 0x88 },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xa8e328, .byte = 0x10 },
		{ .addr = 0xa8e329, .byte = 0x15 },
		{ .addr = 0xa8e32a, .byte = 0xc4 },
		{ .addr = 0xa8e32b, .byte = 0x97 }
};

static const SST_RamByte andw_final_ram_21[] = {
		{ .addr = 0x11d44e, .byte = 0xc2 },
		{ .addr = 0x11d44f, .byte = 0x59 },
		{ .addr = 0x11d450, .byte = 0xc8 },
		{ .addr = 0x11d451, .byte = 0x88 },
		{ .addr = 0x6e90d4, .byte = 0xd4 },
		{ .addr = 0x6e90d5, .byte = 0x50 },
		{ .addr = 0x6e90d0, .byte = 0x87 },
		{ .addr = 0x6e90d1, .byte = 0x01 },
		{ .addr = 0x6e90d2, .byte = 0x00 },
		{ .addr = 0x6e90d3, .byte = 0x11 },
		{ .addr = 0x6e90ce, .byte = 0xc2 },
		{ .addr = 0x6e90cf, .byte = 0x59 },
		{ .addr = 0x6e90cc, .byte = 0xbb },
		{ .addr = 0x6e90cd, .byte = 0x6b },
		{ .addr = 0x6e90c8, .byte = 0xc2 },
		{ .addr = 0x6e90c9, .byte = 0x51 },
		{ .addr = 0x6e90ca, .byte = 0x11 },
		{ .addr = 0x6e90cb, .byte = 0x1e },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xa8e328, .byte = 0x10 },
		{ .addr = 0xa8e329, .byte = 0x15 },
		{ .addr = 0xa8e32a, .byte = 0xc4 },
		{ .addr = 0xa8e32b, .byte = 0x97 }
};

static const SST_Transaction andw_transactions_21[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2014058, .data = 24640, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7246036, .data = 54352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7246032, .data = 34561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7246034, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7246030, .data = 49753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7246028, .data = 47979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7246024, .data = 49745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7246026, .data = 4382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11068200, .data = 4117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11068202, .data = 50327, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_22[] = {
		{ .addr = 0xb4925a, .byte = 0x02 },
		{ .addr = 0xb4925b, .byte = 0x50 },
		{ .addr = 0xb4925c, .byte = 0xaf },
		{ .addr = 0xb4925d, .byte = 0xd6 },
		{ .addr = 0xb4925e, .byte = 0x26 },
		{ .addr = 0xb4925f, .byte = 0xdb },
		{ .addr = 0x8564ca, .byte = 0x60 },
		{ .addr = 0x8564cb, .byte = 0x56 },
		{ .addr = 0xb49260, .byte = 0x83 },
		{ .addr = 0xb49261, .byte = 0x19 }
};

static const SST_RamByte andw_final_ram_22[] = {
		{ .addr = 0xb4925a, .byte = 0x02 },
		{ .addr = 0xb4925b, .byte = 0x50 },
		{ .addr = 0xb4925c, .byte = 0xaf },
		{ .addr = 0xb4925d, .byte = 0xd6 },
		{ .addr = 0xb4925e, .byte = 0x26 },
		{ .addr = 0xb4925f, .byte = 0xdb },
		{ .addr = 0x8564ca, .byte = 0x20 },
		{ .addr = 0x8564cb, .byte = 0x56 },
		{ .addr = 0xb49260, .byte = 0x83 },
		{ .addr = 0xb49261, .byte = 0x19 }
};

static const SST_Transaction andw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11833950, .data = 9947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8742090, .data = 24662, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11833952, .data = 33561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8742090, .data = 8278, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_23[] = {
		{ .addr = 0xf91970, .byte = 0xc6 },
		{ .addr = 0xf91971, .byte = 0x52 },
		{ .addr = 0xf91972, .byte = 0x52 },
		{ .addr = 0xf91973, .byte = 0x5a },
		{ .addr = 0xc692b6, .byte = 0xba },
		{ .addr = 0xc692b7, .byte = 0x3c },
		{ .addr = 0xf91974, .byte = 0xd3 },
		{ .addr = 0xf91975, .byte = 0x67 }
};

static const SST_RamByte andw_final_ram_23[] = {
		{ .addr = 0xf91970, .byte = 0xc6 },
		{ .addr = 0xf91971, .byte = 0x52 },
		{ .addr = 0xf91972, .byte = 0x52 },
		{ .addr = 0xf91973, .byte = 0x5a },
		{ .addr = 0xc692b6, .byte = 0xba },
		{ .addr = 0xc692b7, .byte = 0x3c },
		{ .addr = 0xf91974, .byte = 0xd3 },
		{ .addr = 0xf91975, .byte = 0x67 }
};

static const SST_Transaction andw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13013686, .data = 47676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16324980, .data = 54119, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_24[] = {
		{ .addr = 0xefb680, .byte = 0xcb },
		{ .addr = 0xefb681, .byte = 0x6b },
		{ .addr = 0xefb682, .byte = 0x9e },
		{ .addr = 0xefb683, .byte = 0x49 },
		{ .addr = 0xefb684, .byte = 0x6b },
		{ .addr = 0xefb685, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0xed },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0xba32c8, .byte = 0x7f },
		{ .addr = 0xba32c9, .byte = 0x81 },
		{ .addr = 0xba32ca, .byte = 0xcc },
		{ .addr = 0xba32cb, .byte = 0x56 }
};

static const SST_RamByte andw_final_ram_24[] = {
		{ .addr = 0xefb680, .byte = 0xcb },
		{ .addr = 0xefb681, .byte = 0x6b },
		{ .addr = 0xefb682, .byte = 0x9e },
		{ .addr = 0xefb683, .byte = 0x49 },
		{ .addr = 0xefb684, .byte = 0x6b },
		{ .addr = 0xefb685, .byte = 0xef },
		{ .addr = 0x1f5b76, .byte = 0xb6 },
		{ .addr = 0x1f5b77, .byte = 0x82 },
		{ .addr = 0x1f5b72, .byte = 0xa6 },
		{ .addr = 0x1f5b73, .byte = 0x05 },
		{ .addr = 0x1f5b74, .byte = 0x00 },
		{ .addr = 0x1f5b75, .byte = 0xef },
		{ .addr = 0x1f5b70, .byte = 0xcb },
		{ .addr = 0x1f5b71, .byte = 0x6b },
		{ .addr = 0x1f5b6e, .byte = 0x20 },
		{ .addr = 0x1f5b6f, .byte = 0x23 },
		{ .addr = 0x1f5b6a, .byte = 0xcb },
		{ .addr = 0x1f5b6b, .byte = 0x75 },
		{ .addr = 0x1f5b6c, .byte = 0x94 },
		{ .addr = 0x1f5b6d, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0xed },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x32 },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0xba32c8, .byte = 0x7f },
		{ .addr = 0xba32c9, .byte = 0x81 },
		{ .addr = 0xba32ca, .byte = 0xcc },
		{ .addr = 0xba32cb, .byte = 0x56 }
};

static const SST_Transaction andw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15709828, .data = 27631, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9576482, .data = 57807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2055030, .data = 46722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2055026, .data = 42501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2055028, .data = 239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2055024, .data = 52075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2055022, .data = 8227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2055018, .data = 52085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2055020, .data = 38034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60858, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12202696, .data = 32641, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12202698, .data = 52310, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_25[] = {
		{ .addr = 0x180b1a, .byte = 0xc8 },
		{ .addr = 0x180b1b, .byte = 0x71 },
		{ .addr = 0x180b1c, .byte = 0xb0 },
		{ .addr = 0x180b1d, .byte = 0xd3 },
		{ .addr = 0x180b1e, .byte = 0xb8 },
		{ .addr = 0x180b1f, .byte = 0x7f },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0x36 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0x2436ec, .byte = 0xaa },
		{ .addr = 0x2436ed, .byte = 0x23 },
		{ .addr = 0x2436ee, .byte = 0xf7 },
		{ .addr = 0x2436ef, .byte = 0xc0 }
};

static const SST_RamByte andw_final_ram_25[] = {
		{ .addr = 0x180b1a, .byte = 0xc8 },
		{ .addr = 0x180b1b, .byte = 0x71 },
		{ .addr = 0x180b1c, .byte = 0xb0 },
		{ .addr = 0x180b1d, .byte = 0xd3 },
		{ .addr = 0x180b1e, .byte = 0xb8 },
		{ .addr = 0x180b1f, .byte = 0x7f },
		{ .addr = 0x5ced26, .byte = 0x0b },
		{ .addr = 0x5ced27, .byte = 0x1c },
		{ .addr = 0x5ced22, .byte = 0x23 },
		{ .addr = 0x5ced23, .byte = 0x12 },
		{ .addr = 0x5ced24, .byte = 0x00 },
		{ .addr = 0x5ced25, .byte = 0x18 },
		{ .addr = 0x5ced20, .byte = 0xc8 },
		{ .addr = 0x5ced21, .byte = 0x71 },
		{ .addr = 0x5ced1e, .byte = 0x4c },
		{ .addr = 0x5ced1f, .byte = 0xff },
		{ .addr = 0x5ced1a, .byte = 0xc8 },
		{ .addr = 0x5ced1b, .byte = 0x75 },
		{ .addr = 0x5ced1c, .byte = 0x78 },
		{ .addr = 0x5ced1d, .byte = 0x84 },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0x36 },
		{ .addr = 0x00000f, .byte = 0xec },
		{ .addr = 0x2436ec, .byte = 0xaa },
		{ .addr = 0x2436ed, .byte = 0x23 },
		{ .addr = 0x2436ee, .byte = 0xf7 },
		{ .addr = 0x2436ef, .byte = 0xc0 }
};

static const SST_Transaction andw_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1575710, .data = 47231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8670462, .data = 51550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6090022, .data = 2844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6090018, .data = 8978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6090020, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6090016, .data = 51313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6090014, .data = 19711, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6090010, .data = 51317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6090012, .data = 30852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42276, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2373356, .data = 43555, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2373358, .data = 63424, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_26[] = {
		{ .addr = 0xd60d44, .byte = 0xc2 },
		{ .addr = 0xd60d45, .byte = 0x79 },
		{ .addr = 0xd60d46, .byte = 0x50 },
		{ .addr = 0xd60d47, .byte = 0x5f },
		{ .addr = 0xd60d48, .byte = 0xc6 },
		{ .addr = 0xd60d49, .byte = 0x61 },
		{ .addr = 0xd60d4a, .byte = 0xa2 },
		{ .addr = 0xd60d4b, .byte = 0x33 },
		{ .addr = 0x00000c, .byte = 0xfb },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x85 },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0x8c85fa, .byte = 0xa0 },
		{ .addr = 0x8c85fb, .byte = 0xed },
		{ .addr = 0x8c85fc, .byte = 0xc3 },
		{ .addr = 0x8c85fd, .byte = 0x08 }
};

static const SST_RamByte andw_final_ram_26[] = {
		{ .addr = 0xd60d44, .byte = 0xc2 },
		{ .addr = 0xd60d45, .byte = 0x79 },
		{ .addr = 0xd60d46, .byte = 0x50 },
		{ .addr = 0xd60d47, .byte = 0x5f },
		{ .addr = 0xd60d48, .byte = 0xc6 },
		{ .addr = 0xd60d49, .byte = 0x61 },
		{ .addr = 0xd60d4a, .byte = 0xa2 },
		{ .addr = 0xd60d4b, .byte = 0x33 },
		{ .addr = 0xbcf710, .byte = 0x0d },
		{ .addr = 0xbcf711, .byte = 0x4a },
		{ .addr = 0xbcf70c, .byte = 0x81 },
		{ .addr = 0xbcf70d, .byte = 0x05 },
		{ .addr = 0xbcf70e, .byte = 0x00 },
		{ .addr = 0xbcf70f, .byte = 0xd6 },
		{ .addr = 0xbcf70a, .byte = 0xc2 },
		{ .addr = 0xbcf70b, .byte = 0x79 },
		{ .addr = 0xbcf708, .byte = 0xc6 },
		{ .addr = 0xbcf709, .byte = 0x61 },
		{ .addr = 0xbcf704, .byte = 0xc2 },
		{ .addr = 0xbcf705, .byte = 0x71 },
		{ .addr = 0xbcf706, .byte = 0x50 },
		{ .addr = 0xbcf707, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0xfb },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x85 },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0x8c85fa, .byte = 0xa0 },
		{ .addr = 0x8c85fb, .byte = 0xed },
		{ .addr = 0x8c85fc, .byte = 0xc3 },
		{ .addr = 0x8c85fd, .byte = 0x08 }
};

static const SST_Transaction andw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14028104, .data = 50785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14028106, .data = 41523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6276704, .data = 12071, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12384016, .data = 3402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12384012, .data = 33029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12384014, .data = 214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12384010, .data = 49785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12384008, .data = 50785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12384004, .data = 49777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12384006, .data = 20575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 34298, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9209338, .data = 41197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9209340, .data = 49928, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_27[] = {
		{ .addr = 0x626fe0, .byte = 0x02 },
		{ .addr = 0x626fe1, .byte = 0x68 },
		{ .addr = 0x626fe2, .byte = 0x56 },
		{ .addr = 0x626fe3, .byte = 0x34 },
		{ .addr = 0x626fe4, .byte = 0xf6 },
		{ .addr = 0x626fe5, .byte = 0xd5 },
		{ .addr = 0x626fe6, .byte = 0x9d },
		{ .addr = 0x626fe7, .byte = 0x85 },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0xe9 },
		{ .addr = 0x00000f, .byte = 0xda },
		{ .addr = 0x4ae9da, .byte = 0xdb },
		{ .addr = 0x4ae9db, .byte = 0xb9 },
		{ .addr = 0x4ae9dc, .byte = 0x6e },
		{ .addr = 0x4ae9dd, .byte = 0xfa }
};

static const SST_RamByte andw_final_ram_27[] = {
		{ .addr = 0x626fe0, .byte = 0x02 },
		{ .addr = 0x626fe1, .byte = 0x68 },
		{ .addr = 0x626fe2, .byte = 0x56 },
		{ .addr = 0x626fe3, .byte = 0x34 },
		{ .addr = 0x626fe4, .byte = 0xf6 },
		{ .addr = 0x626fe5, .byte = 0xd5 },
		{ .addr = 0x626fe6, .byte = 0x9d },
		{ .addr = 0x626fe7, .byte = 0x85 },
		{ .addr = 0xe5139e, .byte = 0x6f },
		{ .addr = 0xe5139f, .byte = 0xe4 },
		{ .addr = 0xe5139a, .byte = 0x25 },
		{ .addr = 0xe5139b, .byte = 0x1e },
		{ .addr = 0xe5139c, .byte = 0x00 },
		{ .addr = 0xe5139d, .byte = 0x62 },
		{ .addr = 0xe51398, .byte = 0x02 },
		{ .addr = 0xe51399, .byte = 0x68 },
		{ .addr = 0xe51396, .byte = 0xc2 },
		{ .addr = 0xe51397, .byte = 0x13 },
		{ .addr = 0xe51392, .byte = 0x02 },
		{ .addr = 0xe51393, .byte = 0x75 },
		{ .addr = 0xe51394, .byte = 0x15 },
		{ .addr = 0xe51395, .byte = 0xfb },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0xe9 },
		{ .addr = 0x00000f, .byte = 0xda },
		{ .addr = 0x4ae9da, .byte = 0xdb },
		{ .addr = 0x4ae9db, .byte = 0xb9 },
		{ .addr = 0x4ae9dc, .byte = 0x6e },
		{ .addr = 0x4ae9dd, .byte = 0xfa }
};

static const SST_Transaction andw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6451172, .data = 63189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6451174, .data = 40325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16499218, .data = 55547, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15012766, .data = 28644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15012762, .data = 9502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15012764, .data = 98, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15012760, .data = 616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15012758, .data = 49683, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15012754, .data = 629, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15012756, .data = 5627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 59866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4909530, .data = 56249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4909532, .data = 28410, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_28[] = {
		{ .addr = 0xf24e2e, .byte = 0xc0 },
		{ .addr = 0xf24e2f, .byte = 0x56 },
		{ .addr = 0xf24e30, .byte = 0xdb },
		{ .addr = 0xf24e31, .byte = 0xa4 },
		{ .addr = 0x00000c, .byte = 0x8e },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xd3 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0x38d39e, .byte = 0xf9 },
		{ .addr = 0x38d39f, .byte = 0x26 },
		{ .addr = 0x38d3a0, .byte = 0xd0 },
		{ .addr = 0x38d3a1, .byte = 0x9c }
};

static const SST_RamByte andw_final_ram_28[] = {
		{ .addr = 0xf24e2e, .byte = 0xc0 },
		{ .addr = 0xf24e2f, .byte = 0x56 },
		{ .addr = 0xf24e30, .byte = 0xdb },
		{ .addr = 0xf24e31, .byte = 0xa4 },
		{ .addr = 0x7b807e, .byte = 0x4e },
		{ .addr = 0x7b807f, .byte = 0x30 },
		{ .addr = 0x7b807a, .byte = 0x22 },
		{ .addr = 0x7b807b, .byte = 0x1e },
		{ .addr = 0x7b807c, .byte = 0x00 },
		{ .addr = 0x7b807d, .byte = 0xf2 },
		{ .addr = 0x7b8078, .byte = 0xc0 },
		{ .addr = 0x7b8079, .byte = 0x56 },
		{ .addr = 0x7b8076, .byte = 0x0a },
		{ .addr = 0x7b8077, .byte = 0x7b },
		{ .addr = 0x7b8072, .byte = 0xc0 },
		{ .addr = 0x7b8073, .byte = 0x55 },
		{ .addr = 0x7b8074, .byte = 0xb3 },
		{ .addr = 0x7b8075, .byte = 0xee },
		{ .addr = 0x00000c, .byte = 0x8e },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xd3 },
		{ .addr = 0x00000f, .byte = 0x9e },
		{ .addr = 0x38d39e, .byte = 0xf9 },
		{ .addr = 0x38d39f, .byte = 0x26 },
		{ .addr = 0x38d3a0, .byte = 0xd0 },
		{ .addr = 0x38d3a1, .byte = 0x9c }
};

static const SST_Transaction andw_transactions_28[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600250, .data = 35810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8093822, .data = 20016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8093818, .data = 8734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8093820, .data = 242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8093816, .data = 49238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8093814, .data = 2683, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8093810, .data = 49237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8093812, .data = 46062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 36408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3724190, .data = 63782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3724192, .data = 53404, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_29[] = {
		{ .addr = 0x7f71ea, .byte = 0xc3 },
		{ .addr = 0x7f71eb, .byte = 0x6f },
		{ .addr = 0x7f71ec, .byte = 0x86 },
		{ .addr = 0x7f71ed, .byte = 0x21 },
		{ .addr = 0x7f71ee, .byte = 0x36 },
		{ .addr = 0x7f71ef, .byte = 0x87 },
		{ .addr = 0x00000c, .byte = 0xeb },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xb5 },
		{ .addr = 0x00000f, .byte = 0x6a },
		{ .addr = 0x02b56a, .byte = 0x25 },
		{ .addr = 0x02b56b, .byte = 0x2e },
		{ .addr = 0x02b56c, .byte = 0x13 },
		{ .addr = 0x02b56d, .byte = 0x6d }
};

static const SST_RamByte andw_final_ram_29[] = {
		{ .addr = 0x7f71ea, .byte = 0xc3 },
		{ .addr = 0x7f71eb, .byte = 0x6f },
		{ .addr = 0x7f71ec, .byte = 0x86 },
		{ .addr = 0x7f71ed, .byte = 0x21 },
		{ .addr = 0x7f71ee, .byte = 0x36 },
		{ .addr = 0x7f71ef, .byte = 0x87 },
		{ .addr = 0x13f7d0, .byte = 0x71 },
		{ .addr = 0x13f7d1, .byte = 0xec },
		{ .addr = 0x13f7cc, .byte = 0xa1 },
		{ .addr = 0x13f7cd, .byte = 0x16 },
		{ .addr = 0x13f7ce, .byte = 0x00 },
		{ .addr = 0x13f7cf, .byte = 0x7f },
		{ .addr = 0x13f7ca, .byte = 0xc3 },
		{ .addr = 0x13f7cb, .byte = 0x6f },
		{ .addr = 0x13f7c8, .byte = 0x7d },
		{ .addr = 0x13f7c9, .byte = 0xf3 },
		{ .addr = 0x13f7c4, .byte = 0xc3 },
		{ .addr = 0x13f7c5, .byte = 0x75 },
		{ .addr = 0x13f7c6, .byte = 0x00 },
		{ .addr = 0x13f7c7, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0xeb },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xb5 },
		{ .addr = 0x00000f, .byte = 0x6a },
		{ .addr = 0x02b56a, .byte = 0x25 },
		{ .addr = 0x02b56b, .byte = 0x2e },
		{ .addr = 0x02b56c, .byte = 0x13 },
		{ .addr = 0x02b56d, .byte = 0x6d }
};

static const SST_Transaction andw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8352238, .data = 13959, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1277426, .data = 16150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1308624, .data = 29164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1308620, .data = 41238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1308622, .data = 127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1308618, .data = 50031, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1308616, .data = 32243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1308612, .data = 50037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1308614, .data = 19, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 177514, .data = 9518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 177516, .data = 4973, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_30[] = {
		{ .addr = 0x2810c6, .byte = 0xc1 },
		{ .addr = 0x2810c7, .byte = 0x5a },
		{ .addr = 0x2810c8, .byte = 0xaf },
		{ .addr = 0x2810c9, .byte = 0xa5 },
		{ .addr = 0xb6b54e, .byte = 0x57 },
		{ .addr = 0xb6b54f, .byte = 0x74 },
		{ .addr = 0x2810ca, .byte = 0xc1 },
		{ .addr = 0x2810cb, .byte = 0x33 }
};

static const SST_RamByte andw_final_ram_30[] = {
		{ .addr = 0x2810c6, .byte = 0xc1 },
		{ .addr = 0x2810c7, .byte = 0x5a },
		{ .addr = 0x2810c8, .byte = 0xaf },
		{ .addr = 0x2810c9, .byte = 0xa5 },
		{ .addr = 0xb6b54e, .byte = 0x10 },
		{ .addr = 0xb6b54f, .byte = 0x00 },
		{ .addr = 0x2810ca, .byte = 0xc1 },
		{ .addr = 0x2810cb, .byte = 0x33 }
};

static const SST_Transaction andw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11973966, .data = 22388, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2625738, .data = 49459, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11973966, .data = 4096, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andw_initial_ram_31[] = {
		{ .addr = 0x4c011e, .byte = 0xc0 },
		{ .addr = 0x4c011f, .byte = 0x70 },
		{ .addr = 0x4c0120, .byte = 0x6b },
		{ .addr = 0x4c0121, .byte = 0xab },
		{ .addr = 0x4c0122, .byte = 0x8e },
		{ .addr = 0x4c0123, .byte = 0x2d },
		{ .addr = 0x6b5bd0, .byte = 0x29 },
		{ .addr = 0x6b5bd1, .byte = 0x46 },
		{ .addr = 0x4c0124, .byte = 0x07 },
		{ .addr = 0x4c0125, .byte = 0x75 }
};

static const SST_RamByte andw_final_ram_31[] = {
		{ .addr = 0x4c011e, .byte = 0xc0 },
		{ .addr = 0x4c011f, .byte = 0x70 },
		{ .addr = 0x4c0120, .byte = 0x6b },
		{ .addr = 0x4c0121, .byte = 0xab },
		{ .addr = 0x4c0122, .byte = 0x8e },
		{ .addr = 0x4c0123, .byte = 0x2d },
		{ .addr = 0x6b5bd0, .byte = 0x29 },
		{ .addr = 0x6b5bd1, .byte = 0x46 },
		{ .addr = 0x4c0124, .byte = 0x07 },
		{ .addr = 0x4c0125, .byte = 0x75 }
};

static const SST_Transaction andw_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4981026, .data = 36397, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7035856, .data = 10566, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4981028, .data = 1909, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase andw[] = {
	{
		.name = "000 AND.w D7, (A5)+ cf5d",
		.initial = {
			.regs = {
				470065230, 1049833943, 2713507205, 4027026699, 1011506597, 831025574, 534664186, 3778570442, 3796506931, 4050348046, 2257111017, 4223211533, 289411888, 2630226893, 500238866, 13863642, 10408596, 42770, 8783112
			},
			.prefetch0 = 53085,
			.prefetch1 = 40648,
			.ram = andw_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				470065230, 1049833943, 2713507205, 4027026699, 1011506597, 831025574, 534664186, 3778570442, 3796506931, 4050348046, 2257111017, 4223211533, 289411888, 2630226895, 500238866, 13863642, 10408582, 10002, 325071692
			},
			.prefetch0 = 59313,
			.prefetch1 = 39060,
			.ram = andw_final_ram_0,
			.ram_len = 26,
		},
		.transactions = andw_transactions_0,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "001 AND.w D5, (A7) cb57",
		.initial = {
			.regs = {
				4138977141, 1496390675, 1077601567, 3886667255, 281358555, 4155956012, 2433680723, 2068962530, 2170394189, 3518943484, 2374303983, 3885110674, 2362161867, 4170076573, 2161573775, 16134462, 12656, 33799, 493018
			},
			.prefetch0 = 52055,
			.prefetch1 = 56467,
			.ram = andw_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4138977141, 1496390675, 1077601567, 3886667255, 281358555, 4155956012, 2433680723, 2068962530, 2170394189, 3518943484, 2374303983, 3885110674, 2362161867, 4170076573, 2161573775, 16134462, 12656, 33800, 493020
			},
			.prefetch0 = 56467,
			.prefetch1 = 42544,
			.ram = andw_final_ram_1,
			.ram_len = 8,
		},
		.transactions = andw_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 AND.w D0, D3 c640",
		.initial = {
			.regs = {
				3326993895, 633087900, 2194643015, 464173392, 1794820613, 1806801382, 799385516, 262106341, 3565058932, 1557670762, 2391895231, 2292460633, 2195095832, 3678649140, 339174398, 8150594, 13657306, 775, 14994540
			},
			.prefetch0 = 50752,
			.prefetch1 = 39440,
			.ram = andw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3326993895, 633087900, 2194643015, 464167232, 1794820613, 1806801382, 799385516, 262106341, 3565058932, 1557670762, 2391895231, 2292460633, 2195095832, 3678649140, 339174398, 8150594, 13657306, 776, 14994542
			},
			.prefetch0 = 39440,
			.prefetch1 = 30900,
			.ram = andw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = andw_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 AND.w D4, (A5)+ c95d",
		.initial = {
			.regs = {
				1248133921, 1121417282, 2711489592, 3010327310, 2447329759, 110246560, 3037874483, 3201455843, 2532074440, 1946520939, 1303124718, 502959375, 2658353411, 1658705889, 1707792767, 6237616, 1159634, 34079, 7431670
			},
			.prefetch0 = 51549,
			.prefetch1 = 57584,
			.ram = andw_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1248133921, 1121417282, 2711489592, 3010327310, 2447329759, 110246560, 3037874483, 3201455843, 2532074440, 1946520939, 1303124718, 502959375, 2658353411, 1658705891, 1707792767, 6237616, 1159620, 9503, 145258518
			},
			.prefetch0 = 51930,
			.prefetch1 = 44019,
			.ram = andw_final_ram_3,
			.ram_len = 26,
		},
		.transactions = andw_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 AND.w (d16, A2), D6 cc6a",
		.initial = {
			.regs = {
				1534147691, 1842386953, 505686723, 580615189, 3753685157, 1190964643, 4262074873, 1537230529, 691717450, 3236555030, 3354174498, 2583519692, 3464735962, 2989108423, 1001352547, 3706470, 15712408, 34567, 15700174
			},
			.prefetch0 = 52330,
			.prefetch1 = 20707,
			.ram = andw_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1534147691, 1842386953, 505686723, 580615189, 3753685157, 1190964643, 4262074873, 1537230529, 691717450, 3236555030, 3354174498, 2583519692, 3464735962, 2989108423, 1001352547, 3706470, 15712394, 9991, 3992513772
			},
			.prefetch0 = 4809,
			.prefetch1 = 1615,
			.ram = andw_final_ram_4,
			.ram_len = 28,
		},
		.transactions = andw_transactions_4,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "005 AND.w #, D7 ce7c",
		.initial = {
			.regs = {
				3415969143, 3610424187, 1915986599, 785093714, 1428705750, 213772963, 949351877, 682609736, 1400115453, 4148524899, 1363585145, 1317027442, 2119790312, 368475650, 1811512765, 15906814, 16570520, 9997, 9564652
			},
			.prefetch0 = 52860,
			.prefetch1 = 18572,
			.ram = andw_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3415969143, 3610424187, 1915986599, 785093714, 1428705750, 213772963, 949351877, 682575880, 1400115453, 4148524899, 1363585145, 1317027442, 2119790312, 368475650, 1811512765, 15906814, 16570520, 9984, 9564656
			},
			.prefetch0 = 36839,
			.prefetch1 = 17886,
			.ram = andw_final_ram_5,
			.ram_len = 8,
		},
		.transactions = andw_transactions_5,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "006 AND.w D4, (A2) c952",
		.initial = {
			.regs = {
				1061114507, 1370791914, 2149686854, 2089971471, 2732900197, 491520209, 4277412790, 1636187432, 3516514403, 1999592836, 291231625, 3399493433, 3856990570, 601539924, 2920390868, 15930588, 11057938, 41236, 14436860
			},
			.prefetch0 = 51538,
			.prefetch1 = 17106,
			.ram = andw_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1061114507, 1370791914, 2149686854, 2089971471, 2732900197, 491520209, 4277412790, 1636187432, 3516514403, 1999592836, 291231625, 3399493433, 3856990570, 601539924, 2920390868, 15930588, 11057924, 8468, 627194160
			},
			.prefetch0 = 36669,
			.prefetch1 = 25369,
			.ram = andw_final_ram_6,
			.ram_len = 26,
		},
		.transactions = andw_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 AND.w D0, -(A0) c160",
		.initial = {
			.regs = {
				760679289, 4099714092, 1799812556, 2205093615, 3134831482, 3976596003, 512085664, 3650878133, 2501549112, 2968960925, 1438220124, 4206569501, 4114082626, 571107727, 1914216323, 5420434, 2673482, 34067, 14209646
			},
			.prefetch0 = 49504,
			.prefetch1 = 40285,
			.ram = andw_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				760679289, 4099714092, 1799812556, 2205093615, 3134831482, 3976596003, 512085664, 3650878133, 2501549110, 2968960925, 1438220124, 4206569501, 4114082626, 571107727, 1914216323, 5420434, 2673482, 34064, 14209648
			},
			.prefetch0 = 40285,
			.prefetch1 = 48939,
			.ram = andw_final_ram_7,
			.ram_len = 8,
		},
		.transactions = andw_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 AND.w D3, (A7) c757",
		.initial = {
			.regs = {
				3510213059, 4049728422, 3752431292, 2134456235, 167799148, 868631884, 1788522385, 1184190799, 489061908, 2190436340, 4153282553, 642311131, 3290309129, 2655438500, 323301063, 12527306, 15536358, 8972, 6452862
			},
			.prefetch0 = 51031,
			.prefetch1 = 17026,
			.ram = andw_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3510213059, 4049728422, 3752431292, 2134456235, 167799148, 868631884, 1788522385, 1184190799, 489061908, 2190436340, 4153282553, 642311131, 3290309129, 2655438500, 323301063, 12527306, 15536358, 8960, 6452864
			},
			.prefetch0 = 17026,
			.prefetch1 = 38364,
			.ram = andw_final_ram_8,
			.ram_len = 8,
		},
		.transactions = andw_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 AND.w D2, (d16, A7) c56f",
		.initial = {
			.regs = {
				3876476196, 1832907712, 3655603071, 1765531074, 3626581154, 2785193048, 1496981386, 3152149008, 283743002, 1682668996, 4046286767, 1957315844, 1256063427, 1649875406, 1943765484, 11704548, 11021320, 33037, 4574942
			},
			.prefetch0 = 50543,
			.prefetch1 = 52781,
			.ram = andw_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3876476196, 1832907712, 3655603071, 1765531074, 3626581154, 2785193048, 1496981386, 3152149008, 283743002, 1682668996, 4046286767, 1957315844, 1256063427, 1649875406, 1943765484, 11704548, 11021306, 8461, 3735326342
			},
			.prefetch0 = 56375,
			.prefetch1 = 56701,
			.ram = andw_final_ram_9,
			.ram_len = 28,
		},
		.transactions = andw_transactions_9,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "010 AND.w D1, (d8, A0, Xn) c370",
		.initial = {
			.regs = {
				3234051414, 3870436978, 3184007900, 970264575, 524990714, 269084610, 3415153049, 62346973, 3388136147, 2180500013, 3734967796, 2420506042, 2440615121, 4230656639, 3985526577, 6629678, 3726740, 8201, 303016
			},
			.prefetch0 = 50032,
			.prefetch1 = 33305,
			.ram = andw_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3234051414, 3870436978, 3184007900, 970264575, 524990714, 269084610, 3415153049, 62346973, 3388136147, 2180500013, 3734967796, 2420506042, 2440615121, 4230656639, 3985526577, 6629678, 3726726, 8201, 4255430750
			},
			.prefetch0 = 41473,
			.prefetch1 = 34501,
			.ram = andw_final_ram_10,
			.ram_len = 28,
		},
		.transactions = andw_transactions_10,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "011 AND.w (d8, A1, Xn), D5 ca71",
		.initial = {
			.regs = {
				2418035907, 1096247652, 2156488381, 732500883, 2368540337, 3919837449, 727627236, 2484639926, 1337900412, 3135617720, 3819152661, 821262436, 1514500631, 3721314522, 919668508, 13929698, 16444426, 9995, 15933550
			},
			.prefetch0 = 51825,
			.prefetch1 = 28836,
			.ram = andw_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2418035907, 1096247652, 2156488381, 732500883, 2368540337, 3919802369, 727627236, 2484639926, 1337900412, 3135617720, 3819152661, 821262436, 1514500631, 3721314522, 919668508, 13929698, 16444426, 9984, 15933554
			},
			.prefetch0 = 39546,
			.prefetch1 = 23102,
			.ram = andw_final_ram_11,
			.ram_len = 10,
		},
		.transactions = andw_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 AND.w #, D0 c07c",
		.initial = {
			.regs = {
				203802458, 1548934088, 3280830935, 4225637993, 1184049235, 1141082189, 956017642, 3581445647, 199638094, 1534345192, 863070699, 1262648137, 3571312276, 829631794, 653340756, 12508268, 7351654, 41735, 530284
			},
			.prefetch0 = 49276,
			.prefetch1 = 16187,
			.ram = andw_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				203753242, 1548934088, 3280830935, 4225637993, 1184049235, 1141082189, 956017642, 3581445647, 199638094, 1534345192, 863070699, 1262648137, 3571312276, 829631794, 653340756, 12508268, 7351654, 41728, 530288
			},
			.prefetch0 = 64446,
			.prefetch1 = 12224,
			.ram = andw_final_ram_12,
			.ram_len = 8,
		},
		.transactions = andw_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 AND.w D6, (A4)+ cd5c",
		.initial = {
			.regs = {
				185270698, 1895360977, 2729957830, 3663673789, 2946028650, 1901165820, 4229046929, 704763745, 2940773336, 1645628374, 1415243401, 2430885211, 1269054950, 2485271573, 4129406514, 3095354, 14838902, 42511, 14425192
			},
			.prefetch0 = 52572,
			.prefetch1 = 46050,
			.ram = andw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				185270698, 1895360977, 2729957830, 3663673789, 2946028650, 1901165820, 4229046929, 704763745, 2940773336, 1645628374, 1415243401, 2430885211, 1269054952, 2485271573, 4129406514, 3095354, 14838902, 42496, 14425194
			},
			.prefetch0 = 46050,
			.prefetch1 = 21354,
			.ram = andw_final_ram_13,
			.ram_len = 8,
		},
		.transactions = andw_transactions_13,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "014 AND.w D4, (A5) c955",
		.initial = {
			.regs = {
				4281936368, 776107896, 1121492579, 144208261, 2212921747, 2080906899, 1765213833, 2219351872, 1965676021, 3949261385, 831633454, 2931945558, 3529820282, 2668509233, 172210260, 4516574, 16759350, 9754, 2993640
			},
			.prefetch0 = 51541,
			.prefetch1 = 45494,
			.ram = andw_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4281936368, 776107896, 1121492579, 144208261, 2212921747, 2080906899, 1765213833, 2219351872, 1965676021, 3949261385, 831633454, 2931945558, 3529820282, 2668509233, 172210260, 4516574, 16759336, 9754, 3078249246
			},
			.prefetch0 = 3407,
			.prefetch1 = 7497,
			.ram = andw_final_ram_14,
			.ram_len = 26,
		},
		.transactions = andw_transactions_14,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "015 AND.w D6, (A3)+ cd5b",
		.initial = {
			.regs = {
				4026256594, 2085955251, 2353272799, 3920679765, 535511361, 455930027, 2212972988, 2882125540, 3569990286, 442331346, 1910405136, 3749027371, 1544542619, 336215849, 3675316039, 9975742, 7259442, 34319, 6792620
			},
			.prefetch0 = 52571,
			.prefetch1 = 19609,
			.ram = andw_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4026256594, 2085955251, 2353272799, 3920679765, 535511361, 455930027, 2212972988, 2882125540, 3569990286, 442331346, 1910405136, 3749027373, 1544542619, 336215849, 3675316039, 9975742, 7259428, 9743, 2654002116
			},
			.prefetch0 = 12003,
			.prefetch1 = 12243,
			.ram = andw_final_ram_15,
			.ram_len = 26,
		},
		.transactions = andw_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "016 AND.w (xxx).w, D4 c878",
		.initial = {
			.regs = {
				4127715887, 245962427, 3719707858, 2056056889, 3122643686, 2287366496, 3701130638, 3372211720, 368603176, 107204356, 2927612289, 209798722, 4209955627, 1845577118, 806237318, 1812214, 11392876, 795, 16704364
			},
			.prefetch0 = 51320,
			.prefetch1 = 1227,
			.ram = andw_initial_ram_16,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4127715887, 245962427, 3719707858, 2056056889, 3122643686, 2287366496, 3701130638, 3372211720, 368603176, 107204356, 2927612289, 209798722, 4209955627, 1845577118, 806237318, 1812214, 11392862, 8987, 3348519222
			},
			.prefetch0 = 1420,
			.prefetch1 = 29543,
			.ram = andw_final_ram_16,
			.ram_len = 28,
		},
		.transactions = andw_transactions_16,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "017 AND.w (d16, A6), D0 c06e",
		.initial = {
			.regs = {
				3944202547, 3682541730, 3751887145, 1433020001, 1492595134, 2955374046, 2188503148, 2624611006, 1174668800, 4091657727, 1108563071, 1667865594, 299546220, 2175957826, 1580961771, 3235016, 4251866, 1302, 15408408
			},
			.prefetch0 = 49262,
			.prefetch1 = 49006,
			.ram = andw_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3944202547, 3682541730, 3751887145, 1433020001, 1492595134, 2955374046, 2188503148, 2624611006, 1174668800, 4091657727, 1108563071, 1667865594, 299546220, 2175957826, 1580961771, 3235016, 4251852, 9494, 1079288992
			},
			.prefetch0 = 63095,
			.prefetch1 = 3484,
			.ram = andw_final_ram_17,
			.ram_len = 28,
		},
		.transactions = andw_transactions_17,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "018 AND.w D1, (d8, A3, Xn) c373",
		.initial = {
			.regs = {
				454048850, 2519668732, 3562196344, 3542208421, 4104893574, 1646943119, 2506810492, 960263828, 436434613, 1195706334, 2524231056, 1098890173, 1754242754, 3751793700, 189471400, 14321834, 2736112, 42516, 12249698
			},
			.prefetch0 = 50035,
			.prefetch1 = 7078,
			.ram = andw_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				454048850, 2519668732, 3562196344, 3542208421, 4104893574, 1646943119, 2506810492, 960263828, 436434613, 1195706334, 2524231056, 1098890173, 1754242754, 3751793700, 189471400, 14321834, 2736098, 9748, 1266697238
			},
			.prefetch0 = 55387,
			.prefetch1 = 62060,
			.ram = andw_final_ram_18,
			.ram_len = 28,
		},
		.transactions = andw_transactions_18,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "019 AND.w (A4), D3 c654",
		.initial = {
			.regs = {
				490906897, 3377827854, 102404293, 223165076, 2165041925, 744180789, 2289715123, 3134279452, 4240761034, 3997635405, 3396127362, 183712993, 1622220928, 4279821566, 683460629, 11602572, 9667552, 8469, 2430310
			},
			.prefetch0 = 50772,
			.prefetch1 = 36030,
			.ram = andw_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				490906897, 3377827854, 102404293, 223156880, 2165041925, 744180789, 2289715123, 3134279452, 4240761034, 3997635405, 3396127362, 183712993, 1622220928, 4279821566, 683460629, 11602572, 9667552, 8464, 2430312
			},
			.prefetch0 = 36030,
			.prefetch1 = 59951,
			.ram = andw_final_ram_19,
			.ram_len = 8,
		},
		.transactions = andw_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 AND.w #, D4 0244",
		.initial = {
			.regs = {
				1823509359, 737457070, 1845094821, 1145488318, 1771503404, 3546509093, 3051934181, 452664339, 322327972, 1686467848, 3816371664, 1317871631, 85529702, 2028184501, 917426106, 762828, 8783728, 1292, 10575066
			},
			.prefetch0 = 580,
			.prefetch1 = 29125,
			.ram = andw_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1823509359, 737457070, 1845094821, 1145488318, 1771467012, 3546509093, 3051934181, 452664339, 322327972, 1686467848, 3816371664, 1317871631, 85529702, 2028184501, 917426106, 762828, 8783728, 1280, 10575070
			},
			.prefetch0 = 39956,
			.prefetch1 = 37980,
			.ram = andw_final_ram_20,
			.ram_len = 8,
		},
		.transactions = andw_transactions_20,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "021 AND.w (A1)+, D1 c259",
		.initial = {
			.regs = {
				4234219502, 2097522666, 1275012316, 3842495905, 1157095036, 231185860, 145318045, 3214542738, 837390759, 287226731, 3667088592, 276954405, 3696355378, 3478350843, 340862302, 2185984, 7246038, 34561, 1168466
			},
			.prefetch0 = 49753,
			.prefetch1 = 51336,
			.ram = andw_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4234219502, 2097522666, 1275012316, 3842495905, 1157095036, 231185860, 145318045, 3214542738, 837390759, 287226733, 3667088592, 276954405, 3696355378, 3478350843, 340862302, 2185984, 7246024, 9985, 3702055724
			},
			.prefetch0 = 4117,
			.prefetch1 = 50327,
			.ram = andw_final_ram_21,
			.ram_len = 26,
		},
		.transactions = andw_transactions_21,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "022 AND.w #, (A0) 0250",
		.initial = {
			.regs = {
				1749612068, 1849913626, 1234734414, 2091823643, 946554184, 3328232454, 98543219, 672737341, 2558878922, 464806957, 2081578569, 1432680479, 2953116271, 780563571, 350695828, 1249778, 5538274, 1295, 11833950
			},
			.prefetch0 = 592,
			.prefetch1 = 45014,
			.ram = andw_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1749612068, 1849913626, 1234734414, 2091823643, 946554184, 3328232454, 98543219, 672737341, 2558878922, 464806957, 2081578569, 1432680479, 2953116271, 780563571, 350695828, 1249778, 5538274, 1280, 11833954
			},
			.prefetch0 = 9947,
			.prefetch1 = 33561,
			.ram = andw_final_ram_22,
			.ram_len = 10,
		},
		.transactions = andw_transactions_22,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "023 AND.w (A2), D3 c652",
		.initial = {
			.regs = {
				3783788760, 1542341329, 907455403, 191669109, 955287918, 291738262, 1006470975, 2239347603, 2068117129, 3902787908, 247894710, 2274704320, 4214907502, 2808221218, 440297235, 8537292, 2211754, 8974, 16324980
			},
			.prefetch0 = 50770,
			.prefetch1 = 21082,
			.ram = andw_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3783788760, 1542341329, 907455403, 191668788, 955287918, 291738262, 1006470975, 2239347603, 2068117129, 3902787908, 247894710, 2274704320, 4214907502, 2808221218, 440297235, 8537292, 2211754, 8968, 16324982
			},
			.prefetch0 = 21082,
			.prefetch1 = 54119,
			.ram = andw_final_ram_23,
			.ram_len = 8,
		},
		.transactions = andw_transactions_23,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "024 AND.w D5, (d16, A3) cb6b",
		.initial = {
			.regs = {
				866536482, 1218462841, 2717440153, 679826708, 3141425004, 332828155, 753465523, 1052920449, 4125410346, 3181363112, 692702464, 2492629466, 2333906636, 2662072548, 1874665108, 12502220, 2055032, 42501, 15709828
			},
			.prefetch0 = 52075,
			.prefetch1 = 40521,
			.ram = andw_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				866536482, 1218462841, 2717440153, 679826708, 3141425004, 332828155, 753465523, 1052920449, 4125410346, 3181363112, 692702464, 2492629466, 2333906636, 2662072548, 1874665108, 12502220, 2055018, 9733, 3988402892
			},
			.prefetch0 = 32641,
			.prefetch1 = 52310,
			.ram = andw_final_ram_24,
			.ram_len = 28,
		},
		.transactions = andw_transactions_24,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "025 AND.w (d8, A1, Xn), D4 c871",
		.initial = {
			.regs = {
				1965455926, 928014775, 3530789154, 2286537121, 4261430337, 185479174, 3096233441, 1925719868, 580913811, 2021953938, 458463690, 966048666, 865242912, 1597972718, 2808728217, 14833688, 6090024, 8978, 1575710
			},
			.prefetch0 = 51313,
			.prefetch1 = 45267,
			.ram = andw_initial_ram_25,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1965455926, 928014775, 3530789154, 2286537121, 4261430337, 185479174, 3096233441, 1925719868, 580913811, 2021953938, 458463690, 966048666, 865242912, 1597972718, 2808728217, 14833688, 6090010, 8978, 2770614000
			},
			.prefetch0 = 43555,
			.prefetch1 = 63424,
			.ram = andw_final_ram_25,
			.ram_len = 28,
		},
		.transactions = andw_transactions_25,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "026 AND.w (xxx).l, D1 c279",
		.initial = {
			.regs = {
				309607868, 4020540518, 3810379952, 611013005, 4190162893, 4097186363, 3512044497, 516694902, 1976234555, 2868954305, 3835419920, 2075033368, 1069217982, 3417344613, 2427076532, 4422110, 12384018, 33029, 14028104
			},
			.prefetch0 = 49785,
			.prefetch1 = 20575,
			.ram = andw_initial_ram_26,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				309607868, 4020540518, 3810379952, 611013005, 4190162893, 4097186363, 3512044497, 516694902, 1976234555, 2868954305, 3835419920, 2075033368, 1069217982, 3417344613, 2427076532, 4422110, 12384004, 8453, 4220290558
			},
			.prefetch0 = 41197,
			.prefetch1 = 49928,
			.ram = andw_final_ram_26,
			.ram_len = 30,
		},
		.transactions = andw_transactions_26,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "027 AND.w #, (d16, A0) 0268",
		.initial = {
			.regs = {
				3679991297, 4251909080, 2191143524, 2697875341, 2918323211, 3592329208, 546907721, 2070403972, 368823102, 1041927201, 3267128227, 2960967193, 1113237762, 3614660798, 810559592, 9921964, 15012768, 9502, 6451172
			},
			.prefetch0 = 616,
			.prefetch1 = 22068,
			.ram = andw_initial_ram_27,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3679991297, 4251909080, 2191143524, 2697875341, 2918323211, 3592329208, 546907721, 2070403972, 368823102, 1041927201, 3267128227, 2960967193, 1113237762, 3614660798, 810559592, 9921964, 15012754, 9502, 3561679326
			},
			.prefetch0 = 56249,
			.prefetch1 = 28410,
			.ram = andw_final_ram_27,
			.ram_len = 30,
		},
		.transactions = andw_transactions_27,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "028 AND.w (A6), D0 c056",
		.initial = {
			.regs = {
				4252416187, 985040152, 3568851150, 519080453, 3005718531, 1551764467, 1691492863, 1757673925, 1993254760, 1556773930, 3237687536, 1219416414, 718035409, 780186483, 3018721915, 12837662, 8093824, 8734, 15879730
			},
			.prefetch0 = 49238,
			.prefetch1 = 56228,
			.ram = andw_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4252416187, 985040152, 3568851150, 519080453, 3005718531, 1551764467, 1691492863, 1757673925, 1993254760, 1556773930, 3237687536, 1219416414, 718035409, 780186483, 3018721915, 12837662, 8093810, 8734, 2386088866
			},
			.prefetch0 = 63782,
			.prefetch1 = 53404,
			.ram = andw_final_ram_28,
			.ram_len = 26,
		},
		.transactions = andw_transactions_28,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "029 AND.w D1, (d16, A7) c36f",
		.initial = {
			.regs = {
				1124262750, 2022538279, 1874948579, 1919032467, 1608705403, 2658411753, 3743022254, 3569945403, 3947068147, 3151452493, 2482737883, 1178101594, 1585654402, 3195669257, 2292802233, 7537616, 1308626, 41238, 8352238
			},
			.prefetch0 = 50031,
			.prefetch1 = 34337,
			.ram = andw_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1124262750, 2022538279, 1874948579, 1919032467, 1608705403, 2658411753, 3743022254, 3569945403, 3947068147, 3151452493, 2482737883, 1178101594, 1585654402, 3195669257, 2292802233, 7537616, 1308612, 8470, 3942823278
			},
			.prefetch0 = 9518,
			.prefetch1 = 4973,
			.ram = andw_final_ram_29,
			.ram_len = 28,
		},
		.transactions = andw_transactions_29,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "030 AND.w D0, (A2)+ c15a",
		.initial = {
			.regs = {
				955561992, 113354363, 1838626266, 1429876820, 3269586842, 1401259469, 565333657, 3280224622, 3980229123, 3693359113, 3484857678, 2167711228, 2985958071, 2935675352, 2372006569, 4622636, 13386398, 42503, 2625738
			},
			.prefetch0 = 49498,
			.prefetch1 = 44965,
			.ram = andw_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				955561992, 113354363, 1838626266, 1429876820, 3269586842, 1401259469, 565333657, 3280224622, 3980229123, 3693359113, 3484857680, 2167711228, 2985958071, 2935675352, 2372006569, 4622636, 13386398, 42496, 2625740
			},
			.prefetch0 = 44965,
			.prefetch1 = 49459,
			.ram = andw_final_ram_30,
			.ram_len = 8,
		},
		.transactions = andw_transactions_30,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "031 AND.w (d8, A0, Xn), D0 c070",
		.initial = {
			.regs = {
				3357507664, 4142346873, 2155159762, 1816569231, 1376079518, 2636635858, 1492706513, 2835032945, 678590292, 1174207516, 1069272048, 1770034062, 1196867530, 1850824155, 3547604093, 11886908, 6947018, 772, 4981026
			},
			.prefetch0 = 49264,
			.prefetch1 = 27563,
			.ram = andw_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3357474880, 4142346873, 2155159762, 1816569231, 1376079518, 2636635858, 1492706513, 2835032945, 678590292, 1174207516, 1069272048, 1770034062, 1196867530, 1850824155, 3547604093, 11886908, 6947018, 768, 4981030
			},
			.prefetch0 = 36397,
			.prefetch1 = 1909,
			.ram = andw_final_ram_31,
			.ram_len = 10,
		},
		.transactions = andw_transactions_31,
		.transactions_len = 4,
		.lenght = 14,
	},
};

#endif /* RBT_ANDW_H */