#ifndef RBT_SUBAW_H
#define RBT_SUBAW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subaw_initial_ram_0[] = {
		{ .addr = 0x011d2e, .byte = 0x94 },
		{ .addr = 0x011d2f, .byte = 0xd5 },
		{ .addr = 0x011d30, .byte = 0xb6 },
		{ .addr = 0x011d31, .byte = 0x6a },
		{ .addr = 0xf67804, .byte = 0xe8 },
		{ .addr = 0xf67805, .byte = 0x35 },
		{ .addr = 0x011d32, .byte = 0x52 },
		{ .addr = 0x011d33, .byte = 0xd3 }
};

static const SST_RamByte subaw_final_ram_0[] = {
		{ .addr = 0x011d2e, .byte = 0x94 },
		{ .addr = 0x011d2f, .byte = 0xd5 },
		{ .addr = 0x011d30, .byte = 0xb6 },
		{ .addr = 0x011d31, .byte = 0x6a },
		{ .addr = 0xf67804, .byte = 0xe8 },
		{ .addr = 0xf67805, .byte = 0x35 },
		{ .addr = 0x011d32, .byte = 0x52 },
		{ .addr = 0x011d33, .byte = 0xd3 }
};

static const SST_Transaction subaw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16152580, .data = 59445, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 73010, .data = 21203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_1[] = {
		{ .addr = 0x68eab2, .byte = 0x98 },
		{ .addr = 0x68eab3, .byte = 0xd6 },
		{ .addr = 0x68eab4, .byte = 0x3d },
		{ .addr = 0x68eab5, .byte = 0x26 },
		{ .addr = 0x6ce9cc, .byte = 0x4c },
		{ .addr = 0x6ce9cd, .byte = 0x08 },
		{ .addr = 0x68eab6, .byte = 0xa2 },
		{ .addr = 0x68eab7, .byte = 0x18 }
};

static const SST_RamByte subaw_final_ram_1[] = {
		{ .addr = 0x68eab2, .byte = 0x98 },
		{ .addr = 0x68eab3, .byte = 0xd6 },
		{ .addr = 0x68eab4, .byte = 0x3d },
		{ .addr = 0x68eab5, .byte = 0x26 },
		{ .addr = 0x6ce9cc, .byte = 0x4c },
		{ .addr = 0x6ce9cd, .byte = 0x08 },
		{ .addr = 0x68eab6, .byte = 0xa2 },
		{ .addr = 0x68eab7, .byte = 0x18 }
};

static const SST_Transaction subaw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7137740, .data = 19464, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6875830, .data = 41496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_2[] = {
		{ .addr = 0x33499c, .byte = 0x96 },
		{ .addr = 0x33499d, .byte = 0xf2 },
		{ .addr = 0x33499e, .byte = 0x23 },
		{ .addr = 0x33499f, .byte = 0x03 },
		{ .addr = 0x3349a0, .byte = 0x64 },
		{ .addr = 0x3349a1, .byte = 0xb5 },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0x5b },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x8a5b14, .byte = 0xf7 },
		{ .addr = 0x8a5b15, .byte = 0x1c },
		{ .addr = 0x8a5b16, .byte = 0xe7 },
		{ .addr = 0x8a5b17, .byte = 0x95 }
};

static const SST_RamByte subaw_final_ram_2[] = {
		{ .addr = 0x33499c, .byte = 0x96 },
		{ .addr = 0x33499d, .byte = 0xf2 },
		{ .addr = 0x33499e, .byte = 0x23 },
		{ .addr = 0x33499f, .byte = 0x03 },
		{ .addr = 0x3349a0, .byte = 0x64 },
		{ .addr = 0x3349a1, .byte = 0xb5 },
		{ .addr = 0x803ecc, .byte = 0x49 },
		{ .addr = 0x803ecd, .byte = 0x9e },
		{ .addr = 0x803ec8, .byte = 0x02 },
		{ .addr = 0x803ec9, .byte = 0x09 },
		{ .addr = 0x803eca, .byte = 0x00 },
		{ .addr = 0x803ecb, .byte = 0x33 },
		{ .addr = 0x803ec6, .byte = 0x96 },
		{ .addr = 0x803ec7, .byte = 0xf2 },
		{ .addr = 0x803ec4, .byte = 0xad },
		{ .addr = 0x803ec5, .byte = 0x31 },
		{ .addr = 0x803ec0, .byte = 0x96 },
		{ .addr = 0x803ec1, .byte = 0xf1 },
		{ .addr = 0x803ec2, .byte = 0xa6 },
		{ .addr = 0x803ec3, .byte = 0xcd },
		{ .addr = 0x00000c, .byte = 0x4b },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0x5b },
		{ .addr = 0x00000f, .byte = 0x14 },
		{ .addr = 0x8a5b14, .byte = 0xf7 },
		{ .addr = 0x8a5b15, .byte = 0x1c },
		{ .addr = 0x8a5b16, .byte = 0xe7 },
		{ .addr = 0x8a5b17, .byte = 0x95 }
};

