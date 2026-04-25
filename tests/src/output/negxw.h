#ifndef RBT_NEGXW_H
#define RBT_NEGXW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte negxw_initial_ram_0[] = {
		{ .addr = 0x268140, .byte = 0x40 },
		{ .addr = 0x268141, .byte = 0x69 },
		{ .addr = 0x268142, .byte = 0xe6 },
		{ .addr = 0x268143, .byte = 0xb5 },
		{ .addr = 0x268144, .byte = 0xe1 },
		{ .addr = 0x268145, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0x89 },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0x83 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x56838e, .byte = 0x0e },
		{ .addr = 0x56838f, .byte = 0x24 },
		{ .addr = 0x568390, .byte = 0x6f },
		{ .addr = 0x568391, .byte = 0x56 }
};

static const SST_RamByte negxw_final_ram_0[] = {
		{ .addr = 0x268140, .byte = 0x40 },
		{ .addr = 0x268141, .byte = 0x69 },
		{ .addr = 0x268142, .byte = 0xe6 },
		{ .addr = 0x268143, .byte = 0xb5 },
		{ .addr = 0x268144, .byte = 0xe1 },
		{ .addr = 0x268145, .byte = 0x62 },
		{ .addr = 0x62fb46, .byte = 0x81 },
		{ .addr = 0x62fb47, .byte = 0x42 },
		{ .addr = 0x62fb42, .byte = 0x21 },
		{ .addr = 0x62fb43, .byte = 0x16 },
		{ .addr = 0x62fb44, .byte = 0x00 },
		{ .addr = 0x62fb45, .byte = 0x26 },
		{ .addr = 0x62fb40, .byte = 0x40 },
		{ .addr = 0x62fb41, .byte = 0x69 },
		{ .addr = 0x62fb3e, .byte = 0xed },
		{ .addr = 0x62fb3f, .byte = 0xcf },
		{ .addr = 0x62fb3a, .byte = 0x40 },
		{ .addr = 0x62fb3b, .byte = 0x75 },
		{ .addr = 0x62fb3c, .byte = 0x5f },
		{ .addr = 0x62fb3d, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0x89 },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0x83 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x56838e, .byte = 0x0e },
		{ .addr = 0x56838f, .byte = 0x24 },
		{ .addr = 0x568390, .byte = 0x6f },
		{ .addr = 0x568391, .byte = 0x56 }
};

static const SST_Transaction negxw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2523460, .data = 57698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15789518, .data = 39174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6486854, .data = 33090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6486850, .data = 8470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6486852, .data = 38, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6486848, .data = 16489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6486846, .data = 60879, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6486842, .data = 16501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6486844, .data = 24560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33678, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5669774, .data = 3620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5669776, .data = 28502, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_1[] = {
		{ .addr = 0x10ffd8, .byte = 0x40 },
		{ .addr = 0x10ffd9, .byte = 0x69 },
		{ .addr = 0x10ffda, .byte = 0xa4 },
		{ .addr = 0x10ffdb, .byte = 0x38 },
		{ .addr = 0x10ffdc, .byte = 0x47 },
		{ .addr = 0x10ffdd, .byte = 0x37 },
		{ .addr = 0x099aa0, .byte = 0xdd },
		{ .addr = 0x099aa1, .byte = 0xcb },
		{ .addr = 0x10ffde, .byte = 0x6a },
		{ .addr = 0x10ffdf, .byte = 0x1d }
};

static const SST_RamByte negxw_final_ram_1[] = {
		{ .addr = 0x10ffd8, .byte = 0x40 },
		{ .addr = 0x10ffd9, .byte = 0x69 },
		{ .addr = 0x10ffda, .byte = 0xa4 },
		{ .addr = 0x10ffdb, .byte = 0x38 },
		{ .addr = 0x10ffdc, .byte = 0x47 },
		{ .addr = 0x10ffdd, .byte = 0x37 },
		{ .addr = 0x099aa0, .byte = 0x22 },
		{ .addr = 0x099aa1, .byte = 0x35 },
		{ .addr = 0x10ffde, .byte = 0x6a },
		{ .addr = 0x10ffdf, .byte = 0x1d }
};

static const SST_Transaction negxw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1114076, .data = 18231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 629408, .data = 56779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1114078, .data = 27165, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 629408, .data = 8757, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_2[] = {
		{ .addr = 0x8e9b7c, .byte = 0x40 },
		{ .addr = 0x8e9b7d, .byte = 0x59 },
		{ .addr = 0x8e9b7e, .byte = 0xd4 },
		{ .addr = 0x8e9b7f, .byte = 0x00 },
		{ .addr = 0x6d64ce, .byte = 0xab },
		{ .addr = 0x6d64cf, .byte = 0xf9 },
		{ .addr = 0x8e9b80, .byte = 0xa8 },
		{ .addr = 0x8e9b81, .byte = 0x98 }
};

