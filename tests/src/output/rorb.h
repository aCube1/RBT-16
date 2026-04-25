#ifndef RBT_RORB_H
#define RBT_RORB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rorb_initial_ram_0[] = {
		{ .addr = 0x53dea6, .byte = 0xe4 },
		{ .addr = 0x53dea7, .byte = 0x3f },
		{ .addr = 0x53dea8, .byte = 0x27 },
		{ .addr = 0x53dea9, .byte = 0x3c },
		{ .addr = 0x53deaa, .byte = 0xa5 },
		{ .addr = 0x53deab, .byte = 0xc2 }
};

static const SST_RamByte rorb_final_ram_0[] = {
		{ .addr = 0x53dea6, .byte = 0xe4 },
		{ .addr = 0x53dea7, .byte = 0x3f },
		{ .addr = 0x53dea8, .byte = 0x27 },
		{ .addr = 0x53dea9, .byte = 0x3c },
		{ .addr = 0x53deaa, .byte = 0xa5 },
		{ .addr = 0x53deab, .byte = 0xc2 }
};

static const SST_Transaction rorb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5496490, .data = 42434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte rorb_initial_ram_1[] = {
		{ .addr = 0x09102c, .byte = 0xea },
		{ .addr = 0x09102d, .byte = 0x18 },
		{ .addr = 0x09102e, .byte = 0xcd },
		{ .addr = 0x09102f, .byte = 0x25 },
		{ .addr = 0x091030, .byte = 0x35 },
		{ .addr = 0x091031, .byte = 0x7b }
};

static const SST_RamByte rorb_final_ram_1[] = {
		{ .addr = 0x09102c, .byte = 0xea },
		{ .addr = 0x09102d, .byte = 0x18 },
		{ .addr = 0x09102e, .byte = 0xcd },
		{ .addr = 0x09102f, .byte = 0x25 },
		{ .addr = 0x091030, .byte = 0x35 },
		{ .addr = 0x091031, .byte = 0x7b }
};

static const SST_Transaction rorb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 593968, .data = 13691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rorb_initial_ram_2[] = {
		{ .addr = 0xc97af6, .byte = 0xee },
		{ .addr = 0xc97af7, .byte = 0x3a },
		{ .addr = 0xc97af8, .byte = 0x08 },
		{ .addr = 0xc97af9, .byte = 0x06 },
		{ .addr = 0xc97afa, .byte = 0x57 },
		{ .addr = 0xc97afb, .byte = 0x9e }
};

static const SST_RamByte rorb_final_ram_2[] = {
		{ .addr = 0xc97af6, .byte = 0xee },
		{ .addr = 0xc97af7, .byte = 0x3a },
		{ .addr = 0xc97af8, .byte = 0x08 },
		{ .addr = 0xc97af9, .byte = 0x06 },
		{ .addr = 0xc97afa, .byte = 0x57 },
		{ .addr = 0xc97afb, .byte = 0x9e }
};

static const SST_Transaction rorb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13204218, .data = 22430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 80 },
};

static const SST_RamByte rorb_initial_ram_3[] = {
		{ .addr = 0x63e566, .byte = 0xe6 },
		{ .addr = 0x63e567, .byte = 0x3a },
		{ .addr = 0x63e568, .byte = 0xd2 },
		{ .addr = 0x63e569, .byte = 0xfb },
		{ .addr = 0x63e56a, .byte = 0xbc },
		{ .addr = 0x63e56b, .byte = 0xe5 }
};

static const SST_RamByte rorb_final_ram_3[] = {
		{ .addr = 0x63e566, .byte = 0xe6 },
		{ .addr = 0x63e567, .byte = 0x3a },
		{ .addr = 0x63e568, .byte = 0xd2 },
		{ .addr = 0x63e569, .byte = 0xfb },
		{ .addr = 0x63e56a, .byte = 0xbc },
		{ .addr = 0x63e56b, .byte = 0xe5 }
};

static const SST_Transaction rorb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6546794, .data = 48357, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 80 },
};

static const SST_RamByte rorb_initial_ram_4[] = {
		{ .addr = 0x0c7ac0, .byte = 0xea },
		{ .addr = 0x0c7ac1, .byte = 0x1a },
		{ .addr = 0x0c7ac2, .byte = 0xec },
		{ .addr = 0x0c7ac3, .byte = 0xb3 },
		{ .addr = 0x0c7ac4, .byte = 0xcf },
		{ .addr = 0x0c7ac5, .byte = 0xbe }
};

static const SST_RamByte rorb_final_ram_4[] = {
		{ .addr = 0x0c7ac0, .byte = 0xea },
		{ .addr = 0x0c7ac1, .byte = 0x1a },
		{ .addr = 0x0c7ac2, .byte = 0xec },
		{ .addr = 0x0c7ac3, .byte = 0xb3 },
		{ .addr = 0x0c7ac4, .byte = 0xcf },
		{ .addr = 0x0c7ac5, .byte = 0xbe }
};

static const SST_Transaction rorb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 817860, .data = 53182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rorb_initial_ram_5[] = {
		{ .addr = 0x5db17e, .byte = 0xee },
		{ .addr = 0x5db17f, .byte = 0x3b },
		{ .addr = 0x5db180, .byte = 0x29 },
		{ .addr = 0x5db181, .byte = 0xfe },
		{ .addr = 0x5db182, .byte = 0xd0 },
		{ .addr = 0x5db183, .byte = 0xdd }
};

static const SST_RamByte rorb_final_ram_5[] = {
		{ .addr = 0x5db17e, .byte = 0xee },
		{ .addr = 0x5db17f, .byte = 0x3b },
		{ .addr = 0x5db180, .byte = 0x29 },
		{ .addr = 0x5db181, .byte = 0xfe },
		{ .addr = 0x5db182, .byte = 0xd0 },
		{ .addr = 0x5db183, .byte = 0xdd }
};

static const SST_Transaction rorb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6140290, .data = 53469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 118 },
};

static const SST_RamByte rorb_initial_ram_6[] = {
		{ .addr = 0x8ebef0, .byte = 0xea },
		{ .addr = 0x8ebef1, .byte = 0x38 },
		{ .addr = 0x8ebef2, .byte = 0xb5 },
		{ .addr = 0x8ebef3, .byte = 0xe9 },
		{ .addr = 0x8ebef4, .byte = 0xd8 },
		{ .addr = 0x8ebef5, .byte = 0x0a }
};

static const SST_RamByte rorb_final_ram_6[] = {
		{ .addr = 0x8ebef0, .byte = 0xea },
		{ .addr = 0x8ebef1, .byte = 0x38 },
		{ .addr = 0x8ebef2, .byte = 0xb5 },
		{ .addr = 0x8ebef3, .byte = 0xe9 },
		{ .addr = 0x8ebef4, .byte = 0xd8 },
		{ .addr = 0x8ebef5, .byte = 0x0a }
};

static const SST_Transaction rorb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9354996, .data = 55306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 112 },
};

static const SST_RamByte rorb_initial_ram_7[] = {
		{ .addr = 0x6be39e, .byte = 0xec },
		{ .addr = 0x6be39f, .byte = 0x1c },
		{ .addr = 0x6be3a0, .byte = 0x43 },
		{ .addr = 0x6be3a1, .byte = 0x6d },
		{ .addr = 0x6be3a2, .byte = 0xb2 },
		{ .addr = 0x6be3a3, .byte = 0xd1 }
};