static const SST_Transaction subaw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3361184, .data = 25781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13479216, .data = 51636, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8404684, .data = 18846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8404680, .data = 521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8404682, .data = 51, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8404678, .data = 38642, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8404676, .data = 44337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8404672, .data = 38641, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8404674, .data = 42701, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 19338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 23316, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9067284, .data = 63260, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9067286, .data = 59285, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_3[] = {
		{ .addr = 0xf2b3f4, .byte = 0x98 },
		{ .addr = 0xf2b3f5, .byte = 0xe6 },
		{ .addr = 0xf2b3f6, .byte = 0x2f },
		{ .addr = 0xf2b3f7, .byte = 0xc8 },
		{ .addr = 0x00000c, .byte = 0x00 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0x63 },
		{ .addr = 0x00000f, .byte = 0xf6 },
		{ .addr = 0xec63f6, .byte = 0x9a },
		{ .addr = 0xec63f7, .byte = 0x3c },
		{ .addr = 0xec63f8, .byte = 0x2e },
		{ .addr = 0xec63f9, .byte = 0xfc }
};

static const SST_RamByte subaw_final_ram_3[] = {
		{ .addr = 0xf2b3f4, .byte = 0x98 },
		{ .addr = 0xf2b3f5, .byte = 0xe6 },
		{ .addr = 0xf2b3f6, .byte = 0x2f },
		{ .addr = 0xf2b3f7, .byte = 0xc8 },
		{ .addr = 0xb2d92e, .byte = 0xb3 },
		{ .addr = 0xb2d92f, .byte = 0xf8 },
		{ .addr = 0xb2d92a, .byte = 0xa1 },
		{ .addr = 0xb2d92b, .byte = 0x17 },
		{ .addr = 0xb2d92c, .byte = 0x00 },
		{ .addr = 0xb2d92d, .byte = 0xf2 },
		{ .addr = 0xb2d928, .byte = 0x98 },
		{ .addr = 0xb2d929, .byte = 0xe6 },
		{ .addr = 0xb2d926, .byte = 0x0f },
		{ .addr = 0xb2d927, .byte = 0x6b },
		{ .addr = 0xb2d922, .byte = 0x98 },
		{ .addr = 0xb2d923, .byte = 0xf5 },
		{ .addr = 0xb2d924, .byte = 0x1f },
		{ .addr = 0xb2d925, .byte = 0x6b },
		{ .addr = 0x00000c, .byte = 0x00 },
		{ .addr = 0x00000d, .byte = 0xec },
		{ .addr = 0x00000e, .byte = 0x63 },
		{ .addr = 0x00000f, .byte = 0xf6 },
		{ .addr = 0xec63f6, .byte = 0x9a },
		{ .addr = 0xec63f7, .byte = 0x3c },
		{ .addr = 0xec63f8, .byte = 0x2e },
		{ .addr = 0xec63f9, .byte = 0xfc }
};

static const SST_Transaction subaw_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7016298, .data = 63269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11721006, .data = 46072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11721002, .data = 41239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11721004, .data = 242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11721000, .data = 39142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11720998, .data = 3947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11720994, .data = 39157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11720996, .data = 8043, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25590, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15492086, .data = 39484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15492088, .data = 12028, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_4[] = {
		{ .addr = 0x9dece8, .byte = 0x90 },
		{ .addr = 0x9dece9, .byte = 0xdf },
		{ .addr = 0x9decea, .byte = 0xf4 },
		{ .addr = 0x9deceb, .byte = 0x20 },
		{ .addr = 0x64426a, .byte = 0x2b },
		{ .addr = 0x64426b, .byte = 0xbc },
		{ .addr = 0x9decec, .byte = 0x56 },
		{ .addr = 0x9deced, .byte = 0xda }
};

static const SST_RamByte subaw_final_ram_4[] = {
		{ .addr = 0x9dece8, .byte = 0x90 },
		{ .addr = 0x9dece9, .byte = 0xdf },
		{ .addr = 0x9decea, .byte = 0xf4 },
		{ .addr = 0x9deceb, .byte = 0x20 },
		{ .addr = 0x64426a, .byte = 0x2b },
		{ .addr = 0x64426b, .byte = 0xbc },
		{ .addr = 0x9decec, .byte = 0x56 },
		{ .addr = 0x9deced, .byte = 0xda }
};

static const SST_Transaction subaw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6570602, .data = 11196, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10349804, .data = 22234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_5[] = {
		{ .addr = 0x752d40, .byte = 0x9a },
		{ .addr = 0x752d41, .byte = 0xd2 },
		{ .addr = 0x752d42, .byte = 0x0a },
		{ .addr = 0x752d43, .byte = 0x2e },
		{ .addr = 0x00000c, .byte = 0xc0 },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0xd2bf66, .byte = 0x42 },
		{ .addr = 0xd2bf67, .byte = 0x5e },
		{ .addr = 0xd2bf68, .byte = 0x86 },
		{ .addr = 0xd2bf69, .byte = 0x35 }
};

static const SST_RamByte subaw_final_ram_5[] = {
		{ .addr = 0x752d40, .byte = 0x9a },
		{ .addr = 0x752d41, .byte = 0xd2 },
		{ .addr = 0x752d42, .byte = 0x0a },
		{ .addr = 0x752d43, .byte = 0x2e },
		{ .addr = 0x1c1d66, .byte = 0x2d },
		{ .addr = 0x1c1d67, .byte = 0x42 },
		{ .addr = 0x1c1d62, .byte = 0xa7 },
		{ .addr = 0x1c1d63, .byte = 0x12 },
		{ .addr = 0x1c1d64, .byte = 0x00 },
		{ .addr = 0x1c1d65, .byte = 0x75 },
		{ .addr = 0x1c1d60, .byte = 0x9a },
		{ .addr = 0x1c1d61, .byte = 0xd2 },
		{ .addr = 0x1c1d5e, .byte = 0xe0 },
		{ .addr = 0x1c1d5f, .byte = 0x27 },
		{ .addr = 0x1c1d5a, .byte = 0x9a },
		{ .addr = 0x1c1d5b, .byte = 0xd5 },
		{ .addr = 0x1c1d5c, .byte = 0xf8 },
		{ .addr = 0x1c1d5d, .byte = 0xcc },
		{ .addr = 0x00000c, .byte = 0xc0 },
		{ .addr = 0x00000d, .byte = 0xd2 },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0xd2bf66, .byte = 0x42 },
		{ .addr = 0xd2bf67, .byte = 0x5e },
		{ .addr = 0xd2bf68, .byte = 0x86 },
		{ .addr = 0xd2bf69, .byte = 0x35 }
};

