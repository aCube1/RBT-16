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

static const SST_RamByte trapv_initial_ram_16[] = {
		{ .addr = 0xbfbe7c, .byte = 0x4e },
		{ .addr = 0xbfbe7d, .byte = 0x76 },
		{ .addr = 0xbfbe7e, .byte = 0x52 },
		{ .addr = 0xbfbe7f, .byte = 0x13 },
		{ .addr = 0xbfbe80, .byte = 0x28 },
		{ .addr = 0xbfbe81, .byte = 0x8a }
};

static const SST_RamByte trapv_final_ram_16[] = {
		{ .addr = 0xbfbe7c, .byte = 0x4e },
		{ .addr = 0xbfbe7d, .byte = 0x76 },
		{ .addr = 0xbfbe7e, .byte = 0x52 },
		{ .addr = 0xbfbe7f, .byte = 0x13 },
		{ .addr = 0xbfbe80, .byte = 0x28 },
		{ .addr = 0xbfbe81, .byte = 0x8a }
};

static const SST_Transaction trapv_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12566144, .data = 10378, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_17[] = {
		{ .addr = 0xe57c9a, .byte = 0x4e },
		{ .addr = 0xe57c9b, .byte = 0x76 },
		{ .addr = 0xe57c9c, .byte = 0x8e },
		{ .addr = 0xe57c9d, .byte = 0xca },
		{ .addr = 0xe57c9e, .byte = 0x29 },
		{ .addr = 0xe57c9f, .byte = 0x04 },
		{ .addr = 0x00001c, .byte = 0xe9 },
		{ .addr = 0x00001d, .byte = 0xd4 },
		{ .addr = 0x00001e, .byte = 0x2a },
		{ .addr = 0x00001f, .byte = 0x1c },
		{ .addr = 0xd42a1c, .byte = 0x0d },
		{ .addr = 0xd42a1d, .byte = 0xe1 },
		{ .addr = 0xd42a1e, .byte = 0x52 },
		{ .addr = 0xd42a1f, .byte = 0x08 }
};

static const SST_RamByte trapv_final_ram_17[] = {
		{ .addr = 0xe57c9a, .byte = 0x4e },
		{ .addr = 0xe57c9b, .byte = 0x76 },
		{ .addr = 0xe57c9c, .byte = 0x8e },
		{ .addr = 0xe57c9d, .byte = 0xca },
		{ .addr = 0xe57c9e, .byte = 0x29 },
		{ .addr = 0xe57c9f, .byte = 0x04 },
		{ .addr = 0x345b14, .byte = 0x7c },
		{ .addr = 0x345b15, .byte = 0x9c },
		{ .addr = 0x345b10, .byte = 0x21 },
		{ .addr = 0x345b11, .byte = 0x1e },
		{ .addr = 0x345b12, .byte = 0x00 },
		{ .addr = 0x345b13, .byte = 0xe5 },
		{ .addr = 0x00001c, .byte = 0xe9 },
		{ .addr = 0x00001d, .byte = 0xd4 },
		{ .addr = 0x00001e, .byte = 0x2a },
		{ .addr = 0x00001f, .byte = 0x1c },
		{ .addr = 0xd42a1c, .byte = 0x0d },
		{ .addr = 0xd42a1d, .byte = 0xe1 },
		{ .addr = 0xd42a1e, .byte = 0x52 },
		{ .addr = 0xd42a1f, .byte = 0x08 }
};

static const SST_Transaction trapv_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15039646, .data = 10500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3431188, .data = 31900, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3431184, .data = 8478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3431186, .data = 229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 59860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 10780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13904412, .data = 3553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13904414, .data = 21000, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_18[] = {
		{ .addr = 0x2ab4b6, .byte = 0x4e },
		{ .addr = 0x2ab4b7, .byte = 0x76 },
		{ .addr = 0x2ab4b8, .byte = 0xfa },
		{ .addr = 0x2ab4b9, .byte = 0x5e },
		{ .addr = 0x2ab4ba, .byte = 0xa3 },
		{ .addr = 0x2ab4bb, .byte = 0xde },
		{ .addr = 0x00001c, .byte = 0xec },
		{ .addr = 0x00001d, .byte = 0xf8 },
		{ .addr = 0x00001e, .byte = 0x7b },
		{ .addr = 0x00001f, .byte = 0xfc },
		{ .addr = 0xf87bfc, .byte = 0xbf },
		{ .addr = 0xf87bfd, .byte = 0x57 },
		{ .addr = 0xf87bfe, .byte = 0xcd },
		{ .addr = 0xf87bff, .byte = 0xfb }
};