static const SST_RamByte rorb_final_ram_7[] = {
		{ .addr = 0x6be39e, .byte = 0xec },
		{ .addr = 0x6be39f, .byte = 0x1c },
		{ .addr = 0x6be3a0, .byte = 0x43 },
		{ .addr = 0x6be3a1, .byte = 0x6d },
		{ .addr = 0x6be3a2, .byte = 0xb2 },
		{ .addr = 0x6be3a3, .byte = 0xd1 }
};

static const SST_Transaction rorb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7070626, .data = 45777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rorb_initial_ram_8[] = {
		{ .addr = 0x84de92, .byte = 0xe6 },
		{ .addr = 0x84de93, .byte = 0x3c },
		{ .addr = 0x84de94, .byte = 0x93 },
		{ .addr = 0x84de95, .byte = 0xac },
		{ .addr = 0x84de96, .byte = 0xc1 },
		{ .addr = 0x84de97, .byte = 0xb6 }
};

static const SST_RamByte rorb_final_ram_8[] = {
		{ .addr = 0x84de92, .byte = 0xe6 },
		{ .addr = 0x84de93, .byte = 0x3c },
		{ .addr = 0x84de94, .byte = 0x93 },
		{ .addr = 0x84de95, .byte = 0xac },
		{ .addr = 0x84de96, .byte = 0xc1 },
		{ .addr = 0x84de97, .byte = 0xb6 }
};

static const SST_Transaction rorb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8707734, .data = 49590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 64 },
};

static const SST_RamByte rorb_initial_ram_9[] = {
		{ .addr = 0x6130c2, .byte = 0xea },
		{ .addr = 0x6130c3, .byte = 0x3f },
		{ .addr = 0x6130c4, .byte = 0x4f },
		{ .addr = 0x6130c5, .byte = 0x43 },
		{ .addr = 0x6130c6, .byte = 0xe2 },
		{ .addr = 0x6130c7, .byte = 0xfb }
};

static const SST_RamByte rorb_final_ram_9[] = {
		{ .addr = 0x6130c2, .byte = 0xea },
		{ .addr = 0x6130c3, .byte = 0x3f },
		{ .addr = 0x6130c4, .byte = 0x4f },
		{ .addr = 0x6130c5, .byte = 0x43 },
		{ .addr = 0x6130c6, .byte = 0xe2 },
		{ .addr = 0x6130c7, .byte = 0xfb }
};

static const SST_Transaction rorb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6369478, .data = 58107, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 80 },
};

static const SST_RamByte rorb_initial_ram_10[] = {
		{ .addr = 0xdd1ffc, .byte = 0xea },
		{ .addr = 0xdd1ffd, .byte = 0x3f },
		{ .addr = 0xdd1ffe, .byte = 0x89 },
		{ .addr = 0xdd1fff, .byte = 0xce },
		{ .addr = 0xdd2000, .byte = 0x6f },
		{ .addr = 0xdd2001, .byte = 0x24 }
};

static const SST_RamByte rorb_final_ram_10[] = {
		{ .addr = 0xdd1ffc, .byte = 0xea },
		{ .addr = 0xdd1ffd, .byte = 0x3f },
		{ .addr = 0xdd1ffe, .byte = 0x89 },
		{ .addr = 0xdd1fff, .byte = 0xce },
		{ .addr = 0xdd2000, .byte = 0x6f },
		{ .addr = 0xdd2001, .byte = 0x24 }
};

static const SST_Transaction rorb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14491648, .data = 28452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte rorb_initial_ram_11[] = {
		{ .addr = 0x221556, .byte = 0xee },
		{ .addr = 0x221557, .byte = 0x3d },
		{ .addr = 0x221558, .byte = 0x45 },
		{ .addr = 0x221559, .byte = 0x4c },
		{ .addr = 0x22155a, .byte = 0xc2 },
		{ .addr = 0x22155b, .byte = 0x92 }
};

static const SST_RamByte rorb_final_ram_11[] = {
		{ .addr = 0x221556, .byte = 0xee },
		{ .addr = 0x221557, .byte = 0x3d },
		{ .addr = 0x221558, .byte = 0x45 },
		{ .addr = 0x221559, .byte = 0x4c },
		{ .addr = 0x22155a, .byte = 0xc2 },
		{ .addr = 0x22155b, .byte = 0x92 }
};

static const SST_Transaction rorb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2233690, .data = 49810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 126 },
};

static const SST_RamByte rorb_initial_ram_12[] = {
		{ .addr = 0xb101e6, .byte = 0xe4 },
		{ .addr = 0xb101e7, .byte = 0x18 },
		{ .addr = 0xb101e8, .byte = 0xf2 },
		{ .addr = 0xb101e9, .byte = 0xee },
		{ .addr = 0xb101ea, .byte = 0x74 },
		{ .addr = 0xb101eb, .byte = 0xa9 }
};

static const SST_RamByte rorb_final_ram_12[] = {
		{ .addr = 0xb101e6, .byte = 0xe4 },
		{ .addr = 0xb101e7, .byte = 0x18 },
		{ .addr = 0xb101e8, .byte = 0xf2 },
		{ .addr = 0xb101e9, .byte = 0xee },
		{ .addr = 0xb101ea, .byte = 0x74 },
		{ .addr = 0xb101eb, .byte = 0xa9 }
};

static const SST_Transaction rorb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11600362, .data = 29865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte rorb_initial_ram_13[] = {
		{ .addr = 0xcb58fe, .byte = 0xe8 },
		{ .addr = 0xcb58ff, .byte = 0x18 },
		{ .addr = 0xcb5900, .byte = 0xc2 },
		{ .addr = 0xcb5901, .byte = 0x9a },
		{ .addr = 0xcb5902, .byte = 0x8c },
		{ .addr = 0xcb5903, .byte = 0x46 }
};

static const SST_RamByte rorb_final_ram_13[] = {
		{ .addr = 0xcb58fe, .byte = 0xe8 },
		{ .addr = 0xcb58ff, .byte = 0x18 },
		{ .addr = 0xcb5900, .byte = 0xc2 },
		{ .addr = 0xcb5901, .byte = 0x9a },
		{ .addr = 0xcb5902, .byte = 0x8c },
		{ .addr = 0xcb5903, .byte = 0x46 }
};

static const SST_Transaction rorb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13326594, .data = 35910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte rorb_initial_ram_14[] = {
		{ .addr = 0x109d48, .byte = 0xe0 },
		{ .addr = 0x109d49, .byte = 0x3d },
		{ .addr = 0x109d4a, .byte = 0x05 },
		{ .addr = 0x109d4b, .byte = 0x33 },
		{ .addr = 0x109d4c, .byte = 0x87 },
		{ .addr = 0x109d4d, .byte = 0x89 }
};

static const SST_RamByte rorb_final_ram_14[] = {
		{ .addr = 0x109d48, .byte = 0xe0 },
		{ .addr = 0x109d49, .byte = 0x3d },
		{ .addr = 0x109d4a, .byte = 0x05 },
		{ .addr = 0x109d4b, .byte = 0x33 },
		{ .addr = 0x109d4c, .byte = 0x87 },
		{ .addr = 0x109d4d, .byte = 0x89 }
};

