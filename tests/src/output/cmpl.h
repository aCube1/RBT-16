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

static const SST_RamByte cmpl_initial_ram_16[] = {
		{ .addr = 0xf65842, .byte = 0xb0 },
		{ .addr = 0xf65843, .byte = 0x8f },
		{ .addr = 0xf65844, .byte = 0x73 },
		{ .addr = 0xf65845, .byte = 0xf7 },
		{ .addr = 0xf65846, .byte = 0xf3 },
		{ .addr = 0xf65847, .byte = 0xeb }
};

static const SST_RamByte cmpl_final_ram_16[] = {
		{ .addr = 0xf65842, .byte = 0xb0 },
		{ .addr = 0xf65843, .byte = 0x8f },
		{ .addr = 0xf65844, .byte = 0x73 },
		{ .addr = 0xf65845, .byte = 0xf7 },
		{ .addr = 0xf65846, .byte = 0xf3 },
		{ .addr = 0xf65847, .byte = 0xeb }
};

static const SST_Transaction cmpl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16144454, .data = 62443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_17[] = {
		{ .addr = 0x2d0302, .byte = 0xbc },
		{ .addr = 0x2d0303, .byte = 0xbb },
		{ .addr = 0x2d0304, .byte = 0x5b },
		{ .addr = 0x2d0305, .byte = 0x09 },
		{ .addr = 0x2d0306, .byte = 0x92 },
		{ .addr = 0x2d0307, .byte = 0x7e },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0xee },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x6eeedc, .byte = 0x9a },
		{ .addr = 0x6eeedd, .byte = 0x32 },
		{ .addr = 0x6eeede, .byte = 0xa6 },
		{ .addr = 0x6eeedf, .byte = 0x69 }
};

static const SST_RamByte cmpl_final_ram_17[] = {
		{ .addr = 0x2d0302, .byte = 0xbc },
		{ .addr = 0x2d0303, .byte = 0xbb },
		{ .addr = 0x2d0304, .byte = 0x5b },
		{ .addr = 0x2d0305, .byte = 0x09 },
		{ .addr = 0x2d0306, .byte = 0x92 },
		{ .addr = 0x2d0307, .byte = 0x7e },
		{ .addr = 0x743c6a, .byte = 0x03 },
		{ .addr = 0x743c6b, .byte = 0x04 },
		{ .addr = 0x743c66, .byte = 0x85 },
		{ .addr = 0x743c67, .byte = 0x03 },
		{ .addr = 0x743c68, .byte = 0x00 },
		{ .addr = 0x743c69, .byte = 0x2d },
		{ .addr = 0x743c64, .byte = 0xbc },
		{ .addr = 0x743c65, .byte = 0xbb },
		{ .addr = 0x743c62, .byte = 0xc7 },
		{ .addr = 0x743c63, .byte = 0x05 },
		{ .addr = 0x743c5e, .byte = 0xbc },
		{ .addr = 0x743c5f, .byte = 0xb2 },
		{ .addr = 0x743c60, .byte = 0x12 },
		{ .addr = 0x743c61, .byte = 0x08 },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0xee },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x6eeedc, .byte = 0x9a },
		{ .addr = 0x6eeedd, .byte = 0x32 },
		{ .addr = 0x6eeede, .byte = 0xa6 },
		{ .addr = 0x6eeedf, .byte = 0x69 }
};

static const SST_Transaction cmpl_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2949894, .data = 37502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 575236, .data = 23332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7617642, .data = 772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7617638, .data = 34051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7617640, .data = 45, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7617636, .data = 48315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7617634, .data = 50949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7617630, .data = 48306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7617632, .data = 4616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7270108, .data = 39474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7270110, .data = 42601, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_18[] = {
		{ .addr = 0x0397dc, .byte = 0xbc },
		{ .addr = 0x0397dd, .byte = 0xb8 },
		{ .addr = 0x0397de, .byte = 0xa1 },
		{ .addr = 0x0397df, .byte = 0x7d },
		{ .addr = 0x0397e0, .byte = 0xac },
		{ .addr = 0x0397e1, .byte = 0xee },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0x82 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x50828a, .byte = 0x83 },
		{ .addr = 0x50828b, .byte = 0x29 },
		{ .addr = 0x50828c, .byte = 0xf7 },
		{ .addr = 0x50828d, .byte = 0xb9 }
};

static const SST_RamByte cmpl_final_ram_18[] = {
		{ .addr = 0x0397dc, .byte = 0xbc },
		{ .addr = 0x0397dd, .byte = 0xb8 },
		{ .addr = 0x0397de, .byte = 0xa1 },
		{ .addr = 0x0397df, .byte = 0x7d },
		{ .addr = 0x0397e0, .byte = 0xac },
		{ .addr = 0x0397e1, .byte = 0xee },
		{ .addr = 0x7aef86, .byte = 0x97 },
		{ .addr = 0x7aef87, .byte = 0xe0 },
		{ .addr = 0x7aef82, .byte = 0x24 },
		{ .addr = 0x7aef83, .byte = 0x04 },
		{ .addr = 0x7aef84, .byte = 0x00 },
		{ .addr = 0x7aef85, .byte = 0x03 },
		{ .addr = 0x7aef80, .byte = 0xbc },
		{ .addr = 0x7aef81, .byte = 0xb8 },
		{ .addr = 0x7aef7e, .byte = 0xa1 },
		{ .addr = 0x7aef7f, .byte = 0x7d },
		{ .addr = 0x7aef7a, .byte = 0xbc },
		{ .addr = 0x7aef7b, .byte = 0xb5 },
		{ .addr = 0x7aef7c, .byte = 0xff },
		{ .addr = 0x7aef7d, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0xa7 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0x82 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x50828a, .byte = 0x83 },
		{ .addr = 0x50828b, .byte = 0x29 },
		{ .addr = 0x50828c, .byte = 0xf7 },
		{ .addr = 0x50828d, .byte = 0xb9 }
};

