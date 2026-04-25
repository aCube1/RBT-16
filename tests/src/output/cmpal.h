#ifndef RBT_CMPAL_H
#define RBT_CMPAL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte cmpal_initial_ram_0[] = {
		{ .addr = 0x492f60, .byte = 0xb7 },
		{ .addr = 0x492f61, .byte = 0xec },
		{ .addr = 0x492f62, .byte = 0x15 },
		{ .addr = 0x492f63, .byte = 0x22 },
		{ .addr = 0x492f64, .byte = 0xbf },
		{ .addr = 0x492f65, .byte = 0x25 },
		{ .addr = 0x00000c, .byte = 0x74 },
		{ .addr = 0x00000d, .byte = 0xf2 },
		{ .addr = 0x00000e, .byte = 0x02 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xf202fe, .byte = 0xfe },
		{ .addr = 0xf202ff, .byte = 0x2d },
		{ .addr = 0xf20300, .byte = 0x04 },
		{ .addr = 0xf20301, .byte = 0xd5 }
};

static const SST_RamByte cmpal_final_ram_0[] = {
		{ .addr = 0x492f60, .byte = 0xb7 },
		{ .addr = 0x492f61, .byte = 0xec },
		{ .addr = 0x492f62, .byte = 0x15 },
		{ .addr = 0x492f63, .byte = 0x22 },
		{ .addr = 0x492f64, .byte = 0xbf },
		{ .addr = 0x492f65, .byte = 0x25 },
		{ .addr = 0xa8237e, .byte = 0x2f },
		{ .addr = 0xa8237f, .byte = 0x62 },
		{ .addr = 0xa8237a, .byte = 0x22 },
		{ .addr = 0xa8237b, .byte = 0x07 },
		{ .addr = 0xa8237c, .byte = 0x00 },
		{ .addr = 0xa8237d, .byte = 0x49 },
		{ .addr = 0xa82378, .byte = 0xb7 },
		{ .addr = 0xa82379, .byte = 0xec },
		{ .addr = 0xa82376, .byte = 0x8e },
		{ .addr = 0xa82377, .byte = 0x13 },
		{ .addr = 0xa82372, .byte = 0xb7 },
		{ .addr = 0xa82373, .byte = 0xf5 },
		{ .addr = 0xa82374, .byte = 0x93 },
		{ .addr = 0xa82375, .byte = 0xcd },
		{ .addr = 0x00000c, .byte = 0x74 },
		{ .addr = 0x00000d, .byte = 0xf2 },
		{ .addr = 0x00000e, .byte = 0x02 },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0xf202fe, .byte = 0xfe },
		{ .addr = 0xf202ff, .byte = 0x2d },
		{ .addr = 0xf20300, .byte = 0x04 },
		{ .addr = 0xf20301, .byte = 0xd5 }
};

static const SST_Transaction cmpal_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4796260, .data = 48933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13471250, .data = 64876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019134, .data = 12130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019130, .data = 8711, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019132, .data = 73, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019128, .data = 47084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019126, .data = 36371, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019122, .data = 47093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019124, .data = 37837, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15860478, .data = 65069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15860480, .data = 1237, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_1[] = {
		{ .addr = 0x093300, .byte = 0xb1 },
		{ .addr = 0x093301, .byte = 0xf8 },
		{ .addr = 0x093302, .byte = 0x9d },
		{ .addr = 0x093303, .byte = 0x56 },
		{ .addr = 0x093304, .byte = 0x25 },
		{ .addr = 0x093305, .byte = 0xcf },
		{ .addr = 0xff9d56, .byte = 0x36 },
		{ .addr = 0xff9d57, .byte = 0x43 },
		{ .addr = 0xff9d58, .byte = 0xe5 },
		{ .addr = 0xff9d59, .byte = 0x4d },
		{ .addr = 0x093306, .byte = 0x48 },
		{ .addr = 0x093307, .byte = 0x98 }
};

static const SST_RamByte cmpal_final_ram_1[] = {
		{ .addr = 0x093300, .byte = 0xb1 },
		{ .addr = 0x093301, .byte = 0xf8 },
		{ .addr = 0x093302, .byte = 0x9d },
		{ .addr = 0x093303, .byte = 0x56 },
		{ .addr = 0x093304, .byte = 0x25 },
		{ .addr = 0x093305, .byte = 0xcf },
		{ .addr = 0xff9d56, .byte = 0x36 },
		{ .addr = 0xff9d57, .byte = 0x43 },
		{ .addr = 0xff9d58, .byte = 0xe5 },
		{ .addr = 0xff9d59, .byte = 0x4d },
		{ .addr = 0x093306, .byte = 0x48 },
		{ .addr = 0x093307, .byte = 0x98 }
};

static const SST_Transaction cmpal_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 602884, .data = 9679, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16751958, .data = 13891, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16751960, .data = 58701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 602886, .data = 18584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_2[] = {
		{ .addr = 0x19f2fe, .byte = 0xbf },
		{ .addr = 0x19f2ff, .byte = 0xf3 },
		{ .addr = 0x19f300, .byte = 0x01 },
		{ .addr = 0x19f301, .byte = 0xc6 },
		{ .addr = 0x19f302, .byte = 0x4a },
		{ .addr = 0x19f303, .byte = 0x53 },
		{ .addr = 0x3472d6, .byte = 0xa4 },
		{ .addr = 0x3472d7, .byte = 0xf7 },
		{ .addr = 0x3472d8, .byte = 0x72 },
		{ .addr = 0x3472d9, .byte = 0x0a },
		{ .addr = 0x19f304, .byte = 0xac },
		{ .addr = 0x19f305, .byte = 0x68 }
};

static const SST_RamByte cmpal_final_ram_2[] = {
		{ .addr = 0x19f2fe, .byte = 0xbf },
		{ .addr = 0x19f2ff, .byte = 0xf3 },
		{ .addr = 0x19f300, .byte = 0x01 },
		{ .addr = 0x19f301, .byte = 0xc6 },
		{ .addr = 0x19f302, .byte = 0x4a },
		{ .addr = 0x19f303, .byte = 0x53 },
		{ .addr = 0x3472d6, .byte = 0xa4 },
		{ .addr = 0x3472d7, .byte = 0xf7 },
		{ .addr = 0x3472d8, .byte = 0x72 },
		{ .addr = 0x3472d9, .byte = 0x0a },
		{ .addr = 0x19f304, .byte = 0xac },
		{ .addr = 0x19f305, .byte = 0x68 }
};

static const SST_Transaction cmpal_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1700610, .data = 19027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437270, .data = 42231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3437272, .data = 29194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1700612, .data = 44136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_3[] = {
		{ .addr = 0xfac492, .byte = 0xb5 },
		{ .addr = 0xfac493, .byte = 0xc5 },
		{ .addr = 0xfac494, .byte = 0x8b },
		{ .addr = 0xfac495, .byte = 0x93 },
		{ .addr = 0xfac496, .byte = 0x53 },
		{ .addr = 0xfac497, .byte = 0x04 }
};

static const SST_RamByte cmpal_final_ram_3[] = {
		{ .addr = 0xfac492, .byte = 0xb5 },
		{ .addr = 0xfac493, .byte = 0xc5 },
		{ .addr = 0xfac494, .byte = 0x8b },
		{ .addr = 0xfac495, .byte = 0x93 },
		{ .addr = 0xfac496, .byte = 0x53 },
		{ .addr = 0xfac497, .byte = 0x04 }
};

static const SST_Transaction cmpal_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16434326, .data = 21252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_4[] = {
		{ .addr = 0xfe98c0, .byte = 0xbd },
		{ .addr = 0xfe98c1, .byte = 0xdc },
		{ .addr = 0xfe98c2, .byte = 0x8a },
		{ .addr = 0xfe98c3, .byte = 0x66 },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0xd6 },
		{ .addr = 0x00000e, .byte = 0x00 },
		{ .addr = 0x00000f, .byte = 0x1e },
		{ .addr = 0xd6001e, .byte = 0x01 },
		{ .addr = 0xd6001f, .byte = 0x62 },
		{ .addr = 0xd60020, .byte = 0x4c },
		{ .addr = 0xd60021, .byte = 0xc5 }
};

static const SST_RamByte cmpal_final_ram_4[] = {
		{ .addr = 0xfe98c0, .byte = 0xbd },
		{ .addr = 0xfe98c1, .byte = 0xdc },
		{ .addr = 0xfe98c2, .byte = 0x8a },
		{ .addr = 0xfe98c3, .byte = 0x66 },
		{ .addr = 0x1f6a2e, .byte = 0x98 },
		{ .addr = 0x1f6a2f, .byte = 0xc2 },
		{ .addr = 0x1f6a2a, .byte = 0x80 },
		{ .addr = 0x1f6a2b, .byte = 0x1a },
		{ .addr = 0x1f6a2c, .byte = 0x00 },
		{ .addr = 0x1f6a2d, .byte = 0xfe },
		{ .addr = 0x1f6a28, .byte = 0xbd },
		{ .addr = 0x1f6a29, .byte = 0xdc },
		{ .addr = 0x1f6a26, .byte = 0x57 },
		{ .addr = 0x1f6a27, .byte = 0x8b },
		{ .addr = 0x1f6a22, .byte = 0xbd },
		{ .addr = 0x1f6a23, .byte = 0xd1 },
		{ .addr = 0x1f6a24, .byte = 0x76 },
		{ .addr = 0x1f6a25, .byte = 0xdf },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0xd6 },
		{ .addr = 0x00000e, .byte = 0x00 },
		{ .addr = 0x00000f, .byte = 0x1e },
		{ .addr = 0xd6001e, .byte = 0x01 },
		{ .addr = 0xd6001f, .byte = 0x62 },
		{ .addr = 0xd60020, .byte = 0x4c },
		{ .addr = 0xd60021, .byte = 0xc5 }
};

static const SST_Transaction cmpal_transactions_4[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14636938, .data = 32310, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2058798, .data = 39106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2058794, .data = 32794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2058796, .data = 254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2058792, .data = 48604, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2058790, .data = 22411, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2058786, .data = 48593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2058788, .data = 30431, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14024734, .data = 354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14024736, .data = 19653, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_5[] = {
		{ .addr = 0x578ee0, .byte = 0xb9 },
		{ .addr = 0x578ee1, .byte = 0xd4 },
		{ .addr = 0x578ee2, .byte = 0x0c },
		{ .addr = 0x578ee3, .byte = 0x84 },
		{ .addr = 0x00000c, .byte = 0x3b },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0x74 },
		{ .addr = 0xde3374, .byte = 0x43 },
		{ .addr = 0xde3375, .byte = 0x7e },
		{ .addr = 0xde3376, .byte = 0xd3 },
		{ .addr = 0xde3377, .byte = 0x2d }
};

