#ifndef RBT_RORW_H
#define RBT_RORW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rorw_initial_ram_0[] = {
		{ .addr = 0x7dc352, .byte = 0xe8 },
		{ .addr = 0x7dc353, .byte = 0x7e },
		{ .addr = 0x7dc354, .byte = 0x1d },
		{ .addr = 0x7dc355, .byte = 0x45 },
		{ .addr = 0x7dc356, .byte = 0x90 },
		{ .addr = 0x7dc357, .byte = 0xe4 }
};

static const SST_RamByte rorw_final_ram_0[] = {
		{ .addr = 0x7dc352, .byte = 0xe8 },
		{ .addr = 0x7dc353, .byte = 0x7e },
		{ .addr = 0x7dc354, .byte = 0x1d },
		{ .addr = 0x7dc355, .byte = 0x45 },
		{ .addr = 0x7dc356, .byte = 0x90 },
		{ .addr = 0x7dc357, .byte = 0xe4 }
};

static const SST_Transaction rorw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8242006, .data = 37092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte rorw_initial_ram_1[] = {
		{ .addr = 0xc372d6, .byte = 0xea },
		{ .addr = 0xc372d7, .byte = 0x5f },
		{ .addr = 0xc372d8, .byte = 0x89 },
		{ .addr = 0xc372d9, .byte = 0x6e },
		{ .addr = 0xc372da, .byte = 0x56 },
		{ .addr = 0xc372db, .byte = 0x00 }
};

static const SST_RamByte rorw_final_ram_1[] = {
		{ .addr = 0xc372d6, .byte = 0xea },
		{ .addr = 0xc372d7, .byte = 0x5f },
		{ .addr = 0xc372d8, .byte = 0x89 },
		{ .addr = 0xc372d9, .byte = 0x6e },
		{ .addr = 0xc372da, .byte = 0x56 },
		{ .addr = 0xc372db, .byte = 0x00 }
};

static const SST_Transaction rorw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12808922, .data = 22016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rorw_initial_ram_2[] = {
		{ .addr = 0xb9a1e4, .byte = 0xea },
		{ .addr = 0xb9a1e5, .byte = 0x7c },
		{ .addr = 0xb9a1e6, .byte = 0x4c },
		{ .addr = 0xb9a1e7, .byte = 0x47 },
		{ .addr = 0xb9a1e8, .byte = 0x64 },
		{ .addr = 0xb9a1e9, .byte = 0xef }
};

static const SST_RamByte rorw_final_ram_2[] = {
		{ .addr = 0xb9a1e4, .byte = 0xea },
		{ .addr = 0xb9a1e5, .byte = 0x7c },
		{ .addr = 0xb9a1e6, .byte = 0x4c },
		{ .addr = 0xb9a1e7, .byte = 0x47 },
		{ .addr = 0xb9a1e8, .byte = 0x64 },
		{ .addr = 0xb9a1e9, .byte = 0xef }
};

static const SST_Transaction rorw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12165608, .data = 25839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte rorw_initial_ram_3[] = {
		{ .addr = 0xd20774, .byte = 0xec },
		{ .addr = 0xd20775, .byte = 0x5a },
		{ .addr = 0xd20776, .byte = 0x5d },
		{ .addr = 0xd20777, .byte = 0x12 },
		{ .addr = 0xd20778, .byte = 0x0e },
		{ .addr = 0xd20779, .byte = 0xe4 }
};

static const SST_RamByte rorw_final_ram_3[] = {
		{ .addr = 0xd20774, .byte = 0xec },
		{ .addr = 0xd20775, .byte = 0x5a },
		{ .addr = 0xd20776, .byte = 0x5d },
		{ .addr = 0xd20777, .byte = 0x12 },
		{ .addr = 0xd20778, .byte = 0x0e },
		{ .addr = 0xd20779, .byte = 0xe4 }
};

static const SST_Transaction rorw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13764472, .data = 3812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rorw_initial_ram_4[] = {
		{ .addr = 0x49178a, .byte = 0xe6 },
		{ .addr = 0x49178b, .byte = 0xd8 },
		{ .addr = 0x49178c, .byte = 0x20 },
		{ .addr = 0x49178d, .byte = 0x39 },
		{ .addr = 0x22895e, .byte = 0xe0 },
		{ .addr = 0x22895f, .byte = 0x0f },
		{ .addr = 0x49178e, .byte = 0x79 },
		{ .addr = 0x49178f, .byte = 0x45 }
};

static const SST_RamByte rorw_final_ram_4[] = {
		{ .addr = 0x49178a, .byte = 0xe6 },
		{ .addr = 0x49178b, .byte = 0xd8 },
		{ .addr = 0x49178c, .byte = 0x20 },
		{ .addr = 0x49178d, .byte = 0x39 },
		{ .addr = 0x22895e, .byte = 0xf0 },
		{ .addr = 0x22895f, .byte = 0x07 },
		{ .addr = 0x49178e, .byte = 0x79 },
		{ .addr = 0x49178f, .byte = 0x45 }
};

static const SST_Transaction rorw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2263390, .data = 57359, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4790158, .data = 31045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2263390, .data = 61447, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_5[] = {
		{ .addr = 0x60110c, .byte = 0xe6 },
		{ .addr = 0x60110d, .byte = 0xd9 },
		{ .addr = 0x60110e, .byte = 0x0b },
		{ .addr = 0x60110f, .byte = 0x28 },
		{ .addr = 0x00000c, .byte = 0x99 },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0xe26548, .byte = 0xee },
		{ .addr = 0xe26549, .byte = 0x40 },
		{ .addr = 0xe2654a, .byte = 0xa8 },
		{ .addr = 0xe2654b, .byte = 0x14 }
};

static const SST_RamByte rorw_final_ram_5[] = {
		{ .addr = 0x60110c, .byte = 0xe6 },
		{ .addr = 0x60110d, .byte = 0xd9 },
		{ .addr = 0x60110e, .byte = 0x0b },
		{ .addr = 0x60110f, .byte = 0x28 },
		{ .addr = 0xec5d24, .byte = 0x11 },
		{ .addr = 0xec5d25, .byte = 0x0e },
		{ .addr = 0xec5d20, .byte = 0x27 },
		{ .addr = 0xec5d21, .byte = 0x00 },
		{ .addr = 0xec5d22, .byte = 0x00 },
		{ .addr = 0xec5d23, .byte = 0x60 },
		{ .addr = 0xec5d1e, .byte = 0xe6 },
		{ .addr = 0xec5d1f, .byte = 0xd9 },
		{ .addr = 0xec5d1c, .byte = 0x46 },
		{ .addr = 0xec5d1d, .byte = 0x31 },
		{ .addr = 0xec5d18, .byte = 0xe6 },
		{ .addr = 0xec5d19, .byte = 0xd5 },
		{ .addr = 0xec5d1a, .byte = 0xb1 },
		{ .addr = 0xec5d1b, .byte = 0x71 },
		{ .addr = 0x00000c, .byte = 0x99 },
		{ .addr = 0x00000d, .byte = 0xe2 },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0xe26548, .byte = 0xee },
		{ .addr = 0xe26549, .byte = 0x40 },
		{ .addr = 0xe2654a, .byte = 0xa8 },
		{ .addr = 0xe2654b, .byte = 0x14 }
};

