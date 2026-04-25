#ifndef RBT_SUBXL_H
#define RBT_SUBXL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subxl_initial_ram_0[] = {
		{ .addr = 0xa49df0, .byte = 0x95 },
		{ .addr = 0xa49df1, .byte = 0x8e },
		{ .addr = 0xa49df2, .byte = 0x8f },
		{ .addr = 0xa49df3, .byte = 0xf3 },
		{ .addr = 0x00000c, .byte = 0x32 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x9d },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xde9d94, .byte = 0x57 },
		{ .addr = 0xde9d95, .byte = 0xfb },
		{ .addr = 0xde9d96, .byte = 0xc1 },
		{ .addr = 0xde9d97, .byte = 0x0f }
};

static const SST_RamByte subxl_final_ram_0[] = {
		{ .addr = 0xa49df0, .byte = 0x95 },
		{ .addr = 0xa49df1, .byte = 0x8e },
		{ .addr = 0xa49df2, .byte = 0x8f },
		{ .addr = 0xa49df3, .byte = 0xf3 },
		{ .addr = 0x41d11c, .byte = 0x9d },
		{ .addr = 0x41d11d, .byte = 0xf4 },
		{ .addr = 0x41d118, .byte = 0x22 },
		{ .addr = 0x41d119, .byte = 0x14 },
		{ .addr = 0x41d11a, .byte = 0x00 },
		{ .addr = 0x41d11b, .byte = 0xa4 },
		{ .addr = 0x41d116, .byte = 0x95 },
		{ .addr = 0x41d117, .byte = 0x8e },
		{ .addr = 0x41d114, .byte = 0x07 },
		{ .addr = 0x41d115, .byte = 0x15 },
		{ .addr = 0x41d110, .byte = 0x95 },
		{ .addr = 0x41d111, .byte = 0x95 },
		{ .addr = 0x41d112, .byte = 0x79 },
		{ .addr = 0x41d113, .byte = 0x1b },
		{ .addr = 0x00000c, .byte = 0x32 },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0x9d },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xde9d94, .byte = 0x57 },
		{ .addr = 0xde9d95, .byte = 0xfb },
		{ .addr = 0xde9d96, .byte = 0xc1 },
		{ .addr = 0xde9d97, .byte = 0x0f }
};

static const SST_Transaction subxl_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1771284, .data = 17535, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4313372, .data = 40436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4313368, .data = 8724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4313370, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4313366, .data = 38286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4313364, .data = 1813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4313360, .data = 38293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4313362, .data = 31003, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 40340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14589332, .data = 22523, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14589334, .data = 49423, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxl_initial_ram_1[] = {
		{ .addr = 0xa198e2, .byte = 0x9f },
		{ .addr = 0xa198e3, .byte = 0x84 },
		{ .addr = 0xa198e4, .byte = 0x7b },
		{ .addr = 0xa198e5, .byte = 0xb0 },
		{ .addr = 0xa198e6, .byte = 0x09 },
		{ .addr = 0xa198e7, .byte = 0x53 }
};

static const SST_RamByte subxl_final_ram_1[] = {
		{ .addr = 0xa198e2, .byte = 0x9f },
		{ .addr = 0xa198e3, .byte = 0x84 },
		{ .addr = 0xa198e4, .byte = 0x7b },
		{ .addr = 0xa198e5, .byte = 0xb0 },
		{ .addr = 0xa198e6, .byte = 0x09 },
		{ .addr = 0xa198e7, .byte = 0x53 }
};

static const SST_Transaction subxl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10590438, .data = 2387, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_2[] = {
		{ .addr = 0x147fb8, .byte = 0x97 },
		{ .addr = 0x147fb9, .byte = 0x87 },
		{ .addr = 0x147fba, .byte = 0xd1 },
		{ .addr = 0x147fbb, .byte = 0xd0 },
		{ .addr = 0x147fbc, .byte = 0x2e },
		{ .addr = 0x147fbd, .byte = 0xa6 }
};

static const SST_RamByte subxl_final_ram_2[] = {
		{ .addr = 0x147fb8, .byte = 0x97 },
		{ .addr = 0x147fb9, .byte = 0x87 },
		{ .addr = 0x147fba, .byte = 0xd1 },
		{ .addr = 0x147fbb, .byte = 0xd0 },
		{ .addr = 0x147fbc, .byte = 0x2e },
		{ .addr = 0x147fbd, .byte = 0xa6 }
};

static const SST_Transaction subxl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1343420, .data = 11942, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_3[] = {
		{ .addr = 0x42bda0, .byte = 0x91 },
		{ .addr = 0x42bda1, .byte = 0x85 },
		{ .addr = 0x42bda2, .byte = 0x7f },
		{ .addr = 0x42bda3, .byte = 0xb2 },
		{ .addr = 0x42bda4, .byte = 0xdc },
		{ .addr = 0x42bda5, .byte = 0x47 }
};

