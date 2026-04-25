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

static const SST_RamByte negb_initial_ram_16[] = {
		{ .addr = 0x4dbfc4, .byte = 0x44 },
		{ .addr = 0x4dbfc5, .byte = 0x13 },
		{ .addr = 0x4dbfc6, .byte = 0x42 },
		{ .addr = 0x4dbfc7, .byte = 0xbf },
		{ .addr = 0xe31dca, .byte = 0x88 },
		{ .addr = 0xe31dcb, .byte = 0x49 },
		{ .addr = 0x4dbfc8, .byte = 0x86 },
		{ .addr = 0x4dbfc9, .byte = 0xf8 }
};

static const SST_RamByte negb_final_ram_16[] = {
		{ .addr = 0x4dbfc4, .byte = 0x44 },
		{ .addr = 0x4dbfc5, .byte = 0x13 },
		{ .addr = 0x4dbfc6, .byte = 0x42 },
		{ .addr = 0x4dbfc7, .byte = 0xbf },
		{ .addr = 0xe31dca, .byte = 0x78 },
		{ .addr = 0xe31dcb, .byte = 0x49 },
		{ .addr = 0x4dbfc8, .byte = 0x86 },
		{ .addr = 0x4dbfc9, .byte = 0xf8 }
};

static const SST_Transaction negb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14884298, .data = 34816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5095368, .data = 34552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14884298, .data = 30720, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_17[] = {
		{ .addr = 0xe007b6, .byte = 0x44 },
		{ .addr = 0xe007b7, .byte = 0x32 },
		{ .addr = 0xe007b8, .byte = 0x41 },
		{ .addr = 0xe007b9, .byte = 0xc6 },
		{ .addr = 0xe007ba, .byte = 0xa3 },
		{ .addr = 0xe007bb, .byte = 0xca },
		{ .addr = 0xf2ec1e, .byte = 0x92 },
		{ .addr = 0xf2ec1f, .byte = 0xf1 },
		{ .addr = 0xe007bc, .byte = 0x5d },
		{ .addr = 0xe007bd, .byte = 0x4b }
};

static const SST_RamByte negb_final_ram_17[] = {
		{ .addr = 0xe007b6, .byte = 0x44 },
		{ .addr = 0xe007b7, .byte = 0x32 },
		{ .addr = 0xe007b8, .byte = 0x41 },
		{ .addr = 0xe007b9, .byte = 0xc6 },
		{ .addr = 0xe007ba, .byte = 0xa3 },
		{ .addr = 0xe007bb, .byte = 0xca },
		{ .addr = 0xf2ec1e, .byte = 0x6e },
		{ .addr = 0xf2ec1f, .byte = 0xf1 },
		{ .addr = 0xe007bc, .byte = 0x5d },
		{ .addr = 0xe007bd, .byte = 0x4b }
};

static const SST_Transaction negb_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14682042, .data = 41930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15920158, .data = 37376, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14682044, .data = 23883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15920158, .data = 28160, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_18[] = {
		{ .addr = 0x97a0dc, .byte = 0x44 },
		{ .addr = 0x97a0dd, .byte = 0x06 },
		{ .addr = 0x97a0de, .byte = 0xac },
		{ .addr = 0x97a0df, .byte = 0xb5 },
		{ .addr = 0x97a0e0, .byte = 0x30 },
		{ .addr = 0x97a0e1, .byte = 0xcf }
};

static const SST_RamByte negb_final_ram_18[] = {
		{ .addr = 0x97a0dc, .byte = 0x44 },
		{ .addr = 0x97a0dd, .byte = 0x06 },
		{ .addr = 0x97a0de, .byte = 0xac },
		{ .addr = 0x97a0df, .byte = 0xb5 },
		{ .addr = 0x97a0e0, .byte = 0x30 },
		{ .addr = 0x97a0e1, .byte = 0xcf }
};

static const SST_Transaction negb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9937120, .data = 12495, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_19[] = {
		{ .addr = 0x70a00a, .byte = 0x44 },
		{ .addr = 0x70a00b, .byte = 0x2e },
		{ .addr = 0x70a00c, .byte = 0xd2 },
		{ .addr = 0x70a00d, .byte = 0x8f },
		{ .addr = 0x70a00e, .byte = 0xb6 },
		{ .addr = 0x70a00f, .byte = 0xea },
		{ .addr = 0xa104d6, .byte = 0x55 },
		{ .addr = 0xa104d7, .byte = 0xd2 },
		{ .addr = 0x70a010, .byte = 0xa8 },
		{ .addr = 0x70a011, .byte = 0x1e }
};