static const SST_RamByte cmpal_final_ram_5[] = {
		{ .addr = 0x578ee0, .byte = 0xb9 },
		{ .addr = 0x578ee1, .byte = 0xd4 },
		{ .addr = 0x578ee2, .byte = 0x0c },
		{ .addr = 0x578ee3, .byte = 0x84 },
		{ .addr = 0xa8f974, .byte = 0x8e },
		{ .addr = 0xa8f975, .byte = 0xe2 },
		{ .addr = 0xa8f970, .byte = 0x02 },
		{ .addr = 0xa8f971, .byte = 0x09 },
		{ .addr = 0xa8f972, .byte = 0x00 },
		{ .addr = 0xa8f973, .byte = 0x57 },
		{ .addr = 0xa8f96e, .byte = 0xb9 },
		{ .addr = 0xa8f96f, .byte = 0xd4 },
		{ .addr = 0xa8f96c, .byte = 0x80 },
		{ .addr = 0xa8f96d, .byte = 0xad },
		{ .addr = 0xa8f968, .byte = 0xb9 },
		{ .addr = 0xa8f969, .byte = 0xd1 },
		{ .addr = 0xa8f96a, .byte = 0xf4 },
		{ .addr = 0xa8f96b, .byte = 0x9c },
		{ .addr = 0x00000c, .byte = 0x3b },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0x74 },
		{ .addr = 0xde3374, .byte = 0x43 },
		{ .addr = 0xde3375, .byte = 0x7e },
		{ .addr = 0xde3376, .byte = 0xd3 },
		{ .addr = 0xde3377, .byte = 0x2d }
};

static const SST_Transaction cmpal_transactions_5[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10256556, .data = 26397, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11073908, .data = 36578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11073904, .data = 521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11073906, .data = 87, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11073902, .data = 47572, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11073900, .data = 32941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11073896, .data = 47569, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11073898, .data = 62620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14562164, .data = 17278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14562166, .data = 54061, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_6[] = {
		{ .addr = 0xc2244e, .byte = 0xb9 },
		{ .addr = 0xc2244f, .byte = 0xf3 },
		{ .addr = 0xc22450, .byte = 0xd8 },
		{ .addr = 0xc22451, .byte = 0x4d },
		{ .addr = 0xc22452, .byte = 0xba },
		{ .addr = 0xc22453, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0x8a },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x45 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0xde458c, .byte = 0x09 },
		{ .addr = 0xde458d, .byte = 0x6b },
		{ .addr = 0xde458e, .byte = 0xed },
		{ .addr = 0xde458f, .byte = 0xcf }
};

static const SST_RamByte cmpal_final_ram_6[] = {
		{ .addr = 0xc2244e, .byte = 0xb9 },
		{ .addr = 0xc2244f, .byte = 0xf3 },
		{ .addr = 0xc22450, .byte = 0xd8 },
		{ .addr = 0xc22451, .byte = 0x4d },
		{ .addr = 0xc22452, .byte = 0xba },
		{ .addr = 0xc22453, .byte = 0xfd },
		{ .addr = 0xe839b6, .byte = 0x24 },
		{ .addr = 0xe839b7, .byte = 0x50 },
		{ .addr = 0xe839b2, .byte = 0x20 },
		{ .addr = 0xe839b3, .byte = 0x09 },
		{ .addr = 0xe839b4, .byte = 0x00 },
		{ .addr = 0xe839b5, .byte = 0xc2 },
		{ .addr = 0xe839b0, .byte = 0xb9 },
		{ .addr = 0xe839b1, .byte = 0xf3 },
		{ .addr = 0xe839ae, .byte = 0xb0 },
		{ .addr = 0xe839af, .byte = 0x2f },
		{ .addr = 0xe839aa, .byte = 0xb9 },
		{ .addr = 0xe839ab, .byte = 0xf5 },
		{ .addr = 0xe839ac, .byte = 0xe1 },
		{ .addr = 0xe839ad, .byte = 0x75 },
		{ .addr = 0x00000c, .byte = 0x8a },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x45 },
		{ .addr = 0x00000f, .byte = 0x8c },
		{ .addr = 0xde458c, .byte = 0x09 },
		{ .addr = 0xde458d, .byte = 0x6b },
		{ .addr = 0xde458e, .byte = 0xed },
		{ .addr = 0xde458f, .byte = 0xcf }
};

static const SST_Transaction cmpal_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12723282, .data = 47869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7712814, .data = 40577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15219126, .data = 9296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15219122, .data = 8201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15219124, .data = 194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15219120, .data = 47603, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15219118, .data = 45103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15219114, .data = 47605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15219116, .data = 57717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14566796, .data = 2411, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14566798, .data = 60879, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_7[] = {
		{ .addr = 0xcf9a78, .byte = 0xb1 },
		{ .addr = 0xcf9a79, .byte = 0xd4 },
		{ .addr = 0xcf9a7a, .byte = 0x72 },
		{ .addr = 0xcf9a7b, .byte = 0x25 },
		{ .addr = 0xf43ee2, .byte = 0x1d },
		{ .addr = 0xf43ee3, .byte = 0x7c },
		{ .addr = 0xf43ee4, .byte = 0x65 },
		{ .addr = 0xf43ee5, .byte = 0x80 },
		{ .addr = 0xcf9a7c, .byte = 0x12 },
		{ .addr = 0xcf9a7d, .byte = 0xd1 }
};

static const SST_RamByte cmpal_final_ram_7[] = {
		{ .addr = 0xcf9a78, .byte = 0xb1 },
		{ .addr = 0xcf9a79, .byte = 0xd4 },
		{ .addr = 0xcf9a7a, .byte = 0x72 },
		{ .addr = 0xcf9a7b, .byte = 0x25 },
		{ .addr = 0xf43ee2, .byte = 0x1d },
		{ .addr = 0xf43ee3, .byte = 0x7c },
		{ .addr = 0xf43ee4, .byte = 0x65 },
		{ .addr = 0xf43ee5, .byte = 0x80 },
		{ .addr = 0xcf9a7c, .byte = 0x12 },
		{ .addr = 0xcf9a7d, .byte = 0xd1 }
};

static const SST_Transaction cmpal_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16006882, .data = 7548, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16006884, .data = 25984, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13605500, .data = 4817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_8[] = {
		{ .addr = 0x9a8bc2, .byte = 0xbd },
		{ .addr = 0x9a8bc3, .byte = 0xf4 },
		{ .addr = 0x9a8bc4, .byte = 0xc6 },
		{ .addr = 0x9a8bc5, .byte = 0x86 },
		{ .addr = 0x9a8bc6, .byte = 0x29 },
		{ .addr = 0x9a8bc7, .byte = 0xa9 },
		{ .addr = 0x51c72e, .byte = 0xf3 },
		{ .addr = 0x51c72f, .byte = 0x4d },
		{ .addr = 0x51c730, .byte = 0x44 },
		{ .addr = 0x51c731, .byte = 0x92 },
		{ .addr = 0x9a8bc8, .byte = 0x2c },
		{ .addr = 0x9a8bc9, .byte = 0x4e }
};

static const SST_RamByte cmpal_final_ram_8[] = {
		{ .addr = 0x9a8bc2, .byte = 0xbd },
		{ .addr = 0x9a8bc3, .byte = 0xf4 },
		{ .addr = 0x9a8bc4, .byte = 0xc6 },
		{ .addr = 0x9a8bc5, .byte = 0x86 },
		{ .addr = 0x9a8bc6, .byte = 0x29 },
		{ .addr = 0x9a8bc7, .byte = 0xa9 },
		{ .addr = 0x51c72e, .byte = 0xf3 },
		{ .addr = 0x51c72f, .byte = 0x4d },
		{ .addr = 0x51c730, .byte = 0x44 },
		{ .addr = 0x51c731, .byte = 0x92 },
		{ .addr = 0x9a8bc8, .byte = 0x2c },
		{ .addr = 0x9a8bc9, .byte = 0x4e }
};

static const SST_Transaction cmpal_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10128326, .data = 10665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5359406, .data = 62285, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5359408, .data = 17554, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10128328, .data = 11342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_9[] = {
		{ .addr = 0xa2ff1c, .byte = 0xb1 },
		{ .addr = 0xa2ff1d, .byte = 0xc7 },
		{ .addr = 0xa2ff1e, .byte = 0x49 },
		{ .addr = 0xa2ff1f, .byte = 0x30 },
		{ .addr = 0xa2ff20, .byte = 0x27 },
		{ .addr = 0xa2ff21, .byte = 0x63 }
};

static const SST_RamByte cmpal_final_ram_9[] = {
		{ .addr = 0xa2ff1c, .byte = 0xb1 },
		{ .addr = 0xa2ff1d, .byte = 0xc7 },
		{ .addr = 0xa2ff1e, .byte = 0x49 },
		{ .addr = 0xa2ff1f, .byte = 0x30 },
		{ .addr = 0xa2ff20, .byte = 0x27 },
		{ .addr = 0xa2ff21, .byte = 0x63 }
};

static const SST_Transaction cmpal_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10682144, .data = 10083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_10[] = {
		{ .addr = 0x72ec64, .byte = 0xb3 },
		{ .addr = 0x72ec65, .byte = 0xca },
		{ .addr = 0x72ec66, .byte = 0x20 },
		{ .addr = 0x72ec67, .byte = 0x55 },
		{ .addr = 0x72ec68, .byte = 0xd5 },
		{ .addr = 0x72ec69, .byte = 0xab }
};

static const SST_RamByte cmpal_final_ram_10[] = {
		{ .addr = 0x72ec64, .byte = 0xb3 },
		{ .addr = 0x72ec65, .byte = 0xca },
		{ .addr = 0x72ec66, .byte = 0x20 },
		{ .addr = 0x72ec67, .byte = 0x55 },
		{ .addr = 0x72ec68, .byte = 0xd5 },
		{ .addr = 0x72ec69, .byte = 0xab }
};

static const SST_Transaction cmpal_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7531624, .data = 54699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_11[] = {
		{ .addr = 0x2c26b8, .byte = 0xb7 },
		{ .addr = 0x2c26b9, .byte = 0xc0 },
		{ .addr = 0x2c26ba, .byte = 0x24 },
		{ .addr = 0x2c26bb, .byte = 0xbe },
		{ .addr = 0x2c26bc, .byte = 0x53 },
		{ .addr = 0x2c26bd, .byte = 0x71 }
};