static const SST_Transaction rorw_transactions_5[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7423536, .data = 14265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15490340, .data = 4366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15490336, .data = 9984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15490338, .data = 96, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15490334, .data = 59097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15490332, .data = 17969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15490328, .data = 59093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15490330, .data = 45425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14837064, .data = 60992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14837066, .data = 43028, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_6[] = {
		{ .addr = 0x37e846, .byte = 0xee },
		{ .addr = 0x37e847, .byte = 0x5c },
		{ .addr = 0x37e848, .byte = 0x75 },
		{ .addr = 0x37e849, .byte = 0x01 },
		{ .addr = 0x37e84a, .byte = 0x37 },
		{ .addr = 0x37e84b, .byte = 0xa5 }
};

static const SST_RamByte rorw_final_ram_6[] = {
		{ .addr = 0x37e846, .byte = 0xee },
		{ .addr = 0x37e847, .byte = 0x5c },
		{ .addr = 0x37e848, .byte = 0x75 },
		{ .addr = 0x37e849, .byte = 0x01 },
		{ .addr = 0x37e84a, .byte = 0x37 },
		{ .addr = 0x37e84b, .byte = 0xa5 }
};

static const SST_Transaction rorw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3663946, .data = 14245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rorw_initial_ram_7[] = {
		{ .addr = 0x04dcc8, .byte = 0xe6 },
		{ .addr = 0x04dcc9, .byte = 0xd1 },
		{ .addr = 0x04dcca, .byte = 0x8f },
		{ .addr = 0x04dccb, .byte = 0x28 },
		{ .addr = 0x957384, .byte = 0x56 },
		{ .addr = 0x957385, .byte = 0x8a },
		{ .addr = 0x04dccc, .byte = 0x86 },
		{ .addr = 0x04dccd, .byte = 0x93 }
};

static const SST_RamByte rorw_final_ram_7[] = {
		{ .addr = 0x04dcc8, .byte = 0xe6 },
		{ .addr = 0x04dcc9, .byte = 0xd1 },
		{ .addr = 0x04dcca, .byte = 0x8f },
		{ .addr = 0x04dccb, .byte = 0x28 },
		{ .addr = 0x957384, .byte = 0x2b },
		{ .addr = 0x957385, .byte = 0x45 },
		{ .addr = 0x04dccc, .byte = 0x86 },
		{ .addr = 0x04dccd, .byte = 0x93 }
};

static const SST_Transaction rorw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9794436, .data = 22154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 318668, .data = 34451, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9794436, .data = 11077, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_8[] = {
		{ .addr = 0x328afa, .byte = 0xe6 },
		{ .addr = 0x328afb, .byte = 0xda },
		{ .addr = 0x328afc, .byte = 0xa2 },
		{ .addr = 0x328afd, .byte = 0x1e },
		{ .addr = 0xa84ebc, .byte = 0xf0 },
		{ .addr = 0xa84ebd, .byte = 0xd3 },
		{ .addr = 0x328afe, .byte = 0x5c },
		{ .addr = 0x328aff, .byte = 0x00 }
};

static const SST_RamByte rorw_final_ram_8[] = {
		{ .addr = 0x328afa, .byte = 0xe6 },
		{ .addr = 0x328afb, .byte = 0xda },
		{ .addr = 0x328afc, .byte = 0xa2 },
		{ .addr = 0x328afd, .byte = 0x1e },
		{ .addr = 0xa84ebc, .byte = 0xf8 },
		{ .addr = 0xa84ebd, .byte = 0x69 },
		{ .addr = 0x328afe, .byte = 0x5c },
		{ .addr = 0x328aff, .byte = 0x00 }
};

static const SST_Transaction rorw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11030204, .data = 61651, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3312382, .data = 23552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11030204, .data = 63593, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_9[] = {
		{ .addr = 0xbbdb5e, .byte = 0xe4 },
		{ .addr = 0xbbdb5f, .byte = 0x79 },
		{ .addr = 0xbbdb60, .byte = 0x6a },
		{ .addr = 0xbbdb61, .byte = 0xeb },
		{ .addr = 0xbbdb62, .byte = 0x14 },
		{ .addr = 0xbbdb63, .byte = 0xa4 }
};

static const SST_RamByte rorw_final_ram_9[] = {
		{ .addr = 0xbbdb5e, .byte = 0xe4 },
		{ .addr = 0xbbdb5f, .byte = 0x79 },
		{ .addr = 0xbbdb60, .byte = 0x6a },
		{ .addr = 0xbbdb61, .byte = 0xeb },
		{ .addr = 0xbbdb62, .byte = 0x14 },
		{ .addr = 0xbbdb63, .byte = 0xa4 }
};

static const SST_Transaction rorw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12311394, .data = 5284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte rorw_initial_ram_10[] = {
		{ .addr = 0xdfc186, .byte = 0xe6 },
		{ .addr = 0xdfc187, .byte = 0xf8 },
		{ .addr = 0xdfc188, .byte = 0xde },
		{ .addr = 0xdfc189, .byte = 0x49 },
		{ .addr = 0xdfc18a, .byte = 0x0d },
		{ .addr = 0xdfc18b, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0xa1 },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0xfe },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0xb0fe86, .byte = 0xc6 },
		{ .addr = 0xb0fe87, .byte = 0x29 },
		{ .addr = 0xb0fe88, .byte = 0xac },
		{ .addr = 0xb0fe89, .byte = 0x69 }
};

static const SST_RamByte rorw_final_ram_10[] = {
		{ .addr = 0xdfc186, .byte = 0xe6 },
		{ .addr = 0xdfc187, .byte = 0xf8 },
		{ .addr = 0xdfc188, .byte = 0xde },
		{ .addr = 0xdfc189, .byte = 0x49 },
		{ .addr = 0xdfc18a, .byte = 0x0d },
		{ .addr = 0xdfc18b, .byte = 0x97 },
		{ .addr = 0x91fe22, .byte = 0xc1 },
		{ .addr = 0x91fe23, .byte = 0x8a },
		{ .addr = 0x91fe1e, .byte = 0xa7 },
		{ .addr = 0x91fe1f, .byte = 0x04 },
		{ .addr = 0x91fe20, .byte = 0x00 },
		{ .addr = 0x91fe21, .byte = 0xdf },
		{ .addr = 0x91fe1c, .byte = 0xe6 },
		{ .addr = 0x91fe1d, .byte = 0xf8 },
		{ .addr = 0x91fe1a, .byte = 0xde },
		{ .addr = 0x91fe1b, .byte = 0x49 },
		{ .addr = 0x91fe16, .byte = 0xe6 },
		{ .addr = 0x91fe17, .byte = 0xf5 },
		{ .addr = 0x91fe18, .byte = 0xff },
		{ .addr = 0x91fe19, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0xa1 },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0xfe },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0xb0fe86, .byte = 0xc6 },
		{ .addr = 0xb0fe87, .byte = 0x29 },
		{ .addr = 0xb0fe88, .byte = 0xac },
		{ .addr = 0xb0fe89, .byte = 0x69 }
};

static const SST_Transaction rorw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14664074, .data = 3479, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16768584, .data = 32821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9567778, .data = 49546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9567774, .data = 42756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9567776, .data = 223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9567772, .data = 59128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9567770, .data = 56905, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9567766, .data = 59125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9567768, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 65158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11599494, .data = 50729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11599496, .data = 44137, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_11[] = {
		{ .addr = 0x410ccc, .byte = 0xe6 },
		{ .addr = 0x410ccd, .byte = 0xd4 },
		{ .addr = 0x410cce, .byte = 0xf5 },
		{ .addr = 0x410ccf, .byte = 0xa6 },
		{ .addr = 0xcad80a, .byte = 0x2d },
		{ .addr = 0xcad80b, .byte = 0x54 },
		{ .addr = 0x410cd0, .byte = 0xd6 },
		{ .addr = 0x410cd1, .byte = 0x9d }
};

static const SST_RamByte rorw_final_ram_11[] = {
		{ .addr = 0x410ccc, .byte = 0xe6 },
		{ .addr = 0x410ccd, .byte = 0xd4 },
		{ .addr = 0x410cce, .byte = 0xf5 },
		{ .addr = 0x410ccf, .byte = 0xa6 },
		{ .addr = 0xcad80a, .byte = 0x16 },
		{ .addr = 0xcad80b, .byte = 0xaa },
		{ .addr = 0x410cd0, .byte = 0xd6 },
		{ .addr = 0x410cd1, .byte = 0x9d }
};

static const SST_Transaction rorw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13293578, .data = 11604, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4263120, .data = 54941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13293578, .data = 5802, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_12[] = {
		{ .addr = 0xf82102, .byte = 0xe6 },
		{ .addr = 0xf82103, .byte = 0xdc },
		{ .addr = 0xf82104, .byte = 0x32 },
		{ .addr = 0xf82105, .byte = 0x8b },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x3c },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0xea3c56, .byte = 0x1c },
		{ .addr = 0xea3c57, .byte = 0xd5 },
		{ .addr = 0xea3c58, .byte = 0xa5 },
		{ .addr = 0xea3c59, .byte = 0xb1 }
};

static const SST_RamByte rorw_final_ram_12[] = {
		{ .addr = 0xf82102, .byte = 0xe6 },
		{ .addr = 0xf82103, .byte = 0xdc },
		{ .addr = 0xf82104, .byte = 0x32 },
		{ .addr = 0xf82105, .byte = 0x8b },
		{ .addr = 0x3a6db2, .byte = 0x21 },
		{ .addr = 0x3a6db3, .byte = 0x04 },
		{ .addr = 0x3a6dae, .byte = 0x04 },
		{ .addr = 0x3a6daf, .byte = 0x0f },
		{ .addr = 0x3a6db0, .byte = 0x00 },
		{ .addr = 0x3a6db1, .byte = 0xf8 },
		{ .addr = 0x3a6dac, .byte = 0xe6 },
		{ .addr = 0x3a6dad, .byte = 0xdc },
		{ .addr = 0x3a6daa, .byte = 0x60 },
		{ .addr = 0x3a6dab, .byte = 0x35 },
		{ .addr = 0x3a6da6, .byte = 0xe6 },
		{ .addr = 0x3a6da7, .byte = 0xd1 },
		{ .addr = 0x3a6da8, .byte = 0xf5 },
		{ .addr = 0x3a6da9, .byte = 0xa0 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x3c },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0xea3c56, .byte = 0x1c },
		{ .addr = 0xea3c57, .byte = 0xd5 },
		{ .addr = 0xea3c58, .byte = 0xa5 },
		{ .addr = 0xea3c59, .byte = 0xb1 }
};

