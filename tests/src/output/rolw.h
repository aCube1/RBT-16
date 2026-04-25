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

static const SST_RamByte rolw_initial_ram_16[] = {
		{ .addr = 0xbecaac, .byte = 0xe5 },
		{ .addr = 0xbecaad, .byte = 0x5f },
		{ .addr = 0xbecaae, .byte = 0xd5 },
		{ .addr = 0xbecaaf, .byte = 0x33 },
		{ .addr = 0xbecab0, .byte = 0x58 },
		{ .addr = 0xbecab1, .byte = 0x50 }
};

static const SST_RamByte rolw_final_ram_16[] = {
		{ .addr = 0xbecaac, .byte = 0xe5 },
		{ .addr = 0xbecaad, .byte = 0x5f },
		{ .addr = 0xbecaae, .byte = 0xd5 },
		{ .addr = 0xbecaaf, .byte = 0x33 },
		{ .addr = 0xbecab0, .byte = 0x58 },
		{ .addr = 0xbecab1, .byte = 0x50 }
};

static const SST_Transaction rolw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12503728, .data = 22608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte rolw_initial_ram_17[] = {
		{ .addr = 0xf13074, .byte = 0xeb },
		{ .addr = 0xf13075, .byte = 0x5e },
		{ .addr = 0xf13076, .byte = 0xb3 },
		{ .addr = 0xf13077, .byte = 0xd2 },
		{ .addr = 0xf13078, .byte = 0x77 },
		{ .addr = 0xf13079, .byte = 0xf2 }
};

static const SST_RamByte rolw_final_ram_17[] = {
		{ .addr = 0xf13074, .byte = 0xeb },
		{ .addr = 0xf13075, .byte = 0x5e },
		{ .addr = 0xf13076, .byte = 0xb3 },
		{ .addr = 0xf13077, .byte = 0xd2 },
		{ .addr = 0xf13078, .byte = 0x77 },
		{ .addr = 0xf13079, .byte = 0xf2 }
};

static const SST_Transaction rolw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15806584, .data = 30706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte rolw_initial_ram_18[] = {
		{ .addr = 0xe47ab6, .byte = 0xe5 },
		{ .addr = 0xe47ab7, .byte = 0x7e },
		{ .addr = 0xe47ab8, .byte = 0xf8 },
		{ .addr = 0xe47ab9, .byte = 0xfe },
		{ .addr = 0xe47aba, .byte = 0x0c },
		{ .addr = 0xe47abb, .byte = 0xc8 }
};

static const SST_RamByte rolw_final_ram_18[] = {
		{ .addr = 0xe47ab6, .byte = 0xe5 },
		{ .addr = 0xe47ab7, .byte = 0x7e },
		{ .addr = 0xe47ab8, .byte = 0xf8 },
		{ .addr = 0xe47ab9, .byte = 0xfe },
		{ .addr = 0xe47aba, .byte = 0x0c },
		{ .addr = 0xe47abb, .byte = 0xc8 }
};

static const SST_Transaction rolw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14973626, .data = 3272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 62 },
};

static const SST_RamByte rolw_initial_ram_19[] = {
		{ .addr = 0xca5a82, .byte = 0xe7 },
		{ .addr = 0xca5a83, .byte = 0xf0 },
		{ .addr = 0xca5a84, .byte = 0x0b },
		{ .addr = 0xca5a85, .byte = 0x22 },
		{ .addr = 0xca5a86, .byte = 0xdb },
		{ .addr = 0xca5a87, .byte = 0x7c },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x644cd2, .byte = 0x41 },
		{ .addr = 0x644cd3, .byte = 0x66 },
		{ .addr = 0x644cd4, .byte = 0x7d },
		{ .addr = 0x644cd5, .byte = 0x7a }
};

