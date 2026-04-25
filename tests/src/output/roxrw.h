#ifndef RBT_ROXRW_H
#define RBT_ROXRW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxrw_initial_ram_0[] = {
		{ .addr = 0xda32de, .byte = 0xea },
		{ .addr = 0xda32df, .byte = 0x73 },
		{ .addr = 0xda32e0, .byte = 0x59 },
		{ .addr = 0xda32e1, .byte = 0x84 },
		{ .addr = 0xda32e2, .byte = 0xd7 },
		{ .addr = 0xda32e3, .byte = 0x3d }
};

static const SST_RamByte roxrw_final_ram_0[] = {
		{ .addr = 0xda32de, .byte = 0xea },
		{ .addr = 0xda32df, .byte = 0x73 },
		{ .addr = 0xda32e0, .byte = 0x59 },
		{ .addr = 0xda32e1, .byte = 0x84 },
		{ .addr = 0xda32e2, .byte = 0xd7 },
		{ .addr = 0xda32e3, .byte = 0x3d }
};

static const SST_Transaction roxrw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14299874, .data = 55101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 78 },
};

static const SST_RamByte roxrw_initial_ram_1[] = {
		{ .addr = 0x65ff36, .byte = 0xe4 },
		{ .addr = 0x65ff37, .byte = 0x53 },
		{ .addr = 0x65ff38, .byte = 0x7a },
		{ .addr = 0x65ff39, .byte = 0xf8 },
		{ .addr = 0x65ff3a, .byte = 0xd9 },
		{ .addr = 0x65ff3b, .byte = 0x21 }
};

static const SST_RamByte roxrw_final_ram_1[] = {
		{ .addr = 0x65ff36, .byte = 0xe4 },
		{ .addr = 0x65ff37, .byte = 0x53 },
		{ .addr = 0x65ff38, .byte = 0x7a },
		{ .addr = 0x65ff39, .byte = 0xf8 },
		{ .addr = 0x65ff3a, .byte = 0xd9 },
		{ .addr = 0x65ff3b, .byte = 0x21 }
};

static const SST_Transaction roxrw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6684474, .data = 55585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrw_initial_ram_2[] = {
		{ .addr = 0xd0fbb2, .byte = 0xee },
		{ .addr = 0xd0fbb3, .byte = 0x72 },
		{ .addr = 0xd0fbb4, .byte = 0x61 },
		{ .addr = 0xd0fbb5, .byte = 0x00 },
		{ .addr = 0xd0fbb6, .byte = 0xa9 },
		{ .addr = 0xd0fbb7, .byte = 0xaf }
};

static const SST_RamByte roxrw_final_ram_2[] = {
		{ .addr = 0xd0fbb2, .byte = 0xee },
		{ .addr = 0xd0fbb3, .byte = 0x72 },
		{ .addr = 0xd0fbb4, .byte = 0x61 },
		{ .addr = 0xd0fbb5, .byte = 0x00 },
		{ .addr = 0xd0fbb6, .byte = 0xa9 },
		{ .addr = 0xd0fbb7, .byte = 0xaf }
};

static const SST_Transaction roxrw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13695926, .data = 43439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 72 },
};

static const SST_RamByte roxrw_initial_ram_3[] = {
		{ .addr = 0x8f86ce, .byte = 0xe4 },
		{ .addr = 0x8f86cf, .byte = 0xe1 },
		{ .addr = 0x8f86d0, .byte = 0x53 },
		{ .addr = 0x8f86d1, .byte = 0xa0 },
		{ .addr = 0x03d5d6, .byte = 0xcb },
		{ .addr = 0x03d5d7, .byte = 0x51 },
		{ .addr = 0x8f86d2, .byte = 0x36 },
		{ .addr = 0x8f86d3, .byte = 0x25 }
};

static const SST_RamByte roxrw_final_ram_3[] = {
		{ .addr = 0x8f86ce, .byte = 0xe4 },
		{ .addr = 0x8f86cf, .byte = 0xe1 },
		{ .addr = 0x8f86d0, .byte = 0x53 },
		{ .addr = 0x8f86d1, .byte = 0xa0 },
		{ .addr = 0x03d5d6, .byte = 0xe5 },
		{ .addr = 0x03d5d7, .byte = 0xa8 },
		{ .addr = 0x8f86d2, .byte = 0x36 },
		{ .addr = 0x8f86d3, .byte = 0x25 }
};

static const SST_Transaction roxrw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 251350, .data = 52049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9406162, .data = 13861, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 251350, .data = 58792, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxrw_initial_ram_4[] = {
		{ .addr = 0xa7aaa8, .byte = 0xec },
		{ .addr = 0xa7aaa9, .byte = 0x52 },
		{ .addr = 0xa7aaaa, .byte = 0xaf },
		{ .addr = 0xa7aaab, .byte = 0xc6 },
		{ .addr = 0xa7aaac, .byte = 0x45 },
		{ .addr = 0xa7aaad, .byte = 0x8b }
};

static const SST_RamByte roxrw_final_ram_4[] = {
		{ .addr = 0xa7aaa8, .byte = 0xec },
		{ .addr = 0xa7aaa9, .byte = 0x52 },
		{ .addr = 0xa7aaaa, .byte = 0xaf },
		{ .addr = 0xa7aaab, .byte = 0xc6 },
		{ .addr = 0xa7aaac, .byte = 0x45 },
		{ .addr = 0xa7aaad, .byte = 0x8b }
};

static const SST_Transaction roxrw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10988204, .data = 17803, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxrw_initial_ram_5[] = {
		{ .addr = 0x76032e, .byte = 0xe4 },
		{ .addr = 0x76032f, .byte = 0xd1 },
		{ .addr = 0x760330, .byte = 0x2c },
		{ .addr = 0x760331, .byte = 0xce },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0xf491aa, .byte = 0x09 },
		{ .addr = 0xf491ab, .byte = 0x5d },
		{ .addr = 0xf491ac, .byte = 0x0d },
		{ .addr = 0xf491ad, .byte = 0xb5 }
};

static const SST_RamByte roxrw_final_ram_5[] = {
		{ .addr = 0x76032e, .byte = 0xe4 },
		{ .addr = 0x76032f, .byte = 0xd1 },
		{ .addr = 0x760330, .byte = 0x2c },
		{ .addr = 0x760331, .byte = 0xce },
		{ .addr = 0x533440, .byte = 0x03 },
		{ .addr = 0x533441, .byte = 0x30 },
		{ .addr = 0x53343c, .byte = 0x06 },
		{ .addr = 0x53343d, .byte = 0x14 },
		{ .addr = 0x53343e, .byte = 0x00 },
		{ .addr = 0x53343f, .byte = 0x76 },
		{ .addr = 0x53343a, .byte = 0xe4 },
		{ .addr = 0x53343b, .byte = 0xd1 },
		{ .addr = 0x533438, .byte = 0x3b },
		{ .addr = 0x533439, .byte = 0x23 },
		{ .addr = 0x533434, .byte = 0xe4 },
		{ .addr = 0x533435, .byte = 0xd1 },
		{ .addr = 0x533436, .byte = 0x02 },
		{ .addr = 0x533437, .byte = 0x80 },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0xf491aa, .byte = 0x09 },
		{ .addr = 0xf491ab, .byte = 0x5d },
		{ .addr = 0xf491ac, .byte = 0x0d },
		{ .addr = 0xf491ad, .byte = 0xb5 }
};

