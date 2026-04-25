#ifndef RBT_ROLW_H
#define RBT_ROLW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rolw_initial_ram_0[] = {
		{ .addr = 0xcb92d4, .byte = 0xeb },
		{ .addr = 0xcb92d5, .byte = 0x7c },
		{ .addr = 0xcb92d6, .byte = 0x93 },
		{ .addr = 0xcb92d7, .byte = 0x0a },
		{ .addr = 0xcb92d8, .byte = 0x11 },
		{ .addr = 0xcb92d9, .byte = 0xd6 }
};

static const SST_RamByte rolw_final_ram_0[] = {
		{ .addr = 0xcb92d4, .byte = 0xeb },
		{ .addr = 0xcb92d5, .byte = 0x7c },
		{ .addr = 0xcb92d6, .byte = 0x93 },
		{ .addr = 0xcb92d7, .byte = 0x0a },
		{ .addr = 0xcb92d8, .byte = 0x11 },
		{ .addr = 0xcb92d9, .byte = 0xd6 }
};

static const SST_Transaction rolw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13341400, .data = 4566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 40 },
};

static const SST_RamByte rolw_initial_ram_1[] = {
		{ .addr = 0x8fe9ee, .byte = 0xe9 },
		{ .addr = 0x8fe9ef, .byte = 0x7c },
		{ .addr = 0x8fe9f0, .byte = 0x08 },
		{ .addr = 0x8fe9f1, .byte = 0x47 },
		{ .addr = 0x8fe9f2, .byte = 0x4c },
		{ .addr = 0x8fe9f3, .byte = 0x70 }
};

static const SST_RamByte rolw_final_ram_1[] = {
		{ .addr = 0x8fe9ee, .byte = 0xe9 },
		{ .addr = 0x8fe9ef, .byte = 0x7c },
		{ .addr = 0x8fe9f0, .byte = 0x08 },
		{ .addr = 0x8fe9f1, .byte = 0x47 },
		{ .addr = 0x8fe9f2, .byte = 0x4c },
		{ .addr = 0x8fe9f3, .byte = 0x70 }
};

static const SST_Transaction rolw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9431538, .data = 19568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
};

static const SST_RamByte rolw_initial_ram_2[] = {
		{ .addr = 0xe008de, .byte = 0xe5 },
		{ .addr = 0xe008df, .byte = 0x5d },
		{ .addr = 0xe008e0, .byte = 0x19 },
		{ .addr = 0xe008e1, .byte = 0xc6 },
		{ .addr = 0xe008e2, .byte = 0xef },
		{ .addr = 0xe008e3, .byte = 0xfa }
};

static const SST_RamByte rolw_final_ram_2[] = {
		{ .addr = 0xe008de, .byte = 0xe5 },
		{ .addr = 0xe008df, .byte = 0x5d },
		{ .addr = 0xe008e0, .byte = 0x19 },
		{ .addr = 0xe008e1, .byte = 0xc6 },
		{ .addr = 0xe008e2, .byte = 0xef },
		{ .addr = 0xe008e3, .byte = 0xfa }
};

static const SST_Transaction rolw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14682338, .data = 61434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte rolw_initial_ram_3[] = {
		{ .addr = 0x9388b6, .byte = 0xe7 },
		{ .addr = 0x9388b7, .byte = 0xf7 },
		{ .addr = 0x9388b8, .byte = 0xe0 },
		{ .addr = 0x9388b9, .byte = 0x55 },
		{ .addr = 0x9388ba, .byte = 0x53 },
		{ .addr = 0x9388bb, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0xeb },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0x30 },
		{ .addr = 0x9eb130, .byte = 0x77 },
		{ .addr = 0x9eb131, .byte = 0x8a },
		{ .addr = 0x9eb132, .byte = 0x27 },
		{ .addr = 0x9eb133, .byte = 0x55 }
};

