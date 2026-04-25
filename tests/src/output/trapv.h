#ifndef RBT_TRAPV_H
#define RBT_TRAPV_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte trapv_initial_ram_0[] = {
		{ .addr = 0xb9ad00, .byte = 0x4e },
		{ .addr = 0xb9ad01, .byte = 0x76 },
		{ .addr = 0xb9ad02, .byte = 0xf0 },
		{ .addr = 0xb9ad03, .byte = 0x4c },
		{ .addr = 0xb9ad04, .byte = 0x3c },
		{ .addr = 0xb9ad05, .byte = 0x69 }
};

static const SST_RamByte trapv_final_ram_0[] = {
		{ .addr = 0xb9ad00, .byte = 0x4e },
		{ .addr = 0xb9ad01, .byte = 0x76 },
		{ .addr = 0xb9ad02, .byte = 0xf0 },
		{ .addr = 0xb9ad03, .byte = 0x4c },
		{ .addr = 0xb9ad04, .byte = 0x3c },
		{ .addr = 0xb9ad05, .byte = 0x69 }
};

static const SST_Transaction trapv_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12168452, .data = 15465, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_1[] = {
		{ .addr = 0x080984, .byte = 0x4e },
		{ .addr = 0x080985, .byte = 0x76 },
		{ .addr = 0x080986, .byte = 0x72 },
		{ .addr = 0x080987, .byte = 0x03 },
		{ .addr = 0x080988, .byte = 0xa7 },
		{ .addr = 0x080989, .byte = 0xf1 },
		{ .addr = 0x00001c, .byte = 0x86 },
		{ .addr = 0x00001d, .byte = 0xf6 },
		{ .addr = 0x00001e, .byte = 0xb5 },
		{ .addr = 0x00001f, .byte = 0x4c },
		{ .addr = 0xf6b54c, .byte = 0xef },
		{ .addr = 0xf6b54d, .byte = 0xde },
		{ .addr = 0xf6b54e, .byte = 0x55 },
		{ .addr = 0xf6b54f, .byte = 0x8b }
};

static const SST_RamByte trapv_final_ram_1[] = {
		{ .addr = 0x080984, .byte = 0x4e },
		{ .addr = 0x080985, .byte = 0x76 },
		{ .addr = 0x080986, .byte = 0x72 },
		{ .addr = 0x080987, .byte = 0x03 },
		{ .addr = 0x080988, .byte = 0xa7 },
		{ .addr = 0x080989, .byte = 0xf1 },
		{ .addr = 0xcdcb88, .byte = 0x09 },
		{ .addr = 0xcdcb89, .byte = 0x86 },
		{ .addr = 0xcdcb84, .byte = 0x86 },
		{ .addr = 0xcdcb85, .byte = 0x06 },
		{ .addr = 0xcdcb86, .byte = 0x00 },
		{ .addr = 0xcdcb87, .byte = 0x08 },
		{ .addr = 0x00001c, .byte = 0x86 },
		{ .addr = 0x00001d, .byte = 0xf6 },
		{ .addr = 0x00001e, .byte = 0xb5 },
		{ .addr = 0x00001f, .byte = 0x4c },
		{ .addr = 0xf6b54c, .byte = 0xef },
		{ .addr = 0xf6b54d, .byte = 0xde },
		{ .addr = 0xf6b54e, .byte = 0x55 },
		{ .addr = 0xf6b54f, .byte = 0x8b }
};

static const SST_Transaction trapv_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 526728, .data = 42993, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13486984, .data = 2438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13486980, .data = 34310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13486982, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 34550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 46412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16168268, .data = 61406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16168270, .data = 21899, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_2[] = {
		{ .addr = 0x0be550, .byte = 0x4e },
		{ .addr = 0x0be551, .byte = 0x76 },
		{ .addr = 0x0be552, .byte = 0x73 },
		{ .addr = 0x0be553, .byte = 0x1c },
		{ .addr = 0x0be554, .byte = 0x5a },
		{ .addr = 0x0be555, .byte = 0x6d }
};

static const SST_RamByte trapv_final_ram_2[] = {
		{ .addr = 0x0be550, .byte = 0x4e },
		{ .addr = 0x0be551, .byte = 0x76 },
		{ .addr = 0x0be552, .byte = 0x73 },
		{ .addr = 0x0be553, .byte = 0x1c },
		{ .addr = 0x0be554, .byte = 0x5a },
		{ .addr = 0x0be555, .byte = 0x6d }
};

static const SST_Transaction trapv_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 779604, .data = 23149, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_3[] = {
		{ .addr = 0x162aae, .byte = 0x4e },
		{ .addr = 0x162aaf, .byte = 0x76 },
		{ .addr = 0x162ab0, .byte = 0x0b },
		{ .addr = 0x162ab1, .byte = 0x90 },
		{ .addr = 0x162ab2, .byte = 0xbd },
		{ .addr = 0x162ab3, .byte = 0xba },
		{ .addr = 0x00001c, .byte = 0xdb },
		{ .addr = 0x00001d, .byte = 0x66 },
		{ .addr = 0x00001e, .byte = 0x5a },
		{ .addr = 0x00001f, .byte = 0x12 },
		{ .addr = 0x665a12, .byte = 0x40 },
		{ .addr = 0x665a13, .byte = 0xb3 },
		{ .addr = 0x665a14, .byte = 0x65 },
		{ .addr = 0x665a15, .byte = 0xc7 }
};

