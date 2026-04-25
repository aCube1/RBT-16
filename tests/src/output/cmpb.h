#ifndef RBT_CMPB_H
#define RBT_CMPB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte cmpb_initial_ram_0[] = {
		{ .addr = 0x9cda0c, .byte = 0xb8 },
		{ .addr = 0x9cda0d, .byte = 0x26 },
		{ .addr = 0x9cda0e, .byte = 0x11 },
		{ .addr = 0x9cda0f, .byte = 0x04 },
		{ .addr = 0x95122e, .byte = 0x3f },
		{ .addr = 0x95122f, .byte = 0xf6 },
		{ .addr = 0x9cda10, .byte = 0x4a },
		{ .addr = 0x9cda11, .byte = 0x91 }
};

static const SST_RamByte cmpb_final_ram_0[] = {
		{ .addr = 0x9cda0c, .byte = 0xb8 },
		{ .addr = 0x9cda0d, .byte = 0x26 },
		{ .addr = 0x9cda0e, .byte = 0x11 },
		{ .addr = 0x9cda0f, .byte = 0x04 },
		{ .addr = 0x95122e, .byte = 0x3f },
		{ .addr = 0x95122f, .byte = 0xf6 },
		{ .addr = 0x9cda10, .byte = 0x4a },
		{ .addr = 0x9cda11, .byte = 0x91 }
};

static const SST_Transaction cmpb_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9769518, .data = 246, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10279440, .data = 19089, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_1[] = {
		{ .addr = 0x6c0edc, .byte = 0x0c },
		{ .addr = 0x6c0edd, .byte = 0x20 },
		{ .addr = 0x6c0ede, .byte = 0x60 },
		{ .addr = 0x6c0edf, .byte = 0xac },
		{ .addr = 0x6c0ee0, .byte = 0x27 },
		{ .addr = 0x6c0ee1, .byte = 0xa4 },
		{ .addr = 0x3d2df8, .byte = 0x37 },
		{ .addr = 0x3d2df9, .byte = 0xb7 },
		{ .addr = 0x6c0ee2, .byte = 0x3f },
		{ .addr = 0x6c0ee3, .byte = 0x83 }
};

static const SST_RamByte cmpb_final_ram_1[] = {
		{ .addr = 0x6c0edc, .byte = 0x0c },
		{ .addr = 0x6c0edd, .byte = 0x20 },
		{ .addr = 0x6c0ede, .byte = 0x60 },
		{ .addr = 0x6c0edf, .byte = 0xac },
		{ .addr = 0x6c0ee0, .byte = 0x27 },
		{ .addr = 0x6c0ee1, .byte = 0xa4 },
		{ .addr = 0x3d2df8, .byte = 0x37 },
		{ .addr = 0x3d2df9, .byte = 0xb7 },
		{ .addr = 0x6c0ee2, .byte = 0x3f },
		{ .addr = 0x6c0ee3, .byte = 0x83 }
};

static const SST_Transaction cmpb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7081696, .data = 10148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4009464, .data = 14080, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7081698, .data = 16259, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_2[] = {
		{ .addr = 0x93cbea, .byte = 0xb4 },
		{ .addr = 0x93cbeb, .byte = 0x3b },
		{ .addr = 0x93cbec, .byte = 0x0e },
		{ .addr = 0x93cbed, .byte = 0xfe },
		{ .addr = 0x93cbee, .byte = 0xa5 },
		{ .addr = 0x93cbef, .byte = 0x18 },
		{ .addr = 0x620658, .byte = 0xed },
		{ .addr = 0x620659, .byte = 0x3b },
		{ .addr = 0x93cbf0, .byte = 0xc9 },
		{ .addr = 0x93cbf1, .byte = 0x23 }
};

static const SST_RamByte cmpb_final_ram_2[] = {
		{ .addr = 0x93cbea, .byte = 0xb4 },
		{ .addr = 0x93cbeb, .byte = 0x3b },
		{ .addr = 0x93cbec, .byte = 0x0e },
		{ .addr = 0x93cbed, .byte = 0xfe },
		{ .addr = 0x93cbee, .byte = 0xa5 },
		{ .addr = 0x93cbef, .byte = 0x18 },
		{ .addr = 0x620658, .byte = 0xed },
		{ .addr = 0x620659, .byte = 0x3b },
		{ .addr = 0x93cbf0, .byte = 0xc9 },
		{ .addr = 0x93cbf1, .byte = 0x23 }
};

static const SST_Transaction cmpb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9685998, .data = 42264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6424152, .data = 59, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9686000, .data = 51491, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_3[] = {
		{ .addr = 0xc1ea98, .byte = 0xbc },
		{ .addr = 0xc1ea99, .byte = 0x06 },
		{ .addr = 0xc1ea9a, .byte = 0x0c },
		{ .addr = 0xc1ea9b, .byte = 0x9d },
		{ .addr = 0xc1ea9c, .byte = 0xcc },
		{ .addr = 0xc1ea9d, .byte = 0xf8 }
};

static const SST_RamByte cmpb_final_ram_3[] = {
		{ .addr = 0xc1ea98, .byte = 0xbc },
		{ .addr = 0xc1ea99, .byte = 0x06 },
		{ .addr = 0xc1ea9a, .byte = 0x0c },
		{ .addr = 0xc1ea9b, .byte = 0x9d },
		{ .addr = 0xc1ea9c, .byte = 0xcc },
		{ .addr = 0xc1ea9d, .byte = 0xf8 }
};

static const SST_Transaction cmpb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12708508, .data = 52472, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_4[] = {
		{ .addr = 0x02eaf6, .byte = 0xb8 },
		{ .addr = 0x02eaf7, .byte = 0x00 },
		{ .addr = 0x02eaf8, .byte = 0x9b },
		{ .addr = 0x02eaf9, .byte = 0x89 },
		{ .addr = 0x02eafa, .byte = 0x56 },
		{ .addr = 0x02eafb, .byte = 0xb7 }
};

static const SST_RamByte cmpb_final_ram_4[] = {
		{ .addr = 0x02eaf6, .byte = 0xb8 },
		{ .addr = 0x02eaf7, .byte = 0x00 },
		{ .addr = 0x02eaf8, .byte = 0x9b },
		{ .addr = 0x02eaf9, .byte = 0x89 },
		{ .addr = 0x02eafa, .byte = 0x56 },
		{ .addr = 0x02eafb, .byte = 0xb7 }
};

static const SST_Transaction cmpb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 191226, .data = 22199, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_5[] = {
		{ .addr = 0xbe3d58, .byte = 0xbe },
		{ .addr = 0xbe3d59, .byte = 0x01 },
		{ .addr = 0xbe3d5a, .byte = 0xdf },
		{ .addr = 0xbe3d5b, .byte = 0xd2 },
		{ .addr = 0xbe3d5c, .byte = 0x7b },
		{ .addr = 0xbe3d5d, .byte = 0x6d }
};

static const SST_RamByte cmpb_final_ram_5[] = {
		{ .addr = 0xbe3d58, .byte = 0xbe },
		{ .addr = 0xbe3d59, .byte = 0x01 },
		{ .addr = 0xbe3d5a, .byte = 0xdf },
		{ .addr = 0xbe3d5b, .byte = 0xd2 },
		{ .addr = 0xbe3d5c, .byte = 0x7b },
		{ .addr = 0xbe3d5d, .byte = 0x6d }
};

static const SST_Transaction cmpb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12467548, .data = 31597, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_6[] = {
		{ .addr = 0x3f3e66, .byte = 0xb8 },
		{ .addr = 0x3f3e67, .byte = 0x38 },
		{ .addr = 0x3f3e68, .byte = 0xc9 },
		{ .addr = 0x3f3e69, .byte = 0xb0 },
		{ .addr = 0x3f3e6a, .byte = 0x80 },
		{ .addr = 0x3f3e6b, .byte = 0x1a },
		{ .addr = 0xffc9b0, .byte = 0x87 },
		{ .addr = 0xffc9b1, .byte = 0x23 },
		{ .addr = 0x3f3e6c, .byte = 0x20 },
		{ .addr = 0x3f3e6d, .byte = 0x36 }
};

static const SST_RamByte cmpb_final_ram_6[] = {
		{ .addr = 0x3f3e66, .byte = 0xb8 },
		{ .addr = 0x3f3e67, .byte = 0x38 },
		{ .addr = 0x3f3e68, .byte = 0xc9 },
		{ .addr = 0x3f3e69, .byte = 0xb0 },
		{ .addr = 0x3f3e6a, .byte = 0x80 },
		{ .addr = 0x3f3e6b, .byte = 0x1a },
		{ .addr = 0xffc9b0, .byte = 0x87 },
		{ .addr = 0xffc9b1, .byte = 0x23 },
		{ .addr = 0x3f3e6c, .byte = 0x20 },
		{ .addr = 0x3f3e6d, .byte = 0x36 }
};

