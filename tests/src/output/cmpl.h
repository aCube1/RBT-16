#ifndef RBT_CMPL_H
#define RBT_CMPL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte cmpl_initial_ram_0[] = {
		{ .addr = 0x7dffee, .byte = 0xbd },
		{ .addr = 0x7dffef, .byte = 0x89 },
		{ .addr = 0x7dfff0, .byte = 0xbb },
		{ .addr = 0x7dfff1, .byte = 0x61 },
		{ .addr = 0xc66f2a, .byte = 0xc5 },
		{ .addr = 0xc66f2b, .byte = 0x32 },
		{ .addr = 0xc66f2c, .byte = 0xc7 },
		{ .addr = 0xc66f2d, .byte = 0xb9 },
		{ .addr = 0xbdc2aa, .byte = 0xbb },
		{ .addr = 0xbdc2ab, .byte = 0x40 },
		{ .addr = 0xbdc2ac, .byte = 0x74 },
		{ .addr = 0xbdc2ad, .byte = 0x77 },
		{ .addr = 0x7dfff2, .byte = 0x94 },
		{ .addr = 0x7dfff3, .byte = 0x5f }
};

static const SST_RamByte cmpl_final_ram_0[] = {
		{ .addr = 0x7dffee, .byte = 0xbd },
		{ .addr = 0x7dffef, .byte = 0x89 },
		{ .addr = 0x7dfff0, .byte = 0xbb },
		{ .addr = 0x7dfff1, .byte = 0x61 },
		{ .addr = 0xc66f2a, .byte = 0xc5 },
		{ .addr = 0xc66f2b, .byte = 0x32 },
		{ .addr = 0xc66f2c, .byte = 0xc7 },
		{ .addr = 0xc66f2d, .byte = 0xb9 },
		{ .addr = 0xbdc2aa, .byte = 0xbb },
		{ .addr = 0xbdc2ab, .byte = 0x40 },
		{ .addr = 0xbdc2ac, .byte = 0x74 },
		{ .addr = 0xbdc2ad, .byte = 0x77 },
		{ .addr = 0x7dfff2, .byte = 0x94 },
		{ .addr = 0x7dfff3, .byte = 0x5f }
};

static const SST_Transaction cmpl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13004586, .data = 50482, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13004588, .data = 51129, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12436138, .data = 47936, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12436140, .data = 29815, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8257522, .data = 37983, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_1[] = {
		{ .addr = 0xa5e010, .byte = 0xbe },
		{ .addr = 0xa5e011, .byte = 0xb5 },
		{ .addr = 0xa5e012, .byte = 0x6e },
		{ .addr = 0xa5e013, .byte = 0x1b },
		{ .addr = 0xa5e014, .byte = 0xf7 },
		{ .addr = 0xa5e015, .byte = 0xda },
		{ .addr = 0xee96be, .byte = 0xf9 },
		{ .addr = 0xee96bf, .byte = 0xe2 },
		{ .addr = 0xee96c0, .byte = 0xe4 },
		{ .addr = 0xee96c1, .byte = 0xfc },
		{ .addr = 0xa5e016, .byte = 0xc4 },
		{ .addr = 0xa5e017, .byte = 0x73 }
};

static const SST_RamByte cmpl_final_ram_1[] = {
		{ .addr = 0xa5e010, .byte = 0xbe },
		{ .addr = 0xa5e011, .byte = 0xb5 },
		{ .addr = 0xa5e012, .byte = 0x6e },
		{ .addr = 0xa5e013, .byte = 0x1b },
		{ .addr = 0xa5e014, .byte = 0xf7 },
		{ .addr = 0xa5e015, .byte = 0xda },
		{ .addr = 0xee96be, .byte = 0xf9 },
		{ .addr = 0xee96bf, .byte = 0xe2 },
		{ .addr = 0xee96c0, .byte = 0xe4 },
		{ .addr = 0xee96c1, .byte = 0xfc },
		{ .addr = 0xa5e016, .byte = 0xc4 },
		{ .addr = 0xa5e017, .byte = 0x73 }
};

static const SST_Transaction cmpl_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10870804, .data = 63450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15636158, .data = 63970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15636160, .data = 58620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10870806, .data = 50291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_2[] = {
		{ .addr = 0x3edb5a, .byte = 0xb2 },
		{ .addr = 0x3edb5b, .byte = 0x9e },
		{ .addr = 0x3edb5c, .byte = 0x78 },
		{ .addr = 0x3edb5d, .byte = 0x0c },
		{ .addr = 0x38b98c, .byte = 0x22 },
		{ .addr = 0x38b98d, .byte = 0x79 },
		{ .addr = 0x38b98e, .byte = 0x4d },
		{ .addr = 0x38b98f, .byte = 0x34 },
		{ .addr = 0x3edb5e, .byte = 0x68 },
		{ .addr = 0x3edb5f, .byte = 0x9c }
};

static const SST_RamByte cmpl_final_ram_2[] = {
		{ .addr = 0x3edb5a, .byte = 0xb2 },
		{ .addr = 0x3edb5b, .byte = 0x9e },
		{ .addr = 0x3edb5c, .byte = 0x78 },
		{ .addr = 0x3edb5d, .byte = 0x0c },
		{ .addr = 0x38b98c, .byte = 0x22 },
		{ .addr = 0x38b98d, .byte = 0x79 },
		{ .addr = 0x38b98e, .byte = 0x4d },
		{ .addr = 0x38b98f, .byte = 0x34 },
		{ .addr = 0x3edb5e, .byte = 0x68 },
		{ .addr = 0x3edb5f, .byte = 0x9c }
};