static const SST_RamByte trapv_final_ram_18[] = {
		{ .addr = 0x2ab4b6, .byte = 0x4e },
		{ .addr = 0x2ab4b7, .byte = 0x76 },
		{ .addr = 0x2ab4b8, .byte = 0xfa },
		{ .addr = 0x2ab4b9, .byte = 0x5e },
		{ .addr = 0x2ab4ba, .byte = 0xa3 },
		{ .addr = 0x2ab4bb, .byte = 0xde },
		{ .addr = 0xdabd6e, .byte = 0xb4 },
		{ .addr = 0xdabd6f, .byte = 0xb8 },
		{ .addr = 0xdabd6a, .byte = 0xa2 },
		{ .addr = 0xdabd6b, .byte = 0x0a },
		{ .addr = 0xdabd6c, .byte = 0x00 },
		{ .addr = 0xdabd6d, .byte = 0x2a },
		{ .addr = 0x00001c, .byte = 0xec },
		{ .addr = 0x00001d, .byte = 0xf8 },
		{ .addr = 0x00001e, .byte = 0x7b },
		{ .addr = 0x00001f, .byte = 0xfc },
		{ .addr = 0xf87bfc, .byte = 0xbf },
		{ .addr = 0xf87bfd, .byte = 0x57 },
		{ .addr = 0xf87bfe, .byte = 0xcd },
		{ .addr = 0xf87bff, .byte = 0xfb }
};

static const SST_Transaction trapv_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2798778, .data = 41950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14335342, .data = 46264, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14335338, .data = 41482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14335340, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 60664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 31740, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16284668, .data = 48983, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16284670, .data = 52731, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_19[] = {
		{ .addr = 0xa6d02e, .byte = 0x4e },
		{ .addr = 0xa6d02f, .byte = 0x76 },
		{ .addr = 0xa6d030, .byte = 0x93 },
		{ .addr = 0xa6d031, .byte = 0xaf },
		{ .addr = 0xa6d032, .byte = 0x18 },
		{ .addr = 0xa6d033, .byte = 0xe9 },
		{ .addr = 0x00001c, .byte = 0x8f },
		{ .addr = 0x00001d, .byte = 0xc8 },
		{ .addr = 0x00001e, .byte = 0x35 },
		{ .addr = 0x00001f, .byte = 0x54 },
		{ .addr = 0xc83554, .byte = 0x61 },
		{ .addr = 0xc83555, .byte = 0x6e },
		{ .addr = 0xc83556, .byte = 0x67 },
		{ .addr = 0xc83557, .byte = 0xc1 }
};

static const SST_RamByte trapv_final_ram_19[] = {
		{ .addr = 0xa6d02e, .byte = 0x4e },
		{ .addr = 0xa6d02f, .byte = 0x76 },
		{ .addr = 0xa6d030, .byte = 0x93 },
		{ .addr = 0xa6d031, .byte = 0xaf },
		{ .addr = 0xa6d032, .byte = 0x18 },
		{ .addr = 0xa6d033, .byte = 0xe9 },
		{ .addr = 0x6404b6, .byte = 0xd0 },
		{ .addr = 0x6404b7, .byte = 0x30 },
		{ .addr = 0x6404b2, .byte = 0xa2 },
		{ .addr = 0x6404b3, .byte = 0x1a },
		{ .addr = 0x6404b4, .byte = 0x00 },
		{ .addr = 0x6404b5, .byte = 0xa6 },
		{ .addr = 0x00001c, .byte = 0x8f },
		{ .addr = 0x00001d, .byte = 0xc8 },
		{ .addr = 0x00001e, .byte = 0x35 },
		{ .addr = 0x00001f, .byte = 0x54 },
		{ .addr = 0xc83554, .byte = 0x61 },
		{ .addr = 0xc83555, .byte = 0x6e },
		{ .addr = 0xc83556, .byte = 0x67 },
		{ .addr = 0xc83557, .byte = 0xc1 }
};

static const SST_Transaction trapv_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10932274, .data = 6377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6554806, .data = 53296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6554802, .data = 41498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6554804, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 36808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 13652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13120852, .data = 24942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13120854, .data = 26561, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_20[] = {
		{ .addr = 0x731f86, .byte = 0x4e },
		{ .addr = 0x731f87, .byte = 0x76 },
		{ .addr = 0x731f88, .byte = 0xdb },
		{ .addr = 0x731f89, .byte = 0xfa },
		{ .addr = 0x731f8a, .byte = 0xaa },
		{ .addr = 0x731f8b, .byte = 0x65 },
		{ .addr = 0x00001c, .byte = 0x63 },
		{ .addr = 0x00001d, .byte = 0x5e },
		{ .addr = 0x00001e, .byte = 0xdc },
		{ .addr = 0x00001f, .byte = 0xa6 },
		{ .addr = 0x5edca6, .byte = 0x3c },
		{ .addr = 0x5edca7, .byte = 0x1e },
		{ .addr = 0x5edca8, .byte = 0xbc },
		{ .addr = 0x5edca9, .byte = 0xd2 }
};

static const SST_RamByte trapv_final_ram_20[] = {
		{ .addr = 0x731f86, .byte = 0x4e },
		{ .addr = 0x731f87, .byte = 0x76 },
		{ .addr = 0x731f88, .byte = 0xdb },
		{ .addr = 0x731f89, .byte = 0xfa },
		{ .addr = 0x731f8a, .byte = 0xaa },
		{ .addr = 0x731f8b, .byte = 0x65 },
		{ .addr = 0xf16e40, .byte = 0x1f },
		{ .addr = 0xf16e41, .byte = 0x88 },
		{ .addr = 0xf16e3c, .byte = 0x20 },
		{ .addr = 0xf16e3d, .byte = 0x0a },
		{ .addr = 0xf16e3e, .byte = 0x00 },
		{ .addr = 0xf16e3f, .byte = 0x73 },
		{ .addr = 0x00001c, .byte = 0x63 },
		{ .addr = 0x00001d, .byte = 0x5e },
		{ .addr = 0x00001e, .byte = 0xdc },
		{ .addr = 0x00001f, .byte = 0xa6 },
		{ .addr = 0x5edca6, .byte = 0x3c },
		{ .addr = 0x5edca7, .byte = 0x1e },
		{ .addr = 0x5edca8, .byte = 0xbc },
		{ .addr = 0x5edca9, .byte = 0xd2 }
};

