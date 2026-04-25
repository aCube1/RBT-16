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

const uint32_t CMPAL_TEST_COUNT = 16;
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
};

#endif /* RBT_CMPAL_H */