static const SST_Transaction cmpl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 235488, .data = 44270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16753020, .data = 52478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8056710, .data = 38880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8056706, .data = 9220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8056708, .data = 3, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8056704, .data = 48312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8056702, .data = 41341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8056698, .data = 48309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8056700, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5276298, .data = 33577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5276300, .data = 63417, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_19[] = {
		{ .addr = 0xafeeb4, .byte = 0xbe },
		{ .addr = 0xafeeb5, .byte = 0xb4 },
		{ .addr = 0xafeeb6, .byte = 0x19 },
		{ .addr = 0xafeeb7, .byte = 0x25 },
		{ .addr = 0xafeeb8, .byte = 0xb8 },
		{ .addr = 0xafeeb9, .byte = 0xb3 },
		{ .addr = 0x00000c, .byte = 0xb9 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xc8e38a, .byte = 0xdc },
		{ .addr = 0xc8e38b, .byte = 0xb8 },
		{ .addr = 0xc8e38c, .byte = 0x2c },
		{ .addr = 0xc8e38d, .byte = 0x62 }
};

static const SST_RamByte cmpl_final_ram_19[] = {
		{ .addr = 0xafeeb4, .byte = 0xbe },
		{ .addr = 0xafeeb5, .byte = 0xb4 },
		{ .addr = 0xafeeb6, .byte = 0x19 },
		{ .addr = 0xafeeb7, .byte = 0x25 },
		{ .addr = 0xafeeb8, .byte = 0xb8 },
		{ .addr = 0xafeeb9, .byte = 0xb3 },
		{ .addr = 0x5d75d8, .byte = 0xee },
		{ .addr = 0x5d75d9, .byte = 0xb6 },
		{ .addr = 0x5d75d4, .byte = 0x80 },
		{ .addr = 0x5d75d5, .byte = 0x1f },
		{ .addr = 0x5d75d6, .byte = 0x00 },
		{ .addr = 0x5d75d7, .byte = 0xaf },
		{ .addr = 0x5d75d2, .byte = 0xbe },
		{ .addr = 0x5d75d3, .byte = 0xb4 },
		{ .addr = 0x5d75d0, .byte = 0x62 },
		{ .addr = 0x5d75d1, .byte = 0x57 },
		{ .addr = 0x5d75cc, .byte = 0xbe },
		{ .addr = 0x5d75cd, .byte = 0xb1 },
		{ .addr = 0x5d75ce, .byte = 0x44 },
		{ .addr = 0x5d75cf, .byte = 0xb1 },
		{ .addr = 0x00000c, .byte = 0xb9 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xc8e38a, .byte = 0xdc },
		{ .addr = 0xc8e38b, .byte = 0xb8 },
		{ .addr = 0xc8e38c, .byte = 0x2c },
		{ .addr = 0xc8e38d, .byte = 0x62 }
};

static const SST_Transaction cmpl_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11529912, .data = 47283, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11625046, .data = 58680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6125016, .data = 61110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6125012, .data = 32799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6125014, .data = 175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6125010, .data = 48820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6125008, .data = 25175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6125004, .data = 48817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6125006, .data = 17585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13165450, .data = 56504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13165452, .data = 11362, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_20[] = {
		{ .addr = 0x489d6e, .byte = 0xb5 },
		{ .addr = 0x489d6f, .byte = 0x8c },
		{ .addr = 0x489d70, .byte = 0x0d },
		{ .addr = 0x489d71, .byte = 0x8d },
		{ .addr = 0x0f2548, .byte = 0x45 },
		{ .addr = 0x0f2549, .byte = 0x26 },
		{ .addr = 0x0f254a, .byte = 0xdb },
		{ .addr = 0x0f254b, .byte = 0x1c },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xb9 },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0xbab956, .byte = 0x69 },
		{ .addr = 0xbab957, .byte = 0xed },
		{ .addr = 0xbab958, .byte = 0xca },
		{ .addr = 0xbab959, .byte = 0xf4 }
};

static const SST_RamByte cmpl_final_ram_20[] = {
		{ .addr = 0x489d6e, .byte = 0xb5 },
		{ .addr = 0x489d6f, .byte = 0x8c },
		{ .addr = 0x489d70, .byte = 0x0d },
		{ .addr = 0x489d71, .byte = 0x8d },
		{ .addr = 0x0f2548, .byte = 0x45 },
		{ .addr = 0x0f2549, .byte = 0x26 },
		{ .addr = 0x0f254a, .byte = 0xdb },
		{ .addr = 0x0f254b, .byte = 0x1c },
		{ .addr = 0x679506, .byte = 0x9d },
		{ .addr = 0x679507, .byte = 0x72 },
		{ .addr = 0x679502, .byte = 0x27 },
		{ .addr = 0x679503, .byte = 0x04 },
		{ .addr = 0x679504, .byte = 0x00 },
		{ .addr = 0x679505, .byte = 0x48 },
		{ .addr = 0x679500, .byte = 0xb5 },
		{ .addr = 0x679501, .byte = 0x8c },
		{ .addr = 0x6794fe, .byte = 0xed },
		{ .addr = 0x6794ff, .byte = 0xd7 },
		{ .addr = 0x6794fa, .byte = 0xb5 },
		{ .addr = 0x6794fb, .byte = 0x95 },
		{ .addr = 0x6794fc, .byte = 0xe2 },
		{ .addr = 0x6794fd, .byte = 0xd3 },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xb9 },
		{ .addr = 0x00000f, .byte = 0x56 },
		{ .addr = 0xbab956, .byte = 0x69 },
		{ .addr = 0xbab957, .byte = 0xed },
		{ .addr = 0xbab958, .byte = 0xca },
		{ .addr = 0xbab959, .byte = 0xf4 }
};

