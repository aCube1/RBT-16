#ifndef RBT_NEGW_H
#define RBT_NEGW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte negw_initial_ram_0[] = {
		{ .addr = 0x2d4de0, .byte = 0x44 },
		{ .addr = 0x2d4de1, .byte = 0x46 },
		{ .addr = 0x2d4de2, .byte = 0xcf },
		{ .addr = 0x2d4de3, .byte = 0xdf },
		{ .addr = 0x2d4de4, .byte = 0x3c },
		{ .addr = 0x2d4de5, .byte = 0x6e }
};

static const SST_RamByte negw_final_ram_0[] = {
		{ .addr = 0x2d4de0, .byte = 0x44 },
		{ .addr = 0x2d4de1, .byte = 0x46 },
		{ .addr = 0x2d4de2, .byte = 0xcf },
		{ .addr = 0x2d4de3, .byte = 0xdf },
		{ .addr = 0x2d4de4, .byte = 0x3c },
		{ .addr = 0x2d4de5, .byte = 0x6e }
};

static const SST_Transaction negw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2969060, .data = 15470, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_1[] = {
		{ .addr = 0xb2eae2, .byte = 0x44 },
		{ .addr = 0xb2eae3, .byte = 0x42 },
		{ .addr = 0xb2eae4, .byte = 0x19 },
		{ .addr = 0xb2eae5, .byte = 0x2a },
		{ .addr = 0xb2eae6, .byte = 0x3b },
		{ .addr = 0xb2eae7, .byte = 0x6d }
};

static const SST_RamByte negw_final_ram_1[] = {
		{ .addr = 0xb2eae2, .byte = 0x44 },
		{ .addr = 0xb2eae3, .byte = 0x42 },
		{ .addr = 0xb2eae4, .byte = 0x19 },
		{ .addr = 0xb2eae5, .byte = 0x2a },
		{ .addr = 0xb2eae6, .byte = 0x3b },
		{ .addr = 0xb2eae7, .byte = 0x6d }
};

static const SST_Transaction negw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11725542, .data = 15213, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_2[] = {
		{ .addr = 0x49d196, .byte = 0x44 },
		{ .addr = 0x49d197, .byte = 0x79 },
		{ .addr = 0x49d198, .byte = 0xb9 },
		{ .addr = 0x49d199, .byte = 0xe3 },
		{ .addr = 0x49d19a, .byte = 0xb9 },
		{ .addr = 0x49d19b, .byte = 0xaf },
		{ .addr = 0x49d19c, .byte = 0xbe },
		{ .addr = 0x49d19d, .byte = 0x76 },
		{ .addr = 0x00000c, .byte = 0xec },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0x70 },
		{ .addr = 0x241e70, .byte = 0x2a },
		{ .addr = 0x241e71, .byte = 0xd0 },
		{ .addr = 0x241e72, .byte = 0x88 },
		{ .addr = 0x241e73, .byte = 0xc1 }
};

static const SST_RamByte negw_final_ram_2[] = {
		{ .addr = 0x49d196, .byte = 0x44 },
		{ .addr = 0x49d197, .byte = 0x79 },
		{ .addr = 0x49d198, .byte = 0xb9 },
		{ .addr = 0x49d199, .byte = 0xe3 },
		{ .addr = 0x49d19a, .byte = 0xb9 },
		{ .addr = 0x49d19b, .byte = 0xaf },
		{ .addr = 0x49d19c, .byte = 0xbe },
		{ .addr = 0x49d19d, .byte = 0x76 },
		{ .addr = 0xb3982c, .byte = 0xd1 },
		{ .addr = 0xb3982d, .byte = 0x9c },
		{ .addr = 0xb39828, .byte = 0x26 },
		{ .addr = 0xb39829, .byte = 0x02 },
		{ .addr = 0xb3982a, .byte = 0x00 },
		{ .addr = 0xb3982b, .byte = 0x49 },
		{ .addr = 0xb39826, .byte = 0x44 },
		{ .addr = 0xb39827, .byte = 0x79 },
		{ .addr = 0xb39824, .byte = 0xb9 },
		{ .addr = 0xb39825, .byte = 0xaf },
		{ .addr = 0xb39820, .byte = 0x44 },
		{ .addr = 0xb39821, .byte = 0x75 },
		{ .addr = 0xb39822, .byte = 0xb9 },
		{ .addr = 0xb39823, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0xec },
		{ .addr = 0x00000d, .byte = 0x24 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0x70 },
		{ .addr = 0x241e70, .byte = 0x2a },
		{ .addr = 0x241e71, .byte = 0xd0 },
		{ .addr = 0x241e72, .byte = 0x88 },
		{ .addr = 0x241e73, .byte = 0xc1 }
};

static const SST_Transaction negw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4837786, .data = 47535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4837788, .data = 48758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14924206, .data = 56440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11769900, .data = 53660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11769896, .data = 9730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11769898, .data = 73, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11769894, .data = 17529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11769892, .data = 47535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11769888, .data = 17525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11769890, .data = 47587, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2367088, .data = 10960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2367090, .data = 35009, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_3[] = {
		{ .addr = 0x515cac, .byte = 0x44 },
		{ .addr = 0x515cad, .byte = 0x5c },
		{ .addr = 0x515cae, .byte = 0xdb },
		{ .addr = 0x515caf, .byte = 0x4e },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xc4 },
		{ .addr = 0x00000e, .byte = 0x71 },
		{ .addr = 0x00000f, .byte = 0x1e },
		{ .addr = 0xc4711e, .byte = 0xfa },
		{ .addr = 0xc4711f, .byte = 0xe6 },
		{ .addr = 0xc47120, .byte = 0x1f },
		{ .addr = 0xc47121, .byte = 0x5e }
};

static const SST_RamByte negw_final_ram_3[] = {
		{ .addr = 0x515cac, .byte = 0x44 },
		{ .addr = 0x515cad, .byte = 0x5c },
		{ .addr = 0x515cae, .byte = 0xdb },
		{ .addr = 0x515caf, .byte = 0x4e },
		{ .addr = 0x8a3f08, .byte = 0x5c },
		{ .addr = 0x8a3f09, .byte = 0xae },
		{ .addr = 0x8a3f04, .byte = 0xa0 },
		{ .addr = 0x8a3f05, .byte = 0x0e },
		{ .addr = 0x8a3f06, .byte = 0x00 },
		{ .addr = 0x8a3f07, .byte = 0x51 },
		{ .addr = 0x8a3f02, .byte = 0x44 },
		{ .addr = 0x8a3f03, .byte = 0x5c },
		{ .addr = 0x8a3f00, .byte = 0xf7 },
		{ .addr = 0x8a3f01, .byte = 0xb7 },
		{ .addr = 0x8a3efc, .byte = 0x44 },
		{ .addr = 0x8a3efd, .byte = 0x55 },
		{ .addr = 0x8a3efe, .byte = 0x88 },
		{ .addr = 0x8a3eff, .byte = 0xbe },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xc4 },
		{ .addr = 0x00000e, .byte = 0x71 },
		{ .addr = 0x00000f, .byte = 0x1e },
		{ .addr = 0xc4711e, .byte = 0xfa },
		{ .addr = 0xc4711f, .byte = 0xe6 },
		{ .addr = 0xc47120, .byte = 0x1f },
		{ .addr = 0xc47121, .byte = 0x5e }
};

static const SST_Transaction negw_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12515254, .data = 7165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060104, .data = 23726, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060100, .data = 40974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060102, .data = 81, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060098, .data = 17500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060096, .data = 63415, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060092, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9060094, .data = 35006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 28958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12874014, .data = 64230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12874016, .data = 8030, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_4[] = {
		{ .addr = 0x9221f0, .byte = 0x44 },
		{ .addr = 0x9221f1, .byte = 0x60 },
		{ .addr = 0x9221f2, .byte = 0x93 },
		{ .addr = 0x9221f3, .byte = 0x12 },
		{ .addr = 0x1c6634, .byte = 0xf1 },
		{ .addr = 0x1c6635, .byte = 0xc9 },
		{ .addr = 0x9221f4, .byte = 0xbf },
		{ .addr = 0x9221f5, .byte = 0xd1 }
};

static const SST_RamByte negw_final_ram_4[] = {
		{ .addr = 0x9221f0, .byte = 0x44 },
		{ .addr = 0x9221f1, .byte = 0x60 },
		{ .addr = 0x9221f2, .byte = 0x93 },
		{ .addr = 0x9221f3, .byte = 0x12 },
		{ .addr = 0x1c6634, .byte = 0x0e },
		{ .addr = 0x1c6635, .byte = 0x37 },
		{ .addr = 0x9221f4, .byte = 0xbf },
		{ .addr = 0x9221f5, .byte = 0xd1 }
};

static const SST_Transaction negw_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1861172, .data = 61897, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9576948, .data = 49105, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1861172, .data = 3639, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_5[] = {
		{ .addr = 0xa3aad8, .byte = 0x44 },
		{ .addr = 0xa3aad9, .byte = 0x68 },
		{ .addr = 0xa3aada, .byte = 0x42 },
		{ .addr = 0xa3aadb, .byte = 0xa9 },
		{ .addr = 0xa3aadc, .byte = 0xc3 },
		{ .addr = 0xa3aadd, .byte = 0xda },
		{ .addr = 0x560658, .byte = 0xe8 },
		{ .addr = 0x560659, .byte = 0x5f },
		{ .addr = 0xa3aade, .byte = 0xa8 },
		{ .addr = 0xa3aadf, .byte = 0x00 }
};

static const SST_RamByte negw_final_ram_5[] = {
		{ .addr = 0xa3aad8, .byte = 0x44 },
		{ .addr = 0xa3aad9, .byte = 0x68 },
		{ .addr = 0xa3aada, .byte = 0x42 },
		{ .addr = 0xa3aadb, .byte = 0xa9 },
		{ .addr = 0xa3aadc, .byte = 0xc3 },
		{ .addr = 0xa3aadd, .byte = 0xda },
		{ .addr = 0x560658, .byte = 0x17 },
		{ .addr = 0x560659, .byte = 0xa1 },
		{ .addr = 0xa3aade, .byte = 0xa8 },
		{ .addr = 0xa3aadf, .byte = 0x00 }
};

static const SST_Transaction negw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10726108, .data = 50138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5637720, .data = 59487, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10726110, .data = 43008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5637720, .data = 6049, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_6[] = {
		{ .addr = 0xe87e8e, .byte = 0x44 },
		{ .addr = 0xe87e8f, .byte = 0x79 },
		{ .addr = 0xe87e90, .byte = 0xe5 },
		{ .addr = 0xe87e91, .byte = 0x30 },
		{ .addr = 0xe87e92, .byte = 0x8d },
		{ .addr = 0xe87e93, .byte = 0x07 },
		{ .addr = 0xe87e94, .byte = 0xfb },
		{ .addr = 0xe87e95, .byte = 0xb1 },
		{ .addr = 0x00000c, .byte = 0xf0 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xea7988, .byte = 0xa1 },
		{ .addr = 0xea7989, .byte = 0xc8 },
		{ .addr = 0xea798a, .byte = 0x11 },
		{ .addr = 0xea798b, .byte = 0x56 }
};

