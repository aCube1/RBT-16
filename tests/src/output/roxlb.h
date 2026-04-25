#ifndef RBT_ROXLB_H
#define RBT_ROXLB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte roxlb_initial_ram_0[] = {
		{ .addr = 0xcb05b6, .byte = 0xe3 },
		{ .addr = 0xcb05b7, .byte = 0x10 },
		{ .addr = 0xcb05b8, .byte = 0x51 },
		{ .addr = 0xcb05b9, .byte = 0x53 },
		{ .addr = 0xcb05ba, .byte = 0x31 },
		{ .addr = 0xcb05bb, .byte = 0xc3 }
};

static const SST_RamByte roxlb_final_ram_0[] = {
		{ .addr = 0xcb05b6, .byte = 0xe3 },
		{ .addr = 0xcb05b7, .byte = 0x10 },
		{ .addr = 0xcb05b8, .byte = 0x51 },
		{ .addr = 0xcb05b9, .byte = 0x53 },
		{ .addr = 0xcb05ba, .byte = 0x31 },
		{ .addr = 0xcb05bb, .byte = 0xc3 }
};

static const SST_Transaction roxlb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13305274, .data = 12739, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte roxlb_initial_ram_1[] = {
		{ .addr = 0x857308, .byte = 0xe1 },
		{ .addr = 0x857309, .byte = 0x30 },
		{ .addr = 0x85730a, .byte = 0x59 },
		{ .addr = 0x85730b, .byte = 0x11 },
		{ .addr = 0x85730c, .byte = 0x75 },
		{ .addr = 0x85730d, .byte = 0x07 }
};

static const SST_RamByte roxlb_final_ram_1[] = {
		{ .addr = 0x857308, .byte = 0xe1 },
		{ .addr = 0x857309, .byte = 0x30 },
		{ .addr = 0x85730a, .byte = 0x59 },
		{ .addr = 0x85730b, .byte = 0x11 },
		{ .addr = 0x85730c, .byte = 0x75 },
		{ .addr = 0x85730d, .byte = 0x07 }
};

static const SST_Transaction roxlb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8745740, .data = 29959, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 64 },
};

static const SST_RamByte roxlb_initial_ram_2[] = {
		{ .addr = 0x1a6f7e, .byte = 0xe3 },
		{ .addr = 0x1a6f7f, .byte = 0x16 },
		{ .addr = 0x1a6f80, .byte = 0xc8 },
		{ .addr = 0x1a6f81, .byte = 0x19 },
		{ .addr = 0x1a6f82, .byte = 0xc9 },
		{ .addr = 0x1a6f83, .byte = 0x74 }
};

static const SST_RamByte roxlb_final_ram_2[] = {
		{ .addr = 0x1a6f7e, .byte = 0xe3 },
		{ .addr = 0x1a6f7f, .byte = 0x16 },
		{ .addr = 0x1a6f80, .byte = 0xc8 },
		{ .addr = 0x1a6f81, .byte = 0x19 },
		{ .addr = 0x1a6f82, .byte = 0xc9 },
		{ .addr = 0x1a6f83, .byte = 0x74 }
};

static const SST_Transaction roxlb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1732482, .data = 51572, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte roxlb_initial_ram_3[] = {
		{ .addr = 0x2bb58e, .byte = 0xe1 },
		{ .addr = 0x2bb58f, .byte = 0x31 },
		{ .addr = 0x2bb590, .byte = 0x89 },
		{ .addr = 0x2bb591, .byte = 0x90 },
		{ .addr = 0x2bb592, .byte = 0x09 },
		{ .addr = 0x2bb593, .byte = 0x52 }
};

static const SST_RamByte roxlb_final_ram_3[] = {
		{ .addr = 0x2bb58e, .byte = 0xe1 },
		{ .addr = 0x2bb58f, .byte = 0x31 },
		{ .addr = 0x2bb590, .byte = 0x89 },
		{ .addr = 0x2bb591, .byte = 0x90 },
		{ .addr = 0x2bb592, .byte = 0x09 },
		{ .addr = 0x2bb593, .byte = 0x52 }
};

static const SST_Transaction roxlb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2864530, .data = 2386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 68 },
};

static const SST_RamByte roxlb_initial_ram_4[] = {
		{ .addr = 0x8813f4, .byte = 0xe3 },
		{ .addr = 0x8813f5, .byte = 0x16 },
		{ .addr = 0x8813f6, .byte = 0x76 },
		{ .addr = 0x8813f7, .byte = 0x81 },
		{ .addr = 0x8813f8, .byte = 0xae },
		{ .addr = 0x8813f9, .byte = 0x01 }
};

static const SST_RamByte roxlb_final_ram_4[] = {
		{ .addr = 0x8813f4, .byte = 0xe3 },
		{ .addr = 0x8813f5, .byte = 0x16 },
		{ .addr = 0x8813f6, .byte = 0x76 },
		{ .addr = 0x8813f7, .byte = 0x81 },
		{ .addr = 0x8813f8, .byte = 0xae },
		{ .addr = 0x8813f9, .byte = 0x01 }
};

static const SST_Transaction roxlb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8918008, .data = 44545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte roxlb_initial_ram_5[] = {
		{ .addr = 0xf38e6c, .byte = 0xe7 },
		{ .addr = 0xf38e6d, .byte = 0x33 },
		{ .addr = 0xf38e6e, .byte = 0xd2 },
		{ .addr = 0xf38e6f, .byte = 0xde },
		{ .addr = 0xf38e70, .byte = 0x9a },
		{ .addr = 0xf38e71, .byte = 0x59 }
};

static const SST_RamByte roxlb_final_ram_5[] = {
		{ .addr = 0xf38e6c, .byte = 0xe7 },
		{ .addr = 0xf38e6d, .byte = 0x33 },
		{ .addr = 0xf38e6e, .byte = 0xd2 },
		{ .addr = 0xf38e6f, .byte = 0xde },
		{ .addr = 0xf38e70, .byte = 0x9a },
		{ .addr = 0xf38e71, .byte = 0x59 }
};

static const SST_Transaction roxlb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15961712, .data = 39513, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 72 },
};

static const SST_RamByte roxlb_initial_ram_6[] = {
		{ .addr = 0xf0d04c, .byte = 0xe7 },
		{ .addr = 0xf0d04d, .byte = 0x36 },
		{ .addr = 0xf0d04e, .byte = 0xb4 },
		{ .addr = 0xf0d04f, .byte = 0x1d },
		{ .addr = 0xf0d050, .byte = 0x10 },
		{ .addr = 0xf0d051, .byte = 0x22 }
};

static const SST_RamByte roxlb_final_ram_6[] = {
		{ .addr = 0xf0d04c, .byte = 0xe7 },
		{ .addr = 0xf0d04d, .byte = 0x36 },
		{ .addr = 0xf0d04e, .byte = 0xb4 },
		{ .addr = 0xf0d04f, .byte = 0x1d },
		{ .addr = 0xf0d050, .byte = 0x10 },
		{ .addr = 0xf0d051, .byte = 0x22 }
};

static const SST_Transaction roxlb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15781968, .data = 4130, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxlb_initial_ram_7[] = {
		{ .addr = 0xf9222c, .byte = 0xeb },
		{ .addr = 0xf9222d, .byte = 0x14 },
		{ .addr = 0xf9222e, .byte = 0x98 },
		{ .addr = 0xf9222f, .byte = 0xb1 },
		{ .addr = 0xf92230, .byte = 0x28 },
		{ .addr = 0xf92231, .byte = 0x26 }
};