static const SST_RamByte rolw_final_ram_3[] = {
		{ .addr = 0x9388b6, .byte = 0xe7 },
		{ .addr = 0x9388b7, .byte = 0xf7 },
		{ .addr = 0x9388b8, .byte = 0xe0 },
		{ .addr = 0x9388b9, .byte = 0x55 },
		{ .addr = 0x9388ba, .byte = 0x53 },
		{ .addr = 0x9388bb, .byte = 0x42 },
		{ .addr = 0xcaab60, .byte = 0x88 },
		{ .addr = 0xcaab61, .byte = 0xb8 },
		{ .addr = 0xcaab5c, .byte = 0xa5 },
		{ .addr = 0xcaab5d, .byte = 0x1c },
		{ .addr = 0xcaab5e, .byte = 0x00 },
		{ .addr = 0xcaab5f, .byte = 0x93 },
		{ .addr = 0xcaab5a, .byte = 0xe7 },
		{ .addr = 0xcaab5b, .byte = 0xf7 },
		{ .addr = 0xcaab58, .byte = 0xf6 },
		{ .addr = 0xcaab59, .byte = 0x13 },
		{ .addr = 0xcaab54, .byte = 0xe7 },
		{ .addr = 0xcaab55, .byte = 0xf5 },
		{ .addr = 0xcaab56, .byte = 0x00 },
		{ .addr = 0xcaab57, .byte = 0xca },
		{ .addr = 0x00000c, .byte = 0xeb },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0xb1 },
		{ .addr = 0x00000f, .byte = 0x30 },
		{ .addr = 0x9eb130, .byte = 0x77 },
		{ .addr = 0x9eb131, .byte = 0x8a },
		{ .addr = 0x9eb132, .byte = 0x27 },
		{ .addr = 0x9eb133, .byte = 0x55 }
};

static const SST_Transaction rolw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9668794, .data = 21314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13301266, .data = 18606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13282144, .data = 35000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13282140, .data = 42268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13282142, .data = 147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13282138, .data = 59383, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13282136, .data = 62995, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13282132, .data = 59381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13282134, .data = 202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 60318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 45360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10400048, .data = 30602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10400050, .data = 10069, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rolw_initial_ram_4[] = {
		{ .addr = 0x4066de, .byte = 0xe7 },
		{ .addr = 0x4066df, .byte = 0xea },
		{ .addr = 0x4066e0, .byte = 0x16 },
		{ .addr = 0x4066e1, .byte = 0x97 },
		{ .addr = 0x4066e2, .byte = 0x1f },
		{ .addr = 0x4066e3, .byte = 0x9b },
		{ .addr = 0xbd7b22, .byte = 0xd9 },
		{ .addr = 0xbd7b23, .byte = 0x4e },
		{ .addr = 0x4066e4, .byte = 0x06 },
		{ .addr = 0x4066e5, .byte = 0x82 }
};

static const SST_RamByte rolw_final_ram_4[] = {
		{ .addr = 0x4066de, .byte = 0xe7 },
		{ .addr = 0x4066df, .byte = 0xea },
		{ .addr = 0x4066e0, .byte = 0x16 },
		{ .addr = 0x4066e1, .byte = 0x97 },
		{ .addr = 0x4066e2, .byte = 0x1f },
		{ .addr = 0x4066e3, .byte = 0x9b },
		{ .addr = 0xbd7b22, .byte = 0xb2 },
		{ .addr = 0xbd7b23, .byte = 0x9d },
		{ .addr = 0x4066e4, .byte = 0x06 },
		{ .addr = 0x4066e5, .byte = 0x82 }
};

static const SST_Transaction rolw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4220642, .data = 8091, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12417826, .data = 55630, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4220644, .data = 1666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12417826, .data = 45725, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rolw_initial_ram_5[] = {
		{ .addr = 0x8fec4c, .byte = 0xe7 },
		{ .addr = 0x8fec4d, .byte = 0xd7 },
		{ .addr = 0x8fec4e, .byte = 0x95 },
		{ .addr = 0x8fec4f, .byte = 0x34 },
		{ .addr = 0x828c28, .byte = 0x40 },
		{ .addr = 0x828c29, .byte = 0xc7 },
		{ .addr = 0x8fec50, .byte = 0x4b },
		{ .addr = 0x8fec51, .byte = 0xee }
};

static const SST_RamByte rolw_final_ram_5[] = {
		{ .addr = 0x8fec4c, .byte = 0xe7 },
		{ .addr = 0x8fec4d, .byte = 0xd7 },
		{ .addr = 0x8fec4e, .byte = 0x95 },
		{ .addr = 0x8fec4f, .byte = 0x34 },
		{ .addr = 0x828c28, .byte = 0x81 },
		{ .addr = 0x828c29, .byte = 0x8e },
		{ .addr = 0x8fec50, .byte = 0x4b },
		{ .addr = 0x8fec51, .byte = 0xee }
};