static const SST_RamByte negw_final_ram_6[] = {
		{ .addr = 0xe87e8e, .byte = 0x44 },
		{ .addr = 0xe87e8f, .byte = 0x79 },
		{ .addr = 0xe87e90, .byte = 0xe5 },
		{ .addr = 0xe87e91, .byte = 0x30 },
		{ .addr = 0xe87e92, .byte = 0x8d },
		{ .addr = 0xe87e93, .byte = 0x07 },
		{ .addr = 0xe87e94, .byte = 0xfb },
		{ .addr = 0xe87e95, .byte = 0xb1 },
		{ .addr = 0x28910a, .byte = 0x7e },
		{ .addr = 0x28910b, .byte = 0x94 },
		{ .addr = 0x289106, .byte = 0x23 },
		{ .addr = 0x289107, .byte = 0x13 },
		{ .addr = 0x289108, .byte = 0x00 },
		{ .addr = 0x289109, .byte = 0xe8 },
		{ .addr = 0x289104, .byte = 0x44 },
		{ .addr = 0x289105, .byte = 0x79 },
		{ .addr = 0x289102, .byte = 0x8d },
		{ .addr = 0x289103, .byte = 0x07 },
		{ .addr = 0x2890fe, .byte = 0x44 },
		{ .addr = 0x2890ff, .byte = 0x75 },
		{ .addr = 0x289100, .byte = 0xe5 },
		{ .addr = 0x289101, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0xf0 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xea7988, .byte = 0xa1 },
		{ .addr = 0xea7989, .byte = 0xc8 },
		{ .addr = 0xea798a, .byte = 0x11 },
		{ .addr = 0xea798b, .byte = 0x56 }
};

static const SST_Transaction negw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15236754, .data = 36103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15236756, .data = 64433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3181830, .data = 64088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2658570, .data = 32404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2658566, .data = 8979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2658568, .data = 232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2658564, .data = 17529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2658562, .data = 36103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2658558, .data = 17525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2658560, .data = 58672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15366536, .data = 41416, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15366538, .data = 4438, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_7[] = {
		{ .addr = 0xc253e4, .byte = 0x44 },
		{ .addr = 0xc253e5, .byte = 0x6b },
		{ .addr = 0xc253e6, .byte = 0x77 },
		{ .addr = 0xc253e7, .byte = 0x6c },
		{ .addr = 0xc253e8, .byte = 0xfb },
		{ .addr = 0xc253e9, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0xb2 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0x6eb25a, .byte = 0x5f },
		{ .addr = 0x6eb25b, .byte = 0x0b },
		{ .addr = 0x6eb25c, .byte = 0xd5 },
		{ .addr = 0x6eb25d, .byte = 0x98 }
};

static const SST_RamByte negw_final_ram_7[] = {
		{ .addr = 0xc253e4, .byte = 0x44 },
		{ .addr = 0xc253e5, .byte = 0x6b },
		{ .addr = 0xc253e6, .byte = 0x77 },
		{ .addr = 0xc253e7, .byte = 0x6c },
		{ .addr = 0xc253e8, .byte = 0xfb },
		{ .addr = 0xc253e9, .byte = 0x09 },
		{ .addr = 0xfcdc50, .byte = 0x53 },
		{ .addr = 0xfcdc51, .byte = 0xe6 },
		{ .addr = 0xfcdc4c, .byte = 0x21 },
		{ .addr = 0xfcdc4d, .byte = 0x1a },
		{ .addr = 0xfcdc4e, .byte = 0x00 },
		{ .addr = 0xfcdc4f, .byte = 0xc2 },
		{ .addr = 0xfcdc4a, .byte = 0x44 },
		{ .addr = 0xfcdc4b, .byte = 0x6b },
		{ .addr = 0xfcdc48, .byte = 0xe9 },
		{ .addr = 0xfcdc49, .byte = 0xd9 },
		{ .addr = 0xfcdc44, .byte = 0x44 },
		{ .addr = 0xfcdc45, .byte = 0x75 },
		{ .addr = 0xfcdc46, .byte = 0x94 },
		{ .addr = 0xfcdc47, .byte = 0xfa },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0x6e },
		{ .addr = 0x00000e, .byte = 0xb2 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0x6eb25a, .byte = 0x5f },
		{ .addr = 0x6eb25b, .byte = 0x0b },
		{ .addr = 0x6eb25c, .byte = 0xd5 },
		{ .addr = 0x6eb25d, .byte = 0x98 }
};

static const SST_Transaction negw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12735464, .data = 64265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16443864, .data = 40124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16571472, .data = 21478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16571468, .data = 8474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16571470, .data = 194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16571466, .data = 17515, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16571464, .data = 59865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16571460, .data = 17525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16571462, .data = 38138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 45658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7254618, .data = 24331, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7254620, .data = 54680, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_8[] = {
		{ .addr = 0x6f2e22, .byte = 0x44 },
		{ .addr = 0x6f2e23, .byte = 0x5d },
		{ .addr = 0x6f2e24, .byte = 0x0d },
		{ .addr = 0x6f2e25, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0x009486, .byte = 0x6f },
		{ .addr = 0x009487, .byte = 0xa1 },
		{ .addr = 0x009488, .byte = 0x57 },
		{ .addr = 0x009489, .byte = 0x3d }
};

static const SST_RamByte negw_final_ram_8[] = {
		{ .addr = 0x6f2e22, .byte = 0x44 },
		{ .addr = 0x6f2e23, .byte = 0x5d },
		{ .addr = 0x6f2e24, .byte = 0x0d },
		{ .addr = 0x6f2e25, .byte = 0x2a },
		{ .addr = 0x4e3f54, .byte = 0x2e },
		{ .addr = 0x4e3f55, .byte = 0x24 },
		{ .addr = 0x4e3f50, .byte = 0xa3 },
		{ .addr = 0x4e3f51, .byte = 0x00 },
		{ .addr = 0x4e3f52, .byte = 0x00 },
		{ .addr = 0x4e3f53, .byte = 0x6f },
		{ .addr = 0x4e3f4e, .byte = 0x44 },
		{ .addr = 0x4e3f4f, .byte = 0x5d },
		{ .addr = 0x4e3f4c, .byte = 0xd9 },
		{ .addr = 0x4e3f4d, .byte = 0x99 },
		{ .addr = 0x4e3f48, .byte = 0x44 },
		{ .addr = 0x4e3f49, .byte = 0x55 },
		{ .addr = 0x4e3f4a, .byte = 0x9b },
		{ .addr = 0x4e3f4b, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x00 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0x009486, .byte = 0x6f },
		{ .addr = 0x009487, .byte = 0xa1 },
		{ .addr = 0x009488, .byte = 0x57 },
		{ .addr = 0x009489, .byte = 0x3d }
};

static const SST_Transaction negw_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16767384, .data = 42298, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5128020, .data = 11812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5128016, .data = 41728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5128018, .data = 111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5128014, .data = 17501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5128012, .data = 55705, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5128008, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5128010, .data = 39935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 38022, .data = 28577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 38024, .data = 22333, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_9[] = {
		{ .addr = 0x2e9052, .byte = 0x44 },
		{ .addr = 0x2e9053, .byte = 0x56 },
		{ .addr = 0x2e9054, .byte = 0xd9 },
		{ .addr = 0x2e9055, .byte = 0xa8 },
		{ .addr = 0x00000c, .byte = 0x62 },
		{ .addr = 0x00000d, .byte = 0x86 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x869414, .byte = 0xf4 },
		{ .addr = 0x869415, .byte = 0x71 },
		{ .addr = 0x869416, .byte = 0x82 },
		{ .addr = 0x869417, .byte = 0xc6 }
};

static const SST_RamByte negw_final_ram_9[] = {
		{ .addr = 0x2e9052, .byte = 0x44 },
		{ .addr = 0x2e9053, .byte = 0x56 },
		{ .addr = 0x2e9054, .byte = 0xd9 },
		{ .addr = 0x2e9055, .byte = 0xa8 },
		{ .addr = 0x1d68d6, .byte = 0x90 },
		{ .addr = 0x1d68d7, .byte = 0x54 },
		{ .addr = 0x1d68d2, .byte = 0x02 },
		{ .addr = 0x1d68d3, .byte = 0x11 },
		{ .addr = 0x1d68d4, .byte = 0x00 },
		{ .addr = 0x1d68d5, .byte = 0x2e },
		{ .addr = 0x1d68d0, .byte = 0x44 },
		{ .addr = 0x1d68d1, .byte = 0x56 },
		{ .addr = 0x1d68ce, .byte = 0xa1 },
		{ .addr = 0x1d68cf, .byte = 0xa1 },
		{ .addr = 0x1d68ca, .byte = 0x44 },
		{ .addr = 0x1d68cb, .byte = 0x51 },
		{ .addr = 0x1d68cc, .byte = 0x25 },
		{ .addr = 0x1d68cd, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0x62 },
		{ .addr = 0x00000d, .byte = 0x86 },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x869414, .byte = 0xf4 },
		{ .addr = 0x869415, .byte = 0x71 },
		{ .addr = 0x869416, .byte = 0x82 },
		{ .addr = 0x869417, .byte = 0xc6 }
};

static const SST_Transaction negw_transactions_9[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9937312, .data = 58728, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1927382, .data = 36948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1927378, .data = 529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1927380, .data = 46, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1927376, .data = 17494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1927374, .data = 41377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1927370, .data = 17489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1927372, .data = 9623, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8819732, .data = 62577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8819734, .data = 33478, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_10[] = {
		{ .addr = 0x906098, .byte = 0x44 },
		{ .addr = 0x906099, .byte = 0x55 },
		{ .addr = 0x90609a, .byte = 0x0b },
		{ .addr = 0x90609b, .byte = 0xb8 },
		{ .addr = 0xccb4f0, .byte = 0x4f },
		{ .addr = 0xccb4f1, .byte = 0xdb },
		{ .addr = 0x90609c, .byte = 0x5c },
		{ .addr = 0x90609d, .byte = 0x4e }
};

static const SST_RamByte negw_final_ram_10[] = {
		{ .addr = 0x906098, .byte = 0x44 },
		{ .addr = 0x906099, .byte = 0x55 },
		{ .addr = 0x90609a, .byte = 0x0b },
		{ .addr = 0x90609b, .byte = 0xb8 },
		{ .addr = 0xccb4f0, .byte = 0xb0 },
		{ .addr = 0xccb4f1, .byte = 0x25 },
		{ .addr = 0x90609c, .byte = 0x5c },
		{ .addr = 0x90609d, .byte = 0x4e }
};

static const SST_Transaction negw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13415664, .data = 20443, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9461916, .data = 23630, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13415664, .data = 45093, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_11[] = {
		{ .addr = 0x5b6f18, .byte = 0x44 },
		{ .addr = 0x5b6f19, .byte = 0x55 },
		{ .addr = 0x5b6f1a, .byte = 0xcb },
		{ .addr = 0x5b6f1b, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0x6b },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xc4 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xbac44e, .byte = 0xe6 },
		{ .addr = 0xbac44f, .byte = 0x1a },
		{ .addr = 0xbac450, .byte = 0xa1 },
		{ .addr = 0xbac451, .byte = 0xda }
};

