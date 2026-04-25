#ifndef RBT_LEA_H
#define RBT_LEA_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte lea_initial_ram_0[] = {
		{ .addr = 0x10a2ea, .byte = 0x41 },
		{ .addr = 0x10a2eb, .byte = 0xf2 },
		{ .addr = 0x10a2ec, .byte = 0xa0 },
		{ .addr = 0x10a2ed, .byte = 0xa8 },
		{ .addr = 0x10a2ee, .byte = 0x12 },
		{ .addr = 0x10a2ef, .byte = 0x34 },
		{ .addr = 0x10a2f0, .byte = 0xf6 },
		{ .addr = 0x10a2f1, .byte = 0x37 }
};

static const SST_RamByte lea_final_ram_0[] = {
		{ .addr = 0x10a2ea, .byte = 0x41 },
		{ .addr = 0x10a2eb, .byte = 0xf2 },
		{ .addr = 0x10a2ec, .byte = 0xa0 },
		{ .addr = 0x10a2ed, .byte = 0xa8 },
		{ .addr = 0x10a2ee, .byte = 0x12 },
		{ .addr = 0x10a2ef, .byte = 0x34 },
		{ .addr = 0x10a2f0, .byte = 0xf6 },
		{ .addr = 0x10a2f1, .byte = 0x37 }
};

static const SST_Transaction lea_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1090286, .data = 4660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1090288, .data = 63031, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_1[] = {
		{ .addr = 0x8d277c, .byte = 0x43 },
		{ .addr = 0x8d277d, .byte = 0xee },
		{ .addr = 0x8d277e, .byte = 0x58 },
		{ .addr = 0x8d277f, .byte = 0xa4 },
		{ .addr = 0x8d2780, .byte = 0x2b },
		{ .addr = 0x8d2781, .byte = 0x2d },
		{ .addr = 0x8d2782, .byte = 0xee },
		{ .addr = 0x8d2783, .byte = 0xab }
};

static const SST_RamByte lea_final_ram_1[] = {
		{ .addr = 0x8d277c, .byte = 0x43 },
		{ .addr = 0x8d277d, .byte = 0xee },
		{ .addr = 0x8d277e, .byte = 0x58 },
		{ .addr = 0x8d277f, .byte = 0xa4 },
		{ .addr = 0x8d2780, .byte = 0x2b },
		{ .addr = 0x8d2781, .byte = 0x2d },
		{ .addr = 0x8d2782, .byte = 0xee },
		{ .addr = 0x8d2783, .byte = 0xab }
};

static const SST_Transaction lea_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9250688, .data = 11053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9250690, .data = 61099, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_2[] = {
		{ .addr = 0xc88d86, .byte = 0x4d },
		{ .addr = 0xc88d87, .byte = 0xd0 },
		{ .addr = 0xc88d88, .byte = 0xf9 },
		{ .addr = 0xc88d89, .byte = 0x3c },
		{ .addr = 0xc88d8a, .byte = 0x11 },
		{ .addr = 0xc88d8b, .byte = 0x27 }
};

static const SST_RamByte lea_final_ram_2[] = {
		{ .addr = 0xc88d86, .byte = 0x4d },
		{ .addr = 0xc88d87, .byte = 0xd0 },
		{ .addr = 0xc88d88, .byte = 0xf9 },
		{ .addr = 0xc88d89, .byte = 0x3c },
		{ .addr = 0xc88d8a, .byte = 0x11 },
		{ .addr = 0xc88d8b, .byte = 0x27 }
};

static const SST_Transaction lea_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13143434, .data = 4391, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_3[] = {
		{ .addr = 0x4ea532, .byte = 0x41 },
		{ .addr = 0x4ea533, .byte = 0xf8 },
		{ .addr = 0x4ea534, .byte = 0xe4 },
		{ .addr = 0x4ea535, .byte = 0xe5 },
		{ .addr = 0x4ea536, .byte = 0xc5 },
		{ .addr = 0x4ea537, .byte = 0x96 },
		{ .addr = 0x4ea538, .byte = 0xd4 },
		{ .addr = 0x4ea539, .byte = 0xd6 }
};

static const SST_RamByte lea_final_ram_3[] = {
		{ .addr = 0x4ea532, .byte = 0x41 },
		{ .addr = 0x4ea533, .byte = 0xf8 },
		{ .addr = 0x4ea534, .byte = 0xe4 },
		{ .addr = 0x4ea535, .byte = 0xe5 },
		{ .addr = 0x4ea536, .byte = 0xc5 },
		{ .addr = 0x4ea537, .byte = 0x96 },
		{ .addr = 0x4ea538, .byte = 0xd4 },
		{ .addr = 0x4ea539, .byte = 0xd6 }
};

static const SST_Transaction lea_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5154102, .data = 50582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5154104, .data = 54486, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_4[] = {
		{ .addr = 0x9abcc0, .byte = 0x45 },
		{ .addr = 0x9abcc1, .byte = 0xf0 },
		{ .addr = 0x9abcc2, .byte = 0xe6 },
		{ .addr = 0x9abcc3, .byte = 0x21 },
		{ .addr = 0x9abcc4, .byte = 0x4f },
		{ .addr = 0x9abcc5, .byte = 0x82 },
		{ .addr = 0x9abcc6, .byte = 0x41 },
		{ .addr = 0x9abcc7, .byte = 0x45 }
};

static const SST_RamByte lea_final_ram_4[] = {
		{ .addr = 0x9abcc0, .byte = 0x45 },
		{ .addr = 0x9abcc1, .byte = 0xf0 },
		{ .addr = 0x9abcc2, .byte = 0xe6 },
		{ .addr = 0x9abcc3, .byte = 0x21 },
		{ .addr = 0x9abcc4, .byte = 0x4f },
		{ .addr = 0x9abcc5, .byte = 0x82 },
		{ .addr = 0x9abcc6, .byte = 0x41 },
		{ .addr = 0x9abcc7, .byte = 0x45 }
};

static const SST_Transaction lea_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10140868, .data = 20354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10140870, .data = 16709, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_5[] = {
		{ .addr = 0xae8d18, .byte = 0x47 },
		{ .addr = 0xae8d19, .byte = 0xfb },
		{ .addr = 0xae8d1a, .byte = 0x27 },
		{ .addr = 0xae8d1b, .byte = 0x66 },
		{ .addr = 0xae8d1c, .byte = 0x65 },
		{ .addr = 0xae8d1d, .byte = 0x5a },
		{ .addr = 0xae8d1e, .byte = 0xcc },
		{ .addr = 0xae8d1f, .byte = 0x40 }
};

static const SST_RamByte lea_final_ram_5[] = {
		{ .addr = 0xae8d18, .byte = 0x47 },
		{ .addr = 0xae8d19, .byte = 0xfb },
		{ .addr = 0xae8d1a, .byte = 0x27 },
		{ .addr = 0xae8d1b, .byte = 0x66 },
		{ .addr = 0xae8d1c, .byte = 0x65 },
		{ .addr = 0xae8d1d, .byte = 0x5a },
		{ .addr = 0xae8d1e, .byte = 0xcc },
		{ .addr = 0xae8d1f, .byte = 0x40 }
};

static const SST_Transaction lea_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11439388, .data = 25946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11439390, .data = 52288, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_6[] = {
		{ .addr = 0xb6147c, .byte = 0x41 },
		{ .addr = 0xb6147d, .byte = 0xea },
		{ .addr = 0xb6147e, .byte = 0xc1 },
		{ .addr = 0xb6147f, .byte = 0xca },
		{ .addr = 0xb61480, .byte = 0x52 },
		{ .addr = 0xb61481, .byte = 0x96 },
		{ .addr = 0xb61482, .byte = 0x6d },
		{ .addr = 0xb61483, .byte = 0xc3 }
};

static const SST_RamByte lea_final_ram_6[] = {
		{ .addr = 0xb6147c, .byte = 0x41 },
		{ .addr = 0xb6147d, .byte = 0xea },
		{ .addr = 0xb6147e, .byte = 0xc1 },
		{ .addr = 0xb6147f, .byte = 0xca },
		{ .addr = 0xb61480, .byte = 0x52 },
		{ .addr = 0xb61481, .byte = 0x96 },
		{ .addr = 0xb61482, .byte = 0x6d },
		{ .addr = 0xb61483, .byte = 0xc3 }
};

