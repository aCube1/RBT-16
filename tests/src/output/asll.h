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

static const SST_RamByte asll_initial_ram_16[] = {
		{ .addr = 0x2733f2, .byte = 0xe1 },
		{ .addr = 0x2733f3, .byte = 0xa4 },
		{ .addr = 0x2733f4, .byte = 0x0a },
		{ .addr = 0x2733f5, .byte = 0x00 },
		{ .addr = 0x2733f6, .byte = 0x2b },
		{ .addr = 0x2733f7, .byte = 0xbd }
};

static const SST_RamByte asll_final_ram_16[] = {
		{ .addr = 0x2733f2, .byte = 0xe1 },
		{ .addr = 0x2733f3, .byte = 0xa4 },
		{ .addr = 0x2733f4, .byte = 0x0a },
		{ .addr = 0x2733f5, .byte = 0x00 },
		{ .addr = 0x2733f6, .byte = 0x2b },
		{ .addr = 0x2733f7, .byte = 0xbd }
};

static const SST_Transaction asll_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2569206, .data = 11197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 72 },
};

static const SST_RamByte asll_initial_ram_17[] = {
		{ .addr = 0xa36db0, .byte = 0xe1 },
		{ .addr = 0xa36db1, .byte = 0x85 },
		{ .addr = 0xa36db2, .byte = 0x22 },
		{ .addr = 0xa36db3, .byte = 0xf2 },
		{ .addr = 0xa36db4, .byte = 0x51 },
		{ .addr = 0xa36db5, .byte = 0x7e }
};

static const SST_RamByte asll_final_ram_17[] = {
		{ .addr = 0xa36db0, .byte = 0xe1 },
		{ .addr = 0xa36db1, .byte = 0x85 },
		{ .addr = 0xa36db2, .byte = 0x22 },
		{ .addr = 0xa36db3, .byte = 0xf2 },
		{ .addr = 0xa36db4, .byte = 0x51 },
		{ .addr = 0xa36db5, .byte = 0x7e }
};

static const SST_Transaction asll_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10710452, .data = 20862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte asll_initial_ram_18[] = {
		{ .addr = 0x639632, .byte = 0xef },
		{ .addr = 0x639633, .byte = 0x81 },
		{ .addr = 0x639634, .byte = 0x7b },
		{ .addr = 0x639635, .byte = 0xe3 },
		{ .addr = 0x639636, .byte = 0x07 },
		{ .addr = 0x639637, .byte = 0x65 }
};

static const SST_RamByte asll_final_ram_18[] = {
		{ .addr = 0x639632, .byte = 0xef },
		{ .addr = 0x639633, .byte = 0x81 },
		{ .addr = 0x639634, .byte = 0x7b },
		{ .addr = 0x639635, .byte = 0xe3 },
		{ .addr = 0x639636, .byte = 0x07 },
		{ .addr = 0x639637, .byte = 0x65 }
};

static const SST_Transaction asll_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6526518, .data = 1893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte asll_initial_ram_19[] = {
		{ .addr = 0x316338, .byte = 0xe9 },
		{ .addr = 0x316339, .byte = 0xa5 },
		{ .addr = 0x31633a, .byte = 0xd6 },
		{ .addr = 0x31633b, .byte = 0x21 },
		{ .addr = 0x31633c, .byte = 0x99 },
		{ .addr = 0x31633d, .byte = 0x83 }
};

static const SST_RamByte asll_final_ram_19[] = {
		{ .addr = 0x316338, .byte = 0xe9 },
		{ .addr = 0x316339, .byte = 0xa5 },
		{ .addr = 0x31633a, .byte = 0xd6 },
		{ .addr = 0x31633b, .byte = 0x21 },
		{ .addr = 0x31633c, .byte = 0x99 },
		{ .addr = 0x31633d, .byte = 0x83 }
};

static const SST_Transaction asll_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3236668, .data = 39299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 66 },
};

static const SST_RamByte asll_initial_ram_20[] = {
		{ .addr = 0xc52112, .byte = 0xe3 },
		{ .addr = 0xc52113, .byte = 0x84 },
		{ .addr = 0xc52114, .byte = 0xbe },
		{ .addr = 0xc52115, .byte = 0x0d },
		{ .addr = 0xc52116, .byte = 0xd6 },
		{ .addr = 0xc52117, .byte = 0xc7 }
};

