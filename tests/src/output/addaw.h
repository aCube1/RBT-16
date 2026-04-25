#ifndef RBT_ADDAW_H
#define RBT_ADDAW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addaw_initial_ram_0[] = {
		{ .addr = 0x93bad2, .byte = 0xd4 },
		{ .addr = 0x93bad3, .byte = 0xe8 },
		{ .addr = 0x93bad4, .byte = 0x88 },
		{ .addr = 0x93bad5, .byte = 0x4e },
		{ .addr = 0x93bad6, .byte = 0x9a },
		{ .addr = 0x93bad7, .byte = 0x63 },
		{ .addr = 0x00000c, .byte = 0x1e },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0x71 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0x7c71e0, .byte = 0x3b },
		{ .addr = 0x7c71e1, .byte = 0xbe },
		{ .addr = 0x7c71e2, .byte = 0x37 },
		{ .addr = 0x7c71e3, .byte = 0xdb }
};

static const SST_RamByte addaw_final_ram_0[] = {
		{ .addr = 0x93bad2, .byte = 0xd4 },
		{ .addr = 0x93bad3, .byte = 0xe8 },
		{ .addr = 0x93bad4, .byte = 0x88 },
		{ .addr = 0x93bad5, .byte = 0x4e },
		{ .addr = 0x93bad6, .byte = 0x9a },
		{ .addr = 0x93bad7, .byte = 0x63 },
		{ .addr = 0xa6d5da, .byte = 0xba },
		{ .addr = 0xa6d5db, .byte = 0xd4 },
		{ .addr = 0xa6d5d6, .byte = 0x87 },
		{ .addr = 0xa6d5d7, .byte = 0x17 },
		{ .addr = 0xa6d5d8, .byte = 0x00 },
		{ .addr = 0xa6d5d9, .byte = 0x93 },
		{ .addr = 0xa6d5d4, .byte = 0xd4 },
		{ .addr = 0xa6d5d5, .byte = 0xe8 },
		{ .addr = 0xa6d5d2, .byte = 0xe3 },
		{ .addr = 0xa6d5d3, .byte = 0x39 },
		{ .addr = 0xa6d5ce, .byte = 0xd4 },
		{ .addr = 0xa6d5cf, .byte = 0xf1 },
		{ .addr = 0xa6d5d0, .byte = 0x59 },
		{ .addr = 0xa6d5d1, .byte = 0x47 },
		{ .addr = 0x00000c, .byte = 0x1e },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0x71 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0x7c71e0, .byte = 0x3b },
		{ .addr = 0x7c71e1, .byte = 0xbe },
		{ .addr = 0x7c71e2, .byte = 0x37 },
		{ .addr = 0x7c71e3, .byte = 0xdb }
};

static const SST_Transaction addaw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9681622, .data = 39523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4711224, .data = 91, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10933722, .data = 47828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10933718, .data = 34583, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10933720, .data = 147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10933716, .data = 54504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10933714, .data = 58169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10933710, .data = 54513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10933712, .data = 22855, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 29152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8155616, .data = 15294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8155618, .data = 14299, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_1[] = {
		{ .addr = 0x96d020, .byte = 0xdc },
		{ .addr = 0x96d021, .byte = 0xd7 },
		{ .addr = 0x96d022, .byte = 0x76 },
		{ .addr = 0x96d023, .byte = 0x9e },
		{ .addr = 0x90f228, .byte = 0xb6 },
		{ .addr = 0x90f229, .byte = 0x5f },
		{ .addr = 0x96d024, .byte = 0x38 },
		{ .addr = 0x96d025, .byte = 0x05 }
};

static const SST_RamByte addaw_final_ram_1[] = {
		{ .addr = 0x96d020, .byte = 0xdc },
		{ .addr = 0x96d021, .byte = 0xd7 },
		{ .addr = 0x96d022, .byte = 0x76 },
		{ .addr = 0x96d023, .byte = 0x9e },
		{ .addr = 0x90f228, .byte = 0xb6 },
		{ .addr = 0x90f229, .byte = 0x5f },
		{ .addr = 0x96d024, .byte = 0x38 },
		{ .addr = 0x96d025, .byte = 0x05 }
};

static const SST_Transaction addaw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9499176, .data = 46687, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9883684, .data = 14341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_2[] = {
		{ .addr = 0xee70f0, .byte = 0xd4 },
		{ .addr = 0xee70f1, .byte = 0xef },
		{ .addr = 0xee70f2, .byte = 0xfd },
		{ .addr = 0xee70f3, .byte = 0xc5 },
		{ .addr = 0xee70f4, .byte = 0x28 },
		{ .addr = 0xee70f5, .byte = 0x7b },
		{ .addr = 0x00000c, .byte = 0xc4 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x44 },
		{ .addr = 0x00000f, .byte = 0xa6 },
		{ .addr = 0x6644a6, .byte = 0x7a },
		{ .addr = 0x6644a7, .byte = 0x3a },
		{ .addr = 0x6644a8, .byte = 0x3f },
		{ .addr = 0x6644a9, .byte = 0xa9 }
};

static const SST_RamByte addaw_final_ram_2[] = {
		{ .addr = 0xee70f0, .byte = 0xd4 },
		{ .addr = 0xee70f1, .byte = 0xef },
		{ .addr = 0xee70f2, .byte = 0xfd },
		{ .addr = 0xee70f3, .byte = 0xc5 },
		{ .addr = 0xee70f4, .byte = 0x28 },
		{ .addr = 0xee70f5, .byte = 0x7b },
		{ .addr = 0x5fff40, .byte = 0x70 },
		{ .addr = 0x5fff41, .byte = 0xf2 },
		{ .addr = 0x5fff3c, .byte = 0x27 },
		{ .addr = 0x5fff3d, .byte = 0x05 },
		{ .addr = 0x5fff3e, .byte = 0x00 },
		{ .addr = 0x5fff3f, .byte = 0xee },
		{ .addr = 0x5fff3a, .byte = 0xd4 },
		{ .addr = 0x5fff3b, .byte = 0xef },
		{ .addr = 0x5fff38, .byte = 0xfd },
		{ .addr = 0x5fff39, .byte = 0x07 },
		{ .addr = 0x5fff34, .byte = 0xd4 },
		{ .addr = 0x5fff35, .byte = 0xf5 },
		{ .addr = 0x5fff36, .byte = 0x00 },
		{ .addr = 0x5fff37, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0xc4 },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0x44 },
		{ .addr = 0x00000f, .byte = 0xa6 },
		{ .addr = 0x6644a6, .byte = 0x7a },
		{ .addr = 0x6644a7, .byte = 0x3a },
		{ .addr = 0x6644a8, .byte = 0x3f },
		{ .addr = 0x6644a9, .byte = 0xa9 }
};

static const SST_Transaction addaw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15626484, .data = 10363, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6290694, .data = 3753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291264, .data = 28914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291260, .data = 9989, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291262, .data = 238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291258, .data = 54511, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291256, .data = 64775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291252, .data = 54517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6291254, .data = 95, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17574, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6702246, .data = 31290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6702248, .data = 16297, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_3[] = {
		{ .addr = 0x68ca8a, .byte = 0xda },
		{ .addr = 0x68ca8b, .byte = 0xe5 },
		{ .addr = 0x68ca8c, .byte = 0x6f },
		{ .addr = 0x68ca8d, .byte = 0xf8 },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0x0c },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0x0ccd3e, .byte = 0x83 },
		{ .addr = 0x0ccd3f, .byte = 0x0e },
		{ .addr = 0x0ccd40, .byte = 0xd4 },
		{ .addr = 0x0ccd41, .byte = 0xff }
};

static const SST_RamByte addaw_final_ram_3[] = {
		{ .addr = 0x68ca8a, .byte = 0xda },
		{ .addr = 0x68ca8b, .byte = 0xe5 },
		{ .addr = 0x68ca8c, .byte = 0x6f },
		{ .addr = 0x68ca8d, .byte = 0xf8 },
		{ .addr = 0x3144f2, .byte = 0xca },
		{ .addr = 0x3144f3, .byte = 0x8e },
		{ .addr = 0x3144ee, .byte = 0x25 },
		{ .addr = 0x3144ef, .byte = 0x16 },
		{ .addr = 0x3144f0, .byte = 0x00 },
		{ .addr = 0x3144f1, .byte = 0x68 },
		{ .addr = 0x3144ec, .byte = 0xda },
		{ .addr = 0x3144ed, .byte = 0xe5 },
		{ .addr = 0x3144ea, .byte = 0xa1 },
		{ .addr = 0x3144eb, .byte = 0x2f },
		{ .addr = 0x3144e6, .byte = 0xda },
		{ .addr = 0x3144e7, .byte = 0xf5 },
		{ .addr = 0x3144e8, .byte = 0x0f },
		{ .addr = 0x3144e9, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0x0c },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0x0ccd3e, .byte = 0x83 },
		{ .addr = 0x0ccd3f, .byte = 0x0e },
		{ .addr = 0x0ccd40, .byte = 0xd4 },
		{ .addr = 0x0ccd41, .byte = 0xff }
};

static const SST_Transaction addaw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3186990, .data = 48252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3228914, .data = 51854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3228910, .data = 9494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3228912, .data = 104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3228908, .data = 56037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3228906, .data = 41263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3228902, .data = 56053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3228904, .data = 3888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 838974, .data = 33550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 838976, .data = 54527, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_4[] = {
		{ .addr = 0x03cb84, .byte = 0xd8 },
		{ .addr = 0x03cb85, .byte = 0xc0 },
		{ .addr = 0x03cb86, .byte = 0x2f },
		{ .addr = 0x03cb87, .byte = 0x65 },
		{ .addr = 0x03cb88, .byte = 0xca },
		{ .addr = 0x03cb89, .byte = 0xf2 }
};

static const SST_RamByte addaw_final_ram_4[] = {
		{ .addr = 0x03cb84, .byte = 0xd8 },
		{ .addr = 0x03cb85, .byte = 0xc0 },
		{ .addr = 0x03cb86, .byte = 0x2f },
		{ .addr = 0x03cb87, .byte = 0x65 },
		{ .addr = 0x03cb88, .byte = 0xca },
		{ .addr = 0x03cb89, .byte = 0xf2 }
};

