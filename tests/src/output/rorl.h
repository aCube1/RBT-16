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

static const SST_RamByte rorl_initial_ram_16[] = {
		{ .addr = 0xa3a728, .byte = 0xe4 },
		{ .addr = 0xa3a729, .byte = 0xb8 },
		{ .addr = 0xa3a72a, .byte = 0xcc },
		{ .addr = 0xa3a72b, .byte = 0xb9 },
		{ .addr = 0xa3a72c, .byte = 0x2b },
		{ .addr = 0xa3a72d, .byte = 0x82 }
};

static const SST_RamByte rorl_final_ram_16[] = {
		{ .addr = 0xa3a728, .byte = 0xe4 },
		{ .addr = 0xa3a729, .byte = 0xb8 },
		{ .addr = 0xa3a72a, .byte = 0xcc },
		{ .addr = 0xa3a72b, .byte = 0xb9 },
		{ .addr = 0xa3a72c, .byte = 0x2b },
		{ .addr = 0xa3a72d, .byte = 0x82 }
};

static const SST_Transaction rorl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10725164, .data = 11138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 114 },
};

static const SST_RamByte rorl_initial_ram_17[] = {
		{ .addr = 0xcb19c0, .byte = 0xec },
		{ .addr = 0xcb19c1, .byte = 0x9b },
		{ .addr = 0xcb19c2, .byte = 0x19 },
		{ .addr = 0xcb19c3, .byte = 0xdf },
		{ .addr = 0xcb19c4, .byte = 0x3f },
		{ .addr = 0xcb19c5, .byte = 0xb7 }
};

static const SST_RamByte rorl_final_ram_17[] = {
		{ .addr = 0xcb19c0, .byte = 0xec },
		{ .addr = 0xcb19c1, .byte = 0x9b },
		{ .addr = 0xcb19c2, .byte = 0x19 },
		{ .addr = 0xcb19c3, .byte = 0xdf },
		{ .addr = 0xcb19c4, .byte = 0x3f },
		{ .addr = 0xcb19c5, .byte = 0xb7 }
};

static const SST_Transaction rorl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13310404, .data = 16311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte rorl_initial_ram_18[] = {
		{ .addr = 0x8e82c4, .byte = 0xe8 },
		{ .addr = 0x8e82c5, .byte = 0xb8 },
		{ .addr = 0x8e82c6, .byte = 0x92 },
		{ .addr = 0x8e82c7, .byte = 0x2c },
		{ .addr = 0x8e82c8, .byte = 0x93 },
		{ .addr = 0x8e82c9, .byte = 0x50 }
};

static const SST_RamByte rorl_final_ram_18[] = {
		{ .addr = 0x8e82c4, .byte = 0xe8 },
		{ .addr = 0x8e82c5, .byte = 0xb8 },
		{ .addr = 0x8e82c6, .byte = 0x92 },
		{ .addr = 0x8e82c7, .byte = 0x2c },
		{ .addr = 0x8e82c8, .byte = 0x93 },
		{ .addr = 0x8e82c9, .byte = 0x50 }
};

static const SST_Transaction rorl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9339592, .data = 37712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 50 },
};

static const SST_RamByte rorl_initial_ram_19[] = {
		{ .addr = 0x80ae98, .byte = 0xea },
		{ .addr = 0x80ae99, .byte = 0xb9 },
		{ .addr = 0x80ae9a, .byte = 0x8b },
		{ .addr = 0x80ae9b, .byte = 0x82 },
		{ .addr = 0x80ae9c, .byte = 0x5c },
		{ .addr = 0x80ae9d, .byte = 0x85 }
};

static const SST_RamByte rorl_final_ram_19[] = {
		{ .addr = 0x80ae98, .byte = 0xea },
		{ .addr = 0x80ae99, .byte = 0xb9 },
		{ .addr = 0x80ae9a, .byte = 0x8b },
		{ .addr = 0x80ae9b, .byte = 0x82 },
		{ .addr = 0x80ae9c, .byte = 0x5c },
		{ .addr = 0x80ae9d, .byte = 0x85 }
};

static const SST_Transaction rorl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8433308, .data = 23685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 124 },
};