static const SST_RamByte roxlb_final_ram_7[] = {
		{ .addr = 0xf9222c, .byte = 0xeb },
		{ .addr = 0xf9222d, .byte = 0x14 },
		{ .addr = 0xf9222e, .byte = 0x98 },
		{ .addr = 0xf9222f, .byte = 0xb1 },
		{ .addr = 0xf92230, .byte = 0x28 },
		{ .addr = 0xf92231, .byte = 0x26 }
};

static const SST_Transaction roxlb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16327216, .data = 10278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxlb_initial_ram_8[] = {
		{ .addr = 0xeae2b4, .byte = 0xe1 },
		{ .addr = 0xeae2b5, .byte = 0x36 },
		{ .addr = 0xeae2b6, .byte = 0x34 },
		{ .addr = 0xeae2b7, .byte = 0xd1 },
		{ .addr = 0xeae2b8, .byte = 0x00 },
		{ .addr = 0xeae2b9, .byte = 0xce }
};

static const SST_RamByte roxlb_final_ram_8[] = {
		{ .addr = 0xeae2b4, .byte = 0xe1 },
		{ .addr = 0xeae2b5, .byte = 0x36 },
		{ .addr = 0xeae2b6, .byte = 0x34 },
		{ .addr = 0xeae2b7, .byte = 0xd1 },
		{ .addr = 0xeae2b8, .byte = 0x00 },
		{ .addr = 0xeae2b9, .byte = 0xce }
};

static const SST_Transaction roxlb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15393464, .data = 206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte roxlb_initial_ram_9[] = {
		{ .addr = 0x67cdbe, .byte = 0xe7 },
		{ .addr = 0x67cdbf, .byte = 0x35 },
		{ .addr = 0x67cdc0, .byte = 0x35 },
		{ .addr = 0x67cdc1, .byte = 0x5e },
		{ .addr = 0x67cdc2, .byte = 0xc4 },
		{ .addr = 0x67cdc3, .byte = 0x80 }
};

static const SST_RamByte roxlb_final_ram_9[] = {
		{ .addr = 0x67cdbe, .byte = 0xe7 },
		{ .addr = 0x67cdbf, .byte = 0x35 },
		{ .addr = 0x67cdc0, .byte = 0x35 },
		{ .addr = 0x67cdc1, .byte = 0x5e },
		{ .addr = 0x67cdc2, .byte = 0xc4 },
		{ .addr = 0x67cdc3, .byte = 0x80 }
};

static const SST_Transaction roxlb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6802882, .data = 50304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte roxlb_initial_ram_10[] = {
		{ .addr = 0x5b44ae, .byte = 0xef },
		{ .addr = 0x5b44af, .byte = 0x17 },
		{ .addr = 0x5b44b0, .byte = 0x73 },
		{ .addr = 0x5b44b1, .byte = 0xc2 },
		{ .addr = 0x5b44b2, .byte = 0x1c },
		{ .addr = 0x5b44b3, .byte = 0xd0 }
};

static const SST_RamByte roxlb_final_ram_10[] = {
		{ .addr = 0x5b44ae, .byte = 0xef },
		{ .addr = 0x5b44af, .byte = 0x17 },
		{ .addr = 0x5b44b0, .byte = 0x73 },
		{ .addr = 0x5b44b1, .byte = 0xc2 },
		{ .addr = 0x5b44b2, .byte = 0x1c },
		{ .addr = 0x5b44b3, .byte = 0xd0 }
};

static const SST_Transaction roxlb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5981362, .data = 7376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxlb_initial_ram_11[] = {
		{ .addr = 0x05dba8, .byte = 0xe5 },
		{ .addr = 0x05dba9, .byte = 0x10 },
		{ .addr = 0x05dbaa, .byte = 0x25 },
		{ .addr = 0x05dbab, .byte = 0x66 },
		{ .addr = 0x05dbac, .byte = 0xcf },
		{ .addr = 0x05dbad, .byte = 0x55 }
};

static const SST_RamByte roxlb_final_ram_11[] = {
		{ .addr = 0x05dba8, .byte = 0xe5 },
		{ .addr = 0x05dba9, .byte = 0x10 },
		{ .addr = 0x05dbaa, .byte = 0x25 },
		{ .addr = 0x05dbab, .byte = 0x66 },
		{ .addr = 0x05dbac, .byte = 0xcf },
		{ .addr = 0x05dbad, .byte = 0x55 }
};

static const SST_Transaction roxlb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 383916, .data = 53077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte roxlb_initial_ram_12[] = {
		{ .addr = 0x050478, .byte = 0xed },
		{ .addr = 0x050479, .byte = 0x37 },
		{ .addr = 0x05047a, .byte = 0x68 },
		{ .addr = 0x05047b, .byte = 0x6e },
		{ .addr = 0x05047c, .byte = 0xda },
		{ .addr = 0x05047d, .byte = 0xdf }
};

static const SST_RamByte roxlb_final_ram_12[] = {
		{ .addr = 0x050478, .byte = 0xed },
		{ .addr = 0x050479, .byte = 0x37 },
		{ .addr = 0x05047a, .byte = 0x68 },
		{ .addr = 0x05047b, .byte = 0x6e },
		{ .addr = 0x05047c, .byte = 0xda },
		{ .addr = 0x05047d, .byte = 0xdf }
};

static const SST_Transaction roxlb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 328828, .data = 56031, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 44 },
};

static const SST_RamByte roxlb_initial_ram_13[] = {
		{ .addr = 0x5a4b48, .byte = 0xe7 },
		{ .addr = 0x5a4b49, .byte = 0x35 },
		{ .addr = 0x5a4b4a, .byte = 0xf1 },
		{ .addr = 0x5a4b4b, .byte = 0x73 },
		{ .addr = 0x5a4b4c, .byte = 0x1c },
		{ .addr = 0x5a4b4d, .byte = 0xde }
};

static const SST_RamByte roxlb_final_ram_13[] = {
		{ .addr = 0x5a4b48, .byte = 0xe7 },
		{ .addr = 0x5a4b49, .byte = 0x35 },
		{ .addr = 0x5a4b4a, .byte = 0xf1 },
		{ .addr = 0x5a4b4b, .byte = 0x73 },
		{ .addr = 0x5a4b4c, .byte = 0x1c },
		{ .addr = 0x5a4b4d, .byte = 0xde }
};

static const SST_Transaction roxlb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5917516, .data = 7390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte roxlb_initial_ram_14[] = {
		{ .addr = 0x61d840, .byte = 0xef },
		{ .addr = 0x61d841, .byte = 0x11 },
		{ .addr = 0x61d842, .byte = 0xaf },
		{ .addr = 0x61d843, .byte = 0x42 },
		{ .addr = 0x61d844, .byte = 0x93 },
		{ .addr = 0x61d845, .byte = 0xb0 }
};

static const SST_RamByte roxlb_final_ram_14[] = {
		{ .addr = 0x61d840, .byte = 0xef },
		{ .addr = 0x61d841, .byte = 0x11 },
		{ .addr = 0x61d842, .byte = 0xaf },
		{ .addr = 0x61d843, .byte = 0x42 },
		{ .addr = 0x61d844, .byte = 0x93 },
		{ .addr = 0x61d845, .byte = 0xb0 }
};

