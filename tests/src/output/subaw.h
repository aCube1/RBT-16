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

static const SST_RamByte subaw_initial_ram_16[] = {
		{ .addr = 0xd78ea0, .byte = 0x92 },
		{ .addr = 0xd78ea1, .byte = 0xd1 },
		{ .addr = 0xd78ea2, .byte = 0x3d },
		{ .addr = 0xd78ea3, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x6a },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x4a6ac4, .byte = 0xa8 },
		{ .addr = 0x4a6ac5, .byte = 0x0f },
		{ .addr = 0x4a6ac6, .byte = 0xe3 },
		{ .addr = 0x4a6ac7, .byte = 0x3c }
};

static const SST_RamByte subaw_final_ram_16[] = {
		{ .addr = 0xd78ea0, .byte = 0x92 },
		{ .addr = 0xd78ea1, .byte = 0xd1 },
		{ .addr = 0xd78ea2, .byte = 0x3d },
		{ .addr = 0xd78ea3, .byte = 0xf0 },
		{ .addr = 0xe1427a, .byte = 0x8e },
		{ .addr = 0xe1427b, .byte = 0xa2 },
		{ .addr = 0xe14276, .byte = 0x25 },
		{ .addr = 0xe14277, .byte = 0x1f },
		{ .addr = 0xe14278, .byte = 0x00 },
		{ .addr = 0xe14279, .byte = 0xd7 },
		{ .addr = 0xe14274, .byte = 0x92 },
		{ .addr = 0xe14275, .byte = 0xd1 },
		{ .addr = 0xe14272, .byte = 0xe0 },
		{ .addr = 0xe14273, .byte = 0xfd },
		{ .addr = 0xe1426e, .byte = 0x92 },
		{ .addr = 0xe1426f, .byte = 0xd5 },
		{ .addr = 0xe14270, .byte = 0x8d },
		{ .addr = 0xe14271, .byte = 0x5a },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x6a },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x4a6ac4, .byte = 0xa8 },
		{ .addr = 0x4a6ac5, .byte = 0x0f },
		{ .addr = 0x4a6ac6, .byte = 0xe3 },
		{ .addr = 0x4a6ac7, .byte = 0x3c }
};

static const SST_Transaction subaw_transactions_16[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5955836, .data = 40343, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14762618, .data = 36514, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14762614, .data = 9503, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14762616, .data = 215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14762612, .data = 37585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14762610, .data = 57597, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14762606, .data = 37589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14762608, .data = 36186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43594, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4876996, .data = 43023, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4876998, .data = 58172, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_17[] = {
		{ .addr = 0x7b5624, .byte = 0x92 },
		{ .addr = 0x7b5625, .byte = 0xed },
		{ .addr = 0x7b5626, .byte = 0xfa },
		{ .addr = 0x7b5627, .byte = 0xbe },
		{ .addr = 0x7b5628, .byte = 0xed },
		{ .addr = 0x7b5629, .byte = 0x6c },
		{ .addr = 0xae7a00, .byte = 0x5f },
		{ .addr = 0xae7a01, .byte = 0xad },
		{ .addr = 0x7b562a, .byte = 0xcf },
		{ .addr = 0x7b562b, .byte = 0xbd }
};

static const SST_RamByte subaw_final_ram_17[] = {
		{ .addr = 0x7b5624, .byte = 0x92 },
		{ .addr = 0x7b5625, .byte = 0xed },
		{ .addr = 0x7b5626, .byte = 0xfa },
		{ .addr = 0x7b5627, .byte = 0xbe },
		{ .addr = 0x7b5628, .byte = 0xed },
		{ .addr = 0x7b5629, .byte = 0x6c },
		{ .addr = 0xae7a00, .byte = 0x5f },
		{ .addr = 0xae7a01, .byte = 0xad },
		{ .addr = 0x7b562a, .byte = 0xcf },
		{ .addr = 0x7b562b, .byte = 0xbd }
};

static const SST_Transaction subaw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8082984, .data = 60780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11434496, .data = 24493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8082986, .data = 53181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_18[] = {
		{ .addr = 0x9cab76, .byte = 0x96 },
		{ .addr = 0x9cab77, .byte = 0xd5 },
		{ .addr = 0x9cab78, .byte = 0x49 },
		{ .addr = 0x9cab79, .byte = 0x40 },
		{ .addr = 0x00000c, .byte = 0x0a },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x321bdc, .byte = 0xed },
		{ .addr = 0x321bdd, .byte = 0x2d },
		{ .addr = 0x321bde, .byte = 0x97 },
		{ .addr = 0x321bdf, .byte = 0x72 }
};

static const SST_RamByte subaw_final_ram_18[] = {
		{ .addr = 0x9cab76, .byte = 0x96 },
		{ .addr = 0x9cab77, .byte = 0xd5 },
		{ .addr = 0x9cab78, .byte = 0x49 },
		{ .addr = 0x9cab79, .byte = 0x40 },
		{ .addr = 0x0cc00a, .byte = 0xab },
		{ .addr = 0x0cc00b, .byte = 0x78 },
		{ .addr = 0x0cc006, .byte = 0x85 },
		{ .addr = 0x0cc007, .byte = 0x03 },
		{ .addr = 0x0cc008, .byte = 0x00 },
		{ .addr = 0x0cc009, .byte = 0x9c },
		{ .addr = 0x0cc004, .byte = 0x96 },
		{ .addr = 0x0cc005, .byte = 0xd5 },
		{ .addr = 0x0cc002, .byte = 0x7c },
		{ .addr = 0x0cc003, .byte = 0xf5 },
		{ .addr = 0x0cbffe, .byte = 0x96 },
		{ .addr = 0x0cbfff, .byte = 0xd1 },
		{ .addr = 0x0cc000, .byte = 0x43 },
		{ .addr = 0x0cc001, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0x0a },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0xdc },
		{ .addr = 0x321bdc, .byte = 0xed },
		{ .addr = 0x321bdd, .byte = 0x2d },
		{ .addr = 0x321bde, .byte = 0x97 },
		{ .addr = 0x321bdf, .byte = 0x72 }
};