static const SST_RamByte negb_final_ram_19[] = {
		{ .addr = 0x70a00a, .byte = 0x44 },
		{ .addr = 0x70a00b, .byte = 0x2e },
		{ .addr = 0x70a00c, .byte = 0xd2 },
		{ .addr = 0x70a00d, .byte = 0x8f },
		{ .addr = 0x70a00e, .byte = 0xb6 },
		{ .addr = 0x70a00f, .byte = 0xea },
		{ .addr = 0xa104d6, .byte = 0x55 },
		{ .addr = 0xa104d7, .byte = 0x2e },
		{ .addr = 0x70a010, .byte = 0xa8 },
		{ .addr = 0x70a011, .byte = 0x1e }
};

static const SST_Transaction negb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7381006, .data = 46826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10552534, .data = 210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7381008, .data = 43038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10552534, .data = 46, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_20[] = {
		{ .addr = 0x50fa3e, .byte = 0x44 },
		{ .addr = 0x50fa3f, .byte = 0x29 },
		{ .addr = 0x50fa40, .byte = 0x9b },
		{ .addr = 0x50fa41, .byte = 0xf0 },
		{ .addr = 0x50fa42, .byte = 0x76 },
		{ .addr = 0x50fa43, .byte = 0x8a },
		{ .addr = 0x4d45ae, .byte = 0xf9 },
		{ .addr = 0x4d45af, .byte = 0x22 },
		{ .addr = 0x50fa44, .byte = 0xe1 },
		{ .addr = 0x50fa45, .byte = 0x7a }
};

static const SST_RamByte negb_final_ram_20[] = {
		{ .addr = 0x50fa3e, .byte = 0x44 },
		{ .addr = 0x50fa3f, .byte = 0x29 },
		{ .addr = 0x50fa40, .byte = 0x9b },
		{ .addr = 0x50fa41, .byte = 0xf0 },
		{ .addr = 0x50fa42, .byte = 0x76 },
		{ .addr = 0x50fa43, .byte = 0x8a },
		{ .addr = 0x4d45ae, .byte = 0xf9 },
		{ .addr = 0x4d45af, .byte = 0xde },
		{ .addr = 0x50fa44, .byte = 0xe1 },
		{ .addr = 0x50fa45, .byte = 0x7a }
};

static const SST_Transaction negb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5306946, .data = 30346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5064110, .data = 34, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5306948, .data = 57722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5064110, .data = 222, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_21[] = {
		{ .addr = 0xe406b6, .byte = 0x44 },
		{ .addr = 0xe406b7, .byte = 0x16 },
		{ .addr = 0xe406b8, .byte = 0xe7 },
		{ .addr = 0xe406b9, .byte = 0xc0 },
		{ .addr = 0x8241e6, .byte = 0xed },
		{ .addr = 0x8241e7, .byte = 0x14 },
		{ .addr = 0xe406ba, .byte = 0x16 },
		{ .addr = 0xe406bb, .byte = 0x77 }
};

static const SST_RamByte negb_final_ram_21[] = {
		{ .addr = 0xe406b6, .byte = 0x44 },
		{ .addr = 0xe406b7, .byte = 0x16 },
		{ .addr = 0xe406b8, .byte = 0xe7 },
		{ .addr = 0xe406b9, .byte = 0xc0 },
		{ .addr = 0x8241e6, .byte = 0x13 },
		{ .addr = 0x8241e7, .byte = 0x14 },
		{ .addr = 0xe406ba, .byte = 0x16 },
		{ .addr = 0xe406bb, .byte = 0x77 }
};

static const SST_Transaction negb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8536550, .data = 60672, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14943930, .data = 5751, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8536550, .data = 4864, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_22[] = {
		{ .addr = 0xdd1e56, .byte = 0x44 },
		{ .addr = 0xdd1e57, .byte = 0x06 },
		{ .addr = 0xdd1e58, .byte = 0x94 },
		{ .addr = 0xdd1e59, .byte = 0xf2 },
		{ .addr = 0xdd1e5a, .byte = 0xf9 },
		{ .addr = 0xdd1e5b, .byte = 0x0c }
};