static const SST_RamByte negxw_final_ram_2[] = {
		{ .addr = 0x8e9b7c, .byte = 0x40 },
		{ .addr = 0x8e9b7d, .byte = 0x59 },
		{ .addr = 0x8e9b7e, .byte = 0xd4 },
		{ .addr = 0x8e9b7f, .byte = 0x00 },
		{ .addr = 0x6d64ce, .byte = 0x54 },
		{ .addr = 0x6d64cf, .byte = 0x07 },
		{ .addr = 0x8e9b80, .byte = 0xa8 },
		{ .addr = 0x8e9b81, .byte = 0x98 }
};

static const SST_Transaction negxw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7169230, .data = 44025, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9345920, .data = 43160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7169230, .data = 21511, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_3[] = {
		{ .addr = 0xe8a826, .byte = 0x40 },
		{ .addr = 0xe8a827, .byte = 0x77 },
		{ .addr = 0xe8a828, .byte = 0xca },
		{ .addr = 0xe8a829, .byte = 0x1a },
		{ .addr = 0xe8a82a, .byte = 0x15 },
		{ .addr = 0xe8a82b, .byte = 0xce },
		{ .addr = 0x7cba4c, .byte = 0x32 },
		{ .addr = 0x7cba4d, .byte = 0xea },
		{ .addr = 0xe8a82c, .byte = 0x47 },
		{ .addr = 0xe8a82d, .byte = 0x75 }
};

static const SST_RamByte negxw_final_ram_3[] = {
		{ .addr = 0xe8a826, .byte = 0x40 },
		{ .addr = 0xe8a827, .byte = 0x77 },
		{ .addr = 0xe8a828, .byte = 0xca },
		{ .addr = 0xe8a829, .byte = 0x1a },
		{ .addr = 0xe8a82a, .byte = 0x15 },
		{ .addr = 0xe8a82b, .byte = 0xce },
		{ .addr = 0x7cba4c, .byte = 0xcd },
		{ .addr = 0x7cba4d, .byte = 0x16 },
		{ .addr = 0xe8a82c, .byte = 0x47 },
		{ .addr = 0xe8a82d, .byte = 0x75 }
};

static const SST_Transaction negxw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15247402, .data = 5582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8174156, .data = 13034, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15247404, .data = 18293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8174156, .data = 52502, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_4[] = {
		{ .addr = 0xd840f6, .byte = 0x40 },
		{ .addr = 0xd840f7, .byte = 0x62 },
		{ .addr = 0xd840f8, .byte = 0xd4 },
		{ .addr = 0xd840f9, .byte = 0xc7 },
		{ .addr = 0x08139e, .byte = 0x51 },
		{ .addr = 0x08139f, .byte = 0x25 },
		{ .addr = 0xd840fa, .byte = 0x4c },
		{ .addr = 0xd840fb, .byte = 0xcc }
};

static const SST_RamByte negxw_final_ram_4[] = {
		{ .addr = 0xd840f6, .byte = 0x40 },
		{ .addr = 0xd840f7, .byte = 0x62 },
		{ .addr = 0xd840f8, .byte = 0xd4 },
		{ .addr = 0xd840f9, .byte = 0xc7 },
		{ .addr = 0x08139e, .byte = 0xae },
		{ .addr = 0x08139f, .byte = 0xdb },
		{ .addr = 0xd840fa, .byte = 0x4c },
		{ .addr = 0xd840fb, .byte = 0xcc }
};

static const SST_Transaction negxw_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 529310, .data = 20773, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14172410, .data = 19660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 529310, .data = 44763, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_5[] = {
		{ .addr = 0x123f90, .byte = 0x40 },
		{ .addr = 0x123f91, .byte = 0x6b },
		{ .addr = 0x123f92, .byte = 0x5f },
		{ .addr = 0x123f93, .byte = 0xa0 },
		{ .addr = 0x123f94, .byte = 0xd3 },
		{ .addr = 0x123f95, .byte = 0xe1 },
		{ .addr = 0x6e4350, .byte = 0xb2 },
		{ .addr = 0x6e4351, .byte = 0xdb },
		{ .addr = 0x123f96, .byte = 0x47 },
		{ .addr = 0x123f97, .byte = 0xc6 }
};

static const SST_RamByte negxw_final_ram_5[] = {
		{ .addr = 0x123f90, .byte = 0x40 },
		{ .addr = 0x123f91, .byte = 0x6b },
		{ .addr = 0x123f92, .byte = 0x5f },
		{ .addr = 0x123f93, .byte = 0xa0 },
		{ .addr = 0x123f94, .byte = 0xd3 },
		{ .addr = 0x123f95, .byte = 0xe1 },
		{ .addr = 0x6e4350, .byte = 0x4d },
		{ .addr = 0x6e4351, .byte = 0x24 },
		{ .addr = 0x123f96, .byte = 0x47 },
		{ .addr = 0x123f97, .byte = 0xc6 }
};