static const SST_Transaction cmpl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3717516, .data = 8825, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3717518, .data = 19764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4119390, .data = 26780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_3[] = {
		{ .addr = 0xbaef20, .byte = 0xba },
		{ .addr = 0xbaef21, .byte = 0xaa },
		{ .addr = 0xbaef22, .byte = 0xf3 },
		{ .addr = 0xbaef23, .byte = 0xd5 },
		{ .addr = 0xbaef24, .byte = 0xb6 },
		{ .addr = 0xbaef25, .byte = 0x04 },
		{ .addr = 0x8c0466, .byte = 0xca },
		{ .addr = 0x8c0467, .byte = 0x90 },
		{ .addr = 0x8c0468, .byte = 0x3e },
		{ .addr = 0x8c0469, .byte = 0x28 },
		{ .addr = 0xbaef26, .byte = 0xa4 },
		{ .addr = 0xbaef27, .byte = 0xaf }
};

static const SST_RamByte cmpl_final_ram_3[] = {
		{ .addr = 0xbaef20, .byte = 0xba },
		{ .addr = 0xbaef21, .byte = 0xaa },
		{ .addr = 0xbaef22, .byte = 0xf3 },
		{ .addr = 0xbaef23, .byte = 0xd5 },
		{ .addr = 0xbaef24, .byte = 0xb6 },
		{ .addr = 0xbaef25, .byte = 0x04 },
		{ .addr = 0x8c0466, .byte = 0xca },
		{ .addr = 0x8c0467, .byte = 0x90 },
		{ .addr = 0x8c0468, .byte = 0x3e },
		{ .addr = 0x8c0469, .byte = 0x28 },
		{ .addr = 0xbaef26, .byte = 0xa4 },
		{ .addr = 0xbaef27, .byte = 0xaf }
};

static const SST_Transaction cmpl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12250916, .data = 46596, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9176166, .data = 51856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9176168, .data = 15912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12250918, .data = 42159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_4[] = {
		{ .addr = 0xc67938, .byte = 0xb3 },
		{ .addr = 0xc67939, .byte = 0x8c },
		{ .addr = 0xc6793a, .byte = 0x9e },
		{ .addr = 0xc6793b, .byte = 0x0b },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x4c },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0xf8 },
		{ .addr = 0x4cb1f8, .byte = 0xcc },
		{ .addr = 0x4cb1f9, .byte = 0xfe },
		{ .addr = 0x4cb1fa, .byte = 0x09 },
		{ .addr = 0x4cb1fb, .byte = 0x6e }
};

static const SST_RamByte cmpl_final_ram_4[] = {
		{ .addr = 0xc67938, .byte = 0xb3 },
		{ .addr = 0xc67939, .byte = 0x8c },
		{ .addr = 0xc6793a, .byte = 0x9e },
		{ .addr = 0xc6793b, .byte = 0x0b },
		{ .addr = 0x0f822c, .byte = 0x79 },
		{ .addr = 0x0f822d, .byte = 0x3c },
		{ .addr = 0x0f8228, .byte = 0x06 },
		{ .addr = 0x0f8229, .byte = 0x05 },
		{ .addr = 0x0f822a, .byte = 0x00 },
		{ .addr = 0x0f822b, .byte = 0xc6 },
		{ .addr = 0x0f8226, .byte = 0xb3 },
		{ .addr = 0x0f8227, .byte = 0x8c },
		{ .addr = 0x0f8224, .byte = 0x55 },
		{ .addr = 0x0f8225, .byte = 0xd7 },
		{ .addr = 0x0f8220, .byte = 0xb3 },
		{ .addr = 0x0f8221, .byte = 0x91 },
		{ .addr = 0x0f8222, .byte = 0xb9 },
		{ .addr = 0x0f8223, .byte = 0x34 },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x4c },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0xf8 },
		{ .addr = 0x4cb1f8, .byte = 0xcc },
		{ .addr = 0x4cb1f9, .byte = 0xfe },
		{ .addr = 0x4cb1fa, .byte = 0x09 },
		{ .addr = 0x4cb1fb, .byte = 0x6e }
};