static const SST_Transaction cmpl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 992584, .data = 17702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 992586, .data = 56092, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13888982, .data = 50261, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6788358, .data = 40306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6788354, .data = 9988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6788356, .data = 72, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6788352, .data = 46476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6788350, .data = 60887, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6788346, .data = 46485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6788348, .data = 58067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 47446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12237142, .data = 27117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12237144, .data = 51956, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_21[] = {
		{ .addr = 0x0404ce, .byte = 0xbc },
		{ .addr = 0x0404cf, .byte = 0xb7 },
		{ .addr = 0x0404d0, .byte = 0x22 },
		{ .addr = 0x0404d1, .byte = 0x9d },
		{ .addr = 0x0404d2, .byte = 0x6c },
		{ .addr = 0x0404d3, .byte = 0x19 },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0xab },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x68ab2c, .byte = 0x44 },
		{ .addr = 0x68ab2d, .byte = 0x10 },
		{ .addr = 0x68ab2e, .byte = 0x27 },
		{ .addr = 0x68ab2f, .byte = 0x3c }
};

static const SST_RamByte cmpl_final_ram_21[] = {
		{ .addr = 0x0404ce, .byte = 0xbc },
		{ .addr = 0x0404cf, .byte = 0xb7 },
		{ .addr = 0x0404d0, .byte = 0x22 },
		{ .addr = 0x0404d1, .byte = 0x9d },
		{ .addr = 0x0404d2, .byte = 0x6c },
		{ .addr = 0x0404d3, .byte = 0x19 },
		{ .addr = 0xbb18a2, .byte = 0x04 },
		{ .addr = 0xbb18a3, .byte = 0xd0 },
		{ .addr = 0xbb189e, .byte = 0x81 },
		{ .addr = 0xbb189f, .byte = 0x09 },
		{ .addr = 0xbb18a0, .byte = 0x00 },
		{ .addr = 0xbb18a1, .byte = 0x04 },
		{ .addr = 0xbb189c, .byte = 0xbc },
		{ .addr = 0xbb189d, .byte = 0xb7 },
		{ .addr = 0xbb189a, .byte = 0x1d },
		{ .addr = 0xbb189b, .byte = 0x79 },
		{ .addr = 0xbb1896, .byte = 0xbc },
		{ .addr = 0xbb1897, .byte = 0xb1 },
		{ .addr = 0xbb1898, .byte = 0x00 },
		{ .addr = 0xbb1899, .byte = 0x96 },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0x68 },
		{ .addr = 0x00000e, .byte = 0xab },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x68ab2c, .byte = 0x44 },
		{ .addr = 0x68ab2d, .byte = 0x10 },
		{ .addr = 0x68ab2e, .byte = 0x27 },
		{ .addr = 0x68ab2f, .byte = 0x3c }
};

static const SST_Transaction cmpl_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 263378, .data = 27673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9837944, .data = 40856, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12261538, .data = 1232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12261534, .data = 33033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12261536, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12261532, .data = 48311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12261530, .data = 7545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12261526, .data = 48305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12261528, .data = 150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6859564, .data = 17424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6859566, .data = 10044, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_22[] = {
		{ .addr = 0x2b2dd4, .byte = 0xb0 },
		{ .addr = 0x2b2dd5, .byte = 0x8d },
		{ .addr = 0x2b2dd6, .byte = 0x85 },
		{ .addr = 0x2b2dd7, .byte = 0xa8 },
		{ .addr = 0x2b2dd8, .byte = 0x54 },
		{ .addr = 0x2b2dd9, .byte = 0xe2 }
};

static const SST_RamByte cmpl_final_ram_22[] = {
		{ .addr = 0x2b2dd4, .byte = 0xb0 },
		{ .addr = 0x2b2dd5, .byte = 0x8d },
		{ .addr = 0x2b2dd6, .byte = 0x85 },
		{ .addr = 0x2b2dd7, .byte = 0xa8 },
		{ .addr = 0x2b2dd8, .byte = 0x54 },
		{ .addr = 0x2b2dd9, .byte = 0xe2 }
};

static const SST_Transaction cmpl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2829784, .data = 21730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_23[] = {
		{ .addr = 0xfe3288, .byte = 0xbe },
		{ .addr = 0xfe3289, .byte = 0xa6 },
		{ .addr = 0xfe328a, .byte = 0x8c },
		{ .addr = 0xfe328b, .byte = 0x8d },
		{ .addr = 0x00000c, .byte = 0x80 },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x70 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xf67028, .byte = 0xc3 },
		{ .addr = 0xf67029, .byte = 0xca },
		{ .addr = 0xf6702a, .byte = 0xbb },
		{ .addr = 0xf6702b, .byte = 0x89 }
};

static const SST_RamByte cmpl_final_ram_23[] = {
		{ .addr = 0xfe3288, .byte = 0xbe },
		{ .addr = 0xfe3289, .byte = 0xa6 },
		{ .addr = 0xfe328a, .byte = 0x8c },
		{ .addr = 0xfe328b, .byte = 0x8d },
		{ .addr = 0x1cad28, .byte = 0x32 },
		{ .addr = 0x1cad29, .byte = 0x8a },
		{ .addr = 0x1cad24, .byte = 0x84 },
		{ .addr = 0x1cad25, .byte = 0x1e },
		{ .addr = 0x1cad26, .byte = 0x00 },
		{ .addr = 0x1cad27, .byte = 0xfe },
		{ .addr = 0x1cad22, .byte = 0xbe },
		{ .addr = 0x1cad23, .byte = 0xa6 },
		{ .addr = 0x1cad20, .byte = 0x3f },
		{ .addr = 0x1cad21, .byte = 0xbb },
		{ .addr = 0x1cad1c, .byte = 0xbe },
		{ .addr = 0x1cad1d, .byte = 0xb1 },
		{ .addr = 0x1cad1e, .byte = 0x22 },
		{ .addr = 0x1cad1f, .byte = 0xbd },
		{ .addr = 0x00000c, .byte = 0x80 },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x70 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xf67028, .byte = 0xc3 },
		{ .addr = 0xf67029, .byte = 0xca },
		{ .addr = 0xf6702a, .byte = 0xbb },
		{ .addr = 0xf6702b, .byte = 0x89 }
};