static const SST_RamByte asll_final_ram_20[] = {
		{ .addr = 0xc52112, .byte = 0xe3 },
		{ .addr = 0xc52113, .byte = 0x84 },
		{ .addr = 0xc52114, .byte = 0xbe },
		{ .addr = 0xc52115, .byte = 0x0d },
		{ .addr = 0xc52116, .byte = 0xd6 },
		{ .addr = 0xc52117, .byte = 0xc7 }
};

static const SST_Transaction asll_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12919062, .data = 54983, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asll_initial_ram_21[] = {
		{ .addr = 0x2d7dd4, .byte = 0xef },
		{ .addr = 0x2d7dd5, .byte = 0xa1 },
		{ .addr = 0x2d7dd6, .byte = 0x53 },
		{ .addr = 0x2d7dd7, .byte = 0x84 },
		{ .addr = 0x2d7dd8, .byte = 0xe5 },
		{ .addr = 0x2d7dd9, .byte = 0x05 }
};

static const SST_RamByte asll_final_ram_21[] = {
		{ .addr = 0x2d7dd4, .byte = 0xef },
		{ .addr = 0x2d7dd5, .byte = 0xa1 },
		{ .addr = 0x2d7dd6, .byte = 0x53 },
		{ .addr = 0x2d7dd7, .byte = 0x84 },
		{ .addr = 0x2d7dd8, .byte = 0xe5 },
		{ .addr = 0x2d7dd9, .byte = 0x05 }
};

static const SST_Transaction asll_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2981336, .data = 58629, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte asll_initial_ram_22[] = {
		{ .addr = 0x18e092, .byte = 0xe1 },
		{ .addr = 0x18e093, .byte = 0x83 },
		{ .addr = 0x18e094, .byte = 0x6b },
		{ .addr = 0x18e095, .byte = 0x8d },
		{ .addr = 0x18e096, .byte = 0xe0 },
		{ .addr = 0x18e097, .byte = 0x3a }
};

static const SST_RamByte asll_final_ram_22[] = {
		{ .addr = 0x18e092, .byte = 0xe1 },
		{ .addr = 0x18e093, .byte = 0x83 },
		{ .addr = 0x18e094, .byte = 0x6b },
		{ .addr = 0x18e095, .byte = 0x8d },
		{ .addr = 0x18e096, .byte = 0xe0 },
		{ .addr = 0x18e097, .byte = 0x3a }
};

static const SST_Transaction asll_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1630358, .data = 57402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte asll_initial_ram_23[] = {
		{ .addr = 0x3f091c, .byte = 0xe7 },
		{ .addr = 0x3f091d, .byte = 0xa0 },
		{ .addr = 0x3f091e, .byte = 0xd0 },
		{ .addr = 0x3f091f, .byte = 0x71 },
		{ .addr = 0x3f0920, .byte = 0x8e },
		{ .addr = 0x3f0921, .byte = 0xcf }
};

static const SST_RamByte asll_final_ram_23[] = {
		{ .addr = 0x3f091c, .byte = 0xe7 },
		{ .addr = 0x3f091d, .byte = 0xa0 },
		{ .addr = 0x3f091e, .byte = 0xd0 },
		{ .addr = 0x3f091f, .byte = 0x71 },
		{ .addr = 0x3f0920, .byte = 0x8e },
		{ .addr = 0x3f0921, .byte = 0xcf }
};

static const SST_Transaction asll_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4131104, .data = 36559, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asll_initial_ram_24[] = {
		{ .addr = 0x7cc62e, .byte = 0xef },
		{ .addr = 0x7cc62f, .byte = 0x82 },
		{ .addr = 0x7cc630, .byte = 0x69 },
		{ .addr = 0x7cc631, .byte = 0x12 },
		{ .addr = 0x7cc632, .byte = 0xa1 },
		{ .addr = 0x7cc633, .byte = 0x63 }
};

static const SST_RamByte asll_final_ram_24[] = {
		{ .addr = 0x7cc62e, .byte = 0xef },
		{ .addr = 0x7cc62f, .byte = 0x82 },
		{ .addr = 0x7cc630, .byte = 0x69 },
		{ .addr = 0x7cc631, .byte = 0x12 },
		{ .addr = 0x7cc632, .byte = 0xa1 },
		{ .addr = 0x7cc633, .byte = 0x63 }
};