static const SST_Transaction cmpl_transactions_4[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3429846, .data = 31043, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1016364, .data = 31036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1016360, .data = 1541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1016362, .data = 198, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1016358, .data = 45964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1016356, .data = 21975, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1016352, .data = 45969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1016354, .data = 47412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 45560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5026296, .data = 52478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5026298, .data = 2414, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_5[] = {
		{ .addr = 0x31c874, .byte = 0xbe },
		{ .addr = 0x31c875, .byte = 0xb2 },
		{ .addr = 0x31c876, .byte = 0xec },
		{ .addr = 0x31c877, .byte = 0xeb },
		{ .addr = 0x31c878, .byte = 0x53 },
		{ .addr = 0x31c879, .byte = 0xeb },
		{ .addr = 0x68f17e, .byte = 0x5c },
		{ .addr = 0x68f17f, .byte = 0x58 },
		{ .addr = 0x68f180, .byte = 0xb5 },
		{ .addr = 0x68f181, .byte = 0xc3 },
		{ .addr = 0x31c87a, .byte = 0x74 },
		{ .addr = 0x31c87b, .byte = 0x1b }
};

static const SST_RamByte cmpl_final_ram_5[] = {
		{ .addr = 0x31c874, .byte = 0xbe },
		{ .addr = 0x31c875, .byte = 0xb2 },
		{ .addr = 0x31c876, .byte = 0xec },
		{ .addr = 0x31c877, .byte = 0xeb },
		{ .addr = 0x31c878, .byte = 0x53 },
		{ .addr = 0x31c879, .byte = 0xeb },
		{ .addr = 0x68f17e, .byte = 0x5c },
		{ .addr = 0x68f17f, .byte = 0x58 },
		{ .addr = 0x68f180, .byte = 0xb5 },
		{ .addr = 0x68f181, .byte = 0xc3 },
		{ .addr = 0x31c87a, .byte = 0x74 },
		{ .addr = 0x31c87b, .byte = 0x1b }
};

static const SST_Transaction cmpl_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3262584, .data = 21483, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6877566, .data = 23640, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6877568, .data = 46531, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3262586, .data = 29723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_6[] = {
		{ .addr = 0x0bf6c2, .byte = 0xbc },
		{ .addr = 0x0bf6c3, .byte = 0xac },
		{ .addr = 0x0bf6c4, .byte = 0x41 },
		{ .addr = 0x0bf6c5, .byte = 0x55 },
		{ .addr = 0x0bf6c6, .byte = 0x0e },
		{ .addr = 0x0bf6c7, .byte = 0xd8 },
		{ .addr = 0x00000c, .byte = 0x4d },
		{ .addr = 0x00000d, .byte = 0xfc },
		{ .addr = 0x00000e, .byte = 0xa2 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0xfca2cc, .byte = 0x71 },
		{ .addr = 0xfca2cd, .byte = 0x6c },
		{ .addr = 0xfca2ce, .byte = 0xc5 },
		{ .addr = 0xfca2cf, .byte = 0xa2 }
};

static const SST_RamByte cmpl_final_ram_6[] = {
		{ .addr = 0x0bf6c2, .byte = 0xbc },
		{ .addr = 0x0bf6c3, .byte = 0xac },
		{ .addr = 0x0bf6c4, .byte = 0x41 },
		{ .addr = 0x0bf6c5, .byte = 0x55 },
		{ .addr = 0x0bf6c6, .byte = 0x0e },
		{ .addr = 0x0bf6c7, .byte = 0xd8 },
		{ .addr = 0xdd9650, .byte = 0xf6 },
		{ .addr = 0xdd9651, .byte = 0xc4 },
		{ .addr = 0xdd964c, .byte = 0x02 },
		{ .addr = 0xdd964d, .byte = 0x1e },
		{ .addr = 0xdd964e, .byte = 0x00 },
		{ .addr = 0xdd964f, .byte = 0x0b },
		{ .addr = 0xdd964a, .byte = 0xbc },
		{ .addr = 0xdd964b, .byte = 0xac },
		{ .addr = 0xdd9648, .byte = 0xa9 },
		{ .addr = 0xdd9649, .byte = 0x71 },
		{ .addr = 0xdd9644, .byte = 0xbc },
		{ .addr = 0xdd9645, .byte = 0xb1 },
		{ .addr = 0xdd9646, .byte = 0x32 },
		{ .addr = 0xdd9647, .byte = 0x93 },
		{ .addr = 0x00000c, .byte = 0x4d },
		{ .addr = 0x00000d, .byte = 0xfc },
		{ .addr = 0x00000e, .byte = 0xa2 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0xfca2cc, .byte = 0x71 },
		{ .addr = 0xfca2cd, .byte = 0x6c },
		{ .addr = 0xfca2ce, .byte = 0xc5 },
		{ .addr = 0xfca2cf, .byte = 0xa2 }
};

static const SST_Transaction cmpl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 784070, .data = 3800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9677168, .data = 44701, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14521936, .data = 63172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14521932, .data = 542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14521934, .data = 11, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14521930, .data = 48300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14521928, .data = 43377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14521924, .data = 48305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14521926, .data = 12947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19964, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16556748, .data = 29036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16556750, .data = 50594, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_7[] = {
		{ .addr = 0x330b08, .byte = 0xb4 },
		{ .addr = 0x330b09, .byte = 0xb5 },
		{ .addr = 0x330b0a, .byte = 0xa9 },
		{ .addr = 0x330b0b, .byte = 0x2a },
		{ .addr = 0x330b0c, .byte = 0x06 },
		{ .addr = 0x330b0d, .byte = 0x5a },
		{ .addr = 0x79dcc4, .byte = 0x51 },
		{ .addr = 0x79dcc5, .byte = 0x63 },
		{ .addr = 0x79dcc6, .byte = 0xc7 },
		{ .addr = 0x79dcc7, .byte = 0x98 },
		{ .addr = 0x330b0e, .byte = 0xd3 },
		{ .addr = 0x330b0f, .byte = 0xa8 }
};

static const SST_RamByte cmpl_final_ram_7[] = {
		{ .addr = 0x330b08, .byte = 0xb4 },
		{ .addr = 0x330b09, .byte = 0xb5 },
		{ .addr = 0x330b0a, .byte = 0xa9 },
		{ .addr = 0x330b0b, .byte = 0x2a },
		{ .addr = 0x330b0c, .byte = 0x06 },
		{ .addr = 0x330b0d, .byte = 0x5a },
		{ .addr = 0x79dcc4, .byte = 0x51 },
		{ .addr = 0x79dcc5, .byte = 0x63 },
		{ .addr = 0x79dcc6, .byte = 0xc7 },
		{ .addr = 0x79dcc7, .byte = 0x98 },
		{ .addr = 0x330b0e, .byte = 0xd3 },
		{ .addr = 0x330b0f, .byte = 0xa8 }
};

static const SST_Transaction cmpl_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3345164, .data = 1626, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7986372, .data = 20835, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7986374, .data = 51096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3345166, .data = 54184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_8[] = {
		{ .addr = 0x7696a8, .byte = 0xbe },
		{ .addr = 0x7696a9, .byte = 0x9f },
		{ .addr = 0x7696aa, .byte = 0x37 },
		{ .addr = 0x7696ab, .byte = 0x09 },
		{ .addr = 0xf1d0da, .byte = 0xc9 },
		{ .addr = 0xf1d0db, .byte = 0xde },
		{ .addr = 0xf1d0dc, .byte = 0x19 },
		{ .addr = 0xf1d0dd, .byte = 0x5e },
		{ .addr = 0x7696ac, .byte = 0xec },
		{ .addr = 0x7696ad, .byte = 0x6c }
};

static const SST_RamByte cmpl_final_ram_8[] = {
		{ .addr = 0x7696a8, .byte = 0xbe },
		{ .addr = 0x7696a9, .byte = 0x9f },
		{ .addr = 0x7696aa, .byte = 0x37 },
		{ .addr = 0x7696ab, .byte = 0x09 },
		{ .addr = 0xf1d0da, .byte = 0xc9 },
		{ .addr = 0xf1d0db, .byte = 0xde },
		{ .addr = 0xf1d0dc, .byte = 0x19 },
		{ .addr = 0xf1d0dd, .byte = 0x5e },
		{ .addr = 0x7696ac, .byte = 0xec },
		{ .addr = 0x7696ad, .byte = 0x6c }
};

static const SST_Transaction cmpl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15847642, .data = 51678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15847644, .data = 6494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7771820, .data = 60524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_9[] = {
		{ .addr = 0x86d5fa, .byte = 0xb4 },
		{ .addr = 0x86d5fb, .byte = 0x8a },
		{ .addr = 0x86d5fc, .byte = 0x1c },
		{ .addr = 0x86d5fd, .byte = 0x2c },
		{ .addr = 0x86d5fe, .byte = 0xb8 },
		{ .addr = 0x86d5ff, .byte = 0x70 }
};

static const SST_RamByte cmpl_final_ram_9[] = {
		{ .addr = 0x86d5fa, .byte = 0xb4 },
		{ .addr = 0x86d5fb, .byte = 0x8a },
		{ .addr = 0x86d5fc, .byte = 0x1c },
		{ .addr = 0x86d5fd, .byte = 0x2c },
		{ .addr = 0x86d5fe, .byte = 0xb8 },
		{ .addr = 0x86d5ff, .byte = 0x70 }
};

static const SST_Transaction cmpl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8836606, .data = 47216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_10[] = {
		{ .addr = 0xfb297a, .byte = 0xba },
		{ .addr = 0xfb297b, .byte = 0xb5 },
		{ .addr = 0xfb297c, .byte = 0x1d },
		{ .addr = 0xfb297d, .byte = 0xe7 },
		{ .addr = 0xfb297e, .byte = 0x2f },
		{ .addr = 0xfb297f, .byte = 0x02 },
		{ .addr = 0xffbd74, .byte = 0x4d },
		{ .addr = 0xffbd75, .byte = 0x6c },
		{ .addr = 0xffbd76, .byte = 0xbc },
		{ .addr = 0xffbd77, .byte = 0xce },
		{ .addr = 0xfb2980, .byte = 0x73 },
		{ .addr = 0xfb2981, .byte = 0x98 }
};

static const SST_RamByte cmpl_final_ram_10[] = {
		{ .addr = 0xfb297a, .byte = 0xba },
		{ .addr = 0xfb297b, .byte = 0xb5 },
		{ .addr = 0xfb297c, .byte = 0x1d },
		{ .addr = 0xfb297d, .byte = 0xe7 },
		{ .addr = 0xfb297e, .byte = 0x2f },
		{ .addr = 0xfb297f, .byte = 0x02 },
		{ .addr = 0xffbd74, .byte = 0x4d },
		{ .addr = 0xffbd75, .byte = 0x6c },
		{ .addr = 0xffbd76, .byte = 0xbc },
		{ .addr = 0xffbd77, .byte = 0xce },
		{ .addr = 0xfb2980, .byte = 0x73 },
		{ .addr = 0xfb2981, .byte = 0x98 }
};

static const SST_Transaction cmpl_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16460158, .data = 12034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16760180, .data = 19820, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16760182, .data = 48334, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16460160, .data = 29592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_11[] = {
		{ .addr = 0x824e3c, .byte = 0xb4 },
		{ .addr = 0x824e3d, .byte = 0x9d },
		{ .addr = 0x824e3e, .byte = 0x84 },
		{ .addr = 0x824e3f, .byte = 0x7c },
		{ .addr = 0x00000c, .byte = 0xf1 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x6a6990, .byte = 0xd0 },
		{ .addr = 0x6a6991, .byte = 0xd7 },
		{ .addr = 0x6a6992, .byte = 0x3f },
		{ .addr = 0x6a6993, .byte = 0x57 }
};

static const SST_RamByte cmpl_final_ram_11[] = {
		{ .addr = 0x824e3c, .byte = 0xb4 },
		{ .addr = 0x824e3d, .byte = 0x9d },
		{ .addr = 0x824e3e, .byte = 0x84 },
		{ .addr = 0x824e3f, .byte = 0x7c },
		{ .addr = 0x129ef2, .byte = 0x4e },
		{ .addr = 0x129ef3, .byte = 0x3e },
		{ .addr = 0x129eee, .byte = 0xa6 },
		{ .addr = 0x129eef, .byte = 0x0d },
		{ .addr = 0x129ef0, .byte = 0x00 },
		{ .addr = 0x129ef1, .byte = 0x82 },
		{ .addr = 0x129eec, .byte = 0xb4 },
		{ .addr = 0x129eed, .byte = 0x9d },
		{ .addr = 0x129eea, .byte = 0xcf },
		{ .addr = 0x129eeb, .byte = 0x03 },
		{ .addr = 0x129ee6, .byte = 0xb4 },
		{ .addr = 0x129ee7, .byte = 0x95 },
		{ .addr = 0x129ee8, .byte = 0x74 },
		{ .addr = 0x129ee9, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0xf1 },
		{ .addr = 0x00000d, .byte = 0x6a },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x6a6990, .byte = 0xd0 },
		{ .addr = 0x6a6991, .byte = 0xd7 },
		{ .addr = 0x6a6992, .byte = 0x3f },
		{ .addr = 0x6a6993, .byte = 0x57 }
};