static const SST_Transaction rorb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1088844, .data = 34697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 58 },
};

static const SST_RamByte rorb_initial_ram_15[] = {
		{ .addr = 0xb649f0, .byte = 0xe6 },
		{ .addr = 0xb649f1, .byte = 0x3a },
		{ .addr = 0xb649f2, .byte = 0xa0 },
		{ .addr = 0xb649f3, .byte = 0x6d },
		{ .addr = 0xb649f4, .byte = 0x40 },
		{ .addr = 0xb649f5, .byte = 0xa7 }
};

static const SST_RamByte rorb_final_ram_15[] = {
		{ .addr = 0xb649f0, .byte = 0xe6 },
		{ .addr = 0xb649f1, .byte = 0x3a },
		{ .addr = 0xb649f2, .byte = 0xa0 },
		{ .addr = 0xb649f3, .byte = 0x6d },
		{ .addr = 0xb649f4, .byte = 0x40 },
		{ .addr = 0xb649f5, .byte = 0xa7 }
};

static const SST_Transaction rorb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11946484, .data = 16551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte rorb_initial_ram_16[] = {
		{ .addr = 0x11620c, .byte = 0xee },
		{ .addr = 0x11620d, .byte = 0x1f },
		{ .addr = 0x11620e, .byte = 0x26 },
		{ .addr = 0x11620f, .byte = 0x26 },
		{ .addr = 0x116210, .byte = 0x1c },
		{ .addr = 0x116211, .byte = 0x83 }
};

static const SST_RamByte rorb_final_ram_16[] = {
		{ .addr = 0x11620c, .byte = 0xee },
		{ .addr = 0x11620d, .byte = 0x1f },
		{ .addr = 0x11620e, .byte = 0x26 },
		{ .addr = 0x11620f, .byte = 0x26 },
		{ .addr = 0x116210, .byte = 0x1c },
		{ .addr = 0x116211, .byte = 0x83 }
};

static const SST_Transaction rorb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1139216, .data = 7299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rorb_initial_ram_17[] = {
		{ .addr = 0xdb9c88, .byte = 0xee },
		{ .addr = 0xdb9c89, .byte = 0x3e },
		{ .addr = 0xdb9c8a, .byte = 0x52 },
		{ .addr = 0xdb9c8b, .byte = 0xa0 },
		{ .addr = 0xdb9c8c, .byte = 0x92 },
		{ .addr = 0xdb9c8d, .byte = 0xc0 }
};

static const SST_RamByte rorb_final_ram_17[] = {
		{ .addr = 0xdb9c88, .byte = 0xee },
		{ .addr = 0xdb9c89, .byte = 0x3e },
		{ .addr = 0xdb9c8a, .byte = 0x52 },
		{ .addr = 0xdb9c8b, .byte = 0xa0 },
		{ .addr = 0xdb9c8c, .byte = 0x92 },
		{ .addr = 0xdb9c8d, .byte = 0xc0 }
};

static const SST_Transaction rorb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14392460, .data = 37568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte rorb_initial_ram_18[] = {
		{ .addr = 0xc6c37c, .byte = 0xec },
		{ .addr = 0xc6c37d, .byte = 0x3f },
		{ .addr = 0xc6c37e, .byte = 0x01 },
		{ .addr = 0xc6c37f, .byte = 0x01 },
		{ .addr = 0xc6c380, .byte = 0x71 },
		{ .addr = 0xc6c381, .byte = 0x3e }
};

static const SST_RamByte rorb_final_ram_18[] = {
		{ .addr = 0xc6c37c, .byte = 0xec },
		{ .addr = 0xc6c37d, .byte = 0x3f },
		{ .addr = 0xc6c37e, .byte = 0x01 },
		{ .addr = 0xc6c37f, .byte = 0x01 },
		{ .addr = 0xc6c380, .byte = 0x71 },
		{ .addr = 0xc6c381, .byte = 0x3e }
};

static const SST_Transaction rorb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13026176, .data = 28990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte rorb_initial_ram_19[] = {
		{ .addr = 0xf76ea8, .byte = 0xe4 },
		{ .addr = 0xf76ea9, .byte = 0x38 },
		{ .addr = 0xf76eaa, .byte = 0x97 },
		{ .addr = 0xf76eab, .byte = 0xff },
		{ .addr = 0xf76eac, .byte = 0xd8 },
		{ .addr = 0xf76ead, .byte = 0x60 }
};

static const SST_RamByte rorb_final_ram_19[] = {
		{ .addr = 0xf76ea8, .byte = 0xe4 },
		{ .addr = 0xf76ea9, .byte = 0x38 },
		{ .addr = 0xf76eaa, .byte = 0x97 },
		{ .addr = 0xf76eab, .byte = 0xff },
		{ .addr = 0xf76eac, .byte = 0xd8 },
		{ .addr = 0xf76ead, .byte = 0x60 }
};

static const SST_Transaction rorb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16215724, .data = 55392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte rorb_initial_ram_20[] = {
		{ .addr = 0xaed856, .byte = 0xee },
		{ .addr = 0xaed857, .byte = 0x3c },
		{ .addr = 0xaed858, .byte = 0x4f },
		{ .addr = 0xaed859, .byte = 0xe0 },
		{ .addr = 0xaed85a, .byte = 0xb4 },
		{ .addr = 0xaed85b, .byte = 0x8d }
};

static const SST_RamByte rorb_final_ram_20[] = {
		{ .addr = 0xaed856, .byte = 0xee },
		{ .addr = 0xaed857, .byte = 0x3c },
		{ .addr = 0xaed858, .byte = 0x4f },
		{ .addr = 0xaed859, .byte = 0xe0 },
		{ .addr = 0xaed85a, .byte = 0xb4 },
		{ .addr = 0xaed85b, .byte = 0x8d }
};

static const SST_Transaction rorb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11458650, .data = 46221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

static const SST_RamByte rorb_initial_ram_21[] = {
		{ .addr = 0x27a40c, .byte = 0xe6 },
		{ .addr = 0x27a40d, .byte = 0x1c },
		{ .addr = 0x27a40e, .byte = 0x7a },
		{ .addr = 0x27a40f, .byte = 0x9a },
		{ .addr = 0x27a410, .byte = 0x13 },
		{ .addr = 0x27a411, .byte = 0x6f }
};

static const SST_RamByte rorb_final_ram_21[] = {
		{ .addr = 0x27a40c, .byte = 0xe6 },
		{ .addr = 0x27a40d, .byte = 0x1c },
		{ .addr = 0x27a40e, .byte = 0x7a },
		{ .addr = 0x27a40f, .byte = 0x9a },
		{ .addr = 0x27a410, .byte = 0x13 },
		{ .addr = 0x27a411, .byte = 0x6f }
};

static const SST_Transaction rorb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2597904, .data = 4975, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rorb_initial_ram_22[] = {
		{ .addr = 0x9737ac, .byte = 0xec },
		{ .addr = 0x9737ad, .byte = 0x3a },
		{ .addr = 0x9737ae, .byte = 0xe2 },
		{ .addr = 0x9737af, .byte = 0xac },
		{ .addr = 0x9737b0, .byte = 0x16 },
		{ .addr = 0x9737b1, .byte = 0x47 }
};

