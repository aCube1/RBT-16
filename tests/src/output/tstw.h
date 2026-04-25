#ifndef RBT_TSTW_H
#define RBT_TSTW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte tstw_initial_ram_0[] = {
		{ .addr = 0x24eca6, .byte = 0x4a },
		{ .addr = 0x24eca7, .byte = 0x63 },
		{ .addr = 0x24eca8, .byte = 0xee },
		{ .addr = 0x24eca9, .byte = 0x92 },
		{ .addr = 0x3ce65c, .byte = 0xa8 },
		{ .addr = 0x3ce65d, .byte = 0xc4 },
		{ .addr = 0x24ecaa, .byte = 0x7b },
		{ .addr = 0x24ecab, .byte = 0xd6 }
};

static const SST_RamByte tstw_final_ram_0[] = {
		{ .addr = 0x24eca6, .byte = 0x4a },
		{ .addr = 0x24eca7, .byte = 0x63 },
		{ .addr = 0x24eca8, .byte = 0xee },
		{ .addr = 0x24eca9, .byte = 0x92 },
		{ .addr = 0x3ce65c, .byte = 0xa8 },
		{ .addr = 0x3ce65d, .byte = 0xc4 },
		{ .addr = 0x24ecaa, .byte = 0x7b },
		{ .addr = 0x24ecab, .byte = 0xd6 }
};

static const SST_Transaction tstw_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3991132, .data = 43204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2419882, .data = 31702, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_1[] = {
		{ .addr = 0x3292de, .byte = 0x4a },
		{ .addr = 0x3292df, .byte = 0x62 },
		{ .addr = 0x3292e0, .byte = 0x83 },
		{ .addr = 0x3292e1, .byte = 0x06 },
		{ .addr = 0xd21f70, .byte = 0xf2 },
		{ .addr = 0xd21f71, .byte = 0x32 },
		{ .addr = 0x3292e2, .byte = 0xc9 },
		{ .addr = 0x3292e3, .byte = 0xd1 }
};

static const SST_RamByte tstw_final_ram_1[] = {
		{ .addr = 0x3292de, .byte = 0x4a },
		{ .addr = 0x3292df, .byte = 0x62 },
		{ .addr = 0x3292e0, .byte = 0x83 },
		{ .addr = 0x3292e1, .byte = 0x06 },
		{ .addr = 0xd21f70, .byte = 0xf2 },
		{ .addr = 0xd21f71, .byte = 0x32 },
		{ .addr = 0x3292e2, .byte = 0xc9 },
		{ .addr = 0x3292e3, .byte = 0xd1 }
};

static const SST_Transaction tstw_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13770608, .data = 62002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3314402, .data = 51665, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_2[] = {
		{ .addr = 0x17e998, .byte = 0x4a },
		{ .addr = 0x17e999, .byte = 0x60 },
		{ .addr = 0x17e99a, .byte = 0x59 },
		{ .addr = 0x17e99b, .byte = 0x0e },
		{ .addr = 0xadac80, .byte = 0xea },
		{ .addr = 0xadac81, .byte = 0xe5 },
		{ .addr = 0x17e99c, .byte = 0xd6 },
		{ .addr = 0x17e99d, .byte = 0xb5 }
};

static const SST_RamByte tstw_final_ram_2[] = {
		{ .addr = 0x17e998, .byte = 0x4a },
		{ .addr = 0x17e999, .byte = 0x60 },
		{ .addr = 0x17e99a, .byte = 0x59 },
		{ .addr = 0x17e99b, .byte = 0x0e },
		{ .addr = 0xadac80, .byte = 0xea },
		{ .addr = 0xadac81, .byte = 0xe5 },
		{ .addr = 0x17e99c, .byte = 0xd6 },
		{ .addr = 0x17e99d, .byte = 0xb5 }
};

static const SST_Transaction tstw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11381888, .data = 60133, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1567132, .data = 54965, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_3[] = {
		{ .addr = 0xf552ac, .byte = 0x4a },
		{ .addr = 0xf552ad, .byte = 0x6d },
		{ .addr = 0xf552ae, .byte = 0x1b },
		{ .addr = 0xf552af, .byte = 0xaa },
		{ .addr = 0xf552b0, .byte = 0xff },
		{ .addr = 0xf552b1, .byte = 0x14 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x5e },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0x38 },
		{ .addr = 0x5eb438, .byte = 0xc6 },
		{ .addr = 0x5eb439, .byte = 0x4f },
		{ .addr = 0x5eb43a, .byte = 0xcd },
		{ .addr = 0x5eb43b, .byte = 0xf7 }
};

static const SST_RamByte tstw_final_ram_3[] = {
		{ .addr = 0xf552ac, .byte = 0x4a },
		{ .addr = 0xf552ad, .byte = 0x6d },
		{ .addr = 0xf552ae, .byte = 0x1b },
		{ .addr = 0xf552af, .byte = 0xaa },
		{ .addr = 0xf552b0, .byte = 0xff },
		{ .addr = 0xf552b1, .byte = 0x14 },
		{ .addr = 0xb9799e, .byte = 0x52 },
		{ .addr = 0xb9799f, .byte = 0xae },
		{ .addr = 0xb9799a, .byte = 0x84 },
		{ .addr = 0xb9799b, .byte = 0x01 },
		{ .addr = 0xb9799c, .byte = 0x00 },
		{ .addr = 0xb9799d, .byte = 0xf5 },
		{ .addr = 0xb97998, .byte = 0x4a },
		{ .addr = 0xb97999, .byte = 0x6d },
		{ .addr = 0xb97996, .byte = 0x8e },
		{ .addr = 0xb97997, .byte = 0x07 },
		{ .addr = 0xb97992, .byte = 0x4a },
		{ .addr = 0xb97993, .byte = 0x71 },
		{ .addr = 0xb97994, .byte = 0x70 },
		{ .addr = 0xb97995, .byte = 0x05 },
		{ .addr = 0x00000c, .byte = 0xae },
		{ .addr = 0x00000d, .byte = 0x5e },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0x38 },
		{ .addr = 0x5eb438, .byte = 0xc6 },
		{ .addr = 0x5eb439, .byte = 0x4f },
		{ .addr = 0x5eb43a, .byte = 0xcd },
		{ .addr = 0x5eb43b, .byte = 0xf7 }
};

static const SST_Transaction tstw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16077488, .data = 65300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 364038, .data = 28009, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12155294, .data = 21166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12155290, .data = 33793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12155292, .data = 245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12155288, .data = 19053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12155286, .data = 36359, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12155282, .data = 19057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12155284, .data = 28677, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 44638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6206520, .data = 50767, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6206522, .data = 52727, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_4[] = {
		{ .addr = 0x47dcee, .byte = 0x4a },
		{ .addr = 0x47dcef, .byte = 0x60 },
		{ .addr = 0x47dcf0, .byte = 0xc5 },
		{ .addr = 0x47dcf1, .byte = 0x4f },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0x1e },
		{ .addr = 0x00000e, .byte = 0x29 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x1e2998, .byte = 0xed },
		{ .addr = 0x1e2999, .byte = 0xc0 },
		{ .addr = 0x1e299a, .byte = 0x32 },
		{ .addr = 0x1e299b, .byte = 0xed }
};

static const SST_RamByte tstw_final_ram_4[] = {
		{ .addr = 0x47dcee, .byte = 0x4a },
		{ .addr = 0x47dcef, .byte = 0x60 },
		{ .addr = 0x47dcf0, .byte = 0xc5 },
		{ .addr = 0x47dcf1, .byte = 0x4f },
		{ .addr = 0x9cd722, .byte = 0xdc },
		{ .addr = 0x9cd723, .byte = 0xf2 },
		{ .addr = 0x9cd71e, .byte = 0xa0 },
		{ .addr = 0x9cd71f, .byte = 0x11 },
		{ .addr = 0x9cd720, .byte = 0x00 },
		{ .addr = 0x9cd721, .byte = 0x47 },
		{ .addr = 0x9cd71c, .byte = 0x4a },
		{ .addr = 0x9cd71d, .byte = 0x60 },
		{ .addr = 0x9cd71a, .byte = 0xd2 },
		{ .addr = 0x9cd71b, .byte = 0x3f },
		{ .addr = 0x9cd716, .byte = 0x4a },
		{ .addr = 0x9cd717, .byte = 0x75 },
		{ .addr = 0x9cd718, .byte = 0xfc },
		{ .addr = 0x9cd719, .byte = 0x68 },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0x1e },
		{ .addr = 0x00000e, .byte = 0x29 },
		{ .addr = 0x00000f, .byte = 0x98 },
		{ .addr = 0x1e2998, .byte = 0xed },
		{ .addr = 0x1e2999, .byte = 0xc0 },
		{ .addr = 0x1e299a, .byte = 0x32 },
		{ .addr = 0x1e299b, .byte = 0xed }
};

static const SST_Transaction tstw_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6869566, .data = 4319, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10278690, .data = 56562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10278686, .data = 40977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10278688, .data = 71, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10278684, .data = 19040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10278682, .data = 53823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10278678, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10278680, .data = 64616, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 10648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1976728, .data = 60864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1976730, .data = 13037, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_5[] = {
		{ .addr = 0x4e5868, .byte = 0x4a },
		{ .addr = 0x4e5869, .byte = 0x41 },
		{ .addr = 0x4e586a, .byte = 0x82 },
		{ .addr = 0x4e586b, .byte = 0x32 },
		{ .addr = 0x4e586c, .byte = 0xbb },
		{ .addr = 0x4e586d, .byte = 0x17 }
};

static const SST_RamByte tstw_final_ram_5[] = {
		{ .addr = 0x4e5868, .byte = 0x4a },
		{ .addr = 0x4e5869, .byte = 0x41 },
		{ .addr = 0x4e586a, .byte = 0x82 },
		{ .addr = 0x4e586b, .byte = 0x32 },
		{ .addr = 0x4e586c, .byte = 0xbb },
		{ .addr = 0x4e586d, .byte = 0x17 }
};

static const SST_Transaction tstw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5134444, .data = 47895, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_6[] = {
		{ .addr = 0xb0e0d0, .byte = 0x4a },
		{ .addr = 0xb0e0d1, .byte = 0x6d },
		{ .addr = 0xb0e0d2, .byte = 0x4a },
		{ .addr = 0xb0e0d3, .byte = 0x97 },
		{ .addr = 0xb0e0d4, .byte = 0x00 },
		{ .addr = 0xb0e0d5, .byte = 0x6b },
		{ .addr = 0x00000c, .byte = 0xf2 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x22 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0xea2250, .byte = 0x16 },
		{ .addr = 0xea2251, .byte = 0x8c },
		{ .addr = 0xea2252, .byte = 0xcf },
		{ .addr = 0xea2253, .byte = 0xab }
};

