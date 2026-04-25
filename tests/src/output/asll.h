#ifndef RBT_ASLL_H
#define RBT_ASLL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte asll_initial_ram_0[] = {
		{ .addr = 0xcfcc5c, .byte = 0xe1 },
		{ .addr = 0xcfcc5d, .byte = 0xa2 },
		{ .addr = 0xcfcc5e, .byte = 0x50 },
		{ .addr = 0xcfcc5f, .byte = 0x11 },
		{ .addr = 0xcfcc60, .byte = 0xcc },
		{ .addr = 0xcfcc61, .byte = 0x0e }
};

static const SST_RamByte asll_final_ram_0[] = {
		{ .addr = 0xcfcc5c, .byte = 0xe1 },
		{ .addr = 0xcfcc5d, .byte = 0xa2 },
		{ .addr = 0xcfcc5e, .byte = 0x50 },
		{ .addr = 0xcfcc5f, .byte = 0x11 },
		{ .addr = 0xcfcc60, .byte = 0xcc },
		{ .addr = 0xcfcc61, .byte = 0x0e }
};

static const SST_Transaction asll_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13618272, .data = 52238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte asll_initial_ram_1[] = {
		{ .addr = 0xc387f2, .byte = 0xe3 },
		{ .addr = 0xc387f3, .byte = 0xa7 },
		{ .addr = 0xc387f4, .byte = 0x19 },
		{ .addr = 0xc387f5, .byte = 0xcb },
		{ .addr = 0xc387f6, .byte = 0x4a },
		{ .addr = 0xc387f7, .byte = 0x6b }
};

static const SST_RamByte asll_final_ram_1[] = {
		{ .addr = 0xc387f2, .byte = 0xe3 },
		{ .addr = 0xc387f3, .byte = 0xa7 },
		{ .addr = 0xc387f4, .byte = 0x19 },
		{ .addr = 0xc387f5, .byte = 0xcb },
		{ .addr = 0xc387f6, .byte = 0x4a },
		{ .addr = 0xc387f7, .byte = 0x6b }
};

static const SST_Transaction asll_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12814326, .data = 19051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 128 },
};

static const SST_RamByte asll_initial_ram_2[] = {
		{ .addr = 0xed8eae, .byte = 0xe1 },
		{ .addr = 0xed8eaf, .byte = 0x83 },
		{ .addr = 0xed8eb0, .byte = 0x8a },
		{ .addr = 0xed8eb1, .byte = 0xde },
		{ .addr = 0xed8eb2, .byte = 0x34 },
		{ .addr = 0xed8eb3, .byte = 0x75 }
};

static const SST_RamByte asll_final_ram_2[] = {
		{ .addr = 0xed8eae, .byte = 0xe1 },
		{ .addr = 0xed8eaf, .byte = 0x83 },
		{ .addr = 0xed8eb0, .byte = 0x8a },
		{ .addr = 0xed8eb1, .byte = 0xde },
		{ .addr = 0xed8eb2, .byte = 0x34 },
		{ .addr = 0xed8eb3, .byte = 0x75 }
};

static const SST_Transaction asll_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15568562, .data = 13429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte asll_initial_ram_3[] = {
		{ .addr = 0x38afea, .byte = 0xef },
		{ .addr = 0x38afeb, .byte = 0x86 },
		{ .addr = 0x38afec, .byte = 0x5e },
		{ .addr = 0x38afed, .byte = 0xb3 },
		{ .addr = 0x38afee, .byte = 0x7a },
		{ .addr = 0x38afef, .byte = 0x8d }
};

static const SST_RamByte asll_final_ram_3[] = {
		{ .addr = 0x38afea, .byte = 0xef },
		{ .addr = 0x38afeb, .byte = 0x86 },
		{ .addr = 0x38afec, .byte = 0x5e },
		{ .addr = 0x38afed, .byte = 0xb3 },
		{ .addr = 0x38afee, .byte = 0x7a },
		{ .addr = 0x38afef, .byte = 0x8d }
};

static const SST_Transaction asll_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3715054, .data = 31373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte asll_initial_ram_4[] = {
		{ .addr = 0x3b99ea, .byte = 0xe1 },
		{ .addr = 0x3b99eb, .byte = 0x80 },
		{ .addr = 0x3b99ec, .byte = 0x96 },
		{ .addr = 0x3b99ed, .byte = 0x63 },
		{ .addr = 0x3b99ee, .byte = 0xbc },
		{ .addr = 0x3b99ef, .byte = 0xa1 }
};