static const SST_Transaction cmpl_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12402618, .data = 51272, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1879336, .data = 12938, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1879332, .data = 33822, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1879334, .data = 254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1879330, .data = 48806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1879328, .data = 16315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1879324, .data = 48817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1879326, .data = 8893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 28712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16150568, .data = 50122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16150570, .data = 48009, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_24[] = {
		{ .addr = 0x8728c0, .byte = 0xb4 },
		{ .addr = 0x8728c1, .byte = 0xb9 },
		{ .addr = 0x8728c2, .byte = 0x2b },
		{ .addr = 0x8728c3, .byte = 0x93 },
		{ .addr = 0x8728c4, .byte = 0x65 },
		{ .addr = 0x8728c5, .byte = 0x18 },
		{ .addr = 0x8728c6, .byte = 0x9b },
		{ .addr = 0x8728c7, .byte = 0x89 },
		{ .addr = 0x936518, .byte = 0x5b },
		{ .addr = 0x936519, .byte = 0xf6 },
		{ .addr = 0x93651a, .byte = 0x31 },
		{ .addr = 0x93651b, .byte = 0x0c },
		{ .addr = 0x8728c8, .byte = 0x90 },
		{ .addr = 0x8728c9, .byte = 0x4e }
};

static const SST_RamByte cmpl_final_ram_24[] = {
		{ .addr = 0x8728c0, .byte = 0xb4 },
		{ .addr = 0x8728c1, .byte = 0xb9 },
		{ .addr = 0x8728c2, .byte = 0x2b },
		{ .addr = 0x8728c3, .byte = 0x93 },
		{ .addr = 0x8728c4, .byte = 0x65 },
		{ .addr = 0x8728c5, .byte = 0x18 },
		{ .addr = 0x8728c6, .byte = 0x9b },
		{ .addr = 0x8728c7, .byte = 0x89 },
		{ .addr = 0x936518, .byte = 0x5b },
		{ .addr = 0x936519, .byte = 0xf6 },
		{ .addr = 0x93651a, .byte = 0x31 },
		{ .addr = 0x93651b, .byte = 0x0c },
		{ .addr = 0x8728c8, .byte = 0x90 },
		{ .addr = 0x8728c9, .byte = 0x4e }
};

static const SST_Transaction cmpl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8857796, .data = 25880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8857798, .data = 39817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9659672, .data = 23542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9659674, .data = 12556, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8857800, .data = 36942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_25[] = {
		{ .addr = 0xa1d780, .byte = 0xb2 },
		{ .addr = 0xa1d781, .byte = 0xbb },
		{ .addr = 0xa1d782, .byte = 0x77 },
		{ .addr = 0xa1d783, .byte = 0xe5 },
		{ .addr = 0xa1d784, .byte = 0x18 },
		{ .addr = 0xa1d785, .byte = 0x74 },
		{ .addr = 0x00000c, .byte = 0x49 },
		{ .addr = 0x00000d, .byte = 0xdc },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xdc4654, .byte = 0x57 },
		{ .addr = 0xdc4655, .byte = 0x44 },
		{ .addr = 0xdc4656, .byte = 0x50 },
		{ .addr = 0xdc4657, .byte = 0x30 }
};

static const SST_RamByte cmpl_final_ram_25[] = {
		{ .addr = 0xa1d780, .byte = 0xb2 },
		{ .addr = 0xa1d781, .byte = 0xbb },
		{ .addr = 0xa1d782, .byte = 0x77 },
		{ .addr = 0xa1d783, .byte = 0xe5 },
		{ .addr = 0xa1d784, .byte = 0x18 },
		{ .addr = 0xa1d785, .byte = 0x74 },
		{ .addr = 0x5018d4, .byte = 0xd7 },
		{ .addr = 0x5018d5, .byte = 0x82 },
		{ .addr = 0x5018d0, .byte = 0xa6 },
		{ .addr = 0x5018d1, .byte = 0x17 },
		{ .addr = 0x5018d2, .byte = 0x00 },
		{ .addr = 0x5018d3, .byte = 0xa1 },
		{ .addr = 0x5018ce, .byte = 0xb2 },
		{ .addr = 0x5018cf, .byte = 0xbb },
		{ .addr = 0x5018cc, .byte = 0x1d },
		{ .addr = 0x5018cd, .byte = 0x87 },
		{ .addr = 0x5018c8, .byte = 0xb2 },
		{ .addr = 0x5018c9, .byte = 0xb6 },
		{ .addr = 0x5018ca, .byte = 0x00 },
		{ .addr = 0x5018cb, .byte = 0xa2 },
		{ .addr = 0x00000c, .byte = 0x49 },
		{ .addr = 0x00000d, .byte = 0xdc },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xdc4654, .byte = 0x57 },
		{ .addr = 0xdc4655, .byte = 0x44 },
		{ .addr = 0xdc4656, .byte = 0x50 },
		{ .addr = 0xdc4657, .byte = 0x30 }
};

static const SST_Transaction cmpl_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10606468, .data = 6260, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10624390, .data = 54227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5249236, .data = 55170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5249232, .data = 42519, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5249234, .data = 161, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5249230, .data = 45755, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5249228, .data = 7559, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5249224, .data = 45750, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5249226, .data = 162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 18908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14435924, .data = 22340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14435926, .data = 20528, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_26[] = {
		{ .addr = 0x462746, .byte = 0xb8 },
		{ .addr = 0x462747, .byte = 0x82 },
		{ .addr = 0x462748, .byte = 0x5f },
		{ .addr = 0x462749, .byte = 0x42 },
		{ .addr = 0x46274a, .byte = 0xab },
		{ .addr = 0x46274b, .byte = 0xe8 }
};

static const SST_RamByte cmpl_final_ram_26[] = {
		{ .addr = 0x462746, .byte = 0xb8 },
		{ .addr = 0x462747, .byte = 0x82 },
		{ .addr = 0x462748, .byte = 0x5f },
		{ .addr = 0x462749, .byte = 0x42 },
		{ .addr = 0x46274a, .byte = 0xab },
		{ .addr = 0x46274b, .byte = 0xe8 }
};