static const SST_Transaction subaw_transactions_5[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13426726, .data = 374, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1842534, .data = 11586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1842530, .data = 42770, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1842532, .data = 117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1842528, .data = 39634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1842526, .data = 57383, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1842522, .data = 39637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1842524, .data = 63692, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 49362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13811558, .data = 16990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13811560, .data = 34357, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_6[] = {
		{ .addr = 0x508d22, .byte = 0x9c },
		{ .addr = 0x508d23, .byte = 0xc0 },
		{ .addr = 0x508d24, .byte = 0xe7 },
		{ .addr = 0x508d25, .byte = 0x26 },
		{ .addr = 0x508d26, .byte = 0x79 },
		{ .addr = 0x508d27, .byte = 0x55 }
};

static const SST_RamByte subaw_final_ram_6[] = {
		{ .addr = 0x508d22, .byte = 0x9c },
		{ .addr = 0x508d23, .byte = 0xc0 },
		{ .addr = 0x508d24, .byte = 0xe7 },
		{ .addr = 0x508d25, .byte = 0x26 },
		{ .addr = 0x508d26, .byte = 0x79 },
		{ .addr = 0x508d27, .byte = 0x55 }
};

static const SST_Transaction subaw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5279014, .data = 31061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_7[] = {
		{ .addr = 0x24690e, .byte = 0x94 },
		{ .addr = 0x24690f, .byte = 0xeb },
		{ .addr = 0x246910, .byte = 0x2f },
		{ .addr = 0x246911, .byte = 0x44 },
		{ .addr = 0x246912, .byte = 0x4e },
		{ .addr = 0x246913, .byte = 0x88 },
		{ .addr = 0x00000c, .byte = 0xcb },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xac },
		{ .addr = 0x00000f, .byte = 0xfc },
		{ .addr = 0xb2acfc, .byte = 0xe1 },
		{ .addr = 0xb2acfd, .byte = 0xbd },
		{ .addr = 0xb2acfe, .byte = 0x52 },
		{ .addr = 0xb2acff, .byte = 0xf5 }
};

static const SST_RamByte subaw_final_ram_7[] = {
		{ .addr = 0x24690e, .byte = 0x94 },
		{ .addr = 0x24690f, .byte = 0xeb },
		{ .addr = 0x246910, .byte = 0x2f },
		{ .addr = 0x246911, .byte = 0x44 },
		{ .addr = 0x246912, .byte = 0x4e },
		{ .addr = 0x246913, .byte = 0x88 },
		{ .addr = 0x60edf8, .byte = 0x69 },
		{ .addr = 0x60edf9, .byte = 0x10 },
		{ .addr = 0x60edf4, .byte = 0x22 },
		{ .addr = 0x60edf5, .byte = 0x17 },
		{ .addr = 0x60edf6, .byte = 0x00 },
		{ .addr = 0x60edf7, .byte = 0x24 },
		{ .addr = 0x60edf2, .byte = 0x94 },
		{ .addr = 0x60edf3, .byte = 0xeb },
		{ .addr = 0x60edf0, .byte = 0x83 },
		{ .addr = 0x60edf1, .byte = 0x23 },
		{ .addr = 0x60edec, .byte = 0x94 },
		{ .addr = 0x60eded, .byte = 0xf5 },
		{ .addr = 0x60edee, .byte = 0xf3 },
		{ .addr = 0x60edef, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0xcb },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xac },
		{ .addr = 0x00000f, .byte = 0xfc },
		{ .addr = 0xb2acfc, .byte = 0xe1 },
		{ .addr = 0xb2acfd, .byte = 0xbd },
		{ .addr = 0xb2acfe, .byte = 0x52 },
		{ .addr = 0xb2acff, .byte = 0xf5 }
};

static const SST_Transaction subaw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2386194, .data = 20104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12878626, .data = 63433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6352376, .data = 26896, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6352372, .data = 8727, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6352374, .data = 36, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6352370, .data = 38123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6352368, .data = 33571, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6352364, .data = 38133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6352366, .data = 62404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11709692, .data = 57789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11709694, .data = 21237, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_8[] = {
		{ .addr = 0x1ae312, .byte = 0x9e },
		{ .addr = 0x1ae313, .byte = 0xe0 },
		{ .addr = 0x1ae314, .byte = 0xda },
		{ .addr = 0x1ae315, .byte = 0x3a },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xc3 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0xe8c3f0, .byte = 0x85 },
		{ .addr = 0xe8c3f1, .byte = 0xbf },
		{ .addr = 0xe8c3f2, .byte = 0xcc },
		{ .addr = 0xe8c3f3, .byte = 0x46 }
};