static const SST_RamByte tstw_final_ram_6[] = {
		{ .addr = 0xb0e0d0, .byte = 0x4a },
		{ .addr = 0xb0e0d1, .byte = 0x6d },
		{ .addr = 0xb0e0d2, .byte = 0x4a },
		{ .addr = 0xb0e0d3, .byte = 0x97 },
		{ .addr = 0xb0e0d4, .byte = 0x00 },
		{ .addr = 0xb0e0d5, .byte = 0x6b },
		{ .addr = 0xa660e4, .byte = 0xe0 },
		{ .addr = 0xa660e5, .byte = 0xd2 },
		{ .addr = 0xa660e0, .byte = 0xa0 },
		{ .addr = 0xa660e1, .byte = 0x0c },
		{ .addr = 0xa660e2, .byte = 0x00 },
		{ .addr = 0xa660e3, .byte = 0xb0 },
		{ .addr = 0xa660de, .byte = 0x4a },
		{ .addr = 0xa660df, .byte = 0x6d },
		{ .addr = 0xa660dc, .byte = 0x69 },
		{ .addr = 0xa660dd, .byte = 0x4d },
		{ .addr = 0xa660d8, .byte = 0x4a },
		{ .addr = 0xa660d9, .byte = 0x75 },
		{ .addr = 0xa660da, .byte = 0xc9 },
		{ .addr = 0xa660db, .byte = 0x7f },
		{ .addr = 0x00000c, .byte = 0xf2 },
		{ .addr = 0x00000d, .byte = 0xea },
		{ .addr = 0x00000e, .byte = 0x22 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0xea2250, .byte = 0x16 },
		{ .addr = 0xea2251, .byte = 0x8c },
		{ .addr = 0xea2252, .byte = 0xcf },
		{ .addr = 0xea2253, .byte = 0xab }
};

static const SST_Transaction tstw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11591892, .data = 107, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8350028, .data = 13509, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10903780, .data = 57554, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10903776, .data = 40972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10903778, .data = 176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10903774, .data = 19053, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10903772, .data = 26957, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10903768, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10903770, .data = 51583, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 8784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15344208, .data = 5772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15344210, .data = 53163, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_7[] = {
		{ .addr = 0xa4e678, .byte = 0x4a },
		{ .addr = 0xa4e679, .byte = 0x76 },
		{ .addr = 0xa4e67a, .byte = 0xa6 },
		{ .addr = 0xa4e67b, .byte = 0x54 },
		{ .addr = 0xa4e67c, .byte = 0x77 },
		{ .addr = 0xa4e67d, .byte = 0x4e },
		{ .addr = 0x00000c, .byte = 0x60 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x8ce0be, .byte = 0x17 },
		{ .addr = 0x8ce0bf, .byte = 0x9e },
		{ .addr = 0x8ce0c0, .byte = 0x87 },
		{ .addr = 0x8ce0c1, .byte = 0x56 }
};

static const SST_RamByte tstw_final_ram_7[] = {
		{ .addr = 0xa4e678, .byte = 0x4a },
		{ .addr = 0xa4e679, .byte = 0x76 },
		{ .addr = 0xa4e67a, .byte = 0xa6 },
		{ .addr = 0xa4e67b, .byte = 0x54 },
		{ .addr = 0xa4e67c, .byte = 0x77 },
		{ .addr = 0xa4e67d, .byte = 0x4e },
		{ .addr = 0x052adc, .byte = 0xe6 },
		{ .addr = 0x052add, .byte = 0x7a },
		{ .addr = 0x052ad8, .byte = 0x24 },
		{ .addr = 0x052ad9, .byte = 0x18 },
		{ .addr = 0x052ada, .byte = 0x00 },
		{ .addr = 0x052adb, .byte = 0xa4 },
		{ .addr = 0x052ad6, .byte = 0x4a },
		{ .addr = 0x052ad7, .byte = 0x76 },
		{ .addr = 0x052ad4, .byte = 0x1c },
		{ .addr = 0x052ad5, .byte = 0x3f },
		{ .addr = 0x052ad0, .byte = 0x4a },
		{ .addr = 0x052ad1, .byte = 0x75 },
		{ .addr = 0x052ad2, .byte = 0x27 },
		{ .addr = 0x052ad3, .byte = 0xff },
		{ .addr = 0x00000c, .byte = 0x60 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0xe0 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x8ce0be, .byte = 0x17 },
		{ .addr = 0x8ce0bf, .byte = 0x9e },
		{ .addr = 0x8ce0c0, .byte = 0x87 },
		{ .addr = 0x8ce0c1, .byte = 0x56 }
};

static const SST_Transaction tstw_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10806908, .data = 30542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16718910, .data = 16644, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 338652, .data = 59002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 338648, .data = 9240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 338650, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 338646, .data = 19062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 338644, .data = 7231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 338640, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 338642, .data = 10239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 57534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9232574, .data = 6046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9232576, .data = 34646, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_8[] = {
		{ .addr = 0x0f9928, .byte = 0x4a },
		{ .addr = 0x0f9929, .byte = 0x6a },
		{ .addr = 0x0f992a, .byte = 0x40 },
		{ .addr = 0x0f992b, .byte = 0x8f },
		{ .addr = 0x0f992c, .byte = 0x1c },
		{ .addr = 0x0f992d, .byte = 0x55 },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x646180, .byte = 0x22 },
		{ .addr = 0x646181, .byte = 0x1a },
		{ .addr = 0x646182, .byte = 0x5b },
		{ .addr = 0x646183, .byte = 0x12 }
};

static const SST_RamByte tstw_final_ram_8[] = {
		{ .addr = 0x0f9928, .byte = 0x4a },
		{ .addr = 0x0f9929, .byte = 0x6a },
		{ .addr = 0x0f992a, .byte = 0x40 },
		{ .addr = 0x0f992b, .byte = 0x8f },
		{ .addr = 0x0f992c, .byte = 0x1c },
		{ .addr = 0x0f992d, .byte = 0x55 },
		{ .addr = 0x344d06, .byte = 0x99 },
		{ .addr = 0x344d07, .byte = 0x2a },
		{ .addr = 0x344d02, .byte = 0x04 },
		{ .addr = 0x344d03, .byte = 0x16 },
		{ .addr = 0x344d04, .byte = 0x00 },
		{ .addr = 0x344d05, .byte = 0x0f },
		{ .addr = 0x344d00, .byte = 0x4a },
		{ .addr = 0x344d01, .byte = 0x6a },
		{ .addr = 0x344cfe, .byte = 0x75 },
		{ .addr = 0x344cff, .byte = 0xb3 },
		{ .addr = 0x344cfa, .byte = 0x4a },
		{ .addr = 0x344cfb, .byte = 0x71 },
		{ .addr = 0x344cfc, .byte = 0xf2 },
		{ .addr = 0x344cfd, .byte = 0x69 },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0x64 },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x646180, .byte = 0x22 },
		{ .addr = 0x646181, .byte = 0x1a },
		{ .addr = 0x646182, .byte = 0x5b },
		{ .addr = 0x646183, .byte = 0x12 }
};

static const SST_Transaction tstw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1022252, .data = 7253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6911410, .data = 11034, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3427590, .data = 39210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3427586, .data = 1046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3427588, .data = 15, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3427584, .data = 19050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3427582, .data = 30131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3427578, .data = 19057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3427580, .data = 62057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6578560, .data = 8730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6578562, .data = 23314, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_9[] = {
		{ .addr = 0x14c19c, .byte = 0x4a },
		{ .addr = 0x14c19d, .byte = 0x56 },
		{ .addr = 0x14c19e, .byte = 0x15 },
		{ .addr = 0x14c19f, .byte = 0x8b },
		{ .addr = 0xf2c738, .byte = 0xcf },
		{ .addr = 0xf2c739, .byte = 0x22 },
		{ .addr = 0x14c1a0, .byte = 0xe7 },
		{ .addr = 0x14c1a1, .byte = 0x6f }
};

static const SST_RamByte tstw_final_ram_9[] = {
		{ .addr = 0x14c19c, .byte = 0x4a },
		{ .addr = 0x14c19d, .byte = 0x56 },
		{ .addr = 0x14c19e, .byte = 0x15 },
		{ .addr = 0x14c19f, .byte = 0x8b },
		{ .addr = 0xf2c738, .byte = 0xcf },
		{ .addr = 0xf2c739, .byte = 0x22 },
		{ .addr = 0x14c1a0, .byte = 0xe7 },
		{ .addr = 0x14c1a1, .byte = 0x6f }
};

static const SST_Transaction tstw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15910712, .data = 53026, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1360288, .data = 59247, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_10[] = {
		{ .addr = 0xea76bc, .byte = 0x4a },
		{ .addr = 0xea76bd, .byte = 0x53 },
		{ .addr = 0xea76be, .byte = 0x43 },
		{ .addr = 0xea76bf, .byte = 0xc2 },
		{ .addr = 0x00000c, .byte = 0x5b },
		{ .addr = 0x00000d, .byte = 0xc4 },
		{ .addr = 0x00000e, .byte = 0x6b },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0xc46b92, .byte = 0x67 },
		{ .addr = 0xc46b93, .byte = 0x84 },
		{ .addr = 0xc46b94, .byte = 0x72 },
		{ .addr = 0xc46b95, .byte = 0xc3 }
};

static const SST_RamByte tstw_final_ram_10[] = {
		{ .addr = 0xea76bc, .byte = 0x4a },
		{ .addr = 0xea76bd, .byte = 0x53 },
		{ .addr = 0xea76be, .byte = 0x43 },
		{ .addr = 0xea76bf, .byte = 0xc2 },
		{ .addr = 0xe1e612, .byte = 0x76 },
		{ .addr = 0xe1e613, .byte = 0xbe },
		{ .addr = 0xe1e60e, .byte = 0x01 },
		{ .addr = 0xe1e60f, .byte = 0x12 },
		{ .addr = 0xe1e610, .byte = 0x00 },
		{ .addr = 0xe1e611, .byte = 0xea },
		{ .addr = 0xe1e60c, .byte = 0x4a },
		{ .addr = 0xe1e60d, .byte = 0x53 },
		{ .addr = 0xe1e60a, .byte = 0xbc },
		{ .addr = 0xe1e60b, .byte = 0x53 },
		{ .addr = 0xe1e606, .byte = 0x4a },
		{ .addr = 0xe1e607, .byte = 0x51 },
		{ .addr = 0xe1e608, .byte = 0x99 },
		{ .addr = 0xe1e609, .byte = 0xb2 },
		{ .addr = 0x00000c, .byte = 0x5b },
		{ .addr = 0x00000d, .byte = 0xc4 },
		{ .addr = 0x00000e, .byte = 0x6b },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0xc46b92, .byte = 0x67 },
		{ .addr = 0xc46b93, .byte = 0x84 },
		{ .addr = 0xc46b94, .byte = 0x72 },
		{ .addr = 0xc46b95, .byte = 0xc3 }
};