static const SST_Transaction cmpl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4597578, .data = 44008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_27[] = {
		{ .addr = 0x080e46, .byte = 0xb4 },
		{ .addr = 0x080e47, .byte = 0x8f },
		{ .addr = 0x080e48, .byte = 0xf1 },
		{ .addr = 0x080e49, .byte = 0x30 },
		{ .addr = 0x080e4a, .byte = 0x56 },
		{ .addr = 0x080e4b, .byte = 0x43 }
};

static const SST_RamByte cmpl_final_ram_27[] = {
		{ .addr = 0x080e46, .byte = 0xb4 },
		{ .addr = 0x080e47, .byte = 0x8f },
		{ .addr = 0x080e48, .byte = 0xf1 },
		{ .addr = 0x080e49, .byte = 0x30 },
		{ .addr = 0x080e4a, .byte = 0x56 },
		{ .addr = 0x080e4b, .byte = 0x43 }
};

static const SST_Transaction cmpl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 527946, .data = 22083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_28[] = {
		{ .addr = 0x33679e, .byte = 0xb4 },
		{ .addr = 0x33679f, .byte = 0xb0 },
		{ .addr = 0x3367a0, .byte = 0x84 },
		{ .addr = 0x3367a1, .byte = 0x96 },
		{ .addr = 0x3367a2, .byte = 0xb2 },
		{ .addr = 0x3367a3, .byte = 0x64 },
		{ .addr = 0xcc9c60, .byte = 0x85 },
		{ .addr = 0xcc9c61, .byte = 0x1b },
		{ .addr = 0xcc9c62, .byte = 0xf9 },
		{ .addr = 0xcc9c63, .byte = 0xdf },
		{ .addr = 0x3367a4, .byte = 0x29 },
		{ .addr = 0x3367a5, .byte = 0x41 }
};

static const SST_RamByte cmpl_final_ram_28[] = {
		{ .addr = 0x33679e, .byte = 0xb4 },
		{ .addr = 0x33679f, .byte = 0xb0 },
		{ .addr = 0x3367a0, .byte = 0x84 },
		{ .addr = 0x3367a1, .byte = 0x96 },
		{ .addr = 0x3367a2, .byte = 0xb2 },
		{ .addr = 0x3367a3, .byte = 0x64 },
		{ .addr = 0xcc9c60, .byte = 0x85 },
		{ .addr = 0xcc9c61, .byte = 0x1b },
		{ .addr = 0xcc9c62, .byte = 0xf9 },
		{ .addr = 0xcc9c63, .byte = 0xdf },
		{ .addr = 0x3367a4, .byte = 0x29 },
		{ .addr = 0x3367a5, .byte = 0x41 }
};

static const SST_Transaction cmpl_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3368866, .data = 45668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13409376, .data = 34075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13409378, .data = 63967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3368868, .data = 10561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_29[] = {
		{ .addr = 0xe2b944, .byte = 0xbe },
		{ .addr = 0xe2b945, .byte = 0x89 },
		{ .addr = 0xe2b946, .byte = 0x26 },
		{ .addr = 0xe2b947, .byte = 0x52 },
		{ .addr = 0xe2b948, .byte = 0x61 },
		{ .addr = 0xe2b949, .byte = 0x34 }
};

static const SST_RamByte cmpl_final_ram_29[] = {
		{ .addr = 0xe2b944, .byte = 0xbe },
		{ .addr = 0xe2b945, .byte = 0x89 },
		{ .addr = 0xe2b946, .byte = 0x26 },
		{ .addr = 0xe2b947, .byte = 0x52 },
		{ .addr = 0xe2b948, .byte = 0x61 },
		{ .addr = 0xe2b949, .byte = 0x34 }
};

static const SST_Transaction cmpl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14858568, .data = 24884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte cmpl_initial_ram_30[] = {
		{ .addr = 0x7a9778, .byte = 0xbc },
		{ .addr = 0x7a9779, .byte = 0x96 },
		{ .addr = 0x7a977a, .byte = 0x61 },
		{ .addr = 0x7a977b, .byte = 0x2c },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0xbd },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0x8cbd12, .byte = 0x6f },
		{ .addr = 0x8cbd13, .byte = 0x7a },
		{ .addr = 0x8cbd14, .byte = 0xa0 },
		{ .addr = 0x8cbd15, .byte = 0xee }
};

static const SST_RamByte cmpl_final_ram_30[] = {
		{ .addr = 0x7a9778, .byte = 0xbc },
		{ .addr = 0x7a9779, .byte = 0x96 },
		{ .addr = 0x7a977a, .byte = 0x61 },
		{ .addr = 0x7a977b, .byte = 0x2c },
		{ .addr = 0xe8e742, .byte = 0x97 },
		{ .addr = 0xe8e743, .byte = 0x7a },
		{ .addr = 0xe8e73e, .byte = 0x82 },
		{ .addr = 0xe8e73f, .byte = 0x1c },
		{ .addr = 0xe8e740, .byte = 0x00 },
		{ .addr = 0xe8e741, .byte = 0x7a },
		{ .addr = 0xe8e73c, .byte = 0xbc },
		{ .addr = 0xe8e73d, .byte = 0x96 },
		{ .addr = 0xe8e73a, .byte = 0x7e },
		{ .addr = 0xe8e73b, .byte = 0x2b },
		{ .addr = 0xe8e736, .byte = 0xbc },
		{ .addr = 0xe8e737, .byte = 0x91 },
		{ .addr = 0xe8e738, .byte = 0x97 },
		{ .addr = 0xe8e739, .byte = 0x04 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0xbd },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0x8cbd12, .byte = 0x6f },
		{ .addr = 0x8cbd13, .byte = 0x7a },
		{ .addr = 0x8cbd14, .byte = 0xa0 },
		{ .addr = 0x8cbd15, .byte = 0xee }
};