static const SST_RamByte cmpal_final_ram_11[] = {
		{ .addr = 0x2c26b8, .byte = 0xb7 },
		{ .addr = 0x2c26b9, .byte = 0xc0 },
		{ .addr = 0x2c26ba, .byte = 0x24 },
		{ .addr = 0x2c26bb, .byte = 0xbe },
		{ .addr = 0x2c26bc, .byte = 0x53 },
		{ .addr = 0x2c26bd, .byte = 0x71 }
};

static const SST_Transaction cmpal_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2893500, .data = 21361, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_12[] = {
		{ .addr = 0x334e96, .byte = 0xbd },
		{ .addr = 0x334e97, .byte = 0xe7 },
		{ .addr = 0x334e98, .byte = 0x69 },
		{ .addr = 0x334e99, .byte = 0x14 },
		{ .addr = 0xfb2b0e, .byte = 0x5f },
		{ .addr = 0xfb2b0f, .byte = 0xd2 },
		{ .addr = 0xfb2b10, .byte = 0xdd },
		{ .addr = 0xfb2b11, .byte = 0xe6 },
		{ .addr = 0x334e9a, .byte = 0x84 },
		{ .addr = 0x334e9b, .byte = 0xdd }
};

static const SST_RamByte cmpal_final_ram_12[] = {
		{ .addr = 0x334e96, .byte = 0xbd },
		{ .addr = 0x334e97, .byte = 0xe7 },
		{ .addr = 0x334e98, .byte = 0x69 },
		{ .addr = 0x334e99, .byte = 0x14 },
		{ .addr = 0xfb2b0e, .byte = 0x5f },
		{ .addr = 0xfb2b0f, .byte = 0xd2 },
		{ .addr = 0xfb2b10, .byte = 0xdd },
		{ .addr = 0xfb2b11, .byte = 0xe6 },
		{ .addr = 0x334e9a, .byte = 0x84 },
		{ .addr = 0x334e9b, .byte = 0xdd }
};

static const SST_Transaction cmpal_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16460558, .data = 24530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16460560, .data = 56806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3362458, .data = 34013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_13[] = {
		{ .addr = 0xa22be0, .byte = 0xb9 },
		{ .addr = 0xa22be1, .byte = 0xc5 },
		{ .addr = 0xa22be2, .byte = 0x3c },
		{ .addr = 0xa22be3, .byte = 0x72 },
		{ .addr = 0xa22be4, .byte = 0x70 },
		{ .addr = 0xa22be5, .byte = 0xa6 }
};

static const SST_RamByte cmpal_final_ram_13[] = {
		{ .addr = 0xa22be0, .byte = 0xb9 },
		{ .addr = 0xa22be1, .byte = 0xc5 },
		{ .addr = 0xa22be2, .byte = 0x3c },
		{ .addr = 0xa22be3, .byte = 0x72 },
		{ .addr = 0xa22be4, .byte = 0x70 },
		{ .addr = 0xa22be5, .byte = 0xa6 }
};

static const SST_Transaction cmpal_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10628068, .data = 28838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_14[] = {
		{ .addr = 0x202b54, .byte = 0xbb },
		{ .addr = 0x202b55, .byte = 0xfa },
		{ .addr = 0x202b56, .byte = 0x4d },
		{ .addr = 0x202b57, .byte = 0x62 },
		{ .addr = 0x202b58, .byte = 0x1b },
		{ .addr = 0x202b59, .byte = 0xf5 },
		{ .addr = 0x2078b8, .byte = 0x63 },
		{ .addr = 0x2078b9, .byte = 0xdf },
		{ .addr = 0x2078ba, .byte = 0xaf },
		{ .addr = 0x2078bb, .byte = 0x40 },
		{ .addr = 0x202b5a, .byte = 0x98 },
		{ .addr = 0x202b5b, .byte = 0x4f }
};

static const SST_RamByte cmpal_final_ram_14[] = {
		{ .addr = 0x202b54, .byte = 0xbb },
		{ .addr = 0x202b55, .byte = 0xfa },
		{ .addr = 0x202b56, .byte = 0x4d },
		{ .addr = 0x202b57, .byte = 0x62 },
		{ .addr = 0x202b58, .byte = 0x1b },
		{ .addr = 0x202b59, .byte = 0xf5 },
		{ .addr = 0x2078b8, .byte = 0x63 },
		{ .addr = 0x2078b9, .byte = 0xdf },
		{ .addr = 0x2078ba, .byte = 0xaf },
		{ .addr = 0x2078bb, .byte = 0x40 },
		{ .addr = 0x202b5a, .byte = 0x98 },
		{ .addr = 0x202b5b, .byte = 0x4f }
};

static const SST_Transaction cmpal_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2108248, .data = 7157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2128056, .data = 25567, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2128058, .data = 44864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2108250, .data = 38991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_15[] = {
		{ .addr = 0x9992be, .byte = 0xb3 },
		{ .addr = 0x9992bf, .byte = 0xe9 },
		{ .addr = 0x9992c0, .byte = 0x8d },
		{ .addr = 0x9992c1, .byte = 0xb3 },
		{ .addr = 0x9992c2, .byte = 0x1e },
		{ .addr = 0x9992c3, .byte = 0xd9 },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0xf2 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xdaf288, .byte = 0xb9 },
		{ .addr = 0xdaf289, .byte = 0x00 },
		{ .addr = 0xdaf28a, .byte = 0xb7 },
		{ .addr = 0xdaf28b, .byte = 0x44 }
};

static const SST_RamByte cmpal_final_ram_15[] = {
		{ .addr = 0x9992be, .byte = 0xb3 },
		{ .addr = 0x9992bf, .byte = 0xe9 },
		{ .addr = 0x9992c0, .byte = 0x8d },
		{ .addr = 0x9992c1, .byte = 0xb3 },
		{ .addr = 0x9992c2, .byte = 0x1e },
		{ .addr = 0x9992c3, .byte = 0xd9 },
		{ .addr = 0x69cb12, .byte = 0x92 },
		{ .addr = 0x69cb13, .byte = 0xc0 },
		{ .addr = 0x69cb0e, .byte = 0x86 },
		{ .addr = 0x69cb0f, .byte = 0x1d },
		{ .addr = 0x69cb10, .byte = 0x00 },
		{ .addr = 0x69cb11, .byte = 0x99 },
		{ .addr = 0x69cb0c, .byte = 0xb3 },
		{ .addr = 0x69cb0d, .byte = 0xe9 },
		{ .addr = 0x69cb0a, .byte = 0x27 },
		{ .addr = 0x69cb0b, .byte = 0x65 },
		{ .addr = 0x69cb06, .byte = 0xb3 },
		{ .addr = 0x69cb07, .byte = 0xf1 },
		{ .addr = 0x69cb08, .byte = 0xd7 },
		{ .addr = 0x69cb09, .byte = 0x2c },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0xda },
		{ .addr = 0x00000e, .byte = 0xf2 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xdaf288, .byte = 0xb9 },
		{ .addr = 0xdaf289, .byte = 0x00 },
		{ .addr = 0xdaf28a, .byte = 0xb7 },
		{ .addr = 0xdaf28b, .byte = 0x44 }
};

static const SST_Transaction cmpal_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10064578, .data = 7897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2893668, .data = 205, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6933266, .data = 37568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6933262, .data = 34333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6933264, .data = 153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6933260, .data = 46057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6933258, .data = 10085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6933254, .data = 46065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6933256, .data = 55084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 62088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14348936, .data = 47360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14348938, .data = 46916, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_16[] = {
		{ .addr = 0xdd25fc, .byte = 0xb7 },
		{ .addr = 0xdd25fd, .byte = 0xf4 },
		{ .addr = 0xdd25fe, .byte = 0x3b },
		{ .addr = 0xdd25ff, .byte = 0x02 },
		{ .addr = 0xdd2600, .byte = 0x5b },
		{ .addr = 0xdd2601, .byte = 0xbb },
		{ .addr = 0xb49db2, .byte = 0xe7 },
		{ .addr = 0xb49db3, .byte = 0xbb },
		{ .addr = 0xb49db4, .byte = 0x72 },
		{ .addr = 0xb49db5, .byte = 0x27 },
		{ .addr = 0xdd2602, .byte = 0x60 },
		{ .addr = 0xdd2603, .byte = 0x25 }
};

static const SST_RamByte cmpal_final_ram_16[] = {
		{ .addr = 0xdd25fc, .byte = 0xb7 },
		{ .addr = 0xdd25fd, .byte = 0xf4 },
		{ .addr = 0xdd25fe, .byte = 0x3b },
		{ .addr = 0xdd25ff, .byte = 0x02 },
		{ .addr = 0xdd2600, .byte = 0x5b },
		{ .addr = 0xdd2601, .byte = 0xbb },
		{ .addr = 0xb49db2, .byte = 0xe7 },
		{ .addr = 0xb49db3, .byte = 0xbb },
		{ .addr = 0xb49db4, .byte = 0x72 },
		{ .addr = 0xb49db5, .byte = 0x27 },
		{ .addr = 0xdd2602, .byte = 0x60 },
		{ .addr = 0xdd2603, .byte = 0x25 }
};

static const SST_Transaction cmpal_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14493184, .data = 23483, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11836850, .data = 59323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11836852, .data = 29223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14493186, .data = 24613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_17[] = {
		{ .addr = 0xcef5d0, .byte = 0xb5 },
		{ .addr = 0xcef5d1, .byte = 0xf4 },
		{ .addr = 0xcef5d2, .byte = 0x43 },
		{ .addr = 0xcef5d3, .byte = 0x10 },
		{ .addr = 0xcef5d4, .byte = 0x96 },
		{ .addr = 0xcef5d5, .byte = 0x91 },
		{ .addr = 0x48403e, .byte = 0xa8 },
		{ .addr = 0x48403f, .byte = 0x92 },
		{ .addr = 0x484040, .byte = 0x1a },
		{ .addr = 0x484041, .byte = 0xc5 },
		{ .addr = 0xcef5d6, .byte = 0x83 },
		{ .addr = 0xcef5d7, .byte = 0x02 }
};

static const SST_RamByte cmpal_final_ram_17[] = {
		{ .addr = 0xcef5d0, .byte = 0xb5 },
		{ .addr = 0xcef5d1, .byte = 0xf4 },
		{ .addr = 0xcef5d2, .byte = 0x43 },
		{ .addr = 0xcef5d3, .byte = 0x10 },
		{ .addr = 0xcef5d4, .byte = 0x96 },
		{ .addr = 0xcef5d5, .byte = 0x91 },
		{ .addr = 0x48403e, .byte = 0xa8 },
		{ .addr = 0x48403f, .byte = 0x92 },
		{ .addr = 0x484040, .byte = 0x1a },
		{ .addr = 0x484041, .byte = 0xc5 },
		{ .addr = 0xcef5d6, .byte = 0x83 },
		{ .addr = 0xcef5d7, .byte = 0x02 }
};