static const SST_Transaction subaw_transactions_18[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1277172, .data = 53107, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 835594, .data = 43896, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 835590, .data = 34051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 835592, .data = 156, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 835588, .data = 38613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 835586, .data = 31989, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 835582, .data = 38609, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 835584, .data = 17171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2610, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3283932, .data = 60717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3283934, .data = 38770, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_19[] = {
		{ .addr = 0x0448e0, .byte = 0x98 },
		{ .addr = 0x0448e1, .byte = 0xe5 },
		{ .addr = 0x0448e2, .byte = 0x4e },
		{ .addr = 0x0448e3, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xb4d594, .byte = 0xc0 },
		{ .addr = 0xb4d595, .byte = 0x5b },
		{ .addr = 0xb4d596, .byte = 0x6e },
		{ .addr = 0xb4d597, .byte = 0x7e }
};

static const SST_RamByte subaw_final_ram_19[] = {
		{ .addr = 0x0448e0, .byte = 0x98 },
		{ .addr = 0x0448e1, .byte = 0xe5 },
		{ .addr = 0x0448e2, .byte = 0x4e },
		{ .addr = 0x0448e3, .byte = 0x42 },
		{ .addr = 0x798046, .byte = 0x48 },
		{ .addr = 0x798047, .byte = 0xe4 },
		{ .addr = 0x798042, .byte = 0x85 },
		{ .addr = 0x798043, .byte = 0x03 },
		{ .addr = 0x798044, .byte = 0x00 },
		{ .addr = 0x798045, .byte = 0x04 },
		{ .addr = 0x798040, .byte = 0x98 },
		{ .addr = 0x798041, .byte = 0xe5 },
		{ .addr = 0x79803e, .byte = 0x01 },
		{ .addr = 0x79803f, .byte = 0xd7 },
		{ .addr = 0x79803a, .byte = 0x98 },
		{ .addr = 0x79803b, .byte = 0xf1 },
		{ .addr = 0x79803c, .byte = 0x4a },
		{ .addr = 0x79803d, .byte = 0x0a },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xd5 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xb4d594, .byte = 0xc0 },
		{ .addr = 0xb4d595, .byte = 0x5b },
		{ .addr = 0xb4d596, .byte = 0x6e },
		{ .addr = 0xb4d597, .byte = 0x7e }
};

static const SST_Transaction subaw_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 655830, .data = 9989, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7962694, .data = 18660, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7962690, .data = 34051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7962692, .data = 4, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7962688, .data = 39141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7962686, .data = 471, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7962682, .data = 39153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7962684, .data = 18954, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 14004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 54676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11851156, .data = 49243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11851158, .data = 28286, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_20[] = {
		{ .addr = 0xa9ef5e, .byte = 0x90 },
		{ .addr = 0xa9ef5f, .byte = 0xd1 },
		{ .addr = 0xa9ef60, .byte = 0x3c },
		{ .addr = 0xa9ef61, .byte = 0xce },
		{ .addr = 0xd43496, .byte = 0x34 },
		{ .addr = 0xd43497, .byte = 0x1d },
		{ .addr = 0xa9ef62, .byte = 0xcd },
		{ .addr = 0xa9ef63, .byte = 0x19 }
};

static const SST_RamByte subaw_final_ram_20[] = {
		{ .addr = 0xa9ef5e, .byte = 0x90 },
		{ .addr = 0xa9ef5f, .byte = 0xd1 },
		{ .addr = 0xa9ef60, .byte = 0x3c },
		{ .addr = 0xa9ef61, .byte = 0xce },
		{ .addr = 0xd43496, .byte = 0x34 },
		{ .addr = 0xd43497, .byte = 0x1d },
		{ .addr = 0xa9ef62, .byte = 0xcd },
		{ .addr = 0xa9ef63, .byte = 0x19 }
};

static const SST_Transaction subaw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907094, .data = 13341, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11136866, .data = 52505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_21[] = {
		{ .addr = 0xd9d486, .byte = 0x9a },
		{ .addr = 0xd9d487, .byte = 0xd1 },
		{ .addr = 0xd9d488, .byte = 0x74 },
		{ .addr = 0xd9d489, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x760744, .byte = 0xba },
		{ .addr = 0x760745, .byte = 0x85 },
		{ .addr = 0x760746, .byte = 0x7d },
		{ .addr = 0x760747, .byte = 0xcd }
};

static const SST_RamByte subaw_final_ram_21[] = {
		{ .addr = 0xd9d486, .byte = 0x9a },
		{ .addr = 0xd9d487, .byte = 0xd1 },
		{ .addr = 0xd9d488, .byte = 0x74 },
		{ .addr = 0xd9d489, .byte = 0xef },
		{ .addr = 0x5b3346, .byte = 0xd4 },
		{ .addr = 0x5b3347, .byte = 0x88 },
		{ .addr = 0x5b3342, .byte = 0xa6 },
		{ .addr = 0x5b3343, .byte = 0x16 },
		{ .addr = 0x5b3344, .byte = 0x00 },
		{ .addr = 0x5b3345, .byte = 0xd9 },
		{ .addr = 0x5b3340, .byte = 0x9a },
		{ .addr = 0x5b3341, .byte = 0xd1 },
		{ .addr = 0x5b333e, .byte = 0xc2 },
		{ .addr = 0x5b333f, .byte = 0x39 },
		{ .addr = 0x5b333a, .byte = 0x9a },
		{ .addr = 0x5b333b, .byte = 0xd5 },
		{ .addr = 0x5b333c, .byte = 0xf3 },
		{ .addr = 0x5b333d, .byte = 0x0b },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x760744, .byte = 0xba },
		{ .addr = 0x760745, .byte = 0x85 },
		{ .addr = 0x760746, .byte = 0x7d },
		{ .addr = 0x760747, .byte = 0xcd }
};