static const SST_RamByte trapv_final_ram_3[] = {
		{ .addr = 0x162aae, .byte = 0x4e },
		{ .addr = 0x162aaf, .byte = 0x76 },
		{ .addr = 0x162ab0, .byte = 0x0b },
		{ .addr = 0x162ab1, .byte = 0x90 },
		{ .addr = 0x162ab2, .byte = 0xbd },
		{ .addr = 0x162ab3, .byte = 0xba },
		{ .addr = 0xe25b84, .byte = 0x2a },
		{ .addr = 0xe25b85, .byte = 0xb0 },
		{ .addr = 0xe25b80, .byte = 0x20 },
		{ .addr = 0xe25b81, .byte = 0x16 },
		{ .addr = 0xe25b82, .byte = 0x00 },
		{ .addr = 0xe25b83, .byte = 0x16 },
		{ .addr = 0x00001c, .byte = 0xdb },
		{ .addr = 0x00001d, .byte = 0x66 },
		{ .addr = 0x00001e, .byte = 0x5a },
		{ .addr = 0x00001f, .byte = 0x12 },
		{ .addr = 0x665a12, .byte = 0x40 },
		{ .addr = 0x665a13, .byte = 0xb3 },
		{ .addr = 0x665a14, .byte = 0x65 },
		{ .addr = 0x665a15, .byte = 0xc7 }
};

static const SST_Transaction trapv_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1452722, .data = 48570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14834564, .data = 10928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14834560, .data = 8214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14834562, .data = 22, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 56166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 23058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6707730, .data = 16563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6707732, .data = 26055, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_4[] = {
		{ .addr = 0x503e8e, .byte = 0x4e },
		{ .addr = 0x503e8f, .byte = 0x76 },
		{ .addr = 0x503e90, .byte = 0x71 },
		{ .addr = 0x503e91, .byte = 0xad },
		{ .addr = 0x503e92, .byte = 0x49 },
		{ .addr = 0x503e93, .byte = 0x08 },
		{ .addr = 0x00001c, .byte = 0x80 },
		{ .addr = 0x00001d, .byte = 0x7c },
		{ .addr = 0x00001e, .byte = 0xa2 },
		{ .addr = 0x00001f, .byte = 0x6a },
		{ .addr = 0x7ca26a, .byte = 0xbd },
		{ .addr = 0x7ca26b, .byte = 0x05 },
		{ .addr = 0x7ca26c, .byte = 0x33 },
		{ .addr = 0x7ca26d, .byte = 0xae }
};

static const SST_RamByte trapv_final_ram_4[] = {
		{ .addr = 0x503e8e, .byte = 0x4e },
		{ .addr = 0x503e8f, .byte = 0x76 },
		{ .addr = 0x503e90, .byte = 0x71 },
		{ .addr = 0x503e91, .byte = 0xad },
		{ .addr = 0x503e92, .byte = 0x49 },
		{ .addr = 0x503e93, .byte = 0x08 },
		{ .addr = 0x8eec12, .byte = 0x3e },
		{ .addr = 0x8eec13, .byte = 0x90 },
		{ .addr = 0x8eec0e, .byte = 0x26 },
		{ .addr = 0x8eec0f, .byte = 0x1b },
		{ .addr = 0x8eec10, .byte = 0x00 },
		{ .addr = 0x8eec11, .byte = 0x50 },
		{ .addr = 0x00001c, .byte = 0x80 },
		{ .addr = 0x00001d, .byte = 0x7c },
		{ .addr = 0x00001e, .byte = 0xa2 },
		{ .addr = 0x00001f, .byte = 0x6a },
		{ .addr = 0x7ca26a, .byte = 0xbd },
		{ .addr = 0x7ca26b, .byte = 0x05 },
		{ .addr = 0x7ca26c, .byte = 0x33 },
		{ .addr = 0x7ca26d, .byte = 0xae }
};

static const SST_Transaction trapv_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5258898, .data = 18696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9366546, .data = 16016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9366542, .data = 9755, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9366544, .data = 80, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 32892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 41578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8168042, .data = 48389, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8168044, .data = 13230, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_5[] = {
		{ .addr = 0x9049da, .byte = 0x4e },
		{ .addr = 0x9049db, .byte = 0x76 },
		{ .addr = 0x9049dc, .byte = 0xf6 },
		{ .addr = 0x9049dd, .byte = 0xc3 },
		{ .addr = 0x9049de, .byte = 0x6c },
		{ .addr = 0x9049df, .byte = 0x0e }
};

static const SST_RamByte trapv_final_ram_5[] = {
		{ .addr = 0x9049da, .byte = 0x4e },
		{ .addr = 0x9049db, .byte = 0x76 },
		{ .addr = 0x9049dc, .byte = 0xf6 },
		{ .addr = 0x9049dd, .byte = 0xc3 },
		{ .addr = 0x9049de, .byte = 0x6c },
		{ .addr = 0x9049df, .byte = 0x0e }
};