static const SST_Transaction negxw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1195924, .data = 54241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7226192, .data = 45787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1195926, .data = 18374, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7226192, .data = 19748, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_6[] = {
		{ .addr = 0x6453ee, .byte = 0x40 },
		{ .addr = 0x6453ef, .byte = 0x40 },
		{ .addr = 0x6453f0, .byte = 0x57 },
		{ .addr = 0x6453f1, .byte = 0xe4 },
		{ .addr = 0x6453f2, .byte = 0xbc },
		{ .addr = 0x6453f3, .byte = 0x70 }
};

static const SST_RamByte negxw_final_ram_6[] = {
		{ .addr = 0x6453ee, .byte = 0x40 },
		{ .addr = 0x6453ef, .byte = 0x40 },
		{ .addr = 0x6453f0, .byte = 0x57 },
		{ .addr = 0x6453f1, .byte = 0xe4 },
		{ .addr = 0x6453f2, .byte = 0xbc },
		{ .addr = 0x6453f3, .byte = 0x70 }
};

static const SST_Transaction negxw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6575090, .data = 48240, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_7[] = {
		{ .addr = 0xef0692, .byte = 0x40 },
		{ .addr = 0xef0693, .byte = 0x69 },
		{ .addr = 0xef0694, .byte = 0x1c },
		{ .addr = 0xef0695, .byte = 0x59 },
		{ .addr = 0xef0696, .byte = 0xd6 },
		{ .addr = 0xef0697, .byte = 0xae },
		{ .addr = 0x70a9ae, .byte = 0xf3 },
		{ .addr = 0x70a9af, .byte = 0xb4 },
		{ .addr = 0xef0698, .byte = 0xe4 },
		{ .addr = 0xef0699, .byte = 0x09 }
};

static const SST_RamByte negxw_final_ram_7[] = {
		{ .addr = 0xef0692, .byte = 0x40 },
		{ .addr = 0xef0693, .byte = 0x69 },
		{ .addr = 0xef0694, .byte = 0x1c },
		{ .addr = 0xef0695, .byte = 0x59 },
		{ .addr = 0xef0696, .byte = 0xd6 },
		{ .addr = 0xef0697, .byte = 0xae },
		{ .addr = 0x70a9ae, .byte = 0x0c },
		{ .addr = 0x70a9af, .byte = 0x4b },
		{ .addr = 0xef0698, .byte = 0xe4 },
		{ .addr = 0xef0699, .byte = 0x09 }
};

static const SST_Transaction negxw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15664790, .data = 54958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7383470, .data = 62388, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15664792, .data = 58377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7383470, .data = 3147, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_8[] = {
		{ .addr = 0xb6583a, .byte = 0x40 },
		{ .addr = 0xb6583b, .byte = 0x78 },
		{ .addr = 0xb6583c, .byte = 0xd5 },
		{ .addr = 0xb6583d, .byte = 0xc2 },
		{ .addr = 0xb6583e, .byte = 0xac },
		{ .addr = 0xb6583f, .byte = 0xdf },
		{ .addr = 0xffd5c2, .byte = 0x86 },
		{ .addr = 0xffd5c3, .byte = 0xe4 },
		{ .addr = 0xb65840, .byte = 0x52 },
		{ .addr = 0xb65841, .byte = 0xa1 }
};

static const SST_RamByte negxw_final_ram_8[] = {
		{ .addr = 0xb6583a, .byte = 0x40 },
		{ .addr = 0xb6583b, .byte = 0x78 },
		{ .addr = 0xb6583c, .byte = 0xd5 },
		{ .addr = 0xb6583d, .byte = 0xc2 },
		{ .addr = 0xb6583e, .byte = 0xac },
		{ .addr = 0xb6583f, .byte = 0xdf },
		{ .addr = 0xffd5c2, .byte = 0x79 },
		{ .addr = 0xffd5c3, .byte = 0x1b },
		{ .addr = 0xb65840, .byte = 0x52 },
		{ .addr = 0xb65841, .byte = 0xa1 }
};

static const SST_Transaction negxw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11950142, .data = 44255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16766402, .data = 34532, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11950144, .data = 21153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16766402, .data = 31003, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_9[] = {
		{ .addr = 0xb0d4b2, .byte = 0x40 },
		{ .addr = 0xb0d4b3, .byte = 0x55 },
		{ .addr = 0xb0d4b4, .byte = 0xc1 },
		{ .addr = 0xb0d4b5, .byte = 0x7c },
		{ .addr = 0x00000c, .byte = 0x5d },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0xff },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xccff28, .byte = 0x71 },
		{ .addr = 0xccff29, .byte = 0x59 },
		{ .addr = 0xccff2a, .byte = 0xfe },
		{ .addr = 0xccff2b, .byte = 0x8e }
};