static const SST_Transaction rorw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10510388, .data = 31751, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3829170, .data = 8452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3829166, .data = 1039, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3829168, .data = 248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3829164, .data = 59100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3829162, .data = 24629, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3829158, .data = 59089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3829160, .data = 62880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15350870, .data = 7381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15350872, .data = 42417, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_13[] = {
		{ .addr = 0x6b82cc, .byte = 0xe4 },
		{ .addr = 0x6b82cd, .byte = 0x7c },
		{ .addr = 0x6b82ce, .byte = 0xcc },
		{ .addr = 0x6b82cf, .byte = 0xc9 },
		{ .addr = 0x6b82d0, .byte = 0x0d },
		{ .addr = 0x6b82d1, .byte = 0xb0 }
};

static const SST_RamByte rorw_final_ram_13[] = {
		{ .addr = 0x6b82cc, .byte = 0xe4 },
		{ .addr = 0x6b82cd, .byte = 0x7c },
		{ .addr = 0x6b82ce, .byte = 0xcc },
		{ .addr = 0x6b82cf, .byte = 0xc9 },
		{ .addr = 0x6b82d0, .byte = 0x0d },
		{ .addr = 0x6b82d1, .byte = 0xb0 }
};

static const SST_Transaction rorw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7045840, .data = 3504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 120 },
};

static const SST_RamByte rorw_initial_ram_14[] = {
		{ .addr = 0xda3d30, .byte = 0xe0 },
		{ .addr = 0xda3d31, .byte = 0x79 },
		{ .addr = 0xda3d32, .byte = 0xef },
		{ .addr = 0xda3d33, .byte = 0xc1 },
		{ .addr = 0xda3d34, .byte = 0x36 },
		{ .addr = 0xda3d35, .byte = 0xe5 }
};

static const SST_RamByte rorw_final_ram_14[] = {
		{ .addr = 0xda3d30, .byte = 0xe0 },
		{ .addr = 0xda3d31, .byte = 0x79 },
		{ .addr = 0xda3d32, .byte = 0xef },
		{ .addr = 0xda3d33, .byte = 0xc1 },
		{ .addr = 0xda3d34, .byte = 0x36 },
		{ .addr = 0xda3d35, .byte = 0xe5 }
};

static const SST_Transaction rorw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14302516, .data = 14053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 82 },
};

static const SST_RamByte rorw_initial_ram_15[] = {
		{ .addr = 0x129d62, .byte = 0xe6 },
		{ .addr = 0x129d63, .byte = 0xe0 },
		{ .addr = 0x129d64, .byte = 0xb8 },
		{ .addr = 0x129d65, .byte = 0x1d },
		{ .addr = 0x8c0ba8, .byte = 0xc7 },
		{ .addr = 0x8c0ba9, .byte = 0x61 },
		{ .addr = 0x129d66, .byte = 0x87 },
		{ .addr = 0x129d67, .byte = 0x6a }
};

static const SST_RamByte rorw_final_ram_15[] = {
		{ .addr = 0x129d62, .byte = 0xe6 },
		{ .addr = 0x129d63, .byte = 0xe0 },
		{ .addr = 0x129d64, .byte = 0xb8 },
		{ .addr = 0x129d65, .byte = 0x1d },
		{ .addr = 0x8c0ba8, .byte = 0xe3 },
		{ .addr = 0x8c0ba9, .byte = 0xb0 },
		{ .addr = 0x129d66, .byte = 0x87 },
		{ .addr = 0x129d67, .byte = 0x6a }
};

static const SST_Transaction rorw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9178024, .data = 51041, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1219942, .data = 34666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9178024, .data = 58288, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_16[] = {
		{ .addr = 0xc0ca9e, .byte = 0xec },
		{ .addr = 0xc0ca9f, .byte = 0x5f },
		{ .addr = 0xc0caa0, .byte = 0xc6 },
		{ .addr = 0xc0caa1, .byte = 0x4d },
		{ .addr = 0xc0caa2, .byte = 0x98 },
		{ .addr = 0xc0caa3, .byte = 0x11 }
};

static const SST_RamByte rorw_final_ram_16[] = {
		{ .addr = 0xc0ca9e, .byte = 0xec },
		{ .addr = 0xc0ca9f, .byte = 0x5f },
		{ .addr = 0xc0caa0, .byte = 0xc6 },
		{ .addr = 0xc0caa1, .byte = 0x4d },
		{ .addr = 0xc0caa2, .byte = 0x98 },
		{ .addr = 0xc0caa3, .byte = 0x11 }
};

static const SST_Transaction rorw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12634786, .data = 38929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rorw_initial_ram_17[] = {
		{ .addr = 0x056c42, .byte = 0xee },
		{ .addr = 0x056c43, .byte = 0x79 },
		{ .addr = 0x056c44, .byte = 0x4d },
		{ .addr = 0x056c45, .byte = 0xcf },
		{ .addr = 0x056c46, .byte = 0x8f },
		{ .addr = 0x056c47, .byte = 0x72 }
};

static const SST_RamByte rorw_final_ram_17[] = {
		{ .addr = 0x056c42, .byte = 0xee },
		{ .addr = 0x056c43, .byte = 0x79 },
		{ .addr = 0x056c44, .byte = 0x4d },
		{ .addr = 0x056c45, .byte = 0xcf },
		{ .addr = 0x056c46, .byte = 0x8f },
		{ .addr = 0x056c47, .byte = 0x72 }
};

static const SST_Transaction rorw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 355398, .data = 36722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 70 },
};

static const SST_RamByte rorw_initial_ram_18[] = {
		{ .addr = 0xf06232, .byte = 0xe6 },
		{ .addr = 0xf06233, .byte = 0xd4 },
		{ .addr = 0xf06234, .byte = 0x3f },
		{ .addr = 0xf06235, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0x10 },
		{ .addr = 0x00000d, .byte = 0xb6 },
		{ .addr = 0x00000e, .byte = 0xc4 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0xb6c45c, .byte = 0x27 },
		{ .addr = 0xb6c45d, .byte = 0x91 },
		{ .addr = 0xb6c45e, .byte = 0x59 },
		{ .addr = 0xb6c45f, .byte = 0xcf }
};

static const SST_RamByte rorw_final_ram_18[] = {
		{ .addr = 0xf06232, .byte = 0xe6 },
		{ .addr = 0xf06233, .byte = 0xd4 },
		{ .addr = 0xf06234, .byte = 0x3f },
		{ .addr = 0xf06235, .byte = 0xd6 },
		{ .addr = 0xdf9458, .byte = 0x62 },
		{ .addr = 0xdf9459, .byte = 0x34 },
		{ .addr = 0xdf9454, .byte = 0x01 },
		{ .addr = 0xdf9455, .byte = 0x0a },
		{ .addr = 0xdf9456, .byte = 0x00 },
		{ .addr = 0xdf9457, .byte = 0xf0 },
		{ .addr = 0xdf9452, .byte = 0xe6 },
		{ .addr = 0xdf9453, .byte = 0xd4 },
		{ .addr = 0xdf9450, .byte = 0xab },
		{ .addr = 0xdf9451, .byte = 0x7d },
		{ .addr = 0xdf944c, .byte = 0xe6 },
		{ .addr = 0xdf944d, .byte = 0xd1 },
		{ .addr = 0xdf944e, .byte = 0x86 },
		{ .addr = 0xdf944f, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0x10 },
		{ .addr = 0x00000d, .byte = 0xb6 },
		{ .addr = 0x00000e, .byte = 0xc4 },
		{ .addr = 0x00000f, .byte = 0x5c },
		{ .addr = 0xb6c45c, .byte = 0x27 },
		{ .addr = 0xb6c45d, .byte = 0x91 },
		{ .addr = 0xb6c45e, .byte = 0x59 },
		{ .addr = 0xb6c45f, .byte = 0xcf }
};

