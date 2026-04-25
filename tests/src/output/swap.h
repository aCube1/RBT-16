#ifndef RBT_SWAP_H
#define RBT_SWAP_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte swap_initial_ram_0[] = {
		{ .addr = 0x1a5a32, .byte = 0x48 },
		{ .addr = 0x1a5a33, .byte = 0x43 },
		{ .addr = 0x1a5a34, .byte = 0x41 },
		{ .addr = 0x1a5a35, .byte = 0xad },
		{ .addr = 0x1a5a36, .byte = 0x41 },
		{ .addr = 0x1a5a37, .byte = 0x6d }
};

static const SST_RamByte swap_final_ram_0[] = {
		{ .addr = 0x1a5a32, .byte = 0x48 },
		{ .addr = 0x1a5a33, .byte = 0x43 },
		{ .addr = 0x1a5a34, .byte = 0x41 },
		{ .addr = 0x1a5a35, .byte = 0xad },
		{ .addr = 0x1a5a36, .byte = 0x41 },
		{ .addr = 0x1a5a37, .byte = 0x6d }
};

static const SST_Transaction swap_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1727030, .data = 16749, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_1[] = {
		{ .addr = 0xd1934c, .byte = 0x48 },
		{ .addr = 0xd1934d, .byte = 0x47 },
		{ .addr = 0xd1934e, .byte = 0x71 },
		{ .addr = 0xd1934f, .byte = 0x9e },
		{ .addr = 0xd19350, .byte = 0x5d },
		{ .addr = 0xd19351, .byte = 0x28 }
};

static const SST_RamByte swap_final_ram_1[] = {
		{ .addr = 0xd1934c, .byte = 0x48 },
		{ .addr = 0xd1934d, .byte = 0x47 },
		{ .addr = 0xd1934e, .byte = 0x71 },
		{ .addr = 0xd1934f, .byte = 0x9e },
		{ .addr = 0xd19350, .byte = 0x5d },
		{ .addr = 0xd19351, .byte = 0x28 }
};

static const SST_Transaction swap_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13734736, .data = 23848, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_2[] = {
		{ .addr = 0xbd2cc4, .byte = 0x48 },
		{ .addr = 0xbd2cc5, .byte = 0x41 },
		{ .addr = 0xbd2cc6, .byte = 0x6b },
		{ .addr = 0xbd2cc7, .byte = 0x52 },
		{ .addr = 0xbd2cc8, .byte = 0x29 },
		{ .addr = 0xbd2cc9, .byte = 0xa6 }
};

static const SST_RamByte swap_final_ram_2[] = {
		{ .addr = 0xbd2cc4, .byte = 0x48 },
		{ .addr = 0xbd2cc5, .byte = 0x41 },
		{ .addr = 0xbd2cc6, .byte = 0x6b },
		{ .addr = 0xbd2cc7, .byte = 0x52 },
		{ .addr = 0xbd2cc8, .byte = 0x29 },
		{ .addr = 0xbd2cc9, .byte = 0xa6 }
};

static const SST_Transaction swap_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12397768, .data = 10662, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_3[] = {
		{ .addr = 0xc1733c, .byte = 0x48 },
		{ .addr = 0xc1733d, .byte = 0x44 },
		{ .addr = 0xc1733e, .byte = 0xf2 },
		{ .addr = 0xc1733f, .byte = 0x8d },
		{ .addr = 0xc17340, .byte = 0x5c },
		{ .addr = 0xc17341, .byte = 0x6f }
};

static const SST_RamByte swap_final_ram_3[] = {
		{ .addr = 0xc1733c, .byte = 0x48 },
		{ .addr = 0xc1733d, .byte = 0x44 },
		{ .addr = 0xc1733e, .byte = 0xf2 },
		{ .addr = 0xc1733f, .byte = 0x8d },
		{ .addr = 0xc17340, .byte = 0x5c },
		{ .addr = 0xc17341, .byte = 0x6f }
};

static const SST_Transaction swap_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12677952, .data = 23663, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_4[] = {
		{ .addr = 0x97ca04, .byte = 0x48 },
		{ .addr = 0x97ca05, .byte = 0x43 },
		{ .addr = 0x97ca06, .byte = 0xc4 },
		{ .addr = 0x97ca07, .byte = 0xc9 },
		{ .addr = 0x97ca08, .byte = 0xec },
		{ .addr = 0x97ca09, .byte = 0x9c }
};