static const SST_Transaction trapv_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9456094, .data = 27662, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_6[] = {
		{ .addr = 0x7f642a, .byte = 0x4e },
		{ .addr = 0x7f642b, .byte = 0x76 },
		{ .addr = 0x7f642c, .byte = 0x9c },
		{ .addr = 0x7f642d, .byte = 0x89 },
		{ .addr = 0x7f642e, .byte = 0x13 },
		{ .addr = 0x7f642f, .byte = 0x96 },
		{ .addr = 0x00001c, .byte = 0xcd },
		{ .addr = 0x00001d, .byte = 0xf2 },
		{ .addr = 0x00001e, .byte = 0xf1 },
		{ .addr = 0x00001f, .byte = 0x96 },
		{ .addr = 0xf2f196, .byte = 0x04 },
		{ .addr = 0xf2f197, .byte = 0xe4 },
		{ .addr = 0xf2f198, .byte = 0xcc },
		{ .addr = 0xf2f199, .byte = 0x63 }
};

static const SST_RamByte trapv_final_ram_6[] = {
		{ .addr = 0x7f642a, .byte = 0x4e },
		{ .addr = 0x7f642b, .byte = 0x76 },
		{ .addr = 0x7f642c, .byte = 0x9c },
		{ .addr = 0x7f642d, .byte = 0x89 },
		{ .addr = 0x7f642e, .byte = 0x13 },
		{ .addr = 0x7f642f, .byte = 0x96 },
		{ .addr = 0x5278e4, .byte = 0x64 },
		{ .addr = 0x5278e5, .byte = 0x2c },
		{ .addr = 0x5278e0, .byte = 0x83 },
		{ .addr = 0x5278e1, .byte = 0x03 },
		{ .addr = 0x5278e2, .byte = 0x00 },
		{ .addr = 0x5278e3, .byte = 0x7f },
		{ .addr = 0x00001c, .byte = 0xcd },
		{ .addr = 0x00001d, .byte = 0xf2 },
		{ .addr = 0x00001e, .byte = 0xf1 },
		{ .addr = 0x00001f, .byte = 0x96 },
		{ .addr = 0xf2f196, .byte = 0x04 },
		{ .addr = 0xf2f197, .byte = 0xe4 },
		{ .addr = 0xf2f198, .byte = 0xcc },
		{ .addr = 0xf2f199, .byte = 0x63 }
};

static const SST_Transaction trapv_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8348718, .data = 5014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5404900, .data = 25644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5404896, .data = 33539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5404898, .data = 127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 52722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 61846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15921558, .data = 1252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15921560, .data = 52323, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_7[] = {
		{ .addr = 0xccf7c8, .byte = 0x4e },
		{ .addr = 0xccf7c9, .byte = 0x76 },
		{ .addr = 0xccf7ca, .byte = 0xb0 },
		{ .addr = 0xccf7cb, .byte = 0x80 },
		{ .addr = 0xccf7cc, .byte = 0x94 },
		{ .addr = 0xccf7cd, .byte = 0xe6 },
		{ .addr = 0x00001c, .byte = 0xfd },
		{ .addr = 0x00001d, .byte = 0xbe },
		{ .addr = 0x00001e, .byte = 0xa6 },
		{ .addr = 0x00001f, .byte = 0x6e },
		{ .addr = 0xbea66e, .byte = 0x24 },
		{ .addr = 0xbea66f, .byte = 0xe1 },
		{ .addr = 0xbea670, .byte = 0xab },
		{ .addr = 0xbea671, .byte = 0xdd }
};

static const SST_RamByte trapv_final_ram_7[] = {
		{ .addr = 0xccf7c8, .byte = 0x4e },
		{ .addr = 0xccf7c9, .byte = 0x76 },
		{ .addr = 0xccf7ca, .byte = 0xb0 },
		{ .addr = 0xccf7cb, .byte = 0x80 },
		{ .addr = 0xccf7cc, .byte = 0x94 },
		{ .addr = 0xccf7cd, .byte = 0xe6 },
		{ .addr = 0xbac472, .byte = 0xf7 },
		{ .addr = 0xbac473, .byte = 0xca },
		{ .addr = 0xbac46e, .byte = 0x86 },
		{ .addr = 0xbac46f, .byte = 0x06 },
		{ .addr = 0xbac470, .byte = 0x00 },
		{ .addr = 0xbac471, .byte = 0xcc },
		{ .addr = 0x00001c, .byte = 0xfd },
		{ .addr = 0x00001d, .byte = 0xbe },
		{ .addr = 0x00001e, .byte = 0xa6 },
		{ .addr = 0x00001f, .byte = 0x6e },
		{ .addr = 0xbea66e, .byte = 0x24 },
		{ .addr = 0xbea66f, .byte = 0xe1 },
		{ .addr = 0xbea670, .byte = 0xab },
		{ .addr = 0xbea671, .byte = 0xdd }
};

static const SST_Transaction trapv_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13432780, .data = 38118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12239986, .data = 63434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12239982, .data = 34310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12239984, .data = 204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 64958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 42606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12494446, .data = 9441, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12494448, .data = 43997, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_8[] = {
		{ .addr = 0x4dbabc, .byte = 0x4e },
		{ .addr = 0x4dbabd, .byte = 0x76 },
		{ .addr = 0x4dbabe, .byte = 0xee },
		{ .addr = 0x4dbabf, .byte = 0xc3 },
		{ .addr = 0x4dbac0, .byte = 0xd7 },
		{ .addr = 0x4dbac1, .byte = 0x1d },
		{ .addr = 0x00001c, .byte = 0x00 },
		{ .addr = 0x00001d, .byte = 0xec },
		{ .addr = 0x00001e, .byte = 0x2c },
		{ .addr = 0x00001f, .byte = 0xde },
		{ .addr = 0xec2cde, .byte = 0x2e },
		{ .addr = 0xec2cdf, .byte = 0xd0 },
		{ .addr = 0xec2ce0, .byte = 0x87 },
		{ .addr = 0xec2ce1, .byte = 0x32 }
};