static const SST_RamByte asll_final_ram_4[] = {
		{ .addr = 0x3b99ea, .byte = 0xe1 },
		{ .addr = 0x3b99eb, .byte = 0x80 },
		{ .addr = 0x3b99ec, .byte = 0x96 },
		{ .addr = 0x3b99ed, .byte = 0x63 },
		{ .addr = 0x3b99ee, .byte = 0xbc },
		{ .addr = 0x3b99ef, .byte = 0xa1 }
};

static const SST_Transaction asll_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3906030, .data = 48289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte asll_initial_ram_5[] = {
		{ .addr = 0x45be68, .byte = 0xe7 },
		{ .addr = 0x45be69, .byte = 0xa5 },
		{ .addr = 0x45be6a, .byte = 0x86 },
		{ .addr = 0x45be6b, .byte = 0x33 },
		{ .addr = 0x45be6c, .byte = 0xd2 },
		{ .addr = 0x45be6d, .byte = 0xac }
};

static const SST_RamByte asll_final_ram_5[] = {
		{ .addr = 0x45be68, .byte = 0xe7 },
		{ .addr = 0x45be69, .byte = 0xa5 },
		{ .addr = 0x45be6a, .byte = 0x86 },
		{ .addr = 0x45be6b, .byte = 0x33 },
		{ .addr = 0x45be6c, .byte = 0xd2 },
		{ .addr = 0x45be6d, .byte = 0xac }
};

static const SST_Transaction asll_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4570732, .data = 53932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 60 },
};

static const SST_RamByte asll_initial_ram_6[] = {
		{ .addr = 0x2025f8, .byte = 0xe7 },
		{ .addr = 0x2025f9, .byte = 0xa1 },
		{ .addr = 0x2025fa, .byte = 0x37 },
		{ .addr = 0x2025fb, .byte = 0xc4 },
		{ .addr = 0x2025fc, .byte = 0xfa },
		{ .addr = 0x2025fd, .byte = 0x1d }
};

static const SST_RamByte asll_final_ram_6[] = {
		{ .addr = 0x2025f8, .byte = 0xe7 },
		{ .addr = 0x2025f9, .byte = 0xa1 },
		{ .addr = 0x2025fa, .byte = 0x37 },
		{ .addr = 0x2025fb, .byte = 0xc4 },
		{ .addr = 0x2025fc, .byte = 0xfa },
		{ .addr = 0x2025fd, .byte = 0x1d }
};

static const SST_Transaction asll_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2106876, .data = 64029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

static const SST_RamByte asll_initial_ram_7[] = {
		{ .addr = 0xc03132, .byte = 0xed },
		{ .addr = 0xc03133, .byte = 0xa4 },
		{ .addr = 0xc03134, .byte = 0x1c },
		{ .addr = 0xc03135, .byte = 0x4a },
		{ .addr = 0xc03136, .byte = 0x40 },
		{ .addr = 0xc03137, .byte = 0x92 }
};

static const SST_RamByte asll_final_ram_7[] = {
		{ .addr = 0xc03132, .byte = 0xed },
		{ .addr = 0xc03133, .byte = 0xa4 },
		{ .addr = 0xc03134, .byte = 0x1c },
		{ .addr = 0xc03135, .byte = 0x4a },
		{ .addr = 0xc03136, .byte = 0x40 },
		{ .addr = 0xc03137, .byte = 0x92 }
};

static const SST_Transaction asll_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12595510, .data = 16530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte asll_initial_ram_8[] = {
		{ .addr = 0x638e26, .byte = 0xe5 },
		{ .addr = 0x638e27, .byte = 0x83 },
		{ .addr = 0x638e28, .byte = 0xc1 },
		{ .addr = 0x638e29, .byte = 0x7f },
		{ .addr = 0x638e2a, .byte = 0x80 },
		{ .addr = 0x638e2b, .byte = 0xb7 }
};

static const SST_RamByte asll_final_ram_8[] = {
		{ .addr = 0x638e26, .byte = 0xe5 },
		{ .addr = 0x638e27, .byte = 0x83 },
		{ .addr = 0x638e28, .byte = 0xc1 },
		{ .addr = 0x638e29, .byte = 0x7f },
		{ .addr = 0x638e2a, .byte = 0x80 },
		{ .addr = 0x638e2b, .byte = 0xb7 }
};

