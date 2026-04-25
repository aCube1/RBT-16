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

const uint32_t CMPB_TEST_COUNT = 16;
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
};

#endif /* RBT_CMPB_H */