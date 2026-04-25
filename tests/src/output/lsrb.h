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

const uint32_t LSRB_TEST_COUNT = 16;
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
};

#endif /* RBT_LSRB_H */