static const SST_Transaction lea_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11932800, .data = 21142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11932802, .data = 28099, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_7[] = {
		{ .addr = 0x07782e, .byte = 0x47 },
		{ .addr = 0x07782f, .byte = 0xf8 },
		{ .addr = 0x077830, .byte = 0x2a },
		{ .addr = 0x077831, .byte = 0x64 },
		{ .addr = 0x077832, .byte = 0xfe },
		{ .addr = 0x077833, .byte = 0x0c },
		{ .addr = 0x077834, .byte = 0x82 },
		{ .addr = 0x077835, .byte = 0xd7 }
};

static const SST_RamByte lea_final_ram_7[] = {
		{ .addr = 0x07782e, .byte = 0x47 },
		{ .addr = 0x07782f, .byte = 0xf8 },
		{ .addr = 0x077830, .byte = 0x2a },
		{ .addr = 0x077831, .byte = 0x64 },
		{ .addr = 0x077832, .byte = 0xfe },
		{ .addr = 0x077833, .byte = 0x0c },
		{ .addr = 0x077834, .byte = 0x82 },
		{ .addr = 0x077835, .byte = 0xd7 }
};

static const SST_Transaction lea_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 489522, .data = 65036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 489524, .data = 33495, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_8[] = {
		{ .addr = 0x9b5f36, .byte = 0x43 },
		{ .addr = 0x9b5f37, .byte = 0xfa },
		{ .addr = 0x9b5f38, .byte = 0x9b },
		{ .addr = 0x9b5f39, .byte = 0xb4 },
		{ .addr = 0x9b5f3a, .byte = 0x01 },
		{ .addr = 0x9b5f3b, .byte = 0x1c },
		{ .addr = 0x9b5f3c, .byte = 0xa3 },
		{ .addr = 0x9b5f3d, .byte = 0x32 }
};

static const SST_RamByte lea_final_ram_8[] = {
		{ .addr = 0x9b5f36, .byte = 0x43 },
		{ .addr = 0x9b5f37, .byte = 0xfa },
		{ .addr = 0x9b5f38, .byte = 0x9b },
		{ .addr = 0x9b5f39, .byte = 0xb4 },
		{ .addr = 0x9b5f3a, .byte = 0x01 },
		{ .addr = 0x9b5f3b, .byte = 0x1c },
		{ .addr = 0x9b5f3c, .byte = 0xa3 },
		{ .addr = 0x9b5f3d, .byte = 0x32 }
};

static const SST_Transaction lea_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10182458, .data = 284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10182460, .data = 41778, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_9[] = {
		{ .addr = 0x83b3ca, .byte = 0x49 },
		{ .addr = 0x83b3cb, .byte = 0xd7 },
		{ .addr = 0x83b3cc, .byte = 0x3f },
		{ .addr = 0x83b3cd, .byte = 0xd7 },
		{ .addr = 0x83b3ce, .byte = 0x77 },
		{ .addr = 0x83b3cf, .byte = 0x65 }
};

static const SST_RamByte lea_final_ram_9[] = {
		{ .addr = 0x83b3ca, .byte = 0x49 },
		{ .addr = 0x83b3cb, .byte = 0xd7 },
		{ .addr = 0x83b3cc, .byte = 0x3f },
		{ .addr = 0x83b3cd, .byte = 0xd7 },
		{ .addr = 0x83b3ce, .byte = 0x77 },
		{ .addr = 0x83b3cf, .byte = 0x65 }
};

static const SST_Transaction lea_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8631246, .data = 30565, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_10[] = {
		{ .addr = 0xeb30f8, .byte = 0x49 },
		{ .addr = 0xeb30f9, .byte = 0xf7 },
		{ .addr = 0xeb30fa, .byte = 0x71 },
		{ .addr = 0xeb30fb, .byte = 0xa1 },
		{ .addr = 0xeb30fc, .byte = 0x32 },
		{ .addr = 0xeb30fd, .byte = 0xd6 },
		{ .addr = 0xeb30fe, .byte = 0x5b },
		{ .addr = 0xeb30ff, .byte = 0xc5 }
};

static const SST_RamByte lea_final_ram_10[] = {
		{ .addr = 0xeb30f8, .byte = 0x49 },
		{ .addr = 0xeb30f9, .byte = 0xf7 },
		{ .addr = 0xeb30fa, .byte = 0x71 },
		{ .addr = 0xeb30fb, .byte = 0xa1 },
		{ .addr = 0xeb30fc, .byte = 0x32 },
		{ .addr = 0xeb30fd, .byte = 0xd6 },
		{ .addr = 0xeb30fe, .byte = 0x5b },
		{ .addr = 0xeb30ff, .byte = 0xc5 }
};

static const SST_Transaction lea_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15413500, .data = 13014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15413502, .data = 23493, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_11[] = {
		{ .addr = 0x224558, .byte = 0x4f },
		{ .addr = 0x224559, .byte = 0xf7 },
		{ .addr = 0x22455a, .byte = 0x3a },
		{ .addr = 0x22455b, .byte = 0x0b },
		{ .addr = 0x22455c, .byte = 0x93 },
		{ .addr = 0x22455d, .byte = 0x71 },
		{ .addr = 0x22455e, .byte = 0xbd },
		{ .addr = 0x22455f, .byte = 0x3f }
};

static const SST_RamByte lea_final_ram_11[] = {
		{ .addr = 0x224558, .byte = 0x4f },
		{ .addr = 0x224559, .byte = 0xf7 },
		{ .addr = 0x22455a, .byte = 0x3a },
		{ .addr = 0x22455b, .byte = 0x0b },
		{ .addr = 0x22455c, .byte = 0x93 },
		{ .addr = 0x22455d, .byte = 0x71 },
		{ .addr = 0x22455e, .byte = 0xbd },
		{ .addr = 0x22455f, .byte = 0x3f }
};

static const SST_Transaction lea_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2245980, .data = 37745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2245982, .data = 48447, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_12[] = {
		{ .addr = 0x48fd58, .byte = 0x4d },
		{ .addr = 0x48fd59, .byte = 0xf8 },
		{ .addr = 0x48fd5a, .byte = 0x5b },
		{ .addr = 0x48fd5b, .byte = 0x28 },
		{ .addr = 0x48fd5c, .byte = 0xc1 },
		{ .addr = 0x48fd5d, .byte = 0xa7 },
		{ .addr = 0x48fd5e, .byte = 0x8a },
		{ .addr = 0x48fd5f, .byte = 0x01 }
};

static const SST_RamByte lea_final_ram_12[] = {
		{ .addr = 0x48fd58, .byte = 0x4d },
		{ .addr = 0x48fd59, .byte = 0xf8 },
		{ .addr = 0x48fd5a, .byte = 0x5b },
		{ .addr = 0x48fd5b, .byte = 0x28 },
		{ .addr = 0x48fd5c, .byte = 0xc1 },
		{ .addr = 0x48fd5d, .byte = 0xa7 },
		{ .addr = 0x48fd5e, .byte = 0x8a },
		{ .addr = 0x48fd5f, .byte = 0x01 }
};

static const SST_Transaction lea_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4783452, .data = 49575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4783454, .data = 35329, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_13[] = {
		{ .addr = 0xdb22a8, .byte = 0x43 },
		{ .addr = 0xdb22a9, .byte = 0xf6 },
		{ .addr = 0xdb22aa, .byte = 0xf7 },
		{ .addr = 0xdb22ab, .byte = 0x1c },
		{ .addr = 0xdb22ac, .byte = 0x96 },
		{ .addr = 0xdb22ad, .byte = 0x86 },
		{ .addr = 0xdb22ae, .byte = 0x4c },
		{ .addr = 0xdb22af, .byte = 0x7c }
};

static const SST_RamByte lea_final_ram_13[] = {
		{ .addr = 0xdb22a8, .byte = 0x43 },
		{ .addr = 0xdb22a9, .byte = 0xf6 },
		{ .addr = 0xdb22aa, .byte = 0xf7 },
		{ .addr = 0xdb22ab, .byte = 0x1c },
		{ .addr = 0xdb22ac, .byte = 0x96 },
		{ .addr = 0xdb22ad, .byte = 0x86 },
		{ .addr = 0xdb22ae, .byte = 0x4c },
		{ .addr = 0xdb22af, .byte = 0x7c }
};