static const SST_RamByte negw_final_ram_11[] = {
		{ .addr = 0x5b6f18, .byte = 0x44 },
		{ .addr = 0x5b6f19, .byte = 0x55 },
		{ .addr = 0x5b6f1a, .byte = 0xcb },
		{ .addr = 0x5b6f1b, .byte = 0x2a },
		{ .addr = 0x0bd5c0, .byte = 0x6f },
		{ .addr = 0x0bd5c1, .byte = 0x1a },
		{ .addr = 0x0bd5bc, .byte = 0x27 },
		{ .addr = 0x0bd5bd, .byte = 0x09 },
		{ .addr = 0x0bd5be, .byte = 0x00 },
		{ .addr = 0x0bd5bf, .byte = 0x5b },
		{ .addr = 0x0bd5ba, .byte = 0x44 },
		{ .addr = 0x0bd5bb, .byte = 0x55 },
		{ .addr = 0x0bd5b8, .byte = 0x39 },
		{ .addr = 0x0bd5b9, .byte = 0xff },
		{ .addr = 0x0bd5b4, .byte = 0x44 },
		{ .addr = 0x0bd5b5, .byte = 0x55 },
		{ .addr = 0x0bd5b6, .byte = 0x9f },
		{ .addr = 0x0bd5b7, .byte = 0xc1 },
		{ .addr = 0x00000c, .byte = 0x6b },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xc4 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xbac44e, .byte = 0xe6 },
		{ .addr = 0xbac44f, .byte = 0x1a },
		{ .addr = 0xbac450, .byte = 0xa1 },
		{ .addr = 0xbac451, .byte = 0xda }
};

static const SST_Transaction negw_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12663294, .data = 17689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 775616, .data = 28442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 775612, .data = 9993, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 775614, .data = 91, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 775610, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 775608, .data = 14847, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 775604, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 775606, .data = 40897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 27578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12239950, .data = 58906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12239952, .data = 41434, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_12[] = {
		{ .addr = 0x6ac8c6, .byte = 0x44 },
		{ .addr = 0x6ac8c7, .byte = 0x46 },
		{ .addr = 0x6ac8c8, .byte = 0x5f },
		{ .addr = 0x6ac8c9, .byte = 0xfd },
		{ .addr = 0x6ac8ca, .byte = 0x02 },
		{ .addr = 0x6ac8cb, .byte = 0xaa }
};

static const SST_RamByte negw_final_ram_12[] = {
		{ .addr = 0x6ac8c6, .byte = 0x44 },
		{ .addr = 0x6ac8c7, .byte = 0x46 },
		{ .addr = 0x6ac8c8, .byte = 0x5f },
		{ .addr = 0x6ac8c9, .byte = 0xfd },
		{ .addr = 0x6ac8ca, .byte = 0x02 },
		{ .addr = 0x6ac8cb, .byte = 0xaa }
};

static const SST_Transaction negw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6998218, .data = 682, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_13[] = {
		{ .addr = 0x2f7870, .byte = 0x44 },
		{ .addr = 0x2f7871, .byte = 0x63 },
		{ .addr = 0x2f7872, .byte = 0x19 },
		{ .addr = 0x2f7873, .byte = 0x20 },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0xf8 },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x50f868, .byte = 0x0d },
		{ .addr = 0x50f869, .byte = 0xd0 },
		{ .addr = 0x50f86a, .byte = 0xeb },
		{ .addr = 0x50f86b, .byte = 0x95 }
};

static const SST_RamByte negw_final_ram_13[] = {
		{ .addr = 0x2f7870, .byte = 0x44 },
		{ .addr = 0x2f7871, .byte = 0x63 },
		{ .addr = 0x2f7872, .byte = 0x19 },
		{ .addr = 0x2f7873, .byte = 0x20 },
		{ .addr = 0x9ae10a, .byte = 0x78 },
		{ .addr = 0x9ae10b, .byte = 0x74 },
		{ .addr = 0x9ae106, .byte = 0x81 },
		{ .addr = 0x9ae107, .byte = 0x18 },
		{ .addr = 0x9ae108, .byte = 0x00 },
		{ .addr = 0x9ae109, .byte = 0x2f },
		{ .addr = 0x9ae104, .byte = 0x44 },
		{ .addr = 0x9ae105, .byte = 0x63 },
		{ .addr = 0x9ae102, .byte = 0x98 },
		{ .addr = 0x9ae103, .byte = 0xc7 },
		{ .addr = 0x9ae0fe, .byte = 0x44 },
		{ .addr = 0x9ae0ff, .byte = 0x71 },
		{ .addr = 0x9ae100, .byte = 0x13 },
		{ .addr = 0x9ae101, .byte = 0x5e },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0xf8 },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x50f868, .byte = 0x0d },
		{ .addr = 0x50f869, .byte = 0xd0 },
		{ .addr = 0x50f86a, .byte = 0xeb },
		{ .addr = 0x50f86b, .byte = 0x95 }
};

static const SST_Transaction negw_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6199494, .data = 56928, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10150154, .data = 30836, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10150150, .data = 33048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10150152, .data = 47, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10150148, .data = 17507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10150146, .data = 39111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10150142, .data = 17521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10150144, .data = 4958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5306472, .data = 3536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5306474, .data = 60309, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_14[] = {
		{ .addr = 0x9ea63a, .byte = 0x44 },
		{ .addr = 0x9ea63b, .byte = 0x5f },
		{ .addr = 0x9ea63c, .byte = 0xca },
		{ .addr = 0x9ea63d, .byte = 0xe9 },
		{ .addr = 0x12d590, .byte = 0xb3 },
		{ .addr = 0x12d591, .byte = 0x9b },
		{ .addr = 0x9ea63e, .byte = 0xfd },
		{ .addr = 0x9ea63f, .byte = 0xb4 }
};

static const SST_RamByte negw_final_ram_14[] = {
		{ .addr = 0x9ea63a, .byte = 0x44 },
		{ .addr = 0x9ea63b, .byte = 0x5f },
		{ .addr = 0x9ea63c, .byte = 0xca },
		{ .addr = 0x9ea63d, .byte = 0xe9 },
		{ .addr = 0x12d590, .byte = 0x4c },
		{ .addr = 0x12d591, .byte = 0x65 },
		{ .addr = 0x9ea63e, .byte = 0xfd },
		{ .addr = 0x9ea63f, .byte = 0xb4 }
};

static const SST_Transaction negw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1234320, .data = 45979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10397246, .data = 64948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1234320, .data = 19557, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_15[] = {
		{ .addr = 0x477ca0, .byte = 0x44 },
		{ .addr = 0x477ca1, .byte = 0x77 },
		{ .addr = 0x477ca2, .byte = 0xed },
		{ .addr = 0x477ca3, .byte = 0xbc },
		{ .addr = 0x477ca4, .byte = 0x8e },
		{ .addr = 0x477ca5, .byte = 0x43 },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x9ce3cc, .byte = 0xa7 },
		{ .addr = 0x9ce3cd, .byte = 0xe4 },
		{ .addr = 0x9ce3ce, .byte = 0x56 },
		{ .addr = 0x9ce3cf, .byte = 0xcf }
};

static const SST_RamByte negw_final_ram_15[] = {
		{ .addr = 0x477ca0, .byte = 0x44 },
		{ .addr = 0x477ca1, .byte = 0x77 },
		{ .addr = 0x477ca2, .byte = 0xed },
		{ .addr = 0x477ca3, .byte = 0xbc },
		{ .addr = 0x477ca4, .byte = 0x8e },
		{ .addr = 0x477ca5, .byte = 0x43 },
		{ .addr = 0x372166, .byte = 0x7c },
		{ .addr = 0x372167, .byte = 0xa2 },
		{ .addr = 0x372162, .byte = 0x20 },
		{ .addr = 0x372163, .byte = 0x19 },
		{ .addr = 0x372164, .byte = 0x00 },
		{ .addr = 0x372165, .byte = 0x47 },
		{ .addr = 0x372160, .byte = 0x44 },
		{ .addr = 0x372161, .byte = 0x77 },
		{ .addr = 0x37215e, .byte = 0x8c },
		{ .addr = 0x37215f, .byte = 0xff },
		{ .addr = 0x37215a, .byte = 0x44 },
		{ .addr = 0x37215b, .byte = 0x75 },
		{ .addr = 0x37215c, .byte = 0x7e },
		{ .addr = 0x37215d, .byte = 0x31 },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0xe3 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x9ce3cc, .byte = 0xa7 },
		{ .addr = 0x9ce3cd, .byte = 0xe4 },
		{ .addr = 0x9ce3ce, .byte = 0x56 },
		{ .addr = 0x9ce3cf, .byte = 0xcf }
};

static const SST_Transaction negw_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4684964, .data = 36419, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3247358, .data = 20780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3613030, .data = 31906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3613026, .data = 8217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3613028, .data = 71, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3613024, .data = 17527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3613022, .data = 36095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3613018, .data = 17525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3613020, .data = 32305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10281932, .data = 42980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10281934, .data = 22223, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_16[] = {
		{ .addr = 0x40da0e, .byte = 0x44 },
		{ .addr = 0x40da0f, .byte = 0x5e },
		{ .addr = 0x40da10, .byte = 0x9e },
		{ .addr = 0x40da11, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x9a },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xee9a28, .byte = 0x56 },
		{ .addr = 0xee9a29, .byte = 0x70 },
		{ .addr = 0xee9a2a, .byte = 0x7a },
		{ .addr = 0xee9a2b, .byte = 0xa0 }
};