static const SST_RamByte rolw_final_ram_19[] = {
		{ .addr = 0xca5a82, .byte = 0xe7 },
		{ .addr = 0xca5a83, .byte = 0xf0 },
		{ .addr = 0xca5a84, .byte = 0x0b },
		{ .addr = 0xca5a85, .byte = 0x22 },
		{ .addr = 0xca5a86, .byte = 0xdb },
		{ .addr = 0xca5a87, .byte = 0x7c },
		{ .addr = 0xfa54ea, .byte = 0x5a },
		{ .addr = 0xfa54eb, .byte = 0x84 },
		{ .addr = 0xfa54e6, .byte = 0x22 },
		{ .addr = 0xfa54e7, .byte = 0x02 },
		{ .addr = 0xfa54e8, .byte = 0x00 },
		{ .addr = 0xfa54e9, .byte = 0xca },
		{ .addr = 0xfa54e4, .byte = 0xe7 },
		{ .addr = 0xfa54e5, .byte = 0xf0 },
		{ .addr = 0xfa54e2, .byte = 0xb0 },
		{ .addr = 0xfa54e3, .byte = 0xb1 },
		{ .addr = 0xfa54de, .byte = 0xe7 },
		{ .addr = 0xfa54df, .byte = 0xf5 },
		{ .addr = 0xfa54e0, .byte = 0xcf },
		{ .addr = 0xfa54e1, .byte = 0x83 },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0x644cd2, .byte = 0x41 },
		{ .addr = 0x644cd3, .byte = 0x66 },
		{ .addr = 0x644cd4, .byte = 0x7d },
		{ .addr = 0x644cd5, .byte = 0x7a }
};

static const SST_Transaction rolw_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13261446, .data = 56188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8630448, .data = 20808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16405738, .data = 23172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16405734, .data = 8706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16405736, .data = 202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16405732, .data = 59376, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16405730, .data = 45233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16405726, .data = 59381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16405728, .data = 53123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 19666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6573266, .data = 16742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6573268, .data = 32122, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rolw_initial_ram_20[] = {
		{ .addr = 0xe15362, .byte = 0xe3 },
		{ .addr = 0xe15363, .byte = 0x7e },
		{ .addr = 0xe15364, .byte = 0x9c },
		{ .addr = 0xe15365, .byte = 0x2d },
		{ .addr = 0xe15366, .byte = 0x64 },
		{ .addr = 0xe15367, .byte = 0x3e }
};

static const SST_RamByte rolw_final_ram_20[] = {
		{ .addr = 0xe15362, .byte = 0xe3 },
		{ .addr = 0xe15363, .byte = 0x7e },
		{ .addr = 0xe15364, .byte = 0x9c },
		{ .addr = 0xe15365, .byte = 0x2d },
		{ .addr = 0xe15366, .byte = 0x64 },
		{ .addr = 0xe15367, .byte = 0x3e }
};

static const SST_Transaction rolw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14766950, .data = 25662, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte rolw_initial_ram_21[] = {
		{ .addr = 0x56a05e, .byte = 0xe3 },
		{ .addr = 0x56a05f, .byte = 0x7c },
		{ .addr = 0x56a060, .byte = 0x4c },
		{ .addr = 0x56a061, .byte = 0x75 },
		{ .addr = 0x56a062, .byte = 0x30 },
		{ .addr = 0x56a063, .byte = 0x33 }
};

static const SST_RamByte rolw_final_ram_21[] = {
		{ .addr = 0x56a05e, .byte = 0xe3 },
		{ .addr = 0x56a05f, .byte = 0x7c },
		{ .addr = 0x56a060, .byte = 0x4c },
		{ .addr = 0x56a061, .byte = 0x75 },
		{ .addr = 0x56a062, .byte = 0x30 },
		{ .addr = 0x56a063, .byte = 0x33 }
};

static const SST_Transaction rolw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5677154, .data = 12339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 98 },
};

static const SST_RamByte rolw_initial_ram_22[] = {
		{ .addr = 0xb40484, .byte = 0xe7 },
		{ .addr = 0xb40485, .byte = 0x58 },
		{ .addr = 0xb40486, .byte = 0x92 },
		{ .addr = 0xb40487, .byte = 0x99 },
		{ .addr = 0xb40488, .byte = 0x44 },
		{ .addr = 0xb40489, .byte = 0x37 }
};

static const SST_RamByte rolw_final_ram_22[] = {
		{ .addr = 0xb40484, .byte = 0xe7 },
		{ .addr = 0xb40485, .byte = 0x58 },
		{ .addr = 0xb40486, .byte = 0x92 },
		{ .addr = 0xb40487, .byte = 0x99 },
		{ .addr = 0xb40488, .byte = 0x44 },
		{ .addr = 0xb40489, .byte = 0x37 }
};