static const SST_RamByte swap_final_ram_4[] = {
		{ .addr = 0x97ca04, .byte = 0x48 },
		{ .addr = 0x97ca05, .byte = 0x43 },
		{ .addr = 0x97ca06, .byte = 0xc4 },
		{ .addr = 0x97ca07, .byte = 0xc9 },
		{ .addr = 0x97ca08, .byte = 0xec },
		{ .addr = 0x97ca09, .byte = 0x9c }
};

static const SST_Transaction swap_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9947656, .data = 60572, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_5[] = {
		{ .addr = 0xd5616c, .byte = 0x48 },
		{ .addr = 0xd5616d, .byte = 0x41 },
		{ .addr = 0xd5616e, .byte = 0x39 },
		{ .addr = 0xd5616f, .byte = 0xac },
		{ .addr = 0xd56170, .byte = 0xd3 },
		{ .addr = 0xd56171, .byte = 0xbb }
};

static const SST_RamByte swap_final_ram_5[] = {
		{ .addr = 0xd5616c, .byte = 0x48 },
		{ .addr = 0xd5616d, .byte = 0x41 },
		{ .addr = 0xd5616e, .byte = 0x39 },
		{ .addr = 0xd5616f, .byte = 0xac },
		{ .addr = 0xd56170, .byte = 0xd3 },
		{ .addr = 0xd56171, .byte = 0xbb }
};

static const SST_Transaction swap_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13984112, .data = 54203, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_6[] = {
		{ .addr = 0x390490, .byte = 0x48 },
		{ .addr = 0x390491, .byte = 0x45 },
		{ .addr = 0x390492, .byte = 0x4f },
		{ .addr = 0x390493, .byte = 0xc1 },
		{ .addr = 0x390494, .byte = 0x66 },
		{ .addr = 0x390495, .byte = 0x21 }
};

static const SST_RamByte swap_final_ram_6[] = {
		{ .addr = 0x390490, .byte = 0x48 },
		{ .addr = 0x390491, .byte = 0x45 },
		{ .addr = 0x390492, .byte = 0x4f },
		{ .addr = 0x390493, .byte = 0xc1 },
		{ .addr = 0x390494, .byte = 0x66 },
		{ .addr = 0x390495, .byte = 0x21 }
};

static const SST_Transaction swap_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3736724, .data = 26145, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_7[] = {
		{ .addr = 0xa3bf70, .byte = 0x48 },
		{ .addr = 0xa3bf71, .byte = 0x40 },
		{ .addr = 0xa3bf72, .byte = 0x39 },
		{ .addr = 0xa3bf73, .byte = 0x4a },
		{ .addr = 0xa3bf74, .byte = 0xa8 },
		{ .addr = 0xa3bf75, .byte = 0xe7 }
};

static const SST_RamByte swap_final_ram_7[] = {
		{ .addr = 0xa3bf70, .byte = 0x48 },
		{ .addr = 0xa3bf71, .byte = 0x40 },
		{ .addr = 0xa3bf72, .byte = 0x39 },
		{ .addr = 0xa3bf73, .byte = 0x4a },
		{ .addr = 0xa3bf74, .byte = 0xa8 },
		{ .addr = 0xa3bf75, .byte = 0xe7 }
};

static const SST_Transaction swap_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10731380, .data = 43239, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_8[] = {
		{ .addr = 0x170c1c, .byte = 0x48 },
		{ .addr = 0x170c1d, .byte = 0x43 },
		{ .addr = 0x170c1e, .byte = 0x26 },
		{ .addr = 0x170c1f, .byte = 0x45 },
		{ .addr = 0x170c20, .byte = 0x96 },
		{ .addr = 0x170c21, .byte = 0xc1 }
};

static const SST_RamByte swap_final_ram_8[] = {
		{ .addr = 0x170c1c, .byte = 0x48 },
		{ .addr = 0x170c1d, .byte = 0x43 },
		{ .addr = 0x170c1e, .byte = 0x26 },
		{ .addr = 0x170c1f, .byte = 0x45 },
		{ .addr = 0x170c20, .byte = 0x96 },
		{ .addr = 0x170c21, .byte = 0xc1 }
};

