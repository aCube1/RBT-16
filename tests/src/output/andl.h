#ifndef RBT_ANDL_H
#define RBT_ANDL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte andl_initial_ram_0[] = {
		{ .addr = 0x074b72, .byte = 0xcb },
		{ .addr = 0x074b73, .byte = 0x9c },
		{ .addr = 0x074b74, .byte = 0x86 },
		{ .addr = 0x074b75, .byte = 0xb6 },
		{ .addr = 0x00000c, .byte = 0x79 },
		{ .addr = 0x00000d, .byte = 0x14 },
		{ .addr = 0x00000e, .byte = 0x8e },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0x148e18, .byte = 0x52 },
		{ .addr = 0x148e19, .byte = 0x7f },
		{ .addr = 0x148e1a, .byte = 0x84 },
		{ .addr = 0x148e1b, .byte = 0x32 }
};

static const SST_RamByte andl_final_ram_0[] = {
		{ .addr = 0x074b72, .byte = 0xcb },
		{ .addr = 0x074b73, .byte = 0x9c },
		{ .addr = 0x074b74, .byte = 0x86 },
		{ .addr = 0x074b75, .byte = 0xb6 },
		{ .addr = 0x954d88, .byte = 0x4b },
		{ .addr = 0x954d89, .byte = 0x74 },
		{ .addr = 0x954d84, .byte = 0x80 },
		{ .addr = 0x954d85, .byte = 0x17 },
		{ .addr = 0x954d86, .byte = 0x00 },
		{ .addr = 0x954d87, .byte = 0x07 },
		{ .addr = 0x954d82, .byte = 0xcb },
		{ .addr = 0x954d83, .byte = 0x9c },
		{ .addr = 0x954d80, .byte = 0x64 },
		{ .addr = 0x954d81, .byte = 0x2b },
		{ .addr = 0x954d7c, .byte = 0xcb },
		{ .addr = 0x954d7d, .byte = 0x91 },
		{ .addr = 0x954d7e, .byte = 0xc8 },
		{ .addr = 0x954d7f, .byte = 0x72 },
		{ .addr = 0x00000c, .byte = 0x79 },
		{ .addr = 0x00000d, .byte = 0x14 },
		{ .addr = 0x00000e, .byte = 0x8e },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0x148e18, .byte = 0x52 },
		{ .addr = 0x148e19, .byte = 0x7f },
		{ .addr = 0x148e1a, .byte = 0x84 },
		{ .addr = 0x148e1b, .byte = 0x32 }
};

static const SST_Transaction andl_transactions_0[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7496746, .data = 28720, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9784712, .data = 19316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9784708, .data = 32791, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9784710, .data = 7, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9784706, .data = 52124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9784704, .data = 25643, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9784700, .data = 52113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9784702, .data = 51314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 30996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1347096, .data = 21119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1347098, .data = 33842, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_1[] = {
		{ .addr = 0xec35a8, .byte = 0xcf },
		{ .addr = 0xec35a9, .byte = 0xa4 },
		{ .addr = 0xec35aa, .byte = 0x2d },
		{ .addr = 0xec35ab, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0x78 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0x1f },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0xce1f62, .byte = 0x7c },
		{ .addr = 0xce1f63, .byte = 0xfc },
		{ .addr = 0xce1f64, .byte = 0x2f },
		{ .addr = 0xce1f65, .byte = 0xc5 }
};

static const SST_RamByte andl_final_ram_1[] = {
		{ .addr = 0xec35a8, .byte = 0xcf },
		{ .addr = 0xec35a9, .byte = 0xa4 },
		{ .addr = 0xec35aa, .byte = 0x2d },
		{ .addr = 0xec35ab, .byte = 0xd6 },
		{ .addr = 0xc4e672, .byte = 0x35 },
		{ .addr = 0xc4e673, .byte = 0xaa },
		{ .addr = 0xc4e66e, .byte = 0x25 },
		{ .addr = 0xc4e66f, .byte = 0x18 },
		{ .addr = 0xc4e670, .byte = 0x00 },
		{ .addr = 0xc4e671, .byte = 0xec },
		{ .addr = 0xc4e66c, .byte = 0xcf },
		{ .addr = 0xc4e66d, .byte = 0xa4 },
		{ .addr = 0xc4e66a, .byte = 0x51 },
		{ .addr = 0xc4e66b, .byte = 0x75 },
		{ .addr = 0xc4e666, .byte = 0xcf },
		{ .addr = 0xc4e667, .byte = 0xb5 },
		{ .addr = 0xc4e668, .byte = 0x92 },
		{ .addr = 0xc4e669, .byte = 0x38 },
		{ .addr = 0x00000c, .byte = 0x78 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0x1f },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0xce1f62, .byte = 0x7c },
		{ .addr = 0xce1f63, .byte = 0xfc },
		{ .addr = 0xce1f64, .byte = 0x2f },
		{ .addr = 0xce1f65, .byte = 0xc5 }
};

static const SST_Transaction andl_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3690868, .data = 21785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12904050, .data = 13738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12904046, .data = 9496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12904048, .data = 236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12904044, .data = 53156, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12904042, .data = 20853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12904038, .data = 53173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12904040, .data = 37432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 30926, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13508450, .data = 31996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13508452, .data = 12229, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_2[] = {
		{ .addr = 0x0effd4, .byte = 0xc6 },
		{ .addr = 0x0effd5, .byte = 0x9e },
		{ .addr = 0x0effd6, .byte = 0x32 },
		{ .addr = 0x0effd7, .byte = 0xfd },
		{ .addr = 0x38fe1e, .byte = 0x36 },
		{ .addr = 0x38fe1f, .byte = 0x77 },
		{ .addr = 0x38fe20, .byte = 0x2d },
		{ .addr = 0x38fe21, .byte = 0xd3 },
		{ .addr = 0x0effd8, .byte = 0x4b },
		{ .addr = 0x0effd9, .byte = 0xd2 }
};

static const SST_RamByte andl_final_ram_2[] = {
		{ .addr = 0x0effd4, .byte = 0xc6 },
		{ .addr = 0x0effd5, .byte = 0x9e },
		{ .addr = 0x0effd6, .byte = 0x32 },
		{ .addr = 0x0effd7, .byte = 0xfd },
		{ .addr = 0x38fe1e, .byte = 0x36 },
		{ .addr = 0x38fe1f, .byte = 0x77 },
		{ .addr = 0x38fe20, .byte = 0x2d },
		{ .addr = 0x38fe21, .byte = 0xd3 },
		{ .addr = 0x0effd8, .byte = 0x4b },
		{ .addr = 0x0effd9, .byte = 0xd2 }
};

static const SST_Transaction andl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3735070, .data = 13943, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3735072, .data = 11731, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 983000, .data = 19410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte andl_initial_ram_3[] = {
		{ .addr = 0x00c1be, .byte = 0xc3 },
		{ .addr = 0x00c1bf, .byte = 0x95 },
		{ .addr = 0x00c1c0, .byte = 0x6b },
		{ .addr = 0x00c1c1, .byte = 0xf9 },
		{ .addr = 0x00000c, .byte = 0xc8 },
		{ .addr = 0x00000d, .byte = 0x74 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x02 },
		{ .addr = 0x742f02, .byte = 0x03 },
		{ .addr = 0x742f03, .byte = 0x2d },
		{ .addr = 0x742f04, .byte = 0x73 },
		{ .addr = 0x742f05, .byte = 0xd5 }
};

static const SST_RamByte andl_final_ram_3[] = {
		{ .addr = 0x00c1be, .byte = 0xc3 },
		{ .addr = 0x00c1bf, .byte = 0x95 },
		{ .addr = 0x00c1c0, .byte = 0x6b },
		{ .addr = 0x00c1c1, .byte = 0xf9 },
		{ .addr = 0x71af72, .byte = 0xc1 },
		{ .addr = 0x71af73, .byte = 0xc0 },
		{ .addr = 0x71af6e, .byte = 0x00 },
		{ .addr = 0x71af6f, .byte = 0x0e },
		{ .addr = 0x71af70, .byte = 0x00 },
		{ .addr = 0x71af71, .byte = 0x00 },
		{ .addr = 0x71af6c, .byte = 0xc3 },
		{ .addr = 0x71af6d, .byte = 0x95 },
		{ .addr = 0x71af6a, .byte = 0xe9 },
		{ .addr = 0x71af6b, .byte = 0x05 },
		{ .addr = 0x71af66, .byte = 0xc3 },
		{ .addr = 0x71af67, .byte = 0x91 },
		{ .addr = 0x71af68, .byte = 0x21 },
		{ .addr = 0x71af69, .byte = 0xbc },
		{ .addr = 0x00000c, .byte = 0xc8 },
		{ .addr = 0x00000d, .byte = 0x74 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x02 },
		{ .addr = 0x742f02, .byte = 0x03 },
		{ .addr = 0x742f03, .byte = 0x2d },
		{ .addr = 0x742f04, .byte = 0x73 },
		{ .addr = 0x742f05, .byte = 0xd5 }
};

static const SST_Transaction andl_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12380420, .data = 28240, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7450482, .data = 49600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7450478, .data = 14, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7450480, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7450476, .data = 50069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7450474, .data = 59653, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7450470, .data = 50065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7450472, .data = 8636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7614210, .data = 813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7614212, .data = 29653, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_4[] = {
		{ .addr = 0xbfa172, .byte = 0x02 },
		{ .addr = 0xbfa173, .byte = 0xb1 },
		{ .addr = 0xbfa174, .byte = 0x9c },
		{ .addr = 0xbfa175, .byte = 0x4c },
		{ .addr = 0xbfa176, .byte = 0x18 },
		{ .addr = 0xbfa177, .byte = 0xbb },
		{ .addr = 0xbfa178, .byte = 0xad },
		{ .addr = 0xbfa179, .byte = 0xd8 },
		{ .addr = 0xbfa17a, .byte = 0x67 },
		{ .addr = 0xbfa17b, .byte = 0x39 },
		{ .addr = 0x00000c, .byte = 0x9b },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0xa0 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x54a0cc, .byte = 0xe6 },
		{ .addr = 0x54a0cd, .byte = 0x1e },
		{ .addr = 0x54a0ce, .byte = 0xd9 },
		{ .addr = 0x54a0cf, .byte = 0x63 }
};