static const SST_Transaction addaw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 248712, .data = 51954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_5[] = {
		{ .addr = 0x8063b0, .byte = 0xd4 },
		{ .addr = 0x8063b1, .byte = 0xc2 },
		{ .addr = 0x8063b2, .byte = 0xa6 },
		{ .addr = 0x8063b3, .byte = 0x02 },
		{ .addr = 0x8063b4, .byte = 0x8f },
		{ .addr = 0x8063b5, .byte = 0x13 }
};

static const SST_RamByte addaw_final_ram_5[] = {
		{ .addr = 0x8063b0, .byte = 0xd4 },
		{ .addr = 0x8063b1, .byte = 0xc2 },
		{ .addr = 0x8063b2, .byte = 0xa6 },
		{ .addr = 0x8063b3, .byte = 0x02 },
		{ .addr = 0x8063b4, .byte = 0x8f },
		{ .addr = 0x8063b5, .byte = 0x13 }
};

static const SST_Transaction addaw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8414132, .data = 36627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_6[] = {
		{ .addr = 0xbd644a, .byte = 0xd6 },
		{ .addr = 0xbd644b, .byte = 0xcd },
		{ .addr = 0xbd644c, .byte = 0xde },
		{ .addr = 0xbd644d, .byte = 0x22 },
		{ .addr = 0xbd644e, .byte = 0xfe },
		{ .addr = 0xbd644f, .byte = 0xd0 }
};

static const SST_RamByte addaw_final_ram_6[] = {
		{ .addr = 0xbd644a, .byte = 0xd6 },
		{ .addr = 0xbd644b, .byte = 0xcd },
		{ .addr = 0xbd644c, .byte = 0xde },
		{ .addr = 0xbd644d, .byte = 0x22 },
		{ .addr = 0xbd644e, .byte = 0xfe },
		{ .addr = 0xbd644f, .byte = 0xd0 }
};

static const SST_Transaction addaw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12411982, .data = 65232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_7[] = {
		{ .addr = 0xf8dfc8, .byte = 0xde },
		{ .addr = 0xf8dfc9, .byte = 0xe9 },
		{ .addr = 0xf8dfca, .byte = 0xde },
		{ .addr = 0xf8dfcb, .byte = 0xb5 },
		{ .addr = 0xf8dfcc, .byte = 0x24 },
		{ .addr = 0xf8dfcd, .byte = 0x87 },
		{ .addr = 0x698a48, .byte = 0xa6 },
		{ .addr = 0x698a49, .byte = 0x03 },
		{ .addr = 0xf8dfce, .byte = 0x75 },
		{ .addr = 0xf8dfcf, .byte = 0xa7 }
};

static const SST_RamByte addaw_final_ram_7[] = {
		{ .addr = 0xf8dfc8, .byte = 0xde },
		{ .addr = 0xf8dfc9, .byte = 0xe9 },
		{ .addr = 0xf8dfca, .byte = 0xde },
		{ .addr = 0xf8dfcb, .byte = 0xb5 },
		{ .addr = 0xf8dfcc, .byte = 0x24 },
		{ .addr = 0xf8dfcd, .byte = 0x87 },
		{ .addr = 0x698a48, .byte = 0xa6 },
		{ .addr = 0x698a49, .byte = 0x03 },
		{ .addr = 0xf8dfce, .byte = 0x75 },
		{ .addr = 0xf8dfcf, .byte = 0xa7 }
};

static const SST_Transaction addaw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16310220, .data = 9351, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6916680, .data = 42499, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16310222, .data = 30119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_8[] = {
		{ .addr = 0xab55c4, .byte = 0xda },
		{ .addr = 0xab55c5, .byte = 0xf0 },
		{ .addr = 0xab55c6, .byte = 0x93 },
		{ .addr = 0xab55c7, .byte = 0x7f },
		{ .addr = 0xab55c8, .byte = 0xca },
		{ .addr = 0xab55c9, .byte = 0xa4 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x42cd34, .byte = 0xa2 },
		{ .addr = 0x42cd35, .byte = 0xe3 },
		{ .addr = 0x42cd36, .byte = 0x0b },
		{ .addr = 0x42cd37, .byte = 0xa1 }
};

static const SST_RamByte addaw_final_ram_8[] = {
		{ .addr = 0xab55c4, .byte = 0xda },
		{ .addr = 0xab55c5, .byte = 0xf0 },
		{ .addr = 0xab55c6, .byte = 0x93 },
		{ .addr = 0xab55c7, .byte = 0x7f },
		{ .addr = 0xab55c8, .byte = 0xca },
		{ .addr = 0xab55c9, .byte = 0xa4 },
		{ .addr = 0x0be1d2, .byte = 0x55 },
		{ .addr = 0x0be1d3, .byte = 0xc6 },
		{ .addr = 0x0be1ce, .byte = 0xa6 },
		{ .addr = 0x0be1cf, .byte = 0x0e },
		{ .addr = 0x0be1d0, .byte = 0x00 },
		{ .addr = 0x0be1d1, .byte = 0xab },
		{ .addr = 0x0be1cc, .byte = 0xda },
		{ .addr = 0x0be1cd, .byte = 0xf0 },
		{ .addr = 0x0be1ca, .byte = 0x15 },
		{ .addr = 0x0be1cb, .byte = 0x9d },
		{ .addr = 0x0be1c6, .byte = 0xda },
		{ .addr = 0x0be1c7, .byte = 0xf5 },
		{ .addr = 0x0be1c8, .byte = 0x4b },
		{ .addr = 0x0be1c9, .byte = 0x31 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x42cd34, .byte = 0xa2 },
		{ .addr = 0x42cd35, .byte = 0xe3 },
		{ .addr = 0x42cd36, .byte = 0x0b },
		{ .addr = 0x42cd37, .byte = 0xa1 }
};

static const SST_Transaction addaw_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11228616, .data = 51876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216796, .data = 4295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 778706, .data = 21958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 778702, .data = 42510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 778704, .data = 171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 778700, .data = 56048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 778698, .data = 5533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 778694, .data = 56053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 778696, .data = 19249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64834, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4377908, .data = 41699, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4377910, .data = 2977, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_9[] = {
		{ .addr = 0x36dec0, .byte = 0xda },
		{ .addr = 0x36dec1, .byte = 0xdb },
		{ .addr = 0x36dec2, .byte = 0x81 },
		{ .addr = 0x36dec3, .byte = 0xb2 },
		{ .addr = 0x394954, .byte = 0xba },
		{ .addr = 0x394955, .byte = 0xb7 },
		{ .addr = 0x36dec4, .byte = 0x53 },
		{ .addr = 0x36dec5, .byte = 0x30 }
};

static const SST_RamByte addaw_final_ram_9[] = {
		{ .addr = 0x36dec0, .byte = 0xda },
		{ .addr = 0x36dec1, .byte = 0xdb },
		{ .addr = 0x36dec2, .byte = 0x81 },
		{ .addr = 0x36dec3, .byte = 0xb2 },
		{ .addr = 0x394954, .byte = 0xba },
		{ .addr = 0x394955, .byte = 0xb7 },
		{ .addr = 0x36dec4, .byte = 0x53 },
		{ .addr = 0x36dec5, .byte = 0x30 }
};

static const SST_Transaction addaw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3754324, .data = 47799, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3595972, .data = 21296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_10[] = {
		{ .addr = 0x2636d4, .byte = 0xd6 },
		{ .addr = 0x2636d5, .byte = 0xd8 },
		{ .addr = 0x2636d6, .byte = 0xa0 },
		{ .addr = 0x2636d7, .byte = 0x17 },
		{ .addr = 0x76dbb0, .byte = 0xae },
		{ .addr = 0x76dbb1, .byte = 0xe6 },
		{ .addr = 0x2636d8, .byte = 0x7c },
		{ .addr = 0x2636d9, .byte = 0x83 }
};

static const SST_RamByte addaw_final_ram_10[] = {
		{ .addr = 0x2636d4, .byte = 0xd6 },
		{ .addr = 0x2636d5, .byte = 0xd8 },
		{ .addr = 0x2636d6, .byte = 0xa0 },
		{ .addr = 0x2636d7, .byte = 0x17 },
		{ .addr = 0x76dbb0, .byte = 0xae },
		{ .addr = 0x76dbb1, .byte = 0xe6 },
		{ .addr = 0x2636d8, .byte = 0x7c },
		{ .addr = 0x2636d9, .byte = 0x83 }
};

static const SST_Transaction addaw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7789488, .data = 44774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2504408, .data = 31875, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_11[] = {
		{ .addr = 0xf66eba, .byte = 0xd2 },
		{ .addr = 0xf66ebb, .byte = 0xcb },
		{ .addr = 0xf66ebc, .byte = 0x5c },
		{ .addr = 0xf66ebd, .byte = 0xf3 },
		{ .addr = 0xf66ebe, .byte = 0xc9 },
		{ .addr = 0xf66ebf, .byte = 0x7c }
};

static const SST_RamByte addaw_final_ram_11[] = {
		{ .addr = 0xf66eba, .byte = 0xd2 },
		{ .addr = 0xf66ebb, .byte = 0xcb },
		{ .addr = 0xf66ebc, .byte = 0x5c },
		{ .addr = 0xf66ebd, .byte = 0xf3 },
		{ .addr = 0xf66ebe, .byte = 0xc9 },
		{ .addr = 0xf66ebf, .byte = 0x7c }
};

static const SST_Transaction addaw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16150206, .data = 51580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_12[] = {
		{ .addr = 0x9a8054, .byte = 0xd0 },
		{ .addr = 0x9a8055, .byte = 0xf4 },
		{ .addr = 0x9a8056, .byte = 0xb9 },
		{ .addr = 0x9a8057, .byte = 0x27 },
		{ .addr = 0x9a8058, .byte = 0xe6 },
		{ .addr = 0x9a8059, .byte = 0xae },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0xbe },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x52be14, .byte = 0xbc },
		{ .addr = 0x52be15, .byte = 0xae },
		{ .addr = 0x52be16, .byte = 0xc1 },
		{ .addr = 0x52be17, .byte = 0x4d }
};

