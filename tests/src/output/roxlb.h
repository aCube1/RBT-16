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

const uint32_t ROXLB_TEST_COUNT = 16;
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
};

#endif /* RBT_ROXLB_H */