static const SST_Transaction rorw_transactions_18[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2075516, .data = 12701, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652504, .data = 25140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652500, .data = 266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652502, .data = 240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652498, .data = 59092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652496, .data = 43901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652492, .data = 59089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14652494, .data = 34335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11977820, .data = 10129, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11977822, .data = 22991, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_19[] = {
		{ .addr = 0x0845cc, .byte = 0xe6 },
		{ .addr = 0x0845cd, .byte = 0xd4 },
		{ .addr = 0x0845ce, .byte = 0x39 },
		{ .addr = 0x0845cf, .byte = 0x27 },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0x03 },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0xfe0318, .byte = 0x65 },
		{ .addr = 0xfe0319, .byte = 0x0c },
		{ .addr = 0xfe031a, .byte = 0x2c },
		{ .addr = 0xfe031b, .byte = 0xd4 }
};

static const SST_RamByte rorw_final_ram_19[] = {
		{ .addr = 0x0845cc, .byte = 0xe6 },
		{ .addr = 0x0845cd, .byte = 0xd4 },
		{ .addr = 0x0845ce, .byte = 0x39 },
		{ .addr = 0x0845cf, .byte = 0x27 },
		{ .addr = 0x5d2028, .byte = 0x45 },
		{ .addr = 0x5d2029, .byte = 0xce },
		{ .addr = 0x5d2024, .byte = 0x05 },
		{ .addr = 0x5d2025, .byte = 0x01 },
		{ .addr = 0x5d2026, .byte = 0x00 },
		{ .addr = 0x5d2027, .byte = 0x08 },
		{ .addr = 0x5d2022, .byte = 0xe6 },
		{ .addr = 0x5d2023, .byte = 0xd4 },
		{ .addr = 0x5d2020, .byte = 0x2d },
		{ .addr = 0x5d2021, .byte = 0x7b },
		{ .addr = 0x5d201c, .byte = 0xe6 },
		{ .addr = 0x5d201d, .byte = 0xd1 },
		{ .addr = 0x5d201e, .byte = 0x86 },
		{ .addr = 0x5d201f, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0xa5 },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0x03 },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0xfe0318, .byte = 0x65 },
		{ .addr = 0xfe0319, .byte = 0x0c },
		{ .addr = 0xfe031a, .byte = 0x2c },
		{ .addr = 0xfe031b, .byte = 0xd4 }
};

static const SST_Transaction rorw_transactions_19[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15740282, .data = 29944, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6103080, .data = 17870, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6103076, .data = 1281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6103078, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6103074, .data = 59092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6103072, .data = 11643, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6103068, .data = 59089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6103070, .data = 34544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16646936, .data = 25868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16646938, .data = 11476, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_20[] = {
		{ .addr = 0x302108, .byte = 0xe8 },
		{ .addr = 0x302109, .byte = 0x7a },
		{ .addr = 0x30210a, .byte = 0xd6 },
		{ .addr = 0x30210b, .byte = 0xb5 },
		{ .addr = 0x30210c, .byte = 0x8e },
		{ .addr = 0x30210d, .byte = 0x9f }
};

static const SST_RamByte rorw_final_ram_20[] = {
		{ .addr = 0x302108, .byte = 0xe8 },
		{ .addr = 0x302109, .byte = 0x7a },
		{ .addr = 0x30210a, .byte = 0xd6 },
		{ .addr = 0x30210b, .byte = 0xb5 },
		{ .addr = 0x30210c, .byte = 0x8e },
		{ .addr = 0x30210d, .byte = 0x9f }
};

static const SST_Transaction rorw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3154188, .data = 36511, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte rorw_initial_ram_21[] = {
		{ .addr = 0xc1cbaa, .byte = 0xe6 },
		{ .addr = 0xc1cbab, .byte = 0x59 },
		{ .addr = 0xc1cbac, .byte = 0x84 },
		{ .addr = 0xc1cbad, .byte = 0x82 },
		{ .addr = 0xc1cbae, .byte = 0x63 },
		{ .addr = 0xc1cbaf, .byte = 0x20 }
};

static const SST_RamByte rorw_final_ram_21[] = {
		{ .addr = 0xc1cbaa, .byte = 0xe6 },
		{ .addr = 0xc1cbab, .byte = 0x59 },
		{ .addr = 0xc1cbac, .byte = 0x84 },
		{ .addr = 0xc1cbad, .byte = 0x82 },
		{ .addr = 0xc1cbae, .byte = 0x63 },
		{ .addr = 0xc1cbaf, .byte = 0x20 }
};

static const SST_Transaction rorw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12700590, .data = 25376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rorw_initial_ram_22[] = {
		{ .addr = 0xbd5a10, .byte = 0xec },
		{ .addr = 0xbd5a11, .byte = 0x5c },
		{ .addr = 0xbd5a12, .byte = 0x28 },
		{ .addr = 0xbd5a13, .byte = 0xfe },
		{ .addr = 0xbd5a14, .byte = 0x9c },
		{ .addr = 0xbd5a15, .byte = 0x2f }
};

static const SST_RamByte rorw_final_ram_22[] = {
		{ .addr = 0xbd5a10, .byte = 0xec },
		{ .addr = 0xbd5a11, .byte = 0x5c },
		{ .addr = 0xbd5a12, .byte = 0x28 },
		{ .addr = 0xbd5a13, .byte = 0xfe },
		{ .addr = 0xbd5a14, .byte = 0x9c },
		{ .addr = 0xbd5a15, .byte = 0x2f }
};

static const SST_Transaction rorw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12409364, .data = 39983, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rorw_initial_ram_23[] = {
		{ .addr = 0x06da3e, .byte = 0xee },
		{ .addr = 0x06da3f, .byte = 0x5c },
		{ .addr = 0x06da40, .byte = 0x65 },
		{ .addr = 0x06da41, .byte = 0x78 },
		{ .addr = 0x06da42, .byte = 0xb8 },
		{ .addr = 0x06da43, .byte = 0x0c }
};

static const SST_RamByte rorw_final_ram_23[] = {
		{ .addr = 0x06da3e, .byte = 0xee },
		{ .addr = 0x06da3f, .byte = 0x5c },
		{ .addr = 0x06da40, .byte = 0x65 },
		{ .addr = 0x06da41, .byte = 0x78 },
		{ .addr = 0x06da42, .byte = 0xb8 },
		{ .addr = 0x06da43, .byte = 0x0c }
};

static const SST_Transaction rorw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 449090, .data = 47116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rorw_initial_ram_24[] = {
		{ .addr = 0x9acdfe, .byte = 0xea },
		{ .addr = 0x9acdff, .byte = 0x5d },
		{ .addr = 0x9ace00, .byte = 0x6a },
		{ .addr = 0x9ace01, .byte = 0xc9 },
		{ .addr = 0x9ace02, .byte = 0x15 },
		{ .addr = 0x9ace03, .byte = 0x81 }
};

static const SST_RamByte rorw_final_ram_24[] = {
		{ .addr = 0x9acdfe, .byte = 0xea },
		{ .addr = 0x9acdff, .byte = 0x5d },
		{ .addr = 0x9ace00, .byte = 0x6a },
		{ .addr = 0x9ace01, .byte = 0xc9 },
		{ .addr = 0x9ace02, .byte = 0x15 },
		{ .addr = 0x9ace03, .byte = 0x81 }
};

static const SST_Transaction rorw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10145282, .data = 5505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rorw_initial_ram_25[] = {
		{ .addr = 0xc9c64c, .byte = 0xe6 },
		{ .addr = 0xc9c64d, .byte = 0xdc },
		{ .addr = 0xc9c64e, .byte = 0x72 },
		{ .addr = 0xc9c64f, .byte = 0x37 },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x4a },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0xb24a26, .byte = 0x6d },
		{ .addr = 0xb24a27, .byte = 0xf6 },
		{ .addr = 0xb24a28, .byte = 0x7f },
		{ .addr = 0xb24a29, .byte = 0x2c }
};

static const SST_RamByte rorw_final_ram_25[] = {
		{ .addr = 0xc9c64c, .byte = 0xe6 },
		{ .addr = 0xc9c64d, .byte = 0xdc },
		{ .addr = 0xc9c64e, .byte = 0x72 },
		{ .addr = 0xc9c64f, .byte = 0x37 },
		{ .addr = 0xb655c6, .byte = 0xc6 },
		{ .addr = 0xb655c7, .byte = 0x4e },
		{ .addr = 0xb655c2, .byte = 0x23 },
		{ .addr = 0xb655c3, .byte = 0x07 },
		{ .addr = 0xb655c4, .byte = 0x00 },
		{ .addr = 0xb655c5, .byte = 0xc9 },
		{ .addr = 0xb655c0, .byte = 0xe6 },
		{ .addr = 0xb655c1, .byte = 0xdc },
		{ .addr = 0xb655be, .byte = 0xb5 },
		{ .addr = 0xb655bf, .byte = 0xf7 },
		{ .addr = 0xb655ba, .byte = 0xe6 },
		{ .addr = 0xb655bb, .byte = 0xd5 },
		{ .addr = 0xb655bc, .byte = 0xe1 },
		{ .addr = 0xb655bd, .byte = 0x47 },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x4a },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0xb24a26, .byte = 0x6d },
		{ .addr = 0xb24a27, .byte = 0xf6 },
		{ .addr = 0xb24a28, .byte = 0x7f },
		{ .addr = 0xb24a29, .byte = 0x2c }
};