static const SST_RamByte rorl_initial_ram_20[] = {
		{ .addr = 0x989e84, .byte = 0xe6 },
		{ .addr = 0x989e85, .byte = 0xba },
		{ .addr = 0x989e86, .byte = 0xb6 },
		{ .addr = 0x989e87, .byte = 0x59 },
		{ .addr = 0x989e88, .byte = 0x75 },
		{ .addr = 0x989e89, .byte = 0xf2 }
};

static const SST_RamByte rorl_final_ram_20[] = {
		{ .addr = 0x989e84, .byte = 0xe6 },
		{ .addr = 0x989e85, .byte = 0xba },
		{ .addr = 0x989e86, .byte = 0xb6 },
		{ .addr = 0x989e87, .byte = 0x59 },
		{ .addr = 0x989e88, .byte = 0x75 },
		{ .addr = 0x989e89, .byte = 0xf2 }
};

static const SST_Transaction rorl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10002056, .data = 30194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte rorl_initial_ram_21[] = {
		{ .addr = 0x1cbfa6, .byte = 0xe4 },
		{ .addr = 0x1cbfa7, .byte = 0xb9 },
		{ .addr = 0x1cbfa8, .byte = 0x30 },
		{ .addr = 0x1cbfa9, .byte = 0x07 },
		{ .addr = 0x1cbfaa, .byte = 0x18 },
		{ .addr = 0x1cbfab, .byte = 0xcf }
};

static const SST_RamByte rorl_final_ram_21[] = {
		{ .addr = 0x1cbfa6, .byte = 0xe4 },
		{ .addr = 0x1cbfa7, .byte = 0xb9 },
		{ .addr = 0x1cbfa8, .byte = 0x30 },
		{ .addr = 0x1cbfa9, .byte = 0x07 },
		{ .addr = 0x1cbfaa, .byte = 0x18 },
		{ .addr = 0x1cbfab, .byte = 0xcf }
};

static const SST_Transaction rorl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1884074, .data = 6351, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte rorl_initial_ram_22[] = {
		{ .addr = 0x66a802, .byte = 0xe4 },
		{ .addr = 0x66a803, .byte = 0xbb },
		{ .addr = 0x66a804, .byte = 0x11 },
		{ .addr = 0x66a805, .byte = 0x7f },
		{ .addr = 0x66a806, .byte = 0x39 },
		{ .addr = 0x66a807, .byte = 0xcd }
};

static const SST_RamByte rorl_final_ram_22[] = {
		{ .addr = 0x66a802, .byte = 0xe4 },
		{ .addr = 0x66a803, .byte = 0xbb },
		{ .addr = 0x66a804, .byte = 0x11 },
		{ .addr = 0x66a805, .byte = 0x7f },
		{ .addr = 0x66a806, .byte = 0x39 },
		{ .addr = 0x66a807, .byte = 0xcd }
};

static const SST_Transaction rorl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6727686, .data = 14797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 104 },
};

static const SST_RamByte rorl_initial_ram_23[] = {
		{ .addr = 0xc68fec, .byte = 0xe8 },
		{ .addr = 0xc68fed, .byte = 0xbf },
		{ .addr = 0xc68fee, .byte = 0x56 },
		{ .addr = 0xc68fef, .byte = 0x93 },
		{ .addr = 0xc68ff0, .byte = 0x9e },
		{ .addr = 0xc68ff1, .byte = 0xb9 }
};

static const SST_RamByte rorl_final_ram_23[] = {
		{ .addr = 0xc68fec, .byte = 0xe8 },
		{ .addr = 0xc68fed, .byte = 0xbf },
		{ .addr = 0xc68fee, .byte = 0x56 },
		{ .addr = 0xc68fef, .byte = 0x93 },
		{ .addr = 0xc68ff0, .byte = 0x9e },
		{ .addr = 0xc68ff1, .byte = 0xb9 }
};

static const SST_Transaction rorl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13012976, .data = 40633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 66 },
};

static const SST_RamByte rorl_initial_ram_24[] = {
		{ .addr = 0x592bf8, .byte = 0xee },
		{ .addr = 0x592bf9, .byte = 0xb8 },
		{ .addr = 0x592bfa, .byte = 0xb9 },
		{ .addr = 0x592bfb, .byte = 0x8e },
		{ .addr = 0x592bfc, .byte = 0x3b },
		{ .addr = 0x592bfd, .byte = 0xbf }
};