static const SST_Transaction cmpal_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13563348, .data = 38545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4735038, .data = 43154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4735040, .data = 6853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13563350, .data = 33538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_18[] = {
		{ .addr = 0x3c7e6e, .byte = 0xbb },
		{ .addr = 0x3c7e6f, .byte = 0xf9 },
		{ .addr = 0x3c7e70, .byte = 0x3c },
		{ .addr = 0x3c7e71, .byte = 0xb3 },
		{ .addr = 0x3c7e72, .byte = 0x5c },
		{ .addr = 0x3c7e73, .byte = 0x29 },
		{ .addr = 0x3c7e74, .byte = 0x17 },
		{ .addr = 0x3c7e75, .byte = 0x6b },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x965214, .byte = 0x09 },
		{ .addr = 0x965215, .byte = 0xe9 },
		{ .addr = 0x965216, .byte = 0x42 },
		{ .addr = 0x965217, .byte = 0x31 }
};

static const SST_RamByte cmpal_final_ram_18[] = {
		{ .addr = 0x3c7e6e, .byte = 0xbb },
		{ .addr = 0x3c7e6f, .byte = 0xf9 },
		{ .addr = 0x3c7e70, .byte = 0x3c },
		{ .addr = 0x3c7e71, .byte = 0xb3 },
		{ .addr = 0x3c7e72, .byte = 0x5c },
		{ .addr = 0x3c7e73, .byte = 0x29 },
		{ .addr = 0x3c7e74, .byte = 0x17 },
		{ .addr = 0x3c7e75, .byte = 0x6b },
		{ .addr = 0xae5e9e, .byte = 0x7e },
		{ .addr = 0xae5e9f, .byte = 0x74 },
		{ .addr = 0xae5e9a, .byte = 0x03 },
		{ .addr = 0xae5e9b, .byte = 0x18 },
		{ .addr = 0xae5e9c, .byte = 0x00 },
		{ .addr = 0xae5e9d, .byte = 0x3c },
		{ .addr = 0xae5e98, .byte = 0xbb },
		{ .addr = 0xae5e99, .byte = 0xf9 },
		{ .addr = 0xae5e96, .byte = 0x5c },
		{ .addr = 0xae5e97, .byte = 0x29 },
		{ .addr = 0xae5e92, .byte = 0xbb },
		{ .addr = 0xae5e93, .byte = 0xf1 },
		{ .addr = 0xae5e94, .byte = 0x3c },
		{ .addr = 0xae5e95, .byte = 0xb3 },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x965214, .byte = 0x09 },
		{ .addr = 0x965215, .byte = 0xe9 },
		{ .addr = 0x965216, .byte = 0x42 },
		{ .addr = 0x965217, .byte = 0x31 }
};

static const SST_Transaction cmpal_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3964530, .data = 23593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3964532, .data = 5995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11754536, .data = 31495, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11427486, .data = 32372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11427482, .data = 792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11427484, .data = 60, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11427480, .data = 48121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11427478, .data = 23593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11427474, .data = 48113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11427476, .data = 15539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9851412, .data = 2537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9851414, .data = 16945, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_19[] = {
		{ .addr = 0x3e8622, .byte = 0xbb },
		{ .addr = 0x3e8623, .byte = 0xdd },
		{ .addr = 0x3e8624, .byte = 0xba },
		{ .addr = 0x3e8625, .byte = 0x24 },
		{ .addr = 0x00000c, .byte = 0xba },
		{ .addr = 0x00000d, .byte = 0x5a },
		{ .addr = 0x00000e, .byte = 0xad },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x5aad68, .byte = 0x61 },
		{ .addr = 0x5aad69, .byte = 0xd4 },
		{ .addr = 0x5aad6a, .byte = 0x9d },
		{ .addr = 0x5aad6b, .byte = 0x62 }
};

static const SST_RamByte cmpal_final_ram_19[] = {
		{ .addr = 0x3e8622, .byte = 0xbb },
		{ .addr = 0x3e8623, .byte = 0xdd },
		{ .addr = 0x3e8624, .byte = 0xba },
		{ .addr = 0x3e8625, .byte = 0x24 },
		{ .addr = 0x763d34, .byte = 0x86 },
		{ .addr = 0x763d35, .byte = 0x24 },
		{ .addr = 0x763d30, .byte = 0x04 },
		{ .addr = 0x763d31, .byte = 0x0c },
		{ .addr = 0x763d32, .byte = 0x00 },
		{ .addr = 0x763d33, .byte = 0x3e },
		{ .addr = 0x763d2e, .byte = 0xbb },
		{ .addr = 0x763d2f, .byte = 0xdd },
		{ .addr = 0x763d2c, .byte = 0x33 },
		{ .addr = 0x763d2d, .byte = 0xd5 },
		{ .addr = 0x763d28, .byte = 0xbb },
		{ .addr = 0x763d29, .byte = 0xd1 },
		{ .addr = 0x763d2a, .byte = 0x85 },
		{ .addr = 0x763d2b, .byte = 0x33 },
		{ .addr = 0x00000c, .byte = 0xba },
		{ .addr = 0x00000d, .byte = 0x5a },
		{ .addr = 0x00000e, .byte = 0xad },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x5aad68, .byte = 0x61 },
		{ .addr = 0x5aad69, .byte = 0xd4 },
		{ .addr = 0x5aad6a, .byte = 0x9d },
		{ .addr = 0x5aad6b, .byte = 0x62 }
};

static const SST_Transaction cmpal_transactions_19[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3355604, .data = 62487, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7748916, .data = 34340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7748912, .data = 1036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7748914, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7748910, .data = 48093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7748908, .data = 13269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7748904, .data = 48081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7748906, .data = 34099, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5942632, .data = 25044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5942634, .data = 40290, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_20[] = {
		{ .addr = 0x574c1c, .byte = 0xb5 },
		{ .addr = 0x574c1d, .byte = 0xd0 },
		{ .addr = 0x574c1e, .byte = 0xe2 },
		{ .addr = 0x574c1f, .byte = 0xaa },
		{ .addr = 0x3cc552, .byte = 0x7d },
		{ .addr = 0x3cc553, .byte = 0x43 },
		{ .addr = 0x3cc554, .byte = 0x58 },
		{ .addr = 0x3cc555, .byte = 0x02 },
		{ .addr = 0x574c20, .byte = 0x74 },
		{ .addr = 0x574c21, .byte = 0x6e }
};

static const SST_RamByte cmpal_final_ram_20[] = {
		{ .addr = 0x574c1c, .byte = 0xb5 },
		{ .addr = 0x574c1d, .byte = 0xd0 },
		{ .addr = 0x574c1e, .byte = 0xe2 },
		{ .addr = 0x574c1f, .byte = 0xaa },
		{ .addr = 0x3cc552, .byte = 0x7d },
		{ .addr = 0x3cc553, .byte = 0x43 },
		{ .addr = 0x3cc554, .byte = 0x58 },
		{ .addr = 0x3cc555, .byte = 0x02 },
		{ .addr = 0x574c20, .byte = 0x74 },
		{ .addr = 0x574c21, .byte = 0x6e }
};

static const SST_Transaction cmpal_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3982674, .data = 32067, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3982676, .data = 22530, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5721120, .data = 29806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_21[] = {
		{ .addr = 0xeaaad8, .byte = 0xb3 },
		{ .addr = 0xeaaad9, .byte = 0xe2 },
		{ .addr = 0xeaaada, .byte = 0xfa },
		{ .addr = 0xeaaadb, .byte = 0x9e },
		{ .addr = 0x00000c, .byte = 0x5c },
		{ .addr = 0x00000d, .byte = 0x92 },
		{ .addr = 0x00000e, .byte = 0x18 },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x9218ba, .byte = 0x49 },
		{ .addr = 0x9218bb, .byte = 0x76 },
		{ .addr = 0x9218bc, .byte = 0x06 },
		{ .addr = 0x9218bd, .byte = 0x09 }
};

static const SST_RamByte cmpal_final_ram_21[] = {
		{ .addr = 0xeaaad8, .byte = 0xb3 },
		{ .addr = 0xeaaad9, .byte = 0xe2 },
		{ .addr = 0xeaaada, .byte = 0xfa },
		{ .addr = 0xeaaadb, .byte = 0x9e },
		{ .addr = 0xd11be0, .byte = 0xaa },
		{ .addr = 0xd11be1, .byte = 0xda },
		{ .addr = 0xd11bdc, .byte = 0xa5 },
		{ .addr = 0xd11bdd, .byte = 0x18 },
		{ .addr = 0xd11bde, .byte = 0x00 },
		{ .addr = 0xd11bdf, .byte = 0xea },
		{ .addr = 0xd11bda, .byte = 0xb3 },
		{ .addr = 0xd11bdb, .byte = 0xe2 },
		{ .addr = 0xd11bd8, .byte = 0xff },
		{ .addr = 0xd11bd9, .byte = 0xed },
		{ .addr = 0xd11bd4, .byte = 0xb3 },
		{ .addr = 0xd11bd5, .byte = 0xf5 },
		{ .addr = 0xd11bd6, .byte = 0x34 },
		{ .addr = 0xd11bd7, .byte = 0xe9 },
		{ .addr = 0x00000c, .byte = 0x5c },
		{ .addr = 0x00000d, .byte = 0x92 },
		{ .addr = 0x00000e, .byte = 0x18 },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x9218ba, .byte = 0x49 },
		{ .addr = 0x9218bb, .byte = 0x76 },
		{ .addr = 0x9218bc, .byte = 0x06 },
		{ .addr = 0x9218bd, .byte = 0x09 }
};

static const SST_Transaction cmpal_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15335404, .data = 51013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13704160, .data = 43738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13704156, .data = 42264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13704158, .data = 234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13704154, .data = 46050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13704152, .data = 65517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13704148, .data = 46069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13704150, .data = 13545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 23698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9574586, .data = 18806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9574588, .data = 1545, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_22[] = {
		{ .addr = 0xb70dc6, .byte = 0xb5 },
		{ .addr = 0xb70dc7, .byte = 0xdd },
		{ .addr = 0xb70dc8, .byte = 0x5d },
		{ .addr = 0xb70dc9, .byte = 0x8f },
		{ .addr = 0x7da7d0, .byte = 0x00 },
		{ .addr = 0x7da7d1, .byte = 0x43 },
		{ .addr = 0x7da7d2, .byte = 0x24 },
		{ .addr = 0x7da7d3, .byte = 0xe3 },
		{ .addr = 0xb70dca, .byte = 0xa0 },
		{ .addr = 0xb70dcb, .byte = 0xe4 }
};