static const SST_Transaction subaw_transactions_21[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 770616, .data = 38518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976902, .data = 54408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976898, .data = 42518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976900, .data = 217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976896, .data = 39633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976894, .data = 49721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976890, .data = 39637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5976892, .data = 62219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7030, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1860, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7735108, .data = 47749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7735110, .data = 32205, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_22[] = {
		{ .addr = 0xd468f0, .byte = 0x96 },
		{ .addr = 0xd468f1, .byte = 0xf6 },
		{ .addr = 0xd468f2, .byte = 0x31 },
		{ .addr = 0xd468f3, .byte = 0x03 },
		{ .addr = 0xd468f4, .byte = 0xfb },
		{ .addr = 0xd468f5, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0xb2 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0x1a9404, .byte = 0x81 },
		{ .addr = 0x1a9405, .byte = 0xbc },
		{ .addr = 0x1a9406, .byte = 0x89 },
		{ .addr = 0x1a9407, .byte = 0x53 }
};

static const SST_RamByte subaw_final_ram_22[] = {
		{ .addr = 0xd468f0, .byte = 0x96 },
		{ .addr = 0xd468f1, .byte = 0xf6 },
		{ .addr = 0xd468f2, .byte = 0x31 },
		{ .addr = 0xd468f3, .byte = 0x03 },
		{ .addr = 0xd468f4, .byte = 0xfb },
		{ .addr = 0xd468f5, .byte = 0x42 },
		{ .addr = 0x850c86, .byte = 0x68 },
		{ .addr = 0x850c87, .byte = 0xf2 },
		{ .addr = 0x850c82, .byte = 0x22 },
		{ .addr = 0x850c83, .byte = 0x18 },
		{ .addr = 0x850c84, .byte = 0x00 },
		{ .addr = 0x850c85, .byte = 0xd4 },
		{ .addr = 0x850c80, .byte = 0x96 },
		{ .addr = 0x850c81, .byte = 0xf6 },
		{ .addr = 0x850c7e, .byte = 0x9c },
		{ .addr = 0x850c7f, .byte = 0xa3 },
		{ .addr = 0x850c7a, .byte = 0x96 },
		{ .addr = 0x850c7b, .byte = 0xf5 },
		{ .addr = 0x850c7c, .byte = 0x10 },
		{ .addr = 0x850c7d, .byte = 0x2e },
		{ .addr = 0x00000c, .byte = 0xb2 },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x04 },
		{ .addr = 0x1a9404, .byte = 0x81 },
		{ .addr = 0x1a9405, .byte = 0xbc },
		{ .addr = 0x1a9406, .byte = 0x89 },
		{ .addr = 0x1a9407, .byte = 0x53 }
};

static const SST_Transaction subaw_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13920500, .data = 64322, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3054754, .data = 47482, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8719494, .data = 26866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8719490, .data = 8728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8719492, .data = 212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8719488, .data = 38646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8719486, .data = 40099, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8719482, .data = 38645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8719484, .data = 4142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45594, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1741828, .data = 33212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1741830, .data = 35155, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_23[] = {
		{ .addr = 0x65751e, .byte = 0x90 },
		{ .addr = 0x65751f, .byte = 0xf4 },
		{ .addr = 0x657520, .byte = 0x5b },
		{ .addr = 0x657521, .byte = 0x8b },
		{ .addr = 0x657522, .byte = 0xa9 },
		{ .addr = 0x657523, .byte = 0x27 },
		{ .addr = 0x00000c, .byte = 0xa9 },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x72074c, .byte = 0xdd },
		{ .addr = 0x72074d, .byte = 0xe6 },
		{ .addr = 0x72074e, .byte = 0x1a },
		{ .addr = 0x72074f, .byte = 0x74 }
};

static const SST_RamByte subaw_final_ram_23[] = {
		{ .addr = 0x65751e, .byte = 0x90 },
		{ .addr = 0x65751f, .byte = 0xf4 },
		{ .addr = 0x657520, .byte = 0x5b },
		{ .addr = 0x657521, .byte = 0x8b },
		{ .addr = 0x657522, .byte = 0xa9 },
		{ .addr = 0x657523, .byte = 0x27 },
		{ .addr = 0xb2a644, .byte = 0x75 },
		{ .addr = 0xb2a645, .byte = 0x20 },
		{ .addr = 0xb2a640, .byte = 0xa4 },
		{ .addr = 0xb2a641, .byte = 0x10 },
		{ .addr = 0xb2a642, .byte = 0x00 },
		{ .addr = 0xb2a643, .byte = 0x65 },
		{ .addr = 0xb2a63e, .byte = 0x90 },
		{ .addr = 0xb2a63f, .byte = 0xf4 },
		{ .addr = 0xb2a63c, .byte = 0xe2 },
		{ .addr = 0xb2a63d, .byte = 0x19 },
		{ .addr = 0xb2a638, .byte = 0x90 },
		{ .addr = 0xb2a639, .byte = 0xf5 },
		{ .addr = 0xb2a63a, .byte = 0x0a },
		{ .addr = 0xb2a63b, .byte = 0xe1 },
		{ .addr = 0x00000c, .byte = 0xa9 },
		{ .addr = 0x00000d, .byte = 0x72 },
		{ .addr = 0x00000e, .byte = 0x07 },
		{ .addr = 0x00000f, .byte = 0x4c },
		{ .addr = 0x72074c, .byte = 0xdd },
		{ .addr = 0x72074d, .byte = 0xe6 },
		{ .addr = 0x72074e, .byte = 0x1a },
		{ .addr = 0x72074f, .byte = 0x74 }
};

static const SST_Transaction subaw_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6649122, .data = 43303, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14803480, .data = 6668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707972, .data = 29984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707968, .data = 42000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707970, .data = 101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707966, .data = 37108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707964, .data = 57881, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707960, .data = 37109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707962, .data = 2785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7472972, .data = 56806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7472974, .data = 6772, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_24[] = {
		{ .addr = 0xff391a, .byte = 0x96 },
		{ .addr = 0xff391b, .byte = 0xe9 },
		{ .addr = 0xff391c, .byte = 0xa0 },
		{ .addr = 0xff391d, .byte = 0xe8 },
		{ .addr = 0xff391e, .byte = 0xbe },
		{ .addr = 0xff391f, .byte = 0x9b },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xb4a45a, .byte = 0x23 },
		{ .addr = 0xb4a45b, .byte = 0x73 },
		{ .addr = 0xb4a45c, .byte = 0x39 },
		{ .addr = 0xb4a45d, .byte = 0x2c }
};