static const SST_Transaction roxrw_transactions_5[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8403746, .data = 41782, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5452864, .data = 816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5452860, .data = 1556, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5452862, .data = 118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5452858, .data = 58577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5452856, .data = 15139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5452852, .data = 58577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5452854, .data = 640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 48116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16028074, .data = 2397, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16028076, .data = 3509, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxrw_initial_ram_6[] = {
		{ .addr = 0x256890, .byte = 0xea },
		{ .addr = 0x256891, .byte = 0x75 },
		{ .addr = 0x256892, .byte = 0x33 },
		{ .addr = 0x256893, .byte = 0xcc },
		{ .addr = 0x256894, .byte = 0x38 },
		{ .addr = 0x256895, .byte = 0x7d }
};

static const SST_RamByte roxrw_final_ram_6[] = {
		{ .addr = 0x256890, .byte = 0xea },
		{ .addr = 0x256891, .byte = 0x75 },
		{ .addr = 0x256892, .byte = 0x33 },
		{ .addr = 0x256893, .byte = 0xcc },
		{ .addr = 0x256894, .byte = 0x38 },
		{ .addr = 0x256895, .byte = 0x7d }
};

static const SST_Transaction roxrw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2451604, .data = 14461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte roxrw_initial_ram_7[] = {
		{ .addr = 0x97988c, .byte = 0xe2 },
		{ .addr = 0x97988d, .byte = 0x77 },
		{ .addr = 0x97988e, .byte = 0x1f },
		{ .addr = 0x97988f, .byte = 0x3f },
		{ .addr = 0x979890, .byte = 0xc3 },
		{ .addr = 0x979891, .byte = 0x4b }
};

static const SST_RamByte roxrw_final_ram_7[] = {
		{ .addr = 0x97988c, .byte = 0xe2 },
		{ .addr = 0x97988d, .byte = 0x77 },
		{ .addr = 0x97988e, .byte = 0x1f },
		{ .addr = 0x97988f, .byte = 0x3f },
		{ .addr = 0x979890, .byte = 0xc3 },
		{ .addr = 0x979891, .byte = 0x4b }
};

static const SST_Transaction roxrw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9934992, .data = 49995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 88 },
};

static const SST_RamByte roxrw_initial_ram_8[] = {
		{ .addr = 0xfb5e14, .byte = 0xe6 },
		{ .addr = 0xfb5e15, .byte = 0x55 },
		{ .addr = 0xfb5e16, .byte = 0x83 },
		{ .addr = 0xfb5e17, .byte = 0x76 },
		{ .addr = 0xfb5e18, .byte = 0x41 },
		{ .addr = 0xfb5e19, .byte = 0x07 }
};

static const SST_RamByte roxrw_final_ram_8[] = {
		{ .addr = 0xfb5e14, .byte = 0xe6 },
		{ .addr = 0xfb5e15, .byte = 0x55 },
		{ .addr = 0xfb5e16, .byte = 0x83 },
		{ .addr = 0xfb5e17, .byte = 0x76 },
		{ .addr = 0xfb5e18, .byte = 0x41 },
		{ .addr = 0xfb5e19, .byte = 0x07 }
};

static const SST_Transaction roxrw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16473624, .data = 16647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrw_initial_ram_9[] = {
		{ .addr = 0xeab64a, .byte = 0xe4 },
		{ .addr = 0xeab64b, .byte = 0x52 },
		{ .addr = 0xeab64c, .byte = 0x89 },
		{ .addr = 0xeab64d, .byte = 0x6f },
		{ .addr = 0xeab64e, .byte = 0x39 },
		{ .addr = 0xeab64f, .byte = 0xd1 }
};

static const SST_RamByte roxrw_final_ram_9[] = {
		{ .addr = 0xeab64a, .byte = 0xe4 },
		{ .addr = 0xeab64b, .byte = 0x52 },
		{ .addr = 0xeab64c, .byte = 0x89 },
		{ .addr = 0xeab64d, .byte = 0x6f },
		{ .addr = 0xeab64e, .byte = 0x39 },
		{ .addr = 0xeab64f, .byte = 0xd1 }
};

static const SST_Transaction roxrw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15382094, .data = 14801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrw_initial_ram_10[] = {
		{ .addr = 0x049914, .byte = 0xe4 },
		{ .addr = 0x049915, .byte = 0xf2 },
		{ .addr = 0x049916, .byte = 0x81 },
		{ .addr = 0x049917, .byte = 0xe8 },
		{ .addr = 0x049918, .byte = 0x7a },
		{ .addr = 0x049919, .byte = 0xb5 },
		{ .addr = 0x8c57d8, .byte = 0x0c },
		{ .addr = 0x8c57d9, .byte = 0x5f },
		{ .addr = 0x04991a, .byte = 0xff },
		{ .addr = 0x04991b, .byte = 0x48 }
};

static const SST_RamByte roxrw_final_ram_10[] = {
		{ .addr = 0x049914, .byte = 0xe4 },
		{ .addr = 0x049915, .byte = 0xf2 },
		{ .addr = 0x049916, .byte = 0x81 },
		{ .addr = 0x049917, .byte = 0xe8 },
		{ .addr = 0x049918, .byte = 0x7a },
		{ .addr = 0x049919, .byte = 0xb5 },
		{ .addr = 0x8c57d8, .byte = 0x86 },
		{ .addr = 0x8c57d9, .byte = 0x2f },
		{ .addr = 0x04991a, .byte = 0xff },
		{ .addr = 0x04991b, .byte = 0x48 }
};

static const SST_Transaction roxrw_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 301336, .data = 31413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9197528, .data = 3167, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 301338, .data = 65352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9197528, .data = 34351, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxrw_initial_ram_11[] = {
		{ .addr = 0x19a700, .byte = 0xe8 },
		{ .addr = 0x19a701, .byte = 0x57 },
		{ .addr = 0x19a702, .byte = 0x9f },
		{ .addr = 0x19a703, .byte = 0x09 },
		{ .addr = 0x19a704, .byte = 0xcb },
		{ .addr = 0x19a705, .byte = 0x5e }
};

static const SST_RamByte roxrw_final_ram_11[] = {
		{ .addr = 0x19a700, .byte = 0xe8 },
		{ .addr = 0x19a701, .byte = 0x57 },
		{ .addr = 0x19a702, .byte = 0x9f },
		{ .addr = 0x19a703, .byte = 0x09 },
		{ .addr = 0x19a704, .byte = 0xcb },
		{ .addr = 0x19a705, .byte = 0x5e }
};

static const SST_Transaction roxrw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1681156, .data = 52062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxrw_initial_ram_12[] = {
		{ .addr = 0x7c0c04, .byte = 0xe0 },
		{ .addr = 0x7c0c05, .byte = 0x72 },
		{ .addr = 0x7c0c06, .byte = 0xc1 },
		{ .addr = 0x7c0c07, .byte = 0x97 },
		{ .addr = 0x7c0c08, .byte = 0xe7 },
		{ .addr = 0x7c0c09, .byte = 0x8f }
};

static const SST_RamByte roxrw_final_ram_12[] = {
		{ .addr = 0x7c0c04, .byte = 0xe0 },
		{ .addr = 0x7c0c05, .byte = 0x72 },
		{ .addr = 0x7c0c06, .byte = 0xc1 },
		{ .addr = 0x7c0c07, .byte = 0x97 },
		{ .addr = 0x7c0c08, .byte = 0xe7 },
		{ .addr = 0x7c0c09, .byte = 0x8f }
};

static const SST_Transaction roxrw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8129544, .data = 59279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 102 },
};

static const SST_RamByte roxrw_initial_ram_13[] = {
		{ .addr = 0xbb7604, .byte = 0xec },
		{ .addr = 0xbb7605, .byte = 0x74 },
		{ .addr = 0xbb7606, .byte = 0x66 },
		{ .addr = 0xbb7607, .byte = 0x3e },
		{ .addr = 0xbb7608, .byte = 0xc5 },
		{ .addr = 0xbb7609, .byte = 0x8f }
};

static const SST_RamByte roxrw_final_ram_13[] = {
		{ .addr = 0xbb7604, .byte = 0xec },
		{ .addr = 0xbb7605, .byte = 0x74 },
		{ .addr = 0xbb7606, .byte = 0x66 },
		{ .addr = 0xbb7607, .byte = 0x3e },
		{ .addr = 0xbb7608, .byte = 0xc5 },
		{ .addr = 0xbb7609, .byte = 0x8f }
};

static const SST_Transaction roxrw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12285448, .data = 50575, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 58 },
};

static const SST_RamByte roxrw_initial_ram_14[] = {
		{ .addr = 0x419dc6, .byte = 0xe4 },
		{ .addr = 0x419dc7, .byte = 0xe1 },
		{ .addr = 0x419dc8, .byte = 0x16 },
		{ .addr = 0x419dc9, .byte = 0x77 },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0x3e7886, .byte = 0xf5 },
		{ .addr = 0x3e7887, .byte = 0x35 },
		{ .addr = 0x3e7888, .byte = 0x82 },
		{ .addr = 0x3e7889, .byte = 0xb8 }
};