static const SST_RamByte rorb_final_ram_22[] = {
		{ .addr = 0x9737ac, .byte = 0xec },
		{ .addr = 0x9737ad, .byte = 0x3a },
		{ .addr = 0x9737ae, .byte = 0xe2 },
		{ .addr = 0x9737af, .byte = 0xac },
		{ .addr = 0x9737b0, .byte = 0x16 },
		{ .addr = 0x9737b1, .byte = 0x47 }
};

static const SST_Transaction rorb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9910192, .data = 5703, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 64 },
};

static const SST_RamByte rorb_initial_ram_23[] = {
		{ .addr = 0x1cacd6, .byte = 0xe4 },
		{ .addr = 0x1cacd7, .byte = 0x1c },
		{ .addr = 0x1cacd8, .byte = 0xcc },
		{ .addr = 0x1cacd9, .byte = 0x8d },
		{ .addr = 0x1cacda, .byte = 0x5d },
		{ .addr = 0x1cacdb, .byte = 0x1d }
};

static const SST_RamByte rorb_final_ram_23[] = {
		{ .addr = 0x1cacd6, .byte = 0xe4 },
		{ .addr = 0x1cacd7, .byte = 0x1c },
		{ .addr = 0x1cacd8, .byte = 0xcc },
		{ .addr = 0x1cacd9, .byte = 0x8d },
		{ .addr = 0x1cacda, .byte = 0x5d },
		{ .addr = 0x1cacdb, .byte = 0x1d }
};

static const SST_Transaction rorb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1879258, .data = 23837, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte rorb_initial_ram_24[] = {
		{ .addr = 0x1b352c, .byte = 0xe4 },
		{ .addr = 0x1b352d, .byte = 0x38 },
		{ .addr = 0x1b352e, .byte = 0x7e },
		{ .addr = 0x1b352f, .byte = 0x96 },
		{ .addr = 0x1b3530, .byte = 0xdd },
		{ .addr = 0x1b3531, .byte = 0xbc }
};

static const SST_RamByte rorb_final_ram_24[] = {
		{ .addr = 0x1b352c, .byte = 0xe4 },
		{ .addr = 0x1b352d, .byte = 0x38 },
		{ .addr = 0x1b352e, .byte = 0x7e },
		{ .addr = 0x1b352f, .byte = 0x96 },
		{ .addr = 0x1b3530, .byte = 0xdd },
		{ .addr = 0x1b3531, .byte = 0xbc }
};

static const SST_Transaction rorb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1783088, .data = 56764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 96 },
};

static const SST_RamByte rorb_initial_ram_25[] = {
		{ .addr = 0x17d0b8, .byte = 0xea },
		{ .addr = 0x17d0b9, .byte = 0x38 },
		{ .addr = 0x17d0ba, .byte = 0xb0 },
		{ .addr = 0x17d0bb, .byte = 0x5e },
		{ .addr = 0x17d0bc, .byte = 0x01 },
		{ .addr = 0x17d0bd, .byte = 0xd8 }
};

static const SST_RamByte rorb_final_ram_25[] = {
		{ .addr = 0x17d0b8, .byte = 0xea },
		{ .addr = 0x17d0b9, .byte = 0x38 },
		{ .addr = 0x17d0ba, .byte = 0xb0 },
		{ .addr = 0x17d0bb, .byte = 0x5e },
		{ .addr = 0x17d0bc, .byte = 0x01 },
		{ .addr = 0x17d0bd, .byte = 0xd8 }
};

static const SST_Transaction rorb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1560764, .data = 472, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte rorb_initial_ram_26[] = {
		{ .addr = 0x194d96, .byte = 0xe0 },
		{ .addr = 0x194d97, .byte = 0x1b },
		{ .addr = 0x194d98, .byte = 0xf7 },
		{ .addr = 0x194d99, .byte = 0xc7 },
		{ .addr = 0x194d9a, .byte = 0x2f },
		{ .addr = 0x194d9b, .byte = 0xcf }
};

static const SST_RamByte rorb_final_ram_26[] = {
		{ .addr = 0x194d96, .byte = 0xe0 },
		{ .addr = 0x194d97, .byte = 0x1b },
		{ .addr = 0x194d98, .byte = 0xf7 },
		{ .addr = 0x194d99, .byte = 0xc7 },
		{ .addr = 0x194d9a, .byte = 0x2f },
		{ .addr = 0x194d9b, .byte = 0xcf }
};

static const SST_Transaction rorb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1658266, .data = 12239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte rorb_initial_ram_27[] = {
		{ .addr = 0x55ddbc, .byte = 0xe2 },
		{ .addr = 0x55ddbd, .byte = 0x1e },
		{ .addr = 0x55ddbe, .byte = 0xee },
		{ .addr = 0x55ddbf, .byte = 0xeb },
		{ .addr = 0x55ddc0, .byte = 0x80 },
		{ .addr = 0x55ddc1, .byte = 0x20 }
};

static const SST_RamByte rorb_final_ram_27[] = {
		{ .addr = 0x55ddbc, .byte = 0xe2 },
		{ .addr = 0x55ddbd, .byte = 0x1e },
		{ .addr = 0x55ddbe, .byte = 0xee },
		{ .addr = 0x55ddbf, .byte = 0xeb },
		{ .addr = 0x55ddc0, .byte = 0x80 },
		{ .addr = 0x55ddc1, .byte = 0x20 }
};

static const SST_Transaction rorb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5627328, .data = 32800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte rorb_initial_ram_28[] = {
		{ .addr = 0x07f9be, .byte = 0xec },
		{ .addr = 0x07f9bf, .byte = 0x38 },
		{ .addr = 0x07f9c0, .byte = 0x0f },
		{ .addr = 0x07f9c1, .byte = 0x8d },
		{ .addr = 0x07f9c2, .byte = 0x45 },
		{ .addr = 0x07f9c3, .byte = 0x45 }
};

static const SST_RamByte rorb_final_ram_28[] = {
		{ .addr = 0x07f9be, .byte = 0xec },
		{ .addr = 0x07f9bf, .byte = 0x38 },
		{ .addr = 0x07f9c0, .byte = 0x0f },
		{ .addr = 0x07f9c1, .byte = 0x8d },
		{ .addr = 0x07f9c2, .byte = 0x45 },
		{ .addr = 0x07f9c3, .byte = 0x45 }
};

static const SST_Transaction rorb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 522690, .data = 17733, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 112 },
};

static const SST_RamByte rorb_initial_ram_29[] = {
		{ .addr = 0x52abee, .byte = 0xe2 },
		{ .addr = 0x52abef, .byte = 0x1d },
		{ .addr = 0x52abf0, .byte = 0xb3 },
		{ .addr = 0x52abf1, .byte = 0x64 },
		{ .addr = 0x52abf2, .byte = 0x20 },
		{ .addr = 0x52abf3, .byte = 0x8f }
};

static const SST_RamByte rorb_final_ram_29[] = {
		{ .addr = 0x52abee, .byte = 0xe2 },
		{ .addr = 0x52abef, .byte = 0x1d },
		{ .addr = 0x52abf0, .byte = 0xb3 },
		{ .addr = 0x52abf1, .byte = 0x64 },
		{ .addr = 0x52abf2, .byte = 0x20 },
		{ .addr = 0x52abf3, .byte = 0x8f }
};