static const SST_RamByte negb_final_ram_22[] = {
		{ .addr = 0xdd1e56, .byte = 0x44 },
		{ .addr = 0xdd1e57, .byte = 0x06 },
		{ .addr = 0xdd1e58, .byte = 0x94 },
		{ .addr = 0xdd1e59, .byte = 0xf2 },
		{ .addr = 0xdd1e5a, .byte = 0xf9 },
		{ .addr = 0xdd1e5b, .byte = 0x0c }
};

static const SST_Transaction negb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14491226, .data = 63756, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_23[] = {
		{ .addr = 0x9be0d4, .byte = 0x44 },
		{ .addr = 0x9be0d5, .byte = 0x1d },
		{ .addr = 0x9be0d6, .byte = 0x90 },
		{ .addr = 0x9be0d7, .byte = 0xe2 },
		{ .addr = 0x355a24, .byte = 0x97 },
		{ .addr = 0x355a25, .byte = 0x94 },
		{ .addr = 0x9be0d8, .byte = 0x83 },
		{ .addr = 0x9be0d9, .byte = 0xa1 }
};

static const SST_RamByte negb_final_ram_23[] = {
		{ .addr = 0x9be0d4, .byte = 0x44 },
		{ .addr = 0x9be0d5, .byte = 0x1d },
		{ .addr = 0x9be0d6, .byte = 0x90 },
		{ .addr = 0x9be0d7, .byte = 0xe2 },
		{ .addr = 0x355a24, .byte = 0x97 },
		{ .addr = 0x355a25, .byte = 0x6c },
		{ .addr = 0x9be0d8, .byte = 0x83 },
		{ .addr = 0x9be0d9, .byte = 0xa1 }
};

static const SST_Transaction negb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3496484, .data = 148, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10215640, .data = 33697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3496484, .data = 108, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_24[] = {
		{ .addr = 0xcf317c, .byte = 0x44 },
		{ .addr = 0xcf317d, .byte = 0x2a },
		{ .addr = 0xcf317e, .byte = 0x56 },
		{ .addr = 0xcf317f, .byte = 0x5e },
		{ .addr = 0xcf3180, .byte = 0xee },
		{ .addr = 0xcf3181, .byte = 0xa0 },
		{ .addr = 0x362f10, .byte = 0x9d },
		{ .addr = 0x362f11, .byte = 0x86 },
		{ .addr = 0xcf3182, .byte = 0x1b },
		{ .addr = 0xcf3183, .byte = 0x5a }
};

static const SST_RamByte negb_final_ram_24[] = {
		{ .addr = 0xcf317c, .byte = 0x44 },
		{ .addr = 0xcf317d, .byte = 0x2a },
		{ .addr = 0xcf317e, .byte = 0x56 },
		{ .addr = 0xcf317f, .byte = 0x5e },
		{ .addr = 0xcf3180, .byte = 0xee },
		{ .addr = 0xcf3181, .byte = 0xa0 },
		{ .addr = 0x362f10, .byte = 0x63 },
		{ .addr = 0x362f11, .byte = 0x86 },
		{ .addr = 0xcf3182, .byte = 0x1b },
		{ .addr = 0xcf3183, .byte = 0x5a }
};

static const SST_Transaction negb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13578624, .data = 61088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3550992, .data = 40192, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13578626, .data = 7002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3550992, .data = 25344, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_25[] = {
		{ .addr = 0xe54466, .byte = 0x44 },
		{ .addr = 0xe54467, .byte = 0x02 },
		{ .addr = 0xe54468, .byte = 0xaf },
		{ .addr = 0xe54469, .byte = 0x27 },
		{ .addr = 0xe5446a, .byte = 0x01 },
		{ .addr = 0xe5446b, .byte = 0x36 }
};

static const SST_RamByte negb_final_ram_25[] = {
		{ .addr = 0xe54466, .byte = 0x44 },
		{ .addr = 0xe54467, .byte = 0x02 },
		{ .addr = 0xe54468, .byte = 0xaf },
		{ .addr = 0xe54469, .byte = 0x27 },
		{ .addr = 0xe5446a, .byte = 0x01 },
		{ .addr = 0xe5446b, .byte = 0x36 }
};