static const SST_RamByte trapv_final_ram_8[] = {
		{ .addr = 0x4dbabc, .byte = 0x4e },
		{ .addr = 0x4dbabd, .byte = 0x76 },
		{ .addr = 0x4dbabe, .byte = 0xee },
		{ .addr = 0x4dbabf, .byte = 0xc3 },
		{ .addr = 0x4dbac0, .byte = 0xd7 },
		{ .addr = 0x4dbac1, .byte = 0x1d },
		{ .addr = 0x8c0c5e, .byte = 0xba },
		{ .addr = 0x8c0c5f, .byte = 0xbe },
		{ .addr = 0x8c0c5a, .byte = 0x27 },
		{ .addr = 0x8c0c5b, .byte = 0x07 },
		{ .addr = 0x8c0c5c, .byte = 0x00 },
		{ .addr = 0x8c0c5d, .byte = 0x4d },
		{ .addr = 0x00001c, .byte = 0x00 },
		{ .addr = 0x00001d, .byte = 0xec },
		{ .addr = 0x00001e, .byte = 0x2c },
		{ .addr = 0x00001f, .byte = 0xde },
		{ .addr = 0xec2cde, .byte = 0x2e },
		{ .addr = 0xec2cdf, .byte = 0xd0 },
		{ .addr = 0xec2ce0, .byte = 0x87 },
		{ .addr = 0xec2ce1, .byte = 0x32 }
};

static const SST_Transaction trapv_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5094080, .data = 55069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9178206, .data = 47806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9178202, .data = 9991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9178204, .data = 77, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 11486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15477982, .data = 11984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15477984, .data = 34610, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_9[] = {
		{ .addr = 0x86eb52, .byte = 0x4e },
		{ .addr = 0x86eb53, .byte = 0x76 },
		{ .addr = 0x86eb54, .byte = 0x0b },
		{ .addr = 0x86eb55, .byte = 0x61 },
		{ .addr = 0x86eb56, .byte = 0x5f },
		{ .addr = 0x86eb57, .byte = 0x49 }
};

static const SST_RamByte trapv_final_ram_9[] = {
		{ .addr = 0x86eb52, .byte = 0x4e },
		{ .addr = 0x86eb53, .byte = 0x76 },
		{ .addr = 0x86eb54, .byte = 0x0b },
		{ .addr = 0x86eb55, .byte = 0x61 },
		{ .addr = 0x86eb56, .byte = 0x5f },
		{ .addr = 0x86eb57, .byte = 0x49 }
};

static const SST_Transaction trapv_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8842070, .data = 24393, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_10[] = {
		{ .addr = 0x05eb3a, .byte = 0x4e },
		{ .addr = 0x05eb3b, .byte = 0x76 },
		{ .addr = 0x05eb3c, .byte = 0xc8 },
		{ .addr = 0x05eb3d, .byte = 0x6d },
		{ .addr = 0x05eb3e, .byte = 0xc0 },
		{ .addr = 0x05eb3f, .byte = 0xdd },
		{ .addr = 0x00001c, .byte = 0xbd },
		{ .addr = 0x00001d, .byte = 0x2e },
		{ .addr = 0x00001e, .byte = 0xa1 },
		{ .addr = 0x00001f, .byte = 0xec },
		{ .addr = 0x2ea1ec, .byte = 0x31 },
		{ .addr = 0x2ea1ed, .byte = 0xeb },
		{ .addr = 0x2ea1ee, .byte = 0xbe },
		{ .addr = 0x2ea1ef, .byte = 0x01 }
};

static const SST_RamByte trapv_final_ram_10[] = {
		{ .addr = 0x05eb3a, .byte = 0x4e },
		{ .addr = 0x05eb3b, .byte = 0x76 },
		{ .addr = 0x05eb3c, .byte = 0xc8 },
		{ .addr = 0x05eb3d, .byte = 0x6d },
		{ .addr = 0x05eb3e, .byte = 0xc0 },
		{ .addr = 0x05eb3f, .byte = 0xdd },
		{ .addr = 0x917ade, .byte = 0xeb },
		{ .addr = 0x917adf, .byte = 0x3c },
		{ .addr = 0x917ada, .byte = 0xa2 },
		{ .addr = 0x917adb, .byte = 0x13 },
		{ .addr = 0x917adc, .byte = 0x00 },
		{ .addr = 0x917add, .byte = 0x05 },
		{ .addr = 0x00001c, .byte = 0xbd },
		{ .addr = 0x00001d, .byte = 0x2e },
		{ .addr = 0x00001e, .byte = 0xa1 },
		{ .addr = 0x00001f, .byte = 0xec },
		{ .addr = 0x2ea1ec, .byte = 0x31 },
		{ .addr = 0x2ea1ed, .byte = 0xeb },
		{ .addr = 0x2ea1ee, .byte = 0xbe },
		{ .addr = 0x2ea1ef, .byte = 0x01 }
};

