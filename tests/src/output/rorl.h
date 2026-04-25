#ifndef RBT_RORL_H
#define RBT_RORL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rorl_initial_ram_0[] = {
		{ .addr = 0xb64882, .byte = 0xe0 },
		{ .addr = 0xb64883, .byte = 0x9f },
		{ .addr = 0xb64884, .byte = 0xf6 },
		{ .addr = 0xb64885, .byte = 0xfa },
		{ .addr = 0xb64886, .byte = 0x10 },
		{ .addr = 0xb64887, .byte = 0x6e }
};

static const SST_RamByte rorl_final_ram_0[] = {
		{ .addr = 0xb64882, .byte = 0xe0 },
		{ .addr = 0xb64883, .byte = 0x9f },
		{ .addr = 0xb64884, .byte = 0xf6 },
		{ .addr = 0xb64885, .byte = 0xfa },
		{ .addr = 0xb64886, .byte = 0x10 },
		{ .addr = 0xb64887, .byte = 0x6e }
};

static const SST_Transaction rorl_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11946118, .data = 4206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte rorl_initial_ram_1[] = {
		{ .addr = 0xc7f90a, .byte = 0xea },
		{ .addr = 0xc7f90b, .byte = 0x99 },
		{ .addr = 0xc7f90c, .byte = 0xd2 },
		{ .addr = 0xc7f90d, .byte = 0x6e },
		{ .addr = 0xc7f90e, .byte = 0x20 },
		{ .addr = 0xc7f90f, .byte = 0xbb }
};

static const SST_RamByte rorl_final_ram_1[] = {
		{ .addr = 0xc7f90a, .byte = 0xea },
		{ .addr = 0xc7f90b, .byte = 0x99 },
		{ .addr = 0xc7f90c, .byte = 0xd2 },
		{ .addr = 0xc7f90d, .byte = 0x6e },
		{ .addr = 0xc7f90e, .byte = 0x20 },
		{ .addr = 0xc7f90f, .byte = 0xbb }
};

static const SST_Transaction rorl_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13105422, .data = 8379, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rorl_initial_ram_2[] = {
		{ .addr = 0x7318c0, .byte = 0xe0 },
		{ .addr = 0x7318c1, .byte = 0xba },
		{ .addr = 0x7318c2, .byte = 0xce },
		{ .addr = 0x7318c3, .byte = 0x2d },
		{ .addr = 0x7318c4, .byte = 0x29 },
		{ .addr = 0x7318c5, .byte = 0xf6 }
};

static const SST_RamByte rorl_final_ram_2[] = {
		{ .addr = 0x7318c0, .byte = 0xe0 },
		{ .addr = 0x7318c1, .byte = 0xba },
		{ .addr = 0x7318c2, .byte = 0xce },
		{ .addr = 0x7318c3, .byte = 0x2d },
		{ .addr = 0x7318c4, .byte = 0x29 },
		{ .addr = 0x7318c5, .byte = 0xf6 }
};

static const SST_Transaction rorl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7542980, .data = 10742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 32 },
};

static const SST_RamByte rorl_initial_ram_3[] = {
		{ .addr = 0x1d153a, .byte = 0xe4 },
		{ .addr = 0x1d153b, .byte = 0xbc },
		{ .addr = 0x1d153c, .byte = 0x07 },
		{ .addr = 0x1d153d, .byte = 0xcf },
		{ .addr = 0x1d153e, .byte = 0x8f },
		{ .addr = 0x1d153f, .byte = 0xe1 }
};

static const SST_RamByte rorl_final_ram_3[] = {
		{ .addr = 0x1d153a, .byte = 0xe4 },
		{ .addr = 0x1d153b, .byte = 0xbc },
		{ .addr = 0x1d153c, .byte = 0x07 },
		{ .addr = 0x1d153d, .byte = 0xcf },
		{ .addr = 0x1d153e, .byte = 0x8f },
		{ .addr = 0x1d153f, .byte = 0xe1 }
};

static const SST_Transaction rorl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1905982, .data = 36833, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 110 },
};

static const SST_RamByte rorl_initial_ram_4[] = {
		{ .addr = 0x811866, .byte = 0xe0 },
		{ .addr = 0x811867, .byte = 0xbb },
		{ .addr = 0x811868, .byte = 0xa5 },
		{ .addr = 0x811869, .byte = 0x8a },
		{ .addr = 0x81186a, .byte = 0x5f },
		{ .addr = 0x81186b, .byte = 0x93 }
};