static const SST_Transaction tstw_transactions_10[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11713618, .data = 4890, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14804498, .data = 30398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14804494, .data = 274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14804496, .data = 234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14804492, .data = 19027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14804490, .data = 48211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14804486, .data = 19025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14804488, .data = 39346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 23492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12872594, .data = 26500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12872596, .data = 29379, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_11[] = {
		{ .addr = 0x7c97fa, .byte = 0x4a },
		{ .addr = 0x7c97fb, .byte = 0x72 },
		{ .addr = 0x7c97fc, .byte = 0xb7 },
		{ .addr = 0x7c97fd, .byte = 0xd0 },
		{ .addr = 0x7c97fe, .byte = 0xc3 },
		{ .addr = 0x7c97ff, .byte = 0x82 },
		{ .addr = 0x89b9de, .byte = 0x25 },
		{ .addr = 0x89b9df, .byte = 0x68 },
		{ .addr = 0x7c9800, .byte = 0x03 },
		{ .addr = 0x7c9801, .byte = 0x78 }
};

static const SST_RamByte tstw_final_ram_11[] = {
		{ .addr = 0x7c97fa, .byte = 0x4a },
		{ .addr = 0x7c97fb, .byte = 0x72 },
		{ .addr = 0x7c97fc, .byte = 0xb7 },
		{ .addr = 0x7c97fd, .byte = 0xd0 },
		{ .addr = 0x7c97fe, .byte = 0xc3 },
		{ .addr = 0x7c97ff, .byte = 0x82 },
		{ .addr = 0x89b9de, .byte = 0x25 },
		{ .addr = 0x89b9df, .byte = 0x68 },
		{ .addr = 0x7c9800, .byte = 0x03 },
		{ .addr = 0x7c9801, .byte = 0x78 }
};

static const SST_Transaction tstw_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8165374, .data = 50050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9026014, .data = 9576, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8165376, .data = 888, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_12[] = {
		{ .addr = 0xccf880, .byte = 0x4a },
		{ .addr = 0xccf881, .byte = 0x44 },
		{ .addr = 0xccf882, .byte = 0x2b },
		{ .addr = 0xccf883, .byte = 0x5e },
		{ .addr = 0xccf884, .byte = 0x3c },
		{ .addr = 0xccf885, .byte = 0x13 }
};

static const SST_RamByte tstw_final_ram_12[] = {
		{ .addr = 0xccf880, .byte = 0x4a },
		{ .addr = 0xccf881, .byte = 0x44 },
		{ .addr = 0xccf882, .byte = 0x2b },
		{ .addr = 0xccf883, .byte = 0x5e },
		{ .addr = 0xccf884, .byte = 0x3c },
		{ .addr = 0xccf885, .byte = 0x13 }
};

static const SST_Transaction tstw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13432964, .data = 15379, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_13[] = {
		{ .addr = 0x23501e, .byte = 0x4a },
		{ .addr = 0x23501f, .byte = 0x61 },
		{ .addr = 0x235020, .byte = 0x4d },
		{ .addr = 0x235021, .byte = 0x28 },
		{ .addr = 0x54f62a, .byte = 0x04 },
		{ .addr = 0x54f62b, .byte = 0x30 },
		{ .addr = 0x235022, .byte = 0x50 },
		{ .addr = 0x235023, .byte = 0xf8 }
};

static const SST_RamByte tstw_final_ram_13[] = {
		{ .addr = 0x23501e, .byte = 0x4a },
		{ .addr = 0x23501f, .byte = 0x61 },
		{ .addr = 0x235020, .byte = 0x4d },
		{ .addr = 0x235021, .byte = 0x28 },
		{ .addr = 0x54f62a, .byte = 0x04 },
		{ .addr = 0x54f62b, .byte = 0x30 },
		{ .addr = 0x235022, .byte = 0x50 },
		{ .addr = 0x235023, .byte = 0xf8 }
};

static const SST_Transaction tstw_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5568042, .data = 1072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2314274, .data = 20728, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_14[] = {
		{ .addr = 0x4214f4, .byte = 0x4a },
		{ .addr = 0x4214f5, .byte = 0x5f },
		{ .addr = 0x4214f6, .byte = 0x42 },
		{ .addr = 0x4214f7, .byte = 0x01 },
		{ .addr = 0xc515e6, .byte = 0xf3 },
		{ .addr = 0xc515e7, .byte = 0xba },
		{ .addr = 0x4214f8, .byte = 0xe5 },
		{ .addr = 0x4214f9, .byte = 0xe5 }
};

static const SST_RamByte tstw_final_ram_14[] = {
		{ .addr = 0x4214f4, .byte = 0x4a },
		{ .addr = 0x4214f5, .byte = 0x5f },
		{ .addr = 0x4214f6, .byte = 0x42 },
		{ .addr = 0x4214f7, .byte = 0x01 },
		{ .addr = 0xc515e6, .byte = 0xf3 },
		{ .addr = 0xc515e7, .byte = 0xba },
		{ .addr = 0x4214f8, .byte = 0xe5 },
		{ .addr = 0x4214f9, .byte = 0xe5 }
};

static const SST_Transaction tstw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12916198, .data = 62394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4330744, .data = 58853, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_15[] = {
		{ .addr = 0x8d00ca, .byte = 0x4a },
		{ .addr = 0x8d00cb, .byte = 0x6e },
		{ .addr = 0x8d00cc, .byte = 0x50 },
		{ .addr = 0x8d00cd, .byte = 0x82 },
		{ .addr = 0x8d00ce, .byte = 0x96 },
		{ .addr = 0x8d00cf, .byte = 0x9b },
		{ .addr = 0x00000c, .byte = 0xfb },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0x48 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x9c4834, .byte = 0xe5 },
		{ .addr = 0x9c4835, .byte = 0x01 },
		{ .addr = 0x9c4836, .byte = 0x14 },
		{ .addr = 0x9c4837, .byte = 0x6f }
};

static const SST_RamByte tstw_final_ram_15[] = {
		{ .addr = 0x8d00ca, .byte = 0x4a },
		{ .addr = 0x8d00cb, .byte = 0x6e },
		{ .addr = 0x8d00cc, .byte = 0x50 },
		{ .addr = 0x8d00cd, .byte = 0x82 },
		{ .addr = 0x8d00ce, .byte = 0x96 },
		{ .addr = 0x8d00cf, .byte = 0x9b },
		{ .addr = 0xac1ec0, .byte = 0x00 },
		{ .addr = 0xac1ec1, .byte = 0xcc },
		{ .addr = 0xac1ebc, .byte = 0xa2 },
		{ .addr = 0xac1ebd, .byte = 0x14 },
		{ .addr = 0xac1ebe, .byte = 0x00 },
		{ .addr = 0xac1ebf, .byte = 0x8d },
		{ .addr = 0xac1eba, .byte = 0x4a },
		{ .addr = 0xac1ebb, .byte = 0x6e },
		{ .addr = 0xac1eb8, .byte = 0x6e },
		{ .addr = 0xac1eb9, .byte = 0xa7 },
		{ .addr = 0xac1eb4, .byte = 0x4a },
		{ .addr = 0xac1eb5, .byte = 0x75 },
		{ .addr = 0xac1eb6, .byte = 0x88 },
		{ .addr = 0xac1eb7, .byte = 0x8c },
		{ .addr = 0x00000c, .byte = 0xfb },
		{ .addr = 0x00000d, .byte = 0x9c },
		{ .addr = 0x00000e, .byte = 0x48 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x9c4834, .byte = 0xe5 },
		{ .addr = 0x9c4835, .byte = 0x01 },
		{ .addr = 0x9c4836, .byte = 0x14 },
		{ .addr = 0x9c4837, .byte = 0x6f }
};

static const SST_Transaction tstw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9240782, .data = 38555, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9203366, .data = 16846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11280064, .data = 204, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11280060, .data = 41492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11280062, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11280058, .data = 19054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11280056, .data = 28327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11280052, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11280054, .data = 34956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10242100, .data = 58625, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10242102, .data = 5231, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_16[] = {
		{ .addr = 0x36d0c8, .byte = 0x4a },
		{ .addr = 0x36d0c9, .byte = 0x5d },
		{ .addr = 0x36d0ca, .byte = 0x77 },
		{ .addr = 0x36d0cb, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0xcd },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0x8f },
		{ .addr = 0x00000f, .byte = 0xf8 },
		{ .addr = 0x388ff8, .byte = 0x16 },
		{ .addr = 0x388ff9, .byte = 0xc5 },
		{ .addr = 0x388ffa, .byte = 0x11 },
		{ .addr = 0x388ffb, .byte = 0xdf }
};

static const SST_RamByte tstw_final_ram_16[] = {
		{ .addr = 0x36d0c8, .byte = 0x4a },
		{ .addr = 0x36d0c9, .byte = 0x5d },
		{ .addr = 0x36d0ca, .byte = 0x77 },
		{ .addr = 0x36d0cb, .byte = 0x62 },
		{ .addr = 0x4595a0, .byte = 0xd0 },
		{ .addr = 0x4595a1, .byte = 0xca },
		{ .addr = 0x45959c, .byte = 0x00 },
		{ .addr = 0x45959d, .byte = 0x1d },
		{ .addr = 0x45959e, .byte = 0x00 },
		{ .addr = 0x45959f, .byte = 0x36 },
		{ .addr = 0x45959a, .byte = 0x4a },
		{ .addr = 0x45959b, .byte = 0x5d },
		{ .addr = 0x459598, .byte = 0xba },
		{ .addr = 0x459599, .byte = 0x4d },
		{ .addr = 0x459594, .byte = 0x4a },
		{ .addr = 0x459595, .byte = 0x51 },
		{ .addr = 0x459596, .byte = 0xa1 },
		{ .addr = 0x459597, .byte = 0x7a },
		{ .addr = 0x00000c, .byte = 0xcd },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0x8f },
		{ .addr = 0x00000f, .byte = 0xf8 },
		{ .addr = 0x388ff8, .byte = 0x16 },
		{ .addr = 0x388ff9, .byte = 0xc5 },
		{ .addr = 0x388ffa, .byte = 0x11 },
		{ .addr = 0x388ffb, .byte = 0xdf }
};

static const SST_Transaction tstw_transactions_16[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8043084, .data = 3119, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4560288, .data = 53450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4560284, .data = 29, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4560286, .data = 54, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4560282, .data = 19037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4560280, .data = 47693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4560276, .data = 19025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4560278, .data = 41338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3706872, .data = 5829, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3706874, .data = 4575, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_17[] = {
		{ .addr = 0xc0e670, .byte = 0x4a },
		{ .addr = 0xc0e671, .byte = 0x77 },
		{ .addr = 0xc0e672, .byte = 0xd4 },
		{ .addr = 0xc0e673, .byte = 0x8d },
		{ .addr = 0xc0e674, .byte = 0xf7 },
		{ .addr = 0xc0e675, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x38 },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0xe83892, .byte = 0x38 },
		{ .addr = 0xe83893, .byte = 0x9c },
		{ .addr = 0xe83894, .byte = 0x2b },
		{ .addr = 0xe83895, .byte = 0x38 }
};