static const SST_Transaction trapv_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 387902, .data = 49373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9534174, .data = 60220, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9534170, .data = 41491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9534172, .data = 5, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 48430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 41452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3056108, .data = 12779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3056110, .data = 48641, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_11[] = {
		{ .addr = 0x574992, .byte = 0x4e },
		{ .addr = 0x574993, .byte = 0x76 },
		{ .addr = 0x574994, .byte = 0x49 },
		{ .addr = 0x574995, .byte = 0xad },
		{ .addr = 0x574996, .byte = 0xd1 },
		{ .addr = 0x574997, .byte = 0x09 }
};

static const SST_RamByte trapv_final_ram_11[] = {
		{ .addr = 0x574992, .byte = 0x4e },
		{ .addr = 0x574993, .byte = 0x76 },
		{ .addr = 0x574994, .byte = 0x49 },
		{ .addr = 0x574995, .byte = 0xad },
		{ .addr = 0x574996, .byte = 0xd1 },
		{ .addr = 0x574997, .byte = 0x09 }
};

static const SST_Transaction trapv_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5720470, .data = 53513, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_12[] = {
		{ .addr = 0xadcdf0, .byte = 0x4e },
		{ .addr = 0xadcdf1, .byte = 0x76 },
		{ .addr = 0xadcdf2, .byte = 0x37 },
		{ .addr = 0xadcdf3, .byte = 0xb0 },
		{ .addr = 0xadcdf4, .byte = 0x8c },
		{ .addr = 0xadcdf5, .byte = 0x94 },
		{ .addr = 0x00001c, .byte = 0x01 },
		{ .addr = 0x00001d, .byte = 0x58 },
		{ .addr = 0x00001e, .byte = 0x93 },
		{ .addr = 0x00001f, .byte = 0xf8 },
		{ .addr = 0x5893f8, .byte = 0x64 },
		{ .addr = 0x5893f9, .byte = 0x54 },
		{ .addr = 0x5893fa, .byte = 0x8d },
		{ .addr = 0x5893fb, .byte = 0x98 }
};

static const SST_RamByte trapv_final_ram_12[] = {
		{ .addr = 0xadcdf0, .byte = 0x4e },
		{ .addr = 0xadcdf1, .byte = 0x76 },
		{ .addr = 0xadcdf2, .byte = 0x37 },
		{ .addr = 0xadcdf3, .byte = 0xb0 },
		{ .addr = 0xadcdf4, .byte = 0x8c },
		{ .addr = 0xadcdf5, .byte = 0x94 },
		{ .addr = 0x172936, .byte = 0xcd },
		{ .addr = 0x172937, .byte = 0xf2 },
		{ .addr = 0x172932, .byte = 0x24 },
		{ .addr = 0x172933, .byte = 0x0e },
		{ .addr = 0x172934, .byte = 0x00 },
		{ .addr = 0x172935, .byte = 0xad },
		{ .addr = 0x00001c, .byte = 0x01 },
		{ .addr = 0x00001d, .byte = 0x58 },
		{ .addr = 0x00001e, .byte = 0x93 },
		{ .addr = 0x00001f, .byte = 0xf8 },
		{ .addr = 0x5893f8, .byte = 0x64 },
		{ .addr = 0x5893f9, .byte = 0x54 },
		{ .addr = 0x5893fa, .byte = 0x8d },
		{ .addr = 0x5893fb, .byte = 0x98 }
};

static const SST_Transaction trapv_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11390452, .data = 35988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1517878, .data = 52722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1517874, .data = 9230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1517876, .data = 173, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 344, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 37880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5805048, .data = 25684, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5805050, .data = 36248, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_13[] = {
		{ .addr = 0x38e2ba, .byte = 0x4e },
		{ .addr = 0x38e2bb, .byte = 0x76 },
		{ .addr = 0x38e2bc, .byte = 0x8c },
		{ .addr = 0x38e2bd, .byte = 0x6f },
		{ .addr = 0x38e2be, .byte = 0x2e },
		{ .addr = 0x38e2bf, .byte = 0x9d }
};

static const SST_RamByte trapv_final_ram_13[] = {
		{ .addr = 0x38e2ba, .byte = 0x4e },
		{ .addr = 0x38e2bb, .byte = 0x76 },
		{ .addr = 0x38e2bc, .byte = 0x8c },
		{ .addr = 0x38e2bd, .byte = 0x6f },
		{ .addr = 0x38e2be, .byte = 0x2e },
		{ .addr = 0x38e2bf, .byte = 0x9d }
};

static const SST_Transaction trapv_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3728062, .data = 11933, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_14[] = {
		{ .addr = 0x43a306, .byte = 0x4e },
		{ .addr = 0x43a307, .byte = 0x76 },
		{ .addr = 0x43a308, .byte = 0xc9 },
		{ .addr = 0x43a309, .byte = 0xec },
		{ .addr = 0x43a30a, .byte = 0x55 },
		{ .addr = 0x43a30b, .byte = 0x48 }
};

static const SST_RamByte trapv_final_ram_14[] = {
		{ .addr = 0x43a306, .byte = 0x4e },
		{ .addr = 0x43a307, .byte = 0x76 },
		{ .addr = 0x43a308, .byte = 0xc9 },
		{ .addr = 0x43a309, .byte = 0xec },
		{ .addr = 0x43a30a, .byte = 0x55 },
		{ .addr = 0x43a30b, .byte = 0x48 }
};