static const SST_Transaction asll_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6524458, .data = 32951, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte asll_initial_ram_9[] = {
		{ .addr = 0x9b9898, .byte = 0xeb },
		{ .addr = 0x9b9899, .byte = 0xa2 },
		{ .addr = 0x9b989a, .byte = 0x20 },
		{ .addr = 0x9b989b, .byte = 0xf4 },
		{ .addr = 0x9b989c, .byte = 0x63 },
		{ .addr = 0x9b989d, .byte = 0x6d }
};

static const SST_RamByte asll_final_ram_9[] = {
		{ .addr = 0x9b9898, .byte = 0xeb },
		{ .addr = 0x9b9899, .byte = 0xa2 },
		{ .addr = 0x9b989a, .byte = 0x20 },
		{ .addr = 0x9b989b, .byte = 0xf4 },
		{ .addr = 0x9b989c, .byte = 0x63 },
		{ .addr = 0x9b989d, .byte = 0x6d }
};

static const SST_Transaction asll_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10197148, .data = 25453, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte asll_initial_ram_10[] = {
		{ .addr = 0xd2c07e, .byte = 0xe5 },
		{ .addr = 0xd2c07f, .byte = 0x85 },
		{ .addr = 0xd2c080, .byte = 0x5d },
		{ .addr = 0xd2c081, .byte = 0xa8 },
		{ .addr = 0xd2c082, .byte = 0x44 },
		{ .addr = 0xd2c083, .byte = 0xe5 }
};

static const SST_RamByte asll_final_ram_10[] = {
		{ .addr = 0xd2c07e, .byte = 0xe5 },
		{ .addr = 0xd2c07f, .byte = 0x85 },
		{ .addr = 0xd2c080, .byte = 0x5d },
		{ .addr = 0xd2c081, .byte = 0xa8 },
		{ .addr = 0xd2c082, .byte = 0x44 },
		{ .addr = 0xd2c083, .byte = 0xe5 }
};

static const SST_Transaction asll_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13811842, .data = 17637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte asll_initial_ram_11[] = {
		{ .addr = 0xafc72e, .byte = 0xe3 },
		{ .addr = 0xafc72f, .byte = 0x82 },
		{ .addr = 0xafc730, .byte = 0xbb },
		{ .addr = 0xafc731, .byte = 0xbc },
		{ .addr = 0xafc732, .byte = 0xdd },
		{ .addr = 0xafc733, .byte = 0x68 }
};

static const SST_RamByte asll_final_ram_11[] = {
		{ .addr = 0xafc72e, .byte = 0xe3 },
		{ .addr = 0xafc72f, .byte = 0x82 },
		{ .addr = 0xafc730, .byte = 0xbb },
		{ .addr = 0xafc731, .byte = 0xbc },
		{ .addr = 0xafc732, .byte = 0xdd },
		{ .addr = 0xafc733, .byte = 0x68 }
};

static const SST_Transaction asll_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11519794, .data = 56680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asll_initial_ram_12[] = {
		{ .addr = 0x0d0fb4, .byte = 0xef },
		{ .addr = 0x0d0fb5, .byte = 0xa3 },
		{ .addr = 0x0d0fb6, .byte = 0x5a },
		{ .addr = 0x0d0fb7, .byte = 0x4a },
		{ .addr = 0x0d0fb8, .byte = 0x6d },
		{ .addr = 0x0d0fb9, .byte = 0x33 }
};

static const SST_RamByte asll_final_ram_12[] = {
		{ .addr = 0x0d0fb4, .byte = 0xef },
		{ .addr = 0x0d0fb5, .byte = 0xa3 },
		{ .addr = 0x0d0fb6, .byte = 0x5a },
		{ .addr = 0x0d0fb7, .byte = 0x4a },
		{ .addr = 0x0d0fb8, .byte = 0x6d },
		{ .addr = 0x0d0fb9, .byte = 0x33 }
};

static const SST_Transaction asll_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 855992, .data = 27955, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 78 },
};

static const SST_RamByte asll_initial_ram_13[] = {
		{ .addr = 0x071396, .byte = 0xe1 },
		{ .addr = 0x071397, .byte = 0xa6 },
		{ .addr = 0x071398, .byte = 0xfd },
		{ .addr = 0x071399, .byte = 0xad },
		{ .addr = 0x07139a, .byte = 0xdb },
		{ .addr = 0x07139b, .byte = 0x58 }
};