static const SST_Transaction asll_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8177202, .data = 41315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte asll_initial_ram_25[] = {
		{ .addr = 0x37ff4c, .byte = 0xe9 },
		{ .addr = 0x37ff4d, .byte = 0xa6 },
		{ .addr = 0x37ff4e, .byte = 0x0e },
		{ .addr = 0x37ff4f, .byte = 0x58 },
		{ .addr = 0x37ff50, .byte = 0x3e },
		{ .addr = 0x37ff51, .byte = 0xda }
};

static const SST_RamByte asll_final_ram_25[] = {
		{ .addr = 0x37ff4c, .byte = 0xe9 },
		{ .addr = 0x37ff4d, .byte = 0xa6 },
		{ .addr = 0x37ff4e, .byte = 0x0e },
		{ .addr = 0x37ff4f, .byte = 0x58 },
		{ .addr = 0x37ff50, .byte = 0x3e },
		{ .addr = 0x37ff51, .byte = 0xda }
};

static const SST_Transaction asll_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3669840, .data = 16090, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte asll_initial_ram_26[] = {
		{ .addr = 0x77015a, .byte = 0xe1 },
		{ .addr = 0x77015b, .byte = 0xa0 },
		{ .addr = 0x77015c, .byte = 0x8e },
		{ .addr = 0x77015d, .byte = 0x02 },
		{ .addr = 0x77015e, .byte = 0x79 },
		{ .addr = 0x77015f, .byte = 0x4e }
};

static const SST_RamByte asll_final_ram_26[] = {
		{ .addr = 0x77015a, .byte = 0xe1 },
		{ .addr = 0x77015b, .byte = 0xa0 },
		{ .addr = 0x77015c, .byte = 0x8e },
		{ .addr = 0x77015d, .byte = 0x02 },
		{ .addr = 0x77015e, .byte = 0x79 },
		{ .addr = 0x77015f, .byte = 0x4e }
};

static const SST_Transaction asll_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7799134, .data = 31054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 32 },
};

static const SST_RamByte asll_initial_ram_27[] = {
		{ .addr = 0x42b750, .byte = 0xeb },
		{ .addr = 0x42b751, .byte = 0x85 },
		{ .addr = 0x42b752, .byte = 0xea },
		{ .addr = 0x42b753, .byte = 0xe8 },
		{ .addr = 0x42b754, .byte = 0xa9 },
		{ .addr = 0x42b755, .byte = 0x82 }
};

static const SST_RamByte asll_final_ram_27[] = {
		{ .addr = 0x42b750, .byte = 0xeb },
		{ .addr = 0x42b751, .byte = 0x85 },
		{ .addr = 0x42b752, .byte = 0xea },
		{ .addr = 0x42b753, .byte = 0xe8 },
		{ .addr = 0x42b754, .byte = 0xa9 },
		{ .addr = 0x42b755, .byte = 0x82 }
};

static const SST_Transaction asll_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4372308, .data = 43394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asll_initial_ram_28[] = {
		{ .addr = 0x36c7fa, .byte = 0xef },
		{ .addr = 0x36c7fb, .byte = 0x83 },
		{ .addr = 0x36c7fc, .byte = 0xab },
		{ .addr = 0x36c7fd, .byte = 0x56 },
		{ .addr = 0x36c7fe, .byte = 0x19 },
		{ .addr = 0x36c7ff, .byte = 0x04 }
};

static const SST_RamByte asll_final_ram_28[] = {
		{ .addr = 0x36c7fa, .byte = 0xef },
		{ .addr = 0x36c7fb, .byte = 0x83 },
		{ .addr = 0x36c7fc, .byte = 0xab },
		{ .addr = 0x36c7fd, .byte = 0x56 },
		{ .addr = 0x36c7fe, .byte = 0x19 },
		{ .addr = 0x36c7ff, .byte = 0x04 }
};

static const SST_Transaction asll_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3590142, .data = 6404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte asll_initial_ram_29[] = {
		{ .addr = 0xc052f8, .byte = 0xe1 },
		{ .addr = 0xc052f9, .byte = 0xa7 },
		{ .addr = 0xc052fa, .byte = 0x64 },
		{ .addr = 0xc052fb, .byte = 0x8d },
		{ .addr = 0xc052fc, .byte = 0xca },
		{ .addr = 0xc052fd, .byte = 0x42 }
};

