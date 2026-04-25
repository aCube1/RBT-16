#ifndef RBT_SUBL_H
#define RBT_SUBL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subl_initial_ram_0[] = {
		{ .addr = 0xfb221a, .byte = 0x99 },
		{ .addr = 0xfb221b, .byte = 0xa6 },
		{ .addr = 0xfb221c, .byte = 0xa3 },
		{ .addr = 0xfb221d, .byte = 0x83 },
		{ .addr = 0x004fc8, .byte = 0x78 },
		{ .addr = 0x004fc9, .byte = 0x35 },
		{ .addr = 0x004fca, .byte = 0x8b },
		{ .addr = 0x004fcb, .byte = 0x5c },
		{ .addr = 0xfb221e, .byte = 0xa1 },
		{ .addr = 0xfb221f, .byte = 0xdb }
};

static const SST_RamByte subl_final_ram_0[] = {
		{ .addr = 0xfb221a, .byte = 0x99 },
		{ .addr = 0xfb221b, .byte = 0xa6 },
		{ .addr = 0xfb221c, .byte = 0xa3 },
		{ .addr = 0xfb221d, .byte = 0x83 },
		{ .addr = 0x004fc8, .byte = 0xfe },
		{ .addr = 0x004fc9, .byte = 0xae },
		{ .addr = 0x004fca, .byte = 0xac },
		{ .addr = 0x004fcb, .byte = 0x70 },
		{ .addr = 0xfb221e, .byte = 0xa1 },
		{ .addr = 0xfb221f, .byte = 0xdb }
};

static const SST_Transaction subl_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 20424, .data = 30773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 20426, .data = 35676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16458270, .data = 41435, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 20426, .data = 44144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 20424, .data = 65198, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_1[] = {
		{ .addr = 0x0157ec, .byte = 0x59 },
		{ .addr = 0x0157ed, .byte = 0x94 },
		{ .addr = 0x0157ee, .byte = 0x52 },
		{ .addr = 0x0157ef, .byte = 0xc6 },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0xfa },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x9afa0e, .byte = 0xdb },
		{ .addr = 0x9afa0f, .byte = 0xaa },
		{ .addr = 0x9afa10, .byte = 0x5a },
		{ .addr = 0x9afa11, .byte = 0xf0 }
};

static const SST_RamByte subl_final_ram_1[] = {
		{ .addr = 0x0157ec, .byte = 0x59 },
		{ .addr = 0x0157ed, .byte = 0x94 },
		{ .addr = 0x0157ee, .byte = 0x52 },
		{ .addr = 0x0157ef, .byte = 0xc6 },
		{ .addr = 0x8c7910, .byte = 0x57 },
		{ .addr = 0x8c7911, .byte = 0xee },
		{ .addr = 0x8c790c, .byte = 0x82 },
		{ .addr = 0x8c790d, .byte = 0x01 },
		{ .addr = 0x8c790e, .byte = 0x00 },
		{ .addr = 0x8c790f, .byte = 0x01 },
		{ .addr = 0x8c790a, .byte = 0x59 },
		{ .addr = 0x8c790b, .byte = 0x94 },
		{ .addr = 0x8c7908, .byte = 0xb6 },
		{ .addr = 0x8c7909, .byte = 0xb9 },
		{ .addr = 0x8c7904, .byte = 0x59 },
		{ .addr = 0x8c7905, .byte = 0x91 },
		{ .addr = 0x8c7906, .byte = 0x57 },
		{ .addr = 0x8c7907, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0x71 },
		{ .addr = 0x00000d, .byte = 0x9a },
		{ .addr = 0x00000e, .byte = 0xfa },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x9afa0e, .byte = 0xdb },
		{ .addr = 0x9afa0f, .byte = 0xaa },
		{ .addr = 0x9afa10, .byte = 0x5a },
		{ .addr = 0x9afa11, .byte = 0xf0 }
};

static const SST_Transaction subl_transactions_1[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 46776, .data = 60602, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206032, .data = 22510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206028, .data = 33281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206030, .data = 1, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206026, .data = 22932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206024, .data = 46777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206020, .data = 22929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9206022, .data = 22272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 64014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10156558, .data = 56234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10156560, .data = 23280, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_2[] = {
		{ .addr = 0x35dd34, .byte = 0x9a },
		{ .addr = 0x35dd35, .byte = 0x91 },
		{ .addr = 0x35dd36, .byte = 0x70 },
		{ .addr = 0x35dd37, .byte = 0xd9 },
		{ .addr = 0xc7b0c2, .byte = 0x42 },
		{ .addr = 0xc7b0c3, .byte = 0xab },
		{ .addr = 0xc7b0c4, .byte = 0xa9 },
		{ .addr = 0xc7b0c5, .byte = 0xac },
		{ .addr = 0x35dd38, .byte = 0xd3 },
		{ .addr = 0x35dd39, .byte = 0x1f }
};

static const SST_RamByte subl_final_ram_2[] = {
		{ .addr = 0x35dd34, .byte = 0x9a },
		{ .addr = 0x35dd35, .byte = 0x91 },
		{ .addr = 0x35dd36, .byte = 0x70 },
		{ .addr = 0x35dd37, .byte = 0xd9 },
		{ .addr = 0xc7b0c2, .byte = 0x42 },
		{ .addr = 0xc7b0c3, .byte = 0xab },
		{ .addr = 0xc7b0c4, .byte = 0xa9 },
		{ .addr = 0xc7b0c5, .byte = 0xac },
		{ .addr = 0x35dd38, .byte = 0xd3 },
		{ .addr = 0x35dd39, .byte = 0x1f }
};

static const SST_Transaction subl_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13086914, .data = 17067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13086916, .data = 43436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3530040, .data = 54047, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subl_initial_ram_3[] = {
		{ .addr = 0xe8830c, .byte = 0x5b },
		{ .addr = 0xe8830d, .byte = 0x9e },
		{ .addr = 0xe8830e, .byte = 0x10 },
		{ .addr = 0xe8830f, .byte = 0xeb },
		{ .addr = 0xd4d73c, .byte = 0x6f },
		{ .addr = 0xd4d73d, .byte = 0x6f },
		{ .addr = 0xd4d73e, .byte = 0x8a },
		{ .addr = 0xd4d73f, .byte = 0x0c },
		{ .addr = 0xe88310, .byte = 0xdb },
		{ .addr = 0xe88311, .byte = 0x4c }
};

static const SST_RamByte subl_final_ram_3[] = {
		{ .addr = 0xe8830c, .byte = 0x5b },
		{ .addr = 0xe8830d, .byte = 0x9e },
		{ .addr = 0xe8830e, .byte = 0x10 },
		{ .addr = 0xe8830f, .byte = 0xeb },
		{ .addr = 0xd4d73c, .byte = 0x6f },
		{ .addr = 0xd4d73d, .byte = 0x6f },
		{ .addr = 0xd4d73e, .byte = 0x8a },
		{ .addr = 0xd4d73f, .byte = 0x07 },
		{ .addr = 0xe88310, .byte = 0xdb },
		{ .addr = 0xe88311, .byte = 0x4c }
};

static const SST_Transaction subl_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13948732, .data = 28527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13948734, .data = 35340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15237904, .data = 56140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13948734, .data = 35335, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13948732, .data = 28527, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_4[] = {
		{ .addr = 0x87298e, .byte = 0x51 },
		{ .addr = 0x87298f, .byte = 0x90 },
		{ .addr = 0x872990, .byte = 0x43 },
		{ .addr = 0x872991, .byte = 0x16 },
		{ .addr = 0xdc7d2a, .byte = 0x24 },
		{ .addr = 0xdc7d2b, .byte = 0x08 },
		{ .addr = 0xdc7d2c, .byte = 0x3c },
		{ .addr = 0xdc7d2d, .byte = 0x12 },
		{ .addr = 0x872992, .byte = 0xea },
		{ .addr = 0x872993, .byte = 0xd4 }
};

static const SST_RamByte subl_final_ram_4[] = {
		{ .addr = 0x87298e, .byte = 0x51 },
		{ .addr = 0x87298f, .byte = 0x90 },
		{ .addr = 0x872990, .byte = 0x43 },
		{ .addr = 0x872991, .byte = 0x16 },
		{ .addr = 0xdc7d2a, .byte = 0x24 },
		{ .addr = 0xdc7d2b, .byte = 0x08 },
		{ .addr = 0xdc7d2c, .byte = 0x3c },
		{ .addr = 0xdc7d2d, .byte = 0x0a },
		{ .addr = 0x872992, .byte = 0xea },
		{ .addr = 0x872993, .byte = 0xd4 }
};

static const SST_Transaction subl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14449962, .data = 9224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14449964, .data = 15378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8858002, .data = 60116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14449964, .data = 15370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14449962, .data = 9224, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_5[] = {
		{ .addr = 0x5b98c4, .byte = 0x9e },
		{ .addr = 0x5b98c5, .byte = 0xb4 },
		{ .addr = 0x5b98c6, .byte = 0x3b },
		{ .addr = 0x5b98c7, .byte = 0xa9 },
		{ .addr = 0x5b98c8, .byte = 0x31 },
		{ .addr = 0x5b98c9, .byte = 0x0c },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xb2c594, .byte = 0xc2 },
		{ .addr = 0xb2c595, .byte = 0x3b },
		{ .addr = 0xb2c596, .byte = 0x81 },
		{ .addr = 0xb2c597, .byte = 0x53 }
};

static const SST_RamByte subl_final_ram_5[] = {
		{ .addr = 0x5b98c4, .byte = 0x9e },
		{ .addr = 0x5b98c5, .byte = 0xb4 },
		{ .addr = 0x5b98c6, .byte = 0x3b },
		{ .addr = 0x5b98c7, .byte = 0xa9 },
		{ .addr = 0x5b98c8, .byte = 0x31 },
		{ .addr = 0x5b98c9, .byte = 0x0c },
		{ .addr = 0xb9cf12, .byte = 0x98 },
		{ .addr = 0xb9cf13, .byte = 0xc6 },
		{ .addr = 0xb9cf0e, .byte = 0x07 },
		{ .addr = 0xb9cf0f, .byte = 0x19 },
		{ .addr = 0xb9cf10, .byte = 0x00 },
		{ .addr = 0xb9cf11, .byte = 0x5b },
		{ .addr = 0xb9cf0c, .byte = 0x9e },
		{ .addr = 0xb9cf0d, .byte = 0xb4 },
		{ .addr = 0xb9cf0a, .byte = 0xc0 },
		{ .addr = 0xb9cf0b, .byte = 0x5d },
		{ .addr = 0xb9cf06, .byte = 0x9e },
		{ .addr = 0xb9cf07, .byte = 0xb1 },
		{ .addr = 0xb9cf08, .byte = 0x2d },
		{ .addr = 0xb9cf09, .byte = 0xa9 },
		{ .addr = 0x00000c, .byte = 0xaa },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xc5 },
		{ .addr = 0x00000f, .byte = 0x94 },
		{ .addr = 0xb2c594, .byte = 0xc2 },
		{ .addr = 0xb2c595, .byte = 0x3b },
		{ .addr = 0xb2c596, .byte = 0x81 },
		{ .addr = 0xb2c597, .byte = 0x53 }
};

static const SST_Transaction subl_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6002888, .data = 12556, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11124828, .data = 35595, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177170, .data = 39110, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177166, .data = 1817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177168, .data = 91, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177164, .data = 40628, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177162, .data = 49245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177158, .data = 40625, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12177160, .data = 11689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 50580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11715988, .data = 49723, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11715990, .data = 33107, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_6[] = {
		{ .addr = 0xd365dc, .byte = 0x5f },
		{ .addr = 0xd365dd, .byte = 0x93 },
		{ .addr = 0xd365de, .byte = 0xed },
		{ .addr = 0xd365df, .byte = 0xcf },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0xe6 },
		{ .addr = 0x08c8e6, .byte = 0x76 },
		{ .addr = 0x08c8e7, .byte = 0xfb },
		{ .addr = 0x08c8e8, .byte = 0x6e },
		{ .addr = 0x08c8e9, .byte = 0xec }
};