static const SST_RamByte subxl_final_ram_3[] = {
		{ .addr = 0x42bda0, .byte = 0x91 },
		{ .addr = 0x42bda1, .byte = 0x85 },
		{ .addr = 0x42bda2, .byte = 0x7f },
		{ .addr = 0x42bda3, .byte = 0xb2 },
		{ .addr = 0x42bda4, .byte = 0xdc },
		{ .addr = 0x42bda5, .byte = 0x47 }
};

static const SST_Transaction subxl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4373924, .data = 56391, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_4[] = {
		{ .addr = 0x709de6, .byte = 0x9b },
		{ .addr = 0x709de7, .byte = 0x80 },
		{ .addr = 0x709de8, .byte = 0xfe },
		{ .addr = 0x709de9, .byte = 0x05 },
		{ .addr = 0x709dea, .byte = 0x91 },
		{ .addr = 0x709deb, .byte = 0x9e }
};

static const SST_RamByte subxl_final_ram_4[] = {
		{ .addr = 0x709de6, .byte = 0x9b },
		{ .addr = 0x709de7, .byte = 0x80 },
		{ .addr = 0x709de8, .byte = 0xfe },
		{ .addr = 0x709de9, .byte = 0x05 },
		{ .addr = 0x709dea, .byte = 0x91 },
		{ .addr = 0x709deb, .byte = 0x9e }
};

static const SST_Transaction subxl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7380458, .data = 37278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_5[] = {
		{ .addr = 0xd70a80, .byte = 0x93 },
		{ .addr = 0xd70a81, .byte = 0x86 },
		{ .addr = 0xd70a82, .byte = 0xb0 },
		{ .addr = 0xd70a83, .byte = 0x15 },
		{ .addr = 0xd70a84, .byte = 0x74 },
		{ .addr = 0xd70a85, .byte = 0xc9 }
};

static const SST_RamByte subxl_final_ram_5[] = {
		{ .addr = 0xd70a80, .byte = 0x93 },
		{ .addr = 0xd70a81, .byte = 0x86 },
		{ .addr = 0xd70a82, .byte = 0xb0 },
		{ .addr = 0xd70a83, .byte = 0x15 },
		{ .addr = 0xd70a84, .byte = 0x74 },
		{ .addr = 0xd70a85, .byte = 0xc9 }
};

static const SST_Transaction subxl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14092932, .data = 29897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_6[] = {
		{ .addr = 0x4216a6, .byte = 0x9f },
		{ .addr = 0x4216a7, .byte = 0x86 },
		{ .addr = 0x4216a8, .byte = 0x83 },
		{ .addr = 0x4216a9, .byte = 0xad },
		{ .addr = 0x4216aa, .byte = 0xc6 },
		{ .addr = 0x4216ab, .byte = 0x1a }
};

static const SST_RamByte subxl_final_ram_6[] = {
		{ .addr = 0x4216a6, .byte = 0x9f },
		{ .addr = 0x4216a7, .byte = 0x86 },
		{ .addr = 0x4216a8, .byte = 0x83 },
		{ .addr = 0x4216a9, .byte = 0xad },
		{ .addr = 0x4216aa, .byte = 0xc6 },
		{ .addr = 0x4216ab, .byte = 0x1a }
};

static const SST_Transaction subxl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4331178, .data = 50714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_7[] = {
		{ .addr = 0xacea16, .byte = 0x9f },
		{ .addr = 0xacea17, .byte = 0x89 },
		{ .addr = 0xacea18, .byte = 0xab },
		{ .addr = 0xacea19, .byte = 0x2e },
		{ .addr = 0xc8d312, .byte = 0xe4 },
		{ .addr = 0xc8d313, .byte = 0xc3 },
		{ .addr = 0xc8d310, .byte = 0xf1 },
		{ .addr = 0xc8d311, .byte = 0x5b },
		{ .addr = 0x70d404, .byte = 0xa3 },
		{ .addr = 0x70d405, .byte = 0xa6 },
		{ .addr = 0x70d402, .byte = 0xe7 },
		{ .addr = 0x70d403, .byte = 0x7c },
		{ .addr = 0xacea1a, .byte = 0xe8 },
		{ .addr = 0xacea1b, .byte = 0x49 }
};

static const SST_RamByte subxl_final_ram_7[] = {
		{ .addr = 0xacea16, .byte = 0x9f },
		{ .addr = 0xacea17, .byte = 0x89 },
		{ .addr = 0xacea18, .byte = 0xab },
		{ .addr = 0xacea19, .byte = 0x2e },
		{ .addr = 0xc8d312, .byte = 0xe4 },
		{ .addr = 0xc8d313, .byte = 0xc3 },
		{ .addr = 0xc8d310, .byte = 0xf1 },
		{ .addr = 0xc8d311, .byte = 0x5b },
		{ .addr = 0x70d404, .byte = 0xbe },
		{ .addr = 0x70d405, .byte = 0xe3 },
		{ .addr = 0x70d402, .byte = 0xf6 },
		{ .addr = 0x70d403, .byte = 0x20 },
		{ .addr = 0xacea1a, .byte = 0xe8 },
		{ .addr = 0xacea1b, .byte = 0x49 }
};