static const SST_RamByte asll_final_ram_29[] = {
		{ .addr = 0xc052f8, .byte = 0xe1 },
		{ .addr = 0xc052f9, .byte = 0xa7 },
		{ .addr = 0xc052fa, .byte = 0x64 },
		{ .addr = 0xc052fb, .byte = 0x8d },
		{ .addr = 0xc052fc, .byte = 0xca },
		{ .addr = 0xc052fd, .byte = 0x42 }
};

static const SST_Transaction asll_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12604156, .data = 51778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 70 },
};

static const SST_RamByte asll_initial_ram_30[] = {
		{ .addr = 0xd6c76e, .byte = 0xe9 },
		{ .addr = 0xd6c76f, .byte = 0x83 },
		{ .addr = 0xd6c770, .byte = 0x3d },
		{ .addr = 0xd6c771, .byte = 0x24 },
		{ .addr = 0xd6c772, .byte = 0xaa },
		{ .addr = 0xd6c773, .byte = 0x1f }
};

static const SST_RamByte asll_final_ram_30[] = {
		{ .addr = 0xd6c76e, .byte = 0xe9 },
		{ .addr = 0xd6c76f, .byte = 0x83 },
		{ .addr = 0xd6c770, .byte = 0x3d },
		{ .addr = 0xd6c771, .byte = 0x24 },
		{ .addr = 0xd6c772, .byte = 0xaa },
		{ .addr = 0xd6c773, .byte = 0x1f }
};

static const SST_Transaction asll_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14075762, .data = 43551, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte asll_initial_ram_31[] = {
		{ .addr = 0x225b9c, .byte = 0xed },
		{ .addr = 0x225b9d, .byte = 0xa1 },
		{ .addr = 0x225b9e, .byte = 0xb7 },
		{ .addr = 0x225b9f, .byte = 0x7f },
		{ .addr = 0x225ba0, .byte = 0x21 },
		{ .addr = 0x225ba1, .byte = 0xa7 }
};

static const SST_RamByte asll_final_ram_31[] = {
		{ .addr = 0x225b9c, .byte = 0xed },
		{ .addr = 0x225b9d, .byte = 0xa1 },
		{ .addr = 0x225b9e, .byte = 0xb7 },
		{ .addr = 0x225b9f, .byte = 0x7f },
		{ .addr = 0x225ba0, .byte = 0x21 },
		{ .addr = 0x225ba1, .byte = 0xa7 }
};