static const SST_Transaction swap_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1510432, .data = 38593, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_9[] = {
		{ .addr = 0x79ca5a, .byte = 0x48 },
		{ .addr = 0x79ca5b, .byte = 0x44 },
		{ .addr = 0x79ca5c, .byte = 0x4d },
		{ .addr = 0x79ca5d, .byte = 0x1a },
		{ .addr = 0x79ca5e, .byte = 0x52 },
		{ .addr = 0x79ca5f, .byte = 0x0d }
};

static const SST_RamByte swap_final_ram_9[] = {
		{ .addr = 0x79ca5a, .byte = 0x48 },
		{ .addr = 0x79ca5b, .byte = 0x44 },
		{ .addr = 0x79ca5c, .byte = 0x4d },
		{ .addr = 0x79ca5d, .byte = 0x1a },
		{ .addr = 0x79ca5e, .byte = 0x52 },
		{ .addr = 0x79ca5f, .byte = 0x0d }
};

static const SST_Transaction swap_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7981662, .data = 21005, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_10[] = {
		{ .addr = 0xce438e, .byte = 0x48 },
		{ .addr = 0xce438f, .byte = 0x42 },
		{ .addr = 0xce4390, .byte = 0xe8 },
		{ .addr = 0xce4391, .byte = 0x86 },
		{ .addr = 0xce4392, .byte = 0x08 },
		{ .addr = 0xce4393, .byte = 0xc0 }
};

static const SST_RamByte swap_final_ram_10[] = {
		{ .addr = 0xce438e, .byte = 0x48 },
		{ .addr = 0xce438f, .byte = 0x42 },
		{ .addr = 0xce4390, .byte = 0xe8 },
		{ .addr = 0xce4391, .byte = 0x86 },
		{ .addr = 0xce4392, .byte = 0x08 },
		{ .addr = 0xce4393, .byte = 0xc0 }
};

static const SST_Transaction swap_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13517714, .data = 2240, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_11[] = {
		{ .addr = 0xab19ea, .byte = 0x48 },
		{ .addr = 0xab19eb, .byte = 0x41 },
		{ .addr = 0xab19ec, .byte = 0x68 },
		{ .addr = 0xab19ed, .byte = 0xf5 },
		{ .addr = 0xab19ee, .byte = 0x46 },
		{ .addr = 0xab19ef, .byte = 0x23 }
};

static const SST_RamByte swap_final_ram_11[] = {
		{ .addr = 0xab19ea, .byte = 0x48 },
		{ .addr = 0xab19eb, .byte = 0x41 },
		{ .addr = 0xab19ec, .byte = 0x68 },
		{ .addr = 0xab19ed, .byte = 0xf5 },
		{ .addr = 0xab19ee, .byte = 0x46 },
		{ .addr = 0xab19ef, .byte = 0x23 }
};

static const SST_Transaction swap_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11213294, .data = 17955, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_12[] = {
		{ .addr = 0x8f9594, .byte = 0x48 },
		{ .addr = 0x8f9595, .byte = 0x44 },
		{ .addr = 0x8f9596, .byte = 0xdd },
		{ .addr = 0x8f9597, .byte = 0xb6 },
		{ .addr = 0x8f9598, .byte = 0x73 },
		{ .addr = 0x8f9599, .byte = 0xcb }
};

static const SST_RamByte swap_final_ram_12[] = {
		{ .addr = 0x8f9594, .byte = 0x48 },
		{ .addr = 0x8f9595, .byte = 0x44 },
		{ .addr = 0x8f9596, .byte = 0xdd },
		{ .addr = 0x8f9597, .byte = 0xb6 },
		{ .addr = 0x8f9598, .byte = 0x73 },
		{ .addr = 0x8f9599, .byte = 0xcb }
};

static const SST_Transaction swap_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9409944, .data = 29643, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_13[] = {
		{ .addr = 0xf2d714, .byte = 0x48 },
		{ .addr = 0xf2d715, .byte = 0x45 },
		{ .addr = 0xf2d716, .byte = 0xcf },
		{ .addr = 0xf2d717, .byte = 0x7c },
		{ .addr = 0xf2d718, .byte = 0x2f },
		{ .addr = 0xf2d719, .byte = 0x6c }
};