static const SST_Transaction subxl_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13161234, .data = 58563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13161232, .data = 61787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7394308, .data = 41894, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7394306, .data = 59260, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7394308, .data = 48867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11332122, .data = 59465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7394306, .data = 63008, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxl_initial_ram_8[] = {
		{ .addr = 0xba2fd4, .byte = 0x95 },
		{ .addr = 0xba2fd5, .byte = 0x85 },
		{ .addr = 0xba2fd6, .byte = 0x5d },
		{ .addr = 0xba2fd7, .byte = 0x17 },
		{ .addr = 0xba2fd8, .byte = 0xb4 },
		{ .addr = 0xba2fd9, .byte = 0xed }
};

static const SST_RamByte subxl_final_ram_8[] = {
		{ .addr = 0xba2fd4, .byte = 0x95 },
		{ .addr = 0xba2fd5, .byte = 0x85 },
		{ .addr = 0xba2fd6, .byte = 0x5d },
		{ .addr = 0xba2fd7, .byte = 0x17 },
		{ .addr = 0xba2fd8, .byte = 0xb4 },
		{ .addr = 0xba2fd9, .byte = 0xed }
};

static const SST_Transaction subxl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12201944, .data = 46317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_9[] = {
		{ .addr = 0x6632d0, .byte = 0x95 },
		{ .addr = 0x6632d1, .byte = 0x8f },
		{ .addr = 0x6632d2, .byte = 0x13 },
		{ .addr = 0x6632d3, .byte = 0x69 },
		{ .addr = 0x01cc12, .byte = 0xad },
		{ .addr = 0x01cc13, .byte = 0xb9 },
		{ .addr = 0x01cc10, .byte = 0x4b },
		{ .addr = 0x01cc11, .byte = 0x8d },
		{ .addr = 0x00000c, .byte = 0x76 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0x23 },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0xec233e, .byte = 0x99 },
		{ .addr = 0xec233f, .byte = 0xf3 },
		{ .addr = 0xec2340, .byte = 0xbe },
		{ .addr = 0xec2341, .byte = 0xc4 }
};

static const SST_RamByte subxl_final_ram_9[] = {
		{ .addr = 0x6632d0, .byte = 0x95 },
		{ .addr = 0x6632d1, .byte = 0x8f },
		{ .addr = 0x6632d2, .byte = 0x13 },
		{ .addr = 0x6632d3, .byte = 0x69 },
		{ .addr = 0x01cc12, .byte = 0xad },
		{ .addr = 0x01cc13, .byte = 0xb9 },
		{ .addr = 0x01cc10, .byte = 0x4b },
		{ .addr = 0x01cc11, .byte = 0x8d },
		{ .addr = 0xfd93ce, .byte = 0x32 },
		{ .addr = 0xfd93cf, .byte = 0xd4 },
		{ .addr = 0xfd93ca, .byte = 0x84 },
		{ .addr = 0xfd93cb, .byte = 0x0a },
		{ .addr = 0xfd93cc, .byte = 0x00 },
		{ .addr = 0xfd93cd, .byte = 0x66 },
		{ .addr = 0xfd93c8, .byte = 0x95 },
		{ .addr = 0xfd93c9, .byte = 0x8f },
		{ .addr = 0xfd93c6, .byte = 0x72 },
		{ .addr = 0xfd93c7, .byte = 0x9b },
		{ .addr = 0xfd93c2, .byte = 0x95 },
		{ .addr = 0xfd93c3, .byte = 0x91 },
		{ .addr = 0xfd93c4, .byte = 0x41 },
		{ .addr = 0xfd93c5, .byte = 0xd3 },
		{ .addr = 0x00000c, .byte = 0x76 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0x23 },
		{ .addr = 0x00000f, .byte = 0x3e },
		{ .addr = 0xec233e, .byte = 0x99 },
		{ .addr = 0xec233f, .byte = 0xf3 },
		{ .addr = 0xec2340, .byte = 0xbe },
		{ .addr = 0xec2341, .byte = 0xc4 }
};

static const SST_Transaction subxl_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 117778, .data = 44473, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 117776, .data = 19341, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13857434, .data = 60229, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16618446, .data = 13012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16618442, .data = 33802, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16618444, .data = 102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16618440, .data = 38287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16618438, .data = 29339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16618434, .data = 38289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16618436, .data = 16851, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 30444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 9022, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15475518, .data = 39411, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15475520, .data = 48836, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxl_initial_ram_10[] = {
		{ .addr = 0xb44d3a, .byte = 0x93 },
		{ .addr = 0xb44d3b, .byte = 0x81 },
		{ .addr = 0xb44d3c, .byte = 0xea },
		{ .addr = 0xb44d3d, .byte = 0x31 },
		{ .addr = 0xb44d3e, .byte = 0x49 },
		{ .addr = 0xb44d3f, .byte = 0xb1 }
};