static const SST_RamByte roxrw_final_ram_14[] = {
		{ .addr = 0x419dc6, .byte = 0xe4 },
		{ .addr = 0x419dc7, .byte = 0xe1 },
		{ .addr = 0x419dc8, .byte = 0x16 },
		{ .addr = 0x419dc9, .byte = 0x77 },
		{ .addr = 0xee0c3e, .byte = 0x9d },
		{ .addr = 0xee0c3f, .byte = 0xca },
		{ .addr = 0xee0c3a, .byte = 0xa0 },
		{ .addr = 0xee0c3b, .byte = 0x0e },
		{ .addr = 0xee0c3c, .byte = 0x00 },
		{ .addr = 0xee0c3d, .byte = 0x41 },
		{ .addr = 0xee0c38, .byte = 0xe4 },
		{ .addr = 0xee0c39, .byte = 0xe1 },
		{ .addr = 0xee0c36, .byte = 0x5a },
		{ .addr = 0xee0c37, .byte = 0xcb },
		{ .addr = 0xee0c32, .byte = 0xe4 },
		{ .addr = 0xee0c33, .byte = 0xf5 },
		{ .addr = 0xee0c34, .byte = 0x8a },
		{ .addr = 0xee0c35, .byte = 0xd1 },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0x3e7886, .byte = 0xf5 },
		{ .addr = 0x3e7887, .byte = 0x35 },
		{ .addr = 0x3e7888, .byte = 0x82 },
		{ .addr = 0x3e7889, .byte = 0xb8 }
};

static const SST_Transaction roxrw_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13720266, .data = 36924, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600702, .data = 40394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600698, .data = 40974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600700, .data = 65, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600696, .data = 58593, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600694, .data = 23243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600690, .data = 58613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15600692, .data = 35537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4094086, .data = 62773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4094088, .data = 33464, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxrw_initial_ram_15[] = {
		{ .addr = 0xac4776, .byte = 0xea },
		{ .addr = 0xac4777, .byte = 0x57 },
		{ .addr = 0xac4778, .byte = 0xed },
		{ .addr = 0xac4779, .byte = 0x70 },
		{ .addr = 0xac477a, .byte = 0xfe },
		{ .addr = 0xac477b, .byte = 0xf2 }
};

static const SST_RamByte roxrw_final_ram_15[] = {
		{ .addr = 0xac4776, .byte = 0xea },
		{ .addr = 0xac4777, .byte = 0x57 },
		{ .addr = 0xac4778, .byte = 0xed },
		{ .addr = 0xac4779, .byte = 0x70 },
		{ .addr = 0xac477a, .byte = 0xfe },
		{ .addr = 0xac477b, .byte = 0xf2 }
};

static const SST_Transaction roxrw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11290490, .data = 65266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxrw_initial_ram_16[] = {
		{ .addr = 0xfb021a, .byte = 0xe2 },
		{ .addr = 0xfb021b, .byte = 0x73 },
		{ .addr = 0xfb021c, .byte = 0xe6 },
		{ .addr = 0xfb021d, .byte = 0xb9 },
		{ .addr = 0xfb021e, .byte = 0xd1 },
		{ .addr = 0xfb021f, .byte = 0x37 }
};

static const SST_RamByte roxrw_final_ram_16[] = {
		{ .addr = 0xfb021a, .byte = 0xe2 },
		{ .addr = 0xfb021b, .byte = 0x73 },
		{ .addr = 0xfb021c, .byte = 0xe6 },
		{ .addr = 0xfb021d, .byte = 0xb9 },
		{ .addr = 0xfb021e, .byte = 0xd1 },
		{ .addr = 0xfb021f, .byte = 0x37 }
};

static const SST_Transaction roxrw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16450078, .data = 53559, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 90 },
};

static const SST_RamByte roxrw_initial_ram_17[] = {
		{ .addr = 0xbd1cc8, .byte = 0xe4 },
		{ .addr = 0xbd1cc9, .byte = 0xf0 },
		{ .addr = 0xbd1cca, .byte = 0x25 },
		{ .addr = 0xbd1ccb, .byte = 0xcf },
		{ .addr = 0xbd1ccc, .byte = 0xdc },
		{ .addr = 0xbd1ccd, .byte = 0xb6 },
		{ .addr = 0x3caf56, .byte = 0x60 },
		{ .addr = 0x3caf57, .byte = 0x60 },
		{ .addr = 0xbd1cce, .byte = 0x7e },
		{ .addr = 0xbd1ccf, .byte = 0xdd }
};

static const SST_RamByte roxrw_final_ram_17[] = {
		{ .addr = 0xbd1cc8, .byte = 0xe4 },
		{ .addr = 0xbd1cc9, .byte = 0xf0 },
		{ .addr = 0xbd1cca, .byte = 0x25 },
		{ .addr = 0xbd1ccb, .byte = 0xcf },
		{ .addr = 0xbd1ccc, .byte = 0xdc },
		{ .addr = 0xbd1ccd, .byte = 0xb6 },
		{ .addr = 0x3caf56, .byte = 0xb0 },
		{ .addr = 0x3caf57, .byte = 0x30 },
		{ .addr = 0xbd1cce, .byte = 0x7e },
		{ .addr = 0xbd1ccf, .byte = 0xdd }
};

static const SST_Transaction roxrw_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12393676, .data = 56502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3977046, .data = 24672, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12393678, .data = 32477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3977046, .data = 45104, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxrw_initial_ram_18[] = {
		{ .addr = 0x46a7d8, .byte = 0xea },
		{ .addr = 0x46a7d9, .byte = 0x76 },
		{ .addr = 0x46a7da, .byte = 0x73 },
		{ .addr = 0x46a7db, .byte = 0xa9 },
		{ .addr = 0x46a7dc, .byte = 0x47 },
		{ .addr = 0x46a7dd, .byte = 0x76 }
};

static const SST_RamByte roxrw_final_ram_18[] = {
		{ .addr = 0x46a7d8, .byte = 0xea },
		{ .addr = 0x46a7d9, .byte = 0x76 },
		{ .addr = 0x46a7da, .byte = 0x73 },
		{ .addr = 0x46a7db, .byte = 0xa9 },
		{ .addr = 0x46a7dc, .byte = 0x47 },
		{ .addr = 0x46a7dd, .byte = 0x76 }
};

static const SST_Transaction roxrw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4630492, .data = 18294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

static const SST_RamByte roxrw_initial_ram_19[] = {
		{ .addr = 0x578c9c, .byte = 0xe4 },
		{ .addr = 0x578c9d, .byte = 0x70 },
		{ .addr = 0x578c9e, .byte = 0xd3 },
		{ .addr = 0x578c9f, .byte = 0x5a },
		{ .addr = 0x578ca0, .byte = 0xf9 },
		{ .addr = 0x578ca1, .byte = 0xd2 }
};

static const SST_RamByte roxrw_final_ram_19[] = {
		{ .addr = 0x578c9c, .byte = 0xe4 },
		{ .addr = 0x578c9d, .byte = 0x70 },
		{ .addr = 0x578c9e, .byte = 0xd3 },
		{ .addr = 0x578c9f, .byte = 0x5a },
		{ .addr = 0x578ca0, .byte = 0xf9 },
		{ .addr = 0x578ca1, .byte = 0xd2 }
};

static const SST_Transaction roxrw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5737632, .data = 63954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte roxrw_initial_ram_20[] = {
		{ .addr = 0xf2f9a8, .byte = 0xe2 },
		{ .addr = 0xf2f9a9, .byte = 0x75 },
		{ .addr = 0xf2f9aa, .byte = 0x9a },
		{ .addr = 0xf2f9ab, .byte = 0xd4 },
		{ .addr = 0xf2f9ac, .byte = 0x97 },
		{ .addr = 0xf2f9ad, .byte = 0x8b }
};

static const SST_RamByte roxrw_final_ram_20[] = {
		{ .addr = 0xf2f9a8, .byte = 0xe2 },
		{ .addr = 0xf2f9a9, .byte = 0x75 },
		{ .addr = 0xf2f9aa, .byte = 0x9a },
		{ .addr = 0xf2f9ab, .byte = 0xd4 },
		{ .addr = 0xf2f9ac, .byte = 0x97 },
		{ .addr = 0xf2f9ad, .byte = 0x8b }
};

static const SST_Transaction roxrw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15923628, .data = 38795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 32 },
};

static const SST_RamByte roxrw_initial_ram_21[] = {
		{ .addr = 0x4c50b6, .byte = 0xec },
		{ .addr = 0x4c50b7, .byte = 0x72 },
		{ .addr = 0x4c50b8, .byte = 0x51 },
		{ .addr = 0x4c50b9, .byte = 0xa5 },
		{ .addr = 0x4c50ba, .byte = 0xbd },
		{ .addr = 0x4c50bb, .byte = 0x15 }
};