static const SST_Transaction rolw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8555560, .data = 16583, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9432144, .data = 19438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8555560, .data = 33166, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rolw_initial_ram_6[] = {
		{ .addr = 0x32f1cc, .byte = 0xeb },
		{ .addr = 0x32f1cd, .byte = 0x7c },
		{ .addr = 0x32f1ce, .byte = 0xf2 },
		{ .addr = 0x32f1cf, .byte = 0xb1 },
		{ .addr = 0x32f1d0, .byte = 0xf0 },
		{ .addr = 0x32f1d1, .byte = 0x3e }
};

static const SST_RamByte rolw_final_ram_6[] = {
		{ .addr = 0x32f1cc, .byte = 0xeb },
		{ .addr = 0x32f1cd, .byte = 0x7c },
		{ .addr = 0x32f1ce, .byte = 0xf2 },
		{ .addr = 0x32f1cf, .byte = 0xb1 },
		{ .addr = 0x32f1d0, .byte = 0xf0 },
		{ .addr = 0x32f1d1, .byte = 0x3e }
};

static const SST_Transaction rolw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3338704, .data = 61502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 114 },
};

static const SST_RamByte rolw_initial_ram_7[] = {
		{ .addr = 0x451bfc, .byte = 0xe9 },
		{ .addr = 0x451bfd, .byte = 0x5c },
		{ .addr = 0x451bfe, .byte = 0x6d },
		{ .addr = 0x451bff, .byte = 0xfe },
		{ .addr = 0x451c00, .byte = 0xbb },
		{ .addr = 0x451c01, .byte = 0xae }
};

static const SST_RamByte rolw_final_ram_7[] = {
		{ .addr = 0x451bfc, .byte = 0xe9 },
		{ .addr = 0x451bfd, .byte = 0x5c },
		{ .addr = 0x451bfe, .byte = 0x6d },
		{ .addr = 0x451bff, .byte = 0xfe },
		{ .addr = 0x451c00, .byte = 0xbb },
		{ .addr = 0x451c01, .byte = 0xae }
};

static const SST_Transaction rolw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4529152, .data = 48046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte rolw_initial_ram_8[] = {
		{ .addr = 0xa37606, .byte = 0xe7 },
		{ .addr = 0xa37607, .byte = 0x5e },
		{ .addr = 0xa37608, .byte = 0x09 },
		{ .addr = 0xa37609, .byte = 0x53 },
		{ .addr = 0xa3760a, .byte = 0xf1 },
		{ .addr = 0xa3760b, .byte = 0xad }
};

static const SST_RamByte rolw_final_ram_8[] = {
		{ .addr = 0xa37606, .byte = 0xe7 },
		{ .addr = 0xa37607, .byte = 0x5e },
		{ .addr = 0xa37608, .byte = 0x09 },
		{ .addr = 0xa37609, .byte = 0x53 },
		{ .addr = 0xa3760a, .byte = 0xf1 },
		{ .addr = 0xa3760b, .byte = 0xad }
};

static const SST_Transaction rolw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10712586, .data = 61869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rolw_initial_ram_9[] = {
		{ .addr = 0xba8262, .byte = 0xe5 },
		{ .addr = 0xba8263, .byte = 0x7c },
		{ .addr = 0xba8264, .byte = 0xcf },
		{ .addr = 0xba8265, .byte = 0x64 },
		{ .addr = 0xba8266, .byte = 0x1d },
		{ .addr = 0xba8267, .byte = 0xc3 }
};

static const SST_RamByte rolw_final_ram_9[] = {
		{ .addr = 0xba8262, .byte = 0xe5 },
		{ .addr = 0xba8263, .byte = 0x7c },
		{ .addr = 0xba8264, .byte = 0xcf },
		{ .addr = 0xba8265, .byte = 0x64 },
		{ .addr = 0xba8266, .byte = 0x1d },
		{ .addr = 0xba8267, .byte = 0xc3 }
};

static const SST_Transaction rolw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12223078, .data = 7619, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 36 },
};

static const SST_RamByte rolw_initial_ram_10[] = {
		{ .addr = 0x490c82, .byte = 0xe7 },
		{ .addr = 0x490c83, .byte = 0x5e },
		{ .addr = 0x490c84, .byte = 0x8f },
		{ .addr = 0x490c85, .byte = 0xac },
		{ .addr = 0x490c86, .byte = 0x71 },
		{ .addr = 0x490c87, .byte = 0x9a }
};