static const SST_RamByte subl_final_ram_6[] = {
		{ .addr = 0xd365dc, .byte = 0x5f },
		{ .addr = 0xd365dd, .byte = 0x93 },
		{ .addr = 0xd365de, .byte = 0xed },
		{ .addr = 0xd365df, .byte = 0xcf },
		{ .addr = 0xa370e6, .byte = 0x65 },
		{ .addr = 0xa370e7, .byte = 0xde },
		{ .addr = 0xa370e2, .byte = 0x07 },
		{ .addr = 0xa370e3, .byte = 0x10 },
		{ .addr = 0xa370e4, .byte = 0x00 },
		{ .addr = 0xa370e5, .byte = 0xd3 },
		{ .addr = 0xa370e0, .byte = 0x5f },
		{ .addr = 0xa370e1, .byte = 0x93 },
		{ .addr = 0xa370de, .byte = 0x07 },
		{ .addr = 0xa370df, .byte = 0x79 },
		{ .addr = 0xa370da, .byte = 0x5f },
		{ .addr = 0xa370db, .byte = 0x91 },
		{ .addr = 0xa370dc, .byte = 0x14 },
		{ .addr = 0xa370dd, .byte = 0x79 },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0xe6 },
		{ .addr = 0x08c8e6, .byte = 0x76 },
		{ .addr = 0x08c8e7, .byte = 0xfb },
		{ .addr = 0x08c8e8, .byte = 0x6e },
		{ .addr = 0x08c8e9, .byte = 0xec }
};

static const SST_Transaction subl_transactions_6[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7931768, .data = 36987, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10711270, .data = 26078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10711266, .data = 1808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10711268, .data = 211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10711264, .data = 24467, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10711262, .data = 1913, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10711258, .data = 24465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10711260, .data = 5241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8968, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 575718, .data = 30459, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 575720, .data = 28396, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_7[] = {
		{ .addr = 0xf97482, .byte = 0x5b },
		{ .addr = 0xf97483, .byte = 0xb9 },
		{ .addr = 0xf97484, .byte = 0x1a },
		{ .addr = 0xf97485, .byte = 0x99 },
		{ .addr = 0xf97486, .byte = 0xce },
		{ .addr = 0xf97487, .byte = 0xf7 },
		{ .addr = 0xf97488, .byte = 0x23 },
		{ .addr = 0xf97489, .byte = 0xba },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0xe0 },
		{ .addr = 0x00000e, .byte = 0xea },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xe0ea5a, .byte = 0x57 },
		{ .addr = 0xe0ea5b, .byte = 0x05 },
		{ .addr = 0xe0ea5c, .byte = 0x49 },
		{ .addr = 0xe0ea5d, .byte = 0x31 }
};

static const SST_RamByte subl_final_ram_7[] = {
		{ .addr = 0xf97482, .byte = 0x5b },
		{ .addr = 0xf97483, .byte = 0xb9 },
		{ .addr = 0xf97484, .byte = 0x1a },
		{ .addr = 0xf97485, .byte = 0x99 },
		{ .addr = 0xf97486, .byte = 0xce },
		{ .addr = 0xf97487, .byte = 0xf7 },
		{ .addr = 0xf97488, .byte = 0x23 },
		{ .addr = 0xf97489, .byte = 0xba },
		{ .addr = 0x849582, .byte = 0x74 },
		{ .addr = 0x849583, .byte = 0x88 },
		{ .addr = 0x84957e, .byte = 0xa4 },
		{ .addr = 0x84957f, .byte = 0x0e },
		{ .addr = 0x849580, .byte = 0x00 },
		{ .addr = 0x849581, .byte = 0xf9 },
		{ .addr = 0x84957c, .byte = 0x5b },
		{ .addr = 0x84957d, .byte = 0xb9 },
		{ .addr = 0x84957a, .byte = 0xce },
		{ .addr = 0x84957b, .byte = 0xf7 },
		{ .addr = 0x849576, .byte = 0x5b },
		{ .addr = 0x849577, .byte = 0xb5 },
		{ .addr = 0x849578, .byte = 0x1a },
		{ .addr = 0x849579, .byte = 0x99 },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0xe0 },
		{ .addr = 0x00000e, .byte = 0xea },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xe0ea5a, .byte = 0x57 },
		{ .addr = 0xe0ea5b, .byte = 0x05 },
		{ .addr = 0xe0ea5c, .byte = 0x49 },
		{ .addr = 0xe0ea5d, .byte = 0x31 }
};

static const SST_Transaction subl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16348294, .data = 52983, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16348296, .data = 9146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10079990, .data = 41530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689026, .data = 29832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689022, .data = 41998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689024, .data = 249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689020, .data = 23481, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689018, .data = 52983, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689014, .data = 23477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8689016, .data = 6809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 59994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14740058, .data = 22277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14740060, .data = 18737, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_8[] = {
		{ .addr = 0x5f8efe, .byte = 0x9b },
		{ .addr = 0x5f8eff, .byte = 0x90 },
		{ .addr = 0x5f8f00, .byte = 0xca },
		{ .addr = 0x5f8f01, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x77 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x60770e, .byte = 0x06 },
		{ .addr = 0x60770f, .byte = 0xb9 },
		{ .addr = 0x607710, .byte = 0x45 },
		{ .addr = 0x607711, .byte = 0x98 }
};

static const SST_RamByte subl_final_ram_8[] = {
		{ .addr = 0x5f8efe, .byte = 0x9b },
		{ .addr = 0x5f8eff, .byte = 0x90 },
		{ .addr = 0x5f8f00, .byte = 0xca },
		{ .addr = 0x5f8f01, .byte = 0x62 },
		{ .addr = 0xcd91ce, .byte = 0x8f },
		{ .addr = 0xcd91cf, .byte = 0x00 },
		{ .addr = 0xcd91ca, .byte = 0x25 },
		{ .addr = 0xcd91cb, .byte = 0x1d },
		{ .addr = 0xcd91cc, .byte = 0x00 },
		{ .addr = 0xcd91cd, .byte = 0x5f },
		{ .addr = 0xcd91c8, .byte = 0x9b },
		{ .addr = 0xcd91c9, .byte = 0x90 },
		{ .addr = 0xcd91c6, .byte = 0x88 },
		{ .addr = 0xcd91c7, .byte = 0x9b },
		{ .addr = 0xcd91c2, .byte = 0x9b },
		{ .addr = 0xcd91c3, .byte = 0x95 },
		{ .addr = 0xcd91c4, .byte = 0x76 },
		{ .addr = 0xcd91c5, .byte = 0x4b },
		{ .addr = 0x00000c, .byte = 0x4f },
		{ .addr = 0x00000d, .byte = 0x60 },
		{ .addr = 0x00000e, .byte = 0x77 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0x60770e, .byte = 0x06 },
		{ .addr = 0x60770f, .byte = 0xb9 },
		{ .addr = 0x607710, .byte = 0x45 },
		{ .addr = 0x607711, .byte = 0x98 }
};

static const SST_Transaction subl_transactions_8[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4950170, .data = 32393, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13472206, .data = 36608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13472202, .data = 9501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13472204, .data = 95, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13472200, .data = 39824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13472198, .data = 34971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13472194, .data = 39829, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13472196, .data = 30283, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6321934, .data = 1721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6321936, .data = 17816, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_9[] = {
		{ .addr = 0xb6bfee, .byte = 0x90 },
		{ .addr = 0xb6bfef, .byte = 0x93 },
		{ .addr = 0xb6bff0, .byte = 0x52 },
		{ .addr = 0xb6bff1, .byte = 0xd1 },
		{ .addr = 0x00000c, .byte = 0xdd },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xb2 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0xbab232, .byte = 0x93 },
		{ .addr = 0xbab233, .byte = 0x1d },
		{ .addr = 0xbab234, .byte = 0x99 },
		{ .addr = 0xbab235, .byte = 0x2b }
};

static const SST_RamByte subl_final_ram_9[] = {
		{ .addr = 0xb6bfee, .byte = 0x90 },
		{ .addr = 0xb6bfef, .byte = 0x93 },
		{ .addr = 0xb6bff0, .byte = 0x52 },
		{ .addr = 0xb6bff1, .byte = 0xd1 },
		{ .addr = 0xf6dd88, .byte = 0xbf },
		{ .addr = 0xf6dd89, .byte = 0xf0 },
		{ .addr = 0xf6dd84, .byte = 0xa2 },
		{ .addr = 0xf6dd85, .byte = 0x1c },
		{ .addr = 0xf6dd86, .byte = 0x00 },
		{ .addr = 0xf6dd87, .byte = 0xb6 },
		{ .addr = 0xf6dd82, .byte = 0x90 },
		{ .addr = 0xf6dd83, .byte = 0x93 },
		{ .addr = 0xf6dd80, .byte = 0x19 },
		{ .addr = 0xf6dd81, .byte = 0x81 },
		{ .addr = 0xf6dd7c, .byte = 0x90 },
		{ .addr = 0xf6dd7d, .byte = 0x95 },
		{ .addr = 0xf6dd7e, .byte = 0x51 },
		{ .addr = 0xf6dd7f, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0xdd },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0xb2 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0xbab232, .byte = 0x93 },
		{ .addr = 0xbab233, .byte = 0x1d },
		{ .addr = 0xbab234, .byte = 0x99 },
		{ .addr = 0xbab235, .byte = 0x2b }
};