static const SST_Transaction rorb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5417970, .data = 8335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte rorb_initial_ram_30[] = {
		{ .addr = 0xb974c4, .byte = 0xec },
		{ .addr = 0xb974c5, .byte = 0x3d },
		{ .addr = 0xb974c6, .byte = 0x53 },
		{ .addr = 0xb974c7, .byte = 0x9e },
		{ .addr = 0xb974c8, .byte = 0x21 },
		{ .addr = 0xb974c9, .byte = 0x85 }
};

static const SST_RamByte rorb_final_ram_30[] = {
		{ .addr = 0xb974c4, .byte = 0xec },
		{ .addr = 0xb974c5, .byte = 0x3d },
		{ .addr = 0xb974c6, .byte = 0x53 },
		{ .addr = 0xb974c7, .byte = 0x9e },
		{ .addr = 0xb974c8, .byte = 0x21 },
		{ .addr = 0xb974c9, .byte = 0x85 }
};

static const SST_Transaction rorb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12154056, .data = 8581, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte rorb_initial_ram_31[] = {
		{ .addr = 0x53bde8, .byte = 0xec },
		{ .addr = 0x53bde9, .byte = 0x3f },
		{ .addr = 0x53bdea, .byte = 0xa5 },
		{ .addr = 0x53bdeb, .byte = 0x92 },
		{ .addr = 0x53bdec, .byte = 0x1a },
		{ .addr = 0x53bded, .byte = 0xf5 }
};

static const SST_RamByte rorb_final_ram_31[] = {
		{ .addr = 0x53bde8, .byte = 0xec },
		{ .addr = 0x53bde9, .byte = 0x3f },
		{ .addr = 0x53bdea, .byte = 0xa5 },
		{ .addr = 0x53bdeb, .byte = 0x92 },
		{ .addr = 0x53bdec, .byte = 0x1a },
		{ .addr = 0x53bded, .byte = 0xf5 }
};

static const SST_Transaction rorb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5488108, .data = 6901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 38 },
};