static const SST_RamByte rorl_final_ram_4[] = {
		{ .addr = 0x811866, .byte = 0xe0 },
		{ .addr = 0x811867, .byte = 0xbb },
		{ .addr = 0x811868, .byte = 0xa5 },
		{ .addr = 0x811869, .byte = 0x8a },
		{ .addr = 0x81186a, .byte = 0x5f },
		{ .addr = 0x81186b, .byte = 0x93 }
};

static const SST_Transaction rorl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8460394, .data = 24467, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 66 },
};

static const SST_RamByte rorl_initial_ram_5[] = {
		{ .addr = 0x6b2fe2, .byte = 0xe0 },
		{ .addr = 0x6b2fe3, .byte = 0xba },
		{ .addr = 0x6b2fe4, .byte = 0xd3 },
		{ .addr = 0x6b2fe5, .byte = 0x8c },
		{ .addr = 0x6b2fe6, .byte = 0x21 },
		{ .addr = 0x6b2fe7, .byte = 0xbc }
};

static const SST_RamByte rorl_final_ram_5[] = {
		{ .addr = 0x6b2fe2, .byte = 0xe0 },
		{ .addr = 0x6b2fe3, .byte = 0xba },
		{ .addr = 0x6b2fe4, .byte = 0xd3 },
		{ .addr = 0x6b2fe5, .byte = 0x8c },
		{ .addr = 0x6b2fe6, .byte = 0x21 },
		{ .addr = 0x6b2fe7, .byte = 0xbc }
};

static const SST_Transaction rorl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7024614, .data = 8636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte rorl_initial_ram_6[] = {
		{ .addr = 0xbd8f2c, .byte = 0xec },
		{ .addr = 0xbd8f2d, .byte = 0x9c },
		{ .addr = 0xbd8f2e, .byte = 0x74 },
		{ .addr = 0xbd8f2f, .byte = 0x92 },
		{ .addr = 0xbd8f30, .byte = 0xeb },
		{ .addr = 0xbd8f31, .byte = 0xaf }
};

static const SST_RamByte rorl_final_ram_6[] = {
		{ .addr = 0xbd8f2c, .byte = 0xec },
		{ .addr = 0xbd8f2d, .byte = 0x9c },
		{ .addr = 0xbd8f2e, .byte = 0x74 },
		{ .addr = 0xbd8f2f, .byte = 0x92 },
		{ .addr = 0xbd8f30, .byte = 0xeb },
		{ .addr = 0xbd8f31, .byte = 0xaf }
};

static const SST_Transaction rorl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12422960, .data = 60335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rorl_initial_ram_7[] = {
		{ .addr = 0xf84b52, .byte = 0xe4 },
		{ .addr = 0xf84b53, .byte = 0x9d },
		{ .addr = 0xf84b54, .byte = 0x44 },
		{ .addr = 0xf84b55, .byte = 0x25 },
		{ .addr = 0xf84b56, .byte = 0x37 },
		{ .addr = 0xf84b57, .byte = 0x93 }
};

static const SST_RamByte rorl_final_ram_7[] = {
		{ .addr = 0xf84b52, .byte = 0xe4 },
		{ .addr = 0xf84b53, .byte = 0x9d },
		{ .addr = 0xf84b54, .byte = 0x44 },
		{ .addr = 0xf84b55, .byte = 0x25 },
		{ .addr = 0xf84b56, .byte = 0x37 },
		{ .addr = 0xf84b57, .byte = 0x93 }
};

static const SST_Transaction rorl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16272214, .data = 14227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rorl_initial_ram_8[] = {
		{ .addr = 0xea0c22, .byte = 0xe0 },
		{ .addr = 0xea0c23, .byte = 0x9d },
		{ .addr = 0xea0c24, .byte = 0x14 },
		{ .addr = 0xea0c25, .byte = 0xc0 },
		{ .addr = 0xea0c26, .byte = 0x68 },
		{ .addr = 0xea0c27, .byte = 0x10 }
};