static const SST_RamByte andl_final_ram_4[] = {
		{ .addr = 0xbfa172, .byte = 0x02 },
		{ .addr = 0xbfa173, .byte = 0xb1 },
		{ .addr = 0xbfa174, .byte = 0x9c },
		{ .addr = 0xbfa175, .byte = 0x4c },
		{ .addr = 0xbfa176, .byte = 0x18 },
		{ .addr = 0xbfa177, .byte = 0xbb },
		{ .addr = 0xbfa178, .byte = 0xad },
		{ .addr = 0xbfa179, .byte = 0xd8 },
		{ .addr = 0xbfa17a, .byte = 0x67 },
		{ .addr = 0xbfa17b, .byte = 0x39 },
		{ .addr = 0x307aec, .byte = 0xa1 },
		{ .addr = 0x307aed, .byte = 0x78 },
		{ .addr = 0x307ae8, .byte = 0x81 },
		{ .addr = 0x307ae9, .byte = 0x1b },
		{ .addr = 0x307aea, .byte = 0x00 },
		{ .addr = 0x307aeb, .byte = 0xbf },
		{ .addr = 0x307ae6, .byte = 0x02 },
		{ .addr = 0x307ae7, .byte = 0xb1 },
		{ .addr = 0x307ae4, .byte = 0x2c },
		{ .addr = 0x307ae5, .byte = 0x49 },
		{ .addr = 0x307ae0, .byte = 0x02 },
		{ .addr = 0x307ae1, .byte = 0xb1 },
		{ .addr = 0x307ae2, .byte = 0x8a },
		{ .addr = 0x307ae3, .byte = 0x61 },
		{ .addr = 0x00000c, .byte = 0x9b },
		{ .addr = 0x00000d, .byte = 0x54 },
		{ .addr = 0x00000e, .byte = 0xa0 },
		{ .addr = 0x00000f, .byte = 0xcc },
		{ .addr = 0x54a0cc, .byte = 0xe6 },
		{ .addr = 0x54a0cd, .byte = 0x1e },
		{ .addr = 0x54a0ce, .byte = 0xd9 },
		{ .addr = 0x54a0cf, .byte = 0x63 }
};

static const SST_Transaction andl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12558710, .data = 6331, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12558712, .data = 44504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12558714, .data = 26425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6368328, .data = 29965, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3177196, .data = 41336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3177192, .data = 33051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3177194, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3177190, .data = 689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3177188, .data = 11337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3177184, .data = 689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3177186, .data = 35425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5546188, .data = 58910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5546190, .data = 55651, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_5[] = {
		{ .addr = 0x7539e0, .byte = 0xc0 },
		{ .addr = 0x7539e1, .byte = 0x86 },
		{ .addr = 0x7539e2, .byte = 0x38 },
		{ .addr = 0x7539e3, .byte = 0xe0 },
		{ .addr = 0x7539e4, .byte = 0x02 },
		{ .addr = 0x7539e5, .byte = 0x0b }
};

static const SST_RamByte andl_final_ram_5[] = {
		{ .addr = 0x7539e0, .byte = 0xc0 },
		{ .addr = 0x7539e1, .byte = 0x86 },
		{ .addr = 0x7539e2, .byte = 0x38 },
		{ .addr = 0x7539e3, .byte = 0xe0 },
		{ .addr = 0x7539e4, .byte = 0x02 },
		{ .addr = 0x7539e5, .byte = 0x0b }
};

static const SST_Transaction andl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7682532, .data = 523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte andl_initial_ram_6[] = {
		{ .addr = 0x73bf8c, .byte = 0xc4 },
		{ .addr = 0x73bf8d, .byte = 0x98 },
		{ .addr = 0x73bf8e, .byte = 0xec },
		{ .addr = 0x73bf8f, .byte = 0x7a },
		{ .addr = 0xff73a6, .byte = 0x52 },
		{ .addr = 0xff73a7, .byte = 0xec },
		{ .addr = 0xff73a8, .byte = 0x92 },
		{ .addr = 0xff73a9, .byte = 0x1d },
		{ .addr = 0x73bf90, .byte = 0xa3 },
		{ .addr = 0x73bf91, .byte = 0xc9 }
};

static const SST_RamByte andl_final_ram_6[] = {
		{ .addr = 0x73bf8c, .byte = 0xc4 },
		{ .addr = 0x73bf8d, .byte = 0x98 },
		{ .addr = 0x73bf8e, .byte = 0xec },
		{ .addr = 0x73bf8f, .byte = 0x7a },
		{ .addr = 0xff73a6, .byte = 0x52 },
		{ .addr = 0xff73a7, .byte = 0xec },
		{ .addr = 0xff73a8, .byte = 0x92 },
		{ .addr = 0xff73a9, .byte = 0x1d },
		{ .addr = 0x73bf90, .byte = 0xa3 },
		{ .addr = 0x73bf91, .byte = 0xc9 }
};

static const SST_Transaction andl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16741286, .data = 21228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16741288, .data = 37405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7585680, .data = 41929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte andl_initial_ram_7[] = {
		{ .addr = 0x0a93ee, .byte = 0xc6 },
		{ .addr = 0x0a93ef, .byte = 0xa1 },
		{ .addr = 0x0a93f0, .byte = 0xcc },
		{ .addr = 0x0a93f1, .byte = 0xa0 },
		{ .addr = 0x1a603c, .byte = 0xd3 },
		{ .addr = 0x1a603d, .byte = 0x5f },
		{ .addr = 0x1a603e, .byte = 0xba },
		{ .addr = 0x1a603f, .byte = 0x78 },
		{ .addr = 0x0a93f2, .byte = 0xca },
		{ .addr = 0x0a93f3, .byte = 0x68 }
};

static const SST_RamByte andl_final_ram_7[] = {
		{ .addr = 0x0a93ee, .byte = 0xc6 },
		{ .addr = 0x0a93ef, .byte = 0xa1 },
		{ .addr = 0x0a93f0, .byte = 0xcc },
		{ .addr = 0x0a93f1, .byte = 0xa0 },
		{ .addr = 0x1a603c, .byte = 0xd3 },
		{ .addr = 0x1a603d, .byte = 0x5f },
		{ .addr = 0x1a603e, .byte = 0xba },
		{ .addr = 0x1a603f, .byte = 0x78 },
		{ .addr = 0x0a93f2, .byte = 0xca },
		{ .addr = 0x0a93f3, .byte = 0x68 }
};

static const SST_Transaction andl_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1728572, .data = 54111, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1728574, .data = 47736, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 693234, .data = 51816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte andl_initial_ram_8[] = {
		{ .addr = 0x0b2212, .byte = 0xc8 },
		{ .addr = 0x0b2213, .byte = 0xb8 },
		{ .addr = 0x0b2214, .byte = 0xe9 },
		{ .addr = 0x0b2215, .byte = 0x7f },
		{ .addr = 0x0b2216, .byte = 0x2b },
		{ .addr = 0x0b2217, .byte = 0xeb },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0x03 },
		{ .addr = 0x00000f, .byte = 0x9a },
		{ .addr = 0x22039a, .byte = 0xa1 },
		{ .addr = 0x22039b, .byte = 0x5b },
		{ .addr = 0x22039c, .byte = 0x99 },
		{ .addr = 0x22039d, .byte = 0x23 }
};

static const SST_RamByte andl_final_ram_8[] = {
		{ .addr = 0x0b2212, .byte = 0xc8 },
		{ .addr = 0x0b2213, .byte = 0xb8 },
		{ .addr = 0x0b2214, .byte = 0xe9 },
		{ .addr = 0x0b2215, .byte = 0x7f },
		{ .addr = 0x0b2216, .byte = 0x2b },
		{ .addr = 0x0b2217, .byte = 0xeb },
		{ .addr = 0xe848ce, .byte = 0x22 },
		{ .addr = 0xe848cf, .byte = 0x16 },
		{ .addr = 0xe848ca, .byte = 0x23 },
		{ .addr = 0xe848cb, .byte = 0x16 },
		{ .addr = 0xe848cc, .byte = 0x00 },
		{ .addr = 0xe848cd, .byte = 0x0b },
		{ .addr = 0xe848c8, .byte = 0xc8 },
		{ .addr = 0xe848c9, .byte = 0xb8 },
		{ .addr = 0xe848c6, .byte = 0xe9 },
		{ .addr = 0xe848c7, .byte = 0x7f },
		{ .addr = 0xe848c2, .byte = 0xc8 },
		{ .addr = 0xe848c3, .byte = 0xb5 },
		{ .addr = 0xe848c4, .byte = 0xff },
		{ .addr = 0xe848c5, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0x03 },
		{ .addr = 0x00000f, .byte = 0x9a },
		{ .addr = 0x22039a, .byte = 0xa1 },
		{ .addr = 0x22039b, .byte = 0x5b },
		{ .addr = 0x22039c, .byte = 0x99 },
		{ .addr = 0x22039d, .byte = 0x23 }
};

static const SST_Transaction andl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 729622, .data = 11243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16771454, .data = 14659, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15222990, .data = 8726, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15222986, .data = 8982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15222988, .data = 11, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15222984, .data = 51384, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15222982, .data = 59775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15222978, .data = 51381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15222980, .data = 65535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 922, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2229146, .data = 41307, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2229148, .data = 39203, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_9[] = {
		{ .addr = 0xe8bdc4, .byte = 0xce },
		{ .addr = 0xe8bdc5, .byte = 0xa2 },
		{ .addr = 0xe8bdc6, .byte = 0xb7 },
		{ .addr = 0xe8bdc7, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x4e },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0xc9 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0xaac97c, .byte = 0x8a },
		{ .addr = 0xaac97d, .byte = 0xe5 },
		{ .addr = 0xaac97e, .byte = 0x0d },
		{ .addr = 0xaac97f, .byte = 0x2d }
};

static const SST_RamByte andl_final_ram_9[] = {
		{ .addr = 0xe8bdc4, .byte = 0xce },
		{ .addr = 0xe8bdc5, .byte = 0xa2 },
		{ .addr = 0xe8bdc6, .byte = 0xb7 },
		{ .addr = 0xe8bdc7, .byte = 0x42 },
		{ .addr = 0xcd669c, .byte = 0xbd },
		{ .addr = 0xcd669d, .byte = 0xc6 },
		{ .addr = 0xcd6698, .byte = 0x85 },
		{ .addr = 0xcd6699, .byte = 0x10 },
		{ .addr = 0xcd669a, .byte = 0x00 },
		{ .addr = 0xcd669b, .byte = 0xe8 },
		{ .addr = 0xcd6696, .byte = 0xce },
		{ .addr = 0xcd6697, .byte = 0xa2 },
		{ .addr = 0xcd6694, .byte = 0xa1 },
		{ .addr = 0xcd6695, .byte = 0x9f },
		{ .addr = 0xcd6690, .byte = 0xce },
		{ .addr = 0xcd6691, .byte = 0xb1 },
		{ .addr = 0xcd6692, .byte = 0xc5 },
		{ .addr = 0xcd6693, .byte = 0xeb },
		{ .addr = 0x00000c, .byte = 0x4e },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0xc9 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0xaac97c, .byte = 0x8a },
		{ .addr = 0xaac97d, .byte = 0xe5 },
		{ .addr = 0xaac97e, .byte = 0x0d },
		{ .addr = 0xaac97f, .byte = 0x2d }
};