static const SST_RamByte negw_final_ram_16[] = {
		{ .addr = 0x40da0e, .byte = 0x44 },
		{ .addr = 0x40da0f, .byte = 0x5e },
		{ .addr = 0x40da10, .byte = 0x9e },
		{ .addr = 0x40da11, .byte = 0xd6 },
		{ .addr = 0x8aed74, .byte = 0xda },
		{ .addr = 0x8aed75, .byte = 0x10 },
		{ .addr = 0x8aed70, .byte = 0xa5 },
		{ .addr = 0x8aed71, .byte = 0x1d },
		{ .addr = 0x8aed72, .byte = 0x00 },
		{ .addr = 0x8aed73, .byte = 0x40 },
		{ .addr = 0x8aed6e, .byte = 0x44 },
		{ .addr = 0x8aed6f, .byte = 0x5e },
		{ .addr = 0x8aed6c, .byte = 0xd8 },
		{ .addr = 0x8aed6d, .byte = 0xc9 },
		{ .addr = 0x8aed68, .byte = 0x44 },
		{ .addr = 0x8aed69, .byte = 0x55 },
		{ .addr = 0x8aed6a, .byte = 0x8c },
		{ .addr = 0x8aed6b, .byte = 0xd5 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x9a },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xee9a28, .byte = 0x56 },
		{ .addr = 0xee9a29, .byte = 0x70 },
		{ .addr = 0xee9a2a, .byte = 0x7a },
		{ .addr = 0xee9a2b, .byte = 0xa0 }
};

static const SST_Transaction negw_transactions_16[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14014664, .data = 116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9104756, .data = 55824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9104752, .data = 42269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9104754, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9104750, .data = 17502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9104748, .data = 55497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9104744, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9104746, .data = 36053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 39464, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15637032, .data = 22128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15637034, .data = 31392, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_17[] = {
		{ .addr = 0x46e6e4, .byte = 0x44 },
		{ .addr = 0x46e6e5, .byte = 0x5a },
		{ .addr = 0x46e6e6, .byte = 0x59 },
		{ .addr = 0x46e6e7, .byte = 0xd1 },
		{ .addr = 0xb135a0, .byte = 0xf9 },
		{ .addr = 0xb135a1, .byte = 0xd2 },
		{ .addr = 0x46e6e8, .byte = 0xcb },
		{ .addr = 0x46e6e9, .byte = 0x17 }
};

static const SST_RamByte negw_final_ram_17[] = {
		{ .addr = 0x46e6e4, .byte = 0x44 },
		{ .addr = 0x46e6e5, .byte = 0x5a },
		{ .addr = 0x46e6e6, .byte = 0x59 },
		{ .addr = 0x46e6e7, .byte = 0xd1 },
		{ .addr = 0xb135a0, .byte = 0x06 },
		{ .addr = 0xb135a1, .byte = 0x2e },
		{ .addr = 0x46e6e8, .byte = 0xcb },
		{ .addr = 0x46e6e9, .byte = 0x17 }
};

static const SST_Transaction negw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11613600, .data = 63954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4646632, .data = 51991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11613600, .data = 1582, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_18[] = {
		{ .addr = 0xf138b8, .byte = 0x44 },
		{ .addr = 0xf138b9, .byte = 0x6e },
		{ .addr = 0xf138ba, .byte = 0x92 },
		{ .addr = 0xf138bb, .byte = 0x7b },
		{ .addr = 0xf138bc, .byte = 0xad },
		{ .addr = 0xf138bd, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0xd9 },
		{ .addr = 0x00000d, .byte = 0x26 },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x266576, .byte = 0xc9 },
		{ .addr = 0x266577, .byte = 0xbf },
		{ .addr = 0x266578, .byte = 0x74 },
		{ .addr = 0x266579, .byte = 0xfc }
};

static const SST_RamByte negw_final_ram_18[] = {
		{ .addr = 0xf138b8, .byte = 0x44 },
		{ .addr = 0xf138b9, .byte = 0x6e },
		{ .addr = 0xf138ba, .byte = 0x92 },
		{ .addr = 0xf138bb, .byte = 0x7b },
		{ .addr = 0xf138bc, .byte = 0xad },
		{ .addr = 0xf138bd, .byte = 0x30 },
		{ .addr = 0xeaf980, .byte = 0x38 },
		{ .addr = 0xeaf981, .byte = 0xba },
		{ .addr = 0xeaf97c, .byte = 0x81 },
		{ .addr = 0xeaf97d, .byte = 0x11 },
		{ .addr = 0xeaf97e, .byte = 0x00 },
		{ .addr = 0xeaf97f, .byte = 0xf1 },
		{ .addr = 0xeaf97a, .byte = 0x44 },
		{ .addr = 0xeaf97b, .byte = 0x6e },
		{ .addr = 0xeaf978, .byte = 0x0c },
		{ .addr = 0xeaf979, .byte = 0x37 },
		{ .addr = 0xeaf974, .byte = 0x44 },
		{ .addr = 0xeaf975, .byte = 0x71 },
		{ .addr = 0xeaf976, .byte = 0xed },
		{ .addr = 0xeaf977, .byte = 0x25 },
		{ .addr = 0x00000c, .byte = 0xd9 },
		{ .addr = 0x00000d, .byte = 0x26 },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x266576, .byte = 0xc9 },
		{ .addr = 0x266577, .byte = 0xbf },
		{ .addr = 0x266578, .byte = 0x74 },
		{ .addr = 0x266579, .byte = 0xfc }
};

static const SST_Transaction negw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15808700, .data = 44336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2427958, .data = 42922, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15399296, .data = 14522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15399292, .data = 33041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15399294, .data = 241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15399290, .data = 17518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15399288, .data = 3127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15399284, .data = 17521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15399286, .data = 60709, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 55590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2516342, .data = 51647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2516344, .data = 29948, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_19[] = {
		{ .addr = 0xf5e210, .byte = 0x44 },
		{ .addr = 0xf5e211, .byte = 0x75 },
		{ .addr = 0xf5e212, .byte = 0xf3 },
		{ .addr = 0xf5e213, .byte = 0x23 },
		{ .addr = 0xf5e214, .byte = 0x44 },
		{ .addr = 0xf5e215, .byte = 0xf6 },
		{ .addr = 0xa9688a, .byte = 0xcd },
		{ .addr = 0xa9688b, .byte = 0xff },
		{ .addr = 0xf5e216, .byte = 0x61 },
		{ .addr = 0xf5e217, .byte = 0xce }
};

static const SST_RamByte negw_final_ram_19[] = {
		{ .addr = 0xf5e210, .byte = 0x44 },
		{ .addr = 0xf5e211, .byte = 0x75 },
		{ .addr = 0xf5e212, .byte = 0xf3 },
		{ .addr = 0xf5e213, .byte = 0x23 },
		{ .addr = 0xf5e214, .byte = 0x44 },
		{ .addr = 0xf5e215, .byte = 0xf6 },
		{ .addr = 0xa9688a, .byte = 0x32 },
		{ .addr = 0xa9688b, .byte = 0x01 },
		{ .addr = 0xf5e216, .byte = 0x61 },
		{ .addr = 0xf5e217, .byte = 0xce }
};

static const SST_Transaction negw_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16114196, .data = 17654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11102346, .data = 52735, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16114198, .data = 25038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11102346, .data = 12801, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_20[] = {
		{ .addr = 0xb9a89c, .byte = 0x44 },
		{ .addr = 0xb9a89d, .byte = 0x70 },
		{ .addr = 0xb9a89e, .byte = 0xc8 },
		{ .addr = 0xb9a89f, .byte = 0xe2 },
		{ .addr = 0xb9a8a0, .byte = 0x9c },
		{ .addr = 0xb9a8a1, .byte = 0x16 },
		{ .addr = 0x488fd6, .byte = 0x1c },
		{ .addr = 0x488fd7, .byte = 0x65 },
		{ .addr = 0xb9a8a2, .byte = 0xb5 },
		{ .addr = 0xb9a8a3, .byte = 0xf5 }
};

static const SST_RamByte negw_final_ram_20[] = {
		{ .addr = 0xb9a89c, .byte = 0x44 },
		{ .addr = 0xb9a89d, .byte = 0x70 },
		{ .addr = 0xb9a89e, .byte = 0xc8 },
		{ .addr = 0xb9a89f, .byte = 0xe2 },
		{ .addr = 0xb9a8a0, .byte = 0x9c },
		{ .addr = 0xb9a8a1, .byte = 0x16 },
		{ .addr = 0x488fd6, .byte = 0xe3 },
		{ .addr = 0x488fd7, .byte = 0x9b },
		{ .addr = 0xb9a8a2, .byte = 0xb5 },
		{ .addr = 0xb9a8a3, .byte = 0xf5 }
};

static const SST_Transaction negw_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12167328, .data = 39958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4755414, .data = 7269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12167330, .data = 46581, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4755414, .data = 58267, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_21[] = {
		{ .addr = 0xf2e3e4, .byte = 0x44 },
		{ .addr = 0xf2e3e5, .byte = 0x67 },
		{ .addr = 0xf2e3e6, .byte = 0x64 },
		{ .addr = 0xf2e3e7, .byte = 0xf9 },
		{ .addr = 0x8cfd76, .byte = 0x2e },
		{ .addr = 0x8cfd77, .byte = 0xf8 },
		{ .addr = 0xf2e3e8, .byte = 0x96 },
		{ .addr = 0xf2e3e9, .byte = 0xd7 }
};

static const SST_RamByte negw_final_ram_21[] = {
		{ .addr = 0xf2e3e4, .byte = 0x44 },
		{ .addr = 0xf2e3e5, .byte = 0x67 },
		{ .addr = 0xf2e3e6, .byte = 0x64 },
		{ .addr = 0xf2e3e7, .byte = 0xf9 },
		{ .addr = 0x8cfd76, .byte = 0xd1 },
		{ .addr = 0x8cfd77, .byte = 0x08 },
		{ .addr = 0xf2e3e8, .byte = 0x96 },
		{ .addr = 0xf2e3e9, .byte = 0xd7 }
};

static const SST_Transaction negw_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9239926, .data = 12024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15918056, .data = 38615, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9239926, .data = 53512, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_22[] = {
		{ .addr = 0xe3fdb2, .byte = 0x44 },
		{ .addr = 0xe3fdb3, .byte = 0x5f },
		{ .addr = 0xe3fdb4, .byte = 0xc9 },
		{ .addr = 0xe3fdb5, .byte = 0x23 },
		{ .addr = 0x045426, .byte = 0x9c },
		{ .addr = 0x045427, .byte = 0xd9 },
		{ .addr = 0xe3fdb6, .byte = 0x00 },
		{ .addr = 0xe3fdb7, .byte = 0x51 }
};

static const SST_RamByte negw_final_ram_22[] = {
		{ .addr = 0xe3fdb2, .byte = 0x44 },
		{ .addr = 0xe3fdb3, .byte = 0x5f },
		{ .addr = 0xe3fdb4, .byte = 0xc9 },
		{ .addr = 0xe3fdb5, .byte = 0x23 },
		{ .addr = 0x045426, .byte = 0x63 },
		{ .addr = 0x045427, .byte = 0x27 },
		{ .addr = 0xe3fdb6, .byte = 0x00 },
		{ .addr = 0xe3fdb7, .byte = 0x51 }
};