static const SST_RamByte negxw_final_ram_9[] = {
		{ .addr = 0xb0d4b2, .byte = 0x40 },
		{ .addr = 0xb0d4b3, .byte = 0x55 },
		{ .addr = 0xb0d4b4, .byte = 0xc1 },
		{ .addr = 0xb0d4b5, .byte = 0x7c },
		{ .addr = 0x089212, .byte = 0xd4 },
		{ .addr = 0x089213, .byte = 0xb4 },
		{ .addr = 0x08920e, .byte = 0x21 },
		{ .addr = 0x08920f, .byte = 0x16 },
		{ .addr = 0x089210, .byte = 0x00 },
		{ .addr = 0x089211, .byte = 0xb0 },
		{ .addr = 0x08920c, .byte = 0x40 },
		{ .addr = 0x08920d, .byte = 0x55 },
		{ .addr = 0x08920a, .byte = 0xa5 },
		{ .addr = 0x08920b, .byte = 0x53 },
		{ .addr = 0x089206, .byte = 0x40 },
		{ .addr = 0x089207, .byte = 0x55 },
		{ .addr = 0x089208, .byte = 0x10 },
		{ .addr = 0x089209, .byte = 0xb5 },
		{ .addr = 0x00000c, .byte = 0x5d },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0xff },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0xccff28, .byte = 0x71 },
		{ .addr = 0xccff29, .byte = 0x59 },
		{ .addr = 0xccff2a, .byte = 0xfe },
		{ .addr = 0xccff2b, .byte = 0x8e }
};