static const SST_Transaction trapv_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7544714, .data = 43621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15822400, .data = 8072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15822396, .data = 8202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15822398, .data = 115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 25438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 56486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6216870, .data = 15390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6216872, .data = 48338, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_21[] = {
		{ .addr = 0x4ba5a2, .byte = 0x4e },
		{ .addr = 0x4ba5a3, .byte = 0x76 },
		{ .addr = 0x4ba5a4, .byte = 0xc2 },
		{ .addr = 0x4ba5a5, .byte = 0x34 },
		{ .addr = 0x4ba5a6, .byte = 0x30 },
		{ .addr = 0x4ba5a7, .byte = 0x0b }
};

static const SST_RamByte trapv_final_ram_21[] = {
		{ .addr = 0x4ba5a2, .byte = 0x4e },
		{ .addr = 0x4ba5a3, .byte = 0x76 },
		{ .addr = 0x4ba5a4, .byte = 0xc2 },
		{ .addr = 0x4ba5a5, .byte = 0x34 },
		{ .addr = 0x4ba5a6, .byte = 0x30 },
		{ .addr = 0x4ba5a7, .byte = 0x0b }
};

static const SST_Transaction trapv_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4957606, .data = 12299, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_22[] = {
		{ .addr = 0x3e520a, .byte = 0x4e },
		{ .addr = 0x3e520b, .byte = 0x76 },
		{ .addr = 0x3e520c, .byte = 0x4f },
		{ .addr = 0x3e520d, .byte = 0x41 },
		{ .addr = 0x3e520e, .byte = 0x9e },
		{ .addr = 0x3e520f, .byte = 0x42 },
		{ .addr = 0x00001c, .byte = 0x52 },
		{ .addr = 0x00001d, .byte = 0xe2 },
		{ .addr = 0x00001e, .byte = 0xc4 },
		{ .addr = 0x00001f, .byte = 0x1e },
		{ .addr = 0xe2c41e, .byte = 0x83 },
		{ .addr = 0xe2c41f, .byte = 0x35 },
		{ .addr = 0xe2c420, .byte = 0xd3 },
		{ .addr = 0xe2c421, .byte = 0xa3 }
};

static const SST_RamByte trapv_final_ram_22[] = {
		{ .addr = 0x3e520a, .byte = 0x4e },
		{ .addr = 0x3e520b, .byte = 0x76 },
		{ .addr = 0x3e520c, .byte = 0x4f },
		{ .addr = 0x3e520d, .byte = 0x41 },
		{ .addr = 0x3e520e, .byte = 0x9e },
		{ .addr = 0x3e520f, .byte = 0x42 },
		{ .addr = 0x199faa, .byte = 0x52 },
		{ .addr = 0x199fab, .byte = 0x0c },
		{ .addr = 0x199fa6, .byte = 0x80 },
		{ .addr = 0x199fa7, .byte = 0x1a },
		{ .addr = 0x199fa8, .byte = 0x00 },
		{ .addr = 0x199fa9, .byte = 0x3e },
		{ .addr = 0x00001c, .byte = 0x52 },
		{ .addr = 0x00001d, .byte = 0xe2 },
		{ .addr = 0x00001e, .byte = 0xc4 },
		{ .addr = 0x00001f, .byte = 0x1e },
		{ .addr = 0xe2c41e, .byte = 0x83 },
		{ .addr = 0xe2c41f, .byte = 0x35 },
		{ .addr = 0xe2c420, .byte = 0xd3 },
		{ .addr = 0xe2c421, .byte = 0xa3 }
};

static const SST_Transaction trapv_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4084238, .data = 40514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1679274, .data = 21004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1679270, .data = 32794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1679272, .data = 62, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 21218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 50206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14861342, .data = 33589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14861344, .data = 54179, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_23[] = {
		{ .addr = 0xa39b80, .byte = 0x4e },
		{ .addr = 0xa39b81, .byte = 0x76 },
		{ .addr = 0xa39b82, .byte = 0x13 },
		{ .addr = 0xa39b83, .byte = 0x53 },
		{ .addr = 0xa39b84, .byte = 0x4f },
		{ .addr = 0xa39b85, .byte = 0xfc },
		{ .addr = 0x00001c, .byte = 0x6a },
		{ .addr = 0x00001d, .byte = 0x0a },
		{ .addr = 0x00001e, .byte = 0xe2 },
		{ .addr = 0x00001f, .byte = 0x1c },
		{ .addr = 0x0ae21c, .byte = 0xba },
		{ .addr = 0x0ae21d, .byte = 0x84 },
		{ .addr = 0x0ae21e, .byte = 0x91 },
		{ .addr = 0x0ae21f, .byte = 0x06 }
};

