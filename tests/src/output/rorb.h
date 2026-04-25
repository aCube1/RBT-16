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

const uint32_t RORB_TEST_COUNT = 16;
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
};

#endif /* RBT_RORB_H */