static const SST_Transaction cmpb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4144746, .data = 32794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16763312, .data = 34560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4144748, .data = 8246, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_7[] = {
		{ .addr = 0x29c318, .byte = 0xba },
		{ .addr = 0x29c319, .byte = 0x02 },
		{ .addr = 0x29c31a, .byte = 0xdc },
		{ .addr = 0x29c31b, .byte = 0xbf },
		{ .addr = 0x29c31c, .byte = 0x35 },
		{ .addr = 0x29c31d, .byte = 0x02 }
};

static const SST_RamByte cmpb_final_ram_7[] = {
		{ .addr = 0x29c318, .byte = 0xba },
		{ .addr = 0x29c319, .byte = 0x02 },
		{ .addr = 0x29c31a, .byte = 0xdc },
		{ .addr = 0x29c31b, .byte = 0xbf },
		{ .addr = 0x29c31c, .byte = 0x35 },
		{ .addr = 0x29c31d, .byte = 0x02 }
};

static const SST_Transaction cmpb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2736924, .data = 13570, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_8[] = {
		{ .addr = 0x01a6ec, .byte = 0xbe },
		{ .addr = 0x01a6ed, .byte = 0x35 },
		{ .addr = 0x01a6ee, .byte = 0xf4 },
		{ .addr = 0x01a6ef, .byte = 0xa0 },
		{ .addr = 0x01a6f0, .byte = 0xc0 },
		{ .addr = 0x01a6f1, .byte = 0xd1 },
		{ .addr = 0xe7c554, .byte = 0xee },
		{ .addr = 0xe7c555, .byte = 0xa3 },
		{ .addr = 0x01a6f2, .byte = 0xcd },
		{ .addr = 0x01a6f3, .byte = 0xfa }
};

static const SST_RamByte cmpb_final_ram_8[] = {
		{ .addr = 0x01a6ec, .byte = 0xbe },
		{ .addr = 0x01a6ed, .byte = 0x35 },
		{ .addr = 0x01a6ee, .byte = 0xf4 },
		{ .addr = 0x01a6ef, .byte = 0xa0 },
		{ .addr = 0x01a6f0, .byte = 0xc0 },
		{ .addr = 0x01a6f1, .byte = 0xd1 },
		{ .addr = 0xe7c554, .byte = 0xee },
		{ .addr = 0xe7c555, .byte = 0xa3 },
		{ .addr = 0x01a6f2, .byte = 0xcd },
		{ .addr = 0x01a6f3, .byte = 0xfa }
};

static const SST_Transaction cmpb_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 108272, .data = 49361, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15189332, .data = 60928, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 108274, .data = 52730, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_9[] = {
		{ .addr = 0xe57f44, .byte = 0xb0 },
		{ .addr = 0xe57f45, .byte = 0x04 },
		{ .addr = 0xe57f46, .byte = 0xed },
		{ .addr = 0xe57f47, .byte = 0x96 },
		{ .addr = 0xe57f48, .byte = 0x0e },
		{ .addr = 0xe57f49, .byte = 0x09 }
};

static const SST_RamByte cmpb_final_ram_9[] = {
		{ .addr = 0xe57f44, .byte = 0xb0 },
		{ .addr = 0xe57f45, .byte = 0x04 },
		{ .addr = 0xe57f46, .byte = 0xed },
		{ .addr = 0xe57f47, .byte = 0x96 },
		{ .addr = 0xe57f48, .byte = 0x0e },
		{ .addr = 0xe57f49, .byte = 0x09 }
};

static const SST_Transaction cmpb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15040328, .data = 3593, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_10[] = {
		{ .addr = 0xb027f8, .byte = 0xbe },
		{ .addr = 0xb027f9, .byte = 0x35 },
		{ .addr = 0xb027fa, .byte = 0x84 },
		{ .addr = 0xb027fb, .byte = 0x33 },
		{ .addr = 0xb027fc, .byte = 0xa6 },
		{ .addr = 0xb027fd, .byte = 0x42 },
		{ .addr = 0x0f012c, .byte = 0xd7 },
		{ .addr = 0x0f012d, .byte = 0x57 },
		{ .addr = 0xb027fe, .byte = 0xdb },
		{ .addr = 0xb027ff, .byte = 0x6d }
};

static const SST_RamByte cmpb_final_ram_10[] = {
		{ .addr = 0xb027f8, .byte = 0xbe },
		{ .addr = 0xb027f9, .byte = 0x35 },
		{ .addr = 0xb027fa, .byte = 0x84 },
		{ .addr = 0xb027fb, .byte = 0x33 },
		{ .addr = 0xb027fc, .byte = 0xa6 },
		{ .addr = 0xb027fd, .byte = 0x42 },
		{ .addr = 0x0f012c, .byte = 0xd7 },
		{ .addr = 0x0f012d, .byte = 0x57 },
		{ .addr = 0xb027fe, .byte = 0xdb },
		{ .addr = 0xb027ff, .byte = 0x6d }
};

static const SST_Transaction cmpb_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11544572, .data = 42562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 983340, .data = 55040, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11544574, .data = 56173, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_11[] = {
		{ .addr = 0xa84336, .byte = 0xbe },
		{ .addr = 0xa84337, .byte = 0x22 },
		{ .addr = 0xa84338, .byte = 0x86 },
		{ .addr = 0xa84339, .byte = 0x54 },
		{ .addr = 0xbd4c64, .byte = 0x2c },
		{ .addr = 0xbd4c65, .byte = 0x03 },
		{ .addr = 0xa8433a, .byte = 0xd1 },
		{ .addr = 0xa8433b, .byte = 0x33 }
};

static const SST_RamByte cmpb_final_ram_11[] = {
		{ .addr = 0xa84336, .byte = 0xbe },
		{ .addr = 0xa84337, .byte = 0x22 },
		{ .addr = 0xa84338, .byte = 0x86 },
		{ .addr = 0xa84339, .byte = 0x54 },
		{ .addr = 0xbd4c64, .byte = 0x2c },
		{ .addr = 0xbd4c65, .byte = 0x03 },
		{ .addr = 0xa8433a, .byte = 0xd1 },
		{ .addr = 0xa8433b, .byte = 0x33 }
};

static const SST_Transaction cmpb_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12405860, .data = 11264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11027258, .data = 53555, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_12[] = {
		{ .addr = 0xa66752, .byte = 0xb8 },
		{ .addr = 0xa66753, .byte = 0x39 },
		{ .addr = 0xa66754, .byte = 0x9d },
		{ .addr = 0xa66755, .byte = 0x8d },
		{ .addr = 0xa66756, .byte = 0xca },
		{ .addr = 0xa66757, .byte = 0xcb },
		{ .addr = 0xa66758, .byte = 0x48 },
		{ .addr = 0xa66759, .byte = 0x71 },
		{ .addr = 0x8dcaca, .byte = 0x39 },
		{ .addr = 0x8dcacb, .byte = 0x5e },
		{ .addr = 0xa6675a, .byte = 0x03 },
		{ .addr = 0xa6675b, .byte = 0xa4 }
};

static const SST_RamByte cmpb_final_ram_12[] = {
		{ .addr = 0xa66752, .byte = 0xb8 },
		{ .addr = 0xa66753, .byte = 0x39 },
		{ .addr = 0xa66754, .byte = 0x9d },
		{ .addr = 0xa66755, .byte = 0x8d },
		{ .addr = 0xa66756, .byte = 0xca },
		{ .addr = 0xa66757, .byte = 0xcb },
		{ .addr = 0xa66758, .byte = 0x48 },
		{ .addr = 0xa66759, .byte = 0x71 },
		{ .addr = 0x8dcaca, .byte = 0x39 },
		{ .addr = 0x8dcacb, .byte = 0x5e },
		{ .addr = 0xa6675a, .byte = 0x03 },
		{ .addr = 0xa6675b, .byte = 0xa4 }
};

static const SST_Transaction cmpb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10905430, .data = 51915, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10905432, .data = 18545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9292490, .data = 94, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10905434, .data = 932, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_13[] = {
		{ .addr = 0xd6a3ac, .byte = 0xba },
		{ .addr = 0xd6a3ad, .byte = 0x04 },
		{ .addr = 0xd6a3ae, .byte = 0x7a },
		{ .addr = 0xd6a3af, .byte = 0x52 },
		{ .addr = 0xd6a3b0, .byte = 0xc0 },
		{ .addr = 0xd6a3b1, .byte = 0xc3 }
};

