#ifndef RBT_LSLB_H
#define RBT_LSLB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte lslb_initial_ram_0[] = {
		{ .addr = 0x11229c, .byte = 0xed },
		{ .addr = 0x11229d, .byte = 0x08 },
		{ .addr = 0x11229e, .byte = 0x15 },
		{ .addr = 0x11229f, .byte = 0x9a },
		{ .addr = 0x1122a0, .byte = 0xd8 },
		{ .addr = 0x1122a1, .byte = 0x1f }
};

static const SST_RamByte lslb_final_ram_0[] = {
		{ .addr = 0x11229c, .byte = 0xed },
		{ .addr = 0x11229d, .byte = 0x08 },
		{ .addr = 0x11229e, .byte = 0x15 },
		{ .addr = 0x11229f, .byte = 0x9a },
		{ .addr = 0x1122a0, .byte = 0xd8 },
		{ .addr = 0x1122a1, .byte = 0x1f }
};

static const SST_Transaction lslb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1122976, .data = 55327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lslb_initial_ram_1[] = {
		{ .addr = 0x56d97c, .byte = 0xe7 },
		{ .addr = 0x56d97d, .byte = 0x09 },
		{ .addr = 0x56d97e, .byte = 0x1a },
		{ .addr = 0x56d97f, .byte = 0x85 },
		{ .addr = 0x56d980, .byte = 0x17 },
		{ .addr = 0x56d981, .byte = 0x79 }
};

static const SST_RamByte lslb_final_ram_1[] = {
		{ .addr = 0x56d97c, .byte = 0xe7 },
		{ .addr = 0x56d97d, .byte = 0x09 },
		{ .addr = 0x56d97e, .byte = 0x1a },
		{ .addr = 0x56d97f, .byte = 0x85 },
		{ .addr = 0x56d980, .byte = 0x17 },
		{ .addr = 0x56d981, .byte = 0x79 }
};

static const SST_Transaction lslb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5691776, .data = 6009, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lslb_initial_ram_2[] = {
		{ .addr = 0x8dc0aa, .byte = 0xef },
		{ .addr = 0x8dc0ab, .byte = 0x0e },
		{ .addr = 0x8dc0ac, .byte = 0x88 },
		{ .addr = 0x8dc0ad, .byte = 0x2a },
		{ .addr = 0x8dc0ae, .byte = 0x03 },
		{ .addr = 0x8dc0af, .byte = 0xde }
};

static const SST_RamByte lslb_final_ram_2[] = {
		{ .addr = 0x8dc0aa, .byte = 0xef },
		{ .addr = 0x8dc0ab, .byte = 0x0e },
		{ .addr = 0x8dc0ac, .byte = 0x88 },
		{ .addr = 0x8dc0ad, .byte = 0x2a },
		{ .addr = 0x8dc0ae, .byte = 0x03 },
		{ .addr = 0x8dc0af, .byte = 0xde }
};

static const SST_Transaction lslb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9289902, .data = 990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lslb_initial_ram_3[] = {
		{ .addr = 0x5d6e2e, .byte = 0xe9 },
		{ .addr = 0x5d6e2f, .byte = 0x2b },
		{ .addr = 0x5d6e30, .byte = 0xd8 },
		{ .addr = 0x5d6e31, .byte = 0xb9 },
		{ .addr = 0x5d6e32, .byte = 0xf4 },
		{ .addr = 0x5d6e33, .byte = 0x7e }
};

static const SST_RamByte lslb_final_ram_3[] = {
		{ .addr = 0x5d6e2e, .byte = 0xe9 },
		{ .addr = 0x5d6e2f, .byte = 0x2b },
		{ .addr = 0x5d6e30, .byte = 0xd8 },
		{ .addr = 0x5d6e31, .byte = 0xb9 },
		{ .addr = 0x5d6e32, .byte = 0xf4 },
		{ .addr = 0x5d6e33, .byte = 0x7e }
};

static const SST_Transaction lslb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6123058, .data = 62590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte lslb_initial_ram_4[] = {
		{ .addr = 0xee668a, .byte = 0xe3 },
		{ .addr = 0xee668b, .byte = 0x2a },
		{ .addr = 0xee668c, .byte = 0x08 },
		{ .addr = 0xee668d, .byte = 0xbe },
		{ .addr = 0xee668e, .byte = 0x05 },
		{ .addr = 0xee668f, .byte = 0xbd }
};

static const SST_RamByte lslb_final_ram_4[] = {
		{ .addr = 0xee668a, .byte = 0xe3 },
		{ .addr = 0xee668b, .byte = 0x2a },
		{ .addr = 0xee668c, .byte = 0x08 },
		{ .addr = 0xee668d, .byte = 0xbe },
		{ .addr = 0xee668e, .byte = 0x05 },
		{ .addr = 0xee668f, .byte = 0xbd }
};

static const SST_Transaction lslb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15623822, .data = 1469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte lslb_initial_ram_5[] = {
		{ .addr = 0xbcbe9c, .byte = 0xef },
		{ .addr = 0xbcbe9d, .byte = 0x29 },
		{ .addr = 0xbcbe9e, .byte = 0xc5 },
		{ .addr = 0xbcbe9f, .byte = 0x81 },
		{ .addr = 0xbcbea0, .byte = 0x77 },
		{ .addr = 0xbcbea1, .byte = 0x17 }
};

static const SST_RamByte lslb_final_ram_5[] = {
		{ .addr = 0xbcbe9c, .byte = 0xef },
		{ .addr = 0xbcbe9d, .byte = 0x29 },
		{ .addr = 0xbcbe9e, .byte = 0xc5 },
		{ .addr = 0xbcbe9f, .byte = 0x81 },
		{ .addr = 0xbcbea0, .byte = 0x77 },
		{ .addr = 0xbcbea1, .byte = 0x17 }
};

static const SST_Transaction lslb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12369568, .data = 30487, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 38 },
};

static const SST_RamByte lslb_initial_ram_6[] = {
		{ .addr = 0x5bec6c, .byte = 0xe5 },
		{ .addr = 0x5bec6d, .byte = 0x09 },
		{ .addr = 0x5bec6e, .byte = 0xd7 },
		{ .addr = 0x5bec6f, .byte = 0x05 },
		{ .addr = 0x5bec70, .byte = 0xab },
		{ .addr = 0x5bec71, .byte = 0xd7 }
};

static const SST_RamByte lslb_final_ram_6[] = {
		{ .addr = 0x5bec6c, .byte = 0xe5 },
		{ .addr = 0x5bec6d, .byte = 0x09 },
		{ .addr = 0x5bec6e, .byte = 0xd7 },
		{ .addr = 0x5bec6f, .byte = 0x05 },
		{ .addr = 0x5bec70, .byte = 0xab },
		{ .addr = 0x5bec71, .byte = 0xd7 }
};

static const SST_Transaction lslb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6024304, .data = 43991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lslb_initial_ram_7[] = {
		{ .addr = 0xe8e264, .byte = 0xed },
		{ .addr = 0xe8e265, .byte = 0x2e },
		{ .addr = 0xe8e266, .byte = 0x84 },
		{ .addr = 0xe8e267, .byte = 0xd2 },
		{ .addr = 0xe8e268, .byte = 0x85 },
		{ .addr = 0xe8e269, .byte = 0x81 }
};