static const SST_Transaction andl_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15442334, .data = 12243, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13461148, .data = 48582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13461144, .data = 34064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13461146, .data = 232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13461142, .data = 52898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13461140, .data = 41375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13461136, .data = 52913, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13461138, .data = 50667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11192700, .data = 35557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11192702, .data = 3373, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_10[] = {
		{ .addr = 0xe495b4, .byte = 0xc7 },
		{ .addr = 0xe495b5, .byte = 0x97 },
		{ .addr = 0xe495b6, .byte = 0x2b },
		{ .addr = 0xe495b7, .byte = 0xe9 },
		{ .addr = 0xb55540, .byte = 0x66 },
		{ .addr = 0xb55541, .byte = 0xa3 },
		{ .addr = 0xb55542, .byte = 0x1e },
		{ .addr = 0xb55543, .byte = 0x61 },
		{ .addr = 0xe495b8, .byte = 0x1d },
		{ .addr = 0xe495b9, .byte = 0x12 }
};

static const SST_RamByte andl_final_ram_10[] = {
		{ .addr = 0xe495b4, .byte = 0xc7 },
		{ .addr = 0xe495b5, .byte = 0x97 },
		{ .addr = 0xe495b6, .byte = 0x2b },
		{ .addr = 0xe495b7, .byte = 0xe9 },
		{ .addr = 0xb55540, .byte = 0x64 },
		{ .addr = 0xb55541, .byte = 0xa2 },
		{ .addr = 0xb55542, .byte = 0x0c },
		{ .addr = 0xb55543, .byte = 0x60 },
		{ .addr = 0xe495b8, .byte = 0x1d },
		{ .addr = 0xe495b9, .byte = 0x12 }
};

static const SST_Transaction andl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11883840, .data = 26275, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11883842, .data = 7777, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14980536, .data = 7442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11883842, .data = 3168, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11883840, .data = 25762, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_11[] = {
		{ .addr = 0x1fa1b0, .byte = 0xc9 },
		{ .addr = 0x1fa1b1, .byte = 0x9f },
		{ .addr = 0x1fa1b2, .byte = 0x23 },
		{ .addr = 0x1fa1b3, .byte = 0xa8 },
		{ .addr = 0x176f18, .byte = 0x04 },
		{ .addr = 0x176f19, .byte = 0xa0 },
		{ .addr = 0x176f1a, .byte = 0x4e },
		{ .addr = 0x176f1b, .byte = 0x99 },
		{ .addr = 0x1fa1b4, .byte = 0x10 },
		{ .addr = 0x1fa1b5, .byte = 0x61 }
};

static const SST_RamByte andl_final_ram_11[] = {
		{ .addr = 0x1fa1b0, .byte = 0xc9 },
		{ .addr = 0x1fa1b1, .byte = 0x9f },
		{ .addr = 0x1fa1b2, .byte = 0x23 },
		{ .addr = 0x1fa1b3, .byte = 0xa8 },
		{ .addr = 0x176f18, .byte = 0x04 },
		{ .addr = 0x176f19, .byte = 0x80 },
		{ .addr = 0x176f1a, .byte = 0x46 },
		{ .addr = 0x176f1b, .byte = 0x90 },
		{ .addr = 0x1fa1b4, .byte = 0x10 },
		{ .addr = 0x1fa1b5, .byte = 0x61 }
};

static const SST_Transaction andl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1535768, .data = 1184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1535770, .data = 20121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2073012, .data = 4193, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1535770, .data = 18064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1535768, .data = 1152, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_12[] = {
		{ .addr = 0x10ab5c, .byte = 0xce },
		{ .addr = 0x10ab5d, .byte = 0x81 },
		{ .addr = 0x10ab5e, .byte = 0xed },
		{ .addr = 0x10ab5f, .byte = 0xa3 },
		{ .addr = 0x10ab60, .byte = 0x7f },
		{ .addr = 0x10ab61, .byte = 0xe3 }
};

static const SST_RamByte andl_final_ram_12[] = {
		{ .addr = 0x10ab5c, .byte = 0xce },
		{ .addr = 0x10ab5d, .byte = 0x81 },
		{ .addr = 0x10ab5e, .byte = 0xed },
		{ .addr = 0x10ab5f, .byte = 0xa3 },
		{ .addr = 0x10ab60, .byte = 0x7f },
		{ .addr = 0x10ab61, .byte = 0xe3 }
};

static const SST_Transaction andl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1092448, .data = 32739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte andl_initial_ram_13[] = {
		{ .addr = 0x6f4be4, .byte = 0xc6 },
		{ .addr = 0x6f4be5, .byte = 0x80 },
		{ .addr = 0x6f4be6, .byte = 0x4f },
		{ .addr = 0x6f4be7, .byte = 0xb0 },
		{ .addr = 0x6f4be8, .byte = 0x8d },
		{ .addr = 0x6f4be9, .byte = 0xc3 }
};

static const SST_RamByte andl_final_ram_13[] = {
		{ .addr = 0x6f4be4, .byte = 0xc6 },
		{ .addr = 0x6f4be5, .byte = 0x80 },
		{ .addr = 0x6f4be6, .byte = 0x4f },
		{ .addr = 0x6f4be7, .byte = 0xb0 },
		{ .addr = 0x6f4be8, .byte = 0x8d },
		{ .addr = 0x6f4be9, .byte = 0xc3 }
};

static const SST_Transaction andl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7293928, .data = 36291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte andl_initial_ram_14[] = {
		{ .addr = 0x391d30, .byte = 0x02 },
		{ .addr = 0x391d31, .byte = 0xb1 },
		{ .addr = 0x391d32, .byte = 0x8f },
		{ .addr = 0x391d33, .byte = 0xc8 },
		{ .addr = 0x391d34, .byte = 0x57 },
		{ .addr = 0x391d35, .byte = 0xb5 },
		{ .addr = 0x391d36, .byte = 0x6b },
		{ .addr = 0x391d37, .byte = 0x79 },
		{ .addr = 0x391d38, .byte = 0xd2 },
		{ .addr = 0x391d39, .byte = 0x96 },
		{ .addr = 0x042200, .byte = 0x0b },
		{ .addr = 0x042201, .byte = 0xe8 },
		{ .addr = 0x042202, .byte = 0x04 },
		{ .addr = 0x042203, .byte = 0xed },
		{ .addr = 0x391d3a, .byte = 0x04 },
		{ .addr = 0x391d3b, .byte = 0xb3 }
};

static const SST_RamByte andl_final_ram_14[] = {
		{ .addr = 0x391d30, .byte = 0x02 },
		{ .addr = 0x391d31, .byte = 0xb1 },
		{ .addr = 0x391d32, .byte = 0x8f },
		{ .addr = 0x391d33, .byte = 0xc8 },
		{ .addr = 0x391d34, .byte = 0x57 },
		{ .addr = 0x391d35, .byte = 0xb5 },
		{ .addr = 0x391d36, .byte = 0x6b },
		{ .addr = 0x391d37, .byte = 0x79 },
		{ .addr = 0x391d38, .byte = 0xd2 },
		{ .addr = 0x391d39, .byte = 0x96 },
		{ .addr = 0x042200, .byte = 0x0b },
		{ .addr = 0x042201, .byte = 0xc8 },
		{ .addr = 0x042202, .byte = 0x04 },
		{ .addr = 0x042203, .byte = 0xa5 },
		{ .addr = 0x391d3a, .byte = 0x04 },
		{ .addr = 0x391d3b, .byte = 0xb3 }
};

static const SST_Transaction andl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3743028, .data = 22453, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3743030, .data = 27513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3743032, .data = 53910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 270848, .data = 3048, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 270850, .data = 1261, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3743034, .data = 1203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 270850, .data = 1189, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 270848, .data = 3016, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_15[] = {
		{ .addr = 0x7321f4, .byte = 0xca },
		{ .addr = 0x7321f5, .byte = 0x84 },
		{ .addr = 0x7321f6, .byte = 0xcf },
		{ .addr = 0x7321f7, .byte = 0x50 },
		{ .addr = 0x7321f8, .byte = 0xdd },
		{ .addr = 0x7321f9, .byte = 0x52 }
};

static const SST_RamByte andl_final_ram_15[] = {
		{ .addr = 0x7321f4, .byte = 0xca },
		{ .addr = 0x7321f5, .byte = 0x84 },
		{ .addr = 0x7321f6, .byte = 0xcf },
		{ .addr = 0x7321f7, .byte = 0x50 },
		{ .addr = 0x7321f8, .byte = 0xdd },
		{ .addr = 0x7321f9, .byte = 0x52 }
};

static const SST_Transaction andl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7545336, .data = 56658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte andl_initial_ram_16[] = {
		{ .addr = 0xd6b1ac, .byte = 0xce },
		{ .addr = 0xd6b1ad, .byte = 0x86 },
		{ .addr = 0xd6b1ae, .byte = 0x53 },
		{ .addr = 0xd6b1af, .byte = 0xb6 },
		{ .addr = 0xd6b1b0, .byte = 0x7f },
		{ .addr = 0xd6b1b1, .byte = 0xc3 }
};

static const SST_RamByte andl_final_ram_16[] = {
		{ .addr = 0xd6b1ac, .byte = 0xce },
		{ .addr = 0xd6b1ad, .byte = 0x86 },
		{ .addr = 0xd6b1ae, .byte = 0x53 },
		{ .addr = 0xd6b1af, .byte = 0xb6 },
		{ .addr = 0xd6b1b0, .byte = 0x7f },
		{ .addr = 0xd6b1b1, .byte = 0xc3 }
};

static const SST_Transaction andl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14070192, .data = 32707, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte andl_initial_ram_17[] = {
		{ .addr = 0x61ec7a, .byte = 0xc0 },
		{ .addr = 0x61ec7b, .byte = 0xb6 },
		{ .addr = 0x61ec7c, .byte = 0x69 },
		{ .addr = 0x61ec7d, .byte = 0x96 },
		{ .addr = 0x61ec7e, .byte = 0x10 },
		{ .addr = 0x61ec7f, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x2c },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0x5295a2, .byte = 0x07 },
		{ .addr = 0x5295a3, .byte = 0x65 },
		{ .addr = 0x5295a4, .byte = 0x05 },
		{ .addr = 0x5295a5, .byte = 0x34 }
};