static const SST_RamByte trapv_final_ram_23[] = {
		{ .addr = 0xa39b80, .byte = 0x4e },
		{ .addr = 0xa39b81, .byte = 0x76 },
		{ .addr = 0xa39b82, .byte = 0x13 },
		{ .addr = 0xa39b83, .byte = 0x53 },
		{ .addr = 0xa39b84, .byte = 0x4f },
		{ .addr = 0xa39b85, .byte = 0xfc },
		{ .addr = 0x24fb02, .byte = 0x9b },
		{ .addr = 0x24fb03, .byte = 0x82 },
		{ .addr = 0x24fafe, .byte = 0x07 },
		{ .addr = 0x24faff, .byte = 0x02 },
		{ .addr = 0x24fb00, .byte = 0x00 },
		{ .addr = 0x24fb01, .byte = 0xa3 },
		{ .addr = 0x00001c, .byte = 0x6a },
		{ .addr = 0x00001d, .byte = 0x0a },
		{ .addr = 0x00001e, .byte = 0xe2 },
		{ .addr = 0x00001f, .byte = 0x1c },
		{ .addr = 0x0ae21c, .byte = 0xba },
		{ .addr = 0x0ae21d, .byte = 0x84 },
		{ .addr = 0x0ae21e, .byte = 0x91 },
		{ .addr = 0x0ae21f, .byte = 0x06 }
};

static const SST_Transaction trapv_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10722180, .data = 20476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423554, .data = 39810, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423550, .data = 1794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2423552, .data = 163, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 27146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 57884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 713244, .data = 47748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 713246, .data = 37126, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_24[] = {
		{ .addr = 0x4838ec, .byte = 0x4e },
		{ .addr = 0x4838ed, .byte = 0x76 },
		{ .addr = 0x4838ee, .byte = 0x2c },
		{ .addr = 0x4838ef, .byte = 0x62 },
		{ .addr = 0x4838f0, .byte = 0xe8 },
		{ .addr = 0x4838f1, .byte = 0x89 }
};

static const SST_RamByte trapv_final_ram_24[] = {
		{ .addr = 0x4838ec, .byte = 0x4e },
		{ .addr = 0x4838ed, .byte = 0x76 },
		{ .addr = 0x4838ee, .byte = 0x2c },
		{ .addr = 0x4838ef, .byte = 0x62 },
		{ .addr = 0x4838f0, .byte = 0xe8 },
		{ .addr = 0x4838f1, .byte = 0x89 }
};

static const SST_Transaction trapv_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4733168, .data = 59529, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_25[] = {
		{ .addr = 0x9aeefc, .byte = 0x4e },
		{ .addr = 0x9aeefd, .byte = 0x76 },
		{ .addr = 0x9aeefe, .byte = 0x20 },
		{ .addr = 0x9aeeff, .byte = 0x7a },
		{ .addr = 0x9aef00, .byte = 0x6b },
		{ .addr = 0x9aef01, .byte = 0x6a }
};

static const SST_RamByte trapv_final_ram_25[] = {
		{ .addr = 0x9aeefc, .byte = 0x4e },
		{ .addr = 0x9aeefd, .byte = 0x76 },
		{ .addr = 0x9aeefe, .byte = 0x20 },
		{ .addr = 0x9aeeff, .byte = 0x7a },
		{ .addr = 0x9aef00, .byte = 0x6b },
		{ .addr = 0x9aef01, .byte = 0x6a }
};

static const SST_Transaction trapv_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10153728, .data = 27498, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_26[] = {
		{ .addr = 0xe3be04, .byte = 0x4e },
		{ .addr = 0xe3be05, .byte = 0x76 },
		{ .addr = 0xe3be06, .byte = 0x40 },
		{ .addr = 0xe3be07, .byte = 0xc3 },
		{ .addr = 0xe3be08, .byte = 0x18 },
		{ .addr = 0xe3be09, .byte = 0xa3 }
};

static const SST_RamByte trapv_final_ram_26[] = {
		{ .addr = 0xe3be04, .byte = 0x4e },
		{ .addr = 0xe3be05, .byte = 0x76 },
		{ .addr = 0xe3be06, .byte = 0x40 },
		{ .addr = 0xe3be07, .byte = 0xc3 },
		{ .addr = 0xe3be08, .byte = 0x18 },
		{ .addr = 0xe3be09, .byte = 0xa3 }
};

static const SST_Transaction trapv_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14925320, .data = 6307, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_27[] = {
		{ .addr = 0xb946a2, .byte = 0x4e },
		{ .addr = 0xb946a3, .byte = 0x76 },
		{ .addr = 0xb946a4, .byte = 0x54 },
		{ .addr = 0xb946a5, .byte = 0x7e },
		{ .addr = 0xb946a6, .byte = 0x9c },
		{ .addr = 0xb946a7, .byte = 0x6b },
		{ .addr = 0x00001c, .byte = 0x10 },
		{ .addr = 0x00001d, .byte = 0x72 },
		{ .addr = 0x00001e, .byte = 0x6f },
		{ .addr = 0x00001f, .byte = 0xfa },
		{ .addr = 0x726ffa, .byte = 0x9b },
		{ .addr = 0x726ffb, .byte = 0xfb },
		{ .addr = 0x726ffc, .byte = 0xdb },
		{ .addr = 0x726ffd, .byte = 0x0a }
};

