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

const uint32_t LEA_TEST_COUNT = 16;
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
};

#endif /* RBT_LEA_H */