static const SST_Transaction subl_transactions_9[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3152256, .data = 35494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16178568, .data = 49136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16178564, .data = 41500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16178566, .data = 182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16178562, .data = 37011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16178560, .data = 6529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16178556, .data = 37013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16178558, .data = 20784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56762, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 45618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12235314, .data = 37661, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12235316, .data = 39211, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_10[] = {
		{ .addr = 0xa49cec, .byte = 0x94 },
		{ .addr = 0xa49ced, .byte = 0xab },
		{ .addr = 0xa49cee, .byte = 0x3e },
		{ .addr = 0xa49cef, .byte = 0x64 },
		{ .addr = 0xa49cf0, .byte = 0x00 },
		{ .addr = 0xa49cf1, .byte = 0x59 },
		{ .addr = 0xd267a2, .byte = 0xaa },
		{ .addr = 0xd267a3, .byte = 0xe2 },
		{ .addr = 0xd267a4, .byte = 0x89 },
		{ .addr = 0xd267a5, .byte = 0xad },
		{ .addr = 0xa49cf2, .byte = 0xc8 },
		{ .addr = 0xa49cf3, .byte = 0x54 }
};

static const SST_RamByte subl_final_ram_10[] = {
		{ .addr = 0xa49cec, .byte = 0x94 },
		{ .addr = 0xa49ced, .byte = 0xab },
		{ .addr = 0xa49cee, .byte = 0x3e },
		{ .addr = 0xa49cef, .byte = 0x64 },
		{ .addr = 0xa49cf0, .byte = 0x00 },
		{ .addr = 0xa49cf1, .byte = 0x59 },
		{ .addr = 0xd267a2, .byte = 0xaa },
		{ .addr = 0xd267a3, .byte = 0xe2 },
		{ .addr = 0xd267a4, .byte = 0x89 },
		{ .addr = 0xd267a5, .byte = 0xad },
		{ .addr = 0xa49cf2, .byte = 0xc8 },
		{ .addr = 0xa49cf3, .byte = 0x54 }
};

static const SST_Transaction subl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10788080, .data = 89, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13789090, .data = 43746, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13789092, .data = 35245, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10788082, .data = 51284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subl_initial_ram_11[] = {
		{ .addr = 0x474e44, .byte = 0x51 },
		{ .addr = 0x474e45, .byte = 0xa5 },
		{ .addr = 0x474e46, .byte = 0x84 },
		{ .addr = 0x474e47, .byte = 0x32 },
		{ .addr = 0x7562d4, .byte = 0x5b },
		{ .addr = 0x7562d5, .byte = 0x26 },
		{ .addr = 0x7562d6, .byte = 0x45 },
		{ .addr = 0x7562d7, .byte = 0x85 },
		{ .addr = 0x474e48, .byte = 0xe0 },
		{ .addr = 0x474e49, .byte = 0x29 }
};

static const SST_RamByte subl_final_ram_11[] = {
		{ .addr = 0x474e44, .byte = 0x51 },
		{ .addr = 0x474e45, .byte = 0xa5 },
		{ .addr = 0x474e46, .byte = 0x84 },
		{ .addr = 0x474e47, .byte = 0x32 },
		{ .addr = 0x7562d4, .byte = 0x5b },
		{ .addr = 0x7562d5, .byte = 0x26 },
		{ .addr = 0x7562d6, .byte = 0x45 },
		{ .addr = 0x7562d7, .byte = 0x7d },
		{ .addr = 0x474e48, .byte = 0xe0 },
		{ .addr = 0x474e49, .byte = 0x29 }
};

static const SST_Transaction subl_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7693012, .data = 23334, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7693014, .data = 17797, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4673096, .data = 57385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7693014, .data = 17789, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7693012, .data = 23334, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_12[] = {
		{ .addr = 0x34571e, .byte = 0x04 },
		{ .addr = 0x34571f, .byte = 0x9c },
		{ .addr = 0x345720, .byte = 0x70 },
		{ .addr = 0x345721, .byte = 0xd7 },
		{ .addr = 0x345722, .byte = 0xe4 },
		{ .addr = 0x345723, .byte = 0xf9 },
		{ .addr = 0x345724, .byte = 0x60 },
		{ .addr = 0x345725, .byte = 0xb1 },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0xfc },
		{ .addr = 0x00000e, .byte = 0x36 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0xfc3686, .byte = 0x3f },
		{ .addr = 0xfc3687, .byte = 0x3a },
		{ .addr = 0xfc3688, .byte = 0x98 },
		{ .addr = 0xfc3689, .byte = 0x55 }
};

static const SST_RamByte subl_final_ram_12[] = {
		{ .addr = 0x34571e, .byte = 0x04 },
		{ .addr = 0x34571f, .byte = 0x9c },
		{ .addr = 0x345720, .byte = 0x70 },
		{ .addr = 0x345721, .byte = 0xd7 },
		{ .addr = 0x345722, .byte = 0xe4 },
		{ .addr = 0x345723, .byte = 0xf9 },
		{ .addr = 0x345724, .byte = 0x60 },
		{ .addr = 0x345725, .byte = 0xb1 },
		{ .addr = 0xf01320, .byte = 0x57 },
		{ .addr = 0xf01321, .byte = 0x24 },
		{ .addr = 0xf0131c, .byte = 0x81 },
		{ .addr = 0xf0131d, .byte = 0x1b },
		{ .addr = 0xf0131e, .byte = 0x00 },
		{ .addr = 0xf0131f, .byte = 0x34 },
		{ .addr = 0xf0131a, .byte = 0x04 },
		{ .addr = 0xf0131b, .byte = 0x9c },
		{ .addr = 0xf01318, .byte = 0x4c },
		{ .addr = 0xf01319, .byte = 0x11 },
		{ .addr = 0xf01314, .byte = 0x04 },
		{ .addr = 0xf01315, .byte = 0x91 },
		{ .addr = 0xf01316, .byte = 0x5b },
		{ .addr = 0xf01317, .byte = 0x0c },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0xfc },
		{ .addr = 0x00000e, .byte = 0x36 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0xfc3686, .byte = 0x3f },
		{ .addr = 0xfc3687, .byte = 0x3a },
		{ .addr = 0xfc3688, .byte = 0x98 },
		{ .addr = 0xfc3689, .byte = 0x55 }
};

static const SST_Transaction subl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3430178, .data = 58617, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3430180, .data = 24753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 805904, .data = 14379, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15733536, .data = 22308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15733532, .data = 33051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15733534, .data = 52, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15733530, .data = 1180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15733528, .data = 19473, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15733524, .data = 1169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15733526, .data = 23308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16529030, .data = 16186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16529032, .data = 38997, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_13[] = {
		{ .addr = 0x2c5700, .byte = 0x95 },
		{ .addr = 0x2c5701, .byte = 0xa4 },
		{ .addr = 0x2c5702, .byte = 0x9d },
		{ .addr = 0x2c5703, .byte = 0x71 },
		{ .addr = 0x4de222, .byte = 0x1d },
		{ .addr = 0x4de223, .byte = 0xf8 },
		{ .addr = 0x4de224, .byte = 0x91 },
		{ .addr = 0x4de225, .byte = 0xdb },
		{ .addr = 0x2c5704, .byte = 0x56 },
		{ .addr = 0x2c5705, .byte = 0xac }
};

static const SST_RamByte subl_final_ram_13[] = {
		{ .addr = 0x2c5700, .byte = 0x95 },
		{ .addr = 0x2c5701, .byte = 0xa4 },
		{ .addr = 0x2c5702, .byte = 0x9d },
		{ .addr = 0x2c5703, .byte = 0x71 },
		{ .addr = 0x4de222, .byte = 0xfa },
		{ .addr = 0x4de223, .byte = 0xd9 },
		{ .addr = 0x4de224, .byte = 0x76 },
		{ .addr = 0x4de225, .byte = 0x30 },
		{ .addr = 0x2c5704, .byte = 0x56 },
		{ .addr = 0x2c5705, .byte = 0xac }
};

static const SST_Transaction subl_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5104162, .data = 7672, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5104164, .data = 37339, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2905860, .data = 22188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5104164, .data = 30256, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5104162, .data = 64217, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_14[] = {
		{ .addr = 0x4d776a, .byte = 0x91 },
		{ .addr = 0x4d776b, .byte = 0x9b },
		{ .addr = 0x4d776c, .byte = 0x0c },
		{ .addr = 0x4d776d, .byte = 0x96 },
		{ .addr = 0xcb61f8, .byte = 0xdb },
		{ .addr = 0xcb61f9, .byte = 0xd5 },
		{ .addr = 0xcb61fa, .byte = 0xcb },
		{ .addr = 0xcb61fb, .byte = 0x5e },
		{ .addr = 0x4d776e, .byte = 0x34 },
		{ .addr = 0x4d776f, .byte = 0xdc }
};

static const SST_RamByte subl_final_ram_14[] = {
		{ .addr = 0x4d776a, .byte = 0x91 },
		{ .addr = 0x4d776b, .byte = 0x9b },
		{ .addr = 0x4d776c, .byte = 0x0c },
		{ .addr = 0x4d776d, .byte = 0x96 },
		{ .addr = 0xcb61f8, .byte = 0x7d },
		{ .addr = 0xcb61f9, .byte = 0x91 },
		{ .addr = 0xcb61fa, .byte = 0x7c },
		{ .addr = 0xcb61fb, .byte = 0x30 },
		{ .addr = 0x4d776e, .byte = 0x34 },
		{ .addr = 0x4d776f, .byte = 0xdc }
};

static const SST_Transaction subl_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13328888, .data = 56277, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13328890, .data = 52062, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5076846, .data = 13532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13328890, .data = 31792, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13328888, .data = 32145, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_15[] = {
		{ .addr = 0x5ecd88, .byte = 0x91 },
		{ .addr = 0x5ecd89, .byte = 0x98 },
		{ .addr = 0x5ecd8a, .byte = 0xb7 },
		{ .addr = 0x5ecd8b, .byte = 0x6e },
		{ .addr = 0x00000c, .byte = 0x44 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0x56 },
		{ .addr = 0x00000f, .byte = 0x2e },
		{ .addr = 0x22562e, .byte = 0x03 },
		{ .addr = 0x22562f, .byte = 0xce },
		{ .addr = 0x225630, .byte = 0xdb },
		{ .addr = 0x225631, .byte = 0x81 }
};

static const SST_RamByte subl_final_ram_15[] = {
		{ .addr = 0x5ecd88, .byte = 0x91 },
		{ .addr = 0x5ecd89, .byte = 0x98 },
		{ .addr = 0x5ecd8a, .byte = 0xb7 },
		{ .addr = 0x5ecd8b, .byte = 0x6e },
		{ .addr = 0x509050, .byte = 0xcd },
		{ .addr = 0x509051, .byte = 0x8a },
		{ .addr = 0x50904c, .byte = 0x84 },
		{ .addr = 0x50904d, .byte = 0x11 },
		{ .addr = 0x50904e, .byte = 0x00 },
		{ .addr = 0x50904f, .byte = 0x5e },
		{ .addr = 0x50904a, .byte = 0x91 },
		{ .addr = 0x50904b, .byte = 0x98 },
		{ .addr = 0x509048, .byte = 0x5a },
		{ .addr = 0x509049, .byte = 0xe9 },
		{ .addr = 0x509044, .byte = 0x91 },
		{ .addr = 0x509045, .byte = 0x91 },
		{ .addr = 0x509046, .byte = 0x23 },
		{ .addr = 0x509047, .byte = 0x9c },
		{ .addr = 0x00000c, .byte = 0x44 },
		{ .addr = 0x00000d, .byte = 0x22 },
		{ .addr = 0x00000e, .byte = 0x56 },
		{ .addr = 0x00000f, .byte = 0x2e },
		{ .addr = 0x22562e, .byte = 0x03 },
		{ .addr = 0x22562f, .byte = 0xce },
		{ .addr = 0x225630, .byte = 0xdb },
		{ .addr = 0x225631, .byte = 0x81 }
};

static const SST_Transaction subl_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10246888, .data = 39703, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5279824, .data = 52618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5279820, .data = 33809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5279822, .data = 94, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5279818, .data = 37272, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5279816, .data = 23273, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5279812, .data = 37265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5279814, .data = 9116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 17442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2250286, .data = 974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2250288, .data = 56193, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_16[] = {
		{ .addr = 0x8b8540, .byte = 0x5f },
		{ .addr = 0x8b8541, .byte = 0x90 },
		{ .addr = 0x8b8542, .byte = 0x25 },
		{ .addr = 0x8b8543, .byte = 0x01 },
		{ .addr = 0x93b380, .byte = 0x63 },
		{ .addr = 0x93b381, .byte = 0x06 },
		{ .addr = 0x93b382, .byte = 0xbe },
		{ .addr = 0x93b383, .byte = 0x91 },
		{ .addr = 0x8b8544, .byte = 0xda },
		{ .addr = 0x8b8545, .byte = 0xfa }
};

static const SST_RamByte subl_final_ram_16[] = {
		{ .addr = 0x8b8540, .byte = 0x5f },
		{ .addr = 0x8b8541, .byte = 0x90 },
		{ .addr = 0x8b8542, .byte = 0x25 },
		{ .addr = 0x8b8543, .byte = 0x01 },
		{ .addr = 0x93b380, .byte = 0x63 },
		{ .addr = 0x93b381, .byte = 0x06 },
		{ .addr = 0x93b382, .byte = 0xbe },
		{ .addr = 0x93b383, .byte = 0x8a },
		{ .addr = 0x8b8544, .byte = 0xda },
		{ .addr = 0x8b8545, .byte = 0xfa }
};