static const SST_Transaction roxlb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6412356, .data = 37808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxlb_initial_ram_15[] = {
		{ .addr = 0x2515be, .byte = 0xe5 },
		{ .addr = 0x2515bf, .byte = 0x33 },
		{ .addr = 0x2515c0, .byte = 0x74 },
		{ .addr = 0x2515c1, .byte = 0xa6 },
		{ .addr = 0x2515c2, .byte = 0x52 },
		{ .addr = 0x2515c3, .byte = 0x57 }
};

static const SST_RamByte roxlb_final_ram_15[] = {
		{ .addr = 0x2515be, .byte = 0xe5 },
		{ .addr = 0x2515bf, .byte = 0x33 },
		{ .addr = 0x2515c0, .byte = 0x74 },
		{ .addr = 0x2515c1, .byte = 0xa6 },
		{ .addr = 0x2515c2, .byte = 0x52 },
		{ .addr = 0x2515c3, .byte = 0x57 }
};

static const SST_Transaction roxlb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2430402, .data = 21079, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte roxlb_initial_ram_16[] = {
		{ .addr = 0x801df8, .byte = 0xef },
		{ .addr = 0x801df9, .byte = 0x30 },
		{ .addr = 0x801dfa, .byte = 0xa3 },
		{ .addr = 0x801dfb, .byte = 0xa0 },
		{ .addr = 0x801dfc, .byte = 0xd8 },
		{ .addr = 0x801dfd, .byte = 0x66 }
};

static const SST_RamByte roxlb_final_ram_16[] = {
		{ .addr = 0x801df8, .byte = 0xef },
		{ .addr = 0x801df9, .byte = 0x30 },
		{ .addr = 0x801dfa, .byte = 0xa3 },
		{ .addr = 0x801dfb, .byte = 0xa0 },
		{ .addr = 0x801dfc, .byte = 0xd8 },
		{ .addr = 0x801dfd, .byte = 0x66 }
};

static const SST_Transaction roxlb_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8396284, .data = 55398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 68 },
};

static const SST_RamByte roxlb_initial_ram_17[] = {
		{ .addr = 0x95cd84, .byte = 0xe3 },
		{ .addr = 0x95cd85, .byte = 0x33 },
		{ .addr = 0x95cd86, .byte = 0x64 },
		{ .addr = 0x95cd87, .byte = 0x50 },
		{ .addr = 0x95cd88, .byte = 0xb3 },
		{ .addr = 0x95cd89, .byte = 0x3e }
};

static const SST_RamByte roxlb_final_ram_17[] = {
		{ .addr = 0x95cd84, .byte = 0xe3 },
		{ .addr = 0x95cd85, .byte = 0x33 },
		{ .addr = 0x95cd86, .byte = 0x64 },
		{ .addr = 0x95cd87, .byte = 0x50 },
		{ .addr = 0x95cd88, .byte = 0xb3 },
		{ .addr = 0x95cd89, .byte = 0x3e }
};

static const SST_Transaction roxlb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9817480, .data = 45886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

static const SST_RamByte roxlb_initial_ram_18[] = {
		{ .addr = 0xda08b0, .byte = 0xed },
		{ .addr = 0xda08b1, .byte = 0x12 },
		{ .addr = 0xda08b2, .byte = 0x6c },
		{ .addr = 0xda08b3, .byte = 0xb9 },
		{ .addr = 0xda08b4, .byte = 0xc4 },
		{ .addr = 0xda08b5, .byte = 0x96 }
};

static const SST_RamByte roxlb_final_ram_18[] = {
		{ .addr = 0xda08b0, .byte = 0xed },
		{ .addr = 0xda08b1, .byte = 0x12 },
		{ .addr = 0xda08b2, .byte = 0x6c },
		{ .addr = 0xda08b3, .byte = 0xb9 },
		{ .addr = 0xda08b4, .byte = 0xc4 },
		{ .addr = 0xda08b5, .byte = 0x96 }
};

static const SST_Transaction roxlb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14289076, .data = 50326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxlb_initial_ram_19[] = {
		{ .addr = 0xa066f6, .byte = 0xe7 },
		{ .addr = 0xa066f7, .byte = 0x11 },
		{ .addr = 0xa066f8, .byte = 0x0f },
		{ .addr = 0xa066f9, .byte = 0xb4 },
		{ .addr = 0xa066fa, .byte = 0x5d },
		{ .addr = 0xa066fb, .byte = 0x0d }
};

static const SST_RamByte roxlb_final_ram_19[] = {
		{ .addr = 0xa066f6, .byte = 0xe7 },
		{ .addr = 0xa066f7, .byte = 0x11 },
		{ .addr = 0xa066f8, .byte = 0x0f },
		{ .addr = 0xa066f9, .byte = 0xb4 },
		{ .addr = 0xa066fa, .byte = 0x5d },
		{ .addr = 0xa066fb, .byte = 0x0d }
};

static const SST_Transaction roxlb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10512122, .data = 23821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxlb_initial_ram_20[] = {
		{ .addr = 0x0fe494, .byte = 0xeb },
		{ .addr = 0x0fe495, .byte = 0x15 },
		{ .addr = 0x0fe496, .byte = 0x9e },
		{ .addr = 0x0fe497, .byte = 0x67 },
		{ .addr = 0x0fe498, .byte = 0xd7 },
		{ .addr = 0x0fe499, .byte = 0xbe }
};

static const SST_RamByte roxlb_final_ram_20[] = {
		{ .addr = 0x0fe494, .byte = 0xeb },
		{ .addr = 0x0fe495, .byte = 0x15 },
		{ .addr = 0x0fe496, .byte = 0x9e },
		{ .addr = 0x0fe497, .byte = 0x67 },
		{ .addr = 0x0fe498, .byte = 0xd7 },
		{ .addr = 0x0fe499, .byte = 0xbe }
};

static const SST_Transaction roxlb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1041560, .data = 55230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxlb_initial_ram_21[] = {
		{ .addr = 0x38fc4c, .byte = 0xef },
		{ .addr = 0x38fc4d, .byte = 0x16 },
		{ .addr = 0x38fc4e, .byte = 0xe4 },
		{ .addr = 0x38fc4f, .byte = 0xe1 },
		{ .addr = 0x38fc50, .byte = 0x47 },
		{ .addr = 0x38fc51, .byte = 0xf2 }
};

static const SST_RamByte roxlb_final_ram_21[] = {
		{ .addr = 0x38fc4c, .byte = 0xef },
		{ .addr = 0x38fc4d, .byte = 0x16 },
		{ .addr = 0x38fc4e, .byte = 0xe4 },
		{ .addr = 0x38fc4f, .byte = 0xe1 },
		{ .addr = 0x38fc50, .byte = 0x47 },
		{ .addr = 0x38fc51, .byte = 0xf2 }
};

static const SST_Transaction roxlb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3734608, .data = 18418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte roxlb_initial_ram_22[] = {
		{ .addr = 0x362c94, .byte = 0xeb },
		{ .addr = 0x362c95, .byte = 0x13 },
		{ .addr = 0x362c96, .byte = 0x2b },
		{ .addr = 0x362c97, .byte = 0x64 },
		{ .addr = 0x362c98, .byte = 0x5d },
		{ .addr = 0x362c99, .byte = 0x9f }
};