static const SST_RamByte lslb_final_ram_7[] = {
		{ .addr = 0xe8e264, .byte = 0xed },
		{ .addr = 0xe8e265, .byte = 0x2e },
		{ .addr = 0xe8e266, .byte = 0x84 },
		{ .addr = 0xe8e267, .byte = 0xd2 },
		{ .addr = 0xe8e268, .byte = 0x85 },
		{ .addr = 0xe8e269, .byte = 0x81 }
};

static const SST_Transaction lslb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15262312, .data = 34177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 22 },
};

static const SST_RamByte lslb_initial_ram_8[] = {
		{ .addr = 0xdfdc54, .byte = 0xeb },
		{ .addr = 0xdfdc55, .byte = 0x2e },
		{ .addr = 0xdfdc56, .byte = 0xf5 },
		{ .addr = 0xdfdc57, .byte = 0x1c },
		{ .addr = 0xdfdc58, .byte = 0x49 },
		{ .addr = 0xdfdc59, .byte = 0xf9 }
};

static const SST_RamByte lslb_final_ram_8[] = {
		{ .addr = 0xdfdc54, .byte = 0xeb },
		{ .addr = 0xdfdc55, .byte = 0x2e },
		{ .addr = 0xdfdc56, .byte = 0xf5 },
		{ .addr = 0xdfdc57, .byte = 0x1c },
		{ .addr = 0xdfdc58, .byte = 0x49 },
		{ .addr = 0xdfdc59, .byte = 0xf9 }
};

static const SST_Transaction lslb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14670936, .data = 18937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 80 },
};

static const SST_RamByte lslb_initial_ram_9[] = {
		{ .addr = 0xb8d814, .byte = 0xe1 },
		{ .addr = 0xb8d815, .byte = 0x08 },
		{ .addr = 0xb8d816, .byte = 0x4a },
		{ .addr = 0xb8d817, .byte = 0xf7 },
		{ .addr = 0xb8d818, .byte = 0x39 },
		{ .addr = 0xb8d819, .byte = 0x14 }
};

static const SST_RamByte lslb_final_ram_9[] = {
		{ .addr = 0xb8d814, .byte = 0xe1 },
		{ .addr = 0xb8d815, .byte = 0x08 },
		{ .addr = 0xb8d816, .byte = 0x4a },
		{ .addr = 0xb8d817, .byte = 0xf7 },
		{ .addr = 0xb8d818, .byte = 0x39 },
		{ .addr = 0xb8d819, .byte = 0x14 }
};

static const SST_Transaction lslb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12113944, .data = 14612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte lslb_initial_ram_10[] = {
		{ .addr = 0x396ad2, .byte = 0xe5 },
		{ .addr = 0x396ad3, .byte = 0x0c },
		{ .addr = 0x396ad4, .byte = 0x2a },
		{ .addr = 0x396ad5, .byte = 0x2f },
		{ .addr = 0x396ad6, .byte = 0x8b },
		{ .addr = 0x396ad7, .byte = 0xca }
};

static const SST_RamByte lslb_final_ram_10[] = {
		{ .addr = 0x396ad2, .byte = 0xe5 },
		{ .addr = 0x396ad3, .byte = 0x0c },
		{ .addr = 0x396ad4, .byte = 0x2a },
		{ .addr = 0x396ad5, .byte = 0x2f },
		{ .addr = 0x396ad6, .byte = 0x8b },
		{ .addr = 0x396ad7, .byte = 0xca }
};

static const SST_Transaction lslb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3762902, .data = 35786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lslb_initial_ram_11[] = {
		{ .addr = 0xc3b9be, .byte = 0xe9 },
		{ .addr = 0xc3b9bf, .byte = 0x2d },
		{ .addr = 0xc3b9c0, .byte = 0x47 },
		{ .addr = 0xc3b9c1, .byte = 0xac },
		{ .addr = 0xc3b9c2, .byte = 0x95 },
		{ .addr = 0xc3b9c3, .byte = 0xd2 }
};

static const SST_RamByte lslb_final_ram_11[] = {
		{ .addr = 0xc3b9be, .byte = 0xe9 },
		{ .addr = 0xc3b9bf, .byte = 0x2d },
		{ .addr = 0xc3b9c0, .byte = 0x47 },
		{ .addr = 0xc3b9c1, .byte = 0xac },
		{ .addr = 0xc3b9c2, .byte = 0x95 },
		{ .addr = 0xc3b9c3, .byte = 0xd2 }
};

static const SST_Transaction lslb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12827074, .data = 38354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 70 },
};

static const SST_RamByte lslb_initial_ram_12[] = {
		{ .addr = 0x1d04f8, .byte = 0xe9 },
		{ .addr = 0x1d04f9, .byte = 0x0d },
		{ .addr = 0x1d04fa, .byte = 0x7b },
		{ .addr = 0x1d04fb, .byte = 0x1e },
		{ .addr = 0x1d04fc, .byte = 0x90 },
		{ .addr = 0x1d04fd, .byte = 0xab }
};

static const SST_RamByte lslb_final_ram_12[] = {
		{ .addr = 0x1d04f8, .byte = 0xe9 },
		{ .addr = 0x1d04f9, .byte = 0x0d },
		{ .addr = 0x1d04fa, .byte = 0x7b },
		{ .addr = 0x1d04fb, .byte = 0x1e },
		{ .addr = 0x1d04fc, .byte = 0x90 },
		{ .addr = 0x1d04fd, .byte = 0xab }
};

static const SST_Transaction lslb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1901820, .data = 37035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lslb_initial_ram_13[] = {
		{ .addr = 0x0fc69a, .byte = 0xe7 },
		{ .addr = 0x0fc69b, .byte = 0x09 },
		{ .addr = 0x0fc69c, .byte = 0x46 },
		{ .addr = 0x0fc69d, .byte = 0xc9 },
		{ .addr = 0x0fc69e, .byte = 0x77 },
		{ .addr = 0x0fc69f, .byte = 0x59 }
};

static const SST_RamByte lslb_final_ram_13[] = {
		{ .addr = 0x0fc69a, .byte = 0xe7 },
		{ .addr = 0x0fc69b, .byte = 0x09 },
		{ .addr = 0x0fc69c, .byte = 0x46 },
		{ .addr = 0x0fc69d, .byte = 0xc9 },
		{ .addr = 0x0fc69e, .byte = 0x77 },
		{ .addr = 0x0fc69f, .byte = 0x59 }
};

static const SST_Transaction lslb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1033886, .data = 30553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lslb_initial_ram_14[] = {
		{ .addr = 0x663920, .byte = 0xeb },
		{ .addr = 0x663921, .byte = 0x2b },
		{ .addr = 0x663922, .byte = 0xea },
		{ .addr = 0x663923, .byte = 0x68 },
		{ .addr = 0x663924, .byte = 0x57 },
		{ .addr = 0x663925, .byte = 0xf8 }
};

static const SST_RamByte lslb_final_ram_14[] = {
		{ .addr = 0x663920, .byte = 0xeb },
		{ .addr = 0x663921, .byte = 0x2b },
		{ .addr = 0x663922, .byte = 0xea },
		{ .addr = 0x663923, .byte = 0x68 },
		{ .addr = 0x663924, .byte = 0x57 },
		{ .addr = 0x663925, .byte = 0xf8 }
};