static const SST_Transaction subl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9679744, .data = 25350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9679746, .data = 48785, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9143620, .data = 56058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9679746, .data = 48778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9679744, .data = 25350, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_17[] = {
		{ .addr = 0x5252e8, .byte = 0x97 },
		{ .addr = 0x5252e9, .byte = 0x90 },
		{ .addr = 0x5252ea, .byte = 0xa5 },
		{ .addr = 0x5252eb, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0x78 },
		{ .addr = 0x00000d, .byte = 0xc2 },
		{ .addr = 0x00000e, .byte = 0x84 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0xc284e0, .byte = 0x1d },
		{ .addr = 0xc284e1, .byte = 0xaf },
		{ .addr = 0xc284e2, .byte = 0x3c },
		{ .addr = 0xc284e3, .byte = 0xe9 }
};

static const SST_RamByte subl_final_ram_17[] = {
		{ .addr = 0x5252e8, .byte = 0x97 },
		{ .addr = 0x5252e9, .byte = 0x90 },
		{ .addr = 0x5252ea, .byte = 0xa5 },
		{ .addr = 0x5252eb, .byte = 0x36 },
		{ .addr = 0x75e454, .byte = 0x52 },
		{ .addr = 0x75e455, .byte = 0xea },
		{ .addr = 0x75e450, .byte = 0x01 },
		{ .addr = 0x75e451, .byte = 0x13 },
		{ .addr = 0x75e452, .byte = 0x00 },
		{ .addr = 0x75e453, .byte = 0x52 },
		{ .addr = 0x75e44e, .byte = 0x97 },
		{ .addr = 0x75e44f, .byte = 0x90 },
		{ .addr = 0x75e44c, .byte = 0x8c },
		{ .addr = 0x75e44d, .byte = 0x71 },
		{ .addr = 0x75e448, .byte = 0x97 },
		{ .addr = 0x75e449, .byte = 0x91 },
		{ .addr = 0x75e44a, .byte = 0xfb },
		{ .addr = 0x75e44b, .byte = 0xc4 },
		{ .addr = 0x00000c, .byte = 0x78 },
		{ .addr = 0x00000d, .byte = 0xc2 },
		{ .addr = 0x00000e, .byte = 0x84 },
		{ .addr = 0x00000f, .byte = 0xe0 },
		{ .addr = 0xc284e0, .byte = 0x1d },
		{ .addr = 0xc284e1, .byte = 0xaf },
		{ .addr = 0xc284e2, .byte = 0x3c },
		{ .addr = 0xc284e3, .byte = 0xe9 }
};

static const SST_Transaction subl_transactions_17[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12881008, .data = 8742, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7726164, .data = 21226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7726160, .data = 275, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7726162, .data = 82, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7726158, .data = 38800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7726156, .data = 35953, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7726152, .data = 38801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7726154, .data = 64452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 30914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 34016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12748000, .data = 7599, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12748002, .data = 15593, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_18[] = {
		{ .addr = 0xe48f6a, .byte = 0x57 },
		{ .addr = 0xe48f6b, .byte = 0x8e },
		{ .addr = 0xe48f6c, .byte = 0x1a },
		{ .addr = 0xe48f6d, .byte = 0x88 },
		{ .addr = 0xe48f6e, .byte = 0x44 },
		{ .addr = 0xe48f6f, .byte = 0x79 }
};

static const SST_RamByte subl_final_ram_18[] = {
		{ .addr = 0xe48f6a, .byte = 0x57 },
		{ .addr = 0xe48f6b, .byte = 0x8e },
		{ .addr = 0xe48f6c, .byte = 0x1a },
		{ .addr = 0xe48f6d, .byte = 0x88 },
		{ .addr = 0xe48f6e, .byte = 0x44 },
		{ .addr = 0xe48f6f, .byte = 0x79 }
};

static const SST_Transaction subl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14978926, .data = 17529, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subl_initial_ram_19[] = {
		{ .addr = 0x8f20b2, .byte = 0x98 },
		{ .addr = 0x8f20b3, .byte = 0x90 },
		{ .addr = 0x8f20b4, .byte = 0x95 },
		{ .addr = 0x8f20b5, .byte = 0x67 },
		{ .addr = 0x0f38c2, .byte = 0x15 },
		{ .addr = 0x0f38c3, .byte = 0x13 },
		{ .addr = 0x0f38c4, .byte = 0x72 },
		{ .addr = 0x0f38c5, .byte = 0x4d },
		{ .addr = 0x8f20b6, .byte = 0x8f },
		{ .addr = 0x8f20b7, .byte = 0x94 }
};

static const SST_RamByte subl_final_ram_19[] = {
		{ .addr = 0x8f20b2, .byte = 0x98 },
		{ .addr = 0x8f20b3, .byte = 0x90 },
		{ .addr = 0x8f20b4, .byte = 0x95 },
		{ .addr = 0x8f20b5, .byte = 0x67 },
		{ .addr = 0x0f38c2, .byte = 0x15 },
		{ .addr = 0x0f38c3, .byte = 0x13 },
		{ .addr = 0x0f38c4, .byte = 0x72 },
		{ .addr = 0x0f38c5, .byte = 0x4d },
		{ .addr = 0x8f20b6, .byte = 0x8f },
		{ .addr = 0x8f20b7, .byte = 0x94 }
};

static const SST_Transaction subl_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 997570, .data = 5395, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 997572, .data = 29261, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9380022, .data = 36756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subl_initial_ram_20[] = {
		{ .addr = 0x4eb438, .byte = 0x93 },
		{ .addr = 0x4eb439, .byte = 0x92 },
		{ .addr = 0x4eb43a, .byte = 0x36 },
		{ .addr = 0x4eb43b, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0x1f },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x99 },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0xb899ca, .byte = 0xbb },
		{ .addr = 0xb899cb, .byte = 0x0c },
		{ .addr = 0xb899cc, .byte = 0xab },
		{ .addr = 0xb899cd, .byte = 0xa5 }
};

static const SST_RamByte subl_final_ram_20[] = {
		{ .addr = 0x4eb438, .byte = 0x93 },
		{ .addr = 0x4eb439, .byte = 0x92 },
		{ .addr = 0x4eb43a, .byte = 0x36 },
		{ .addr = 0x4eb43b, .byte = 0xf0 },
		{ .addr = 0xca340a, .byte = 0xb4 },
		{ .addr = 0xca340b, .byte = 0x3a },
		{ .addr = 0xca3406, .byte = 0x83 },
		{ .addr = 0xca3407, .byte = 0x01 },
		{ .addr = 0xca3408, .byte = 0x00 },
		{ .addr = 0xca3409, .byte = 0x4e },
		{ .addr = 0xca3404, .byte = 0x93 },
		{ .addr = 0xca3405, .byte = 0x92 },
		{ .addr = 0xca3402, .byte = 0xa6 },
		{ .addr = 0xca3403, .byte = 0xdf },
		{ .addr = 0xca33fe, .byte = 0x93 },
		{ .addr = 0xca33ff, .byte = 0x91 },
		{ .addr = 0xca3400, .byte = 0x69 },
		{ .addr = 0xca3401, .byte = 0xbc },
		{ .addr = 0x00000c, .byte = 0x1f },
		{ .addr = 0x00000d, .byte = 0xb8 },
		{ .addr = 0x00000e, .byte = 0x99 },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0xb899ca, .byte = 0xbb },
		{ .addr = 0xb899cb, .byte = 0x0c },
		{ .addr = 0xb899cc, .byte = 0xab },
		{ .addr = 0xb899cd, .byte = 0xa5 }
};

static const SST_Transaction subl_transactions_20[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12363486, .data = 43106, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13251594, .data = 46138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13251590, .data = 33537, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13251592, .data = 78, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13251588, .data = 37778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13251586, .data = 42719, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13251582, .data = 37777, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13251584, .data = 27068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 39370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12097994, .data = 47884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12097996, .data = 43941, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_21[] = {
		{ .addr = 0x6cec82, .byte = 0x97 },
		{ .addr = 0x6cec83, .byte = 0x9e },
		{ .addr = 0x6cec84, .byte = 0x77 },
		{ .addr = 0x6cec85, .byte = 0xf7 },
		{ .addr = 0xa9c220, .byte = 0x75 },
		{ .addr = 0xa9c221, .byte = 0x76 },
		{ .addr = 0xa9c222, .byte = 0x40 },
		{ .addr = 0xa9c223, .byte = 0x23 },
		{ .addr = 0x6cec86, .byte = 0x3c },
		{ .addr = 0x6cec87, .byte = 0xe2 }
};

static const SST_RamByte subl_final_ram_21[] = {
		{ .addr = 0x6cec82, .byte = 0x97 },
		{ .addr = 0x6cec83, .byte = 0x9e },
		{ .addr = 0x6cec84, .byte = 0x77 },
		{ .addr = 0x6cec85, .byte = 0xf7 },
		{ .addr = 0xa9c220, .byte = 0xb7 },
		{ .addr = 0xa9c221, .byte = 0x20 },
		{ .addr = 0xa9c222, .byte = 0xdf },
		{ .addr = 0xa9c223, .byte = 0x47 },
		{ .addr = 0x6cec86, .byte = 0x3c },
		{ .addr = 0x6cec87, .byte = 0xe2 }
};

static const SST_Transaction subl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11125280, .data = 30070, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11125282, .data = 16419, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7138438, .data = 15586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11125282, .data = 57159, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11125280, .data = 46880, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_22[] = {
		{ .addr = 0x7027d8, .byte = 0x51 },
		{ .addr = 0x7027d9, .byte = 0xa9 },
		{ .addr = 0x7027da, .byte = 0x4f },
		{ .addr = 0x7027db, .byte = 0x56 },
		{ .addr = 0x7027dc, .byte = 0xc6 },
		{ .addr = 0x7027dd, .byte = 0x7e },
		{ .addr = 0x00000c, .byte = 0x24 },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0xf61000, .byte = 0x3b },
		{ .addr = 0xf61001, .byte = 0xea },
		{ .addr = 0xf61002, .byte = 0x2a },
		{ .addr = 0xf61003, .byte = 0x6c }
};

static const SST_RamByte subl_final_ram_22[] = {
		{ .addr = 0x7027d8, .byte = 0x51 },
		{ .addr = 0x7027d9, .byte = 0xa9 },
		{ .addr = 0x7027da, .byte = 0x4f },
		{ .addr = 0x7027db, .byte = 0x56 },
		{ .addr = 0x7027dc, .byte = 0xc6 },
		{ .addr = 0x7027dd, .byte = 0x7e },
		{ .addr = 0xe00a9a, .byte = 0x27 },
		{ .addr = 0xe00a9b, .byte = 0xda },
		{ .addr = 0xe00a96, .byte = 0x03 },
		{ .addr = 0xe00a97, .byte = 0x0d },
		{ .addr = 0xe00a98, .byte = 0x00 },
		{ .addr = 0xe00a99, .byte = 0x70 },
		{ .addr = 0xe00a94, .byte = 0x51 },
		{ .addr = 0xe00a95, .byte = 0xa9 },
		{ .addr = 0xe00a92, .byte = 0x24 },
		{ .addr = 0xe00a93, .byte = 0xf5 },
		{ .addr = 0xe00a8e, .byte = 0x51 },
		{ .addr = 0xe00a8f, .byte = 0xb1 },
		{ .addr = 0xe00a90, .byte = 0x89 },
		{ .addr = 0xe00a91, .byte = 0xc7 },
		{ .addr = 0x00000c, .byte = 0x24 },
		{ .addr = 0x00000d, .byte = 0xf6 },
		{ .addr = 0x00000e, .byte = 0x10 },
		{ .addr = 0x00000f, .byte = 0x00 },
		{ .addr = 0xf61000, .byte = 0x3b },
		{ .addr = 0xf61001, .byte = 0xea },
		{ .addr = 0xf61002, .byte = 0x2a },
		{ .addr = 0xf61003, .byte = 0x6c }
};