static const SST_RamByte subaw_final_ram_8[] = {
		{ .addr = 0x1ae312, .byte = 0x9e },
		{ .addr = 0x1ae313, .byte = 0xe0 },
		{ .addr = 0x1ae314, .byte = 0xda },
		{ .addr = 0x1ae315, .byte = 0x3a },
		{ .addr = 0xed2ff4, .byte = 0xe3 },
		{ .addr = 0xed2ff5, .byte = 0x16 },
		{ .addr = 0xed2ff0, .byte = 0x82 },
		{ .addr = 0xed2ff1, .byte = 0x18 },
		{ .addr = 0xed2ff2, .byte = 0x00 },
		{ .addr = 0xed2ff3, .byte = 0x1a },
		{ .addr = 0xed2fee, .byte = 0x9e },
		{ .addr = 0xed2fef, .byte = 0xe0 },
		{ .addr = 0xed2fec, .byte = 0xd9 },
		{ .addr = 0xed2fed, .byte = 0xe7 },
		{ .addr = 0xed2fe8, .byte = 0x9e },
		{ .addr = 0xed2fe9, .byte = 0xf1 },
		{ .addr = 0xed2fea, .byte = 0xa1 },
		{ .addr = 0xed2feb, .byte = 0xbf },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xc3 },
		{ .addr = 0x00000f, .byte = 0xf0 },
		{ .addr = 0xe8c3f0, .byte = 0x85 },
		{ .addr = 0xe8c3f1, .byte = 0xbf },
		{ .addr = 0xe8c3f2, .byte = 0xcc },
		{ .addr = 0xe8c3f3, .byte = 0x46 }
};

static const SST_Transaction subaw_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12573158, .data = 60295, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544308, .data = 58134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544304, .data = 33304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544306, .data = 26, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544302, .data = 40672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544300, .data = 55783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544296, .data = 40689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15544298, .data = 41407, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15254512, .data = 34239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15254514, .data = 52294, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_9[] = {
		{ .addr = 0x91898e, .byte = 0x94 },
		{ .addr = 0x91898f, .byte = 0xf4 },
		{ .addr = 0x918990, .byte = 0xb8 },
		{ .addr = 0x918991, .byte = 0x1f },
		{ .addr = 0x918992, .byte = 0xd8 },
		{ .addr = 0x918993, .byte = 0x4c },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x7f },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x207fc4, .byte = 0xce },
		{ .addr = 0x207fc5, .byte = 0x15 },
		{ .addr = 0x207fc6, .byte = 0x76 },
		{ .addr = 0x207fc7, .byte = 0x13 }
};

static const SST_RamByte subaw_final_ram_9[] = {
		{ .addr = 0x91898e, .byte = 0x94 },
		{ .addr = 0x91898f, .byte = 0xf4 },
		{ .addr = 0x918990, .byte = 0xb8 },
		{ .addr = 0x918991, .byte = 0x1f },
		{ .addr = 0x918992, .byte = 0xd8 },
		{ .addr = 0x918993, .byte = 0x4c },
		{ .addr = 0x3ab04e, .byte = 0x89 },
		{ .addr = 0x3ab04f, .byte = 0x90 },
		{ .addr = 0x3ab04a, .byte = 0xa4 },
		{ .addr = 0x3ab04b, .byte = 0x1c },
		{ .addr = 0x3ab04c, .byte = 0x00 },
		{ .addr = 0x3ab04d, .byte = 0x91 },
		{ .addr = 0x3ab048, .byte = 0x94 },
		{ .addr = 0x3ab049, .byte = 0xf4 },
		{ .addr = 0x3ab046, .byte = 0x5b },
		{ .addr = 0x3ab047, .byte = 0x61 },
		{ .addr = 0x3ab042, .byte = 0x94 },
		{ .addr = 0x3ab043, .byte = 0xf5 },
		{ .addr = 0x3ab044, .byte = 0x1b },
		{ .addr = 0x3ab045, .byte = 0x59 },
		{ .addr = 0x00000c, .byte = 0x68 },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x7f },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x207fc4, .byte = 0xce },
		{ .addr = 0x207fc5, .byte = 0x15 },
		{ .addr = 0x207fc6, .byte = 0x76 },
		{ .addr = 0x207fc7, .byte = 0x13 }
};

static const SST_Transaction subaw_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9537938, .data = 55372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5856096, .data = 2955, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3846222, .data = 35216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3846218, .data = 42012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3846220, .data = 145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3846216, .data = 38132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3846214, .data = 23393, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3846210, .data = 38133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3846212, .data = 7001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 26656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32708, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2129860, .data = 52757, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2129862, .data = 30227, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_10[] = {
		{ .addr = 0x431f22, .byte = 0x92 },
		{ .addr = 0x431f23, .byte = 0xce },
		{ .addr = 0x431f24, .byte = 0x24 },
		{ .addr = 0x431f25, .byte = 0x0d },
		{ .addr = 0x431f26, .byte = 0x08 },
		{ .addr = 0x431f27, .byte = 0xfe }
};

static const SST_RamByte subaw_final_ram_10[] = {
		{ .addr = 0x431f22, .byte = 0x92 },
		{ .addr = 0x431f23, .byte = 0xce },
		{ .addr = 0x431f24, .byte = 0x24 },
		{ .addr = 0x431f25, .byte = 0x0d },
		{ .addr = 0x431f26, .byte = 0x08 },
		{ .addr = 0x431f27, .byte = 0xfe }
};