static const SST_RamByte roxrw_final_ram_21[] = {
		{ .addr = 0x4c50b6, .byte = 0xec },
		{ .addr = 0x4c50b7, .byte = 0x72 },
		{ .addr = 0x4c50b8, .byte = 0x51 },
		{ .addr = 0x4c50b9, .byte = 0xa5 },
		{ .addr = 0x4c50ba, .byte = 0xbd },
		{ .addr = 0x4c50bb, .byte = 0x15 }
};

static const SST_Transaction roxrw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5001402, .data = 48405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte roxrw_initial_ram_22[] = {
		{ .addr = 0x8783f4, .byte = 0xe4 },
		{ .addr = 0x8783f5, .byte = 0xef },
		{ .addr = 0x8783f6, .byte = 0xe2 },
		{ .addr = 0x8783f7, .byte = 0x15 },
		{ .addr = 0x8783f8, .byte = 0x52 },
		{ .addr = 0x8783f9, .byte = 0x31 },
		{ .addr = 0x00000c, .byte = 0xf0 },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0xdf },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x10df08, .byte = 0xd9 },
		{ .addr = 0x10df09, .byte = 0xe0 },
		{ .addr = 0x10df0a, .byte = 0x07 },
		{ .addr = 0x10df0b, .byte = 0xd5 }
};

static const SST_RamByte roxrw_final_ram_22[] = {
		{ .addr = 0x8783f4, .byte = 0xe4 },
		{ .addr = 0x8783f5, .byte = 0xef },
		{ .addr = 0x8783f6, .byte = 0xe2 },
		{ .addr = 0x8783f7, .byte = 0x15 },
		{ .addr = 0x8783f8, .byte = 0x52 },
		{ .addr = 0x8783f9, .byte = 0x31 },
		{ .addr = 0xbd1db6, .byte = 0x83 },
		{ .addr = 0xbd1db7, .byte = 0xf6 },
		{ .addr = 0xbd1db2, .byte = 0x00 },
		{ .addr = 0xbd1db3, .byte = 0x11 },
		{ .addr = 0xbd1db4, .byte = 0x00 },
		{ .addr = 0xbd1db5, .byte = 0x87 },
		{ .addr = 0xbd1db0, .byte = 0xe4 },
		{ .addr = 0xbd1db1, .byte = 0xef },
		{ .addr = 0xbd1dae, .byte = 0xd4 },
		{ .addr = 0xbd1daf, .byte = 0xeb },
		{ .addr = 0xbd1daa, .byte = 0xe4 },
		{ .addr = 0xbd1dab, .byte = 0xf1 },
		{ .addr = 0xbd1dac, .byte = 0x00 },
		{ .addr = 0xbd1dad, .byte = 0xe8 },
		{ .addr = 0x00000c, .byte = 0xf0 },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0xdf },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x10df08, .byte = 0xd9 },
		{ .addr = 0x10df09, .byte = 0xe0 },
		{ .addr = 0x10df0a, .byte = 0x07 },
		{ .addr = 0x10df0b, .byte = 0xd5 }
};

static const SST_Transaction roxrw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8881144, .data = 21041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15258858, .data = 41733, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12393910, .data = 33782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12393906, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12393908, .data = 135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12393904, .data = 58607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12393902, .data = 54507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12393898, .data = 58609, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12393900, .data = 232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1105672, .data = 55776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1105674, .data = 2005, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxrw_initial_ram_23[] = {
		{ .addr = 0x3a049a, .byte = 0xe6 },
		{ .addr = 0x3a049b, .byte = 0x56 },
		{ .addr = 0x3a049c, .byte = 0x84 },
		{ .addr = 0x3a049d, .byte = 0x0e },
		{ .addr = 0x3a049e, .byte = 0x3b },
		{ .addr = 0x3a049f, .byte = 0x96 }
};

static const SST_RamByte roxrw_final_ram_23[] = {
		{ .addr = 0x3a049a, .byte = 0xe6 },
		{ .addr = 0x3a049b, .byte = 0x56 },
		{ .addr = 0x3a049c, .byte = 0x84 },
		{ .addr = 0x3a049d, .byte = 0x0e },
		{ .addr = 0x3a049e, .byte = 0x3b },
		{ .addr = 0x3a049f, .byte = 0x96 }
};

static const SST_Transaction roxrw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3802270, .data = 15254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxrw_initial_ram_24[] = {
		{ .addr = 0xc498e2, .byte = 0xe0 },
		{ .addr = 0xc498e3, .byte = 0x52 },
		{ .addr = 0xc498e4, .byte = 0xf4 },
		{ .addr = 0xc498e5, .byte = 0x48 },
		{ .addr = 0xc498e6, .byte = 0x96 },
		{ .addr = 0xc498e7, .byte = 0xe8 }
};

static const SST_RamByte roxrw_final_ram_24[] = {
		{ .addr = 0xc498e2, .byte = 0xe0 },
		{ .addr = 0xc498e3, .byte = 0x52 },
		{ .addr = 0xc498e4, .byte = 0xf4 },
		{ .addr = 0xc498e5, .byte = 0x48 },
		{ .addr = 0xc498e6, .byte = 0x96 },
		{ .addr = 0xc498e7, .byte = 0xe8 }
};

static const SST_Transaction roxrw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12884198, .data = 38632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxrw_initial_ram_25[] = {
		{ .addr = 0x075b78, .byte = 0xe4 },
		{ .addr = 0x075b79, .byte = 0xed },
		{ .addr = 0x075b7a, .byte = 0x02 },
		{ .addr = 0x075b7b, .byte = 0xbe },
		{ .addr = 0x075b7c, .byte = 0x1a },
		{ .addr = 0x075b7d, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0x7d },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0x06bf0a, .byte = 0x63 },
		{ .addr = 0x06bf0b, .byte = 0x9b },
		{ .addr = 0x06bf0c, .byte = 0xaa },
		{ .addr = 0x06bf0d, .byte = 0x35 }
};

static const SST_RamByte roxrw_final_ram_25[] = {
		{ .addr = 0x075b78, .byte = 0xe4 },
		{ .addr = 0x075b79, .byte = 0xed },
		{ .addr = 0x075b7a, .byte = 0x02 },
		{ .addr = 0x075b7b, .byte = 0xbe },
		{ .addr = 0x075b7c, .byte = 0x1a },
		{ .addr = 0x075b7d, .byte = 0xff },
		{ .addr = 0xf1e112, .byte = 0x5b },
		{ .addr = 0xf1e113, .byte = 0x7a },
		{ .addr = 0xf1e10e, .byte = 0x83 },
		{ .addr = 0xf1e10f, .byte = 0x0a },
		{ .addr = 0xf1e110, .byte = 0x00 },
		{ .addr = 0xf1e111, .byte = 0x07 },
		{ .addr = 0xf1e10c, .byte = 0xe4 },
		{ .addr = 0xf1e10d, .byte = 0xed },
		{ .addr = 0xf1e10a, .byte = 0xb5 },
		{ .addr = 0xf1e10b, .byte = 0x9f },
		{ .addr = 0xf1e106, .byte = 0xe4 },
		{ .addr = 0xf1e107, .byte = 0xf1 },
		{ .addr = 0xf1e108, .byte = 0xb3 },
		{ .addr = 0xf1e109, .byte = 0x24 },
		{ .addr = 0x00000c, .byte = 0x7d },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0x06bf0a, .byte = 0x63 },
		{ .addr = 0x06bf0b, .byte = 0x9b },
		{ .addr = 0x06bf0c, .byte = 0xaa },
		{ .addr = 0x06bf0d, .byte = 0x35 }
};

static const SST_Transaction roxrw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 482172, .data = 6911, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2405790, .data = 19307, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15851794, .data = 23418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15851790, .data = 33546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15851792, .data = 7, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15851788, .data = 58605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15851786, .data = 46495, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15851782, .data = 58609, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15851784, .data = 45860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 32006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 442122, .data = 25499, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 442124, .data = 43573, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte roxrw_initial_ram_26[] = {
		{ .addr = 0x63e786, .byte = 0xee },
		{ .addr = 0x63e787, .byte = 0x77 },
		{ .addr = 0x63e788, .byte = 0x05 },
		{ .addr = 0x63e789, .byte = 0xd6 },
		{ .addr = 0x63e78a, .byte = 0x5c },
		{ .addr = 0x63e78b, .byte = 0xc0 }
};

