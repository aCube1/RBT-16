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

const uint32_t RORW_TEST_COUNT = 16;
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
};

#endif /* RBT_RORW_H */