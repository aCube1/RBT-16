#ifndef RBT_ASRB_H
#define RBT_ASRB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte asrb_initial_ram_0[] = {
		{ .addr = 0xf61c14, .byte = 0xec },
		{ .addr = 0xf61c15, .byte = 0x07 },
		{ .addr = 0xf61c16, .byte = 0xa9 },
		{ .addr = 0xf61c17, .byte = 0x08 },
		{ .addr = 0xf61c18, .byte = 0x3a },
		{ .addr = 0xf61c19, .byte = 0x2c }
};

static const SST_RamByte asrb_final_ram_0[] = {
		{ .addr = 0xf61c14, .byte = 0xec },
		{ .addr = 0xf61c15, .byte = 0x07 },
		{ .addr = 0xf61c16, .byte = 0xa9 },
		{ .addr = 0xf61c17, .byte = 0x08 },
		{ .addr = 0xf61c18, .byte = 0x3a },
		{ .addr = 0xf61c19, .byte = 0x2c }
};

static const SST_Transaction asrb_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16129048, .data = 14892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte asrb_initial_ram_1[] = {
		{ .addr = 0x4948f6, .byte = 0xe8 },
		{ .addr = 0x4948f7, .byte = 0x00 },
		{ .addr = 0x4948f8, .byte = 0x31 },
		{ .addr = 0x4948f9, .byte = 0xb6 },
		{ .addr = 0x4948fa, .byte = 0x36 },
		{ .addr = 0x4948fb, .byte = 0x7c }
};

static const SST_RamByte asrb_final_ram_1[] = {
		{ .addr = 0x4948f6, .byte = 0xe8 },
		{ .addr = 0x4948f7, .byte = 0x00 },
		{ .addr = 0x4948f8, .byte = 0x31 },
		{ .addr = 0x4948f9, .byte = 0xb6 },
		{ .addr = 0x4948fa, .byte = 0x36 },
		{ .addr = 0x4948fb, .byte = 0x7c }
};

static const SST_Transaction asrb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4802810, .data = 13948, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte asrb_initial_ram_2[] = {
		{ .addr = 0xfeca40, .byte = 0xe6 },
		{ .addr = 0xfeca41, .byte = 0x26 },
		{ .addr = 0xfeca42, .byte = 0x6e },
		{ .addr = 0xfeca43, .byte = 0x1d },
		{ .addr = 0xfeca44, .byte = 0xbc },
		{ .addr = 0xfeca45, .byte = 0x9e }
};

static const SST_RamByte asrb_final_ram_2[] = {
		{ .addr = 0xfeca40, .byte = 0xe6 },
		{ .addr = 0xfeca41, .byte = 0x26 },
		{ .addr = 0xfeca42, .byte = 0x6e },
		{ .addr = 0xfeca43, .byte = 0x1d },
		{ .addr = 0xfeca44, .byte = 0xbc },
		{ .addr = 0xfeca45, .byte = 0x9e }
};

static const SST_Transaction asrb_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16697924, .data = 48286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 48 },
};

static const SST_RamByte asrb_initial_ram_3[] = {
		{ .addr = 0x33caa4, .byte = 0xe2 },
		{ .addr = 0x33caa5, .byte = 0x06 },
		{ .addr = 0x33caa6, .byte = 0x09 },
		{ .addr = 0x33caa7, .byte = 0xb8 },
		{ .addr = 0x33caa8, .byte = 0x57 },
		{ .addr = 0x33caa9, .byte = 0x5a }
};

static const SST_RamByte asrb_final_ram_3[] = {
		{ .addr = 0x33caa4, .byte = 0xe2 },
		{ .addr = 0x33caa5, .byte = 0x06 },
		{ .addr = 0x33caa6, .byte = 0x09 },
		{ .addr = 0x33caa7, .byte = 0xb8 },
		{ .addr = 0x33caa8, .byte = 0x57 },
		{ .addr = 0x33caa9, .byte = 0x5a }
};

static const SST_Transaction asrb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3394216, .data = 22362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte asrb_initial_ram_4[] = {
		{ .addr = 0x46a164, .byte = 0xea },
		{ .addr = 0x46a165, .byte = 0x00 },
		{ .addr = 0x46a166, .byte = 0x28 },
		{ .addr = 0x46a167, .byte = 0x1f },
		{ .addr = 0x46a168, .byte = 0xa1 },
		{ .addr = 0x46a169, .byte = 0xbb }
};