static const SST_Transaction cmpl_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6606594, .data = 20356, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1220338, .data = 20030, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1220334, .data = 42509, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1220336, .data = 130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1220332, .data = 46237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1220330, .data = 52995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1220326, .data = 46229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1220328, .data = 29796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6973840, .data = 53463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6973842, .data = 16215, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_12[] = {
		{ .addr = 0x28dbea, .byte = 0xb4 },
		{ .addr = 0x28dbeb, .byte = 0x9d },
		{ .addr = 0x28dbec, .byte = 0x88 },
		{ .addr = 0x28dbed, .byte = 0x63 },
		{ .addr = 0x00000c, .byte = 0xce },
		{ .addr = 0x00000d, .byte = 0xae },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0xae39ea, .byte = 0x22 },
		{ .addr = 0xae39eb, .byte = 0xc9 },
		{ .addr = 0xae39ec, .byte = 0x88 },
		{ .addr = 0xae39ed, .byte = 0x9a }
};

static const SST_RamByte cmpl_final_ram_12[] = {
		{ .addr = 0x28dbea, .byte = 0xb4 },
		{ .addr = 0x28dbeb, .byte = 0x9d },
		{ .addr = 0x28dbec, .byte = 0x88 },
		{ .addr = 0x28dbed, .byte = 0x63 },
		{ .addr = 0x1a1e00, .byte = 0xdb },
		{ .addr = 0x1a1e01, .byte = 0xec },
		{ .addr = 0x1a1dfc, .byte = 0x85 },
		{ .addr = 0x1a1dfd, .byte = 0x1e },
		{ .addr = 0x1a1dfe, .byte = 0x00 },
		{ .addr = 0x1a1dff, .byte = 0x28 },
		{ .addr = 0x1a1dfa, .byte = 0xb4 },
		{ .addr = 0x1a1dfb, .byte = 0x9d },
		{ .addr = 0x1a1df8, .byte = 0x80 },
		{ .addr = 0x1a1df9, .byte = 0x0b },
		{ .addr = 0x1a1df4, .byte = 0xb4 },
		{ .addr = 0x1a1df5, .byte = 0x91 },
		{ .addr = 0x1a1df6, .byte = 0x7b },
		{ .addr = 0x1a1df7, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0xce },
		{ .addr = 0x00000d, .byte = 0xae },
		{ .addr = 0x00000e, .byte = 0x39 },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0xae39ea, .byte = 0x22 },
		{ .addr = 0xae39eb, .byte = 0xc9 },
		{ .addr = 0xae39ec, .byte = 0x88 },
		{ .addr = 0xae39ed, .byte = 0x9a }
};

