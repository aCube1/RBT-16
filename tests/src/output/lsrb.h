#ifndef RBT_LSRB_H
#define RBT_LSRB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte lsrb_initial_ram_0[] = {
		{ .addr = 0xb315d8, .byte = 0xe0 },
		{ .addr = 0xb315d9, .byte = 0x0f },
		{ .addr = 0xb315da, .byte = 0x93 },
		{ .addr = 0xb315db, .byte = 0xf1 },
		{ .addr = 0xb315dc, .byte = 0x40 },
		{ .addr = 0xb315dd, .byte = 0x82 }
};

static const SST_RamByte lsrb_final_ram_0[] = {
		{ .addr = 0xb315d8, .byte = 0xe0 },
		{ .addr = 0xb315d9, .byte = 0x0f },
		{ .addr = 0xb315da, .byte = 0x93 },
		{ .addr = 0xb315db, .byte = 0xf1 },
		{ .addr = 0xb315dc, .byte = 0x40 },
		{ .addr = 0xb315dd, .byte = 0x82 }
};

static const SST_Transaction lsrb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11736540, .data = 16514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_1[] = {
		{ .addr = 0xfd75d4, .byte = 0xe4 },
		{ .addr = 0xfd75d5, .byte = 0x2b },
		{ .addr = 0xfd75d6, .byte = 0x02 },
		{ .addr = 0xfd75d7, .byte = 0x2e },
		{ .addr = 0xfd75d8, .byte = 0xd6 },
		{ .addr = 0xfd75d9, .byte = 0x5c }
};

static const SST_RamByte lsrb_final_ram_1[] = {
		{ .addr = 0xfd75d4, .byte = 0xe4 },
		{ .addr = 0xfd75d5, .byte = 0x2b },
		{ .addr = 0xfd75d6, .byte = 0x02 },
		{ .addr = 0xfd75d7, .byte = 0x2e },
		{ .addr = 0xfd75d8, .byte = 0xd6 },
		{ .addr = 0xfd75d9, .byte = 0x5c }
};

static const SST_Transaction lsrb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16610776, .data = 54876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrb_initial_ram_2[] = {
		{ .addr = 0xe86274, .byte = 0xec },
		{ .addr = 0xe86275, .byte = 0x2d },
		{ .addr = 0xe86276, .byte = 0xa5 },
		{ .addr = 0xe86277, .byte = 0x1d },
		{ .addr = 0xe86278, .byte = 0x9b },
		{ .addr = 0xe86279, .byte = 0x7d }
};

static const SST_RamByte lsrb_final_ram_2[] = {
		{ .addr = 0xe86274, .byte = 0xec },
		{ .addr = 0xe86275, .byte = 0x2d },
		{ .addr = 0xe86276, .byte = 0xa5 },
		{ .addr = 0xe86277, .byte = 0x1d },
		{ .addr = 0xe86278, .byte = 0x9b },
		{ .addr = 0xe86279, .byte = 0x7d }
};

static const SST_Transaction lsrb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15229560, .data = 39805, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 22 },
};

static const SST_RamByte lsrb_initial_ram_3[] = {
		{ .addr = 0x693388, .byte = 0xe6 },
		{ .addr = 0x693389, .byte = 0x2a },
		{ .addr = 0x69338a, .byte = 0xb7 },
		{ .addr = 0x69338b, .byte = 0xa1 },
		{ .addr = 0x69338c, .byte = 0x9d },
		{ .addr = 0x69338d, .byte = 0xf5 }
};

static const SST_RamByte lsrb_final_ram_3[] = {
		{ .addr = 0x693388, .byte = 0xe6 },
		{ .addr = 0x693389, .byte = 0x2a },
		{ .addr = 0x69338a, .byte = 0xb7 },
		{ .addr = 0x69338b, .byte = 0xa1 },
		{ .addr = 0x69338c, .byte = 0x9d },
		{ .addr = 0x69338d, .byte = 0xf5 }
};

static const SST_Transaction lsrb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6894476, .data = 40437, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte lsrb_initial_ram_4[] = {
		{ .addr = 0x9f4684, .byte = 0xea },
		{ .addr = 0x9f4685, .byte = 0x2a },
		{ .addr = 0x9f4686, .byte = 0x44 },
		{ .addr = 0x9f4687, .byte = 0x75 },
		{ .addr = 0x9f4688, .byte = 0x2a },
		{ .addr = 0x9f4689, .byte = 0x48 }
};

static const SST_RamByte lsrb_final_ram_4[] = {
		{ .addr = 0x9f4684, .byte = 0xea },
		{ .addr = 0x9f4685, .byte = 0x2a },
		{ .addr = 0x9f4686, .byte = 0x44 },
		{ .addr = 0x9f4687, .byte = 0x75 },
		{ .addr = 0x9f4688, .byte = 0x2a },
		{ .addr = 0x9f4689, .byte = 0x48 }
};

static const SST_Transaction lsrb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10438280, .data = 10824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte lsrb_initial_ram_5[] = {
		{ .addr = 0x80e6c2, .byte = 0xec },
		{ .addr = 0x80e6c3, .byte = 0x28 },
		{ .addr = 0x80e6c4, .byte = 0x4b },
		{ .addr = 0x80e6c5, .byte = 0xf4 },
		{ .addr = 0x80e6c6, .byte = 0xcd },
		{ .addr = 0x80e6c7, .byte = 0x92 }
};

static const SST_RamByte lsrb_final_ram_5[] = {
		{ .addr = 0x80e6c2, .byte = 0xec },
		{ .addr = 0x80e6c3, .byte = 0x28 },
		{ .addr = 0x80e6c4, .byte = 0x4b },
		{ .addr = 0x80e6c5, .byte = 0xf4 },
		{ .addr = 0x80e6c6, .byte = 0xcd },
		{ .addr = 0x80e6c7, .byte = 0x92 }
};

static const SST_Transaction lsrb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8447686, .data = 52626, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte lsrb_initial_ram_6[] = {
		{ .addr = 0x7c8f8a, .byte = 0xe0 },
		{ .addr = 0x7c8f8b, .byte = 0x0b },
		{ .addr = 0x7c8f8c, .byte = 0x58 },
		{ .addr = 0x7c8f8d, .byte = 0x8e },
		{ .addr = 0x7c8f8e, .byte = 0x8c },
		{ .addr = 0x7c8f8f, .byte = 0x6a }
};

static const SST_RamByte lsrb_final_ram_6[] = {
		{ .addr = 0x7c8f8a, .byte = 0xe0 },
		{ .addr = 0x7c8f8b, .byte = 0x0b },
		{ .addr = 0x7c8f8c, .byte = 0x58 },
		{ .addr = 0x7c8f8d, .byte = 0x8e },
		{ .addr = 0x7c8f8e, .byte = 0x8c },
		{ .addr = 0x7c8f8f, .byte = 0x6a }
};

static const SST_Transaction lsrb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8163214, .data = 35946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_7[] = {
		{ .addr = 0xf8c538, .byte = 0xe6 },
		{ .addr = 0xf8c539, .byte = 0x0d },
		{ .addr = 0xf8c53a, .byte = 0x64 },
		{ .addr = 0xf8c53b, .byte = 0x30 },
		{ .addr = 0xf8c53c, .byte = 0xf1 },
		{ .addr = 0xf8c53d, .byte = 0x18 }
};

