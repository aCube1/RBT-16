#ifndef RBT_NEGB_H
#define RBT_NEGB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte negb_initial_ram_0[] = {
		{ .addr = 0x34def4, .byte = 0x44 },
		{ .addr = 0x34def5, .byte = 0x27 },
		{ .addr = 0x34def6, .byte = 0xac },
		{ .addr = 0x34def7, .byte = 0xbb },
		{ .addr = 0xf76e0c, .byte = 0xa3 },
		{ .addr = 0xf76e0d, .byte = 0xaa },
		{ .addr = 0x34def8, .byte = 0xa7 },
		{ .addr = 0x34def9, .byte = 0x47 }
};

static const SST_RamByte negb_final_ram_0[] = {
		{ .addr = 0x34def4, .byte = 0x44 },
		{ .addr = 0x34def5, .byte = 0x27 },
		{ .addr = 0x34def6, .byte = 0xac },
		{ .addr = 0x34def7, .byte = 0xbb },
		{ .addr = 0xf76e0c, .byte = 0x5d },
		{ .addr = 0xf76e0d, .byte = 0xaa },
		{ .addr = 0x34def8, .byte = 0xa7 },
		{ .addr = 0x34def9, .byte = 0x47 }
};

static const SST_Transaction negb_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215564, .data = 41728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3464952, .data = 42823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215564, .data = 23808, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_1[] = {
		{ .addr = 0x4c77b6, .byte = 0x44 },
		{ .addr = 0x4c77b7, .byte = 0x2b },
		{ .addr = 0x4c77b8, .byte = 0x66 },
		{ .addr = 0x4c77b9, .byte = 0x66 },
		{ .addr = 0x4c77ba, .byte = 0xd5 },
		{ .addr = 0x4c77bb, .byte = 0xa1 },
		{ .addr = 0x0c11a8, .byte = 0x3a },
		{ .addr = 0x0c11a9, .byte = 0x0e },
		{ .addr = 0x4c77bc, .byte = 0xaf },
		{ .addr = 0x4c77bd, .byte = 0xd1 }
};

static const SST_RamByte negb_final_ram_1[] = {
		{ .addr = 0x4c77b6, .byte = 0x44 },
		{ .addr = 0x4c77b7, .byte = 0x2b },
		{ .addr = 0x4c77b8, .byte = 0x66 },
		{ .addr = 0x4c77b9, .byte = 0x66 },
		{ .addr = 0x4c77ba, .byte = 0xd5 },
		{ .addr = 0x4c77bb, .byte = 0xa1 },
		{ .addr = 0x0c11a8, .byte = 0x3a },
		{ .addr = 0x0c11a9, .byte = 0xf2 },
		{ .addr = 0x4c77bc, .byte = 0xaf },
		{ .addr = 0x4c77bd, .byte = 0xd1 }
};

static const SST_Transaction negb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5011386, .data = 54689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 790952, .data = 14, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5011388, .data = 45009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 790952, .data = 242, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_2[] = {
		{ .addr = 0x654604, .byte = 0x44 },
		{ .addr = 0x654605, .byte = 0x2c },
		{ .addr = 0x654606, .byte = 0xde },
		{ .addr = 0x654607, .byte = 0xac },
		{ .addr = 0x654608, .byte = 0xe0 },
		{ .addr = 0x654609, .byte = 0x9d },
		{ .addr = 0xb8616c, .byte = 0x03 },
		{ .addr = 0xb8616d, .byte = 0x46 },
		{ .addr = 0x65460a, .byte = 0x6a },
		{ .addr = 0x65460b, .byte = 0xc7 }
};

static const SST_RamByte negb_final_ram_2[] = {
		{ .addr = 0x654604, .byte = 0x44 },
		{ .addr = 0x654605, .byte = 0x2c },
		{ .addr = 0x654606, .byte = 0xde },
		{ .addr = 0x654607, .byte = 0xac },
		{ .addr = 0x654608, .byte = 0xe0 },
		{ .addr = 0x654609, .byte = 0x9d },
		{ .addr = 0xb8616c, .byte = 0xfd },
		{ .addr = 0xb8616d, .byte = 0x46 },
		{ .addr = 0x65460a, .byte = 0x6a },
		{ .addr = 0x65460b, .byte = 0xc7 }
};