static const SST_RamByte addaw_final_ram_12[] = {
		{ .addr = 0x9a8054, .byte = 0xd0 },
		{ .addr = 0x9a8055, .byte = 0xf4 },
		{ .addr = 0x9a8056, .byte = 0xb9 },
		{ .addr = 0x9a8057, .byte = 0x27 },
		{ .addr = 0x9a8058, .byte = 0xe6 },
		{ .addr = 0x9a8059, .byte = 0xae },
		{ .addr = 0x3dd500, .byte = 0x80 },
		{ .addr = 0x3dd501, .byte = 0x56 },
		{ .addr = 0x3dd4fc, .byte = 0xa2 },
		{ .addr = 0x3dd4fd, .byte = 0x06 },
		{ .addr = 0x3dd4fe, .byte = 0x00 },
		{ .addr = 0x3dd4ff, .byte = 0x9a },
		{ .addr = 0x3dd4fa, .byte = 0xd0 },
		{ .addr = 0x3dd4fb, .byte = 0xf4 },
		{ .addr = 0x3dd4f8, .byte = 0x31 },
		{ .addr = 0x3dd4f9, .byte = 0x6b },
		{ .addr = 0x3dd4f4, .byte = 0xd0 },
		{ .addr = 0x3dd4f5, .byte = 0xf5 },
		{ .addr = 0x3dd4f6, .byte = 0x8f },
		{ .addr = 0x3dd4f7, .byte = 0x2c },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0xbe },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x52be14, .byte = 0xbc },
		{ .addr = 0x52be15, .byte = 0xae },
		{ .addr = 0x52be16, .byte = 0xc1 },
		{ .addr = 0x52be17, .byte = 0x4d }
};

static const SST_Transaction addaw_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10125400, .data = 59054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2896234, .data = 12257, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4052224, .data = 32854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4052220, .data = 41478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4052222, .data = 154, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4052218, .data = 53492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4052216, .data = 12651, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4052212, .data = 53493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4052214, .data = 36652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5422612, .data = 48302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5422614, .data = 49485, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_13[] = {
		{ .addr = 0x6653fc, .byte = 0xd0 },
		{ .addr = 0x6653fd, .byte = 0xde },
		{ .addr = 0x6653fe, .byte = 0xbf },
		{ .addr = 0x6653ff, .byte = 0x37 },
		{ .addr = 0x347b48, .byte = 0x26 },
		{ .addr = 0x347b49, .byte = 0xaa },
		{ .addr = 0x665400, .byte = 0x7f },
		{ .addr = 0x665401, .byte = 0xc1 }
};

static const SST_RamByte addaw_final_ram_13[] = {
		{ .addr = 0x6653fc, .byte = 0xd0 },
		{ .addr = 0x6653fd, .byte = 0xde },
		{ .addr = 0x6653fe, .byte = 0xbf },
		{ .addr = 0x6653ff, .byte = 0x37 },
		{ .addr = 0x347b48, .byte = 0x26 },
		{ .addr = 0x347b49, .byte = 0xaa },
		{ .addr = 0x665400, .byte = 0x7f },
		{ .addr = 0x665401, .byte = 0xc1 }
};

static const SST_Transaction addaw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3439432, .data = 9898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6706176, .data = 32705, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_14[] = {
		{ .addr = 0x0bd116, .byte = 0xd8 },
		{ .addr = 0x0bd117, .byte = 0xc7 },
		{ .addr = 0x0bd118, .byte = 0x05 },
		{ .addr = 0x0bd119, .byte = 0x7d },
		{ .addr = 0x0bd11a, .byte = 0x9f },
		{ .addr = 0x0bd11b, .byte = 0xac }
};

static const SST_RamByte addaw_final_ram_14[] = {
		{ .addr = 0x0bd116, .byte = 0xd8 },
		{ .addr = 0x0bd117, .byte = 0xc7 },
		{ .addr = 0x0bd118, .byte = 0x05 },
		{ .addr = 0x0bd119, .byte = 0x7d },
		{ .addr = 0x0bd11a, .byte = 0x9f },
		{ .addr = 0x0bd11b, .byte = 0xac }
};

static const SST_Transaction addaw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 774426, .data = 40876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_15[] = {
		{ .addr = 0xb5c6c2, .byte = 0xd2 },
		{ .addr = 0xb5c6c3, .byte = 0xc4 },
		{ .addr = 0xb5c6c4, .byte = 0xb4 },
		{ .addr = 0xb5c6c5, .byte = 0xdc },
		{ .addr = 0xb5c6c6, .byte = 0x32 },
		{ .addr = 0xb5c6c7, .byte = 0x8f }
};

static const SST_RamByte addaw_final_ram_15[] = {
		{ .addr = 0xb5c6c2, .byte = 0xd2 },
		{ .addr = 0xb5c6c3, .byte = 0xc4 },
		{ .addr = 0xb5c6c4, .byte = 0xb4 },
		{ .addr = 0xb5c6c5, .byte = 0xdc },
		{ .addr = 0xb5c6c6, .byte = 0x32 },
		{ .addr = 0xb5c6c7, .byte = 0x8f }
};

static const SST_Transaction addaw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11912902, .data = 12943, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_16[] = {
		{ .addr = 0x27d72a, .byte = 0xd8 },
		{ .addr = 0x27d72b, .byte = 0xfb },
		{ .addr = 0x27d72c, .byte = 0xc9 },
		{ .addr = 0x27d72d, .byte = 0x56 },
		{ .addr = 0x27d72e, .byte = 0x52 },
		{ .addr = 0x27d72f, .byte = 0xb6 },
		{ .addr = 0xb2752c, .byte = 0x67 },
		{ .addr = 0xb2752d, .byte = 0x27 },
		{ .addr = 0x27d730, .byte = 0x08 },
		{ .addr = 0x27d731, .byte = 0xd1 }
};

static const SST_RamByte addaw_final_ram_16[] = {
		{ .addr = 0x27d72a, .byte = 0xd8 },
		{ .addr = 0x27d72b, .byte = 0xfb },
		{ .addr = 0x27d72c, .byte = 0xc9 },
		{ .addr = 0x27d72d, .byte = 0x56 },
		{ .addr = 0x27d72e, .byte = 0x52 },
		{ .addr = 0x27d72f, .byte = 0xb6 },
		{ .addr = 0xb2752c, .byte = 0x67 },
		{ .addr = 0xb2752d, .byte = 0x27 },
		{ .addr = 0x27d730, .byte = 0x08 },
		{ .addr = 0x27d731, .byte = 0xd1 }
};

static const SST_Transaction addaw_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2610990, .data = 21174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11695404, .data = 26407, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2610992, .data = 2257, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_17[] = {
		{ .addr = 0x75ba60, .byte = 0xda },
		{ .addr = 0x75ba61, .byte = 0xe0 },
		{ .addr = 0x75ba62, .byte = 0xef },
		{ .addr = 0x75ba63, .byte = 0xc4 },
		{ .addr = 0x49fd14, .byte = 0xb5 },
		{ .addr = 0x49fd15, .byte = 0xe5 },
		{ .addr = 0x75ba64, .byte = 0xc9 },
		{ .addr = 0x75ba65, .byte = 0x9e }
};

static const SST_RamByte addaw_final_ram_17[] = {
		{ .addr = 0x75ba60, .byte = 0xda },
		{ .addr = 0x75ba61, .byte = 0xe0 },
		{ .addr = 0x75ba62, .byte = 0xef },
		{ .addr = 0x75ba63, .byte = 0xc4 },
		{ .addr = 0x49fd14, .byte = 0xb5 },
		{ .addr = 0x49fd15, .byte = 0xe5 },
		{ .addr = 0x75ba64, .byte = 0xc9 },
		{ .addr = 0x75ba65, .byte = 0x9e }
};

static const SST_Transaction addaw_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4848916, .data = 46565, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7715428, .data = 51614, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_18[] = {
		{ .addr = 0xd83bd0, .byte = 0xd6 },
		{ .addr = 0xd83bd1, .byte = 0xd6 },
		{ .addr = 0xd83bd2, .byte = 0x02 },
		{ .addr = 0xd83bd3, .byte = 0x62 },
		{ .addr = 0x1c71d8, .byte = 0x82 },
		{ .addr = 0x1c71d9, .byte = 0x5d },
		{ .addr = 0xd83bd4, .byte = 0xbd },
		{ .addr = 0xd83bd5, .byte = 0xf5 }
};

static const SST_RamByte addaw_final_ram_18[] = {
		{ .addr = 0xd83bd0, .byte = 0xd6 },
		{ .addr = 0xd83bd1, .byte = 0xd6 },
		{ .addr = 0xd83bd2, .byte = 0x02 },
		{ .addr = 0xd83bd3, .byte = 0x62 },
		{ .addr = 0x1c71d8, .byte = 0x82 },
		{ .addr = 0x1c71d9, .byte = 0x5d },
		{ .addr = 0xd83bd4, .byte = 0xbd },
		{ .addr = 0xd83bd5, .byte = 0xf5 }
};

static const SST_Transaction addaw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1864152, .data = 33373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14171092, .data = 48629, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_19[] = {
		{ .addr = 0xc7c91e, .byte = 0xd6 },
		{ .addr = 0xc7c91f, .byte = 0xc2 },
		{ .addr = 0xc7c920, .byte = 0xce },
		{ .addr = 0xc7c921, .byte = 0xb0 },
		{ .addr = 0xc7c922, .byte = 0xcb },
		{ .addr = 0xc7c923, .byte = 0x8c }
};

static const SST_RamByte addaw_final_ram_19[] = {
		{ .addr = 0xc7c91e, .byte = 0xd6 },
		{ .addr = 0xc7c91f, .byte = 0xc2 },
		{ .addr = 0xc7c920, .byte = 0xce },
		{ .addr = 0xc7c921, .byte = 0xb0 },
		{ .addr = 0xc7c922, .byte = 0xcb },
		{ .addr = 0xc7c923, .byte = 0x8c }
};

static const SST_Transaction addaw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13093154, .data = 52108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_20[] = {
		{ .addr = 0xf88010, .byte = 0xd4 },
		{ .addr = 0xf88011, .byte = 0xd3 },
		{ .addr = 0xf88012, .byte = 0xbf },
		{ .addr = 0xf88013, .byte = 0x58 },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0xe2 },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0xd0e2d2, .byte = 0x2a },
		{ .addr = 0xd0e2d3, .byte = 0x79 },
		{ .addr = 0xd0e2d4, .byte = 0xc8 },
		{ .addr = 0xd0e2d5, .byte = 0x17 }
};