static const SST_RamByte lsrb_final_ram_7[] = {
		{ .addr = 0xf8c538, .byte = 0xe6 },
		{ .addr = 0xf8c539, .byte = 0x0d },
		{ .addr = 0xf8c53a, .byte = 0x64 },
		{ .addr = 0xf8c53b, .byte = 0x30 },
		{ .addr = 0xf8c53c, .byte = 0xf1 },
		{ .addr = 0xf8c53d, .byte = 0x18 }
};

static const SST_Transaction lsrb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16303420, .data = 61720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lsrb_initial_ram_8[] = {
		{ .addr = 0x08297c, .byte = 0xe0 },
		{ .addr = 0x08297d, .byte = 0x0a },
		{ .addr = 0x08297e, .byte = 0x73 },
		{ .addr = 0x08297f, .byte = 0x4a },
		{ .addr = 0x082980, .byte = 0x5c },
		{ .addr = 0x082981, .byte = 0xf6 }
};

static const SST_RamByte lsrb_final_ram_8[] = {
		{ .addr = 0x08297c, .byte = 0xe0 },
		{ .addr = 0x08297d, .byte = 0x0a },
		{ .addr = 0x08297e, .byte = 0x73 },
		{ .addr = 0x08297f, .byte = 0x4a },
		{ .addr = 0x082980, .byte = 0x5c },
		{ .addr = 0x082981, .byte = 0xf6 }
};

static const SST_Transaction lsrb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 534912, .data = 23798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_9[] = {
		{ .addr = 0x964c98, .byte = 0xe2 },
		{ .addr = 0x964c99, .byte = 0x28 },
		{ .addr = 0x964c9a, .byte = 0x61 },
		{ .addr = 0x964c9b, .byte = 0x72 },
		{ .addr = 0x964c9c, .byte = 0xe2 },
		{ .addr = 0x964c9d, .byte = 0xa4 }
};

static const SST_RamByte lsrb_final_ram_9[] = {
		{ .addr = 0x964c98, .byte = 0xe2 },
		{ .addr = 0x964c99, .byte = 0x28 },
		{ .addr = 0x964c9a, .byte = 0x61 },
		{ .addr = 0x964c9b, .byte = 0x72 },
		{ .addr = 0x964c9c, .byte = 0xe2 },
		{ .addr = 0x964c9d, .byte = 0xa4 }
};

static const SST_Transaction lsrb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9850012, .data = 58020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 100 },
};

static const SST_RamByte lsrb_initial_ram_10[] = {
		{ .addr = 0x20732e, .byte = 0xe0 },
		{ .addr = 0x20732f, .byte = 0x2d },
		{ .addr = 0x207330, .byte = 0xde },
		{ .addr = 0x207331, .byte = 0x9a },
		{ .addr = 0x207332, .byte = 0x21 },
		{ .addr = 0x207333, .byte = 0xb0 }
};

static const SST_RamByte lsrb_final_ram_10[] = {
		{ .addr = 0x20732e, .byte = 0xe0 },
		{ .addr = 0x20732f, .byte = 0x2d },
		{ .addr = 0x207330, .byte = 0xde },
		{ .addr = 0x207331, .byte = 0x9a },
		{ .addr = 0x207332, .byte = 0x21 },
		{ .addr = 0x207333, .byte = 0xb0 }
};

static const SST_Transaction lsrb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2126642, .data = 8624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 104 },
};

static const SST_RamByte lsrb_initial_ram_11[] = {
		{ .addr = 0x46b838, .byte = 0xe0 },
		{ .addr = 0x46b839, .byte = 0x09 },
		{ .addr = 0x46b83a, .byte = 0xc2 },
		{ .addr = 0x46b83b, .byte = 0xd0 },
		{ .addr = 0x46b83c, .byte = 0x76 },
		{ .addr = 0x46b83d, .byte = 0x40 }
};

static const SST_RamByte lsrb_final_ram_11[] = {
		{ .addr = 0x46b838, .byte = 0xe0 },
		{ .addr = 0x46b839, .byte = 0x09 },
		{ .addr = 0x46b83a, .byte = 0xc2 },
		{ .addr = 0x46b83b, .byte = 0xd0 },
		{ .addr = 0x46b83c, .byte = 0x76 },
		{ .addr = 0x46b83d, .byte = 0x40 }
};

static const SST_Transaction lsrb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4634684, .data = 30272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_12[] = {
		{ .addr = 0x17b11e, .byte = 0xea },
		{ .addr = 0x17b11f, .byte = 0x29 },
		{ .addr = 0x17b120, .byte = 0xd8 },
		{ .addr = 0x17b121, .byte = 0xf7 },
		{ .addr = 0x17b122, .byte = 0x9f },
		{ .addr = 0x17b123, .byte = 0xab }
};

static const SST_RamByte lsrb_final_ram_12[] = {
		{ .addr = 0x17b11e, .byte = 0xea },
		{ .addr = 0x17b11f, .byte = 0x29 },
		{ .addr = 0x17b120, .byte = 0xd8 },
		{ .addr = 0x17b121, .byte = 0xf7 },
		{ .addr = 0x17b122, .byte = 0x9f },
		{ .addr = 0x17b123, .byte = 0xab }
};

static const SST_Transaction lsrb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1552674, .data = 40875, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte lsrb_initial_ram_13[] = {
		{ .addr = 0x487096, .byte = 0xec },
		{ .addr = 0x487097, .byte = 0x09 },
		{ .addr = 0x487098, .byte = 0xa2 },
		{ .addr = 0x487099, .byte = 0x5b },
		{ .addr = 0x48709a, .byte = 0xa8 },
		{ .addr = 0x48709b, .byte = 0xac }
};

static const SST_RamByte lsrb_final_ram_13[] = {
		{ .addr = 0x487096, .byte = 0xec },
		{ .addr = 0x487097, .byte = 0x09 },
		{ .addr = 0x487098, .byte = 0xa2 },
		{ .addr = 0x487099, .byte = 0x5b },
		{ .addr = 0x48709a, .byte = 0xa8 },
		{ .addr = 0x48709b, .byte = 0xac }
};

static const SST_Transaction lsrb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4747418, .data = 43180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lsrb_initial_ram_14[] = {
		{ .addr = 0x3bfabe, .byte = 0xe0 },
		{ .addr = 0x3bfabf, .byte = 0x0f },
		{ .addr = 0x3bfac0, .byte = 0x26 },
		{ .addr = 0x3bfac1, .byte = 0x09 },
		{ .addr = 0x3bfac2, .byte = 0x8e },
		{ .addr = 0x3bfac3, .byte = 0xf2 }
};

static const SST_RamByte lsrb_final_ram_14[] = {
		{ .addr = 0x3bfabe, .byte = 0xe0 },
		{ .addr = 0x3bfabf, .byte = 0x0f },
		{ .addr = 0x3bfac0, .byte = 0x26 },
		{ .addr = 0x3bfac1, .byte = 0x09 },
		{ .addr = 0x3bfac2, .byte = 0x8e },
		{ .addr = 0x3bfac3, .byte = 0xf2 }
};