static const SST_RamByte rolw_final_ram_10[] = {
		{ .addr = 0x490c82, .byte = 0xe7 },
		{ .addr = 0x490c83, .byte = 0x5e },
		{ .addr = 0x490c84, .byte = 0x8f },
		{ .addr = 0x490c85, .byte = 0xac },
		{ .addr = 0x490c86, .byte = 0x71 },
		{ .addr = 0x490c87, .byte = 0x9a }
};

static const SST_Transaction rolw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4787334, .data = 29082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rolw_initial_ram_11[] = {
		{ .addr = 0x2e3eb8, .byte = 0xe1 },
		{ .addr = 0x2e3eb9, .byte = 0x79 },
		{ .addr = 0x2e3eba, .byte = 0x19 },
		{ .addr = 0x2e3ebb, .byte = 0x32 },
		{ .addr = 0x2e3ebc, .byte = 0x92 },
		{ .addr = 0x2e3ebd, .byte = 0x20 }
};

static const SST_RamByte rolw_final_ram_11[] = {
		{ .addr = 0x2e3eb8, .byte = 0xe1 },
		{ .addr = 0x2e3eb9, .byte = 0x79 },
		{ .addr = 0x2e3eba, .byte = 0x19 },
		{ .addr = 0x2e3ebb, .byte = 0x32 },
		{ .addr = 0x2e3ebc, .byte = 0x92 },
		{ .addr = 0x2e3ebd, .byte = 0x20 }
};

static const SST_Transaction rolw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3030716, .data = 37408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 106 },
};

static const SST_RamByte rolw_initial_ram_12[] = {
		{ .addr = 0x66303c, .byte = 0xe3 },
		{ .addr = 0x66303d, .byte = 0x7c },
		{ .addr = 0x66303e, .byte = 0x4f },
		{ .addr = 0x66303f, .byte = 0x51 },
		{ .addr = 0x663040, .byte = 0x19 },
		{ .addr = 0x663041, .byte = 0x1a }
};

static const SST_RamByte rolw_final_ram_12[] = {
		{ .addr = 0x66303c, .byte = 0xe3 },
		{ .addr = 0x66303d, .byte = 0x7c },
		{ .addr = 0x66303e, .byte = 0x4f },
		{ .addr = 0x66303f, .byte = 0x51 },
		{ .addr = 0x663040, .byte = 0x19 },
		{ .addr = 0x663041, .byte = 0x1a }
};

static const SST_Transaction rolw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6697024, .data = 6426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rolw_initial_ram_13[] = {
		{ .addr = 0x15c796, .byte = 0xeb },
		{ .addr = 0x15c797, .byte = 0x7e },
		{ .addr = 0x15c798, .byte = 0x25 },
		{ .addr = 0x15c799, .byte = 0xdb },
		{ .addr = 0x15c79a, .byte = 0xf1 },
		{ .addr = 0x15c79b, .byte = 0xa1 }
};

static const SST_RamByte rolw_final_ram_13[] = {
		{ .addr = 0x15c796, .byte = 0xeb },
		{ .addr = 0x15c797, .byte = 0x7e },
		{ .addr = 0x15c798, .byte = 0x25 },
		{ .addr = 0x15c799, .byte = 0xdb },
		{ .addr = 0x15c79a, .byte = 0xf1 },
		{ .addr = 0x15c79b, .byte = 0xa1 }
};

static const SST_Transaction rolw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1427354, .data = 61857, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 88 },
};

static const SST_RamByte rolw_initial_ram_14[] = {
		{ .addr = 0xc0637c, .byte = 0xe7 },
		{ .addr = 0xc0637d, .byte = 0x58 },
		{ .addr = 0xc0637e, .byte = 0x39 },
		{ .addr = 0xc0637f, .byte = 0x7b },
		{ .addr = 0xc06380, .byte = 0x53 },
		{ .addr = 0xc06381, .byte = 0xa5 }
};

static const SST_RamByte rolw_final_ram_14[] = {
		{ .addr = 0xc0637c, .byte = 0xe7 },
		{ .addr = 0xc0637d, .byte = 0x58 },
		{ .addr = 0xc0637e, .byte = 0x39 },
		{ .addr = 0xc0637f, .byte = 0x7b },
		{ .addr = 0xc06380, .byte = 0x53 },
		{ .addr = 0xc06381, .byte = 0xa5 }
};