static const SST_RamByte asrb_final_ram_4[] = {
		{ .addr = 0x46a164, .byte = 0xea },
		{ .addr = 0x46a165, .byte = 0x00 },
		{ .addr = 0x46a166, .byte = 0x28 },
		{ .addr = 0x46a167, .byte = 0x1f },
		{ .addr = 0x46a168, .byte = 0xa1 },
		{ .addr = 0x46a169, .byte = 0xbb }
};

static const SST_Transaction asrb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4628840, .data = 41403, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte asrb_initial_ram_5[] = {
		{ .addr = 0xd362bc, .byte = 0xe8 },
		{ .addr = 0xd362bd, .byte = 0x20 },
		{ .addr = 0xd362be, .byte = 0x5a },
		{ .addr = 0xd362bf, .byte = 0x9f },
		{ .addr = 0xd362c0, .byte = 0x1b },
		{ .addr = 0xd362c1, .byte = 0x84 }
};

static const SST_RamByte asrb_final_ram_5[] = {
		{ .addr = 0xd362bc, .byte = 0xe8 },
		{ .addr = 0xd362bd, .byte = 0x20 },
		{ .addr = 0xd362be, .byte = 0x5a },
		{ .addr = 0xd362bf, .byte = 0x9f },
		{ .addr = 0xd362c0, .byte = 0x1b },
		{ .addr = 0xd362c1, .byte = 0x84 }
};

static const SST_Transaction asrb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13853376, .data = 7044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte asrb_initial_ram_6[] = {
		{ .addr = 0x9c59b2, .byte = 0xee },
		{ .addr = 0x9c59b3, .byte = 0x22 },
		{ .addr = 0x9c59b4, .byte = 0x0c },
		{ .addr = 0x9c59b5, .byte = 0x43 },
		{ .addr = 0x9c59b6, .byte = 0xc5 },
		{ .addr = 0x9c59b7, .byte = 0x27 }
};

static const SST_RamByte asrb_final_ram_6[] = {
		{ .addr = 0x9c59b2, .byte = 0xee },
		{ .addr = 0x9c59b3, .byte = 0x22 },
		{ .addr = 0x9c59b4, .byte = 0x0c },
		{ .addr = 0x9c59b5, .byte = 0x43 },
		{ .addr = 0x9c59b6, .byte = 0xc5 },
		{ .addr = 0x9c59b7, .byte = 0x27 }
};

static const SST_Transaction asrb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10246582, .data = 50471, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 106 },
};

static const SST_RamByte asrb_initial_ram_7[] = {
		{ .addr = 0xe2892a, .byte = 0xe6 },
		{ .addr = 0xe2892b, .byte = 0x05 },
		{ .addr = 0xe2892c, .byte = 0xaa },
		{ .addr = 0xe2892d, .byte = 0x0c },
		{ .addr = 0xe2892e, .byte = 0x86 },
		{ .addr = 0xe2892f, .byte = 0x1d }
};

static const SST_RamByte asrb_final_ram_7[] = {
		{ .addr = 0xe2892a, .byte = 0xe6 },
		{ .addr = 0xe2892b, .byte = 0x05 },
		{ .addr = 0xe2892c, .byte = 0xaa },
		{ .addr = 0xe2892d, .byte = 0x0c },
		{ .addr = 0xe2892e, .byte = 0x86 },
		{ .addr = 0xe2892f, .byte = 0x1d }
};

static const SST_Transaction asrb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14846254, .data = 34333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte asrb_initial_ram_8[] = {
		{ .addr = 0xcce03e, .byte = 0xe0 },
		{ .addr = 0xcce03f, .byte = 0x23 },
		{ .addr = 0xcce040, .byte = 0x24 },
		{ .addr = 0xcce041, .byte = 0x53 },
		{ .addr = 0xcce042, .byte = 0x1c },
		{ .addr = 0xcce043, .byte = 0xfa }
};