static const SST_RamByte rorl_final_ram_24[] = {
		{ .addr = 0x592bf8, .byte = 0xee },
		{ .addr = 0x592bf9, .byte = 0xb8 },
		{ .addr = 0x592bfa, .byte = 0xb9 },
		{ .addr = 0x592bfb, .byte = 0x8e },
		{ .addr = 0x592bfc, .byte = 0x3b },
		{ .addr = 0x592bfd, .byte = 0xbf }
};

static const SST_Transaction rorl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5843964, .data = 15295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 30 },
};

static const SST_RamByte rorl_initial_ram_25[] = {
		{ .addr = 0xfd5d70, .byte = 0xea },
		{ .addr = 0xfd5d71, .byte = 0xba },
		{ .addr = 0xfd5d72, .byte = 0x50 },
		{ .addr = 0xfd5d73, .byte = 0x0a },
		{ .addr = 0xfd5d74, .byte = 0xa6 },
		{ .addr = 0xfd5d75, .byte = 0xfe }
};

static const SST_RamByte rorl_final_ram_25[] = {
		{ .addr = 0xfd5d70, .byte = 0xea },
		{ .addr = 0xfd5d71, .byte = 0xba },
		{ .addr = 0xfd5d72, .byte = 0x50 },
		{ .addr = 0xfd5d73, .byte = 0x0a },
		{ .addr = 0xfd5d74, .byte = 0xa6 },
		{ .addr = 0xfd5d75, .byte = 0xfe }
};

static const SST_Transaction rorl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16604532, .data = 42750, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte rorl_initial_ram_26[] = {
		{ .addr = 0xfa77ec, .byte = 0xe0 },
		{ .addr = 0xfa77ed, .byte = 0x9e },
		{ .addr = 0xfa77ee, .byte = 0xc0 },
		{ .addr = 0xfa77ef, .byte = 0xfb },
		{ .addr = 0xfa77f0, .byte = 0x88 },
		{ .addr = 0xfa77f1, .byte = 0x2b }
};

static const SST_RamByte rorl_final_ram_26[] = {
		{ .addr = 0xfa77ec, .byte = 0xe0 },
		{ .addr = 0xfa77ed, .byte = 0x9e },
		{ .addr = 0xfa77ee, .byte = 0xc0 },
		{ .addr = 0xfa77ef, .byte = 0xfb },
		{ .addr = 0xfa77f0, .byte = 0x88 },
		{ .addr = 0xfa77f1, .byte = 0x2b }
};

static const SST_Transaction rorl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16414704, .data = 34859, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte rorl_initial_ram_27[] = {
		{ .addr = 0x6638d2, .byte = 0xe6 },
		{ .addr = 0x6638d3, .byte = 0x9c },
		{ .addr = 0x6638d4, .byte = 0xaf },
		{ .addr = 0x6638d5, .byte = 0xc7 },
		{ .addr = 0x6638d6, .byte = 0x31 },
		{ .addr = 0x6638d7, .byte = 0x8a }
};

static const SST_RamByte rorl_final_ram_27[] = {
		{ .addr = 0x6638d2, .byte = 0xe6 },
		{ .addr = 0x6638d3, .byte = 0x9c },
		{ .addr = 0x6638d4, .byte = 0xaf },
		{ .addr = 0x6638d5, .byte = 0xc7 },
		{ .addr = 0x6638d6, .byte = 0x31 },
		{ .addr = 0x6638d7, .byte = 0x8a }
};

static const SST_Transaction rorl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6699222, .data = 12682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte rorl_initial_ram_28[] = {
		{ .addr = 0x3bccd4, .byte = 0xea },
		{ .addr = 0x3bccd5, .byte = 0x99 },
		{ .addr = 0x3bccd6, .byte = 0x4b },
		{ .addr = 0x3bccd7, .byte = 0xb3 },
		{ .addr = 0x3bccd8, .byte = 0xa3 },
		{ .addr = 0x3bccd9, .byte = 0x91 }
};

static const SST_RamByte rorl_final_ram_28[] = {
		{ .addr = 0x3bccd4, .byte = 0xea },
		{ .addr = 0x3bccd5, .byte = 0x99 },
		{ .addr = 0x3bccd6, .byte = 0x4b },
		{ .addr = 0x3bccd7, .byte = 0xb3 },
		{ .addr = 0x3bccd8, .byte = 0xa3 },
		{ .addr = 0x3bccd9, .byte = 0x91 }
};