static const SST_RamByte rorl_final_ram_8[] = {
		{ .addr = 0xea0c22, .byte = 0xe0 },
		{ .addr = 0xea0c23, .byte = 0x9d },
		{ .addr = 0xea0c24, .byte = 0x14 },
		{ .addr = 0xea0c25, .byte = 0xc0 },
		{ .addr = 0xea0c26, .byte = 0x68 },
		{ .addr = 0xea0c27, .byte = 0x10 }
};

static const SST_Transaction rorl_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15338534, .data = 26640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte rorl_initial_ram_9[] = {
		{ .addr = 0x02a63c, .byte = 0xee },
		{ .addr = 0x02a63d, .byte = 0xbb },
		{ .addr = 0x02a63e, .byte = 0xc9 },
		{ .addr = 0x02a63f, .byte = 0xf7 },
		{ .addr = 0x02a640, .byte = 0x23 },
		{ .addr = 0x02a641, .byte = 0x27 }
};

static const SST_RamByte rorl_final_ram_9[] = {
		{ .addr = 0x02a63c, .byte = 0xee },
		{ .addr = 0x02a63d, .byte = 0xbb },
		{ .addr = 0x02a63e, .byte = 0xc9 },
		{ .addr = 0x02a63f, .byte = 0xf7 },
		{ .addr = 0x02a640, .byte = 0x23 },
		{ .addr = 0x02a641, .byte = 0x27 }
};

static const SST_Transaction rorl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 173632, .data = 8999, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte rorl_initial_ram_10[] = {
		{ .addr = 0xc4223c, .byte = 0xe6 },
		{ .addr = 0xc4223d, .byte = 0xbb },
		{ .addr = 0xc4223e, .byte = 0x12 },
		{ .addr = 0xc4223f, .byte = 0x21 },
		{ .addr = 0xc42240, .byte = 0x59 },
		{ .addr = 0xc42241, .byte = 0x97 }
};

static const SST_RamByte rorl_final_ram_10[] = {
		{ .addr = 0xc4223c, .byte = 0xe6 },
		{ .addr = 0xc4223d, .byte = 0xbb },
		{ .addr = 0xc4223e, .byte = 0x12 },
		{ .addr = 0xc4223f, .byte = 0x21 },
		{ .addr = 0xc42240, .byte = 0x59 },
		{ .addr = 0xc42241, .byte = 0x97 }
};

static const SST_Transaction rorl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12853824, .data = 22935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 130 },
};

static const SST_RamByte rorl_initial_ram_11[] = {
		{ .addr = 0x13ba6a, .byte = 0xe2 },
		{ .addr = 0x13ba6b, .byte = 0xba },
		{ .addr = 0x13ba6c, .byte = 0x61 },
		{ .addr = 0x13ba6d, .byte = 0x69 },
		{ .addr = 0x13ba6e, .byte = 0x4e },
		{ .addr = 0x13ba6f, .byte = 0xa9 }
};

static const SST_RamByte rorl_final_ram_11[] = {
		{ .addr = 0x13ba6a, .byte = 0xe2 },
		{ .addr = 0x13ba6b, .byte = 0xba },
		{ .addr = 0x13ba6c, .byte = 0x61 },
		{ .addr = 0x13ba6d, .byte = 0x69 },
		{ .addr = 0x13ba6e, .byte = 0x4e },
		{ .addr = 0x13ba6f, .byte = 0xa9 }
};

static const SST_Transaction rorl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1292910, .data = 20137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 72 },
};

static const SST_RamByte rorl_initial_ram_12[] = {
		{ .addr = 0x599a32, .byte = 0xe4 },
		{ .addr = 0x599a33, .byte = 0xbf },
		{ .addr = 0x599a34, .byte = 0x42 },
		{ .addr = 0x599a35, .byte = 0xba },
		{ .addr = 0x599a36, .byte = 0xed },
		{ .addr = 0x599a37, .byte = 0x52 }
};

static const SST_RamByte rorl_final_ram_12[] = {
		{ .addr = 0x599a32, .byte = 0xe4 },
		{ .addr = 0x599a33, .byte = 0xbf },
		{ .addr = 0x599a34, .byte = 0x42 },
		{ .addr = 0x599a35, .byte = 0xba },
		{ .addr = 0x599a36, .byte = 0xed },
		{ .addr = 0x599a37, .byte = 0x52 }
};

static const SST_Transaction rorl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5872182, .data = 60754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 32 },
};