static const SST_RamByte swap_final_ram_13[] = {
		{ .addr = 0xf2d714, .byte = 0x48 },
		{ .addr = 0xf2d715, .byte = 0x45 },
		{ .addr = 0xf2d716, .byte = 0xcf },
		{ .addr = 0xf2d717, .byte = 0x7c },
		{ .addr = 0xf2d718, .byte = 0x2f },
		{ .addr = 0xf2d719, .byte = 0x6c }
};

static const SST_Transaction swap_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15914776, .data = 12140, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_14[] = {
		{ .addr = 0x7de3fa, .byte = 0x48 },
		{ .addr = 0x7de3fb, .byte = 0x41 },
		{ .addr = 0x7de3fc, .byte = 0x57 },
		{ .addr = 0x7de3fd, .byte = 0x86 },
		{ .addr = 0x7de3fe, .byte = 0xb8 },
		{ .addr = 0x7de3ff, .byte = 0x39 }
};

static const SST_RamByte swap_final_ram_14[] = {
		{ .addr = 0x7de3fa, .byte = 0x48 },
		{ .addr = 0x7de3fb, .byte = 0x41 },
		{ .addr = 0x7de3fc, .byte = 0x57 },
		{ .addr = 0x7de3fd, .byte = 0x86 },
		{ .addr = 0x7de3fe, .byte = 0xb8 },
		{ .addr = 0x7de3ff, .byte = 0x39 }
};

static const SST_Transaction swap_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8250366, .data = 47161, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte swap_initial_ram_15[] = {
		{ .addr = 0x4ad1f8, .byte = 0x48 },
		{ .addr = 0x4ad1f9, .byte = 0x45 },
		{ .addr = 0x4ad1fa, .byte = 0x76 },
		{ .addr = 0x4ad1fb, .byte = 0x0a },
		{ .addr = 0x4ad1fc, .byte = 0xd1 },
		{ .addr = 0x4ad1fd, .byte = 0x29 }
};

static const SST_RamByte swap_final_ram_15[] = {
		{ .addr = 0x4ad1f8, .byte = 0x48 },
		{ .addr = 0x4ad1f9, .byte = 0x45 },
		{ .addr = 0x4ad1fa, .byte = 0x76 },
		{ .addr = 0x4ad1fb, .byte = 0x0a },
		{ .addr = 0x4ad1fc, .byte = 0xd1 },
		{ .addr = 0x4ad1fd, .byte = 0x29 }
};