static const SST_RamByte tstw_final_ram_17[] = {
		{ .addr = 0xc0e670, .byte = 0x4a },
		{ .addr = 0xc0e671, .byte = 0x77 },
		{ .addr = 0xc0e672, .byte = 0xd4 },
		{ .addr = 0xc0e673, .byte = 0x8d },
		{ .addr = 0xc0e674, .byte = 0xf7 },
		{ .addr = 0xc0e675, .byte = 0x62 },
		{ .addr = 0x5b61a4, .byte = 0xe6 },
		{ .addr = 0x5b61a5, .byte = 0x72 },
		{ .addr = 0x5b61a0, .byte = 0xa2 },
		{ .addr = 0x5b61a1, .byte = 0x14 },
		{ .addr = 0x5b61a2, .byte = 0x00 },
		{ .addr = 0x5b61a3, .byte = 0xc0 },
		{ .addr = 0x5b619e, .byte = 0x4a },
		{ .addr = 0x5b619f, .byte = 0x77 },
		{ .addr = 0x5b619c, .byte = 0x61 },
		{ .addr = 0x5b619d, .byte = 0x55 },
		{ .addr = 0x5b6198, .byte = 0x4a },
		{ .addr = 0x5b6199, .byte = 0x75 },
		{ .addr = 0x5b619a, .byte = 0x00 },
		{ .addr = 0x5b619b, .byte = 0x5b },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x38 },
		{ .addr = 0x00000f, .byte = 0x92 },
		{ .addr = 0xe83892, .byte = 0x38 },
		{ .addr = 0xe83893, .byte = 0x9c },
		{ .addr = 0xe83894, .byte = 0x2b },
		{ .addr = 0xe83895, .byte = 0x38 }
};

static const SST_Transaction tstw_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12641908, .data = 63330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988692, .data = 57667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988772, .data = 58994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988768, .data = 41492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988770, .data = 192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988766, .data = 19063, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988764, .data = 24917, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988760, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5988762, .data = 91, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15218834, .data = 14492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15218836, .data = 11064, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_18[] = {
		{ .addr = 0xce4d7e, .byte = 0x4a },
		{ .addr = 0xce4d7f, .byte = 0x6f },
		{ .addr = 0xce4d80, .byte = 0xb6 },
		{ .addr = 0xce4d81, .byte = 0x3c },
		{ .addr = 0xce4d82, .byte = 0xf8 },
		{ .addr = 0xce4d83, .byte = 0x77 },
		{ .addr = 0x19cf56, .byte = 0x13 },
		{ .addr = 0x19cf57, .byte = 0x4c },
		{ .addr = 0xce4d84, .byte = 0x6c },
		{ .addr = 0xce4d85, .byte = 0x44 }
};

static const SST_RamByte tstw_final_ram_18[] = {
		{ .addr = 0xce4d7e, .byte = 0x4a },
		{ .addr = 0xce4d7f, .byte = 0x6f },
		{ .addr = 0xce4d80, .byte = 0xb6 },
		{ .addr = 0xce4d81, .byte = 0x3c },
		{ .addr = 0xce4d82, .byte = 0xf8 },
		{ .addr = 0xce4d83, .byte = 0x77 },
		{ .addr = 0x19cf56, .byte = 0x13 },
		{ .addr = 0x19cf57, .byte = 0x4c },
		{ .addr = 0xce4d84, .byte = 0x6c },
		{ .addr = 0xce4d85, .byte = 0x44 }
};

static const SST_Transaction tstw_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13520258, .data = 63607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1691478, .data = 4940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13520260, .data = 27716, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_19[] = {
		{ .addr = 0x38f266, .byte = 0x4a },
		{ .addr = 0x38f267, .byte = 0x6f },
		{ .addr = 0x38f268, .byte = 0x13 },
		{ .addr = 0x38f269, .byte = 0x5d },
		{ .addr = 0x38f26a, .byte = 0x62 },
		{ .addr = 0x38f26b, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0xa4 },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0xa07cf0, .byte = 0x26 },
		{ .addr = 0xa07cf1, .byte = 0xb4 },
		{ .addr = 0xa07cf2, .byte = 0x87 },
		{ .addr = 0xa07cf3, .byte = 0xc4 }
};

static const SST_RamByte tstw_final_ram_19[] = {
		{ .addr = 0x38f266, .byte = 0x4a },
		{ .addr = 0x38f267, .byte = 0x6f },
		{ .addr = 0x38f268, .byte = 0x13 },
		{ .addr = 0x38f269, .byte = 0x5d },
		{ .addr = 0x38f26a, .byte = 0x62 },
		{ .addr = 0x38f26b, .byte = 0x5f },
		{ .addr = 0x140d76, .byte = 0xf2 },
		{ .addr = 0x140d77, .byte = 0x68 },
		{ .addr = 0x140d72, .byte = 0xa5 },
		{ .addr = 0x140d73, .byte = 0x0e },
		{ .addr = 0x140d74, .byte = 0x00 },
		{ .addr = 0x140d75, .byte = 0x38 },
		{ .addr = 0x140d70, .byte = 0x4a },
		{ .addr = 0x140d71, .byte = 0x6f },
		{ .addr = 0x140d6e, .byte = 0x20 },
		{ .addr = 0x140d6f, .byte = 0xd5 },
		{ .addr = 0x140d6a, .byte = 0x4a },
		{ .addr = 0x140d6b, .byte = 0x75 },
		{ .addr = 0x140d6c, .byte = 0x00 },
		{ .addr = 0x140d6d, .byte = 0x14 },
		{ .addr = 0x00000c, .byte = 0xa4 },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x7c },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0xa07cf0, .byte = 0x26 },
		{ .addr = 0xa07cf1, .byte = 0xb4 },
		{ .addr = 0xa07cf2, .byte = 0x87 },
		{ .addr = 0xa07cf3, .byte = 0xc4 }
};

static const SST_Transaction tstw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3732074, .data = 25183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1319124, .data = 18793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1314166, .data = 62056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1314162, .data = 42254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1314164, .data = 56, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1314160, .data = 19055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1314158, .data = 8405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1314154, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1314156, .data = 20, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 42144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10517744, .data = 9908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10517746, .data = 34756, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_20[] = {
		{ .addr = 0x573b5c, .byte = 0x4a },
		{ .addr = 0x573b5d, .byte = 0x67 },
		{ .addr = 0x573b5e, .byte = 0x82 },
		{ .addr = 0x573b5f, .byte = 0x1a },
		{ .addr = 0x58b97e, .byte = 0x91 },
		{ .addr = 0x58b97f, .byte = 0x96 },
		{ .addr = 0x573b60, .byte = 0xf6 },
		{ .addr = 0x573b61, .byte = 0xe6 }
};

static const SST_RamByte tstw_final_ram_20[] = {
		{ .addr = 0x573b5c, .byte = 0x4a },
		{ .addr = 0x573b5d, .byte = 0x67 },
		{ .addr = 0x573b5e, .byte = 0x82 },
		{ .addr = 0x573b5f, .byte = 0x1a },
		{ .addr = 0x58b97e, .byte = 0x91 },
		{ .addr = 0x58b97f, .byte = 0x96 },
		{ .addr = 0x573b60, .byte = 0xf6 },
		{ .addr = 0x573b61, .byte = 0xe6 }
};

static const SST_Transaction tstw_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5814654, .data = 37270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5716832, .data = 63206, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_21[] = {
		{ .addr = 0xb7309e, .byte = 0x4a },
		{ .addr = 0xb7309f, .byte = 0x70 },
		{ .addr = 0xb730a0, .byte = 0x0a },
		{ .addr = 0xb730a1, .byte = 0x27 },
		{ .addr = 0xb730a2, .byte = 0xdc },
		{ .addr = 0xb730a3, .byte = 0x69 },
		{ .addr = 0x3aa5d4, .byte = 0x98 },
		{ .addr = 0x3aa5d5, .byte = 0xa8 },
		{ .addr = 0xb730a4, .byte = 0x05 },
		{ .addr = 0xb730a5, .byte = 0x52 }
};

static const SST_RamByte tstw_final_ram_21[] = {
		{ .addr = 0xb7309e, .byte = 0x4a },
		{ .addr = 0xb7309f, .byte = 0x70 },
		{ .addr = 0xb730a0, .byte = 0x0a },
		{ .addr = 0xb730a1, .byte = 0x27 },
		{ .addr = 0xb730a2, .byte = 0xdc },
		{ .addr = 0xb730a3, .byte = 0x69 },
		{ .addr = 0x3aa5d4, .byte = 0x98 },
		{ .addr = 0x3aa5d5, .byte = 0xa8 },
		{ .addr = 0xb730a4, .byte = 0x05 },
		{ .addr = 0xb730a5, .byte = 0x52 }
};

static const SST_Transaction tstw_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12005538, .data = 56425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3843540, .data = 39080, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12005540, .data = 1362, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_22[] = {
		{ .addr = 0x1fb70e, .byte = 0x4a },
		{ .addr = 0x1fb70f, .byte = 0x70 },
		{ .addr = 0x1fb710, .byte = 0xdc },
		{ .addr = 0x1fb711, .byte = 0xfc },
		{ .addr = 0x1fb712, .byte = 0xb6 },
		{ .addr = 0x1fb713, .byte = 0xcf },
		{ .addr = 0xb2b518, .byte = 0x13 },
		{ .addr = 0xb2b519, .byte = 0xc0 },
		{ .addr = 0x1fb714, .byte = 0x24 },
		{ .addr = 0x1fb715, .byte = 0xf0 }
};

static const SST_RamByte tstw_final_ram_22[] = {
		{ .addr = 0x1fb70e, .byte = 0x4a },
		{ .addr = 0x1fb70f, .byte = 0x70 },
		{ .addr = 0x1fb710, .byte = 0xdc },
		{ .addr = 0x1fb711, .byte = 0xfc },
		{ .addr = 0x1fb712, .byte = 0xb6 },
		{ .addr = 0x1fb713, .byte = 0xcf },
		{ .addr = 0xb2b518, .byte = 0x13 },
		{ .addr = 0xb2b519, .byte = 0xc0 },
		{ .addr = 0x1fb714, .byte = 0x24 },
		{ .addr = 0x1fb715, .byte = 0xf0 }
};

static const SST_Transaction tstw_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2078482, .data = 46799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11711768, .data = 5056, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2078484, .data = 9456, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_23[] = {
		{ .addr = 0x37148a, .byte = 0x4a },
		{ .addr = 0x37148b, .byte = 0x42 },
		{ .addr = 0x37148c, .byte = 0x41 },
		{ .addr = 0x37148d, .byte = 0x0e },
		{ .addr = 0x37148e, .byte = 0xbe },
		{ .addr = 0x37148f, .byte = 0x5e }
};