static const SST_Transaction lea_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14361260, .data = 38534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14361262, .data = 19580, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_14[] = {
		{ .addr = 0x895b7e, .byte = 0x4b },
		{ .addr = 0x895b7f, .byte = 0xd1 },
		{ .addr = 0x895b80, .byte = 0x33 },
		{ .addr = 0x895b81, .byte = 0x25 },
		{ .addr = 0x895b82, .byte = 0xff },
		{ .addr = 0x895b83, .byte = 0x1f }
};

static const SST_RamByte lea_final_ram_14[] = {
		{ .addr = 0x895b7e, .byte = 0x4b },
		{ .addr = 0x895b7f, .byte = 0xd1 },
		{ .addr = 0x895b80, .byte = 0x33 },
		{ .addr = 0x895b81, .byte = 0x25 },
		{ .addr = 0x895b82, .byte = 0xff },
		{ .addr = 0x895b83, .byte = 0x1f }
};

static const SST_Transaction lea_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9001858, .data = 65311, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_15[] = {
		{ .addr = 0x122884, .byte = 0x47 },
		{ .addr = 0x122885, .byte = 0xf3 },
		{ .addr = 0x122886, .byte = 0x54 },
		{ .addr = 0x122887, .byte = 0xf9 },
		{ .addr = 0x122888, .byte = 0x66 },
		{ .addr = 0x122889, .byte = 0xac },
		{ .addr = 0x12288a, .byte = 0x68 },
		{ .addr = 0x12288b, .byte = 0xc7 }
};

static const SST_RamByte lea_final_ram_15[] = {
		{ .addr = 0x122884, .byte = 0x47 },
		{ .addr = 0x122885, .byte = 0xf3 },
		{ .addr = 0x122886, .byte = 0x54 },
		{ .addr = 0x122887, .byte = 0xf9 },
		{ .addr = 0x122888, .byte = 0x66 },
		{ .addr = 0x122889, .byte = 0xac },
		{ .addr = 0x12288a, .byte = 0x68 },
		{ .addr = 0x12288b, .byte = 0xc7 }
};

static const SST_Transaction lea_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1190024, .data = 26284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1190026, .data = 26823, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_16[] = {
		{ .addr = 0x9a9fe2, .byte = 0x45 },
		{ .addr = 0x9a9fe3, .byte = 0xd0 },
		{ .addr = 0x9a9fe4, .byte = 0x2b },
		{ .addr = 0x9a9fe5, .byte = 0x76 },
		{ .addr = 0x9a9fe6, .byte = 0x4f },
		{ .addr = 0x9a9fe7, .byte = 0xc3 }
};

static const SST_RamByte lea_final_ram_16[] = {
		{ .addr = 0x9a9fe2, .byte = 0x45 },
		{ .addr = 0x9a9fe3, .byte = 0xd0 },
		{ .addr = 0x9a9fe4, .byte = 0x2b },
		{ .addr = 0x9a9fe5, .byte = 0x76 },
		{ .addr = 0x9a9fe6, .byte = 0x4f },
		{ .addr = 0x9a9fe7, .byte = 0xc3 }
};

static const SST_Transaction lea_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10133478, .data = 20419, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_17[] = {
		{ .addr = 0x86d032, .byte = 0x4f },
		{ .addr = 0x86d033, .byte = 0xd7 },
		{ .addr = 0x86d034, .byte = 0xab },
		{ .addr = 0x86d035, .byte = 0xa9 },
		{ .addr = 0x86d036, .byte = 0x52 },
		{ .addr = 0x86d037, .byte = 0x25 }
};

static const SST_RamByte lea_final_ram_17[] = {
		{ .addr = 0x86d032, .byte = 0x4f },
		{ .addr = 0x86d033, .byte = 0xd7 },
		{ .addr = 0x86d034, .byte = 0xab },
		{ .addr = 0x86d035, .byte = 0xa9 },
		{ .addr = 0x86d036, .byte = 0x52 },
		{ .addr = 0x86d037, .byte = 0x25 }
};

static const SST_Transaction lea_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8835126, .data = 21029, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_18[] = {
		{ .addr = 0x948824, .byte = 0x43 },
		{ .addr = 0x948825, .byte = 0xfa },
		{ .addr = 0x948826, .byte = 0x45 },
		{ .addr = 0x948827, .byte = 0x6c },
		{ .addr = 0x948828, .byte = 0xb0 },
		{ .addr = 0x948829, .byte = 0xdf },
		{ .addr = 0x94882a, .byte = 0x66 },
		{ .addr = 0x94882b, .byte = 0x2a }
};

static const SST_RamByte lea_final_ram_18[] = {
		{ .addr = 0x948824, .byte = 0x43 },
		{ .addr = 0x948825, .byte = 0xfa },
		{ .addr = 0x948826, .byte = 0x45 },
		{ .addr = 0x948827, .byte = 0x6c },
		{ .addr = 0x948828, .byte = 0xb0 },
		{ .addr = 0x948829, .byte = 0xdf },
		{ .addr = 0x94882a, .byte = 0x66 },
		{ .addr = 0x94882b, .byte = 0x2a }
};

static const SST_Transaction lea_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9734184, .data = 45279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9734186, .data = 26154, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_19[] = {
		{ .addr = 0x67d1c2, .byte = 0x4f },
		{ .addr = 0x67d1c3, .byte = 0xec },
		{ .addr = 0x67d1c4, .byte = 0x36 },
		{ .addr = 0x67d1c5, .byte = 0x15 },
		{ .addr = 0x67d1c6, .byte = 0x0b },
		{ .addr = 0x67d1c7, .byte = 0x4a },
		{ .addr = 0x67d1c8, .byte = 0x64 },
		{ .addr = 0x67d1c9, .byte = 0x63 }
};

static const SST_RamByte lea_final_ram_19[] = {
		{ .addr = 0x67d1c2, .byte = 0x4f },
		{ .addr = 0x67d1c3, .byte = 0xec },
		{ .addr = 0x67d1c4, .byte = 0x36 },
		{ .addr = 0x67d1c5, .byte = 0x15 },
		{ .addr = 0x67d1c6, .byte = 0x0b },
		{ .addr = 0x67d1c7, .byte = 0x4a },
		{ .addr = 0x67d1c8, .byte = 0x64 },
		{ .addr = 0x67d1c9, .byte = 0x63 }
};

static const SST_Transaction lea_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6803910, .data = 2890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6803912, .data = 25699, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_20[] = {
		{ .addr = 0x3c2f4a, .byte = 0x4f },
		{ .addr = 0x3c2f4b, .byte = 0xef },
		{ .addr = 0x3c2f4c, .byte = 0x59 },
		{ .addr = 0x3c2f4d, .byte = 0xf3 },
		{ .addr = 0x3c2f4e, .byte = 0xc9 },
		{ .addr = 0x3c2f4f, .byte = 0x9c },
		{ .addr = 0x3c2f50, .byte = 0x55 },
		{ .addr = 0x3c2f51, .byte = 0x05 }
};

static const SST_RamByte lea_final_ram_20[] = {
		{ .addr = 0x3c2f4a, .byte = 0x4f },
		{ .addr = 0x3c2f4b, .byte = 0xef },
		{ .addr = 0x3c2f4c, .byte = 0x59 },
		{ .addr = 0x3c2f4d, .byte = 0xf3 },
		{ .addr = 0x3c2f4e, .byte = 0xc9 },
		{ .addr = 0x3c2f4f, .byte = 0x9c },
		{ .addr = 0x3c2f50, .byte = 0x55 },
		{ .addr = 0x3c2f51, .byte = 0x05 }
};

static const SST_Transaction lea_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3944270, .data = 51612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3944272, .data = 21765, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_21[] = {
		{ .addr = 0xa11e40, .byte = 0x4d },
		{ .addr = 0xa11e41, .byte = 0xf4 },
		{ .addr = 0xa11e42, .byte = 0xbf },
		{ .addr = 0xa11e43, .byte = 0x6c },
		{ .addr = 0xa11e44, .byte = 0xff },
		{ .addr = 0xa11e45, .byte = 0xc5 },
		{ .addr = 0xa11e46, .byte = 0x32 },
		{ .addr = 0xa11e47, .byte = 0x5f }
};