static const SST_RamByte addaw_final_ram_20[] = {
		{ .addr = 0xf88010, .byte = 0xd4 },
		{ .addr = 0xf88011, .byte = 0xd3 },
		{ .addr = 0xf88012, .byte = 0xbf },
		{ .addr = 0xf88013, .byte = 0x58 },
		{ .addr = 0x50beba, .byte = 0x80 },
		{ .addr = 0x50bebb, .byte = 0x12 },
		{ .addr = 0x50beb6, .byte = 0x21 },
		{ .addr = 0x50beb7, .byte = 0x0c },
		{ .addr = 0x50beb8, .byte = 0x00 },
		{ .addr = 0x50beb9, .byte = 0xf8 },
		{ .addr = 0x50beb4, .byte = 0xd4 },
		{ .addr = 0x50beb5, .byte = 0xd3 },
		{ .addr = 0x50beb2, .byte = 0xf1 },
		{ .addr = 0x50beb3, .byte = 0xd9 },
		{ .addr = 0x50beae, .byte = 0xd4 },
		{ .addr = 0x50beaf, .byte = 0xd5 },
		{ .addr = 0x50beb0, .byte = 0xfa },
		{ .addr = 0x50beb1, .byte = 0x0a },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0xd0 },
		{ .addr = 0x00000e, .byte = 0xe2 },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0xd0e2d2, .byte = 0x2a },
		{ .addr = 0xd0e2d3, .byte = 0x79 },
		{ .addr = 0xd0e2d4, .byte = 0xc8 },
		{ .addr = 0xd0e2d5, .byte = 0x17 }
};

static const SST_Transaction addaw_transactions_20[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 717272, .data = 61754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5291706, .data = 32786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5291702, .data = 8460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5291704, .data = 248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5291700, .data = 54483, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5291698, .data = 61913, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5291694, .data = 54485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5291696, .data = 64010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 26832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58066, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13689554, .data = 10873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13689556, .data = 51223, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_21[] = {
		{ .addr = 0x5e34d8, .byte = 0xda },
		{ .addr = 0x5e34d9, .byte = 0xcc },
		{ .addr = 0x5e34da, .byte = 0xcc },
		{ .addr = 0x5e34db, .byte = 0x5b },
		{ .addr = 0x5e34dc, .byte = 0xab },
		{ .addr = 0x5e34dd, .byte = 0xcc }
};

static const SST_RamByte addaw_final_ram_21[] = {
		{ .addr = 0x5e34d8, .byte = 0xda },
		{ .addr = 0x5e34d9, .byte = 0xcc },
		{ .addr = 0x5e34da, .byte = 0xcc },
		{ .addr = 0x5e34db, .byte = 0x5b },
		{ .addr = 0x5e34dc, .byte = 0xab },
		{ .addr = 0x5e34dd, .byte = 0xcc }
};

static const SST_Transaction addaw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6173916, .data = 43980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_22[] = {
		{ .addr = 0x3ec358, .byte = 0xdc },
		{ .addr = 0x3ec359, .byte = 0xd2 },
		{ .addr = 0x3ec35a, .byte = 0x74 },
		{ .addr = 0x3ec35b, .byte = 0xc7 },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0xd8 },
		{ .addr = 0x56d5d8, .byte = 0x0c },
		{ .addr = 0x56d5d9, .byte = 0x5a },
		{ .addr = 0x56d5da, .byte = 0xa2 },
		{ .addr = 0x56d5db, .byte = 0x5d }
};

static const SST_RamByte addaw_final_ram_22[] = {
		{ .addr = 0x3ec358, .byte = 0xdc },
		{ .addr = 0x3ec359, .byte = 0xd2 },
		{ .addr = 0x3ec35a, .byte = 0x74 },
		{ .addr = 0x3ec35b, .byte = 0xc7 },
		{ .addr = 0x6200e4, .byte = 0xc3 },
		{ .addr = 0x6200e5, .byte = 0x5a },
		{ .addr = 0x6200e0, .byte = 0x24 },
		{ .addr = 0x6200e1, .byte = 0x13 },
		{ .addr = 0x6200e2, .byte = 0x00 },
		{ .addr = 0x6200e3, .byte = 0x3e },
		{ .addr = 0x6200de, .byte = 0xdc },
		{ .addr = 0x6200df, .byte = 0xd2 },
		{ .addr = 0x6200dc, .byte = 0x43 },
		{ .addr = 0x6200dd, .byte = 0xe1 },
		{ .addr = 0x6200d8, .byte = 0xdc },
		{ .addr = 0x6200d9, .byte = 0xd5 },
		{ .addr = 0x6200da, .byte = 0x77 },
		{ .addr = 0x6200db, .byte = 0x14 },
		{ .addr = 0x00000c, .byte = 0x3e },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0xd8 },
		{ .addr = 0x56d5d8, .byte = 0x0c },
		{ .addr = 0x56d5d9, .byte = 0x5a },
		{ .addr = 0x56d5da, .byte = 0xa2 },
		{ .addr = 0x56d5db, .byte = 0x5d }
};

static const SST_Transaction addaw_transactions_22[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1328096, .data = 55378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6422756, .data = 50010, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6422752, .data = 9235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6422754, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6422750, .data = 56530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6422748, .data = 17377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6422744, .data = 56533, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6422746, .data = 30484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5690840, .data = 3162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5690842, .data = 41565, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_23[] = {
		{ .addr = 0xa8b0fe, .byte = 0xd8 },
		{ .addr = 0xa8b0ff, .byte = 0xeb },
		{ .addr = 0xa8b100, .byte = 0xad },
		{ .addr = 0xa8b101, .byte = 0xd5 },
		{ .addr = 0xa8b102, .byte = 0x64 },
		{ .addr = 0xa8b103, .byte = 0x3f },
		{ .addr = 0x8a4b38, .byte = 0xd1 },
		{ .addr = 0x8a4b39, .byte = 0xb7 },
		{ .addr = 0xa8b104, .byte = 0x0e },
		{ .addr = 0xa8b105, .byte = 0x07 }
};

static const SST_RamByte addaw_final_ram_23[] = {
		{ .addr = 0xa8b0fe, .byte = 0xd8 },
		{ .addr = 0xa8b0ff, .byte = 0xeb },
		{ .addr = 0xa8b100, .byte = 0xad },
		{ .addr = 0xa8b101, .byte = 0xd5 },
		{ .addr = 0xa8b102, .byte = 0x64 },
		{ .addr = 0xa8b103, .byte = 0x3f },
		{ .addr = 0x8a4b38, .byte = 0xd1 },
		{ .addr = 0x8a4b39, .byte = 0xb7 },
		{ .addr = 0xa8b104, .byte = 0x0e },
		{ .addr = 0xa8b105, .byte = 0x07 }
};

static const SST_Transaction addaw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11055362, .data = 25663, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9063224, .data = 53687, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11055364, .data = 3591, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_24[] = {
		{ .addr = 0x662690, .byte = 0xd0 },
		{ .addr = 0x662691, .byte = 0xd0 },
		{ .addr = 0x662692, .byte = 0x7c },
		{ .addr = 0x662693, .byte = 0x1c },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x57 },
		{ .addr = 0x00000f, .byte = 0x64 },
		{ .addr = 0xba5764, .byte = 0x52 },
		{ .addr = 0xba5765, .byte = 0xfe },
		{ .addr = 0xba5766, .byte = 0x7a },
		{ .addr = 0xba5767, .byte = 0x76 }
};

static const SST_RamByte addaw_final_ram_24[] = {
		{ .addr = 0x662690, .byte = 0xd0 },
		{ .addr = 0x662691, .byte = 0xd0 },
		{ .addr = 0x662692, .byte = 0x7c },
		{ .addr = 0x662693, .byte = 0x1c },
		{ .addr = 0xc96cea, .byte = 0x26 },
		{ .addr = 0xc96ceb, .byte = 0x92 },
		{ .addr = 0xc96ce6, .byte = 0x04 },
		{ .addr = 0xc96ce7, .byte = 0x18 },
		{ .addr = 0xc96ce8, .byte = 0x00 },
		{ .addr = 0xc96ce9, .byte = 0x66 },
		{ .addr = 0xc96ce4, .byte = 0xd0 },
		{ .addr = 0xc96ce5, .byte = 0xd0 },
		{ .addr = 0xc96ce2, .byte = 0x5b },
		{ .addr = 0xc96ce3, .byte = 0xe3 },
		{ .addr = 0xc96cde, .byte = 0xd0 },
		{ .addr = 0xc96cdf, .byte = 0xd1 },
		{ .addr = 0xc96ce0, .byte = 0xe2 },
		{ .addr = 0xc96ce1, .byte = 0x61 },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x57 },
		{ .addr = 0x00000f, .byte = 0x64 },
		{ .addr = 0xba5764, .byte = 0x52 },
		{ .addr = 0xba5765, .byte = 0xfe },
		{ .addr = 0xba5766, .byte = 0x7a },
		{ .addr = 0xba5767, .byte = 0x76 }
};

static const SST_Transaction addaw_transactions_24[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6380514, .data = 35680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13200618, .data = 9874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13200614, .data = 1048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13200616, .data = 102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13200612, .data = 53456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13200610, .data = 23523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13200606, .data = 53457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13200608, .data = 57953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12212068, .data = 21246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12212070, .data = 31350, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_25[] = {
		{ .addr = 0xa847e4, .byte = 0xd8 },
		{ .addr = 0xa847e5, .byte = 0xef },
		{ .addr = 0xa847e6, .byte = 0x7c },
		{ .addr = 0xa847e7, .byte = 0x67 },
		{ .addr = 0xa847e8, .byte = 0x88 },
		{ .addr = 0xa847e9, .byte = 0x66 },
		{ .addr = 0x00000c, .byte = 0x99 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x8a },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x768a22, .byte = 0x44 },
		{ .addr = 0x768a23, .byte = 0xdb },
		{ .addr = 0x768a24, .byte = 0xaa },
		{ .addr = 0x768a25, .byte = 0x29 }
};

