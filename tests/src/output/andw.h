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

const uint32_t ANDW_TEST_COUNT = 16;
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
};

#endif /* RBT_ANDW_H */