static const SST_Transaction rorl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3919064, .data = 41873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rorl_initial_ram_29[] = {
		{ .addr = 0x66f922, .byte = 0xe0 },
		{ .addr = 0x66f923, .byte = 0xb8 },
		{ .addr = 0x66f924, .byte = 0x26 },
		{ .addr = 0x66f925, .byte = 0xd0 },
		{ .addr = 0x66f926, .byte = 0x20 },
		{ .addr = 0x66f927, .byte = 0x0f }
};

static const SST_RamByte rorl_final_ram_29[] = {
		{ .addr = 0x66f922, .byte = 0xe0 },
		{ .addr = 0x66f923, .byte = 0xb8 },
		{ .addr = 0x66f924, .byte = 0x26 },
		{ .addr = 0x66f925, .byte = 0xd0 },
		{ .addr = 0x66f926, .byte = 0x20 },
		{ .addr = 0x66f927, .byte = 0x0f }
};

static const SST_Transaction rorl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6748454, .data = 8207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 86 },
};

static const SST_RamByte rorl_initial_ram_30[] = {
		{ .addr = 0x13f3d6, .byte = 0xe8 },
		{ .addr = 0x13f3d7, .byte = 0x9e },
		{ .addr = 0x13f3d8, .byte = 0x4a },
		{ .addr = 0x13f3d9, .byte = 0x6c },
		{ .addr = 0x13f3da, .byte = 0x0f },
		{ .addr = 0x13f3db, .byte = 0xcd }
};

static const SST_RamByte rorl_final_ram_30[] = {
		{ .addr = 0x13f3d6, .byte = 0xe8 },
		{ .addr = 0x13f3d7, .byte = 0x9e },
		{ .addr = 0x13f3d8, .byte = 0x4a },
		{ .addr = 0x13f3d9, .byte = 0x6c },
		{ .addr = 0x13f3da, .byte = 0x0f },
		{ .addr = 0x13f3db, .byte = 0xcd }
};

static const SST_Transaction rorl_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1307610, .data = 4045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rorl_initial_ram_31[] = {
		{ .addr = 0x0fd8a6, .byte = 0xe6 },
		{ .addr = 0x0fd8a7, .byte = 0xb9 },
		{ .addr = 0x0fd8a8, .byte = 0x14 },
		{ .addr = 0x0fd8a9, .byte = 0x5e },
		{ .addr = 0x0fd8aa, .byte = 0x2b },
		{ .addr = 0x0fd8ab, .byte = 0x07 }
};

static const SST_RamByte rorl_final_ram_31[] = {
		{ .addr = 0x0fd8a6, .byte = 0xe6 },
		{ .addr = 0x0fd8a7, .byte = 0xb9 },
		{ .addr = 0x0fd8a8, .byte = 0x14 },
		{ .addr = 0x0fd8a9, .byte = 0x5e },
		{ .addr = 0x0fd8aa, .byte = 0x2b },
		{ .addr = 0x0fd8ab, .byte = 0x07 }
};