static const SST_Transaction cmpl_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2785290, .data = 50893, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1711616, .data = 56300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1711612, .data = 34078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1711614, .data = 40, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1711610, .data = 46237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1711608, .data = 32779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1711604, .data = 46225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1711606, .data = 31530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11418090, .data = 8905, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11418092, .data = 34970, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_13[] = {
		{ .addr = 0x0446d4, .byte = 0xb6 },
		{ .addr = 0x0446d5, .byte = 0x84 },
		{ .addr = 0x0446d6, .byte = 0x61 },
		{ .addr = 0x0446d7, .byte = 0x3e },
		{ .addr = 0x0446d8, .byte = 0x2a },
		{ .addr = 0x0446d9, .byte = 0xd5 }
};

static const SST_RamByte cmpl_final_ram_13[] = {
		{ .addr = 0x0446d4, .byte = 0xb6 },
		{ .addr = 0x0446d5, .byte = 0x84 },
		{ .addr = 0x0446d6, .byte = 0x61 },
		{ .addr = 0x0446d7, .byte = 0x3e },
		{ .addr = 0x0446d8, .byte = 0x2a },
		{ .addr = 0x0446d9, .byte = 0xd5 }
};

static const SST_Transaction cmpl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 280280, .data = 10965, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_14[] = {
		{ .addr = 0xf05534, .byte = 0xbc },
		{ .addr = 0xf05535, .byte = 0xa2 },
		{ .addr = 0xf05536, .byte = 0xf9 },
		{ .addr = 0xf05537, .byte = 0x07 },
		{ .addr = 0x00000c, .byte = 0xa3 },
		{ .addr = 0x00000d, .byte = 0x5a },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x5a698e, .byte = 0x96 },
		{ .addr = 0x5a698f, .byte = 0x2b },
		{ .addr = 0x5a6990, .byte = 0x6d },
		{ .addr = 0x5a6991, .byte = 0xbd }
};

static const SST_RamByte cmpl_final_ram_14[] = {
		{ .addr = 0xf05534, .byte = 0xbc },
		{ .addr = 0xf05535, .byte = 0xa2 },
		{ .addr = 0xf05536, .byte = 0xf9 },
		{ .addr = 0xf05537, .byte = 0x07 },
		{ .addr = 0x7f1fcc, .byte = 0x55 },
		{ .addr = 0x7f1fcd, .byte = 0x36 },
		{ .addr = 0x7f1fc8, .byte = 0xa5 },
		{ .addr = 0x7f1fc9, .byte = 0x0b },
		{ .addr = 0x7f1fca, .byte = 0x00 },
		{ .addr = 0x7f1fcb, .byte = 0xf0 },
		{ .addr = 0x7f1fc6, .byte = 0xbc },
		{ .addr = 0x7f1fc7, .byte = 0xa2 },
		{ .addr = 0x7f1fc4, .byte = 0x57 },
		{ .addr = 0x7f1fc5, .byte = 0xc5 },
		{ .addr = 0x7f1fc0, .byte = 0xbc },
		{ .addr = 0x7f1fc1, .byte = 0xb5 },
		{ .addr = 0x7f1fc2, .byte = 0xb0 },
		{ .addr = 0x7f1fc3, .byte = 0x51 },
		{ .addr = 0x00000c, .byte = 0xa3 },
		{ .addr = 0x00000d, .byte = 0x5a },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x5a698e, .byte = 0x96 },
		{ .addr = 0x5a698f, .byte = 0x2b },
		{ .addr = 0x5a6990, .byte = 0x6d },
		{ .addr = 0x5a6991, .byte = 0xbd }
};