static const SST_Transaction rolw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11797640, .data = 17463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte rolw_initial_ram_23[] = {
		{ .addr = 0x9632dc, .byte = 0xed },
		{ .addr = 0x9632dd, .byte = 0x5b },
		{ .addr = 0x9632de, .byte = 0xb4 },
		{ .addr = 0x9632df, .byte = 0x66 },
		{ .addr = 0x9632e0, .byte = 0xb2 },
		{ .addr = 0x9632e1, .byte = 0x90 }
};

static const SST_RamByte rolw_final_ram_23[] = {
		{ .addr = 0x9632dc, .byte = 0xed },
		{ .addr = 0x9632dd, .byte = 0x5b },
		{ .addr = 0x9632de, .byte = 0xb4 },
		{ .addr = 0x9632df, .byte = 0x66 },
		{ .addr = 0x9632e0, .byte = 0xb2 },
		{ .addr = 0x9632e1, .byte = 0x90 }
};

static const SST_Transaction rolw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9843424, .data = 45712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rolw_initial_ram_24[] = {
		{ .addr = 0xaf5f48, .byte = 0xe7 },
		{ .addr = 0xaf5f49, .byte = 0xec },
		{ .addr = 0xaf5f4a, .byte = 0xf4 },
		{ .addr = 0xaf5f4b, .byte = 0x69 },
		{ .addr = 0xaf5f4c, .byte = 0xa5 },
		{ .addr = 0xaf5f4d, .byte = 0xa2 },
		{ .addr = 0x00000c, .byte = 0x41 },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x521e8e, .byte = 0x0b },
		{ .addr = 0x521e8f, .byte = 0xa0 },
		{ .addr = 0x521e90, .byte = 0xd7 },
		{ .addr = 0x521e91, .byte = 0x7d }
};

static const SST_RamByte rolw_final_ram_24[] = {
		{ .addr = 0xaf5f48, .byte = 0xe7 },
		{ .addr = 0xaf5f49, .byte = 0xec },
		{ .addr = 0xaf5f4a, .byte = 0xf4 },
		{ .addr = 0xaf5f4b, .byte = 0x69 },
		{ .addr = 0xaf5f4c, .byte = 0xa5 },
		{ .addr = 0xaf5f4d, .byte = 0xa2 },
		{ .addr = 0xf48a0a, .byte = 0x5f },
		{ .addr = 0xf48a0b, .byte = 0x4a },
		{ .addr = 0xf48a06, .byte = 0x22 },
		{ .addr = 0xf48a07, .byte = 0x03 },
		{ .addr = 0xf48a08, .byte = 0x00 },
		{ .addr = 0xf48a09, .byte = 0xaf },
		{ .addr = 0xf48a04, .byte = 0xe7 },
		{ .addr = 0xf48a05, .byte = 0xec },
		{ .addr = 0xf48a02, .byte = 0x89 },
		{ .addr = 0xf48a03, .byte = 0xb5 },
		{ .addr = 0xf489fe, .byte = 0xe7 },
		{ .addr = 0xf489ff, .byte = 0xf5 },
		{ .addr = 0xf48a00, .byte = 0x51 },
		{ .addr = 0xf48a01, .byte = 0x3f },
		{ .addr = 0x00000c, .byte = 0x41 },
		{ .addr = 0x00000d, .byte = 0x52 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x521e8e, .byte = 0x0b },
		{ .addr = 0x521e8f, .byte = 0xa0 },
		{ .addr = 0x521e90, .byte = 0xd7 },
		{ .addr = 0x521e91, .byte = 0x7d }
};

static const SST_Transaction rolw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11493196, .data = 42402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4164020, .data = 23222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16026122, .data = 24394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16026118, .data = 8707, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16026120, .data = 175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16026116, .data = 59372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16026114, .data = 35253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16026110, .data = 59381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16026112, .data = 20799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7822, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5381774, .data = 2976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5381776, .data = 55165, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rolw_initial_ram_25[] = {
		{ .addr = 0xc5e638, .byte = 0xed },
		{ .addr = 0xc5e639, .byte = 0x59 },
		{ .addr = 0xc5e63a, .byte = 0x6f },
		{ .addr = 0xc5e63b, .byte = 0x7a },
		{ .addr = 0xc5e63c, .byte = 0x07 },
		{ .addr = 0xc5e63d, .byte = 0x8d }
};

static const SST_RamByte rolw_final_ram_25[] = {
		{ .addr = 0xc5e638, .byte = 0xed },
		{ .addr = 0xc5e639, .byte = 0x59 },
		{ .addr = 0xc5e63a, .byte = 0x6f },
		{ .addr = 0xc5e63b, .byte = 0x7a },
		{ .addr = 0xc5e63c, .byte = 0x07 },
		{ .addr = 0xc5e63d, .byte = 0x8d }
};