static const SST_Transaction rolw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12608384, .data = 21413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rolw_initial_ram_15[] = {
		{ .addr = 0xa6ff7e, .byte = 0xe7 },
		{ .addr = 0xa6ff7f, .byte = 0xec },
		{ .addr = 0xa6ff80, .byte = 0xe5 },
		{ .addr = 0xa6ff81, .byte = 0x9a },
		{ .addr = 0xa6ff82, .byte = 0xf8 },
		{ .addr = 0xa6ff83, .byte = 0x86 },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0x15 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x1015a0, .byte = 0xa0 },
		{ .addr = 0x1015a1, .byte = 0x5c },
		{ .addr = 0x1015a2, .byte = 0xe8 },
		{ .addr = 0x1015a3, .byte = 0xb0 }
};

static const SST_RamByte rolw_final_ram_15[] = {
		{ .addr = 0xa6ff7e, .byte = 0xe7 },
		{ .addr = 0xa6ff7f, .byte = 0xec },
		{ .addr = 0xa6ff80, .byte = 0xe5 },
		{ .addr = 0xa6ff81, .byte = 0x9a },
		{ .addr = 0xa6ff82, .byte = 0xf8 },
		{ .addr = 0xa6ff83, .byte = 0x86 },
		{ .addr = 0x0e74d8, .byte = 0xff },
		{ .addr = 0x0e74d9, .byte = 0x80 },
		{ .addr = 0x0e74d4, .byte = 0x00 },
		{ .addr = 0x0e74d5, .byte = 0x0d },
		{ .addr = 0x0e74d6, .byte = 0x00 },
		{ .addr = 0x0e74d7, .byte = 0xa6 },
		{ .addr = 0x0e74d2, .byte = 0xe7 },
		{ .addr = 0x0e74d3, .byte = 0xec },
		{ .addr = 0x0e74d0, .byte = 0xab },
		{ .addr = 0x0e74d1, .byte = 0xa5 },
		{ .addr = 0x0e74cc, .byte = 0xe7 },
		{ .addr = 0x0e74cd, .byte = 0xf1 },
		{ .addr = 0x0e74ce, .byte = 0xb4 },
		{ .addr = 0x0e74cf, .byte = 0x38 },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0x10 },
		{ .addr = 0x00000e, .byte = 0x15 },
		{ .addr = 0x00000f, .byte = 0xa0 },
		{ .addr = 0x1015a0, .byte = 0xa0 },
		{ .addr = 0x1015a1, .byte = 0x5c },
		{ .addr = 0x1015a2, .byte = 0xe8 },
		{ .addr = 0x1015a3, .byte = 0xb0 }
};