static const SST_Transaction lslb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6699300, .data = 22520, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 32 },
};

static const SST_RamByte lslb_initial_ram_15[] = {
		{ .addr = 0xbae4f4, .byte = 0xed },
		{ .addr = 0xbae4f5, .byte = 0x0d },
		{ .addr = 0xbae4f6, .byte = 0x79 },
		{ .addr = 0xbae4f7, .byte = 0x61 },
		{ .addr = 0xbae4f8, .byte = 0x63 },
		{ .addr = 0xbae4f9, .byte = 0xf8 }
};

static const SST_RamByte lslb_final_ram_15[] = {
		{ .addr = 0xbae4f4, .byte = 0xed },
		{ .addr = 0xbae4f5, .byte = 0x0d },
		{ .addr = 0xbae4f6, .byte = 0x79 },
		{ .addr = 0xbae4f7, .byte = 0x61 },
		{ .addr = 0xbae4f8, .byte = 0x63 },
		{ .addr = 0xbae4f9, .byte = 0xf8 }
};

static const SST_Transaction lslb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12248312, .data = 25592, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lslb_initial_ram_16[] = {
		{ .addr = 0xe45ea2, .byte = 0xe7 },
		{ .addr = 0xe45ea3, .byte = 0x0a },
		{ .addr = 0xe45ea4, .byte = 0xd4 },
		{ .addr = 0xe45ea5, .byte = 0xef },
		{ .addr = 0xe45ea6, .byte = 0xb0 },
		{ .addr = 0xe45ea7, .byte = 0x9a }
};

static const SST_RamByte lslb_final_ram_16[] = {
		{ .addr = 0xe45ea2, .byte = 0xe7 },
		{ .addr = 0xe45ea3, .byte = 0x0a },
		{ .addr = 0xe45ea4, .byte = 0xd4 },
		{ .addr = 0xe45ea5, .byte = 0xef },
		{ .addr = 0xe45ea6, .byte = 0xb0 },
		{ .addr = 0xe45ea7, .byte = 0x9a }
};

static const SST_Transaction lslb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14966438, .data = 45210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lslb_initial_ram_17[] = {
		{ .addr = 0xd4ffd0, .byte = 0xed },
		{ .addr = 0xd4ffd1, .byte = 0x29 },
		{ .addr = 0xd4ffd2, .byte = 0x02 },
		{ .addr = 0xd4ffd3, .byte = 0x83 },
		{ .addr = 0xd4ffd4, .byte = 0xdb },
		{ .addr = 0xd4ffd5, .byte = 0x83 }
};

static const SST_RamByte lslb_final_ram_17[] = {
		{ .addr = 0xd4ffd0, .byte = 0xed },
		{ .addr = 0xd4ffd1, .byte = 0x29 },
		{ .addr = 0xd4ffd2, .byte = 0x02 },
		{ .addr = 0xd4ffd3, .byte = 0x83 },
		{ .addr = 0xd4ffd4, .byte = 0xdb },
		{ .addr = 0xd4ffd5, .byte = 0x83 }
};

static const SST_Transaction lslb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13959124, .data = 56195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 76 },
};

static const SST_RamByte lslb_initial_ram_18[] = {
		{ .addr = 0x0954b2, .byte = 0xed },
		{ .addr = 0x0954b3, .byte = 0x08 },
		{ .addr = 0x0954b4, .byte = 0x36 },
		{ .addr = 0x0954b5, .byte = 0xf5 },
		{ .addr = 0x0954b6, .byte = 0x6f },
		{ .addr = 0x0954b7, .byte = 0x60 }
};

static const SST_RamByte lslb_final_ram_18[] = {
		{ .addr = 0x0954b2, .byte = 0xed },
		{ .addr = 0x0954b3, .byte = 0x08 },
		{ .addr = 0x0954b4, .byte = 0x36 },
		{ .addr = 0x0954b5, .byte = 0xf5 },
		{ .addr = 0x0954b6, .byte = 0x6f },
		{ .addr = 0x0954b7, .byte = 0x60 }
};

static const SST_Transaction lslb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 611510, .data = 28512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lslb_initial_ram_19[] = {
		{ .addr = 0x034b78, .byte = 0xe3 },
		{ .addr = 0x034b79, .byte = 0x0b },
		{ .addr = 0x034b7a, .byte = 0xd9 },
		{ .addr = 0x034b7b, .byte = 0x9a },
		{ .addr = 0x034b7c, .byte = 0x1e },
		{ .addr = 0x034b7d, .byte = 0xff }
};

static const SST_RamByte lslb_final_ram_19[] = {
		{ .addr = 0x034b78, .byte = 0xe3 },
		{ .addr = 0x034b79, .byte = 0x0b },
		{ .addr = 0x034b7a, .byte = 0xd9 },
		{ .addr = 0x034b7b, .byte = 0x9a },
		{ .addr = 0x034b7c, .byte = 0x1e },
		{ .addr = 0x034b7d, .byte = 0xff }
};

static const SST_Transaction lslb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 215932, .data = 7935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte lslb_initial_ram_20[] = {
		{ .addr = 0xf0a242, .byte = 0xe3 },
		{ .addr = 0xf0a243, .byte = 0x2e },
		{ .addr = 0xf0a244, .byte = 0x51 },
		{ .addr = 0xf0a245, .byte = 0x65 },
		{ .addr = 0xf0a246, .byte = 0x92 },
		{ .addr = 0xf0a247, .byte = 0xe3 }
};

static const SST_RamByte lslb_final_ram_20[] = {
		{ .addr = 0xf0a242, .byte = 0xe3 },
		{ .addr = 0xf0a243, .byte = 0x2e },
		{ .addr = 0xf0a244, .byte = 0x51 },
		{ .addr = 0xf0a245, .byte = 0x65 },
		{ .addr = 0xf0a246, .byte = 0x92 },
		{ .addr = 0xf0a247, .byte = 0xe3 }
};

static const SST_Transaction lslb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15770182, .data = 37603, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 84 },
};

static const SST_RamByte lslb_initial_ram_21[] = {
		{ .addr = 0xba6c2e, .byte = 0xef },
		{ .addr = 0xba6c2f, .byte = 0x0f },
		{ .addr = 0xba6c30, .byte = 0xf9 },
		{ .addr = 0xba6c31, .byte = 0x6d },
		{ .addr = 0xba6c32, .byte = 0x5d },
		{ .addr = 0xba6c33, .byte = 0x5b }
};

static const SST_RamByte lslb_final_ram_21[] = {
		{ .addr = 0xba6c2e, .byte = 0xef },
		{ .addr = 0xba6c2f, .byte = 0x0f },
		{ .addr = 0xba6c30, .byte = 0xf9 },
		{ .addr = 0xba6c31, .byte = 0x6d },
		{ .addr = 0xba6c32, .byte = 0x5d },
		{ .addr = 0xba6c33, .byte = 0x5b }
};

static const SST_Transaction lslb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12217394, .data = 23899, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lslb_initial_ram_22[] = {
		{ .addr = 0xac61d4, .byte = 0xe3 },
		{ .addr = 0xac61d5, .byte = 0x2c },
		{ .addr = 0xac61d6, .byte = 0x8a },
		{ .addr = 0xac61d7, .byte = 0x8a },
		{ .addr = 0xac61d8, .byte = 0x6b },
		{ .addr = 0xac61d9, .byte = 0xe6 }
};