static const SST_Transaction rorl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1038506, .data = 11015, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

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
	{
		.name = "016 ROR.l D2, D0 e4b8",
		.initial = {
			.regs = {
				2825854836, 2827064933, 684090231, 2425903326, 453658938, 674521396, 2008375780, 1072183745, 2397965594, 2569305517, 2778901764, 357315390, 33657295, 3896434518, 3840955960, 11119090, 3478644, 8197, 10725164
			},
			.prefetch0 = 58552,
			.prefetch1 = 52409,
			.ram = rorl_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3728664912, 2827064933, 684090231, 2425903326, 453658938, 674521396, 2008375780, 1072183745, 2397965594, 2569305517, 2778901764, 357315390, 33657295, 3896434518, 3840955960, 11119090, 3478644, 8201, 10725166
			},
			.prefetch0 = 52409,
			.prefetch1 = 11138,
			.ram = rorl_final_ram_16,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_16,
		.transactions_len = 2,
		.lenght = 118,
	},
	{
		.name = "017 ROR.l 6, D3 ec9b",
		.initial = {
			.regs = {
				4164341247, 4163242834, 843366533, 4139616495, 1354342356, 145189244, 2323991265, 2164121266, 3804459628, 1813283207, 2638267161, 744981613, 1164421975, 2225824289, 3798109913, 5632568, 2876938, 34069, 13310404
			},
			.prefetch0 = 60571,
			.prefetch1 = 6623,
			.ram = rorl_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4164341247, 4163242834, 843366533, 3218798115, 1354342356, 145189244, 2323991265, 2164121266, 3804459628, 1813283207, 2638267161, 744981613, 1164421975, 2225824289, 3798109913, 5632568, 2876938, 34073, 13310406
			},
			.prefetch0 = 6623,
			.prefetch1 = 16311,
			.ram = rorl_final_ram_17,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_17,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "018 ROR.l D4, D0 e8b8",
		.initial = {
			.regs = {
				3703371296, 813633742, 2588323932, 2424315229, 4057923671, 2268870412, 144536576, 507376468, 96871559, 591773735, 2994656503, 3870163413, 20191664, 3827070692, 3876713108, 13489392, 14550882, 42517, 9339592
			},
			.prefetch0 = 59576,
			.prefetch1 = 37420,
			.ram = rorl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2045526457, 813633742, 2588323932, 2424315229, 4057923671, 2268870412, 144536576, 507376468, 96871559, 591773735, 2994656503, 3870163413, 20191664, 3827070692, 3876713108, 13489392, 14550882, 42512, 9339594
			},
			.prefetch0 = 37420,
			.prefetch1 = 37712,
			.ram = rorl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_18,
		.transactions_len = 2,
		.lenght = 54,
	},
	{
		.name = "019 ROR.l D5, D1 eab9",
		.initial = {
			.regs = {
				1231140640, 208124545, 185882561, 4101911455, 978701680, 3252617404, 3056132064, 2869260050, 3576515516, 3859339144, 2579242017, 1205539919, 1329709211, 3920393638, 1698187644, 12110170, 10511120, 41746, 8433308
			},
			.prefetch0 = 60089,
			.prefetch1 = 35714,
			.ram = rorl_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1231140640, 3329992720, 185882561, 4101911455, 978701680, 3252617404, 3056132064, 2869260050, 3576515516, 3859339144, 2579242017, 1205539919, 1329709211, 3920393638, 1698187644, 12110170, 10511120, 41753, 8433310
			},
			.prefetch0 = 35714,
			.prefetch1 = 23685,
			.ram = rorl_final_ram_19,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_19,
		.transactions_len = 2,
		.lenght = 128,
	},
	{
		.name = "020 ROR.l D3, D2 e6ba",
		.initial = {
			.regs = {
				1877253077, 2254568492, 2967779930, 2821686362, 132964137, 3046399872, 1263379443, 4282575292, 1546302781, 1988744940, 4215181755, 3386093992, 1377150113, 4140490858, 3030000967, 167880, 14234494, 33549, 10002056
			},
			.prefetch0 = 59066,
			.prefetch1 = 46681,
			.ram = rorl_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1877253077, 2254568492, 959354540, 2821686362, 132964137, 3046399872, 1263379443, 4282575292, 1546302781, 1988744940, 4215181755, 3386093992, 1377150113, 4140490858, 3030000967, 167880, 14234494, 33536, 10002058
			},
			.prefetch0 = 46681,
			.prefetch1 = 30194,
			.ram = rorl_final_ram_20,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_20,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "021 ROR.l D2, D1 e4b9",
		.initial = {
			.regs = {
				4215400909, 2728267815, 3395577800, 1366638711, 2624636129, 3590592507, 1395225036, 3192696690, 2046083091, 3928902079, 3225973942, 3888591018, 1797337301, 1216971151, 2848358081, 10872718, 8248678, 34060, 1884074
			},
			.prefetch0 = 58553,
			.prefetch1 = 12295,
			.ram = rorl_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4215400909, 664968720, 3395577800, 1366638711, 2624636129, 3590592507, 1395225036, 3192696690, 2046083091, 3928902079, 3225973942, 3888591018, 1797337301, 1216971151, 2848358081, 10872718, 8248678, 34048, 1884076
			},
			.prefetch0 = 12295,
			.prefetch1 = 6351,
			.ram = rorl_final_ram_21,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_21,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "022 ROR.l D2, D3 e4bb",
		.initial = {
			.regs = {
				348548409, 1951113932, 2071924466, 2522508637, 760531180, 1218285499, 2296253328, 2698817361, 3885176613, 2986659416, 3698638153, 17881748, 1585916681, 3949099826, 1324701348, 10489100, 12064122, 33553, 6727686
			},
			.prefetch0 = 58555,
			.prefetch1 = 4479,
			.ram = rorl_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				348548409, 1951113932, 2071924466, 2606196118, 760531180, 1218285499, 2296253328, 2698817361, 3885176613, 2986659416, 3698638153, 17881748, 1585916681, 3949099826, 1324701348, 10489100, 12064122, 33561, 6727688
			},
			.prefetch0 = 4479,
			.prefetch1 = 14797,
			.ram = rorl_final_ram_22,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_22,
		.transactions_len = 2,
		.lenght = 108,
	},
	{
		.name = "023 ROR.l D4, D7 e8bf",
		.initial = {
			.regs = {
				1783708474, 3611518361, 606010661, 2201571211, 2210722015, 2056111264, 3843002037, 2627324371, 3782951259, 2719151497, 599080569, 2514148540, 1551056248, 2382484164, 742610837, 14478610, 4435222, 42271, 13012976
			},
			.prefetch0 = 59583,
			.prefetch1 = 22163,
			.ram = rorl_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1783708474, 3611518361, 606010661, 2201571211, 2210722015, 2056111264, 3843002037, 959681447, 3782951259, 2719151497, 599080569, 2514148540, 1551056248, 2382484164, 742610837, 14478610, 4435222, 42256, 13012978
			},
			.prefetch0 = 22163,
			.prefetch1 = 40633,
			.ram = rorl_final_ram_23,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_23,
		.transactions_len = 2,
		.lenght = 70,
	},
	{
		.name = "024 ROR.l D7, D0 eeb8",
		.initial = {
			.regs = {
				1728499360, 2335175411, 2400474736, 2562428920, 3502422759, 3418011287, 1272221574, 3827366349, 390357406, 1857865879, 1300487434, 3162607588, 1932003488, 3138122905, 1716421520, 14818438, 3034296, 1542, 5843964
			},
			.prefetch0 = 61112,
			.prefetch1 = 47502,
			.ram = rorl_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1963145270, 2335175411, 2400474736, 2562428920, 3502422759, 3418011287, 1272221574, 3827366349, 390357406, 1857865879, 1300487434, 3162607588, 1932003488, 3138122905, 1716421520, 14818438, 3034296, 1536, 5843966
			},
			.prefetch0 = 47502,
			.prefetch1 = 15295,
			.ram = rorl_final_ram_24,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_24,
		.transactions_len = 2,
		.lenght = 34,
	},
	{
		.name = "025 ROR.l D5, D2 eaba",
		.initial = {
			.regs = {
				34087024, 3406520634, 3334389513, 269042280, 2807867296, 1284188416, 3809743325, 2833529684, 391844690, 1154686166, 3643683387, 1426297068, 4289308783, 625247535, 1314966778, 10227430, 6884552, 1793, 16604532
			},
			.prefetch0 = 60090,
			.prefetch1 = 20490,
			.ram = rorl_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				34087024, 3406520634, 3334389513, 269042280, 2807867296, 1284188416, 3809743325, 2833529684, 391844690, 1154686166, 3643683387, 1426297068, 4289308783, 625247535, 1314966778, 10227430, 6884552, 1800, 16604534
			},
			.prefetch0 = 20490,
			.prefetch1 = 42750,
			.ram = rorl_final_ram_25,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_25,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "026 ROR.l 8, D6 e09e",
		.initial = {
			.regs = {
				2451693937, 461875841, 1658474522, 3094732337, 752622149, 1781354966, 2297609821, 2863336063, 1451231204, 1289003953, 3667208204, 4202180991, 25725317, 3979544248, 3429574569, 1429030, 9569174, 42502, 16414704
			},
			.prefetch0 = 57502,
			.prefetch1 = 49403,
			.ram = rorl_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2451693937, 461875841, 1658474522, 3094732337, 752622149, 1781354966, 1569256126, 2863336063, 1451231204, 1289003953, 3667208204, 4202180991, 25725317, 3979544248, 3429574569, 1429030, 9569174, 42496, 16414706
			},
			.prefetch0 = 49403,
			.prefetch1 = 34859,
			.ram = rorl_final_ram_26,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_26,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "027 ROR.l 3, D4 e69c",
		.initial = {
			.regs = {
				3746682662, 3888253958, 944229481, 1596602349, 2215669882, 2285359442, 346378504, 613658019, 3992276988, 2722013563, 1956565689, 413996931, 443359927, 3570578216, 1883357809, 14044516, 10114074, 34579, 6699222
			},
			.prefetch0 = 59036,
			.prefetch1 = 44999,
			.ram = rorl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3746682662, 3888253958, 944229481, 1596602349, 1350700559, 2285359442, 346378504, 613658019, 3992276988, 2722013563, 1956565689, 413996931, 443359927, 3570578216, 1883357809, 14044516, 10114074, 34576, 6699224
			},
			.prefetch0 = 44999,
			.prefetch1 = 12682,
			.ram = rorl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_27,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "028 ROR.l 5, D1 ea99",
		.initial = {
			.regs = {
				3121233680, 4012709033, 1724318945, 4199142722, 3943797386, 890330419, 2118633573, 1122480521, 3616186683, 3908231623, 2806385330, 233971675, 3485212039, 4113113198, 1850582347, 15456946, 445252, 33025, 3919064
			},
			.prefetch0 = 60057,
			.prefetch1 = 19379,
			.ram = rorl_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3121233680, 1333356709, 1724318945, 4199142722, 3943797386, 890330419, 2118633573, 1122480521, 3616186683, 3908231623, 2806385330, 233971675, 3485212039, 4113113198, 1850582347, 15456946, 445252, 33024, 3919066
			},
			.prefetch0 = 19379,
			.prefetch1 = 41873,
			.ram = rorl_final_ram_28,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_28,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "029 ROR.l D0, D0 e0b8",
		.initial = {
			.regs = {
				2263659561, 172956682, 4021993416, 2979367154, 3792441159, 2428680763, 3536673919, 3020570358, 1293041969, 2766285791, 3041677779, 3387074404, 3203194243, 2234637802, 285036762, 16399298, 3228196, 34568, 6748454
			},
			.prefetch0 = 57528,
			.prefetch1 = 9936,
			.ram = rorl_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				348354138, 172956682, 4021993416, 2979367154, 3792441159, 2428680763, 3536673919, 3020570358, 1293041969, 2766285791, 3041677779, 3387074404, 3203194243, 2234637802, 285036762, 16399298, 3228196, 34560, 6748456
			},
			.prefetch0 = 9936,
			.prefetch1 = 8207,
			.ram = rorl_final_ram_29,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_29,
		.transactions_len = 2,
		.lenght = 90,
	},
	{
		.name = "030 ROR.l 4, D6 e89e",
		.initial = {
			.regs = {
				1598328920, 682623326, 666271693, 1378824480, 1061270373, 2738321776, 984038116, 2269390235, 3113596456, 3759287705, 2685489957, 3871643357, 2472151629, 3303891917, 2741587258, 8457520, 9949570, 42008, 1307610
			},
			.prefetch0 = 59550,
			.prefetch1 = 19052,
			.ram = rorl_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1598328920, 682623326, 666271693, 1378824480, 1061270373, 2738321776, 1135244206, 2269390235, 3113596456, 3759287705, 2685489957, 3871643357, 2472151629, 3303891917, 2741587258, 8457520, 9949570, 42000, 1307612
			},
			.prefetch0 = 19052,
			.prefetch1 = 4045,
			.ram = rorl_final_ram_30,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_30,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "031 ROR.l D3, D1 e6b9",
		.initial = {
			.regs = {
				629985617, 3687388869, 333099117, 1184203247, 3165802743, 390889313, 3553992009, 1951338984, 2493337090, 890743206, 480135490, 756706858, 1984236942, 4271815573, 195327634, 15037200, 235012, 33817, 1038506
			},
			.prefetch0 = 59065,
			.prefetch1 = 5214,
			.ram = rorl_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				629985617, 764131218, 333099117, 1184203247, 3165802743, 390889313, 3553992009, 1951338984, 2493337090, 890743206, 480135490, 756706858, 1984236942, 4271815573, 195327634, 15037200, 235012, 33808, 1038508
			},
			.prefetch0 = 5214,
			.prefetch1 = 11015,
			.ram = rorl_final_ram_31,
			.ram_len = 6,
		},
		.transactions = rorl_transactions_31,
		.transactions_len = 2,
		.lenght = 102,
	},
};

#endif /* RBT_RORL_H */