static const SST_RamByte tstw_final_ram_23[] = {
		{ .addr = 0x37148a, .byte = 0x4a },
		{ .addr = 0x37148b, .byte = 0x42 },
		{ .addr = 0x37148c, .byte = 0x41 },
		{ .addr = 0x37148d, .byte = 0x0e },
		{ .addr = 0x37148e, .byte = 0xbe },
		{ .addr = 0x37148f, .byte = 0x5e }
};

static const SST_Transaction tstw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3609742, .data = 48734, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_24[] = {
		{ .addr = 0x2ffb32, .byte = 0x4a },
		{ .addr = 0x2ffb33, .byte = 0x72 },
		{ .addr = 0x2ffb34, .byte = 0x8b },
		{ .addr = 0x2ffb35, .byte = 0x7e },
		{ .addr = 0x2ffb36, .byte = 0x70 },
		{ .addr = 0x2ffb37, .byte = 0x17 },
		{ .addr = 0x00000c, .byte = 0x9d },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x72 },
		{ .addr = 0x00000f, .byte = 0x96 },
		{ .addr = 0x767296, .byte = 0xb7 },
		{ .addr = 0x767297, .byte = 0xbf },
		{ .addr = 0x767298, .byte = 0x61 },
		{ .addr = 0x767299, .byte = 0x56 }
};

static const SST_RamByte tstw_final_ram_24[] = {
		{ .addr = 0x2ffb32, .byte = 0x4a },
		{ .addr = 0x2ffb33, .byte = 0x72 },
		{ .addr = 0x2ffb34, .byte = 0x8b },
		{ .addr = 0x2ffb35, .byte = 0x7e },
		{ .addr = 0x2ffb36, .byte = 0x70 },
		{ .addr = 0x2ffb37, .byte = 0x17 },
		{ .addr = 0xcceb5a, .byte = 0xfb },
		{ .addr = 0xcceb5b, .byte = 0x34 },
		{ .addr = 0xcceb56, .byte = 0x03 },
		{ .addr = 0xcceb57, .byte = 0x0a },
		{ .addr = 0xcceb58, .byte = 0x00 },
		{ .addr = 0xcceb59, .byte = 0x2f },
		{ .addr = 0xcceb54, .byte = 0x4a },
		{ .addr = 0xcceb55, .byte = 0x72 },
		{ .addr = 0xcceb52, .byte = 0xdb },
		{ .addr = 0xcceb53, .byte = 0x85 },
		{ .addr = 0xcceb4e, .byte = 0x4a },
		{ .addr = 0xcceb4f, .byte = 0x71 },
		{ .addr = 0xcceb50, .byte = 0x36 },
		{ .addr = 0xcceb51, .byte = 0xa3 },
		{ .addr = 0x00000c, .byte = 0x9d },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x72 },
		{ .addr = 0x00000f, .byte = 0x96 },
		{ .addr = 0x767296, .byte = 0xb7 },
		{ .addr = 0x767297, .byte = 0xbf },
		{ .addr = 0x767298, .byte = 0x61 },
		{ .addr = 0x767299, .byte = 0x56 }
};

static const SST_Transaction tstw_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3144502, .data = 28695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10738564, .data = 21739, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13429594, .data = 64308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13429590, .data = 778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13429592, .data = 47, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13429588, .data = 19058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13429586, .data = 56197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13429582, .data = 19057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13429584, .data = 13987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 40310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 29334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7762582, .data = 47039, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7762584, .data = 24918, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_25[] = {
		{ .addr = 0x86433c, .byte = 0x4a },
		{ .addr = 0x86433d, .byte = 0x55 },
		{ .addr = 0x86433e, .byte = 0x0f },
		{ .addr = 0x86433f, .byte = 0xcb },
		{ .addr = 0xe2068e, .byte = 0x41 },
		{ .addr = 0xe2068f, .byte = 0xa9 },
		{ .addr = 0x864340, .byte = 0xad },
		{ .addr = 0x864341, .byte = 0xc9 }
};

static const SST_RamByte tstw_final_ram_25[] = {
		{ .addr = 0x86433c, .byte = 0x4a },
		{ .addr = 0x86433d, .byte = 0x55 },
		{ .addr = 0x86433e, .byte = 0x0f },
		{ .addr = 0x86433f, .byte = 0xcb },
		{ .addr = 0xe2068e, .byte = 0x41 },
		{ .addr = 0xe2068f, .byte = 0xa9 },
		{ .addr = 0x864340, .byte = 0xad },
		{ .addr = 0x864341, .byte = 0xc9 }
};

static const SST_Transaction tstw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14812814, .data = 16809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8799040, .data = 44489, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_26[] = {
		{ .addr = 0x31c486, .byte = 0x4a },
		{ .addr = 0x31c487, .byte = 0x60 },
		{ .addr = 0x31c488, .byte = 0x2b },
		{ .addr = 0x31c489, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0x14 },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0x9e },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0xa49e20, .byte = 0xde },
		{ .addr = 0xa49e21, .byte = 0x7c },
		{ .addr = 0xa49e22, .byte = 0xed },
		{ .addr = 0xa49e23, .byte = 0x68 }
};

static const SST_RamByte tstw_final_ram_26[] = {
		{ .addr = 0x31c486, .byte = 0x4a },
		{ .addr = 0x31c487, .byte = 0x60 },
		{ .addr = 0x31c488, .byte = 0x2b },
		{ .addr = 0x31c489, .byte = 0xc4 },
		{ .addr = 0x59f316, .byte = 0xc4 },
		{ .addr = 0x59f317, .byte = 0x8a },
		{ .addr = 0x59f312, .byte = 0x05 },
		{ .addr = 0x59f313, .byte = 0x06 },
		{ .addr = 0x59f314, .byte = 0x00 },
		{ .addr = 0x59f315, .byte = 0x31 },
		{ .addr = 0x59f310, .byte = 0x4a },
		{ .addr = 0x59f311, .byte = 0x60 },
		{ .addr = 0x59f30e, .byte = 0x52 },
		{ .addr = 0x59f30f, .byte = 0xdd },
		{ .addr = 0x59f30a, .byte = 0x4a },
		{ .addr = 0x59f30b, .byte = 0x71 },
		{ .addr = 0x59f30c, .byte = 0x8a },
		{ .addr = 0x59f30d, .byte = 0xb3 },
		{ .addr = 0x00000c, .byte = 0x14 },
		{ .addr = 0x00000d, .byte = 0xa4 },
		{ .addr = 0x00000e, .byte = 0x9e },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0xa49e20, .byte = 0xde },
		{ .addr = 0xa49e21, .byte = 0x7c },
		{ .addr = 0xa49e22, .byte = 0xed },
		{ .addr = 0xa49e23, .byte = 0x68 }
};

static const SST_Transaction tstw_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11752156, .data = 40912, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5894934, .data = 50314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5894930, .data = 1286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5894932, .data = 49, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5894928, .data = 19040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5894926, .data = 21213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5894922, .data = 19057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5894924, .data = 35507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 40480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10788384, .data = 56956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10788386, .data = 60776, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_27[] = {
		{ .addr = 0x506ada, .byte = 0x4a },
		{ .addr = 0x506adb, .byte = 0x5a },
		{ .addr = 0x506adc, .byte = 0x1c },
		{ .addr = 0x506add, .byte = 0x0c },
		{ .addr = 0x1cc198, .byte = 0x9a },
		{ .addr = 0x1cc199, .byte = 0x2f },
		{ .addr = 0x506ade, .byte = 0xd6 },
		{ .addr = 0x506adf, .byte = 0xb8 }
};

static const SST_RamByte tstw_final_ram_27[] = {
		{ .addr = 0x506ada, .byte = 0x4a },
		{ .addr = 0x506adb, .byte = 0x5a },
		{ .addr = 0x506adc, .byte = 0x1c },
		{ .addr = 0x506add, .byte = 0x0c },
		{ .addr = 0x1cc198, .byte = 0x9a },
		{ .addr = 0x1cc199, .byte = 0x2f },
		{ .addr = 0x506ade, .byte = 0xd6 },
		{ .addr = 0x506adf, .byte = 0xb8 }
};

static const SST_Transaction tstw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1884568, .data = 39471, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5270238, .data = 54968, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_28[] = {
		{ .addr = 0x3054b0, .byte = 0x4a },
		{ .addr = 0x3054b1, .byte = 0x5f },
		{ .addr = 0x3054b2, .byte = 0x34 },
		{ .addr = 0x3054b3, .byte = 0x45 },
		{ .addr = 0x00ab62, .byte = 0x2e },
		{ .addr = 0x00ab63, .byte = 0x5a },
		{ .addr = 0x3054b4, .byte = 0xe6 },
		{ .addr = 0x3054b5, .byte = 0x0a }
};

static const SST_RamByte tstw_final_ram_28[] = {
		{ .addr = 0x3054b0, .byte = 0x4a },
		{ .addr = 0x3054b1, .byte = 0x5f },
		{ .addr = 0x3054b2, .byte = 0x34 },
		{ .addr = 0x3054b3, .byte = 0x45 },
		{ .addr = 0x00ab62, .byte = 0x2e },
		{ .addr = 0x00ab63, .byte = 0x5a },
		{ .addr = 0x3054b4, .byte = 0xe6 },
		{ .addr = 0x3054b5, .byte = 0x0a }
};

static const SST_Transaction tstw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 43874, .data = 11866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3167412, .data = 58890, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_29[] = {
		{ .addr = 0x27c284, .byte = 0x4a },
		{ .addr = 0x27c285, .byte = 0x6c },
		{ .addr = 0x27c286, .byte = 0xad },
		{ .addr = 0x27c287, .byte = 0x6c },
		{ .addr = 0x27c288, .byte = 0x9d },
		{ .addr = 0x27c289, .byte = 0xf7 },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x42 },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x8e42ba, .byte = 0xc6 },
		{ .addr = 0x8e42bb, .byte = 0xa6 },
		{ .addr = 0x8e42bc, .byte = 0xfb },
		{ .addr = 0x8e42bd, .byte = 0x59 }
};