static const SST_RamByte subxl_final_ram_10[] = {
		{ .addr = 0xb44d3a, .byte = 0x93 },
		{ .addr = 0xb44d3b, .byte = 0x81 },
		{ .addr = 0xb44d3c, .byte = 0xea },
		{ .addr = 0xb44d3d, .byte = 0x31 },
		{ .addr = 0xb44d3e, .byte = 0x49 },
		{ .addr = 0xb44d3f, .byte = 0xb1 }
};

static const SST_Transaction subxl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11816254, .data = 18865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_11[] = {
		{ .addr = 0x13670e, .byte = 0x95 },
		{ .addr = 0x13670f, .byte = 0x8f },
		{ .addr = 0x136710, .byte = 0x3d },
		{ .addr = 0x136711, .byte = 0xb4 },
		{ .addr = 0x0636ae, .byte = 0xdf },
		{ .addr = 0x0636af, .byte = 0x82 },
		{ .addr = 0x0636ac, .byte = 0x2c },
		{ .addr = 0x0636ad, .byte = 0x6c },
		{ .addr = 0x00000c, .byte = 0x01 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x20 },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0x90206e, .byte = 0xb2 },
		{ .addr = 0x90206f, .byte = 0x14 },
		{ .addr = 0x902070, .byte = 0x03 },
		{ .addr = 0x902071, .byte = 0x09 }
};

static const SST_RamByte subxl_final_ram_11[] = {
		{ .addr = 0x13670e, .byte = 0x95 },
		{ .addr = 0x13670f, .byte = 0x8f },
		{ .addr = 0x136710, .byte = 0x3d },
		{ .addr = 0x136711, .byte = 0xb4 },
		{ .addr = 0x0636ae, .byte = 0xdf },
		{ .addr = 0x0636af, .byte = 0x82 },
		{ .addr = 0x0636ac, .byte = 0x2c },
		{ .addr = 0x0636ad, .byte = 0x6c },
		{ .addr = 0x883882, .byte = 0x67 },
		{ .addr = 0x883883, .byte = 0x12 },
		{ .addr = 0x88387e, .byte = 0x03 },
		{ .addr = 0x88387f, .byte = 0x13 },
		{ .addr = 0x883880, .byte = 0x00 },
		{ .addr = 0x883881, .byte = 0x13 },
		{ .addr = 0x88387c, .byte = 0x95 },
		{ .addr = 0x88387d, .byte = 0x8f },
		{ .addr = 0x88387a, .byte = 0x43 },
		{ .addr = 0x88387b, .byte = 0xab },
		{ .addr = 0x883876, .byte = 0x95 },
		{ .addr = 0x883877, .byte = 0x91 },
		{ .addr = 0x883878, .byte = 0x68 },
		{ .addr = 0x883879, .byte = 0xfa },
		{ .addr = 0x00000c, .byte = 0x01 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x20 },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0x90206e, .byte = 0xb2 },
		{ .addr = 0x90206f, .byte = 0x14 },
		{ .addr = 0x902070, .byte = 0x03 },
		{ .addr = 0x902071, .byte = 0x09 }
};

static const SST_Transaction subxl_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 407214, .data = 57218, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 407212, .data = 11372, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16401322, .data = 5067, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8927362, .data = 26386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8927358, .data = 787, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8927360, .data = 19, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8927356, .data = 38287, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8927354, .data = 17323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8927350, .data = 38289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8927352, .data = 26874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9445486, .data = 45588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9445488, .data = 777, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxl_initial_ram_12[] = {
		{ .addr = 0x4b459e, .byte = 0x99 },
		{ .addr = 0x4b459f, .byte = 0x84 },
		{ .addr = 0x4b45a0, .byte = 0xbe },
		{ .addr = 0x4b45a1, .byte = 0x86 },
		{ .addr = 0x4b45a2, .byte = 0x97 },
		{ .addr = 0x4b45a3, .byte = 0x66 }
};

static const SST_RamByte subxl_final_ram_12[] = {
		{ .addr = 0x4b459e, .byte = 0x99 },
		{ .addr = 0x4b459f, .byte = 0x84 },
		{ .addr = 0x4b45a0, .byte = 0xbe },
		{ .addr = 0x4b45a1, .byte = 0x86 },
		{ .addr = 0x4b45a2, .byte = 0x97 },
		{ .addr = 0x4b45a3, .byte = 0x66 }
};

static const SST_Transaction subxl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4933026, .data = 38758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_13[] = {
		{ .addr = 0x1f4668, .byte = 0x9f },
		{ .addr = 0x1f4669, .byte = 0x80 },
		{ .addr = 0x1f466a, .byte = 0x61 },
		{ .addr = 0x1f466b, .byte = 0x50 },
		{ .addr = 0x1f466c, .byte = 0x72 },
		{ .addr = 0x1f466d, .byte = 0x06 }
};