static const SST_RamByte subaw_final_ram_24[] = {
		{ .addr = 0xff391a, .byte = 0x96 },
		{ .addr = 0xff391b, .byte = 0xe9 },
		{ .addr = 0xff391c, .byte = 0xa0 },
		{ .addr = 0xff391d, .byte = 0xe8 },
		{ .addr = 0xff391e, .byte = 0xbe },
		{ .addr = 0xff391f, .byte = 0x9b },
		{ .addr = 0x05e24a, .byte = 0x39 },
		{ .addr = 0x05e24b, .byte = 0x1c },
		{ .addr = 0x05e246, .byte = 0x87 },
		{ .addr = 0x05e247, .byte = 0x00 },
		{ .addr = 0x05e248, .byte = 0x00 },
		{ .addr = 0x05e249, .byte = 0xff },
		{ .addr = 0x05e244, .byte = 0x96 },
		{ .addr = 0x05e245, .byte = 0xe9 },
		{ .addr = 0x05e242, .byte = 0xdb },
		{ .addr = 0x05e243, .byte = 0x75 },
		{ .addr = 0x05e23e, .byte = 0x96 },
		{ .addr = 0x05e23f, .byte = 0xf1 },
		{ .addr = 0x05e240, .byte = 0x1d },
		{ .addr = 0x05e241, .byte = 0x46 },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xb4a45a, .byte = 0x23 },
		{ .addr = 0xb4a45b, .byte = 0x73 },
		{ .addr = 0xb4a45c, .byte = 0x39 },
		{ .addr = 0xb4a45d, .byte = 0x2c }
};

static const SST_Transaction subaw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16726302, .data = 48795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4643700, .data = 65020, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 385610, .data = 14620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 385606, .data = 34560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 385608, .data = 255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 385604, .data = 38633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 385602, .data = 56181, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 385598, .data = 38641, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 385600, .data = 7494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52404, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11838554, .data = 9075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11838556, .data = 14636, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_25[] = {
		{ .addr = 0x171576, .byte = 0x9e },
		{ .addr = 0x171577, .byte = 0xda },
		{ .addr = 0x171578, .byte = 0x04 },
		{ .addr = 0x171579, .byte = 0x5a },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0x34 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xf03488, .byte = 0x1a },
		{ .addr = 0xf03489, .byte = 0x13 },
		{ .addr = 0xf0348a, .byte = 0xfe },
		{ .addr = 0xf0348b, .byte = 0x0d }
};

static const SST_RamByte subaw_final_ram_25[] = {
		{ .addr = 0x171576, .byte = 0x9e },
		{ .addr = 0x171577, .byte = 0xda },
		{ .addr = 0x171578, .byte = 0x04 },
		{ .addr = 0x171579, .byte = 0x5a },
		{ .addr = 0x03b98c, .byte = 0x15 },
		{ .addr = 0x03b98d, .byte = 0x78 },
		{ .addr = 0x03b988, .byte = 0xa5 },
		{ .addr = 0x03b989, .byte = 0x1f },
		{ .addr = 0x03b98a, .byte = 0x00 },
		{ .addr = 0x03b98b, .byte = 0x17 },
		{ .addr = 0x03b986, .byte = 0x9e },
		{ .addr = 0x03b987, .byte = 0xda },
		{ .addr = 0x03b984, .byte = 0x3f },
		{ .addr = 0x03b985, .byte = 0xef },
		{ .addr = 0x03b980, .byte = 0x9e },
		{ .addr = 0x03b981, .byte = 0xd5 },
		{ .addr = 0x03b982, .byte = 0x75 },
		{ .addr = 0x03b983, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0x34 },
		{ .addr = 0x00000f, .byte = 0x88 },
		{ .addr = 0xf03488, .byte = 0x1a },
		{ .addr = 0xf03489, .byte = 0x13 },
		{ .addr = 0xf0348a, .byte = 0xfe },
		{ .addr = 0xf0348b, .byte = 0x0d }
};

static const SST_Transaction subaw_transactions_25[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10305518, .data = 46676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 244108, .data = 5496, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 244104, .data = 42271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 244106, .data = 23, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 244102, .data = 40666, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 244100, .data = 16367, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 244096, .data = 40661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 244098, .data = 30109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15742088, .data = 6675, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15742090, .data = 65037, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_26[] = {
		{ .addr = 0x989a16, .byte = 0x9a },
		{ .addr = 0x989a17, .byte = 0xd6 },
		{ .addr = 0x989a18, .byte = 0xbf },
		{ .addr = 0x989a19, .byte = 0x65 },
		{ .addr = 0x00000c, .byte = 0xe0 },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0xb4c632, .byte = 0x3d },
		{ .addr = 0xb4c633, .byte = 0x68 },
		{ .addr = 0xb4c634, .byte = 0x79 },
		{ .addr = 0xb4c635, .byte = 0xc7 }
};

static const SST_RamByte subaw_final_ram_26[] = {
		{ .addr = 0x989a16, .byte = 0x9a },
		{ .addr = 0x989a17, .byte = 0xd6 },
		{ .addr = 0x989a18, .byte = 0xbf },
		{ .addr = 0x989a19, .byte = 0x65 },
		{ .addr = 0x4428da, .byte = 0x9a },
		{ .addr = 0x4428db, .byte = 0x18 },
		{ .addr = 0x4428d6, .byte = 0x84 },
		{ .addr = 0x4428d7, .byte = 0x10 },
		{ .addr = 0x4428d8, .byte = 0x00 },
		{ .addr = 0x4428d9, .byte = 0x98 },
		{ .addr = 0x4428d4, .byte = 0x9a },
		{ .addr = 0x4428d5, .byte = 0xd6 },
		{ .addr = 0x4428d2, .byte = 0x74 },
		{ .addr = 0x4428d3, .byte = 0x13 },
		{ .addr = 0x4428ce, .byte = 0x9a },
		{ .addr = 0x4428cf, .byte = 0xd1 },
		{ .addr = 0x4428d0, .byte = 0xdf },
		{ .addr = 0x4428d1, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0xe0 },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xc6 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0xb4c632, .byte = 0x3d },
		{ .addr = 0xb4c633, .byte = 0x68 },
		{ .addr = 0xb4c634, .byte = 0x79 },
		{ .addr = 0xb4c635, .byte = 0xc7 }
};