static const SST_RamByte andl_final_ram_17[] = {
		{ .addr = 0x61ec7a, .byte = 0xc0 },
		{ .addr = 0x61ec7b, .byte = 0xb6 },
		{ .addr = 0x61ec7c, .byte = 0x69 },
		{ .addr = 0x61ec7d, .byte = 0x96 },
		{ .addr = 0x61ec7e, .byte = 0x10 },
		{ .addr = 0x61ec7f, .byte = 0x42 },
		{ .addr = 0xab3a4c, .byte = 0xec },
		{ .addr = 0xab3a4d, .byte = 0x7c },
		{ .addr = 0xab3a48, .byte = 0x80 },
		{ .addr = 0xab3a49, .byte = 0x1f },
		{ .addr = 0xab3a4a, .byte = 0x00 },
		{ .addr = 0xab3a4b, .byte = 0x61 },
		{ .addr = 0xab3a46, .byte = 0xc0 },
		{ .addr = 0xab3a47, .byte = 0xb6 },
		{ .addr = 0xab3a44, .byte = 0xe8 },
		{ .addr = 0xab3a45, .byte = 0xc3 },
		{ .addr = 0xab3a40, .byte = 0xc0 },
		{ .addr = 0xab3a41, .byte = 0xb1 },
		{ .addr = 0xab3a42, .byte = 0xd4 },
		{ .addr = 0xab3a43, .byte = 0x6c },
		{ .addr = 0x00000c, .byte = 0x2c },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0x95 },
		{ .addr = 0x00000f, .byte = 0xa2 },
		{ .addr = 0x5295a2, .byte = 0x07 },
		{ .addr = 0x5295a3, .byte = 0x65 },
		{ .addr = 0x5295a4, .byte = 0x05 },
		{ .addr = 0x5295a5, .byte = 0x34 }
};

static const SST_Transaction andl_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6417534, .data = 4162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7137474, .data = 20959, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11221580, .data = 60540, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11221576, .data = 32799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11221578, .data = 97, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11221574, .data = 49334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11221572, .data = 59587, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11221568, .data = 49329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11221570, .data = 54380, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 11346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5412258, .data = 1893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5412260, .data = 1332, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_18[] = {
		{ .addr = 0xab1192, .byte = 0xc9 },
		{ .addr = 0xab1193, .byte = 0xa4 },
		{ .addr = 0xab1194, .byte = 0xf3 },
		{ .addr = 0xab1195, .byte = 0xc2 },
		{ .addr = 0x00000c, .byte = 0xf3 },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x3ac51a, .byte = 0x1d },
		{ .addr = 0x3ac51b, .byte = 0x0c },
		{ .addr = 0x3ac51c, .byte = 0x80 },
		{ .addr = 0x3ac51d, .byte = 0xc8 }
};

static const SST_RamByte andl_final_ram_18[] = {
		{ .addr = 0xab1192, .byte = 0xc9 },
		{ .addr = 0xab1193, .byte = 0xa4 },
		{ .addr = 0xab1194, .byte = 0xf3 },
		{ .addr = 0xab1195, .byte = 0xc2 },
		{ .addr = 0x91b234, .byte = 0x11 },
		{ .addr = 0x91b235, .byte = 0x94 },
		{ .addr = 0x91b230, .byte = 0x02 },
		{ .addr = 0x91b231, .byte = 0x05 },
		{ .addr = 0x91b232, .byte = 0x00 },
		{ .addr = 0x91b233, .byte = 0xab },
		{ .addr = 0x91b22e, .byte = 0xc9 },
		{ .addr = 0x91b22f, .byte = 0xa4 },
		{ .addr = 0x91b22c, .byte = 0x54 },
		{ .addr = 0x91b22d, .byte = 0x27 },
		{ .addr = 0x91b228, .byte = 0xc9 },
		{ .addr = 0x91b229, .byte = 0xb1 },
		{ .addr = 0x91b22a, .byte = 0x5c },
		{ .addr = 0x91b22b, .byte = 0xfc },
		{ .addr = 0x00000c, .byte = 0xf3 },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0x3ac51a, .byte = 0x1d },
		{ .addr = 0x3ac51b, .byte = 0x0c },
		{ .addr = 0x3ac51c, .byte = 0x80 },
		{ .addr = 0x3ac51d, .byte = 0xc8 }
};

static const SST_Transaction andl_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16536614, .data = 32452, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9548340, .data = 4500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9548336, .data = 517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9548338, .data = 171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9548334, .data = 51620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9548332, .data = 21543, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9548328, .data = 51633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9548330, .data = 23804, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50458, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3851546, .data = 7436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3851548, .data = 32968, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_19[] = {
		{ .addr = 0xc4fb8e, .byte = 0xc6 },
		{ .addr = 0xc4fb8f, .byte = 0x81 },
		{ .addr = 0xc4fb90, .byte = 0x9d },
		{ .addr = 0xc4fb91, .byte = 0xf2 },
		{ .addr = 0xc4fb92, .byte = 0x5f },
		{ .addr = 0xc4fb93, .byte = 0x20 }
};

static const SST_RamByte andl_final_ram_19[] = {
		{ .addr = 0xc4fb8e, .byte = 0xc6 },
		{ .addr = 0xc4fb8f, .byte = 0x81 },
		{ .addr = 0xc4fb90, .byte = 0x9d },
		{ .addr = 0xc4fb91, .byte = 0xf2 },
		{ .addr = 0xc4fb92, .byte = 0x5f },
		{ .addr = 0xc4fb93, .byte = 0x20 }
};

static const SST_Transaction andl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12909458, .data = 24352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte andl_initial_ram_20[] = {
		{ .addr = 0x0462d8, .byte = 0xcb },
		{ .addr = 0x0462d9, .byte = 0xb2 },
		{ .addr = 0x0462da, .byte = 0x53 },
		{ .addr = 0x0462db, .byte = 0x53 },
		{ .addr = 0x0462dc, .byte = 0x08 },
		{ .addr = 0x0462dd, .byte = 0xce },
		{ .addr = 0x00000c, .byte = 0x95 },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0x9c5fc8, .byte = 0x6c },
		{ .addr = 0x9c5fc9, .byte = 0xd5 },
		{ .addr = 0x9c5fca, .byte = 0xc7 },
		{ .addr = 0x9c5fcb, .byte = 0x3e }
};

static const SST_RamByte andl_final_ram_20[] = {
		{ .addr = 0x0462d8, .byte = 0xcb },
		{ .addr = 0x0462d9, .byte = 0xb2 },
		{ .addr = 0x0462da, .byte = 0x53 },
		{ .addr = 0x0462db, .byte = 0x53 },
		{ .addr = 0x0462dc, .byte = 0x08 },
		{ .addr = 0x0462dd, .byte = 0xce },
		{ .addr = 0x0d16d4, .byte = 0x62 },
		{ .addr = 0x0d16d5, .byte = 0xda },
		{ .addr = 0x0d16d0, .byte = 0x04 },
		{ .addr = 0x0d16d1, .byte = 0x0a },
		{ .addr = 0x0d16d2, .byte = 0x00 },
		{ .addr = 0x0d16d3, .byte = 0x04 },
		{ .addr = 0x0d16ce, .byte = 0xcb },
		{ .addr = 0x0d16cf, .byte = 0xb2 },
		{ .addr = 0x0d16cc, .byte = 0x60 },
		{ .addr = 0x0d16cd, .byte = 0x8d },
		{ .addr = 0x0d16c8, .byte = 0xcb },
		{ .addr = 0x0d16c9, .byte = 0xb1 },
		{ .addr = 0x0d16ca, .byte = 0x04 },
		{ .addr = 0x0d16cb, .byte = 0x14 },
		{ .addr = 0x00000c, .byte = 0x95 },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0x5f },
		{ .addr = 0x00000f, .byte = 0xc8 },
		{ .addr = 0x9c5fc8, .byte = 0x6c },
		{ .addr = 0x9c5fc9, .byte = 0xd5 },
		{ .addr = 0x9c5fca, .byte = 0xc7 },
		{ .addr = 0x9c5fcb, .byte = 0x3e }
};

static const SST_Transaction andl_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 287452, .data = 2254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1335436, .data = 15365, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 857812, .data = 25306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 857808, .data = 1034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 857810, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 857806, .data = 52146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 857804, .data = 24717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 857800, .data = 52145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 857802, .data = 1044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24520, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10248136, .data = 27861, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10248138, .data = 51006, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_21[] = {
		{ .addr = 0xa612d0, .byte = 0xc2 },
		{ .addr = 0xa612d1, .byte = 0x9a },
		{ .addr = 0xa612d2, .byte = 0xa5 },
		{ .addr = 0xa612d3, .byte = 0x0a },
		{ .addr = 0x00000c, .byte = 0xf2 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x48 },
		{ .addr = 0x00000f, .byte = 0x1e },
		{ .addr = 0x76481e, .byte = 0x71 },
		{ .addr = 0x76481f, .byte = 0xed },
		{ .addr = 0x764820, .byte = 0x14 },
		{ .addr = 0x764821, .byte = 0xee }
};

static const SST_RamByte andl_final_ram_21[] = {
		{ .addr = 0xa612d0, .byte = 0xc2 },
		{ .addr = 0xa612d1, .byte = 0x9a },
		{ .addr = 0xa612d2, .byte = 0xa5 },
		{ .addr = 0xa612d3, .byte = 0x0a },
		{ .addr = 0x4f5e3c, .byte = 0x12 },
		{ .addr = 0x4f5e3d, .byte = 0xd2 },
		{ .addr = 0x4f5e38, .byte = 0x80 },
		{ .addr = 0x4f5e39, .byte = 0x00 },
		{ .addr = 0x4f5e3a, .byte = 0x00 },
		{ .addr = 0x4f5e3b, .byte = 0xa6 },
		{ .addr = 0x4f5e36, .byte = 0xc2 },
		{ .addr = 0x4f5e37, .byte = 0x9a },
		{ .addr = 0x4f5e34, .byte = 0xf6 },
		{ .addr = 0x4f5e35, .byte = 0x77 },
		{ .addr = 0x4f5e30, .byte = 0xc2 },
		{ .addr = 0x4f5e31, .byte = 0x91 },
		{ .addr = 0x4f5e32, .byte = 0x1c },
		{ .addr = 0x4f5e33, .byte = 0x95 },
		{ .addr = 0x00000c, .byte = 0xf2 },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x48 },
		{ .addr = 0x00000f, .byte = 0x1e },
		{ .addr = 0x76481e, .byte = 0x71 },
		{ .addr = 0x76481f, .byte = 0xed },
		{ .addr = 0x764820, .byte = 0x14 },
		{ .addr = 0x764821, .byte = 0xee }
};