static const SST_RamByte asrb_final_ram_8[] = {
		{ .addr = 0xcce03e, .byte = 0xe0 },
		{ .addr = 0xcce03f, .byte = 0x23 },
		{ .addr = 0xcce040, .byte = 0x24 },
		{ .addr = 0xcce041, .byte = 0x53 },
		{ .addr = 0xcce042, .byte = 0x1c },
		{ .addr = 0xcce043, .byte = 0xfa }
};

static const SST_Transaction asrb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13426754, .data = 7418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 118 },
};

static const SST_RamByte asrb_initial_ram_9[] = {
		{ .addr = 0x6cba1c, .byte = 0xe4 },
		{ .addr = 0x6cba1d, .byte = 0x25 },
		{ .addr = 0x6cba1e, .byte = 0x42 },
		{ .addr = 0x6cba1f, .byte = 0xa2 },
		{ .addr = 0x6cba20, .byte = 0x32 },
		{ .addr = 0x6cba21, .byte = 0x4c }
};

static const SST_RamByte asrb_final_ram_9[] = {
		{ .addr = 0x6cba1c, .byte = 0xe4 },
		{ .addr = 0x6cba1d, .byte = 0x25 },
		{ .addr = 0x6cba1e, .byte = 0x42 },
		{ .addr = 0x6cba1f, .byte = 0xa2 },
		{ .addr = 0x6cba20, .byte = 0x32 },
		{ .addr = 0x6cba21, .byte = 0x4c }
};

static const SST_Transaction asrb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7125536, .data = 12876, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 82 },
};

static const SST_RamByte asrb_initial_ram_10[] = {
		{ .addr = 0x636252, .byte = 0xe4 },
		{ .addr = 0x636253, .byte = 0x03 },
		{ .addr = 0x636254, .byte = 0x91 },
		{ .addr = 0x636255, .byte = 0x9d },
		{ .addr = 0x636256, .byte = 0x2e },
		{ .addr = 0x636257, .byte = 0x5a }
};

static const SST_RamByte asrb_final_ram_10[] = {
		{ .addr = 0x636252, .byte = 0xe4 },
		{ .addr = 0x636253, .byte = 0x03 },
		{ .addr = 0x636254, .byte = 0x91 },
		{ .addr = 0x636255, .byte = 0x9d },
		{ .addr = 0x636256, .byte = 0x2e },
		{ .addr = 0x636257, .byte = 0x5a }
};

static const SST_Transaction asrb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6513238, .data = 11866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte asrb_initial_ram_11[] = {
		{ .addr = 0x6d7d1a, .byte = 0xe0 },
		{ .addr = 0x6d7d1b, .byte = 0x26 },
		{ .addr = 0x6d7d1c, .byte = 0x87 },
		{ .addr = 0x6d7d1d, .byte = 0x8c },
		{ .addr = 0x6d7d1e, .byte = 0x6f },
		{ .addr = 0x6d7d1f, .byte = 0xd8 }
};

static const SST_RamByte asrb_final_ram_11[] = {
		{ .addr = 0x6d7d1a, .byte = 0xe0 },
		{ .addr = 0x6d7d1b, .byte = 0x26 },
		{ .addr = 0x6d7d1c, .byte = 0x87 },
		{ .addr = 0x6d7d1d, .byte = 0x8c },
		{ .addr = 0x6d7d1e, .byte = 0x6f },
		{ .addr = 0x6d7d1f, .byte = 0xd8 }
};

static const SST_Transaction asrb_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7175454, .data = 28632, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

static const SST_RamByte asrb_initial_ram_12[] = {
		{ .addr = 0x00862a, .byte = 0xe2 },
		{ .addr = 0x00862b, .byte = 0x02 },
		{ .addr = 0x00862c, .byte = 0xda },
		{ .addr = 0x00862d, .byte = 0x8a },
		{ .addr = 0x00862e, .byte = 0xf2 },
		{ .addr = 0x00862f, .byte = 0x04 }
};

static const SST_RamByte asrb_final_ram_12[] = {
		{ .addr = 0x00862a, .byte = 0xe2 },
		{ .addr = 0x00862b, .byte = 0x02 },
		{ .addr = 0x00862c, .byte = 0xda },
		{ .addr = 0x00862d, .byte = 0x8a },
		{ .addr = 0x00862e, .byte = 0xf2 },
		{ .addr = 0x00862f, .byte = 0x04 }
};