static const SST_Transaction negb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15025258, .data = 310, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_26[] = {
		{ .addr = 0xf81068, .byte = 0x44 },
		{ .addr = 0xf81069, .byte = 0x14 },
		{ .addr = 0xf8106a, .byte = 0x02 },
		{ .addr = 0xf8106b, .byte = 0xc6 },
		{ .addr = 0xae57b4, .byte = 0x6d },
		{ .addr = 0xae57b5, .byte = 0xa7 },
		{ .addr = 0xf8106c, .byte = 0x47 },
		{ .addr = 0xf8106d, .byte = 0x75 }
};

static const SST_RamByte negb_final_ram_26[] = {
		{ .addr = 0xf81068, .byte = 0x44 },
		{ .addr = 0xf81069, .byte = 0x14 },
		{ .addr = 0xf8106a, .byte = 0x02 },
		{ .addr = 0xf8106b, .byte = 0xc6 },
		{ .addr = 0xae57b4, .byte = 0x93 },
		{ .addr = 0xae57b5, .byte = 0xa7 },
		{ .addr = 0xf8106c, .byte = 0x47 },
		{ .addr = 0xf8106d, .byte = 0x75 }
};

static const SST_Transaction negb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11425716, .data = 27904, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16257132, .data = 18293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11425716, .data = 37632, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_27[] = {
		{ .addr = 0x08d64a, .byte = 0x44 },
		{ .addr = 0x08d64b, .byte = 0x1d },
		{ .addr = 0x08d64c, .byte = 0x0c },
		{ .addr = 0x08d64d, .byte = 0x10 },
		{ .addr = 0x7da6a0, .byte = 0xe8 },
		{ .addr = 0x7da6a1, .byte = 0xab },
		{ .addr = 0x08d64e, .byte = 0x17 },
		{ .addr = 0x08d64f, .byte = 0xfb }
};

static const SST_RamByte negb_final_ram_27[] = {
		{ .addr = 0x08d64a, .byte = 0x44 },
		{ .addr = 0x08d64b, .byte = 0x1d },
		{ .addr = 0x08d64c, .byte = 0x0c },
		{ .addr = 0x08d64d, .byte = 0x10 },
		{ .addr = 0x7da6a0, .byte = 0x18 },
		{ .addr = 0x7da6a1, .byte = 0xab },
		{ .addr = 0x08d64e, .byte = 0x17 },
		{ .addr = 0x08d64f, .byte = 0xfb }
};

static const SST_Transaction negb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8234656, .data = 59392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 579150, .data = 6139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8234656, .data = 6144, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_28[] = {
		{ .addr = 0xbf74d4, .byte = 0x44 },
		{ .addr = 0xbf74d5, .byte = 0x38 },
		{ .addr = 0xbf74d6, .byte = 0xf6 },
		{ .addr = 0xbf74d7, .byte = 0x1b },
		{ .addr = 0xbf74d8, .byte = 0x42 },
		{ .addr = 0xbf74d9, .byte = 0x2d },
		{ .addr = 0xfff61a, .byte = 0x21 },
		{ .addr = 0xfff61b, .byte = 0x77 },
		{ .addr = 0xbf74da, .byte = 0xc1 },
		{ .addr = 0xbf74db, .byte = 0x7f }
};

static const SST_RamByte negb_final_ram_28[] = {
		{ .addr = 0xbf74d4, .byte = 0x44 },
		{ .addr = 0xbf74d5, .byte = 0x38 },
		{ .addr = 0xbf74d6, .byte = 0xf6 },
		{ .addr = 0xbf74d7, .byte = 0x1b },
		{ .addr = 0xbf74d8, .byte = 0x42 },
		{ .addr = 0xbf74d9, .byte = 0x2d },
		{ .addr = 0xfff61a, .byte = 0x21 },
		{ .addr = 0xfff61b, .byte = 0x89 },
		{ .addr = 0xbf74da, .byte = 0xc1 },
		{ .addr = 0xbf74db, .byte = 0x7f }
};

static const SST_Transaction negb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12547288, .data = 16941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16774682, .data = 119, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12547290, .data = 49535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16774682, .data = 137, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_29[] = {
		{ .addr = 0xe5bf16, .byte = 0x44 },
		{ .addr = 0xe5bf17, .byte = 0x05 },
		{ .addr = 0xe5bf18, .byte = 0x1f },
		{ .addr = 0xe5bf19, .byte = 0x30 },
		{ .addr = 0xe5bf1a, .byte = 0xee },
		{ .addr = 0xe5bf1b, .byte = 0xbf }
};