static const SST_RamByte asll_final_ram_13[] = {
		{ .addr = 0x071396, .byte = 0xe1 },
		{ .addr = 0x071397, .byte = 0xa6 },
		{ .addr = 0x071398, .byte = 0xfd },
		{ .addr = 0x071399, .byte = 0xad },
		{ .addr = 0x07139a, .byte = 0xdb },
		{ .addr = 0x07139b, .byte = 0x58 }
};

static const SST_Transaction asll_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 463770, .data = 56152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

static const SST_RamByte asll_initial_ram_14[] = {
		{ .addr = 0xbdbb5e, .byte = 0xe3 },
		{ .addr = 0xbdbb5f, .byte = 0xa3 },
		{ .addr = 0xbdbb60, .byte = 0x52 },
		{ .addr = 0xbdbb61, .byte = 0xdd },
		{ .addr = 0xbdbb62, .byte = 0xd9 },
		{ .addr = 0xbdbb63, .byte = 0x04 }
};

static const SST_RamByte asll_final_ram_14[] = {
		{ .addr = 0xbdbb5e, .byte = 0xe3 },
		{ .addr = 0xbdbb5f, .byte = 0xa3 },
		{ .addr = 0xbdbb60, .byte = 0x52 },
		{ .addr = 0xbdbb61, .byte = 0xdd },
		{ .addr = 0xbdbb62, .byte = 0xd9 },
		{ .addr = 0xbdbb63, .byte = 0x04 }
};

static const SST_Transaction asll_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12434274, .data = 55556, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 90 },
};

static const SST_RamByte asll_initial_ram_15[] = {
		{ .addr = 0xd2608c, .byte = 0xe7 },
		{ .addr = 0xd2608d, .byte = 0xa6 },
		{ .addr = 0xd2608e, .byte = 0xdd },
		{ .addr = 0xd2608f, .byte = 0x1e },
		{ .addr = 0xd26090, .byte = 0x4c },
		{ .addr = 0xd26091, .byte = 0x86 }
};

static const SST_RamByte asll_final_ram_15[] = {
		{ .addr = 0xd2608c, .byte = 0xe7 },
		{ .addr = 0xd2608d, .byte = 0xa6 },
		{ .addr = 0xd2608e, .byte = 0xdd },
		{ .addr = 0xd2608f, .byte = 0x1e },
		{ .addr = 0xd26090, .byte = 0x4c },
		{ .addr = 0xd26091, .byte = 0x86 }
};

static const SST_Transaction asll_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13787280, .data = 19590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 58 },
};