static const SST_RamByte cmpb_final_ram_13[] = {
		{ .addr = 0xd6a3ac, .byte = 0xba },
		{ .addr = 0xd6a3ad, .byte = 0x04 },
		{ .addr = 0xd6a3ae, .byte = 0x7a },
		{ .addr = 0xd6a3af, .byte = 0x52 },
		{ .addr = 0xd6a3b0, .byte = 0xc0 },
		{ .addr = 0xd6a3b1, .byte = 0xc3 }
};

static const SST_Transaction cmpb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14066608, .data = 49347, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_14[] = {
		{ .addr = 0xe016aa, .byte = 0xba },
		{ .addr = 0xe016ab, .byte = 0x28 },
		{ .addr = 0xe016ac, .byte = 0xce },
		{ .addr = 0xe016ad, .byte = 0x8c },
		{ .addr = 0xe016ae, .byte = 0x43 },
		{ .addr = 0xe016af, .byte = 0x0b },
		{ .addr = 0x528640, .byte = 0xf1 },
		{ .addr = 0x528641, .byte = 0x53 },
		{ .addr = 0xe016b0, .byte = 0xc5 },
		{ .addr = 0xe016b1, .byte = 0x6c }
};

static const SST_RamByte cmpb_final_ram_14[] = {
		{ .addr = 0xe016aa, .byte = 0xba },
		{ .addr = 0xe016ab, .byte = 0x28 },
		{ .addr = 0xe016ac, .byte = 0xce },
		{ .addr = 0xe016ad, .byte = 0x8c },
		{ .addr = 0xe016ae, .byte = 0x43 },
		{ .addr = 0xe016af, .byte = 0x0b },
		{ .addr = 0x528640, .byte = 0xf1 },
		{ .addr = 0x528641, .byte = 0x53 },
		{ .addr = 0xe016b0, .byte = 0xc5 },
		{ .addr = 0xe016b1, .byte = 0x6c }
};

static const SST_Transaction cmpb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14685870, .data = 17163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5408320, .data = 83, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14685872, .data = 50540, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_15[] = {
		{ .addr = 0xdb1fc6, .byte = 0xbc },
		{ .addr = 0xdb1fc7, .byte = 0x31 },
		{ .addr = 0xdb1fc8, .byte = 0xe3 },
		{ .addr = 0xdb1fc9, .byte = 0xf7 },
		{ .addr = 0xdb1fca, .byte = 0xa4 },
		{ .addr = 0xdb1fcb, .byte = 0x85 },
		{ .addr = 0x60d33a, .byte = 0xf8 },
		{ .addr = 0x60d33b, .byte = 0x45 },
		{ .addr = 0xdb1fcc, .byte = 0x6c },
		{ .addr = 0xdb1fcd, .byte = 0xdb }
};

static const SST_RamByte cmpb_final_ram_15[] = {
		{ .addr = 0xdb1fc6, .byte = 0xbc },
		{ .addr = 0xdb1fc7, .byte = 0x31 },
		{ .addr = 0xdb1fc8, .byte = 0xe3 },
		{ .addr = 0xdb1fc9, .byte = 0xf7 },
		{ .addr = 0xdb1fca, .byte = 0xa4 },
		{ .addr = 0xdb1fcb, .byte = 0x85 },
		{ .addr = 0x60d33a, .byte = 0xf8 },
		{ .addr = 0x60d33b, .byte = 0x45 },
		{ .addr = 0xdb1fcc, .byte = 0x6c },
		{ .addr = 0xdb1fcd, .byte = 0xdb }
};

static const SST_Transaction cmpb_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14360522, .data = 42117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6345530, .data = 69, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14360524, .data = 27867, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_16[] = {
		{ .addr = 0xcf3ae2, .byte = 0xb0 },
		{ .addr = 0xcf3ae3, .byte = 0x1b },
		{ .addr = 0xcf3ae4, .byte = 0x6c },
		{ .addr = 0xcf3ae5, .byte = 0x7a },
		{ .addr = 0x696832, .byte = 0x4e },
		{ .addr = 0x696833, .byte = 0x33 },
		{ .addr = 0xcf3ae6, .byte = 0xaf },
		{ .addr = 0xcf3ae7, .byte = 0x51 }
};

static const SST_RamByte cmpb_final_ram_16[] = {
		{ .addr = 0xcf3ae2, .byte = 0xb0 },
		{ .addr = 0xcf3ae3, .byte = 0x1b },
		{ .addr = 0xcf3ae4, .byte = 0x6c },
		{ .addr = 0xcf3ae5, .byte = 0x7a },
		{ .addr = 0x696832, .byte = 0x4e },
		{ .addr = 0x696833, .byte = 0x33 },
		{ .addr = 0xcf3ae6, .byte = 0xaf },
		{ .addr = 0xcf3ae7, .byte = 0x51 }
};

static const SST_Transaction cmpb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6907954, .data = 19968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13581030, .data = 44881, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_17[] = {
		{ .addr = 0x60a4b6, .byte = 0xbe },
		{ .addr = 0x60a4b7, .byte = 0x1a },
		{ .addr = 0x60a4b8, .byte = 0x12 },
		{ .addr = 0x60a4b9, .byte = 0xd8 },
		{ .addr = 0xa9ebee, .byte = 0x4f },
		{ .addr = 0xa9ebef, .byte = 0x5a },
		{ .addr = 0x60a4ba, .byte = 0x85 },
		{ .addr = 0x60a4bb, .byte = 0x81 }
};

static const SST_RamByte cmpb_final_ram_17[] = {
		{ .addr = 0x60a4b6, .byte = 0xbe },
		{ .addr = 0x60a4b7, .byte = 0x1a },
		{ .addr = 0x60a4b8, .byte = 0x12 },
		{ .addr = 0x60a4b9, .byte = 0xd8 },
		{ .addr = 0xa9ebee, .byte = 0x4f },
		{ .addr = 0xa9ebef, .byte = 0x5a },
		{ .addr = 0x60a4ba, .byte = 0x85 },
		{ .addr = 0x60a4bb, .byte = 0x81 }
};

static const SST_Transaction cmpb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11135982, .data = 90, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6333626, .data = 34177, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_18[] = {
		{ .addr = 0xf815aa, .byte = 0xb2 },
		{ .addr = 0xf815ab, .byte = 0x23 },
		{ .addr = 0xf815ac, .byte = 0x74 },
		{ .addr = 0xf815ad, .byte = 0x98 },
		{ .addr = 0xf3e6a6, .byte = 0x02 },
		{ .addr = 0xf3e6a7, .byte = 0x5c },
		{ .addr = 0xf815ae, .byte = 0x3f },
		{ .addr = 0xf815af, .byte = 0x26 }
};

static const SST_RamByte cmpb_final_ram_18[] = {
		{ .addr = 0xf815aa, .byte = 0xb2 },
		{ .addr = 0xf815ab, .byte = 0x23 },
		{ .addr = 0xf815ac, .byte = 0x74 },
		{ .addr = 0xf815ad, .byte = 0x98 },
		{ .addr = 0xf3e6a6, .byte = 0x02 },
		{ .addr = 0xf3e6a7, .byte = 0x5c },
		{ .addr = 0xf815ae, .byte = 0x3f },
		{ .addr = 0xf815af, .byte = 0x26 }
};

static const SST_Transaction cmpb_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15984294, .data = 512, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16258478, .data = 16166, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_19[] = {
		{ .addr = 0x272436, .byte = 0xbe },
		{ .addr = 0x272437, .byte = 0x38 },
		{ .addr = 0x272438, .byte = 0x2c },
		{ .addr = 0x272439, .byte = 0xcd },
		{ .addr = 0x27243a, .byte = 0x29 },
		{ .addr = 0x27243b, .byte = 0x59 },
		{ .addr = 0x002ccc, .byte = 0xe1 },
		{ .addr = 0x002ccd, .byte = 0xe9 },
		{ .addr = 0x27243c, .byte = 0x79 },
		{ .addr = 0x27243d, .byte = 0xab }
};

static const SST_RamByte cmpb_final_ram_19[] = {
		{ .addr = 0x272436, .byte = 0xbe },
		{ .addr = 0x272437, .byte = 0x38 },
		{ .addr = 0x272438, .byte = 0x2c },
		{ .addr = 0x272439, .byte = 0xcd },
		{ .addr = 0x27243a, .byte = 0x29 },
		{ .addr = 0x27243b, .byte = 0x59 },
		{ .addr = 0x002ccc, .byte = 0xe1 },
		{ .addr = 0x002ccd, .byte = 0xe9 },
		{ .addr = 0x27243c, .byte = 0x79 },
		{ .addr = 0x27243d, .byte = 0xab }
};

