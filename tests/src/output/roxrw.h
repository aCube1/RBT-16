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

const uint32_t ROXRW_TEST_COUNT = 16;
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
};

#endif /* RBT_ROXRW_H */