static const SST_RamByte tstw_final_ram_29[] = {
		{ .addr = 0x27c284, .byte = 0x4a },
		{ .addr = 0x27c285, .byte = 0x6c },
		{ .addr = 0x27c286, .byte = 0xad },
		{ .addr = 0x27c287, .byte = 0x6c },
		{ .addr = 0x27c288, .byte = 0x9d },
		{ .addr = 0x27c289, .byte = 0xf7 },
		{ .addr = 0xb67b7a, .byte = 0xc2 },
		{ .addr = 0xb67b7b, .byte = 0x86 },
		{ .addr = 0xb67b76, .byte = 0xa5 },
		{ .addr = 0xb67b77, .byte = 0x0e },
		{ .addr = 0xb67b78, .byte = 0x00 },
		{ .addr = 0xb67b79, .byte = 0x27 },
		{ .addr = 0xb67b74, .byte = 0x4a },
		{ .addr = 0xb67b75, .byte = 0x6c },
		{ .addr = 0xb67b72, .byte = 0xa5 },
		{ .addr = 0xb67b73, .byte = 0x61 },
		{ .addr = 0xb67b6e, .byte = 0x4a },
		{ .addr = 0xb67b6f, .byte = 0x75 },
		{ .addr = 0xb67b70, .byte = 0x58 },
		{ .addr = 0xb67b71, .byte = 0x6a },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0x8e },
		{ .addr = 0x00000e, .byte = 0x42 },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x8e42ba, .byte = 0xc6 },
		{ .addr = 0x8e42bb, .byte = 0xa6 },
		{ .addr = 0x8e42bc, .byte = 0xfb },
		{ .addr = 0x8e42bd, .byte = 0x59 }
};

static const SST_Transaction tstw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2605704, .data = 40439, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6989152, .data = 22216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11959162, .data = 49798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11959158, .data = 42254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11959160, .data = 39, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11959156, .data = 19052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11959154, .data = 42337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11959150, .data = 19061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11959152, .data = 22634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9323194, .data = 50854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9323196, .data = 64345, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_30[] = {
		{ .addr = 0x71bb24, .byte = 0x4a },
		{ .addr = 0x71bb25, .byte = 0x76 },
		{ .addr = 0x71bb26, .byte = 0xed },
		{ .addr = 0x71bb27, .byte = 0xa4 },
		{ .addr = 0x71bb28, .byte = 0xe1 },
		{ .addr = 0x71bb29, .byte = 0xe1 },
		{ .addr = 0x935416, .byte = 0xa3 },
		{ .addr = 0x935417, .byte = 0xd3 },
		{ .addr = 0x71bb2a, .byte = 0x4b },
		{ .addr = 0x71bb2b, .byte = 0x25 }
};

static const SST_RamByte tstw_final_ram_30[] = {
		{ .addr = 0x71bb24, .byte = 0x4a },
		{ .addr = 0x71bb25, .byte = 0x76 },
		{ .addr = 0x71bb26, .byte = 0xed },
		{ .addr = 0x71bb27, .byte = 0xa4 },
		{ .addr = 0x71bb28, .byte = 0xe1 },
		{ .addr = 0x71bb29, .byte = 0xe1 },
		{ .addr = 0x935416, .byte = 0xa3 },
		{ .addr = 0x935417, .byte = 0xd3 },
		{ .addr = 0x71bb2a, .byte = 0x4b },
		{ .addr = 0x71bb2b, .byte = 0x25 }
};

static const SST_Transaction tstw_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7453480, .data = 57825, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9655318, .data = 41939, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7453482, .data = 19237, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte tstw_initial_ram_31[] = {
		{ .addr = 0xfef2ac, .byte = 0x4a },
		{ .addr = 0xfef2ad, .byte = 0x52 },
		{ .addr = 0xfef2ae, .byte = 0xbc },
		{ .addr = 0xfef2af, .byte = 0x9f },
		{ .addr = 0x00000c, .byte = 0x47 },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x304634, .byte = 0xaf },
		{ .addr = 0x304635, .byte = 0x86 },
		{ .addr = 0x304636, .byte = 0xe6 },
		{ .addr = 0x304637, .byte = 0x5d }
};

static const SST_RamByte tstw_final_ram_31[] = {
		{ .addr = 0xfef2ac, .byte = 0x4a },
		{ .addr = 0xfef2ad, .byte = 0x52 },
		{ .addr = 0xfef2ae, .byte = 0xbc },
		{ .addr = 0xfef2af, .byte = 0x9f },
		{ .addr = 0x147db0, .byte = 0xf2 },
		{ .addr = 0x147db1, .byte = 0xae },
		{ .addr = 0x147dac, .byte = 0x87 },
		{ .addr = 0x147dad, .byte = 0x15 },
		{ .addr = 0x147dae, .byte = 0x00 },
		{ .addr = 0x147daf, .byte = 0xfe },
		{ .addr = 0x147daa, .byte = 0x4a },
		{ .addr = 0x147dab, .byte = 0x52 },
		{ .addr = 0x147da8, .byte = 0x5c },
		{ .addr = 0x147da9, .byte = 0xd5 },
		{ .addr = 0x147da4, .byte = 0x4a },
		{ .addr = 0x147da5, .byte = 0x51 },
		{ .addr = 0x147da6, .byte = 0x92 },
		{ .addr = 0x147da7, .byte = 0xca },
		{ .addr = 0x00000c, .byte = 0x47 },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x304634, .byte = 0xaf },
		{ .addr = 0x304635, .byte = 0x86 },
		{ .addr = 0x304636, .byte = 0xe6 },
		{ .addr = 0x304637, .byte = 0x5d }
};