static const SST_RamByte negb_final_ram_29[] = {
		{ .addr = 0xe5bf16, .byte = 0x44 },
		{ .addr = 0xe5bf17, .byte = 0x05 },
		{ .addr = 0xe5bf18, .byte = 0x1f },
		{ .addr = 0xe5bf19, .byte = 0x30 },
		{ .addr = 0xe5bf1a, .byte = 0xee },
		{ .addr = 0xe5bf1b, .byte = 0xbf }
};

static const SST_Transaction negb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15056666, .data = 61119, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_30[] = {
		{ .addr = 0x344408, .byte = 0x44 },
		{ .addr = 0x344409, .byte = 0x11 },
		{ .addr = 0x34440a, .byte = 0xf4 },
		{ .addr = 0x34440b, .byte = 0x63 },
		{ .addr = 0xcc86c4, .byte = 0x26 },
		{ .addr = 0xcc86c5, .byte = 0xc6 },
		{ .addr = 0x34440c, .byte = 0x9e },
		{ .addr = 0x34440d, .byte = 0x06 }
};

static const SST_RamByte negb_final_ram_30[] = {
		{ .addr = 0x344408, .byte = 0x44 },
		{ .addr = 0x344409, .byte = 0x11 },
		{ .addr = 0x34440a, .byte = 0xf4 },
		{ .addr = 0x34440b, .byte = 0x63 },
		{ .addr = 0xcc86c4, .byte = 0x26 },
		{ .addr = 0xcc86c5, .byte = 0x3a },
		{ .addr = 0x34440c, .byte = 0x9e },
		{ .addr = 0x34440d, .byte = 0x06 }
};

static const SST_Transaction negb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13403844, .data = 198, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3425292, .data = 40454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13403844, .data = 58, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negb_initial_ram_31[] = {
		{ .addr = 0x418e8e, .byte = 0x44 },
		{ .addr = 0x418e8f, .byte = 0x31 },
		{ .addr = 0x418e90, .byte = 0x87 },
		{ .addr = 0x418e91, .byte = 0x83 },
		{ .addr = 0x418e92, .byte = 0xf9 },
		{ .addr = 0x418e93, .byte = 0xf7 },
		{ .addr = 0xee70e2, .byte = 0x54 },
		{ .addr = 0xee70e3, .byte = 0x2a },
		{ .addr = 0x418e94, .byte = 0xd3 },
		{ .addr = 0x418e95, .byte = 0xfe }
};

static const SST_RamByte negb_final_ram_31[] = {
		{ .addr = 0x418e8e, .byte = 0x44 },
		{ .addr = 0x418e8f, .byte = 0x31 },
		{ .addr = 0x418e90, .byte = 0x87 },
		{ .addr = 0x418e91, .byte = 0x83 },
		{ .addr = 0x418e92, .byte = 0xf9 },
		{ .addr = 0x418e93, .byte = 0xf7 },
		{ .addr = 0xee70e2, .byte = 0x54 },
		{ .addr = 0xee70e3, .byte = 0xd6 },
		{ .addr = 0x418e94, .byte = 0xd3 },
		{ .addr = 0x418e95, .byte = 0xfe }
};