static const SST_RamByte subxl_final_ram_13[] = {
		{ .addr = 0x1f4668, .byte = 0x9f },
		{ .addr = 0x1f4669, .byte = 0x80 },
		{ .addr = 0x1f466a, .byte = 0x61 },
		{ .addr = 0x1f466b, .byte = 0x50 },
		{ .addr = 0x1f466c, .byte = 0x72 },
		{ .addr = 0x1f466d, .byte = 0x06 }
};

static const SST_Transaction subxl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2049644, .data = 29190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subxl_initial_ram_14[] = {
		{ .addr = 0x463f40, .byte = 0x97 },
		{ .addr = 0x463f41, .byte = 0x88 },
		{ .addr = 0x463f42, .byte = 0xf0 },
		{ .addr = 0x463f43, .byte = 0x46 },
		{ .addr = 0x00000c, .byte = 0x72 },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0x409126, .byte = 0xe9 },
		{ .addr = 0x409127, .byte = 0x13 },
		{ .addr = 0x409128, .byte = 0x77 },
		{ .addr = 0x409129, .byte = 0x85 }
};

static const SST_RamByte subxl_final_ram_14[] = {
		{ .addr = 0x463f40, .byte = 0x97 },
		{ .addr = 0x463f41, .byte = 0x88 },
		{ .addr = 0x463f42, .byte = 0xf0 },
		{ .addr = 0x463f43, .byte = 0x46 },
		{ .addr = 0xe107d6, .byte = 0x3f },
		{ .addr = 0xe107d7, .byte = 0x44 },
		{ .addr = 0xe107d2, .byte = 0x80 },
		{ .addr = 0xe107d3, .byte = 0x05 },
		{ .addr = 0xe107d4, .byte = 0x00 },
		{ .addr = 0xe107d5, .byte = 0x46 },
		{ .addr = 0xe107d0, .byte = 0x97 },
		{ .addr = 0xe107d1, .byte = 0x88 },
		{ .addr = 0xe107ce, .byte = 0xe7 },
		{ .addr = 0xe107cf, .byte = 0x49 },
		{ .addr = 0xe107ca, .byte = 0x97 },
		{ .addr = 0xe107cb, .byte = 0x91 },
		{ .addr = 0xe107cc, .byte = 0xa1 },
		{ .addr = 0xe107cd, .byte = 0xbc },
		{ .addr = 0x00000c, .byte = 0x72 },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0x409126, .byte = 0xe9 },
		{ .addr = 0x409127, .byte = 0x13 },
		{ .addr = 0x409128, .byte = 0x77 },
		{ .addr = 0x409129, .byte = 0x85 }
};

static const SST_Transaction subxl_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12379976, .data = 7893, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14747606, .data = 16196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14747602, .data = 32773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14747604, .data = 70, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14747600, .data = 38792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14747598, .data = 59209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14747594, .data = 38801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14747596, .data = 41404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4231462, .data = 59667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4231464, .data = 30597, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxl_initial_ram_15[] = {
		{ .addr = 0x38098a, .byte = 0x91 },
		{ .addr = 0x38098b, .byte = 0x8b },
		{ .addr = 0x38098c, .byte = 0x50 },
		{ .addr = 0x38098d, .byte = 0x6e },
		{ .addr = 0x00000c, .byte = 0x9a },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x4841d0, .byte = 0xf1 },
		{ .addr = 0x4841d1, .byte = 0xfe },
		{ .addr = 0x4841d2, .byte = 0x3d },
		{ .addr = 0x4841d3, .byte = 0x0e }
};

static const SST_RamByte subxl_final_ram_15[] = {
		{ .addr = 0x38098a, .byte = 0x91 },
		{ .addr = 0x38098b, .byte = 0x8b },
		{ .addr = 0x38098c, .byte = 0x50 },
		{ .addr = 0x38098d, .byte = 0x6e },
		{ .addr = 0x852c20, .byte = 0x09 },
		{ .addr = 0x852c21, .byte = 0x8e },
		{ .addr = 0x852c1c, .byte = 0x06 },
		{ .addr = 0x852c1d, .byte = 0x0c },
		{ .addr = 0x852c1e, .byte = 0x00 },
		{ .addr = 0x852c1f, .byte = 0x38 },
		{ .addr = 0x852c1a, .byte = 0x91 },
		{ .addr = 0x852c1b, .byte = 0x8b },
		{ .addr = 0x852c18, .byte = 0x5d },
		{ .addr = 0x852c19, .byte = 0xdb },
		{ .addr = 0x852c14, .byte = 0x91 },
		{ .addr = 0x852c15, .byte = 0x91 },
		{ .addr = 0x852c16, .byte = 0xde },
		{ .addr = 0x852c17, .byte = 0x63 },
		{ .addr = 0x00000c, .byte = 0x9a },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x4841d0, .byte = 0xf1 },
		{ .addr = 0x4841d1, .byte = 0xfe },
		{ .addr = 0x4841d2, .byte = 0x3d },
		{ .addr = 0x4841d3, .byte = 0x0e }
};