static const SST_RamByte cmpal_final_ram_22[] = {
		{ .addr = 0xb70dc6, .byte = 0xb5 },
		{ .addr = 0xb70dc7, .byte = 0xdd },
		{ .addr = 0xb70dc8, .byte = 0x5d },
		{ .addr = 0xb70dc9, .byte = 0x8f },
		{ .addr = 0x7da7d0, .byte = 0x00 },
		{ .addr = 0x7da7d1, .byte = 0x43 },
		{ .addr = 0x7da7d2, .byte = 0x24 },
		{ .addr = 0x7da7d3, .byte = 0xe3 },
		{ .addr = 0xb70dca, .byte = 0xa0 },
		{ .addr = 0xb70dcb, .byte = 0xe4 }
};

static const SST_Transaction cmpal_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8234960, .data = 67, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8234962, .data = 9443, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11996618, .data = 41188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_23[] = {
		{ .addr = 0x8e4b20, .byte = 0xb5 },
		{ .addr = 0x8e4b21, .byte = 0xc5 },
		{ .addr = 0x8e4b22, .byte = 0xe9 },
		{ .addr = 0x8e4b23, .byte = 0x98 },
		{ .addr = 0x8e4b24, .byte = 0x2d },
		{ .addr = 0x8e4b25, .byte = 0x11 }
};

static const SST_RamByte cmpal_final_ram_23[] = {
		{ .addr = 0x8e4b20, .byte = 0xb5 },
		{ .addr = 0x8e4b21, .byte = 0xc5 },
		{ .addr = 0x8e4b22, .byte = 0xe9 },
		{ .addr = 0x8e4b23, .byte = 0x98 },
		{ .addr = 0x8e4b24, .byte = 0x2d },
		{ .addr = 0x8e4b25, .byte = 0x11 }
};

static const SST_Transaction cmpal_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9325348, .data = 11537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_24[] = {
		{ .addr = 0x77440a, .byte = 0xbb },
		{ .addr = 0x77440b, .byte = 0xde },
		{ .addr = 0x77440c, .byte = 0x98 },
		{ .addr = 0x77440d, .byte = 0xc6 },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x83 },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0x9e8356, .byte = 0xba },
		{ .addr = 0x9e8357, .byte = 0x4f },
		{ .addr = 0x9e8358, .byte = 0x00 },
		{ .addr = 0x9e8359, .byte = 0x34 }
};

static const SST_RamByte cmpal_final_ram_24[] = {
		{ .addr = 0x77440a, .byte = 0xbb },
		{ .addr = 0x77440b, .byte = 0xde },
		{ .addr = 0x77440c, .byte = 0x98 },
		{ .addr = 0x77440d, .byte = 0xc6 },
		{ .addr = 0x7a087a, .byte = 0x44 },
		{ .addr = 0x7a087b, .byte = 0x0c },
		{ .addr = 0x7a0876, .byte = 0x04 },
		{ .addr = 0x7a0877, .byte = 0x11 },
		{ .addr = 0x7a0878, .byte = 0x00 },
		{ .addr = 0x7a0879, .byte = 0x77 },
		{ .addr = 0x7a0874, .byte = 0xbb },
		{ .addr = 0x7a0875, .byte = 0xde },
		{ .addr = 0x7a0872, .byte = 0x4f },
		{ .addr = 0x7a0873, .byte = 0x37 },
		{ .addr = 0x7a086e, .byte = 0xbb },
		{ .addr = 0x7a086f, .byte = 0xd1 },
		{ .addr = 0x7a0870, .byte = 0xe4 },
		{ .addr = 0x7a0871, .byte = 0x39 },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x83 },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0x9e8356, .byte = 0xba },
		{ .addr = 0x9e8357, .byte = 0x4f },
		{ .addr = 0x9e8358, .byte = 0x00 },
		{ .addr = 0x9e8359, .byte = 0x34 }
};