static const SST_Transaction negb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6637064, .data = 57501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12083564, .data = 768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6637066, .data = 27335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12083564, .data = 64768, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_3[] = {
		{ .addr = 0x12615c, .byte = 0x44 },
		{ .addr = 0x12615d, .byte = 0x18 },
		{ .addr = 0x12615e, .byte = 0x0c },
		{ .addr = 0x12615f, .byte = 0x6b },
		{ .addr = 0xc30f3a, .byte = 0xdf },
		{ .addr = 0xc30f3b, .byte = 0xcb },
		{ .addr = 0x126160, .byte = 0x11 },
		{ .addr = 0x126161, .byte = 0xd6 }
};

static const SST_RamByte negb_final_ram_3[] = {
		{ .addr = 0x12615c, .byte = 0x44 },
		{ .addr = 0x12615d, .byte = 0x18 },
		{ .addr = 0x12615e, .byte = 0x0c },
		{ .addr = 0x12615f, .byte = 0x6b },
		{ .addr = 0xc30f3a, .byte = 0x21 },
		{ .addr = 0xc30f3b, .byte = 0xcb },
		{ .addr = 0x126160, .byte = 0x11 },
		{ .addr = 0x126161, .byte = 0xd6 }
};

static const SST_Transaction negb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12783418, .data = 57088, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1204576, .data = 4566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12783418, .data = 8448, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_4[] = {
		{ .addr = 0xe30102, .byte = 0x44 },
		{ .addr = 0xe30103, .byte = 0x27 },
		{ .addr = 0xe30104, .byte = 0x09 },
		{ .addr = 0xe30105, .byte = 0x41 },
		{ .addr = 0x7ea230, .byte = 0xc8 },
		{ .addr = 0x7ea231, .byte = 0x50 },
		{ .addr = 0xe30106, .byte = 0xb0 },
		{ .addr = 0xe30107, .byte = 0xc4 }
};

static const SST_RamByte negb_final_ram_4[] = {
		{ .addr = 0xe30102, .byte = 0x44 },
		{ .addr = 0xe30103, .byte = 0x27 },
		{ .addr = 0xe30104, .byte = 0x09 },
		{ .addr = 0xe30105, .byte = 0x41 },
		{ .addr = 0x7ea230, .byte = 0x38 },
		{ .addr = 0x7ea231, .byte = 0x50 },
		{ .addr = 0xe30106, .byte = 0xb0 },
		{ .addr = 0xe30107, .byte = 0xc4 }
};

static const SST_Transaction negb_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8299056, .data = 51200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14876934, .data = 45252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8299056, .data = 14336, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_5[] = {
		{ .addr = 0x95cd6a, .byte = 0x44 },
		{ .addr = 0x95cd6b, .byte = 0x1d },
		{ .addr = 0x95cd6c, .byte = 0x97 },
		{ .addr = 0x95cd6d, .byte = 0xc3 },
		{ .addr = 0xfb5330, .byte = 0xae },
		{ .addr = 0xfb5331, .byte = 0xc0 },
		{ .addr = 0x95cd6e, .byte = 0x78 },
		{ .addr = 0x95cd6f, .byte = 0xc2 }
};

static const SST_RamByte negb_final_ram_5[] = {
		{ .addr = 0x95cd6a, .byte = 0x44 },
		{ .addr = 0x95cd6b, .byte = 0x1d },
		{ .addr = 0x95cd6c, .byte = 0x97 },
		{ .addr = 0x95cd6d, .byte = 0xc3 },
		{ .addr = 0xfb5330, .byte = 0xae },
		{ .addr = 0xfb5331, .byte = 0x40 },
		{ .addr = 0x95cd6e, .byte = 0x78 },
		{ .addr = 0x95cd6f, .byte = 0xc2 }
};

static const SST_Transaction negb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16470832, .data = 192, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9817454, .data = 30914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16470832, .data = 64, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_6[] = {
		{ .addr = 0x08a7a6, .byte = 0x44 },
		{ .addr = 0x08a7a7, .byte = 0x17 },
		{ .addr = 0x08a7a8, .byte = 0x64 },
		{ .addr = 0x08a7a9, .byte = 0xdc },
		{ .addr = 0x1eeaa8, .byte = 0x77 },
		{ .addr = 0x1eeaa9, .byte = 0x3f },
		{ .addr = 0x08a7aa, .byte = 0xbf },
		{ .addr = 0x08a7ab, .byte = 0x8b }
};