static const SST_RamByte lslb_final_ram_22[] = {
		{ .addr = 0xac61d4, .byte = 0xe3 },
		{ .addr = 0xac61d5, .byte = 0x2c },
		{ .addr = 0xac61d6, .byte = 0x8a },
		{ .addr = 0xac61d7, .byte = 0x8a },
		{ .addr = 0xac61d8, .byte = 0x6b },
		{ .addr = 0xac61d9, .byte = 0xe6 }
};

static const SST_Transaction lslb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11297240, .data = 27622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 118 },
};

static const SST_RamByte lslb_initial_ram_23[] = {
		{ .addr = 0x8e0004, .byte = 0xe1 },
		{ .addr = 0x8e0005, .byte = 0x2a },
		{ .addr = 0x8e0006, .byte = 0xb2 },
		{ .addr = 0x8e0007, .byte = 0xa4 },
		{ .addr = 0x8e0008, .byte = 0x11 },
		{ .addr = 0x8e0009, .byte = 0x8e }
};

static const SST_RamByte lslb_final_ram_23[] = {
		{ .addr = 0x8e0004, .byte = 0xe1 },
		{ .addr = 0x8e0005, .byte = 0x2a },
		{ .addr = 0x8e0006, .byte = 0xb2 },
		{ .addr = 0x8e0007, .byte = 0xa4 },
		{ .addr = 0x8e0008, .byte = 0x11 },
		{ .addr = 0x8e0009, .byte = 0x8e }
};

static const SST_Transaction lslb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9306120, .data = 4494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 120 },
};

static const SST_RamByte lslb_initial_ram_24[] = {
		{ .addr = 0x16191a, .byte = 0xed },
		{ .addr = 0x16191b, .byte = 0x2f },
		{ .addr = 0x16191c, .byte = 0x15 },
		{ .addr = 0x16191d, .byte = 0x75 },
		{ .addr = 0x16191e, .byte = 0xe2 },
		{ .addr = 0x16191f, .byte = 0x33 }
};

static const SST_RamByte lslb_final_ram_24[] = {
		{ .addr = 0x16191a, .byte = 0xed },
		{ .addr = 0x16191b, .byte = 0x2f },
		{ .addr = 0x16191c, .byte = 0x15 },
		{ .addr = 0x16191d, .byte = 0x75 },
		{ .addr = 0x16191e, .byte = 0xe2 },
		{ .addr = 0x16191f, .byte = 0x33 }
};

static const SST_Transaction lslb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1448222, .data = 57907, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte lslb_initial_ram_25[] = {
		{ .addr = 0x91341e, .byte = 0xe9 },
		{ .addr = 0x91341f, .byte = 0x08 },
		{ .addr = 0x913420, .byte = 0xe0 },
		{ .addr = 0x913421, .byte = 0x45 },
		{ .addr = 0x913422, .byte = 0x26 },
		{ .addr = 0x913423, .byte = 0xb5 }
};

static const SST_RamByte lslb_final_ram_25[] = {
		{ .addr = 0x91341e, .byte = 0xe9 },
		{ .addr = 0x91341f, .byte = 0x08 },
		{ .addr = 0x913420, .byte = 0xe0 },
		{ .addr = 0x913421, .byte = 0x45 },
		{ .addr = 0x913422, .byte = 0x26 },
		{ .addr = 0x913423, .byte = 0xb5 }
};

static const SST_Transaction lslb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9516066, .data = 9909, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lslb_initial_ram_26[] = {
		{ .addr = 0x4dffae, .byte = 0xe3 },
		{ .addr = 0x4dffaf, .byte = 0x2f },
		{ .addr = 0x4dffb0, .byte = 0x14 },
		{ .addr = 0x4dffb1, .byte = 0x31 },
		{ .addr = 0x4dffb2, .byte = 0x9c },
		{ .addr = 0x4dffb3, .byte = 0x9f }
};

static const SST_RamByte lslb_final_ram_26[] = {
		{ .addr = 0x4dffae, .byte = 0xe3 },
		{ .addr = 0x4dffaf, .byte = 0x2f },
		{ .addr = 0x4dffb0, .byte = 0x14 },
		{ .addr = 0x4dffb1, .byte = 0x31 },
		{ .addr = 0x4dffb2, .byte = 0x9c },
		{ .addr = 0x4dffb3, .byte = 0x9f }
};

static const SST_Transaction lslb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5111730, .data = 40095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte lslb_initial_ram_27[] = {
		{ .addr = 0x15d3f2, .byte = 0xe1 },
		{ .addr = 0x15d3f3, .byte = 0x2f },
		{ .addr = 0x15d3f4, .byte = 0x90 },
		{ .addr = 0x15d3f5, .byte = 0xac },
		{ .addr = 0x15d3f6, .byte = 0xbd },
		{ .addr = 0x15d3f7, .byte = 0xf1 }
};

static const SST_RamByte lslb_final_ram_27[] = {
		{ .addr = 0x15d3f2, .byte = 0xe1 },
		{ .addr = 0x15d3f3, .byte = 0x2f },
		{ .addr = 0x15d3f4, .byte = 0x90 },
		{ .addr = 0x15d3f5, .byte = 0xac },
		{ .addr = 0x15d3f6, .byte = 0xbd },
		{ .addr = 0x15d3f7, .byte = 0xf1 }
};

static const SST_Transaction lslb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1430518, .data = 48625, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte lslb_initial_ram_28[] = {
		{ .addr = 0x358822, .byte = 0xe3 },
		{ .addr = 0x358823, .byte = 0x29 },
		{ .addr = 0x358824, .byte = 0x57 },
		{ .addr = 0x358825, .byte = 0x80 },
		{ .addr = 0x358826, .byte = 0xc2 },
		{ .addr = 0x358827, .byte = 0xc3 }
};

static const SST_RamByte lslb_final_ram_28[] = {
		{ .addr = 0x358822, .byte = 0xe3 },
		{ .addr = 0x358823, .byte = 0x29 },
		{ .addr = 0x358824, .byte = 0x57 },
		{ .addr = 0x358825, .byte = 0x80 },
		{ .addr = 0x358826, .byte = 0xc2 },
		{ .addr = 0x358827, .byte = 0xc3 }
};

static const SST_Transaction lslb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3508262, .data = 49859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte lslb_initial_ram_29[] = {
		{ .addr = 0x0dd982, .byte = 0xe5 },
		{ .addr = 0x0dd983, .byte = 0x29 },
		{ .addr = 0x0dd984, .byte = 0x7d },
		{ .addr = 0x0dd985, .byte = 0xeb },
		{ .addr = 0x0dd986, .byte = 0xe4 },
		{ .addr = 0x0dd987, .byte = 0x95 }
};

static const SST_RamByte lslb_final_ram_29[] = {
		{ .addr = 0x0dd982, .byte = 0xe5 },
		{ .addr = 0x0dd983, .byte = 0x29 },
		{ .addr = 0x0dd984, .byte = 0x7d },
		{ .addr = 0x0dd985, .byte = 0xeb },
		{ .addr = 0x0dd986, .byte = 0xe4 },
		{ .addr = 0x0dd987, .byte = 0x95 }
};

static const SST_Transaction lslb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 907654, .data = 58517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 22 },
};