static const SST_Transaction lsrb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3930818, .data = 36594, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_15[] = {
		{ .addr = 0x965d0e, .byte = 0xea },
		{ .addr = 0x965d0f, .byte = 0x2b },
		{ .addr = 0x965d10, .byte = 0x4f },
		{ .addr = 0x965d11, .byte = 0x17 },
		{ .addr = 0x965d12, .byte = 0x54 },
		{ .addr = 0x965d13, .byte = 0xf0 }
};

static const SST_RamByte lsrb_final_ram_15[] = {
		{ .addr = 0x965d0e, .byte = 0xea },
		{ .addr = 0x965d0f, .byte = 0x2b },
		{ .addr = 0x965d10, .byte = 0x4f },
		{ .addr = 0x965d11, .byte = 0x17 },
		{ .addr = 0x965d12, .byte = 0x54 },
		{ .addr = 0x965d13, .byte = 0xf0 }
};

static const SST_Transaction lsrb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9854226, .data = 21744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_16[] = {
		{ .addr = 0x87252c, .byte = 0xe4 },
		{ .addr = 0x87252d, .byte = 0x2d },
		{ .addr = 0x87252e, .byte = 0xe2 },
		{ .addr = 0x87252f, .byte = 0x27 },
		{ .addr = 0x872530, .byte = 0xf6 },
		{ .addr = 0x872531, .byte = 0x9c }
};

static const SST_RamByte lsrb_final_ram_16[] = {
		{ .addr = 0x87252c, .byte = 0xe4 },
		{ .addr = 0x87252d, .byte = 0x2d },
		{ .addr = 0x87252e, .byte = 0xe2 },
		{ .addr = 0x87252f, .byte = 0x27 },
		{ .addr = 0x872530, .byte = 0xf6 },
		{ .addr = 0x872531, .byte = 0x9c }
};

static const SST_Transaction lsrb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8856880, .data = 63132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 64 },
};

static const SST_RamByte lsrb_initial_ram_17[] = {
		{ .addr = 0xe43f3e, .byte = 0xe4 },
		{ .addr = 0xe43f3f, .byte = 0x0f },
		{ .addr = 0xe43f40, .byte = 0x49 },
		{ .addr = 0xe43f41, .byte = 0x18 },
		{ .addr = 0xe43f42, .byte = 0xdf },
		{ .addr = 0xe43f43, .byte = 0x57 }
};

static const SST_RamByte lsrb_final_ram_17[] = {
		{ .addr = 0xe43f3e, .byte = 0xe4 },
		{ .addr = 0xe43f3f, .byte = 0x0f },
		{ .addr = 0xe43f40, .byte = 0x49 },
		{ .addr = 0xe43f41, .byte = 0x18 },
		{ .addr = 0xe43f42, .byte = 0xdf },
		{ .addr = 0xe43f43, .byte = 0x57 }
};

static const SST_Transaction lsrb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14958402, .data = 57175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrb_initial_ram_18[] = {
		{ .addr = 0x66773a, .byte = 0xea },
		{ .addr = 0x66773b, .byte = 0x2a },
		{ .addr = 0x66773c, .byte = 0xf5 },
		{ .addr = 0x66773d, .byte = 0xbd },
		{ .addr = 0x66773e, .byte = 0xba },
		{ .addr = 0x66773f, .byte = 0xe1 }
};

static const SST_RamByte lsrb_final_ram_18[] = {
		{ .addr = 0x66773a, .byte = 0xea },
		{ .addr = 0x66773b, .byte = 0x2a },
		{ .addr = 0x66773c, .byte = 0xf5 },
		{ .addr = 0x66773d, .byte = 0xbd },
		{ .addr = 0x66773e, .byte = 0xba },
		{ .addr = 0x66773f, .byte = 0xe1 }
};

static const SST_Transaction lsrb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6715198, .data = 47841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 32 },
};

static const SST_RamByte lsrb_initial_ram_19[] = {
		{ .addr = 0x9cc442, .byte = 0xe6 },
		{ .addr = 0x9cc443, .byte = 0x29 },
		{ .addr = 0x9cc444, .byte = 0xc0 },
		{ .addr = 0x9cc445, .byte = 0x32 },
		{ .addr = 0x9cc446, .byte = 0xb9 },
		{ .addr = 0x9cc447, .byte = 0x77 }
};

static const SST_RamByte lsrb_final_ram_19[] = {
		{ .addr = 0x9cc442, .byte = 0xe6 },
		{ .addr = 0x9cc443, .byte = 0x29 },
		{ .addr = 0x9cc444, .byte = 0xc0 },
		{ .addr = 0x9cc445, .byte = 0x32 },
		{ .addr = 0x9cc446, .byte = 0xb9 },
		{ .addr = 0x9cc447, .byte = 0x77 }
};

static const SST_Transaction lsrb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10273862, .data = 47479, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 112 },
};

static const SST_RamByte lsrb_initial_ram_20[] = {
		{ .addr = 0xef8d06, .byte = 0xe4 },
		{ .addr = 0xef8d07, .byte = 0x2c },
		{ .addr = 0xef8d08, .byte = 0x9b },
		{ .addr = 0xef8d09, .byte = 0xdc },
		{ .addr = 0xef8d0a, .byte = 0x7f },
		{ .addr = 0xef8d0b, .byte = 0x89 }
};

static const SST_RamByte lsrb_final_ram_20[] = {
		{ .addr = 0xef8d06, .byte = 0xe4 },
		{ .addr = 0xef8d07, .byte = 0x2c },
		{ .addr = 0xef8d08, .byte = 0x9b },
		{ .addr = 0xef8d09, .byte = 0xdc },
		{ .addr = 0xef8d0a, .byte = 0x7f },
		{ .addr = 0xef8d0b, .byte = 0x89 }
};

static const SST_Transaction lsrb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15699210, .data = 32649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 66 },
};

static const SST_RamByte lsrb_initial_ram_21[] = {
		{ .addr = 0xe7926e, .byte = 0xe2 },
		{ .addr = 0xe7926f, .byte = 0x2a },
		{ .addr = 0xe79270, .byte = 0xc4 },
		{ .addr = 0xe79271, .byte = 0xb1 },
		{ .addr = 0xe79272, .byte = 0xf6 },
		{ .addr = 0xe79273, .byte = 0x8d }
};

static const SST_RamByte lsrb_final_ram_21[] = {
		{ .addr = 0xe7926e, .byte = 0xe2 },
		{ .addr = 0xe7926f, .byte = 0x2a },
		{ .addr = 0xe79270, .byte = 0xc4 },
		{ .addr = 0xe79271, .byte = 0xb1 },
		{ .addr = 0xe79272, .byte = 0xf6 },
		{ .addr = 0xe79273, .byte = 0x8d }
};

static const SST_Transaction lsrb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15176306, .data = 63117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsrb_initial_ram_22[] = {
		{ .addr = 0x6d03d4, .byte = 0xe4 },
		{ .addr = 0x6d03d5, .byte = 0x0e },
		{ .addr = 0x6d03d6, .byte = 0xe9 },
		{ .addr = 0x6d03d7, .byte = 0xee },
		{ .addr = 0x6d03d8, .byte = 0xcc },
		{ .addr = 0x6d03d9, .byte = 0x27 }
};