static const SST_RamByte addaw_final_ram_25[] = {
		{ .addr = 0xa847e4, .byte = 0xd8 },
		{ .addr = 0xa847e5, .byte = 0xef },
		{ .addr = 0xa847e6, .byte = 0x7c },
		{ .addr = 0xa847e7, .byte = 0x67 },
		{ .addr = 0xa847e8, .byte = 0x88 },
		{ .addr = 0xa847e9, .byte = 0x66 },
		{ .addr = 0xc32b68, .byte = 0x47 },
		{ .addr = 0xc32b69, .byte = 0xe6 },
		{ .addr = 0xc32b64, .byte = 0x03 },
		{ .addr = 0xc32b65, .byte = 0x14 },
		{ .addr = 0xc32b66, .byte = 0x00 },
		{ .addr = 0xc32b67, .byte = 0xa8 },
		{ .addr = 0xc32b62, .byte = 0xd8 },
		{ .addr = 0xc32b63, .byte = 0xef },
		{ .addr = 0xc32b60, .byte = 0x33 },
		{ .addr = 0xc32b61, .byte = 0x47 },
		{ .addr = 0xc32b5c, .byte = 0xd8 },
		{ .addr = 0xc32b5d, .byte = 0xf1 },
		{ .addr = 0xc32b5e, .byte = 0x00 },
		{ .addr = 0xc32b5f, .byte = 0xd8 },
		{ .addr = 0x00000c, .byte = 0x99 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x8a },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x768a22, .byte = 0x44 },
		{ .addr = 0x768a23, .byte = 0xdb },
		{ .addr = 0x768a24, .byte = 0xaa },
		{ .addr = 0x768a25, .byte = 0x29 }
};

static const SST_Transaction addaw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11028456, .data = 34918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14168902, .data = 18139, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12790632, .data = 18406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12790628, .data = 788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12790630, .data = 168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12790626, .data = 55535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12790624, .data = 13127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12790620, .data = 55537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12790622, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 35362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7768610, .data = 17627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7768612, .data = 43561, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_26[] = {
		{ .addr = 0xfbaa90, .byte = 0xd4 },
		{ .addr = 0xfbaa91, .byte = 0xf1 },
		{ .addr = 0xfbaa92, .byte = 0x60 },
		{ .addr = 0xfbaa93, .byte = 0x58 },
		{ .addr = 0xfbaa94, .byte = 0x0c },
		{ .addr = 0xfbaa95, .byte = 0xc5 },
		{ .addr = 0x00000c, .byte = 0xcd },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0x73 },
		{ .addr = 0x00000f, .byte = 0xee },
		{ .addr = 0x9a73ee, .byte = 0x54 },
		{ .addr = 0x9a73ef, .byte = 0xd8 },
		{ .addr = 0x9a73f0, .byte = 0xde },
		{ .addr = 0x9a73f1, .byte = 0x08 }
};

static const SST_RamByte addaw_final_ram_26[] = {
		{ .addr = 0xfbaa90, .byte = 0xd4 },
		{ .addr = 0xfbaa91, .byte = 0xf1 },
		{ .addr = 0xfbaa92, .byte = 0x60 },
		{ .addr = 0xfbaa93, .byte = 0x58 },
		{ .addr = 0xfbaa94, .byte = 0x0c },
		{ .addr = 0xfbaa95, .byte = 0xc5 },
		{ .addr = 0x5a240e, .byte = 0xaa },
		{ .addr = 0x5a240f, .byte = 0x92 },
		{ .addr = 0x5a240a, .byte = 0x02 },
		{ .addr = 0x5a240b, .byte = 0x16 },
		{ .addr = 0x5a240c, .byte = 0x00 },
		{ .addr = 0x5a240d, .byte = 0xfb },
		{ .addr = 0x5a2408, .byte = 0xd4 },
		{ .addr = 0x5a2409, .byte = 0xf1 },
		{ .addr = 0x5a2406, .byte = 0x3b },
		{ .addr = 0x5a2407, .byte = 0x3d },
		{ .addr = 0x5a2402, .byte = 0xd4 },
		{ .addr = 0x5a2403, .byte = 0xf1 },
		{ .addr = 0x5a2404, .byte = 0x9f },
		{ .addr = 0x5a2405, .byte = 0xcb },
		{ .addr = 0x00000c, .byte = 0xcd },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0x73 },
		{ .addr = 0x00000f, .byte = 0xee },
		{ .addr = 0x9a73ee, .byte = 0x54 },
		{ .addr = 0x9a73ef, .byte = 0xd8 },
		{ .addr = 0x9a73f0, .byte = 0xde },
		{ .addr = 0x9a73f1, .byte = 0x08 }
};

static const SST_Transaction addaw_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16493204, .data = 3269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13318972, .data = 33549, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5907470, .data = 43666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5907466, .data = 534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5907468, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5907464, .data = 54513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5907462, .data = 15165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5907458, .data = 54513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5907460, .data = 40907, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 29678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10122222, .data = 21720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10122224, .data = 56840, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_27[] = {
		{ .addr = 0x7d9e02, .byte = 0xd0 },
		{ .addr = 0x7d9e03, .byte = 0xce },
		{ .addr = 0x7d9e04, .byte = 0x4b },
		{ .addr = 0x7d9e05, .byte = 0xe1 },
		{ .addr = 0x7d9e06, .byte = 0x2e },
		{ .addr = 0x7d9e07, .byte = 0xa6 }
};

static const SST_RamByte addaw_final_ram_27[] = {
		{ .addr = 0x7d9e02, .byte = 0xd0 },
		{ .addr = 0x7d9e03, .byte = 0xce },
		{ .addr = 0x7d9e04, .byte = 0x4b },
		{ .addr = 0x7d9e05, .byte = 0xe1 },
		{ .addr = 0x7d9e06, .byte = 0x2e },
		{ .addr = 0x7d9e07, .byte = 0xa6 }
};

static const SST_Transaction addaw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8232454, .data = 11942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_28[] = {
		{ .addr = 0x57a868, .byte = 0xde },
		{ .addr = 0x57a869, .byte = 0xd4 },
		{ .addr = 0x57a86a, .byte = 0x4a },
		{ .addr = 0x57a86b, .byte = 0xff },
		{ .addr = 0x0b7d18, .byte = 0x0c },
		{ .addr = 0x0b7d19, .byte = 0x87 },
		{ .addr = 0x57a86c, .byte = 0xd7 },
		{ .addr = 0x57a86d, .byte = 0xac }
};

static const SST_RamByte addaw_final_ram_28[] = {
		{ .addr = 0x57a868, .byte = 0xde },
		{ .addr = 0x57a869, .byte = 0xd4 },
		{ .addr = 0x57a86a, .byte = 0x4a },
		{ .addr = 0x57a86b, .byte = 0xff },
		{ .addr = 0x0b7d18, .byte = 0x0c },
		{ .addr = 0x0b7d19, .byte = 0x87 },
		{ .addr = 0x57a86c, .byte = 0xd7 },
		{ .addr = 0x57a86d, .byte = 0xac }
};

static const SST_Transaction addaw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 752920, .data = 3207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5744748, .data = 55212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_29[] = {
		{ .addr = 0x79760c, .byte = 0xde },
		{ .addr = 0x79760d, .byte = 0xf9 },
		{ .addr = 0x79760e, .byte = 0x41 },
		{ .addr = 0x79760f, .byte = 0xd0 },
		{ .addr = 0x797610, .byte = 0xd7 },
		{ .addr = 0x797611, .byte = 0x83 },
		{ .addr = 0x797612, .byte = 0xab },
		{ .addr = 0x797613, .byte = 0x6e },
		{ .addr = 0x00000c, .byte = 0x21 },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0x88 },
		{ .addr = 0x00000f, .byte = 0x84 },
		{ .addr = 0xb08884, .byte = 0x88 },
		{ .addr = 0xb08885, .byte = 0x04 },
		{ .addr = 0xb08886, .byte = 0xa3 },
		{ .addr = 0xb08887, .byte = 0x8e }
};

static const SST_RamByte addaw_final_ram_29[] = {
		{ .addr = 0x79760c, .byte = 0xde },
		{ .addr = 0x79760d, .byte = 0xf9 },
		{ .addr = 0x79760e, .byte = 0x41 },
		{ .addr = 0x79760f, .byte = 0xd0 },
		{ .addr = 0x797610, .byte = 0xd7 },
		{ .addr = 0x797611, .byte = 0x83 },
		{ .addr = 0x797612, .byte = 0xab },
		{ .addr = 0x797613, .byte = 0x6e },
		{ .addr = 0xf6ccd8, .byte = 0x76 },
		{ .addr = 0xf6ccd9, .byte = 0x12 },
		{ .addr = 0xf6ccd4, .byte = 0x25 },
		{ .addr = 0xf6ccd5, .byte = 0x0a },
		{ .addr = 0xf6ccd6, .byte = 0x00 },
		{ .addr = 0xf6ccd7, .byte = 0x79 },
		{ .addr = 0xf6ccd2, .byte = 0xde },
		{ .addr = 0xf6ccd3, .byte = 0xf9 },
		{ .addr = 0xf6ccd0, .byte = 0xd7 },
		{ .addr = 0xf6ccd1, .byte = 0x83 },
		{ .addr = 0xf6cccc, .byte = 0xde },
		{ .addr = 0xf6cccd, .byte = 0xf5 },
		{ .addr = 0xf6ccce, .byte = 0x41 },
		{ .addr = 0xf6cccf, .byte = 0xd0 },
		{ .addr = 0x00000c, .byte = 0x21 },
		{ .addr = 0x00000d, .byte = 0xb0 },
		{ .addr = 0x00000e, .byte = 0x88 },
		{ .addr = 0x00000f, .byte = 0x84 },
		{ .addr = 0xb08884, .byte = 0x88 },
		{ .addr = 0xb08885, .byte = 0x04 },
		{ .addr = 0xb08886, .byte = 0xa3 },
		{ .addr = 0xb08887, .byte = 0x8e }
};