static const SST_Transaction rolw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10944386, .data = 63622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3713956, .data = 2660, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 947416, .data = 65408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 947412, .data = 13, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 947414, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 947410, .data = 59372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 947408, .data = 43941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 947404, .data = 59377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 947406, .data = 46136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 5536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1054112, .data = 41052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1054114, .data = 59568, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t ROLW_TEST_COUNT = 16;
static const SST_TestCase rolw[] = {
	{
		.name = "000 ROL.w D5, D4 eb7c",
		.initial = {
			.regs = {
				2505882384, 685705009, 3030064830, 3675247218, 1432694544, 4114921107, 1343220142, 3055279028, 4027503539, 2731282429, 3534683800, 4009763471, 2776129223, 933891404, 1092129691, 14763484, 12832426, 10002, 13341400
			},
			.prefetch0 = 60284,
			.prefetch1 = 37642,
			.ram = rolw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2505882384, 685705009, 3030064830, 3675247218, 1432713345, 4114921107, 1343220142, 3055279028, 4027503539, 2731282429, 3534683800, 4009763471, 2776129223, 933891404, 1092129691, 14763484, 12832426, 10001, 13341402
			},
			.prefetch0 = 37642,
			.prefetch1 = 4566,
			.ram = rolw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_0,
		.transactions_len = 2,
		.lenght = 44,
	},
	{
		.name = "001 ROL.w D4, D4 e97c",
		.initial = {
			.regs = {
				3216460838, 868591777, 482729388, 1105048582, 782228341, 1184195816, 1661633051, 3169660716, 1736965421, 1590212378, 2713097895, 3368429285, 1001966753, 4169546316, 1487605348, 14119078, 6584792, 33047, 9431538
			},
			.prefetch0 = 59772,
			.prefetch1 = 2119,
			.ram = rolw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3216460838, 868591777, 482729388, 1105048582, 782200507, 1184195816, 1661633051, 3169660716, 1736965421, 1590212378, 2713097895, 3368429285, 1001966753, 4169546316, 1487605348, 14119078, 6584792, 33041, 9431540
			},
			.prefetch0 = 2119,
			.prefetch1 = 19568,
			.ram = rolw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_1,
		.transactions_len = 2,
		.lenght = 112,
	},
	{
		.name = "002 ROL.w 2, D5 e55d",
		.initial = {
			.regs = {
				4070597826, 1322758500, 2604232599, 764401482, 3254699035, 2034706092, 3550261998, 2144141054, 2799204168, 2651266171, 3895768173, 1940896259, 896210995, 1829299673, 3993149882, 1197082, 14742348, 9736, 14682338
			},
			.prefetch0 = 58717,
			.prefetch1 = 6598,
			.ram = rolw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4070597826, 1322758500, 2604232599, 764401482, 3254699035, 2034735792, 3550261998, 2144141054, 2799204168, 2651266171, 3895768173, 1940896259, 896210995, 1829299673, 3993149882, 1197082, 14742348, 9736, 14682340
			},
			.prefetch0 = 6598,
			.prefetch1 = 61434,
			.ram = rolw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_2,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "003 ROL.w (d8, A7, Xn) e7f7",
		.initial = {
			.regs = {
				3964733745, 1210816499, 1168663605, 894991425, 3424893913, 424436988, 1953614239, 1895913953, 1570856323, 4261856704, 1185776210, 316339542, 3887758548, 280542491, 3545713244, 6412640, 13282146, 42268, 9668794
			},
			.prefetch0 = 59383,
			.prefetch1 = 57429,
			.ram = rolw_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3964733745, 1210816499, 1168663605, 894991425, 3424893913, 424436988, 1953614239, 1895913953, 1570856323, 4261856704, 1185776210, 316339542, 3887758548, 280542491, 3545713244, 6412640, 13282132, 9500, 3953045812
			},
			.prefetch0 = 30602,
			.prefetch1 = 10069,
			.ram = rolw_final_ram_3,
			.ram_len = 28,
		},
		.transactions = rolw_transactions_3,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "004 ROL.w (d16, A2) e7ea",
		.initial = {
			.regs = {
				1354901719, 649090084, 3123912662, 2075783509, 3455299692, 4168832808, 1991182494, 2692308302, 1131020591, 1079900880, 1975346315, 2150115035, 2185468996, 1628198546, 2427273586, 8549092, 13766858, 1026, 4220642
			},
			.prefetch0 = 59370,
			.prefetch1 = 5783,
			.ram = rolw_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1354901719, 649090084, 3123912662, 2075783509, 3455299692, 4168832808, 1991182494, 2692308302, 1131020591, 1079900880, 1975346315, 2150115035, 2185468996, 1628198546, 2427273586, 8549092, 13766858, 1033, 4220646
			},
			.prefetch0 = 8091,
			.prefetch1 = 1666,
			.ram = rolw_final_ram_4,
			.ram_len = 10,
		},
		.transactions = rolw_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 ROL.w (A7) e7d7",
		.initial = {
			.regs = {
				1770557318, 1975730291, 3165057558, 3797465497, 1450545909, 860525406, 1262561845, 2834449912, 435926247, 165537801, 3722100732, 1674604809, 3738511391, 445229308, 2576983088, 8555560, 7065772, 1050, 9432144
			},
			.prefetch0 = 59351,
			.prefetch1 = 38196,
			.ram = rolw_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1770557318, 1975730291, 3165057558, 3797465497, 1450545909, 860525406, 1262561845, 2834449912, 435926247, 165537801, 3722100732, 1674604809, 3738511391, 445229308, 2576983088, 8555560, 7065772, 1048, 9432146
			},
			.prefetch0 = 38196,
			.prefetch1 = 19438,
			.ram = rolw_final_ram_5,
			.ram_len = 8,
		},
		.transactions = rolw_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 ROL.w D5, D4 eb7c",
		.initial = {
			.regs = {
				1710497947, 1250086021, 2050465391, 2083414504, 1618722244, 1725057592, 1397809343, 244876128, 3542896744, 3757912825, 2420217935, 116713383, 3854269044, 2981237941, 1163948003, 10116446, 4055594, 9748, 3338704
			},
			.prefetch0 = 60284,
			.prefetch1 = 62129,
			.ram = rolw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1710497947, 1250086021, 2050465391, 2083414504, 1618724029, 1725057592, 1397809343, 244876128, 3542896744, 3757912825, 2420217935, 116713383, 3854269044, 2981237941, 1163948003, 10116446, 4055594, 9753, 3338706
			},
			.prefetch0 = 62129,
			.prefetch1 = 61502,
			.ram = rolw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_6,
		.transactions_len = 2,
		.lenght = 118,
	},
	{
		.name = "007 ROL.w 4, D4 e95c",
		.initial = {
			.regs = {
				658254307, 1076280310, 480209562, 111225092, 775101877, 2301373644, 4072276472, 4216471652, 3606719983, 1777641697, 2787851854, 364296306, 2283139097, 1724393431, 1720372790, 9201738, 7733622, 33793, 4529152
			},
			.prefetch0 = 59740,
			.prefetch1 = 28158,
			.ram = rolw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				658254307, 1076280310, 480209562, 111225092, 775150417, 2301373644, 4072276472, 4216471652, 3606719983, 1777641697, 2787851854, 364296306, 2283139097, 1724393431, 1720372790, 9201738, 7733622, 33801, 4529154
			},
			.prefetch0 = 28158,
			.prefetch1 = 48046,
			.ram = rolw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_7,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "008 ROL.w 3, D6 e75e",
		.initial = {
			.regs = {
				581707917, 609019277, 2557605562, 1729190895, 2999572153, 3469850663, 1066757561, 1312668417, 2585763770, 754023631, 1924476077, 3083394267, 392957387, 1826247634, 2364523464, 7580814, 7086422, 9480, 10712586
			},
			.prefetch0 = 59230,
			.prefetch1 = 2387,
			.ram = rolw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				581707917, 609019277, 2557605562, 1729190895, 2999572153, 3469850663, 1066757579, 1312668417, 2585763770, 754023631, 1924476077, 3083394267, 392957387, 1826247634, 2364523464, 7580814, 7086422, 9473, 10712588
			},
			.prefetch0 = 2387,
			.prefetch1 = 61869,
			.ram = rolw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_8,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "009 ROL.w D2, D4 e57c",
		.initial = {
			.regs = {
				1646669868, 3066589278, 1017242641, 2065918283, 2231245601, 4217202005, 2781798299, 607107925, 3022245450, 225108399, 359514690, 642246215, 716317808, 716762980, 349169890, 8505278, 3986026, 1055, 12223078
			},
			.prefetch0 = 58748,
			.prefetch1 = 53092,
			.ram = rolw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1646669868, 3066589278, 1017242641, 2065918283, 2231252546, 4217202005, 2781798299, 607107925, 3022245450, 225108399, 359514690, 642246215, 716317808, 716762980, 349169890, 8505278, 3986026, 1040, 12223080
			},
			.prefetch0 = 53092,
			.prefetch1 = 7619,
			.ram = rolw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_9,
		.transactions_len = 2,
		.lenght = 40,
	},
	{
		.name = "010 ROL.w 3, D6 e75e",
		.initial = {
			.regs = {
				3884593972, 1893593219, 1651090759, 4256232748, 2227864446, 1124882944, 163502837, 519800985, 3391731618, 3642869467, 3870247984, 2552038157, 3969032248, 4003304696, 1743553963, 7288480, 7994064, 8475, 4787334
			},
			.prefetch0 = 59230,
			.prefetch1 = 36780,
			.ram = rolw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3884593972, 1893593219, 1651090759, 4256232748, 2227864446, 1124882944, 163501998, 519800985, 3391731618, 3642869467, 3870247984, 2552038157, 3969032248, 4003304696, 1743553963, 7288480, 7994064, 8472, 4787336
			},
			.prefetch0 = 36780,
			.prefetch1 = 29082,
			.ram = rolw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_10,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "011 ROL.w D0, D1 e179",
		.initial = {
			.regs = {
				1762579700, 763754831, 523800343, 3513682304, 1305719506, 1911894210, 1014454906, 2025994926, 3031723367, 673618076, 2265565488, 2889594069, 3302419115, 1295227016, 2326027189, 3881458, 14613058, 41476, 3030716
			},
			.prefetch0 = 57721,
			.prefetch1 = 6450,
			.ram = rolw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1762579700, 763729151, 523800343, 3513682304, 1305719506, 1911894210, 1014454906, 2025994926, 3031723367, 673618076, 2265565488, 2889594069, 3302419115, 1295227016, 2326027189, 3881458, 14613058, 41481, 3030718
			},
			.prefetch0 = 6450,
			.prefetch1 = 37408,
			.ram = rolw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_11,
		.transactions_len = 2,
		.lenght = 110,
	},
	{
		.name = "012 ROL.w D1, D4 e37c",
		.initial = {
			.regs = {
				2017575745, 1585041541, 2345128130, 1659409301, 2717851569, 1735683570, 463338086, 2300557350, 2721779907, 3919378451, 4206335379, 2299149576, 424719490, 390167644, 2147907461, 1796438, 6983092, 10, 6697024
			},
			.prefetch0 = 58236,
			.prefetch1 = 20305,
			.ram = rolw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2017575745, 1585041541, 2345128130, 1659409301, 2717906467, 1735683570, 463338086, 2300557350, 2721779907, 3919378451, 4206335379, 2299149576, 424719490, 390167644, 2147907461, 1796438, 6983092, 9, 6697026
			},
			.prefetch0 = 20305,
			.prefetch1 = 6426,
			.ram = rolw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_12,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "013 ROL.w D5, D6 eb7e",
		.initial = {
			.regs = {
				2838233966, 4035145019, 1440262995, 1140906505, 956346972, 870095531, 920940141, 794485292, 937772223, 345473744, 4147894089, 699975709, 3396798598, 3976044721, 3923516262, 8222220, 821344, 42753, 1427354
			},
			.prefetch0 = 60286,
			.prefetch1 = 9691,
			.ram = rolw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2838233966, 4035145019, 1440262995, 1140906505, 956346972, 870095531, 920939379, 794485292, 937772223, 345473744, 4147894089, 699975709, 3396798598, 3976044721, 3923516262, 8222220, 821344, 42753, 1427356
			},
			.prefetch0 = 9691,
			.prefetch1 = 61857,
			.ram = rolw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_13,
		.transactions_len = 2,
		.lenght = 92,
	},
	{
		.name = "014 ROL.w 3, D0 e758",
		.initial = {
			.regs = {
				4049175756, 4287415942, 331352651, 560460741, 4026257675, 4167603559, 2010597290, 3772805206, 627939959, 1763618267, 2716216965, 475580907, 1974912430, 1664631267, 1509427784, 1138950, 4096844, 33024, 12608384
			},
			.prefetch0 = 59224,
			.prefetch1 = 14715,
			.ram = rolw_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4049151588, 4287415942, 331352651, 560460741, 4026257675, 4167603559, 2010597290, 3772805206, 627939959, 1763618267, 2716216965, 475580907, 1974912430, 1664631267, 1509427784, 1138950, 4096844, 33024, 12608386
			},
			.prefetch0 = 14715,
			.prefetch1 = 21413,
			.ram = rolw_final_ram_14,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_14,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "015 ROL.w (d16, A4) e7ec",
		.initial = {
			.regs = {
				2151400726, 3569093606, 1166237459, 2915543837, 2190274663, 2531123875, 2324829535, 2835663521, 3800033828, 4260382450, 3105520401, 343555401, 3023619595, 2689013089, 81136486, 1861260, 947418, 13, 10944386
			},
			.prefetch0 = 59372,
			.prefetch1 = 58778,
			.ram = rolw_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2151400726, 3569093606, 1166237459, 2915543837, 2190274663, 2531123875, 2324829535, 2835663521, 3800033828, 4260382450, 3105520401, 343555401, 3023619595, 2689013089, 81136486, 1861260, 947404, 8205, 1594889636
			},
			.prefetch0 = 41052,
			.prefetch1 = 59568,
			.ram = rolw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = rolw_transactions_15,
		.transactions_len = 15,
		.lenght = 62,
	},
};

#endif /* RBT_ROLW_H */