static const SST_RamByte roxlb_final_ram_22[] = {
		{ .addr = 0x362c94, .byte = 0xeb },
		{ .addr = 0x362c95, .byte = 0x13 },
		{ .addr = 0x362c96, .byte = 0x2b },
		{ .addr = 0x362c97, .byte = 0x64 },
		{ .addr = 0x362c98, .byte = 0x5d },
		{ .addr = 0x362c99, .byte = 0x9f }
};

static const SST_Transaction roxlb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3550360, .data = 23967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxlb_initial_ram_23[] = {
		{ .addr = 0x19dd96, .byte = 0xeb },
		{ .addr = 0x19dd97, .byte = 0x17 },
		{ .addr = 0x19dd98, .byte = 0xed },
		{ .addr = 0x19dd99, .byte = 0x55 },
		{ .addr = 0x19dd9a, .byte = 0x78 },
		{ .addr = 0x19dd9b, .byte = 0x79 }
};

static const SST_RamByte roxlb_final_ram_23[] = {
		{ .addr = 0x19dd96, .byte = 0xeb },
		{ .addr = 0x19dd97, .byte = 0x17 },
		{ .addr = 0x19dd98, .byte = 0xed },
		{ .addr = 0x19dd99, .byte = 0x55 },
		{ .addr = 0x19dd9a, .byte = 0x78 },
		{ .addr = 0x19dd9b, .byte = 0x79 }
};

static const SST_Transaction roxlb_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1695130, .data = 30841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxlb_initial_ram_24[] = {
		{ .addr = 0xd251ee, .byte = 0xe1 },
		{ .addr = 0xd251ef, .byte = 0x13 },
		{ .addr = 0xd251f0, .byte = 0x1a },
		{ .addr = 0xd251f1, .byte = 0x7d },
		{ .addr = 0xd251f2, .byte = 0x21 },
		{ .addr = 0xd251f3, .byte = 0xc9 }
};

static const SST_RamByte roxlb_final_ram_24[] = {
		{ .addr = 0xd251ee, .byte = 0xe1 },
		{ .addr = 0xd251ef, .byte = 0x13 },
		{ .addr = 0xd251f0, .byte = 0x1a },
		{ .addr = 0xd251f1, .byte = 0x7d },
		{ .addr = 0xd251f2, .byte = 0x21 },
		{ .addr = 0xd251f3, .byte = 0xc9 }
};

static const SST_Transaction roxlb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13783538, .data = 8649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte roxlb_initial_ram_25[] = {
		{ .addr = 0xc9d1a0, .byte = 0xeb },
		{ .addr = 0xc9d1a1, .byte = 0x11 },
		{ .addr = 0xc9d1a2, .byte = 0x53 },
		{ .addr = 0xc9d1a3, .byte = 0xc7 },
		{ .addr = 0xc9d1a4, .byte = 0xa8 },
		{ .addr = 0xc9d1a5, .byte = 0x8c }
};

static const SST_RamByte roxlb_final_ram_25[] = {
		{ .addr = 0xc9d1a0, .byte = 0xeb },
		{ .addr = 0xc9d1a1, .byte = 0x11 },
		{ .addr = 0xc9d1a2, .byte = 0x53 },
		{ .addr = 0xc9d1a3, .byte = 0xc7 },
		{ .addr = 0xc9d1a4, .byte = 0xa8 },
		{ .addr = 0xc9d1a5, .byte = 0x8c }
};

static const SST_Transaction roxlb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13226404, .data = 43148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxlb_initial_ram_26[] = {
		{ .addr = 0x9300f6, .byte = 0xe7 },
		{ .addr = 0x9300f7, .byte = 0x14 },
		{ .addr = 0x9300f8, .byte = 0x6e },
		{ .addr = 0x9300f9, .byte = 0x6b },
		{ .addr = 0x9300fa, .byte = 0x5a },
		{ .addr = 0x9300fb, .byte = 0x2c }
};

static const SST_RamByte roxlb_final_ram_26[] = {
		{ .addr = 0x9300f6, .byte = 0xe7 },
		{ .addr = 0x9300f7, .byte = 0x14 },
		{ .addr = 0x9300f8, .byte = 0x6e },
		{ .addr = 0x9300f9, .byte = 0x6b },
		{ .addr = 0x9300fa, .byte = 0x5a },
		{ .addr = 0x9300fb, .byte = 0x2c }
};

static const SST_Transaction roxlb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9634042, .data = 23084, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxlb_initial_ram_27[] = {
		{ .addr = 0x2ba3a2, .byte = 0xe7 },
		{ .addr = 0x2ba3a3, .byte = 0x13 },
		{ .addr = 0x2ba3a4, .byte = 0x7f },
		{ .addr = 0x2ba3a5, .byte = 0xbd },
		{ .addr = 0x2ba3a6, .byte = 0x0d },
		{ .addr = 0x2ba3a7, .byte = 0x6d }
};

static const SST_RamByte roxlb_final_ram_27[] = {
		{ .addr = 0x2ba3a2, .byte = 0xe7 },
		{ .addr = 0x2ba3a3, .byte = 0x13 },
		{ .addr = 0x2ba3a4, .byte = 0x7f },
		{ .addr = 0x2ba3a5, .byte = 0xbd },
		{ .addr = 0x2ba3a6, .byte = 0x0d },
		{ .addr = 0x2ba3a7, .byte = 0x6d }
};

static const SST_Transaction roxlb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2859942, .data = 3437, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte roxlb_initial_ram_28[] = {
		{ .addr = 0x852ddc, .byte = 0xeb },
		{ .addr = 0x852ddd, .byte = 0x10 },
		{ .addr = 0x852dde, .byte = 0xac },
		{ .addr = 0x852ddf, .byte = 0x03 },
		{ .addr = 0x852de0, .byte = 0x97 },
		{ .addr = 0x852de1, .byte = 0x8d }
};

static const SST_RamByte roxlb_final_ram_28[] = {
		{ .addr = 0x852ddc, .byte = 0xeb },
		{ .addr = 0x852ddd, .byte = 0x10 },
		{ .addr = 0x852dde, .byte = 0xac },
		{ .addr = 0x852ddf, .byte = 0x03 },
		{ .addr = 0x852de0, .byte = 0x97 },
		{ .addr = 0x852de1, .byte = 0x8d }
};

static const SST_Transaction roxlb_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8728032, .data = 38797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte roxlb_initial_ram_29[] = {
		{ .addr = 0xb60a44, .byte = 0xed },
		{ .addr = 0xb60a45, .byte = 0x17 },
		{ .addr = 0xb60a46, .byte = 0x84 },
		{ .addr = 0xb60a47, .byte = 0x4d },
		{ .addr = 0xb60a48, .byte = 0x91 },
		{ .addr = 0xb60a49, .byte = 0x86 }
};

static const SST_RamByte roxlb_final_ram_29[] = {
		{ .addr = 0xb60a44, .byte = 0xed },
		{ .addr = 0xb60a45, .byte = 0x17 },
		{ .addr = 0xb60a46, .byte = 0x84 },
		{ .addr = 0xb60a47, .byte = 0x4d },
		{ .addr = 0xb60a48, .byte = 0x91 },
		{ .addr = 0xb60a49, .byte = 0x86 }
};