static const SST_RamByte trapv_final_ram_27[] = {
		{ .addr = 0xb946a2, .byte = 0x4e },
		{ .addr = 0xb946a3, .byte = 0x76 },
		{ .addr = 0xb946a4, .byte = 0x54 },
		{ .addr = 0xb946a5, .byte = 0x7e },
		{ .addr = 0xb946a6, .byte = 0x9c },
		{ .addr = 0xb946a7, .byte = 0x6b },
		{ .addr = 0x497ee8, .byte = 0x46 },
		{ .addr = 0x497ee9, .byte = 0xa4 },
		{ .addr = 0x497ee4, .byte = 0x03 },
		{ .addr = 0x497ee5, .byte = 0x03 },
		{ .addr = 0x497ee6, .byte = 0x00 },
		{ .addr = 0x497ee7, .byte = 0xb9 },
		{ .addr = 0x00001c, .byte = 0x10 },
		{ .addr = 0x00001d, .byte = 0x72 },
		{ .addr = 0x00001e, .byte = 0x6f },
		{ .addr = 0x00001f, .byte = 0xfa },
		{ .addr = 0x726ffa, .byte = 0x9b },
		{ .addr = 0x726ffb, .byte = 0xfb },
		{ .addr = 0x726ffc, .byte = 0xdb },
		{ .addr = 0x726ffd, .byte = 0x0a }
};

static const SST_Transaction trapv_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12142246, .data = 40043, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4816616, .data = 18084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4816612, .data = 771, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4816614, .data = 185, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 4210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 28666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7499770, .data = 39931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7499772, .data = 56074, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_28[] = {
		{ .addr = 0x2d3076, .byte = 0x4e },
		{ .addr = 0x2d3077, .byte = 0x76 },
		{ .addr = 0x2d3078, .byte = 0x2d },
		{ .addr = 0x2d3079, .byte = 0x1e },
		{ .addr = 0x2d307a, .byte = 0x95 },
		{ .addr = 0x2d307b, .byte = 0x73 }
};

static const SST_RamByte trapv_final_ram_28[] = {
		{ .addr = 0x2d3076, .byte = 0x4e },
		{ .addr = 0x2d3077, .byte = 0x76 },
		{ .addr = 0x2d3078, .byte = 0x2d },
		{ .addr = 0x2d3079, .byte = 0x1e },
		{ .addr = 0x2d307a, .byte = 0x95 },
		{ .addr = 0x2d307b, .byte = 0x73 }
};

static const SST_Transaction trapv_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2961530, .data = 38259, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_29[] = {
		{ .addr = 0x3cf2fa, .byte = 0x4e },
		{ .addr = 0x3cf2fb, .byte = 0x76 },
		{ .addr = 0x3cf2fc, .byte = 0x69 },
		{ .addr = 0x3cf2fd, .byte = 0xe3 },
		{ .addr = 0x3cf2fe, .byte = 0x16 },
		{ .addr = 0x3cf2ff, .byte = 0x37 }
};

static const SST_RamByte trapv_final_ram_29[] = {
		{ .addr = 0x3cf2fa, .byte = 0x4e },
		{ .addr = 0x3cf2fb, .byte = 0x76 },
		{ .addr = 0x3cf2fc, .byte = 0x69 },
		{ .addr = 0x3cf2fd, .byte = 0xe3 },
		{ .addr = 0x3cf2fe, .byte = 0x16 },
		{ .addr = 0x3cf2ff, .byte = 0x37 }
};

static const SST_Transaction trapv_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3994366, .data = 5687, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_30[] = {
		{ .addr = 0x1fab5e, .byte = 0x4e },
		{ .addr = 0x1fab5f, .byte = 0x76 },
		{ .addr = 0x1fab60, .byte = 0x34 },
		{ .addr = 0x1fab61, .byte = 0xb0 },
		{ .addr = 0x1fab62, .byte = 0x39 },
		{ .addr = 0x1fab63, .byte = 0x42 },
		{ .addr = 0x00001c, .byte = 0xd2 },
		{ .addr = 0x00001d, .byte = 0x42 },
		{ .addr = 0x00001e, .byte = 0x32 },
		{ .addr = 0x00001f, .byte = 0x06 },
		{ .addr = 0x423206, .byte = 0x39 },
		{ .addr = 0x423207, .byte = 0xfb },
		{ .addr = 0x423208, .byte = 0x04 },
		{ .addr = 0x423209, .byte = 0x86 }
};