static const SST_Transaction cmpl_transactions_30[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 294442, .data = 13661, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263554, .data = 38778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263550, .data = 33308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263552, .data = 122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263548, .data = 48278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263546, .data = 32299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263542, .data = 48273, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15263544, .data = 38660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9223442, .data = 28538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9223444, .data = 41198, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpl_initial_ram_31[] = {
		{ .addr = 0x954a5c, .byte = 0x0c },
		{ .addr = 0x954a5d, .byte = 0xa6 },
		{ .addr = 0x954a5e, .byte = 0x26 },
		{ .addr = 0x954a5f, .byte = 0xc0 },
		{ .addr = 0x954a60, .byte = 0x4f },
		{ .addr = 0x954a61, .byte = 0xfa },
		{ .addr = 0x954a62, .byte = 0xcf },
		{ .addr = 0x954a63, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0xec },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x06 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0x1a06b4, .byte = 0x13 },
		{ .addr = 0x1a06b5, .byte = 0xbc },
		{ .addr = 0x1a06b6, .byte = 0x66 },
		{ .addr = 0x1a06b7, .byte = 0x07 }
};

static const SST_RamByte cmpl_final_ram_31[] = {
		{ .addr = 0x954a5c, .byte = 0x0c },
		{ .addr = 0x954a5d, .byte = 0xa6 },
		{ .addr = 0x954a5e, .byte = 0x26 },
		{ .addr = 0x954a5f, .byte = 0xc0 },
		{ .addr = 0x954a60, .byte = 0x4f },
		{ .addr = 0x954a61, .byte = 0xfa },
		{ .addr = 0x954a62, .byte = 0xcf },
		{ .addr = 0x954a63, .byte = 0x1f },
		{ .addr = 0xf9330c, .byte = 0x4a },
		{ .addr = 0xf9330d, .byte = 0x62 },
		{ .addr = 0xf93308, .byte = 0xa0 },
		{ .addr = 0xf93309, .byte = 0x0c },
		{ .addr = 0xf9330a, .byte = 0x00 },
		{ .addr = 0xf9330b, .byte = 0x95 },
		{ .addr = 0xf93306, .byte = 0x0c },
		{ .addr = 0xf93307, .byte = 0xa6 },
		{ .addr = 0xf93304, .byte = 0x22 },
		{ .addr = 0xf93305, .byte = 0x3b },
		{ .addr = 0xf93300, .byte = 0x0c },
		{ .addr = 0xf93301, .byte = 0xb5 },
		{ .addr = 0xf93302, .byte = 0x76 },
		{ .addr = 0xf93303, .byte = 0xd2 },
		{ .addr = 0x00000c, .byte = 0xec },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x06 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0x1a06b4, .byte = 0x13 },
		{ .addr = 0x1a06b5, .byte = 0xbc },
		{ .addr = 0x1a06b6, .byte = 0x66 },
		{ .addr = 0x1a06b7, .byte = 0x07 }
};