static const SST_RamByte negb_final_ram_6[] = {
		{ .addr = 0x08a7a6, .byte = 0x44 },
		{ .addr = 0x08a7a7, .byte = 0x17 },
		{ .addr = 0x08a7a8, .byte = 0x64 },
		{ .addr = 0x08a7a9, .byte = 0xdc },
		{ .addr = 0x1eeaa8, .byte = 0x89 },
		{ .addr = 0x1eeaa9, .byte = 0x3f },
		{ .addr = 0x08a7aa, .byte = 0xbf },
		{ .addr = 0x08a7ab, .byte = 0x8b }
};

static const SST_Transaction negb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2026152, .data = 30464, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 567210, .data = 49035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2026152, .data = 35072, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_7[] = {
		{ .addr = 0xd54f02, .byte = 0x44 },
		{ .addr = 0xd54f03, .byte = 0x39 },
		{ .addr = 0xd54f04, .byte = 0x6c },
		{ .addr = 0xd54f05, .byte = 0xe7 },
		{ .addr = 0xd54f06, .byte = 0x4e },
		{ .addr = 0xd54f07, .byte = 0x91 },
		{ .addr = 0xd54f08, .byte = 0x9f },
		{ .addr = 0xd54f09, .byte = 0x2c },
		{ .addr = 0xe74e90, .byte = 0x2d },
		{ .addr = 0xe74e91, .byte = 0x03 },
		{ .addr = 0xd54f0a, .byte = 0x7c },
		{ .addr = 0xd54f0b, .byte = 0xb7 }
};

static const SST_RamByte negb_final_ram_7[] = {
		{ .addr = 0xd54f02, .byte = 0x44 },
		{ .addr = 0xd54f03, .byte = 0x39 },
		{ .addr = 0xd54f04, .byte = 0x6c },
		{ .addr = 0xd54f05, .byte = 0xe7 },
		{ .addr = 0xd54f06, .byte = 0x4e },
		{ .addr = 0xd54f07, .byte = 0x91 },
		{ .addr = 0xd54f08, .byte = 0x9f },
		{ .addr = 0xd54f09, .byte = 0x2c },
		{ .addr = 0xe74e90, .byte = 0x2d },
		{ .addr = 0xe74e91, .byte = 0xfd },
		{ .addr = 0xd54f0a, .byte = 0x7c },
		{ .addr = 0xd54f0b, .byte = 0xb7 }
};

static const SST_Transaction negb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13979398, .data = 20113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13979400, .data = 40748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15158928, .data = 3, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13979402, .data = 31927, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15158928, .data = 253, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_8[] = {
		{ .addr = 0x3b5a6a, .byte = 0x44 },
		{ .addr = 0x3b5a6b, .byte = 0x2b },
		{ .addr = 0x3b5a6c, .byte = 0x06 },
		{ .addr = 0x3b5a6d, .byte = 0xba },
		{ .addr = 0x3b5a6e, .byte = 0xf4 },
		{ .addr = 0x3b5a6f, .byte = 0xce },
		{ .addr = 0xb6a8de, .byte = 0x9f },
		{ .addr = 0xb6a8df, .byte = 0xfa },
		{ .addr = 0x3b5a70, .byte = 0x8f },
		{ .addr = 0x3b5a71, .byte = 0x31 }
};

static const SST_RamByte negb_final_ram_8[] = {
		{ .addr = 0x3b5a6a, .byte = 0x44 },
		{ .addr = 0x3b5a6b, .byte = 0x2b },
		{ .addr = 0x3b5a6c, .byte = 0x06 },
		{ .addr = 0x3b5a6d, .byte = 0xba },
		{ .addr = 0x3b5a6e, .byte = 0xf4 },
		{ .addr = 0x3b5a6f, .byte = 0xce },
		{ .addr = 0xb6a8de, .byte = 0x61 },
		{ .addr = 0xb6a8df, .byte = 0xfa },
		{ .addr = 0x3b5a70, .byte = 0x8f },
		{ .addr = 0x3b5a71, .byte = 0x31 }
};

static const SST_Transaction negb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3889774, .data = 62670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11970782, .data = 40704, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3889776, .data = 36657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11970782, .data = 24832, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_9[] = {
		{ .addr = 0xd06c86, .byte = 0x44 },
		{ .addr = 0xd06c87, .byte = 0x36 },
		{ .addr = 0xd06c88, .byte = 0x28 },
		{ .addr = 0xd06c89, .byte = 0x0f },
		{ .addr = 0xd06c8a, .byte = 0x87 },
		{ .addr = 0xd06c8b, .byte = 0x76 },
		{ .addr = 0x33de4a, .byte = 0x1e },
		{ .addr = 0x33de4b, .byte = 0x29 },
		{ .addr = 0xd06c8c, .byte = 0x95 },
		{ .addr = 0xd06c8d, .byte = 0x4c }
};