static const SST_RamByte trapv_final_ram_30[] = {
		{ .addr = 0x1fab5e, .byte = 0x4e },
		{ .addr = 0x1fab5f, .byte = 0x76 },
		{ .addr = 0x1fab60, .byte = 0x34 },
		{ .addr = 0x1fab61, .byte = 0xb0 },
		{ .addr = 0x1fab62, .byte = 0x39 },
		{ .addr = 0x1fab63, .byte = 0x42 },
		{ .addr = 0xbb5376, .byte = 0xab },
		{ .addr = 0xbb5377, .byte = 0x60 },
		{ .addr = 0xbb5372, .byte = 0x87 },
		{ .addr = 0xbb5373, .byte = 0x16 },
		{ .addr = 0xbb5374, .byte = 0x00 },
		{ .addr = 0xbb5375, .byte = 0x1f },
		{ .addr = 0x00001c, .byte = 0xd2 },
		{ .addr = 0x00001d, .byte = 0x42 },
		{ .addr = 0x00001e, .byte = 0x32 },
		{ .addr = 0x00001f, .byte = 0x06 },
		{ .addr = 0x423206, .byte = 0x39 },
		{ .addr = 0x423207, .byte = 0xfb },
		{ .addr = 0x423208, .byte = 0x04 },
		{ .addr = 0x423209, .byte = 0x86 }
};

static const SST_Transaction trapv_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2075490, .data = 14658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12276598, .data = 43872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12276594, .data = 34582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12276596, .data = 31, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 28, .data = 53826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 30, .data = 12806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4338182, .data = 14843, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4338184, .data = 1158, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trapv_initial_ram_31[] = {
		{ .addr = 0x29c9f0, .byte = 0x4e },
		{ .addr = 0x29c9f1, .byte = 0x76 },
		{ .addr = 0x29c9f2, .byte = 0x7a },
		{ .addr = 0x29c9f3, .byte = 0x90 },
		{ .addr = 0x29c9f4, .byte = 0x87 },
		{ .addr = 0x29c9f5, .byte = 0x4c }
};

static const SST_RamByte trapv_final_ram_31[] = {
		{ .addr = 0x29c9f0, .byte = 0x4e },
		{ .addr = 0x29c9f1, .byte = 0x76 },
		{ .addr = 0x29c9f2, .byte = 0x7a },
		{ .addr = 0x29c9f3, .byte = 0x90 },
		{ .addr = 0x29c9f4, .byte = 0x87 },
		{ .addr = 0x29c9f5, .byte = 0x4c }
};