static const SST_RamByte lsrb_final_ram_22[] = {
		{ .addr = 0x6d03d4, .byte = 0xe4 },
		{ .addr = 0x6d03d5, .byte = 0x0e },
		{ .addr = 0x6d03d6, .byte = 0xe9 },
		{ .addr = 0x6d03d7, .byte = 0xee },
		{ .addr = 0x6d03d8, .byte = 0xcc },
		{ .addr = 0x6d03d9, .byte = 0x27 }
};

static const SST_Transaction lsrb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7144408, .data = 52263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrb_initial_ram_23[] = {
		{ .addr = 0x1e2610, .byte = 0xe0 },
		{ .addr = 0x1e2611, .byte = 0x0e },
		{ .addr = 0x1e2612, .byte = 0xbc },
		{ .addr = 0x1e2613, .byte = 0xe1 },
		{ .addr = 0x1e2614, .byte = 0x51 },
		{ .addr = 0x1e2615, .byte = 0xfc }
};

static const SST_RamByte lsrb_final_ram_23[] = {
		{ .addr = 0x1e2610, .byte = 0xe0 },
		{ .addr = 0x1e2611, .byte = 0x0e },
		{ .addr = 0x1e2612, .byte = 0xbc },
		{ .addr = 0x1e2613, .byte = 0xe1 },
		{ .addr = 0x1e2614, .byte = 0x51 },
		{ .addr = 0x1e2615, .byte = 0xfc }
};

static const SST_Transaction lsrb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1975828, .data = 20988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_24[] = {
		{ .addr = 0x9df6e4, .byte = 0xe4 },
		{ .addr = 0x9df6e5, .byte = 0x0e },
		{ .addr = 0x9df6e6, .byte = 0x05 },
		{ .addr = 0x9df6e7, .byte = 0x96 },
		{ .addr = 0x9df6e8, .byte = 0x57 },
		{ .addr = 0x9df6e9, .byte = 0x9a }
};

static const SST_RamByte lsrb_final_ram_24[] = {
		{ .addr = 0x9df6e4, .byte = 0xe4 },
		{ .addr = 0x9df6e5, .byte = 0x0e },
		{ .addr = 0x9df6e6, .byte = 0x05 },
		{ .addr = 0x9df6e7, .byte = 0x96 },
		{ .addr = 0x9df6e8, .byte = 0x57 },
		{ .addr = 0x9df6e9, .byte = 0x9a }
};

static const SST_Transaction lsrb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10352360, .data = 22426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrb_initial_ram_25[] = {
		{ .addr = 0x6a87d2, .byte = 0xec },
		{ .addr = 0x6a87d3, .byte = 0x0b },
		{ .addr = 0x6a87d4, .byte = 0xf7 },
		{ .addr = 0x6a87d5, .byte = 0xba },
		{ .addr = 0x6a87d6, .byte = 0xf3 },
		{ .addr = 0x6a87d7, .byte = 0x03 }
};

static const SST_RamByte lsrb_final_ram_25[] = {
		{ .addr = 0x6a87d2, .byte = 0xec },
		{ .addr = 0x6a87d3, .byte = 0x0b },
		{ .addr = 0x6a87d4, .byte = 0xf7 },
		{ .addr = 0x6a87d5, .byte = 0xba },
		{ .addr = 0x6a87d6, .byte = 0xf3 },
		{ .addr = 0x6a87d7, .byte = 0x03 }
};

static const SST_Transaction lsrb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6981590, .data = 62211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lsrb_initial_ram_26[] = {
		{ .addr = 0x6e6422, .byte = 0xe0 },
		{ .addr = 0x6e6423, .byte = 0x0e },
		{ .addr = 0x6e6424, .byte = 0x34 },
		{ .addr = 0x6e6425, .byte = 0x1e },
		{ .addr = 0x6e6426, .byte = 0x56 },
		{ .addr = 0x6e6427, .byte = 0x16 }
};

static const SST_RamByte lsrb_final_ram_26[] = {
		{ .addr = 0x6e6422, .byte = 0xe0 },
		{ .addr = 0x6e6423, .byte = 0x0e },
		{ .addr = 0x6e6424, .byte = 0x34 },
		{ .addr = 0x6e6425, .byte = 0x1e },
		{ .addr = 0x6e6426, .byte = 0x56 },
		{ .addr = 0x6e6427, .byte = 0x16 }
};

static const SST_Transaction lsrb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7234598, .data = 22038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lsrb_initial_ram_27[] = {
		{ .addr = 0x891168, .byte = 0xec },
		{ .addr = 0x891169, .byte = 0x09 },
		{ .addr = 0x89116a, .byte = 0xb6 },
		{ .addr = 0x89116b, .byte = 0x60 },
		{ .addr = 0x89116c, .byte = 0x5e },
		{ .addr = 0x89116d, .byte = 0x69 }
};

static const SST_RamByte lsrb_final_ram_27[] = {
		{ .addr = 0x891168, .byte = 0xec },
		{ .addr = 0x891169, .byte = 0x09 },
		{ .addr = 0x89116a, .byte = 0xb6 },
		{ .addr = 0x89116b, .byte = 0x60 },
		{ .addr = 0x89116c, .byte = 0x5e },
		{ .addr = 0x89116d, .byte = 0x69 }
};

static const SST_Transaction lsrb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8982892, .data = 24169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lsrb_initial_ram_28[] = {
		{ .addr = 0xeba114, .byte = 0xe8 },
		{ .addr = 0xeba115, .byte = 0x09 },
		{ .addr = 0xeba116, .byte = 0x84 },
		{ .addr = 0xeba117, .byte = 0x89 },
		{ .addr = 0xeba118, .byte = 0x51 },
		{ .addr = 0xeba119, .byte = 0x64 }
};

static const SST_RamByte lsrb_final_ram_28[] = {
		{ .addr = 0xeba114, .byte = 0xe8 },
		{ .addr = 0xeba115, .byte = 0x09 },
		{ .addr = 0xeba116, .byte = 0x84 },
		{ .addr = 0xeba117, .byte = 0x89 },
		{ .addr = 0xeba118, .byte = 0x51 },
		{ .addr = 0xeba119, .byte = 0x64 }
};

static const SST_Transaction lsrb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15442200, .data = 20836, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lsrb_initial_ram_29[] = {
		{ .addr = 0x43cffc, .byte = 0xea },
		{ .addr = 0x43cffd, .byte = 0x2a },
		{ .addr = 0x43cffe, .byte = 0xf0 },
		{ .addr = 0x43cfff, .byte = 0xc2 },
		{ .addr = 0x43d000, .byte = 0xe4 },
		{ .addr = 0x43d001, .byte = 0xb1 }
};

static const SST_RamByte lsrb_final_ram_29[] = {
		{ .addr = 0x43cffc, .byte = 0xea },
		{ .addr = 0x43cffd, .byte = 0x2a },
		{ .addr = 0x43cffe, .byte = 0xf0 },
		{ .addr = 0x43cfff, .byte = 0xc2 },
		{ .addr = 0x43d000, .byte = 0xe4 },
		{ .addr = 0x43d001, .byte = 0xb1 }
};