static const SST_RamByte lea_final_ram_21[] = {
		{ .addr = 0xa11e40, .byte = 0x4d },
		{ .addr = 0xa11e41, .byte = 0xf4 },
		{ .addr = 0xa11e42, .byte = 0xbf },
		{ .addr = 0xa11e43, .byte = 0x6c },
		{ .addr = 0xa11e44, .byte = 0xff },
		{ .addr = 0xa11e45, .byte = 0xc5 },
		{ .addr = 0xa11e46, .byte = 0x32 },
		{ .addr = 0xa11e47, .byte = 0x5f }
};

static const SST_Transaction lea_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10559044, .data = 65477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10559046, .data = 12895, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_22[] = {
		{ .addr = 0xee000c, .byte = 0x47 },
		{ .addr = 0xee000d, .byte = 0xf1 },
		{ .addr = 0xee000e, .byte = 0x41 },
		{ .addr = 0xee000f, .byte = 0xfe },
		{ .addr = 0xee0010, .byte = 0x7a },
		{ .addr = 0xee0011, .byte = 0x55 },
		{ .addr = 0xee0012, .byte = 0xd2 },
		{ .addr = 0xee0013, .byte = 0xf2 }
};

static const SST_RamByte lea_final_ram_22[] = {
		{ .addr = 0xee000c, .byte = 0x47 },
		{ .addr = 0xee000d, .byte = 0xf1 },
		{ .addr = 0xee000e, .byte = 0x41 },
		{ .addr = 0xee000f, .byte = 0xfe },
		{ .addr = 0xee0010, .byte = 0x7a },
		{ .addr = 0xee0011, .byte = 0x55 },
		{ .addr = 0xee0012, .byte = 0xd2 },
		{ .addr = 0xee0013, .byte = 0xf2 }
};

static const SST_Transaction lea_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15597584, .data = 31317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15597586, .data = 54002, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_23[] = {
		{ .addr = 0x49e2f4, .byte = 0x49 },
		{ .addr = 0x49e2f5, .byte = 0xf3 },
		{ .addr = 0x49e2f6, .byte = 0xea },
		{ .addr = 0x49e2f7, .byte = 0x28 },
		{ .addr = 0x49e2f8, .byte = 0x28 },
		{ .addr = 0x49e2f9, .byte = 0x46 },
		{ .addr = 0x49e2fa, .byte = 0x43 },
		{ .addr = 0x49e2fb, .byte = 0x97 }
};

static const SST_RamByte lea_final_ram_23[] = {
		{ .addr = 0x49e2f4, .byte = 0x49 },
		{ .addr = 0x49e2f5, .byte = 0xf3 },
		{ .addr = 0x49e2f6, .byte = 0xea },
		{ .addr = 0x49e2f7, .byte = 0x28 },
		{ .addr = 0x49e2f8, .byte = 0x28 },
		{ .addr = 0x49e2f9, .byte = 0x46 },
		{ .addr = 0x49e2fa, .byte = 0x43 },
		{ .addr = 0x49e2fb, .byte = 0x97 }
};

static const SST_Transaction lea_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4842232, .data = 10310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4842234, .data = 17303, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_24[] = {
		{ .addr = 0x8750cc, .byte = 0x45 },
		{ .addr = 0x8750cd, .byte = 0xd7 },
		{ .addr = 0x8750ce, .byte = 0x5d },
		{ .addr = 0x8750cf, .byte = 0x5a },
		{ .addr = 0x8750d0, .byte = 0xa7 },
		{ .addr = 0x8750d1, .byte = 0x08 }
};

static const SST_RamByte lea_final_ram_24[] = {
		{ .addr = 0x8750cc, .byte = 0x45 },
		{ .addr = 0x8750cd, .byte = 0xd7 },
		{ .addr = 0x8750ce, .byte = 0x5d },
		{ .addr = 0x8750cf, .byte = 0x5a },
		{ .addr = 0x8750d0, .byte = 0xa7 },
		{ .addr = 0x8750d1, .byte = 0x08 }
};

static const SST_Transaction lea_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8868048, .data = 42760, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_25[] = {
		{ .addr = 0xa1c0b0, .byte = 0x4d },
		{ .addr = 0xa1c0b1, .byte = 0xfb },
		{ .addr = 0xa1c0b2, .byte = 0x4d },
		{ .addr = 0xa1c0b3, .byte = 0x5d },
		{ .addr = 0xa1c0b4, .byte = 0xe1 },
		{ .addr = 0xa1c0b5, .byte = 0x81 },
		{ .addr = 0xa1c0b6, .byte = 0x40 },
		{ .addr = 0xa1c0b7, .byte = 0x85 }
};

static const SST_RamByte lea_final_ram_25[] = {
		{ .addr = 0xa1c0b0, .byte = 0x4d },
		{ .addr = 0xa1c0b1, .byte = 0xfb },
		{ .addr = 0xa1c0b2, .byte = 0x4d },
		{ .addr = 0xa1c0b3, .byte = 0x5d },
		{ .addr = 0xa1c0b4, .byte = 0xe1 },
		{ .addr = 0xa1c0b5, .byte = 0x81 },
		{ .addr = 0xa1c0b6, .byte = 0x40 },
		{ .addr = 0xa1c0b7, .byte = 0x85 }
};

static const SST_Transaction lea_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10600628, .data = 57729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10600630, .data = 16517, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_26[] = {
		{ .addr = 0xde2b2a, .byte = 0x4d },
		{ .addr = 0xde2b2b, .byte = 0xd3 },
		{ .addr = 0xde2b2c, .byte = 0x49 },
		{ .addr = 0xde2b2d, .byte = 0x92 },
		{ .addr = 0xde2b2e, .byte = 0x75 },
		{ .addr = 0xde2b2f, .byte = 0xfa }
};

static const SST_RamByte lea_final_ram_26[] = {
		{ .addr = 0xde2b2a, .byte = 0x4d },
		{ .addr = 0xde2b2b, .byte = 0xd3 },
		{ .addr = 0xde2b2c, .byte = 0x49 },
		{ .addr = 0xde2b2d, .byte = 0x92 },
		{ .addr = 0xde2b2e, .byte = 0x75 },
		{ .addr = 0xde2b2f, .byte = 0xfa }
};

static const SST_Transaction lea_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14560046, .data = 30202, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_27[] = {
		{ .addr = 0x7d2a78, .byte = 0x41 },
		{ .addr = 0x7d2a79, .byte = 0xf7 },
		{ .addr = 0x7d2a7a, .byte = 0xe2 },
		{ .addr = 0x7d2a7b, .byte = 0xc1 },
		{ .addr = 0x7d2a7c, .byte = 0x07 },
		{ .addr = 0x7d2a7d, .byte = 0xbd },
		{ .addr = 0x7d2a7e, .byte = 0xa1 },
		{ .addr = 0x7d2a7f, .byte = 0x60 }
};

static const SST_RamByte lea_final_ram_27[] = {
		{ .addr = 0x7d2a78, .byte = 0x41 },
		{ .addr = 0x7d2a79, .byte = 0xf7 },
		{ .addr = 0x7d2a7a, .byte = 0xe2 },
		{ .addr = 0x7d2a7b, .byte = 0xc1 },
		{ .addr = 0x7d2a7c, .byte = 0x07 },
		{ .addr = 0x7d2a7d, .byte = 0xbd },
		{ .addr = 0x7d2a7e, .byte = 0xa1 },
		{ .addr = 0x7d2a7f, .byte = 0x60 }
};

static const SST_Transaction lea_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8202876, .data = 1981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8202878, .data = 41312, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_28[] = {
		{ .addr = 0x0f2bb0, .byte = 0x49 },
		{ .addr = 0x0f2bb1, .byte = 0xeb },
		{ .addr = 0x0f2bb2, .byte = 0x53 },
		{ .addr = 0x0f2bb3, .byte = 0x4b },
		{ .addr = 0x0f2bb4, .byte = 0xa6 },
		{ .addr = 0x0f2bb5, .byte = 0x94 },
		{ .addr = 0x0f2bb6, .byte = 0xd2 },
		{ .addr = 0x0f2bb7, .byte = 0x4a }
};