static const SST_Transaction trapv_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2738676, .data = 34636, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 TRAPV 4e76",
		.initial = {
			.regs = {
				3173370581, 3700347672, 1741037044, 1737510679, 2793728754, 1167593343, 2876214010, 2457398987, 2376292024, 1775381376, 3125397994, 2834181028, 3567182108, 1542655718, 2826913394, 7389312, 10583146, 1301, 12566144
			},
			.prefetch0 = 20086,
			.prefetch1 = 21011,
			.ram = trapv_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3173370581, 3700347672, 1741037044, 1737510679, 2793728754, 1167593343, 2876214010, 2457398987, 2376292024, 1775381376, 3125397994, 2834181028, 3567182108, 1542655718, 2826913394, 7389312, 10583146, 1301, 12566146
			},
			.prefetch0 = 21011,
			.prefetch1 = 10378,
			.ram = trapv_final_ram_16,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_16,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "017 TRAPV 4e76",
		.initial = {
			.regs = {
				2382638572, 2492575990, 2676180122, 1364163104, 3088352174, 3446690769, 4066784188, 1895071633, 377225102, 3003516567, 2459689172, 1725404937, 2303196953, 2214121987, 3103804261, 10175086, 3431190, 8478, 15039646
			},
			.prefetch0 = 20086,
			.prefetch1 = 36554,
			.ram = trapv_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2382638572, 2492575990, 2676180122, 1364163104, 3088352174, 3446690769, 4066784188, 1895071633, 377225102, 3003516567, 2459689172, 1725404937, 2303196953, 2214121987, 3103804261, 10175086, 3431184, 8478, 3922995744
			},
			.prefetch0 = 3553,
			.prefetch1 = 21000,
			.ram = trapv_final_ram_17,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_17,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "018 TRAPV 4e76",
		.initial = {
			.regs = {
				2288808244, 2570781037, 1270928623, 3605351838, 3693379512, 2395901946, 2038468239, 38943813, 2101486093, 962009760, 2245494342, 890951180, 1309474186, 1590192604, 1055662888, 7220882, 14335344, 41482, 2798778
			},
			.prefetch0 = 20086,
			.prefetch1 = 64094,
			.ram = trapv_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2288808244, 2570781037, 1270928623, 3605351838, 3693379512, 2395901946, 2038468239, 38943813, 2101486093, 962009760, 2245494342, 890951180, 1309474186, 1590192604, 1055662888, 7220882, 14335338, 8714, 3975707648
			},
			.prefetch0 = 48983,
			.prefetch1 = 52731,
			.ram = trapv_final_ram_18,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_18,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "019 TRAPV 4e76",
		.initial = {
			.regs = {
				1923522661, 165800371, 947600169, 793163695, 1232061115, 183416897, 2741150976, 2741178583, 812152860, 1670520308, 3642925118, 4112777195, 3511869249, 1450549958, 2826446613, 10248932, 6554808, 41498, 10932274
			},
			.prefetch0 = 20086,
			.prefetch1 = 37807,
			.ram = trapv_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1923522661, 165800371, 947600169, 793163695, 1232061115, 183416897, 2741150976, 2741178583, 812152860, 1670520308, 3642925118, 4112777195, 3511869249, 1450549958, 2826446613, 10248932, 6554802, 8730, 2412262744
			},
			.prefetch0 = 24942,
			.prefetch1 = 26561,
			.ram = trapv_final_ram_19,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_19,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "020 TRAPV 4e76",
		.initial = {
			.regs = {
				2699795911, 3422239060, 462069363, 558880523, 3510253468, 874231060, 790641402, 1468172101, 949914560, 1627419325, 2314698790, 246088051, 1976416390, 3277245479, 1914002312, 15052230, 15822402, 8202, 7544714
			},
			.prefetch0 = 20086,
			.prefetch1 = 56314,
			.ram = trapv_initial_ram_20,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2699795911, 3422239060, 462069363, 558880523, 3510253468, 874231060, 790641402, 1468172101, 949914560, 1627419325, 2314698790, 246088051, 1976416390, 3277245479, 1914002312, 15052230, 15822396, 8202, 1667161258
			},
			.prefetch0 = 15390,
			.prefetch1 = 48338,
			.ram = trapv_final_ram_20,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_20,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "021 TRAPV 4e76",
		.initial = {
			.regs = {
				2155541989, 2020108796, 1831204543, 3308843230, 1416622382, 4275753935, 3646834200, 4014246889, 1495426067, 3166118686, 2131177068, 4271014104, 1556909760, 2105629447, 803381461, 15822042, 16001384, 8717, 4957606
			},
			.prefetch0 = 20086,
			.prefetch1 = 49716,
			.ram = trapv_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2155541989, 2020108796, 1831204543, 3308843230, 1416622382, 4275753935, 3646834200, 4014246889, 1495426067, 3166118686, 2131177068, 4271014104, 1556909760, 2105629447, 803381461, 15822042, 16001384, 8717, 4957608
			},
			.prefetch0 = 49716,
			.prefetch1 = 12299,
			.ram = trapv_final_ram_21,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_21,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "022 TRAPV 4e76",
		.initial = {
			.regs = {
				4124690163, 3941964699, 2469721696, 114518288, 3139360244, 604807105, 1388021339, 1413989004, 3726248869, 1900297963, 1351551733, 112086578, 2067250660, 3610156805, 104832393, 4202990, 1679276, 32794, 4084238
			},
			.prefetch0 = 20086,
			.prefetch1 = 20289,
			.ram = trapv_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4124690163, 3941964699, 2469721696, 114518288, 3139360244, 604807105, 1388021339, 1413989004, 3726248869, 1900297963, 1351551733, 112086578, 2067250660, 3610156805, 104832393, 4202990, 1679270, 8218, 1390593058
			},
			.prefetch0 = 33589,
			.prefetch1 = 54179,
			.ram = trapv_final_ram_22,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_22,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "023 TRAPV 4e76",
		.initial = {
			.regs = {
				2266318206, 2266296101, 364849101, 1220722337, 1685392458, 2533264415, 3722435069, 2681635223, 601045715, 855901195, 4243001469, 463146324, 2045118789, 3741378388, 1269252881, 1450636, 2423556, 1794, 10722180
			},
			.prefetch0 = 20086,
			.prefetch1 = 4947,
			.ram = trapv_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2266318206, 2266296101, 364849101, 1220722337, 1685392458, 2533264415, 3722435069, 2681635223, 601045715, 855901195, 4243001469, 463146324, 2045118789, 3741378388, 1269252881, 1450636, 2423550, 9986, 1779098144
			},
			.prefetch0 = 47748,
			.prefetch1 = 37126,
			.ram = trapv_final_ram_23,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_23,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "024 TRAPV 4e76",
		.initial = {
			.regs = {
				80297446, 3955704112, 3240349564, 3552499840, 3481605719, 2501341030, 3916710807, 1265081805, 2974089764, 256416955, 1948430462, 4166900440, 2249182802, 2483486127, 785450126, 2315634, 11205212, 1280, 4733168
			},
			.prefetch0 = 20086,
			.prefetch1 = 11362,
			.ram = trapv_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				80297446, 3955704112, 3240349564, 3552499840, 3481605719, 2501341030, 3916710807, 1265081805, 2974089764, 256416955, 1948430462, 4166900440, 2249182802, 2483486127, 785450126, 2315634, 11205212, 1280, 4733170
			},
			.prefetch0 = 11362,
			.prefetch1 = 59529,
			.ram = trapv_final_ram_24,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 TRAPV 4e76",
		.initial = {
			.regs = {
				623799509, 1984169620, 3449542206, 1561997301, 251968470, 3009635608, 1892749118, 2857750989, 3226809265, 2916019367, 1704866539, 167423706, 3182003298, 2891392361, 3922329977, 15072094, 6719038, 9728, 10153728
			},
			.prefetch0 = 20086,
			.prefetch1 = 8314,
			.ram = trapv_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				623799509, 1984169620, 3449542206, 1561997301, 251968470, 3009635608, 1892749118, 2857750989, 3226809265, 2916019367, 1704866539, 167423706, 3182003298, 2891392361, 3922329977, 15072094, 6719038, 9728, 10153730
			},
			.prefetch0 = 8314,
			.prefetch1 = 27498,
			.ram = trapv_final_ram_25,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_25,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "026 TRAPV 4e76",
		.initial = {
			.regs = {
				944113241, 813516996, 4232436963, 3320527907, 3249463459, 1275064391, 2792952483, 2207733872, 240940854, 4103565866, 3467449716, 1122688797, 3881418392, 3398423041, 4149814688, 2513000, 2934202, 42005, 14925320
			},
			.prefetch0 = 20086,
			.prefetch1 = 16579,
			.ram = trapv_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				944113241, 813516996, 4232436963, 3320527907, 3249463459, 1275064391, 2792952483, 2207733872, 240940854, 4103565866, 3467449716, 1122688797, 3881418392, 3398423041, 4149814688, 2513000, 2934202, 42005, 14925322
			},
			.prefetch0 = 16579,
			.prefetch1 = 6307,
			.ram = trapv_final_ram_26,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_26,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "027 TRAPV 4e76",
		.initial = {
			.regs = {
				722987460, 4040526201, 3848187467, 1430826365, 919132540, 2562705590, 3261493199, 3443875631, 1689150284, 1074743417, 2074130521, 2169314778, 2733980709, 215005177, 3450775679, 8112010, 4816618, 771, 12142246
			},
			.prefetch0 = 20086,
			.prefetch1 = 21630,
			.ram = trapv_initial_ram_27,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				722987460, 4040526201, 3848187467, 1430826365, 919132540, 2562705590, 3261493199, 3443875631, 1689150284, 1074743417, 2074130521, 2169314778, 2733980709, 215005177, 3450775679, 8112010, 4816612, 8963, 275935230
			},
			.prefetch0 = 39931,
			.prefetch1 = 56074,
			.ram = trapv_final_ram_27,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_27,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "028 TRAPV 4e76",
		.initial = {
			.regs = {
				3356420177, 2256780973, 3591631013, 3003506266, 2936254948, 696850005, 3008499672, 4097966111, 2390453942, 170616588, 230359480, 3397255136, 2906374927, 454690382, 3954258540, 690334, 9351492, 1792, 2961530
			},
			.prefetch0 = 20086,
			.prefetch1 = 11550,
			.ram = trapv_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3356420177, 2256780973, 3591631013, 3003506266, 2936254948, 696850005, 3008499672, 4097966111, 2390453942, 170616588, 230359480, 3397255136, 2906374927, 454690382, 3954258540, 690334, 9351492, 1792, 2961532
			},
			.prefetch0 = 11550,
			.prefetch1 = 38259,
			.ram = trapv_final_ram_28,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_28,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "029 TRAPV 4e76",
		.initial = {
			.regs = {
				4183729741, 1251054999, 3588949273, 1919083573, 484219389, 164871521, 1907689240, 3072618214, 132410483, 3514445785, 1783575415, 855939006, 448111193, 2707225908, 1397640370, 437574, 13381574, 9753, 3994366
			},
			.prefetch0 = 20086,
			.prefetch1 = 27107,
			.ram = trapv_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4183729741, 1251054999, 3588949273, 1919083573, 484219389, 164871521, 1907689240, 3072618214, 132410483, 3514445785, 1783575415, 855939006, 448111193, 2707225908, 1397640370, 437574, 13381574, 9753, 3994368
			},
			.prefetch0 = 27107,
			.prefetch1 = 5687,
			.ram = trapv_final_ram_29,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_29,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "030 TRAPV 4e76",
		.initial = {
			.regs = {
				2795840256, 1219501136, 212155001, 8757185, 1219374873, 2103526742, 1952069774, 221827238, 3254855322, 1895599734, 599524658, 1777543791, 150067098, 989988612, 3114142283, 6044586, 12276600, 34582, 2075490
			},
			.prefetch0 = 20086,
			.prefetch1 = 13488,
			.ram = trapv_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2795840256, 1219501136, 212155001, 8757185, 1219374873, 2103526742, 1952069774, 221827238, 3254855322, 1895599734, 599524658, 1777543791, 150067098, 989988612, 3114142283, 6044586, 12276594, 10006, 3527553546
			},
			.prefetch0 = 14843,
			.prefetch1 = 1158,
			.ram = trapv_final_ram_30,
			.ram_len = 20,
		},
		.transactions = trapv_transactions_30,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "031 TRAPV 4e76",
		.initial = {
			.regs = {
				3334210034, 2274042060, 3395178426, 3929105619, 2639700065, 1264732169, 787294157, 3044750339, 4179248848, 627983100, 3991850423, 2304285917, 2640010497, 1684978473, 3808486567, 3450596, 11954260, 33549, 2738676
			},
			.prefetch0 = 20086,
			.prefetch1 = 31376,
			.ram = trapv_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3334210034, 2274042060, 3395178426, 3929105619, 2639700065, 1264732169, 787294157, 3044750339, 4179248848, 627983100, 3991850423, 2304285917, 2640010497, 1684978473, 3808486567, 3450596, 11954260, 33549, 2738678
			},
			.prefetch0 = 31376,
			.prefetch1 = 34636,
			.ram = trapv_final_ram_31,
			.ram_len = 6,
		},
		.transactions = trapv_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_TRAPV_H */