static const SST_RamByte rorl_initial_ram_13[] = {
		{ .addr = 0x32fb68, .byte = 0xe0 },
		{ .addr = 0x32fb69, .byte = 0xbc },
		{ .addr = 0x32fb6a, .byte = 0x97 },
		{ .addr = 0x32fb6b, .byte = 0x00 },
		{ .addr = 0x32fb6c, .byte = 0xea },
		{ .addr = 0x32fb6d, .byte = 0xe6 }
};

static const SST_RamByte rorl_final_ram_13[] = {
		{ .addr = 0x32fb68, .byte = 0xe0 },
		{ .addr = 0x32fb69, .byte = 0xbc },
		{ .addr = 0x32fb6a, .byte = 0x97 },
		{ .addr = 0x32fb6b, .byte = 0x00 },
		{ .addr = 0x32fb6c, .byte = 0xea },
		{ .addr = 0x32fb6d, .byte = 0xe6 }
};

static const SST_Transaction rorl_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3341164, .data = 60134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 110 },
};

static const SST_RamByte rorl_initial_ram_14[] = {
		{ .addr = 0x31767e, .byte = 0xe6 },
		{ .addr = 0x31767f, .byte = 0x98 },
		{ .addr = 0x317680, .byte = 0x13 },
		{ .addr = 0x317681, .byte = 0xe5 },
		{ .addr = 0x317682, .byte = 0x5c },
		{ .addr = 0x317683, .byte = 0xb9 }
};

static const SST_RamByte rorl_final_ram_14[] = {
		{ .addr = 0x31767e, .byte = 0xe6 },
		{ .addr = 0x31767f, .byte = 0x98 },
		{ .addr = 0x317680, .byte = 0x13 },
		{ .addr = 0x317681, .byte = 0xe5 },
		{ .addr = 0x317682, .byte = 0x5c },
		{ .addr = 0x317683, .byte = 0xb9 }
};

static const SST_Transaction rorl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3241602, .data = 23737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte rorl_initial_ram_15[] = {
		{ .addr = 0x9d60e8, .byte = 0xe4 },
		{ .addr = 0x9d60e9, .byte = 0xbe },
		{ .addr = 0x9d60ea, .byte = 0x38 },
		{ .addr = 0x9d60eb, .byte = 0x6d },
		{ .addr = 0x9d60ec, .byte = 0x41 },
		{ .addr = 0x9d60ed, .byte = 0xe9 }
};

static const SST_RamByte rorl_final_ram_15[] = {
		{ .addr = 0x9d60e8, .byte = 0xe4 },
		{ .addr = 0x9d60e9, .byte = 0xbe },
		{ .addr = 0x9d60ea, .byte = 0x38 },
		{ .addr = 0x9d60eb, .byte = 0x6d },
		{ .addr = 0x9d60ec, .byte = 0x41 },
		{ .addr = 0x9d60ed, .byte = 0xe9 }
};

static const SST_Transaction rorl_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10313964, .data = 16873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