static const SST_RamByte roxrw_final_ram_26[] = {
		{ .addr = 0x63e786, .byte = 0xee },
		{ .addr = 0x63e787, .byte = 0x77 },
		{ .addr = 0x63e788, .byte = 0x05 },
		{ .addr = 0x63e789, .byte = 0xd6 },
		{ .addr = 0x63e78a, .byte = 0x5c },
		{ .addr = 0x63e78b, .byte = 0xc0 }
};

static const SST_Transaction roxrw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6547338, .data = 23744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 112 },
};

static const SST_RamByte roxrw_initial_ram_27[] = {
		{ .addr = 0x562858, .byte = 0xe4 },
		{ .addr = 0x562859, .byte = 0x57 },
		{ .addr = 0x56285a, .byte = 0x0a },
		{ .addr = 0x56285b, .byte = 0x99 },
		{ .addr = 0x56285c, .byte = 0x4a },
		{ .addr = 0x56285d, .byte = 0x61 }
};

static const SST_RamByte roxrw_final_ram_27[] = {
		{ .addr = 0x562858, .byte = 0xe4 },
		{ .addr = 0x562859, .byte = 0x57 },
		{ .addr = 0x56285a, .byte = 0x0a },
		{ .addr = 0x56285b, .byte = 0x99 },
		{ .addr = 0x56285c, .byte = 0x4a },
		{ .addr = 0x56285d, .byte = 0x61 }
};

static const SST_Transaction roxrw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5646428, .data = 19041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxrw_initial_ram_28[] = {
		{ .addr = 0xea6450, .byte = 0xe4 },
		{ .addr = 0xea6451, .byte = 0x76 },
		{ .addr = 0xea6452, .byte = 0x97 },
		{ .addr = 0xea6453, .byte = 0x40 },
		{ .addr = 0xea6454, .byte = 0x9d },
		{ .addr = 0xea6455, .byte = 0x1f }
};

static const SST_RamByte roxrw_final_ram_28[] = {
		{ .addr = 0xea6450, .byte = 0xe4 },
		{ .addr = 0xea6451, .byte = 0x76 },
		{ .addr = 0xea6452, .byte = 0x97 },
		{ .addr = 0xea6453, .byte = 0x40 },
		{ .addr = 0xea6454, .byte = 0x9d },
		{ .addr = 0xea6455, .byte = 0x1f }
};

static const SST_Transaction roxrw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15361108, .data = 40223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 70 },
};

static const SST_RamByte roxrw_initial_ram_29[] = {
		{ .addr = 0x215220, .byte = 0xe4 },
		{ .addr = 0x215221, .byte = 0x73 },
		{ .addr = 0x215222, .byte = 0x05 },
		{ .addr = 0x215223, .byte = 0x83 },
		{ .addr = 0x215224, .byte = 0xfe },
		{ .addr = 0x215225, .byte = 0x9e }
};

static const SST_RamByte roxrw_final_ram_29[] = {
		{ .addr = 0x215220, .byte = 0xe4 },
		{ .addr = 0x215221, .byte = 0x73 },
		{ .addr = 0x215222, .byte = 0x05 },
		{ .addr = 0x215223, .byte = 0x83 },
		{ .addr = 0x215224, .byte = 0xfe },
		{ .addr = 0x215225, .byte = 0x9e }
};

static const SST_Transaction roxrw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2183716, .data = 65182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

static const SST_RamByte roxrw_initial_ram_30[] = {
		{ .addr = 0x3b2e62, .byte = 0xe2 },
		{ .addr = 0x3b2e63, .byte = 0x74 },
		{ .addr = 0x3b2e64, .byte = 0x59 },
		{ .addr = 0x3b2e65, .byte = 0x53 },
		{ .addr = 0x3b2e66, .byte = 0x1e },
		{ .addr = 0x3b2e67, .byte = 0x07 }
};

static const SST_RamByte roxrw_final_ram_30[] = {
		{ .addr = 0x3b2e62, .byte = 0xe2 },
		{ .addr = 0x3b2e63, .byte = 0x74 },
		{ .addr = 0x3b2e64, .byte = 0x59 },
		{ .addr = 0x3b2e65, .byte = 0x53 },
		{ .addr = 0x3b2e66, .byte = 0x1e },
		{ .addr = 0x3b2e67, .byte = 0x07 }
};

static const SST_Transaction roxrw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3878502, .data = 7687, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 34 },
};

static const SST_RamByte roxrw_initial_ram_31[] = {
		{ .addr = 0x42fcde, .byte = 0xec },
		{ .addr = 0x42fcdf, .byte = 0x75 },
		{ .addr = 0x42fce0, .byte = 0xbb },
		{ .addr = 0x42fce1, .byte = 0xfe },
		{ .addr = 0x42fce2, .byte = 0xad },
		{ .addr = 0x42fce3, .byte = 0x0b }
};

static const SST_RamByte roxrw_final_ram_31[] = {
		{ .addr = 0x42fcde, .byte = 0xec },
		{ .addr = 0x42fcdf, .byte = 0x75 },
		{ .addr = 0x42fce0, .byte = 0xbb },
		{ .addr = 0x42fce1, .byte = 0xfe },
		{ .addr = 0x42fce2, .byte = 0xad },
		{ .addr = 0x42fce3, .byte = 0x0b }
};