static const SST_Transaction swap_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4903420, .data = 53545, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t SWAP_TEST_COUNT = 16;
static const SST_TestCase swap[] = {
	{
		.name = "000 SWAP D3 4843",
		.initial = {
			.regs = {
				1510753054, 4071567957, 3839256128, 1926237086, 89012861, 2466081603, 1103358500, 3344103847, 3298303314, 1066111233, 3272664423, 3745714625, 1929345019, 2064452560, 1567622384, 5955164, 12514624, 40969, 1727030
			},
			.prefetch0 = 18499,
			.prefetch1 = 16813,
			.ram = swap_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1510753054, 4071567957, 3839256128, 194933456, 89012861, 2466081603, 1103358500, 3344103847, 3298303314, 1066111233, 3272664423, 3745714625, 1929345019, 2064452560, 1567622384, 5955164, 12514624, 40960, 1727032
			},
			.prefetch0 = 16813,
			.prefetch1 = 16749,
			.ram = swap_final_ram_0,
			.ram_len = 6,
		},
		.transactions = swap_transactions_0,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "001 SWAP D7 4847",
		.initial = {
			.regs = {
				4115843725, 2345382708, 2631360228, 2167464651, 4213326814, 2154268161, 3918099075, 905513621, 4203544091, 3876886928, 409453504, 2180760983, 870269992, 4109327655, 50613965, 15591342, 5835316, 29, 13734736
			},
			.prefetch0 = 18503,
			.prefetch1 = 29086,
			.ram = swap_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4115843725, 2345382708, 2631360228, 2167464651, 4213326814, 2154268161, 3918099075, 177550841, 4203544091, 3876886928, 409453504, 2180760983, 870269992, 4109327655, 50613965, 15591342, 5835316, 16, 13734738
			},
			.prefetch0 = 29086,
			.prefetch1 = 23848,
			.ram = swap_final_ram_1,
			.ram_len = 6,
		},
		.transactions = swap_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 SWAP D1 4841",
		.initial = {
			.regs = {
				1322134390, 1725308508, 468387741, 3977772105, 1673330044, 1012800418, 1747351742, 1040437197, 2958264685, 3581533533, 1803678201, 869445937, 4037214242, 1126694403, 4230167322, 10361344, 8741614, 32785, 12397768
			},
			.prefetch0 = 18497,
			.prefetch1 = 27474,
			.ram = swap_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1322134390, 509372118, 468387741, 3977772105, 1673330044, 1012800418, 1747351742, 1040437197, 2958264685, 3581533533, 1803678201, 869445937, 4037214242, 1126694403, 4230167322, 10361344, 8741614, 32784, 12397770
			},
			.prefetch0 = 27474,
			.prefetch1 = 10662,
			.ram = swap_final_ram_2,
			.ram_len = 6,
		},
		.transactions = swap_transactions_2,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "003 SWAP D4 4844",
		.initial = {
			.regs = {
				3935967539, 2174116261, 3131987089, 888712028, 2281939568, 1179629098, 1045184654, 4178939532, 1792793942, 4012875303, 1085729630, 2146913412, 4181122051, 360779196, 1811292335, 10441722, 7569672, 1048, 12677952
			},
			.prefetch0 = 18500,
			.prefetch1 = 62093,
			.ram = swap_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3935967539, 2174116261, 3131987089, 888712028, 2725283843, 1179629098, 1045184654, 4178939532, 1792793942, 4012875303, 1085729630, 2146913412, 4181122051, 360779196, 1811292335, 10441722, 7569672, 1048, 12677954
			},
			.prefetch0 = 62093,
			.prefetch1 = 23663,
			.ram = swap_final_ram_3,
			.ram_len = 6,
		},
		.transactions = swap_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 SWAP D3 4843",
		.initial = {
			.regs = {
				264559707, 1829008570, 499354872, 4000468972, 1022774667, 443622963, 3215343274, 4242724684, 4257531891, 1421378477, 2530391792, 3460567438, 1712767593, 3360147808, 2381959463, 2477946, 13582280, 8460, 9947656
			},
			.prefetch0 = 18499,
			.prefetch1 = 50377,
			.ram = swap_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				264559707, 1829008570, 499354872, 1340927602, 1022774667, 443622963, 3215343274, 4242724684, 4257531891, 1421378477, 2530391792, 3460567438, 1712767593, 3360147808, 2381959463, 2477946, 13582280, 8448, 9947658
			},
			.prefetch0 = 50377,
			.prefetch1 = 60572,
			.ram = swap_final_ram_4,
			.ram_len = 6,
		},
		.transactions = swap_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 SWAP D1 4841",
		.initial = {
			.regs = {
				3412189380, 3723707499, 1047418701, 2223324450, 3989271661, 2552200238, 4171206031, 3279008504, 3704081411, 1781346500, 2502352152, 544301955, 2886714811, 546529214, 4179102155, 6083464, 15038940, 8704, 13984112
			},
			.prefetch0 = 18497,
			.prefetch1 = 14764,
			.ram = swap_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3412189380, 1147919859, 1047418701, 2223324450, 3989271661, 2552200238, 4171206031, 3279008504, 3704081411, 1781346500, 2502352152, 544301955, 2886714811, 546529214, 4179102155, 6083464, 15038940, 8704, 13984114
			},
			.prefetch0 = 14764,
			.prefetch1 = 54203,
			.ram = swap_final_ram_5,
			.ram_len = 6,
		},
		.transactions = swap_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 SWAP D5 4845",
		.initial = {
			.regs = {
				1274490011, 1899630675, 2367705735, 923539954, 3808627436, 3207356530, 816228105, 212876843, 2245424412, 4123738961, 25133761, 161324271, 217442611, 3641896338, 1135792517, 8609486, 15855368, 42267, 3736724
			},
			.prefetch0 = 18501,
			.prefetch1 = 20417,
			.ram = swap_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1274490011, 1899630675, 2367705735, 923539954, 3808627436, 1618132780, 816228105, 212876843, 2245424412, 4123738961, 25133761, 161324271, 217442611, 3641896338, 1135792517, 8609486, 15855368, 42256, 3736726
			},
			.prefetch0 = 20417,
			.prefetch1 = 26145,
			.ram = swap_final_ram_6,
			.ram_len = 6,
		},
		.transactions = swap_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 SWAP D0 4840",
		.initial = {
			.regs = {
				3381948879, 2932041858, 1521656421, 3918870504, 3002657366, 3518534208, 994015277, 756496861, 54936102, 1771137356, 2115866509, 1413453597, 2426957289, 422861342, 2901965802, 5372376, 5784630, 34580, 10731380
			},
			.prefetch0 = 18496,
			.prefetch1 = 14666,
			.ram = swap_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1909442964, 2932041858, 1521656421, 3918870504, 3002657366, 3518534208, 994015277, 756496861, 54936102, 1771137356, 2115866509, 1413453597, 2426957289, 422861342, 2901965802, 5372376, 5784630, 34576, 10731382
			},
			.prefetch0 = 14666,
			.prefetch1 = 43239,
			.ram = swap_final_ram_7,
			.ram_len = 6,
		},
		.transactions = swap_transactions_7,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "008 SWAP D3 4843",
		.initial = {
			.regs = {
				2263088044, 3942487562, 3723866529, 35361516, 580063117, 2891877301, 3593875348, 2416074172, 115023739, 3459554462, 1893491070, 339007378, 85745548, 3376015482, 4230979222, 1816694, 7010872, 9986, 1510432
			},
			.prefetch0 = 18499,
			.prefetch1 = 9797,
			.ram = swap_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2263088044, 3942487562, 3723866529, 2464940571, 580063117, 2891877301, 3593875348, 2416074172, 115023739, 3459554462, 1893491070, 339007378, 85745548, 3376015482, 4230979222, 1816694, 7010872, 9992, 1510434
			},
			.prefetch0 = 9797,
			.prefetch1 = 38593,
			.ram = swap_final_ram_8,
			.ram_len = 6,
		},
		.transactions = swap_transactions_8,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "009 SWAP D4 4844",
		.initial = {
			.regs = {
				734237915, 1959661296, 1024257450, 1671643561, 83407607, 337435331, 983372091, 3326694597, 2185723603, 3070762092, 1830080482, 3992043972, 1536783540, 1400829401, 2788417045, 12123724, 6671182, 1055, 7981662
			},
			.prefetch0 = 18500,
			.prefetch1 = 19738,
			.ram = swap_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				734237915, 1959661296, 1024257450, 1671643561, 3002533112, 337435331, 983372091, 3326694597, 2185723603, 3070762092, 1830080482, 3992043972, 1536783540, 1400829401, 2788417045, 12123724, 6671182, 1048, 7981664
			},
			.prefetch0 = 19738,
			.prefetch1 = 21005,
			.ram = swap_final_ram_9,
			.ram_len = 6,
		},
		.transactions = swap_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 SWAP D2 4842",
		.initial = {
			.regs = {
				2165344069, 724538693, 3282658362, 3661809921, 3516709332, 852340523, 2352955735, 4105775827, 1077827520, 1066989255, 2022972139, 1184577791, 1800085569, 1639806016, 3116664895, 16129946, 2932460, 8200, 13517714
			},
			.prefetch0 = 18498,
			.prefetch1 = 59526,
			.ram = swap_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2165344069, 724538693, 1681572777, 3661809921, 3516709332, 852340523, 2352955735, 4105775827, 1077827520, 1066989255, 2022972139, 1184577791, 1800085569, 1639806016, 3116664895, 16129946, 2932460, 8192, 13517716
			},
			.prefetch0 = 59526,
			.prefetch1 = 2240,
			.ram = swap_final_ram_10,
			.ram_len = 6,
		},
		.transactions = swap_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 SWAP D1 4841",
		.initial = {
			.regs = {
				1520576392, 1683590903, 2631213070, 4255362680, 500893178, 1547459620, 368475525, 4007802541, 479418117, 3181815249, 812334381, 3808549168, 4272454339, 49917354, 2700241730, 14605184, 12200294, 1538, 11213294
			},
			.prefetch0 = 18497,
			.prefetch1 = 26869,
			.ram = swap_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1520576392, 2398577753, 2631213070, 4255362680, 500893178, 1547459620, 368475525, 4007802541, 479418117, 3181815249, 812334381, 3808549168, 4272454339, 49917354, 2700241730, 14605184, 12200294, 1544, 11213296
			},
			.prefetch0 = 26869,
			.prefetch1 = 17955,
			.ram = swap_final_ram_11,
			.ram_len = 6,
		},
		.transactions = swap_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 SWAP D4 4844",
		.initial = {
			.regs = {
				3810626984, 1576863568, 3060633976, 235216457, 323927254, 4173954354, 229543621, 4012689447, 1767002200, 2469250911, 642287498, 2669057477, 901810698, 2259393181, 2374873100, 5554254, 375866, 8987, 9409944
			},
			.prefetch0 = 18500,
			.prefetch1 = 56758,
			.ram = swap_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3810626984, 1576863568, 3060633976, 235216457, 3168146254, 4173954354, 229543621, 4012689447, 1767002200, 2469250911, 642287498, 2669057477, 901810698, 2259393181, 2374873100, 5554254, 375866, 8984, 9409946
			},
			.prefetch0 = 56758,
			.prefetch1 = 29643,
			.ram = swap_final_ram_12,
			.ram_len = 6,
		},
		.transactions = swap_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 SWAP D5 4845",
		.initial = {
			.regs = {
				553340663, 1604419042, 2975275810, 3278556994, 2973708970, 585539203, 2408374865, 3377432604, 1947227594, 249415709, 2600345950, 2031822789, 2197760445, 3213102041, 928163396, 15747194, 8645188, 1295, 15914776
			},
			.prefetch0 = 18501,
			.prefetch1 = 53116,
			.ram = swap_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				553340663, 1604419042, 2975275810, 3278556994, 2973708970, 2659394278, 2408374865, 3377432604, 1947227594, 249415709, 2600345950, 2031822789, 2197760445, 3213102041, 928163396, 15747194, 8645188, 1288, 15914778
			},
			.prefetch0 = 53116,
			.prefetch1 = 12140,
			.ram = swap_final_ram_13,
			.ram_len = 6,
		},
		.transactions = swap_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 SWAP D1 4841",
		.initial = {
			.regs = {
				641614835, 4251351277, 1062245808, 2223325653, 3669628666, 103409653, 3479851189, 1531073048, 1835721073, 1480815140, 649543638, 2458152576, 2144916262, 1542872800, 2719553629, 3014878, 10098332, 8961, 8250366
			},
			.prefetch0 = 18497,
			.prefetch1 = 22406,
			.ram = swap_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				641614835, 2028862822, 1062245808, 2223325653, 3669628666, 103409653, 3479851189, 1531073048, 1835721073, 1480815140, 649543638, 2458152576, 2144916262, 1542872800, 2719553629, 3014878, 10098332, 8960, 8250368
			},
			.prefetch0 = 22406,
			.prefetch1 = 47161,
			.ram = swap_final_ram_14,
			.ram_len = 6,
		},
		.transactions = swap_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 SWAP D5 4845",
		.initial = {
			.regs = {
				2534050304, 1129834366, 3277206947, 294841335, 3627527719, 4201732281, 3202853095, 3998806216, 3598081071, 668647219, 153487732, 2064839317, 662014720, 215028216, 3504852481, 8315246, 8848466, 1, 4903420
			},
			.prefetch0 = 18501,
			.prefetch1 = 30218,
			.ram = swap_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2534050304, 1129834366, 3277206947, 294841335, 3627527719, 1488583281, 3202853095, 3998806216, 3598081071, 668647219, 153487732, 2064839317, 662014720, 215028216, 3504852481, 8315246, 8848466, 0, 4903422
			},
			.prefetch0 = 30218,
			.prefetch1 = 53545,
			.ram = swap_final_ram_15,
			.ram_len = 6,
		},
		.transactions = swap_transactions_15,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_SWAP_H */