static const SST_Transaction cmpl_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5330884, .data = 50599, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331212, .data = 21814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331208, .data = 42251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331210, .data = 240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331206, .data = 48290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331204, .data = 22469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331200, .data = 48309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8331202, .data = 45137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5925262, .data = 38443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5925264, .data = 28093, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_15[] = {
		{ .addr = 0x5a2b24, .byte = 0xb4 },
		{ .addr = 0x5a2b25, .byte = 0xb7 },
		{ .addr = 0x5a2b26, .byte = 0x86 },
		{ .addr = 0x5a2b27, .byte = 0xcd },
		{ .addr = 0x5a2b28, .byte = 0x73 },
		{ .addr = 0x5a2b29, .byte = 0x56 },
		{ .addr = 0x00000c, .byte = 0x2a },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x0f },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x640f98, .byte = 0x5c },
		{ .addr = 0x640f99, .byte = 0xf3 },
		{ .addr = 0x640f9a, .byte = 0x2d },
		{ .addr = 0x640f9b, .byte = 0x88 }
};

static const SST_RamByte cmpl_final_ram_15[] = {
		{ .addr = 0x5a2b24, .byte = 0xb4 },
		{ .addr = 0x5a2b25, .byte = 0xb7 },
		{ .addr = 0x5a2b26, .byte = 0x86 },
		{ .addr = 0x5a2b27, .byte = 0xcd },
		{ .addr = 0x5a2b28, .byte = 0x73 },
		{ .addr = 0x5a2b29, .byte = 0x56 },
		{ .addr = 0xf719ae, .byte = 0x2b },
		{ .addr = 0xf719af, .byte = 0x26 },
		{ .addr = 0xf719aa, .byte = 0x22 },
		{ .addr = 0xf719ab, .byte = 0x17 },
		{ .addr = 0xf719ac, .byte = 0x00 },
		{ .addr = 0xf719ad, .byte = 0x5a },
		{ .addr = 0xf719a8, .byte = 0xb4 },
		{ .addr = 0xf719a9, .byte = 0xb7 },
		{ .addr = 0xf719a6, .byte = 0xe6 },
		{ .addr = 0xf719a7, .byte = 0xd9 },
		{ .addr = 0xf719a2, .byte = 0xb4 },
		{ .addr = 0xf719a3, .byte = 0xb5 },
		{ .addr = 0xf719a4, .byte = 0x00 },
		{ .addr = 0xf719a5, .byte = 0xf6 },
		{ .addr = 0x00000c, .byte = 0x2a },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x0f },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x640f98, .byte = 0x5c },
		{ .addr = 0x640f99, .byte = 0xf3 },
		{ .addr = 0x640f9a, .byte = 0x2d },
		{ .addr = 0x640f9b, .byte = 0x88 }
};