static const SST_Transaction trapv_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4432650, .data = 21832, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_15[] = {
		{ .addr = 0xdf91be, .byte = 0x4e },
		{ .addr = 0xdf91bf, .byte = 0x76 },
		{ .addr = 0xdf91c0, .byte = 0x28 },
		{ .addr = 0xdf91c1, .byte = 0x12 },
		{ .addr = 0xdf91c2, .byte = 0x63 },
		{ .addr = 0xdf91c3, .byte = 0xf5 },
		{ .addr = 0x00001c, .byte = 0x01 },
		{ .addr = 0x00001d, .byte = 0xfe },
		{ .addr = 0x00001e, .byte = 0x0b },
		{ .addr = 0x00001f, .byte = 0xa8 },
		{ .addr = 0xfe0ba8, .byte = 0xf8 },
		{ .addr = 0xfe0ba9, .byte = 0xed },
		{ .addr = 0xfe0baa, .byte = 0x1f },
		{ .addr = 0xfe0bab, .byte = 0xe4 }
};

static const SST_RamByte trapv_final_ram_15[] = {
		{ .addr = 0xdf91be, .byte = 0x4e },
		{ .addr = 0xdf91bf, .byte = 0x76 },
		{ .addr = 0xdf91c0, .byte = 0x28 },
		{ .addr = 0xdf91c1, .byte = 0x12 },
		{ .addr = 0xdf91c2, .byte = 0x63 },
		{ .addr = 0xdf91c3, .byte = 0xf5 },
		{ .addr = 0x37d598, .byte = 0x91 },
		{ .addr = 0x37d599, .byte = 0xc0 },
		{ .addr = 0x37d594, .byte = 0x04 },
		{ .addr = 0x37d595, .byte = 0x0e },
		{ .addr = 0x37d596, .byte = 0x00 },
		{ .addr = 0x37d597, .byte = 0xdf },
		{ .addr = 0x00001c, .byte = 0x01 },
		{ .addr = 0x00001d, .byte = 0xfe },
		{ .addr = 0x00001e, .byte = 0x0b },
		{ .addr = 0x00001f, .byte = 0xa8 },
		{ .addr = 0xfe0ba8, .byte = 0xf8 },
		{ .addr = 0xfe0ba9, .byte = 0xed },
		{ .addr = 0xfe0baa, .byte = 0x1f },
		{ .addr = 0xfe0bab, .byte = 0xe4 }
};