static const SST_Transaction roxlb_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11930184, .data = 37254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte roxlb_initial_ram_30[] = {
		{ .addr = 0x2ca122, .byte = 0xe9 },
		{ .addr = 0x2ca123, .byte = 0x12 },
		{ .addr = 0x2ca124, .byte = 0xf8 },
		{ .addr = 0x2ca125, .byte = 0xcf },
		{ .addr = 0x2ca126, .byte = 0x09 },
		{ .addr = 0x2ca127, .byte = 0xde }
};

static const SST_RamByte roxlb_final_ram_30[] = {
		{ .addr = 0x2ca122, .byte = 0xe9 },
		{ .addr = 0x2ca123, .byte = 0x12 },
		{ .addr = 0x2ca124, .byte = 0xf8 },
		{ .addr = 0x2ca125, .byte = 0xcf },
		{ .addr = 0x2ca126, .byte = 0x09 },
		{ .addr = 0x2ca127, .byte = 0xde }
};

static const SST_Transaction roxlb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2924838, .data = 2526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte roxlb_initial_ram_31[] = {
		{ .addr = 0xd80d44, .byte = 0xed },
		{ .addr = 0xd80d45, .byte = 0x16 },
		{ .addr = 0xd80d46, .byte = 0x74 },
		{ .addr = 0xd80d47, .byte = 0x8e },
		{ .addr = 0xd80d48, .byte = 0xf7 },
		{ .addr = 0xd80d49, .byte = 0xd9 }
};

static const SST_RamByte roxlb_final_ram_31[] = {
		{ .addr = 0xd80d44, .byte = 0xed },
		{ .addr = 0xd80d45, .byte = 0x16 },
		{ .addr = 0xd80d46, .byte = 0x74 },
		{ .addr = 0xd80d47, .byte = 0x8e },
		{ .addr = 0xd80d48, .byte = 0xf7 },
		{ .addr = 0xd80d49, .byte = 0xd9 }
};