const uint32_t ASLL_TEST_COUNT = 16;
static const SST_TestCase asll[] = {
	{
		.name = "000 ASL.l D0, D2 e1a2",
		.initial = {
			.regs = {
				1665132295, 1860274445, 3303770356, 4143754377, 454961395, 458750985, 2367911195, 3867835807, 1144095669, 1041785141, 2806714504, 3148796705, 2516974797, 2240758846, 2352976153, 6826106, 10380388, 32771, 13618272
			},
			.prefetch0 = 57762,
			.prefetch1 = 20497,
			.ram = asll_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1665132295, 1860274445, 1975810560, 4143754377, 454961395, 458750985, 2367911195, 3867835807, 1144095669, 1041785141, 2806714504, 3148796705, 2516974797, 2240758846, 2352976153, 6826106, 10380388, 32770, 13618274
			},
			.prefetch0 = 20497,
			.prefetch1 = 52238,
			.ram = asll_final_ram_0,
			.ram_len = 6,
		},
		.transactions = asll_transactions_0,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "001 ASL.l D1, D7 e3a7",
		.initial = {
			.regs = {
				118938210, 3874305214, 1871586357, 3581154771, 1361513862, 638281366, 863423066, 879221767, 856260020, 3151941051, 1940340433, 4273493068, 681521456, 2782818922, 797756874, 5472434, 2075018, 10004, 12814326
			},
			.prefetch0 = 58279,
			.prefetch1 = 6603,
			.ram = asll_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				118938210, 3874305214, 1871586357, 3581154771, 1361513862, 638281366, 863423066, 0, 856260020, 3151941051, 1940340433, 4273493068, 681521456, 2782818922, 797756874, 5472434, 2075018, 9990, 12814328
			},
			.prefetch0 = 6603,
			.prefetch1 = 19051,
			.ram = asll_final_ram_1,
			.ram_len = 6,
		},
		.transactions = asll_transactions_1,
		.transactions_len = 2,
		.lenght = 132,
	},
	{
		.name = "002 ASL.l 8, D3 e183",
		.initial = {
			.regs = {
				215576822, 2630599735, 2516102407, 2753057489, 1640341682, 1224195241, 1419689522, 3018216766, 3988804625, 607385502, 386006744, 4118520312, 257005202, 2319653394, 4197327755, 14937418, 6179604, 10006, 15568562
			},
			.prefetch0 = 57731,
			.prefetch1 = 35550,
			.ram = asll_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				215576822, 2630599735, 2516102407, 408080640, 1640341682, 1224195241, 1419689522, 3018216766, 3988804625, 607385502, 386006744, 4118520312, 257005202, 2319653394, 4197327755, 14937418, 6179604, 9986, 15568564
			},
			.prefetch0 = 35550,
			.prefetch1 = 13429,
			.ram = asll_final_ram_2,
			.ram_len = 6,
		},
		.transactions = asll_transactions_2,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "003 ASL.l 7, D6 ef86",
		.initial = {
			.regs = {
				36480486, 263617712, 2497982980, 1166402780, 325020685, 1953814969, 2968656692, 535050603, 241340809, 627716792, 3744910249, 4253199107, 2088590014, 2508617431, 4025276121, 11957802, 3550992, 41734, 3715054
			},
			.prefetch0 = 61318,
			.prefetch1 = 24243,
			.ram = asll_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				36480486, 263617712, 2497982980, 1166402780, 325020685, 1953814969, 2030934528, 535050603, 241340809, 627716792, 3744910249, 4253199107, 2088590014, 2508617431, 4025276121, 11957802, 3550992, 41730, 3715056
			},
			.prefetch0 = 24243,
			.prefetch1 = 31373,
			.ram = asll_final_ram_3,
			.ram_len = 6,
		},
		.transactions = asll_transactions_3,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "004 ASL.l 8, D0 e180",
		.initial = {
			.regs = {
				3234376845, 3101421824, 2381053492, 1657788768, 980023438, 3769867172, 2037928080, 572941749, 332502903, 2571148415, 939844904, 479642922, 1406245825, 3970516123, 2757293731, 14705984, 14136534, 42756, 3906030
			},
			.prefetch0 = 57728,
			.prefetch1 = 38499,
			.ram = asll_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3366751488, 3101421824, 2381053492, 1657788768, 980023438, 3769867172, 2037928080, 572941749, 332502903, 2571148415, 939844904, 479642922, 1406245825, 3970516123, 2757293731, 14705984, 14136534, 42762, 3906032
			},
			.prefetch0 = 38499,
			.prefetch1 = 48289,
			.ram = asll_final_ram_4,
			.ram_len = 6,
		},
		.transactions = asll_transactions_4,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "005 ASL.l D3, D5 e7a5",
		.initial = {
			.regs = {
				319968816, 2695642182, 1591590292, 2618445276, 167062699, 3917206686, 1407475599, 2908352514, 166087671, 963325895, 1000623011, 3915287031, 2789129367, 1022394328, 202578259, 1599238, 14725218, 33306, 4570732
			},
			.prefetch0 = 59301,
			.prefetch1 = 34355,
			.ram = asll_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				319968816, 2695642182, 1591590292, 2618445276, 167062699, 3758096384, 1407475599, 2908352514, 166087671, 963325895, 1000623011, 3915287031, 2789129367, 1022394328, 202578259, 1599238, 14725218, 33307, 4570734
			},
			.prefetch0 = 34355,
			.prefetch1 = 53932,
			.ram = asll_final_ram_5,
			.ram_len = 6,
		},
		.transactions = asll_transactions_5,
		.transactions_len = 2,
		.lenght = 64,
	},
	{
		.name = "006 ASL.l D3, D1 e7a1",
		.initial = {
			.regs = {
				336377546, 351214242, 4085768694, 1526309450, 265710267, 472339093, 1388930495, 3319330493, 3272607157, 1606585025, 1071012442, 804707957, 3017891806, 2931535868, 658176798, 7307698, 268366, 42516, 2106876
			},
			.prefetch0 = 59297,
			.prefetch1 = 14276,
			.ram = asll_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				336377546, 3161098240, 4085768694, 1526309450, 265710267, 472339093, 1388930495, 3319330493, 3272607157, 1606585025, 1071012442, 804707957, 3017891806, 2931535868, 658176798, 7307698, 268366, 42523, 2106878
			},
			.prefetch0 = 14276,
			.prefetch1 = 64029,
			.ram = asll_final_ram_6,
			.ram_len = 6,
		},
		.transactions = asll_transactions_6,
		.transactions_len = 2,
		.lenght = 28,
	},
	{
		.name = "007 ASL.l D6, D4 eda4",
		.initial = {
			.regs = {
				713500915, 1603448293, 2494674248, 203280789, 3932912212, 1326410635, 540288832, 2733455625, 581670824, 1277945750, 1673199948, 3408493155, 2352463451, 4056980485, 205171027, 4026348, 14184512, 260, 12595510
			},
			.prefetch0 = 60836,
			.prefetch1 = 7242,
			.ram = asll_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				713500915, 1603448293, 2494674248, 203280789, 3932912212, 1326410635, 540288832, 2733455625, 581670824, 1277945750, 1673199948, 3408493155, 2352463451, 4056980485, 205171027, 4026348, 14184512, 264, 12595512
			},
			.prefetch0 = 7242,
			.prefetch1 = 16530,
			.ram = asll_final_ram_7,
			.ram_len = 6,
		},
		.transactions = asll_transactions_7,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "008 ASL.l 2, D3 e583",
		.initial = {
			.regs = {
				1417996167, 2785999916, 3548522923, 2202471465, 3678327031, 2021902454, 1590062042, 31871292, 210939394, 2544506004, 1329310909, 3534462756, 2374391859, 105588664, 1824346467, 261356, 10196156, 33567, 6524458
			},
			.prefetch0 = 58755,
			.prefetch1 = 49535,
			.ram = asll_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1417996167, 2785999916, 3548522923, 219951268, 3678327031, 2021902454, 1590062042, 31871292, 210939394, 2544506004, 1329310909, 3534462756, 2374391859, 105588664, 1824346467, 261356, 10196156, 33538, 6524460
			},
			.prefetch0 = 49535,
			.prefetch1 = 32951,
			.ram = asll_final_ram_8,
			.ram_len = 6,
		},
		.transactions = asll_transactions_8,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "009 ASL.l D5, D2 eba2",
		.initial = {
			.regs = {
				3665963923, 3910707135, 2124827746, 3180275016, 1868060002, 766808470, 1711913705, 2574169293, 3802861375, 3109993273, 306575320, 39687689, 386662228, 1420241842, 1789930210, 10317574, 1931112, 1793, 10197148
			},
			.prefetch0 = 60322,
			.prefetch1 = 8436,
			.ram = asll_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3665963923, 3910707135, 411041792, 3180275016, 1868060002, 766808470, 1711913705, 2574169293, 3802861375, 3109993273, 306575320, 39687689, 386662228, 1420241842, 1789930210, 10317574, 1931112, 1811, 10197150
			},
			.prefetch0 = 8436,
			.prefetch1 = 25453,
			.ram = asll_final_ram_9,
			.ram_len = 6,
		},
		.transactions = asll_transactions_9,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "010 ASL.l 2, D5 e585",
		.initial = {
			.regs = {
				725592651, 3767361423, 2719446655, 3745744632, 3076985, 1694040038, 1990285724, 2017550250, 715977059, 418508590, 2565673234, 1045778932, 3780535298, 2595286949, 2645162757, 9412800, 13941776, 42012, 13811842
			},
			.prefetch0 = 58757,
			.prefetch1 = 23976,
			.ram = asll_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				725592651, 3767361423, 2719446655, 3745744632, 3076985, 2481192856, 1990285724, 2017550250, 715977059, 418508590, 2565673234, 1045778932, 3780535298, 2595286949, 2645162757, 9412800, 13941776, 42011, 13811844
			},
			.prefetch0 = 23976,
			.prefetch1 = 17637,
			.ram = asll_final_ram_10,
			.ram_len = 6,
		},
		.transactions = asll_transactions_10,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "011 ASL.l 1, D2 e382",
		.initial = {
			.regs = {
				2238333002, 1953539611, 2896070588, 1226401195, 3358407137, 2849795685, 3176461728, 532081146, 2824019004, 1575090558, 4020145443, 867579184, 3497973319, 403106414, 1655335636, 1212376, 14502688, 8221, 11519794
			},
			.prefetch0 = 58242,
			.prefetch1 = 48060,
			.ram = asll_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2238333002, 1953539611, 1497173880, 1226401195, 3358407137, 2849795685, 3176461728, 532081146, 2824019004, 1575090558, 4020145443, 867579184, 3497973319, 403106414, 1655335636, 1212376, 14502688, 8211, 11519796
			},
			.prefetch0 = 48060,
			.prefetch1 = 56680,
			.ram = asll_final_ram_11,
			.ram_len = 6,
		},
		.transactions = asll_transactions_11,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "012 ASL.l D7, D3 efa3",
		.initial = {
			.regs = {
				704154758, 2615993734, 1725639029, 390268122, 4085970068, 3478371750, 728823656, 2794787237, 2935218922, 2725212949, 2104788797, 1195619927, 604609051, 901649858, 2241511437, 9700688, 10648850, 9994, 855992
			},
			.prefetch0 = 61347,
			.prefetch1 = 23114,
			.ram = asll_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				704154758, 2615993734, 1725639029, 0, 4085970068, 3478371750, 728823656, 2794787237, 2935218922, 2725212949, 2104788797, 1195619927, 604609051, 901649858, 2241511437, 9700688, 10648850, 9990, 855994
			},
			.prefetch0 = 23114,
			.prefetch1 = 27955,
			.ram = asll_final_ram_12,
			.ram_len = 6,
		},
		.transactions = asll_transactions_12,
		.transactions_len = 2,
		.lenght = 82,
	},
	{
		.name = "013 ASL.l D0, D6 e1a6",
		.initial = {
			.regs = {
				3833539259, 386093789, 2234966932, 1575322112, 1362267275, 1064476610, 2957855524, 1652251900, 702671568, 957984568, 328691744, 1421564364, 2311596215, 1762040315, 2136041966, 6319984, 13344014, 34329, 463770
			},
			.prefetch0 = 57766,
			.prefetch1 = 64941,
			.ram = asll_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3833539259, 386093789, 2234966932, 1575322112, 1362267275, 1064476610, 0, 1652251900, 702671568, 957984568, 328691744, 1421564364, 2311596215, 1762040315, 2136041966, 6319984, 13344014, 34310, 463772
			},
			.prefetch0 = 64941,
			.prefetch1 = 56152,
			.ram = asll_final_ram_13,
			.ram_len = 6,
		},
		.transactions = asll_transactions_13,
		.transactions_len = 2,
		.lenght = 126,
	},
	{
		.name = "014 ASL.l D1, D3 e3a3",
		.initial = {
			.regs = {
				4158296620, 717797355, 1784419567, 3139285153, 3723661669, 3218191261, 3754299067, 688267094, 2785344701, 3054987556, 2466958392, 2363603682, 444269406, 1776403635, 1776729871, 4687494, 9130844, 1563, 12434274
			},
			.prefetch0 = 58275,
			.prefetch1 = 21213,
			.ram = asll_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4158296620, 717797355, 1784419567, 0, 3723661669, 3218191261, 3754299067, 688267094, 2785344701, 3054987556, 2466958392, 2363603682, 444269406, 1776403635, 1776729871, 4687494, 9130844, 1542, 12434276
			},
			.prefetch0 = 21213,
			.prefetch1 = 55556,
			.ram = asll_final_ram_14,
			.ram_len = 6,
		},
		.transactions = asll_transactions_14,
		.transactions_len = 2,
		.lenght = 94,
	},
	{
		.name = "015 ASL.l D3, D6 e7a6",
		.initial = {
			.regs = {
				3590024838, 3895933290, 2368893634, 2777538523, 387316690, 533342577, 2269767489, 2345695619, 3331244527, 1920827147, 1752962638, 1059435869, 109778493, 746257531, 2434098221, 7990476, 654464, 42783, 13787280
			},
			.prefetch0 = 59302,
			.prefetch1 = 56606,
			.ram = asll_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3590024838, 3895933290, 2368893634, 2777538523, 387316690, 533342577, 134217728, 2345695619, 3331244527, 1920827147, 1752962638, 1059435869, 109778493, 746257531, 2434098221, 7990476, 654464, 42754, 13787282
			},
			.prefetch0 = 56606,
			.prefetch1 = 19590,
			.ram = asll_final_ram_15,
			.ram_len = 6,
		},
		.transactions = asll_transactions_15,
		.transactions_len = 2,
		.lenght = 62,
	},
};

#endif /* RBT_ASLL_H */