static const SST_Transaction asrb_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 34350, .data = 61956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte asrb_initial_ram_13[] = {
		{ .addr = 0x1b48b2, .byte = 0xee },
		{ .addr = 0x1b48b3, .byte = 0x05 },
		{ .addr = 0x1b48b4, .byte = 0xc6 },
		{ .addr = 0x1b48b5, .byte = 0x96 },
		{ .addr = 0x1b48b6, .byte = 0xd7 },
		{ .addr = 0x1b48b7, .byte = 0x2b }
};

static const SST_RamByte asrb_final_ram_13[] = {
		{ .addr = 0x1b48b2, .byte = 0xee },
		{ .addr = 0x1b48b3, .byte = 0x05 },
		{ .addr = 0x1b48b4, .byte = 0xc6 },
		{ .addr = 0x1b48b5, .byte = 0x96 },
		{ .addr = 0x1b48b6, .byte = 0xd7 },
		{ .addr = 0x1b48b7, .byte = 0x2b }
};

static const SST_Transaction asrb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1788086, .data = 55083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte asrb_initial_ram_14[] = {
		{ .addr = 0xa74390, .byte = 0xe8 },
		{ .addr = 0xa74391, .byte = 0x00 },
		{ .addr = 0xa74392, .byte = 0x3c },
		{ .addr = 0xa74393, .byte = 0xa8 },
		{ .addr = 0xa74394, .byte = 0x4d },
		{ .addr = 0xa74395, .byte = 0x9d }
};

static const SST_RamByte asrb_final_ram_14[] = {
		{ .addr = 0xa74390, .byte = 0xe8 },
		{ .addr = 0xa74391, .byte = 0x00 },
		{ .addr = 0xa74392, .byte = 0x3c },
		{ .addr = 0xa74393, .byte = 0xa8 },
		{ .addr = 0xa74394, .byte = 0x4d },
		{ .addr = 0xa74395, .byte = 0x9d }
};

static const SST_Transaction asrb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10961812, .data = 19869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte asrb_initial_ram_15[] = {
		{ .addr = 0x5ddef0, .byte = 0xea },
		{ .addr = 0x5ddef1, .byte = 0x26 },
		{ .addr = 0x5ddef2, .byte = 0x10 },
		{ .addr = 0x5ddef3, .byte = 0x54 },
		{ .addr = 0x5ddef4, .byte = 0x25 },
		{ .addr = 0x5ddef5, .byte = 0x81 }
};

static const SST_RamByte asrb_final_ram_15[] = {
		{ .addr = 0x5ddef0, .byte = 0xea },
		{ .addr = 0x5ddef1, .byte = 0x26 },
		{ .addr = 0x5ddef2, .byte = 0x10 },
		{ .addr = 0x5ddef3, .byte = 0x54 },
		{ .addr = 0x5ddef4, .byte = 0x25 },
		{ .addr = 0x5ddef5, .byte = 0x81 }
};

static const SST_Transaction asrb_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6151924, .data = 9601, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 24 },
};