static const SST_Transaction lsrb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4444160, .data = 58545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte lsrb_initial_ram_30[] = {
		{ .addr = 0x9f2898, .byte = 0xe6 },
		{ .addr = 0x9f2899, .byte = 0x0d },
		{ .addr = 0x9f289a, .byte = 0x3a },
		{ .addr = 0x9f289b, .byte = 0xa0 },
		{ .addr = 0x9f289c, .byte = 0xac },
		{ .addr = 0x9f289d, .byte = 0x9d }
};

static const SST_RamByte lsrb_final_ram_30[] = {
		{ .addr = 0x9f2898, .byte = 0xe6 },
		{ .addr = 0x9f2899, .byte = 0x0d },
		{ .addr = 0x9f289a, .byte = 0x3a },
		{ .addr = 0x9f289b, .byte = 0xa0 },
		{ .addr = 0x9f289c, .byte = 0xac },
		{ .addr = 0x9f289d, .byte = 0x9d }
};

static const SST_Transaction lsrb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10430620, .data = 44189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lsrb_initial_ram_31[] = {
		{ .addr = 0xca4b26, .byte = 0xe8 },
		{ .addr = 0xca4b27, .byte = 0x2f },
		{ .addr = 0xca4b28, .byte = 0xff },
		{ .addr = 0xca4b29, .byte = 0x95 },
		{ .addr = 0xca4b2a, .byte = 0x28 },
		{ .addr = 0xca4b2b, .byte = 0xa3 }
};

static const SST_RamByte lsrb_final_ram_31[] = {
		{ .addr = 0xca4b26, .byte = 0xe8 },
		{ .addr = 0xca4b27, .byte = 0x2f },
		{ .addr = 0xca4b28, .byte = 0xff },
		{ .addr = 0xca4b29, .byte = 0x95 },
		{ .addr = 0xca4b2a, .byte = 0x28 },
		{ .addr = 0xca4b2b, .byte = 0xa3 }
};

static const SST_Transaction lsrb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13257514, .data = 10403, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 64 },
};