static const SST_Transaction tstw_transactions_31[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13262036, .data = 53868, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1342896, .data = 62126, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1342892, .data = 34581, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1342894, .data = 254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1342890, .data = 19026, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1342888, .data = 23765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1342884, .data = 19025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1342886, .data = 37578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 18224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3163700, .data = 44934, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3163702, .data = 58973, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase tstw[] = {
	{
		.name = "000 TST.w -(A3) 4a63",
		.initial = {
			.regs = {
				2608745888, 650933816, 1727878412, 877554046, 3158028444, 1391447430, 3774481428, 3624241845, 4207237481, 1039397942, 1154057725, 3728533086, 3565609677, 2848513006, 2484841022, 12356562, 15882620, 8972, 2419882
			},
			.prefetch0 = 19043,
			.prefetch1 = 61074,
			.ram = tstw_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2608745888, 650933816, 1727878412, 877554046, 3158028444, 1391447430, 3774481428, 3624241845, 4207237481, 1039397942, 1154057725, 3728533084, 3565609677, 2848513006, 2484841022, 12356562, 15882620, 8968, 2419884
			},
			.prefetch0 = 61074,
			.prefetch1 = 31702,
			.ram = tstw_final_ram_0,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_0,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "001 TST.w -(A2) 4a62",
		.initial = {
			.regs = {
				3809938717, 2386442440, 4222854340, 2835803689, 2807040865, 3656798672, 1176679537, 794827023, 3699428299, 972340928, 1255284594, 2621062735, 2960453301, 4159211116, 1854217545, 5741448, 7535850, 8201, 3314402
			},
			.prefetch0 = 19042,
			.prefetch1 = 33542,
			.ram = tstw_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3809938717, 2386442440, 4222854340, 2835803689, 2807040865, 3656798672, 1176679537, 794827023, 3699428299, 972340928, 1255284592, 2621062735, 2960453301, 4159211116, 1854217545, 5741448, 7535850, 8200, 3314404
			},
			.prefetch0 = 33542,
			.prefetch1 = 51665,
			.ram = tstw_final_ram_1,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_1,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "002 TST.w -(A0) 4a60",
		.initial = {
			.regs = {
				3844787781, 2707322548, 2599892774, 2965128356, 2700729955, 3911199306, 2217384976, 1754975470, 1185787010, 878375730, 1566679824, 3749228011, 2297599003, 3485748391, 2197812358, 12005562, 1575844, 1295, 1567132
			},
			.prefetch0 = 19040,
			.prefetch1 = 22798,
			.ram = tstw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3844787781, 2707322548, 2599892774, 2965128356, 2700729955, 3911199306, 2217384976, 1754975470, 1185787008, 878375730, 1566679824, 3749228011, 2297599003, 3485748391, 2197812358, 12005562, 1575844, 1288, 1567134
			},
			.prefetch0 = 22798,
			.prefetch1 = 54965,
			.ram = tstw_final_ram_2,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_2,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "003 TST.w (d16, A5) 4a6d",
		.initial = {
			.regs = {
				3498855837, 1402013418, 2674252297, 146536398, 77504672, 2980496768, 630683551, 2927526694, 371536752, 504608755, 171436806, 1310053662, 4151429584, 1879405149, 4152465032, 12022728, 12155296, 33793, 16077488
			},
			.prefetch0 = 19053,
			.prefetch1 = 7082,
			.ram = tstw_initial_ram_3,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3498855837, 1402013418, 2674252297, 146536398, 77504672, 2980496768, 630683551, 2927526694, 371536752, 504608755, 171436806, 1310053662, 4151429584, 1879405149, 4152465032, 12022728, 12155282, 9217, 2925442108
			},
			.prefetch0 = 50767,
			.prefetch1 = 52727,
			.ram = tstw_final_ram_3,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_3,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "004 TST.w -(A0) 4a60",
		.initial = {
			.regs = {
				1379898052, 540592850, 2796639235, 410482989, 215989009, 3951449032, 1712392375, 1669858514, 4234728001, 3151292965, 1193432282, 980402763, 4046055389, 660816183, 2803264478, 14378480, 10278692, 40977, 4709618
			},
			.prefetch0 = 19040,
			.prefetch1 = 50511,
			.ram = tstw_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1379898052, 540592850, 2796639235, 410482989, 215989009, 3951449032, 1712392375, 1669858514, 4234727999, 3151292965, 1193432282, 980402763, 4046055389, 660816183, 2803264478, 14378480, 10278678, 8209, 3525192092
			},
			.prefetch0 = 60864,
			.prefetch1 = 13037,
			.ram = tstw_final_ram_4,
			.ram_len = 26,
		},
		.transactions = tstw_transactions_4,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "005 TST.w D1 4a41",
		.initial = {
			.regs = {
				613605310, 202685260, 2928224246, 4096394737, 3863928469, 2556690030, 2193418165, 3376531038, 1417794946, 187701752, 2244648939, 46713162, 2991751363, 3516513390, 4174734277, 13169560, 3902182, 1047, 5134444
			},
			.prefetch0 = 19009,
			.prefetch1 = 33330,
			.ram = tstw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				613605310, 202685260, 2928224246, 4096394737, 3863928469, 2556690030, 2193418165, 3376531038, 1417794946, 187701752, 2244648939, 46713162, 2991751363, 3516513390, 4174734277, 13169560, 3902182, 1048, 5134446
			},
			.prefetch0 = 33330,
			.prefetch1 = 47895,
			.ram = tstw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = tstw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 TST.w (d16, A5) 4a6d",
		.initial = {
			.regs = {
				2515396247, 2934044407, 706276626, 4015654600, 87108867, 636366217, 2398548230, 1599934135, 308321838, 3655904427, 2995111408, 1659028495, 2407186071, 3380551350, 2463636833, 1539242, 10903782, 40972, 11591892
			},
			.prefetch0 = 19053,
			.prefetch1 = 19095,
			.ram = tstw_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2515396247, 2934044407, 706276626, 4015654600, 87108867, 636366217, 2398548230, 1599934135, 308321838, 3655904427, 2995111408, 1659028495, 2407186071, 3380551350, 2463636833, 1539242, 10903768, 8204, 4075430484
			},
			.prefetch0 = 5772,
			.prefetch1 = 53163,
			.ram = tstw_final_ram_6,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_6,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "007 TST.w (d8, A6, Xn) 4a76",
		.initial = {
			.regs = {
				818817125, 4085249469, 1940459464, 3267914313, 2277566474, 1501305765, 1706665717, 139780841, 575263584, 3025943386, 3371164068, 367135429, 1321319494, 4221460527, 671038023, 548786, 338654, 9240, 10806908
			},
			.prefetch0 = 19062,
			.prefetch1 = 42580,
			.ram = tstw_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				818817125, 4085249469, 1940459464, 3267914313, 2277566474, 1501305765, 1706665717, 139780841, 575263584, 3025943386, 3371164068, 367135429, 1321319494, 4221460527, 671038023, 548786, 338640, 9240, 1619845314
			},
			.prefetch0 = 6046,
			.prefetch1 = 34646,
			.ram = tstw_final_ram_7,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_7,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "008 TST.w (d16, A2) 4a6a",
		.initial = {
			.regs = {
				1581831890, 2802935677, 1456633574, 2061576736, 3211538624, 1189668075, 1038608794, 1023169260, 2538453004, 1579635838, 4066981156, 3970044657, 1643692585, 3795834181, 396066693, 2607356, 3427592, 1046, 1022252
			},
			.prefetch0 = 19050,
			.prefetch1 = 16527,
			.ram = tstw_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1581831890, 2802935677, 1456633574, 2061576736, 3211538624, 1189668075, 1038608794, 1023169260, 2538453004, 1579635838, 4066981156, 3970044657, 1643692585, 3795834181, 396066693, 2607356, 3427578, 9238, 3915669892
			},
			.prefetch0 = 8730,
			.prefetch1 = 23314,
			.ram = tstw_final_ram_8,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_8,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "009 TST.w (A6) 4a56",
		.initial = {
			.regs = {
				3745715985, 2772896324, 2325432860, 2235271746, 670732979, 11525070, 2116495265, 3997323004, 2285602161, 2610238740, 1313729804, 1895112262, 3413642816, 710266466, 1441974072, 13231128, 4811318, 10002, 1360288
			},
			.prefetch0 = 19030,
			.prefetch1 = 5515,
			.ram = tstw_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3745715985, 2772896324, 2325432860, 2235271746, 670732979, 11525070, 2116495265, 3997323004, 2285602161, 2610238740, 1313729804, 1895112262, 3413642816, 710266466, 1441974072, 13231128, 4811318, 10008, 1360290
			},
			.prefetch0 = 5515,
			.prefetch1 = 59247,
			.ram = tstw_final_ram_9,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_9,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "010 TST.w (A3) 4a53",
		.initial = {
			.regs = {
				3821138099, 2702828678, 779837054, 3291978033, 4245150749, 2621844471, 1920475795, 4293063956, 3477370405, 1572400690, 1736977537, 2578627667, 1451783727, 2528524212, 2238471064, 4506032, 14804500, 274, 15365824
			},
			.prefetch0 = 19027,
			.prefetch1 = 17346,
			.ram = tstw_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3821138099, 2702828678, 779837054, 3291978033, 4245150749, 2621844471, 1920475795, 4293063956, 3477370405, 1572400690, 1736977537, 2578627667, 1451783727, 2528524212, 2238471064, 4506032, 14804486, 8466, 1539599254
			},
			.prefetch0 = 26500,
			.prefetch1 = 29379,
			.ram = tstw_final_ram_10,
			.ram_len = 26,
		},
		.transactions = tstw_transactions_10,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "011 TST.w (d8, A2, Xn) 4a72",
		.initial = {
			.regs = {
				3502056637, 2355405243, 100875612, 486097222, 147471380, 637855232, 2861558583, 1847142016, 2878213194, 1071740040, 982104320, 3521184014, 2215027767, 4152963404, 2408808662, 14168114, 5321042, 34566, 8165374
			},
			.prefetch0 = 19058,
			.prefetch1 = 47056,
			.ram = tstw_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3502056637, 2355405243, 100875612, 486097222, 147471380, 637855232, 2861558583, 1847142016, 2878213194, 1071740040, 982104320, 3521184014, 2215027767, 4152963404, 2408808662, 14168114, 5321042, 34560, 8165378
			},
			.prefetch0 = 50050,
			.prefetch1 = 888,
			.ram = tstw_final_ram_11,
			.ram_len = 10,
		},
		.transactions = tstw_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 TST.w D4 4a44",
		.initial = {
			.regs = {
				2121186194, 1301181524, 4140125244, 2168092759, 3774848942, 651168068, 931316455, 2491397653, 3451461396, 4896468, 1333363392, 2127187904, 3785924475, 1508105272, 2278761019, 6909830, 9504270, 33039, 13432964
			},
			.prefetch0 = 19012,
			.prefetch1 = 11102,
			.ram = tstw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2121186194, 1301181524, 4140125244, 2168092759, 3774848942, 651168068, 931316455, 2491397653, 3451461396, 4896468, 1333363392, 2127187904, 3785924475, 1508105272, 2278761019, 6909830, 9504270, 33032, 13432966
			},
			.prefetch0 = 11102,
			.prefetch1 = 15379,
			.ram = tstw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = tstw_transactions_12,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "013 TST.w -(A1) 4a61",
		.initial = {
			.regs = {
				13812577, 3190496723, 2780369686, 4254287161, 1052741964, 4072433927, 741538142, 3537464076, 3947867171, 3512006188, 2595250409, 762251895, 2068151599, 3366294601, 519576574, 11280232, 11760418, 42511, 2314274
			},
			.prefetch0 = 19041,
			.prefetch1 = 19752,
			.ram = tstw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				13812577, 3190496723, 2780369686, 4254287161, 1052741964, 4072433927, 741538142, 3537464076, 3947867171, 3512006186, 2595250409, 762251895, 2068151599, 3366294601, 519576574, 11280232, 11760418, 42496, 2314276
			},
			.prefetch0 = 19752,
			.prefetch1 = 20728,
			.ram = tstw_final_ram_13,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_13,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "014 TST.w (A7)+ 4a5f",
		.initial = {
			.regs = {
				3972208908, 1781055320, 30159522, 2155902227, 385351230, 4079040197, 3222509988, 1161934782, 1697396263, 1740126764, 214081171, 2703637325, 3424840859, 2369508156, 523539079, 9762730, 12916198, 9479, 4330744
			},
			.prefetch0 = 19039,
			.prefetch1 = 16897,
			.ram = tstw_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3972208908, 1781055320, 30159522, 2155902227, 385351230, 4079040197, 3222509988, 1161934782, 1697396263, 1740126764, 214081171, 2703637325, 3424840859, 2369508156, 523539079, 9762730, 12916200, 9480, 4330746
			},
			.prefetch0 = 16897,
			.prefetch1 = 58853,
			.ram = tstw_final_ram_14,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_14,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "015 TST.w (d16, A6) 4a6e",
		.initial = {
			.regs = {
				1528759480, 3196420569, 2147345369, 4062516850, 884969879, 4100909375, 922889837, 1884659587, 267576835, 684078329, 3024558285, 2188697220, 90727617, 406975637, 2290884133, 15803308, 11280066, 41492, 9240782
			},
			.prefetch0 = 19054,
			.prefetch1 = 20610,
			.ram = tstw_initial_ram_15,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1528759480, 3196420569, 2147345369, 4062516850, 884969879, 4100909375, 922889837, 1884659587, 267576835, 684078329, 3024558285, 2188697220, 90727617, 406975637, 2290884133, 15803308, 11280052, 8724, 4221323320
			},
			.prefetch0 = 58625,
			.prefetch1 = 5231,
			.ram = tstw_final_ram_15,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_15,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "016 TST.w (A5)+ 4a5d",
		.initial = {
			.regs = {
				1953968008, 1141126237, 3007451985, 1021833096, 218704359, 3179488514, 709411318, 1388425613, 2879164916, 1039565941, 105084592, 3598146025, 306195823, 2709174861, 1457818583, 2348460, 4560290, 29, 3592396
			},
			.prefetch0 = 19037,
			.prefetch1 = 30562,
			.ram = tstw_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1953968008, 1141126237, 3007451985, 1021833096, 218704359, 3179488514, 709411318, 1388425613, 2879164916, 1039565941, 105084592, 3598146025, 306195823, 2709174863, 1457818583, 2348460, 4560276, 8221, 3443036156
			},
			.prefetch0 = 5829,
			.prefetch1 = 4575,
			.ram = tstw_final_ram_16,
			.ram_len = 26,
		},
		.transactions = tstw_transactions_16,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "017 TST.w (d8, A7, Xn) 4a77",
		.initial = {
			.regs = {
				4094511196, 2337036864, 844620052, 3872645148, 1144965708, 1100290444, 3092076318, 3214232791, 111976729, 1160025843, 243515755, 375267291, 2645407775, 694485026, 1263507875, 3025550, 5988774, 41492, 12641908
			},
			.prefetch0 = 19063,
			.prefetch1 = 54413,
			.ram = tstw_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4094511196, 2337036864, 844620052, 3872645148, 1144965708, 1100290444, 3092076318, 3214232791, 111976729, 1160025843, 243515755, 375267291, 2645407775, 694485026, 1263507875, 3025550, 5988760, 8724, 1357396118
			},
			.prefetch0 = 14492,
			.prefetch1 = 11064,
			.ram = tstw_final_ram_17,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_17,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "018 TST.w (d16, A7) 4a6f",
		.initial = {
			.regs = {
				2615332881, 3987802586, 2404203859, 3211150448, 3420039823, 1213183948, 805741047, 3187012274, 213928121, 3366151409, 2268838210, 2160130289, 3400009545, 262021620, 586725951, 3123222, 1710362, 42004, 13520258
			},
			.prefetch0 = 19055,
			.prefetch1 = 46652,
			.ram = tstw_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2615332881, 3987802586, 2404203859, 3211150448, 3420039823, 1213183948, 805741047, 3187012274, 213928121, 3366151409, 2268838210, 2160130289, 3400009545, 262021620, 586725951, 3123222, 1710362, 42000, 13520262
			},
			.prefetch0 = 63607,
			.prefetch1 = 27716,
			.ram = tstw_final_ram_18,
			.ram_len = 10,
		},
		.transactions = tstw_transactions_18,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "019 TST.w (d16, A7) 4a6f",
		.initial = {
			.regs = {
				540841410, 1134369446, 4218298674, 2307693654, 2480419036, 296973833, 3814935777, 1446297181, 1777434354, 2164881153, 543316901, 3769500410, 2556328174, 3870445074, 2866917668, 14341028, 1314168, 42254, 3732074
			},
			.prefetch0 = 19055,
			.prefetch1 = 4957,
			.ram = tstw_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				540841410, 1134369446, 4218298674, 2307693654, 2480419036, 296973833, 3814935777, 1446297181, 1777434354, 2164881153, 543316901, 3769500410, 2556328174, 3870445074, 2866917668, 14341028, 1314154, 9486, 2761981172
			},
			.prefetch0 = 9908,
			.prefetch1 = 34756,
			.ram = tstw_final_ram_19,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_19,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "020 TST.w -(A7) 4a67",
		.initial = {
			.regs = {
				478968591, 583203409, 682723975, 2584029301, 397383752, 2442070098, 2230077987, 2110451571, 1356918821, 429504013, 2140770170, 3327020978, 2616526824, 657496218, 3933488554, 16283252, 5814656, 41239, 5716832
			},
			.prefetch0 = 19047,
			.prefetch1 = 33306,
			.ram = tstw_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				478968591, 583203409, 682723975, 2584029301, 397383752, 2442070098, 2230077987, 2110451571, 1356918821, 429504013, 2140770170, 3327020978, 2616526824, 657496218, 3933488554, 16283252, 5814654, 41240, 5716834
			},
			.prefetch0 = 33306,
			.prefetch1 = 63206,
			.ram = tstw_final_ram_20,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_20,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "021 TST.w (d8, A0, Xn) 4a70",
		.initial = {
			.regs = {
				3636860374, 1977421163, 532674512, 653019187, 3361284315, 3665797177, 2743735191, 3188540968, 1349816279, 726104475, 2264347104, 2360972141, 2013664803, 3778424597, 3253988278, 8960530, 8940074, 10006, 12005538
			},
			.prefetch0 = 19056,
			.prefetch1 = 2599,
			.ram = tstw_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3636860374, 1977421163, 532674512, 653019187, 3361284315, 3665797177, 2743735191, 3188540968, 1349816279, 726104475, 2264347104, 2360972141, 2013664803, 3778424597, 3253988278, 8960530, 8940074, 10008, 12005542
			},
			.prefetch0 = 56425,
			.prefetch1 = 1362,
			.ram = tstw_final_ram_21,
			.ram_len = 10,
		},
		.transactions = tstw_transactions_21,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "022 TST.w (d8, A0, Xn) 4a70",
		.initial = {
			.regs = {
				640582357, 2105994626, 1804852769, 2727129338, 3604422838, 3175802989, 1487646965, 992979655, 1178541406, 4177238817, 1598370157, 3162658353, 177159559, 796104638, 3581285641, 8775638, 771110, 1300, 2078482
			},
			.prefetch0 = 19056,
			.prefetch1 = 56572,
			.ram = tstw_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				640582357, 2105994626, 1804852769, 2727129338, 3604422838, 3175802989, 1487646965, 992979655, 1178541406, 4177238817, 1598370157, 3162658353, 177159559, 796104638, 3581285641, 8775638, 771110, 1296, 2078486
			},
			.prefetch0 = 46799,
			.prefetch1 = 9456,
			.ram = tstw_final_ram_22,
			.ram_len = 10,
		},
		.transactions = tstw_transactions_22,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "023 TST.w D2 4a42",
		.initial = {
			.regs = {
				3005998772, 1838650868, 1971772449, 2172488478, 1551923206, 1847330885, 549838423, 2919666713, 4284867740, 3056447275, 3239448034, 3451895013, 57079251, 2741653530, 2439995875, 15006, 16442124, 1280, 3609742
			},
			.prefetch0 = 19010,
			.prefetch1 = 16654,
			.ram = tstw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3005998772, 1838650868, 1971772449, 2172488478, 1551923206, 1847330885, 549838423, 2919666713, 4284867740, 3056447275, 3239448034, 3451895013, 57079251, 2741653530, 2439995875, 15006, 16442124, 1288, 3609744
			},
			.prefetch0 = 16654,
			.prefetch1 = 48734,
			.ram = tstw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = tstw_transactions_23,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "024 TST.w (d8, A2, Xn) 4a72",
		.initial = {
			.regs = {
				1962036994, 2299465720, 3923382654, 3771951221, 3893784668, 3269425548, 1646396375, 2182376047, 438486943, 3891246153, 478221160, 2556824432, 2135390168, 2677781939, 2268581015, 5092926, 13429596, 778, 3144502
			},
			.prefetch0 = 19058,
			.prefetch1 = 35710,
			.ram = tstw_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1962036994, 2299465720, 3923382654, 3771951221, 3893784668, 3269425548, 1646396375, 2182376047, 438486943, 3891246153, 478221160, 2556824432, 2135390168, 2677781939, 2268581015, 5092926, 13429582, 8970, 2641785498
			},
			.prefetch0 = 47039,
			.prefetch1 = 24918,
			.ram = tstw_final_ram_24,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_24,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "025 TST.w (A5) 4a55",
		.initial = {
			.regs = {
				2148379317, 4247852304, 109825228, 1241657620, 4072853822, 1605104897, 109479417, 1869513605, 3816768059, 3288645936, 1478042901, 2147731276, 835507718, 3571582606, 3555377692, 14307866, 10022084, 42780, 8799040
			},
			.prefetch0 = 19029,
			.prefetch1 = 4043,
			.ram = tstw_initial_ram_25,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2148379317, 4247852304, 109825228, 1241657620, 4072853822, 1605104897, 109479417, 1869513605, 3816768059, 3288645936, 1478042901, 2147731276, 835507718, 3571582606, 3555377692, 14307866, 10022084, 42768, 8799042
			},
			.prefetch0 = 4043,
			.prefetch1 = 44489,
			.ram = tstw_final_ram_25,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_25,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "026 TST.w -(A0) 4a60",
		.initial = {
			.regs = {
				4125121848, 2296189984, 3192473128, 3358620242, 1337735608, 1679016452, 3785091627, 1817229048, 2327007967, 177359234, 2295923443, 2997071155, 1597097291, 2697093993, 2862432061, 9785842, 5894936, 1286, 3261578
			},
			.prefetch0 = 19040,
			.prefetch1 = 11204,
			.ram = tstw_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4125121848, 2296189984, 3192473128, 3358620242, 1337735608, 1679016452, 3785091627, 1817229048, 2327007965, 177359234, 2295923443, 2997071155, 1597097291, 2697093993, 2862432061, 9785842, 5894922, 9478, 346332708
			},
			.prefetch0 = 56956,
			.prefetch1 = 60776,
			.ram = tstw_final_ram_26,
			.ram_len = 26,
		},
		.transactions = tstw_transactions_26,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "027 TST.w (A2)+ 4a5a",
		.initial = {
			.regs = {
				1622321906, 639296610, 614584339, 2477538843, 3184256499, 1930273464, 3419583424, 1586595737, 184519180, 798376090, 2669461912, 1562048709, 1392356984, 284685665, 2464870306, 15301046, 13702566, 9997, 5270238
			},
			.prefetch0 = 19034,
			.prefetch1 = 7180,
			.ram = tstw_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1622321906, 639296610, 614584339, 2477538843, 3184256499, 1930273464, 3419583424, 1586595737, 184519180, 798376090, 2669461914, 1562048709, 1392356984, 284685665, 2464870306, 15301046, 13702566, 9992, 5270240
			},
			.prefetch0 = 7180,
			.prefetch1 = 54968,
			.ram = tstw_final_ram_27,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_27,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "028 TST.w (A7)+ 4a5f",
		.initial = {
			.regs = {
				50555702, 4212729018, 3275198870, 2732238255, 3801967726, 3652808293, 3241960209, 3092633834, 2946432819, 2721404576, 4258444204, 76692384, 132560815, 1201799027, 2746807935, 8950720, 43874, 9988, 3167412
			},
			.prefetch0 = 19039,
			.prefetch1 = 13381,
			.ram = tstw_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				50555702, 4212729018, 3275198870, 2732238255, 3801967726, 3652808293, 3241960209, 3092633834, 2946432819, 2721404576, 4258444204, 76692384, 132560815, 1201799027, 2746807935, 8950720, 43876, 9984, 3167414
			},
			.prefetch0 = 13381,
			.prefetch1 = 58890,
			.ram = tstw_final_ram_28,
			.ram_len = 8,
		},
		.transactions = tstw_transactions_28,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "029 TST.w (d16, A4) 4a6c",
		.initial = {
			.regs = {
				3269723371, 1214438303, 1691885730, 3873979068, 2667184659, 3841732911, 979118219, 1643463569, 2073356368, 3108291800, 221773174, 3732324683, 1483405301, 1283426306, 3761273671, 11073038, 11959164, 42254, 2605704
			},
			.prefetch0 = 19052,
			.prefetch1 = 44396,
			.ram = tstw_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3269723371, 1214438303, 1691885730, 3873979068, 2667184659, 3841732911, 979118219, 1643463569, 2073356368, 3108291800, 221773174, 3732324683, 1483405301, 1283426306, 3761273671, 11073038, 11959150, 9486, 1418609342
			},
			.prefetch0 = 50854,
			.prefetch1 = 64345,
			.ram = tstw_final_ram_29,
			.ram_len = 28,
		},
		.transactions = tstw_transactions_29,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "030 TST.w (d8, A6, Xn) 4a76",
		.initial = {
			.regs = {
				340898821, 1123547721, 3327393211, 3606365602, 1072771143, 2616043659, 422858252, 3297803855, 2569908298, 8523632, 3237815535, 2078970148, 1260786371, 2328656692, 600418873, 10150676, 4466180, 41478, 7453480
			},
			.prefetch0 = 19062,
			.prefetch1 = 60836,
			.ram = tstw_initial_ram_30,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				340898821, 1123547721, 3327393211, 3606365602, 1072771143, 2616043659, 422858252, 3297803855, 2569908298, 8523632, 3237815535, 2078970148, 1260786371, 2328656692, 600418873, 10150676, 4466180, 41480, 7453484
			},
			.prefetch0 = 57825,
			.prefetch1 = 19237,
			.ram = tstw_final_ram_30,
			.ram_len = 10,
		},
		.transactions = tstw_transactions_30,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "031 TST.w (A2) 4a52",
		.initial = {
			.regs = {
				39525618, 4146470559, 3887652466, 3330799235, 3222339575, 2501225594, 100630382, 1888792616, 886420333, 303784240, 2462735573, 3580623584, 3467262838, 30872643, 3039312132, 11636614, 1342898, 34581, 16708272
			},
			.prefetch0 = 19026,
			.prefetch1 = 48287,
			.ram = tstw_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				39525618, 4146470559, 3887652466, 3330799235, 3222339575, 2501225594, 100630382, 1888792616, 886420333, 303784240, 2462735573, 3580623584, 3467262838, 30872643, 3039312132, 11636614, 1342884, 10005, 1194346040
			},
			.prefetch0 = 44934,
			.prefetch1 = 58973,
			.ram = tstw_final_ram_31,
			.ram_len = 26,
		},
		.transactions = tstw_transactions_31,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_TSTW_H */