static const SST_Transaction negw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 283686, .data = 40153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14941622, .data = 81, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 283686, .data = 25383, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_23[] = {
		{ .addr = 0xda3dc8, .byte = 0x44 },
		{ .addr = 0xda3dc9, .byte = 0x5d },
		{ .addr = 0xda3dca, .byte = 0xbc },
		{ .addr = 0xda3dcb, .byte = 0xb8 },
		{ .addr = 0x3a61e8, .byte = 0x3e },
		{ .addr = 0x3a61e9, .byte = 0xcb },
		{ .addr = 0xda3dcc, .byte = 0xf5 },
		{ .addr = 0xda3dcd, .byte = 0xef }
};

static const SST_RamByte negw_final_ram_23[] = {
		{ .addr = 0xda3dc8, .byte = 0x44 },
		{ .addr = 0xda3dc9, .byte = 0x5d },
		{ .addr = 0xda3dca, .byte = 0xbc },
		{ .addr = 0xda3dcb, .byte = 0xb8 },
		{ .addr = 0x3a61e8, .byte = 0xc1 },
		{ .addr = 0x3a61e9, .byte = 0x35 },
		{ .addr = 0xda3dcc, .byte = 0xf5 },
		{ .addr = 0xda3dcd, .byte = 0xef }
};

static const SST_Transaction negw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3826152, .data = 16075, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14302668, .data = 62959, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3826152, .data = 49461, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_24[] = {
		{ .addr = 0xf2e6c8, .byte = 0x44 },
		{ .addr = 0xf2e6c9, .byte = 0x40 },
		{ .addr = 0xf2e6ca, .byte = 0x33 },
		{ .addr = 0xf2e6cb, .byte = 0x35 },
		{ .addr = 0xf2e6cc, .byte = 0x9c },
		{ .addr = 0xf2e6cd, .byte = 0xda }
};

static const SST_RamByte negw_final_ram_24[] = {
		{ .addr = 0xf2e6c8, .byte = 0x44 },
		{ .addr = 0xf2e6c9, .byte = 0x40 },
		{ .addr = 0xf2e6ca, .byte = 0x33 },
		{ .addr = 0xf2e6cb, .byte = 0x35 },
		{ .addr = 0xf2e6cc, .byte = 0x9c },
		{ .addr = 0xf2e6cd, .byte = 0xda }
};

static const SST_Transaction negw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15918796, .data = 40154, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_25[] = {
		{ .addr = 0x7e4108, .byte = 0x44 },
		{ .addr = 0x7e4109, .byte = 0x40 },
		{ .addr = 0x7e410a, .byte = 0x9b },
		{ .addr = 0x7e410b, .byte = 0xd3 },
		{ .addr = 0x7e410c, .byte = 0x84 },
		{ .addr = 0x7e410d, .byte = 0x32 }
};

static const SST_RamByte negw_final_ram_25[] = {
		{ .addr = 0x7e4108, .byte = 0x44 },
		{ .addr = 0x7e4109, .byte = 0x40 },
		{ .addr = 0x7e410a, .byte = 0x9b },
		{ .addr = 0x7e410b, .byte = 0xd3 },
		{ .addr = 0x7e410c, .byte = 0x84 },
		{ .addr = 0x7e410d, .byte = 0x32 }
};

static const SST_Transaction negw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8274188, .data = 33842, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_26[] = {
		{ .addr = 0xa71c0e, .byte = 0x44 },
		{ .addr = 0xa71c0f, .byte = 0x58 },
		{ .addr = 0xa71c10, .byte = 0xde },
		{ .addr = 0xa71c11, .byte = 0x52 },
		{ .addr = 0x00000c, .byte = 0x59 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x7a },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x1a7ae4, .byte = 0x06 },
		{ .addr = 0x1a7ae5, .byte = 0x5e },
		{ .addr = 0x1a7ae6, .byte = 0xbd },
		{ .addr = 0x1a7ae7, .byte = 0x58 }
};

static const SST_RamByte negw_final_ram_26[] = {
		{ .addr = 0xa71c0e, .byte = 0x44 },
		{ .addr = 0xa71c0f, .byte = 0x58 },
		{ .addr = 0xa71c10, .byte = 0xde },
		{ .addr = 0xa71c11, .byte = 0x52 },
		{ .addr = 0x359346, .byte = 0x1c },
		{ .addr = 0x359347, .byte = 0x10 },
		{ .addr = 0x359342, .byte = 0x03 },
		{ .addr = 0x359343, .byte = 0x1e },
		{ .addr = 0x359344, .byte = 0x00 },
		{ .addr = 0x359345, .byte = 0xa7 },
		{ .addr = 0x359340, .byte = 0x44 },
		{ .addr = 0x359341, .byte = 0x58 },
		{ .addr = 0x35933e, .byte = 0xd9 },
		{ .addr = 0x35933f, .byte = 0xaf },
		{ .addr = 0x35933a, .byte = 0x44 },
		{ .addr = 0x35933b, .byte = 0x51 },
		{ .addr = 0x35933c, .byte = 0xbd },
		{ .addr = 0x35933d, .byte = 0xaf },
		{ .addr = 0x00000c, .byte = 0x59 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x7a },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x1a7ae4, .byte = 0x06 },
		{ .addr = 0x1a7ae5, .byte = 0x5e },
		{ .addr = 0x1a7ae6, .byte = 0xbd },
		{ .addr = 0x1a7ae7, .byte = 0x58 }
};

static const SST_Transaction negw_transactions_26[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11524526, .data = 22450, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3511110, .data = 7184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3511106, .data = 798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3511108, .data = 167, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3511104, .data = 17496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3511102, .data = 55727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3511098, .data = 17489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3511100, .data = 48559, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 22810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1735396, .data = 1630, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1735398, .data = 48472, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_27[] = {
		{ .addr = 0xe415e2, .byte = 0x44 },
		{ .addr = 0xe415e3, .byte = 0x59 },
		{ .addr = 0xe415e4, .byte = 0x54 },
		{ .addr = 0xe415e5, .byte = 0x5b },
		{ .addr = 0x0a9068, .byte = 0xda },
		{ .addr = 0x0a9069, .byte = 0x65 },
		{ .addr = 0xe415e6, .byte = 0x4b },
		{ .addr = 0xe415e7, .byte = 0xb7 }
};

static const SST_RamByte negw_final_ram_27[] = {
		{ .addr = 0xe415e2, .byte = 0x44 },
		{ .addr = 0xe415e3, .byte = 0x59 },
		{ .addr = 0xe415e4, .byte = 0x54 },
		{ .addr = 0xe415e5, .byte = 0x5b },
		{ .addr = 0x0a9068, .byte = 0x25 },
		{ .addr = 0x0a9069, .byte = 0x9b },
		{ .addr = 0xe415e6, .byte = 0x4b },
		{ .addr = 0xe415e7, .byte = 0xb7 }
};

static const SST_Transaction negw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 692328, .data = 55909, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14947814, .data = 19383, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 692328, .data = 9627, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_28[] = {
		{ .addr = 0xb74cfe, .byte = 0x44 },
		{ .addr = 0xb74cff, .byte = 0x5e },
		{ .addr = 0xb74d00, .byte = 0x57 },
		{ .addr = 0xb74d01, .byte = 0x94 },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x3c7c08, .byte = 0xe8 },
		{ .addr = 0x3c7c09, .byte = 0xbc },
		{ .addr = 0x3c7c0a, .byte = 0xac },
		{ .addr = 0x3c7c0b, .byte = 0x8b }
};

static const SST_RamByte negw_final_ram_28[] = {
		{ .addr = 0xb74cfe, .byte = 0x44 },
		{ .addr = 0xb74cff, .byte = 0x5e },
		{ .addr = 0xb74d00, .byte = 0x57 },
		{ .addr = 0xb74d01, .byte = 0x94 },
		{ .addr = 0x8df700, .byte = 0x4d },
		{ .addr = 0x8df701, .byte = 0x00 },
		{ .addr = 0x8df6fc, .byte = 0x20 },
		{ .addr = 0x8df6fd, .byte = 0x04 },
		{ .addr = 0x8df6fe, .byte = 0x00 },
		{ .addr = 0x8df6ff, .byte = 0xb7 },
		{ .addr = 0x8df6fa, .byte = 0x44 },
		{ .addr = 0x8df6fb, .byte = 0x5e },
		{ .addr = 0x8df6f8, .byte = 0x6a },
		{ .addr = 0x8df6f9, .byte = 0x01 },
		{ .addr = 0x8df6f4, .byte = 0x44 },
		{ .addr = 0x8df6f5, .byte = 0x55 },
		{ .addr = 0x8df6f6, .byte = 0xa0 },
		{ .addr = 0x8df6f7, .byte = 0x55 },
		{ .addr = 0x00000c, .byte = 0xb1 },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x3c7c08, .byte = 0xe8 },
		{ .addr = 0x3c7c09, .byte = 0xbc },
		{ .addr = 0x3c7c0a, .byte = 0xac },
		{ .addr = 0x3c7c0b, .byte = 0x8b }
};

static const SST_Transaction negw_transactions_28[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5597696, .data = 58536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9303808, .data = 19712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9303804, .data = 8196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9303806, .data = 183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9303802, .data = 17502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9303800, .data = 27137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9303796, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9303798, .data = 41045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3963912, .data = 59580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3963914, .data = 44171, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_29[] = {
		{ .addr = 0x2ed42c, .byte = 0x44 },
		{ .addr = 0x2ed42d, .byte = 0x50 },
		{ .addr = 0x2ed42e, .byte = 0x71 },
		{ .addr = 0x2ed42f, .byte = 0xf7 },
		{ .addr = 0x00000c, .byte = 0xb2 },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xf83f0a, .byte = 0x76 },
		{ .addr = 0xf83f0b, .byte = 0xbc },
		{ .addr = 0xf83f0c, .byte = 0x3f },
		{ .addr = 0xf83f0d, .byte = 0x8e }
};

static const SST_RamByte negw_final_ram_29[] = {
		{ .addr = 0x2ed42c, .byte = 0x44 },
		{ .addr = 0x2ed42d, .byte = 0x50 },
		{ .addr = 0x2ed42e, .byte = 0x71 },
		{ .addr = 0x2ed42f, .byte = 0xf7 },
		{ .addr = 0xd7d5b4, .byte = 0xd4 },
		{ .addr = 0xd7d5b5, .byte = 0x2e },
		{ .addr = 0xd7d5b0, .byte = 0x27 },
		{ .addr = 0xd7d5b1, .byte = 0x0a },
		{ .addr = 0xd7d5b2, .byte = 0x00 },
		{ .addr = 0xd7d5b3, .byte = 0x2e },
		{ .addr = 0xd7d5ae, .byte = 0x44 },
		{ .addr = 0xd7d5af, .byte = 0x50 },
		{ .addr = 0xd7d5ac, .byte = 0x64 },
		{ .addr = 0xd7d5ad, .byte = 0x6f },
		{ .addr = 0xd7d5a8, .byte = 0x44 },
		{ .addr = 0xd7d5a9, .byte = 0x55 },
		{ .addr = 0xd7d5aa, .byte = 0xfb },
		{ .addr = 0xd7d5ab, .byte = 0xf1 },
		{ .addr = 0x00000c, .byte = 0xb2 },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0x3f },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xf83f0a, .byte = 0x76 },
		{ .addr = 0xf83f0b, .byte = 0xbc },
		{ .addr = 0xf83f0c, .byte = 0x3f },
		{ .addr = 0xf83f0d, .byte = 0x8e }
};