static const SST_RamByte lslb_initial_ram_30[] = {
		{ .addr = 0xde8800, .byte = 0xe7 },
		{ .addr = 0xde8801, .byte = 0x2a },
		{ .addr = 0xde8802, .byte = 0x06 },
		{ .addr = 0xde8803, .byte = 0x46 },
		{ .addr = 0xde8804, .byte = 0xb5 },
		{ .addr = 0xde8805, .byte = 0x79 }
};

static const SST_RamByte lslb_final_ram_30[] = {
		{ .addr = 0xde8800, .byte = 0xe7 },
		{ .addr = 0xde8801, .byte = 0x2a },
		{ .addr = 0xde8802, .byte = 0x06 },
		{ .addr = 0xde8803, .byte = 0x46 },
		{ .addr = 0xde8804, .byte = 0xb5 },
		{ .addr = 0xde8805, .byte = 0x79 }
};

static const SST_Transaction lslb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14583812, .data = 46457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte lslb_initial_ram_31[] = {
		{ .addr = 0x03ebdc, .byte = 0xeb },
		{ .addr = 0x03ebdd, .byte = 0x0b },
		{ .addr = 0x03ebde, .byte = 0x18 },
		{ .addr = 0x03ebdf, .byte = 0x31 },
		{ .addr = 0x03ebe0, .byte = 0xa6 },
		{ .addr = 0x03ebe1, .byte = 0x3e }
};

static const SST_RamByte lslb_final_ram_31[] = {
		{ .addr = 0x03ebdc, .byte = 0xeb },
		{ .addr = 0x03ebdd, .byte = 0x0b },
		{ .addr = 0x03ebde, .byte = 0x18 },
		{ .addr = 0x03ebdf, .byte = 0x31 },
		{ .addr = 0x03ebe0, .byte = 0xa6 },
		{ .addr = 0x03ebe1, .byte = 0x3e }
};