const uint32_t ASRB_TEST_COUNT = 16;
static const SST_TestCase asrb[] = {
	{
		.name = "000 ASR.b 6, D7 ec07",
		.initial = {
			.regs = {
				3230747358, 2027848517, 4233688550, 3253514341, 3686450787, 1571467791, 612264886, 1909330689, 49415762, 90675800, 617236057, 330260100, 4032526352, 1920135402, 3948925200, 7408808, 9172340, 41749, 16129048
			},
			.prefetch0 = 60423,
			.prefetch1 = 43272,
			.ram = asrb_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3230747358, 2027848517, 4233688550, 3253514341, 3686450787, 1571467791, 612264886, 1909330688, 49415762, 90675800, 617236057, 330260100, 4032526352, 1920135402, 3948925200, 7408808, 9172340, 41732, 16129050
			},
			.prefetch0 = 43272,
			.prefetch1 = 14892,
			.ram = asrb_final_ram_0,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_0,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "001 ASR.b 4, D0 e800",
		.initial = {
			.regs = {
				2181070398, 1006349599, 1513181571, 1070244642, 3925005992, 1894389306, 1897219231, 2239175861, 4103718772, 3601355655, 3358582469, 2550350430, 3788406607, 152838773, 2396669578, 8386420, 15121218, 42526, 4802810
			},
			.prefetch0 = 59392,
			.prefetch1 = 12726,
			.ram = asrb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2181070339, 1006349599, 1513181571, 1070244642, 3925005992, 1894389306, 1897219231, 2239175861, 4103718772, 3601355655, 3358582469, 2550350430, 3788406607, 152838773, 2396669578, 8386420, 15121218, 42513, 4802812
			},
			.prefetch0 = 12726,
			.prefetch1 = 13948,
			.ram = asrb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_1,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "002 ASR.b D3, D6 e626",
		.initial = {
			.regs = {
				663839192, 3540745705, 1309699383, 1947940503, 1787925872, 3343296537, 3888940092, 884430840, 1234233427, 724919623, 3910535641, 3163313466, 511054986, 2156903172, 1179706603, 12489374, 13715002, 9241, 16697924
			},
			.prefetch0 = 58918,
			.prefetch1 = 28189,
			.ram = asrb_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				663839192, 3540745705, 1309699383, 1947940503, 1787925872, 3343296537, 3888940032, 884430840, 1234233427, 724919623, 3910535641, 3163313466, 511054986, 2156903172, 1179706603, 12489374, 13715002, 9220, 16697926
			},
			.prefetch0 = 28189,
			.prefetch1 = 48286,
			.ram = asrb_final_ram_2,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_2,
		.transactions_len = 2,
		.lenght = 52,
	},
	{
		.name = "003 ASR.b 1, D6 e206",
		.initial = {
			.regs = {
				2704140939, 2208384538, 932631579, 2376659132, 2506326859, 504904715, 2833935150, 3633314076, 173721287, 3296634716, 1865641868, 1854169431, 2539582802, 954801794, 2506473186, 5536244, 8082068, 8727, 3394216
			},
			.prefetch0 = 57862,
			.prefetch1 = 2488,
			.ram = asrb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2704140939, 2208384538, 932631579, 2376659132, 2506326859, 504904715, 2833935127, 3633314076, 173721287, 3296634716, 1865641868, 1854169431, 2539582802, 954801794, 2506473186, 5536244, 8082068, 8704, 3394218
			},
			.prefetch0 = 2488,
			.prefetch1 = 22362,
			.ram = asrb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_3,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "004 ASR.b 5, D0 ea00",
		.initial = {
			.regs = {
				1387206794, 3655222532, 2123822716, 1607845816, 2238421363, 1476582570, 3476411500, 1318908372, 319376694, 2213414898, 2738965015, 592633277, 3667374199, 3964930852, 2098254293, 8881846, 6314968, 42767, 4628840
			},
			.prefetch0 = 59904,
			.prefetch1 = 10271,
			.ram = asrb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1387206908, 3655222532, 2123822716, 1607845816, 2238421363, 1476582570, 3476411500, 1318908372, 319376694, 2213414898, 2738965015, 592633277, 3667374199, 3964930852, 2098254293, 8881846, 6314968, 42760, 4628842
			},
			.prefetch0 = 10271,
			.prefetch1 = 41403,
			.ram = asrb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_4,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "005 ASR.b D4, D0 e820",
		.initial = {
			.regs = {
				491353162, 1722055579, 1597643534, 3263848749, 67725557, 3254044700, 1893629346, 3350293020, 1099380851, 627449189, 2290137385, 832708580, 1960088839, 1509081870, 1028531553, 7052920, 7524130, 11, 13853376
			},
			.prefetch0 = 59424,
			.prefetch1 = 23199,
			.ram = asrb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				491353088, 1722055579, 1597643534, 3263848749, 67725557, 3254044700, 1893629346, 3350293020, 1099380851, 627449189, 2290137385, 832708580, 1960088839, 1509081870, 1028531553, 7052920, 7524130, 4, 13853378
			},
			.prefetch0 = 23199,
			.prefetch1 = 7044,
			.ram = asrb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_5,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "006 ASR.b D7, D2 ee22",
		.initial = {
			.regs = {
				1470231034, 1199282371, 2185038128, 473305123, 1035162011, 2731428106, 3527067362, 1793537524, 1468475050, 818446793, 940838631, 3610612686, 809879334, 191793035, 265517111, 581882, 2620498, 41992, 10246582
			},
			.prefetch0 = 60962,
			.prefetch1 = 3139,
			.ram = asrb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1470231034, 1199282371, 2185038080, 473305123, 1035162011, 2731428106, 3527067362, 1793537524, 1468475050, 818446793, 940838631, 3610612686, 809879334, 191793035, 265517111, 581882, 2620498, 41988, 10246584
			},
			.prefetch0 = 3139,
			.prefetch1 = 50471,
			.ram = asrb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_6,
		.transactions_len = 2,
		.lenght = 110,
	},
	{
		.name = "007 ASR.b 3, D5 e605",
		.initial = {
			.regs = {
				3603610015, 1033607056, 3325464039, 3902221621, 1897152902, 1867086164, 763949859, 1219286541, 4293604264, 154416182, 3281826282, 807275624, 2986751454, 2772566146, 4210270281, 553356, 3234400, 42778, 14846254
			},
			.prefetch0 = 58885,
			.prefetch1 = 43532,
			.ram = asrb_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3603610015, 1033607056, 3325464039, 3902221621, 1897152902, 1867086090, 763949859, 1219286541, 4293604264, 154416182, 3281826282, 807275624, 2986751454, 2772566146, 4210270281, 553356, 3234400, 42769, 14846256
			},
			.prefetch0 = 43532,
			.prefetch1 = 34333,
			.ram = asrb_final_ram_7,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_7,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "008 ASR.b D0, D3 e023",
		.initial = {
			.regs = {
				3126716282, 2733816718, 1043101247, 2168862669, 1965603467, 931667743, 693662166, 3568452100, 275161864, 624565346, 3410430393, 4057365144, 3261953247, 1069248340, 8493161, 7073404, 8100860, 1053, 13426754
			},
			.prefetch0 = 57379,
			.prefetch1 = 9299,
			.ram = asrb_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3126716282, 2733816718, 1043101247, 2168862719, 1965603467, 931667743, 693662166, 3568452100, 275161864, 624565346, 3410430393, 4057365144, 3261953247, 1069248340, 8493161, 7073404, 8100860, 1049, 13426756
			},
			.prefetch0 = 9299,
			.prefetch1 = 7418,
			.ram = asrb_final_ram_8,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_8,
		.transactions_len = 2,
		.lenght = 122,
	},
	{
		.name = "009 ASR.b D2, D5 e425",
		.initial = {
			.regs = {
				20161611, 1881993709, 134616808, 23669905, 1389081707, 2914488781, 4074042477, 1925702590, 3971568470, 654250987, 2516110676, 3982196112, 691133296, 1132867239, 3919159056, 13104050, 15135214, 8211, 7125536
			},
			.prefetch0 = 58405,
			.prefetch1 = 17058,
			.ram = asrb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				20161611, 1881993709, 134616808, 23669905, 1389081707, 2914488831, 4074042477, 1925702590, 3971568470, 654250987, 2516110676, 3982196112, 691133296, 1132867239, 3919159056, 13104050, 15135214, 8217, 7125538
			},
			.prefetch0 = 17058,
			.prefetch1 = 12876,
			.ram = asrb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_9,
		.transactions_len = 2,
		.lenght = 86,
	},
	{
		.name = "010 ASR.b 2, D3 e403",
		.initial = {
			.regs = {
				1460084771, 528773328, 327178519, 1623084657, 1445542395, 809111221, 2198371297, 646110855, 2550665281, 3197261284, 984795692, 2724157518, 763619749, 4084019910, 3442134411, 2083560, 5889288, 42511, 6513238
			},
			.prefetch0 = 58371,
			.prefetch1 = 37277,
			.ram = asrb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1460084771, 528773328, 327178519, 1623084572, 1445542395, 809111221, 2198371297, 646110855, 2550665281, 3197261284, 984795692, 2724157518, 763619749, 4084019910, 3442134411, 2083560, 5889288, 42496, 6513240
			},
			.prefetch0 = 37277,
			.prefetch1 = 11866,
			.ram = asrb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_10,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "011 ASR.b D0, D6 e026",
		.initial = {
			.regs = {
				194096170, 2263229715, 185505000, 647486035, 163943451, 1157157330, 3279433176, 2462233934, 1486114558, 3370311372, 3010336084, 3082564897, 622502814, 1077522968, 3652475170, 6551132, 1803758, 9475, 7175454
			},
			.prefetch0 = 57382,
			.prefetch1 = 34700,
			.ram = asrb_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				194096170, 2263229715, 185505000, 647486035, 163943451, 1157157330, 3279433215, 2462233934, 1486114558, 3370311372, 3010336084, 3082564897, 622502814, 1077522968, 3652475170, 6551132, 1803758, 9497, 7175456
			},
			.prefetch0 = 34700,
			.prefetch1 = 28632,
			.ram = asrb_final_ram_11,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_11,
		.transactions_len = 2,
		.lenght = 90,
	},
	{
		.name = "012 ASR.b 1, D2 e202",
		.initial = {
			.regs = {
				195140940, 3726077723, 944209405, 3444360589, 2674062980, 1516596586, 535373820, 2937803195, 544177517, 2188668150, 2471457340, 3140526722, 890536974, 3483932068, 1061224471, 15867088, 15659912, 41241, 34350
			},
			.prefetch0 = 57858,
			.prefetch1 = 55946,
			.ram = asrb_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				195140940, 3726077723, 944209406, 3444360589, 2674062980, 1516596586, 535373820, 2937803195, 544177517, 2188668150, 2471457340, 3140526722, 890536974, 3483932068, 1061224471, 15867088, 15659912, 41241, 34352
			},
			.prefetch0 = 55946,
			.prefetch1 = 61956,
			.ram = asrb_final_ram_12,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 ASR.b 7, D5 ee05",
		.initial = {
			.regs = {
				536950155, 1559147631, 429333430, 1677718535, 2474220514, 698482788, 2623127825, 1853442938, 972315695, 3723014551, 3915562482, 391212279, 2923289156, 180450295, 4118340024, 5439478, 6783464, 535, 1788086
			},
			.prefetch0 = 60933,
			.prefetch1 = 50838,
			.ram = asrb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				536950155, 1559147631, 429333430, 1677718535, 2474220514, 698482688, 2623127825, 1853442938, 972315695, 3723014551, 3915562482, 391212279, 2923289156, 180450295, 4118340024, 5439478, 6783464, 533, 1788088
			},
			.prefetch0 = 50838,
			.prefetch1 = 55083,
			.ram = asrb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_13,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "014 ASR.b 4, D0 e800",
		.initial = {
			.regs = {
				110664547, 3983549148, 350552915, 1144114404, 259378742, 2585571375, 3243238988, 2437354565, 2224248280, 116085405, 4149386206, 2364451166, 4291828811, 583727614, 1516067046, 1781392, 15860268, 40966, 10961812
			},
			.prefetch0 = 59392,
			.prefetch1 = 15528,
			.ram = asrb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				110664454, 3983549148, 350552915, 1144114404, 259378742, 2585571375, 3243238988, 2437354565, 2224248280, 116085405, 4149386206, 2364451166, 4291828811, 583727614, 1516067046, 1781392, 15860268, 40960, 10961814
			},
			.prefetch0 = 15528,
			.prefetch1 = 19869,
			.ram = asrb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_14,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "015 ASR.b D5, D6 ea26",
		.initial = {
			.regs = {
				285286521, 1028166471, 4281651993, 3914125180, 597190582, 2856912203, 837383593, 1322612916, 493320203, 2337057663, 3574726831, 2188348591, 286625122, 755148141, 3375126002, 4955466, 254548, 33814, 6151924
			},
			.prefetch0 = 59942,
			.prefetch1 = 4180,
			.ram = asrb_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				285286521, 1028166471, 4281651993, 3914125180, 597190582, 2856912203, 837383679, 1322612916, 493320203, 2337057663, 3574726831, 2188348591, 286625122, 755148141, 3375126002, 4955466, 254548, 33817, 6151926
			},
			.prefetch0 = 4180,
			.prefetch1 = 9601,
			.ram = asrb_final_ram_15,
			.ram_len = 6,
		},
		.transactions = asrb_transactions_15,
		.transactions_len = 2,
		.lenght = 28,
	},
};

#endif /* RBT_ASRB_H */