static const SST_Transaction addaw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7960080, .data = 55171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7960082, .data = 43886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13686658, .data = 8500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174296, .data = 30226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174292, .data = 9482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174294, .data = 121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174290, .data = 57081, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174288, .data = 55171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174284, .data = 57077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16174286, .data = 16848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 34948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11569284, .data = 34820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11569286, .data = 41870, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addaw_initial_ram_30[] = {
		{ .addr = 0xf0f290, .byte = 0xda },
		{ .addr = 0xf0f291, .byte = 0xc3 },
		{ .addr = 0xf0f292, .byte = 0xee },
		{ .addr = 0xf0f293, .byte = 0x4c },
		{ .addr = 0xf0f294, .byte = 0x82 },
		{ .addr = 0xf0f295, .byte = 0x57 }
};

static const SST_RamByte addaw_final_ram_30[] = {
		{ .addr = 0xf0f290, .byte = 0xda },
		{ .addr = 0xf0f291, .byte = 0xc3 },
		{ .addr = 0xf0f292, .byte = 0xee },
		{ .addr = 0xf0f293, .byte = 0x4c },
		{ .addr = 0xf0f294, .byte = 0x82 },
		{ .addr = 0xf0f295, .byte = 0x57 }
};

static const SST_Transaction addaw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15790740, .data = 33367, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addaw_initial_ram_31[] = {
		{ .addr = 0x4ba594, .byte = 0xd6 },
		{ .addr = 0x4ba595, .byte = 0xf0 },
		{ .addr = 0x4ba596, .byte = 0x52 },
		{ .addr = 0x4ba597, .byte = 0xde },
		{ .addr = 0x4ba598, .byte = 0x81 },
		{ .addr = 0x4ba599, .byte = 0x5b },
		{ .addr = 0x2d30ac, .byte = 0x56 },
		{ .addr = 0x2d30ad, .byte = 0x00 },
		{ .addr = 0x4ba59a, .byte = 0xf3 },
		{ .addr = 0x4ba59b, .byte = 0xe8 }
};

static const SST_RamByte addaw_final_ram_31[] = {
		{ .addr = 0x4ba594, .byte = 0xd6 },
		{ .addr = 0x4ba595, .byte = 0xf0 },
		{ .addr = 0x4ba596, .byte = 0x52 },
		{ .addr = 0x4ba597, .byte = 0xde },
		{ .addr = 0x4ba598, .byte = 0x81 },
		{ .addr = 0x4ba599, .byte = 0x5b },
		{ .addr = 0x2d30ac, .byte = 0x56 },
		{ .addr = 0x2d30ad, .byte = 0x00 },
		{ .addr = 0x4ba59a, .byte = 0xf3 },
		{ .addr = 0x4ba59b, .byte = 0xe8 }
};