static const SST_Transaction subl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7350236, .data = 50814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13051124, .data = 14973, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14682778, .data = 10202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14682774, .data = 781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14682776, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14682772, .data = 20905, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14682770, .data = 9461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14682766, .data = 20913, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14682768, .data = 35271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 9462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16125952, .data = 15338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16125954, .data = 10860, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_23[] = {
		{ .addr = 0x5f61d0, .byte = 0x5f },
		{ .addr = 0x5f61d1, .byte = 0xab },
		{ .addr = 0x5f61d2, .byte = 0x4a },
		{ .addr = 0x5f61d3, .byte = 0xb9 },
		{ .addr = 0x5f61d4, .byte = 0x7b },
		{ .addr = 0x5f61d5, .byte = 0xf9 },
		{ .addr = 0x00000c, .byte = 0x72 },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0x58 },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0x34587e, .byte = 0xef },
		{ .addr = 0x34587f, .byte = 0xe5 },
		{ .addr = 0x345880, .byte = 0x60 },
		{ .addr = 0x345881, .byte = 0x32 }
};

static const SST_RamByte subl_final_ram_23[] = {
		{ .addr = 0x5f61d0, .byte = 0x5f },
		{ .addr = 0x5f61d1, .byte = 0xab },
		{ .addr = 0x5f61d2, .byte = 0x4a },
		{ .addr = 0x5f61d3, .byte = 0xb9 },
		{ .addr = 0x5f61d4, .byte = 0x7b },
		{ .addr = 0x5f61d5, .byte = 0xf9 },
		{ .addr = 0x3e564e, .byte = 0x61 },
		{ .addr = 0x3e564f, .byte = 0xd2 },
		{ .addr = 0x3e564a, .byte = 0x20 },
		{ .addr = 0x3e564b, .byte = 0x1a },
		{ .addr = 0x3e564c, .byte = 0x00 },
		{ .addr = 0x3e564d, .byte = 0x5f },
		{ .addr = 0x3e5648, .byte = 0x5f },
		{ .addr = 0x3e5649, .byte = 0xab },
		{ .addr = 0x3e5646, .byte = 0xeb },
		{ .addr = 0x3e5647, .byte = 0x35 },
		{ .addr = 0x3e5642, .byte = 0x5f },
		{ .addr = 0x3e5643, .byte = 0xb5 },
		{ .addr = 0x3e5644, .byte = 0xa3 },
		{ .addr = 0x3e5645, .byte = 0xe0 },
		{ .addr = 0x00000c, .byte = 0x72 },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0x58 },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0x34587e, .byte = 0xef },
		{ .addr = 0x34587f, .byte = 0xe5 },
		{ .addr = 0x345880, .byte = 0x60 },
		{ .addr = 0x345881, .byte = 0x32 }
};

static const SST_Transaction subl_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6250964, .data = 31737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14740276, .data = 21398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4085326, .data = 25042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4085322, .data = 8218, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4085324, .data = 95, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4085320, .data = 24491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4085318, .data = 60213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4085314, .data = 24501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4085316, .data = 41952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29236, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3430526, .data = 61413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3430528, .data = 24626, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_24[] = {
		{ .addr = 0xeb3a36, .byte = 0x55 },
		{ .addr = 0xeb3a37, .byte = 0x83 },
		{ .addr = 0xeb3a38, .byte = 0x13 },
		{ .addr = 0xeb3a39, .byte = 0xb0 },
		{ .addr = 0xeb3a3a, .byte = 0x47 },
		{ .addr = 0xeb3a3b, .byte = 0x20 }
};

static const SST_RamByte subl_final_ram_24[] = {
		{ .addr = 0xeb3a36, .byte = 0x55 },
		{ .addr = 0xeb3a37, .byte = 0x83 },
		{ .addr = 0xeb3a38, .byte = 0x13 },
		{ .addr = 0xeb3a39, .byte = 0xb0 },
		{ .addr = 0xeb3a3a, .byte = 0x47 },
		{ .addr = 0xeb3a3b, .byte = 0x20 }
};

static const SST_Transaction subl_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15415866, .data = 18208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subl_initial_ram_25[] = {
		{ .addr = 0x321332, .byte = 0x5d },
		{ .addr = 0x321333, .byte = 0xb3 },
		{ .addr = 0x321334, .byte = 0xfe },
		{ .addr = 0x321335, .byte = 0x7a },
		{ .addr = 0x321336, .byte = 0x56 },
		{ .addr = 0x321337, .byte = 0x6a },
		{ .addr = 0x423230, .byte = 0x4c },
		{ .addr = 0x423231, .byte = 0xfe },
		{ .addr = 0x423232, .byte = 0x56 },
		{ .addr = 0x423233, .byte = 0x60 },
		{ .addr = 0x321338, .byte = 0x8f },
		{ .addr = 0x321339, .byte = 0xea }
};

static const SST_RamByte subl_final_ram_25[] = {
		{ .addr = 0x321332, .byte = 0x5d },
		{ .addr = 0x321333, .byte = 0xb3 },
		{ .addr = 0x321334, .byte = 0xfe },
		{ .addr = 0x321335, .byte = 0x7a },
		{ .addr = 0x321336, .byte = 0x56 },
		{ .addr = 0x321337, .byte = 0x6a },
		{ .addr = 0x423230, .byte = 0x4c },
		{ .addr = 0x423231, .byte = 0xfe },
		{ .addr = 0x423232, .byte = 0x56 },
		{ .addr = 0x423233, .byte = 0x5a },
		{ .addr = 0x321338, .byte = 0x8f },
		{ .addr = 0x321339, .byte = 0xea }
};

static const SST_Transaction subl_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3281718, .data = 22122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4338224, .data = 19710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4338226, .data = 22112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3281720, .data = 36842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4338226, .data = 22106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4338224, .data = 19710, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_26[] = {
		{ .addr = 0x095ed6, .byte = 0x94 },
		{ .addr = 0x095ed7, .byte = 0xaa },
		{ .addr = 0x095ed8, .byte = 0xdf },
		{ .addr = 0x095ed9, .byte = 0x6a },
		{ .addr = 0x095eda, .byte = 0xf6 },
		{ .addr = 0x095edb, .byte = 0x76 },
		{ .addr = 0xac6a58, .byte = 0x27 },
		{ .addr = 0xac6a59, .byte = 0x84 },
		{ .addr = 0xac6a5a, .byte = 0xfb },
		{ .addr = 0xac6a5b, .byte = 0xcf },
		{ .addr = 0x095edc, .byte = 0xf9 },
		{ .addr = 0x095edd, .byte = 0x5b }
};

static const SST_RamByte subl_final_ram_26[] = {
		{ .addr = 0x095ed6, .byte = 0x94 },
		{ .addr = 0x095ed7, .byte = 0xaa },
		{ .addr = 0x095ed8, .byte = 0xdf },
		{ .addr = 0x095ed9, .byte = 0x6a },
		{ .addr = 0x095eda, .byte = 0xf6 },
		{ .addr = 0x095edb, .byte = 0x76 },
		{ .addr = 0xac6a58, .byte = 0x27 },
		{ .addr = 0xac6a59, .byte = 0x84 },
		{ .addr = 0xac6a5a, .byte = 0xfb },
		{ .addr = 0xac6a5b, .byte = 0xcf },
		{ .addr = 0x095edc, .byte = 0xf9 },
		{ .addr = 0x095edd, .byte = 0x5b }
};

static const SST_Transaction subl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 614106, .data = 63094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11299416, .data = 10116, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11299418, .data = 64463, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 614108, .data = 63835, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte subl_initial_ram_27[] = {
		{ .addr = 0xb1f434, .byte = 0x51 },
		{ .addr = 0xb1f435, .byte = 0x8c },
		{ .addr = 0xb1f436, .byte = 0xcf },
		{ .addr = 0xb1f437, .byte = 0x65 },
		{ .addr = 0xb1f438, .byte = 0xd8 },
		{ .addr = 0xb1f439, .byte = 0x76 }
};

static const SST_RamByte subl_final_ram_27[] = {
		{ .addr = 0xb1f434, .byte = 0x51 },
		{ .addr = 0xb1f435, .byte = 0x8c },
		{ .addr = 0xb1f436, .byte = 0xcf },
		{ .addr = 0xb1f437, .byte = 0x65 },
		{ .addr = 0xb1f438, .byte = 0xd8 },
		{ .addr = 0xb1f439, .byte = 0x76 }
};

static const SST_Transaction subl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11662392, .data = 55414, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte subl_initial_ram_28[] = {
		{ .addr = 0x6fef50, .byte = 0x55 },
		{ .addr = 0x6fef51, .byte = 0xaa },
		{ .addr = 0x6fef52, .byte = 0x00 },
		{ .addr = 0x6fef53, .byte = 0x08 },
		{ .addr = 0x6fef54, .byte = 0xd0 },
		{ .addr = 0x6fef55, .byte = 0x99 },
		{ .addr = 0x00000c, .byte = 0x82 },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0xea },
		{ .addr = 0x00000f, .byte = 0x30 },
		{ .addr = 0x3aea30, .byte = 0x38 },
		{ .addr = 0x3aea31, .byte = 0x0b },
		{ .addr = 0x3aea32, .byte = 0x82 },
		{ .addr = 0x3aea33, .byte = 0x46 }
};

static const SST_RamByte subl_final_ram_28[] = {
		{ .addr = 0x6fef50, .byte = 0x55 },
		{ .addr = 0x6fef51, .byte = 0xaa },
		{ .addr = 0x6fef52, .byte = 0x00 },
		{ .addr = 0x6fef53, .byte = 0x08 },
		{ .addr = 0x6fef54, .byte = 0xd0 },
		{ .addr = 0x6fef55, .byte = 0x99 },
		{ .addr = 0xc81642, .byte = 0xef },
		{ .addr = 0xc81643, .byte = 0x52 },
		{ .addr = 0xc8163e, .byte = 0x27 },
		{ .addr = 0xc8163f, .byte = 0x1c },
		{ .addr = 0xc81640, .byte = 0x00 },
		{ .addr = 0xc81641, .byte = 0x6f },
		{ .addr = 0xc8163c, .byte = 0x55 },
		{ .addr = 0xc8163d, .byte = 0xaa },
		{ .addr = 0xc8163a, .byte = 0xf0 },
		{ .addr = 0xc8163b, .byte = 0x79 },
		{ .addr = 0xc81636, .byte = 0x55 },
		{ .addr = 0xc81637, .byte = 0xb5 },
		{ .addr = 0xc81638, .byte = 0xd7 },
		{ .addr = 0xc81639, .byte = 0xd2 },
		{ .addr = 0x00000c, .byte = 0x82 },
		{ .addr = 0x00000d, .byte = 0x3a },
		{ .addr = 0x00000e, .byte = 0xea },
		{ .addr = 0x00000f, .byte = 0x30 },
		{ .addr = 0x3aea30, .byte = 0x38 },
		{ .addr = 0x3aea31, .byte = 0x0b },
		{ .addr = 0x3aea32, .byte = 0x82 },
		{ .addr = 0x3aea33, .byte = 0x46 }
};

static const SST_Transaction subl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7335764, .data = 53401, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13824120, .data = 48045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13112898, .data = 61266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13112894, .data = 10012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13112896, .data = 111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13112892, .data = 21930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13112890, .data = 61561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13112886, .data = 21941, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13112888, .data = 55250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 59952, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3861040, .data = 14347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3861042, .data = 33350, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_29[] = {
		{ .addr = 0xb33502, .byte = 0x9f },
		{ .addr = 0xb33503, .byte = 0xb5 },
		{ .addr = 0xb33504, .byte = 0x05 },
		{ .addr = 0xb33505, .byte = 0xf7 },
		{ .addr = 0xb33506, .byte = 0xf6 },
		{ .addr = 0xb33507, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xa8cd0a, .byte = 0x12 },
		{ .addr = 0xa8cd0b, .byte = 0x2f },
		{ .addr = 0xa8cd0c, .byte = 0x06 },
		{ .addr = 0xa8cd0d, .byte = 0x3f }
};

