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

const uint32_t NEGW_TEST_COUNT = 16;
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
};

#endif /* RBT_NEGW_H */