static const SST_Transaction rolw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12969532, .data = 1933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte rolw_initial_ram_26[] = {
		{ .addr = 0x559eb2, .byte = 0xe7 },
		{ .addr = 0x559eb3, .byte = 0xd0 },
		{ .addr = 0x559eb4, .byte = 0x22 },
		{ .addr = 0x559eb5, .byte = 0xfc },
		{ .addr = 0x6c9cbe, .byte = 0xcd },
		{ .addr = 0x6c9cbf, .byte = 0x3d },
		{ .addr = 0x559eb6, .byte = 0xc5 },
		{ .addr = 0x559eb7, .byte = 0x84 }
};

static const SST_RamByte rolw_final_ram_26[] = {
		{ .addr = 0x559eb2, .byte = 0xe7 },
		{ .addr = 0x559eb3, .byte = 0xd0 },
		{ .addr = 0x559eb4, .byte = 0x22 },
		{ .addr = 0x559eb5, .byte = 0xfc },
		{ .addr = 0x6c9cbe, .byte = 0x9a },
		{ .addr = 0x6c9cbf, .byte = 0x7b },
		{ .addr = 0x559eb6, .byte = 0xc5 },
		{ .addr = 0x559eb7, .byte = 0x84 }
};

static const SST_Transaction rolw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7118014, .data = 52541, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5611190, .data = 50564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7118014, .data = 39547, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rolw_initial_ram_27[] = {
		{ .addr = 0xd8929a, .byte = 0xe7 },
		{ .addr = 0xd8929b, .byte = 0xdc },
		{ .addr = 0xd8929c, .byte = 0x47 },
		{ .addr = 0xd8929d, .byte = 0x67 },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0x58 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x58c88e, .byte = 0xb4 },
		{ .addr = 0x58c88f, .byte = 0xac },
		{ .addr = 0x58c890, .byte = 0xa9 },
		{ .addr = 0x58c891, .byte = 0x35 }
};

static const SST_RamByte rolw_final_ram_27[] = {
		{ .addr = 0xd8929a, .byte = 0xe7 },
		{ .addr = 0xd8929b, .byte = 0xdc },
		{ .addr = 0xd8929c, .byte = 0x47 },
		{ .addr = 0xd8929d, .byte = 0x67 },
		{ .addr = 0xd83914, .byte = 0x92 },
		{ .addr = 0xd83915, .byte = 0x9c },
		{ .addr = 0xd83910, .byte = 0x83 },
		{ .addr = 0xd83911, .byte = 0x1c },
		{ .addr = 0xd83912, .byte = 0x00 },
		{ .addr = 0xd83913, .byte = 0xd8 },
		{ .addr = 0xd8390e, .byte = 0xe7 },
		{ .addr = 0xd8390f, .byte = 0xdc },
		{ .addr = 0xd8390c, .byte = 0xd1 },
		{ .addr = 0xd8390d, .byte = 0xbf },
		{ .addr = 0xd83908, .byte = 0xe7 },
		{ .addr = 0xd83909, .byte = 0xd1 },
		{ .addr = 0xd8390a, .byte = 0xd6 },
		{ .addr = 0xd8390b, .byte = 0x95 },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0x58 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0x8e },
		{ .addr = 0x58c88e, .byte = 0xb4 },
		{ .addr = 0x58c88f, .byte = 0xac },
		{ .addr = 0x58c890, .byte = 0xa9 },
		{ .addr = 0x58c891, .byte = 0x35 }
};