static const SST_Transaction subaw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4398886, .data = 2302, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_11[] = {
		{ .addr = 0x385aca, .byte = 0x9e },
		{ .addr = 0x385acb, .byte = 0xd6 },
		{ .addr = 0x385acc, .byte = 0xff },
		{ .addr = 0x385acd, .byte = 0x74 },
		{ .addr = 0x2fda60, .byte = 0xf7 },
		{ .addr = 0x2fda61, .byte = 0x5b },
		{ .addr = 0x385ace, .byte = 0xc0 },
		{ .addr = 0x385acf, .byte = 0x90 }
};

static const SST_RamByte subaw_final_ram_11[] = {
		{ .addr = 0x385aca, .byte = 0x9e },
		{ .addr = 0x385acb, .byte = 0xd6 },
		{ .addr = 0x385acc, .byte = 0xff },
		{ .addr = 0x385acd, .byte = 0x74 },
		{ .addr = 0x2fda60, .byte = 0xf7 },
		{ .addr = 0x2fda61, .byte = 0x5b },
		{ .addr = 0x385ace, .byte = 0xc0 },
		{ .addr = 0x385acf, .byte = 0x90 }
};

static const SST_Transaction subaw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3136096, .data = 63323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3693262, .data = 49296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_12[] = {
		{ .addr = 0xd71750, .byte = 0x90 },
		{ .addr = 0xd71751, .byte = 0xde },
		{ .addr = 0xd71752, .byte = 0x5a },
		{ .addr = 0xd71753, .byte = 0x70 },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x84 },
		{ .addr = 0x00000f, .byte = 0x10 },
		{ .addr = 0x608410, .byte = 0x70 },
		{ .addr = 0x608411, .byte = 0xbc },
		{ .addr = 0x608412, .byte = 0x2c },
		{ .addr = 0x608413, .byte = 0x16 }
};

static const SST_RamByte subaw_final_ram_12[] = {
		{ .addr = 0xd71750, .byte = 0x90 },
		{ .addr = 0xd71751, .byte = 0xde },
		{ .addr = 0xd71752, .byte = 0x5a },
		{ .addr = 0xd71753, .byte = 0x70 },
		{ .addr = 0x6537a6, .byte = 0x17 },
		{ .addr = 0x6537a7, .byte = 0x52 },
		{ .addr = 0x6537a2, .byte = 0x00 },
		{ .addr = 0x6537a3, .byte = 0x18 },
		{ .addr = 0x6537a4, .byte = 0x00 },
		{ .addr = 0x6537a5, .byte = 0xd7 },
		{ .addr = 0x6537a0, .byte = 0x90 },
		{ .addr = 0x6537a1, .byte = 0xde },
		{ .addr = 0x65379e, .byte = 0xe6 },
		{ .addr = 0x65379f, .byte = 0x57 },
		{ .addr = 0x65379a, .byte = 0x90 },
		{ .addr = 0x65379b, .byte = 0xd1 },
		{ .addr = 0x65379c, .byte = 0x4e },
		{ .addr = 0x65379d, .byte = 0xf9 },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x84 },
		{ .addr = 0x00000f, .byte = 0x10 },
		{ .addr = 0x608410, .byte = 0x70 },
		{ .addr = 0x608411, .byte = 0xbc },
		{ .addr = 0x608412, .byte = 0x2c },
		{ .addr = 0x608413, .byte = 0x16 }
};

static const SST_Transaction subaw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16377430, .data = 43130, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6633382, .data = 5970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6633378, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6633380, .data = 215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6633376, .data = 37086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6633374, .data = 58967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6633370, .data = 37073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6633372, .data = 20217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2400, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6325264, .data = 28860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6325266, .data = 11286, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_13[] = {
		{ .addr = 0xf64066, .byte = 0x9a },
		{ .addr = 0xf64067, .byte = 0xca },
		{ .addr = 0xf64068, .byte = 0xe6 },
		{ .addr = 0xf64069, .byte = 0x52 },
		{ .addr = 0xf6406a, .byte = 0x82 },
		{ .addr = 0xf6406b, .byte = 0x7a }
};

static const SST_RamByte subaw_final_ram_13[] = {
		{ .addr = 0xf64066, .byte = 0x9a },
		{ .addr = 0xf64067, .byte = 0xca },
		{ .addr = 0xf64068, .byte = 0xe6 },
		{ .addr = 0xf64069, .byte = 0x52 },
		{ .addr = 0xf6406a, .byte = 0x82 },
		{ .addr = 0xf6406b, .byte = 0x7a }
};

static const SST_Transaction subaw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16138346, .data = 33402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_14[] = {
		{ .addr = 0xe08bb0, .byte = 0x94 },
		{ .addr = 0xe08bb1, .byte = 0xe3 },
		{ .addr = 0xe08bb2, .byte = 0x0b },
		{ .addr = 0xe08bb3, .byte = 0xa3 },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x7c9182, .byte = 0xbf },
		{ .addr = 0x7c9183, .byte = 0xb1 },
		{ .addr = 0x7c9184, .byte = 0x57 },
		{ .addr = 0x7c9185, .byte = 0x9e }
};