static const SST_RamByte subl_final_ram_29[] = {
		{ .addr = 0xb33502, .byte = 0x9f },
		{ .addr = 0xb33503, .byte = 0xb5 },
		{ .addr = 0xb33504, .byte = 0x05 },
		{ .addr = 0xb33505, .byte = 0xf7 },
		{ .addr = 0xb33506, .byte = 0xf6 },
		{ .addr = 0xb33507, .byte = 0xf0 },
		{ .addr = 0xcef8e0, .byte = 0x35 },
		{ .addr = 0xcef8e1, .byte = 0x04 },
		{ .addr = 0xcef8dc, .byte = 0x27 },
		{ .addr = 0xcef8dd, .byte = 0x0d },
		{ .addr = 0xcef8de, .byte = 0x00 },
		{ .addr = 0xcef8df, .byte = 0xb3 },
		{ .addr = 0xcef8da, .byte = 0x9f },
		{ .addr = 0xcef8db, .byte = 0xb5 },
		{ .addr = 0xcef8d8, .byte = 0xdd },
		{ .addr = 0xcef8d9, .byte = 0xbb },
		{ .addr = 0xcef8d4, .byte = 0x9f },
		{ .addr = 0xcef8d5, .byte = 0xb5 },
		{ .addr = 0xcef8d6, .byte = 0xd3 },
		{ .addr = 0xcef8d7, .byte = 0x20 },
		{ .addr = 0x00000c, .byte = 0x73 },
		{ .addr = 0x00000d, .byte = 0xa8 },
		{ .addr = 0x00000e, .byte = 0xcd },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xa8cd0a, .byte = 0x12 },
		{ .addr = 0xa8cd0b, .byte = 0x2f },
		{ .addr = 0xa8cd0c, .byte = 0x06 },
		{ .addr = 0xa8cd0d, .byte = 0x3f }
};

static const SST_Transaction subl_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11744518, .data = 63216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2153914, .data = 43074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13564128, .data = 13572, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13564124, .data = 9997, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13564126, .data = 179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13564122, .data = 40885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13564120, .data = 56763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13564116, .data = 40885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13564118, .data = 54048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 29608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 52490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11062538, .data = 4655, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11062540, .data = 1599, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_30[] = {
		{ .addr = 0x397638, .byte = 0x90 },
		{ .addr = 0x397639, .byte = 0xb2 },
		{ .addr = 0x39763a, .byte = 0x18 },
		{ .addr = 0x39763b, .byte = 0xcc },
		{ .addr = 0x39763c, .byte = 0x1d },
		{ .addr = 0x39763d, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0x85 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x0e97c4, .byte = 0xcd },
		{ .addr = 0x0e97c5, .byte = 0x44 },
		{ .addr = 0x0e97c6, .byte = 0x08 },
		{ .addr = 0x0e97c7, .byte = 0x23 }
};

static const SST_RamByte subl_final_ram_30[] = {
		{ .addr = 0x397638, .byte = 0x90 },
		{ .addr = 0x397639, .byte = 0xb2 },
		{ .addr = 0x39763a, .byte = 0x18 },
		{ .addr = 0x39763b, .byte = 0xcc },
		{ .addr = 0x39763c, .byte = 0x1d },
		{ .addr = 0x39763d, .byte = 0x32 },
		{ .addr = 0xe39572, .byte = 0x76 },
		{ .addr = 0xe39573, .byte = 0x3a },
		{ .addr = 0xe3956e, .byte = 0x81 },
		{ .addr = 0xe3956f, .byte = 0x0c },
		{ .addr = 0xe39570, .byte = 0x00 },
		{ .addr = 0xe39571, .byte = 0x39 },
		{ .addr = 0xe3956c, .byte = 0x90 },
		{ .addr = 0xe3956d, .byte = 0xb2 },
		{ .addr = 0xe3956a, .byte = 0xed },
		{ .addr = 0xe3956b, .byte = 0xdd },
		{ .addr = 0xe39566, .byte = 0x90 },
		{ .addr = 0xe39567, .byte = 0xb1 },
		{ .addr = 0xe39568, .byte = 0x21 },
		{ .addr = 0xe39569, .byte = 0xdf },
		{ .addr = 0x00000c, .byte = 0x85 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x0e97c4, .byte = 0xcd },
		{ .addr = 0x0e97c5, .byte = 0x44 },
		{ .addr = 0x0e97c6, .byte = 0x08 },
		{ .addr = 0x0e97c7, .byte = 0x23 }
};

static const SST_Transaction subl_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3765820, .data = 7474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14675420, .data = 14069, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14914930, .data = 30266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14914926, .data = 33036, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14914928, .data = 57, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14914924, .data = 37042, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14914922, .data = 60893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14914918, .data = 37041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14914920, .data = 8671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 956356, .data = 52548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 956358, .data = 2083, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subl_initial_ram_31[] = {
		{ .addr = 0x96cd70, .byte = 0x90 },
		{ .addr = 0x96cd71, .byte = 0xb2 },
		{ .addr = 0x96cd72, .byte = 0x5b },
		{ .addr = 0x96cd73, .byte = 0x4b },
		{ .addr = 0x96cd74, .byte = 0x09 },
		{ .addr = 0x96cd75, .byte = 0x20 },
		{ .addr = 0x6b2ed4, .byte = 0x1d },
		{ .addr = 0x6b2ed5, .byte = 0xca },
		{ .addr = 0x6b2ed6, .byte = 0x11 },
		{ .addr = 0x6b2ed7, .byte = 0x1a },
		{ .addr = 0x96cd76, .byte = 0x29 },
		{ .addr = 0x96cd77, .byte = 0x59 }
};

static const SST_RamByte subl_final_ram_31[] = {
		{ .addr = 0x96cd70, .byte = 0x90 },
		{ .addr = 0x96cd71, .byte = 0xb2 },
		{ .addr = 0x96cd72, .byte = 0x5b },
		{ .addr = 0x96cd73, .byte = 0x4b },
		{ .addr = 0x96cd74, .byte = 0x09 },
		{ .addr = 0x96cd75, .byte = 0x20 },
		{ .addr = 0x6b2ed4, .byte = 0x1d },
		{ .addr = 0x6b2ed5, .byte = 0xca },
		{ .addr = 0x6b2ed6, .byte = 0x11 },
		{ .addr = 0x6b2ed7, .byte = 0x1a },
		{ .addr = 0x96cd76, .byte = 0x29 },
		{ .addr = 0x96cd77, .byte = 0x59 }
};