static const SST_Transaction negw_transactions_29[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15819886, .data = 30263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14144948, .data = 54318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14144944, .data = 9994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14144946, .data = 46, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14144942, .data = 17488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14144940, .data = 25711, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14144936, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14144938, .data = 64497, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16269066, .data = 30396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16269068, .data = 16270, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_30[] = {
		{ .addr = 0xbbfe38, .byte = 0x44 },
		{ .addr = 0xbbfe39, .byte = 0x55 },
		{ .addr = 0xbbfe3a, .byte = 0xb5 },
		{ .addr = 0xbbfe3b, .byte = 0x1e },
		{ .addr = 0x00000c, .byte = 0x16 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x6e },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x906eea, .byte = 0x18 },
		{ .addr = 0x906eeb, .byte = 0xff },
		{ .addr = 0x906eec, .byte = 0x8c },
		{ .addr = 0x906eed, .byte = 0xb9 }
};

static const SST_RamByte negw_final_ram_30[] = {
		{ .addr = 0xbbfe38, .byte = 0x44 },
		{ .addr = 0xbbfe39, .byte = 0x55 },
		{ .addr = 0xbbfe3a, .byte = 0xb5 },
		{ .addr = 0xbbfe3b, .byte = 0x1e },
		{ .addr = 0x7fbc32, .byte = 0xfe },
		{ .addr = 0x7fbc33, .byte = 0x3a },
		{ .addr = 0x7fbc2e, .byte = 0x80 },
		{ .addr = 0x7fbc2f, .byte = 0x15 },
		{ .addr = 0x7fbc30, .byte = 0x00 },
		{ .addr = 0x7fbc31, .byte = 0xbb },
		{ .addr = 0x7fbc2c, .byte = 0x44 },
		{ .addr = 0x7fbc2d, .byte = 0x55 },
		{ .addr = 0x7fbc2a, .byte = 0x44 },
		{ .addr = 0x7fbc2b, .byte = 0x5b },
		{ .addr = 0x7fbc26, .byte = 0x44 },
		{ .addr = 0x7fbc27, .byte = 0x51 },
		{ .addr = 0x7fbc28, .byte = 0x3a },
		{ .addr = 0x7fbc29, .byte = 0x17 },
		{ .addr = 0x00000c, .byte = 0x16 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x6e },
		{ .addr = 0x00000f, .byte = 0xea },
		{ .addr = 0x906eea, .byte = 0x18 },
		{ .addr = 0x906eeb, .byte = 0xff },
		{ .addr = 0x906eec, .byte = 0x8c },
		{ .addr = 0x906eed, .byte = 0xb9 }
};