static const SST_RamByte subaw_final_ram_14[] = {
		{ .addr = 0xe08bb0, .byte = 0x94 },
		{ .addr = 0xe08bb1, .byte = 0xe3 },
		{ .addr = 0xe08bb2, .byte = 0x0b },
		{ .addr = 0xe08bb3, .byte = 0xa3 },
		{ .addr = 0x7cfcfa, .byte = 0x8b },
		{ .addr = 0x7cfcfb, .byte = 0xb4 },
		{ .addr = 0x7cfcf6, .byte = 0xa3 },
		{ .addr = 0x7cfcf7, .byte = 0x1d },
		{ .addr = 0x7cfcf8, .byte = 0x00 },
		{ .addr = 0x7cfcf9, .byte = 0xe0 },
		{ .addr = 0x7cfcf4, .byte = 0x94 },
		{ .addr = 0x7cfcf5, .byte = 0xe3 },
		{ .addr = 0x7cfcf2, .byte = 0x34 },
		{ .addr = 0x7cfcf3, .byte = 0xe3 },
		{ .addr = 0x7cfcee, .byte = 0x94 },
		{ .addr = 0x7cfcef, .byte = 0xf5 },
		{ .addr = 0x7cfcf0, .byte = 0xc0 },
		{ .addr = 0x7cfcf1, .byte = 0xac },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0x91 },
		{ .addr = 0x00000f, .byte = 0x82 },
		{ .addr = 0x7c9182, .byte = 0xbf },
		{ .addr = 0x7c9183, .byte = 0xb1 },
		{ .addr = 0x7c9184, .byte = 0x57 },
		{ .addr = 0x7c9185, .byte = 0x9e }
};

static const SST_Transaction subaw_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11285730, .data = 64072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8191226, .data = 35764, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8191222, .data = 41757, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8191224, .data = 224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8191220, .data = 38115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8191218, .data = 13539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8191214, .data = 38133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8191216, .data = 49324, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43900, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8163714, .data = 49073, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8163716, .data = 22430, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_15[] = {
		{ .addr = 0xd95b60, .byte = 0x90 },
		{ .addr = 0xd95b61, .byte = 0xc1 },
		{ .addr = 0xd95b62, .byte = 0xdc },
		{ .addr = 0xd95b63, .byte = 0x2b },
		{ .addr = 0xd95b64, .byte = 0x57 },
		{ .addr = 0xd95b65, .byte = 0x07 }
};

static const SST_RamByte subaw_final_ram_15[] = {
		{ .addr = 0xd95b60, .byte = 0x90 },
		{ .addr = 0xd95b61, .byte = 0xc1 },
		{ .addr = 0xd95b62, .byte = 0xdc },
		{ .addr = 0xd95b63, .byte = 0x2b },
		{ .addr = 0xd95b64, .byte = 0x57 },
		{ .addr = 0xd95b65, .byte = 0x07 }
};

static const SST_Transaction subaw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14244708, .data = 22279, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