static const SST_Transaction cmpal_transactions_24[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3755830, .data = 37034, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7997562, .data = 17420, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7997558, .data = 1041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7997560, .data = 119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7997556, .data = 48094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7997554, .data = 20279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7997550, .data = 48081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7997552, .data = 58425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10388310, .data = 47695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10388312, .data = 52, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_25[] = {
		{ .addr = 0x386ae6, .byte = 0xbb },
		{ .addr = 0x386ae7, .byte = 0xc4 },
		{ .addr = 0x386ae8, .byte = 0x23 },
		{ .addr = 0x386ae9, .byte = 0x5e },
		{ .addr = 0x386aea, .byte = 0x93 },
		{ .addr = 0x386aeb, .byte = 0x53 }
};

static const SST_RamByte cmpal_final_ram_25[] = {
		{ .addr = 0x386ae6, .byte = 0xbb },
		{ .addr = 0x386ae7, .byte = 0xc4 },
		{ .addr = 0x386ae8, .byte = 0x23 },
		{ .addr = 0x386ae9, .byte = 0x5e },
		{ .addr = 0x386aea, .byte = 0x93 },
		{ .addr = 0x386aeb, .byte = 0x53 }
};

static const SST_Transaction cmpal_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3697386, .data = 37715, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_26[] = {
		{ .addr = 0xabb206, .byte = 0xb7 },
		{ .addr = 0xabb207, .byte = 0xc7 },
		{ .addr = 0xabb208, .byte = 0x05 },
		{ .addr = 0xabb209, .byte = 0x7a },
		{ .addr = 0xabb20a, .byte = 0xd6 },
		{ .addr = 0xabb20b, .byte = 0x50 }
};

static const SST_RamByte cmpal_final_ram_26[] = {
		{ .addr = 0xabb206, .byte = 0xb7 },
		{ .addr = 0xabb207, .byte = 0xc7 },
		{ .addr = 0xabb208, .byte = 0x05 },
		{ .addr = 0xabb209, .byte = 0x7a },
		{ .addr = 0xabb20a, .byte = 0xd6 },
		{ .addr = 0xabb20b, .byte = 0x50 }
};

static const SST_Transaction cmpal_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11252234, .data = 54864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_27[] = {
		{ .addr = 0x4f34d4, .byte = 0xbd },
		{ .addr = 0x4f34d5, .byte = 0xd9 },
		{ .addr = 0x4f34d6, .byte = 0xe7 },
		{ .addr = 0x4f34d7, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0xb3 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0x76 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x7a768a, .byte = 0xbd },
		{ .addr = 0x7a768b, .byte = 0x6b },
		{ .addr = 0x7a768c, .byte = 0xb7 },
		{ .addr = 0x7a768d, .byte = 0xfe }
};

static const SST_RamByte cmpal_final_ram_27[] = {
		{ .addr = 0x4f34d4, .byte = 0xbd },
		{ .addr = 0x4f34d5, .byte = 0xd9 },
		{ .addr = 0x4f34d6, .byte = 0xe7 },
		{ .addr = 0x4f34d7, .byte = 0x13 },
		{ .addr = 0x05bb1e, .byte = 0x34 },
		{ .addr = 0x05bb1f, .byte = 0xd6 },
		{ .addr = 0x05bb1a, .byte = 0x27 },
		{ .addr = 0x05bb1b, .byte = 0x1d },
		{ .addr = 0x05bb1c, .byte = 0x00 },
		{ .addr = 0x05bb1d, .byte = 0x4f },
		{ .addr = 0x05bb18, .byte = 0xbd },
		{ .addr = 0x05bb19, .byte = 0xd9 },
		{ .addr = 0x05bb16, .byte = 0xcf },
		{ .addr = 0x05bb17, .byte = 0xbb },
		{ .addr = 0x05bb12, .byte = 0xbd },
		{ .addr = 0x05bb13, .byte = 0xd5 },
		{ .addr = 0x05bb14, .byte = 0x95 },
		{ .addr = 0x05bb15, .byte = 0xa0 },
		{ .addr = 0x00000c, .byte = 0xb3 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0x76 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x7a768a, .byte = 0xbd },
		{ .addr = 0x7a768b, .byte = 0x6b },
		{ .addr = 0x7a768c, .byte = 0xb7 },
		{ .addr = 0x7a768d, .byte = 0xfe }
};

static const SST_Transaction cmpal_transactions_27[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10538938, .data = 45011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 375582, .data = 13526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 375578, .data = 10013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 375580, .data = 79, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 375576, .data = 48601, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 375574, .data = 53179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 375570, .data = 48597, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 375572, .data = 38304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8025738, .data = 48491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8025740, .data = 47102, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpal_initial_ram_28[] = {
		{ .addr = 0x1f1a1c, .byte = 0xb1 },
		{ .addr = 0x1f1a1d, .byte = 0xeb },
		{ .addr = 0x1f1a1e, .byte = 0xde },
		{ .addr = 0x1f1a1f, .byte = 0xdc },
		{ .addr = 0x1f1a20, .byte = 0x8a },
		{ .addr = 0x1f1a21, .byte = 0x9b },
		{ .addr = 0xfc3c86, .byte = 0x5e },
		{ .addr = 0xfc3c87, .byte = 0xeb },
		{ .addr = 0xfc3c88, .byte = 0x56 },
		{ .addr = 0xfc3c89, .byte = 0xf1 },
		{ .addr = 0x1f1a22, .byte = 0x71 },
		{ .addr = 0x1f1a23, .byte = 0x44 }
};

static const SST_RamByte cmpal_final_ram_28[] = {
		{ .addr = 0x1f1a1c, .byte = 0xb1 },
		{ .addr = 0x1f1a1d, .byte = 0xeb },
		{ .addr = 0x1f1a1e, .byte = 0xde },
		{ .addr = 0x1f1a1f, .byte = 0xdc },
		{ .addr = 0x1f1a20, .byte = 0x8a },
		{ .addr = 0x1f1a21, .byte = 0x9b },
		{ .addr = 0xfc3c86, .byte = 0x5e },
		{ .addr = 0xfc3c87, .byte = 0xeb },
		{ .addr = 0xfc3c88, .byte = 0x56 },
		{ .addr = 0xfc3c89, .byte = 0xf1 },
		{ .addr = 0x1f1a22, .byte = 0x71 },
		{ .addr = 0x1f1a23, .byte = 0x44 }
};

static const SST_Transaction cmpal_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2038304, .data = 35483, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16530566, .data = 24299, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16530568, .data = 22257, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2038306, .data = 28996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_29[] = {
		{ .addr = 0x02f4ee, .byte = 0xb9 },
		{ .addr = 0x02f4ef, .byte = 0xc7 },
		{ .addr = 0x02f4f0, .byte = 0xea },
		{ .addr = 0x02f4f1, .byte = 0x1f },
		{ .addr = 0x02f4f2, .byte = 0x9a },
		{ .addr = 0x02f4f3, .byte = 0x1c }
};

static const SST_RamByte cmpal_final_ram_29[] = {
		{ .addr = 0x02f4ee, .byte = 0xb9 },
		{ .addr = 0x02f4ef, .byte = 0xc7 },
		{ .addr = 0x02f4f0, .byte = 0xea },
		{ .addr = 0x02f4f1, .byte = 0x1f },
		{ .addr = 0x02f4f2, .byte = 0x9a },
		{ .addr = 0x02f4f3, .byte = 0x1c }
};

static const SST_Transaction cmpal_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 193778, .data = 39452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_30[] = {
		{ .addr = 0x35db5c, .byte = 0xbd },
		{ .addr = 0x35db5d, .byte = 0xcc },
		{ .addr = 0x35db5e, .byte = 0xb1 },
		{ .addr = 0x35db5f, .byte = 0x50 },
		{ .addr = 0x35db60, .byte = 0x78 },
		{ .addr = 0x35db61, .byte = 0x3f }
};

static const SST_RamByte cmpal_final_ram_30[] = {
		{ .addr = 0x35db5c, .byte = 0xbd },
		{ .addr = 0x35db5d, .byte = 0xcc },
		{ .addr = 0x35db5e, .byte = 0xb1 },
		{ .addr = 0x35db5f, .byte = 0x50 },
		{ .addr = 0x35db60, .byte = 0x78 },
		{ .addr = 0x35db61, .byte = 0x3f }
};

static const SST_Transaction cmpal_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3529568, .data = 30783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpal_initial_ram_31[] = {
		{ .addr = 0x00ca18, .byte = 0xb5 },
		{ .addr = 0x00ca19, .byte = 0xc5 },
		{ .addr = 0x00ca1a, .byte = 0xca },
		{ .addr = 0x00ca1b, .byte = 0x64 },
		{ .addr = 0x00ca1c, .byte = 0x0a },
		{ .addr = 0x00ca1d, .byte = 0x63 }
};

static const SST_RamByte cmpal_final_ram_31[] = {
		{ .addr = 0x00ca18, .byte = 0xb5 },
		{ .addr = 0x00ca19, .byte = 0xc5 },
		{ .addr = 0x00ca1a, .byte = 0xca },
		{ .addr = 0x00ca1b, .byte = 0x64 },
		{ .addr = 0x00ca1c, .byte = 0x0a },
		{ .addr = 0x00ca1d, .byte = 0x63 }
};

static const SST_Transaction cmpal_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 51740, .data = 2659, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_TestCase cmpal[] = {
	{
		.name = "000 CMPA.l (d16, A4), A3 b7ec",
		.initial = {
			.regs = {
				2890798821, 1862138709, 2854314823, 398855901, 3873552237, 4105501077, 2205126645, 3703781335, 854050806, 399742751, 2206797844, 3644069934, 2479716593, 1347522574, 2529794186, 3160850, 11019136, 8711, 4796260
			},
			.prefetch0 = 47084,
			.prefetch1 = 5410,
			.ram = cmpal_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2890798821, 1862138709, 2854314823, 398855901, 3873552237, 4105501077, 2205126645, 3703781335, 854050806, 399742751, 2206797844, 3644069934, 2479716593, 1347522574, 2529794186, 3160850, 11019122, 8711, 1962017538
			},
			.prefetch0 = 65069,
			.prefetch1 = 1237,
			.ram = cmpal_final_ram_0,
			.ram_len = 28,
		},
		.transactions = cmpal_transactions_0,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "001 CMPA.l (xxx).w, A0 b1f8",
		.initial = {
			.regs = {
				1857791523, 2025923305, 1597217911, 1586768434, 405249764, 679794042, 1043098009, 3359219585, 2484096244, 1728183462, 690899843, 690950076, 760366331, 3264554880, 2501603119, 13632862, 10689402, 10002, 602884
			},
			.prefetch0 = 45560,
			.prefetch1 = 40278,
			.ram = cmpal_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1857791523, 2025923305, 1597217911, 1586768434, 405249764, 679794042, 1043098009, 3359219585, 2484096244, 1728183462, 690899843, 690950076, 760366331, 3264554880, 2501603119, 13632862, 10689402, 10002, 602888
			},
			.prefetch0 = 9679,
			.prefetch1 = 18584,
			.ram = cmpal_final_ram_1,
			.ram_len = 12,
		},
		.transactions = cmpal_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 CMPA.l (d8, A3, Xn), A7 bff3",
		.initial = {
			.regs = {
				1123861606, 2617724909, 541392988, 1749887000, 3001234209, 1526689943, 2327023368, 2725789752, 1423048013, 1223551011, 1603653105, 2989797034, 3694055570, 1753087984, 3990940031, 5609064, 788898, 8210, 1700610
			},
			.prefetch0 = 49139,
			.prefetch1 = 454,
			.ram = cmpal_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1123861606, 2617724909, 541392988, 1749887000, 3001234209, 1526689943, 2327023368, 2725789752, 1423048013, 1223551011, 1603653105, 2989797034, 3694055570, 1753087984, 3990940031, 5609064, 788898, 8209, 1700614
			},
			.prefetch0 = 19027,
			.prefetch1 = 44136,
			.ram = cmpal_final_ram_2,
			.ram_len = 12,
		},
		.transactions = cmpal_transactions_2,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "003 CMPA.l D5, A2 b5c5",
		.initial = {
			.regs = {
				3926842024, 1295039569, 1354211432, 3865521203, 3184809874, 391882084, 3248941608, 4254241241, 456443239, 3335501149, 3440124314, 4149264927, 2415966224, 3812401188, 1339927943, 5237616, 9989082, 34310, 16434326
			},
			.prefetch0 = 46533,
			.prefetch1 = 35731,
			.ram = cmpal_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3926842024, 1295039569, 1354211432, 3865521203, 3184809874, 391882084, 3248941608, 4254241241, 456443239, 3335501149, 3440124314, 4149264927, 2415966224, 3812401188, 1339927943, 5237616, 9989082, 34312, 16434328
			},
			.prefetch0 = 35731,
			.prefetch1 = 21252,
			.ram = cmpal_final_ram_3,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_3,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "004 CMPA.l (A4)+, A6 bddc",
		.initial = {
			.regs = {
				1856759463, 2239552759, 3371677283, 2781924779, 3000412674, 98757098, 2308706209, 1210230371, 3369597534, 184101844, 2850413576, 4136911579, 1994348427, 1993618683, 1210359056, 2491984, 2058800, 32794, 16685252
			},
			.prefetch0 = 48604,
			.prefetch1 = 35430,
			.ram = cmpal_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1856759463, 2239552759, 3371677283, 2781924779, 3000412674, 98757098, 2308706209, 1210230371, 3369597534, 184101844, 2850413576, 4136911579, 1994348427, 1993618683, 1210359056, 2491984, 2058786, 8218, 3537240098
			},
			.prefetch0 = 354,
			.prefetch1 = 19653,
			.ram = cmpal_final_ram_4,
			.ram_len = 26,
		},
		.transactions = cmpal_transactions_4,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "005 CMPA.l (A4), A4 b9d4",
		.initial = {
			.regs = {
				34692738, 536476533, 1312057249, 3091791599, 3313007636, 2049370181, 2264145992, 1472507287, 3277793974, 1129796771, 3896897066, 2085480581, 4103897261, 585231679, 2270547954, 1234972, 11073910, 521, 5738212
			},
			.prefetch0 = 47572,
			.prefetch1 = 3204,
			.ram = cmpal_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				34692738, 536476533, 1312057249, 3091791599, 3313007636, 2049370181, 2264145992, 1472507287, 3277793974, 1129796771, 3896897066, 2085480581, 4103897261, 585231679, 2270547954, 1234972, 11073896, 8713, 1004417912
			},
			.prefetch0 = 17278,
			.prefetch1 = 54061,
			.ram = cmpal_final_ram_5,
			.ram_len = 26,
		},
		.transactions = cmpal_transactions_5,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "006 CMPA.l (d8, A3, Xn), A4 b9f3",
		.initial = {
			.regs = {
				1246123831, 2280906455, 3408437051, 1497013095, 3865773830, 2297159758, 1671905229, 2099531269, 2290053228, 3458064707, 435357016, 2389795518, 647081205, 1392790820, 1021920671, 13895024, 15219128, 8201, 12723282
			},
			.prefetch0 = 47603,
			.prefetch1 = 55373,
			.ram = cmpal_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1246123831, 2280906455, 3408437051, 1497013095, 3865773830, 2297159758, 1671905229, 2099531269, 2290053228, 3458064707, 435357016, 2389795518, 647081205, 1392790820, 1021920671, 13895024, 15219114, 8201, 2329822608
			},
			.prefetch0 = 2411,
			.prefetch1 = 60879,
			.ram = cmpal_final_ram_6,
			.ram_len = 28,
		},
		.transactions = cmpal_transactions_6,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "007 CMPA.l (A4), A0 b1d4",
		.initial = {
			.regs = {
				4083354595, 859144092, 766442372, 248572367, 1990079247, 1332799326, 964986679, 4077160293, 638358819, 1217916018, 3300400223, 4082345552, 2079604450, 1988928783, 174764595, 13981888, 16028752, 33813, 13605500
			},
			.prefetch0 = 45524,
			.prefetch1 = 29221,
			.ram = cmpal_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4083354595, 859144092, 766442372, 248572367, 1990079247, 1332799326, 964986679, 4077160293, 638358819, 1217916018, 3300400223, 4082345552, 2079604450, 1988928783, 174764595, 13981888, 16028752, 33808, 13605502
			},
			.prefetch0 = 29221,
			.prefetch1 = 4817,
			.ram = cmpal_final_ram_7,
			.ram_len = 10,
		},
		.transactions = cmpal_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 CMPA.l (d8, A4, Xn), A6 bdf4",
		.initial = {
			.regs = {
				1314629682, 2183724182, 678715104, 1431172842, 1154029876, 1963282782, 555093807, 3602214819, 342700478, 381024471, 1543970263, 394892072, 173138900, 317670520, 3490826906, 4630158, 3653134, 42264, 10128326
			},
			.prefetch0 = 48628,
			.prefetch1 = 50822,
			.ram = cmpal_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1314629682, 2183724182, 678715104, 1431172842, 1154029876, 1963282782, 555093807, 3602214819, 342700478, 381024471, 1543970263, 394892072, 173138900, 317670520, 3490826906, 4630158, 3653134, 42265, 10128330
			},
			.prefetch0 = 10665,
			.prefetch1 = 11342,
			.ram = cmpal_final_ram_8,
			.ram_len = 12,
		},
		.transactions = cmpal_transactions_8,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "009 CMPA.l D7, A0 b1c7",
		.initial = {
			.regs = {
				1313741233, 1282415024, 1806291024, 3163834615, 412978067, 4009306644, 1696944130, 75244293, 1474558469, 1649061319, 2482306627, 1116617453, 2973854350, 2820646228, 3490572086, 14464716, 6003096, 33538, 10682144
			},
			.prefetch0 = 45511,
			.prefetch1 = 18736,
			.ram = cmpal_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1313741233, 1282415024, 1806291024, 3163834615, 412978067, 4009306644, 1696944130, 75244293, 1474558469, 1649061319, 2482306627, 1116617453, 2973854350, 2820646228, 3490572086, 14464716, 6003096, 33536, 10682146
			},
			.prefetch0 = 18736,
			.prefetch1 = 10083,
			.ram = cmpal_final_ram_9,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_9,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "010 CMPA.l A2, A1 b3ca",
		.initial = {
			.regs = {
				60300335, 2873433131, 225224759, 238104279, 1230664859, 796265219, 1971966471, 2457985244, 3286279537, 1399395654, 1231608926, 1136084270, 2301925410, 1080153116, 1789239193, 15790184, 1564184, 285, 7531624
			},
			.prefetch0 = 46026,
			.prefetch1 = 8277,
			.ram = cmpal_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				60300335, 2873433131, 225224759, 238104279, 1230664859, 796265219, 1971966471, 2457985244, 3286279537, 1399395654, 1231608926, 1136084270, 2301925410, 1080153116, 1789239193, 15790184, 1564184, 272, 7531626
			},
			.prefetch0 = 8277,
			.prefetch1 = 54699,
			.ram = cmpal_final_ram_10,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_10,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "011 CMPA.l D0, A3 b7c0",
		.initial = {
			.regs = {
				1883008206, 1489926609, 306695, 1394130479, 1654473646, 438228305, 2847343056, 2622879810, 1142842751, 3966659065, 2533250586, 3675081860, 385319716, 3266950293, 486711846, 13878692, 3678522, 34306, 2893500
			},
			.prefetch0 = 47040,
			.prefetch1 = 9406,
			.ram = cmpal_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1883008206, 1489926609, 306695, 1394130479, 1654473646, 438228305, 2847343056, 2622879810, 1142842751, 3966659065, 2533250586, 3675081860, 385319716, 3266950293, 486711846, 13878692, 3678522, 34306, 2893502
			},
			.prefetch0 = 9406,
			.prefetch1 = 21361,
			.ram = cmpal_final_ram_11,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_11,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "012 CMPA.l -(A7), A6 bde7",
		.initial = {
			.regs = {
				3008780095, 244901157, 1575102672, 4100467011, 3464694085, 1228504444, 1490472162, 3165709250, 3050518347, 1773306169, 1532086601, 73221352, 1107753289, 1012740204, 2562983112, 13197974, 16460562, 42514, 3362458
			},
			.prefetch0 = 48615,
			.prefetch1 = 26900,
			.ram = cmpal_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3008780095, 244901157, 1575102672, 4100467011, 3464694085, 1228504444, 1490472162, 3165709250, 3050518347, 1773306169, 1532086601, 73221352, 1107753289, 1012740204, 2562983112, 13197974, 16460558, 42514, 3362460
			},
			.prefetch0 = 26900,
			.prefetch1 = 34013,
			.ram = cmpal_final_ram_12,
			.ram_len = 10,
		},
		.transactions = cmpal_transactions_12,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "013 CMPA.l D5, A4 b9c5",
		.initial = {
			.regs = {
				4171161633, 956731644, 3198120346, 4143478289, 2937184420, 3826326423, 2371560978, 637614034, 1339259500, 3018510521, 2573282466, 755247119, 836871570, 1533759073, 2588597215, 5365936, 4575340, 8217, 10628068
			},
			.prefetch0 = 47557,
			.prefetch1 = 15474,
			.ram = cmpal_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4171161633, 956731644, 3198120346, 4143478289, 2937184420, 3826326423, 2371560978, 637614034, 1339259500, 3018510521, 2573282466, 755247119, 836871570, 1533759073, 2588597215, 5365936, 4575340, 8209, 10628070
			},
			.prefetch0 = 15474,
			.prefetch1 = 28838,
			.ram = cmpal_final_ram_13,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_13,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "014 CMPA.l (d16, PC), A5 bbfa",
		.initial = {
			.regs = {
				2511827231, 3267548265, 3705705768, 1433904776, 421771526, 3554844074, 1214782846, 1573281037, 2275728322, 2512367898, 1446490035, 3992619192, 4138312277, 3347636957, 3520391644, 5567050, 10108584, 1808, 2108248
			},
			.prefetch0 = 48122,
			.prefetch1 = 19810,
			.ram = cmpal_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2511827231, 3267548265, 3705705768, 1433904776, 421771526, 3554844074, 1214782846, 1573281037, 2275728322, 2512367898, 1446490035, 3992619192, 4138312277, 3347636957, 3520391644, 5567050, 10108584, 1810, 2108252
			},
			.prefetch0 = 7157,
			.prefetch1 = 38991,
			.ram = cmpal_final_ram_14,
			.ram_len = 12,
		},
		.transactions = cmpal_transactions_14,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "015 CMPA.l (d16, A1), A1 b3e9",
		.initial = {
			.regs = {
				952392333, 1075200793, 54369346, 66733110, 2541175102, 3046911886, 2607453568, 3386490697, 2738062100, 3610024370, 3933341392, 944453667, 1054371478, 1216697465, 2630493791, 16470884, 6933268, 34333, 10064578
			},
			.prefetch0 = 46057,
			.prefetch1 = 36275,
			.ram = cmpal_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				952392333, 1075200793, 54369346, 66733110, 2541175102, 3046911886, 2607453568, 3386490697, 2738062100, 3610024370, 3933341392, 944453667, 1054371478, 1216697465, 2630493791, 16470884, 6933254, 9757, 886764172
			},
			.prefetch0 = 47360,
			.prefetch1 = 46916,
			.ram = cmpal_final_ram_15,
			.ram_len = 28,
		},
		.transactions = cmpal_transactions_15,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "016 CMPA.l (d8, A4, Xn), A3 b7f4",
		.initial = {
			.regs = {
				4105711440, 2441334097, 2175146930, 2905450472, 2222007626, 3706245796, 1955675493, 178457430, 2673742481, 1927124894, 2327136784, 3510347123, 3162961352, 2435214980, 1949385509, 7298980, 13129294, 9244, 14493184
			},
			.prefetch0 = 47092,
			.prefetch1 = 15106,
			.ram = cmpal_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4105711440, 2441334097, 2175146930, 2905450472, 2222007626, 3706245796, 1955675493, 178457430, 2673742481, 1927124894, 2327136784, 3510347123, 3162961352, 2435214980, 1949385509, 7298980, 13129294, 9241, 14493188
			},
			.prefetch0 = 23483,
			.prefetch1 = 24613,
			.ram = cmpal_final_ram_16,
			.ram_len = 12,
		},
		.transactions = cmpal_transactions_16,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "017 CMPA.l (d8, A4, Xn), A2 b5f4",
		.initial = {
			.regs = {
				1749797537, 931387595, 2662320304, 291985120, 2470019213, 3551226360, 1401838452, 3982321156, 581200649, 3790488856, 3212675646, 1126091745, 3192438689, 468756940, 927406132, 9165074, 12528596, 8731, 13563348
			},
			.prefetch0 = 46580,
			.prefetch1 = 17168,
			.ram = cmpal_initial_ram_17,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1749797537, 931387595, 2662320304, 291985120, 2470019213, 3551226360, 1401838452, 3982321156, 581200649, 3790488856, 3212675646, 1126091745, 3192438689, 468756940, 927406132, 9165074, 12528596, 8720, 13563352
			},
			.prefetch0 = 38545,
			.prefetch1 = 33538,
			.ram = cmpal_final_ram_17,
			.ram_len = 12,
		},
		.transactions = cmpal_transactions_17,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "018 CMPA.l (xxx).l, A5 bbf9",
		.initial = {
			.regs = {
				793447941, 3667256035, 217666307, 3171306485, 1340271695, 2134041246, 1345697197, 1505189425, 1700415101, 449081721, 463722252, 860567060, 744662489, 3697208901, 98801737, 10225376, 11427488, 792, 3964530
			},
			.prefetch0 = 48121,
			.prefetch1 = 15539,
			.ram = cmpal_initial_ram_18,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				793447941, 3667256035, 217666307, 3171306485, 1340271695, 2134041246, 1345697197, 1505189425, 1700415101, 449081721, 463722252, 860567060, 744662489, 3697208901, 98801737, 10225376, 11427474, 8984, 3851833880
			},
			.prefetch0 = 2537,
			.prefetch1 = 16945,
			.ram = cmpal_final_ram_18,
			.ram_len = 30,
		},
		.transactions = cmpal_transactions_18,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "019 CMPA.l (A5)+, A5 bbdd",
		.initial = {
			.regs = {
				2589520391, 15401967, 316604369, 120184316, 239261137, 1957844654, 785024210, 2289499516, 2848768673, 3181414409, 3592203191, 1726763093, 4171972105, 2234725333, 1149462529, 13377164, 7748918, 1036, 4097574
			},
			.prefetch0 = 48093,
			.prefetch1 = 47652,
			.ram = cmpal_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2589520391, 15401967, 316604369, 120184316, 239261137, 1957844654, 785024210, 2289499516, 2848768673, 3181414409, 3592203191, 1726763093, 4171972105, 2234725333, 1149462529, 13377164, 7748904, 9228, 3126504812
			},
			.prefetch0 = 25044,
			.prefetch1 = 40290,
			.ram = cmpal_final_ram_19,
			.ram_len = 26,
		},
		.transactions = cmpal_transactions_19,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "020 CMPA.l (A0), A2 b5d0",
		.initial = {
			.regs = {
				3946510571, 4192430288, 748728837, 3353185054, 2304557217, 424723522, 16401426, 1734247364, 1144833362, 2271029537, 1923702985, 3144939719, 1834702122, 1317192793, 2922716199, 4370838, 8576468, 34327, 5721120
			},
			.prefetch0 = 46544,
			.prefetch1 = 58026,
			.ram = cmpal_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3946510571, 4192430288, 748728837, 3353185054, 2304557217, 424723522, 16401426, 1734247364, 1144833362, 2271029537, 1923702985, 3144939719, 1834702122, 1317192793, 2922716199, 4370838, 8576468, 34329, 5721122
			},
			.prefetch0 = 58026,
			.prefetch1 = 29806,
			.ram = cmpal_final_ram_20,
			.ram_len = 10,
		},
		.transactions = cmpal_transactions_20,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "021 CMPA.l -(A2), A1 b3e2",
		.initial = {
			.regs = {
				3800362692, 2660131717, 174743248, 604694565, 1963018172, 2044632207, 1086005465, 452089017, 4087077822, 687340819, 887750641, 1507317496, 1896333456, 332985305, 449204323, 13783926, 13704162, 42264, 15379164
			},
			.prefetch0 = 46050,
			.prefetch1 = 64158,
			.ram = cmpal_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3800362692, 2660131717, 174743248, 604694565, 1963018172, 2044632207, 1086005465, 452089017, 4087077822, 687340819, 887750637, 1507317496, 1896333456, 332985305, 449204323, 13783926, 13704148, 9496, 1553078462
			},
			.prefetch0 = 18806,
			.prefetch1 = 1545,
			.ram = cmpal_final_ram_21,
			.ram_len = 26,
		},
		.transactions = cmpal_transactions_21,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "022 CMPA.l (A5)+, A2 b5dd",
		.initial = {
			.regs = {
				165191649, 1133048817, 1628122477, 3110141672, 1658463515, 2289814490, 2284570393, 2513220126, 1276321882, 1434265669, 4171408820, 1267864659, 3291022629, 3665668048, 2531371548, 5951474, 16443218, 1309, 11996618
			},
			.prefetch0 = 46557,
			.prefetch1 = 23951,
			.ram = cmpal_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				165191649, 1133048817, 1628122477, 3110141672, 1658463515, 2289814490, 2284570393, 2513220126, 1276321882, 1434265669, 4171408820, 1267864659, 3291022629, 3665668052, 2531371548, 5951474, 16443218, 1304, 11996620
			},
			.prefetch0 = 23951,
			.prefetch1 = 41188,
			.ram = cmpal_final_ram_22,
			.ram_len = 10,
		},
		.transactions = cmpal_transactions_22,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "023 CMPA.l D5, A2 b5c5",
		.initial = {
			.regs = {
				2875331888, 2374991923, 3444557172, 364628006, 493329988, 2237491790, 2736423467, 2882466982, 4236451138, 1192228400, 4011027951, 1699331888, 1601863274, 647055992, 2733078679, 5105804, 3826566, 40973, 9325348
			},
			.prefetch0 = 46533,
			.prefetch1 = 59800,
			.ram = cmpal_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2875331888, 2374991923, 3444557172, 364628006, 493329988, 2237491790, 2736423467, 2882466982, 4236451138, 1192228400, 4011027951, 1699331888, 1601863274, 647055992, 2733078679, 5105804, 3826566, 40960, 9325350
			},
			.prefetch0 = 59800,
			.prefetch1 = 11537,
			.ram = cmpal_final_ram_23,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_23,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "024 CMPA.l (A6)+, A5 bbde",
		.initial = {
			.regs = {
				757620991, 1997972134, 893719715, 4215746818, 3015036226, 2705587182, 2717959270, 2453142110, 576514409, 398067925, 1063646105, 1524602846, 526997116, 1313212648, 3828961079, 11428890, 7997564, 1041, 7816206
			},
			.prefetch0 = 48094,
			.prefetch1 = 39110,
			.ram = cmpal_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				757620991, 1997972134, 893719715, 4215746818, 3015036226, 2705587182, 2717959270, 2453142110, 576514409, 398067925, 1063646105, 1524602846, 526997116, 1313212648, 3828961079, 11428890, 7997550, 9233, 4020142938
			},
			.prefetch0 = 47695,
			.prefetch1 = 52,
			.ram = cmpal_final_ram_24,
			.ram_len = 26,
		},
		.transactions = cmpal_transactions_24,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "025 CMPA.l D4, A5 bbc4",
		.initial = {
			.regs = {
				1341317503, 3378107812, 2846941527, 1909302997, 2048002139, 2887253369, 619850377, 4123298433, 3341782488, 3792617700, 1291820741, 1421429953, 3086171848, 794547717, 3463843352, 4099394, 13472450, 8212, 3697386
			},
			.prefetch0 = 48068,
			.prefetch1 = 9054,
			.ram = cmpal_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1341317503, 3378107812, 2846941527, 1909302997, 2048002139, 2887253369, 619850377, 4123298433, 3341782488, 3792617700, 1291820741, 1421429953, 3086171848, 794547717, 3463843352, 4099394, 13472450, 8217, 3697388
			},
			.prefetch0 = 9054,
			.prefetch1 = 37715,
			.ram = cmpal_final_ram_25,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_25,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "026 CMPA.l D7, A3 b7c7",
		.initial = {
			.regs = {
				2641214738, 1895639226, 555671884, 2099700767, 1338424087, 333546321, 4043749597, 467911834, 3258493216, 615452623, 3300139453, 3885124422, 354539322, 4206639646, 2503534011, 16269050, 848106, 512, 11252234
			},
			.prefetch0 = 47047,
			.prefetch1 = 1402,
			.ram = cmpal_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2641214738, 1895639226, 555671884, 2099700767, 1338424087, 333546321, 4043749597, 467911834, 3258493216, 615452623, 3300139453, 3885124422, 354539322, 4206639646, 2503534011, 16269050, 848106, 520, 11252236
			},
			.prefetch0 = 1402,
			.prefetch1 = 54864,
			.ram = cmpal_final_ram_26,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_26,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "027 CMPA.l (A1)+, A6 bdd9",
		.initial = {
			.regs = {
				1735719278, 708648586, 4231657401, 3532399744, 527702189, 302500474, 2091103640, 3255614254, 1158950186, 2510344123, 2506769945, 747035034, 2219521001, 1246628687, 2731938076, 10033158, 375584, 10013, 5190872
			},
			.prefetch0 = 48601,
			.prefetch1 = 59155,
			.ram = cmpal_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1735719278, 708648586, 4231657401, 3532399744, 527702189, 302500474, 2091103640, 3255614254, 1158950186, 2510344123, 2506769945, 747035034, 2219521001, 1246628687, 2731938076, 10033158, 375570, 10013, 3011147406
			},
			.prefetch0 = 48491,
			.prefetch1 = 47102,
			.ram = cmpal_final_ram_27,
			.ram_len = 26,
		},
		.transactions = cmpal_transactions_27,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "028 CMPA.l (d16, A3), A0 b1eb",
		.initial = {
			.regs = {
				3332106003, 2402250505, 859714189, 2965333365, 2096402264, 1547678146, 2996382589, 833172021, 3899517300, 2585140785, 1652377774, 603741610, 569832152, 2434640784, 4242377257, 2526856, 6861032, 33542, 2038304
			},
			.prefetch0 = 45547,
			.prefetch1 = 57052,
			.ram = cmpal_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3332106003, 2402250505, 859714189, 2965333365, 2096402264, 1547678146, 2996382589, 833172021, 3899517300, 2585140785, 1652377774, 603741610, 569832152, 2434640784, 4242377257, 2526856, 6861032, 33544, 2038308
			},
			.prefetch0 = 35483,
			.prefetch1 = 28996,
			.ram = cmpal_final_ram_28,
			.ram_len = 12,
		},
		.transactions = cmpal_transactions_28,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "029 CMPA.l D7, A4 b9c7",
		.initial = {
			.regs = {
				1215760088, 3247227166, 946072548, 2649825307, 3427036544, 1935502183, 464509476, 4015129755, 3578716606, 1217613911, 1258000456, 1145083193, 17139873, 3880806786, 4155189735, 7491582, 14049292, 8977, 193778
			},
			.prefetch0 = 47559,
			.prefetch1 = 59935,
			.ram = cmpal_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1215760088, 3247227166, 946072548, 2649825307, 3427036544, 1935502183, 464509476, 4015129755, 3578716606, 1217613911, 1258000456, 1145083193, 17139873, 3880806786, 4155189735, 7491582, 14049292, 8977, 193780
			},
			.prefetch0 = 59935,
			.prefetch1 = 39452,
			.ram = cmpal_final_ram_29,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_29,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "030 CMPA.l A4, A6 bdcc",
		.initial = {
			.regs = {
				3541985082, 4249511717, 2173594211, 3108803346, 1001581568, 3940618304, 2892268376, 3573272411, 1027421443, 1399299344, 4126205495, 3899440636, 1146476266, 770467779, 1125563637, 10223810, 5607620, 1808, 3529568
			},
			.prefetch0 = 48588,
			.prefetch1 = 45392,
			.ram = cmpal_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3541985082, 4249511717, 2173594211, 3108803346, 1001581568, 3940618304, 2892268376, 3573272411, 1027421443, 1399299344, 4126205495, 3899440636, 1146476266, 770467779, 1125563637, 10223810, 5607620, 1817, 3529570
			},
			.prefetch0 = 45392,
			.prefetch1 = 30783,
			.ram = cmpal_final_ram_30,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_30,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "031 CMPA.l D5, A2 b5c5",
		.initial = {
			.regs = {
				291272868, 2137897474, 1072804793, 1616512776, 836308959, 2022556992, 3081666196, 923002902, 2072354384, 2824095930, 2772470731, 489492989, 566331384, 3878974164, 2935946961, 2760720, 7985142, 34562, 51740
			},
			.prefetch0 = 46533,
			.prefetch1 = 51812,
			.ram = cmpal_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				291272868, 2137897474, 1072804793, 1616512776, 836308959, 2022556992, 3081666196, 923002902, 2072354384, 2824095930, 2772470731, 489492989, 566331384, 3878974164, 2935946961, 2760720, 7985142, 34562, 51742
			},
			.prefetch0 = 51812,
			.prefetch1 = 2659,
			.ram = cmpal_final_ram_31,
			.ram_len = 6,
		},
		.transactions = cmpal_transactions_31,
		.transactions_len = 2,
		.lenght = 6,
	},
};

#endif /* RBT_CMPAL_H */