static const SST_Transaction negw_transactions_30[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1524826, .data = 46894, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8371250, .data = 65082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8371246, .data = 32789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8371248, .data = 187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8371244, .data = 17493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8371242, .data = 17499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8371238, .data = 17489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8371240, .data = 14871, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 28394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9465578, .data = 6399, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9465580, .data = 36025, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negw_initial_ram_31[] = {
		{ .addr = 0x842a54, .byte = 0x44 },
		{ .addr = 0x842a55, .byte = 0x42 },
		{ .addr = 0x842a56, .byte = 0x55 },
		{ .addr = 0x842a57, .byte = 0xb2 },
		{ .addr = 0x842a58, .byte = 0x23 },
		{ .addr = 0x842a59, .byte = 0x4c }
};

static const SST_RamByte negw_final_ram_31[] = {
		{ .addr = 0x842a54, .byte = 0x44 },
		{ .addr = 0x842a55, .byte = 0x42 },
		{ .addr = 0x842a56, .byte = 0x55 },
		{ .addr = 0x842a57, .byte = 0xb2 },
		{ .addr = 0x842a58, .byte = 0x23 },
		{ .addr = 0x842a59, .byte = 0x4c }
};

static const SST_Transaction negw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8661592, .data = 9036, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase negw[] = {
	{
		.name = "000 NEG.w D6 4446",
		.initial = {
			.regs = {
				2915949660, 4208110988, 3897725201, 157986744, 2424547139, 398580832, 3144043529, 3319658943, 1155462772, 3810844444, 3589085788, 2091927467, 2326765843, 144408155, 1896118326, 15124356, 5960562, 42259, 2969060
			},
			.prefetch0 = 17478,
			.prefetch1 = 53215,
			.ram = negw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2915949660, 4208110988, 3897725201, 157986744, 2424547139, 398580832, 3144070135, 3319658943, 1155462772, 3810844444, 3589085788, 2091927467, 2326765843, 144408155, 1896118326, 15124356, 5960562, 42265, 2969062
			},
			.prefetch0 = 53215,
			.prefetch1 = 15470,
			.ram = negw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = negw_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 NEG.w D2 4442",
		.initial = {
			.regs = {
				2643284448, 3142495405, 881999627, 3797819080, 2076807956, 3256515000, 1894530183, 405963336, 4088698248, 4062266421, 1124635591, 3781008402, 797853267, 2043499951, 2224576450, 14508880, 15633528, 34071, 11725542
			},
			.prefetch0 = 17474,
			.prefetch1 = 6442,
			.ram = negw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2643284448, 3142495405, 882032885, 3797819080, 2076807956, 3256515000, 1894530183, 405963336, 4088698248, 4062266421, 1124635591, 3781008402, 797853267, 2043499951, 2224576450, 14508880, 15633528, 34073, 11725544
			},
			.prefetch0 = 6442,
			.prefetch1 = 15213,
			.ram = negw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = negw_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 NEG.w (xxx).l 4479",
		.initial = {
			.regs = {
				969266985, 1660324276, 2689741796, 130263331, 1252261568, 3381779976, 1645023639, 3302666278, 3736297630, 3630938204, 3468163168, 1338761395, 1197713110, 3211514505, 1311140274, 14603318, 11769902, 9730, 4837786
			},
			.prefetch0 = 17529,
			.prefetch1 = 47587,
			.ram = negw_initial_ram_2,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				969266985, 1660324276, 2689741796, 130263331, 1252261568, 3381779976, 1645023639, 3302666278, 3736297630, 3630938204, 3468163168, 1338761395, 1197713110, 3211514505, 1311140274, 14603318, 11769888, 9730, 3961790068
			},
			.prefetch0 = 10960,
			.prefetch1 = 35009,
			.ram = negw_final_ram_2,
			.ram_len = 30,
		},
		.transactions = negw_transactions_2,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "003 NEG.w (A4)+ 445c",
		.initial = {
			.regs = {
				3928732145, 2612378506, 820671, 3380164496, 2743740520, 1832629295, 2998481008, 2071522988, 1175381884, 2987402537, 577597358, 3980157160, 2294216631, 1552229918, 1845594515, 7538034, 9060106, 40974, 5332144
			},
			.prefetch0 = 17500,
			.prefetch1 = 56142,
			.ram = negw_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3928732145, 2612378506, 820671, 3380164496, 2743740520, 1832629295, 2998481008, 2071522988, 1175381884, 2987402537, 577597358, 3980157160, 2294216633, 1552229918, 1845594515, 7538034, 9060092, 8206, 314863906
			},
			.prefetch0 = 64230,
			.prefetch1 = 8030,
			.ram = negw_final_ram_3,
			.ram_len = 26,
		},
		.transactions = negw_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 NEG.w -(A0) 4460",
		.initial = {
			.regs = {
				2466513036, 3171634238, 2852092963, 2036080335, 2217181377, 3641490721, 488061163, 3219994005, 706504246, 2241010506, 2227026634, 3021910087, 229773899, 3441524779, 4088044619, 11363966, 16116470, 33546, 9576948
			},
			.prefetch0 = 17504,
			.prefetch1 = 37650,
			.ram = negw_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2466513036, 3171634238, 2852092963, 2036080335, 2217181377, 3641490721, 488061163, 3219994005, 706504244, 2241010506, 2227026634, 3021910087, 229773899, 3441524779, 4088044619, 11363966, 16116470, 33553, 9576950
			},
			.prefetch0 = 37650,
			.prefetch1 = 49105,
			.ram = negw_final_ram_4,
			.ram_len = 8,
		},
		.transactions = negw_transactions_4,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "005 NEG.w (d16, A0) 4468",
		.initial = {
			.regs = {
				4261993831, 3074585935, 1341580250, 2772059542, 2869104769, 2730484574, 981999688, 125215349, 3897934767, 290021581, 3563594041, 1003708075, 2743944745, 1840976030, 4006792081, 15449348, 15049118, 1051, 10726108
			},
			.prefetch0 = 17512,
			.prefetch1 = 17065,
			.ram = negw_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4261993831, 3074585935, 1341580250, 2772059542, 2869104769, 2730484574, 981999688, 125215349, 3897934767, 290021581, 3563594041, 1003708075, 2743944745, 1840976030, 4006792081, 15449348, 15049118, 1041, 10726112
			},
			.prefetch0 = 50138,
			.prefetch1 = 43008,
			.ram = negw_final_ram_5,
			.ram_len = 10,
		},
		.transactions = negw_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 NEG.w (xxx).l 4479",
		.initial = {
			.regs = {
				3504553886, 275050209, 1993810722, 1477239582, 3911346611, 2169057658, 4160968470, 3932813907, 4166298607, 250149930, 4014867019, 4226557209, 3643684180, 538036190, 3128648225, 8523402, 2658572, 8979, 15236754
			},
			.prefetch0 = 17529,
			.prefetch1 = 58672,
			.ram = negw_initial_ram_6,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3504553886, 275050209, 1993810722, 1477239582, 3911346611, 2169057658, 4160968470, 3932813907, 4166298607, 250149930, 4014867019, 4226557209, 3643684180, 538036190, 3128648225, 8523402, 2658558, 8979, 4041898380
			},
			.prefetch0 = 41416,
			.prefetch1 = 4438,
			.ram = negw_final_ram_6,
			.ram_len = 30,
		},
		.transactions = negw_transactions_6,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "007 NEG.w (d16, A3) 446b",
		.initial = {
			.regs = {
				1347211531, 3900868352, 1947883602, 1951011317, 3386982757, 106175218, 1546866987, 3941727313, 3179940996, 2829820484, 2199736976, 2499441261, 644445897, 1447433293, 28833099, 11409492, 16571474, 8474, 12735464
			},
			.prefetch0 = 17515,
			.prefetch1 = 30572,
			.ram = negw_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1347211531, 3900868352, 1947883602, 1951011317, 3386982757, 106175218, 1546866987, 3941727313, 3179940996, 2829820484, 2199736976, 2499441261, 644445897, 1447433293, 28833099, 11409492, 16571460, 8474, 1601090142
			},
			.prefetch0 = 24331,
			.prefetch1 = 54680,
			.ram = negw_final_ram_7,
			.ram_len = 28,
		},
		.transactions = negw_transactions_7,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "008 NEG.w (A5)+ 445d",
		.initial = {
			.regs = {
				3906665553, 4214867804, 1475548026, 1414055631, 1135911207, 359096109, 214516302, 713202892, 3910907518, 1799803325, 1339089978, 2944058309, 3847700197, 2617235865, 501808990, 9731784, 5128022, 41728, 7286310
			},
			.prefetch0 = 17501,
			.prefetch1 = 3370,
			.ram = negw_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3906665553, 4214867804, 1475548026, 1414055631, 1135911207, 359096109, 214516302, 713202892, 3910907518, 1799803325, 1339089978, 2944058309, 3847700197, 2617235867, 501808990, 9731784, 5128008, 8960, 1006670986
			},
			.prefetch0 = 28577,
			.prefetch1 = 22333,
			.ram = negw_final_ram_8,
			.ram_len = 26,
		},
		.transactions = negw_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 NEG.w (A6) 4456",
		.initial = {
			.regs = {
				3526915472, 664157042, 4183717696, 3065768392, 3185388086, 1151263784, 3377986893, 764561770, 407349049, 1419372650, 1417145805, 3743166865, 3997895968, 4188936654, 630694305, 7372050, 1927384, 529, 3051606
			},
			.prefetch0 = 17494,
			.prefetch1 = 55720,
			.ram = negw_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3526915472, 664157042, 4183717696, 3065768392, 3185388086, 1151263784, 3377986893, 764561770, 407349049, 1419372650, 1417145805, 3743166865, 3997895968, 4188936654, 630694305, 7372050, 1927370, 8721, 1652986904
			},
			.prefetch0 = 62577,
			.prefetch1 = 33478,
			.ram = negw_final_ram_9,
			.ram_len = 26,
		},
		.transactions = negw_transactions_9,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "010 NEG.w (A5) 4455",
		.initial = {
			.regs = {
				460010399, 2089902314, 2282891738, 4186879478, 620155128, 9086236, 1815777034, 2615210666, 317313089, 2257054037, 2473712156, 1633703621, 644049402, 801944816, 4275068263, 12257070, 14869952, 41480, 9461916
			},
			.prefetch0 = 17493,
			.prefetch1 = 3000,
			.ram = negw_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				460010399, 2089902314, 2282891738, 4186879478, 620155128, 9086236, 1815777034, 2615210666, 317313089, 2257054037, 2473712156, 1633703621, 644049402, 801944816, 4275068263, 12257070, 14869952, 41497, 9461918
			},
			.prefetch0 = 3000,
			.prefetch1 = 23630,
			.ram = negw_final_ram_10,
			.ram_len = 8,
		},
		.transactions = negw_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 NEG.w (A5) 4455",
		.initial = {
			.regs = {
				1192539089, 4230750537, 962104956, 2209658376, 709269093, 2325586937, 2204130290, 2843735618, 3203007141, 1207425941, 334691893, 2991304143, 2845338502, 2680240639, 433116800, 7097070, 775618, 9993, 5992220
			},
			.prefetch0 = 17493,
			.prefetch1 = 52010,
			.ram = negw_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1192539089, 4230750537, 962104956, 2209658376, 709269093, 2325586937, 2204130290, 2843735618, 3203007141, 1207425941, 334691893, 2991304143, 2845338502, 2680240639, 433116800, 7097070, 775604, 9993, 1807402066
			},
			.prefetch0 = 58906,
			.prefetch1 = 41434,
			.ram = negw_final_ram_11,
			.ram_len = 26,
		},
		.transactions = negw_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 NEG.w D6 4446",
		.initial = {
			.regs = {
				2433788338, 3252700304, 253655822, 3152736003, 2406456695, 3741715406, 1958492999, 2628735656, 4168945833, 1623891293, 2760851170, 1420193597, 3215404526, 3685540434, 3131344426, 13712654, 15432190, 34574, 6998218
			},
			.prefetch0 = 17478,
			.prefetch1 = 24573,
			.ram = negw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2433788338, 3252700304, 253655822, 3152736003, 2406456695, 3741715406, 1958528185, 2628735656, 4168945833, 1623891293, 2760851170, 1420193597, 3215404526, 3685540434, 3131344426, 13712654, 15432190, 34585, 6998220
			},
			.prefetch0 = 24573,
			.prefetch1 = 682,
			.ram = negw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = negw_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 NEG.w -(A3) 4463",
		.initial = {
			.regs = {
				1727187445, 576545521, 3031610453, 215976395, 3529195318, 2474304169, 4217826337, 786529939, 458740930, 1230991844, 3081921752, 324966601, 1432960629, 3070992216, 3438001460, 14000880, 10150156, 33048, 3111028
			},
			.prefetch0 = 17507,
			.prefetch1 = 6432,
			.ram = negw_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1727187445, 576545521, 3031610453, 215976395, 3529195318, 2474304169, 4217826337, 786529939, 458740930, 1230991844, 3081921752, 324966599, 1432960629, 3070992216, 3438001460, 14000880, 10150142, 8472, 2169567340
			},
			.prefetch0 = 3536,
			.prefetch1 = 60309,
			.ram = negw_final_ram_13,
			.ram_len = 26,
		},
		.transactions = negw_transactions_13,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "014 NEG.w (A7)+ 445f",
		.initial = {
			.regs = {
				957173908, 2393507769, 3726799717, 1897615178, 678408362, 435902738, 1585373793, 2218533476, 2030513800, 3495201289, 2811749840, 2944424215, 2610297406, 762113067, 4183923413, 4746946, 1234320, 40980, 10397246
			},
			.prefetch0 = 17503,
			.prefetch1 = 51945,
			.ram = negw_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				957173908, 2393507769, 3726799717, 1897615178, 678408362, 435902738, 1585373793, 2218533476, 2030513800, 3495201289, 2811749840, 2944424215, 2610297406, 762113067, 4183923413, 4746946, 1234322, 40977, 10397248
			},
			.prefetch0 = 51945,
			.prefetch1 = 64948,
			.ram = negw_final_ram_14,
			.ram_len = 8,
		},
		.transactions = negw_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 NEG.w (d8, A7, Xn) 4477",
		.initial = {
			.regs = {
				162782436, 3505964179, 19324367, 2985599328, 2586171682, 123003872, 257386090, 3910885881, 2852355264, 2158825618, 1990916797, 4117818696, 2953171573, 4005166845, 2113563611, 12744592, 3613032, 8217, 4684964
			},
			.prefetch0 = 17527,
			.prefetch1 = 60860,
			.ram = negw_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				162782436, 3505964179, 19324367, 2985599328, 2586171682, 123003872, 257386090, 3910885881, 2852355264, 2158825618, 1990916797, 4117818696, 2953171573, 4005166845, 2113563611, 12744592, 3613018, 8217, 1688003536
			},
			.prefetch0 = 42980,
			.prefetch1 = 22223,
			.ram = negw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = negw_transactions_15,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "016 NEG.w (A6)+ 445e",
		.initial = {
			.regs = {
				1307642122, 181014667, 2889497569, 2111498756, 3384333249, 1883917200, 2285773765, 1162721583, 781116083, 3383450474, 52347068, 3042251133, 895963695, 1563877418, 2362824905, 9904032, 9104758, 42269, 4250130
			},
			.prefetch0 = 17502,
			.prefetch1 = 40662,
			.ram = negw_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1307642122, 181014667, 2889497569, 2111498756, 3384333249, 1883917200, 2285773765, 1162721583, 781116083, 3383450474, 52347068, 3042251133, 895963695, 1563877418, 2362824907, 9904032, 9104744, 9501, 317626924
			},
			.prefetch0 = 22128,
			.prefetch1 = 31392,
			.ram = negw_final_ram_16,
			.ram_len = 26,
		},
		.transactions = negw_transactions_16,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "017 NEG.w (A2)+ 445a",
		.initial = {
			.regs = {
				65371049, 4095280943, 3788438493, 3284111044, 2938162142, 4026633782, 1645795933, 2229584506, 713146533, 3864839826, 4021368224, 2151541186, 2826993834, 675573083, 1559023818, 4316512, 1559164, 41503, 4646632
			},
			.prefetch0 = 17498,
			.prefetch1 = 22993,
			.ram = negw_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				65371049, 4095280943, 3788438493, 3284111044, 2938162142, 4026633782, 1645795933, 2229584506, 713146533, 3864839826, 4021368226, 2151541186, 2826993834, 675573083, 1559023818, 4316512, 1559164, 41489, 4646634
			},
			.prefetch0 = 22993,
			.prefetch1 = 51991,
			.ram = negw_final_ram_17,
			.ram_len = 8,
		},
		.transactions = negw_transactions_17,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "018 NEG.w (d16, A6) 446e",
		.initial = {
			.regs = {
				3066174619, 603452913, 630647487, 2508975350, 3011095470, 1861402847, 2634429271, 332195232, 1014607462, 2187562551, 724930205, 1969423071, 3101359215, 2793891354, 3978656188, 6923758, 15399298, 33041, 15808700
			},
			.prefetch0 = 17518,
			.prefetch1 = 37499,
			.ram = negw_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3066174619, 603452913, 630647487, 2508975350, 3011095470, 1861402847, 2634429271, 332195232, 1014607462, 2187562551, 724930205, 1969423071, 3101359215, 2793891354, 3978656188, 6923758, 15399284, 8465, 3643172218
			},
			.prefetch0 = 51647,
			.prefetch1 = 29948,
			.ram = negw_final_ram_18,
			.ram_len = 28,
		},
		.transactions = negw_transactions_18,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "019 NEG.w (d8, A5, Xn) 4475",
		.initial = {
			.regs = {
				2984181925, 2746955887, 1993994062, 3762471777, 3507866926, 3126069602, 947699729, 1097152215, 1477554183, 3433667100, 1461984811, 1737375494, 3911497611, 581508793, 1230114141, 16729896, 10439086, 41480, 16114196
			},
			.prefetch0 = 17525,
			.prefetch1 = 62243,
			.ram = negw_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2984181925, 2746955887, 1993994062, 3762471777, 3507866926, 3126069602, 947699729, 1097152215, 1477554183, 3433667100, 1461984811, 1737375494, 3911497611, 581508793, 1230114141, 16729896, 10439086, 41489, 16114200
			},
			.prefetch0 = 17654,
			.prefetch1 = 25038,
			.ram = negw_final_ram_19,
			.ram_len = 10,
		},
		.transactions = negw_transactions_19,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "020 NEG.w (d8, A0, Xn) 4470",
		.initial = {
			.regs = {
				3702017997, 1470074201, 3403253027, 3385491695, 1205835580, 586654648, 1934670497, 3519192138, 4151082308, 2684729512, 3472733570, 2723599468, 1138496176, 2651662129, 2874132059, 8311194, 16302658, 8972, 12167328
			},
			.prefetch0 = 17520,
			.prefetch1 = 51426,
			.ram = negw_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3702017997, 1470074201, 3403253027, 3385491695, 1205835580, 586654648, 1934670497, 3519192138, 4151082308, 2684729512, 3472733570, 2723599468, 1138496176, 2651662129, 2874132059, 8311194, 16302658, 8985, 12167332
			},
			.prefetch0 = 39958,
			.prefetch1 = 46581,
			.ram = negw_final_ram_20,
			.ram_len = 10,
		},
		.transactions = negw_transactions_20,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "021 NEG.w -(A7) 4467",
		.initial = {
			.regs = {
				1530921226, 1943154844, 3755393909, 260344147, 510302174, 1668037280, 116088849, 4153291174, 3343939816, 1456828945, 3625378193, 1041964207, 3690854639, 16053120, 1298940542, 8552382, 9239928, 8717, 15918056
			},
			.prefetch0 = 17511,
			.prefetch1 = 25849,
			.ram = negw_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1530921226, 1943154844, 3755393909, 260344147, 510302174, 1668037280, 116088849, 4153291174, 3343939816, 1456828945, 3625378193, 1041964207, 3690854639, 16053120, 1298940542, 8552382, 9239926, 8729, 15918058
			},
			.prefetch0 = 25849,
			.prefetch1 = 38615,
			.ram = negw_final_ram_21,
			.ram_len = 8,
		},
		.transactions = negw_transactions_21,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "022 NEG.w (A7)+ 445f",
		.initial = {
			.regs = {
				896587401, 3960736699, 3136916596, 655247136, 2442528025, 3870475574, 3081006423, 3152573829, 3082718989, 162844274, 375855760, 1192290141, 454841680, 2466118548, 4286970262, 483454, 283686, 9234, 14941622
			},
			.prefetch0 = 17503,
			.prefetch1 = 51491,
			.ram = negw_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				896587401, 3960736699, 3136916596, 655247136, 2442528025, 3870475574, 3081006423, 3152573829, 3082718989, 162844274, 375855760, 1192290141, 454841680, 2466118548, 4286970262, 483454, 283688, 9233, 14941624
			},
			.prefetch0 = 51491,
			.prefetch1 = 81,
			.ram = negw_final_ram_22,
			.ram_len = 8,
		},
		.transactions = negw_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 NEG.w (A5)+ 445d",
		.initial = {
			.regs = {
				2076015090, 2211233547, 1979677733, 2486025854, 964534512, 1937238218, 3302690569, 1361200077, 473144768, 194808025, 3091661057, 1833965769, 880132539, 3644482024, 165690995, 8277712, 5414626, 797, 14302668
			},
			.prefetch0 = 17501,
			.prefetch1 = 48312,
			.ram = negw_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2076015090, 2211233547, 1979677733, 2486025854, 964534512, 1937238218, 3302690569, 1361200077, 473144768, 194808025, 3091661057, 1833965769, 880132539, 3644482026, 165690995, 8277712, 5414626, 793, 14302670
			},
			.prefetch0 = 48312,
			.prefetch1 = 62959,
			.ram = negw_final_ram_23,
			.ram_len = 8,
		},
		.transactions = negw_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 NEG.w D0 4440",
		.initial = {
			.regs = {
				2151331769, 156565910, 1759223179, 3849109658, 958347315, 561873295, 1963556563, 783611847, 4192893425, 2977728730, 797812081, 1037105952, 585962080, 1079425738, 2730278142, 13497462, 11650456, 8730, 15918796
			},
			.prefetch0 = 17472,
			.prefetch1 = 13109,
			.ram = negw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2151303239, 156565910, 1759223179, 3849109658, 958347315, 561873295, 1963556563, 783611847, 4192893425, 2977728730, 797812081, 1037105952, 585962080, 1079425738, 2730278142, 13497462, 11650456, 8721, 15918798
			},
			.prefetch0 = 13109,
			.prefetch1 = 40154,
			.ram = negw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = negw_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 NEG.w D0 4440",
		.initial = {
			.regs = {
				301838804, 10235662, 1603444133, 2448490618, 462716394, 2555470921, 262961680, 1176258604, 3898296156, 2754558066, 51318974, 4145025666, 4058936126, 1898278828, 3089122935, 4658524, 7582050, 32780, 8274188
			},
			.prefetch0 = 17472,
			.prefetch1 = 39891,
			.ram = negw_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				301813292, 10235662, 1603444133, 2448490618, 462716394, 2555470921, 262961680, 1176258604, 3898296156, 2754558066, 51318974, 4145025666, 4058936126, 1898278828, 3089122935, 4658524, 7582050, 32785, 8274190
			},
			.prefetch0 = 39891,
			.prefetch1 = 33842,
			.ram = negw_final_ram_25,
			.ram_len = 6,
		},
		.transactions = negw_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 NEG.w (A0)+ 4458",
		.initial = {
			.regs = {
				2585749287, 3853779707, 2978470517, 1399374318, 2289337029, 1083580950, 2903701776, 3006364846, 3182418351, 2550393607, 3165882150, 138825464, 1809832177, 2454597155, 3012100222, 16524728, 3511112, 798, 10951698
			},
			.prefetch0 = 17496,
			.prefetch1 = 56914,
			.ram = negw_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2585749287, 3853779707, 2978470517, 1399374318, 2289337029, 1083580950, 2903701776, 3006364846, 3182418353, 2550393607, 3165882150, 138825464, 1809832177, 2454597155, 3012100222, 16524728, 3511098, 8990, 1494907624
			},
			.prefetch0 = 1630,
			.prefetch1 = 48472,
			.ram = negw_final_ram_26,
			.ram_len = 26,
		},
		.transactions = negw_transactions_26,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "027 NEG.w (A1)+ 4459",
		.initial = {
			.regs = {
				958540045, 4285215724, 2692281933, 3071285924, 2950324556, 2538844467, 1595054688, 642835078, 2213313924, 336236648, 3542108042, 3985899434, 249206224, 2931354754, 3907329423, 10919984, 5079070, 33565, 14947814
			},
			.prefetch0 = 17497,
			.prefetch1 = 21595,
			.ram = negw_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				958540045, 4285215724, 2692281933, 3071285924, 2950324556, 2538844467, 1595054688, 642835078, 2213313924, 336236650, 3542108042, 3985899434, 249206224, 2931354754, 3907329423, 10919984, 5079070, 33553, 14947816
			},
			.prefetch0 = 21595,
			.prefetch1 = 19383,
			.ram = negw_final_ram_27,
			.ram_len = 8,
		},
		.transactions = negw_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 NEG.w (A6)+ 445e",
		.initial = {
			.regs = {
				717103816, 2404144332, 3913829821, 2369598793, 3081816871, 2827571293, 2027105021, 1229770931, 326234970, 2353838065, 93308295, 2156033092, 4286942469, 847043546, 2689952257, 865268, 9303810, 8196, 12012802
			},
			.prefetch0 = 17502,
			.prefetch1 = 22420,
			.ram = negw_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				717103816, 2404144332, 3913829821, 2369598793, 3081816871, 2827571293, 2027105021, 1229770931, 326234970, 2353838065, 93308295, 2156033092, 4286942469, 847043546, 2689952259, 865268, 9303796, 8196, 2973531148
			},
			.prefetch0 = 59580,
			.prefetch1 = 44171,
			.ram = negw_final_ram_28,
			.ram_len = 26,
		},
		.transactions = negw_transactions_28,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "029 NEG.w (A0) 4450",
		.initial = {
			.regs = {
				3963299657, 1991649790, 1829610912, 382630655, 4026552048, 1606538076, 3527770760, 1016403664, 4226901103, 3555741129, 2512850448, 583634481, 2482355527, 2464956334, 262310515, 7149808, 14144950, 9994, 3068976
			},
			.prefetch0 = 17488,
			.prefetch1 = 29175,
			.ram = negw_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3963299657, 1991649790, 1829610912, 382630655, 4026552048, 1606538076, 3527770760, 1016403664, 4226901103, 3555741129, 2512850448, 583634481, 2482355527, 2464956334, 262310515, 7149808, 14144936, 9994, 3002613518
			},
			.prefetch0 = 30396,
			.prefetch1 = 16270,
			.ram = negw_final_ram_29,
			.ram_len = 26,
		},
		.transactions = negw_transactions_29,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "030 NEG.w (A5) 4455",
		.initial = {
			.regs = {
				2989240668, 1018890502, 3141947867, 1520598322, 2029405314, 2367038400, 2954765075, 1242533692, 163324231, 3351399523, 2652912932, 2033084041, 3219299594, 974603355, 1380619532, 10676380, 8371252, 32789, 12320316
			},
			.prefetch0 = 17493,
			.prefetch1 = 46366,
			.ram = negw_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2989240668, 1018890502, 3141947867, 1520598322, 2029405314, 2367038400, 2954765075, 1242533692, 163324231, 3351399523, 2652912932, 2033084041, 3219299594, 974603355, 1380619532, 10676380, 8371238, 8213, 378564334
			},
			.prefetch0 = 6399,
			.prefetch1 = 36025,
			.ram = negw_final_ram_30,
			.ram_len = 26,
		},
		.transactions = negw_transactions_30,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "031 NEG.w D2 4442",
		.initial = {
			.regs = {
				1830101302, 2353908443, 715262355, 2627412585, 3622066782, 1928531787, 2846925025, 802206260, 1337154685, 422342798, 3876873088, 1030163237, 3550334421, 3755264452, 2522262481, 8045852, 9127568, 1814, 8661592
			},
			.prefetch0 = 17474,
			.prefetch1 = 21938,
			.ram = negw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1830101302, 2353908443, 715322989, 2627412585, 3622066782, 1928531787, 2846925025, 802206260, 1337154685, 422342798, 3876873088, 1030163237, 3550334421, 3755264452, 2522262481, 8045852, 9127568, 1817, 8661594
			},
			.prefetch0 = 21938,
			.prefetch1 = 9036,
			.ram = negw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = negw_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_NEGW_H */