static const SST_Transaction rolw_transactions_27[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9818558, .data = 21724, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14170388, .data = 37532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14170384, .data = 33564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14170386, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14170382, .data = 59356, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14170380, .data = 53695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14170376, .data = 59345, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14170378, .data = 54933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5818510, .data = 46252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5818512, .data = 43317, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rolw_initial_ram_28[] = {
		{ .addr = 0xbab122, .byte = 0xe1 },
		{ .addr = 0xbab123, .byte = 0x7f },
		{ .addr = 0xbab124, .byte = 0x43 },
		{ .addr = 0xbab125, .byte = 0x8c },
		{ .addr = 0xbab126, .byte = 0xd2 },
		{ .addr = 0xbab127, .byte = 0x76 }
};

static const SST_RamByte rolw_final_ram_28[] = {
		{ .addr = 0xbab122, .byte = 0xe1 },
		{ .addr = 0xbab123, .byte = 0x7f },
		{ .addr = 0xbab124, .byte = 0x43 },
		{ .addr = 0xbab125, .byte = 0x8c },
		{ .addr = 0xbab126, .byte = 0xd2 },
		{ .addr = 0xbab127, .byte = 0x76 }
};

static const SST_Transaction rolw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12235046, .data = 53878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte rolw_initial_ram_29[] = {
		{ .addr = 0x93de9e, .byte = 0xe3 },
		{ .addr = 0x93de9f, .byte = 0x59 },
		{ .addr = 0x93dea0, .byte = 0xb5 },
		{ .addr = 0x93dea1, .byte = 0xec },
		{ .addr = 0x93dea2, .byte = 0xd7 },
		{ .addr = 0x93dea3, .byte = 0xff }
};

static const SST_RamByte rolw_final_ram_29[] = {
		{ .addr = 0x93de9e, .byte = 0xe3 },
		{ .addr = 0x93de9f, .byte = 0x59 },
		{ .addr = 0x93dea0, .byte = 0xb5 },
		{ .addr = 0x93dea1, .byte = 0xec },
		{ .addr = 0x93dea2, .byte = 0xd7 },
		{ .addr = 0x93dea3, .byte = 0xff }
};

static const SST_Transaction rolw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9690786, .data = 55295, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte rolw_initial_ram_30[] = {
		{ .addr = 0xf2e1e2, .byte = 0xe3 },
		{ .addr = 0xf2e1e3, .byte = 0x58 },
		{ .addr = 0xf2e1e4, .byte = 0xb6 },
		{ .addr = 0xf2e1e5, .byte = 0xd7 },
		{ .addr = 0xf2e1e6, .byte = 0x85 },
		{ .addr = 0xf2e1e7, .byte = 0xde }
};

static const SST_RamByte rolw_final_ram_30[] = {
		{ .addr = 0xf2e1e2, .byte = 0xe3 },
		{ .addr = 0xf2e1e3, .byte = 0x58 },
		{ .addr = 0xf2e1e4, .byte = 0xb6 },
		{ .addr = 0xf2e1e5, .byte = 0xd7 },
		{ .addr = 0xf2e1e6, .byte = 0x85 },
		{ .addr = 0xf2e1e7, .byte = 0xde }
};

static const SST_Transaction rolw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15917542, .data = 34270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte rolw_initial_ram_31[] = {
		{ .addr = 0x6d5756, .byte = 0xe9 },
		{ .addr = 0x6d5757, .byte = 0x58 },
		{ .addr = 0x6d5758, .byte = 0xea },
		{ .addr = 0x6d5759, .byte = 0xe4 },
		{ .addr = 0x6d575a, .byte = 0x39 },
		{ .addr = 0x6d575b, .byte = 0x1a }
};

static const SST_RamByte rolw_final_ram_31[] = {
		{ .addr = 0x6d5756, .byte = 0xe9 },
		{ .addr = 0x6d5757, .byte = 0x58 },
		{ .addr = 0x6d5758, .byte = 0xea },
		{ .addr = 0x6d5759, .byte = 0xe4 },
		{ .addr = 0x6d575a, .byte = 0x39 },
		{ .addr = 0x6d575b, .byte = 0x1a }
};

static const SST_Transaction rolw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7165786, .data = 14618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

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
	{
		.name = "016 ROL.w 2, D7 e55f",
		.initial = {
			.regs = {
				1754204862, 4125628222, 3795222518, 65197417, 4218848337, 3922099632, 3599085126, 990435871, 3247679487, 4285526516, 1371838212, 3886241626, 488452915, 2818267482, 1349946667, 13662436, 16739658, 34577, 12503728
			},
			.prefetch0 = 58719,
			.prefetch1 = 54579,
			.ram = rolw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1754204862, 4125628222, 3795222518, 65197417, 4218848337, 3922099632, 3599085126, 990406783, 3247679487, 4285526516, 1371838212, 3886241626, 488452915, 2818267482, 1349946667, 13662436, 16739658, 34577, 12503730
			},
			.prefetch0 = 54579,
			.prefetch1 = 22608,
			.ram = rolw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_16,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "017 ROL.w 5, D6 eb5e",
		.initial = {
			.regs = {
				3283871131, 872503204, 2464032615, 1946651994, 512242276, 731088631, 1931324973, 3507915417, 763916008, 2117414698, 3807184071, 3413927532, 1461920975, 3091800633, 2156090113, 4031080, 5990606, 40991, 15806584
			},
			.prefetch0 = 60254,
			.prefetch1 = 46034,
			.ram = rolw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3283871131, 872503204, 2464032615, 1946651994, 512242276, 731088631, 1931330997, 3507915417, 763916008, 2117414698, 3807184071, 3413927532, 1461920975, 3091800633, 2156090113, 4031080, 5990606, 40985, 15806586
			},
			.prefetch0 = 46034,
			.prefetch1 = 30706,
			.ram = rolw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_17,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "018 ROL.w D2, D6 e57e",
		.initial = {
			.regs = {
				1156603797, 3374879451, 1340133854, 4199982809, 2270984533, 2600779625, 3201012797, 2669877949, 127018534, 3495578964, 2576581694, 2673884158, 745973434, 734634900, 885772190, 3530922, 15119460, 9492, 14973626
			},
			.prefetch0 = 58750,
			.prefetch1 = 63742,
			.ram = rolw_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1156603797, 3374879451, 1340133854, 4199982809, 2270984533, 2600779625, 3201000719, 2669877949, 127018534, 3495578964, 2576581694, 2673884158, 745973434, 734634900, 885772190, 3530922, 15119460, 9489, 14973628
			},
			.prefetch0 = 63742,
			.prefetch1 = 3272,
			.ram = rolw_final_ram_18,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_18,
		.transactions_len = 2,
		.lenght = 66,
	},
	{
		.name = "019 ROL.w (d8, A0, Xn) e7f0",
		.initial = {
			.regs = {
				2061770265, 3768128291, 260298469, 4288442383, 2642075927, 651373050, 1177502255, 649795530, 1419743862, 3731018266, 3225246390, 2395330620, 1273055256, 320807462, 2150340523, 8911644, 16405740, 8706, 13261446
			},
			.prefetch0 = 59376,
			.prefetch1 = 2850,
			.ram = rolw_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2061770265, 3768128291, 260298469, 4288442383, 2642075927, 651373050, 1177502255, 649795530, 1419743862, 3731018266, 3225246390, 2395330620, 1273055256, 320807462, 2150340523, 8911644, 16405726, 8706, 3529788630
			},
			.prefetch0 = 16742,
			.prefetch1 = 32122,
			.ram = rolw_final_ram_19,
			.ram_len = 28,
		},
		.transactions = rolw_transactions_19,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "020 ROL.w D1, D6 e37e",
		.initial = {
			.regs = {
				3569206891, 1081206875, 3765804522, 1667697302, 1582429026, 3875353105, 552893432, 2665617673, 743485982, 3787049851, 825150617, 4083033019, 2886562272, 876761927, 130311569, 7464318, 7325728, 34588, 14766950
			},
			.prefetch0 = 58238,
			.prefetch1 = 39981,
			.ram = rolw_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3569206891, 1081206875, 3765804522, 1667697302, 1582429026, 3875353105, 552911839, 2665617673, 743485982, 3787049851, 825150617, 4083033019, 2886562272, 876761927, 130311569, 7464318, 7325728, 34585, 14766952
			},
			.prefetch0 = 39981,
			.prefetch1 = 25662,
			.ram = rolw_final_ram_20,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_20,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "021 ROL.w D1, D4 e37c",
		.initial = {
			.regs = {
				2262195770, 2698729776, 2926968347, 1321150865, 3518193051, 1446700211, 235001748, 3444294605, 2911970170, 437601065, 4203528508, 1499165636, 4109106795, 1670588225, 925801101, 1607200, 6442088, 8964, 5677154
			},
			.prefetch0 = 58236,
			.prefetch1 = 19573,
			.ram = rolw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2262195770, 2698729776, 2926968347, 1321150865, 3518193051, 1446700211, 235001748, 3444294605, 2911970170, 437601065, 4203528508, 1499165636, 4109106795, 1670588225, 925801101, 1607200, 6442088, 8961, 5677156
			},
			.prefetch0 = 19573,
			.prefetch1 = 12339,
			.ram = rolw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_21,
		.transactions_len = 2,
		.lenght = 102,
	},
	{
		.name = "022 ROL.w 3, D0 e758",
		.initial = {
			.regs = {
				1410878884, 1778306261, 2006257421, 1919599700, 2932395429, 3103629011, 3809840072, 57621242, 3197962205, 2720187559, 2987055345, 3633878464, 994494139, 1939940420, 750889962, 13817636, 4798688, 1539, 11797640
			},
			.prefetch0 = 59224,
			.prefetch1 = 37529,
			.ram = rolw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1410886946, 1778306261, 2006257421, 1919599700, 2932395429, 3103629011, 3809840072, 57621242, 3197962205, 2720187559, 2987055345, 3633878464, 994494139, 1939940420, 750889962, 13817636, 4798688, 1536, 11797642
			},
			.prefetch0 = 37529,
			.prefetch1 = 17463,
			.ram = rolw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_22,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "023 ROL.w 6, D3 ed5b",
		.initial = {
			.regs = {
				4122368175, 3489274397, 3586189418, 3474369546, 1984987002, 4048344867, 1574041793, 3403905074, 1538053263, 2636726353, 1310199581, 3498339110, 2765900552, 3680630448, 2131810052, 7942862, 14229224, 33035, 9843424
			},
			.prefetch0 = 60763,
			.prefetch1 = 46182,
			.ram = rolw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4122368175, 3489274397, 3586189418, 3474326187, 1984987002, 4048344867, 1574041793, 3403905074, 1538053263, 2636726353, 1310199581, 3498339110, 2765900552, 3680630448, 2131810052, 7942862, 14229224, 33025, 9843426
			},
			.prefetch0 = 46182,
			.prefetch1 = 45712,
			.ram = rolw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_23,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "024 ROL.w (d16, A4) e7ec",
		.initial = {
			.regs = {
				438893871, 1665723059, 3155311151, 2146101249, 1995406129, 2597135983, 2775171423, 2960222520, 2082985567, 3270359499, 40785494, 3080538345, 1363121484, 2069978638, 3725206660, 2839834, 16026124, 8707, 11493196
			},
			.prefetch0 = 59372,
			.prefetch1 = 62569,
			.ram = rolw_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				438893871, 1665723059, 3155311151, 2146101249, 1995406129, 2597135983, 2775171423, 2960222520, 2082985567, 3270359499, 40785494, 3080538345, 1363121484, 2069978638, 3725206660, 2839834, 16026110, 8707, 1095900818
			},
			.prefetch0 = 2976,
			.prefetch1 = 55165,
			.ram = rolw_final_ram_24,
			.ram_len = 28,
		},
		.transactions = rolw_transactions_24,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "025 ROL.w 6, D1 ed59",
		.initial = {
			.regs = {
				360268292, 2072702359, 1989910604, 3329477677, 3485510361, 399428559, 634640660, 2387434498, 2405689753, 3838923190, 4145167968, 800470266, 4145291371, 3983238934, 2427752676, 7395804, 14996018, 1052, 12969532
			},
			.prefetch0 = 60761,
			.prefetch1 = 28538,
			.ram = rolw_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				360268292, 2072667643, 1989910604, 3329477677, 3485510361, 399428559, 634640660, 2387434498, 2405689753, 3838923190, 4145167968, 800470266, 4145291371, 3983238934, 2427752676, 7395804, 14996018, 1041, 12969534
			},
			.prefetch0 = 28538,
			.prefetch1 = 1933,
			.ram = rolw_final_ram_25,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_25,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "026 ROL.w (A0) e7d0",
		.initial = {
			.regs = {
				1038504530, 2397211283, 3598782468, 374175267, 4287448790, 1056175138, 1753761126, 1343429057, 3882654910, 2324241758, 4149742419, 1827973768, 915563073, 2620428703, 2454390980, 13756158, 13100388, 40965, 5611190
			},
			.prefetch0 = 59344,
			.prefetch1 = 8956,
			.ram = rolw_initial_ram_26,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1038504530, 2397211283, 3598782468, 374175267, 4287448790, 1056175138, 1753761126, 1343429057, 3882654910, 2324241758, 4149742419, 1827973768, 915563073, 2620428703, 2454390980, 13756158, 13100388, 40969, 5611192
			},
			.prefetch0 = 8956,
			.prefetch1 = 50564,
			.ram = rolw_final_ram_26,
			.ram_len = 8,
		},
		.transactions = rolw_transactions_26,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "027 ROL.w (A4)+ e7dc",
		.initial = {
			.regs = {
				2786493477, 2319927482, 3741140845, 1222189904, 3440242709, 1836116337, 3579174783, 641228104, 3423868446, 3032991140, 2470660220, 2912750877, 3600142783, 3790794637, 4134976167, 14098380, 14170390, 33564, 14193310
			},
			.prefetch0 = 59356,
			.prefetch1 = 18279,
			.ram = rolw_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2786493477, 2319927482, 3741140845, 1222189904, 3440242709, 1836116337, 3579174783, 641228104, 3423868446, 3032991140, 2470660220, 2912750877, 3600142785, 3790794637, 4134976167, 14098380, 14170376, 8988, 2069416082
			},
			.prefetch0 = 46252,
			.prefetch1 = 43317,
			.ram = rolw_final_ram_27,
			.ram_len = 26,
		},
		.transactions = rolw_transactions_27,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "028 ROL.w D0, D7 e17f",
		.initial = {
			.regs = {
				3893673792, 1175873323, 3324278509, 1241965971, 1391674841, 3327994441, 3886976070, 3867709076, 1588410210, 3499758569, 4075598066, 3681795255, 1374593633, 1748354496, 1281341131, 3327724, 16105928, 778, 12235046
			},
			.prefetch0 = 57727,
			.prefetch1 = 17292,
			.ram = rolw_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3893673792, 1175873323, 3324278509, 1241965971, 1391674841, 3327994441, 3886976070, 3867709076, 1588410210, 3499758569, 4075598066, 3681795255, 1374593633, 1748354496, 1281341131, 3327724, 16105928, 776, 12235048
			},
			.prefetch0 = 17292,
			.prefetch1 = 53878,
			.ram = rolw_final_ram_28,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_28,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "029 ROL.w 1, D1 e359",
		.initial = {
			.regs = {
				3280235029, 536998119, 3267271244, 1011634492, 3037231103, 3338967784, 3423562004, 16656728, 2165594855, 1332634404, 1323450274, 2797072092, 2215570845, 585146307, 3136569406, 4838984, 7966708, 42778, 9690786
			},
			.prefetch0 = 58201,
			.prefetch1 = 46572,
			.ram = rolw_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3280235029, 536994255, 3267271244, 1011634492, 3037231103, 3338967784, 3423562004, 16656728, 2165594855, 1332634404, 1323450274, 2797072092, 2215570845, 585146307, 3136569406, 4838984, 7966708, 42777, 9690788
			},
			.prefetch0 = 46572,
			.prefetch1 = 55295,
			.ram = rolw_final_ram_29,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_29,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "030 ROL.w 1, D0 e358",
		.initial = {
			.regs = {
				2327689119, 144165800, 1005516450, 1074458150, 1570498798, 1248411965, 1328312407, 4125522585, 222245706, 76925280, 1012488670, 3801439281, 1019877472, 2227630552, 4232692844, 5678132, 3358116, 34073, 15917542
			},
			.prefetch0 = 58200,
			.prefetch1 = 46807,
			.ram = rolw_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2327670591, 144165800, 1005516450, 1074458150, 1570498798, 1248411965, 1328312407, 4125522585, 222245706, 76925280, 1012488670, 3801439281, 1019877472, 2227630552, 4232692844, 5678132, 3358116, 34065, 15917544
			},
			.prefetch0 = 46807,
			.prefetch1 = 34270,
			.ram = rolw_final_ram_30,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 ROL.w 4, D0 e958",
		.initial = {
			.regs = {
				3365104434, 1567049169, 1131888670, 1557280108, 455109204, 1758841250, 2183132910, 97768356, 3324731475, 4191680141, 809595434, 2907954453, 1602971009, 3427229280, 3130856222, 3896362, 5661542, 789, 7165786
			},
			.prefetch0 = 59736,
			.prefetch1 = 60132,
			.ram = rolw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3365122854, 1567049169, 1131888670, 1557280108, 455109204, 1758841250, 2183132910, 97768356, 3324731475, 4191680141, 809595434, 2907954453, 1602971009, 3427229280, 3130856222, 3896362, 5661542, 792, 7165788
			},
			.prefetch0 = 60132,
			.prefetch1 = 14618,
			.ram = rolw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = rolw_transactions_31,
		.transactions_len = 2,
		.lenght = 14,
	},
};

#endif /* RBT_ROLW_H */