static const SST_Transaction subl_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9882996, .data = 2336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7024340, .data = 7626, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7024342, .data = 4378, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9882998, .data = 10585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_TestCase subl[] = {
	{
		.name = "000 SUB.l D4, -(A6) 99a6",
		.initial = {
			.regs = {
				2430741266, 2034761921, 1379322137, 3782162824, 2038882028, 1468357326, 3551250365, 3843388948, 3953464159, 2314470778, 2738875704, 1762611768, 710786340, 164768393, 4009775052, 6416760, 9623548, 8991, 16458270
			},
			.prefetch0 = 39334,
			.prefetch1 = 41859,
			.ram = subl_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2430741266, 2034761921, 1379322137, 3782162824, 2038882028, 1468357326, 3551250365, 3843388948, 3953464159, 2314470778, 2738875704, 1762611768, 710786340, 164768393, 4009775048, 6416760, 9623548, 8985, 16458272
			},
			.prefetch0 = 41859,
			.prefetch1 = 41435,
			.ram = subl_final_ram_0,
			.ram_len = 10,
		},
		.transactions = subl_transactions_0,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "001 SUB.l 4, (A4) 5994",
		.initial = {
			.regs = {
				502615940, 4091168944, 463656308, 1365240294, 2242068205, 1536139885, 1494493786, 1675438444, 887916507, 2868866105, 3472314425, 296909923, 1459664569, 4219706119, 1898454890, 12389638, 9206034, 33281, 88048
			},
			.prefetch0 = 22932,
			.prefetch1 = 21190,
			.ram = subl_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				502615940, 4091168944, 463656308, 1365240294, 2242068205, 1536139885, 1494493786, 1675438444, 887916507, 2868866105, 3472314425, 296909923, 1459664569, 4219706119, 1898454890, 12389638, 9206020, 8705, 1905981970
			},
			.prefetch0 = 56234,
			.prefetch1 = 23280,
			.ram = subl_final_ram_1,
			.ram_len = 26,
		},
		.transactions = subl_transactions_1,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "002 SUB.l (A1), D5 9a91",
		.initial = {
			.regs = {
				2606660954, 659188214, 1352781446, 2770366245, 3208922050, 3779685790, 622523122, 407518609, 4196752990, 2361897154, 2025421722, 3900552991, 3000613575, 3324072450, 4028659321, 13110440, 4324830, 8460, 3530040
			},
			.prefetch0 = 39569,
			.prefetch1 = 28889,
			.ram = subl_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2606660954, 659188214, 1352781446, 2770366245, 3208922050, 2661139442, 622523122, 407518609, 4196752990, 2361897154, 2025421722, 3900552991, 3000613575, 3324072450, 4028659321, 13110440, 4324830, 8456, 3530042
			},
			.prefetch0 = 28889,
			.prefetch1 = 54047,
			.ram = subl_final_ram_2,
			.ram_len = 10,
		},
		.transactions = subl_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 SUB.l 5, (A6)+ 5b9e",
		.initial = {
			.regs = {
				1542578704, 1266910777, 462178335, 2993833018, 3966699970, 1110498010, 2814395120, 2068613960, 3807057640, 2548990388, 3881788548, 2221482229, 182855543, 3080282475, 2329204540, 5139966, 8235176, 9738, 15237904
			},
			.prefetch0 = 23454,
			.prefetch1 = 4331,
			.ram = subl_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1542578704, 1266910777, 462178335, 2993833018, 3966699970, 1110498010, 2814395120, 2068613960, 3807057640, 2548990388, 3881788548, 2221482229, 182855543, 3080282475, 2329204544, 5139966, 8235176, 9728, 15237906
			},
			.prefetch0 = 4331,
			.prefetch1 = 56140,
			.ram = subl_final_ram_3,
			.ram_len = 10,
		},
		.transactions = subl_transactions_3,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "004 SUB.l 8, (A0) 5190",
		.initial = {
			.regs = {
				1049494874, 3591839804, 1096544055, 721499225, 1402050637, 3606412828, 2602344246, 407354395, 131890474, 2784233428, 158797675, 2627365123, 634974121, 3601947303, 2482629382, 12047626, 1909880, 42267, 8858002
			},
			.prefetch0 = 20880,
			.prefetch1 = 17174,
			.ram = subl_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1049494874, 3591839804, 1096544055, 721499225, 1402050637, 3606412828, 2602344246, 407354395, 131890474, 2784233428, 158797675, 2627365123, 634974121, 3601947303, 2482629382, 12047626, 1909880, 42240, 8858004
			},
			.prefetch0 = 17174,
			.prefetch1 = 60116,
			.ram = subl_final_ram_4,
			.ram_len = 10,
		},
		.transactions = subl_transactions_4,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "005 SUB.l (d8, A4, Xn), D7 9eb4",
		.initial = {
			.regs = {
				4253987337, 3285023570, 3058388265, 3110601151, 3829874849, 554874424, 3997674, 2130108594, 307102301, 1567348054, 807554072, 1824474166, 1950465781, 548278985, 625901244, 1857268, 12177172, 1817, 6002888
			},
			.prefetch0 = 40628,
			.prefetch1 = 15273,
			.ram = subl_initial_ram_5,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4253987337, 3285023570, 3058388265, 3110601151, 3829874849, 554874424, 3997674, 2130108594, 307102301, 1567348054, 807554072, 1824474166, 1950465781, 548278985, 625901244, 1857268, 12177158, 10009, 2863842712
			},
			.prefetch0 = 49723,
			.prefetch1 = 33107,
			.ram = subl_final_ram_5,
			.ram_len = 28,
		},
		.transactions = subl_transactions_5,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "006 SUB.l 7, (A3) 5f93",
		.initial = {
			.regs = {
				1656563659, 1243183381, 1019911956, 331162976, 2643829692, 347561381, 2623610754, 4046711121, 207948929, 178330376, 2488559596, 343476089, 4014866130, 382145622, 765251096, 440188, 10711272, 1808, 13854176
			},
			.prefetch0 = 24467,
			.prefetch1 = 60879,
			.ram = subl_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1656563659, 1243183381, 1019911956, 331162976, 2643829692, 347561381, 2623610754, 4046711121, 207948929, 178330376, 2488559596, 343476089, 4014866130, 382145622, 765251096, 440188, 10711258, 10000, 587778282
			},
			.prefetch0 = 30459,
			.prefetch1 = 28396,
			.ram = subl_final_ram_6,
			.ram_len = 26,
		},
		.transactions = subl_transactions_6,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "007 SUB.l 5, (xxx).l 5bb9",
		.initial = {
			.regs = {
				2949862030, 1375966837, 1224511509, 3115425064, 100751453, 2165205595, 1710971612, 3743330888, 92918347, 3787380487, 4094986084, 1914356334, 1415016076, 1887543453, 959218536, 4907060, 8689028, 41998, 16348294
			},
			.prefetch0 = 23481,
			.prefetch1 = 6809,
			.ram = subl_initial_ram_7,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2949862030, 1375966837, 1224511509, 3115425064, 100751453, 2165205595, 1710971612, 3743330888, 92918347, 3787380487, 4094986084, 1914356334, 1415016076, 1887543453, 959218536, 4907060, 8689014, 9230, 165735006
			},
			.prefetch0 = 22277,
			.prefetch1 = 18737,
			.ram = subl_final_ram_7,
			.ram_len = 30,
		},
		.transactions = subl_transactions_7,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "008 SUB.l D5, (A0) 9b90",
		.initial = {
			.regs = {
				2994098667, 2017648992, 979890248, 2083182952, 428963170, 1164781249, 4072242109, 3230748617, 1984661659, 1719859446, 4000895116, 2563702442, 3713037024, 2946321478, 394330369, 6473550, 13472208, 9501, 6262530
			},
			.prefetch0 = 39824,
			.prefetch1 = 51810,
			.ram = subl_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2994098667, 2017648992, 979890248, 2083182952, 428963170, 1164781249, 4072242109, 3230748617, 1984661659, 1719859446, 4000895116, 2563702442, 3713037024, 2946321478, 394330369, 6473550, 13472194, 9501, 1331722002
			},
			.prefetch0 = 1721,
			.prefetch1 = 17816,
			.ram = subl_final_ram_8,
			.ram_len = 26,
		},
		.transactions = subl_transactions_8,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "009 SUB.l (A3), D0 9093",
		.initial = {
			.regs = {
				1028562212, 3634361702, 1917718639, 3975610814, 1027941834, 2565809810, 1203107839, 1643033140, 2054790699, 1029050102, 268021551, 1362106753, 1401329907, 2243346656, 914315720, 7520254, 16178570, 41500, 11976690
			},
			.prefetch0 = 37011,
			.prefetch1 = 21201,
			.ram = subl_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1028562212, 3634361702, 1917718639, 3975610814, 1027941834, 2565809810, 1203107839, 1643033140, 2054790699, 1029050102, 268021551, 1362106753, 1401329907, 2243346656, 914315720, 7520254, 16178556, 8732, 3720000054
			},
			.prefetch0 = 37661,
			.prefetch1 = 39211,
			.ram = subl_final_ram_9,
			.ram_len = 26,
		},
		.transactions = subl_transactions_9,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "010 SUB.l (d16, A3), D2 94ab",
		.initial = {
			.regs = {
				1905813025, 3602437073, 865643412, 1125506512, 3796487760, 3147229980, 665026045, 2036457767, 911209226, 1548000648, 374827651, 970074430, 318867605, 1893802407, 1421160482, 13161048, 12325000, 0, 10788080
			},
			.prefetch0 = 38059,
			.prefetch1 = 15972,
			.ram = subl_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1905813025, 3602437073, 2293637607, 1125506512, 3796487760, 3147229980, 665026045, 2036457767, 911209226, 1548000648, 374827651, 970074430, 318867605, 1893802407, 1421160482, 13161048, 12325000, 27, 10788084
			},
			.prefetch0 = 89,
			.prefetch1 = 51284,
			.ram = subl_final_ram_10,
			.ram_len = 12,
		},
		.transactions = subl_transactions_10,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "011 SUB.l 8, -(A5) 51a5",
		.initial = {
			.regs = {
				1653929996, 2250157875, 401421171, 2799047082, 214377340, 3001080502, 83446826, 1652112994, 2811542631, 2648609959, 1881024273, 1736210005, 780813619, 2054513368, 1377845437, 16189870, 11867068, 34330, 4673096
			},
			.prefetch0 = 20901,
			.prefetch1 = 33842,
			.ram = subl_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1653929996, 2250157875, 401421171, 2799047082, 214377340, 3001080502, 83446826, 1652112994, 2811542631, 2648609959, 1881024273, 1736210005, 780813619, 2054513364, 1377845437, 16189870, 11867068, 34304, 4673098
			},
			.prefetch0 = 33842,
			.prefetch1 = 57385,
			.ram = subl_final_ram_11,
			.ram_len = 10,
		},
		.transactions = subl_transactions_11,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "012 SUB.l #, (A4)+ 049c",
		.initial = {
			.regs = {
				3188732299, 3915346459, 594054914, 568003299, 2497156047, 3588267259, 3397515274, 3182579418, 2114356175, 2423557339, 2778782458, 1839313937, 1527532561, 1764146652, 3492554690, 7723222, 15733538, 33051, 3430178
			},
			.prefetch0 = 1180,
			.prefetch1 = 28887,
			.ram = subl_initial_ram_12,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3188732299, 3915346459, 594054914, 568003299, 2497156047, 3588267259, 3397515274, 3182579418, 2114356175, 2423557339, 2778782458, 1839313937, 1527532561, 1764146652, 3492554690, 7723222, 15733524, 8475, 3573298826
			},
			.prefetch0 = 16186,
			.prefetch1 = 38997,
			.ram = subl_final_ram_12,
			.ram_len = 30,
		},
		.transactions = subl_transactions_12,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "013 SUB.l D2, -(A4) 95a4",
		.initial = {
			.regs = {
				3850822383, 1140060178, 589241259, 3778119963, 1036410637, 48443152, 2226203000, 1701182574, 3166315919, 1798477963, 309190438, 4133938081, 1984815654, 3977746699, 630041394, 12962318, 7805966, 259, 2905860
			},
			.prefetch0 = 38308,
			.prefetch1 = 40305,
			.ram = subl_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3850822383, 1140060178, 589241259, 3778119963, 1036410637, 48443152, 2226203000, 1701182574, 3166315919, 1798477963, 309190438, 4133938081, 1984815650, 3977746699, 630041394, 12962318, 7805966, 281, 2905862
			},
			.prefetch0 = 40305,
			.prefetch1 = 22188,
			.ram = subl_final_ram_13,
			.ram_len = 10,
		},
		.transactions = subl_transactions_13,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "014 SUB.l D0, (A3)+ 919b",
		.initial = {
			.regs = {
				1581535022, 1163660988, 4195931461, 1389914889, 2372018218, 2072333738, 2407166403, 3890810831, 3665059766, 620218029, 3593182338, 936075768, 4294739909, 2591125329, 3861304527, 5968316, 11871178, 33055, 5076846
			},
			.prefetch0 = 37275,
			.prefetch1 = 3222,
			.ram = subl_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1581535022, 1163660988, 4195931461, 1389914889, 2372018218, 2072333738, 2407166403, 3890810831, 3665059766, 620218029, 3593182338, 936075772, 4294739909, 2591125329, 3861304527, 5968316, 11871178, 33026, 5076848
			},
			.prefetch0 = 3222,
			.prefetch1 = 13532,
			.ram = subl_final_ram_14,
			.ram_len = 10,
		},
		.transactions = subl_transactions_14,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "015 SUB.l D0, (A0)+ 9198",
		.initial = {
			.regs = {
				2175855782, 1848376598, 2838895996, 239572619, 864943925, 2858263861, 3670044855, 4107710163, 597449449, 2588693994, 3843124754, 4058936181, 1119883390, 2485672054, 3259806900, 8605692, 5279826, 33809, 6213004
			},
			.prefetch0 = 37272,
			.prefetch1 = 46958,
			.ram = subl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2175855782, 1848376598, 2838895996, 239572619, 864943925, 2858263861, 3670044855, 4107710163, 597449449, 2588693994, 3843124754, 4058936181, 1119883390, 2485672054, 3259806900, 8605692, 5279812, 9233, 1143100978
			},
			.prefetch0 = 974,
			.prefetch1 = 56193,
			.ram = subl_final_ram_15,
			.ram_len = 26,
		},
		.transactions = subl_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "016 SUB.l 7, (A0) 5f90",
		.initial = {
			.regs = {
				1099589328, 3122353691, 4221750864, 3280829862, 1079567163, 936688964, 418027760, 3895291290, 1217639296, 3809358554, 4286670433, 3201815712, 859528585, 2594037637, 2301285199, 7579022, 4461900, 9734, 9143620
			},
			.prefetch0 = 24464,
			.prefetch1 = 9473,
			.ram = subl_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1099589328, 3122353691, 4221750864, 3280829862, 1079567163, 936688964, 418027760, 3895291290, 1217639296, 3809358554, 4286670433, 3201815712, 859528585, 2594037637, 2301285199, 7579022, 4461900, 9728, 9143622
			},
			.prefetch0 = 9473,
			.prefetch1 = 56058,
			.ram = subl_final_ram_16,
			.ram_len = 10,
		},
		.transactions = subl_transactions_16,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "017 SUB.l D3, (A0) 9790",
		.initial = {
			.regs = {
				932107901, 2464724160, 895537444, 2419416236, 1825440952, 3005592259, 265575298, 3857645446, 4223962225, 4259952868, 1469670499, 2101781422, 2289749953, 1858931014, 2287541842, 4045762, 7726166, 275, 5395180
			},
			.prefetch0 = 38800,
			.prefetch1 = 42294,
			.ram = subl_initial_ram_17,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				932107901, 2464724160, 895537444, 2419416236, 1825440952, 3005592259, 265575298, 3857645446, 4223962225, 4259952868, 1469670499, 2101781422, 2289749953, 1858931014, 2287541842, 4045762, 7726152, 8467, 2026013924
			},
			.prefetch0 = 7599,
			.prefetch1 = 15593,
			.ram = subl_final_ram_17,
			.ram_len = 26,
		},
		.transactions = subl_transactions_17,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "018 SUB.l 3, A6 578e",
		.initial = {
			.regs = {
				4278141337, 195357180, 2520599810, 974859805, 2256074074, 1291107545, 3570885250, 172196544, 2779481889, 1251710677, 1268668327, 3615105452, 3591554998, 4132757251, 3987012000, 12228358, 3308072, 33805, 14978926
			},
			.prefetch0 = 22414,
			.prefetch1 = 6792,
			.ram = subl_initial_ram_18,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4278141337, 195357180, 2520599810, 974859805, 2256074074, 1291107545, 3570885250, 172196544, 2779481889, 1251710677, 1268668327, 3615105452, 3591554998, 4132757251, 3987011997, 12228358, 3308072, 33805, 14978928
			},
			.prefetch0 = 6792,
			.prefetch1 = 17529,
			.ram = subl_final_ram_18,
			.ram_len = 6,
		},
		.transactions = subl_transactions_18,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "019 SUB.l (A0), D4 9890",
		.initial = {
			.regs = {
				3692983821, 570575528, 437243721, 3243854023, 1494030870, 2166859499, 2587184472, 2871697301, 1745828034, 3088704334, 203542503, 788215854, 2432413832, 3453306044, 4057730990, 16111678, 15772644, 42512, 9380022
			},
			.prefetch0 = 39056,
			.prefetch1 = 38247,
			.ram = subl_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3692983821, 570575528, 437243721, 3243854023, 1140434889, 2166859499, 2587184472, 2871697301, 1745828034, 3088704334, 203542503, 788215854, 2432413832, 3453306044, 4057730990, 16111678, 15772644, 42496, 9380024
			},
			.prefetch0 = 38247,
			.prefetch1 = 36756,
			.ram = subl_final_ram_19,
			.ram_len = 10,
		},
		.transactions = subl_transactions_19,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "020 SUB.l D1, (A2) 9392",
		.initial = {
			.regs = {
				504133904, 4051609823, 1531264451, 1859452928, 896713441, 867853946, 3511102534, 3928210397, 3745726701, 4030782856, 1773971167, 1560740954, 2456673378, 1121801215, 645571445, 14118566, 13251596, 33537, 5157948
			},
			.prefetch0 = 37778,
			.prefetch1 = 14064,
			.ram = subl_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				504133904, 4051609823, 1531264451, 1859452928, 896713441, 867853946, 3511102534, 3928210397, 3745726701, 4030782856, 1773971167, 1560740954, 2456673378, 1121801215, 645571445, 14118566, 13251582, 8961, 532191694
			},
			.prefetch0 = 47884,
			.prefetch1 = 43941,
			.ram = subl_final_ram_20,
			.ram_len = 26,
		},
		.transactions = subl_transactions_20,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "021 SUB.l D3, (A6)+ 979e",
		.initial = {
			.regs = {
				1476431921, 1964303050, 3430987864, 3193266396, 3150688513, 281951167, 2738751740, 477975253, 1152201928, 1244742698, 3706753981, 680349715, 692849308, 3754875934, 212451872, 12690684, 531240, 34059, 7138438
			},
			.prefetch0 = 38814,
			.prefetch1 = 30711,
			.ram = subl_initial_ram_21,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1476431921, 1964303050, 3430987864, 3193266396, 3150688513, 281951167, 2738751740, 477975253, 1152201928, 1244742698, 3706753981, 680349715, 692849308, 3754875934, 212451876, 12690684, 531240, 34075, 7138440
			},
			.prefetch0 = 30711,
			.prefetch1 = 15586,
			.ram = subl_final_ram_21,
			.ram_len = 10,
		},
		.transactions = subl_transactions_21,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "022 SUB.l 8, (d16, A1) 51a9",
		.initial = {
			.regs = {
				1474995153, 2883052971, 761562936, 1387739882, 2332314794, 513844552, 2010645344, 852331354, 2706437844, 2311509407, 646698513, 3675803113, 1841635982, 1047005544, 587582464, 12272444, 14682780, 781, 7350236
			},
			.prefetch0 = 20905,
			.prefetch1 = 20310,
			.ram = subl_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1474995153, 2883052971, 761562936, 1387739882, 2332314794, 513844552, 2010645344, 852331354, 2706437844, 2311509407, 646698513, 3675803113, 1841635982, 1047005544, 587582464, 12272444, 14682766, 8973, 620105732
			},
			.prefetch0 = 15338,
			.prefetch1 = 10860,
			.ram = subl_final_ram_22,
			.ram_len = 28,
		},
		.transactions = subl_transactions_22,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "023 SUB.l 7, (d16, A3) 5fab",
		.initial = {
			.regs = {
				5575219, 4244903082, 2263759171, 3196869198, 4127814551, 4248292993, 2913239680, 1435718482, 2337125705, 3513186031, 3334265231, 2749407356, 1019314214, 1517418700, 623686277, 11752852, 4085328, 8218, 6250964
			},
			.prefetch0 = 24491,
			.prefetch1 = 19129,
			.ram = subl_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				5575219, 4244903082, 2263759171, 3196869198, 4127814551, 4248292993, 2913239680, 1435718482, 2337125705, 3513186031, 3334265231, 2749407356, 1019314214, 1517418700, 623686277, 11752852, 4085314, 8218, 1916033154
			},
			.prefetch0 = 61413,
			.prefetch1 = 24626,
			.ram = subl_final_ram_23,
			.ram_len = 28,
		},
		.transactions = subl_transactions_23,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "024 SUB.l 2, D3 5583",
		.initial = {
			.regs = {
				3883801353, 443749125, 2827177109, 670823578, 2087807532, 3045731723, 3772980628, 2472068503, 3351112157, 1919243156, 2412474087, 4098649050, 3705242665, 2073050143, 2898611612, 6688986, 817438, 8716, 15415866
			},
			.prefetch0 = 21891,
			.prefetch1 = 5040,
			.ram = subl_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3883801353, 443749125, 2827177109, 670823576, 2087807532, 3045731723, 3772980628, 2472068503, 3351112157, 1919243156, 2412474087, 4098649050, 3705242665, 2073050143, 2898611612, 6688986, 817438, 8704, 15415868
			},
			.prefetch0 = 5040,
			.prefetch1 = 18208,
			.ram = subl_final_ram_24,
			.ram_len = 6,
		},
		.transactions = subl_transactions_24,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "025 SUB.l 6, (d8, A3, Xn) 5db3",
		.initial = {
			.regs = {
				1249382651, 2666745518, 428441171, 1893892785, 3647237716, 4150070444, 2198697797, 2575325374, 2112092751, 2259192935, 2457341142, 1267071860, 4001461489, 2323350025, 97693514, 13369150, 12334658, 41987, 3281718
			},
			.prefetch0 = 23987,
			.prefetch1 = 65146,
			.ram = subl_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1249382651, 2666745518, 428441171, 1893892785, 3647237716, 4150070444, 2198697797, 2575325374, 2112092751, 2259192935, 2457341142, 1267071860, 4001461489, 2323350025, 97693514, 13369150, 12334658, 41984, 3281722
			},
			.prefetch0 = 22122,
			.prefetch1 = 36842,
			.ram = subl_final_ram_25,
			.ram_len = 12,
		},
		.transactions = subl_transactions_25,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "026 SUB.l (d16, A2), D2 94aa",
		.initial = {
			.regs = {
				4240365145, 4099202725, 302859362, 2733995849, 3245534828, 3173521086, 78967372, 3385099682, 1123052428, 2344307798, 4121725678, 2438383096, 3931623728, 4052665360, 2133469381, 6432182, 9696402, 28, 614106
			},
			.prefetch0 = 38058,
			.prefetch1 = 57194,
			.ram = subl_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4240365145, 4099202725, 3934800019, 2733995849, 3245534828, 3173521086, 78967372, 3385099682, 1123052428, 2344307798, 4121725678, 2438383096, 3931623728, 4052665360, 2133469381, 6432182, 9696402, 25, 614110
			},
			.prefetch0 = 63094,
			.prefetch1 = 63835,
			.ram = subl_final_ram_26,
			.ram_len = 12,
		},
		.transactions = subl_transactions_26,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "027 SUB.l 8, A4 518c",
		.initial = {
			.regs = {
				1626121594, 832719667, 703578144, 3773720816, 2423214806, 1696353490, 1656220280, 3586147763, 1295746356, 1161323709, 1061083322, 1718908158, 3472670962, 1984790400, 1665160313, 4707776, 11886160, 1796, 11662392
			},
			.prefetch0 = 20876,
			.prefetch1 = 53093,
			.ram = subl_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1626121594, 832719667, 703578144, 3773720816, 2423214806, 1696353490, 1656220280, 3586147763, 1295746356, 1161323709, 1061083322, 1718908158, 3472670954, 1984790400, 1665160313, 4707776, 11886160, 1796, 11662394
			},
			.prefetch0 = 53093,
			.prefetch1 = 55414,
			.ram = subl_final_ram_27,
			.ram_len = 6,
		},
		.transactions = subl_transactions_27,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "028 SUB.l 2, (d16, A2) 55aa",
		.initial = {
			.regs = {
				1714482814, 2161119306, 117779370, 2293795307, 1384116634, 375888111, 1364481588, 2043013681, 4137185444, 3058674254, 3620925553, 3730843276, 1627811574, 1627355029, 3411002747, 16416940, 13112900, 10012, 7335764
			},
			.prefetch0 = 21930,
			.prefetch1 = 8,
			.ram = subl_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1714482814, 2161119306, 117779370, 2293795307, 1384116634, 375888111, 1364481588, 2043013681, 4137185444, 3058674254, 3620925553, 3730843276, 1627811574, 1627355029, 3411002747, 16416940, 13112886, 10012, 2184899124
			},
			.prefetch0 = 14347,
			.prefetch1 = 33350,
			.ram = subl_final_ram_28,
			.ram_len = 28,
		},
		.transactions = subl_transactions_28,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "029 SUB.l D7, (d8, A5, Xn) 9fb5",
		.initial = {
			.regs = {
				1681755773, 3879385857, 2954541593, 4214281213, 2958320074, 313161916, 4051121160, 3279965826, 3819182353, 568520888, 3366349376, 1671614625, 489456637, 3542175559, 1925544051, 16635602, 13564130, 9997, 11744518
			},
			.prefetch0 = 40885,
			.prefetch1 = 1527,
			.ram = subl_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1681755773, 3879385857, 2954541593, 4214281213, 2958320074, 313161916, 4051121160, 3279965826, 3819182353, 568520888, 3366349376, 1671614625, 489456637, 3542175559, 1925544051, 16635602, 13564116, 9997, 1940442382
			},
			.prefetch0 = 4655,
			.prefetch1 = 1599,
			.ram = subl_final_ram_29,
			.ram_len = 28,
		},
		.transactions = subl_transactions_29,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "030 SUB.l (d8, A2, Xn), D0 90b2",
		.initial = {
			.regs = {
				446920147, 2615279509, 752530985, 585806393, 465501046, 1741602080, 1281651224, 2890516533, 3717881533, 3377670703, 2248011388, 819255344, 2897079756, 1945030097, 2788573439, 6865004, 14914932, 33036, 3765820
			},
			.prefetch0 = 37042,
			.prefetch1 = 6348,
			.ram = subl_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				446920147, 2615279509, 752530985, 585806393, 465501046, 1741602080, 1281651224, 2890516533, 3717881533, 3377670703, 2248011388, 819255344, 2897079756, 1945030097, 2788573439, 6865004, 14914918, 8460, 2232326088
			},
			.prefetch0 = 52548,
			.prefetch1 = 2083,
			.ram = subl_final_ram_30,
			.ram_len = 28,
		},
		.transactions = subl_transactions_30,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "031 SUB.l (d8, A2, Xn), D0 90b2",
		.initial = {
			.regs = {
				349649390, 1799248935, 1964900130, 1390065233, 3727027848, 118866935, 4222734752, 2495950048, 1972711972, 2475067558, 2052418194, 3525945292, 3575175644, 1929901071, 3834521798, 4918834, 5099692, 34561, 9882996
			},
			.prefetch0 = 37042,
			.prefetch1 = 23371,
			.ram = subl_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4144834772, 1799248935, 1964900130, 1390065233, 3727027848, 118866935, 4222734752, 2495950048, 1972711972, 2475067558, 2052418194, 3525945292, 3575175644, 1929901071, 3834521798, 4918834, 5099692, 34585, 9883000
			},
			.prefetch0 = 2336,
			.prefetch1 = 10585,
			.ram = subl_final_ram_31,
			.ram_len = 12,
		},
		.transactions = subl_transactions_31,
		.transactions_len = 6,
		.lenght = 20,
	},
};

#endif /* RBT_SUBL_H */