static const SST_Transaction andl_transactions_21[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9827958, .data = 26636, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5201468, .data = 4818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5201464, .data = 32768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5201466, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5201462, .data = 49818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5201460, .data = 63095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5201456, .data = 49809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5201458, .data = 7317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7751710, .data = 29165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7751712, .data = 5358, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_22[] = {
		{ .addr = 0xd5c320, .byte = 0xc1 },
		{ .addr = 0xd5c321, .byte = 0xa0 },
		{ .addr = 0xd5c322, .byte = 0xa9 },
		{ .addr = 0xd5c323, .byte = 0x56 },
		{ .addr = 0xef21ee, .byte = 0x6d },
		{ .addr = 0xef21ef, .byte = 0x25 },
		{ .addr = 0xef21f0, .byte = 0x66 },
		{ .addr = 0xef21f1, .byte = 0x72 },
		{ .addr = 0xd5c324, .byte = 0xc4 },
		{ .addr = 0xd5c325, .byte = 0x46 }
};

static const SST_RamByte andl_final_ram_22[] = {
		{ .addr = 0xd5c320, .byte = 0xc1 },
		{ .addr = 0xd5c321, .byte = 0xa0 },
		{ .addr = 0xd5c322, .byte = 0xa9 },
		{ .addr = 0xd5c323, .byte = 0x56 },
		{ .addr = 0xef21ee, .byte = 0x0c },
		{ .addr = 0xef21ef, .byte = 0x20 },
		{ .addr = 0xef21f0, .byte = 0x66 },
		{ .addr = 0xef21f1, .byte = 0x40 },
		{ .addr = 0xd5c324, .byte = 0xc4 },
		{ .addr = 0xd5c325, .byte = 0x46 }
};

static const SST_Transaction andl_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15671790, .data = 27941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15671792, .data = 26226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14009124, .data = 50246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15671792, .data = 26176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15671790, .data = 3104, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_23[] = {
		{ .addr = 0xb88c92, .byte = 0xcc },
		{ .addr = 0xb88c93, .byte = 0xa1 },
		{ .addr = 0xb88c94, .byte = 0x2c },
		{ .addr = 0xb88c95, .byte = 0xc6 },
		{ .addr = 0x29103c, .byte = 0x78 },
		{ .addr = 0x29103d, .byte = 0xa8 },
		{ .addr = 0x29103e, .byte = 0x6a },
		{ .addr = 0x29103f, .byte = 0xee },
		{ .addr = 0xb88c96, .byte = 0xcc },
		{ .addr = 0xb88c97, .byte = 0xc2 }
};

static const SST_RamByte andl_final_ram_23[] = {
		{ .addr = 0xb88c92, .byte = 0xcc },
		{ .addr = 0xb88c93, .byte = 0xa1 },
		{ .addr = 0xb88c94, .byte = 0x2c },
		{ .addr = 0xb88c95, .byte = 0xc6 },
		{ .addr = 0x29103c, .byte = 0x78 },
		{ .addr = 0x29103d, .byte = 0xa8 },
		{ .addr = 0x29103e, .byte = 0x6a },
		{ .addr = 0x29103f, .byte = 0xee },
		{ .addr = 0xb88c96, .byte = 0xcc },
		{ .addr = 0xb88c97, .byte = 0xc2 }
};

static const SST_Transaction andl_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2691132, .data = 30888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2691134, .data = 27374, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12094614, .data = 52418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte andl_initial_ram_24[] = {
		{ .addr = 0x316366, .byte = 0xc9 },
		{ .addr = 0x316367, .byte = 0xa7 },
		{ .addr = 0x316368, .byte = 0xd5 },
		{ .addr = 0x316369, .byte = 0x90 },
		{ .addr = 0x86ca72, .byte = 0xd1 },
		{ .addr = 0x86ca73, .byte = 0xab },
		{ .addr = 0x86ca74, .byte = 0x46 },
		{ .addr = 0x86ca75, .byte = 0xc8 },
		{ .addr = 0x31636a, .byte = 0x6d },
		{ .addr = 0x31636b, .byte = 0x4a }
};

static const SST_RamByte andl_final_ram_24[] = {
		{ .addr = 0x316366, .byte = 0xc9 },
		{ .addr = 0x316367, .byte = 0xa7 },
		{ .addr = 0x316368, .byte = 0xd5 },
		{ .addr = 0x316369, .byte = 0x90 },
		{ .addr = 0x86ca72, .byte = 0x50 },
		{ .addr = 0x86ca73, .byte = 0x89 },
		{ .addr = 0x86ca74, .byte = 0x06 },
		{ .addr = 0x86ca75, .byte = 0x88 },
		{ .addr = 0x31636a, .byte = 0x6d },
		{ .addr = 0x31636b, .byte = 0x4a }
};

static const SST_Transaction andl_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8833650, .data = 53675, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8833652, .data = 18120, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3236714, .data = 27978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8833652, .data = 1672, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8833650, .data = 20617, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_25[] = {
		{ .addr = 0x707bda, .byte = 0xc4 },
		{ .addr = 0x707bdb, .byte = 0x9d },
		{ .addr = 0x707bdc, .byte = 0xca },
		{ .addr = 0x707bdd, .byte = 0x1d },
		{ .addr = 0x63e26a, .byte = 0xe4 },
		{ .addr = 0x63e26b, .byte = 0xb3 },
		{ .addr = 0x63e26c, .byte = 0x7f },
		{ .addr = 0x63e26d, .byte = 0x6d },
		{ .addr = 0x707bde, .byte = 0x60 },
		{ .addr = 0x707bdf, .byte = 0x97 }
};

static const SST_RamByte andl_final_ram_25[] = {
		{ .addr = 0x707bda, .byte = 0xc4 },
		{ .addr = 0x707bdb, .byte = 0x9d },
		{ .addr = 0x707bdc, .byte = 0xca },
		{ .addr = 0x707bdd, .byte = 0x1d },
		{ .addr = 0x63e26a, .byte = 0xe4 },
		{ .addr = 0x63e26b, .byte = 0xb3 },
		{ .addr = 0x63e26c, .byte = 0x7f },
		{ .addr = 0x63e26d, .byte = 0x6d },
		{ .addr = 0x707bde, .byte = 0x60 },
		{ .addr = 0x707bdf, .byte = 0x97 }
};

static const SST_Transaction andl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6546026, .data = 58547, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6546028, .data = 32621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7371742, .data = 24727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte andl_initial_ram_26[] = {
		{ .addr = 0xbe9254, .byte = 0xcb },
		{ .addr = 0xbe9255, .byte = 0xa3 },
		{ .addr = 0xbe9256, .byte = 0x99 },
		{ .addr = 0xbe9257, .byte = 0x9f },
		{ .addr = 0xe3c08c, .byte = 0xfe },
		{ .addr = 0xe3c08d, .byte = 0xc4 },
		{ .addr = 0xe3c08e, .byte = 0x5d },
		{ .addr = 0xe3c08f, .byte = 0xf6 },
		{ .addr = 0xbe9258, .byte = 0xdd },
		{ .addr = 0xbe9259, .byte = 0xbb }
};

static const SST_RamByte andl_final_ram_26[] = {
		{ .addr = 0xbe9254, .byte = 0xcb },
		{ .addr = 0xbe9255, .byte = 0xa3 },
		{ .addr = 0xbe9256, .byte = 0x99 },
		{ .addr = 0xbe9257, .byte = 0x9f },
		{ .addr = 0xe3c08c, .byte = 0x10 },
		{ .addr = 0xe3c08d, .byte = 0x00 },
		{ .addr = 0xe3c08e, .byte = 0x14 },
		{ .addr = 0xe3c08f, .byte = 0x20 },
		{ .addr = 0xbe9258, .byte = 0xdd },
		{ .addr = 0xbe9259, .byte = 0xbb }
};

static const SST_Transaction andl_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14925964, .data = 65220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14925966, .data = 24054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12489304, .data = 56763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14925966, .data = 5152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14925964, .data = 4096, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_27[] = {
		{ .addr = 0x029b28, .byte = 0xc7 },
		{ .addr = 0x029b29, .byte = 0x98 },
		{ .addr = 0x029b2a, .byte = 0xa4 },
		{ .addr = 0x029b2b, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0x66 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xe8c254, .byte = 0x66 },
		{ .addr = 0xe8c255, .byte = 0x44 },
		{ .addr = 0xe8c256, .byte = 0xac },
		{ .addr = 0xe8c257, .byte = 0xc4 }
};

static const SST_RamByte andl_final_ram_27[] = {
		{ .addr = 0x029b28, .byte = 0xc7 },
		{ .addr = 0x029b29, .byte = 0x98 },
		{ .addr = 0x029b2a, .byte = 0xa4 },
		{ .addr = 0x029b2b, .byte = 0x09 },
		{ .addr = 0x2d86d2, .byte = 0x9b },
		{ .addr = 0x2d86d3, .byte = 0x2a },
		{ .addr = 0x2d86ce, .byte = 0x01 },
		{ .addr = 0x2d86cf, .byte = 0x16 },
		{ .addr = 0x2d86d0, .byte = 0x00 },
		{ .addr = 0x2d86d1, .byte = 0x02 },
		{ .addr = 0x2d86cc, .byte = 0xc7 },
		{ .addr = 0x2d86cd, .byte = 0x98 },
		{ .addr = 0x2d86ca, .byte = 0x4a },
		{ .addr = 0x2d86cb, .byte = 0x75 },
		{ .addr = 0x2d86c6, .byte = 0xc7 },
		{ .addr = 0x2d86c7, .byte = 0x91 },
		{ .addr = 0x2d86c8, .byte = 0x7a },
		{ .addr = 0x2d86c9, .byte = 0x24 },
		{ .addr = 0x00000c, .byte = 0x66 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xc2 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0xe8c254, .byte = 0x66 },
		{ .addr = 0xe8c255, .byte = 0x44 },
		{ .addr = 0xe8c256, .byte = 0xac },
		{ .addr = 0xe8c257, .byte = 0xc4 }
};

static const SST_Transaction andl_transactions_27[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2378356, .data = 31697, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2983634, .data = 39722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2983630, .data = 278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2983632, .data = 2, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2983628, .data = 51096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2983626, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2983622, .data = 51089, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2983624, .data = 31268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 26344, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15254100, .data = 26180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15254102, .data = 44228, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_28[] = {
		{ .addr = 0x6e5b1c, .byte = 0xca },
		{ .addr = 0x6e5b1d, .byte = 0xaf },
		{ .addr = 0x6e5b1e, .byte = 0x83 },
		{ .addr = 0x6e5b1f, .byte = 0x9a },
		{ .addr = 0x6e5b20, .byte = 0x23 },
		{ .addr = 0x6e5b21, .byte = 0xff },
		{ .addr = 0x683eda, .byte = 0xef },
		{ .addr = 0x683edb, .byte = 0x00 },
		{ .addr = 0x683edc, .byte = 0xfe },
		{ .addr = 0x683edd, .byte = 0xf4 },
		{ .addr = 0x6e5b22, .byte = 0xe8 },
		{ .addr = 0x6e5b23, .byte = 0x47 }
};

static const SST_RamByte andl_final_ram_28[] = {
		{ .addr = 0x6e5b1c, .byte = 0xca },
		{ .addr = 0x6e5b1d, .byte = 0xaf },
		{ .addr = 0x6e5b1e, .byte = 0x83 },
		{ .addr = 0x6e5b1f, .byte = 0x9a },
		{ .addr = 0x6e5b20, .byte = 0x23 },
		{ .addr = 0x6e5b21, .byte = 0xff },
		{ .addr = 0x683eda, .byte = 0xef },
		{ .addr = 0x683edb, .byte = 0x00 },
		{ .addr = 0x683edc, .byte = 0xfe },
		{ .addr = 0x683edd, .byte = 0xf4 },
		{ .addr = 0x6e5b22, .byte = 0xe8 },
		{ .addr = 0x6e5b23, .byte = 0x47 }
};

static const SST_Transaction andl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7232288, .data = 9215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6831834, .data = 61184, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6831836, .data = 65268, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7232290, .data = 59463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte andl_initial_ram_29[] = {
		{ .addr = 0xcc32aa, .byte = 0xc1 },
		{ .addr = 0xcc32ab, .byte = 0x99 },
		{ .addr = 0xcc32ac, .byte = 0xa5 },
		{ .addr = 0xcc32ad, .byte = 0xd9 },
		{ .addr = 0x6743b6, .byte = 0x48 },
		{ .addr = 0x6743b7, .byte = 0x43 },
		{ .addr = 0x6743b8, .byte = 0x55 },
		{ .addr = 0x6743b9, .byte = 0x23 },
		{ .addr = 0xcc32ae, .byte = 0x2e },
		{ .addr = 0xcc32af, .byte = 0xef }
};

static const SST_RamByte andl_final_ram_29[] = {
		{ .addr = 0xcc32aa, .byte = 0xc1 },
		{ .addr = 0xcc32ab, .byte = 0x99 },
		{ .addr = 0xcc32ac, .byte = 0xa5 },
		{ .addr = 0xcc32ad, .byte = 0xd9 },
		{ .addr = 0x6743b6, .byte = 0x40 },
		{ .addr = 0x6743b7, .byte = 0x02 },
		{ .addr = 0x6743b8, .byte = 0x04 },
		{ .addr = 0x6743b9, .byte = 0x03 },
		{ .addr = 0xcc32ae, .byte = 0x2e },
		{ .addr = 0xcc32af, .byte = 0xef }
};

static const SST_Transaction andl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6767542, .data = 18499, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6767544, .data = 21795, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13382318, .data = 12015, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6767544, .data = 1027, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6767542, .data = 16386, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_30[] = {
		{ .addr = 0x97cc44, .byte = 0xc9 },
		{ .addr = 0x97cc45, .byte = 0xa1 },
		{ .addr = 0x97cc46, .byte = 0x16 },
		{ .addr = 0x97cc47, .byte = 0xd7 },
		{ .addr = 0x41a8b0, .byte = 0xe4 },
		{ .addr = 0x41a8b1, .byte = 0x5c },
		{ .addr = 0x41a8b2, .byte = 0xc6 },
		{ .addr = 0x41a8b3, .byte = 0x39 },
		{ .addr = 0x97cc48, .byte = 0x18 },
		{ .addr = 0x97cc49, .byte = 0xad }
};

static const SST_RamByte andl_final_ram_30[] = {
		{ .addr = 0x97cc44, .byte = 0xc9 },
		{ .addr = 0x97cc45, .byte = 0xa1 },
		{ .addr = 0x97cc46, .byte = 0x16 },
		{ .addr = 0x97cc47, .byte = 0xd7 },
		{ .addr = 0x41a8b0, .byte = 0xc4 },
		{ .addr = 0x41a8b1, .byte = 0x0c },
		{ .addr = 0x41a8b2, .byte = 0x84 },
		{ .addr = 0x41a8b3, .byte = 0x09 },
		{ .addr = 0x97cc48, .byte = 0x18 },
		{ .addr = 0x97cc49, .byte = 0xad }
};

static const SST_Transaction andl_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4303024, .data = 58460, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4303026, .data = 50745, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9948232, .data = 6317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4303026, .data = 33801, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4303024, .data = 50188, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte andl_initial_ram_31[] = {
		{ .addr = 0xa6ed0a, .byte = 0xc8 },
		{ .addr = 0xa6ed0b, .byte = 0x81 },
		{ .addr = 0xa6ed0c, .byte = 0x6d },
		{ .addr = 0xa6ed0d, .byte = 0xca },
		{ .addr = 0xa6ed0e, .byte = 0x98 },
		{ .addr = 0xa6ed0f, .byte = 0xd2 }
};

static const SST_RamByte andl_final_ram_31[] = {
		{ .addr = 0xa6ed0a, .byte = 0xc8 },
		{ .addr = 0xa6ed0b, .byte = 0x81 },
		{ .addr = 0xa6ed0c, .byte = 0x6d },
		{ .addr = 0xa6ed0d, .byte = 0xca },
		{ .addr = 0xa6ed0e, .byte = 0x98 },
		{ .addr = 0xa6ed0f, .byte = 0xd2 }
};

static const SST_Transaction andl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10939662, .data = 39122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_TestCase andl[] = {
	{
		.name = "000 AND.l D5, (A4)+ cb9c",
		.initial = {
			.regs = {
				922200166, 1634731057, 1384255826, 4165284375, 3986156178, 156727417, 2291521453, 2079116780, 1072804380, 2242832998, 1816450483, 1691735783, 3362939947, 2127193698, 2507654371, 2858110, 9784714, 32791, 478070
			},
			.prefetch0 = 52124,
			.prefetch1 = 34486,
			.ram = andl_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				922200166, 1634731057, 1384255826, 4165284375, 3986156178, 156727417, 2291521453, 2079116780, 1072804380, 2242832998, 1816450483, 1691735783, 3362939947, 2127193698, 2507654371, 2858110, 9784700, 8215, 2031390236
			},
			.prefetch0 = 21119,
			.prefetch1 = 33842,
			.ram = andl_final_ram_0,
			.ram_len = 26,
		},
		.transactions = andl_transactions_0,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "001 AND.l D7, -(A4) cfa4",
		.initial = {
			.regs = {
				3502347011, 3605493237, 2988163620, 3254598981, 2126259496, 2318220789, 195969116, 2041108926, 1154536781, 2606204370, 2535921380, 1311210836, 2453164409, 4248720647, 3525600015, 1868968, 12904052, 9496, 15480236
			},
			.prefetch0 = 53156,
			.prefetch1 = 11734,
			.ram = andl_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3502347011, 3605493237, 2988163620, 3254598981, 2126259496, 2318220789, 195969116, 2041108926, 1154536781, 2606204370, 2535921380, 1311210836, 2453164405, 4248720647, 3525600015, 1868968, 12904038, 9496, 2026774374
			},
			.prefetch0 = 31996,
			.prefetch1 = 12229,
			.ram = andl_final_ram_1,
			.ram_len = 26,
		},
		.transactions = andl_transactions_1,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "002 AND.l (A6)+, D3 c69e",
		.initial = {
			.regs = {
				2536472592, 25434678, 372014739, 995633328, 2600077421, 3788505314, 298000119, 2877013313, 3392279138, 1938267313, 1859631215, 59916265, 1234707177, 3871690102, 3946380830, 2655046, 16538196, 40976, 983000
			},
			.prefetch0 = 50846,
			.prefetch1 = 13053,
			.ram = andl_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2536472592, 25434678, 372014739, 844114064, 2600077421, 3788505314, 298000119, 2877013313, 3392279138, 1938267313, 1859631215, 59916265, 1234707177, 3871690102, 3946380834, 2655046, 16538196, 40976, 983002
			},
			.prefetch0 = 13053,
			.prefetch1 = 19410,
			.ram = andl_final_ram_2,
			.ram_len = 10,
		},
		.transactions = andl_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 AND.l D1, (A5) c395",
		.initial = {
			.regs = {
				2598208154, 1736530886, 2190825448, 2630435713, 3984145255, 1842210968, 3208662329, 1842027119, 3522254820, 3065012275, 3305444422, 2389167860, 928170539, 566028549, 412912891, 14166960, 7450484, 14, 49602
			},
			.prefetch0 = 50069,
			.prefetch1 = 27641,
			.ram = andl_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2598208154, 1736530886, 2190825448, 2630435713, 3984145255, 1842210968, 3208662329, 1842027119, 3522254820, 3065012275, 3305444422, 2389167860, 928170539, 566028549, 412912891, 14166960, 7450470, 8206, 3363057414
			},
			.prefetch0 = 813,
			.prefetch1 = 29653,
			.ram = andl_final_ram_3,
			.ram_len = 26,
		},
		.transactions = andl_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 AND.l #, (d8, A1, Xn) 02b1",
		.initial = {
			.regs = {
				4067541431, 3445187667, 2413163706, 1554321518, 2989803403, 2768758757, 2501815027, 4112642700, 1377141177, 4265437449, 2351154024, 606378607, 2837587416, 4261800912, 1287467518, 9230508, 3177198, 33051, 12558710
			},
			.prefetch0 = 689,
			.prefetch1 = 40012,
			.ram = andl_initial_ram_4,
			.ram_len = 18,
		},
		.final = {
			.regs = {
				4067541431, 3445187667, 2413163706, 1554321518, 2989803403, 2768758757, 2501815027, 4112642700, 1377141177, 4265437449, 2351154024, 606378607, 2837587416, 4261800912, 1287467518, 9230508, 3177184, 8475, 2606014672
			},
			.prefetch0 = 58910,
			.prefetch1 = 55651,
			.ram = andl_final_ram_4,
			.ram_len = 32,
		},
		.transactions = andl_transactions_4,
		.transactions_len = 18,
		.lenght = 72,
	},
	{
		.name = "005 AND.l D6, D0 c086",
		.initial = {
			.regs = {
				2326420654, 4210015188, 342427147, 2594131103, 2530947342, 3541818186, 864174865, 1936418310, 460024439, 1680074839, 283361669, 1638984957, 1384776410, 850971893, 3285415171, 16670374, 12761732, 41231, 7682532
			},
			.prefetch0 = 49286,
			.prefetch1 = 14560,
			.ram = andl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				42090496, 4210015188, 342427147, 2594131103, 2530947342, 3541818186, 864174865, 1936418310, 460024439, 1680074839, 283361669, 1638984957, 1384776410, 850971893, 3285415171, 16670374, 12761732, 41216, 7682534
			},
			.prefetch0 = 14560,
			.prefetch1 = 523,
			.ram = andl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = andl_transactions_5,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "006 AND.l (A0)+, D2 c498",
		.initial = {
			.regs = {
				2401743473, 2480755203, 3043756008, 4153860075, 945445479, 3605072641, 2000637264, 100522182, 2013229990, 2234471383, 1976142935, 1524904771, 3864771173, 2733437826, 1198342955, 8419168, 2021032, 41477, 7585680
			},
			.prefetch0 = 50328,
			.prefetch1 = 60538,
			.ram = andl_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2401743473, 2480755203, 275513864, 4153860075, 945445479, 3605072641, 2000637264, 100522182, 2013229994, 2234471383, 1976142935, 1524904771, 3864771173, 2733437826, 1198342955, 8419168, 2021032, 41472, 7585682
			},
			.prefetch0 = 60538,
			.prefetch1 = 41929,
			.ram = andl_final_ram_6,
			.ram_len = 10,
		},
		.transactions = andl_transactions_6,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "007 AND.l -(A1), D3 c6a1",
		.initial = {
			.regs = {
				230178906, 2689091663, 2558953150, 1534550211, 4262773950, 3833611882, 3926552836, 1053815964, 734013905, 2585419840, 1747425506, 2454987095, 3723970195, 2294172883, 3106127868, 2463170, 13687258, 33792, 693234
			},
			.prefetch0 = 50849,
			.prefetch1 = 52384,
			.ram = andl_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				230178906, 2689091663, 2558953150, 1398218816, 4262773950, 3833611882, 3926552836, 1053815964, 734013905, 2585419836, 1747425506, 2454987095, 3723970195, 2294172883, 3106127868, 2463170, 13687258, 33792, 693236
			},
			.prefetch0 = 52384,
			.prefetch1 = 51816,
			.ram = andl_final_ram_7,
			.ram_len = 10,
		},
		.transactions = andl_transactions_7,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "008 AND.l (xxx).w, D4 c8b8",
		.initial = {
			.regs = {
				2289223235, 1872878417, 3965482692, 3843288364, 808881473, 3957310057, 645379024, 3829944321, 1939843581, 1579275223, 1374716662, 4188189030, 1253867322, 3930608797, 604090094, 11751060, 15222992, 8982, 729622
			},
			.prefetch0 = 51384,
			.prefetch1 = 59775,
			.ram = andl_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2289223235, 1872878417, 3965482692, 3843288364, 808881473, 3957310057, 645379024, 3829944321, 1939843581, 1579275223, 1374716662, 4188189030, 1253867322, 3930608797, 604090094, 11751060, 15222978, 8982, 589431710
			},
			.prefetch0 = 41307,
			.prefetch1 = 39203,
			.ram = andl_final_ram_8,
			.ram_len = 28,
		},
		.transactions = andl_transactions_8,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "009 AND.l -(A2), D7 cea2",
		.initial = {
			.regs = {
				1739942996, 1442620782, 2981770205, 2624938454, 2184184131, 1765802860, 1445092690, 1144996796, 831055582, 1747714760, 3320553891, 4192683520, 1299434438, 4150755324, 3965808538, 15831474, 13461150, 34064, 15252936
			},
			.prefetch0 = 52898,
			.prefetch1 = 46914,
			.ram = andl_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1739942996, 1442620782, 2981770205, 2624938454, 2184184131, 1765802860, 1445092690, 1144996796, 831055582, 1747714760, 3320553887, 4192683520, 1299434438, 4150755324, 3965808538, 15831474, 13461136, 9488, 1319815552
			},
			.prefetch0 = 35557,
			.prefetch1 = 3373,
			.ram = andl_final_ram_9,
			.ram_len = 26,
		},
		.transactions = andl_transactions_9,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "010 AND.l D3, (A7) c797",
		.initial = {
			.regs = {
				4124090976, 1288566090, 2112156224, 2091027810, 2175213157, 1231926237, 1026355999, 4148527106, 99395915, 3637710431, 2582108320, 1148553974, 3758690913, 1300383685, 1209414693, 11883840, 8235014, 34307, 14980536
			},
			.prefetch0 = 51095,
			.prefetch1 = 11241,
			.ram = andl_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4124090976, 1288566090, 2112156224, 2091027810, 2175213157, 1231926237, 1026355999, 4148527106, 99395915, 3637710431, 2582108320, 1148553974, 3758690913, 1300383685, 1209414693, 11883840, 8235014, 34304, 14980538
			},
			.prefetch0 = 11241,
			.prefetch1 = 7442,
			.ram = andl_final_ram_10,
			.ram_len = 10,
		},
		.transactions = andl_transactions_10,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "011 AND.l D4, (A7)+ c99f",
		.initial = {
			.regs = {
				4104285760, 1225606966, 4219427720, 3391468983, 3733087954, 3286970996, 467135863, 2114637094, 117830825, 3264759661, 1644019845, 936441542, 1144506720, 1298612351, 2769651994, 6294596, 1535768, 40986, 2073012
			},
			.prefetch0 = 51615,
			.prefetch1 = 9128,
			.ram = andl_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4104285760, 1225606966, 4219427720, 3391468983, 3733087954, 3286970996, 467135863, 2114637094, 117830825, 3264759661, 1644019845, 936441542, 1144506720, 1298612351, 2769651994, 6294596, 1535772, 40976, 2073014
			},
			.prefetch0 = 9128,
			.prefetch1 = 4193,
			.ram = andl_final_ram_11,
			.ram_len = 10,
		},
		.transactions = andl_transactions_11,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "012 AND.l D1, D7 ce81",
		.initial = {
			.regs = {
				4011779676, 3148500769, 2755826513, 327150021, 3067833918, 4198189247, 3331098514, 364094119, 1418708262, 3842212443, 131749984, 3251411501, 2755698895, 2164804139, 2556899887, 12799124, 14193740, 8468, 1092448
			},
			.prefetch0 = 52865,
			.prefetch1 = 60835,
			.ram = andl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4011779676, 3148500769, 2755826513, 327150021, 3067833918, 4198189247, 3331098514, 295830049, 1418708262, 3842212443, 131749984, 3251411501, 2755698895, 2164804139, 2556899887, 12799124, 14193740, 8464, 1092450
			},
			.prefetch0 = 60835,
			.prefetch1 = 32739,
			.ram = andl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = andl_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 AND.l D0, D3 c680",
		.initial = {
			.regs = {
				730894439, 1486197257, 2403450168, 83813888, 2345605724, 1238354979, 1220690119, 2982448564, 2134915682, 3321540985, 1191849035, 2795166880, 3847424119, 2238255031, 3027927194, 3022156, 15786560, 34582, 7293928
			},
			.prefetch0 = 50816,
			.prefetch1 = 20400,
			.ram = andl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				730894439, 1486197257, 2403450168, 9469952, 2345605724, 1238354979, 1220690119, 2982448564, 2134915682, 3321540985, 1191849035, 2795166880, 3847424119, 2238255031, 3027927194, 3022156, 15786560, 34576, 7293930
			},
			.prefetch0 = 20400,
			.prefetch1 = 36291,
			.ram = andl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = andl_transactions_13,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "014 AND.l #, (d8, A1, Xn) 02b1",
		.initial = {
			.regs = {
				1625909466, 3563414698, 1000710104, 2134930417, 3811968496, 3069455468, 1210657403, 581793298, 2586234539, 3856332556, 363897753, 2171162146, 253952980, 539743302, 3181460242, 13559754, 2766048, 34068, 3743028
			},
			.prefetch0 = 689,
			.prefetch1 = 36808,
			.ram = andl_initial_ram_14,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1625909466, 3563414698, 1000710104, 2134930417, 3811968496, 3069455468, 1210657403, 581793298, 2586234539, 3856332556, 363897753, 2171162146, 253952980, 539743302, 3181460242, 13559754, 2766048, 34064, 3743036
			},
			.prefetch0 = 53910,
			.prefetch1 = 1203,
			.ram = andl_final_ram_14,
			.ram_len = 16,
		},
		.transactions = andl_transactions_14,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "015 AND.l D4, D5 ca84",
		.initial = {
			.regs = {
				3263619420, 2718473571, 4078780211, 863664769, 3123488713, 1666032061, 1780291669, 135324716, 990003401, 3768132756, 560257811, 479360211, 3214689935, 613191126, 3753592470, 4173176, 11855850, 33821, 7545336
			},
			.prefetch0 = 51844,
			.prefetch1 = 53072,
			.ram = andl_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3263619420, 2718473571, 4078780211, 863664769, 3123488713, 571253129, 1780291669, 135324716, 990003401, 3768132756, 560257811, 479360211, 3214689935, 613191126, 3753592470, 4173176, 11855850, 33808, 7545338
			},
			.prefetch0 = 53072,
			.prefetch1 = 56658,
			.ram = andl_final_ram_15,
			.ram_len = 6,
		},
		.transactions = andl_transactions_15,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "016 AND.l D6, D7 ce86",
		.initial = {
			.regs = {
				2306624370, 3292210781, 2348971029, 2242822634, 4189122056, 632332767, 2630503040, 749379118, 2310645434, 1094576176, 1253317791, 937092502, 961916701, 83419709, 2207616158, 5840042, 8219802, 42779, 14070192
			},
			.prefetch0 = 52870,
			.prefetch1 = 21430,
			.ram = andl_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2306624370, 3292210781, 2348971029, 2242822634, 4189122056, 632332767, 2630503040, 210373120, 2310645434, 1094576176, 1253317791, 937092502, 961916701, 83419709, 2207616158, 5840042, 8219802, 42768, 14070194
			},
			.prefetch0 = 21430,
			.prefetch1 = 32707,
			.ram = andl_final_ram_16,
			.ram_len = 6,
		},
		.transactions = andl_transactions_16,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "017 AND.l (d8, A6, Xn), D0 c0b6",
		.initial = {
			.regs = {
				4088408194, 2820725979, 4213571570, 2493434341, 1381683213, 2166397699, 1421156732, 1106119247, 1520972753, 408475739, 3470188012, 3233113976, 2035087499, 1685515822, 2142750641, 13524984, 11221582, 32799, 6417534
			},
			.prefetch0 = 49334,
			.prefetch1 = 27030,
			.ram = andl_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4088408194, 2820725979, 4213571570, 2493434341, 1381683213, 2166397699, 1421156732, 1106119247, 1520972753, 408475739, 3470188012, 3233113976, 2035087499, 1685515822, 2142750641, 13524984, 11221568, 8223, 743609766
			},
			.prefetch0 = 1893,
			.prefetch1 = 1332,
			.ram = andl_final_ram_17,
			.ram_len = 28,
		},
		.transactions = andl_transactions_17,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "018 AND.l D4, -(A4) c9a4",
		.initial = {
			.regs = {
				3013596666, 538227672, 367216186, 4090411443, 526242775, 2039186656, 1110401107, 3106225883, 2723865442, 1337314414, 1807618677, 3683581097, 1560040491, 1872443341, 3397409008, 6842462, 9548342, 517, 11211158
			},
			.prefetch0 = 51620,
			.prefetch1 = 62402,
			.ram = andl_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3013596666, 538227672, 367216186, 4090411443, 526242775, 2039186656, 1110401107, 3106225883, 2723865442, 1337314414, 1807618677, 3683581097, 1560040487, 1872443341, 3397409008, 6842462, 9548328, 8709, 4080715038
			},
			.prefetch0 = 7436,
			.prefetch1 = 32968,
			.ram = andl_final_ram_18,
			.ram_len = 26,
		},
		.transactions = andl_transactions_18,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "019 AND.l D1, D3 c681",
		.initial = {
			.regs = {
				589630777, 917114200, 1804297803, 3672753927, 2129498418, 286913782, 740627814, 3702042756, 1366081833, 2867100921, 3183342967, 3464927945, 413437453, 371814584, 2387232963, 3884606, 9174542, 9490, 12909458
			},
			.prefetch0 = 50817,
			.prefetch1 = 40434,
			.ram = andl_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				589630777, 917114200, 1804297803, 313001216, 2129498418, 286913782, 740627814, 3702042756, 1366081833, 2867100921, 3183342967, 3464927945, 413437453, 371814584, 2387232963, 3884606, 9174542, 9488, 12909460
			},
			.prefetch0 = 40434,
			.prefetch1 = 24352,
			.ram = andl_final_ram_19,
			.ram_len = 6,
		},
		.transactions = andl_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 AND.l D5, (d8, A2, Xn) cbb2",
		.initial = {
			.regs = {
				2987586556, 1802931892, 2661827017, 1366840632, 2198924026, 2535768451, 2135843467, 78300445, 3908999201, 3369882119, 68460215, 2567069520, 1958499808, 4066941639, 2828439011, 380878, 857814, 1034, 287452
			},
			.prefetch0 = 52146,
			.prefetch1 = 21331,
			.ram = andl_initial_ram_20,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2987586556, 1802931892, 2661827017, 1366840632, 2198924026, 2535768451, 2135843467, 78300445, 3908999201, 3369882119, 68460215, 2567069520, 1958499808, 4066941639, 2828439011, 380878, 857800, 9226, 2510053324
			},
			.prefetch0 = 27861,
			.prefetch1 = 51006,
			.ram = andl_final_ram_20,
			.ram_len = 28,
		},
		.transactions = andl_transactions_20,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "021 AND.l (A2)+, D1 c29a",
		.initial = {
			.regs = {
				3546341249, 1354518946, 934368958, 3517134732, 2151572258, 792214233, 983124772, 2512483207, 3674073701, 948269115, 479590007, 3809519025, 1300534479, 3839070675, 1272012595, 8257036, 5201470, 32768, 10883796
			},
			.prefetch0 = 49818,
			.prefetch1 = 42250,
			.ram = andl_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3546341249, 1354518946, 934368958, 3517134732, 2151572258, 792214233, 983124772, 2512483207, 3674073701, 948269115, 479590007, 3809519025, 1300534479, 3839070675, 1272012595, 8257036, 5201456, 8192, 4067837986
			},
			.prefetch0 = 29165,
			.prefetch1 = 5358,
			.ram = andl_final_ram_21,
			.ram_len = 26,
		},
		.transactions = andl_transactions_21,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "022 AND.l D0, -(A0) c1a0",
		.initial = {
			.regs = {
				212395844, 4088962539, 408280861, 3386533269, 1297297981, 2925940845, 239912173, 2891832589, 3958317554, 1125534157, 3377922114, 877195515, 3215479066, 564326081, 687203776, 8140124, 13523726, 41220, 14009124
			},
			.prefetch0 = 49568,
			.prefetch1 = 43350,
			.ram = andl_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				212395844, 4088962539, 408280861, 3386533269, 1297297981, 2925940845, 239912173, 2891832589, 3958317550, 1125534157, 3377922114, 877195515, 3215479066, 564326081, 687203776, 8140124, 13523726, 41216, 14009126
			},
			.prefetch0 = 43350,
			.prefetch1 = 50246,
			.ram = andl_final_ram_22,
			.ram_len = 10,
		},
		.transactions = andl_transactions_22,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "023 AND.l -(A1), D6 cca1",
		.initial = {
			.regs = {
				2572356206, 3496787566, 2322828228, 1654202187, 3470576217, 3919601256, 454908151, 1014424390, 3981547972, 2687045696, 2091606912, 705547097, 2025427391, 3630448178, 4242820353, 10263984, 7246226, 40969, 12094614
			},
			.prefetch0 = 52385,
			.prefetch1 = 11462,
			.ram = andl_initial_ram_23,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2572356206, 3496787566, 2322828228, 1654202187, 3470576217, 3919601256, 403196134, 1014424390, 3981547972, 2687045692, 2091606912, 705547097, 2025427391, 3630448178, 4242820353, 10263984, 7246226, 40960, 12094616
			},
			.prefetch0 = 11462,
			.prefetch1 = 52418,
			.ram = andl_final_ram_23,
			.ram_len = 10,
		},
		.transactions = andl_transactions_23,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "024 AND.l D4, -(A7) c9a7",
		.initial = {
			.regs = {
				125559201, 655717063, 942709758, 2748710916, 1955174303, 2287864102, 1917176917, 3286750851, 650351907, 3791892715, 836136327, 369485683, 2420878164, 2140316408, 3895135539, 8833654, 8005594, 782, 3236714
			},
			.prefetch0 = 51623,
			.prefetch1 = 54672,
			.ram = andl_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				125559201, 655717063, 942709758, 2748710916, 1955174303, 2287864102, 1917176917, 3286750851, 650351907, 3791892715, 836136327, 369485683, 2420878164, 2140316408, 3895135539, 8833650, 8005594, 768, 3236716
			},
			.prefetch0 = 54672,
			.prefetch1 = 27978,
			.ram = andl_final_ram_24,
			.ram_len = 10,
		},
		.transactions = andl_transactions_24,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "025 AND.l (A5)+, D2 c49d",
		.initial = {
			.regs = {
				1667273035, 700044727, 3455365866, 1192268809, 565007532, 379841535, 1082438857, 3204108346, 3899274473, 3459971298, 2527347388, 2654070103, 1529155655, 576971370, 800508333, 6658752, 7625876, 41753, 7371742
			},
			.prefetch0 = 50333,
			.prefetch1 = 51741,
			.ram = andl_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1667273035, 700044727, 3299881576, 1192268809, 565007532, 379841535, 1082438857, 3204108346, 3899274473, 3459971298, 2527347388, 2654070103, 1529155655, 576971374, 800508333, 6658752, 7625876, 41752, 7371744
			},
			.prefetch0 = 51741,
			.prefetch1 = 24727,
			.ram = andl_final_ram_25,
			.ram_len = 10,
		},
		.transactions = andl_transactions_25,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "026 AND.l D5, -(A3) cba3",
		.initial = {
			.regs = {
				904604106, 3786834597, 4202213548, 2314165692, 2380484136, 287847464, 3981897392, 2438215507, 4158197514, 3660305858, 3351129888, 2565062800, 2037068735, 2011620798, 2401310548, 15395770, 5158058, 41486, 12489304
			},
			.prefetch0 = 52131,
			.prefetch1 = 39327,
			.ram = andl_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				904604106, 3786834597, 4202213548, 2314165692, 2380484136, 287847464, 3981897392, 2438215507, 4158197514, 3660305858, 3351129888, 2565062796, 2037068735, 2011620798, 2401310548, 15395770, 5158058, 41472, 12489306
			},
			.prefetch0 = 39327,
			.prefetch1 = 56763,
			.ram = andl_final_ram_26,
			.ram_len = 10,
		},
		.transactions = andl_transactions_26,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "027 AND.l D3, (A0)+ c798",
		.initial = {
			.regs = {
				790375791, 1047519610, 3381894386, 801421643, 669681882, 2141341867, 3704512392, 712434311, 2049198709, 105924235, 889043456, 2397162801, 1053931469, 4035850203, 197585948, 1519122, 2983636, 278, 170796
			},
			.prefetch0 = 51096,
			.prefetch1 = 41993,
			.ram = andl_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				790375791, 1047519610, 3381894386, 801421643, 669681882, 2141341867, 3704512392, 712434311, 2049198709, 105924235, 889043456, 2397162801, 1053931469, 4035850203, 197585948, 1519122, 2983622, 8470, 1726530136
			},
			.prefetch0 = 26180,
			.prefetch1 = 44228,
			.ram = andl_final_ram_27,
			.ram_len = 26,
		},
		.transactions = andl_transactions_27,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "028 AND.l (d16, A7), D5 caaf",
		.initial = {
			.regs = {
				3829729748, 3821690221, 2780169073, 1395896971, 3147929128, 1767437457, 3435803238, 1148097990, 1091275812, 3403587283, 677377351, 1524928420, 216042607, 2515338676, 1138313277, 6863680, 15732294, 34304, 7232288
			},
			.prefetch0 = 51887,
			.prefetch1 = 33690,
			.ram = andl_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3829729748, 3821690221, 2780169073, 1395896971, 3147929128, 1761670288, 3435803238, 1148097990, 1091275812, 3403587283, 677377351, 1524928420, 216042607, 2515338676, 1138313277, 6863680, 15732294, 34304, 7232292
			},
			.prefetch0 = 9215,
			.prefetch1 = 59463,
			.ram = andl_final_ram_28,
			.ram_len = 12,
		},
		.transactions = andl_transactions_28,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "029 AND.l D0, (A1)+ c199",
		.initial = {
			.regs = {
				3517361799, 3761686568, 19803263, 1279149042, 2670298249, 2987907306, 2277382522, 1250153887, 779732258, 526861238, 1104563649, 3839382254, 3590420785, 4244513187, 3538277261, 11951888, 13549890, 517, 13382318
			},
			.prefetch0 = 49561,
			.prefetch1 = 42457,
			.ram = andl_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3517361799, 3761686568, 19803263, 1279149042, 2670298249, 2987907306, 2277382522, 1250153887, 779732258, 526861242, 1104563649, 3839382254, 3590420785, 4244513187, 3538277261, 11951888, 13549890, 512, 13382320
			},
			.prefetch0 = 42457,
			.prefetch1 = 12015,
			.ram = andl_final_ram_29,
			.ram_len = 10,
		},
		.transactions = andl_transactions_29,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "030 AND.l D4, -(A1) c9a1",
		.initial = {
			.regs = {
				2876355620, 576957187, 112645135, 786920545, 3467549839, 3976884776, 1694061317, 1687377672, 2046957004, 306292916, 1592243519, 3771437744, 705692414, 1535398649, 3013555065, 4907036, 15798158, 1536, 9948232
			},
			.prefetch0 = 51617,
			.prefetch1 = 5847,
			.ram = andl_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2876355620, 576957187, 112645135, 786920545, 3467549839, 3976884776, 1694061317, 1687377672, 2046957004, 306292912, 1592243519, 3771437744, 705692414, 1535398649, 3013555065, 4907036, 15798158, 1544, 9948234
			},
			.prefetch0 = 5847,
			.prefetch1 = 6317,
			.ram = andl_final_ram_30,
			.ram_len = 10,
		},
		.transactions = andl_transactions_30,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "031 AND.l D1, D4 c881",
		.initial = {
			.regs = {
				3353621686, 4147500591, 654430108, 2370024645, 3687404637, 2357888095, 4041197158, 5078971, 4202604406, 1708923612, 1689224874, 1553988338, 4030223125, 1202590694, 3153828643, 1056614, 7534420, 513, 10939662
			},
			.prefetch0 = 51329,
			.prefetch1 = 28106,
			.ram = andl_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3353621686, 4147500591, 654430108, 2370024645, 3540079629, 2357888095, 4041197158, 5078971, 4202604406, 1708923612, 1689224874, 1553988338, 4030223125, 1202590694, 3153828643, 1056614, 7534420, 520, 10939664
			},
			.prefetch0 = 28106,
			.prefetch1 = 39122,
			.ram = andl_final_ram_31,
			.ram_len = 6,
		},
		.transactions = andl_transactions_31,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_ANDL_H */