static const SST_Transaction cmpb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2565178, .data = 10585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11468, .data = 233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2565180, .data = 31147, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_20[] = {
		{ .addr = 0x08d21c, .byte = 0xbc },
		{ .addr = 0x08d21d, .byte = 0x14 },
		{ .addr = 0x08d21e, .byte = 0x32 },
		{ .addr = 0x08d21f, .byte = 0x74 },
		{ .addr = 0xef8532, .byte = 0x9a },
		{ .addr = 0xef8533, .byte = 0x00 },
		{ .addr = 0x08d220, .byte = 0x01 },
		{ .addr = 0x08d221, .byte = 0x2c }
};

static const SST_RamByte cmpb_final_ram_20[] = {
		{ .addr = 0x08d21c, .byte = 0xbc },
		{ .addr = 0x08d21d, .byte = 0x14 },
		{ .addr = 0x08d21e, .byte = 0x32 },
		{ .addr = 0x08d21f, .byte = 0x74 },
		{ .addr = 0xef8532, .byte = 0x9a },
		{ .addr = 0xef8533, .byte = 0x00 },
		{ .addr = 0x08d220, .byte = 0x01 },
		{ .addr = 0x08d221, .byte = 0x2c }
};

static const SST_Transaction cmpb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15697202, .data = 39424, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 578080, .data = 300, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_21[] = {
		{ .addr = 0xdfbe40, .byte = 0xb8 },
		{ .addr = 0xdfbe41, .byte = 0x16 },
		{ .addr = 0xdfbe42, .byte = 0x0b },
		{ .addr = 0xdfbe43, .byte = 0x4e },
		{ .addr = 0x514e2a, .byte = 0x38 },
		{ .addr = 0x514e2b, .byte = 0x72 },
		{ .addr = 0xdfbe44, .byte = 0xc4 },
		{ .addr = 0xdfbe45, .byte = 0xc3 }
};

static const SST_RamByte cmpb_final_ram_21[] = {
		{ .addr = 0xdfbe40, .byte = 0xb8 },
		{ .addr = 0xdfbe41, .byte = 0x16 },
		{ .addr = 0xdfbe42, .byte = 0x0b },
		{ .addr = 0xdfbe43, .byte = 0x4e },
		{ .addr = 0x514e2a, .byte = 0x38 },
		{ .addr = 0x514e2b, .byte = 0x72 },
		{ .addr = 0xdfbe44, .byte = 0xc4 },
		{ .addr = 0xdfbe45, .byte = 0xc3 }
};

static const SST_Transaction cmpb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5328426, .data = 114, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14663236, .data = 50371, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_22[] = {
		{ .addr = 0xe7f694, .byte = 0xb4 },
		{ .addr = 0xe7f695, .byte = 0x32 },
		{ .addr = 0xe7f696, .byte = 0xfa },
		{ .addr = 0xe7f697, .byte = 0xb2 },
		{ .addr = 0xe7f698, .byte = 0x96 },
		{ .addr = 0xe7f699, .byte = 0x63 },
		{ .addr = 0x4808c2, .byte = 0x53 },
		{ .addr = 0x4808c3, .byte = 0xf8 },
		{ .addr = 0xe7f69a, .byte = 0x6a },
		{ .addr = 0xe7f69b, .byte = 0x10 }
};

static const SST_RamByte cmpb_final_ram_22[] = {
		{ .addr = 0xe7f694, .byte = 0xb4 },
		{ .addr = 0xe7f695, .byte = 0x32 },
		{ .addr = 0xe7f696, .byte = 0xfa },
		{ .addr = 0xe7f697, .byte = 0xb2 },
		{ .addr = 0xe7f698, .byte = 0x96 },
		{ .addr = 0xe7f699, .byte = 0x63 },
		{ .addr = 0x4808c2, .byte = 0x53 },
		{ .addr = 0x4808c3, .byte = 0xf8 },
		{ .addr = 0xe7f69a, .byte = 0x6a },
		{ .addr = 0xe7f69b, .byte = 0x10 }
};

static const SST_Transaction cmpb_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15201944, .data = 38499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4720834, .data = 248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15201946, .data = 27152, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_23[] = {
		{ .addr = 0x8ac132, .byte = 0xb9 },
		{ .addr = 0x8ac133, .byte = 0x0f },
		{ .addr = 0x8ac134, .byte = 0x87 },
		{ .addr = 0x8ac135, .byte = 0x7e },
		{ .addr = 0x5a9a2e, .byte = 0xf7 },
		{ .addr = 0x5a9a2f, .byte = 0x37 },
		{ .addr = 0x89230c, .byte = 0x30 },
		{ .addr = 0x89230d, .byte = 0xd1 },
		{ .addr = 0x8ac136, .byte = 0xb1 },
		{ .addr = 0x8ac137, .byte = 0x60 }
};

static const SST_RamByte cmpb_final_ram_23[] = {
		{ .addr = 0x8ac132, .byte = 0xb9 },
		{ .addr = 0x8ac133, .byte = 0x0f },
		{ .addr = 0x8ac134, .byte = 0x87 },
		{ .addr = 0x8ac135, .byte = 0x7e },
		{ .addr = 0x5a9a2e, .byte = 0xf7 },
		{ .addr = 0x5a9a2f, .byte = 0x37 },
		{ .addr = 0x89230c, .byte = 0x30 },
		{ .addr = 0x89230d, .byte = 0xd1 },
		{ .addr = 0x8ac136, .byte = 0xb1 },
		{ .addr = 0x8ac137, .byte = 0x60 }
};

static const SST_Transaction cmpb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5937710, .data = 63232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8987404, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9093430, .data = 45408, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_24[] = {
		{ .addr = 0x26b2b8, .byte = 0xba },
		{ .addr = 0x26b2b9, .byte = 0x1f },
		{ .addr = 0x26b2ba, .byte = 0x59 },
		{ .addr = 0x26b2bb, .byte = 0xf5 },
		{ .addr = 0x6c0070, .byte = 0xd7 },
		{ .addr = 0x6c0071, .byte = 0xa5 },
		{ .addr = 0x26b2bc, .byte = 0x56 },
		{ .addr = 0x26b2bd, .byte = 0x65 }
};

static const SST_RamByte cmpb_final_ram_24[] = {
		{ .addr = 0x26b2b8, .byte = 0xba },
		{ .addr = 0x26b2b9, .byte = 0x1f },
		{ .addr = 0x26b2ba, .byte = 0x59 },
		{ .addr = 0x26b2bb, .byte = 0xf5 },
		{ .addr = 0x6c0070, .byte = 0xd7 },
		{ .addr = 0x6c0071, .byte = 0xa5 },
		{ .addr = 0x26b2bc, .byte = 0x56 },
		{ .addr = 0x26b2bd, .byte = 0x65 }
};

static const SST_Transaction cmpb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7078000, .data = 55040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2536124, .data = 22117, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_25[] = {
		{ .addr = 0x4978e6, .byte = 0xb8 },
		{ .addr = 0x4978e7, .byte = 0x23 },
		{ .addr = 0x4978e8, .byte = 0x90 },
		{ .addr = 0x4978e9, .byte = 0x3d },
		{ .addr = 0x87788e, .byte = 0x3f },
		{ .addr = 0x87788f, .byte = 0xf0 },
		{ .addr = 0x4978ea, .byte = 0x04 },
		{ .addr = 0x4978eb, .byte = 0x08 }
};

static const SST_RamByte cmpb_final_ram_25[] = {
		{ .addr = 0x4978e6, .byte = 0xb8 },
		{ .addr = 0x4978e7, .byte = 0x23 },
		{ .addr = 0x4978e8, .byte = 0x90 },
		{ .addr = 0x4978e9, .byte = 0x3d },
		{ .addr = 0x87788e, .byte = 0x3f },
		{ .addr = 0x87788f, .byte = 0xf0 },
		{ .addr = 0x4978ea, .byte = 0x04 },
		{ .addr = 0x4978eb, .byte = 0x08 }
};