static const SST_Transaction cmpl_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5909288, .data = 29526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16180952, .data = 45013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16193966, .data = 11046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16193962, .data = 8727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16193964, .data = 90, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16193960, .data = 46263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16193958, .data = 59097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16193954, .data = 46261, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16193956, .data = 246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 10852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 3992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6557592, .data = 23795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6557594, .data = 11656, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t CMPL_TEST_COUNT = 16;
static const SST_TestCase cmpl[] = {
	{
		.name = "000 CMP.l (A1)+, (A6)+ bd89",
		.initial = {
			.regs = {
				2602817071, 3813811932, 4035084860, 112487151, 1127809461, 19275107, 1666006179, 2424633415, 1989085351, 2865131306, 3839278173, 3151297554, 2196693584, 4001985737, 2898117290, 7460316, 15544974, 1049, 8257522
			},
			.prefetch0 = 48521,
			.prefetch1 = 47969,
			.ram = cmpl_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2602817071, 3813811932, 4035084860, 112487151, 1127809461, 19275107, 1666006179, 2424633415, 1989085351, 2865131310, 3839278173, 3151297554, 2196693584, 4001985737, 2898117294, 7460316, 15544974, 1049, 8257524
			},
			.prefetch0 = 47969,
			.prefetch1 = 37983,
			.ram = cmpl_final_ram_0,
			.ram_len = 14,
		},
		.transactions = cmpl_transactions_0,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "001 CMP.l (d8, A5, Xn), D7 beb5",
		.initial = {
			.regs = {
				1362120846, 536987734, 488576657, 2416524076, 3216137856, 3603216361, 3823365712, 30802750, 196036938, 3330854857, 4170389249, 2967354132, 3759944096, 403351635, 3019388177, 5390366, 2957996, 41487, 10870804
			},
			.prefetch0 = 48821,
			.prefetch1 = 28187,
			.ram = cmpl_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1362120846, 536987734, 488576657, 2416524076, 3216137856, 3603216361, 3823365712, 30802750, 196036938, 3330854857, 4170389249, 2967354132, 3759944096, 403351635, 3019388177, 5390366, 2957996, 41473, 10870808
			},
			.prefetch0 = 63450,
			.prefetch1 = 50291,
			.ram = cmpl_final_ram_1,
			.ram_len = 12,
		},
		.transactions = cmpl_transactions_1,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "002 CMP.l (A6)+, D1 b29e",
		.initial = {
			.regs = {
				2840639815, 4227757821, 3570826347, 2116977896, 2563699950, 406450036, 2977729503, 2486384061, 3631823290, 1838664556, 3686470150, 721292173, 2429535577, 3045700420, 2419636620, 14100126, 4699762, 9495, 4119390
			},
			.prefetch0 = 45726,
			.prefetch1 = 30732,
			.ram = cmpl_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2840639815, 4227757821, 3570826347, 2116977896, 2563699950, 406450036, 2977729503, 2486384061, 3631823290, 1838664556, 3686470150, 721292173, 2429535577, 3045700420, 2419636624, 14100126, 4699762, 9496, 4119392
			},
			.prefetch0 = 30732,
			.prefetch1 = 26780,
			.ram = cmpl_final_ram_2,
			.ram_len = 10,
		},
		.transactions = cmpl_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 CMP.l (d16, A2), D5 baaa",
		.initial = {
			.regs = {
				1542086803, 2191452510, 2402461993, 3996455747, 827682190, 3745550285, 3265979681, 1464900302, 1878893807, 539732829, 1116475537, 3103632877, 1273934457, 564019630, 2666332317, 16552880, 11227272, 8708, 12250916
			},
			.prefetch0 = 47786,
			.prefetch1 = 62421,
			.ram = cmpl_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1542086803, 2191452510, 2402461993, 3996455747, 827682190, 3745550285, 3265979681, 1464900302, 1878893807, 539732829, 1116475537, 3103632877, 1273934457, 564019630, 2666332317, 16552880, 11227272, 8704, 12250920
			},
			.prefetch0 = 46596,
			.prefetch1 = 42159,
			.ram = cmpl_final_ram_3,
			.ram_len = 12,
		},
		.transactions = cmpl_transactions_3,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "004 CMP.l (A4)+, (A1)+ b38c",
		.initial = {
			.regs = {
				744364059, 3427635359, 2745254743, 517240280, 1290585146, 2989979385, 3337585430, 3815174707, 3647352420, 742249536, 4114703229, 1853595162, 3107214807, 2174678872, 3677311409, 15527370, 1016366, 1541, 13007164
			},
			.prefetch0 = 45964,
			.prefetch1 = 40459,
			.ram = cmpl_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				744364059, 3427635359, 2745254743, 517240280, 1290585146, 2989979385, 3337585430, 3815174707, 3647352420, 742249536, 4114703229, 1853595162, 3107214809, 2174678872, 3677311409, 15527370, 1016352, 9733, 2689380860
			},
			.prefetch0 = 52478,
			.prefetch1 = 2414,
			.ram = cmpl_final_ram_4,
			.ram_len = 26,
		},
		.transactions = cmpl_transactions_4,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "005 CMP.l (d8, A2, Xn), D7 beb2",
		.initial = {
			.regs = {
				3656988570, 639497422, 2614188212, 3553894237, 1522067107, 657954468, 3950683612, 2477939844, 731126821, 215790739, 702845703, 3649978439, 789244614, 353579472, 2005163660, 1955862, 1683432, 33030, 3262584
			},
			.prefetch0 = 48818,
			.prefetch1 = 60651,
			.ram = cmpl_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3656988570, 639497422, 2614188212, 3553894237, 1522067107, 657954468, 3950683612, 2477939844, 731126821, 215790739, 702845703, 3649978439, 789244614, 353579472, 2005163660, 1955862, 1683432, 33026, 3262588
			},
			.prefetch0 = 21483,
			.prefetch1 = 29723,
			.ram = cmpl_final_ram_5,
			.ram_len = 12,
		},
		.transactions = cmpl_transactions_5,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "006 CMP.l (d16, A4), D6 bcac",
		.initial = {
			.regs = {
				1822745740, 3452318861, 212380968, 2596477480, 3016531067, 4162048747, 2024032795, 478885838, 3382185761, 2888444539, 1696582076, 1331897504, 848521244, 4179485747, 1607674736, 5239082, 14521938, 542, 784070
			},
			.prefetch0 = 48300,
			.prefetch1 = 16725,
			.ram = cmpl_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1822745740, 3452318861, 212380968, 2596477480, 3016531067, 4162048747, 2024032795, 478885838, 3382185761, 2888444539, 1696582076, 1331897504, 848521244, 4179485747, 1607674736, 5239082, 14521924, 8734, 1308402384
			},
			.prefetch0 = 29036,
			.prefetch1 = 50594,
			.ram = cmpl_final_ram_6,
			.ram_len = 28,
		},
		.transactions = cmpl_transactions_6,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "007 CMP.l (d8, A5, Xn), D2 b4b5",
		.initial = {
			.regs = {
				3824422831, 2823170885, 1491168471, 3198292453, 2812867681, 3733042519, 73795059, 3870894232, 2317009985, 2065406968, 1604381579, 4203880603, 2694492819, 2128146703, 3388469095, 6914742, 16435302, 40968, 3345164
			},
			.prefetch0 = 46261,
			.prefetch1 = 43306,
			.ram = cmpl_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3824422831, 2823170885, 1491168471, 3198292453, 2812867681, 3733042519, 73795059, 3870894232, 2317009985, 2065406968, 1604381579, 4203880603, 2694492819, 2128146703, 3388469095, 6914742, 16435302, 40960, 3345168
			},
			.prefetch0 = 1626,
			.prefetch1 = 54184,
			.ram = cmpl_final_ram_7,
			.ram_len = 12,
		},
		.transactions = cmpl_transactions_7,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "008 CMP.l (A7)+, D7 be9f",
		.initial = {
			.regs = {
				3899093848, 78615371, 3755708347, 1240703838, 1021576825, 5594080, 2090726904, 129394085, 1347580752, 1245549931, 649978614, 138795954, 4174862207, 556882980, 289639672, 14009604, 15847642, 42263, 7771820
			},
			.prefetch0 = 48799,
			.prefetch1 = 14089,
			.ram = cmpl_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3899093848, 78615371, 3755708347, 1240703838, 1021576825, 5594080, 2090726904, 129394085, 1347580752, 1245549931, 649978614, 138795954, 4174862207, 556882980, 289639672, 14009604, 15847646, 42257, 7771822
			},
			.prefetch0 = 14089,
			.prefetch1 = 60524,
			.ram = cmpl_final_ram_8,
			.ram_len = 10,
		},
		.transactions = cmpl_transactions_8,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "009 CMP.l A2, D2 b48a",
		.initial = {
			.regs = {
				3645820805, 875086487, 2676102592, 3342734080, 2174708516, 233391367, 1763128514, 3232137836, 882376240, 3618872864, 4261171735, 3930621101, 2355519927, 3842754603, 2576611772, 815974, 12059304, 34056, 8836606
			},
			.prefetch0 = 46218,
			.prefetch1 = 7212,
			.ram = cmpl_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3645820805, 875086487, 2676102592, 3342734080, 2174708516, 233391367, 1763128514, 3232137836, 882376240, 3618872864, 4261171735, 3930621101, 2355519927, 3842754603, 2576611772, 815974, 12059304, 34057, 8836608
			},
			.prefetch0 = 7212,
			.prefetch1 = 47216,
			.ram = cmpl_final_ram_9,
			.ram_len = 6,
		},
		.transactions = cmpl_transactions_9,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "010 CMP.l (d8, A5, Xn), D5 bab5",
		.initial = {
			.regs = {
				1821709556, 340760654, 3167675320, 3149372128, 16761435, 2105171858, 1617689990, 934568276, 1746357539, 4078802292, 2696690098, 247408717, 4147914154, 1873814847, 277442716, 3231664, 7511038, 514, 16460158
			},
			.prefetch0 = 47797,
			.prefetch1 = 7655,
			.ram = cmpl_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1821709556, 340760654, 3167675320, 3149372128, 16761435, 2105171858, 1617689990, 934568276, 1746357539, 4078802292, 2696690098, 247408717, 4147914154, 1873814847, 277442716, 3231664, 7511038, 512, 16460162
			},
			.prefetch0 = 12034,
			.prefetch1 = 29592,
			.ram = cmpl_final_ram_10,
			.ram_len = 12,
		},
		.transactions = cmpl_transactions_10,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "011 CMP.l (A5)+, D2 b49d",
		.initial = {
			.regs = {
				3513772658, 861028323, 4011193998, 2263571548, 1024537007, 2343647002, 1405222415, 784288104, 1573693877, 2469747133, 611829699, 3390638200, 3528826120, 1952763651, 3809906790, 14418156, 1220340, 42509, 8539712
			},
			.prefetch0 = 46237,
			.prefetch1 = 33916,
			.ram = cmpl_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3513772658, 861028323, 4011193998, 2263571548, 1024537007, 2343647002, 1405222415, 784288104, 1573693877, 2469747133, 611829699, 3390638200, 3528826120, 1952763651, 3809906790, 14418156, 1220326, 9741, 4050282900
			},
			.prefetch0 = 53463,
			.prefetch1 = 16215,
			.ram = cmpl_final_ram_11,
			.ram_len = 26,
		},
		.transactions = cmpl_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 CMP.l (A5)+, D2 b49d",
		.initial = {
			.regs = {
				3210643860, 890640061, 2610746360, 3515163015, 21437922, 1358409081, 2571220041, 3884367933, 1115324880, 1396803162, 3863003171, 4131056255, 2895060534, 2066382859, 3591304151, 7310816, 1711618, 34078, 2677742
			},
			.prefetch0 = 46237,
			.prefetch1 = 34915,
			.ram = cmpl_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3210643860, 890640061, 2610746360, 3515163015, 21437922, 1358409081, 2571220041, 3884367933, 1115324880, 1396803162, 3863003171, 4131056255, 2895060534, 2066382859, 3591304151, 7310816, 1711604, 9502, 3467524590
			},
			.prefetch0 = 8905,
			.prefetch1 = 34970,
			.ram = cmpl_final_ram_12,
			.ram_len = 26,
		},
		.transactions = cmpl_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 CMP.l D4, D3 b684",
		.initial = {
			.regs = {
				1122622264, 30913463, 2193570889, 749812382, 508934705, 1158478083, 1491112216, 2075635164, 2122386870, 1564882768, 290486174, 3171259123, 2831084246, 3329114842, 1540067148, 2898222, 4718178, 41995, 280280
			},
			.prefetch0 = 46724,
			.prefetch1 = 24894,
			.ram = cmpl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1122622264, 30913463, 2193570889, 749812382, 508934705, 1158478083, 1491112216, 2075635164, 2122386870, 1564882768, 290486174, 3171259123, 2831084246, 3329114842, 1540067148, 2898222, 4718178, 41984, 280282
			},
			.prefetch0 = 24894,
			.prefetch1 = 10965,
			.ram = cmpl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = cmpl_transactions_13,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "014 CMP.l -(A2), D6 bca2",
		.initial = {
			.regs = {
				3559386991, 923844128, 969103906, 3395643052, 2264851991, 3026516380, 3561935958, 2163899531, 1165788950, 2903226924, 2958120905, 2109588159, 903686097, 316027548, 3071035238, 11072826, 8331214, 42251, 15750456
			},
			.prefetch0 = 48290,
			.prefetch1 = 63751,
			.ram = cmpl_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3559386991, 923844128, 969103906, 3395643052, 2264851991, 3026516380, 3561935958, 2163899531, 1165788950, 2903226924, 2958120901, 2109588159, 903686097, 316027548, 3071035238, 11072826, 8331200, 9483, 2740611474
			},
			.prefetch0 = 38443,
			.prefetch1 = 28093,
			.ram = cmpl_final_ram_14,
			.ram_len = 26,
		},
		.transactions = cmpl_transactions_14,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "015 CMP.l (d8, A7, Xn), D2 b4b7",
		.initial = {
			.regs = {
				111429891, 3001509630, 3879239279, 29005034, 633457432, 2386772344, 2357916390, 2147151566, 3984379228, 85480011, 3684556922, 1049210640, 1449037086, 3588064380, 2057657309, 9727860, 16193968, 8727, 5909288
			},
			.prefetch0 = 46263,
			.prefetch1 = 34509,
			.ram = cmpl_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				111429891, 3001509630, 3879239279, 29005034, 633457432, 2386772344, 2357916390, 2147151566, 3984379228, 85480011, 3684556922, 1049210640, 1449037086, 3588064380, 2057657309, 9727860, 16193954, 8727, 711200668
			},
			.prefetch0 = 23795,
			.prefetch1 = 11656,
			.ram = cmpl_final_ram_15,
			.ram_len = 28,
		},
		.transactions = cmpl_transactions_15,
		.transactions_len = 16,
		.lenght = 64,
	},
};

#endif /* RBT_CMPL_H */