static const SST_Transaction rorw_transactions_25[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4699638, .data = 39689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949510, .data = 50766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949506, .data = 8967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949508, .data = 201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949504, .data = 59100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949502, .data = 46583, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949498, .data = 59093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949500, .data = 57671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11684390, .data = 28150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11684392, .data = 32556, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_26[] = {
		{ .addr = 0xbf981c, .byte = 0xe6 },
		{ .addr = 0xbf981d, .byte = 0xd7 },
		{ .addr = 0xbf981e, .byte = 0x98 },
		{ .addr = 0xbf981f, .byte = 0x83 },
		{ .addr = 0x3481a2, .byte = 0x6a },
		{ .addr = 0x3481a3, .byte = 0xff },
		{ .addr = 0xbf9820, .byte = 0x60 },
		{ .addr = 0xbf9821, .byte = 0xf1 }
};

static const SST_RamByte rorw_final_ram_26[] = {
		{ .addr = 0xbf981c, .byte = 0xe6 },
		{ .addr = 0xbf981d, .byte = 0xd7 },
		{ .addr = 0xbf981e, .byte = 0x98 },
		{ .addr = 0xbf981f, .byte = 0x83 },
		{ .addr = 0x3481a2, .byte = 0xb5 },
		{ .addr = 0x3481a3, .byte = 0x7f },
		{ .addr = 0xbf9820, .byte = 0x60 },
		{ .addr = 0xbf9821, .byte = 0xf1 }
};

static const SST_Transaction rorw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3441058, .data = 27391, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12556320, .data = 24817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3441058, .data = 46463, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rorw_initial_ram_27[] = {
		{ .addr = 0x9c6a70, .byte = 0xe2 },
		{ .addr = 0x9c6a71, .byte = 0x7e },
		{ .addr = 0x9c6a72, .byte = 0x6e },
		{ .addr = 0x9c6a73, .byte = 0x39 },
		{ .addr = 0x9c6a74, .byte = 0x09 },
		{ .addr = 0x9c6a75, .byte = 0x11 }
};

static const SST_RamByte rorw_final_ram_27[] = {
		{ .addr = 0x9c6a70, .byte = 0xe2 },
		{ .addr = 0x9c6a71, .byte = 0x7e },
		{ .addr = 0x9c6a72, .byte = 0x6e },
		{ .addr = 0x9c6a73, .byte = 0x39 },
		{ .addr = 0x9c6a74, .byte = 0x09 },
		{ .addr = 0x9c6a75, .byte = 0x11 }
};

static const SST_Transaction rorw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10250868, .data = 2321, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 42 },
};

static const SST_RamByte rorw_initial_ram_28[] = {
		{ .addr = 0xbd8138, .byte = 0xea },
		{ .addr = 0xbd8139, .byte = 0x5b },
		{ .addr = 0xbd813a, .byte = 0x77 },
		{ .addr = 0xbd813b, .byte = 0xe4 },
		{ .addr = 0xbd813c, .byte = 0xa2 },
		{ .addr = 0xbd813d, .byte = 0x7d }
};

static const SST_RamByte rorw_final_ram_28[] = {
		{ .addr = 0xbd8138, .byte = 0xea },
		{ .addr = 0xbd8139, .byte = 0x5b },
		{ .addr = 0xbd813a, .byte = 0x77 },
		{ .addr = 0xbd813b, .byte = 0xe4 },
		{ .addr = 0xbd813c, .byte = 0xa2 },
		{ .addr = 0xbd813d, .byte = 0x7d }
};

static const SST_Transaction rorw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12419388, .data = 41597, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rorw_initial_ram_29[] = {
		{ .addr = 0xcdf2c2, .byte = 0xe8 },
		{ .addr = 0xcdf2c3, .byte = 0x7d },
		{ .addr = 0xcdf2c4, .byte = 0xc9 },
		{ .addr = 0xcdf2c5, .byte = 0x93 },
		{ .addr = 0xcdf2c6, .byte = 0x83 },
		{ .addr = 0xcdf2c7, .byte = 0x87 }
};

static const SST_RamByte rorw_final_ram_29[] = {
		{ .addr = 0xcdf2c2, .byte = 0xe8 },
		{ .addr = 0xcdf2c3, .byte = 0x7d },
		{ .addr = 0xcdf2c4, .byte = 0xc9 },
		{ .addr = 0xcdf2c5, .byte = 0x93 },
		{ .addr = 0xcdf2c6, .byte = 0x83 },
		{ .addr = 0xcdf2c7, .byte = 0x87 }
};

static const SST_Transaction rorw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13497030, .data = 33671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rorw_initial_ram_30[] = {
		{ .addr = 0xf9440a, .byte = 0xee },
		{ .addr = 0xf9440b, .byte = 0x5c },
		{ .addr = 0xf9440c, .byte = 0xda },
		{ .addr = 0xf9440d, .byte = 0xde },
		{ .addr = 0xf9440e, .byte = 0x1a },
		{ .addr = 0xf9440f, .byte = 0x55 }
};

static const SST_RamByte rorw_final_ram_30[] = {
		{ .addr = 0xf9440a, .byte = 0xee },
		{ .addr = 0xf9440b, .byte = 0x5c },
		{ .addr = 0xf9440c, .byte = 0xda },
		{ .addr = 0xf9440d, .byte = 0xde },
		{ .addr = 0xf9440e, .byte = 0x1a },
		{ .addr = 0xf9440f, .byte = 0x55 }
};

static const SST_Transaction rorw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16335886, .data = 6741, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rorw_initial_ram_31[] = {
		{ .addr = 0x4ac892, .byte = 0xe6 },
		{ .addr = 0x4ac893, .byte = 0x79 },
		{ .addr = 0x4ac894, .byte = 0xca },
		{ .addr = 0x4ac895, .byte = 0xdb },
		{ .addr = 0x4ac896, .byte = 0x21 },
		{ .addr = 0x4ac897, .byte = 0xc2 }
};

static const SST_RamByte rorw_final_ram_31[] = {
		{ .addr = 0x4ac892, .byte = 0xe6 },
		{ .addr = 0x4ac893, .byte = 0x79 },
		{ .addr = 0x4ac894, .byte = 0xca },
		{ .addr = 0x4ac895, .byte = 0xdb },
		{ .addr = 0x4ac896, .byte = 0x21 },
		{ .addr = 0x4ac897, .byte = 0xc2 }
};

static const SST_Transaction rorw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4901014, .data = 8642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