static const SST_Transaction cmpb_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8878222, .data = 16128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4815082, .data = 1032, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_26[] = {
		{ .addr = 0x667204, .byte = 0xbc },
		{ .addr = 0x667205, .byte = 0x1f },
		{ .addr = 0x667206, .byte = 0xaf },
		{ .addr = 0x667207, .byte = 0xd1 },
		{ .addr = 0x5dd0cc, .byte = 0xf7 },
		{ .addr = 0x5dd0cd, .byte = 0x56 },
		{ .addr = 0x667208, .byte = 0x5b },
		{ .addr = 0x667209, .byte = 0x96 }
};

static const SST_RamByte cmpb_final_ram_26[] = {
		{ .addr = 0x667204, .byte = 0xbc },
		{ .addr = 0x667205, .byte = 0x1f },
		{ .addr = 0x667206, .byte = 0xaf },
		{ .addr = 0x667207, .byte = 0xd1 },
		{ .addr = 0x5dd0cc, .byte = 0xf7 },
		{ .addr = 0x5dd0cd, .byte = 0x56 },
		{ .addr = 0x667208, .byte = 0x5b },
		{ .addr = 0x667209, .byte = 0x96 }
};

static const SST_Transaction cmpb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6148300, .data = 63232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6713864, .data = 23446, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_27[] = {
		{ .addr = 0x6bb95c, .byte = 0xbf },
		{ .addr = 0x6bb95d, .byte = 0x0b },
		{ .addr = 0x6bb95e, .byte = 0xcf },
		{ .addr = 0x6bb95f, .byte = 0xa3 },
		{ .addr = 0x58e1f4, .byte = 0x39 },
		{ .addr = 0x58e1f5, .byte = 0x52 },
		{ .addr = 0xf38732, .byte = 0xe6 },
		{ .addr = 0xf38733, .byte = 0xdc },
		{ .addr = 0x6bb960, .byte = 0xce },
		{ .addr = 0x6bb961, .byte = 0x0b }
};

static const SST_RamByte cmpb_final_ram_27[] = {
		{ .addr = 0x6bb95c, .byte = 0xbf },
		{ .addr = 0x6bb95d, .byte = 0x0b },
		{ .addr = 0x6bb95e, .byte = 0xcf },
		{ .addr = 0x6bb95f, .byte = 0xa3 },
		{ .addr = 0x58e1f4, .byte = 0x39 },
		{ .addr = 0x58e1f5, .byte = 0x52 },
		{ .addr = 0xf38732, .byte = 0xe6 },
		{ .addr = 0xf38733, .byte = 0xdc },
		{ .addr = 0x6bb960, .byte = 0xce },
		{ .addr = 0x6bb961, .byte = 0x0b }
};

static const SST_Transaction cmpb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5825012, .data = 82, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15959858, .data = 58880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7059808, .data = 52747, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_28[] = {
		{ .addr = 0xb1034a, .byte = 0xb2 },
		{ .addr = 0xb1034b, .byte = 0x1e },
		{ .addr = 0xb1034c, .byte = 0xbd },
		{ .addr = 0xb1034d, .byte = 0x10 },
		{ .addr = 0x33c374, .byte = 0x93 },
		{ .addr = 0x33c375, .byte = 0x40 },
		{ .addr = 0xb1034e, .byte = 0xb4 },
		{ .addr = 0xb1034f, .byte = 0x8e }
};

static const SST_RamByte cmpb_final_ram_28[] = {
		{ .addr = 0xb1034a, .byte = 0xb2 },
		{ .addr = 0xb1034b, .byte = 0x1e },
		{ .addr = 0xb1034c, .byte = 0xbd },
		{ .addr = 0xb1034d, .byte = 0x10 },
		{ .addr = 0x33c374, .byte = 0x93 },
		{ .addr = 0x33c375, .byte = 0x40 },
		{ .addr = 0xb1034e, .byte = 0xb4 },
		{ .addr = 0xb1034f, .byte = 0x8e }
};

static const SST_Transaction cmpb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3392372, .data = 37632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11600718, .data = 46222, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_29[] = {
		{ .addr = 0x5751e6, .byte = 0xb2 },
		{ .addr = 0x5751e7, .byte = 0x20 },
		{ .addr = 0x5751e8, .byte = 0xf9 },
		{ .addr = 0x5751e9, .byte = 0x7a },
		{ .addr = 0x48f38c, .byte = 0x50 },
		{ .addr = 0x48f38d, .byte = 0x0a },
		{ .addr = 0x5751ea, .byte = 0xb2 },
		{ .addr = 0x5751eb, .byte = 0xdd }
};

static const SST_RamByte cmpb_final_ram_29[] = {
		{ .addr = 0x5751e6, .byte = 0xb2 },
		{ .addr = 0x5751e7, .byte = 0x20 },
		{ .addr = 0x5751e8, .byte = 0xf9 },
		{ .addr = 0x5751e9, .byte = 0x7a },
		{ .addr = 0x48f38c, .byte = 0x50 },
		{ .addr = 0x48f38d, .byte = 0x0a },
		{ .addr = 0x5751ea, .byte = 0xb2 },
		{ .addr = 0x5751eb, .byte = 0xdd }
};

static const SST_Transaction cmpb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4780940, .data = 20480, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5722602, .data = 45789, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_30[] = {
		{ .addr = 0xb6f01e, .byte = 0xbe },
		{ .addr = 0xb6f01f, .byte = 0x13 },
		{ .addr = 0xb6f020, .byte = 0x54 },
		{ .addr = 0xb6f021, .byte = 0xd9 },
		{ .addr = 0xace02c, .byte = 0x03 },
		{ .addr = 0xace02d, .byte = 0xc1 },
		{ .addr = 0xb6f022, .byte = 0x08 },
		{ .addr = 0xb6f023, .byte = 0x6f }
};

static const SST_RamByte cmpb_final_ram_30[] = {
		{ .addr = 0xb6f01e, .byte = 0xbe },
		{ .addr = 0xb6f01f, .byte = 0x13 },
		{ .addr = 0xb6f020, .byte = 0x54 },
		{ .addr = 0xb6f021, .byte = 0xd9 },
		{ .addr = 0xace02c, .byte = 0x03 },
		{ .addr = 0xace02d, .byte = 0xc1 },
		{ .addr = 0xb6f022, .byte = 0x08 },
		{ .addr = 0xb6f023, .byte = 0x6f }
};

static const SST_Transaction cmpb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11329580, .data = 768, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11989026, .data = 2159, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte cmpb_initial_ram_31[] = {
		{ .addr = 0xff8092, .byte = 0xbe },
		{ .addr = 0xff8093, .byte = 0x10 },
		{ .addr = 0xff8094, .byte = 0xb3 },
		{ .addr = 0xff8095, .byte = 0x7d },
		{ .addr = 0xda3f70, .byte = 0x40 },
		{ .addr = 0xda3f71, .byte = 0xae },
		{ .addr = 0xff8096, .byte = 0x86 },
		{ .addr = 0xff8097, .byte = 0xa9 }
};

static const SST_RamByte cmpb_final_ram_31[] = {
		{ .addr = 0xff8092, .byte = 0xbe },
		{ .addr = 0xff8093, .byte = 0x10 },
		{ .addr = 0xff8094, .byte = 0xb3 },
		{ .addr = 0xff8095, .byte = 0x7d },
		{ .addr = 0xda3f70, .byte = 0x40 },
		{ .addr = 0xda3f71, .byte = 0xae },
		{ .addr = 0xff8096, .byte = 0x86 },
		{ .addr = 0xff8097, .byte = 0xa9 }
};