static const SST_RamByte negb_final_ram_9[] = {
		{ .addr = 0xd06c86, .byte = 0x44 },
		{ .addr = 0xd06c87, .byte = 0x36 },
		{ .addr = 0xd06c88, .byte = 0x28 },
		{ .addr = 0xd06c89, .byte = 0x0f },
		{ .addr = 0xd06c8a, .byte = 0x87 },
		{ .addr = 0xd06c8b, .byte = 0x76 },
		{ .addr = 0x33de4a, .byte = 0xe2 },
		{ .addr = 0x33de4b, .byte = 0x29 },
		{ .addr = 0xd06c8c, .byte = 0x95 },
		{ .addr = 0xd06c8d, .byte = 0x4c }
};

static const SST_Transaction negb_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13659274, .data = 34678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3399242, .data = 7680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13659276, .data = 38220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3399242, .data = 57856, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_10[] = {
		{ .addr = 0x86c8d8, .byte = 0x44 },
		{ .addr = 0x86c8d9, .byte = 0x27 },
		{ .addr = 0x86c8da, .byte = 0x04 },
		{ .addr = 0x86c8db, .byte = 0xf1 },
		{ .addr = 0x21089a, .byte = 0x91 },
		{ .addr = 0x21089b, .byte = 0x47 },
		{ .addr = 0x86c8dc, .byte = 0x24 },
		{ .addr = 0x86c8dd, .byte = 0x38 }
};

static const SST_RamByte negb_final_ram_10[] = {
		{ .addr = 0x86c8d8, .byte = 0x44 },
		{ .addr = 0x86c8d9, .byte = 0x27 },
		{ .addr = 0x86c8da, .byte = 0x04 },
		{ .addr = 0x86c8db, .byte = 0xf1 },
		{ .addr = 0x21089a, .byte = 0x6f },
		{ .addr = 0x21089b, .byte = 0x47 },
		{ .addr = 0x86c8dc, .byte = 0x24 },
		{ .addr = 0x86c8dd, .byte = 0x38 }
};

static const SST_Transaction negb_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2164890, .data = 37120, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8833244, .data = 9272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2164890, .data = 28416, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_11[] = {
		{ .addr = 0x8e0b8c, .byte = 0x44 },
		{ .addr = 0x8e0b8d, .byte = 0x05 },
		{ .addr = 0x8e0b8e, .byte = 0xa8 },
		{ .addr = 0x8e0b8f, .byte = 0xba },
		{ .addr = 0x8e0b90, .byte = 0x76 },
		{ .addr = 0x8e0b91, .byte = 0xa9 }
};

static const SST_RamByte negb_final_ram_11[] = {
		{ .addr = 0x8e0b8c, .byte = 0x44 },
		{ .addr = 0x8e0b8d, .byte = 0x05 },
		{ .addr = 0x8e0b8e, .byte = 0xa8 },
		{ .addr = 0x8e0b8f, .byte = 0xba },
		{ .addr = 0x8e0b90, .byte = 0x76 },
		{ .addr = 0x8e0b91, .byte = 0xa9 }
};

static const SST_Transaction negb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9309072, .data = 30377, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_12[] = {
		{ .addr = 0x1f1b28, .byte = 0x44 },
		{ .addr = 0x1f1b29, .byte = 0x16 },
		{ .addr = 0x1f1b2a, .byte = 0x4d },
		{ .addr = 0x1f1b2b, .byte = 0xf1 },
		{ .addr = 0xc16da2, .byte = 0x24 },
		{ .addr = 0xc16da3, .byte = 0x0a },
		{ .addr = 0x1f1b2c, .byte = 0xa6 },
		{ .addr = 0x1f1b2d, .byte = 0xbf }
};

static const SST_RamByte negb_final_ram_12[] = {
		{ .addr = 0x1f1b28, .byte = 0x44 },
		{ .addr = 0x1f1b29, .byte = 0x16 },
		{ .addr = 0x1f1b2a, .byte = 0x4d },
		{ .addr = 0x1f1b2b, .byte = 0xf1 },
		{ .addr = 0xc16da2, .byte = 0x24 },
		{ .addr = 0xc16da3, .byte = 0xf6 },
		{ .addr = 0x1f1b2c, .byte = 0xa6 },
		{ .addr = 0x1f1b2d, .byte = 0xbf }
};