static const SST_TestCase rorw[] = {
	{
		.name = "000 ROR.w D4, D6 e87e",
		.initial = {
			.regs = {
				690734105, 3676892, 941802545, 3235355852, 1423857177, 4279984995, 1253406463, 2433452530, 3980864387, 2078453306, 3800170397, 260413823, 1210905091, 2630032364, 1471294024, 5724128, 13347118, 40990, 8242006
			},
			.prefetch0 = 59518,
			.prefetch1 = 7493,
			.ram = rorw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				690734105, 3676892, 941802545, 3235355852, 1423857177, 4279984995, 1253408699, 2433452530, 3980864387, 2078453306, 3800170397, 260413823, 1210905091, 2630032364, 1471294024, 5724128, 13347118, 40976, 8242008
			},
			.prefetch0 = 7493,
			.prefetch1 = 37092,
			.ram = rorw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_0,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "001 ROR.w 5, D7 ea5f",
		.initial = {
			.regs = {
				4264078083, 1968210655, 2938360070, 2690797858, 19283932, 3917402659, 2619466845, 1304490938, 4214750110, 586608943, 2322335649, 3001515485, 2030930177, 3156453548, 1712887947, 4589602, 7176076, 534, 12808922
			},
			.prefetch0 = 59999,
			.prefetch1 = 35182,
			.ram = rorw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4264078083, 1968210655, 2938360070, 2690797858, 19283932, 3917402659, 2619466845, 1304483741, 4214750110, 586608943, 2322335649, 3001515485, 2030930177, 3156453548, 1712887947, 4589602, 7176076, 537, 12808924
			},
			.prefetch0 = 35182,
			.prefetch1 = 22016,
			.ram = rorw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_1,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "002 ROR.w D5, D4 ea7c",
		.initial = {
			.regs = {
				3851531242, 3729488624, 409338440, 744186749, 2674934207, 2399906645, 166911274, 3969557452, 4054222630, 2545409755, 1043832035, 2158669879, 2594950438, 3405826052, 1356646473, 7505816, 12330072, 8726, 12165608
			},
			.prefetch0 = 60028,
			.prefetch1 = 19527,
			.ram = rorw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3851531242, 3729488624, 409338440, 744186749, 2674981389, 2399906645, 166911274, 3969557452, 4054222630, 2545409755, 1043832035, 2158669879, 2594950438, 3405826052, 1356646473, 7505816, 12330072, 8729, 12165610
			},
			.prefetch0 = 19527,
			.prefetch1 = 25839,
			.ram = rorw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_2,
		.transactions_len = 2,
		.lenght = 48,
	},
	{
		.name = "003 ROR.w 6, D2 ec5a",
		.initial = {
			.regs = {
				139246005, 3574509598, 3830939640, 3585320262, 3616664193, 2263106395, 3372290819, 4174840132, 3280410576, 2344040052, 4093311404, 3410380128, 2403078337, 4238991071, 2809030134, 5920312, 3721002, 42761, 13764472
			},
			.prefetch0 = 60506,
			.prefetch1 = 23826,
			.ram = rorw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				139246005, 3574509598, 3830964735, 3585320262, 3616664193, 2263106395, 3372290819, 4174840132, 3280410576, 2344040052, 4093311404, 3410380128, 2403078337, 4238991071, 2809030134, 5920312, 3721002, 42761, 13764474
			},
			.prefetch0 = 23826,
			.prefetch1 = 3812,
			.ram = rorw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_3,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "004 ROR.w (A0)+ e6d8",
		.initial = {
			.regs = {
				3201133238, 3112072374, 3705388632, 4162190831, 741067976, 2692941042, 3052981822, 1711816690, 841124190, 4265907126, 1704502046, 2786721133, 4005859519, 3881297110, 1638880386, 12627474, 10451790, 9479, 4790158
			},
			.prefetch0 = 59096,
			.prefetch1 = 8249,
			.ram = rorw_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3201133238, 3112072374, 3705388632, 4162190831, 741067976, 2692941042, 3052981822, 1711816690, 841124192, 4265907126, 1704502046, 2786721133, 4005859519, 3881297110, 1638880386, 12627474, 10451790, 9481, 4790160
			},
			.prefetch0 = 8249,
			.prefetch1 = 31045,
			.ram = rorw_final_ram_4,
			.ram_len = 8,
		},
		.transactions = rorw_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 ROR.w (A1)+ e6d9",
		.initial = {
			.regs = {
				213425091, 1002805670, 3187562826, 3677363570, 397175779, 784260950, 2377437751, 1284980957, 1766327999, 2976990769, 1035368960, 4125157657, 88938994, 2371249471, 1697479938, 1727626, 15490342, 9984, 6295824
			},
			.prefetch0 = 59097,
			.prefetch1 = 2856,
			.ram = rorw_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				213425091, 1002805670, 3187562826, 3677363570, 397175779, 784260950, 2377437751, 1284980957, 1766327999, 2976990771, 1035368960, 4125157657, 88938994, 2371249471, 1697479938, 1727626, 15490328, 9984, 2581751116
			},
			.prefetch0 = 60992,
			.prefetch1 = 43028,
			.ram = rorw_final_ram_5,
			.ram_len = 26,
		},
		.transactions = rorw_transactions_5,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "006 ROR.w 7, D4 ee5c",
		.initial = {
			.regs = {
				1840658427, 3262958915, 1214533437, 1092849003, 2106635477, 4149546883, 3668004868, 2070876221, 63151037, 3251755465, 1076156532, 2893395333, 1783294813, 3249306538, 3876184221, 13362866, 2385074, 8964, 3663946
			},
			.prefetch0 = 61020,
			.prefetch1 = 29953,
			.ram = rorw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1840658427, 3262958915, 1214533437, 1092849003, 2106633065, 4149546883, 3668004868, 2070876221, 63151037, 3251755465, 1076156532, 2893395333, 1783294813, 3249306538, 3876184221, 13362866, 2385074, 8969, 3663948
			},
			.prefetch0 = 29953,
			.prefetch1 = 14245,
			.ram = rorw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_6,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "007 ROR.w (A1) e6d1",
		.initial = {
			.regs = {
				4123778073, 1666743892, 3914704982, 2065437181, 2432141946, 3420887676, 653507652, 3120147970, 2801593582, 2593485700, 836574453, 3603936936, 1703130205, 3019912557, 1491280778, 13125688, 745190, 41499, 318668
			},
			.prefetch0 = 59089,
			.prefetch1 = 36648,
			.ram = rorw_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4123778073, 1666743892, 3914704982, 2065437181, 2432141946, 3420887676, 653507652, 3120147970, 2801593582, 2593485700, 836574453, 3603936936, 1703130205, 3019912557, 1491280778, 13125688, 745190, 41488, 318670
			},
			.prefetch0 = 36648,
			.prefetch1 = 34451,
			.ram = rorw_final_ram_7,
			.ram_len = 8,
		},
		.transactions = rorw_transactions_7,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "008 ROR.w (A2)+ e6da",
		.initial = {
			.regs = {
				61793090, 3130319838, 1701632440, 2895382536, 2266442670, 2648214132, 1607138655, 1038901374, 327203414, 2538909722, 2577944252, 2866256147, 4178582242, 986911075, 434739121, 5657128, 1105700, 8730, 3312382
			},
			.prefetch0 = 59098,
			.prefetch1 = 41502,
			.ram = rorw_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				61793090, 3130319838, 1701632440, 2895382536, 2266442670, 2648214132, 1607138655, 1038901374, 327203414, 2538909722, 2577944254, 2866256147, 4178582242, 986911075, 434739121, 5657128, 1105700, 8729, 3312384
			},
			.prefetch0 = 41502,
			.prefetch1 = 23552,
			.ram = rorw_final_ram_8,
			.ram_len = 8,
		},
		.transactions = rorw_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 ROR.w D2, D1 e479",
		.initial = {
			.regs = {
				485748211, 2832974518, 2834462677, 1665403505, 3342540022, 455220738, 2799420966, 2324836451, 1113378656, 3027923551, 555135450, 4277870088, 4105993966, 1613081461, 573998344, 4642510, 13032430, 41999, 12311394
			},
			.prefetch0 = 58489,
			.prefetch1 = 27371,
			.ram = rorw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				485748211, 2832971285, 2834462677, 1665403505, 3342540022, 455220738, 2799420966, 2324836451, 1113378656, 3027923551, 555135450, 4277870088, 4105993966, 1613081461, 573998344, 4642510, 13032430, 41993, 12311396
			},
			.prefetch0 = 27371,
			.prefetch1 = 5284,
			.ram = rorw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_9,
		.transactions_len = 2,
		.lenght = 48,
	},
	{
		.name = "010 ROR.w (xxx).w e6f8",
		.initial = {
			.regs = {
				121147598, 2773280500, 424258334, 1645200280, 474995807, 1671092576, 4176538759, 1287368229, 3723642560, 2884511582, 3952514770, 1692936637, 630491530, 3500713860, 2751430863, 2645920, 9567780, 42756, 14664074
			},
			.prefetch0 = 59128,
			.prefetch1 = 56905,
			.ram = rorw_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				121147598, 2773280500, 424258334, 1645200280, 474995807, 1671092576, 4176538759, 1287368229, 3723642560, 2884511582, 3952514770, 1692936637, 630491530, 3500713860, 2751430863, 2645920, 9567766, 9988, 2712731274
			},
			.prefetch0 = 50729,
			.prefetch1 = 44137,
			.ram = rorw_final_ram_10,
			.ram_len = 28,
		},
		.transactions = rorw_transactions_10,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "011 ROR.w (A4) e6d4",
		.initial = {
			.regs = {
				3113773204, 1230013519, 4056727751, 3573616046, 891783455, 3712652781, 3843445283, 3893593351, 3558437427, 1265660041, 3915202257, 1448602914, 1741346826, 2475387983, 1902918541, 4660880, 395000, 33292, 4263120
			},
			.prefetch0 = 59092,
			.prefetch1 = 62886,
			.ram = rorw_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3113773204, 1230013519, 4056727751, 3573616046, 891783455, 3712652781, 3843445283, 3893593351, 3558437427, 1265660041, 3915202257, 1448602914, 1741346826, 2475387983, 1902918541, 4660880, 395000, 33280, 4263122
			},
			.prefetch0 = 62886,
			.prefetch1 = 54941,
			.ram = rorw_final_ram_11,
			.ram_len = 8,
		},
		.transactions = rorw_transactions_11,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "012 ROR.w (A4)+ e6dc",
		.initial = {
			.regs = {
				3257338561, 3481218750, 333735427, 3212589276, 1481648341, 1694797632, 2284462643, 3188894973, 2147121296, 1628025149, 1300921575, 2659441692, 4120928309, 2148354668, 3410566459, 7230730, 3829172, 1039, 16261382
			},
			.prefetch0 = 59100,
			.prefetch1 = 12939,
			.ram = rorw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3257338561, 3481218750, 333735427, 3212589276, 1481648341, 1694797632, 2284462643, 3188894973, 2147121296, 1628025149, 1300921575, 2659441692, 4120928311, 2148354668, 3410566459, 7230730, 3829158, 9231, 317340762
			},
			.prefetch0 = 7381,
			.prefetch1 = 42417,
			.ram = rorw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = rorw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 ROR.w D2, D4 e47c",
		.initial = {
			.regs = {
				3411332161, 438483229, 2687572091, 2619920073, 427718060, 476810600, 2041820241, 1247889797, 4055820428, 542072409, 3175394209, 3194572631, 2213267464, 2343105071, 3861607717, 81706, 12180304, 9987, 7045840
			},
			.prefetch0 = 58492,
			.prefetch1 = 52425,
			.ram = rorw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3411332161, 438483229, 2687572091, 2619920073, 427734414, 476810600, 2041820241, 1247889797, 4055820428, 542072409, 3175394209, 3194572631, 2213267464, 2343105071, 3861607717, 81706, 12180304, 9993, 7045842
			},
			.prefetch0 = 52425,
			.prefetch1 = 3504,
			.ram = rorw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_13,
		.transactions_len = 2,
		.lenght = 124,
	},
	{
		.name = "014 ROR.w D0, D1 e079",
		.initial = {
			.regs = {
				4059332648, 3951757755, 1498749365, 2752077211, 1215477631, 1841605973, 2414997471, 3765235786, 2044613779, 2804543438, 3083196506, 944606617, 2766485617, 289477435, 2135949675, 4629482, 16119414, 9240, 14302516
			},
			.prefetch0 = 57465,
			.prefetch1 = 61377,
			.ram = rorw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4059332648, 3951803145, 1498749365, 2752077211, 1215477631, 1841605973, 2414997471, 3765235786, 2044613779, 2804543438, 3083196506, 944606617, 2766485617, 289477435, 2135949675, 4629482, 16119414, 9241, 14302518
			},
			.prefetch0 = 61377,
			.prefetch1 = 14053,
			.ram = rorw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_14,
		.transactions_len = 2,
		.lenght = 86,
	},
	{
		.name = "015 ROR.w -(A0) e6e0",
		.initial = {
			.regs = {
				1575145990, 3256601212, 665993163, 224474909, 3623768809, 2405139442, 2401509495, 3529021689, 2727087018, 2884800376, 2952927186, 2772856661, 3368686634, 3758157535, 2476626664, 236038, 11038148, 34310, 1219942
			},
			.prefetch0 = 59104,
			.prefetch1 = 47133,
			.ram = rorw_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1575145990, 3256601212, 665993163, 224474909, 3623768809, 2405139442, 2401509495, 3529021689, 2727087016, 2884800376, 2952927186, 2772856661, 3368686634, 3758157535, 2476626664, 236038, 11038148, 34313, 1219944
			},
			.prefetch0 = 47133,
			.prefetch1 = 34666,
			.ram = rorw_final_ram_15,
			.ram_len = 8,
		},
		.transactions = rorw_transactions_15,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "016 ROR.w 6, D7 ec5f",
		.initial = {
			.regs = {
				1134634983, 2619853317, 3856943011, 749833877, 3687830856, 4121793719, 1835962039, 4063888105, 2516729982, 278216109, 3079326982, 13882815, 2464561942, 3360565845, 3325229749, 15857544, 6717130, 9739, 12634786
			},
			.prefetch0 = 60511,
			.prefetch1 = 50765,
			.ram = rorw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1134634983, 2619853317, 3856943011, 749833877, 3687830856, 4121793719, 1835962039, 4063929355, 2516729982, 278216109, 3079326982, 13882815, 2464561942, 3360565845, 3325229749, 15857544, 6717130, 9737, 12634788
			},
			.prefetch0 = 50765,
			.prefetch1 = 38929,
			.ram = rorw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_16,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "017 ROR.w D7, D1 ee79",
		.initial = {
			.regs = {
				3071845138, 2439812904, 658118086, 3245765166, 577534279, 3214282130, 1839324911, 34175394, 2550208461, 1444020286, 3855970002, 4266329510, 510353957, 3235342990, 420878032, 545764, 11307842, 9236, 355398
			},
			.prefetch0 = 61049,
			.prefetch1 = 19919,
			.ram = rorw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3071845138, 2439783882, 658118086, 3245765166, 577534279, 3214282130, 1839324911, 34175394, 2550208461, 1444020286, 3855970002, 4266329510, 510353957, 3235342990, 420878032, 545764, 11307842, 9232, 355400
			},
			.prefetch0 = 19919,
			.prefetch1 = 36722,
			.ram = rorw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_17,
		.transactions_len = 2,
		.lenght = 74,
	},
	{
		.name = "018 ROR.w (A4) e6d4",
		.initial = {
			.regs = {
				920764473, 3013041417, 1367287865, 2364149596, 2982068285, 1575347236, 475411614, 1798973751, 1302985904, 2103512670, 629728822, 3273869282, 2250222461, 3244874597, 1004265593, 9201998, 14652506, 266, 15753782
			},
			.prefetch0 = 59092,
			.prefetch1 = 16342,
			.ram = rorw_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				920764473, 3013041417, 1367287865, 2364149596, 2982068285, 1575347236, 475411614, 1798973751, 1302985904, 2103512670, 629728822, 3273869282, 2250222461, 3244874597, 1004265593, 9201998, 14652492, 8458, 280413280
			},
			.prefetch0 = 10129,
			.prefetch1 = 22991,
			.ram = rorw_final_ram_18,
			.ram_len = 26,
		},
		.transactions = rorw_transactions_18,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "019 ROR.w (A4) e6d4",
		.initial = {
			.regs = {
				656797858, 1720864958, 1885878598, 1865545053, 4113801705, 2402319352, 1108113993, 3243206795, 1928699267, 4139683378, 806746022, 1734044545, 2263887227, 1548141749, 2625915667, 1665290, 6103082, 1281, 542160
			},
			.prefetch0 = 59092,
			.prefetch1 = 14631,
			.ram = rorw_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				656797858, 1720864958, 1885878598, 1865545053, 4113801705, 2402319352, 1108113993, 3243206795, 1928699267, 4139683378, 806746022, 1734044545, 2263887227, 1548141749, 2625915667, 1665290, 6103068, 9473, 2784887580
			},
			.prefetch0 = 25868,
			.prefetch1 = 11476,
			.ram = rorw_final_ram_19,
			.ram_len = 26,
		},
		.transactions = rorw_transactions_19,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "020 ROR.w D4, D2 e87a",
		.initial = {
			.regs = {
				1457428516, 3394295973, 2501239840, 2564985331, 2602831039, 216106484, 695172270, 691487103, 2056714369, 3713618243, 2956733726, 624248452, 3053770660, 2373169190, 2080280354, 10428830, 9900192, 9496, 3154188
			},
			.prefetch0 = 59514,
			.prefetch1 = 54965,
			.ram = rorw_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1457428516, 3394295973, 2501232705, 2564985331, 2602831039, 216106484, 695172270, 691487103, 2056714369, 3713618243, 2956733726, 624248452, 3053770660, 2373169190, 2080280354, 10428830, 9900192, 9497, 3154190
			},
			.prefetch0 = 54965,
			.prefetch1 = 36511,
			.ram = rorw_final_ram_20,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_20,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "021 ROR.w 3, D1 e659",
		.initial = {
			.regs = {
				3364191107, 2164790921, 3240822240, 3542509094, 3405736399, 3595456681, 1379956028, 3256983868, 1644630835, 281091990, 603302742, 2348915081, 2716940793, 1807823730, 3671520599, 16773110, 16462458, 34576, 12700590
			},
			.prefetch0 = 58969,
			.prefetch1 = 33922,
			.ram = rorw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3364191107, 2164794065, 3240822240, 3542509094, 3405736399, 3595456681, 1379956028, 3256983868, 1644630835, 281091990, 603302742, 2348915081, 2716940793, 1807823730, 3671520599, 16773110, 16462458, 34576, 12700592
			},
			.prefetch0 = 33922,
			.prefetch1 = 25376,
			.ram = rorw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_21,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "022 ROR.w 6, D4 ec5c",
		.initial = {
			.regs = {
				1931131706, 1123465970, 2641657083, 2749362237, 3248014032, 1127923585, 3097072696, 2027516058, 2903747868, 3281386493, 2907910531, 1363200538, 2073737327, 3217991805, 1533609172, 11057300, 6793638, 33562, 12409364
			},
			.prefetch0 = 60508,
			.prefetch1 = 10494,
			.ram = rorw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1931131706, 1123465970, 2641657083, 2749362237, 3247981323, 1127923585, 3097072696, 2027516058, 2903747868, 3281386493, 2907910531, 1363200538, 2073737327, 3217991805, 1533609172, 11057300, 6793638, 33552, 12409366
			},
			.prefetch0 = 10494,
			.prefetch1 = 39983,
			.ram = rorw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_22,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "023 ROR.w 7, D4 ee5c",
		.initial = {
			.regs = {
				1531248059, 807614583, 598439942, 3338050598, 2440486835, 725386266, 4011443006, 820414118, 2730594897, 1391611915, 257453775, 1538089174, 635175408, 2049670809, 3647866352, 15101930, 4076062, 42512, 449090
			},
			.prefetch0 = 61020,
			.prefetch1 = 25976,
			.ram = rorw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1531248059, 807614583, 598439942, 3338050598, 2440456127, 725386266, 4011443006, 820414118, 2730594897, 1391611915, 257453775, 1538089174, 635175408, 2049670809, 3647866352, 15101930, 4076062, 42512, 449092
			},
			.prefetch0 = 25976,
			.prefetch1 = 47116,
			.ram = rorw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_23,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "024 ROR.w 5, D5 ea5d",
		.initial = {
			.regs = {
				2777200737, 2703806741, 1610885, 3690324571, 3694003372, 2472768132, 1634084274, 256273191, 3437910693, 3478771754, 3834912619, 1183567383, 2785606400, 2236049326, 3451010206, 325292, 5032206, 42502, 10145282
			},
			.prefetch0 = 59997,
			.prefetch1 = 27337,
			.ram = rorw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2777200737, 2703806741, 1610885, 3690324571, 3694003372, 2472747924, 1634084274, 256273191, 3437910693, 3478771754, 3834912619, 1183567383, 2785606400, 2236049326, 3451010206, 325292, 5032206, 42496, 10145284
			},
			.prefetch0 = 27337,
			.prefetch1 = 5505,
			.ram = rorw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_24,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "025 ROR.w (A4)+ e6dc",
		.initial = {
			.regs = {
				3352134787, 3338527950, 728427211, 374340859, 1170864850, 1146103894, 303182002, 3213422376, 3410841738, 1770737137, 1477590121, 2301346443, 3779573239, 381749800, 1314483946, 4212752, 11949512, 8967, 13223504
			},
			.prefetch0 = 59100,
			.prefetch1 = 29239,
			.ram = rorw_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3352134787, 3338527950, 728427211, 374340859, 1170864850, 1146103894, 303182002, 3213422376, 3410841738, 1770737137, 1477590121, 2301346443, 3779573241, 381749800, 1314483946, 4212752, 11949498, 8967, 464669226
			},
			.prefetch0 = 28150,
			.prefetch1 = 32556,
			.ram = rorw_final_ram_25,
			.ram_len = 26,
		},
		.transactions = rorw_transactions_25,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "026 ROR.w (A7) e6d7",
		.initial = {
			.regs = {
				133832614, 3205899592, 819390338, 1010919585, 605822951, 1107448488, 578247621, 688259300, 192375372, 2298573669, 562229635, 3158697293, 2065907632, 747376474, 3778994513, 10999044, 3441058, 8969, 12556320
			},
			.prefetch0 = 59095,
			.prefetch1 = 39043,
			.ram = rorw_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				133832614, 3205899592, 819390338, 1010919585, 605822951, 1107448488, 578247621, 688259300, 192375372, 2298573669, 562229635, 3158697293, 2065907632, 747376474, 3778994513, 10999044, 3441058, 8969, 12556322
			},
			.prefetch0 = 39043,
			.prefetch1 = 24817,
			.ram = rorw_final_ram_26,
			.ram_len = 8,
		},
		.transactions = rorw_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 ROR.w D1, D6 e27e",
		.initial = {
			.regs = {
				822828159, 3017043924, 1786449312, 2291456318, 121650345, 743283990, 3735178566, 366243227, 3032076328, 1850962533, 2261362298, 1738050626, 3406003824, 2752846562, 470156015, 10626298, 5247580, 8967, 10250868
			},
			.prefetch0 = 57982,
			.prefetch1 = 28217,
			.ram = rorw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				822828159, 3017043924, 1786449312, 2291456318, 121650345, 743283990, 3735184596, 366243227, 3032076328, 1850962533, 2261362298, 1738050626, 3406003824, 2752846562, 470156015, 10626298, 5247580, 8960, 10250870
			},
			.prefetch0 = 28217,
			.prefetch1 = 2321,
			.ram = rorw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_27,
		.transactions_len = 2,
		.lenght = 46,
	},
	{
		.name = "028 ROR.w 5, D3 ea5b",
		.initial = {
			.regs = {
				2389008863, 1128176373, 2327443133, 860033052, 1269274415, 2354116972, 2784742212, 486854630, 3074165866, 1397549362, 3917408161, 1891296842, 4167330535, 563163374, 3227312237, 7974010, 8502938, 34331, 12419388
			},
			.prefetch0 = 59995,
			.prefetch1 = 30692,
			.ram = rorw_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2389008863, 1128176373, 2327443133, 860086400, 1269274415, 2354116972, 2784742212, 486854630, 3074165866, 1397549362, 3917408161, 1891296842, 4167330535, 563163374, 3227312237, 7974010, 8502938, 34329, 12419390
			},
			.prefetch0 = 30692,
			.prefetch1 = 41597,
			.ram = rorw_final_ram_28,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_28,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "029 ROR.w D4, D5 e87d",
		.initial = {
			.regs = {
				2380335663, 2605013536, 1770487060, 3067175326, 1253492037, 3508506488, 1562604744, 2633778995, 413885083, 809886365, 2661775552, 1001668641, 2161940023, 110908840, 3511698118, 9214880, 607942, 9735, 13497030
			},
			.prefetch0 = 59517,
			.prefetch1 = 51603,
			.ram = rorw_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2380335663, 2605013536, 1770487060, 3067175326, 1253492037, 3508520059, 1562604744, 2633778995, 413885083, 809886365, 2661775552, 1001668641, 2161940023, 110908840, 3511698118, 9214880, 607942, 9737, 13497032
			},
			.prefetch0 = 51603,
			.prefetch1 = 33671,
			.ram = rorw_final_ram_29,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_29,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "030 ROR.w 7, D4 ee5c",
		.initial = {
			.regs = {
				75973045, 1414540397, 3779977929, 3492062079, 4067336190, 2853705633, 1579172839, 3099437746, 1435761552, 1832153693, 433589022, 4118030254, 2606413308, 3223036009, 1846397511, 11639052, 10377840, 40979, 16335886
			},
			.prefetch0 = 61020,
			.prefetch1 = 56030,
			.ram = rorw_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				75973045, 1414540397, 3779977929, 3492062079, 4067360063, 2853705633, 1579172839, 3099437746, 1435761552, 1832153693, 433589022, 4118030254, 2606413308, 3223036009, 1846397511, 11639052, 10377840, 40985, 16335888
			},
			.prefetch0 = 56030,
			.prefetch1 = 6741,
			.ram = rorw_final_ram_30,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_30,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "031 ROR.w D3, D1 e679",
		.initial = {
			.regs = {
				2458221066, 4278423314, 2662048346, 1983289258, 1556196256, 485170639, 918481855, 2105877610, 214355162, 2988825686, 557527394, 1280953941, 147341687, 2599011835, 1850999363, 15690648, 12726650, 8216, 4901014
			},
			.prefetch0 = 59001,
			.prefetch1 = 51931,
			.ram = rorw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2458221066, 4278437027, 2662048346, 1983289258, 1556196256, 485170639, 918481855, 2105877610, 214355162, 2988825686, 557527394, 1280953941, 147341687, 2599011835, 1850999363, 15690648, 12726650, 8217, 4901016
			},
			.prefetch0 = 51931,
			.prefetch1 = 8642,
			.ram = rorw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = rorw_transactions_31,
		.transactions_len = 2,
		.lenght = 90,
	},
};

#endif /* RBT_RORW_H */