static const SST_Transaction lslb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 256992, .data = 42558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_TestCase lslb[] = {
	{
		.name = "000 LSL.b 6, D0 ed08",
		.initial = {
			.regs = {
				1992387442, 3472012941, 1621034574, 3444782784, 2285654641, 2767730766, 2674935476, 2414716882, 1627331514, 3980198845, 3865730721, 756098789, 297213050, 329114438, 726582774, 1189786, 10571966, 1027, 1122976
			},
			.prefetch0 = 60680,
			.prefetch1 = 5530,
			.ram = lslb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1992387456, 3472012941, 1621034574, 3444782784, 2285654641, 2767730766, 2674935476, 2414716882, 1627331514, 3980198845, 3865730721, 756098789, 297213050, 329114438, 726582774, 1189786, 10571966, 1032, 1122978
			},
			.prefetch0 = 5530,
			.prefetch1 = 55327,
			.ram = lslb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_0,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "001 LSL.b 3, D1 e709",
		.initial = {
			.regs = {
				3495596816, 3208633345, 750562112, 2960920434, 3447544625, 2433410649, 2713887374, 3017024286, 2595000209, 1721262500, 3107154132, 2442790414, 1835416500, 3917267875, 3466773872, 9736392, 8534772, 34580, 5691776
			},
			.prefetch0 = 59145,
			.prefetch1 = 6789,
			.ram = lslb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3495596816, 3208633352, 750562112, 2960920434, 3447544625, 2433410649, 2713887374, 3017024286, 2595000209, 1721262500, 3107154132, 2442790414, 1835416500, 3917267875, 3466773872, 9736392, 8534772, 34560, 5691778
			},
			.prefetch0 = 6789,
			.prefetch1 = 6009,
			.ram = lslb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_1,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "002 LSL.b 7, D6 ef0e",
		.initial = {
			.regs = {
				1882072706, 3571607342, 184684829, 3779089925, 2093695357, 3007267778, 2818669467, 3726373354, 3122195314, 4263560072, 2449639246, 3819091030, 2203750980, 1659446937, 1812352398, 11767930, 11635554, 42260, 9289902
			},
			.prefetch0 = 61198,
			.prefetch1 = 34858,
			.ram = lslb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1882072706, 3571607342, 184684829, 3779089925, 2093695357, 3007267778, 2818669440, 3726373354, 3122195314, 4263560072, 2449639246, 3819091030, 2203750980, 1659446937, 1812352398, 11767930, 11635554, 42265, 9289904
			},
			.prefetch0 = 34858,
			.prefetch1 = 990,
			.ram = lslb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_2,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "003 LSL.b D4, D3 e92b",
		.initial = {
			.regs = {
				1278711729, 1509221508, 1300067586, 1965606342, 402861976, 4067297514, 841173039, 1470895455, 4162951484, 2173996118, 151178729, 1228423409, 3323396717, 535828908, 4217122923, 9473928, 12677132, 8979, 6123058
			},
			.prefetch0 = 59691,
			.prefetch1 = 55481,
			.ram = lslb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1278711729, 1509221508, 1300067586, 1965606144, 402861976, 4067297514, 841173039, 1470895455, 4162951484, 2173996118, 151178729, 1228423409, 3323396717, 535828908, 4217122923, 9473928, 12677132, 8964, 6123060
			},
			.prefetch0 = 55481,
			.prefetch1 = 62590,
			.ram = lslb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_3,
		.transactions_len = 2,
		.lenght = 54,
	},
	{
		.name = "004 LSL.b D1, D2 e32a",
		.initial = {
			.regs = {
				2992591955, 3288230551, 2142528897, 1437573215, 534777633, 58535001, 3531272034, 1749682753, 1752315843, 3523677098, 685216625, 3091155044, 2720910014, 3462685987, 830670211, 891736, 16728848, 42249, 15623822
			},
			.prefetch0 = 58154,
			.prefetch1 = 2238,
			.ram = lslb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2992591955, 3288230551, 2142528768, 1437573215, 534777633, 58535001, 3531272034, 1749682753, 1752315843, 3523677098, 685216625, 3091155044, 2720910014, 3462685987, 830670211, 891736, 16728848, 42244, 15623824
			},
			.prefetch0 = 2238,
			.prefetch1 = 1469,
			.ram = lslb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_4,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "005 LSL.b D7, D1 ef29",
		.initial = {
			.regs = {
				3898524326, 3124967881, 3385738930, 175780805, 613063011, 2574316707, 2422132677, 4027619474, 417423468, 4242975684, 1418890067, 4034032712, 248497034, 1110528638, 1095868834, 5361264, 1696010, 16, 12369568
			},
			.prefetch0 = 61225,
			.prefetch1 = 50561,
			.ram = lslb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3898524326, 3124967680, 3385738930, 175780805, 613063011, 2574316707, 2422132677, 4027619474, 417423468, 4242975684, 1418890067, 4034032712, 248497034, 1110528638, 1095868834, 5361264, 1696010, 4, 12369570
			},
			.prefetch0 = 50561,
			.prefetch1 = 30487,
			.ram = lslb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_5,
		.transactions_len = 2,
		.lenght = 42,
	},
	{
		.name = "006 LSL.b 2, D1 e509",
		.initial = {
			.regs = {
				3512560713, 1895734572, 743531577, 3226784289, 3176220096, 1722254800, 4123286182, 3725693359, 3547015080, 1669462442, 3870550450, 193989856, 3517262942, 1218887896, 3615288592, 3925084, 1060176, 8478, 6024304
			},
			.prefetch0 = 58633,
			.prefetch1 = 55045,
			.ram = lslb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3512560713, 1895734704, 743531577, 3226784289, 3176220096, 1722254800, 4123286182, 3725693359, 3547015080, 1669462442, 3870550450, 193989856, 3517262942, 1218887896, 3615288592, 3925084, 1060176, 8456, 6024306
			},
			.prefetch0 = 55045,
			.prefetch1 = 43991,
			.ram = lslb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_6,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "007 LSL.b D6, D6 ed2e",
		.initial = {
			.regs = {
				2636256680, 1478810610, 1971945285, 4273512477, 3570549213, 3036880391, 4225826122, 3265556532, 2481764071, 1548208237, 1201943564, 3491310513, 2128227083, 3453283104, 2321783308, 8435838, 14373084, 41994, 15262312
			},
			.prefetch0 = 60718,
			.prefetch1 = 34002,
			.ram = lslb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2636256680, 1478810610, 1971945285, 4273512477, 3570549213, 3036880391, 4225826048, 3265556532, 2481764071, 1548208237, 1201943564, 3491310513, 2128227083, 3453283104, 2321783308, 8435838, 14373084, 41988, 15262314
			},
			.prefetch0 = 34002,
			.prefetch1 = 34177,
			.ram = lslb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_7,
		.transactions_len = 2,
		.lenght = 26,
	},
	{
		.name = "008 LSL.b D5, D6 eb2e",
		.initial = {
			.regs = {
				3818167312, 2674188681, 1223349345, 1044776480, 1098768751, 2512765799, 3199425840, 1779914357, 427933975, 3167425940, 998191666, 2546812174, 693052673, 3348235323, 4158074896, 2748026, 10828808, 42767, 14670936
			},
			.prefetch0 = 60206,
			.prefetch1 = 62748,
			.ram = lslb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3818167312, 2674188681, 1223349345, 1044776480, 1098768751, 2512765799, 3199425792, 1779914357, 427933975, 3167425940, 998191666, 2546812174, 693052673, 3348235323, 4158074896, 2748026, 10828808, 42756, 14670938
			},
			.prefetch0 = 62748,
			.prefetch1 = 18937,
			.ram = lslb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_8,
		.transactions_len = 2,
		.lenght = 84,
	},
	{
		.name = "009 LSL.b 8, D0 e108",
		.initial = {
			.regs = {
				2355073906, 3766948437, 1621102770, 796897915, 4236869945, 1136087827, 1493489514, 2208020462, 972707756, 12409460, 6015915, 1043303253, 2101826797, 3508137527, 1729845493, 5143346, 9067636, 285, 12113944
			},
			.prefetch0 = 57608,
			.prefetch1 = 19191,
			.ram = lslb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2355073792, 3766948437, 1621102770, 796897915, 4236869945, 1136087827, 1493489514, 2208020462, 972707756, 12409460, 6015915, 1043303253, 2101826797, 3508137527, 1729845493, 5143346, 9067636, 260, 12113946
			},
			.prefetch0 = 19191,
			.prefetch1 = 14612,
			.ram = lslb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_9,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "010 LSL.b 2, D4 e50c",
		.initial = {
			.regs = {
				167808379, 4024267097, 426025588, 1887403586, 2922336311, 3083636254, 1654522168, 2413020276, 302380549, 373734440, 320669962, 1495629875, 3348573312, 4211242516, 53934799, 2491926, 15221994, 33302, 3762902
			},
			.prefetch0 = 58636,
			.prefetch1 = 10799,
			.ram = lslb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				167808379, 4024267097, 426025588, 1887403586, 2922336476, 3083636254, 1654522168, 2413020276, 302380549, 373734440, 320669962, 1495629875, 3348573312, 4211242516, 53934799, 2491926, 15221994, 33288, 3762904
			},
			.prefetch0 = 10799,
			.prefetch1 = 35786,
			.ram = lslb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_10,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "011 LSL.b D4, D5 e92d",
		.initial = {
			.regs = {
				844302082, 3593853988, 613854522, 32918107, 994067874, 1122737309, 2637962447, 3252276693, 1445542137, 528268845, 963914956, 727970679, 1583690071, 3620726118, 1078242888, 14385480, 4125400, 42255, 12827074
			},
			.prefetch0 = 59693,
			.prefetch1 = 18348,
			.ram = lslb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				844302082, 3593853988, 613854522, 32918107, 994067874, 1122737152, 2637962447, 3252276693, 1445542137, 528268845, 963914956, 727970679, 1583690071, 3620726118, 1078242888, 14385480, 4125400, 42244, 12827076
			},
			.prefetch0 = 18348,
			.prefetch1 = 38354,
			.ram = lslb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_11,
		.transactions_len = 2,
		.lenght = 74,
	},
	{
		.name = "012 LSL.b 4, D5 e90d",
		.initial = {
			.regs = {
				1873946396, 1119895964, 271278474, 2689903315, 2425795225, 4004010431, 2950993551, 2162019427, 1507567696, 3974896715, 3553897984, 3053616867, 3831037518, 853382106, 1514434382, 5523016, 16612440, 40977, 1901820
			},
			.prefetch0 = 59661,
			.prefetch1 = 31518,
			.ram = lslb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1873946396, 1119895964, 271278474, 2689903315, 2425795225, 4004010480, 2950993551, 2162019427, 1507567696, 3974896715, 3553897984, 3053616867, 3831037518, 853382106, 1514434382, 5523016, 16612440, 40985, 1901822
			},
			.prefetch0 = 31518,
			.prefetch1 = 37035,
			.ram = lslb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_12,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "013 LSL.b 3, D1 e709",
		.initial = {
			.regs = {
				3439972528, 111285186, 3756570968, 3522020557, 2848644033, 1444683323, 3322257807, 4196194715, 4140932972, 3522420426, 4286257891, 2560159477, 170491601, 3181412497, 2400663081, 9381048, 4949798, 33029, 1033886
			},
			.prefetch0 = 59145,
			.prefetch1 = 18121,
			.ram = lslb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3439972528, 111285008, 3756570968, 3522020557, 2848644033, 1444683323, 3322257807, 4196194715, 4140932972, 3522420426, 4286257891, 2560159477, 170491601, 3181412497, 2400663081, 9381048, 4949798, 33024, 1033888
			},
			.prefetch0 = 18121,
			.prefetch1 = 30553,
			.ram = lslb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_13,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "014 LSL.b D5, D3 eb2b",
		.initial = {
			.regs = {
				3225532238, 3349781573, 3551795553, 2921392882, 4154622603, 3121663375, 3784206807, 1907550376, 2017937582, 3887972806, 1349375806, 2175695002, 2649704266, 360027432, 2415206470, 5910196, 603134, 33814, 6699300
			},
			.prefetch0 = 60203,
			.prefetch1 = 60008,
			.ram = lslb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3225532238, 3349781573, 3551795553, 2921392640, 4154622603, 3121663375, 3784206807, 1907550376, 2017937582, 3887972806, 1349375806, 2175695002, 2649704266, 360027432, 2415206470, 5910196, 603134, 33796, 6699302
			},
			.prefetch0 = 60008,
			.prefetch1 = 22520,
			.ram = lslb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_14,
		.transactions_len = 2,
		.lenght = 36,
	},
	{
		.name = "015 LSL.b 6, D5 ed0d",
		.initial = {
			.regs = {
				2066966810, 4193688187, 1867961173, 3176322916, 1204844208, 509853904, 2855634662, 3584673044, 3160971046, 3641333374, 1507848729, 1777131353, 421270842, 3459278143, 1143353393, 12311680, 15334994, 1294, 12248312
			},
			.prefetch0 = 60685,
			.prefetch1 = 31073,
			.ram = lslb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2066966810, 4193688187, 1867961173, 3176322916, 1204844208, 509853696, 2855634662, 3584673044, 3160971046, 3641333374, 1507848729, 1777131353, 421270842, 3459278143, 1143353393, 12311680, 15334994, 1284, 12248314
			},
			.prefetch0 = 31073,
			.prefetch1 = 25592,
			.ram = lslb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_15,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "016 LSL.b 3, D2 e70a",
		.initial = {
			.regs = {
				3157168921, 1549500765, 183767282, 2074854993, 1430313952, 4029256389, 2121504960, 2739198432, 64459149, 4028619972, 3717196745, 1320840597, 1518285672, 303611434, 2116613496, 1942970, 1236636, 29, 14966438
			},
			.prefetch0 = 59146,
			.prefetch1 = 54511,
			.ram = lslb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3157168921, 1549500765, 183767184, 2074854993, 1430313952, 4029256389, 2121504960, 2739198432, 64459149, 4028619972, 3717196745, 1320840597, 1518285672, 303611434, 2116613496, 1942970, 1236636, 25, 14966440
			},
			.prefetch0 = 54511,
			.prefetch1 = 45210,
			.ram = lslb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_16,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "017 LSL.b D6, D1 ed29",
		.initial = {
			.regs = {
				3821631972, 3686516946, 3084315400, 4026999510, 3041243274, 979824146, 276875621, 3330559950, 743499989, 85144256, 4145922353, 124789156, 1609437593, 4168350235, 469374159, 15500414, 15973820, 9487, 13959124
			},
			.prefetch0 = 60713,
			.prefetch1 = 643,
			.ram = lslb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3821631972, 3686516736, 3084315400, 4026999510, 3041243274, 979824146, 276875621, 3330559950, 743499989, 85144256, 4145922353, 124789156, 1609437593, 4168350235, 469374159, 15500414, 15973820, 9476, 13959126
			},
			.prefetch0 = 643,
			.prefetch1 = 56195,
			.ram = lslb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_17,
		.transactions_len = 2,
		.lenght = 80,
	},
	{
		.name = "018 LSL.b 6, D0 ed08",
		.initial = {
			.regs = {
				2504436450, 1086359775, 1064341146, 2600083994, 1118460819, 581694063, 1952893566, 4098396858, 4235449670, 3071443840, 4290983165, 4007068250, 3931028447, 1517172973, 48816898, 16422418, 11810964, 8452, 611510
			},
			.prefetch0 = 60680,
			.prefetch1 = 14069,
			.ram = lslb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2504436352, 1086359775, 1064341146, 2600083994, 1118460819, 581694063, 1952893566, 4098396858, 4235449670, 3071443840, 4290983165, 4007068250, 3931028447, 1517172973, 48816898, 16422418, 11810964, 8456, 611512
			},
			.prefetch0 = 14069,
			.prefetch1 = 28512,
			.ram = lslb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_18,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "019 LSL.b 1, D3 e30b",
		.initial = {
			.regs = {
				2769533305, 2450140918, 2024356311, 2287380408, 3864530568, 3956779903, 3537400269, 2494557820, 802162915, 1088839589, 105976083, 326373324, 3634857149, 3102441251, 3715033900, 3743612, 16762614, 33043, 215932
			},
			.prefetch0 = 58123,
			.prefetch1 = 55706,
			.ram = lslb_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2769533305, 2450140918, 2024356311, 2287380336, 3864530568, 3956779903, 3537400269, 2494557820, 802162915, 1088839589, 105976083, 326373324, 3634857149, 3102441251, 3715033900, 3743612, 16762614, 33041, 215934
			},
			.prefetch0 = 55706,
			.prefetch1 = 7935,
			.ram = lslb_final_ram_19,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 LSL.b D1, D6 e32e",
		.initial = {
			.regs = {
				2941811449, 3466409577, 752019394, 327197353, 527974153, 1666927532, 650338501, 2245277808, 1664097137, 1212561932, 2168311966, 815710557, 3135944307, 1357301176, 2767779861, 12820546, 6511934, 8202, 15770182
			},
			.prefetch0 = 58158,
			.prefetch1 = 20837,
			.ram = lslb_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2941811449, 3466409577, 752019394, 327197353, 527974153, 1666927532, 650338304, 2245277808, 1664097137, 1212561932, 2168311966, 815710557, 3135944307, 1357301176, 2767779861, 12820546, 6511934, 8196, 15770184
			},
			.prefetch0 = 20837,
			.prefetch1 = 37603,
			.ram = lslb_final_ram_20,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_20,
		.transactions_len = 2,
		.lenght = 88,
	},
	{
		.name = "021 LSL.b 7, D7 ef0f",
		.initial = {
			.regs = {
				3637584959, 521284559, 496679750, 2816575270, 3121130825, 3447527308, 716673930, 1440330606, 723772643, 2140589887, 754319818, 2282840522, 120488072, 2100154823, 2108193634, 5698812, 1520756, 33046, 12217394
			},
			.prefetch0 = 61199,
			.prefetch1 = 63853,
			.ram = lslb_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3637584959, 521284559, 496679750, 2816575270, 3121130825, 3447527308, 716673930, 1440330496, 723772643, 2140589887, 754319818, 2282840522, 120488072, 2100154823, 2108193634, 5698812, 1520756, 33045, 12217396
			},
			.prefetch0 = 63853,
			.prefetch1 = 23899,
			.ram = lslb_final_ram_21,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_21,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "022 LSL.b D1, D4 e32c",
		.initial = {
			.regs = {
				2468666524, 2656603898, 3348668475, 1802396005, 944303683, 1749938904, 3032681393, 856739367, 3519284249, 238320415, 413377248, 1174495980, 4123728398, 226273224, 3350183243, 12737154, 13823862, 34327, 11297240
			},
			.prefetch0 = 58156,
			.prefetch1 = 35466,
			.ram = lslb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2468666524, 2656603898, 3348668475, 1802396005, 944303616, 1749938904, 3032681393, 856739367, 3519284249, 238320415, 413377248, 1174495980, 4123728398, 226273224, 3350183243, 12737154, 13823862, 34308, 11297242
			},
			.prefetch0 = 35466,
			.prefetch1 = 27622,
			.ram = lslb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_22,
		.transactions_len = 2,
		.lenght = 122,
	},
	{
		.name = "023 LSL.b D0, D2 e12a",
		.initial = {
			.regs = {
				4285219323, 141249331, 1696551473, 2977326264, 1705027525, 1872811290, 1492650274, 1135725973, 1544437554, 1407188810, 4276873957, 3750567504, 1899199046, 2114108960, 2570382642, 3137752, 7493306, 287, 9306120
			},
			.prefetch0 = 57642,
			.prefetch1 = 45732,
			.ram = lslb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4285219323, 141249331, 1696551424, 2977326264, 1705027525, 1872811290, 1492650274, 1135725973, 1544437554, 1407188810, 4276873957, 3750567504, 1899199046, 2114108960, 2570382642, 3137752, 7493306, 260, 9306122
			},
			.prefetch0 = 45732,
			.prefetch1 = 4494,
			.ram = lslb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_23,
		.transactions_len = 2,
		.lenght = 124,
	},
	{
		.name = "024 LSL.b D6, D7 ed2f",
		.initial = {
			.regs = {
				1307233316, 3902653384, 3223604460, 3896534342, 1847892248, 3204345705, 2901508376, 3537579882, 3432761560, 1163234261, 962346009, 2551788396, 19809148, 1316887217, 3416342566, 1187080, 15613962, 34057, 1448222
			},
			.prefetch0 = 60719,
			.prefetch1 = 5493,
			.ram = lslb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1307233316, 3902653384, 3223604460, 3896534342, 1847892248, 3204345705, 2901508376, 3537579776, 3432761560, 1163234261, 962346009, 2551788396, 19809148, 1316887217, 3416342566, 1187080, 15613962, 34052, 1448224
			},
			.prefetch0 = 5493,
			.prefetch1 = 57907,
			.ram = lslb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_24,
		.transactions_len = 2,
		.lenght = 54,
	},
	{
		.name = "025 LSL.b 4, D0 e908",
		.initial = {
			.regs = {
				1286048989, 3679102330, 551945749, 592868384, 1704904738, 3757157054, 4010328902, 1079860344, 361298924, 1069619034, 2201526730, 843682651, 1330653237, 3156832686, 1041825746, 13459586, 5292306, 33806, 9516066
			},
			.prefetch0 = 59656,
			.prefetch1 = 57413,
			.ram = lslb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1286048976, 3679102330, 551945749, 592868384, 1704904738, 3757157054, 4010328902, 1079860344, 361298924, 1069619034, 2201526730, 843682651, 1330653237, 3156832686, 1041825746, 13459586, 5292306, 33817, 9516068
			},
			.prefetch0 = 57413,
			.prefetch1 = 9909,
			.ram = lslb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_25,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "026 LSL.b D1, D7 e32f",
		.initial = {
			.regs = {
				2144978288, 2772349645, 643672359, 790870508, 1350707805, 1729601053, 4196980841, 128464974, 2849463476, 849204326, 2147713632, 1914472510, 2227082424, 2540621966, 3360331289, 10128364, 11195240, 9500, 5111730
			},
			.prefetch0 = 58159,
			.prefetch1 = 5169,
			.ram = lslb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2144978288, 2772349645, 643672359, 790870508, 1350707805, 1729601053, 4196980841, 128464896, 2849463476, 849204326, 2147713632, 1914472510, 2227082424, 2540621966, 3360331289, 10128364, 11195240, 9476, 5111732
			},
			.prefetch0 = 5169,
			.prefetch1 = 40095,
			.ram = lslb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_26,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "027 LSL.b D0, D7 e12f",
		.initial = {
			.regs = {
				2719973785, 2130390547, 879887151, 3070105059, 2910453949, 3980112183, 2147070024, 611082627, 1967999616, 1993840009, 2985243033, 50392220, 3094634625, 1476605850, 1832832263, 3388044, 11703080, 41479, 1430518
			},
			.prefetch0 = 57647,
			.prefetch1 = 37036,
			.ram = lslb_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2719973785, 2130390547, 879887151, 3070105059, 2910453949, 3980112183, 2147070024, 611082496, 1967999616, 1993840009, 2985243033, 50392220, 3094634625, 1476605850, 1832832263, 3388044, 11703080, 41476, 1430520
			},
			.prefetch0 = 37036,
			.prefetch1 = 48625,
			.ram = lslb_final_ram_27,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_27,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "028 LSL.b D1, D1 e329",
		.initial = {
			.regs = {
				1572590083, 3547398214, 965620197, 2946481018, 3257470297, 1713966984, 191728347, 2414834107, 3225796420, 2789998672, 3402020810, 3999449305, 3081097450, 964091765, 1937353741, 7963838, 6593728, 1296, 3508262
			},
			.prefetch0 = 58153,
			.prefetch1 = 22400,
			.ram = lslb_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1572590083, 3547398272, 965620197, 2946481018, 3257470297, 1713966984, 191728347, 2414834107, 3225796420, 2789998672, 3402020810, 3999449305, 3081097450, 964091765, 1937353741, 7963838, 6593728, 1305, 3508264
			},
			.prefetch0 = 22400,
			.prefetch1 = 49859,
			.ram = lslb_final_ram_28,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_28,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "029 LSL.b D2, D1 e529",
		.initial = {
			.regs = {
				203459691, 4016921388, 1428913226, 1996534654, 3784763, 3955751625, 4118762320, 3985303395, 2641859514, 1291543857, 2958960465, 1377619584, 3756333841, 2437460795, 570419148, 10024128, 1140220, 9984, 907654
			},
			.prefetch0 = 58665,
			.prefetch1 = 32235,
			.ram = lslb_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				203459691, 4016921344, 1428913226, 1996534654, 3784763, 3955751625, 4118762320, 3985303395, 2641859514, 1291543857, 2958960465, 1377619584, 3756333841, 2437460795, 570419148, 10024128, 1140220, 9988, 907656
			},
			.prefetch0 = 32235,
			.prefetch1 = 58517,
			.ram = lslb_final_ram_29,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_29,
		.transactions_len = 2,
		.lenght = 26,
	},
	{
		.name = "030 LSL.b D3, D2 e72a",
		.initial = {
			.regs = {
				2661356610, 2041562259, 709297294, 1380617968, 665257157, 2548125816, 3733993613, 3780597963, 259786294, 3685623405, 4288886343, 2397224953, 3385676413, 908929287, 3519306916, 12490708, 7395294, 1038, 14583812
			},
			.prefetch0 = 59178,
			.prefetch1 = 1606,
			.ram = lslb_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2661356610, 2041562259, 709297152, 1380617968, 665257157, 2548125816, 3733993613, 3780597963, 259786294, 3685623405, 4288886343, 2397224953, 3385676413, 908929287, 3519306916, 12490708, 7395294, 1028, 14583814
			},
			.prefetch0 = 1606,
			.prefetch1 = 46457,
			.ram = lslb_final_ram_30,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_30,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "031 LSL.b 5, D3 eb0b",
		.initial = {
			.regs = {
				911031423, 422052631, 4164493545, 396412679, 4064603282, 278093732, 393777636, 4267558238, 861387520, 2637990944, 1978702314, 3334699651, 1598205093, 4104861866, 1071251144, 6273798, 14501136, 40985, 256992
			},
			.prefetch0 = 60171,
			.prefetch1 = 6193,
			.ram = lslb_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				911031423, 422052631, 4164493545, 396412896, 4064603282, 278093732, 393777636, 4267558238, 861387520, 2637990944, 1978702314, 3334699651, 1598205093, 4104861866, 1071251144, 6273798, 14501136, 40968, 256994
			},
			.prefetch0 = 6193,
			.prefetch1 = 42558,
			.ram = lslb_final_ram_31,
			.ram_len = 6,
		},
		.transactions = lslb_transactions_31,
		.transactions_len = 2,
		.lenght = 16,
	},
};

#endif /* RBT_LSLB_H */