static const SST_Transaction negb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12676514, .data = 10, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2038572, .data = 42687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12676514, .data = 246, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_13[] = {
		{ .addr = 0x322f3e, .byte = 0x44 },
		{ .addr = 0x322f3f, .byte = 0x04 },
		{ .addr = 0x322f40, .byte = 0x92 },
		{ .addr = 0x322f41, .byte = 0x1a },
		{ .addr = 0x322f42, .byte = 0xb1 },
		{ .addr = 0x322f43, .byte = 0xba }
};

static const SST_RamByte negb_final_ram_13[] = {
		{ .addr = 0x322f3e, .byte = 0x44 },
		{ .addr = 0x322f3f, .byte = 0x04 },
		{ .addr = 0x322f40, .byte = 0x92 },
		{ .addr = 0x322f41, .byte = 0x1a },
		{ .addr = 0x322f42, .byte = 0xb1 },
		{ .addr = 0x322f43, .byte = 0xba }
};

static const SST_Transaction negb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3288898, .data = 45498, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_14[] = {
		{ .addr = 0x02bd32, .byte = 0x44 },
		{ .addr = 0x02bd33, .byte = 0x1e },
		{ .addr = 0x02bd34, .byte = 0x1a },
		{ .addr = 0x02bd35, .byte = 0xb8 },
		{ .addr = 0x196880, .byte = 0x74 },
		{ .addr = 0x196881, .byte = 0x46 },
		{ .addr = 0x02bd36, .byte = 0xe3 },
		{ .addr = 0x02bd37, .byte = 0x08 }
};

static const SST_RamByte negb_final_ram_14[] = {
		{ .addr = 0x02bd32, .byte = 0x44 },
		{ .addr = 0x02bd33, .byte = 0x1e },
		{ .addr = 0x02bd34, .byte = 0x1a },
		{ .addr = 0x02bd35, .byte = 0xb8 },
		{ .addr = 0x196880, .byte = 0x8c },
		{ .addr = 0x196881, .byte = 0x46 },
		{ .addr = 0x02bd36, .byte = 0xe3 },
		{ .addr = 0x02bd37, .byte = 0x08 }
};

static const SST_Transaction negb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1665152, .data = 29696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 179510, .data = 58120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1665152, .data = 35840, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_15[] = {
		{ .addr = 0x4ebe14, .byte = 0x44 },
		{ .addr = 0x4ebe15, .byte = 0x2c },
		{ .addr = 0x4ebe16, .byte = 0x2b },
		{ .addr = 0x4ebe17, .byte = 0x83 },
		{ .addr = 0x4ebe18, .byte = 0x15 },
		{ .addr = 0x4ebe19, .byte = 0xd7 },
		{ .addr = 0xb5b796, .byte = 0x6b },
		{ .addr = 0xb5b797, .byte = 0x06 },
		{ .addr = 0x4ebe1a, .byte = 0xa9 },
		{ .addr = 0x4ebe1b, .byte = 0x90 }
};

static const SST_RamByte negb_final_ram_15[] = {
		{ .addr = 0x4ebe14, .byte = 0x44 },
		{ .addr = 0x4ebe15, .byte = 0x2c },
		{ .addr = 0x4ebe16, .byte = 0x2b },
		{ .addr = 0x4ebe17, .byte = 0x83 },
		{ .addr = 0x4ebe18, .byte = 0x15 },
		{ .addr = 0x4ebe19, .byte = 0xd7 },
		{ .addr = 0xb5b796, .byte = 0x6b },
		{ .addr = 0xb5b797, .byte = 0xfa },
		{ .addr = 0x4ebe1a, .byte = 0xa9 },
		{ .addr = 0x4ebe1b, .byte = 0x90 }
};