static const SST_TestCase rorb[] = {
	{
		.name = "000 ROR.b D2, D7 e43f",
		.initial = {
			.regs = {
				938820907, 1515088277, 3708817845, 2506402469, 1004564263, 2756647632, 2415828783, 960861207, 714598688, 64111565, 2830271819, 4221314877, 656614737, 2026516189, 469208339, 1115320, 8119602, 768, 5496490
			},
			.prefetch0 = 58431,
			.prefetch1 = 10044,
			.ram = rorb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				938820907, 1515088277, 3708817845, 2506402469, 1004564263, 2756647632, 2415828783, 960861368, 714598688, 64111565, 2830271819, 4221314877, 656614737, 2026516189, 469208339, 1115320, 8119602, 777, 5496492
			},
			.prefetch0 = 10044,
			.prefetch1 = 42434,
			.ram = rorb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_0,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "001 ROR.b 5, D0 ea18",
		.initial = {
			.regs = {
				1318118034, 912639314, 3524891317, 1852095260, 1446792947, 2270725814, 2665380637, 3941658652, 3635690657, 1684934312, 2447820435, 2709282239, 4181167793, 2502269528, 865942985, 12645398, 6918628, 1794, 593968
			},
			.prefetch0 = 59928,
			.prefetch1 = 52517,
			.ram = rorb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1318118036, 912639314, 3524891317, 1852095260, 1446792947, 2270725814, 2665380637, 3941658652, 3635690657, 1684934312, 2447820435, 2709282239, 4181167793, 2502269528, 865942985, 12645398, 6918628, 1801, 593970
			},
			.prefetch0 = 52517,
			.prefetch1 = 13691,
			.ram = rorb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_1,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "002 ROR.b D7, D2 ee3a",
		.initial = {
			.regs = {
				1597330153, 1268680101, 3209886949, 2598869193, 3607014600, 3090032666, 2886527018, 1848188711, 1741673293, 305463718, 96920227, 2315920716, 878736890, 321513410, 782357621, 12715532, 2391916, 1793, 13204218
			},
			.prefetch0 = 60986,
			.prefetch1 = 2054,
			.ram = rorb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1597330153, 1268680101, 3209886923, 2598869193, 3607014600, 3090032666, 2886527018, 1848188711, 1741673293, 305463718, 96920227, 2315920716, 878736890, 321513410, 782357621, 12715532, 2391916, 1801, 13204220
			},
			.prefetch0 = 2054,
			.prefetch1 = 22430,
			.ram = rorb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_2,
		.transactions_len = 2,
		.lenght = 84,
	},
	{
		.name = "003 ROR.b D3, D2 e63a",
		.initial = {
			.regs = {
				1832878830, 2367001787, 2116397333, 4282822055, 2923601099, 2462157794, 4191636905, 2385812323, 1684583991, 3207488642, 3687930406, 2768741103, 3972334627, 721496552, 976766696, 9176490, 13767260, 42253, 6546794
			},
			.prefetch0 = 58938,
			.prefetch1 = 54011,
			.ram = rorb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1832878830, 2367001787, 2116397354, 4282822055, 2923601099, 2462157794, 4191636905, 2385812323, 1684583991, 3207488642, 3687930406, 2768741103, 3972334627, 721496552, 976766696, 9176490, 13767260, 42240, 6546796
			},
			.prefetch0 = 54011,
			.prefetch1 = 48357,
			.ram = rorb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_3,
		.transactions_len = 2,
		.lenght = 84,
	},
	{
		.name = "004 ROR.b 5, D2 ea1a",
		.initial = {
			.regs = {
				1078287493, 1446533974, 408136705, 4141222595, 3236692724, 1949627982, 1736551902, 1265100881, 3674226026, 108920049, 1229911071, 3820993642, 927883155, 903565552, 3372612780, 11610226, 5217808, 33554, 817860
			},
			.prefetch0 = 59930,
			.prefetch1 = 60595,
			.ram = rorb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1078287493, 1446533974, 408136712, 4141222595, 3236692724, 1949627982, 1736551902, 1265100881, 3674226026, 108920049, 1229911071, 3820993642, 927883155, 903565552, 3372612780, 11610226, 5217808, 33552, 817862
			},
			.prefetch0 = 60595,
			.prefetch1 = 53182,
			.ram = rorb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_4,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "005 ROR.b D7, D3 ee3b",
		.initial = {
			.regs = {
				2387139883, 275955462, 3818074623, 407205132, 2047064911, 419673428, 1687805420, 3162175162, 3075618571, 3376050502, 3561659377, 2449646460, 3160936219, 1341369076, 3626176622, 14276016, 3447024, 32776, 6140290
			},
			.prefetch0 = 60987,
			.prefetch1 = 10750,
			.ram = rorb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2387139883, 275955462, 3818074623, 407205123, 2047064911, 419673428, 1687805420, 3162175162, 3075618571, 3376050502, 3561659377, 2449646460, 3160936219, 1341369076, 3626176622, 14276016, 3447024, 32768, 6140292
			},
			.prefetch0 = 10750,
			.prefetch1 = 53469,
			.ram = rorb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_5,
		.transactions_len = 2,
		.lenght = 122,
	},
	{
		.name = "006 ROR.b D5, D0 ea38",
		.initial = {
			.regs = {
				266201288, 3245704445, 4199228481, 2811463428, 2126887942, 454099703, 1953472299, 785876871, 2357455625, 1897735500, 4233929862, 953897840, 3773434476, 2596587859, 1506148386, 1560274, 12185704, 9738, 9354996
			},
			.prefetch0 = 59960,
			.prefetch1 = 46569,
			.ram = rorb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				266201233, 3245704445, 4199228481, 2811463428, 2126887942, 454099703, 1953472299, 785876871, 2357455625, 1897735500, 4233929862, 953897840, 3773434476, 2596587859, 1506148386, 1560274, 12185704, 9737, 9354998
			},
			.prefetch0 = 46569,
			.prefetch1 = 55306,
			.ram = rorb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_6,
		.transactions_len = 2,
		.lenght = 116,
	},
	{
		.name = "007 ROR.b 6, D4 ec1c",
		.initial = {
			.regs = {
				1715965115, 527866749, 3693535813, 1987201537, 2135975775, 3912224803, 3341209048, 3517030774, 623201609, 4082307248, 3233008135, 1664747710, 180891518, 3968162199, 3977869007, 5942852, 4843898, 9500, 7070626
			},
			.prefetch0 = 60444,
			.prefetch1 = 17261,
			.ram = rorb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1715965115, 527866749, 3693535813, 1987201537, 2135975805, 3912224803, 3341209048, 3517030774, 623201609, 4082307248, 3233008135, 1664747710, 180891518, 3968162199, 3977869007, 5942852, 4843898, 9488, 7070628
			},
			.prefetch0 = 17261,
			.prefetch1 = 45777,
			.ram = rorb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_7,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "008 ROR.b D3, D4 e63c",
		.initial = {
			.regs = {
				515630122, 2897932187, 245977385, 1440463455, 2753971387, 2608835562, 2501173665, 2752447644, 2931039659, 307745561, 1837972420, 2342539694, 880059941, 65105477, 3290367377, 11355810, 2690066, 9232, 8707734
			},
			.prefetch0 = 58940,
			.prefetch1 = 37804,
			.ram = rorb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				515630122, 2897932187, 245977385, 1440463455, 2753971319, 2608835562, 2501173665, 2752447644, 2931039659, 307745561, 1837972420, 2342539694, 880059941, 65105477, 3290367377, 11355810, 2690066, 9232, 8707736
			},
			.prefetch0 = 37804,
			.prefetch1 = 49590,
			.ram = rorb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_8,
		.transactions_len = 2,
		.lenght = 68,
	},
	{
		.name = "009 ROR.b D5, D7 ea3f",
		.initial = {
			.regs = {
				1559768143, 3174097029, 3731044146, 3834882869, 1868007214, 574636071, 844317519, 1107160615, 51447310, 2268064800, 1317785847, 214467254, 4266072612, 3610275935, 4275581543, 7335484, 6796022, 34562, 6369478
			},
			.prefetch0 = 59967,
			.prefetch1 = 20291,
			.ram = rorb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1559768143, 3174097029, 3731044146, 3834882869, 1868007214, 574636071, 844317519, 1107160654, 51447310, 2268064800, 1317785847, 214467254, 4266072612, 3610275935, 4275581543, 7335484, 6796022, 34560, 6369480
			},
			.prefetch0 = 20291,
			.prefetch1 = 58107,
			.ram = rorb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_9,
		.transactions_len = 2,
		.lenght = 84,
	},
	{
		.name = "010 ROR.b D5, D7 ea3f",
		.initial = {
			.regs = {
				116154316, 1975375855, 613312052, 4244402748, 3325072821, 1107193070, 908183069, 2131501582, 1251838442, 1233737926, 272946851, 85167618, 1683746084, 1085710165, 1063864974, 12503498, 10878952, 41739, 14491648
			},
			.prefetch0 = 59967,
			.prefetch1 = 35278,
			.ram = rorb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				116154316, 1975375855, 613312052, 4244402748, 3325072821, 1107193070, 908183069, 2131501624, 1251838442, 1233737926, 272946851, 85167618, 1683746084, 1085710165, 1063864974, 12503498, 10878952, 41728, 14491650
			},
			.prefetch0 = 35278,
			.prefetch1 = 28452,
			.ram = rorb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_10,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "011 ROR.b D7, D5 ee3d",
		.initial = {
			.regs = {
				1534805588, 3386230755, 1043013451, 2429025868, 3050535932, 2184516292, 2505715211, 1923581182, 3598922003, 1779765815, 545291053, 3034709838, 2138653863, 2936544154, 1121189139, 2322050, 4531034, 42265, 2233690
			},
			.prefetch0 = 60989,
			.prefetch1 = 17740,
			.ram = rorb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1534805588, 3386230755, 1043013451, 2429025868, 3050535932, 2184516115, 2505715211, 1923581182, 3598922003, 1779765815, 545291053, 3034709838, 2138653863, 2936544154, 1121189139, 2322050, 4531034, 42256, 2233692
			},
			.prefetch0 = 17740,
			.prefetch1 = 49810,
			.ram = rorb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_11,
		.transactions_len = 2,
		.lenght = 130,
	},
	{
		.name = "012 ROR.b 2, D0 e418",
		.initial = {
			.regs = {
				2409410206, 364015238, 2002351223, 2171632621, 1855770923, 2160807554, 2408564974, 2396677280, 2472035593, 3152226884, 4083804214, 1873936787, 2582264243, 471301501, 2729360850, 1654064, 11274150, 1034, 11600362
			},
			.prefetch0 = 58392,
			.prefetch1 = 62190,
			.ram = rorb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2409410215, 364015238, 2002351223, 2171632621, 1855770923, 2160807554, 2408564974, 2396677280, 2472035593, 3152226884, 4083804214, 1873936787, 2582264243, 471301501, 2729360850, 1654064, 11274150, 1033, 11600364
			},
			.prefetch0 = 62190,
			.prefetch1 = 29865,
			.ram = rorb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_12,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "013 ROR.b 4, D0 e818",
		.initial = {
			.regs = {
				1949284446, 4044687802, 4211070704, 638458068, 4008436272, 3703871425, 2519249567, 187949042, 1269959436, 3922859212, 2373861621, 3833709336, 2250785519, 2454119410, 516033844, 7081988, 5273952, 9752, 13326594
			},
			.prefetch0 = 59416,
			.prefetch1 = 49818,
			.ram = rorb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1949284581, 4044687802, 4211070704, 638458068, 4008436272, 3703871425, 2519249567, 187949042, 1269959436, 3922859212, 2373861621, 3833709336, 2250785519, 2454119410, 516033844, 7081988, 5273952, 9753, 13326596
			},
			.prefetch0 = 49818,
			.prefetch1 = 35910,
			.ram = rorb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_13,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "014 ROR.b D0, D5 e03d",
		.initial = {
			.regs = {
				584361308, 3199298975, 3145948739, 104970154, 348536597, 2982885640, 2587267379, 4289329561, 3955573921, 2709001660, 1589316006, 2857649755, 1945944166, 2843115190, 410988859, 9786924, 5540316, 42248, 1088844
			},
			.prefetch0 = 57405,
			.prefetch1 = 1331,
			.ram = rorb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				584361308, 3199298975, 3145948739, 104970154, 348536597, 2982885760, 2587267379, 4289329561, 3955573921, 2709001660, 1589316006, 2857649755, 1945944166, 2843115190, 410988859, 9786924, 5540316, 42249, 1088846
			},
			.prefetch0 = 1331,
			.prefetch1 = 34697,
			.ram = rorb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_14,
		.transactions_len = 2,
		.lenght = 62,
	},
	{
		.name = "015 ROR.b D3, D2 e63a",
		.initial = {
			.regs = {
				3755982208, 1508223039, 3886281885, 3380419904, 1831040051, 3920097402, 2374002689, 931821358, 1470412831, 24167375, 243467491, 1007126203, 1891382802, 2751495433, 3267330005, 8965966, 12165796, 40985, 11946484
			},
			.prefetch0 = 58938,
			.prefetch1 = 41069,
			.ram = rorb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3755982208, 1508223039, 3886281885, 3380419904, 1831040051, 3920097402, 2374002689, 931821358, 1470412831, 24167375, 243467491, 1007126203, 1891382802, 2751495433, 3267330005, 8965966, 12165796, 40984, 11946486
			},
			.prefetch0 = 41069,
			.prefetch1 = 16551,
			.ram = rorb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_15,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "016 ROR.b 7, D7 ee1f",
		.initial = {
			.regs = {
				3664231243, 967852847, 38444122, 2035201416, 1798065060, 1258076739, 1725779683, 1675198062, 3058232340, 2157754260, 448315260, 3515762373, 96136387, 153227947, 1391722512, 10344970, 11034784, 9503, 1139216
			},
			.prefetch0 = 60959,
			.prefetch1 = 9766,
			.ram = rorb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3664231243, 967852847, 38444122, 2035201416, 1798065060, 1258076739, 1725779683, 1675198172, 3058232340, 2157754260, 448315260, 3515762373, 96136387, 153227947, 1391722512, 10344970, 11034784, 9497, 1139218
			},
			.prefetch0 = 9766,
			.prefetch1 = 7299,
			.ram = rorb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_16,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "017 ROR.b D7, D6 ee3e",
		.initial = {
			.regs = {
				1269488632, 1904872419, 3748988656, 507351650, 3205815743, 3972638271, 1001986847, 3465265840, 1062299514, 4035163574, 3478384132, 266670656, 1523544800, 199234161, 2228826079, 605686, 823220, 1810, 14392460
			},
			.prefetch0 = 60990,
			.prefetch1 = 21152,
			.ram = rorb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1269488632, 1904872419, 3748988656, 507351650, 3205815743, 3972638271, 1001986847, 3465265840, 1062299514, 4035163574, 3478384132, 266670656, 1523544800, 199234161, 2228826079, 605686, 823220, 1808, 14392462
			},
			.prefetch0 = 21152,
			.prefetch1 = 37568,
			.ram = rorb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_17,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "018 ROR.b D6, D7 ec3f",
		.initial = {
			.regs = {
				486886251, 5702679, 532961807, 3207363315, 2639393832, 1203156408, 3711026751, 394621147, 2944628668, 3444624647, 1815716817, 2646860708, 1496698885, 1279530937, 3696204018, 11665798, 16504128, 8722, 13026176
			},
			.prefetch0 = 60479,
			.prefetch1 = 257,
			.ram = rorb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				486886251, 5702679, 532961807, 3207363315, 2639393832, 1203156408, 3711026751, 394621111, 2944628668, 3444624647, 1815716817, 2646860708, 1496698885, 1279530937, 3696204018, 11665798, 16504128, 8729, 13026178
			},
			.prefetch0 = 257,
			.prefetch1 = 28990,
			.ram = rorb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_18,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "019 ROR.b D2, D0 e438",
		.initial = {
			.regs = {
				2720489867, 111002911, 861441023, 658831067, 1409836200, 3835972881, 1294827062, 2124737116, 1012338489, 1065225670, 3607470736, 2059387584, 1810767773, 1704627793, 3249592472, 14137850, 13622714, 525, 16215724
			},
			.prefetch0 = 58424,
			.prefetch1 = 38911,
			.ram = rorb_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2720489751, 111002911, 861441023, 658831067, 1409836200, 3835972881, 1294827062, 2124737116, 1012338489, 1065225670, 3607470736, 2059387584, 1810767773, 1704627793, 3249592472, 14137850, 13622714, 512, 16215726
			},
			.prefetch0 = 38911,
			.prefetch1 = 55392,
			.ram = rorb_final_ram_19,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_19,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "020 ROR.b D7, D4 ee3c",
		.initial = {
			.regs = {
				3578475575, 982184241, 1578760218, 1903604989, 800659795, 3396604260, 2569802640, 3094683772, 764779615, 2691930908, 1685718999, 380738067, 3162604585, 3636566844, 1565990663, 785816, 10925030, 1793, 11458650
			},
			.prefetch0 = 60988,
			.prefetch1 = 20448,
			.ram = rorb_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3578475575, 982184241, 1578760218, 1903604989, 800659765, 3396604260, 2569802640, 3094683772, 764779615, 2691930908, 1685718999, 380738067, 3162604585, 3636566844, 1565990663, 785816, 10925030, 1792, 11458652
			},
			.prefetch0 = 20448,
			.prefetch1 = 46221,
			.ram = rorb_final_ram_20,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_20,
		.transactions_len = 2,
		.lenght = 126,
	},
	{
		.name = "021 ROR.b 3, D4 e61c",
		.initial = {
			.regs = {
				3347048386, 1681887177, 2146324741, 3600145123, 4237946383, 3937576896, 3923238413, 1340747836, 4140305397, 1085974489, 861073672, 3740988165, 836219269, 1973628829, 775009492, 292740, 2167910, 41757, 2597904
			},
			.prefetch0 = 58908,
			.prefetch1 = 31386,
			.ram = rorb_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3347048386, 1681887177, 2146324741, 3600145123, 4237946593, 3937576896, 3923238413, 1340747836, 4140305397, 1085974489, 861073672, 3740988165, 836219269, 1973628829, 775009492, 292740, 2167910, 41753, 2597906
			},
			.prefetch0 = 31386,
			.prefetch1 = 4975,
			.ram = rorb_final_ram_21,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_21,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "022 ROR.b D6, D2 ec3a",
		.initial = {
			.regs = {
				4133776403, 3902880594, 3723880065, 1225049337, 3615447423, 555288833, 1025087967, 3722808588, 3495135753, 347430264, 3696055959, 767903216, 2870160221, 3801113983, 1154027342, 2708336, 9448320, 42506, 9910192
			},
			.prefetch0 = 60474,
			.prefetch1 = 58028,
			.ram = rorb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4133776403, 3902880594, 3723879939, 1225049337, 3615447423, 555288833, 1025087967, 3722808588, 3495135753, 347430264, 3696055959, 767903216, 2870160221, 3801113983, 1154027342, 2708336, 9448320, 42496, 9910194
			},
			.prefetch0 = 58028,
			.prefetch1 = 5703,
			.ram = rorb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_22,
		.transactions_len = 2,
		.lenght = 68,
	},
	{
		.name = "023 ROR.b 2, D4 e41c",
		.initial = {
			.regs = {
				2021131347, 390854535, 2086426097, 310263485, 2070173523, 3156636533, 446982180, 709179137, 723758122, 1582785335, 3655858552, 1378103163, 1456857738, 1370631671, 2259920631, 9367494, 92416, 41480, 1879258
			},
			.prefetch0 = 58396,
			.prefetch1 = 52365,
			.ram = rorb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2021131347, 390854535, 2086426097, 310263485, 2070173652, 3156636533, 446982180, 709179137, 723758122, 1582785335, 3655858552, 1378103163, 1456857738, 1370631671, 2259920631, 9367494, 92416, 41481, 1879260
			},
			.prefetch0 = 52365,
			.prefetch1 = 23837,
			.ram = rorb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_23,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "024 ROR.b D2, D0 e438",
		.initial = {
			.regs = {
				3739270164, 1212886950, 4049560303, 1963189878, 4190110540, 2855939813, 1237112270, 258779349, 2831348546, 1379471769, 4115195218, 4007211952, 2176328717, 906348128, 656769394, 585282, 4249996, 10002, 1783088
			},
			.prefetch0 = 58424,
			.prefetch1 = 32406,
			.ram = rorb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3739270184, 1212886950, 4049560303, 1963189878, 4190110540, 2855939813, 1237112270, 258779349, 2831348546, 1379471769, 4115195218, 4007211952, 2176328717, 906348128, 656769394, 585282, 4249996, 10000, 1783090
			},
			.prefetch0 = 32406,
			.prefetch1 = 56764,
			.ram = rorb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_24,
		.transactions_len = 2,
		.lenght = 100,
	},
	{
		.name = "025 ROR.b D5, D0 ea38",
		.initial = {
			.regs = {
				2046790292, 66964041, 2719823471, 1506782549, 2745886592, 3636117269, 579809267, 908368345, 512406742, 955184597, 1542429178, 3605505357, 3669812696, 1338973225, 1101969990, 2896130, 1531668, 32796, 1560764
			},
			.prefetch0 = 59960,
			.prefetch1 = 45150,
			.ram = rorb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2046790308, 66964041, 2719823471, 1506782549, 2745886592, 3636117269, 579809267, 908368345, 512406742, 955184597, 1542429178, 3605505357, 3669812696, 1338973225, 1101969990, 2896130, 1531668, 32793, 1560766
			},
			.prefetch0 = 45150,
			.prefetch1 = 472,
			.ram = rorb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_25,
		.transactions_len = 2,
		.lenght = 48,
	},
	{
		.name = "026 ROR.b 8, D3 e01b",
		.initial = {
			.regs = {
				1429359263, 3561902740, 2382850787, 2858138854, 1059170396, 4235049647, 803217660, 2903013488, 3632084820, 2871362229, 2499610706, 3694000772, 495730083, 1300734681, 178596366, 4784772, 10976574, 9234, 1658266
			},
			.prefetch0 = 57371,
			.prefetch1 = 63431,
			.ram = rorb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1429359263, 3561902740, 2382850787, 2858138854, 1059170396, 4235049647, 803217660, 2903013488, 3632084820, 2871362229, 2499610706, 3694000772, 495730083, 1300734681, 178596366, 4784772, 10976574, 9241, 1658268
			},
			.prefetch0 = 63431,
			.prefetch1 = 12239,
			.ram = rorb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_26,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "027 ROR.b 1, D6 e21e",
		.initial = {
			.regs = {
				2382455554, 2811071244, 3793633371, 2123836400, 2662528950, 1241470409, 4025578062, 501448908, 2940011112, 2794512139, 519117044, 2672327376, 2263463711, 2453148589, 666114875, 10716014, 8346080, 41759, 5627328
			},
			.prefetch0 = 57886,
			.prefetch1 = 61163,
			.ram = rorb_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2382455554, 2811071244, 3793633371, 2123836400, 2662528950, 1241470409, 4025578023, 501448908, 2940011112, 2794512139, 519117044, 2672327376, 2263463711, 2453148589, 666114875, 10716014, 8346080, 41744, 5627330
			},
			.prefetch0 = 61163,
			.prefetch1 = 32800,
			.ram = rorb_final_ram_27,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_27,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "028 ROR.b D6, D0 ec38",
		.initial = {
			.regs = {
				3161557165, 1028963597, 3277770798, 3546506195, 1473176493, 3828965011, 2317902839, 3488861412, 2504562124, 2151889420, 1711090185, 3071631279, 3338392515, 3820237029, 296085302, 12814826, 6116696, 8989, 522690
			},
			.prefetch0 = 60472,
			.prefetch1 = 3981,
			.ram = rorb_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3161557083, 1028963597, 3277770798, 3546506195, 1473176493, 3828965011, 2317902839, 3488861412, 2504562124, 2151889420, 1711090185, 3071631279, 3338392515, 3820237029, 296085302, 12814826, 6116696, 8976, 522692
			},
			.prefetch0 = 3981,
			.prefetch1 = 17733,
			.ram = rorb_final_ram_28,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_28,
		.transactions_len = 2,
		.lenght = 116,
	},
	{
		.name = "029 ROR.b 1, D5 e21d",
		.initial = {
			.regs = {
				956625648, 3514017046, 1656339587, 2283243278, 532813803, 193067672, 4197629038, 3747553234, 2147402475, 2644083843, 3298908516, 2143132972, 4193683705, 3559960462, 2184833329, 13411246, 5839816, 42754, 5417970
			},
			.prefetch0 = 57885,
			.prefetch1 = 45924,
			.ram = rorb_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				956625648, 3514017046, 1656339587, 2283243278, 532813803, 193067596, 4197629038, 3747553234, 2147402475, 2644083843, 3298908516, 2143132972, 4193683705, 3559960462, 2184833329, 13411246, 5839816, 42752, 5417972
			},
			.prefetch0 = 45924,
			.prefetch1 = 8335,
			.ram = rorb_final_ram_29,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_29,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "030 ROR.b D6, D5 ec3d",
		.initial = {
			.regs = {
				3579823011, 3600211124, 71227463, 2448989605, 1737763862, 2383479622, 3720735129, 1589536055, 1231743114, 2766442404, 3632444513, 2865434037, 2128245186, 937024479, 3518824555, 610486, 13874286, 40982, 12154056
			},
			.prefetch0 = 60477,
			.prefetch1 = 21406,
			.ram = rorb_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3579823011, 3600211124, 71227463, 2448989605, 1737763862, 2383479587, 3720735129, 1589536055, 1231743114, 2766442404, 3632444513, 2865434037, 2128245186, 937024479, 3518824555, 610486, 13874286, 40976, 12154058
			},
			.prefetch0 = 21406,
			.prefetch1 = 8581,
			.ram = rorb_final_ram_30,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_30,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "031 ROR.b D6, D7 ec3f",
		.initial = {
			.regs = {
				1646643257, 1480866499, 2325800604, 71181987, 3092109732, 4091721547, 3955868370, 575932105, 2724866858, 675592469, 646355603, 2374460863, 2745117169, 84621513, 654190812, 4580172, 5211014, 33543, 5488108
			},
			.prefetch0 = 60479,
			.prefetch1 = 42386,
			.ram = rorb_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1646643257, 1480866499, 2325800604, 71181987, 3092109732, 4091721547, 3955868370, 575932018, 2724866858, 675592469, 646355603, 2374460863, 2745117169, 84621513, 654190812, 4580172, 5211014, 33536, 5488110
			},
			.prefetch0 = 42386,
			.prefetch1 = 6901,
			.ram = rorb_final_ram_31,
			.ram_len = 6,
		},
		.transactions = rorb_transactions_31,
		.transactions_len = 2,
		.lenght = 42,
	},
};

#endif /* RBT_RORB_H */