static const SST_RamByte lea_final_ram_28[] = {
		{ .addr = 0x0f2bb0, .byte = 0x49 },
		{ .addr = 0x0f2bb1, .byte = 0xeb },
		{ .addr = 0x0f2bb2, .byte = 0x53 },
		{ .addr = 0x0f2bb3, .byte = 0x4b },
		{ .addr = 0x0f2bb4, .byte = 0xa6 },
		{ .addr = 0x0f2bb5, .byte = 0x94 },
		{ .addr = 0x0f2bb6, .byte = 0xd2 },
		{ .addr = 0x0f2bb7, .byte = 0x4a }
};

static const SST_Transaction lea_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 994228, .data = 42644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 994230, .data = 53834, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_29[] = {
		{ .addr = 0x3a7d62, .byte = 0x4d },
		{ .addr = 0x3a7d63, .byte = 0xeb },
		{ .addr = 0x3a7d64, .byte = 0x27 },
		{ .addr = 0x3a7d65, .byte = 0x93 },
		{ .addr = 0x3a7d66, .byte = 0x9f },
		{ .addr = 0x3a7d67, .byte = 0x5a },
		{ .addr = 0x3a7d68, .byte = 0x28 },
		{ .addr = 0x3a7d69, .byte = 0x2d }
};

static const SST_RamByte lea_final_ram_29[] = {
		{ .addr = 0x3a7d62, .byte = 0x4d },
		{ .addr = 0x3a7d63, .byte = 0xeb },
		{ .addr = 0x3a7d64, .byte = 0x27 },
		{ .addr = 0x3a7d65, .byte = 0x93 },
		{ .addr = 0x3a7d66, .byte = 0x9f },
		{ .addr = 0x3a7d67, .byte = 0x5a },
		{ .addr = 0x3a7d68, .byte = 0x28 },
		{ .addr = 0x3a7d69, .byte = 0x2d }
};

static const SST_Transaction lea_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3833190, .data = 40794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3833192, .data = 10285, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_30[] = {
		{ .addr = 0x63c4b6, .byte = 0x4b },
		{ .addr = 0x63c4b7, .byte = 0xf7 },
		{ .addr = 0x63c4b8, .byte = 0xa3 },
		{ .addr = 0x63c4b9, .byte = 0x62 },
		{ .addr = 0x63c4ba, .byte = 0xcf },
		{ .addr = 0x63c4bb, .byte = 0x9f },
		{ .addr = 0x63c4bc, .byte = 0x4b },
		{ .addr = 0x63c4bd, .byte = 0x81 }
};

static const SST_RamByte lea_final_ram_30[] = {
		{ .addr = 0x63c4b6, .byte = 0x4b },
		{ .addr = 0x63c4b7, .byte = 0xf7 },
		{ .addr = 0x63c4b8, .byte = 0xa3 },
		{ .addr = 0x63c4b9, .byte = 0x62 },
		{ .addr = 0x63c4ba, .byte = 0xcf },
		{ .addr = 0x63c4bb, .byte = 0x9f },
		{ .addr = 0x63c4bc, .byte = 0x4b },
		{ .addr = 0x63c4bd, .byte = 0x81 }
};

static const SST_Transaction lea_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6538426, .data = 53151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6538428, .data = 19329, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lea_initial_ram_31[] = {
		{ .addr = 0x76c96e, .byte = 0x45 },
		{ .addr = 0x76c96f, .byte = 0xed },
		{ .addr = 0x76c970, .byte = 0x1d },
		{ .addr = 0x76c971, .byte = 0xbd },
		{ .addr = 0x76c972, .byte = 0x7a },
		{ .addr = 0x76c973, .byte = 0x23 },
		{ .addr = 0x76c974, .byte = 0x81 },
		{ .addr = 0x76c975, .byte = 0x74 }
};

static const SST_RamByte lea_final_ram_31[] = {
		{ .addr = 0x76c96e, .byte = 0x45 },
		{ .addr = 0x76c96f, .byte = 0xed },
		{ .addr = 0x76c970, .byte = 0x1d },
		{ .addr = 0x76c971, .byte = 0xbd },
		{ .addr = 0x76c972, .byte = 0x7a },
		{ .addr = 0x76c973, .byte = 0x23 },
		{ .addr = 0x76c974, .byte = 0x81 },
		{ .addr = 0x76c975, .byte = 0x74 }
};