static const SST_TestCase lsrb[] = {
	{
		.name = "000 LSR.b 8, D7 e00f",
		.initial = {
			.regs = {
				1215550759, 3916236074, 1883522580, 2038950719, 3543397630, 307680705, 1867975362, 3365224368, 2421187846, 2670051108, 2235160250, 3904210919, 1894245102, 3859098353, 3866968172, 8512312, 15678138, 34060, 11736540
			},
			.prefetch0 = 57359,
			.prefetch1 = 37873,
			.ram = lsrb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1215550759, 3916236074, 1883522580, 2038950719, 3543397630, 307680705, 1867975362, 3365224192, 2421187846, 2670051108, 2235160250, 3904210919, 1894245102, 3859098353, 3866968172, 8512312, 15678138, 34069, 11736542
			},
			.prefetch0 = 37873,
			.prefetch1 = 16514,
			.ram = lsrb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_0,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "001 LSR.b D2, D3 e42b",
		.initial = {
			.regs = {
				3140005155, 2702677830, 2798444807, 3739515223, 469034349, 3869793669, 956031654, 3588036110, 2077759022, 1261157774, 371157751, 1654148456, 2206970458, 3173379874, 1384336885, 4227590, 11558984, 1545, 16610776
			},
			.prefetch0 = 58411,
			.prefetch1 = 558,
			.ram = lsrb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3140005155, 2702677830, 2798444807, 3739515136, 469034349, 3869793669, 956031654, 3588036110, 2077759022, 1261157774, 371157751, 1654148456, 2206970458, 3173379874, 1384336885, 4227590, 11558984, 1557, 16610778
			},
			.prefetch0 = 558,
			.prefetch1 = 54876,
			.ram = lsrb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_1,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "002 LSR.b D6, D5 ec2d",
		.initial = {
			.regs = {
				3887046664, 3623988393, 3176576238, 3906513490, 2394688752, 1001776363, 1872792650, 123139583, 4215430726, 3189081440, 3958641014, 4110294077, 297912993, 3091248316, 503147601, 12804104, 1584006, 41242, 15229560
			},
			.prefetch0 = 60461,
			.prefetch1 = 42269,
			.ram = lsrb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3887046664, 3623988393, 3176576238, 3906513490, 2394688752, 1001776128, 1872792650, 123139583, 4215430726, 3189081440, 3958641014, 4110294077, 297912993, 3091248316, 503147601, 12804104, 1584006, 41220, 15229562
			},
			.prefetch0 = 42269,
			.prefetch1 = 39805,
			.ram = lsrb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_2,
		.transactions_len = 2,
		.lenght = 26,
	},
	{
		.name = "003 LSR.b D3, D2 e62a",
		.initial = {
			.regs = {
				960710389, 411577232, 3657805778, 4262681481, 2573153088, 2979073391, 402492171, 842721227, 1176520510, 744144855, 1058432617, 3833126467, 128361745, 4104014648, 3732204572, 12550636, 3670200, 9757, 6894476
			},
			.prefetch0 = 58922,
			.prefetch1 = 47009,
			.ram = lsrb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				960710389, 411577232, 3657805568, 4262681481, 2573153088, 2979073391, 402492171, 842721227, 1176520510, 744144855, 1058432617, 3833126467, 128361745, 4104014648, 3732204572, 12550636, 3670200, 9732, 6894478
			},
			.prefetch0 = 47009,
			.prefetch1 = 40437,
			.ram = lsrb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_3,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "004 LSR.b D5, D2 ea2a",
		.initial = {
			.regs = {
				3888602496, 615603630, 2067449765, 565005342, 2253063090, 2481158453, 1439884413, 1511606361, 3902553745, 2297833527, 3794008443, 3905262264, 62619993, 363215082, 3855060376, 13371232, 1120742, 263, 10438280
			},
			.prefetch0 = 59946,
			.prefetch1 = 17525,
			.ram = lsrb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3888602496, 615603630, 2067449600, 565005342, 2253063090, 2481158453, 1439884413, 1511606361, 3902553745, 2297833527, 3794008443, 3905262264, 62619993, 363215082, 3855060376, 13371232, 1120742, 260, 10438282
			},
			.prefetch0 = 17525,
			.prefetch1 = 10824,
			.ram = lsrb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_4,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "005 LSR.b D6, D0 ec28",
		.initial = {
			.regs = {
				2645504725, 3173185759, 2384682952, 771312359, 1656305404, 1315934130, 4223432023, 1752543046, 3201478859, 3728406831, 1311845330, 4232111793, 3168162411, 1084091221, 883013632, 8480852, 11019676, 42241, 8447686
			},
			.prefetch0 = 60456,
			.prefetch1 = 19444,
			.ram = lsrb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2645504512, 3173185759, 2384682952, 771312359, 1656305404, 1315934130, 4223432023, 1752543046, 3201478859, 3728406831, 1311845330, 4232111793, 3168162411, 1084091221, 883013632, 8480852, 11019676, 42244, 8447688
			},
			.prefetch0 = 19444,
			.prefetch1 = 52626,
			.ram = lsrb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_5,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "006 LSR.b 8, D3 e00b",
		.initial = {
			.regs = {
				3654226917, 2009102943, 1213844621, 67816672, 1264392285, 4227643018, 1497369524, 2646366468, 3700200051, 926407061, 938658601, 4007471738, 4009113994, 2901487638, 761185366, 12496040, 13028210, 34576, 8163214
			},
			.prefetch0 = 57355,
			.prefetch1 = 22670,
			.ram = lsrb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3654226917, 2009102943, 1213844621, 67816448, 1264392285, 4227643018, 1497369524, 2646366468, 3700200051, 926407061, 938658601, 4007471738, 4009113994, 2901487638, 761185366, 12496040, 13028210, 34581, 8163216
			},
			.prefetch0 = 22670,
			.prefetch1 = 35946,
			.ram = lsrb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_6,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "007 LSR.b 3, D5 e60d",
		.initial = {
			.regs = {
				28878312, 1836704171, 2939528425, 2969926410, 1110415378, 3408932168, 2515225349, 405316666, 1912799905, 3651937917, 2179729685, 674584758, 245943421, 1131529893, 3521971919, 14317734, 5980948, 8463, 16303420
			},
			.prefetch0 = 58893,
			.prefetch1 = 25648,
			.ram = lsrb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				28878312, 1836704171, 2939528425, 2969926410, 1110415378, 3408932105, 2515225349, 405316666, 1912799905, 3651937917, 2179729685, 674584758, 245943421, 1131529893, 3521971919, 14317734, 5980948, 8448, 16303422
			},
			.prefetch0 = 25648,
			.prefetch1 = 61720,
			.ram = lsrb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_7,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "008 LSR.b 8, D2 e00a",
		.initial = {
			.regs = {
				569708060, 1776602481, 2011131468, 497247986, 2358477572, 3960093203, 2154911320, 694574155, 1149628565, 4282246233, 3454808389, 2173599310, 3415277276, 3402054473, 657154018, 10672248, 6158100, 9755, 534912
			},
			.prefetch0 = 57354,
			.prefetch1 = 29514,
			.ram = lsrb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				569708060, 1776602481, 2011131392, 497247986, 2358477572, 3960093203, 2154911320, 694574155, 1149628565, 4282246233, 3454808389, 2173599310, 3415277276, 3402054473, 657154018, 10672248, 6158100, 9732, 534914
			},
			.prefetch0 = 29514,
			.prefetch1 = 23798,
			.ram = lsrb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_8,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "009 LSR.b D1, D0 e228",
		.initial = {
			.regs = {
				902192430, 2176135665, 3887283712, 2128312623, 3782286069, 2728271910, 122701621, 2743677341, 1111747372, 3054100738, 3299776357, 2103513205, 3651361347, 1744320181, 2700494093, 12552542, 12248850, 1552, 9850012
			},
			.prefetch0 = 57896,
			.prefetch1 = 24946,
			.ram = lsrb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				902192384, 2176135665, 3887283712, 2128312623, 3782286069, 2728271910, 122701621, 2743677341, 1111747372, 3054100738, 3299776357, 2103513205, 3651361347, 1744320181, 2700494093, 12552542, 12248850, 1540, 9850014
			},
			.prefetch0 = 24946,
			.prefetch1 = 58020,
			.ram = lsrb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_9,
		.transactions_len = 2,
		.lenght = 104,
	},
	{
		.name = "010 LSR.b D0, D5 e02d",
		.initial = {
			.regs = {
				3457026163, 3726534690, 891119980, 3527858318, 2583732444, 2459067318, 684516759, 1012319703, 440877284, 3474913391, 145508386, 910042696, 2879709109, 664449526, 474415914, 703882, 3707022, 40971, 2126642
			},
			.prefetch0 = 57389,
			.prefetch1 = 56986,
			.ram = lsrb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3457026163, 3726534690, 891119980, 3527858318, 2583732444, 2459067136, 684516759, 1012319703, 440877284, 3474913391, 145508386, 910042696, 2879709109, 664449526, 474415914, 703882, 3707022, 40964, 2126644
			},
			.prefetch0 = 56986,
			.prefetch1 = 8624,
			.ram = lsrb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_10,
		.transactions_len = 2,
		.lenght = 108,
	},
	{
		.name = "011 LSR.b 8, D1 e009",
		.initial = {
			.regs = {
				681920661, 2705261789, 2031073220, 1903860810, 1406786443, 929993626, 3794290340, 4140111953, 3773064092, 35023003, 1067023730, 1624948399, 3827137996, 2993567779, 1641074076, 11382026, 7459908, 32772, 4634684
			},
			.prefetch0 = 57353,
			.prefetch1 = 49872,
			.ram = lsrb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				681920661, 2705261568, 2031073220, 1903860810, 1406786443, 929993626, 3794290340, 4140111953, 3773064092, 35023003, 1067023730, 1624948399, 3827137996, 2993567779, 1641074076, 11382026, 7459908, 32789, 4634686
			},
			.prefetch0 = 49872,
			.prefetch1 = 30272,
			.ram = lsrb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_11,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "012 LSR.b D5, D1 ea29",
		.initial = {
			.regs = {
				606846842, 2021051884, 3041256308, 3589078086, 2818340121, 4006179312, 4017518165, 3538503749, 1728474926, 2880420804, 703478373, 3464041580, 400235313, 1370390540, 474817681, 13594542, 3584922, 41492, 1552674
			},
			.prefetch0 = 59945,
			.prefetch1 = 55543,
			.ram = lsrb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				606846842, 2021051648, 3041256308, 3589078086, 2818340121, 4006179312, 4017518165, 3538503749, 1728474926, 2880420804, 703478373, 3464041580, 400235313, 1370390540, 474817681, 13594542, 3584922, 41476, 1552676
			},
			.prefetch0 = 55543,
			.prefetch1 = 40875,
			.ram = lsrb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_12,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "013 LSR.b 6, D1 ec09",
		.initial = {
			.regs = {
				3878969770, 3843345067, 3917843164, 3293907109, 2365469052, 3465844746, 699949663, 3341046105, 4151299447, 2903856015, 3928184064, 1331997960, 447264667, 4173214989, 4178699200, 11678092, 13754340, 1296, 4747418
			},
			.prefetch0 = 60425,
			.prefetch1 = 41563,
			.ram = lsrb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3878969770, 3843344898, 3917843164, 3293907109, 2365469052, 3465844746, 699949663, 3341046105, 4151299447, 2903856015, 3928184064, 1331997960, 447264667, 4173214989, 4178699200, 11678092, 13754340, 1297, 4747420
			},
			.prefetch0 = 41563,
			.prefetch1 = 43180,
			.ram = lsrb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_13,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "014 LSR.b 8, D7 e00f",
		.initial = {
			.regs = {
				4223590616, 3595704782, 164341958, 377184794, 4011990518, 2237565765, 2510646647, 2642966612, 1713974648, 1500429536, 3718967843, 2007093304, 2691338540, 424591068, 3087903978, 10538174, 10333236, 518, 3930818
			},
			.prefetch0 = 57359,
			.prefetch1 = 9737,
			.ram = lsrb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4223590616, 3595704782, 164341958, 377184794, 4011990518, 2237565765, 2510646647, 2642966528, 1713974648, 1500429536, 3718967843, 2007093304, 2691338540, 424591068, 3087903978, 10538174, 10333236, 516, 3930820
			},
			.prefetch0 = 9737,
			.prefetch1 = 36594,
			.ram = lsrb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_14,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "015 LSR.b D5, D3 ea2b",
		.initial = {
			.regs = {
				1078109737, 3271964317, 2064824364, 3322328617, 400182501, 136581320, 468417494, 1540613940, 3896670801, 2323353307, 864378210, 3130820514, 55517035, 4132470625, 3407671780, 16133658, 6171622, 9738, 9854226
			},
			.prefetch0 = 59947,
			.prefetch1 = 20247,
			.ram = lsrb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1078109737, 3271964317, 2064824364, 3322328576, 400182501, 136581320, 468417494, 1540613940, 3896670801, 2323353307, 864378210, 3130820514, 55517035, 4132470625, 3407671780, 16133658, 6171622, 9732, 9854228
			},
			.prefetch0 = 20247,
			.prefetch1 = 21744,
			.ram = lsrb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_15,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "016 LSR.b D2, D5 e42d",
		.initial = {
			.regs = {
				3670652463, 106557529, 41549151, 97354636, 3882480734, 815372659, 3124101735, 2841478554, 793860371, 2393789500, 718696163, 184124883, 900903896, 2076655921, 3518186616, 3565362, 10106942, 34049, 8856880
			},
			.prefetch0 = 58413,
			.prefetch1 = 57895,
			.ram = lsrb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3670652463, 106557529, 41549151, 97354636, 3882480734, 815372544, 3124101735, 2841478554, 793860371, 2393789500, 718696163, 184124883, 900903896, 2076655921, 3518186616, 3565362, 10106942, 34052, 8856882
			},
			.prefetch0 = 57895,
			.prefetch1 = 63132,
			.ram = lsrb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_16,
		.transactions_len = 2,
		.lenght = 68,
	},
	{
		.name = "017 LSR.b 2, D7 e40f",
		.initial = {
			.regs = {
				1238530238, 3344761630, 1780955597, 3249105309, 102872283, 3075629933, 530865733, 1488034674, 3208745792, 1759356756, 3386800839, 637704129, 789530780, 512084908, 1200816425, 12374060, 7154500, 34070, 14958402
			},
			.prefetch0 = 58383,
			.prefetch1 = 18712,
			.ram = lsrb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1238530238, 3344761630, 1780955597, 3249105309, 102872283, 3075629933, 530865733, 1488034588, 3208745792, 1759356756, 3386800839, 637704129, 789530780, 512084908, 1200816425, 12374060, 7154500, 34065, 14958404
			},
			.prefetch0 = 18712,
			.prefetch1 = 57175,
			.ram = lsrb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_17,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "018 LSR.b D5, D2 ea2a",
		.initial = {
			.regs = {
				2138039815, 762632701, 2289435697, 151257685, 1535379988, 1805453135, 3022749038, 3260411756, 4274136227, 291746538, 669682532, 2819545493, 1856799600, 2952082230, 2805121849, 11068012, 15824130, 34063, 6715198
			},
			.prefetch0 = 59946,
			.prefetch1 = 62909,
			.ram = lsrb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2138039815, 762632701, 2289435648, 151257685, 1535379988, 1805453135, 3022749038, 3260411756, 4274136227, 291746538, 669682532, 2819545493, 1856799600, 2952082230, 2805121849, 11068012, 15824130, 34052, 6715200
			},
			.prefetch0 = 62909,
			.prefetch1 = 47841,
			.ram = lsrb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_18,
		.transactions_len = 2,
		.lenght = 36,
	},
	{
		.name = "019 LSR.b D3, D1 e629",
		.initial = {
			.regs = {
				1960057304, 778918176, 3183275645, 4213320183, 53250363, 48918584, 759901435, 2844737156, 3805235603, 148217353, 628416606, 973713799, 2388901297, 3792639593, 4268205902, 13008316, 5331012, 34570, 10273862
			},
			.prefetch0 = 58921,
			.prefetch1 = 49202,
			.ram = lsrb_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1960057304, 778918144, 3183275645, 4213320183, 53250363, 48918584, 759901435, 2844737156, 3805235603, 148217353, 628416606, 973713799, 2388901297, 3792639593, 4268205902, 13008316, 5331012, 34564, 10273864
			},
			.prefetch0 = 49202,
			.prefetch1 = 47479,
			.ram = lsrb_final_ram_19,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_19,
		.transactions_len = 2,
		.lenght = 116,
	},
	{
		.name = "020 LSR.b D2, D4 e42c",
		.initial = {
			.regs = {
				1450215247, 2544564887, 597433824, 3207232957, 3193796272, 1649139688, 2340059932, 2573502851, 2544099529, 3745100348, 2697030124, 1069260330, 322011553, 2591352219, 2147398118, 31750, 521926, 41228, 15699210
			},
			.prefetch0 = 58412,
			.prefetch1 = 39900,
			.ram = lsrb_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1450215247, 2544564887, 597433824, 3207232957, 3193796096, 1649139688, 2340059932, 2573502851, 2544099529, 3745100348, 2697030124, 1069260330, 322011553, 2591352219, 2147398118, 31750, 521926, 41220, 15699212
			},
			.prefetch0 = 39900,
			.prefetch1 = 32649,
			.ram = lsrb_final_ram_20,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_20,
		.transactions_len = 2,
		.lenght = 70,
	},
	{
		.name = "021 LSR.b D1, D2 e22a",
		.initial = {
			.regs = {
				951311065, 1602159941, 3063642730, 3792042364, 1347698736, 1920121648, 994634182, 3947578419, 1465750617, 526668778, 1704140845, 1008081259, 3023003406, 47257371, 1895866909, 8863322, 15695422, 8988, 15176306
			},
			.prefetch0 = 57898,
			.prefetch1 = 50353,
			.ram = lsrb_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				951311065, 1602159941, 3063642627, 3792042364, 1347698736, 1920121648, 994634182, 3947578419, 1465750617, 526668778, 1704140845, 1008081259, 3023003406, 47257371, 1895866909, 8863322, 15695422, 8960, 15176308
			},
			.prefetch0 = 50353,
			.prefetch1 = 63117,
			.ram = lsrb_final_ram_21,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_21,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "022 LSR.b 2, D6 e40e",
		.initial = {
			.regs = {
				2200137355, 3936379212, 2232221671, 3057794538, 2302039920, 1004778449, 1757581555, 1494096430, 3892256490, 1753444675, 856948809, 250238096, 3525749664, 2288943735, 1637608906, 15248894, 68526, 42755, 7144408
			},
			.prefetch0 = 58382,
			.prefetch1 = 59886,
			.ram = lsrb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2200137355, 3936379212, 2232221671, 3057794538, 2302039920, 1004778449, 1757581372, 1494096430, 3892256490, 1753444675, 856948809, 250238096, 3525749664, 2288943735, 1637608906, 15248894, 68526, 42769, 7144410
			},
			.prefetch0 = 59886,
			.prefetch1 = 52263,
			.ram = lsrb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_22,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "023 LSR.b 8, D6 e00e",
		.initial = {
			.regs = {
				4038189114, 2439762391, 2720634391, 1579118752, 2005332887, 1268729813, 108127093, 104198321, 747565360, 45714209, 507398297, 289249222, 1435850350, 3345292742, 956152373, 7755532, 5864658, 515, 1975828
			},
			.prefetch0 = 57358,
			.prefetch1 = 48353,
			.ram = lsrb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4038189114, 2439762391, 2720634391, 1579118752, 2005332887, 1268729813, 108126976, 104198321, 747565360, 45714209, 507398297, 289249222, 1435850350, 3345292742, 956152373, 7755532, 5864658, 516, 1975830
			},
			.prefetch0 = 48353,
			.prefetch1 = 20988,
			.ram = lsrb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_23,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "024 LSR.b 2, D6 e40e",
		.initial = {
			.regs = {
				3950557007, 3798968377, 1621033873, 1959858876, 1136764061, 2065137377, 3094112791, 3269897320, 1813590529, 2006455172, 1361573059, 3986031669, 58120057, 2912355549, 3034595514, 15879938, 6690702, 41498, 10352360
			},
			.prefetch0 = 58382,
			.prefetch1 = 1430,
			.ram = lsrb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3950557007, 3798968377, 1621033873, 1959858876, 1136764061, 2065137377, 3094112773, 3269897320, 1813590529, 2006455172, 1361573059, 3986031669, 58120057, 2912355549, 3034595514, 15879938, 6690702, 41489, 10352362
			},
			.prefetch0 = 1430,
			.prefetch1 = 22426,
			.ram = lsrb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_24,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "025 LSR.b 6, D3 ec0b",
		.initial = {
			.regs = {
				1612382509, 3636772805, 2975148329, 2518252170, 3543473531, 3010871327, 2106416762, 1545041890, 2139389494, 3041235630, 1434412729, 2805448961, 3217492856, 3719029304, 457177532, 12805394, 13500532, 9989, 6981590
			},
			.prefetch0 = 60427,
			.prefetch1 = 63418,
			.ram = lsrb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1612382509, 3636772805, 2975148329, 2518252034, 3543473531, 3010871327, 2106416762, 1545041890, 2139389494, 3041235630, 1434412729, 2805448961, 3217492856, 3719029304, 457177532, 12805394, 13500532, 9984, 6981592
			},
			.prefetch0 = 63418,
			.prefetch1 = 62211,
			.ram = lsrb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_25,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "026 LSR.b 8, D6 e00e",
		.initial = {
			.regs = {
				2744166546, 3467245699, 3438484266, 4084129059, 3313147221, 3759769567, 205114827, 1355727845, 2612512037, 2240625434, 1053631377, 673184402, 1717654467, 1397510325, 2703146602, 319972, 2025568, 33546, 7234598
			},
			.prefetch0 = 57358,
			.prefetch1 = 13342,
			.ram = lsrb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2744166546, 3467245699, 3438484266, 4084129059, 3313147221, 3759769567, 205114624, 1355727845, 2612512037, 2240625434, 1053631377, 673184402, 1717654467, 1397510325, 2703146602, 319972, 2025568, 33557, 7234600
			},
			.prefetch0 = 13342,
			.prefetch1 = 22038,
			.ram = lsrb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_26,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "027 LSR.b 6, D1 ec09",
		.initial = {
			.regs = {
				509265611, 2487964339, 2027513190, 1531669765, 4091624591, 154778945, 3696292910, 1017063091, 4104942767, 1187334479, 1945638528, 2694490349, 1362461860, 3834371750, 3957393427, 7704466, 16731744, 521, 8982892
			},
			.prefetch0 = 60425,
			.prefetch1 = 46688,
			.ram = lsrb_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				509265611, 2487964162, 2027513190, 1531669765, 4091624591, 154778945, 3696292910, 1017063091, 4104942767, 1187334479, 1945638528, 2694490349, 1362461860, 3834371750, 3957393427, 7704466, 16731744, 529, 8982894
			},
			.prefetch0 = 46688,
			.prefetch1 = 24169,
			.ram = lsrb_final_ram_27,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_27,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "028 LSR.b 4, D1 e809",
		.initial = {
			.regs = {
				2209432092, 834618702, 2297396114, 3612392025, 2305956551, 231389274, 4133171282, 1600692702, 668332705, 2530925234, 1211190902, 2338854224, 4093665564, 3369179165, 67289926, 9923978, 4559010, 40974, 15442200
			},
			.prefetch0 = 59401,
			.prefetch1 = 33929,
			.ram = lsrb_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2209432092, 834618628, 2297396114, 3612392025, 2305956551, 231389274, 4133171282, 1600692702, 668332705, 2530925234, 1211190902, 2338854224, 4093665564, 3369179165, 67289926, 9923978, 4559010, 40977, 15442202
			},
			.prefetch0 = 33929,
			.prefetch1 = 20836,
			.ram = lsrb_final_ram_28,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_28,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "029 LSR.b D5, D2 ea2a",
		.initial = {
			.regs = {
				923234326, 1831792425, 2966320971, 2238212549, 2945091174, 994380289, 2449066318, 1826104543, 1918454930, 424513788, 321861621, 1255266673, 90425708, 2640459485, 1660182894, 10781526, 2310090, 1029, 4444160
			},
			.prefetch0 = 59946,
			.prefetch1 = 61634,
			.ram = lsrb_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				923234326, 1831792425, 2966320933, 2238212549, 2945091174, 994380289, 2449066318, 1826104543, 1918454930, 424513788, 321861621, 1255266673, 90425708, 2640459485, 1660182894, 10781526, 2310090, 1041, 4444162
			},
			.prefetch0 = 61634,
			.prefetch1 = 58545,
			.ram = lsrb_final_ram_29,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_29,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "030 LSR.b 3, D5 e60d",
		.initial = {
			.regs = {
				1361570278, 3319082751, 2486785228, 2786096932, 4118190250, 3959276820, 509680975, 1050553158, 3893453674, 1893884954, 2372584794, 3553186687, 3144579541, 3880176381, 1049975695, 5658462, 5246860, 7, 10430620
			},
			.prefetch0 = 58893,
			.prefetch1 = 15008,
			.ram = lsrb_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1361570278, 3319082751, 2486785228, 2786096932, 4118190250, 3959276802, 509680975, 1050553158, 3893453674, 1893884954, 2372584794, 3553186687, 3144579541, 3880176381, 1049975695, 5658462, 5246860, 17, 10430622
			},
			.prefetch0 = 15008,
			.prefetch1 = 44189,
			.ram = lsrb_final_ram_30,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_30,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "031 LSR.b D4, D7 e82f",
		.initial = {
			.regs = {
				1277251554, 2945875281, 1727429568, 3468715031, 340411359, 3197934948, 609461594, 2439205100, 1307605076, 297189030, 1276167082, 2192151546, 764804658, 2343742705, 2668660091, 8975026, 15631140, 33036, 13257514
			},
			.prefetch0 = 59439,
			.prefetch1 = 65429,
			.ram = lsrb_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1277251554, 2945875281, 1727429568, 3468715031, 340411359, 3197934948, 609461594, 2439204864, 1307605076, 297189030, 1276167082, 2192151546, 764804658, 2343742705, 2668660091, 8975026, 15631140, 33028, 13257516
			},
			.prefetch0 = 65429,
			.prefetch1 = 10403,
			.ram = lsrb_final_ram_31,
			.ram_len = 6,
		},
		.transactions = lsrb_transactions_31,
		.transactions_len = 2,
		.lenght = 68,
	},
};

#endif /* RBT_LSRB_H */