static const SST_Transaction asll_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2251680, .data = 8615, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

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
	{
		.name = "016 ASL.l D0, D4 e1a4",
		.initial = {
			.regs = {
				4242033954, 1673515779, 2848689471, 1179192467, 2822366715, 3865501378, 3056093469, 117063329, 804080913, 3844982750, 893310507, 2480985578, 427652331, 1325001953, 4201800143, 13060906, 14017104, 1798, 2569206
			},
			.prefetch0 = 57764,
			.prefetch1 = 2560,
			.ram = asll_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4242033954, 1673515779, 2848689471, 1179192467, 0, 3865501378, 3056093469, 117063329, 804080913, 3844982750, 893310507, 2480985578, 427652331, 1325001953, 4201800143, 13060906, 14017104, 1798, 2569208
			},
			.prefetch0 = 2560,
			.prefetch1 = 11197,
			.ram = asll_final_ram_16,
			.ram_len = 6,
		},
		.transactions = asll_transactions_16,
		.transactions_len = 2,
		.lenght = 76,
	},
	{
		.name = "017 ASL.l 8, D5 e185",
		.initial = {
			.regs = {
				3763855290, 3910577474, 347386754, 3435664405, 1445506965, 282215190, 1462301649, 2621777853, 2177124744, 2779554673, 2162625397, 2362901747, 1674170790, 2124788722, 3929499173, 2317242, 3873146, 790, 10710452
			},
			.prefetch0 = 57733,
			.prefetch1 = 8946,
			.ram = asll_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3763855290, 3910577474, 347386754, 3435664405, 1445506965, 3527611904, 1462301649, 2621777853, 2177124744, 2779554673, 2162625397, 2362901747, 1674170790, 2124788722, 3929499173, 2317242, 3873146, 778, 10710454
			},
			.prefetch0 = 8946,
			.prefetch1 = 20862,
			.ram = asll_final_ram_17,
			.ram_len = 6,
		},
		.transactions = asll_transactions_17,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "018 ASL.l 7, D1 ef81",
		.initial = {
			.regs = {
				2953656515, 2032036835, 3456316537, 4054287464, 1666205392, 1457477282, 3603022820, 4125107818, 2299464920, 444765495, 2087974951, 3601631851, 4247169887, 1394907787, 2161285665, 12817088, 10786782, 42773, 6526518
			},
			.prefetch0 = 61313,
			.prefetch1 = 31715,
			.ram = asll_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2953656515, 2402677120, 3456316537, 4054287464, 1666205392, 1457477282, 3603022820, 4125107818, 2299464920, 444765495, 2087974951, 3601631851, 4247169887, 1394907787, 2161285665, 12817088, 10786782, 42762, 6526520
			},
			.prefetch0 = 31715,
			.prefetch1 = 1893,
			.ram = asll_final_ram_18,
			.ram_len = 6,
		},
		.transactions = asll_transactions_18,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "019 ASL.l D4, D5 e9a5",
		.initial = {
			.regs = {
				26166689, 1552295448, 2741778116, 1182468252, 405567455, 403211301, 2679006080, 232055168, 4142393894, 1700657563, 24491485, 1168821609, 2287703418, 427362050, 3669563297, 15313228, 16701546, 42760, 3236668
			},
			.prefetch0 = 59813,
			.prefetch1 = 54817,
			.ram = asll_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				26166689, 1552295448, 2741778116, 1182468252, 405567455, 2147483648, 2679006080, 232055168, 4142393894, 1700657563, 24491485, 1168821609, 2287703418, 427362050, 3669563297, 15313228, 16701546, 42762, 3236670
			},
			.prefetch0 = 54817,
			.prefetch1 = 39299,
			.ram = asll_final_ram_19,
			.ram_len = 6,
		},
		.transactions = asll_transactions_19,
		.transactions_len = 2,
		.lenght = 70,
	},
	{
		.name = "020 ASL.l 1, D4 e384",
		.initial = {
			.regs = {
				401643116, 1159627075, 1599028968, 135475597, 1077842700, 2222443917, 1108066939, 652965082, 2836838776, 3816315339, 4207465089, 1281421021, 4229974636, 3835963792, 1076715122, 4284820, 13023414, 8218, 12919062
			},
			.prefetch0 = 58244,
			.prefetch1 = 48653,
			.ram = asll_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				401643116, 1159627075, 1599028968, 135475597, 2155685400, 2222443917, 1108066939, 652965082, 2836838776, 3816315339, 4207465089, 1281421021, 4229974636, 3835963792, 1076715122, 4284820, 13023414, 8202, 12919064
			},
			.prefetch0 = 48653,
			.prefetch1 = 54983,
			.ram = asll_final_ram_20,
			.ram_len = 6,
		},
		.transactions = asll_transactions_20,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "021 ASL.l D7, D1 efa1",
		.initial = {
			.regs = {
				1708398583, 4158521172, 1237441484, 2354417012, 3571566707, 1642807470, 1303206652, 486841475, 3782659763, 4011128867, 4051956311, 1733363042, 2773644747, 3674485049, 1775957457, 8887782, 6300174, 9222, 2981336
			},
			.prefetch0 = 61345,
			.prefetch1 = 21380,
			.ram = asll_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1708398583, 3203398304, 1237441484, 2354417012, 3571566707, 1642807470, 1303206652, 486841475, 3782659763, 4011128867, 4051956311, 1733363042, 2773644747, 3674485049, 1775957457, 8887782, 6300174, 9241, 2981338
			},
			.prefetch0 = 21380,
			.prefetch1 = 58629,
			.ram = asll_final_ram_21,
			.ram_len = 6,
		},
		.transactions = asll_transactions_21,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "022 ASL.l 8, D3 e183",
		.initial = {
			.regs = {
				1699384134, 586050949, 4066362518, 883126999, 880734689, 4246359465, 2682112181, 169549473, 2503682389, 2356654485, 353320238, 3427744401, 3809032356, 2861462580, 3527212870, 88070, 10631690, 9239, 1630358
			},
			.prefetch0 = 57731,
			.prefetch1 = 27533,
			.ram = asll_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1699384134, 586050949, 4066362518, 2742212352, 880734689, 4246359465, 2682112181, 169549473, 2503682389, 2356654485, 353320238, 3427744401, 3809032356, 2861462580, 3527212870, 88070, 10631690, 9226, 1630360
			},
			.prefetch0 = 27533,
			.prefetch1 = 57402,
			.ram = asll_final_ram_22,
			.ram_len = 6,
		},
		.transactions = asll_transactions_22,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "023 ASL.l D3, D0 e7a0",
		.initial = {
			.regs = {
				1208764861, 2399036838, 355213104, 455154757, 88460162, 1410142870, 2250297504, 3277505673, 2365852433, 1830442027, 3038218468, 2697881786, 595787830, 3481154836, 3546895934, 10948322, 11765238, 34578, 4131104
			},
			.prefetch0 = 59296,
			.prefetch1 = 53361,
			.ram = asll_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				25769888, 2399036838, 355213104, 455154757, 88460162, 1410142870, 2250297504, 3277505673, 2365852433, 1830442027, 3038218468, 2697881786, 595787830, 3481154836, 3546895934, 10948322, 11765238, 34579, 4131106
			},
			.prefetch0 = 53361,
			.prefetch1 = 36559,
			.ram = asll_final_ram_23,
			.ram_len = 6,
		},
		.transactions = asll_transactions_23,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "024 ASL.l 7, D2 ef82",
		.initial = {
			.regs = {
				3598137139, 1971795541, 2839150039, 1372431104, 2130307707, 2797026279, 943261544, 2066304174, 3385663828, 902769094, 2612895546, 2725479304, 2971653792, 724073733, 2524744722, 3532850, 12011602, 42771, 8177202
			},
			.prefetch0 = 61314,
			.prefetch1 = 26898,
			.ram = asll_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3598137139, 1971795541, 2633952128, 1372431104, 2130307707, 2797026279, 943261544, 2066304174, 3385663828, 902769094, 2612895546, 2725479304, 2971653792, 724073733, 2524744722, 3532850, 12011602, 42762, 8177204
			},
			.prefetch0 = 26898,
			.prefetch1 = 41315,
			.ram = asll_final_ram_24,
			.ram_len = 6,
		},
		.transactions = asll_transactions_24,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "025 ASL.l D4, D6 e9a6",
		.initial = {
			.regs = {
				558588807, 1808389581, 1538056130, 964080643, 2601791957, 679221659, 94937016, 1122490894, 369993636, 591681608, 2138355894, 3825499305, 4176247204, 1419582962, 3181997701, 6912338, 302584, 33300, 3669840
			},
			.prefetch0 = 59814,
			.prefetch1 = 3672,
			.ram = asll_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				558588807, 1808389581, 1538056130, 964080643, 2601791957, 679221659, 4143972352, 1122490894, 369993636, 591681608, 2138355894, 3825499305, 4176247204, 1419582962, 3181997701, 6912338, 302584, 33307, 3669842
			},
			.prefetch0 = 3672,
			.prefetch1 = 16090,
			.ram = asll_final_ram_25,
			.ram_len = 6,
		},
		.transactions = asll_transactions_25,
		.transactions_len = 2,
		.lenght = 50,
	},
	{
		.name = "026 ASL.l D0, D0 e1a0",
		.initial = {
			.regs = {
				2470598158, 1376770895, 2269945000, 441788384, 117975479, 2987809579, 3783626422, 1652643779, 2725220332, 1691136530, 1658739064, 3412170733, 1080642920, 3286491740, 4105401269, 15057312, 11351772, 33027, 7799134
			},
			.prefetch0 = 57760,
			.prefetch1 = 36354,
			.ram = asll_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2508423168, 1376770895, 2269945000, 441788384, 117975479, 2987809579, 3783626422, 1652643779, 2725220332, 1691136530, 1658739064, 3412170733, 1080642920, 3286491740, 4105401269, 15057312, 11351772, 33034, 7799136
			},
			.prefetch0 = 36354,
			.prefetch1 = 31054,
			.ram = asll_final_ram_26,
			.ram_len = 6,
		},
		.transactions = asll_transactions_26,
		.transactions_len = 2,
		.lenght = 36,
	},
	{
		.name = "027 ASL.l 5, D5 eb85",
		.initial = {
			.regs = {
				1396708162, 324167997, 4124320871, 2272290483, 4133443192, 548431458, 882901850, 3617969106, 1005342457, 2141806113, 1262783154, 1279605794, 3723145750, 4289959965, 1273589781, 10606918, 4230870, 41474, 4372308
			},
			.prefetch0 = 60293,
			.prefetch1 = 60136,
			.ram = asll_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1396708162, 324167997, 4124320871, 2272290483, 4133443192, 369937472, 882901850, 3617969106, 1005342457, 2141806113, 1262783154, 1279605794, 3723145750, 4289959965, 1273589781, 10606918, 4230870, 41474, 4372310
			},
			.prefetch0 = 60136,
			.prefetch1 = 43394,
			.ram = asll_final_ram_27,
			.ram_len = 6,
		},
		.transactions = asll_transactions_27,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "028 ASL.l 7, D3 ef83",
		.initial = {
			.regs = {
				3324878807, 2804523509, 1879262093, 2952271960, 2475229800, 3011156601, 1739061701, 4293940291, 3801763959, 2656512133, 4177384019, 1779877470, 675602631, 754284907, 869843661, 14844362, 14211138, 32799, 3590142
			},
			.prefetch0 = 61315,
			.prefetch1 = 43862,
			.ram = asll_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3324878807, 2804523509, 1879262093, 4228656128, 2475229800, 3011156601, 1739061701, 4293940291, 3801763959, 2656512133, 4177384019, 1779877470, 675602631, 754284907, 869843661, 14844362, 14211138, 32795, 3590144
			},
			.prefetch0 = 43862,
			.prefetch1 = 6404,
			.ram = asll_final_ram_28,
			.ram_len = 6,
		},
		.transactions = asll_transactions_28,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "029 ASL.l D0, D7 e1a7",
		.initial = {
			.regs = {
				1761553953, 1307468055, 2211599985, 1062775724, 4007001595, 366589489, 1500366781, 225663368, 4244065781, 1656229996, 759233857, 3966033871, 1873213238, 3567996455, 3220487439, 10598602, 16095870, 33289, 12604156
			},
			.prefetch0 = 57767,
			.prefetch1 = 25741,
			.ram = asll_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1761553953, 1307468055, 2211599985, 1062775724, 4007001595, 366589489, 1500366781, 0, 4244065781, 1656229996, 759233857, 3966033871, 1873213238, 3567996455, 3220487439, 10598602, 16095870, 33286, 12604158
			},
			.prefetch0 = 25741,
			.prefetch1 = 51778,
			.ram = asll_final_ram_29,
			.ram_len = 6,
		},
		.transactions = asll_transactions_29,
		.transactions_len = 2,
		.lenght = 74,
	},
	{
		.name = "030 ASL.l 4, D3 e983",
		.initial = {
			.regs = {
				4236825412, 1508185016, 2784316998, 3425741547, 3012513516, 554386246, 3765783038, 1038618496, 1569334416, 3958394620, 3776872222, 4130319699, 1294045428, 1005302570, 770224570, 15558060, 5131086, 41749, 14075762
			},
			.prefetch0 = 59779,
			.prefetch1 = 15652,
			.ram = asll_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4236825412, 1508185016, 2784316998, 3272257200, 3012513516, 554386246, 3765783038, 1038618496, 1569334416, 3958394620, 3776872222, 4130319699, 1294045428, 1005302570, 770224570, 15558060, 5131086, 41738, 14075764
			},
			.prefetch0 = 15652,
			.prefetch1 = 43551,
			.ram = asll_final_ram_30,
			.ram_len = 6,
		},
		.transactions = asll_transactions_30,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "031 ASL.l D6, D1 eda1",
		.initial = {
			.regs = {
				3569868256, 1834767189, 1292374936, 1604728234, 405750165, 2349955522, 2873260845, 734802515, 4158612689, 2902252373, 594619219, 1263336629, 3001650283, 2747373519, 466691672, 6754644, 4198650, 34580, 2251680
			},
			.prefetch0 = 60833,
			.prefetch1 = 46975,
			.ram = asll_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3569868256, 0, 1292374936, 1604728234, 405750165, 2349955522, 2873260845, 734802515, 4158612689, 2902252373, 594619219, 1263336629, 3001650283, 2747373519, 466691672, 6754644, 4198650, 34566, 2251682
			},
			.prefetch0 = 46975,
			.prefetch1 = 8615,
			.ram = asll_final_ram_31,
			.ram_len = 6,
		},
		.transactions = asll_transactions_31,
		.transactions_len = 2,
		.lenght = 98,
	},
};

#endif /* RBT_ASLL_H */