static const SST_Transaction subaw_transactions_26[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16086034, .data = 18589, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4466906, .data = 39448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4466902, .data = 33808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4466904, .data = 152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4466900, .data = 39638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4466898, .data = 29715, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4466894, .data = 39633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4466896, .data = 57333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11847218, .data = 15720, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11847220, .data = 31175, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_27[] = {
		{ .addr = 0x092362, .byte = 0x9c },
		{ .addr = 0x092363, .byte = 0xd2 },
		{ .addr = 0x092364, .byte = 0xf2 },
		{ .addr = 0x092365, .byte = 0x95 },
		{ .addr = 0x00000c, .byte = 0x63 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0x31 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xce3112, .byte = 0xab },
		{ .addr = 0xce3113, .byte = 0x00 },
		{ .addr = 0xce3114, .byte = 0x59 },
		{ .addr = 0xce3115, .byte = 0xad }
};

static const SST_RamByte subaw_final_ram_27[] = {
		{ .addr = 0x092362, .byte = 0x9c },
		{ .addr = 0x092363, .byte = 0xd2 },
		{ .addr = 0x092364, .byte = 0xf2 },
		{ .addr = 0x092365, .byte = 0x95 },
		{ .addr = 0x970f14, .byte = 0x23 },
		{ .addr = 0x970f15, .byte = 0x64 },
		{ .addr = 0x970f10, .byte = 0xa7 },
		{ .addr = 0x970f11, .byte = 0x0a },
		{ .addr = 0x970f12, .byte = 0x00 },
		{ .addr = 0x970f13, .byte = 0x09 },
		{ .addr = 0x970f0e, .byte = 0x9c },
		{ .addr = 0x970f0f, .byte = 0xd2 },
		{ .addr = 0x970f0c, .byte = 0xd3 },
		{ .addr = 0x970f0d, .byte = 0x6f },
		{ .addr = 0x970f08, .byte = 0x9c },
		{ .addr = 0x970f09, .byte = 0xd5 },
		{ .addr = 0x970f0a, .byte = 0xf9 },
		{ .addr = 0x970f0b, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0x63 },
		{ .addr = 0x00000d, .byte = 0xce },
		{ .addr = 0x00000e, .byte = 0x31 },
		{ .addr = 0x00000f, .byte = 0x12 },
		{ .addr = 0xce3112, .byte = 0xab },
		{ .addr = 0xce3113, .byte = 0x00 },
		{ .addr = 0xce3114, .byte = 0x59 },
		{ .addr = 0xce3115, .byte = 0xad }
};

static const SST_Transaction subaw_transactions_27[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2544494, .data = 20235, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9899796, .data = 9060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9899792, .data = 42762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9899794, .data = 9, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9899790, .data = 40146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9899788, .data = 54127, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9899784, .data = 40149, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9899786, .data = 63782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13512978, .data = 43776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13512980, .data = 22957, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_28[] = {
		{ .addr = 0x0ac098, .byte = 0x9a },
		{ .addr = 0x0ac099, .byte = 0xe2 },
		{ .addr = 0x0ac09a, .byte = 0xfa },
		{ .addr = 0x0ac09b, .byte = 0x80 },
		{ .addr = 0xeff3ba, .byte = 0xf5 },
		{ .addr = 0xeff3bb, .byte = 0x6c },
		{ .addr = 0x0ac09c, .byte = 0xfe },
		{ .addr = 0x0ac09d, .byte = 0x29 }
};

static const SST_RamByte subaw_final_ram_28[] = {
		{ .addr = 0x0ac098, .byte = 0x9a },
		{ .addr = 0x0ac099, .byte = 0xe2 },
		{ .addr = 0x0ac09a, .byte = 0xfa },
		{ .addr = 0x0ac09b, .byte = 0x80 },
		{ .addr = 0xeff3ba, .byte = 0xf5 },
		{ .addr = 0xeff3bb, .byte = 0x6c },
		{ .addr = 0x0ac09c, .byte = 0xfe },
		{ .addr = 0x0ac09d, .byte = 0x29 }
};

static const SST_Transaction subaw_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15725498, .data = 62828, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 704668, .data = 65065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_29[] = {
		{ .addr = 0x88fafe, .byte = 0x98 },
		{ .addr = 0x88faff, .byte = 0xf8 },
		{ .addr = 0x88fb00, .byte = 0x32 },
		{ .addr = 0x88fb01, .byte = 0xb3 },
		{ .addr = 0x88fb02, .byte = 0xbd },
		{ .addr = 0x88fb03, .byte = 0x1c },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0xb6 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x6cb6be, .byte = 0x77 },
		{ .addr = 0x6cb6bf, .byte = 0x7a },
		{ .addr = 0x6cb6c0, .byte = 0x8f },
		{ .addr = 0x6cb6c1, .byte = 0xfb }
};

static const SST_RamByte subaw_final_ram_29[] = {
		{ .addr = 0x88fafe, .byte = 0x98 },
		{ .addr = 0x88faff, .byte = 0xf8 },
		{ .addr = 0x88fb00, .byte = 0x32 },
		{ .addr = 0x88fb01, .byte = 0xb3 },
		{ .addr = 0x88fb02, .byte = 0xbd },
		{ .addr = 0x88fb03, .byte = 0x1c },
		{ .addr = 0x04d2e2, .byte = 0xfb },
		{ .addr = 0x04d2e3, .byte = 0x02 },
		{ .addr = 0x04d2de, .byte = 0x83 },
		{ .addr = 0x04d2df, .byte = 0x16 },
		{ .addr = 0x04d2e0, .byte = 0x00 },
		{ .addr = 0x04d2e1, .byte = 0x88 },
		{ .addr = 0x04d2dc, .byte = 0x98 },
		{ .addr = 0x04d2dd, .byte = 0xf8 },
		{ .addr = 0x04d2da, .byte = 0x32 },
		{ .addr = 0x04d2db, .byte = 0xb3 },
		{ .addr = 0x04d2d6, .byte = 0x98 },
		{ .addr = 0x04d2d7, .byte = 0xf1 },
		{ .addr = 0x04d2d8, .byte = 0x00 },
		{ .addr = 0x04d2d9, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xcc },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0xb6 },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x6cb6be, .byte = 0x77 },
		{ .addr = 0x6cb6bf, .byte = 0x7a },
		{ .addr = 0x6cb6c0, .byte = 0x8f },
		{ .addr = 0x6cb6c1, .byte = 0xfb }
};