static const SST_Transaction subxl_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6512090, .data = 9258, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8727584, .data = 2446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8727580, .data = 1548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8727582, .data = 56, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8727578, .data = 37259, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8727576, .data = 24027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8727572, .data = 37265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8727574, .data = 56931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 39496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4735440, .data = 61950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4735442, .data = 15630, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t SUBXL_TEST_COUNT = 16;
static const SST_TestCase subxl[] = {
	{
		.name = "000 SUBX.l -(A6), -(A2) 958e",
		.initial = {
			.regs = {
				3998716147, 1884058010, 347900656, 1574976611, 3082201317, 2227218840, 2511244533, 2551522518, 1723973144, 3968916633, 1403253225, 1895955939, 868571842, 764095775, 2031814423, 10546882, 4313374, 8724, 10788340
			},
			.prefetch0 = 38286,
			.prefetch1 = 36851,
			.ram = subxl_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3998716147, 1884058010, 347900656, 1574976611, 3082201317, 2227218840, 2511244533, 2551522518, 1723973144, 3968916633, 1403253225, 1895955939, 868571842, 764095775, 2031814423, 10546882, 4313360, 8724, 853450136
			},
			.prefetch0 = 22523,
			.prefetch1 = 49423,
			.ram = subxl_final_ram_0,
			.ram_len = 26,
		},
		.transactions = subxl_transactions_0,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "001 SUBX.l D4, D7 9f84",
		.initial = {
			.regs = {
				2846744529, 3811950143, 3757458348, 791707571, 3128395329, 2706499770, 1389574661, 1971322148, 706501897, 2465501078, 1176199486, 1633805654, 3975683162, 3997360605, 2424496290, 7568458, 1969398, 9759, 10590438
			},
			.prefetch0 = 40836,
			.prefetch1 = 31664,
			.ram = subxl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2846744529, 3811950143, 3757458348, 791707571, 3128395329, 2706499770, 1389574661, 3137894114, 706501897, 2465501078, 1176199486, 1633805654, 3975683162, 3997360605, 2424496290, 7568458, 1969398, 9755, 10590440
			},
			.prefetch0 = 31664,
			.prefetch1 = 2387,
			.ram = subxl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_1,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "002 SUBX.l D7, D3 9787",
		.initial = {
			.regs = {
				3801011899, 740707806, 1229758614, 4012747224, 1466280214, 3561794317, 501803737, 1375774319, 1634269725, 3136428365, 2919696456, 3444932396, 3477083714, 3026041598, 721460407, 14917234, 14996816, 10003, 1343420
			},
			.prefetch0 = 38791,
			.prefetch1 = 53712,
			.ram = subxl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3801011899, 740707806, 1229758614, 2636972904, 1466280214, 3561794317, 501803737, 1375774319, 1634269725, 3136428365, 2919696456, 3444932396, 3477083714, 3026041598, 721460407, 14917234, 14996816, 9992, 1343422
			},
			.prefetch0 = 53712,
			.prefetch1 = 11942,
			.ram = subxl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 SUBX.l D5, D0 9185",
		.initial = {
			.regs = {
				2338968859, 3996583932, 3299781635, 1612507697, 2804036244, 2973588872, 653478271, 3519863890, 1120262427, 1638878150, 3765170719, 523932879, 1165861360, 3600981804, 2108136505, 4897994, 16559992, 9477, 4373924
			},
			.prefetch0 = 37253,
			.prefetch1 = 32690,
			.ram = subxl_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3660347283, 3996583932, 3299781635, 1612507697, 2804036244, 2973588872, 653478271, 3519863890, 1120262427, 1638878150, 3765170719, 523932879, 1165861360, 3600981804, 2108136505, 4897994, 16559992, 9497, 4373926
			},
			.prefetch0 = 32690,
			.prefetch1 = 56391,
			.ram = subxl_final_ram_3,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_3,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "004 SUBX.l D0, D5 9b80",
		.initial = {
			.regs = {
				914619515, 3991395269, 87664691, 3734071242, 1151120278, 3546116901, 304480586, 61391145, 3852920760, 373823591, 99696520, 3808244115, 1767101233, 2867466877, 374074611, 4039098, 14066074, 42525, 7380458
			},
			.prefetch0 = 39808,
			.prefetch1 = 65029,
			.ram = subxl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				914619515, 3991395269, 87664691, 3734071242, 1151120278, 2631497385, 304480586, 61391145, 3852920760, 373823591, 99696520, 3808244115, 1767101233, 2867466877, 374074611, 4039098, 14066074, 42504, 7380460
			},
			.prefetch0 = 65029,
			.prefetch1 = 37278,
			.ram = subxl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_4,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "005 SUBX.l D6, D1 9386",
		.initial = {
			.regs = {
				1752361820, 3996790754, 667032392, 1360165771, 771053228, 1772766739, 1121026890, 989468264, 1780325093, 2616520167, 1412958119, 3251192125, 4121363498, 1392612489, 4147449290, 11826328, 2821254, 34308, 14092932
			},
			.prefetch0 = 37766,
			.prefetch1 = 45077,
			.ram = subxl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1752361820, 2875763864, 667032392, 1360165771, 771053228, 1772766739, 1121026890, 989468264, 1780325093, 2616520167, 1412958119, 3251192125, 4121363498, 1392612489, 4147449290, 11826328, 2821254, 34312, 14092934
			},
			.prefetch0 = 45077,
			.prefetch1 = 29897,
			.ram = subxl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_5,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "006 SUBX.l D6, D7 9f86",
		.initial = {
			.regs = {
				153130798, 2386343371, 2293993287, 2143872711, 967066466, 1418001069, 3149649786, 3586806859, 1631405486, 3519452104, 2035088793, 1702410928, 1030931940, 2706035862, 3291219148, 401976, 4408124, 9733, 4331178
			},
			.prefetch0 = 40838,
			.prefetch1 = 33709,
			.ram = subxl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				153130798, 2386343371, 2293993287, 2143872711, 967066466, 1418001069, 3149649786, 437157073, 1631405486, 3519452104, 2035088793, 1702410928, 1030931940, 2706035862, 3291219148, 401976, 4408124, 9728, 4331180
			},
			.prefetch0 = 33709,
			.prefetch1 = 50714,
			.ram = subxl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_6,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "007 SUBX.l -(A1), -(A7) 9f89",
		.initial = {
			.regs = {
				3407360339, 2248199411, 521304180, 4197765079, 3460860336, 480066429, 3895338433, 2842092081, 1729578393, 3016282900, 2216881899, 799971914, 701522298, 3189139395, 561367547, 54310, 7394310, 42504, 11332122
			},
			.prefetch0 = 40841,
			.prefetch1 = 43822,
			.ram = subxl_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3407360339, 2248199411, 521304180, 4197765079, 3460860336, 480066429, 3895338433, 2842092081, 1729578393, 3016282896, 2216881899, 799971914, 701522298, 3189139395, 561367547, 54310, 7394306, 42521, 11332124
			},
			.prefetch0 = 43822,
			.prefetch1 = 59465,
			.ram = subxl_final_ram_7,
			.ram_len = 14,
		},
		.transactions = subxl_transactions_7,
		.transactions_len = 8,
		.lenght = 30,
	},
	{
		.name = "008 SUBX.l D5, D2 9585",
		.initial = {
			.regs = {
				679316321, 262570116, 1792693930, 533780363, 1665844794, 1289837240, 3567398330, 4061484127, 2926541989, 1429675325, 175709826, 1454524844, 1133905957, 4273124855, 1654677985, 3356830, 15584772, 42002, 12201944
			},
			.prefetch0 = 38277,
			.prefetch1 = 23831,
			.ram = subxl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				679316321, 262570116, 502856689, 533780363, 1665844794, 1289837240, 3567398330, 4061484127, 2926541989, 1429675325, 175709826, 1454524844, 1133905957, 4273124855, 1654677985, 3356830, 15584772, 41984, 12201946
			},
			.prefetch0 = 23831,
			.prefetch1 = 46317,
			.ram = subxl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_8,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "009 SUBX.l -(A7), -(A2) 958f",
		.initial = {
			.regs = {
				661289500, 2089317717, 2672353970, 1112731212, 2583285191, 3191142422, 1736791191, 906101122, 1699360010, 642475225, 1104376477, 3326309382, 1105921756, 911208995, 1030620413, 117780, 16618448, 33802, 6697684
			},
			.prefetch0 = 38287,
			.prefetch1 = 4969,
			.ram = subxl_initial_ram_9,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				661289500, 2089317717, 2672353970, 1112731212, 2583285191, 3191142422, 1736791191, 906101122, 1699360010, 642475225, 1104376477, 3326309382, 1105921756, 911208995, 1030620413, 117776, 16618434, 9226, 1995187010
			},
			.prefetch0 = 39411,
			.prefetch1 = 48836,
			.ram = subxl_final_ram_9,
			.ram_len = 30,
		},
		.transactions = subxl_transactions_9,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "010 SUBX.l D1, D1 9381",
		.initial = {
			.regs = {
				1541010150, 3072383961, 305948439, 3505250489, 616555882, 698662076, 3676090416, 3876719089, 854986083, 3519864349, 2006890010, 3431762354, 864850615, 1103455165, 346398705, 11808688, 7871540, 1564, 11816254
			},
			.prefetch0 = 37761,
			.prefetch1 = 59953,
			.ram = subxl_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1541010150, 4294967295, 305948439, 3505250489, 616555882, 698662076, 3676090416, 3876719089, 854986083, 3519864349, 2006890010, 3431762354, 864850615, 1103455165, 346398705, 11808688, 7871540, 1561, 11816256
			},
			.prefetch0 = 59953,
			.prefetch1 = 18865,
			.ram = subxl_final_ram_10,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_10,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "011 SUBX.l -(A7), -(A2) 958f",
		.initial = {
			.regs = {
				2204328671, 1840522545, 250500342, 109147268, 1268330943, 2874498631, 1392312991, 3712522510, 2160625848, 3414422136, 1761231789, 4171084026, 1160580126, 18862747, 2229643573, 407216, 8927364, 787, 1271570
			},
			.prefetch0 = 38287,
			.prefetch1 = 15796,
			.ram = subxl_initial_ram_11,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2204328671, 1840522545, 250500342, 109147268, 1268330943, 2874498631, 1392312991, 3712522510, 2160625848, 3414422136, 1761231789, 4171084026, 1160580126, 18862747, 2229643573, 407212, 8927350, 8979, 26222706
			},
			.prefetch0 = 45588,
			.prefetch1 = 777,
			.ram = subxl_final_ram_11,
			.ram_len = 30,
		},
		.transactions = subxl_transactions_11,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "012 SUBX.l D4, D4 9984",
		.initial = {
			.regs = {
				1162990404, 2422373278, 830745037, 1908174593, 3923138698, 2677274277, 3271991746, 374757736, 2180236438, 2137592211, 2202759978, 682812580, 3071513574, 39208805, 177300640, 12388054, 3640642, 41756, 4933026
			},
			.prefetch0 = 39300,
			.prefetch1 = 48774,
			.ram = subxl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1162990404, 2422373278, 830745037, 1908174593, 4294967295, 2677274277, 3271991746, 374757736, 2180236438, 2137592211, 2202759978, 682812580, 3071513574, 39208805, 177300640, 12388054, 3640642, 41753, 4933028
			},
			.prefetch0 = 48774,
			.prefetch1 = 38758,
			.ram = subxl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 SUBX.l D0, D7 9f80",
		.initial = {
			.regs = {
				1473133337, 2623124996, 4171631624, 523850917, 3371515804, 422198518, 4069940932, 7937704, 3915979905, 3907621480, 2647347810, 3125760208, 3151618806, 615072054, 1860804739, 5944046, 3015798, 265, 2049644
			},
			.prefetch0 = 40832,
			.prefetch1 = 24912,
			.ram = subxl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1473133337, 2623124996, 4171631624, 523850917, 3371515804, 422198518, 4069940932, 2829771663, 3915979905, 3907621480, 2647347810, 3125760208, 3151618806, 615072054, 1860804739, 5944046, 3015798, 281, 2049646
			},
			.prefetch0 = 24912,
			.prefetch1 = 29190,
			.ram = subxl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = subxl_transactions_13,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "014 SUBX.l -(A0), -(A3) 9788",
		.initial = {
			.regs = {
				2360795123, 1000350361, 905355497, 639390834, 1578499454, 2023463308, 2112012875, 3842026981, 2713511755, 3803768824, 3881953379, 996646539, 3570084244, 1423544871, 3997867031, 10704328, 14747608, 32773, 4603716
			},
			.prefetch0 = 38792,
			.prefetch1 = 61510,
			.ram = subxl_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2360795123, 1000350361, 905355497, 639390834, 1578499454, 2023463308, 2112012875, 3842026981, 2713511755, 3803768824, 3881953379, 996646539, 3570084244, 1423544871, 3997867031, 10704328, 14747594, 8197, 1916834090
			},
			.prefetch0 = 59667,
			.prefetch1 = 30597,
			.ram = subxl_final_ram_14,
			.ram_len = 26,
		},
		.transactions = subxl_transactions_14,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "015 SUBX.l -(A3), -(A0) 918b",
		.initial = {
			.regs = {
				3233590539, 3786293593, 2665362403, 756723383, 442357943, 1010016968, 3676404033, 1645649879, 2480763033, 2474145526, 2833915357, 3731054045, 3878013229, 3514590265, 3307760202, 2686498, 8727586, 1548, 3672462
			},
			.prefetch0 = 37259,
			.prefetch1 = 20590,
			.ram = subxl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3233590539, 3786293593, 2665362403, 756723383, 442357943, 1010016968, 3676404033, 1645649879, 2480763033, 2474145526, 2833915357, 3731054045, 3878013229, 3514590265, 3307760202, 2686498, 8727572, 9740, 2588426708
			},
			.prefetch0 = 61950,
			.prefetch1 = 15630,
			.ram = subxl_final_ram_15,
			.ram_len = 26,
		},
		.transactions = subxl_transactions_15,
		.transactions_len = 15,
		.lenght = 60,
	},
};

#endif /* RBT_SUBXL_H */