static const SST_Transaction cmpl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9783904, .data = 20474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9783906, .data = 53023, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13771322, .data = 39898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16331532, .data = 19042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16331528, .data = 40972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16331530, .data = 149, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16331526, .data = 3238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16331524, .data = 8763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16331520, .data = 3253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16331522, .data = 30418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1705652, .data = 5052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1705654, .data = 26119, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 CMP.l A7, D0 b08f",
		.initial = {
			.regs = {
				2905472035, 1978062789, 1420887144, 2686022656, 142579421, 1243455901, 1837587589, 4016742083, 83688486, 3198259526, 2599971233, 556305258, 365636638, 990057610, 2614565650, 8071176, 11292342, 8207, 16144454
			},
			.prefetch0 = 45199,
			.prefetch1 = 29687,
			.ram = cmpl_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2905472035, 1978062789, 1420887144, 2686022656, 142579421, 1243455901, 1837587589, 4016742083, 83688486, 3198259526, 2599971233, 556305258, 365636638, 990057610, 2614565650, 8071176, 11292342, 8200, 16144456
			},
			.prefetch0 = 29687,
			.prefetch1 = 62443,
			.ram = cmpl_final_ram_16,
			.ram_len = 6,
		},
		.transactions = cmpl_transactions_16,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "017 CMP.l (d8, PC, Xn), D6 bcbb",
		.initial = {
			.regs = {
				1612498781, 3564682178, 2581880475, 2807823760, 962154051, 299615224, 1228879427, 1568223332, 3754062769, 567632706, 3710397747, 3745596215, 97122689, 3790300334, 3613013289, 1135058, 7617644, 34051, 2949894
			},
			.prefetch0 = 48315,
			.prefetch1 = 23305,
			.ram = cmpl_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1612498781, 3564682178, 2581880475, 2807823760, 962154051, 299615224, 1228879427, 1568223332, 3754062769, 567632706, 3710397747, 3745596215, 97122689, 3790300334, 3613013289, 1135058, 7617630, 9475, 2809065184
			},
			.prefetch0 = 39474,
			.prefetch1 = 42601,
			.ram = cmpl_final_ram_17,
			.ram_len = 28,
		},
		.transactions = cmpl_transactions_17,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "018 CMP.l (xxx).w, D6 bcb8",
		.initial = {
			.regs = {
				1544341042, 3093707742, 4032469118, 2534081696, 3182273171, 1064670643, 3797137664, 4039620029, 543027105, 462107152, 284712274, 3360909121, 2691802820, 215197579, 1412168648, 1734324, 8056712, 9220, 235488
			},
			.prefetch0 = 48312,
			.prefetch1 = 41341,
			.ram = cmpl_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1544341042, 3093707742, 4032469118, 2534081696, 3182273171, 1064670643, 3797137664, 4039620029, 543027105, 462107152, 284712274, 3360909121, 2691802820, 215197579, 1412168648, 1734324, 8056698, 9220, 2807071374
			},
			.prefetch0 = 33577,
			.prefetch1 = 63417,
			.ram = cmpl_final_ram_18,
			.ram_len = 28,
		},
		.transactions = cmpl_transactions_18,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "019 CMP.l (d8, A4, Xn), D7 beb4",
		.initial = {
			.regs = {
				2823337123, 1010981152, 1877625244, 2619707110, 4166511350, 1048051350, 2282977147, 1636886438, 1529897613, 356883634, 3605471527, 454102395, 141494546, 1986342317, 689774955, 12981600, 6125018, 32799, 11529912
			},
			.prefetch0 = 48820,
			.prefetch1 = 6437,
			.ram = cmpl_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2823337123, 1010981152, 1877625244, 2619707110, 4166511350, 1048051350, 2282977147, 1636886438, 1529897613, 356883634, 3605471527, 454102395, 141494546, 1986342317, 689774955, 12981600, 6125004, 8223, 3116950414
			},
			.prefetch0 = 56504,
			.prefetch1 = 11362,
			.ram = cmpl_final_ram_19,
			.ram_len = 28,
		},
		.transactions = cmpl_transactions_19,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "020 CMP.l (A4)+, (A2)+ b58c",
		.initial = {
			.regs = {
				4221685065, 1119134613, 480583197, 960715870, 1540071545, 868811029, 2658532481, 3786893177, 2309202440, 947880591, 3805539799, 2896656597, 84878664, 1686625502, 3134944770, 1999520, 6788360, 9988, 4758898
			},
			.prefetch0 = 46476,
			.prefetch1 = 3469,
			.ram = cmpl_initial_ram_20,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				4221685065, 1119134613, 480583197, 960715870, 1540071545, 868811029, 2658532481, 3786893177, 2309202440, 947880591, 3805539799, 2896656597, 84878668, 1686625502, 3134944770, 1999520, 6788346, 9988, 2881141082
			},
			.prefetch0 = 27117,
			.prefetch1 = 51956,
			.ram = cmpl_final_ram_20,
			.ram_len = 30,
		},
		.transactions = cmpl_transactions_20,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "021 CMP.l (d8, A7, Xn), D6 bcb7",
		.initial = {
			.regs = {
				208143376, 4092590914, 1043012634, 2298167464, 3680489652, 2879130401, 539253987, 3869982061, 439072770, 28900486, 4289026894, 3833567770, 1035701895, 920835105, 2900743391, 9830850, 12261540, 33033, 263378
			},
			.prefetch0 = 48311,
			.prefetch1 = 8861,
			.ram = cmpl_initial_ram_21,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				208143376, 4092590914, 1043012634, 2298167464, 3680489652, 2879130401, 539253987, 3869982061, 439072770, 28900486, 4289026894, 3833567770, 1035701895, 920835105, 2900743391, 9830850, 12261526, 8457, 912829232
			},
			.prefetch0 = 17424,
			.prefetch1 = 10044,
			.ram = cmpl_final_ram_21,
			.ram_len = 28,
		},
		.transactions = cmpl_transactions_21,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "022 CMP.l A5, D0 b08d",
		.initial = {
			.regs = {
				2614550476, 2245154464, 2377849179, 2327193717, 1844997836, 2737179930, 1634447162, 2357310040, 2969049834, 54667326, 1013092997, 3333970694, 4170921797, 2079237644, 857364477, 7350200, 13296192, 33294, 2829784
			},
			.prefetch0 = 45197,
			.prefetch1 = 34216,
			.ram = cmpl_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2614550476, 2245154464, 2377849179, 2327193717, 1844997836, 2737179930, 1634447162, 2357310040, 2969049834, 54667326, 1013092997, 3333970694, 4170921797, 2079237644, 857364477, 7350200, 13296192, 33282, 2829786
			},
			.prefetch0 = 34216,
			.prefetch1 = 21730,
			.ram = cmpl_final_ram_22,
			.ram_len = 6,
		},
		.transactions = cmpl_transactions_22,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "023 CMP.l -(A6), D7 bea6",
		.initial = {
			.regs = {
				1075246225, 913008117, 424757820, 1760540608, 660000488, 290403849, 73486965, 2648874985, 4239204322, 273705842, 3690096849, 2902432, 3145911737, 3326327638, 582827967, 15242184, 1879338, 33822, 16659084
			},
			.prefetch0 = 48806,
			.prefetch1 = 35981,
			.ram = cmpl_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1075246225, 913008117, 424757820, 1760540608, 660000488, 290403849, 73486965, 2648874985, 4239204322, 273705842, 3690096849, 2902432, 3145911737, 3326327638, 582827963, 15242184, 1879324, 9246, 2163634220
			},
			.prefetch0 = 50122,
			.prefetch1 = 48009,
			.ram = cmpl_final_ram_23,
			.ram_len = 26,
		},
		.transactions = cmpl_transactions_23,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "024 CMP.l (xxx).l, D2 b4b9",
		.initial = {
			.regs = {
				574487951, 155179917, 925437403, 3756306827, 1276056453, 3360875508, 4080053787, 3975591682, 282285500, 3560663910, 2653338223, 4182114197, 3466460604, 3550358192, 2326516721, 7614384, 14327152, 9475, 8857796
			},
			.prefetch0 = 46265,
			.prefetch1 = 11155,
			.ram = cmpl_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				574487951, 155179917, 925437403, 3756306827, 1276056453, 3360875508, 4080053787, 3975591682, 282285500, 3560663910, 2653338223, 4182114197, 3466460604, 3550358192, 2326516721, 7614384, 14327152, 9481, 8857802
			},
			.prefetch0 = 39817,
			.prefetch1 = 36942,
			.ram = cmpl_final_ram_24,
			.ram_len = 14,
		},
		.transactions = cmpl_transactions_24,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "025 CMP.l (d8, PC, Xn), D1 b2bb",
		.initial = {
			.regs = {
				1753867605, 181701561, 356457640, 711595646, 3692801803, 1550258885, 1563106988, 1293370912, 2213412354, 3331753614, 3175207561, 343449393, 592939287, 1831334209, 413481961, 10833480, 5249238, 42519, 10606468
			},
			.prefetch0 = 45755,
			.prefetch1 = 30693,
			.ram = cmpl_initial_ram_25,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1753867605, 181701561, 356457640, 711595646, 3692801803, 1550258885, 1563106988, 1293370912, 2213412354, 3331753614, 3175207561, 343449393, 592939287, 1831334209, 413481961, 10833480, 5249224, 9751, 1239172696
			},
			.prefetch0 = 22340,
			.prefetch1 = 20528,
			.ram = cmpl_final_ram_25,
			.ram_len = 28,
		},
		.transactions = cmpl_transactions_25,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "026 CMP.l D2, D4 b882",
		.initial = {
			.regs = {
				1806424724, 371961756, 3991049271, 430906461, 1447887413, 909688539, 792471192, 3028056841, 1374837249, 918602705, 1356046890, 674165838, 4262901439, 3044300169, 3699113793, 9007980, 11781468, 34577, 4597578
			},
			.prefetch0 = 47234,
			.prefetch1 = 24386,
			.ram = cmpl_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1806424724, 371961756, 3991049271, 430906461, 1447887413, 909688539, 792471192, 3028056841, 1374837249, 918602705, 1356046890, 674165838, 4262901439, 3044300169, 3699113793, 9007980, 11781468, 34577, 4597580
			},
			.prefetch0 = 24386,
			.prefetch1 = 44008,
			.ram = cmpl_final_ram_26,
			.ram_len = 6,
		},
		.transactions = cmpl_transactions_26,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "027 CMP.l A7, D2 b48f",
		.initial = {
			.regs = {
				2640150304, 592403805, 2548053933, 1715817972, 2704572138, 496290540, 2676759800, 3252111112, 3059811097, 2056238469, 2645168852, 290292992, 3628591392, 1821784654, 3472852784, 15564162, 3010142, 34315, 527946
			},
			.prefetch0 = 46223,
			.prefetch1 = 61744,
			.ram = cmpl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2640150304, 592403805, 2548053933, 1715817972, 2704572138, 496290540, 2676759800, 3252111112, 3059811097, 2056238469, 2645168852, 290292992, 3628591392, 1821784654, 3472852784, 15564162, 3010142, 34312, 527948
			},
			.prefetch0 = 61744,
			.prefetch1 = 22083,
			.ram = cmpl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = cmpl_transactions_27,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "028 CMP.l (d8, A0, Xn), D2 b4b0",
		.initial = {
			.regs = {
				195084586, 4088500608, 619365300, 2485553081, 1302289055, 3614182529, 1262739438, 3769911482, 4140584549, 3094128568, 3557716299, 4002794264, 552701438, 561351207, 358835273, 1668396, 7114758, 9990, 3368866
			},
			.prefetch0 = 46256,
			.prefetch1 = 33942,
			.ram = cmpl_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				195084586, 4088500608, 619365300, 2485553081, 1302289055, 3614182529, 1262739438, 3769911482, 4140584549, 3094128568, 3557716299, 4002794264, 552701438, 561351207, 358835273, 1668396, 7114758, 9995, 3368870
			},
			.prefetch0 = 45668,
			.prefetch1 = 10561,
			.ram = cmpl_final_ram_28,
			.ram_len = 12,
		},
		.transactions = cmpl_transactions_28,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "029 CMP.l A1, D7 be89",
		.initial = {
			.regs = {
				1798992450, 1109674204, 3161064143, 2752122822, 555621323, 3879086901, 2025939135, 2112310203, 352910894, 478369201, 2069447109, 1856375616, 1169989682, 2842296559, 3526631789, 8799202, 1347026, 8205, 14858568
			},
			.prefetch0 = 48777,
			.prefetch1 = 9810,
			.ram = cmpl_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1798992450, 1109674204, 3161064143, 2752122822, 555621323, 3879086901, 2025939135, 2112310203, 352910894, 478369201, 2069447109, 1856375616, 1169989682, 2842296559, 3526631789, 8799202, 1347026, 8192, 14858570
			},
			.prefetch0 = 9810,
			.prefetch1 = 24884,
			.ram = cmpl_final_ram_29,
			.ram_len = 6,
		},
		.transactions = cmpl_transactions_29,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "030 CMP.l (A6), D6 bc96",
		.initial = {
			.regs = {
				3846020211, 747752492, 1421920052, 1295421440, 3775319950, 3844243488, 2303098128, 3339908972, 389015888, 2710452190, 1348757366, 576228439, 2539618617, 37896222, 2533654059, 1203936, 15263556, 33308, 8034172
			},
			.prefetch0 = 48278,
			.prefetch1 = 24876,
			.ram = cmpl_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3846020211, 747752492, 1421920052, 1295421440, 3775319950, 3844243488, 2303098128, 3339908972, 389015888, 2710452190, 1348757366, 576228439, 2539618617, 37896222, 2533654059, 1203936, 15263542, 8732, 3784097046
			},
			.prefetch0 = 28538,
			.prefetch1 = 41198,
			.ram = cmpl_final_ram_30,
			.ram_len = 26,
		},
		.transactions = cmpl_transactions_30,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "031 CMP.l #, -(A6) 0ca6",
		.initial = {
			.regs = {
				2495394793, 3289955259, 487002622, 110631099, 2192236820, 4197692698, 2181935196, 2759805716, 1244753827, 2774561968, 936108980, 1116343723, 1636090217, 2178659345, 1993482815, 6178240, 16331534, 40972, 9783904
			},
			.prefetch0 = 3238,
			.prefetch1 = 9920,
			.ram = cmpl_initial_ram_31,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2495394793, 3289955259, 487002622, 110631099, 2192236820, 4197692698, 2181935196, 2759805716, 1244753827, 2774561968, 936108980, 1116343723, 1636090217, 2178659345, 1993482811, 6178240, 16331520, 8204, 3961128632
			},
			.prefetch0 = 5052,
			.prefetch1 = 26119,
			.ram = cmpl_final_ram_31,
			.ram_len = 30,
		},
		.transactions = cmpl_transactions_31,
		.transactions_len = 17,
		.lenght = 68,
	},
};

#endif /* RBT_CMPL_H */