static const SST_Transaction cmpb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14303088, .data = 174, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16744598, .data = 34473, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase cmpb[] = {
	{
		.name = "000 CMP.b -(A6), D4 b826",
		.initial = {
			.regs = {
				971844580, 1812861013, 27970319, 3949035807, 2380838791, 3659193200, 145864429, 3453271095, 1372439117, 2510623076, 305287105, 4155038048, 367488451, 2584974675, 2945782320, 11391200, 10095880, 34061, 10279440
			},
			.prefetch0 = 47142,
			.prefetch1 = 4356,
			.ram = cmpb_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				971844580, 1812861013, 27970319, 3949035807, 2380838791, 3659193200, 145864429, 3453271095, 1372439117, 2510623076, 305287105, 4155038048, 367488451, 2584974675, 2945782319, 11391200, 10095880, 34057, 10279442
			},
			.prefetch0 = 4356,
			.prefetch1 = 19089,
			.ram = cmpb_final_ram_0,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_0,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "001 CMP.b #, -(A0) 0c20",
		.initial = {
			.regs = {
				2503018839, 276764538, 675151053, 4042029549, 2774605955, 1777786541, 2003086711, 1853375074, 1144860153, 624237657, 1273314933, 4288253285, 1837944224, 3082993681, 3994151669, 16092816, 6714942, 42752, 7081696
			},
			.prefetch0 = 3104,
			.prefetch1 = 24748,
			.ram = cmpb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2503018839, 276764538, 675151053, 4042029549, 2774605955, 1777786541, 2003086711, 1853375074, 1144860152, 624237657, 1273314933, 4288253285, 1837944224, 3082993681, 3994151669, 16092816, 6714942, 42763, 7081700
			},
			.prefetch0 = 10148,
			.prefetch1 = 16259,
			.ram = cmpb_final_ram_1,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_1,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "002 CMP.b (d8, PC, Xn), D2 b43b",
		.initial = {
			.regs = {
				3989715567, 1302537333, 401529763, 3169726609, 4063666599, 2368054247, 990446886, 3062977807, 2202149248, 3242217670, 960171128, 3634554875, 1083952000, 209030031, 2859413565, 13852610, 10709700, 780, 9685998
			},
			.prefetch0 = 46139,
			.prefetch1 = 3838,
			.ram = cmpb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3989715567, 1302537333, 401529763, 3169726609, 4063666599, 2368054247, 990446886, 3062977807, 2202149248, 3242217670, 960171128, 3634554875, 1083952000, 209030031, 2859413565, 13852610, 10709700, 770, 9686002
			},
			.prefetch0 = 42264,
			.prefetch1 = 51491,
			.ram = cmpb_final_ram_2,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 CMP.b D6, D6 bc06",
		.initial = {
			.regs = {
				3705216704, 2282778882, 850886378, 3808295954, 2136864678, 4200238160, 1913830470, 337965956, 3128778587, 811038230, 3957282749, 4155149534, 3024133296, 872845233, 1628833487, 8964258, 14919628, 34572, 12708508
			},
			.prefetch0 = 48134,
			.prefetch1 = 3229,
			.ram = cmpb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3705216704, 2282778882, 850886378, 3808295954, 2136864678, 4200238160, 1913830470, 337965956, 3128778587, 811038230, 3957282749, 4155149534, 3024133296, 872845233, 1628833487, 8964258, 14919628, 34564, 12708510
			},
			.prefetch0 = 3229,
			.prefetch1 = 52472,
			.ram = cmpb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = cmpb_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 CMP.b D0, D4 b800",
		.initial = {
			.regs = {
				2897724307, 2614801079, 138242309, 3915748037, 1652083355, 1624440253, 2922742458, 3464955604, 3667855343, 989190024, 2425809465, 508850101, 1523406612, 1122763256, 3920292230, 2721040, 8888872, 41231, 191226
			},
			.prefetch0 = 47104,
			.prefetch1 = 39817,
			.ram = cmpb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2897724307, 2614801079, 138242309, 3915748037, 1652083355, 1624440253, 2922742458, 3464955604, 3667855343, 989190024, 2425809465, 508850101, 1523406612, 1122763256, 3920292230, 2721040, 8888872, 41216, 191228
			},
			.prefetch0 = 39817,
			.prefetch1 = 22199,
			.ram = cmpb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = cmpb_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 CMP.b D1, D7 be01",
		.initial = {
			.regs = {
				3081648120, 1160619095, 260574641, 128240845, 2648419061, 2999931092, 2016978180, 2630582387, 4011326515, 600442690, 1118295625, 722793634, 1077529980, 1064751223, 3771782500, 5511782, 4300350, 42011, 12467548
			},
			.prefetch0 = 48641,
			.prefetch1 = 57298,
			.ram = cmpb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3081648120, 1160619095, 260574641, 128240845, 2648419061, 2999931092, 2016978180, 2630582387, 4011326515, 600442690, 1118295625, 722793634, 1077529980, 1064751223, 3771782500, 5511782, 4300350, 42000, 12467550
			},
			.prefetch0 = 57298,
			.prefetch1 = 31597,
			.ram = cmpb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = cmpb_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 CMP.b (xxx).w, D4 b838",
		.initial = {
			.regs = {
				1527713213, 2987949740, 380694468, 2334855450, 3457295686, 1954349058, 2395195939, 153744668, 2459917420, 951338430, 1256600665, 2736608052, 4287023063, 112441983, 3231163361, 5863736, 4842450, 42260, 4144746
			},
			.prefetch0 = 47160,
			.prefetch1 = 51632,
			.ram = cmpb_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1527713213, 2987949740, 380694468, 2334855450, 3457295686, 1954349058, 2395195939, 153744668, 2459917420, 951338430, 1256600665, 2736608052, 4287023063, 112441983, 3231163361, 5863736, 4842450, 42267, 4144750
			},
			.prefetch0 = 32794,
			.prefetch1 = 8246,
			.ram = cmpb_final_ram_6,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 CMP.b D2, D5 ba02",
		.initial = {
			.regs = {
				3915682069, 680324850, 1627607406, 3310024467, 2119844364, 2729265124, 2579987927, 3234392501, 690942429, 3570954121, 3564678150, 4182728785, 3242191985, 2932683084, 360551354, 1388570, 15650008, 34585, 2736924
			},
			.prefetch0 = 47618,
			.prefetch1 = 56511,
			.ram = cmpb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3915682069, 680324850, 1627607406, 3310024467, 2119844364, 2729265124, 2579987927, 3234392501, 690942429, 3570954121, 3564678150, 4182728785, 3242191985, 2932683084, 360551354, 1388570, 15650008, 34578, 2736926
			},
			.prefetch0 = 56511,
			.prefetch1 = 13570,
			.ram = cmpb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = cmpb_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 CMP.b (d8, A5, Xn), D7 be35",
		.initial = {
			.regs = {
				1275578426, 3966825354, 1035131830, 4052429398, 1366027548, 2187065456, 1546295364, 2316002327, 401178555, 3999846686, 451750636, 2162485804, 1674646623, 3722928392, 1143829983, 12739756, 6383006, 34310, 108272
			},
			.prefetch0 = 48693,
			.prefetch1 = 62624,
			.ram = cmpb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1275578426, 3966825354, 1035131830, 4052429398, 1366027548, 2187065456, 1546295364, 2316002327, 401178555, 3999846686, 451750636, 2162485804, 1674646623, 3722928392, 1143829983, 12739756, 6383006, 34305, 108276
			},
			.prefetch0 = 49361,
			.prefetch1 = 52730,
			.ram = cmpb_final_ram_8,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_8,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "009 CMP.b D4, D0 b004",
		.initial = {
			.regs = {
				2500371914, 1953584676, 1999407781, 794117107, 1323322678, 2802854798, 4081999746, 1918707504, 4002724783, 360924575, 3504359285, 1259122989, 3997227890, 278545772, 345309089, 9747470, 7773244, 34053, 15040328
			},
			.prefetch0 = 45060,
			.prefetch1 = 60822,
			.ram = cmpb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2500371914, 1953584676, 1999407781, 794117107, 1323322678, 2802854798, 4081999746, 1918707504, 4002724783, 360924575, 3504359285, 1259122989, 3997227890, 278545772, 345309089, 9747470, 7773244, 34056, 15040330
			},
			.prefetch0 = 60822,
			.prefetch1 = 3593,
			.ram = cmpb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = cmpb_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 CMP.b (d8, A5, Xn), D7 be35",
		.initial = {
			.regs = {
				138807657, 154659504, 2559769728, 3777975921, 3577653802, 1857998460, 4032303309, 1123547158, 4087964972, 423284340, 2327537264, 2261227268, 363269973, 3406732237, 3388797281, 12048170, 9100096, 1303, 11544572
			},
			.prefetch0 = 48693,
			.prefetch1 = 33843,
			.ram = cmpb_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				138807657, 154659504, 2559769728, 3777975921, 3577653802, 1857998460, 4032303309, 1123547158, 4087964972, 423284340, 2327537264, 2261227268, 363269973, 3406732237, 3388797281, 12048170, 9100096, 1297, 11544576
			},
			.prefetch0 = 42562,
			.prefetch1 = 56173,
			.ram = cmpb_final_ram_10,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_10,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "011 CMP.b -(A2), D7 be22",
		.initial = {
			.regs = {
				1424730153, 2157187342, 318492977, 3615051283, 1930510517, 3802725888, 2787789026, 809318928, 3685442782, 2029812340, 1606241381, 2413600208, 4082149829, 2201429976, 530971589, 11066234, 11900488, 8467, 11027258
			},
			.prefetch0 = 48674,
			.prefetch1 = 34388,
			.ram = cmpb_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1424730153, 2157187342, 318492977, 3615051283, 1930510517, 3802725888, 2787789026, 809318928, 3685442782, 2029812340, 1606241380, 2413600208, 4082149829, 2201429976, 530971589, 11066234, 11900488, 8473, 11027260
			},
			.prefetch0 = 34388,
			.prefetch1 = 53555,
			.ram = cmpb_final_ram_11,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_11,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "012 CMP.b (xxx).l, D4 b839",
		.initial = {
			.regs = {
				1118370047, 4204300558, 879104338, 3999916982, 1009555987, 3565423959, 4013321317, 3160208198, 647139552, 1196615748, 3246197456, 1749910510, 1163289582, 1127166743, 681885065, 7677942, 8237036, 10001, 10905430
			},
			.prefetch0 = 47161,
			.prefetch1 = 40333,
			.ram = cmpb_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1118370047, 4204300558, 879104338, 3999916982, 1009555987, 3565423959, 4013321317, 3160208198, 647139552, 1196615748, 3246197456, 1749910510, 1163289582, 1127166743, 681885065, 7677942, 8237036, 10009, 10905436
			},
			.prefetch0 = 18545,
			.prefetch1 = 932,
			.ram = cmpb_final_ram_12,
			.ram_len = 12,
		},
		.transactions = cmpb_transactions_12,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "013 CMP.b D4, D5 ba04",
		.initial = {
			.regs = {
				3464901634, 6488892, 1507546247, 2618851479, 478395365, 4179523773, 4064667131, 1925739000, 3332037885, 3619270288, 772147351, 2116639295, 583387980, 3791746352, 4139452323, 3454596, 10629246, 8972, 14066608
			},
			.prefetch0 = 47620,
			.prefetch1 = 31314,
			.ram = cmpb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3464901634, 6488892, 1507546247, 2618851479, 478395365, 4179523773, 4064667131, 1925739000, 3332037885, 3619270288, 772147351, 2116639295, 583387980, 3791746352, 4139452323, 3454596, 10629246, 8969, 14066610
			},
			.prefetch0 = 31314,
			.prefetch1 = 49347,
			.ram = cmpb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = cmpb_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 CMP.b (d16, A0), D5 ba28",
		.initial = {
			.regs = {
				3084883234, 4146305601, 641650921, 2920216732, 1958666316, 2928119709, 1853308681, 4033473489, 3813849013, 3783703595, 296379607, 2300136388, 1952411450, 4024445964, 572557658, 1532894, 9599936, 781, 14685870
			},
			.prefetch0 = 47656,
			.prefetch1 = 52876,
			.ram = cmpb_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3084883234, 4146305601, 641650921, 2920216732, 1958666316, 2928119709, 1853308681, 4033473489, 3813849013, 3783703595, 296379607, 2300136388, 1952411450, 4024445964, 572557658, 1532894, 9599936, 770, 14685874
			},
			.prefetch0 = 17163,
			.prefetch1 = 50540,
			.ram = cmpb_final_ram_14,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 CMP.b (d8, A1, Xn), D6 bc31",
		.initial = {
			.regs = {
				3114589928, 2267172233, 2195342323, 208049581, 96389410, 556536079, 4160934231, 1720994186, 1353627464, 3529573957, 1013809421, 269649488, 1772634007, 265823612, 2018559, 2804450, 12734958, 26, 14360522
			},
			.prefetch0 = 48177,
			.prefetch1 = 58359,
			.ram = cmpb_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3114589928, 2267172233, 2195342323, 208049581, 96389410, 556536079, 4160934231, 1720994186, 1353627464, 3529573957, 1013809421, 269649488, 1772634007, 265823612, 2018559, 2804450, 12734958, 16, 14360526
			},
			.prefetch0 = 42117,
			.prefetch1 = 27867,
			.ram = cmpb_final_ram_15,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_15,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "016 CMP.b (A3)+, D0 b01b",
		.initial = {
			.regs = {
				3839214071, 1751119169, 1232065272, 3504741400, 2989864528, 4009479757, 3685493450, 2100545493, 1521004041, 3525796907, 1332134017, 1751738418, 2855698977, 1147886309, 4281463645, 13855006, 16215494, 42250, 13581030
			},
			.prefetch0 = 45083,
			.prefetch1 = 27770,
			.ram = cmpb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3839214071, 1751119169, 1232065272, 3504741400, 2989864528, 4009479757, 3685493450, 2100545493, 1521004041, 3525796907, 1332134017, 1751738419, 2855698977, 1147886309, 4281463645, 13855006, 16215494, 42248, 13581032
			},
			.prefetch0 = 27770,
			.prefetch1 = 44881,
			.ram = cmpb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_16,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "017 CMP.b (A2)+, D7 be1a",
		.initial = {
			.regs = {
				3615569418, 2281314622, 3857428057, 607096782, 2232424529, 2070949269, 938008363, 3924621761, 2175903860, 2212427651, 631892975, 2213399418, 3625508282, 3382716199, 554907598, 13148092, 7867020, 1818, 6333626
			},
			.prefetch0 = 48666,
			.prefetch1 = 4824,
			.ram = cmpb_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3615569418, 2281314622, 3857428057, 607096782, 2232424529, 2070949269, 938008363, 3924621761, 2175903860, 2212427651, 631892976, 2213399418, 3625508282, 3382716199, 554907598, 13148092, 7867020, 1810, 6333628
			},
			.prefetch0 = 4824,
			.prefetch1 = 34177,
			.ram = cmpb_final_ram_17,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_17,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "018 CMP.b -(A3), D1 b223",
		.initial = {
			.regs = {
				2936665022, 1277119864, 4057701568, 2001384556, 2355620856, 1655186239, 2119821824, 3986046486, 2627025266, 3894869923, 3761414575, 2331240103, 3583380565, 2299148891, 1295663286, 14714700, 473606, 34078, 16258478
			},
			.prefetch0 = 45603,
			.prefetch1 = 29848,
			.ram = cmpb_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2936665022, 1277119864, 4057701568, 2001384556, 2355620856, 1655186239, 2119821824, 3986046486, 2627025266, 3894869923, 3761414575, 2331240102, 3583380565, 2299148891, 1295663286, 14714700, 473606, 34064, 16258480
			},
			.prefetch0 = 29848,
			.prefetch1 = 16166,
			.ram = cmpb_final_ram_18,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_18,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "019 CMP.b (xxx).w, D7 be38",
		.initial = {
			.regs = {
				4030700895, 3795616978, 1955890011, 974731331, 344860949, 1567441307, 3216961267, 211480445, 1917270611, 3942051964, 593325876, 1301768242, 3390186614, 1683420002, 2588564524, 12680370, 8435412, 41994, 2565178
			},
			.prefetch0 = 48696,
			.prefetch1 = 11469,
			.ram = cmpb_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4030700895, 3795616978, 1955890011, 974731331, 344860949, 1567441307, 3216961267, 211480445, 1917270611, 3942051964, 593325876, 1301768242, 3390186614, 1683420002, 2588564524, 12680370, 8435412, 41995, 2565182
			},
			.prefetch0 = 10585,
			.prefetch1 = 31147,
			.ram = cmpb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_19,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "020 CMP.b (A4), D6 bc14",
		.initial = {
			.regs = {
				938062011, 3452846141, 1027071289, 636917634, 2752868924, 1661808211, 2161140962, 31873316, 2488072931, 4172773678, 511244935, 3366446403, 653231410, 1486452352, 2818077207, 11939860, 2404742, 1548, 578080
			},
			.prefetch0 = 48148,
			.prefetch1 = 12916,
			.ram = cmpb_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				938062011, 3452846141, 1027071289, 636917634, 2752868924, 1661808211, 2161140962, 31873316, 2488072931, 4172773678, 511244935, 3366446403, 653231410, 1486452352, 2818077207, 11939860, 2404742, 1536, 578082
			},
			.prefetch0 = 12916,
			.prefetch1 = 300,
			.ram = cmpb_final_ram_20,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_20,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "021 CMP.b (A6), D4 b816",
		.initial = {
			.regs = {
				1903789206, 1274565590, 2460212628, 3295509198, 3653222504, 841735964, 66800087, 3414236544, 1604949442, 3891078779, 1195242545, 580727894, 338257288, 777994393, 3746647595, 305604, 5866606, 34588, 14663236
			},
			.prefetch0 = 47126,
			.prefetch1 = 2894,
			.ram = cmpb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1903789206, 1274565590, 2460212628, 3295509198, 3653222504, 841735964, 66800087, 3414236544, 1604949442, 3891078779, 1195242545, 580727894, 338257288, 777994393, 3746647595, 305604, 5866606, 34585, 14663238
			},
			.prefetch0 = 2894,
			.prefetch1 = 50371,
			.ram = cmpb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_21,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "022 CMP.b (d8, A2, Xn), D2 b432",
		.initial = {
			.regs = {
				1156054233, 151582796, 570350957, 1745288604, 3993775425, 2607937212, 2283618246, 815094519, 1220584279, 1618625644, 3866054525, 3458612990, 1799478266, 3387123602, 1662776436, 2185896, 14203284, 41236, 15201944
			},
			.prefetch0 = 46130,
			.prefetch1 = 64178,
			.ram = cmpb_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1156054233, 151582796, 570350957, 1745288604, 3993775425, 2607937212, 2283618246, 815094519, 1220584279, 1618625644, 3866054525, 3458612990, 1799478266, 3387123602, 1662776436, 2185896, 14203284, 41233, 15201948
			},
			.prefetch0 = 38499,
			.prefetch1 = 27152,
			.ram = cmpb_final_ram_22,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_22,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "023 CMP.b (A7)+, (A4)+ b90f",
		.initial = {
			.regs = {
				3590261070, 1812148634, 132670087, 2465815222, 2428366251, 2956923977, 2079093349, 2253470188, 3635220659, 4039046194, 3400368416, 351437589, 1384719117, 684449107, 3263190406, 15106070, 5937710, 9229, 9093430
			},
			.prefetch0 = 47375,
			.prefetch1 = 34686,
			.ram = cmpb_initial_ram_23,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3590261070, 1812148634, 132670087, 2465815222, 2428366251, 2956923977, 2079093349, 2253470188, 3635220659, 4039046194, 3400368416, 351437589, 1384719118, 684449107, 3263190406, 15106070, 5937712, 9225, 9093432
			},
			.prefetch0 = 34686,
			.prefetch1 = 45408,
			.ram = cmpb_final_ram_23,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 CMP.b (A7)+, D5 ba1f",
		.initial = {
			.regs = {
				206671270, 3405591451, 1406340751, 2876338130, 4075341747, 3785994297, 921452473, 1606730347, 703852708, 1983916950, 4248984745, 296688658, 3834063750, 4013438304, 1968283473, 16083162, 7078000, 41223, 2536124
			},
			.prefetch0 = 47647,
			.prefetch1 = 23029,
			.ram = cmpb_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				206671270, 3405591451, 1406340751, 2876338130, 4075341747, 3785994297, 921452473, 1606730347, 703852708, 1983916950, 4248984745, 296688658, 3834063750, 4013438304, 1968283473, 16083162, 7078002, 41217, 2536126
			},
			.prefetch0 = 23029,
			.prefetch1 = 22117,
			.ram = cmpb_final_ram_24,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_24,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "025 CMP.b -(A3), D4 b823",
		.initial = {
			.regs = {
				1922328300, 1074355620, 3448927705, 318959482, 898562644, 821061165, 1404618390, 804634805, 2461183293, 1889955235, 889644144, 914847887, 935121144, 4086341028, 3829275637, 13436594, 1887108, 42770, 4815082
			},
			.prefetch0 = 47139,
			.prefetch1 = 36925,
			.ram = cmpb_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1922328300, 1074355620, 3448927705, 318959482, 898562644, 821061165, 1404618390, 804634805, 2461183293, 1889955235, 889644144, 914847886, 935121144, 4086341028, 3829275637, 13436594, 1887108, 42768, 4815084
			},
			.prefetch0 = 36925,
			.prefetch1 = 1032,
			.ram = cmpb_final_ram_25,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_25,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "026 CMP.b (A7)+, D6 bc1f",
		.initial = {
			.regs = {
				3974364560, 2597394388, 3259259887, 3410964546, 3829039851, 14947553, 4267223538, 1109809146, 1036709883, 1173223351, 3393931886, 2938187067, 537064876, 3821975781, 4154096419, 4533762, 6148300, 9744, 6713864
			},
			.prefetch0 = 48159,
			.prefetch1 = 45009,
			.ram = cmpb_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3974364560, 2597394388, 3259259887, 3410964546, 3829039851, 14947553, 4267223538, 1109809146, 1036709883, 1173223351, 3393931886, 2938187067, 537064876, 3821975781, 4154096419, 4533762, 6148302, 9753, 6713866
			},
			.prefetch0 = 45009,
			.prefetch1 = 23446,
			.ram = cmpb_final_ram_26,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_26,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "027 CMP.b (A3)+, (A7)+ bf0b",
		.initial = {
			.regs = {
				547185762, 4048952222, 853763324, 2076309953, 912011301, 1185766700, 2608174787, 696629138, 4102454628, 2490738417, 1093809804, 2102977013, 1015751297, 2304079032, 466392553, 4999636, 15959858, 9229, 7059808
			},
			.prefetch0 = 48907,
			.prefetch1 = 53155,
			.ram = cmpb_initial_ram_27,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				547185762, 4048952222, 853763324, 2076309953, 912011301, 1185766700, 2608174787, 696629138, 4102454628, 2490738417, 1093809804, 2102977014, 1015751297, 2304079032, 466392553, 4999636, 15959860, 9224, 7059810
			},
			.prefetch0 = 53155,
			.prefetch1 = 52747,
			.ram = cmpb_final_ram_27,
			.ram_len = 10,
		},
		.transactions = cmpb_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 CMP.b (A6)+, D1 b21e",
		.initial = {
			.regs = {
				2342162528, 2884585139, 3476113669, 3819468487, 1614887095, 3131196606, 3056395350, 2896186789, 3563914372, 1632032954, 1815918320, 3694830405, 2964319409, 37260192, 3241395060, 2905304, 7287824, 41499, 11600718
			},
			.prefetch0 = 45598,
			.prefetch1 = 48400,
			.ram = cmpb_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2342162528, 2884585139, 3476113669, 3819468487, 1614887095, 3131196606, 3056395350, 2896186789, 3563914372, 1632032954, 1815918320, 3694830405, 2964319409, 37260192, 3241395061, 2905304, 7287824, 41488, 11600720
			},
			.prefetch0 = 48400,
			.prefetch1 = 46222,
			.ram = cmpb_final_ram_28,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_28,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "029 CMP.b -(A0), D1 b220",
		.initial = {
			.regs = {
				3776848049, 2585306959, 3959867592, 2190499537, 3053236700, 3874633970, 638335848, 529341742, 273216397, 404928488, 3768815641, 2983050498, 753551057, 3390246070, 702133122, 223822, 13927996, 20, 5722602
			},
			.prefetch0 = 45600,
			.prefetch1 = 63866,
			.ram = cmpb_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3776848049, 2585306959, 3959867592, 2190499537, 3053236700, 3874633970, 638335848, 529341742, 273216396, 404928488, 3768815641, 2983050498, 753551057, 3390246070, 702133122, 223822, 13927996, 25, 5722604
			},
			.prefetch0 = 63866,
			.prefetch1 = 45789,
			.ram = cmpb_final_ram_29,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_29,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "030 CMP.b (A3), D7 be13",
		.initial = {
			.regs = {
				3676602142, 1291449264, 3462632542, 2540088746, 145922585, 204920318, 2449944744, 1945529711, 3027334975, 777252774, 3056320788, 179101740, 2301522879, 4064363922, 322825386, 765388, 14502470, 1289, 11989026
			},
			.prefetch0 = 48659,
			.prefetch1 = 21721,
			.ram = cmpb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3676602142, 1291449264, 3462632542, 2540088746, 145922585, 204920318, 2449944744, 1945529711, 3027334975, 777252774, 3056320788, 179101740, 2301522879, 4064363922, 322825386, 765388, 14502470, 1280, 11989028
			},
			.prefetch0 = 21721,
			.prefetch1 = 2159,
			.ram = cmpb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 CMP.b (A0), D7 be10",
		.initial = {
			.regs = {
				1808906748, 1607068550, 3541916292, 3689295921, 1652495566, 1422855225, 2140590516, 2492719268, 1272594289, 39008052, 4174611261, 3916225737, 155518067, 2658929371, 1916831527, 5617206, 16379304, 28, 16744598
			},
			.prefetch0 = 48656,
			.prefetch1 = 45949,
			.ram = cmpb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1808906748, 1607068550, 3541916292, 3689295921, 1652495566, 1422855225, 2140590516, 2492719268, 1272594289, 39008052, 4174611261, 3916225737, 155518067, 2658929371, 1916831527, 5617206, 16379304, 25, 16744600
			},
			.prefetch0 = 45949,
			.prefetch1 = 34473,
			.ram = cmpb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = cmpb_transactions_31,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_CMPB_H */