static const SST_Transaction subaw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8977154, .data = 48412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12978, .data = 37180, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 316130, .data = 64258, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 316126, .data = 33558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 316128, .data = 136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 316124, .data = 39160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 316122, .data = 12979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 316118, .data = 39153, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 316120, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 52332, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46782, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7124670, .data = 30586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7124672, .data = 36859, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subaw_initial_ram_30[] = {
		{ .addr = 0xeeeaf0, .byte = 0x9a },
		{ .addr = 0xeeeaf1, .byte = 0xca },
		{ .addr = 0xeeeaf2, .byte = 0x4b },
		{ .addr = 0xeeeaf3, .byte = 0xc2 },
		{ .addr = 0xeeeaf4, .byte = 0x4f },
		{ .addr = 0xeeeaf5, .byte = 0xc4 }
};

static const SST_RamByte subaw_final_ram_30[] = {
		{ .addr = 0xeeeaf0, .byte = 0x9a },
		{ .addr = 0xeeeaf1, .byte = 0xca },
		{ .addr = 0xeeeaf2, .byte = 0x4b },
		{ .addr = 0xeeeaf3, .byte = 0xc2 },
		{ .addr = 0xeeeaf4, .byte = 0x4f },
		{ .addr = 0xeeeaf5, .byte = 0xc4 }
};

static const SST_Transaction subaw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15657716, .data = 20420, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subaw_initial_ram_31[] = {
		{ .addr = 0x1e917a, .byte = 0x94 },
		{ .addr = 0x1e917b, .byte = 0xd2 },
		{ .addr = 0x1e917c, .byte = 0x1b },
		{ .addr = 0x1e917d, .byte = 0x0b },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xa0 },
		{ .addr = 0x00000f, .byte = 0xce },
		{ .addr = 0x0ea0ce, .byte = 0x8a },
		{ .addr = 0x0ea0cf, .byte = 0xdb },
		{ .addr = 0x0ea0d0, .byte = 0xa4 },
		{ .addr = 0x0ea0d1, .byte = 0x58 }
};

static const SST_RamByte subaw_final_ram_31[] = {
		{ .addr = 0x1e917a, .byte = 0x94 },
		{ .addr = 0x1e917b, .byte = 0xd2 },
		{ .addr = 0x1e917c, .byte = 0x1b },
		{ .addr = 0x1e917d, .byte = 0x0b },
		{ .addr = 0x853e30, .byte = 0x91 },
		{ .addr = 0x853e31, .byte = 0x7c },
		{ .addr = 0x853e2c, .byte = 0xa2 },
		{ .addr = 0x853e2d, .byte = 0x06 },
		{ .addr = 0x853e2e, .byte = 0x00 },
		{ .addr = 0x853e2f, .byte = 0x1e },
		{ .addr = 0x853e2a, .byte = 0x94 },
		{ .addr = 0x853e2b, .byte = 0xd2 },
		{ .addr = 0x853e28, .byte = 0x80 },
		{ .addr = 0x853e29, .byte = 0xa7 },
		{ .addr = 0x853e24, .byte = 0x94 },
		{ .addr = 0x853e25, .byte = 0xd5 },
		{ .addr = 0x853e26, .byte = 0x4a },
		{ .addr = 0x853e27, .byte = 0xaa },
		{ .addr = 0x00000c, .byte = 0x35 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xa0 },
		{ .addr = 0x00000f, .byte = 0xce },
		{ .addr = 0x0ea0ce, .byte = 0x8a },
		{ .addr = 0x0ea0cf, .byte = 0xdb },
		{ .addr = 0x0ea0d0, .byte = 0xa4 },
		{ .addr = 0x0ea0d1, .byte = 0x58 }
};