const uint32_t SUBAW_TEST_COUNT = 16;
static const SST_TestCase subaw[] = {
	{
		.name = "000 SUBA.w (A5), A2 94d5",
		.initial = {
			.regs = {
				2555685699, 4294204953, 1208816045, 3095682307, 4075401804, 2797727569, 3906643456, 293716231, 2222925949, 1147031860, 955217515, 563695126, 3926080718, 3321264132, 723868351, 1517628, 9739654, 9736, 73010
			},
			.prefetch0 = 38101,
			.prefetch1 = 46698,
			.ram = subaw_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2555685699, 4294204953, 1208816045, 3095682307, 4075401804, 2797727569, 3906643456, 293716231, 2222925949, 1147031860, 955223606, 563695126, 3926080718, 3321264132, 723868351, 1517628, 9739654, 9736, 73012
			},
			.prefetch0 = 46698,
			.prefetch1 = 21203,
			.ram = subaw_final_ram_0,
			.ram_len = 8,
		},
		.transactions = subaw_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 SUBA.w (A6), A4 98d6",
		.initial = {
			.regs = {
				2749922115, 2033264101, 1443574956, 2826796438, 3115945222, 2821787148, 2461611764, 1915997583, 3905252680, 3210093549, 3472175639, 4047002023, 1741206572, 2655788957, 4184664524, 3170374, 9948500, 9226, 6875830
			},
			.prefetch0 = 39126,
			.prefetch1 = 15654,
			.ram = subaw_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2749922115, 2033264101, 1443574956, 2826796438, 3115945222, 2821787148, 2461611764, 1915997583, 3905252680, 3210093549, 3472175639, 4047002023, 1741187108, 2655788957, 4184664524, 3170374, 9948500, 9226, 6875832
			},
			.prefetch0 = 15654,
			.prefetch1 = 41496,
			.ram = subaw_final_ram_1,
			.ram_len = 8,
		},
		.transactions = subaw_transactions_1,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "002 SUBA.w (d8, A2, Xn), A3 96f2",
		.initial = {
			.regs = {
				1850681332, 3732281302, 1059360344, 2124237623, 1459329332, 2725811852, 3077825606, 499700816, 3295115179, 2185672378, 2798526166, 2729115739, 2390113612, 1271403728, 2924522398, 5884724, 8404686, 521, 3361184
			},
			.prefetch0 = 38642,
			.prefetch1 = 8963,
			.ram = subaw_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1850681332, 3732281302, 1059360344, 2124237623, 1459329332, 2725811852, 3077825606, 499700816, 3295115179, 2185672378, 2798526166, 2729115739, 2390113612, 1271403728, 2924522398, 5884724, 8404672, 8713, 1267358488
			},
			.prefetch0 = 63260,
			.prefetch1 = 59285,
			.ram = subaw_final_ram_2,
			.ram_len = 28,
		},
		.transactions = subaw_transactions_2,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "003 SUBA.w -(A6), A4 98e6",
		.initial = {
			.regs = {
				3303336319, 2021745568, 4049786809, 3687075556, 3951131398, 1731755099, 4164241836, 1233020838, 3030338543, 726321703, 1104273847, 989980516, 1012681141, 2619394907, 527109997, 1579658, 11721008, 41239, 15905784
			},
			.prefetch0 = 39142,
			.prefetch1 = 12232,
			.ram = subaw_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3303336319, 2021745568, 4049786809, 3687075556, 3951131398, 1731755099, 4164241836, 1233020838, 3030338543, 726321703, 1104273847, 989980516, 1012681141, 2619394907, 527109995, 1579658, 11720994, 8471, 15492090
			},
			.prefetch0 = 39484,
			.prefetch1 = 12028,
			.ram = subaw_final_ram_3,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 SUBA.w (A7)+, A0 90df",
		.initial = {
			.regs = {
				2468109607, 1584544539, 3765091153, 3412335076, 635789910, 3283040102, 966961696, 3721102939, 1051705061, 216567081, 3976242071, 1887852726, 736496702, 2371185275, 2010839841, 6570602, 3629544, 1027, 10349804
			},
			.prefetch0 = 37087,
			.prefetch1 = 62496,
			.ram = subaw_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2468109607, 1584544539, 3765091153, 3412335076, 635789910, 3283040102, 966961696, 3721102939, 1051693865, 216567081, 3976242071, 1887852726, 736496702, 2371185275, 2010839841, 6570604, 3629544, 1027, 10349806
			},
			.prefetch0 = 62496,
			.prefetch1 = 22234,
			.ram = subaw_final_ram_4,
			.ram_len = 8,
		},
		.transactions = subaw_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 SUBA.w (A2), A5 9ad2",
		.initial = {
			.regs = {
				821361177, 745439679, 337193020, 257502449, 766600769, 1495031296, 3905446541, 3201352783, 4169278298, 1771559988, 4174176295, 3490915349, 3938365434, 879017732, 2339542839, 4672406, 1842536, 42770, 7679300
			},
			.prefetch0 = 39634,
			.prefetch1 = 2606,
			.ram = subaw_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				821361177, 745439679, 337193020, 257502449, 766600769, 1495031296, 3905446541, 3201352783, 4169278298, 1771559988, 4174176295, 3490915349, 3938365434, 879017732, 2339542839, 4672406, 1842522, 10002, 3235037034
			},
			.prefetch0 = 16990,
			.prefetch1 = 34357,
			.ram = subaw_final_ram_5,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_5,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "006 SUBA.w D0, A6 9cc0",
		.initial = {
			.regs = {
				2848501079, 3272154593, 235097876, 4290109731, 2849741105, 3504110064, 1577649326, 241227664, 1572072305, 1607161286, 2534637227, 3220786052, 6302336, 383876159, 3466432238, 11283960, 15387400, 10002, 5279014
			},
			.prefetch0 = 40128,
			.prefetch1 = 59174,
			.ram = subaw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2848501079, 3272154593, 235097876, 4290109731, 2849741105, 3504110064, 1577649326, 241227664, 1572072305, 1607161286, 2534637227, 3220786052, 6302336, 383876159, 3466453399, 11283960, 15387400, 10002, 5279016
			},
			.prefetch0 = 59174,
			.prefetch1 = 31061,
			.ram = subaw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = subaw_transactions_6,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "007 SUBA.w (d16, A3), A2 94eb",
		.initial = {
			.regs = {
				1357536829, 1398137056, 2698080589, 4034581419, 2590948379, 957191575, 3462534398, 389744408, 3730166987, 3235379279, 1778353643, 4089730015, 3012684062, 2862386139, 203421742, 1390340, 6352378, 8727, 2386194
			},
			.prefetch0 = 38123,
			.prefetch1 = 12100,
			.ram = subaw_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1357536829, 1398137056, 2698080589, 4034581419, 2590948379, 957191575, 3462534398, 389744408, 3730166987, 3235379279, 1778353643, 4089730015, 3012684062, 2862386139, 203421742, 1390340, 6352364, 8727, 3417484544
			},
			.prefetch0 = 57789,
			.prefetch1 = 21237,
			.ram = subaw_final_ram_7,
			.ram_len = 28,
		},
		.transactions = subaw_transactions_7,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "008 SUBA.w -(A0), A7 9ee0",
		.initial = {
			.regs = {
				261406726, 1811607250, 3614289006, 1799572425, 1007077570, 942132251, 3470763267, 3127874773, 2713704937, 2356716552, 3030847167, 1276464799, 351313801, 1662482970, 2857064430, 1143860, 15544310, 33304, 1762070
			},
			.prefetch0 = 40672,
			.prefetch1 = 55866,
			.ram = subaw_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				261406726, 1811607250, 3614289006, 1799572425, 1007077570, 942132251, 3470763267, 3127874773, 2713704935, 2356716552, 3030847167, 1276464799, 351313801, 1662482970, 2857064430, 1143860, 15544296, 8728, 1424540660
			},
			.prefetch0 = 34239,
			.prefetch1 = 52294,
			.ram = subaw_final_ram_8,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_8,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "009 SUBA.w (d8, A4, Xn), A2 94f4",
		.initial = {
			.regs = {
				666304574, 3109801187, 3476145178, 1036273593, 3877359542, 3962710656, 104384803, 164262614, 2607303720, 3123366640, 1817807114, 2209523978, 2544284216, 3690809043, 2544472137, 13607598, 3846224, 42012, 9537938
			},
			.prefetch0 = 38132,
			.prefetch1 = 47135,
			.ram = subaw_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				666304574, 3109801187, 3476145178, 1036273593, 3877359542, 3962710656, 104384803, 164262614, 2607303720, 3123366640, 1817807114, 2209523978, 2544284216, 3690809043, 2544472137, 13607598, 3846210, 9244, 1746960328
			},
			.prefetch0 = 52757,
			.prefetch1 = 30227,
			.ram = subaw_final_ram_9,
			.ram_len = 28,
		},
		.transactions = subaw_transactions_9,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "010 SUBA.w A6, A1 92ce",
		.initial = {
			.regs = {
				3676413503, 3673762711, 1188440123, 1319918215, 3080303316, 2053801988, 1736837456, 2306876301, 1065518744, 407405272, 2008250496, 2660697059, 1377747191, 2142836798, 3185596573, 4691876, 4781548, 42258, 4398886
			},
			.prefetch0 = 37582,
			.prefetch1 = 9229,
			.ram = subaw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3676413503, 3673762711, 1188440123, 1319918215, 3080303316, 2053801988, 1736837456, 2306876301, 1065518744, 407382587, 2008250496, 2660697059, 1377747191, 2142836798, 3185596573, 4691876, 4781548, 42258, 4398888
			},
			.prefetch0 = 9229,
			.prefetch1 = 2302,
			.ram = subaw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = subaw_transactions_10,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "011 SUBA.w (A6), A7 9ed6",
		.initial = {
			.regs = {
				1204104830, 4059095715, 442395198, 137076168, 3199246553, 2019332532, 2012422069, 1630750907, 846611753, 1004487360, 3793629317, 3793768107, 50758646, 2395829471, 103799392, 1078194, 757698, 8201, 3693262
			},
			.prefetch0 = 40662,
			.prefetch1 = 65396,
			.ram = subaw_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1204104830, 4059095715, 442395198, 137076168, 3199246553, 2019332532, 2012422069, 1630750907, 846611753, 1004487360, 3793629317, 3793768107, 50758646, 2395829471, 103799392, 1078194, 759911, 8201, 3693264
			},
			.prefetch0 = 65396,
			.prefetch1 = 49296,
			.ram = subaw_final_ram_11,
			.ram_len = 8,
		},
		.transactions = subaw_transactions_11,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "012 SUBA.w (A6)+, A0 90de",
		.initial = {
			.regs = {
				2049853068, 1972176641, 3786319041, 3729627968, 3079761252, 3758296445, 1659661333, 4242101208, 4079927940, 4026769198, 4226420989, 2805409667, 815720343, 944522846, 1325000279, 1697872, 6633384, 24, 14096212
			},
			.prefetch0 = 37086,
			.prefetch1 = 23152,
			.ram = subaw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2049853068, 1972176641, 3786319041, 3729627968, 3079761252, 3758296445, 1659661333, 4242101208, 4079927940, 4026769198, 4226420989, 2805409667, 815720343, 944522846, 1325000281, 1697872, 6633370, 8216, 157320212
			},
			.prefetch0 = 28860,
			.prefetch1 = 11286,
			.ram = subaw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 SUBA.w A2, A5 9aca",
		.initial = {
			.regs = {
				4244003571, 49884603, 417845367, 1448944709, 2448634681, 4170635360, 1242925280, 2988341723, 3015613842, 2931316505, 3493153123, 3745158182, 684413136, 3027780402, 1508893121, 802100, 15681444, 538, 16138346
			},
			.prefetch0 = 39626,
			.prefetch1 = 58962,
			.ram = subaw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4244003571, 49884603, 417845367, 1448944709, 2448634681, 4170635360, 1242925280, 2988341723, 3015613842, 2931316505, 3493153123, 3745158182, 684413136, 3027761615, 1508893121, 802100, 15681444, 538, 16138348
			},
			.prefetch0 = 58962,
			.prefetch1 = 33402,
			.ram = subaw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = subaw_transactions_13,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "014 SUBA.w -(A3), A2 94e3",
		.initial = {
			.regs = {
				1177690427, 3114177951, 2677664747, 3300492494, 3849295633, 2106803565, 2755404155, 1261111435, 1554215077, 295620290, 2241561060, 3232511205, 1433739263, 1124661286, 2241621388, 4775106, 8191228, 41757, 14715828
			},
			.prefetch0 = 38115,
			.prefetch1 = 2979,
			.ram = subaw_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1177690427, 3114177951, 2677664747, 3300492494, 3849295633, 2106803565, 2755404155, 1261111435, 1554215077, 295620290, 2241561060, 3232511203, 1433739263, 1124661286, 2241621388, 4775106, 8191214, 8989, 2877067654
			},
			.prefetch0 = 49073,
			.prefetch1 = 22430,
			.ram = subaw_final_ram_14,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_14,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "015 SUBA.w D1, A0 90c1",
		.initial = {
			.regs = {
				1451121738, 1518193013, 1900659146, 3536026804, 1686265045, 881710284, 141658272, 3152605029, 3541969302, 3047026633, 2205862507, 2777631672, 612212940, 14867608, 750454121, 8247962, 1408912, 33037, 14244708
			},
			.prefetch0 = 37057,
			.prefetch1 = 56363,
			.ram = subaw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1451121738, 1518193013, 1900659146, 3536026804, 1686265045, 881710284, 141658272, 3152605029, 3541983265, 3047026633, 2205862507, 2777631672, 612212940, 14867608, 750454121, 8247962, 1408912, 33037, 14244710
			},
			.prefetch0 = 56363,
			.prefetch1 = 22279,
			.ram = subaw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = subaw_transactions_15,
		.transactions_len = 2,
		.lenght = 8,
	},
};

#endif /* RBT_SUBAW_H */