static const SST_Transaction negb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5160472, .data = 5591, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11909014, .data = 6, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5160474, .data = 43408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11909014, .data = 250, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NEGB_TEST_COUNT = 16;
static const SST_TestCase negb[] = {
	{
		.name = "000 NEG.b -(A7) 4427",
		.initial = {
			.regs = {
				396198535, 1181930665, 4254672472, 1589792576, 3682259040, 2742747230, 1605057671, 3666742351, 3326241225, 1745474568, 2308808067, 618589700, 237322954, 1065187218, 868963597, 6936958, 16215566, 8468, 3464952
			},
			.prefetch0 = 17447,
			.prefetch1 = 44219,
			.ram = negb_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				396198535, 1181930665, 4254672472, 1589792576, 3682259040, 2742747230, 1605057671, 3666742351, 3326241225, 1745474568, 2308808067, 618589700, 237322954, 1065187218, 868963597, 6936958, 16215564, 8465, 3464954
			},
			.prefetch0 = 44219,
			.prefetch1 = 42823,
			.ram = negb_final_ram_0,
			.ram_len = 8,
		},
		.transactions = negb_transactions_0,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "001 NEG.b (d16, A3) 442b",
		.initial = {
			.regs = {
				1401612807, 2396748424, 1449429120, 42284096, 1854965550, 1541904050, 1806026476, 2513038545, 604799145, 1798761744, 3526558023, 1997253443, 3801018172, 964386887, 480869067, 11252182, 3562044, 1050, 5011386
			},
			.prefetch0 = 17451,
			.prefetch1 = 26214,
			.ram = negb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1401612807, 2396748424, 1449429120, 42284096, 1854965550, 1541904050, 1806026476, 2513038545, 604799145, 1798761744, 3526558023, 1997253443, 3801018172, 964386887, 480869067, 11252182, 3562044, 1049, 5011390
			},
			.prefetch0 = 54689,
			.prefetch1 = 45009,
			.ram = negb_final_ram_1,
			.ram_len = 10,
		},
		.transactions = negb_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 NEG.b (d16, A4) 442c",
		.initial = {
			.regs = {
				1645628005, 583837548, 1540823875, 1228761193, 14495351, 1169714698, 727889216, 4080285967, 1920113618, 2677229143, 119694569, 1361248597, 2293793472, 2046322334, 2978337385, 13944318, 7727768, 9481, 6637064
			},
			.prefetch0 = 17452,
			.prefetch1 = 57004,
			.ram = negb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1645628005, 583837548, 1540823875, 1228761193, 14495351, 1169714698, 727889216, 4080285967, 1920113618, 2677229143, 119694569, 1361248597, 2293793472, 2046322334, 2978337385, 13944318, 7727768, 9497, 6637068
			},
			.prefetch0 = 57501,
			.prefetch1 = 27335,
			.ram = negb_final_ram_2,
			.ram_len = 10,
		},
		.transactions = negb_transactions_2,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "003 NEG.b (A0)+ 4418",
		.initial = {
			.regs = {
				1041068675, 3385141288, 731986550, 3745524990, 2911435324, 2424231118, 2105133585, 2996371255, 2730692410, 3936803566, 3468613402, 1523943681, 1728725480, 1918538678, 4200975207, 12767866, 2156962, 33565, 1204576
			},
			.prefetch0 = 17432,
			.prefetch1 = 3179,
			.ram = negb_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1041068675, 3385141288, 731986550, 3745524990, 2911435324, 2424231118, 2105133585, 2996371255, 2730692411, 3936803566, 3468613402, 1523943681, 1728725480, 1918538678, 4200975207, 12767866, 2156962, 33553, 1204578
			},
			.prefetch0 = 3179,
			.prefetch1 = 4566,
			.ram = negb_final_ram_3,
			.ram_len = 8,
		},
		.transactions = negb_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 NEG.b -(A7) 4427",
		.initial = {
			.regs = {
				2475365228, 756470353, 3191646887, 2896577204, 51595844, 332894804, 3978963168, 2244750102, 2318039131, 3566484143, 3318391817, 3713083938, 2018392605, 68408771, 305554269, 8450456, 8299058, 8973, 14876934
			},
			.prefetch0 = 17447,
			.prefetch1 = 2369,
			.ram = negb_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2475365228, 756470353, 3191646887, 2896577204, 51595844, 332894804, 3978963168, 2244750102, 2318039131, 3566484143, 3318391817, 3713083938, 2018392605, 68408771, 305554269, 8450456, 8299056, 8977, 14876936
			},
			.prefetch0 = 2369,
			.prefetch1 = 45252,
			.ram = negb_final_ram_4,
			.ram_len = 8,
		},
		.transactions = negb_transactions_4,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "005 NEG.b (A5)+ 441d",
		.initial = {
			.regs = {
				1050220433, 3220609190, 3043815213, 3770811275, 2955535878, 1209862745, 2692782889, 3766702799, 554033741, 1488699337, 3856178619, 771726719, 1950918992, 922440497, 2078027654, 8440188, 13348662, 33303, 9817454
			},
			.prefetch0 = 17437,
			.prefetch1 = 38851,
			.ram = negb_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1050220433, 3220609190, 3043815213, 3770811275, 2955535878, 1209862745, 2692782889, 3766702799, 554033741, 1488699337, 3856178619, 771726719, 1950918992, 922440498, 2078027654, 8440188, 13348662, 33297, 9817456
			},
			.prefetch0 = 38851,
			.prefetch1 = 30914,
			.ram = negb_final_ram_5,
			.ram_len = 8,
		},
		.transactions = negb_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 NEG.b (A7) 4417",
		.initial = {
			.regs = {
				1195677216, 2481441122, 3917547209, 306962082, 1168474016, 1593827703, 1942680376, 3081937398, 3208583264, 2956397900, 107152336, 210650805, 4005167820, 3854658564, 673145946, 2755794, 2026152, 9757, 567210
			},
			.prefetch0 = 17431,
			.prefetch1 = 25820,
			.ram = negb_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1195677216, 2481441122, 3917547209, 306962082, 1168474016, 1593827703, 1942680376, 3081937398, 3208583264, 2956397900, 107152336, 210650805, 4005167820, 3854658564, 673145946, 2755794, 2026152, 9753, 567212
			},
			.prefetch0 = 25820,
			.prefetch1 = 49035,
			.ram = negb_final_ram_6,
			.ram_len = 8,
		},
		.transactions = negb_transactions_6,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "007 NEG.b (xxx).l 4439",
		.initial = {
			.regs = {
				1209362854, 415098437, 3188230667, 3454080905, 1374800788, 637856576, 652135121, 3415366856, 431750991, 4152919534, 949205445, 2812275303, 1443332688, 3224486876, 158502719, 1630298, 682142, 41754, 13979398
			},
			.prefetch0 = 17465,
			.prefetch1 = 27879,
			.ram = negb_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1209362854, 415098437, 3188230667, 3454080905, 1374800788, 637856576, 652135121, 3415366856, 431750991, 4152919534, 949205445, 2812275303, 1443332688, 3224486876, 158502719, 1630298, 682142, 41753, 13979404
			},
			.prefetch0 = 40748,
			.prefetch1 = 31927,
			.ram = negb_final_ram_7,
			.ram_len = 12,
		},
		.transactions = negb_transactions_7,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "008 NEG.b (d16, A3) 442b",
		.initial = {
			.regs = {
				1524252176, 2196511034, 3309022397, 3285954985, 1571245466, 885484923, 821139129, 3713821225, 2856971942, 1973453908, 3440482822, 1521918500, 3307529683, 831632256, 1441453767, 8703318, 4220328, 34575, 3889774
			},
			.prefetch0 = 17451,
			.prefetch1 = 1722,
			.ram = negb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1524252176, 2196511034, 3309022397, 3285954985, 1571245466, 885484923, 821139129, 3713821225, 2856971942, 1973453908, 3440482822, 1521918500, 3307529683, 831632256, 1441453767, 8703318, 4220328, 34577, 3889778
			},
			.prefetch0 = 62670,
			.prefetch1 = 36657,
			.ram = negb_final_ram_8,
			.ram_len = 10,
		},
		.transactions = negb_transactions_8,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "009 NEG.b (d8, A6, Xn) 4436",
		.initial = {
			.regs = {
				443964101, 364148677, 2451523847, 2213409705, 3737026287, 1374628797, 239068756, 3485032130, 827163980, 1161627562, 1452666034, 3171296662, 91516153, 155091775, 185898292, 10984864, 473476, 23, 13659274
			},
			.prefetch0 = 17462,
			.prefetch1 = 10255,
			.ram = negb_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				443964101, 364148677, 2451523847, 2213409705, 3737026287, 1374628797, 239068756, 3485032130, 827163980, 1161627562, 1452666034, 3171296662, 91516153, 155091775, 185898292, 10984864, 473476, 25, 13659278
			},
			.prefetch0 = 34678,
			.prefetch1 = 38220,
			.ram = negb_final_ram_9,
			.ram_len = 10,
		},
		.transactions = negb_transactions_9,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "010 NEG.b -(A7) 4427",
		.initial = {
			.regs = {
				1015835152, 3283940297, 51404050, 2239475021, 2186699842, 670145631, 2173642797, 1098337639, 668909119, 4170814263, 1012143237, 317691214, 1318432257, 3242019790, 2451181847, 2164892, 1714898, 33050, 8833244
			},
			.prefetch0 = 17447,
			.prefetch1 = 1265,
			.ram = negb_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1015835152, 3283940297, 51404050, 2239475021, 2186699842, 670145631, 2173642797, 1098337639, 668909119, 4170814263, 1012143237, 317691214, 1318432257, 3242019790, 2451181847, 2164890, 1714898, 33041, 8833246
			},
			.prefetch0 = 1265,
			.prefetch1 = 9272,
			.ram = negb_final_ram_10,
			.ram_len = 8,
		},
		.transactions = negb_transactions_10,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "011 NEG.b D5 4405",
		.initial = {
			.regs = {
				3093476900, 2283702979, 287207960, 85595242, 705916286, 1309595921, 3201351663, 1155373128, 875350955, 2143570833, 3660321579, 4288597942, 4232112486, 3279166336, 2845107489, 9622976, 11573930, 33803, 9309072
			},
			.prefetch0 = 17413,
			.prefetch1 = 43194,
			.ram = negb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3093476900, 2283702979, 287207960, 85595242, 705916286, 1309596143, 3201351663, 1155373128, 875350955, 2143570833, 3660321579, 4288597942, 4232112486, 3279166336, 2845107489, 9622976, 11573930, 33817, 9309074
			},
			.prefetch0 = 43194,
			.prefetch1 = 30377,
			.ram = negb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = negb_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 NEG.b (A6) 4416",
		.initial = {
			.regs = {
				3819506840, 1303850623, 2806217067, 3387105037, 138630185, 34964601, 3607058000, 3346571, 268363451, 344806406, 1195510184, 1395630206, 3567801076, 3407465028, 3183570339, 5032220, 12241964, 1536, 2038572
			},
			.prefetch0 = 17430,
			.prefetch1 = 19953,
			.ram = negb_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3819506840, 1303850623, 2806217067, 3387105037, 138630185, 34964601, 3607058000, 3346571, 268363451, 344806406, 1195510184, 1395630206, 3567801076, 3407465028, 3183570339, 5032220, 12241964, 1561, 2038574
			},
			.prefetch0 = 19953,
			.prefetch1 = 42687,
			.ram = negb_final_ram_12,
			.ram_len = 8,
		},
		.transactions = negb_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 NEG.b D4 4404",
		.initial = {
			.regs = {
				3680330003, 34045754, 965478752, 675469659, 735674232, 3437264066, 182338309, 463806555, 3320227210, 2130505851, 346150155, 3024713698, 3469026077, 293178362, 109563119, 16584462, 11926784, 29, 3288898
			},
			.prefetch0 = 17412,
			.prefetch1 = 37402,
			.ram = negb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3680330003, 34045754, 965478752, 675469659, 735674248, 3437264066, 182338309, 463806555, 3320227210, 2130505851, 346150155, 3024713698, 3469026077, 293178362, 109563119, 16584462, 11926784, 25, 3288900
			},
			.prefetch0 = 37402,
			.prefetch1 = 45498,
			.ram = negb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = negb_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 NEG.b (A6)+ 441e",
		.initial = {
			.regs = {
				865734845, 1378592967, 27276835, 1440909672, 2044805672, 1406004472, 1956600573, 1940148918, 3136324095, 1658111859, 818279481, 398786353, 3516248309, 2760814216, 941189248, 2898582, 5037820, 8459, 179510
			},
			.prefetch0 = 17438,
			.prefetch1 = 6840,
			.ram = negb_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				865734845, 1378592967, 27276835, 1440909672, 2044805672, 1406004472, 1956600573, 1940148918, 3136324095, 1658111859, 818279481, 398786353, 3516248309, 2760814216, 941189249, 2898582, 5037820, 8473, 179512
			},
			.prefetch0 = 6840,
			.prefetch1 = 58120,
			.ram = negb_final_ram_14,
			.ram_len = 8,
		},
		.transactions = negb_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 NEG.b (d16, A4) 442c",
		.initial = {
			.regs = {
				3271262506, 56204097, 961533232, 1627614269, 1747798532, 743592972, 2036982555, 2731354897, 2496168270, 2936975860, 1976324312, 2529744804, 2947910676, 3750708123, 3290765795, 13281322, 12678906, 41485, 5160472
			},
			.prefetch0 = 17452,
			.prefetch1 = 11139,
			.ram = negb_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3271262506, 56204097, 961533232, 1627614269, 1747798532, 743592972, 2036982555, 2731354897, 2496168270, 2936975860, 1976324312, 2529744804, 2947910676, 3750708123, 3290765795, 13281322, 12678906, 41497, 5160476
			},
			.prefetch0 = 5591,
			.prefetch1 = 43408,
			.ram = negb_final_ram_15,
			.ram_len = 10,
		},
		.transactions = negb_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
};

#endif /* RBT_NEGB_H */