static const SST_Transaction addaw_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4957592, .data = 33115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2961580, .data = 22016, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4957594, .data = 62440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_TestCase addaw[] = {
	{
		.name = "000 ADDA.w (d16, A0), A2 d4e8",
		.initial = {
			.regs = {
				3597950942, 3391415435, 3445088799, 1597919559, 294870065, 1337499212, 1126913713, 2248054717, 1497914091, 2386817744, 579384692, 2821960988, 3155809731, 2473268795, 2208773622, 481542, 10933724, 34583, 9681622
			},
			.prefetch0 = 54504,
			.prefetch1 = 34894,
			.ram = addaw_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3597950942, 3391415435, 3445088799, 1597919559, 294870065, 1337499212, 1126913713, 2248054717, 1497914091, 2386817744, 579384692, 2821960988, 3155809731, 2473268795, 2208773622, 481542, 10933710, 10007, 511472100
			},
			.prefetch0 = 15294,
			.prefetch1 = 14299,
			.ram = addaw_final_ram_0,
			.ram_len = 28,
		},
		.transactions = addaw_transactions_0,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "001 ADDA.w (A7), A6 dcd7",
		.initial = {
			.regs = {
				3136281985, 1149292506, 3850632206, 3596104039, 2531632687, 4221633728, 1238922906, 430763890, 433304354, 710161134, 2850301888, 2789591379, 2675663443, 4207359874, 1199875927, 9499176, 8718830, 1306, 9883684
			},
			.prefetch0 = 56535,
			.prefetch1 = 30366,
			.ram = addaw_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3136281985, 1149292506, 3850632206, 3596104039, 2531632687, 4221633728, 1238922906, 430763890, 433304354, 710161134, 2850301888, 2789591379, 2675663443, 4207359874, 1199857078, 9499176, 8718830, 1306, 9883686
			},
			.prefetch0 = 30366,
			.prefetch1 = 14341,
			.ram = addaw_final_ram_1,
			.ram_len = 8,
		},
		.transactions = addaw_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 ADDA.w (d16, A7), A2 d4ef",
		.initial = {
			.regs = {
				1023513319, 3535609427, 2739588294, 1937437861, 1821041952, 2357526861, 2819151686, 3125223647, 3749747607, 885165308, 3838054872, 2537784272, 1127111672, 2457468641, 3418616092, 16470252, 6291266, 9989, 15626484
			},
			.prefetch0 = 54511,
			.prefetch1 = 64965,
			.ram = addaw_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1023513319, 3535609427, 2739588294, 1937437861, 1821041952, 2357526861, 2819151686, 3125223647, 3749747607, 885165308, 3838054872, 2537784272, 1127111672, 2457468641, 3418616092, 16470252, 6291252, 9989, 3295036586
			},
			.prefetch0 = 31290,
			.prefetch1 = 16297,
			.ram = addaw_final_ram_2,
			.ram_len = 28,
		},
		.transactions = addaw_transactions_2,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "003 ADDA.w -(A5), A5 dae5",
		.initial = {
			.regs = {
				1759828243, 507908270, 4141399671, 790521190, 2010804182, 2302680764, 4273594614, 3558615520, 4184147031, 4102325717, 3753529812, 2071599576, 1495717915, 254845233, 3391612766, 10314770, 3228916, 9494, 6867598
			},
			.prefetch0 = 56037,
			.prefetch1 = 28664,
			.ram = addaw_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1759828243, 507908270, 4141399671, 790521190, 2010804182, 2302680764, 4273594614, 3558615520, 4184147031, 4102325717, 3753529812, 2071599576, 1495717915, 254845231, 3391612766, 10314770, 3228902, 9494, 1930218818
			},
			.prefetch0 = 33550,
			.prefetch1 = 54527,
			.ram = addaw_final_ram_3,
			.ram_len = 26,
		},
		.transactions = addaw_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 ADDA.w D0, A4 d8c0",
		.initial = {
			.regs = {
				3631081127, 618570204, 2708196257, 2458384783, 570642674, 4277948211, 2644256393, 4083343965, 703351772, 9007102, 646911988, 4017771516, 27279369, 2370058123, 1669627047, 4077890, 1849916, 41995, 248712
			},
			.prefetch0 = 55488,
			.prefetch1 = 12133,
			.ram = addaw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3631081127, 618570204, 2708196257, 2458384783, 570642674, 4277948211, 2644256393, 4083343965, 703351772, 9007102, 646911988, 4017771516, 27272880, 2370058123, 1669627047, 4077890, 1849916, 41995, 248714
			},
			.prefetch0 = 12133,
			.prefetch1 = 51954,
			.ram = addaw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_4,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "005 ADDA.w D2, A2 d4c2",
		.initial = {
			.regs = {
				3502647029, 1191329163, 2712428113, 3758027363, 3523427793, 2452319753, 1171246284, 3721388945, 2129448848, 2912270092, 3707417709, 2643697239, 2074549988, 2567444983, 392183202, 8897870, 15249292, 42752, 8414132
			},
			.prefetch0 = 54466,
			.prefetch1 = 42498,
			.ram = addaw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3502647029, 1191329163, 2712428113, 3758027363, 3523427793, 2452319753, 1171246284, 3721388945, 2129448848, 2912270092, 3707441854, 2643697239, 2074549988, 2567444983, 392183202, 8897870, 15249292, 42752, 8414134
			},
			.prefetch0 = 42498,
			.prefetch1 = 36627,
			.ram = addaw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_5,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "006 ADDA.w A5, A3 d6cd",
		.initial = {
			.regs = {
				508825277, 3351943630, 2349855079, 3595513102, 2399203934, 3784703728, 1092979625, 2945660544, 964011856, 712369678, 734981682, 2849996676, 695334672, 1345930792, 3427319100, 12299010, 14420834, 34305, 12411982
			},
			.prefetch0 = 54989,
			.prefetch1 = 56866,
			.ram = addaw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				508825277, 3351943630, 2349855079, 3595513102, 2399203934, 3784703728, 1092979625, 2945660544, 964011856, 712369678, 734981682, 2850014636, 695334672, 1345930792, 3427319100, 12299010, 14420834, 34305, 12411984
			},
			.prefetch0 = 56866,
			.prefetch1 = 65232,
			.ram = addaw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_6,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "007 ADDA.w (d16, A1), A7 dee9",
		.initial = {
			.regs = {
				3059324721, 1620722811, 34850308, 3864024656, 3125521254, 1063389157, 3312059763, 1026438125, 570918900, 23702419, 26301121, 452886393, 1393843670, 1997392913, 2499457502, 13146994, 1206446, 34584, 16310220
			},
			.prefetch0 = 57065,
			.prefetch1 = 57013,
			.ram = addaw_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3059324721, 1620722811, 34850308, 3864024656, 3125521254, 1063389157, 3312059763, 1026438125, 570918900, 23702419, 26301121, 452886393, 1393843670, 1997392913, 2499457502, 13123957, 1206446, 34584, 16310224
			},
			.prefetch0 = 9351,
			.prefetch1 = 30119,
			.ram = addaw_final_ram_7,
			.ram_len = 10,
		},
		.transactions = addaw_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 ADDA.w (d8, A0, Xn), A5 daf0",
		.initial = {
			.regs = {
				2419600782, 2895362643, 2056188920, 4150162791, 3334121711, 3688897439, 762716703, 822446446, 1261540551, 2786099287, 2809295676, 556110799, 699891336, 2698091412, 3655134193, 10708720, 778708, 42510, 11228616
			},
			.prefetch0 = 56048,
			.prefetch1 = 37759,
			.ram = addaw_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2419600782, 2895362643, 2056188920, 4150162791, 3334121711, 3688897439, 762716703, 822446446, 1261540551, 2786099287, 2809295676, 556110799, 699891336, 2698091412, 3655134193, 10708720, 778694, 9742, 4249013560
			},
			.prefetch0 = 41699,
			.prefetch1 = 2977,
			.ram = addaw_final_ram_8,
			.ram_len = 28,
		},
		.transactions = addaw_transactions_8,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "009 ADDA.w (A3)+, A5 dadb",
		.initial = {
			.regs = {
				3749258857, 501847105, 3310488150, 2978436005, 3309334660, 1206460458, 2334299805, 2630775425, 2976904822, 2548977319, 4060940629, 892946772, 2550662801, 1022800639, 1758894048, 9979150, 5213020, 32787, 3595972
			},
			.prefetch0 = 56027,
			.prefetch1 = 33202,
			.ram = addaw_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3749258857, 501847105, 3310488150, 2978436005, 3309334660, 1206460458, 2334299805, 2630775425, 2976904822, 2548977319, 4060940629, 892946774, 2550662801, 1022782902, 1758894048, 9979150, 5213020, 32787, 3595974
			},
			.prefetch0 = 33202,
			.prefetch1 = 21296,
			.ram = addaw_final_ram_9,
			.ram_len = 8,
		},
		.transactions = addaw_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 ADDA.w (A0)+, A3 d6d8",
		.initial = {
			.regs = {
				970656839, 2857908814, 972375154, 189273399, 486765209, 1776478229, 1839182318, 3386162070, 2088164272, 115122465, 2571564698, 478847457, 814676938, 2257351387, 2364400066, 4543180, 14194252, 8716, 2504408
			},
			.prefetch0 = 55000,
			.prefetch1 = 40983,
			.ram = addaw_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				970656839, 2857908814, 972375154, 189273399, 486765209, 1776478229, 1839182318, 3386162070, 2088164274, 115122465, 2571564698, 478826695, 814676938, 2257351387, 2364400066, 4543180, 14194252, 8716, 2504410
			},
			.prefetch0 = 40983,
			.prefetch1 = 31875,
			.ram = addaw_final_ram_10,
			.ram_len = 8,
		},
		.transactions = addaw_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 ADDA.w A3, A1 d2cb",
		.initial = {
			.regs = {
				3902209727, 1093375184, 854595905, 581282933, 2494186359, 2514908474, 3393036391, 2169724178, 3104605359, 3145392165, 234434459, 939108988, 2903668842, 451932154, 1930558219, 6742292, 5684448, 41478, 16150206
			},
			.prefetch0 = 53963,
			.prefetch1 = 23795,
			.ram = addaw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3902209727, 1093375184, 854595905, 581282933, 2494186359, 2514908474, 3393036391, 2169724178, 3104605359, 3145370273, 234434459, 939108988, 2903668842, 451932154, 1930558219, 6742292, 5684448, 41478, 16150208
			},
			.prefetch0 = 23795,
			.prefetch1 = 51580,
			.ram = addaw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 ADDA.w (d8, A4, Xn), A0 d0f4",
		.initial = {
			.regs = {
				3747811405, 468558326, 122978964, 3436814280, 4112043529, 2716372210, 1203798726, 3367731119, 1144601177, 4028508276, 394064563, 615183734, 1786854350, 3204944514, 2513263689, 278958, 4052226, 41478, 10125400
			},
			.prefetch0 = 53492,
			.prefetch1 = 47399,
			.ram = addaw_initial_ram_12,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3747811405, 468558326, 122978964, 3436814280, 4112043529, 2716372210, 1203798726, 3367731119, 1144601177, 4028508276, 394064563, 615183734, 1786854350, 3204944514, 2513263689, 278958, 4052212, 8710, 2069020184
			},
			.prefetch0 = 48302,
			.prefetch1 = 49485,
			.ram = addaw_final_ram_12,
			.ram_len = 28,
		},
		.transactions = addaw_transactions_12,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "013 ADDA.w (A6)+, A0 d0de",
		.initial = {
			.regs = {
				428363945, 2590169730, 4072178920, 354245249, 1655958799, 4292013522, 3102285027, 1527110672, 3895605395, 2213260839, 2644259758, 3678853374, 1113553175, 2737610363, 4029971272, 7207828, 16764330, 8223, 6706176
			},
			.prefetch0 = 53470,
			.prefetch1 = 48951,
			.ram = addaw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				428363945, 2590169730, 4072178920, 354245249, 1655958799, 4292013522, 3102285027, 1527110672, 3895615293, 2213260839, 2644259758, 3678853374, 1113553175, 2737610363, 4029971274, 7207828, 16764330, 8223, 6706178
			},
			.prefetch0 = 48951,
			.prefetch1 = 32705,
			.ram = addaw_final_ram_13,
			.ram_len = 8,
		},
		.transactions = addaw_transactions_13,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "014 ADDA.w D7, A4 d8c7",
		.initial = {
			.regs = {
				3116318107, 2622873073, 3600005878, 2258593351, 533786106, 152535255, 2019968807, 2671475708, 1476719584, 3550381457, 666986941, 3597165127, 180715591, 1823112307, 2115968333, 1669716, 7740, 1025, 774426
			},
			.prefetch0 = 55495,
			.prefetch1 = 1405,
			.ram = addaw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3116318107, 2622873073, 3600005878, 2258593351, 533786106, 152535255, 2019968807, 2671475708, 1476719584, 3550381457, 666986941, 3597165127, 180747331, 1823112307, 2115968333, 1669716, 7740, 1025, 774428
			},
			.prefetch0 = 1405,
			.prefetch1 = 40876,
			.ram = addaw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 ADDA.w D4, A1 d2c4",
		.initial = {
			.regs = {
				2599565676, 2239379631, 419144290, 544818643, 1559609970, 3257852038, 2203180856, 1974030901, 2176437746, 889555060, 1538464639, 1549951108, 2770738471, 4179766567, 3103682845, 2350122, 10367198, 34078, 11912902
			},
			.prefetch0 = 53956,
			.prefetch1 = 46300,
			.ram = addaw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2599565676, 2239379631, 419144290, 544818643, 1559609970, 3257852038, 2203180856, 1974030901, 2176437746, 889539302, 1538464639, 1549951108, 2770738471, 4179766567, 3103682845, 2350122, 10367198, 34078, 11912904
			},
			.prefetch0 = 46300,
			.prefetch1 = 12943,
			.ram = addaw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_15,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "016 ADDA.w (d8, PC, Xn), A4 d8fb",
		.initial = {
			.regs = {
				284834228, 1701964355, 2109469449, 2802442649, 2427268075, 1872605223, 92153423, 3403296526, 3329113898, 4240064063, 2287211333, 1289100147, 1066048938, 3227739654, 114845843, 7743254, 225816, 8216, 2610990
			},
			.prefetch0 = 55547,
			.prefetch1 = 51542,
			.ram = addaw_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				284834228, 1701964355, 2109469449, 2802442649, 2427268075, 1872605223, 92153423, 3403296526, 3329113898, 4240064063, 2287211333, 1289100147, 1066075345, 3227739654, 114845843, 7743254, 225816, 8216, 2610994
			},
			.prefetch0 = 21174,
			.prefetch1 = 2257,
			.ram = addaw_final_ram_16,
			.ram_len = 10,
		},
		.transactions = addaw_transactions_16,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "017 ADDA.w -(A0), A5 dae0",
		.initial = {
			.regs = {
				2705753130, 1602356294, 2260056192, 1366728134, 2176627729, 2817406948, 1628225403, 919674303, 2085223702, 930309742, 430227310, 3016680639, 2198960022, 3965026394, 1602612828, 15104000, 603848, 34588, 7715428
			},
			.prefetch0 = 56032,
			.prefetch1 = 61380,
			.ram = addaw_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2705753130, 1602356294, 2260056192, 1366728134, 2176627729, 2817406948, 1628225403, 919674303, 2085223700, 930309742, 430227310, 3016680639, 2198960022, 3965007423, 1602612828, 15104000, 603848, 34588, 7715430
			},
			.prefetch0 = 61380,
			.prefetch1 = 51614,
			.ram = addaw_final_ram_17,
			.ram_len = 8,
		},
		.transactions = addaw_transactions_17,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "018 ADDA.w (A6), A3 d6d6",
		.initial = {
			.regs = {
				3279978263, 3903107870, 1169565769, 2779096614, 3716893286, 615565414, 3749726284, 44073493, 1966384532, 682170707, 2304482066, 2400076151, 2769785280, 627488843, 3625742808, 10992870, 4608938, 42014, 14171092
			},
			.prefetch0 = 54998,
			.prefetch1 = 610,
			.ram = addaw_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3279978263, 3903107870, 1169565769, 2779096614, 3716893286, 615565414, 3749726284, 44073493, 1966384532, 682170707, 2304482066, 2400043988, 2769785280, 627488843, 3625742808, 10992870, 4608938, 42014, 14171094
			},
			.prefetch0 = 610,
			.prefetch1 = 48629,
			.ram = addaw_final_ram_18,
			.ram_len = 8,
		},
		.transactions = addaw_transactions_18,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "019 ADDA.w D2, A3 d6c2",
		.initial = {
			.regs = {
				2902693166, 4148474987, 2269030571, 2147148758, 803026264, 2368519361, 3775592503, 3050774203, 2108282998, 1572529493, 2481535355, 1327667489, 592813121, 45567160, 384311416, 15807432, 1075030, 40980, 13093154
			},
			.prefetch0 = 54978,
			.prefetch1 = 52912,
			.ram = addaw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2902693166, 4148474987, 2269030571, 2147148758, 803026264, 2368519361, 3775592503, 3050774203, 2108282998, 1572529493, 2481535355, 1327645132, 592813121, 45567160, 384311416, 15807432, 1075030, 40980, 13093156
			},
			.prefetch0 = 52912,
			.prefetch1 = 52108,
			.ram = addaw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 ADDA.w (A3), A2 d4d3",
		.initial = {
			.regs = {
				1910267443, 3836565777, 3644977140, 3416468286, 1878930053, 341874762, 4050455750, 1604292433, 2770511740, 2918653921, 3403077487, 4195021273, 2376114296, 125063039, 1823616100, 2765560, 5291708, 8460, 16285716
			},
			.prefetch0 = 54483,
			.prefetch1 = 48984,
			.ram = addaw_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1910267443, 3836565777, 3644977140, 3416468286, 1878930053, 341874762, 4050455750, 1604292433, 2770511740, 2918653921, 3403077487, 4195021273, 2376114296, 125063039, 1823616100, 2765560, 5291694, 8460, 1758520022
			},
			.prefetch0 = 10873,
			.prefetch1 = 51223,
			.ram = addaw_final_ram_20,
			.ram_len = 26,
		},
		.transactions = addaw_transactions_20,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "021 ADDA.w A4, A5 dacc",
		.initial = {
			.regs = {
				1080701097, 3326866864, 3467187722, 3663872838, 699532582, 3356309157, 3820177692, 2851244515, 3577613166, 234176735, 1634323270, 1429015653, 2988049572, 3312221969, 548137868, 14594546, 16009278, 33551, 6173916
			},
			.prefetch0 = 56012,
			.prefetch1 = 52315,
			.ram = addaw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1080701097, 3326866864, 3467187722, 3663872838, 699532582, 3356309157, 3820177692, 2851244515, 3577613166, 234176735, 1634323270, 1429015653, 2988049572, 3312223157, 548137868, 14594546, 16009278, 33551, 6173918
			},
			.prefetch0 = 52315,
			.prefetch1 = 43980,
			.ram = addaw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_21,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "022 ADDA.w (A2), A6 dcd2",
		.initial = {
			.regs = {
				3625743060, 1604029834, 127588008, 1714620148, 1817932043, 793485417, 3901424196, 3078854566, 3997687573, 3601213117, 1997816801, 1740983642, 2473046484, 2490466375, 1593535098, 10998460, 6422758, 9235, 4113244
			},
			.prefetch0 = 56530,
			.prefetch1 = 29895,
			.ram = addaw_initial_ram_22,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3625743060, 1604029834, 127588008, 1714620148, 1817932043, 793485417, 3901424196, 3078854566, 3997687573, 3601213117, 1997816801, 1740983642, 2473046484, 2490466375, 1593535098, 10998460, 6422744, 9235, 1045878236
			},
			.prefetch0 = 3162,
			.prefetch1 = 41565,
			.ram = addaw_final_ram_22,
			.ram_len = 26,
		},
		.transactions = addaw_transactions_22,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "023 ADDA.w (d16, A3), A4 d8eb",
		.initial = {
			.regs = {
				3757969717, 791932660, 3195826012, 4032546206, 3915908644, 24862962, 1070606647, 3476312388, 1035212533, 2551149032, 2564036678, 3683294563, 2515941503, 3827483036, 476830891, 7898430, 12057286, 270, 11055362
			},
			.prefetch0 = 55531,
			.prefetch1 = 44501,
			.ram = addaw_initial_ram_23,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3757969717, 791932660, 3195826012, 4032546206, 3915908644, 24862962, 1070606647, 3476312388, 1035212533, 2551149032, 2564036678, 3683294563, 2515929654, 3827483036, 476830891, 7898430, 12057286, 270, 11055366
			},
			.prefetch0 = 25663,
			.prefetch1 = 3591,
			.ram = addaw_final_ram_23,
			.ram_len = 10,
		},
		.transactions = addaw_transactions_23,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "024 ADDA.w (A0), A0 d0d0",
		.initial = {
			.regs = {
				3511630360, 4008690984, 3559040945, 3110651851, 1518294133, 4256710388, 1895204738, 692147602, 3798031331, 1129408541, 9053620, 2269488292, 1434992042, 2906465719, 2249570226, 12339912, 13200620, 1048, 6694548
			},
			.prefetch0 = 53456,
			.prefetch1 = 31772,
			.ram = addaw_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3511630360, 4008690984, 3559040945, 3110651851, 1518294133, 4256710388, 1895204738, 692147602, 3798031331, 1129408541, 9053620, 2269488292, 1434992042, 2906465719, 2249570226, 12339912, 13200606, 9240, 3568981864
			},
			.prefetch0 = 21246,
			.prefetch1 = 31350,
			.ram = addaw_final_ram_24,
			.ram_len = 26,
		},
		.transactions = addaw_transactions_24,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "025 ADDA.w (d16, A7), A4 d8ef",
		.initial = {
			.regs = {
				2858095780, 1787798650, 1342257362, 2389991235, 45188759, 42423054, 449776762, 509354682, 1724748421, 213402411, 3593883905, 1021073101, 2089658765, 245195333, 1427259899, 14137056, 12790634, 788, 11028456
			},
			.prefetch0 = 55535,
			.prefetch1 = 31847,
			.ram = addaw_initial_ram_25,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2858095780, 1787798650, 1342257362, 2389991235, 45188759, 42423054, 449776762, 509354682, 1724748421, 213402411, 3593883905, 1021073101, 2089658765, 245195333, 1427259899, 14137056, 12790620, 8980, 2574682662
			},
			.prefetch0 = 17627,
			.prefetch1 = 43561,
			.ram = addaw_final_ram_25,
			.ram_len = 28,
		},
		.transactions = addaw_transactions_25,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "026 ADDA.w (d8, A1, Xn), A2 d4f1",
		.initial = {
			.regs = {
				3838831092, 713403711, 3457041269, 373705620, 4013641564, 2452256544, 2640679060, 1130330953, 2082656035, 2680924753, 226170609, 2654016393, 252639944, 2861594038, 21995532, 802230, 5907472, 534, 16493204
			},
			.prefetch0 = 54513,
			.prefetch1 = 24664,
			.ram = addaw_initial_ram_26,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3838831092, 713403711, 3457041269, 373705620, 4013641564, 2452256544, 2640679060, 1130330953, 2082656035, 2680924753, 226170609, 2654016393, 252639944, 2861594038, 21995532, 802230, 5907458, 8726, 3449451506
			},
			.prefetch0 = 21720,
			.prefetch1 = 56840,
			.ram = addaw_final_ram_26,
			.ram_len = 28,
		},
		.transactions = addaw_transactions_26,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "027 ADDA.w A6, A0 d0ce",
		.initial = {
			.regs = {
				2216048007, 1751329244, 3630278589, 3157060268, 1513339743, 1408364667, 2803007849, 2563823482, 4095404137, 3703024972, 3617109230, 3572813407, 1992002956, 3418913919, 2749731271, 14053536, 7311736, 41758, 8232454
			},
			.prefetch0 = 53454,
			.prefetch1 = 19425,
			.ram = addaw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2216048007, 1751329244, 3630278589, 3157060268, 1513339743, 1408364667, 2803007849, 2563823482, 4095375920, 3703024972, 3617109230, 3572813407, 1992002956, 3418913919, 2749731271, 14053536, 7311736, 41758, 8232456
			},
			.prefetch0 = 19425,
			.prefetch1 = 11942,
			.ram = addaw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_27,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "028 ADDA.w (A4), A7 ded4",
		.initial = {
			.regs = {
				1629590302, 1027082025, 383685076, 1911416918, 502005063, 2624995472, 2329320724, 134298393, 3904491068, 1918203250, 627593527, 1007030525, 1141603608, 2276769654, 656320900, 1923992, 16388890, 41223, 5744748
			},
			.prefetch0 = 57044,
			.prefetch1 = 19199,
			.ram = addaw_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1629590302, 1027082025, 383685076, 1911416918, 502005063, 2624995472, 2329320724, 134298393, 3904491068, 1918203250, 627593527, 1007030525, 1141603608, 2276769654, 656320900, 1923992, 16392097, 41223, 5744750
			},
			.prefetch0 = 19199,
			.prefetch1 = 55212,
			.ram = addaw_final_ram_28,
			.ram_len = 8,
		},
		.transactions = addaw_transactions_28,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "029 ADDA.w (xxx).l, A7 def9",
		.initial = {
			.regs = {
				1623621776, 1577053706, 1951034560, 4187656795, 3572327493, 32926125, 780636068, 282805464, 445869627, 1878297890, 1874133270, 301205206, 856920603, 1993344889, 1556080187, 10772314, 16174298, 9482, 7960080
			},
			.prefetch0 = 57081,
			.prefetch1 = 16848,
			.ram = addaw_initial_ram_29,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1623621776, 1577053706, 1951034560, 4187656795, 3572327493, 32926125, 780636068, 282805464, 445869627, 1878297890, 1874133270, 301205206, 856920603, 1993344889, 1556080187, 10772314, 16174284, 9482, 565217416
			},
			.prefetch0 = 34820,
			.prefetch1 = 41870,
			.ram = addaw_final_ram_29,
			.ram_len = 30,
		},
		.transactions = addaw_transactions_29,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "030 ADDA.w D3, A5 dac3",
		.initial = {
			.regs = {
				2982494966, 913451057, 1418634886, 1967712349, 2786983708, 3067004106, 1657869781, 4048641482, 2037320261, 3842280329, 622249926, 1009989703, 2521029183, 1887471516, 2502491846, 13451536, 13637412, 9220, 15790740
			},
			.prefetch0 = 56003,
			.prefetch1 = 61004,
			.ram = addaw_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2982494966, 913451057, 1418634886, 1967712349, 2786983708, 3067004106, 1657869781, 4048641482, 2037320261, 3842280329, 622249926, 1009989703, 2521029183, 1887465465, 2502491846, 13451536, 13637412, 9220, 15790742
			},
			.prefetch0 = 61004,
			.prefetch1 = 33367,
			.ram = addaw_final_ram_30,
			.ram_len = 6,
		},
		.transactions = addaw_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 ADDA.w (d8, A0, Xn), A3 d6f0",
		.initial = {
			.regs = {
				2659546484, 1697506427, 578200377, 599555749, 3287747144, 1217738305, 578767400, 2966431650, 3777821325, 3631062543, 3263374793, 3400566834, 1848764332, 2516425005, 1838568254, 10043086, 2011496, 34333, 4957592
			},
			.prefetch0 = 55024,
			.prefetch1 = 21214,
			.ram = addaw_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2659546484, 1697506427, 578200377, 599555749, 3287747144, 1217738305, 578767400, 2966431650, 3777821325, 3631062543, 3263374793, 3400588850, 1848764332, 2516425005, 1838568254, 10043086, 2011496, 34333, 4957596
			},
			.prefetch0 = 33115,
			.prefetch1 = 62440,
			.ram = addaw_final_ram_31,
			.ram_len = 10,
		},
		.transactions = addaw_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_ADDAW_H */