static const SST_Transaction roxlb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14159176, .data = 63449, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_TestCase roxlb[] = {
	{
		.name = "000 ROXL.b 1, D0 e310",
		.initial = {
			.regs = {
				3924855748, 194293367, 1650562615, 2093518686, 1819219859, 654038519, 115088476, 3329632326, 1771164836, 2447407622, 3787725742, 1026487977, 4013075012, 1506547656, 3160114949, 7631224, 4506738, 8201, 13305274
			},
			.prefetch0 = 58128,
			.prefetch1 = 20819,
			.ram = roxlb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3924855688, 194293367, 1650562615, 2093518686, 1819219859, 654038519, 115088476, 3329632326, 1771164836, 2447407622, 3787725742, 1026487977, 4013075012, 1506547656, 3160114949, 7631224, 4506738, 8217, 13305276
			},
			.prefetch0 = 20819,
			.prefetch1 = 12739,
			.ram = roxlb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_0,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "001 ROXL.b D0, D0 e130",
		.initial = {
			.regs = {
				3798403999, 1459052370, 941593795, 920147724, 2792039824, 2921416633, 707991738, 2225204240, 1189289816, 4045100993, 4232848767, 471078735, 3688028772, 720192483, 3379185612, 11863176, 11913176, 541, 8745740
			},
			.prefetch0 = 57648,
			.prefetch1 = 22801,
			.ram = roxlb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3798404092, 1459052370, 941593795, 920147724, 2792039824, 2921416633, 707991738, 2225204240, 1189289816, 4045100993, 4232848767, 471078735, 3688028772, 720192483, 3379185612, 11863176, 11913176, 537, 8745742
			},
			.prefetch0 = 22801,
			.prefetch1 = 29959,
			.ram = roxlb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_1,
		.transactions_len = 2,
		.lenght = 68,
	},
	{
		.name = "002 ROXL.b 1, D6 e316",
		.initial = {
			.regs = {
				4164578602, 1685050863, 2143625437, 1554589348, 2897848802, 1594740594, 442944498, 3719906881, 2030436906, 2822459365, 2024742113, 1826494020, 3535962186, 2947108194, 3740142968, 1500724, 10766824, 9494, 1732482
			},
			.prefetch0 = 58134,
			.prefetch1 = 51225,
			.ram = roxlb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4164578602, 1685050863, 2143625437, 1554589348, 2897848802, 1594740594, 442944485, 3719906881, 2030436906, 2822459365, 2024742113, 1826494020, 3535962186, 2947108194, 3740142968, 1500724, 10766824, 9497, 1732484
			},
			.prefetch0 = 51225,
			.prefetch1 = 51572,
			.ram = roxlb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_2,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "003 ROXL.b D0, D1 e131",
		.initial = {
			.regs = {
				3357535009, 2020526508, 615818500, 79845530, 1662340153, 3727922921, 3828088795, 1601785039, 3772615575, 2492507447, 90537255, 3414114819, 4139568211, 785565915, 895553909, 3155640, 12642956, 42773, 2864530
			},
			.prefetch0 = 57649,
			.prefetch1 = 35216,
			.ram = roxlb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3357535009, 2020526389, 615818500, 79845530, 1662340153, 3727922921, 3828088795, 1601785039, 3772615575, 2492507447, 90537255, 3414114819, 4139568211, 785565915, 895553909, 3155640, 12642956, 42769, 2864532
			},
			.prefetch0 = 35216,
			.prefetch1 = 2386,
			.ram = roxlb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_3,
		.transactions_len = 2,
		.lenght = 72,
	},
	{
		.name = "004 ROXL.b 1, D6 e316",
		.initial = {
			.regs = {
				370324886, 761902783, 910997827, 2092834110, 4131752369, 1069387540, 3095664977, 1202585879, 772901785, 1015889236, 2115413284, 633449918, 1147250576, 4281718064, 1327710377, 884150, 9986316, 34563, 8918008
			},
			.prefetch0 = 58134,
			.prefetch1 = 30337,
			.ram = roxlb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				370324886, 761902783, 910997827, 2092834110, 4131752369, 1069387540, 3095665058, 1202585879, 772901785, 1015889236, 2115413284, 633449918, 1147250576, 4281718064, 1327710377, 884150, 9986316, 34568, 8918010
			},
			.prefetch0 = 30337,
			.prefetch1 = 44545,
			.ram = roxlb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_4,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "005 ROXL.b D3, D3 e733",
		.initial = {
			.regs = {
				784128122, 356350300, 109977238, 3366723811, 899277031, 2323925243, 1838759268, 461212450, 3080689229, 907064254, 2423449021, 2183423383, 1468647077, 142446775, 611096911, 3920684, 968522, 42753, 15961712
			},
			.prefetch0 = 59187,
			.prefetch1 = 53982,
			.ram = roxlb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				784128122, 356350300, 109977238, 3366723697, 899277031, 2323925243, 1838759268, 461212450, 3080689229, 907064254, 2423449021, 2183423383, 1468647077, 142446775, 611096911, 3920684, 968522, 42769, 15961714
			},
			.prefetch0 = 53982,
			.prefetch1 = 39513,
			.ram = roxlb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_5,
		.transactions_len = 2,
		.lenght = 76,
	},
	{
		.name = "006 ROXL.b D3, D6 e736",
		.initial = {
			.regs = {
				180175565, 2595653883, 3713090135, 790226760, 2625560924, 3230027001, 419944212, 1686096370, 4244796421, 1292699291, 2385436783, 2335493137, 4113809892, 2465521118, 593434700, 5970294, 13070474, 41483, 15781968
			},
			.prefetch0 = 59190,
			.prefetch1 = 46109,
			.ram = roxlb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				180175565, 2595653883, 3713090135, 790226760, 2625560924, 3230027001, 419944202, 1686096370, 4244796421, 1292699291, 2385436783, 2335493137, 4113809892, 2465521118, 593434700, 5970294, 13070474, 41472, 15781970
			},
			.prefetch0 = 46109,
			.prefetch1 = 4130,
			.ram = roxlb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_6,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "007 ROXL.b 5, D4 eb14",
		.initial = {
			.regs = {
				3991867619, 1411823640, 3944005274, 4207062134, 1027349090, 3062262643, 3618015286, 2406072054, 1142693029, 4004737236, 2985504683, 2063477676, 649458021, 1483763853, 2196816879, 14409498, 14687024, 33819, 16327216
			},
			.prefetch0 = 60180,
			.prefetch1 = 39089,
			.ram = roxlb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3991867619, 1411823640, 3944005274, 4207062134, 1027349078, 3062262643, 3618015286, 2406072054, 1142693029, 4004737236, 2985504683, 2063477676, 649458021, 1483763853, 2196816879, 14409498, 14687024, 33792, 16327218
			},
			.prefetch0 = 39089,
			.prefetch1 = 10278,
			.ram = roxlb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_7,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "008 ROXL.b D0, D6 e136",
		.initial = {
			.regs = {
				26691416, 2389862423, 563856096, 136531115, 3890385410, 2949317492, 2854668257, 3173160137, 4272016738, 2016112267, 3433177607, 588066693, 1430648179, 3838930402, 2825707999, 15745912, 13859826, 33818, 15393464
			},
			.prefetch0 = 57654,
			.prefetch1 = 13521,
			.ram = roxlb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				26691416, 2389862423, 563856096, 136531115, 3890385410, 2949317492, 2854668156, 3173160137, 4272016738, 2016112267, 3433177607, 588066693, 1430648179, 3838930402, 2825707999, 15745912, 13859826, 33792, 15393466
			},
			.prefetch0 = 13521,
			.prefetch1 = 206,
			.ram = roxlb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_8,
		.transactions_len = 2,
		.lenght = 54,
	},
	{
		.name = "009 ROXL.b D3, D5 e735",
		.initial = {
			.regs = {
				3038383348, 4292525432, 2253118022, 60764873, 322533432, 2733960813, 2993298006, 2951017724, 2429152203, 3562402536, 788279419, 202668318, 33738980, 604868944, 677850514, 16587700, 1941200, 42508, 6802882
			},
			.prefetch0 = 59189,
			.prefetch1 = 13662,
			.ram = roxlb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3038383348, 4292525432, 2253118022, 60764873, 322533432, 2733960813, 2993298006, 2951017724, 2429152203, 3562402536, 788279419, 202668318, 33738980, 604868944, 677850514, 16587700, 1941200, 42496, 6802884
			},
			.prefetch0 = 13662,
			.prefetch1 = 50304,
			.ram = roxlb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_9,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "010 ROXL.b 7, D7 ef17",
		.initial = {
			.regs = {
				2925903159, 1081525783, 1917439976, 2541569676, 3165252690, 3497429815, 3972126831, 4176218106, 161554100, 1483398161, 3495189611, 1848924388, 543537920, 1554423849, 3787705062, 4366522, 3328074, 41730, 5981362
			},
			.prefetch0 = 61207,
			.prefetch1 = 29634,
			.ram = roxlb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2925903159, 1081525783, 1917439976, 2541569676, 3165252690, 3497429815, 3972126831, 4176217918, 161554100, 1483398161, 3495189611, 1848924388, 543537920, 1554423849, 3787705062, 4366522, 3328074, 41745, 5981364
			},
			.prefetch0 = 29634,
			.prefetch1 = 7376,
			.ram = roxlb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_10,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "011 ROXL.b 2, D0 e510",
		.initial = {
			.regs = {
				1411882710, 3273462944, 877970977, 1952795383, 1492489820, 3856866149, 680102902, 2966146411, 1246188242, 1204718331, 1920458326, 3148510642, 1170842839, 1911816548, 3642142075, 3469322, 4816694, 40973, 383916
			},
			.prefetch0 = 58640,
			.prefetch1 = 9574,
			.ram = roxlb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1411882585, 3273462944, 877970977, 1952795383, 1492489820, 3856866149, 680102902, 2966146411, 1246188242, 1204718331, 1920458326, 3148510642, 1170842839, 1911816548, 3642142075, 3469322, 4816694, 40977, 383918
			},
			.prefetch0 = 9574,
			.prefetch1 = 53077,
			.ram = roxlb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_11,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "012 ROXL.b D6, D7 ed37",
		.initial = {
			.regs = {
				3684556575, 3084275915, 924118615, 2222249059, 3569679541, 3472304967, 1868690197, 2450925391, 4128123273, 652021504, 2886761042, 1615344411, 2723412979, 3749543903, 2456888008, 4591780, 6880474, 8455, 328828
			},
			.prefetch0 = 60727,
			.prefetch1 = 26734,
			.ram = roxlb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3684556575, 3084275915, 924118615, 2222249059, 3569679541, 3472304967, 1868690197, 2450925433, 4128123273, 652021504, 2886761042, 1615344411, 2723412979, 3749543903, 2456888008, 4591780, 6880474, 8448, 328830
			},
			.prefetch0 = 26734,
			.prefetch1 = 56031,
			.ram = roxlb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_12,
		.transactions_len = 2,
		.lenght = 48,
	},
	{
		.name = "013 ROXL.b D3, D5 e735",
		.initial = {
			.regs = {
				122343284, 4194746072, 1276692081, 3770269486, 1442144853, 1229398389, 1656113716, 1631419389, 1808974572, 2365973096, 652255893, 3537857950, 1925949813, 1579754016, 1871671450, 16384088, 1444634, 34074, 5917516
			},
			.prefetch0 = 59189,
			.prefetch1 = 61811,
			.ram = roxlb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				122343284, 4194746072, 1276692081, 3770269486, 1442144853, 1229398507, 1656113716, 1631419389, 1808974572, 2365973096, 652255893, 3537857950, 1925949813, 1579754016, 1871671450, 16384088, 1444634, 34056, 5917518
			},
			.prefetch0 = 61811,
			.prefetch1 = 7390,
			.ram = roxlb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_13,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "014 ROXL.b 7, D1 ef11",
		.initial = {
			.regs = {
				3732060001, 3374015134, 3027497930, 2049563300, 2022175363, 129751852, 3363869844, 3570351610, 4042717750, 1981235249, 1308848101, 1398831581, 1866518378, 4003431626, 313929549, 1575306, 25670, 8192, 6412356
			},
			.prefetch0 = 61201,
			.prefetch1 = 44866,
			.ram = roxlb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3732060001, 3374015015, 3027497930, 2049563300, 2022175363, 129751852, 3363869844, 3570351610, 4042717750, 1981235249, 1308848101, 1398831581, 1866518378, 4003431626, 313929549, 1575306, 25670, 8209, 6412358
			},
			.prefetch0 = 44866,
			.prefetch1 = 37808,
			.ram = roxlb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_14,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "015 ROXL.b D2, D3 e533",
		.initial = {
			.regs = {
				1901716063, 1109890026, 1318643840, 2052020159, 2455147777, 4201964904, 2228022583, 3059059838, 66769824, 3632750805, 498737359, 209002951, 3292989654, 2612267438, 3845663050, 13680290, 15695642, 790, 2430402
			},
			.prefetch0 = 58675,
			.prefetch1 = 29862,
			.ram = roxlb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1901716063, 1109890026, 1318643840, 2052020159, 2455147777, 4201964904, 2228022583, 3059059838, 66769824, 3632750805, 498737359, 209002951, 3292989654, 2612267438, 3845663050, 13680290, 15695642, 793, 2430404
			},
			.prefetch0 = 29862,
			.prefetch1 = 21079,
			.ram = roxlb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_15,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "016 ROXL.b D7, D0 ef30",
		.initial = {
			.regs = {
				1274783709, 2895944829, 313846876, 4572026, 2906117239, 2373089787, 3404147173, 1636053345, 4269319113, 3074535294, 372953, 2546069644, 3557134012, 3456891133, 4019416481, 14027780, 15511414, 8222, 8396284
			},
			.prefetch0 = 61232,
			.prefetch1 = 41888,
			.ram = roxlb_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1274783611, 2895944829, 313846876, 4572026, 2906117239, 2373089787, 3404147173, 1636053345, 4269319113, 3074535294, 372953, 2546069644, 3557134012, 3456891133, 4019416481, 14027780, 15511414, 8209, 8396286
			},
			.prefetch0 = 41888,
			.prefetch1 = 55398,
			.ram = roxlb_final_ram_16,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_16,
		.transactions_len = 2,
		.lenght = 72,
	},
	{
		.name = "017 ROXL.b D1, D3 e333",
		.initial = {
			.regs = {
				23079743, 1467030332, 1743315774, 1046588277, 2821285859, 1124051840, 2506122647, 3420345206, 322918758, 2813957350, 625930034, 1091308591, 926117709, 3978557719, 3894252960, 10703616, 14005020, 33557, 9817480
			},
			.prefetch0 = 58163,
			.prefetch1 = 25680,
			.ram = roxlb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				23079743, 1467030332, 1743315774, 1046588270, 2821285859, 1124051840, 2506122647, 3420345206, 322918758, 2813957350, 625930034, 1091308591, 926117709, 3978557719, 3894252960, 10703616, 14005020, 33553, 9817482
			},
			.prefetch0 = 25680,
			.prefetch1 = 45886,
			.ram = roxlb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_17,
		.transactions_len = 2,
		.lenght = 126,
	},
	{
		.name = "018 ROXL.b 6, D2 ed12",
		.initial = {
			.regs = {
				1815161703, 125781274, 3151024052, 94029478, 694898556, 3204524541, 2181215460, 2082872797, 80381394, 2736445789, 288583878, 4094997843, 1808792277, 2335124907, 1584461458, 4322920, 8525350, 8196, 14289076
			},
			.prefetch0 = 60690,
			.prefetch1 = 27833,
			.ram = roxlb_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1815161703, 125781274, 3151023894, 94029478, 694898556, 3204524541, 2181215460, 2082872797, 80381394, 2736445789, 288583878, 4094997843, 1808792277, 2335124907, 1584461458, 4322920, 8525350, 8209, 14289078
			},
			.prefetch0 = 27833,
			.prefetch1 = 50326,
			.ram = roxlb_final_ram_18,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_18,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "019 ROXL.b 3, D1 e711",
		.initial = {
			.regs = {
				1586105377, 4190021885, 2155380939, 197065207, 3329188825, 1206368977, 690164962, 688689652, 2847522755, 1109792925, 1402102760, 4135691894, 4105970088, 2860264151, 3420661582, 7005936, 11433048, 34306, 10512122
			},
			.prefetch0 = 59153,
			.prefetch1 = 4020,
			.ram = roxlb_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1586105377, 4190021867, 2155380939, 197065207, 3329188825, 1206368977, 690164962, 688689652, 2847522755, 1109792925, 1402102760, 4135691894, 4105970088, 2860264151, 3420661582, 7005936, 11433048, 34329, 10512124
			},
			.prefetch0 = 4020,
			.prefetch1 = 23821,
			.ram = roxlb_final_ram_19,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_19,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "020 ROXL.b 5, D5 eb15",
		.initial = {
			.regs = {
				2559004378, 1212440028, 4271170029, 2985227092, 2046477495, 1020120905, 330209898, 2490751401, 3001109778, 1577482622, 3089501594, 1427907563, 2013032813, 1622369808, 158002692, 10529792, 11647950, 42007, 1041560
			},
			.prefetch0 = 60181,
			.prefetch1 = 40551,
			.ram = roxlb_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2559004378, 1212440028, 4271170029, 2985227092, 2046477495, 1020120884, 330209898, 2490751401, 3001109778, 1577482622, 3089501594, 1427907563, 2013032813, 1622369808, 158002692, 10529792, 11647950, 42001, 1041562
			},
			.prefetch0 = 40551,
			.prefetch1 = 55230,
			.ram = roxlb_final_ram_20,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_20,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "021 ROXL.b 7, D6 ef16",
		.initial = {
			.regs = {
				960913635, 3436117546, 570484839, 3484229930, 2917153419, 3302423602, 1714196576, 1755266954, 931230720, 4240560098, 2115678159, 1304669671, 1511204636, 1085965954, 2178743113, 10619412, 8622094, 33301, 3734608
			},
			.prefetch0 = 61206,
			.prefetch1 = 58593,
			.ram = roxlb_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				960913635, 3436117546, 570484839, 3484229930, 2917153419, 3302423602, 1714196568, 1755266954, 931230720, 4240560098, 2115678159, 1304669671, 1511204636, 1085965954, 2178743113, 10619412, 8622094, 33280, 3734610
			},
			.prefetch0 = 58593,
			.prefetch1 = 18418,
			.ram = roxlb_final_ram_21,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_21,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "022 ROXL.b 5, D3 eb13",
		.initial = {
			.regs = {
				2326266717, 374856368, 2635344842, 1014013447, 844184929, 3868777277, 2470372065, 224793253, 3931025061, 1875542923, 1467455677, 3299856770, 551032937, 2276406777, 1665338832, 6543616, 13172788, 32799, 3550360
			},
			.prefetch0 = 60179,
			.prefetch1 = 11108,
			.ram = roxlb_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2326266717, 374856368, 2635344842, 1014013680, 844184929, 3868777277, 2470372065, 224793253, 3931025061, 1875542923, 1467455677, 3299856770, 551032937, 2276406777, 1665338832, 6543616, 13172788, 32776, 3550362
			},
			.prefetch0 = 11108,
			.prefetch1 = 23967,
			.ram = roxlb_final_ram_22,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_22,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "023 ROXL.b 5, D7 eb17",
		.initial = {
			.regs = {
				636791057, 145121309, 1005374600, 3763419556, 782773441, 2575329211, 3898598871, 1167064368, 3464582799, 13326489, 4223496966, 1999234511, 2545444630, 1917793928, 1972275418, 11001120, 4406758, 34569, 1695130
			},
			.prefetch0 = 60183,
			.prefetch1 = 60757,
			.ram = roxlb_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				636791057, 145121309, 1005374600, 3763419556, 782773441, 2575329211, 3898598871, 1167064323, 3464582799, 13326489, 4223496966, 1999234511, 2545444630, 1917793928, 1972275418, 11001120, 4406758, 34560, 1695132
			},
			.prefetch0 = 60757,
			.prefetch1 = 30841,
			.ram = roxlb_final_ram_23,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_23,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "024 ROXL.b 8, D3 e113",
		.initial = {
			.regs = {
				50533049, 797239024, 1491497221, 4177748386, 3064713155, 1515206635, 3793335287, 2124993483, 3916712860, 3887841282, 1088089916, 2238876940, 3453852988, 3415464889, 1785266746, 6481996, 803384, 8465, 13783538
			},
			.prefetch0 = 57619,
			.prefetch1 = 6781,
			.ram = roxlb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				50533049, 797239024, 1491497221, 4177748433, 3064713155, 1515206635, 3793335287, 2124993483, 3916712860, 3887841282, 1088089916, 2238876940, 3453852988, 3415464889, 1785266746, 6481996, 803384, 8456, 13783540
			},
			.prefetch0 = 6781,
			.prefetch1 = 8649,
			.ram = roxlb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_24,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "025 ROXL.b 5, D1 eb11",
		.initial = {
			.regs = {
				2012768563, 3572744670, 3846886768, 1611269539, 3088865175, 1126199707, 1492361299, 3000255376, 892258719, 1853170219, 3237921612, 2145439765, 3678642654, 1218801108, 3160079133, 6682390, 2757456, 9472, 13226404
			},
			.prefetch0 = 60177,
			.prefetch1 = 21447,
			.ram = roxlb_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2012768563, 3572744653, 3846886768, 1611269539, 3088865175, 1126199707, 1492361299, 3000255376, 892258719, 1853170219, 3237921612, 2145439765, 3678642654, 1218801108, 3160079133, 6682390, 2757456, 9497, 13226406
			},
			.prefetch0 = 21447,
			.prefetch1 = 43148,
			.ram = roxlb_final_ram_25,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_25,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "026 ROXL.b 3, D4 e714",
		.initial = {
			.regs = {
				87767051, 276689632, 3666705532, 936644682, 420701473, 3132758995, 3438055479, 1899390026, 1417040367, 2418741195, 4037845554, 780266191, 2997856694, 1370872996, 3047919883, 2624406, 658074, 1033, 9634042
			},
			.prefetch0 = 59156,
			.prefetch1 = 28267,
			.ram = roxlb_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				87767051, 276689632, 3666705532, 936644682, 420701448, 3132758995, 3438055479, 1899390026, 1417040367, 2418741195, 4037845554, 780266191, 2997856694, 1370872996, 3047919883, 2624406, 658074, 1041, 9634044
			},
			.prefetch0 = 28267,
			.prefetch1 = 23084,
			.ram = roxlb_final_ram_26,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_26,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "027 ROXL.b 3, D3 e713",
		.initial = {
			.regs = {
				2097097692, 114258925, 1760515246, 4242372403, 2764236914, 1124523159, 3588454522, 1431637830, 4085328143, 482017091, 1148511402, 4233512278, 4122863095, 1293818993, 3513555854, 8361860, 9671602, 8479, 2859942
			},
			.prefetch0 = 59155,
			.prefetch1 = 32701,
			.ram = roxlb_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2097097692, 114258925, 1760515246, 4242372508, 2764236914, 1124523159, 3588454522, 1431637830, 4085328143, 482017091, 1148511402, 4233512278, 4122863095, 1293818993, 3513555854, 8361860, 9671602, 8473, 2859944
			},
			.prefetch0 = 32701,
			.prefetch1 = 3437,
			.ram = roxlb_final_ram_27,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_27,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "028 ROXL.b 5, D0 eb10",
		.initial = {
			.regs = {
				3758866014, 3094935760, 1542734005, 1212723633, 559571852, 1256567730, 3529836590, 349969466, 4283798115, 2853752505, 3998808827, 2657543036, 1665415114, 2095079896, 3458211767, 12910744, 2301934, 9753, 8728032
			},
			.prefetch0 = 60176,
			.prefetch1 = 44035,
			.ram = roxlb_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3758866133, 3094935760, 1542734005, 1212723633, 559571852, 1256567730, 3529836590, 349969466, 4283798115, 2853752505, 3998808827, 2657543036, 1665415114, 2095079896, 3458211767, 12910744, 2301934, 9753, 8728034
			},
			.prefetch0 = 44035,
			.prefetch1 = 38797,
			.ram = roxlb_final_ram_28,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_28,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "029 ROXL.b 6, D7 ed17",
		.initial = {
			.regs = {
				4114293399, 1804550859, 1015921590, 3896402522, 1939537584, 1160287910, 2561585231, 4250318227, 4196331911, 980873200, 949479378, 2144232387, 3720900840, 214536065, 392215954, 10846426, 11136466, 8967, 11930184
			},
			.prefetch0 = 60695,
			.prefetch1 = 33869,
			.ram = roxlb_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4114293399, 1804550859, 1015921590, 3896402522, 1939537584, 1160287910, 2561585231, 4250318290, 4196331911, 980873200, 949479378, 2144232387, 3720900840, 214536065, 392215954, 10846426, 11136466, 8968, 11930186
			},
			.prefetch0 = 33869,
			.prefetch1 = 37254,
			.ram = roxlb_final_ram_29,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_29,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "030 ROXL.b 4, D2 e912",
		.initial = {
			.regs = {
				2096282509, 3981898123, 270567433, 4272850599, 2731311619, 3127446047, 765902752, 2724993876, 1469809170, 2847829199, 2917866269, 1337165368, 319146208, 4233704063, 3751607157, 4655554, 13760856, 41487, 2924838
			},
			.prefetch0 = 59666,
			.prefetch1 = 63695,
			.ram = roxlb_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2096282509, 3981898123, 270567568, 4272850599, 2731311619, 3127446047, 765902752, 2724993876, 1469809170, 2847829199, 2917866269, 1337165368, 319146208, 4233704063, 3751607157, 4655554, 13760856, 41480, 2924840
			},
			.prefetch0 = 63695,
			.prefetch1 = 2526,
			.ram = roxlb_final_ram_30,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_30,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "031 ROXL.b 6, D6 ed16",
		.initial = {
			.regs = {
				1353590520, 3279159112, 3559159556, 2190892179, 2057179849, 1442421739, 2077828109, 2066830643, 180603446, 2640770422, 1067303571, 185856949, 860442677, 3315918998, 2230458630, 673750, 13341458, 8457, 14159176
			},
			.prefetch0 = 60694,
			.prefetch1 = 29838,
			.ram = roxlb_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1353590520, 3279159112, 3559159556, 2190892179, 2057179849, 1442421739, 2077828161, 2066830643, 180603446, 2640770422, 1067303571, 185856949, 860442677, 3315918998, 2230458630, 673750, 13341458, 8465, 14159178
			},
			.prefetch0 = 29838,
			.prefetch1 = 63449,
			.ram = roxlb_final_ram_31,
			.ram_len = 6,
		},
		.transactions = roxlb_transactions_31,
		.transactions_len = 2,
		.lenght = 18,
	},
};

#endif /* RBT_ROXLB_H */