static const SST_Transaction negxw_transactions_9[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11904338, .data = 10982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 561682, .data = 54452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 561678, .data = 8470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 561680, .data = 176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 561676, .data = 16469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 561674, .data = 42323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 561670, .data = 16469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 561672, .data = 4277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 65320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13434664, .data = 29017, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13434666, .data = 65166, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_10[] = {
		{ .addr = 0x0b1c64, .byte = 0x40 },
		{ .addr = 0x0b1c65, .byte = 0x45 },
		{ .addr = 0x0b1c66, .byte = 0x6e },
		{ .addr = 0x0b1c67, .byte = 0x40 },
		{ .addr = 0x0b1c68, .byte = 0x82 },
		{ .addr = 0x0b1c69, .byte = 0xb9 }
};

static const SST_RamByte negxw_final_ram_10[] = {
		{ .addr = 0x0b1c64, .byte = 0x40 },
		{ .addr = 0x0b1c65, .byte = 0x45 },
		{ .addr = 0x0b1c66, .byte = 0x6e },
		{ .addr = 0x0b1c67, .byte = 0x40 },
		{ .addr = 0x0b1c68, .byte = 0x82 },
		{ .addr = 0x0b1c69, .byte = 0xb9 }
};

static const SST_Transaction negxw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 728168, .data = 33465, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_11[] = {
		{ .addr = 0xd2aba2, .byte = 0x40 },
		{ .addr = 0xd2aba3, .byte = 0x69 },
		{ .addr = 0xd2aba4, .byte = 0xfd },
		{ .addr = 0xd2aba5, .byte = 0x16 },
		{ .addr = 0xd2aba6, .byte = 0xef },
		{ .addr = 0xd2aba7, .byte = 0x11 },
		{ .addr = 0xd9b018, .byte = 0xad },
		{ .addr = 0xd9b019, .byte = 0x46 },
		{ .addr = 0xd2aba8, .byte = 0xa5 },
		{ .addr = 0xd2aba9, .byte = 0xd8 }
};

static const SST_RamByte negxw_final_ram_11[] = {
		{ .addr = 0xd2aba2, .byte = 0x40 },
		{ .addr = 0xd2aba3, .byte = 0x69 },
		{ .addr = 0xd2aba4, .byte = 0xfd },
		{ .addr = 0xd2aba5, .byte = 0x16 },
		{ .addr = 0xd2aba6, .byte = 0xef },
		{ .addr = 0xd2aba7, .byte = 0x11 },
		{ .addr = 0xd9b018, .byte = 0x52 },
		{ .addr = 0xd9b019, .byte = 0xba },
		{ .addr = 0xd2aba8, .byte = 0xa5 },
		{ .addr = 0xd2aba9, .byte = 0xd8 }
};

static const SST_Transaction negxw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13806502, .data = 61201, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14266392, .data = 44358, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13806504, .data = 42456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14266392, .data = 21178, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_12[] = {
		{ .addr = 0x41283c, .byte = 0x40 },
		{ .addr = 0x41283d, .byte = 0x5a },
		{ .addr = 0x41283e, .byte = 0x38 },
		{ .addr = 0x41283f, .byte = 0xba },
		{ .addr = 0x3cd7ea, .byte = 0x79 },
		{ .addr = 0x3cd7eb, .byte = 0xb5 },
		{ .addr = 0x412840, .byte = 0x49 },
		{ .addr = 0x412841, .byte = 0x67 }
};

static const SST_RamByte negxw_final_ram_12[] = {
		{ .addr = 0x41283c, .byte = 0x40 },
		{ .addr = 0x41283d, .byte = 0x5a },
		{ .addr = 0x41283e, .byte = 0x38 },
		{ .addr = 0x41283f, .byte = 0xba },
		{ .addr = 0x3cd7ea, .byte = 0x86 },
		{ .addr = 0x3cd7eb, .byte = 0x4b },
		{ .addr = 0x412840, .byte = 0x49 },
		{ .addr = 0x412841, .byte = 0x67 }
};

static const SST_Transaction negxw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3987434, .data = 31157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4270144, .data = 18791, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3987434, .data = 34379, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_13[] = {
		{ .addr = 0x034326, .byte = 0x40 },
		{ .addr = 0x034327, .byte = 0x50 },
		{ .addr = 0x034328, .byte = 0x13 },
		{ .addr = 0x034329, .byte = 0xfa },
		{ .addr = 0x495298, .byte = 0xbb },
		{ .addr = 0x495299, .byte = 0xef },
		{ .addr = 0x03432a, .byte = 0xc8 },
		{ .addr = 0x03432b, .byte = 0x74 }
};

static const SST_RamByte negxw_final_ram_13[] = {
		{ .addr = 0x034326, .byte = 0x40 },
		{ .addr = 0x034327, .byte = 0x50 },
		{ .addr = 0x034328, .byte = 0x13 },
		{ .addr = 0x034329, .byte = 0xfa },
		{ .addr = 0x495298, .byte = 0x44 },
		{ .addr = 0x495299, .byte = 0x11 },
		{ .addr = 0x03432a, .byte = 0xc8 },
		{ .addr = 0x03432b, .byte = 0x74 }
};

static const SST_Transaction negxw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4805272, .data = 48111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 213802, .data = 51316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4805272, .data = 17425, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_14[] = {
		{ .addr = 0x87ebc8, .byte = 0x40 },
		{ .addr = 0x87ebc9, .byte = 0x42 },
		{ .addr = 0x87ebca, .byte = 0x6e },
		{ .addr = 0x87ebcb, .byte = 0x1b },
		{ .addr = 0x87ebcc, .byte = 0xda },
		{ .addr = 0x87ebcd, .byte = 0xb8 }
};

static const SST_RamByte negxw_final_ram_14[] = {
		{ .addr = 0x87ebc8, .byte = 0x40 },
		{ .addr = 0x87ebc9, .byte = 0x42 },
		{ .addr = 0x87ebca, .byte = 0x6e },
		{ .addr = 0x87ebcb, .byte = 0x1b },
		{ .addr = 0x87ebcc, .byte = 0xda },
		{ .addr = 0x87ebcd, .byte = 0xb8 }
};

static const SST_Transaction negxw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8907724, .data = 55992, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negxw_initial_ram_15[] = {
		{ .addr = 0x205468, .byte = 0x40 },
		{ .addr = 0x205469, .byte = 0x68 },
		{ .addr = 0x20546a, .byte = 0x4b },
		{ .addr = 0x20546b, .byte = 0xa9 },
		{ .addr = 0x20546c, .byte = 0x48 },
		{ .addr = 0x20546d, .byte = 0x5d },
		{ .addr = 0xd69d3a, .byte = 0x81 },
		{ .addr = 0xd69d3b, .byte = 0x75 },
		{ .addr = 0x20546e, .byte = 0xe5 },
		{ .addr = 0x20546f, .byte = 0xd3 }
};

static const SST_RamByte negxw_final_ram_15[] = {
		{ .addr = 0x205468, .byte = 0x40 },
		{ .addr = 0x205469, .byte = 0x68 },
		{ .addr = 0x20546a, .byte = 0x4b },
		{ .addr = 0x20546b, .byte = 0xa9 },
		{ .addr = 0x20546c, .byte = 0x48 },
		{ .addr = 0x20546d, .byte = 0x5d },
		{ .addr = 0xd69d3a, .byte = 0x7e },
		{ .addr = 0xd69d3b, .byte = 0x8a },
		{ .addr = 0x20546e, .byte = 0xe5 },
		{ .addr = 0x20546f, .byte = 0xd3 }
};

static const SST_Transaction negxw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2118764, .data = 18525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14064954, .data = 33141, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2118766, .data = 58835, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14064954, .data = 32394, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t NEGXW_TEST_COUNT = 16;
static const SST_TestCase negxw[] = {
	{
		.name = "000 NEGX.w (d16, A1) 4069",
		.initial = {
			.regs = {
				1064059708, 2948880760, 3150013704, 1370511521, 1090054400, 2992938096, 1579011178, 3096968114, 671629648, 1609631514, 2343267296, 3868328393, 2033000172, 1710072273, 813654814, 14584866, 6486856, 8470, 2523460
			},
			.prefetch0 = 16489,
			.prefetch1 = 59061,
			.ram = negxw_initial_ram_0,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1064059708, 2948880760, 3150013704, 1370511521, 1090054400, 2992938096, 1579011178, 3096968114, 671629648, 1609631514, 2343267296, 3868328393, 2033000172, 1710072273, 813654814, 14584866, 6486842, 8470, 2304148370
			},
			.prefetch0 = 3620,
			.prefetch1 = 28502,
			.ram = negxw_final_ram_0,
			.ram_len = 28,
		},
		.transactions = negxw_transactions_0,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "001 NEGX.w (d16, A1) 4069",
		.initial = {
			.regs = {
				3696163671, 686635119, 2222744982, 3531421368, 289684933, 1705825632, 615421360, 3319889649, 1450453643, 1611265640, 1439202596, 3071998673, 1778411808, 1693648776, 2781770758, 9167884, 3870114, 42757, 1114076
			},
			.prefetch0 = 16489,
			.prefetch1 = 42040,
			.ram = negxw_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3696163671, 686635119, 2222744982, 3531421368, 289684933, 1705825632, 615421360, 3319889649, 1450453643, 1611265640, 1439202596, 3071998673, 1778411808, 1693648776, 2781770758, 9167884, 3870114, 42769, 1114080
			},
			.prefetch0 = 18231,
			.prefetch1 = 27165,
			.ram = negxw_final_ram_1,
			.ram_len = 10,
		},
		.transactions = negxw_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 NEGX.w (A1)+ 4059",
		.initial = {
			.regs = {
				1004192856, 412694302, 1807903973, 2393620110, 121933855, 3629248729, 1239400787, 1058046155, 1275289458, 2775409870, 1336577812, 3179334759, 365311937, 2404985702, 1379096559, 4393998, 9706566, 271, 9345920
			},
			.prefetch0 = 16473,
			.prefetch1 = 54272,
			.ram = negxw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1004192856, 412694302, 1807903973, 2393620110, 121933855, 3629248729, 1239400787, 1058046155, 1275289458, 2775409872, 1336577812, 3179334759, 365311937, 2404985702, 1379096559, 4393998, 9706566, 273, 9345922
			},
			.prefetch0 = 54272,
			.prefetch1 = 43160,
			.ram = negxw_final_ram_2,
			.ram_len = 8,
		},
		.transactions = negxw_transactions_2,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "003 NEGX.w (d8, A7, Xn) 4077",
		.initial = {
			.regs = {
				2936170211, 1058150230, 362733096, 924755200, 3974322049, 3715590197, 2363714083, 1999113693, 2944914534, 1610224143, 2838830977, 4173900791, 2036827478, 1475295483, 819527258, 1389788, 5821356, 774, 15247402
			},
			.prefetch0 = 16503,
			.prefetch1 = 51738,
			.ram = negxw_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2936170211, 1058150230, 362733096, 924755200, 3974322049, 3715590197, 2363714083, 1999113693, 2944914534, 1610224143, 2838830977, 4173900791, 2036827478, 1475295483, 819527258, 1389788, 5821356, 793, 15247406
			},
			.prefetch0 = 5582,
			.prefetch1 = 18293,
			.ram = negxw_final_ram_3,
			.ram_len = 10,
		},
		.transactions = negxw_transactions_3,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "004 NEGX.w -(A2) 4062",
		.initial = {
			.regs = {
				2416276305, 3868339809, 537058267, 1738234316, 1613036995, 3507484315, 471614678, 2697333938, 643734362, 437179869, 906498976, 2495050446, 1461490877, 1404226513, 4248659780, 8752050, 11749888, 7, 14172410
			},
			.prefetch0 = 16482,
			.prefetch1 = 54471,
			.ram = negxw_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2416276305, 3868339809, 537058267, 1738234316, 1613036995, 3507484315, 471614678, 2697333938, 643734362, 437179869, 906498974, 2495050446, 1461490877, 1404226513, 4248659780, 8752050, 11749888, 25, 14172412
			},
			.prefetch0 = 54471,
			.prefetch1 = 19660,
			.ram = negxw_final_ram_4,
			.ram_len = 8,
		},
		.transactions = negxw_transactions_4,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "005 NEGX.w (d16, A3) 406b",
		.initial = {
			.regs = {
				3253265810, 2300518108, 2094522656, 761685199, 1210545677, 1223526176, 1364880068, 23206338, 341944638, 3902567293, 1580686864, 1366156208, 1799846825, 2031447668, 2982523805, 13621568, 748752, 40983, 1195924
			},
			.prefetch0 = 16491,
			.prefetch1 = 24480,
			.ram = negxw_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3253265810, 2300518108, 2094522656, 761685199, 1210545677, 1223526176, 1364880068, 23206338, 341944638, 3902567293, 1580686864, 1366156208, 1799846825, 2031447668, 2982523805, 13621568, 748752, 40977, 1195928
			},
			.prefetch0 = 54241,
			.prefetch1 = 18374,
			.ram = negxw_final_ram_5,
			.ram_len = 10,
		},
		.transactions = negxw_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 NEGX.w D0 4040",
		.initial = {
			.regs = {
				3725737489, 2975435953, 1159815502, 3502498136, 2988214914, 353732201, 2490040565, 2062711281, 805787826, 692683694, 1447768965, 2314227749, 4236170432, 186659062, 1985669842, 15079566, 1756388, 8973, 6575090
			},
			.prefetch0 = 16448,
			.prefetch1 = 22500,
			.ram = negxw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3725771247, 2975435953, 1159815502, 3502498136, 2988214914, 353732201, 2490040565, 2062711281, 805787826, 692683694, 1447768965, 2314227749, 4236170432, 186659062, 1985669842, 15079566, 1756388, 8985, 6575092
			},
			.prefetch0 = 22500,
			.prefetch1 = 48240,
			.ram = negxw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = negxw_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 NEGX.w (d16, A1) 4069",
		.initial = {
			.regs = {
				1565125847, 427375501, 3754478921, 4258345858, 3380746540, 3354661591, 3501306294, 2939803497, 1269873171, 2842725717, 1279867078, 3388068837, 3062226895, 3169125064, 113707780, 451906, 2561126, 33563, 15664790
			},
			.prefetch0 = 16489,
			.prefetch1 = 7257,
			.ram = negxw_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1565125847, 427375501, 3754478921, 4258345858, 3380746540, 3354661591, 3501306294, 2939803497, 1269873171, 2842725717, 1279867078, 3388068837, 3062226895, 3169125064, 113707780, 451906, 2561126, 33553, 15664794
			},
			.prefetch0 = 54958,
			.prefetch1 = 58377,
			.ram = negxw_final_ram_7,
			.ram_len = 10,
		},
		.transactions = negxw_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 NEGX.w (xxx).w 4078",
		.initial = {
			.regs = {
				3921236456, 1465456679, 1991690116, 467982031, 318301843, 2511801584, 3634865357, 3668062246, 3623756284, 1070411166, 874372318, 1407587941, 4152859906, 1422038561, 2600836823, 11401178, 13508768, 1047, 11950142
			},
			.prefetch0 = 16504,
			.prefetch1 = 54722,
			.ram = negxw_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3921236456, 1465456679, 1991690116, 467982031, 318301843, 2511801584, 3634865357, 3668062246, 3623756284, 1070411166, 874372318, 1407587941, 4152859906, 1422038561, 2600836823, 11401178, 13508768, 1041, 11950146
			},
			.prefetch0 = 44255,
			.prefetch1 = 21153,
			.ram = negxw_final_ram_8,
			.ram_len = 10,
		},
		.transactions = negxw_transactions_8,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "009 NEGX.w (A5) 4055",
		.initial = {
			.regs = {
				356230999, 1853244252, 2121755940, 1724376465, 138643563, 756559170, 1587020182, 1707812256, 2359223694, 265707691, 3429422631, 3224667893, 3236790997, 280339795, 849448460, 3743718, 561684, 8470, 11588790
			},
			.prefetch0 = 16469,
			.prefetch1 = 49532,
			.ram = negxw_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				356230999, 1853244252, 2121755940, 1724376465, 138643563, 756559170, 1587020182, 1707812256, 2359223694, 265707691, 3429422631, 3224667893, 3236790997, 280339795, 849448460, 3743718, 561670, 8470, 1573715756
			},
			.prefetch0 = 29017,
			.prefetch1 = 65166,
			.ram = negxw_final_ram_9,
			.ram_len = 26,
		},
		.transactions = negxw_transactions_9,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "010 NEGX.w D5 4045",
		.initial = {
			.regs = {
				461922746, 2009462375, 1012844165, 1301054058, 868003085, 2490349624, 2099998299, 107699622, 2673562604, 3832653514, 3913141276, 671456002, 2680250227, 612943230, 888446225, 12964088, 2218742, 8720, 728168
			},
			.prefetch0 = 16453,
			.prefetch1 = 28224,
			.ram = negxw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				461922746, 2009462375, 1012844165, 1301054058, 868003085, 2490320839, 2099998299, 107699622, 2673562604, 3832653514, 3913141276, 671456002, 2680250227, 612943230, 888446225, 12964088, 2218742, 8721, 728170
			},
			.prefetch0 = 28224,
			.prefetch1 = 33465,
			.ram = negxw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = negxw_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 NEGX.w (d16, A1) 4069",
		.initial = {
			.regs = {
				3865717239, 3909353333, 3946479044, 3782369401, 300601298, 680736471, 4256775990, 2816029438, 3127811893, 4225348354, 3698516332, 3149459970, 3044298106, 3228526044, 3066457584, 5238532, 2607130, 269, 13806502
			},
			.prefetch0 = 16489,
			.prefetch1 = 64790,
			.ram = negxw_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3865717239, 3909353333, 3946479044, 3782369401, 300601298, 680736471, 4256775990, 2816029438, 3127811893, 4225348354, 3698516332, 3149459970, 3044298106, 3228526044, 3066457584, 5238532, 2607130, 273, 13806506
			},
			.prefetch0 = 61201,
			.prefetch1 = 42456,
			.ram = negxw_final_ram_11,
			.ram_len = 10,
		},
		.transactions = negxw_transactions_11,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "012 NEGX.w (A2)+ 405a",
		.initial = {
			.regs = {
				3902087132, 1679394042, 2110911192, 1581378529, 3619741571, 1649955782, 2824870858, 2750118632, 869172192, 1937205968, 3208435690, 3199856754, 2609487649, 4158610061, 4099665649, 13116140, 15826430, 42753, 4270144
			},
			.prefetch0 = 16474,
			.prefetch1 = 14522,
			.ram = negxw_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3902087132, 1679394042, 2110911192, 1581378529, 3619741571, 1649955782, 2824870858, 2750118632, 869172192, 1937205968, 3208435692, 3199856754, 2609487649, 4158610061, 4099665649, 13116140, 15826430, 42777, 4270146
			},
			.prefetch0 = 14522,
			.prefetch1 = 18791,
			.ram = negxw_final_ram_12,
			.ram_len = 8,
		},
		.transactions = negxw_transactions_12,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "013 NEGX.w (A0) 4050",
		.initial = {
			.regs = {
				2464280692, 803332329, 2193998800, 3736510435, 11006801, 895296086, 830137903, 691920004, 1145655960, 1789986548, 2377071209, 1650344107, 2326975205, 1299715876, 561452658, 323486, 2911626, 41483, 213802
			},
			.prefetch0 = 16464,
			.prefetch1 = 5114,
			.ram = negxw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2464280692, 803332329, 2193998800, 3736510435, 11006801, 895296086, 830137903, 691920004, 1145655960, 1789986548, 2377071209, 1650344107, 2326975205, 1299715876, 561452658, 323486, 2911626, 41489, 213804
			},
			.prefetch0 = 5114,
			.prefetch1 = 51316,
			.ram = negxw_final_ram_13,
			.ram_len = 8,
		},
		.transactions = negxw_transactions_13,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "014 NEGX.w D2 4042",
		.initial = {
			.regs = {
				1873868794, 3640508168, 3502439273, 3259949775, 3182832094, 3698658611, 2766814590, 20778344, 2557014872, 2107321031, 824652551, 2481840233, 3760567452, 2846818976, 891472991, 2605754, 3887294, 33566, 8907724
			},
			.prefetch0 = 16450,
			.prefetch1 = 28187,
			.ram = negxw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1873868794, 3640508168, 3502376086, 3259949775, 3182832094, 3698658611, 2766814590, 20778344, 2557014872, 2107321031, 824652551, 2481840233, 3760567452, 2846818976, 891472991, 2605754, 3887294, 33553, 8907726
			},
			.prefetch0 = 28187,
			.prefetch1 = 55992,
			.ram = negxw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = negxw_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 NEGX.w (d16, A0) 4068",
		.initial = {
			.regs = {
				3375309183, 3336971619, 1877355939, 1451750372, 1671821868, 1373989503, 2380269495, 539689123, 1071010193, 847336181, 4240455086, 953176426, 1484819743, 3356765726, 792725977, 5685300, 8964298, 34069, 2118764
			},
			.prefetch0 = 16488,
			.prefetch1 = 19369,
			.ram = negxw_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3375309183, 3336971619, 1877355939, 1451750372, 1671821868, 1373989503, 2380269495, 539689123, 1071010193, 847336181, 4240455086, 953176426, 1484819743, 3356765726, 792725977, 5685300, 8964298, 34065, 2118768
			},
			.prefetch0 = 18525,
			.prefetch1 = 58835,
			.ram = negxw_final_ram_15,
			.ram_len = 10,
		},
		.transactions = negxw_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
};

#endif /* RBT_NEGXW_H */