static const SST_Transaction subaw_transactions_31[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11174054, .data = 43476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8732208, .data = 37244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8732204, .data = 41478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8732206, .data = 30, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8732202, .data = 38098, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8732200, .data = 32935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8732196, .data = 38101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8732198, .data = 19114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 958670, .data = 35547, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 958672, .data = 42072, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 SUBA.w (A1), A1 92d1",
		.initial = {
			.regs = {
				2820920647, 635834608, 3443559790, 390752979, 3833237325, 2114637266, 2617869661, 3473207714, 1243972805, 2371543293, 1833181687, 209878746, 2528524827, 1004790175, 1697383706, 5269288, 14762620, 9503, 14126756
			},
			.prefetch0 = 37585,
			.prefetch1 = 15856,
			.ram = subaw_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2820920647, 635834608, 3443559790, 390752979, 3833237325, 2114637266, 2617869661, 3473207714, 1243972805, 2371543293, 1833181687, 209878746, 2528524827, 1004790175, 1697383706, 5269288, 14762606, 9503, 2857003720
			},
			.prefetch0 = 43023,
			.prefetch1 = 58172,
			.ram = subaw_final_ram_16,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_16,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "017 SUBA.w (d16, A5), A1 92ed",
		.initial = {
			.regs = {
				3454178319, 312726252, 961459259, 939773548, 2420759809, 3167750174, 1295051375, 3116823701, 3824987209, 1952624, 282808504, 480445148, 85460541, 2746122050, 3976057826, 6661936, 11452370, 41234, 8082984
			},
			.prefetch0 = 37613,
			.prefetch1 = 64190,
			.ram = subaw_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3454178319, 312726252, 961459259, 939773548, 2420759809, 3167750174, 1295051375, 3116823701, 3824987209, 1928131, 282808504, 480445148, 85460541, 2746122050, 3976057826, 6661936, 11452370, 41234, 8082988
			},
			.prefetch0 = 60780,
			.prefetch1 = 53181,
			.ram = subaw_final_ram_17,
			.ram_len = 10,
		},
		.transactions = subaw_transactions_17,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "018 SUBA.w (A5), A3 96d5",
		.initial = {
			.regs = {
				3572112139, 3993871885, 2202953133, 2961864420, 929139784, 160392072, 4140681221, 267335426, 3003100457, 2236990110, 330345968, 1996115732, 3911361593, 1125350645, 1753971485, 9762974, 835596, 34051, 10267514
			},
			.prefetch0 = 38613,
			.prefetch1 = 18752,
			.ram = subaw_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3572112139, 3993871885, 2202953133, 2961864420, 929139784, 160392072, 4140681221, 267335426, 3003100457, 2236990110, 330345968, 1996115732, 3911361593, 1125350645, 1753971485, 9762974, 835582, 9475, 171056096
			},
			.prefetch0 = 60717,
			.prefetch1 = 38770,
			.ram = subaw_final_ram_18,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_18,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "019 SUBA.w -(A5), A4 98e5",
		.initial = {
			.regs = {
				1248380870, 1945011893, 173052144, 1454844044, 2071844088, 990841219, 1392224009, 3891485525, 865919891, 1653584722, 2426720102, 2068382010, 1875004923, 1242169817, 1337662075, 16706086, 7962696, 34051, 280804
			},
			.prefetch0 = 39141,
			.prefetch1 = 20034,
			.ram = subaw_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1248380870, 1945011893, 173052144, 1454844044, 2071844088, 990841219, 1392224009, 3891485525, 865919891, 1653584722, 2426720102, 2068382010, 1875004923, 1242169815, 1337662075, 16706086, 7962682, 9475, 917820824
			},
			.prefetch0 = 49243,
			.prefetch1 = 28286,
			.ram = subaw_final_ram_19,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_19,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "020 SUBA.w (A1), A0 90d1",
		.initial = {
			.regs = {
				1992616913, 1545943902, 3696832948, 722860993, 3836913163, 1972544283, 1451937988, 2300263265, 3476390331, 232010902, 1713067442, 1533754971, 1630691070, 2643083196, 2017289981, 12959286, 1073520, 41743, 11136866
			},
			.prefetch0 = 37073,
			.prefetch1 = 15566,
			.ram = subaw_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1992616913, 1545943902, 3696832948, 722860993, 3836913163, 1972544283, 1451937988, 2300263265, 3476376990, 232010902, 1713067442, 1533754971, 1630691070, 2643083196, 2017289981, 12959286, 1073520, 41743, 11136868
			},
			.prefetch0 = 15566,
			.prefetch1 = 52505,
			.ram = subaw_final_ram_20,
			.ram_len = 8,
		},
		.transactions = subaw_transactions_20,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "021 SUBA.w (A1), A5 9ad1",
		.initial = {
			.regs = {
				596758509, 2506723217, 2618281494, 667659456, 3630663606, 2103363736, 2248293060, 4225801109, 4198675169, 4077634105, 1114289016, 529579487, 3742319192, 1699062550, 1536345102, 13992916, 5976904, 42518, 14275722
			},
			.prefetch0 = 39633,
			.prefetch1 = 29935,
			.ram = subaw_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				596758509, 2506723217, 2618281494, 667659456, 3630663606, 2103363736, 2248293060, 4225801109, 4198675169, 4077634105, 1114289016, 529579487, 3742319192, 1699062550, 1536345102, 13992916, 5976890, 9750, 460719944
			},
			.prefetch0 = 47749,
			.prefetch1 = 32205,
			.ram = subaw_final_ram_21,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_21,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "022 SUBA.w (d8, A6, Xn), A3 96f6",
		.initial = {
			.regs = {
				4200433146, 3769729344, 1952191361, 3315246709, 1319228071, 1145809548, 1196386731, 2572414998, 3737949217, 1909273222, 144697220, 1119766064, 1849355482, 3316080, 271513131, 14916736, 8719496, 8728, 13920500
			},
			.prefetch0 = 38646,
			.prefetch1 = 12547,
			.ram = subaw_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4200433146, 3769729344, 1952191361, 3315246709, 1319228071, 1145809548, 1196386731, 2572414998, 3737949217, 1909273222, 144697220, 1119766064, 1849355482, 3316080, 271513131, 14916736, 8719482, 8728, 2988086280
			},
			.prefetch0 = 33212,
			.prefetch1 = 35155,
			.ram = subaw_final_ram_22,
			.ram_len = 28,
		},
		.transactions = subaw_transactions_22,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "023 SUBA.w (d8, A4, Xn), A0 90f4",
		.initial = {
			.regs = {
				1570012842, 1417888287, 2090127836, 2072596384, 1850407317, 1909388124, 496712218, 1969605311, 3365502680, 2925773834, 632247174, 3287591039, 2568154930, 2633060784, 1247409751, 11597376, 11707974, 42000, 6649122
			},
			.prefetch0 = 37108,
			.prefetch1 = 23435,
			.ram = subaw_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1570012842, 1417888287, 2090127836, 2072596384, 1850407317, 1909388124, 496712218, 1969605311, 3365502680, 2925773834, 632247174, 3287591039, 2568154930, 2633060784, 1247409751, 11597376, 11707960, 9232, 2842822480
			},
			.prefetch0 = 56806,
			.prefetch1 = 6772,
			.ram = subaw_final_ram_23,
			.ram_len = 28,
		},
		.transactions = subaw_transactions_23,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "024 SUBA.w (d16, A1), A3 96e9",
		.initial = {
			.regs = {
				3280629019, 1970846933, 3010103251, 1934715137, 2205794166, 242409116, 3956698981, 504991933, 1207899786, 491207309, 3620381408, 2388605198, 3559118117, 383531112, 3464266188, 2546064, 385612, 34560, 16726302
			},
			.prefetch0 = 38633,
			.prefetch1 = 41192,
			.ram = subaw_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3280629019, 1970846933, 3010103251, 1934715137, 2205794166, 242409116, 3956698981, 504991933, 1207899786, 491207309, 3620381408, 2388605198, 3559118117, 383531112, 3464266188, 2546064, 385598, 9984, 3434390622
			},
			.prefetch0 = 9075,
			.prefetch1 = 14636,
			.ram = subaw_final_ram_24,
			.ram_len = 28,
		},
		.transactions = subaw_transactions_24,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "025 SUBA.w (A2)+, A7 9eda",
		.initial = {
			.regs = {
				1885824950, 1544836486, 2705322007, 1436786328, 1775972078, 4265605820, 1606590709, 2741084765, 4164860892, 2587425111, 1973239791, 2644307356, 2029365415, 4193720769, 71908263, 4757714, 244110, 42271, 1512826
			},
			.prefetch0 = 40666,
			.prefetch1 = 1114,
			.ram = subaw_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1885824950, 1544836486, 2705322007, 1436786328, 1775972078, 4265605820, 1606590709, 2741084765, 4164860892, 2587425111, 1973239793, 2644307356, 2029365415, 4193720769, 71908263, 4757714, 244096, 9503, 317731980
			},
			.prefetch0 = 6675,
			.prefetch1 = 65037,
			.ram = subaw_final_ram_25,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_25,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "026 SUBA.w (A6), A5 9ad6",
		.initial = {
			.regs = {
				3307718511, 1400856359, 1502640114, 2217745898, 4161569036, 2542250934, 402336530, 1324145997, 3069002686, 1993842521, 1079857304, 3726963527, 4290095928, 2491325361, 3757405203, 8317110, 4466908, 33808, 10000922
			},
			.prefetch0 = 39638,
			.prefetch1 = 48997,
			.ram = subaw_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3307718511, 1400856359, 1502640114, 2217745898, 4161569036, 2542250934, 402336530, 1324145997, 3069002686, 1993842521, 1079857304, 3726963527, 4290095928, 2491325361, 3757405203, 8317110, 4466894, 9232, 3769943606
			},
			.prefetch0 = 15720,
			.prefetch1 = 31175,
			.ram = subaw_final_ram_26,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_26,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "027 SUBA.w (A2), A6 9cd2",
		.initial = {
			.regs = {
				3093795081, 941319269, 2281640325, 199085311, 310527586, 2160842122, 1767363517, 8850837, 881130666, 3103967708, 4180071279, 2147898710, 4002938635, 1758913585, 3421398540, 12053658, 9899798, 42762, 598886
			},
			.prefetch0 = 40146,
			.prefetch1 = 62101,
			.ram = subaw_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3093795081, 941319269, 2281640325, 199085311, 310527586, 2160842122, 1767363517, 8850837, 881130666, 3103967708, 4180071279, 2147898710, 4002938635, 1758913585, 3421398540, 12053658, 9899784, 9994, 1674457366
			},
			.prefetch0 = 43776,
			.prefetch1 = 22957,
			.ram = subaw_final_ram_27,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_27,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "028 SUBA.w -(A2), A5 9ae2",
		.initial = {
			.regs = {
				666634010, 320265147, 2113402766, 3307160847, 2305393089, 855380764, 2784838043, 3372938661, 4002051453, 857042479, 3488609212, 2766852439, 3718191366, 2884998010, 967397382, 13367400, 4959788, 521, 704668
			},
			.prefetch0 = 39650,
			.prefetch1 = 64128,
			.ram = subaw_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				666634010, 320265147, 2113402766, 3307160847, 2305393089, 855380764, 2784838043, 3372938661, 4002051453, 857042479, 3488609210, 2766852439, 3718191366, 2885000718, 967397382, 13367400, 4959788, 521, 704670
			},
			.prefetch0 = 64128,
			.prefetch1 = 65065,
			.ram = subaw_final_ram_28,
			.ram_len = 8,
		},
		.transactions = subaw_transactions_28,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "029 SUBA.w (xxx).w, A4 98f8",
		.initial = {
			.regs = {
				1107273017, 1684408949, 565138477, 699504002, 288573173, 1220659264, 3375885612, 561877250, 2153879971, 1161135666, 1354401475, 640121510, 1132676928, 304567214, 3459098546, 6717574, 316132, 33558, 8977154
			},
			.prefetch0 = 39160,
			.prefetch1 = 12979,
			.ram = subaw_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1107273017, 1684408949, 565138477, 699504002, 288573173, 1220659264, 3375885612, 561877250, 2153879971, 1161135666, 1354401475, 640121510, 1132676928, 304567214, 3459098546, 6717574, 316118, 8982, 3429676738
			},
			.prefetch0 = 30586,
			.prefetch1 = 36859,
			.ram = subaw_final_ram_29,
			.ram_len = 28,
		},
		.transactions = subaw_transactions_29,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "030 SUBA.w A2, A5 9aca",
		.initial = {
			.regs = {
				203161830, 3294403175, 2937255098, 997049092, 1981712964, 921994177, 1434318373, 3897805459, 3354227770, 3639022819, 523838532, 2023639880, 413248352, 1679298109, 2249258130, 2868164, 2395582, 265, 15657716
			},
			.prefetch0 = 39626,
			.prefetch1 = 19394,
			.ram = subaw_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				203161830, 3294403175, 2937255098, 997049092, 1981712964, 921994177, 1434318373, 3897805459, 3354227770, 3639022819, 523838532, 2023639880, 413248352, 1679288825, 2249258130, 2868164, 2395582, 265, 15657718
			},
			.prefetch0 = 19394,
			.prefetch1 = 20420,
			.ram = subaw_final_ram_30,
			.ram_len = 6,
		},
		.transactions = subaw_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 SUBA.w (A2), A2 94d2",
		.initial = {
			.regs = {
				2537261987, 3322159158, 582659212, 729697922, 251937396, 1595670158, 3874880458, 2026383814, 1156035766, 55449352, 1252688039, 1589221577, 1485469821, 3929033564, 983493781, 8418322, 8732210, 41478, 2003326
			},
			.prefetch0 = 38098,
			.prefetch1 = 6923,
			.ram = subaw_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2537261987, 3322159158, 582659212, 729697922, 251937396, 1595670158, 3874880458, 2026383814, 1156035766, 55449352, 1252688039, 1589221577, 1485469821, 3929033564, 983493781, 8418322, 8732196, 8710, 890151122
			},
			.prefetch0 = 35547,
			.prefetch1 = 42072,
			.ram = subaw_final_ram_31,
			.ram_len = 26,
		},
		.transactions = subaw_transactions_31,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_SUBAW_H */