static const SST_Transaction trapv_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14651842, .data = 25589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3659160, .data = 37312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3659156, .data = 1038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3659158, .data = 223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 2984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16649128, .data = 63725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16649130, .data = 8164, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t TRAPV_TEST_COUNT = 16;
static const SST_TestCase trapv[] = {
	{
		.name = "000 TRAPV 4e76",
		.initial = {
			.regs = {
				2592244591, 2787002533, 2642938220, 675103923, 2036456728, 3857080593, 110809242, 1802466737, 4011914877, 2392146937, 2696781674, 2817160690, 1741577525, 3997636369, 955999827, 13193320, 16059230, 1809, 12168452
			},
			.prefetch0 = 20086,
			.prefetch1 = 61516,
			.ram = trapv_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2592244591, 2787002533, 2642938220, 675103923, 2036456728, 3857080593, 110809242, 1802466737, 4011914877, 2392146937, 2696781674, 2817160690, 1741577525, 3997636369, 955999827, 13193320, 16059230, 1809, 12168454
			},
			.prefetch0 = 61516,
			.prefetch1 = 15465,
			.ram = trapv_final_ram_0,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 TRAPV 4e76",
		.initial = {
			.regs = {
				753878549, 1094474358, 2455938711, 3957345401, 1429233336, 1110181459, 1421142233, 1874661837, 921548587, 3844775377, 3451515407, 2960621386, 1247952660, 205556374, 3469882406, 7967642, 13486986, 34310, 526728
			},
			.prefetch0 = 20086,
			.prefetch1 = 29187,
			.ram = trapv_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				753878549, 1094474358, 2455938711, 3957345401, 1429233336, 1110181459, 1421142233, 1874661837, 921548587, 3844775377, 3451515407, 2960621386, 1247952660, 205556374, 3469882406, 7967642, 13486980, 9734, 2264315216
			},
			.prefetch0 = 61406,
			.prefetch1 = 21899,
			.ram = trapv_final_ram_1,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_1,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "002 TRAPV 4e76",
		.initial = {
			.regs = {
				1696977681, 3479302958, 3346940625, 12486426, 2514407015, 3333256202, 3501074585, 2233297722, 3132439850, 3275443795, 3961570706, 1187414130, 856132664, 418306665, 2070912623, 7369166, 4504538, 32784, 779604
			},
			.prefetch0 = 20086,
			.prefetch1 = 29468,
			.ram = trapv_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1696977681, 3479302958, 3346940625, 12486426, 2514407015, 3333256202, 3501074585, 2233297722, 3132439850, 3275443795, 3961570706, 1187414130, 856132664, 418306665, 2070912623, 7369166, 4504538, 32784, 779606
			},
			.prefetch0 = 29468,
			.prefetch1 = 23149,
			.ram = trapv_final_ram_2,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 TRAPV 4e76",
		.initial = {
			.regs = {
				3752428211, 912288959, 2903969473, 1583480747, 71863144, 2571229724, 1159223100, 1721293862, 3439014240, 27743885, 3130978960, 1051801930, 1117206940, 989783621, 1643034712, 12476790, 14834566, 8214, 1452722
			},
			.prefetch0 = 20086,
			.prefetch1 = 2960,
			.ram = trapv_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3752428211, 912288959, 2903969473, 1583480747, 71863144, 2571229724, 1159223100, 1721293862, 3439014240, 27743885, 3130978960, 1051801930, 1117206940, 989783621, 1643034712, 12476790, 14834560, 8214, 3680918038
			},
			.prefetch0 = 16563,
			.prefetch1 = 26055,
			.ram = trapv_final_ram_3,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_3,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "004 TRAPV 4e76",
		.initial = {
			.regs = {
				500382121, 1120885595, 2427541604, 2467143710, 3148393467, 525703144, 2428631064, 2689523093, 1436823404, 252993955, 2801982623, 3163324666, 2334909614, 1932904122, 649834412, 15879958, 9366548, 9755, 5258898
			},
			.prefetch0 = 20086,
			.prefetch1 = 29101,
			.ram = trapv_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				500382121, 1120885595, 2427541604, 2467143710, 3148393467, 525703144, 2428631064, 2689523093, 1436823404, 252993955, 2801982623, 3163324666, 2334909614, 1932904122, 649834412, 15879958, 9366542, 9755, 2155651694
			},
			.prefetch0 = 48389,
			.prefetch1 = 13230,
			.ram = trapv_final_ram_4,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_4,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "005 TRAPV 4e76",
		.initial = {
			.regs = {
				4018487355, 3126737637, 3110828554, 2055766856, 518697487, 2090965699, 3105331915, 857663317, 3862092426, 462666833, 974639840, 1618221269, 159086603, 297612545, 3454607834, 1120490, 4528348, 9233, 9456094
			},
			.prefetch0 = 20086,
			.prefetch1 = 63171,
			.ram = trapv_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4018487355, 3126737637, 3110828554, 2055766856, 518697487, 2090965699, 3105331915, 857663317, 3862092426, 462666833, 974639840, 1618221269, 159086603, 297612545, 3454607834, 1120490, 4528348, 9233, 9456096
			},
			.prefetch0 = 63171,
			.prefetch1 = 27662,
			.ram = trapv_final_ram_5,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 TRAPV 4e76",
		.initial = {
			.regs = {
				257216317, 2753545153, 1030495207, 365987482, 3927885461, 2964275076, 4159700199, 4247642156, 3595725938, 1082660407, 89943897, 300561879, 2825843172, 1665398271, 2475644474, 15745368, 5404902, 33539, 8348718
			},
			.prefetch0 = 20086,
			.prefetch1 = 40073,
			.ram = trapv_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				257216317, 2753545153, 1030495207, 365987482, 3927885461, 2964275076, 4159700199, 4247642156, 3595725938, 1082660407, 89943897, 300561879, 2825843172, 1665398271, 2475644474, 15745368, 5404896, 8963, 3455250842
			},
			.prefetch0 = 1252,
			.prefetch1 = 52323,
			.ram = trapv_final_ram_6,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_6,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "007 TRAPV 4e76",
		.initial = {
			.regs = {
				3574552260, 2244217661, 15474715, 1788561058, 3279049875, 3254032410, 1508958018, 83479562, 810055561, 1084048816, 4088003513, 1079950099, 3508465394, 1834630604, 170736538, 2769144, 12239988, 34310, 13432780
			},
			.prefetch0 = 20086,
			.prefetch1 = 45184,
			.ram = trapv_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3574552260, 2244217661, 15474715, 1788561058, 3279049875, 3254032410, 1508958018, 83479562, 810055561, 1084048816, 4088003513, 1079950099, 3508465394, 1834630604, 170736538, 2769144, 12239982, 9734, 4257130098
			},
			.prefetch0 = 9441,
			.prefetch1 = 43997,
			.ram = trapv_final_ram_7,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_7,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "008 TRAPV 4e76",
		.initial = {
			.regs = {
				589712661, 3631064089, 457272419, 1980171931, 900939728, 2637474954, 3845887067, 2542724169, 3005039065, 1912749524, 2366445180, 3866955112, 3573122472, 2954728949, 954721843, 386074, 9178208, 9991, 5094080
			},
			.prefetch0 = 20086,
			.prefetch1 = 61123,
			.ram = trapv_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				589712661, 3631064089, 457272419, 1980171931, 900939728, 2637474954, 3845887067, 2542724169, 3005039065, 1912749524, 2366445180, 3866955112, 3573122472, 2954728949, 954721843, 386074, 9178202, 9991, 15477986
			},
			.prefetch0 = 11984,
			.prefetch1 = 34610,
			.ram = trapv_final_ram_8,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_8,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "009 TRAPV 4e76",
		.initial = {
			.regs = {
				2362805202, 614202778, 3458117247, 2656927705, 1073251036, 1716655876, 3711913941, 450907723, 2170310118, 2091903015, 1049116931, 3303012833, 3476769322, 2005299729, 265904832, 2123164, 11456354, 264, 8842070
			},
			.prefetch0 = 20086,
			.prefetch1 = 2913,
			.ram = trapv_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2362805202, 614202778, 3458117247, 2656927705, 1073251036, 1716655876, 3711913941, 450907723, 2170310118, 2091903015, 1049116931, 3303012833, 3476769322, 2005299729, 265904832, 2123164, 11456354, 264, 8842072
			},
			.prefetch0 = 2913,
			.prefetch1 = 24393,
			.ram = trapv_final_ram_9,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 TRAPV 4e76",
		.initial = {
			.regs = {
				2455216370, 1344224575, 1308111036, 4100056136, 691818038, 408659658, 413534650, 490216757, 888289077, 3329447686, 1927452654, 218891080, 2781953711, 4140865318, 518384458, 15689172, 9534176, 41491, 387902
			},
			.prefetch0 = 20086,
			.prefetch1 = 51309,
			.ram = trapv_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2455216370, 1344224575, 1308111036, 4100056136, 691818038, 408659658, 413534650, 490216757, 888289077, 3329447686, 1927452654, 218891080, 2781953711, 4140865318, 518384458, 15689172, 9534170, 8723, 3173949936
			},
			.prefetch0 = 12779,
			.prefetch1 = 48641,
			.ram = trapv_final_ram_10,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_10,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "011 TRAPV 4e76",
		.initial = {
			.regs = {
				3691774930, 1729526219, 4208601954, 1085205882, 2842176486, 3717585631, 4173502667, 4245450206, 3827560927, 2224460617, 101398285, 869965110, 2764759426, 2829729581, 1304437582, 14365002, 278090, 34328, 5720470
			},
			.prefetch0 = 20086,
			.prefetch1 = 18861,
			.ram = trapv_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3691774930, 1729526219, 4208601954, 1085205882, 2842176486, 3717585631, 4173502667, 4245450206, 3827560927, 2224460617, 101398285, 869965110, 2764759426, 2829729581, 1304437582, 14365002, 278090, 34328, 5720472
			},
			.prefetch0 = 18861,
			.prefetch1 = 53513,
			.ram = trapv_final_ram_11,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 TRAPV 4e76",
		.initial = {
			.regs = {
				4254684965, 444211087, 2456563920, 2275601549, 1982596411, 1993775469, 3238326498, 2154259075, 604246478, 2781917908, 3405171943, 3912750268, 2841546369, 2898249075, 1288782541, 45228, 1517880, 9230, 11390452
			},
			.prefetch0 = 20086,
			.prefetch1 = 14256,
			.ram = trapv_initial_ram_12,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4254684965, 444211087, 2456563920, 2275601549, 1982596411, 1993775469, 3238326498, 2154259075, 604246478, 2781917908, 3405171943, 3912750268, 2841546369, 2898249075, 1288782541, 45228, 1517874, 9230, 22582268
			},
			.prefetch0 = 25684,
			.prefetch1 = 36248,
			.ram = trapv_final_ram_12,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_12,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "013 TRAPV 4e76",
		.initial = {
			.regs = {
				304752908, 1672267447, 4265099661, 2612381345, 4195007221, 1229028501, 220948536, 1879844156, 293415053, 1377645498, 709623418, 3425362226, 1388098078, 1154905667, 1989855748, 11846898, 8808690, 8473, 3728062
			},
			.prefetch0 = 20086,
			.prefetch1 = 35951,
			.ram = trapv_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				304752908, 1672267447, 4265099661, 2612381345, 4195007221, 1229028501, 220948536, 1879844156, 293415053, 1377645498, 709623418, 3425362226, 1388098078, 1154905667, 1989855748, 11846898, 8808690, 8473, 3728064
			},
			.prefetch0 = 35951,
			.prefetch1 = 11933,
			.ram = trapv_final_ram_13,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 TRAPV 4e76",
		.initial = {
			.regs = {
				1134795410, 321596741, 4007261843, 3286708407, 54541592, 3306318428, 3538985580, 2968998761, 3456002826, 3825675589, 1958115458, 2666182101, 1875812034, 3582011636, 1280873588, 2881162, 8826648, 272, 4432650
			},
			.prefetch0 = 20086,
			.prefetch1 = 51692,
			.ram = trapv_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1134795410, 321596741, 4007261843, 3286708407, 54541592, 3306318428, 3538985580, 2968998761, 3456002826, 3825675589, 1958115458, 2666182101, 1875812034, 3582011636, 1280873588, 2881162, 8826648, 272, 4432652
			},
			.prefetch0 = 51692,
			.prefetch1 = 21832,
			.ram = trapv_final_ram_14,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 TRAPV 4e76",
		.initial = {
			.regs = {
				275310836, 676380311, 763412926, 1202718949, 1058636948, 1229829049, 2658867281, 3054137296, 174437280, 2945649063, 2619252111, 2577181217, 3984226769, 41476198, 3076623448, 3662202, 3659162, 1038, 14651842
			},
			.prefetch0 = 20086,
			.prefetch1 = 10258,
			.ram = trapv_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				275310836, 676380311, 763412926, 1202718949, 1058636948, 1229829049, 2658867281, 3054137296, 174437280, 2945649063, 2619252111, 2577181217, 3984226769, 41476198, 3076623448, 3662202, 3659156, 9230, 33426348
			},
			.prefetch0 = 63725,
			.prefetch1 = 8164,
			.ram = trapv_final_ram_15,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_15,
		.transactions_len = 9,
		.lenght = 34,
	},
};

#endif /* RBT_TRAPV_H */