static const SST_Transaction lea_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7784818, .data = 31267, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7784820, .data = 33140, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase lea[] = {
	{
		.name = "000 LEA (d8, A2, Xn), A0 41f2",
		.initial = {
			.regs = {
				1505407771, 985271522, 1757726332, 4087867143, 3252742810, 1667700006, 3239705729, 3518445659, 1518484231, 1680481906, 165329863, 2690427623, 198583438, 267202675, 813101571, 6804120, 3311304, 8986, 1090286
			},
			.prefetch0 = 16882,
			.prefetch1 = 41128,
			.ram = lea_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1505407771, 985271522, 1757726332, 4087867143, 3252742810, 1667700006, 3239705729, 3518445659, 165312310, 1680481906, 165329863, 2690427623, 198583438, 267202675, 813101571, 6804120, 3311304, 8986, 1090290
			},
			.prefetch0 = 4660,
			.prefetch1 = 63031,
			.ram = lea_final_ram_0,
			.ram_len = 8,
		},
		.transactions = lea_transactions_0,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "001 LEA (d16, A6), A1 43ee",
		.initial = {
			.regs = {
				1586388072, 1427305147, 3056315546, 152034191, 2144053540, 38269069, 287648062, 3285482563, 3426249721, 3929254872, 2109147551, 1799499338, 3421169410, 3949922872, 1483790008, 2461084, 1584622, 9224, 9250688
			},
			.prefetch0 = 17390,
			.prefetch1 = 22692,
			.ram = lea_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1586388072, 1427305147, 3056315546, 152034191, 2144053540, 38269069, 287648062, 3285482563, 3426249721, 1483812700, 2109147551, 1799499338, 3421169410, 3949922872, 1483790008, 2461084, 1584622, 9224, 9250692
			},
			.prefetch0 = 11053,
			.prefetch1 = 61099,
			.ram = lea_final_ram_1,
			.ram_len = 8,
		},
		.transactions = lea_transactions_1,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "002 LEA (A0), A6 4dd0",
		.initial = {
			.regs = {
				4281487521, 2528464537, 1252876091, 1906525657, 2750726903, 4153902192, 983648978, 2218682308, 2802330169, 360292854, 1894219669, 372555118, 4226123754, 4273085826, 1864951283, 2700806, 676062, 1281, 13143434
			},
			.prefetch0 = 19920,
			.prefetch1 = 63804,
			.ram = lea_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4281487521, 2528464537, 1252876091, 1906525657, 2750726903, 4153902192, 983648978, 2218682308, 2802330169, 360292854, 1894219669, 372555118, 4226123754, 4273085826, 2802330169, 2700806, 676062, 1281, 13143436
			},
			.prefetch0 = 63804,
			.prefetch1 = 4391,
			.ram = lea_final_ram_2,
			.ram_len = 6,
		},
		.transactions = lea_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 LEA (xxx).w, A0 41f8",
		.initial = {
			.regs = {
				1497393223, 2765083662, 866396101, 470615765, 1020563446, 1509312000, 1309596249, 758625143, 4272742580, 3246921962, 2661016379, 509602170, 417950549, 1521552883, 2137419495, 15176250, 6466500, 41736, 5154102
			},
			.prefetch0 = 16888,
			.prefetch1 = 58597,
			.ram = lea_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1497393223, 2765083662, 866396101, 470615765, 1020563446, 1509312000, 1309596249, 758625143, 4294960357, 3246921962, 2661016379, 509602170, 417950549, 1521552883, 2137419495, 15176250, 6466500, 41736, 5154106
			},
			.prefetch0 = 50582,
			.prefetch1 = 54486,
			.ram = lea_final_ram_3,
			.ram_len = 8,
		},
		.transactions = lea_transactions_3,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "004 LEA (d8, A0, Xn), A2 45f0",
		.initial = {
			.regs = {
				4250280627, 669148122, 1614109505, 3047885047, 2138719465, 3638277733, 2467209519, 3493322919, 779906538, 3097473072, 1921230044, 858979568, 495024128, 1200529768, 2297863664, 9083074, 16235046, 1792, 10140868
			},
			.prefetch0 = 17904,
			.prefetch1 = 58913,
			.ram = lea_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4250280627, 669148122, 1614109505, 3047885047, 2138719465, 3638277733, 2467209519, 3493322919, 779906538, 3097473072, 779881467, 858979568, 495024128, 1200529768, 2297863664, 9083074, 16235046, 1792, 10140872
			},
			.prefetch0 = 20354,
			.prefetch1 = 16709,
			.ram = lea_final_ram_4,
			.ram_len = 8,
		},
		.transactions = lea_transactions_4,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "005 LEA (d8, PC, Xn), A3 47fb",
		.initial = {
			.regs = {
				4293884962, 136057272, 1937104620, 3449349722, 4227803770, 75157551, 266442095, 1048098986, 278095312, 2304365723, 1540133587, 1706142439, 4123107303, 1667874987, 1771498514, 12869604, 25624, 42502, 11439388
			},
			.prefetch0 = 18427,
			.prefetch1 = 10086,
			.ram = lea_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4293884962, 136057272, 1937104620, 3449349722, 4227803770, 75157551, 266442095, 1048098986, 278095312, 2304365723, 1540133587, 11431020, 4123107303, 1667874987, 1771498514, 12869604, 25624, 42502, 11439392
			},
			.prefetch0 = 25946,
			.prefetch1 = 52288,
			.ram = lea_final_ram_5,
			.ram_len = 8,
		},
		.transactions = lea_transactions_5,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "006 LEA (d16, A2), A0 41ea",
		.initial = {
			.regs = {
				3412820991, 2413630638, 1167790436, 29710566, 897575409, 2714532698, 1584845760, 2936709502, 4023103086, 1398342860, 2833198357, 1556823763, 1257733941, 2577559520, 2671927881, 4930604, 7310364, 1797, 11932800
			},
			.prefetch0 = 16874,
			.prefetch1 = 49610,
			.ram = lea_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3412820991, 2413630638, 1167790436, 29710566, 897575409, 2714532698, 1584845760, 2936709502, 2833182431, 1398342860, 2833198357, 1556823763, 1257733941, 2577559520, 2671927881, 4930604, 7310364, 1797, 11932804
			},
			.prefetch0 = 21142,
			.prefetch1 = 28099,
			.ram = lea_final_ram_6,
			.ram_len = 8,
		},
		.transactions = lea_transactions_6,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "007 LEA (xxx).w, A3 47f8",
		.initial = {
			.regs = {
				668708047, 1862105413, 3821399628, 1981694328, 3785551837, 539534493, 1760908419, 2474754924, 2339893549, 329688052, 2302853798, 3281065168, 3419046133, 934601928, 2094160170, 3613112, 214682, 9236, 489522
			},
			.prefetch0 = 18424,
			.prefetch1 = 10852,
			.ram = lea_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				668708047, 1862105413, 3821399628, 1981694328, 3785551837, 539534493, 1760908419, 2474754924, 2339893549, 329688052, 2302853798, 10852, 3419046133, 934601928, 2094160170, 3613112, 214682, 9236, 489526
			},
			.prefetch0 = 65036,
			.prefetch1 = 33495,
			.ram = lea_final_ram_7,
			.ram_len = 8,
		},
		.transactions = lea_transactions_7,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "008 LEA (d16, PC), A1 43fa",
		.initial = {
			.regs = {
				1213406008, 1636318878, 2549818753, 1395912069, 2983288121, 266828, 874624944, 2923013214, 3116686256, 3854628997, 3689274574, 1841013577, 1396441323, 2319745337, 2012524256, 2818924, 4404662, 40974, 10182458
			},
			.prefetch0 = 17402,
			.prefetch1 = 39860,
			.ram = lea_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1213406008, 1636318878, 2549818753, 1395912069, 2983288121, 266828, 874624944, 2923013214, 3116686256, 10156780, 3689274574, 1841013577, 1396441323, 2319745337, 2012524256, 2818924, 4404662, 40974, 10182462
			},
			.prefetch0 = 284,
			.prefetch1 = 41778,
			.ram = lea_final_ram_8,
			.ram_len = 8,
		},
		.transactions = lea_transactions_8,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "009 LEA (A7), A4 49d7",
		.initial = {
			.regs = {
				3353104741, 2717899419, 507567347, 4040486974, 1573507661, 2029655291, 1543585074, 2951250899, 1088871003, 1847420473, 534827879, 2291907440, 2328519901, 2981608066, 2088108152, 2607086, 9213500, 513, 8631246
			},
			.prefetch0 = 18903,
			.prefetch1 = 16343,
			.ram = lea_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3353104741, 2717899419, 507567347, 4040486974, 1573507661, 2029655291, 1543585074, 2951250899, 1088871003, 1847420473, 534827879, 2291907440, 2607086, 2981608066, 2088108152, 2607086, 9213500, 513, 8631248
			},
			.prefetch0 = 16343,
			.prefetch1 = 30565,
			.ram = lea_final_ram_9,
			.ram_len = 6,
		},
		.transactions = lea_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 LEA (d8, A7, Xn), A4 49f7",
		.initial = {
			.regs = {
				3373621868, 2025772486, 4294505155, 811126125, 4065349077, 844253178, 1241313083, 1818115132, 3428309965, 630046948, 2975517779, 3948309779, 4272128406, 2656881455, 1804094434, 8528832, 8938006, 8200, 15413500
			},
			.prefetch0 = 18935,
			.prefetch1 = 29089,
			.ram = lea_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3373621868, 2025772486, 4294505155, 811126125, 4065349077, 844253178, 1241313083, 1818115132, 3428309965, 630046948, 2975517779, 3948309779, 8953331, 2656881455, 1804094434, 8528832, 8938006, 8200, 15413504
			},
			.prefetch0 = 13014,
			.prefetch1 = 23493,
			.ram = lea_final_ram_10,
			.ram_len = 8,
		},
		.transactions = lea_transactions_10,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "011 LEA (d8, A7, Xn), A7 4ff7",
		.initial = {
			.regs = {
				1541538382, 160612772, 2076809988, 3737582483, 3359559068, 551525736, 413858238, 3085450988, 1909984381, 187231539, 216783837, 2103209189, 697217581, 4146571870, 3398760585, 4572288, 8908664, 10004, 2245980
			},
			.prefetch0 = 20471,
			.prefetch1 = 14859,
			.ram = lea_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1541538382, 160612772, 2076809988, 3737582483, 3359559068, 551525736, 413858238, 3085450988, 1909984381, 187231539, 216783837, 2103209189, 697217581, 4146571870, 3398760585, 4572288, 3746491158, 10004, 2245984
			},
			.prefetch0 = 37745,
			.prefetch1 = 48447,
			.ram = lea_final_ram_11,
			.ram_len = 8,
		},
		.transactions = lea_transactions_11,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "012 LEA (xxx).w, A6 4df8",
		.initial = {
			.regs = {
				2893180011, 1413495697, 926399220, 4130534027, 2671920102, 347669050, 4029407504, 648656539, 3908195704, 2225695158, 17767209, 4228563134, 955544431, 2213219235, 2926327085, 7475852, 9706994, 34071, 4783452
			},
			.prefetch0 = 19960,
			.prefetch1 = 23336,
			.ram = lea_initial_ram_12,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2893180011, 1413495697, 926399220, 4130534027, 2671920102, 347669050, 4029407504, 648656539, 3908195704, 2225695158, 17767209, 4228563134, 955544431, 2213219235, 23336, 7475852, 9706994, 34071, 4783456
			},
			.prefetch0 = 49575,
			.prefetch1 = 35329,
			.ram = lea_final_ram_12,
			.ram_len = 8,
		},
		.transactions = lea_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 LEA (d8, A6, Xn), A1 43f6",
		.initial = {
			.regs = {
				880113548, 1493414596, 4145768253, 2353677774, 15272385, 3578963078, 1520965134, 976774541, 1232851145, 687072581, 1453459897, 1185688300, 1412459485, 3856089792, 1917322266, 418588, 7738136, 1026, 14361260
			},
			.prefetch0 = 17398,
			.prefetch1 = 63260,
			.ram = lea_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				880113548, 1493414596, 4145768253, 2353677774, 15272385, 3578963078, 1520965134, 976774541, 1232851145, 1917347666, 1453459897, 1185688300, 1412459485, 3856089792, 1917322266, 418588, 7738136, 1026, 14361264
			},
			.prefetch0 = 38534,
			.prefetch1 = 19580,
			.ram = lea_final_ram_13,
			.ram_len = 8,
		},
		.transactions = lea_transactions_13,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "014 LEA (A1), A5 4bd1",
		.initial = {
			.regs = {
				423569444, 1579101141, 3670326803, 1077426376, 2353460186, 3741081080, 1919755784, 1746515869, 2397100573, 325717297, 221048369, 3295129204, 4104485145, 2464906970, 3256455168, 2121212, 14132422, 779, 9001858
			},
			.prefetch0 = 19409,
			.prefetch1 = 13093,
			.ram = lea_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				423569444, 1579101141, 3670326803, 1077426376, 2353460186, 3741081080, 1919755784, 1746515869, 2397100573, 325717297, 221048369, 3295129204, 4104485145, 325717297, 3256455168, 2121212, 14132422, 779, 9001860
			},
			.prefetch0 = 13093,
			.prefetch1 = 65311,
			.ram = lea_final_ram_14,
			.ram_len = 6,
		},
		.transactions = lea_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 LEA (d8, A3, Xn), A3 47f3",
		.initial = {
			.regs = {
				2320964568, 1523452789, 707705416, 1820066191, 2701778257, 1266235506, 1515242596, 1362921989, 2375152117, 2230382171, 321651735, 529367622, 6096555, 737637615, 818627824, 14908612, 12502164, 1811, 1190024
			},
			.prefetch0 = 18419,
			.prefetch1 = 21753,
			.ram = lea_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2320964568, 1523452789, 707705416, 1820066191, 2701778257, 1266235506, 1515242596, 1362921989, 2375152117, 2230382171, 321651735, 529382065, 6096555, 737637615, 818627824, 14908612, 12502164, 1811, 1190028
			},
			.prefetch0 = 26284,
			.prefetch1 = 26823,
			.ram = lea_final_ram_15,
			.ram_len = 8,
		},
		.transactions = lea_transactions_15,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "016 LEA (A0), A2 45d0",
		.initial = {
			.regs = {
				605462903, 3804333295, 2165595845, 4147222299, 3619635201, 599108942, 2922018269, 2917428002, 195571302, 3927627652, 3370831154, 1937139367, 132009576, 3858434294, 1185921759, 7343824, 2840316, 10, 10133478
			},
			.prefetch0 = 17872,
			.prefetch1 = 11126,
			.ram = lea_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				605462903, 3804333295, 2165595845, 4147222299, 3619635201, 599108942, 2922018269, 2917428002, 195571302, 3927627652, 195571302, 1937139367, 132009576, 3858434294, 1185921759, 7343824, 2840316, 10, 10133480
			},
			.prefetch0 = 11126,
			.prefetch1 = 20419,
			.ram = lea_final_ram_16,
			.ram_len = 6,
		},
		.transactions = lea_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 LEA (A7), A7 4fd7",
		.initial = {
			.regs = {
				1876156920, 1052837477, 658129390, 3333222287, 1618423061, 1326651503, 573120490, 3067146571, 2566100923, 1270277878, 3971420886, 799089197, 2617180844, 2448676651, 2811768678, 13544874, 5424762, 33561, 8835126
			},
			.prefetch0 = 20439,
			.prefetch1 = 43945,
			.ram = lea_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1876156920, 1052837477, 658129390, 3333222287, 1618423061, 1326651503, 573120490, 3067146571, 2566100923, 1270277878, 3971420886, 799089197, 2617180844, 2448676651, 2811768678, 13544874, 5424762, 33561, 8835128
			},
			.prefetch0 = 43945,
			.prefetch1 = 21029,
			.ram = lea_final_ram_17,
			.ram_len = 6,
		},
		.transactions = lea_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 LEA (d16, PC), A1 43fa",
		.initial = {
			.regs = {
				3056513796, 2021660705, 4163047824, 212915033, 2905803332, 396206963, 2224930563, 1229921805, 2024182092, 1913270019, 4042326914, 1573290755, 4015773496, 2217708292, 799092590, 6730668, 9594986, 33298, 9734184
			},
			.prefetch0 = 17402,
			.prefetch1 = 17772,
			.ram = lea_initial_ram_18,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3056513796, 2021660705, 4163047824, 212915033, 2905803332, 396206963, 2224930563, 1229921805, 2024182092, 9751954, 4042326914, 1573290755, 4015773496, 2217708292, 799092590, 6730668, 9594986, 33298, 9734188
			},
			.prefetch0 = 45279,
			.prefetch1 = 26154,
			.ram = lea_final_ram_18,
			.ram_len = 8,
		},
		.transactions = lea_transactions_18,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "019 LEA (d16, A4), A7 4fec",
		.initial = {
			.regs = {
				1398234870, 2893790272, 2144970381, 2404883839, 1324464794, 583885122, 762131023, 876705008, 4180580269, 3884773744, 3675929420, 25547918, 2810347597, 1867268441, 3121758693, 9253312, 1736812, 32790, 6803910
			},
			.prefetch0 = 20460,
			.prefetch1 = 13845,
			.ram = lea_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1398234870, 2893790272, 2144970381, 2404883839, 1324464794, 583885122, 762131023, 876705008, 4180580269, 3884773744, 3675929420, 25547918, 2810347597, 1867268441, 3121758693, 2810361442, 1736812, 32790, 6803914
			},
			.prefetch0 = 2890,
			.prefetch1 = 25699,
			.ram = lea_final_ram_19,
			.ram_len = 8,
		},
		.transactions = lea_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 LEA (d16, A7), A7 4fef",
		.initial = {
			.regs = {
				482762057, 1751571903, 874244339, 402842871, 3216136481, 1610796186, 2431350336, 3567184128, 3994545699, 1429888523, 3648331822, 4199890599, 1814636076, 1366753805, 1629874699, 5526840, 16567542, 34576, 3944270
			},
			.prefetch0 = 20463,
			.prefetch1 = 23027,
			.ram = lea_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				482762057, 1751571903, 874244339, 402842871, 3216136481, 1610796186, 2431350336, 3567184128, 3994545699, 1429888523, 3648331822, 4199890599, 1814636076, 1366753805, 1629874699, 5549867, 16567542, 34576, 3944274
			},
			.prefetch0 = 51612,
			.prefetch1 = 21765,
			.ram = lea_final_ram_20,
			.ram_len = 8,
		},
		.transactions = lea_transactions_20,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "021 LEA (d8, A4, Xn), A6 4df4",
		.initial = {
			.regs = {
				3852479715, 3191930031, 3663750461, 1046500964, 1143906754, 660764585, 237426265, 114855641, 2786273932, 1365019407, 3806515858, 2690331813, 2909928501, 2304052712, 2256276501, 14917200, 12255484, 40964, 10559044
			},
			.prefetch0 = 19956,
			.prefetch1 = 49004,
			.ram = lea_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3852479715, 3191930031, 3663750461, 1046500964, 1143906754, 660764585, 237426265, 114855641, 2786273932, 1365019407, 3806515858, 2690331813, 2909928501, 2304052712, 1305293126, 14917200, 12255484, 40964, 10559048
			},
			.prefetch0 = 65477,
			.prefetch1 = 12895,
			.ram = lea_final_ram_21,
			.ram_len = 8,
		},
		.transactions = lea_transactions_21,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "022 LEA (d8, A1, Xn), A3 47f1",
		.initial = {
			.regs = {
				541343880, 4185219266, 2099652203, 914006586, 1011321072, 887248882, 3231164312, 2173278865, 599127218, 751190408, 760328635, 3393736671, 947776695, 1354590086, 512304757, 14505034, 11780124, 42783, 15597584
			},
			.prefetch0 = 18417,
			.prefetch1 = 16894,
			.ram = lea_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				541343880, 4185219266, 2099652203, 914006586, 1011321072, 887248882, 3231164312, 2173278865, 599127218, 751190408, 760328635, 751159926, 947776695, 1354590086, 512304757, 14505034, 11780124, 42783, 15597588
			},
			.prefetch0 = 31317,
			.prefetch1 = 54002,
			.ram = lea_final_ram_22,
			.ram_len = 8,
		},
		.transactions = lea_transactions_22,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "023 LEA (d8, A3, Xn), A4 49f3",
		.initial = {
			.regs = {
				3768572668, 2533130857, 81680804, 1903605311, 3139065906, 279301281, 240436678, 3819204152, 1054344488, 2137505609, 1004387407, 951194090, 1316222668, 4256501595, 3760573306, 10318358, 673880, 32770, 4842232
			},
			.prefetch0 = 18931,
			.prefetch1 = 59944,
			.ram = lea_initial_ram_23,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3768572668, 2533130857, 81680804, 1903605311, 3139065906, 279301281, 240436678, 3819204152, 1054344488, 2137505609, 1004387407, 951194090, 416800140, 4256501595, 3760573306, 10318358, 673880, 32770, 4842236
			},
			.prefetch0 = 10310,
			.prefetch1 = 17303,
			.ram = lea_final_ram_23,
			.ram_len = 8,
		},
		.transactions = lea_transactions_23,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "024 LEA (A7), A2 45d7",
		.initial = {
			.regs = {
				3624205106, 2817662221, 3606836043, 3213347063, 2145273763, 4267328384, 3242057964, 869593553, 4016567687, 3830941501, 2885474926, 2398334102, 4223342700, 3276715626, 3657441850, 250618, 10826652, 41493, 8868048
			},
			.prefetch0 = 17879,
			.prefetch1 = 23898,
			.ram = lea_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3624205106, 2817662221, 3606836043, 3213347063, 2145273763, 4267328384, 3242057964, 869593553, 4016567687, 3830941501, 10826652, 2398334102, 4223342700, 3276715626, 3657441850, 250618, 10826652, 41493, 8868050
			},
			.prefetch0 = 23898,
			.prefetch1 = 42760,
			.ram = lea_final_ram_24,
			.ram_len = 6,
		},
		.transactions = lea_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 LEA (d8, PC, Xn), A6 4dfb",
		.initial = {
			.regs = {
				1170944014, 2258990339, 3131696711, 3222849336, 4164707139, 1324010111, 3455062466, 2169767813, 3690285561, 3008508358, 4071806040, 3249633491, 781889797, 2415373085, 3631538833, 3688362, 4865586, 1043, 10600628
			},
			.prefetch0 = 19963,
			.prefetch1 = 19805,
			.ram = lea_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1170944014, 2258990339, 3131696711, 3222849336, 4164707139, 1324010111, 3455062466, 2169767813, 3690285561, 3008508358, 4071806040, 3249633491, 781889797, 2415373085, 4175307858, 3688362, 4865586, 1043, 10600632
			},
			.prefetch0 = 57729,
			.prefetch1 = 16517,
			.ram = lea_final_ram_25,
			.ram_len = 8,
		},
		.transactions = lea_transactions_25,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "026 LEA (A3), A6 4dd3",
		.initial = {
			.regs = {
				265841272, 3263025829, 1795723153, 3732520507, 616252096, 2282432548, 3968893741, 2998386672, 2917550744, 2417624560, 227929899, 945812692, 1396273295, 2486057975, 3583543776, 5690348, 11671202, 41233, 14560046
			},
			.prefetch0 = 19923,
			.prefetch1 = 18834,
			.ram = lea_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				265841272, 3263025829, 1795723153, 3732520507, 616252096, 2282432548, 3968893741, 2998386672, 2917550744, 2417624560, 227929899, 945812692, 1396273295, 2486057975, 945812692, 5690348, 11671202, 41233, 14560048
			},
			.prefetch0 = 18834,
			.prefetch1 = 30202,
			.ram = lea_final_ram_26,
			.ram_len = 6,
		},
		.transactions = lea_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 LEA (d8, A7, Xn), A0 41f7",
		.initial = {
			.regs = {
				3357741906, 3513836710, 4221827734, 658950337, 949833711, 1037994197, 1922127597, 2023255563, 1172683415, 3126262919, 1415755852, 2437753287, 546840759, 3152159176, 2473417729, 688230, 11716240, 32791, 8202876
			},
			.prefetch0 = 16887,
			.prefetch1 = 58049,
			.ram = lea_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3357741906, 3513836710, 4221827734, 658950337, 949833711, 1037994197, 1922127597, 2023255563, 711720, 3126262919, 1415755852, 2437753287, 546840759, 3152159176, 2473417729, 688230, 11716240, 32791, 8202880
			},
			.prefetch0 = 1981,
			.prefetch1 = 41312,
			.ram = lea_final_ram_27,
			.ram_len = 8,
		},
		.transactions = lea_transactions_27,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "028 LEA (d16, A3), A4 49eb",
		.initial = {
			.regs = {
				649736370, 1058639726, 1256804262, 3831836240, 1689283692, 858543311, 499825710, 4063933375, 1171690314, 1032540167, 3831555555, 2140622600, 3244532882, 459562213, 979050944, 1181902, 1479666, 41985, 994228
			},
			.prefetch0 = 18923,
			.prefetch1 = 21323,
			.ram = lea_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				649736370, 1058639726, 1256804262, 3831836240, 1689283692, 858543311, 499825710, 4063933375, 1171690314, 1032540167, 3831555555, 2140622600, 2140643923, 459562213, 979050944, 1181902, 1479666, 41985, 994232
			},
			.prefetch0 = 42644,
			.prefetch1 = 53834,
			.ram = lea_final_ram_28,
			.ram_len = 8,
		},
		.transactions = lea_transactions_28,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "029 LEA (d16, A3), A6 4deb",
		.initial = {
			.regs = {
				2243140845, 4132113724, 3586334470, 607280780, 1467216569, 1325552293, 2720686847, 2886543338, 649726372, 2537802974, 1340487331, 442378066, 2948202760, 2830365193, 3057614260, 14320872, 2624014, 34304, 3833190
			},
			.prefetch0 = 19947,
			.prefetch1 = 10131,
			.ram = lea_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2243140845, 4132113724, 3586334470, 607280780, 1467216569, 1325552293, 2720686847, 2886543338, 649726372, 2537802974, 1340487331, 442378066, 2948202760, 2830365193, 442388197, 14320872, 2624014, 34304, 3833194
			},
			.prefetch0 = 40794,
			.prefetch1 = 10285,
			.ram = lea_final_ram_29,
			.ram_len = 8,
		},
		.transactions = lea_transactions_29,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "030 LEA (d8, A7, Xn), A5 4bf7",
		.initial = {
			.regs = {
				1065596342, 878233830, 2435629616, 2995960701, 4230370709, 3227765524, 2123726487, 3859419531, 1764847493, 1430412806, 1520347200, 121655055, 2949429507, 363522884, 1289270017, 3262394, 2796906, 1823, 6538426
			},
			.prefetch0 = 19447,
			.prefetch1 = 41826,
			.ram = lea_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1065596342, 878233830, 2435629616, 2995960701, 4230370709, 3227765524, 2123726487, 3859419531, 1764847493, 1430412806, 1520347200, 121655055, 2949429507, 3240028, 1289270017, 3262394, 2796906, 1823, 6538430
			},
			.prefetch0 = 53151,
			.prefetch1 = 19329,
			.ram = lea_final_ram_30,
			.ram_len = 8,
		},
		.transactions = lea_transactions_30,
		.transactions_len = 4,
		.lenght = 12,
	},
	{
		.name = "031 LEA (d16, A5), A2 45ed",
		.initial = {
			.regs = {
				2115832868, 530136598, 936768879, 1697413462, 3502411235, 3393376927, 1281890360, 2861039927, 2122875327, 867135019, 3872286399, 3175956835, 3601509765, 278614994, 3824361480, 1036148, 1776806, 40983, 7784818
			},
			.prefetch0 = 17901,
			.prefetch1 = 7613,
			.ram = lea_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2115832868, 530136598, 936768879, 1697413462, 3502411235, 3393376927, 1281890360, 2861039927, 2122875327, 867135019, 278622607, 3175956835, 3601509765, 278614994, 3824361480, 1036148, 1776806, 40983, 7784822
			},
			.prefetch0 = 31267,
			.prefetch1 = 33140,
			.ram = lea_final_ram_31,
			.ram_len = 8,
		},
		.transactions = lea_transactions_31,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_LEA_H */