const uint32_t RORL_TEST_COUNT = 16;
static const SST_TestCase rorl[] = {
	{
		.name = "000 ROR.l 8, D7 e09f",
		.initial = {
			.regs = {
				2524685064, 4113957086, 995541485, 52428502, 2827781911, 1326447816, 612819895, 4034337311, 2655973454, 223370409, 333792192, 3637965723, 1602637634, 1216760314, 369516563, 9798282, 6026594, 34078, 11946118
			},
			.prefetch0 = 57503,
			.prefetch1 = 63226,
			.ram = rorl_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2524685064, 4113957086, 995541485, 52428502, 2827781911, 1326447816, 612819895, 535852826, 2655973454, 223370409, 333792192, 3637965723, 1602637634, 1216760314, 369516563, 9798282, 6026594, 34064, 11946120
			},
			.prefetch0 = 63226,
			.prefetch1 = 4206,
			.ram = rorl_final_ram_0,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_0,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "001 ROR.l 5, D1 ea99",
		.initial = {
			.regs = {
				1674298657, 435671376, 945548101, 126540448, 3294749887, 1074710228, 3123344383, 4087032397, 1277579225, 1979755305, 2931677397, 4218522207, 806960155, 548555974, 2315258377, 9848336, 16428562, 34063, 13105422
			},
			.prefetch0 = 60057,
			.prefetch1 = 53870,
			.ram = rorl_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1674298657, 2161098378, 945548101, 126540448, 3294749887, 1074710228, 3123344383, 4087032397, 1277579225, 1979755305, 2931677397, 4218522207, 806960155, 548555974, 2315258377, 9848336, 16428562, 34057, 13105424
			},
			.prefetch0 = 53870,
			.prefetch1 = 8379,
			.ram = rorl_final_ram_1,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_1,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "002 ROR.l D0, D2 e0ba",
		.initial = {
			.regs = {
				3387094926, 3262746610, 3957615514, 2035746623, 1686927664, 4032885893, 570141219, 1480011656, 2472767315, 671142464, 3689155444, 1091288090, 3276217234, 1806798441, 2214704724, 5585892, 9075572, 42503, 7542980
			},
			.prefetch0 = 57530,
			.prefetch1 = 52781,
			.ram = rorl_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3387094926, 3262746610, 2926292881, 2035746623, 1686927664, 4032885893, 570141219, 1480011656, 2472767315, 671142464, 3689155444, 1091288090, 3276217234, 1806798441, 2214704724, 5585892, 9075572, 42505, 7542982
			},
			.prefetch0 = 52781,
			.prefetch1 = 10742,
			.ram = rorl_final_ram_2,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_2,
		.transactions_len = 2,
		.lenght = 36,
	},
	{
		.name = "003 ROR.l D2, D4 e4bc",
		.initial = {
			.regs = {
				2409902084, 1490509839, 2424478005, 114781881, 653414805, 471610392, 1093829343, 1718401344, 3239674756, 1366801629, 3305826598, 2295702340, 1666442515, 1739587210, 4164426496, 4249018, 5642038, 9478, 1905982
			},
			.prefetch0 = 58556,
			.prefetch1 = 1999,
			.ram = rorl_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2409902084, 1490509839, 2424478005, 114781881, 2458691895, 471610392, 1093829343, 1718401344, 3239674756, 1366801629, 3305826598, 2295702340, 1666442515, 1739587210, 4164426496, 4249018, 5642038, 9481, 1905984
			},
			.prefetch0 = 1999,
			.prefetch1 = 36833,
			.ram = rorl_final_ram_3,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_3,
		.transactions_len = 2,
		.lenght = 114,
	},
	{
		.name = "004 ROR.l D0, D3 e0bb",
		.initial = {
			.regs = {
				1770369759, 3337973205, 1950868518, 164469009, 2963247925, 4000053771, 481952715, 3195974227, 2304892613, 2557900384, 961235610, 722619290, 3134499256, 3559740122, 632887123, 12417200, 14078142, 34584, 8460394
			},
			.prefetch0 = 57531,
			.prefetch1 = 42378,
			.ram = rorl_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1770369759, 3337973205, 1950868518, 328938018, 2963247925, 4000053771, 481952715, 3195974227, 2304892613, 2557900384, 961235610, 722619290, 3134499256, 3559740122, 632887123, 12417200, 14078142, 34576, 8460396
			},
			.prefetch0 = 42378,
			.prefetch1 = 24467,
			.ram = rorl_final_ram_4,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_4,
		.transactions_len = 2,
		.lenght = 70,
	},
	{
		.name = "005 ROR.l D0, D2 e0ba",
		.initial = {
			.regs = {
				2213423021, 3662805311, 2160119074, 2838061274, 980023390, 3530543881, 4190172936, 3845935427, 2007184279, 4040722953, 3229618325, 2750761293, 207005512, 1146969180, 71510140, 16675798, 6564994, 41485, 7024614
			},
			.prefetch0 = 57530,
			.prefetch1 = 54156,
			.ram = rorl_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2213423021, 3662805311, 1762919942, 2838061274, 980023390, 3530543881, 4190172936, 3845935427, 2007184279, 4040722953, 3229618325, 2750761293, 207005512, 1146969180, 71510140, 16675798, 6564994, 41472, 7024616
			},
			.prefetch0 = 54156,
			.prefetch1 = 8636,
			.ram = rorl_final_ram_5,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_5,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "006 ROR.l 6, D4 ec9c",
		.initial = {
			.regs = {
				3995897997, 2224887761, 525004930, 727439549, 2477772162, 4137535249, 1846834011, 3563967861, 930959285, 3368225368, 2501142685, 2294718268, 3610238664, 1119277619, 2272630505, 8270320, 9456396, 40974, 12422960
			},
			.prefetch0 = 60572,
			.prefetch1 = 29842,
			.ram = rorl_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3995897997, 2224887761, 525004930, 727439549, 172932918, 4137535249, 1846834011, 3563967861, 930959285, 3368225368, 2501142685, 2294718268, 3610238664, 1119277619, 2272630505, 8270320, 9456396, 40960, 12422962
			},
			.prefetch0 = 29842,
			.prefetch1 = 60335,
			.ram = rorl_final_ram_6,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_6,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "007 ROR.l 2, D5 e49d",
		.initial = {
			.regs = {
				1908493403, 3501715527, 4037243383, 841096558, 656318950, 1292144119, 194728572, 2317263580, 1878737213, 3919384786, 1146417559, 1036120603, 3684414816, 418334937, 1776865327, 11389734, 3659600, 42521, 16272214
			},
			.prefetch0 = 58525,
			.prefetch1 = 17445,
			.ram = rorl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1908493403, 3501715527, 4037243383, 841096558, 656318950, 3544261501, 194728572, 2317263580, 1878737213, 3919384786, 1146417559, 1036120603, 3684414816, 418334937, 1776865327, 11389734, 3659600, 42521, 16272216
			},
			.prefetch0 = 17445,
			.prefetch1 = 14227,
			.ram = rorl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_7,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "008 ROR.l 8, D5 e09d",
		.initial = {
			.regs = {
				2451943078, 3117187102, 411411954, 253628641, 1684296628, 128320014, 608276916, 2626695223, 4228255486, 2738968413, 3995850948, 3919111965, 3771943039, 2519986574, 2936493407, 7177084, 7519890, 8476, 15338534
			},
			.prefetch0 = 57501,
			.prefetch1 = 5312,
			.ram = rorl_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2451943078, 3117187102, 411411954, 253628641, 1684296628, 235382274, 608276916, 2626695223, 4228255486, 2738968413, 3995850948, 3919111965, 3771943039, 2519986574, 2936493407, 7177084, 7519890, 8464, 15338536
			},
			.prefetch0 = 5312,
			.prefetch1 = 26640,
			.ram = rorl_final_ram_8,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_8,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "009 ROR.l D7, D3 eebb",
		.initial = {
			.regs = {
				118021281, 1855662567, 376299556, 2732017593, 2749410766, 3035775089, 627835879, 264001325, 1090145642, 3469931622, 2862171015, 1741696390, 3524584144, 159837246, 3288626155, 13848792, 14382018, 8718, 173632
			},
			.prefetch0 = 61115,
			.prefetch1 = 51703,
			.ram = rorl_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				118021281, 1855662567, 376299556, 1036850874, 2749410766, 3035775089, 627835879, 264001325, 1090145642, 3469931622, 2862171015, 1741696390, 3524584144, 159837246, 3288626155, 13848792, 14382018, 8704, 173634
			},
			.prefetch0 = 51703,
			.prefetch1 = 8999,
			.ram = rorl_final_ram_9,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_9,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "010 ROR.l D3, D3 e6bb",
		.initial = {
			.regs = {
				1751215972, 663305615, 2780013944, 111342975, 3781639440, 2278034362, 4126623513, 1048778620, 204026479, 316310213, 3615220050, 4160205592, 1214893520, 472891293, 971152141, 16156438, 10974488, 34062, 12853824
			},
			.prefetch0 = 59067,
			.prefetch1 = 4641,
			.ram = rorl_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1751215972, 663305615, 2780013944, 222685950, 3781639440, 2278034362, 4126623513, 1048778620, 204026479, 316310213, 3615220050, 4160205592, 1214893520, 472891293, 971152141, 16156438, 10974488, 34048, 12853826
			},
			.prefetch0 = 4641,
			.prefetch1 = 22935,
			.ram = rorl_final_ram_10,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_10,
		.transactions_len = 2,
		.lenght = 134,
	},
	{
		.name = "011 ROR.l D1, D2 e2ba",
		.initial = {
			.regs = {
				3532945597, 1220477410, 865887297, 2579896767, 739646259, 4102695891, 1137506341, 355849749, 3641148107, 1192594765, 3994539892, 3098724272, 1992117368, 1140775445, 746195220, 6770106, 16513266, 10003, 1292910
			},
			.prefetch0 = 58042,
			.prefetch1 = 24937,
			.ram = rorl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3532945597, 1220477410, 1290213648, 2579896767, 739646259, 4102695891, 1137506341, 355849749, 3641148107, 1192594765, 3994539892, 3098724272, 1992117368, 1140775445, 746195220, 6770106, 16513266, 10000, 1292912
			},
			.prefetch0 = 24937,
			.prefetch1 = 20137,
			.ram = rorl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_11,
		.transactions_len = 2,
		.lenght = 76,
	},
	{
		.name = "012 ROR.l D2, D7 e4bf",
		.initial = {
			.regs = {
				136265163, 309357908, 2257951118, 411406472, 1063847500, 2734720775, 14400610, 3496265786, 327380821, 311306370, 3317278058, 2456884486, 3897877079, 109651391, 3758298302, 3367954, 4752744, 33303, 5872182
			},
			.prefetch0 = 58559,
			.prefetch1 = 17082,
			.ram = rorl_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				136265163, 309357908, 2257951118, 411406472, 1063847500, 2734720775, 14400610, 552288659, 327380821, 311306370, 3317278058, 2456884486, 3897877079, 109651391, 3758298302, 3367954, 4752744, 33296, 5872184
			},
			.prefetch0 = 17082,
			.prefetch1 = 60754,
			.ram = rorl_final_ram_12,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_12,
		.transactions_len = 2,
		.lenght = 36,
	},
	{
		.name = "013 ROR.l D0, D4 e0bc",
		.initial = {
			.regs = {
				2793121525, 631206820, 3062797945, 4030608009, 2991960705, 3219025484, 412329677, 1024218744, 1286708734, 4236816570, 1164063330, 907849214, 3590669288, 868087225, 1385395877, 2614344, 7994282, 33282, 3341164
			},
			.prefetch0 = 57532,
			.prefetch1 = 38656,
			.ram = rorl_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2793121525, 631206820, 3062797945, 4030608009, 2912161170, 3219025484, 412329677, 1024218744, 1286708734, 4236816570, 1164063330, 907849214, 3590669288, 868087225, 1385395877, 2614344, 7994282, 33289, 3341166
			},
			.prefetch0 = 38656,
			.prefetch1 = 60134,
			.ram = rorl_final_ram_13,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_13,
		.transactions_len = 2,
		.lenght = 114,
	},
	{
		.name = "014 ROR.l 3, D0 e698",
		.initial = {
			.regs = {
				3960622160, 2606062085, 2109497003, 3244716418, 3064116371, 1904610217, 1310770694, 1226767442, 3775128235, 246586325, 3379172920, 3387932283, 2028147984, 182463136, 2398001097, 12812122, 13899572, 1035, 3241602
			},
			.prefetch0 = 59032,
			.prefetch1 = 5093,
			.ram = rorl_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				495077770, 2606062085, 2109497003, 3244716418, 3064116371, 1904610217, 1310770694, 1226767442, 3775128235, 246586325, 3379172920, 3387932283, 2028147984, 182463136, 2398001097, 12812122, 13899572, 1024, 3241604
			},
			.prefetch0 = 5093,
			.prefetch1 = 23737,
			.ram = rorl_final_ram_14,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_14,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "015 ROR.l D2, D6 e4be",
		.initial = {
			.regs = {
				2229015211, 2404002117, 3418644020, 2770213053, 2067075097, 386605195, 1872874254, 414117369, 322682394, 871195058, 1660675884, 364027932, 1297884201, 1852483112, 1103239160, 13715534, 15096134, 1044, 10313964
			},
			.prefetch0 = 58558,
			.prefetch1 = 14445,
			.ram = rorl_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2229015211, 2404002117, 3418644020, 2770213053, 2067075097, 386605195, 481355514, 414117369, 322682394, 871195058, 1660675884, 364027932, 1297884201, 1852483112, 1103239160, 13715534, 15096134, 1040, 10313966
			},
			.prefetch0 = 14445,
			.prefetch1 = 16873,
			.ram = rorl_final_ram_15,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_15,
		.transactions_len = 2,
		.lenght = 112,
	},
};

#endif /* RBT_RORL_H */