static const SST_Transaction roxrw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4390114, .data = 44299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_TestCase roxrw[] = {
	{
		.name = "000 ROXR.w D5, D3 ea73",
		.initial = {
			.regs = {
				1329190401, 4074480233, 2494030275, 1192897080, 2067964349, 803052390, 3116563677, 2507272080, 1200746960, 452131595, 1074516939, 2457237458, 1042184640, 606830823, 2499500178, 3748690, 1797242, 33040, 14299874
			},
			.prefetch0 = 60019,
			.prefetch1 = 22916,
			.ram = roxrw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1329190401, 4074480233, 2494030275, 1192891043, 2067964349, 803052390, 3116563677, 2507272080, 1200746960, 452131595, 1074516939, 2457237458, 1042184640, 606830823, 2499500178, 3748690, 1797242, 33041, 14299876
			},
			.prefetch0 = 22916,
			.prefetch1 = 55101,
			.ram = roxrw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_0,
		.transactions_len = 2,
		.lenght = 82,
	},
	{
		.name = "001 ROXR.w 2, D3 e453",
		.initial = {
			.regs = {
				50412554, 4293281272, 1547875058, 481290542, 2789339906, 639155023, 3267940637, 1037177560, 3479905198, 2484195278, 1438167841, 1798630222, 2057581431, 2635449463, 2185652952, 13355018, 7007938, 8474, 6684474
			},
			.prefetch0 = 58451,
			.prefetch1 = 31480,
			.ram = roxrw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				50412554, 4293281272, 1547875058, 481262155, 2789339906, 639155023, 3267940637, 1037177560, 3479905198, 2484195278, 1438167841, 1798630222, 2057581431, 2635449463, 2185652952, 13355018, 7007938, 8465, 6684476
			},
			.prefetch0 = 31480,
			.prefetch1 = 55585,
			.ram = roxrw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_1,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "002 ROXR.w D7, D2 ee72",
		.initial = {
			.regs = {
				1173573969, 1426703003, 3948378558, 1317570510, 1540198211, 1442679137, 3033460128, 2976883299, 2803324545, 191597318, 369876410, 59497470, 1084431001, 1435236202, 1616087271, 1745282, 15470472, 9502, 13695926
			},
			.prefetch0 = 61042,
			.prefetch1 = 24832,
			.ram = roxrw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1173573969, 1426703003, 3948395743, 1317570510, 1540198211, 1442679137, 3033460128, 2976883299, 2803324545, 191597318, 369876410, 59497470, 1084431001, 1435236202, 1616087271, 1745282, 15470472, 9480, 13695928
			},
			.prefetch0 = 24832,
			.prefetch1 = 43439,
			.ram = roxrw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_2,
		.transactions_len = 2,
		.lenght = 76,
	},
	{
		.name = "003 ROXR.w -(A1) e4e1",
		.initial = {
			.regs = {
				1604756254, 3547313394, 3241057306, 2934940479, 4245033057, 1395314920, 230009043, 3011895006, 2401557445, 4060337624, 2648833907, 4293915359, 3129794941, 1534673657, 1277555576, 11373298, 3148444, 42774, 9406162
			},
			.prefetch0 = 58593,
			.prefetch1 = 21408,
			.ram = roxrw_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1604756254, 3547313394, 3241057306, 2934940479, 4245033057, 1395314920, 230009043, 3011895006, 2401557445, 4060337622, 2648833907, 4293915359, 3129794941, 1534673657, 1277555576, 11373298, 3148444, 42777, 9406164
			},
			.prefetch0 = 21408,
			.prefetch1 = 13861,
			.ram = roxrw_final_ram_3,
			.ram_len = 8,
		},
		.transactions = roxrw_transactions_3,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "004 ROXR.w 6, D2 ec52",
		.initial = {
			.regs = {
				3843454900, 3581747053, 2840039150, 117768455, 1103901597, 3844512230, 2892379996, 900069260, 3773859204, 3398928238, 1385634862, 268619220, 1213358615, 3498238515, 1870520828, 2679220, 1053890, 9222, 10988204
			},
			.prefetch0 = 60498,
			.prefetch1 = 44998,
			.ram = roxrw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3843454900, 3581747053, 2840031803, 117768455, 1103901597, 3844512230, 2892379996, 900069260, 3773859204, 3398928238, 1385634862, 268619220, 1213358615, 3498238515, 1870520828, 2679220, 1053890, 9233, 10988206
			},
			.prefetch0 = 44998,
			.prefetch1 = 17803,
			.ram = roxrw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_4,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "005 ROXR.w (A1) e4d1",
		.initial = {
			.regs = {
				416448150, 4212222686, 1981828867, 824443231, 845224019, 1678671140, 1992598408, 584387151, 4048566276, 41958179, 2602294908, 4278986439, 1647081184, 1152641160, 90769979, 5755098, 5452866, 1556, 7734066
			},
			.prefetch0 = 58577,
			.prefetch1 = 11470,
			.ram = roxrw_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				416448150, 4212222686, 1981828867, 824443231, 845224019, 1678671140, 1992598408, 584387151, 4048566276, 41958179, 2602294908, 4278986439, 1647081184, 1152641160, 90769979, 5755098, 5452852, 9748, 3153367470
			},
			.prefetch0 = 2397,
			.prefetch1 = 3509,
			.ram = roxrw_final_ram_5,
			.ram_len = 26,
		},
		.transactions = roxrw_transactions_5,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "006 ROXR.w D5, D5 ea75",
		.initial = {
			.regs = {
				3512606403, 2799077487, 1680874223, 388831329, 151772704, 2640313813, 3709691038, 2686048580, 2273113214, 1800679233, 1484947770, 1040667455, 2611115036, 2072296507, 2061557897, 6785312, 15662412, 42515, 2451604
			},
			.prefetch0 = 60021,
			.prefetch1 = 13260,
			.ram = roxrw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3512606403, 2799077487, 1680874223, 388831329, 151772704, 2640297949, 3709691038, 2686048580, 2273113214, 1800679233, 1484947770, 1040667455, 2611115036, 2072296507, 2061557897, 6785312, 15662412, 42504, 2451606
			},
			.prefetch0 = 13260,
			.prefetch1 = 14461,
			.ram = roxrw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_6,
		.transactions_len = 2,
		.lenght = 48,
	},
	{
		.name = "007 ROXR.w D1, D7 e277",
		.initial = {
			.regs = {
				1213486253, 2348750059, 1860622774, 2961477460, 308955921, 412909296, 1373052636, 1055366598, 3269433811, 2495590027, 664759201, 1014747466, 516766435, 835404467, 1185411736, 648686, 9652392, 278, 9934992
			},
			.prefetch0 = 57975,
			.prefetch1 = 7999,
			.ram = roxrw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1213486253, 2348750059, 1860622774, 2961477460, 308955921, 412909296, 1373052636, 1055377102, 3269433811, 2495590027, 664759201, 1014747466, 516766435, 835404467, 1185411736, 648686, 9652392, 281, 9934994
			},
			.prefetch0 = 7999,
			.prefetch1 = 49995,
			.ram = roxrw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_7,
		.transactions_len = 2,
		.lenght = 92,
	},
	{
		.name = "008 ROXR.w 3, D5 e655",
		.initial = {
			.regs = {
				1436865909, 3493868206, 2660364644, 2190303037, 2920533374, 1313728857, 2900902432, 3092277134, 1310358746, 803754848, 444504768, 3337695470, 1769398419, 3058021713, 3640579045, 9701606, 723626, 1797, 16473624
			},
			.prefetch0 = 58965,
			.prefetch1 = 33654,
			.ram = roxrw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1436865909, 3493868206, 2660364644, 2190303037, 2920533374, 1313692971, 2900902432, 3092277134, 1310358746, 803754848, 444504768, 3337695470, 1769398419, 3058021713, 3640579045, 9701606, 723626, 1792, 16473626
			},
			.prefetch0 = 33654,
			.prefetch1 = 16647,
			.ram = roxrw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_8,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "009 ROXR.w 2, D2 e452",
		.initial = {
			.regs = {
				3910186767, 3363739512, 1242125828, 744417507, 965605829, 1413615602, 2720744715, 3805774169, 3580524745, 2605096437, 1182351803, 2764011997, 1019598155, 1292992054, 535175495, 3093660, 8571776, 33053, 15382094
			},
			.prefetch0 = 58450,
			.prefetch1 = 35183,
			.ram = roxrw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3910186767, 3363739512, 1242125697, 744417507, 965605829, 1413615602, 2720744715, 3805774169, 3580524745, 2605096437, 1182351803, 2764011997, 1019598155, 1292992054, 535175495, 3093660, 8571776, 33024, 15382096
			},
			.prefetch0 = 35183,
			.prefetch1 = 14801,
			.ram = roxrw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_9,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "010 ROXR.w (d8, A2, Xn) e4f2",
		.initial = {
			.regs = {
				2758231136, 3839270919, 821959843, 777064710, 3205076784, 2196372374, 1943510118, 93442369, 81744080, 2673303393, 1720452896, 1833381626, 541233557, 1189358083, 1665305510, 15002924, 7088472, 42008, 301336
			},
			.prefetch0 = 58610,
			.prefetch1 = 33256,
			.ram = roxrw_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2758231136, 3839270919, 821959843, 777064710, 3205076784, 2196372374, 1943510118, 93442369, 81744080, 2673303393, 1720452896, 1833381626, 541233557, 1189358083, 1665305510, 15002924, 7088472, 42009, 301340
			},
			.prefetch0 = 31413,
			.prefetch1 = 65352,
			.ram = roxrw_final_ram_10,
			.ram_len = 10,
		},
		.transactions = roxrw_transactions_10,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "011 ROXR.w 4, D7 e857",
		.initial = {
			.regs = {
				2541505635, 1814846234, 1205201881, 3504373159, 250406752, 926387239, 2936762026, 2735572240, 2696697207, 3836586194, 3804190783, 425743489, 2175396967, 3820207528, 442711893, 10079112, 9419290, 284, 1681156
			},
			.prefetch0 = 59479,
			.prefetch1 = 40713,
			.ram = roxrw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2541505635, 1814846234, 1205201881, 3504373159, 250406752, 926387239, 2936762026, 2735544401, 2696697207, 3836586194, 3804190783, 425743489, 2175396967, 3820207528, 442711893, 10079112, 9419290, 256, 1681158
			},
			.prefetch0 = 40713,
			.prefetch1 = 52062,
			.ram = roxrw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_11,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "012 ROXR.w D0, D2 e072",
		.initial = {
			.regs = {
				2202086258, 2366748789, 2168584164, 1065293604, 3763186565, 3874350105, 1228622952, 1458121840, 1192347487, 2814563727, 294414438, 2302572310, 2968462107, 132610576, 4214746538, 10445420, 9230280, 535, 8129544
			},
			.prefetch0 = 57458,
			.prefetch1 = 49559,
			.ram = roxrw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2202086258, 2366748789, 2168582089, 1065293604, 3763186565, 3874350105, 1228622952, 1458121840, 1192347487, 2814563727, 294414438, 2302572310, 2968462107, 132610576, 4214746538, 10445420, 9230280, 537, 8129546
			},
			.prefetch0 = 49559,
			.prefetch1 = 59279,
			.ram = roxrw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_12,
		.transactions_len = 2,
		.lenght = 106,
	},
	{
		.name = "013 ROXR.w D6, D4 ec74",
		.initial = {
			.regs = {
				2969522964, 526723208, 1537392676, 3080871007, 2068410628, 789831592, 2343458268, 2665216824, 3460351998, 94627362, 2705616243, 634630421, 1270724676, 4115376298, 4007707544, 15031464, 12086222, 8973, 12285448
			},
			.prefetch0 = 60532,
			.prefetch1 = 26174,
			.ram = roxrw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2969522964, 526723208, 1537392676, 3080871007, 2068398350, 789831592, 2343458268, 2665216824, 3460351998, 94627362, 2705616243, 634630421, 1270724676, 4115376298, 4007707544, 15031464, 12086222, 8960, 12285450
			},
			.prefetch0 = 26174,
			.prefetch1 = 50575,
			.ram = roxrw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_13,
		.transactions_len = 2,
		.lenght = 62,
	},
	{
		.name = "014 ROXR.w -(A1) e4e1",
		.initial = {
			.regs = {
				3079831210, 3731595126, 2066303933, 2087931180, 2134067378, 1243400819, 3040853601, 2198777700, 1913230764, 2328976077, 2377924096, 3424441856, 838711284, 324742906, 3344471647, 13059456, 15600704, 40974, 4300234
			},
			.prefetch0 = 58593,
			.prefetch1 = 5751,
			.ram = roxrw_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3079831210, 3731595126, 2066303933, 2087931180, 2134067378, 1243400819, 3040853601, 2198777700, 1913230764, 2328976075, 2377924096, 3424441856, 838711284, 324742906, 3344471647, 13059456, 15600690, 8206, 205420682
			},
			.prefetch0 = 62773,
			.prefetch1 = 33464,
			.ram = roxrw_final_ram_14,
			.ram_len = 26,
		},
		.transactions = roxrw_transactions_14,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "015 ROXR.w 5, D7 ea57",
		.initial = {
			.regs = {
				3745837526, 1587101584, 3650920747, 4252863083, 949478580, 2633419730, 2415926413, 3066809197, 2562183137, 814163095, 83789162, 2776308941, 1515774486, 1883608513, 3911226364, 8405028, 5270006, 1555, 11290490
			},
			.prefetch0 = 59991,
			.prefetch1 = 60784,
			.ram = roxrw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3745837526, 1587101584, 3650920747, 4252863083, 949478580, 2633419730, 2415926413, 3066814043, 2562183137, 814163095, 83789162, 2776308941, 1515774486, 1883608513, 3911226364, 8405028, 5270006, 1544, 11290492
			},
			.prefetch0 = 60784,
			.prefetch1 = 65266,
			.ram = roxrw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_15,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "016 ROXR.w D1, D3 e273",
		.initial = {
			.regs = {
				1449998713, 4220937900, 1462386260, 1068182622, 3801123861, 1483796445, 1946249013, 1503929453, 355194904, 1450950692, 439692055, 3561919083, 2807890723, 30773395, 337757686, 16064952, 14051174, 526, 16450078
			},
			.prefetch0 = 57971,
			.prefetch1 = 59065,
			.ram = roxrw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1449998713, 4220937900, 1462386260, 1068183307, 3801123861, 1483796445, 1946249013, 1503929453, 355194904, 1450950692, 439692055, 3561919083, 2807890723, 30773395, 337757686, 16064952, 14051174, 512, 16450080
			},
			.prefetch0 = 59065,
			.prefetch1 = 53559,
			.ram = roxrw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_16,
		.transactions_len = 2,
		.lenght = 94,
	},
	{
		.name = "017 ROXR.w (d8, A0, Xn) e4f0",
		.initial = {
			.regs = {
				3505338562, 387995191, 3590025108, 578575407, 936589467, 2622942681, 3499003175, 180617208, 2805743603, 1119874498, 2047370413, 3138484421, 759028500, 2314200117, 1558511555, 10882124, 12848372, 1817, 12393676
			},
			.prefetch0 = 58608,
			.prefetch1 = 9679,
			.ram = roxrw_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3505338562, 387995191, 3590025108, 578575407, 936589467, 2622942681, 3499003175, 180617208, 2805743603, 1119874498, 2047370413, 3138484421, 759028500, 2314200117, 1558511555, 10882124, 12848372, 1800, 12393680
			},
			.prefetch0 = 56502,
			.prefetch1 = 32477,
			.ram = roxrw_final_ram_17,
			.ram_len = 10,
		},
		.transactions = roxrw_transactions_17,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "018 ROXR.w D5, D6 ea76",
		.initial = {
			.regs = {
				2480633041, 3759640228, 935789796, 1324302866, 1377005456, 2984778315, 778819878, 826777513, 4102764521, 254857841, 532725487, 2735344862, 3051157718, 4101444255, 375404505, 13765604, 214434, 8453, 4630492
			},
			.prefetch0 = 60022,
			.prefetch1 = 29609,
			.ram = roxrw_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2480633041, 3759640228, 935789796, 1324302866, 1377005456, 2984778315, 778783131, 826777513, 4102764521, 254857841, 532725487, 2735344862, 3051157718, 4101444255, 375404505, 13765604, 214434, 8448, 4630494
			},
			.prefetch0 = 29609,
			.prefetch1 = 18294,
			.ram = roxrw_final_ram_18,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_18,
		.transactions_len = 2,
		.lenght = 28,
	},
	{
		.name = "019 ROXR.w D2, D0 e470",
		.initial = {
			.regs = {
				3000937427, 2650277387, 1720876160, 3366450506, 3764296973, 3093025850, 1004318569, 58347345, 3333834549, 1800850445, 3101880101, 2021161225, 539525177, 1498517429, 3259115765, 8152304, 11131970, 9995, 5737632
			},
			.prefetch0 = 58480,
			.prefetch1 = 54106,
			.ram = roxrw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3000937427, 2650277387, 1720876160, 3366450506, 3764296973, 3093025850, 1004318569, 58347345, 3333834549, 1800850445, 3101880101, 2021161225, 539525177, 1498517429, 3259115765, 8152304, 11131970, 9992, 5737634
			},
			.prefetch0 = 54106,
			.prefetch1 = 63954,
			.ram = roxrw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_19,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "020 ROXR.w D1, D5 e275",
		.initial = {
			.regs = {
				2751675306, 2770066127, 4137845952, 3435765941, 3209240160, 3758668449, 3805510524, 3370252045, 4183518427, 1171440809, 885942035, 1205107052, 3246684624, 3162732764, 1919479154, 6554076, 2037776, 12, 15923628
			},
			.prefetch0 = 57973,
			.prefetch1 = 39636,
			.ram = roxrw_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2751675306, 2770066127, 4137845952, 3435765941, 3209240160, 3758680709, 3805510524, 3370252045, 4183518427, 1171440809, 885942035, 1205107052, 3246684624, 3162732764, 1919479154, 6554076, 2037776, 8, 15923630
			},
			.prefetch0 = 39636,
			.prefetch1 = 38795,
			.ram = roxrw_final_ram_20,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_20,
		.transactions_len = 2,
		.lenght = 36,
	},
	{
		.name = "021 ROXR.w D6, D2 ec72",
		.initial = {
			.regs = {
				1681697929, 507980243, 2275212346, 3357596671, 2997478083, 2895101120, 1969856983, 2559731937, 2106634462, 2688768348, 1271650307, 1304553882, 2889435694, 2200689845, 1264744296, 7058436, 1994700, 8453, 5001402
			},
			.prefetch0 = 60530,
			.prefetch1 = 20901,
			.ram = roxrw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1681697929, 507980243, 2275202032, 3357596671, 2997478083, 2895101120, 1969856983, 2559731937, 2106634462, 2688768348, 1271650307, 1304553882, 2889435694, 2200689845, 1264744296, 7058436, 1994700, 8473, 5001404
			},
			.prefetch0 = 20901,
			.prefetch1 = 48405,
			.ram = roxrw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_21,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "022 ROXR.w (d16, A7) e4ef",
		.initial = {
			.regs = {
				2715228754, 245128974, 3298946038, 802248796, 3489064764, 3772904810, 254696272, 3530334515, 534890509, 4128127445, 2454490166, 1693794374, 2127029049, 3119049651, 3251614577, 15266518, 12393912, 17, 8881144
			},
			.prefetch0 = 58607,
			.prefetch1 = 57877,
			.ram = roxrw_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2715228754, 245128974, 3298946038, 802248796, 3489064764, 3772904810, 254696272, 3530334515, 534890509, 4128127445, 2454490166, 1693794374, 2127029049, 3119049651, 3251614577, 15266518, 12393898, 8209, 4027637516
			},
			.prefetch0 = 55776,
			.prefetch1 = 2005,
			.ram = roxrw_final_ram_22,
			.ram_len = 28,
		},
		.transactions = roxrw_transactions_22,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "023 ROXR.w 3, D6 e656",
		.initial = {
			.regs = {
				3362162010, 1909091872, 1098843762, 4219885737, 1446474792, 3524510637, 138733073, 3136226917, 2846636426, 1273304399, 3709676102, 2811799730, 1543431023, 2191668815, 1849286776, 11041358, 10774744, 9503, 3802270
			},
			.prefetch0 = 58966,
			.prefetch1 = 33806,
			.ram = roxrw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3362162010, 1909091872, 1098843762, 4219885737, 1446474792, 3524510637, 138706114, 3136226917, 2846636426, 1273304399, 3709676102, 2811799730, 1543431023, 2191668815, 1849286776, 11041358, 10774744, 9472, 3802272
			},
			.prefetch0 = 33806,
			.prefetch1 = 15254,
			.ram = roxrw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_23,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "024 ROXR.w 8, D2 e052",
		.initial = {
			.regs = {
				4201001586, 2738558597, 1709815741, 2430437030, 918236792, 3992431399, 161333889, 1191691568, 4052485871, 1516647908, 1265189039, 3082660181, 2112915742, 632197180, 3948913285, 4335222, 9483254, 34074, 12884198
			},
			.prefetch0 = 57426,
			.prefetch1 = 62536,
			.ram = roxrw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4201001586, 2738558597, 1709800375, 2430437030, 918236792, 3992431399, 161333889, 1191691568, 4052485871, 1516647908, 1265189039, 3082660181, 2112915742, 632197180, 3948913285, 4335222, 9483254, 34065, 12884200
			},
			.prefetch0 = 62536,
			.prefetch1 = 38632,
			.ram = roxrw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_24,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "025 ROXR.w (d16, A5) e4ed",
		.initial = {
			.regs = {
				3968506896, 1618035931, 2665840992, 1114017409, 35680394, 2348599124, 3282487496, 3664762108, 324615910, 4166773463, 2047943557, 833606061, 1934559185, 3005526753, 1719961916, 16604674, 15851796, 33546, 482172
			},
			.prefetch0 = 58605,
			.prefetch1 = 702,
			.ram = roxrw_initial_ram_25,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3968506896, 1618035931, 2665840992, 1114017409, 35680394, 2348599124, 3282487496, 3664762108, 324615910, 4166773463, 2047943557, 833606061, 1934559185, 3005526753, 1719961916, 16604674, 15851782, 8970, 2097594126
			},
			.prefetch0 = 25499,
			.prefetch1 = 43573,
			.ram = roxrw_final_ram_25,
			.ram_len = 28,
		},
		.transactions = roxrw_transactions_25,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "026 ROXR.w D7, D7 ee77",
		.initial = {
			.regs = {
				2111374120, 191869811, 3722887991, 3218651370, 396465017, 3211947276, 653029470, 4044212279, 3693363666, 904253908, 3305266331, 1161417621, 4071179647, 1544305779, 3438475181, 7808582, 4849484, 9495, 6547338
			},
			.prefetch0 = 61047,
			.prefetch1 = 1494,
			.ram = roxrw_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2111374120, 191869811, 3722887991, 3218651370, 396465017, 3211947276, 653029470, 4044225667, 3693363666, 904253908, 3305266331, 1161417621, 4071179647, 1544305779, 3438475181, 7808582, 4849484, 9480, 6547340
			},
			.prefetch0 = 1494,
			.prefetch1 = 23744,
			.ram = roxrw_final_ram_26,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_26,
		.transactions_len = 2,
		.lenght = 116,
	},
	{
		.name = "027 ROXR.w 2, D7 e457",
		.initial = {
			.regs = {
				1253522835, 3222034402, 2703046500, 388900490, 440629456, 4291550537, 3823321036, 1771933302, 2284872194, 1373561605, 2636651351, 1801821534, 2855889605, 3376209363, 1663559754, 8040480, 5815308, 8478, 5646428
			},
			.prefetch0 = 58455,
			.prefetch1 = 2713,
			.ram = roxrw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1253522835, 3222034402, 2703046500, 388900490, 440629456, 4291550537, 3823321036, 1771922333, 2284872194, 1373561605, 2636651351, 1801821534, 2855889605, 3376209363, 1663559754, 8040480, 5815308, 8465, 5646430
			},
			.prefetch0 = 2713,
			.prefetch1 = 19041,
			.ram = roxrw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_27,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "028 ROXR.w D2, D6 e476",
		.initial = {
			.regs = {
				550351700, 1510338033, 2647650658, 3388375120, 502945181, 3547867804, 3158878484, 2409440872, 2673852754, 939338201, 2043802619, 2897423495, 3072511646, 2613779896, 1800929227, 10573086, 7390110, 8724, 15361108
			},
			.prefetch0 = 58486,
			.prefetch1 = 38720,
			.ram = roxrw_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				550351700, 1510338033, 2647650658, 3388375120, 502945181, 3547867804, 3158878484, 2409440872, 2673852754, 939338201, 2043802619, 2897423495, 3072511646, 2613779896, 1800929227, 10573086, 7390110, 8729, 15361110
			},
			.prefetch0 = 38720,
			.prefetch1 = 40223,
			.ram = roxrw_final_ram_28,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_28,
		.transactions_len = 2,
		.lenght = 74,
	},
	{
		.name = "029 ROXR.w D2, D3 e473",
		.initial = {
			.regs = {
				3891827747, 2879132854, 1864038731, 2666440541, 1984392763, 3196488502, 3775892958, 3646859800, 2920927895, 2488340490, 1584086710, 943360669, 2705647980, 4102669064, 1155358390, 9802652, 16263978, 13, 2183716
			},
			.prefetch0 = 58483,
			.prefetch1 = 1411,
			.ram = roxrw_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3891827747, 2879132854, 1864038731, 2666452820, 1984392763, 3196488502, 3775892958, 3646859800, 2920927895, 2488340490, 1584086710, 943360669, 2705647980, 4102669064, 1155358390, 9802652, 16263978, 25, 2183718
			},
			.prefetch0 = 1411,
			.prefetch1 = 65182,
			.ram = roxrw_final_ram_29,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_29,
		.transactions_len = 2,
		.lenght = 28,
	},
	{
		.name = "030 ROXR.w D1, D4 e274",
		.initial = {
			.regs = {
				2921805640, 3909799952, 20693281, 3960157822, 1629896605, 2963271058, 2666360739, 1610813707, 2659244717, 730032546, 2681622443, 3538394253, 787657528, 1546403979, 2439884163, 10358414, 6316986, 33291, 3878502
			},
			.prefetch0 = 57972,
			.prefetch1 = 22867,
			.ram = roxrw_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2921805640, 3909799952, 20693281, 3960157822, 1629912890, 2963271058, 2666360739, 1610813707, 2659244717, 730032546, 2681622443, 3538394253, 787657528, 1546403979, 2439884163, 10358414, 6316986, 33280, 3878504
			},
			.prefetch0 = 22867,
			.prefetch1 = 7687,
			.ram = roxrw_final_ram_30,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_30,
		.transactions_len = 2,
		.lenght = 38,
	},
	{
		.name = "031 ROXR.w D6, D5 ec75",
		.initial = {
			.regs = {
				4094509642, 3724750792, 934296698, 3367680601, 1909567156, 1834759428, 2834802949, 2557454566, 362560680, 728455737, 817169972, 2364383919, 2029925160, 3171137733, 2885911496, 10678444, 15723822, 1293, 4390114
			},
			.prefetch0 = 60533,
			.prefetch1 = 48126,
			.ram = roxrw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4094509642, 3724750792, 934296698, 3367680601, 1909567156, 1834762664, 2834802949, 2557454566, 362560680, 728455737, 817169972, 2364383919, 2029925160, 3171137733, 2885911496, 10678444, 15723822, 1280, 4390116
			},
			.prefetch0 = 48126,
			.prefetch1 = 44299,
			.ram = roxrw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = roxrw_transactions_31,
		.transactions_len = 2,
		.lenght = 16,
	},
};

#endif /* RBT_ROXRW_H */