static const SST_Transaction negb_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4296338, .data = 63991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15626466, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4296340, .data = 54270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15626466, .data = 214, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 NEG.b (A3) 4413",
		.initial = {
			.regs = {
				350344435, 3348138157, 1791163404, 1719392381, 1356985441, 2458154479, 44339987, 325405225, 3916184461, 4219032593, 695523170, 3152223690, 2238523666, 3980678539, 2789512128, 8924912, 14253842, 40973, 5095368
			},
			.prefetch0 = 17427,
			.prefetch1 = 17087,
			.ram = negb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				350344435, 3348138157, 1791163404, 1719392381, 1356985441, 2458154479, 44339987, 325405225, 3916184461, 4219032593, 695523170, 3152223690, 2238523666, 3980678539, 2789512128, 8924912, 14253842, 40977, 5095370
			},
			.prefetch0 = 17087,
			.prefetch1 = 34552,
			.ram = negb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = negb_transactions_16,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "017 NEG.b (d8, A2, Xn) 4432",
		.initial = {
			.regs = {
				675050474, 1698802611, 2375967431, 3169628731, 1465426629, 825987495, 2555894656, 1923700598, 2192740716, 886458845, 4277356947, 636620879, 647643433, 2742077369, 4235191617, 9362300, 14424952, 33302, 14682042
			},
			.prefetch0 = 17458,
			.prefetch1 = 16838,
			.ram = negb_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				675050474, 1698802611, 2375967431, 3169628731, 1465426629, 825987495, 2555894656, 1923700598, 2192740716, 886458845, 4277356947, 636620879, 647643433, 2742077369, 4235191617, 9362300, 14424952, 33297, 14682046
			},
			.prefetch0 = 41930,
			.prefetch1 = 23883,
			.ram = negb_final_ram_17,
			.ram_len = 10,
		},
		.transactions = negb_transactions_17,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "018 NEG.b D6 4406",
		.initial = {
			.regs = {
				2639886519, 3513490470, 4079992026, 1157591836, 3591229265, 3947116778, 2622840605, 4203140877, 980159191, 1015040534, 2502229727, 505858775, 2899608950, 641658178, 3576294077, 12935492, 219240, 42496, 9937120
			},
			.prefetch0 = 17414,
			.prefetch1 = 44213,
			.ram = negb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2639886519, 3513490470, 4079992026, 1157591836, 3591229265, 3947116778, 2622840803, 4203140877, 980159191, 1015040534, 2502229727, 505858775, 2899608950, 641658178, 3576294077, 12935492, 219240, 42521, 9937122
			},
			.prefetch0 = 44213,
			.prefetch1 = 12495,
			.ram = negb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = negb_transactions_18,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "019 NEG.b (d16, A6) 442e",
		.initial = {
			.regs = {
				652000807, 1977404395, 2298301579, 3063502386, 2069887084, 4273171724, 2025127395, 989583796, 3182994232, 1216964914, 981392348, 3711181014, 3885958351, 2857852232, 195113544, 10139406, 759328, 8454, 7381006
			},
			.prefetch0 = 17454,
			.prefetch1 = 53903,
			.ram = negb_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				652000807, 1977404395, 2298301579, 3063502386, 2069887084, 4273171724, 2025127395, 989583796, 3182994232, 1216964914, 981392348, 3711181014, 3885958351, 2857852232, 195113544, 10139406, 759328, 8465, 7381010
			},
			.prefetch0 = 46826,
			.prefetch1 = 43038,
			.ram = negb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = negb_transactions_19,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "020 NEG.b (d16, A1) 4429",
		.initial = {
			.regs = {
				142073360, 828097687, 3128271857, 1222167031, 1093956472, 1999765506, 3866782191, 748611823, 2557473513, 2790107583, 2711217924, 422107852, 1814860147, 1261833967, 3024858177, 8889582, 4513600, 8974, 5306946
			},
			.prefetch0 = 17449,
			.prefetch1 = 39920,
			.ram = negb_initial_ram_20,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				142073360, 828097687, 3128271857, 1222167031, 1093956472, 1999765506, 3866782191, 748611823, 2557473513, 2790107583, 2711217924, 422107852, 1814860147, 1261833967, 3024858177, 8889582, 4513600, 8985, 5306950
			},
			.prefetch0 = 30346,
			.prefetch1 = 57722,
			.ram = negb_final_ram_20,
			.ram_len = 10,
		},
		.transactions = negb_transactions_20,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "021 NEG.b (A6) 4416",
		.initial = {
			.regs = {
				3100455958, 1582943195, 3366851693, 1210929861, 177389684, 77905153, 3702330004, 4002708520, 2322261867, 1194925452, 4058337751, 674947150, 1232951726, 3191837625, 2055356902, 208070, 11192902, 540, 14943930
			},
			.prefetch0 = 17430,
			.prefetch1 = 59328,
			.ram = negb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3100455958, 1582943195, 3366851693, 1210929861, 177389684, 77905153, 3702330004, 4002708520, 2322261867, 1194925452, 4058337751, 674947150, 1232951726, 3191837625, 2055356902, 208070, 11192902, 529, 14943932
			},
			.prefetch0 = 59328,
			.prefetch1 = 5751,
			.ram = negb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = negb_transactions_21,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "022 NEG.b D6 4406",
		.initial = {
			.regs = {
				4053620994, 1054746854, 232352892, 3193143868, 3577793607, 1388684040, 84154690, 3368729354, 1146320619, 1366924681, 4100131102, 3612276746, 2792675908, 1132876501, 2812889643, 12973312, 2871718, 41243, 14491226
			},
			.prefetch0 = 17414,
			.prefetch1 = 38130,
			.ram = negb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4053620994, 1054746854, 232352892, 3193143868, 3577793607, 1388684040, 84154814, 3368729354, 1146320619, 1366924681, 4100131102, 3612276746, 2792675908, 1132876501, 2812889643, 12973312, 2871718, 41241, 14491228
			},
			.prefetch0 = 38130,
			.prefetch1 = 63756,
			.ram = negb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = negb_transactions_22,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "023 NEG.b (A5)+ 441d",
		.initial = {
			.regs = {
				1618358401, 18902355, 2757854018, 87189801, 2789729963, 2061705743, 1685984043, 2496490843, 1699589161, 327201539, 263505722, 3162690522, 33205254, 2738182693, 2645468266, 10645516, 1098290, 534, 10215640
			},
			.prefetch0 = 17437,
			.prefetch1 = 37090,
			.ram = negb_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1618358401, 18902355, 2757854018, 87189801, 2789729963, 2061705743, 1685984043, 2496490843, 1699589161, 327201539, 263505722, 3162690522, 33205254, 2738182694, 2645468266, 10645516, 1098290, 529, 10215642
			},
			.prefetch0 = 37090,
			.prefetch1 = 33697,
			.ram = negb_final_ram_23,
			.ram_len = 8,
		},
		.transactions = negb_transactions_23,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "024 NEG.b (d16, A2) 442a",
		.initial = {
			.regs = {
				737233306, 2043938917, 1682588580, 3232382064, 3409052657, 3108917292, 1404876058, 3560508688, 915780094, 4026874227, 1932908722, 180931547, 2746937406, 1118453875, 1640828078, 998352, 16300222, 542, 13578624
			},
			.prefetch0 = 17450,
			.prefetch1 = 22110,
			.ram = negb_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				737233306, 2043938917, 1682588580, 3232382064, 3409052657, 3108917292, 1404876058, 3560508688, 915780094, 4026874227, 1932908722, 180931547, 2746937406, 1118453875, 1640828078, 998352, 16300222, 529, 13578628
			},
			.prefetch0 = 61088,
			.prefetch1 = 7002,
			.ram = negb_final_ram_24,
			.ram_len = 10,
		},
		.transactions = negb_transactions_24,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "025 NEG.b D2 4402",
		.initial = {
			.regs = {
				2365402101, 3731347962, 3450939522, 400024860, 503972044, 770486736, 3912547529, 837924609, 49375439, 2557459825, 417860862, 2222200275, 248393312, 358516458, 508181509, 3101482, 6204258, 32783, 15025258
			},
			.prefetch0 = 17410,
			.prefetch1 = 44839,
			.ram = negb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2365402101, 3731347962, 3450939518, 400024860, 503972044, 770486736, 3912547529, 837924609, 49375439, 2557459825, 417860862, 2222200275, 248393312, 358516458, 508181509, 3101482, 6204258, 32785, 15025260
			},
			.prefetch0 = 44839,
			.prefetch1 = 310,
			.ram = negb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = negb_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 NEG.b (A4) 4414",
		.initial = {
			.regs = {
				1500254796, 1270002637, 1836684237, 1663139619, 253243185, 1690816813, 611745071, 2633520533, 1918106517, 4087831641, 1184998314, 1226469827, 615405492, 1707668728, 2170168756, 11288590, 6793000, 515, 16257132
			},
			.prefetch0 = 17428,
			.prefetch1 = 710,
			.ram = negb_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1500254796, 1270002637, 1836684237, 1663139619, 253243185, 1690816813, 611745071, 2633520533, 1918106517, 4087831641, 1184998314, 1226469827, 615405492, 1707668728, 2170168756, 11288590, 6793000, 537, 16257134
			},
			.prefetch0 = 710,
			.prefetch1 = 18293,
			.ram = negb_final_ram_26,
			.ram_len = 8,
		},
		.transactions = negb_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 NEG.b (A5)+ 441d",
		.initial = {
			.regs = {
				674601644, 1358252950, 1609623656, 291712225, 1578733570, 456013469, 4043523060, 3297831840, 936750603, 351641659, 1006230009, 317292629, 117960179, 3632113312, 3590937465, 6077698, 7436634, 8455, 579150
			},
			.prefetch0 = 17437,
			.prefetch1 = 3088,
			.ram = negb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				674601644, 1358252950, 1609623656, 291712225, 1578733570, 456013469, 4043523060, 3297831840, 936750603, 351641659, 1006230009, 317292629, 117960179, 3632113313, 3590937465, 6077698, 7436634, 8465, 579152
			},
			.prefetch0 = 3088,
			.prefetch1 = 6139,
			.ram = negb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = negb_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 NEG.b (xxx).w 4438",
		.initial = {
			.regs = {
				123376076, 3614624695, 3960950734, 3940618274, 269883948, 898098759, 3712422757, 3086767094, 2174945130, 2350927942, 3400352016, 2785046992, 3337131750, 413751483, 2251770541, 1677364, 5570202, 1798, 12547288
			},
			.prefetch0 = 17464,
			.prefetch1 = 63003,
			.ram = negb_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				123376076, 3614624695, 3960950734, 3940618274, 269883948, 898098759, 3712422757, 3086767094, 2174945130, 2350927942, 3400352016, 2785046992, 3337131750, 413751483, 2251770541, 1677364, 5570202, 1817, 12547292
			},
			.prefetch0 = 16941,
			.prefetch1 = 49535,
			.ram = negb_final_ram_28,
			.ram_len = 10,
		},
		.transactions = negb_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 NEG.b D5 4405",
		.initial = {
			.regs = {
				1340121745, 3877013462, 3058039651, 2917312978, 941066596, 804793261, 139238445, 217798472, 1967837965, 4286176586, 3685410363, 3802267306, 478290864, 3984735526, 669138402, 1076336, 13064166, 42756, 15056666
			},
			.prefetch0 = 17413,
			.prefetch1 = 7984,
			.ram = negb_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1340121745, 3877013462, 3058039651, 2917312978, 941066596, 804793171, 139238445, 217798472, 1967837965, 4286176586, 3685410363, 3802267306, 478290864, 3984735526, 669138402, 1076336, 13064166, 42769, 15056668
			},
			.prefetch0 = 7984,
			.prefetch1 = 61119,
			.ram = negb_final_ram_29,
			.ram_len = 6,
		},
		.transactions = negb_transactions_29,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "030 NEG.b (A1) 4411",
		.initial = {
			.regs = {
				17737721, 57134084, 3832519305, 812147938, 4060386268, 2602580810, 4245158303, 909191988, 3930054763, 63735493, 2972831853, 2684832656, 939379461, 4196138162, 2971998477, 11003850, 6070510, 518, 3425292
			},
			.prefetch0 = 17425,
			.prefetch1 = 62563,
			.ram = negb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				17737721, 57134084, 3832519305, 812147938, 4060386268, 2602580810, 4245158303, 909191988, 3930054763, 63735493, 2972831853, 2684832656, 939379461, 4196138162, 2971998477, 11003850, 6070510, 529, 3425294
			},
			.prefetch0 = 62563,
			.prefetch1 = 40454,
			.ram = negb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = negb_transactions_30,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "031 NEG.b (d8, A1, Xn) 4431",
		.initial = {
			.regs = {
				71861666, 4234047449, 1316547637, 3583092269, 1559579101, 2853560606, 3051063234, 2276218417, 1673079567, 4209919569, 937627827, 2171214498, 2687845736, 2238236840, 2428351436, 1069962, 8770068, 41218, 4296338
			},
			.prefetch0 = 17457,
			.prefetch1 = 34691,
			.ram = negb_initial_ram_31,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				71861666, 4234047449, 1316547637, 3583092269, 1559579101, 2853560606, 3051063234, 2276218417, 1673079567, 4209919569, 937627827, 2171214498, 2687845736, 2238236840, 2428351436, 1069962, 8770068, 41241, 4296342
			},
			.prefetch0 = 63991,
			.prefetch1 = 54270,
			.ram = negb_final_ram_31,
			.ram_len = 10,
		},
		.transactions = negb_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_NEGB_H */