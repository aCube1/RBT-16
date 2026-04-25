#ifndef RBT_DIVU_H
#define RBT_DIVU_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte divu_initial_ram_0[] = {
		{ .addr = 0x775e54, .byte = 0x88 },
		{ .addr = 0x775e55, .byte = 0xf9 },
		{ .addr = 0x775e56, .byte = 0x7b },
		{ .addr = 0x775e57, .byte = 0x97 },
		{ .addr = 0x775e58, .byte = 0x8e },
		{ .addr = 0x775e59, .byte = 0xc2 },
		{ .addr = 0x775e5a, .byte = 0x3d },
		{ .addr = 0x775e5b, .byte = 0x5d },
		{ .addr = 0x978ec2, .byte = 0x73 },
		{ .addr = 0x978ec3, .byte = 0xd8 },
		{ .addr = 0x775e5c, .byte = 0x0b },
		{ .addr = 0x775e5d, .byte = 0x35 }
};

static const SST_RamByte divu_final_ram_0[] = {
		{ .addr = 0x775e54, .byte = 0x88 },
		{ .addr = 0x775e55, .byte = 0xf9 },
		{ .addr = 0x775e56, .byte = 0x7b },
		{ .addr = 0x775e57, .byte = 0x97 },
		{ .addr = 0x775e58, .byte = 0x8e },
		{ .addr = 0x775e59, .byte = 0xc2 },
		{ .addr = 0x775e5a, .byte = 0x3d },
		{ .addr = 0x775e5b, .byte = 0x5d },
		{ .addr = 0x978ec2, .byte = 0x73 },
		{ .addr = 0x978ec3, .byte = 0xd8 },
		{ .addr = 0x775e5c, .byte = 0x0b },
		{ .addr = 0x775e5d, .byte = 0x35 }
};

static const SST_Transaction divu_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7822936, .data = 36546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7822938, .data = 15709, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9932482, .data = 29656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7822940, .data = 2869, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_1[] = {
		{ .addr = 0x23f2a4, .byte = 0x8a },
		{ .addr = 0x23f2a5, .byte = 0xd5 },
		{ .addr = 0x23f2a6, .byte = 0x76 },
		{ .addr = 0x23f2a7, .byte = 0xf2 },
		{ .addr = 0x985946, .byte = 0xc6 },
		{ .addr = 0x985947, .byte = 0x6b },
		{ .addr = 0x23f2a8, .byte = 0x57 },
		{ .addr = 0x23f2a9, .byte = 0x27 }
};

static const SST_RamByte divu_final_ram_1[] = {
		{ .addr = 0x23f2a4, .byte = 0x8a },
		{ .addr = 0x23f2a5, .byte = 0xd5 },
		{ .addr = 0x23f2a6, .byte = 0x76 },
		{ .addr = 0x23f2a7, .byte = 0xf2 },
		{ .addr = 0x985946, .byte = 0xc6 },
		{ .addr = 0x985947, .byte = 0x6b },
		{ .addr = 0x23f2a8, .byte = 0x57 },
		{ .addr = 0x23f2a9, .byte = 0x27 }
};

static const SST_Transaction divu_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9984326, .data = 50795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2355880, .data = 22311, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_2[] = {
		{ .addr = 0x0a4dac, .byte = 0x8a },
		{ .addr = 0x0a4dad, .byte = 0xea },
		{ .addr = 0x0a4dae, .byte = 0xe1 },
		{ .addr = 0x0a4daf, .byte = 0xef },
		{ .addr = 0x0a4db0, .byte = 0x4e },
		{ .addr = 0x0a4db1, .byte = 0x53 },
		{ .addr = 0xc8641e, .byte = 0x40 },
		{ .addr = 0xc8641f, .byte = 0x0c },
		{ .addr = 0x0a4db2, .byte = 0xe2 },
		{ .addr = 0x0a4db3, .byte = 0xb1 }
};

static const SST_RamByte divu_final_ram_2[] = {
		{ .addr = 0x0a4dac, .byte = 0x8a },
		{ .addr = 0x0a4dad, .byte = 0xea },
		{ .addr = 0x0a4dae, .byte = 0xe1 },
		{ .addr = 0x0a4daf, .byte = 0xef },
		{ .addr = 0x0a4db0, .byte = 0x4e },
		{ .addr = 0x0a4db1, .byte = 0x53 },
		{ .addr = 0xc8641e, .byte = 0x40 },
		{ .addr = 0xc8641f, .byte = 0x0c },
		{ .addr = 0x0a4db2, .byte = 0xe2 },
		{ .addr = 0x0a4db3, .byte = 0xb1 }
};

static const SST_Transaction divu_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 675248, .data = 20051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13132830, .data = 16396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 675250, .data = 58033, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_3[] = {
		{ .addr = 0xfbec6a, .byte = 0x88 },
		{ .addr = 0xfbec6b, .byte = 0xd1 },
		{ .addr = 0xfbec6c, .byte = 0xbf },
		{ .addr = 0xfbec6d, .byte = 0x84 },
		{ .addr = 0xa5c210, .byte = 0xb8 },
		{ .addr = 0xa5c211, .byte = 0x6d },
		{ .addr = 0xfbec6e, .byte = 0x25 },
		{ .addr = 0xfbec6f, .byte = 0x97 }
};

static const SST_RamByte divu_final_ram_3[] = {
		{ .addr = 0xfbec6a, .byte = 0x88 },
		{ .addr = 0xfbec6b, .byte = 0xd1 },
		{ .addr = 0xfbec6c, .byte = 0xbf },
		{ .addr = 0xfbec6d, .byte = 0x84 },
		{ .addr = 0xa5c210, .byte = 0xb8 },
		{ .addr = 0xa5c211, .byte = 0x6d },
		{ .addr = 0xfbec6e, .byte = 0x25 },
		{ .addr = 0xfbec6f, .byte = 0x97 }
};

static const SST_Transaction divu_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10863120, .data = 47213, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 106 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16510062, .data = 9623, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_4[] = {
		{ .addr = 0x112d08, .byte = 0x82 },
		{ .addr = 0x112d09, .byte = 0xf7 },
		{ .addr = 0x112d0a, .byte = 0x69 },
		{ .addr = 0x112d0b, .byte = 0x95 },
		{ .addr = 0x112d0c, .byte = 0x2a },
		{ .addr = 0x112d0d, .byte = 0x73 },
		{ .addr = 0x00000c, .byte = 0xc7 },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x38 },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0xa03818, .byte = 0x84 },
		{ .addr = 0xa03819, .byte = 0x2e },
		{ .addr = 0xa0381a, .byte = 0xfd },
		{ .addr = 0xa0381b, .byte = 0xed }
};

static const SST_RamByte divu_final_ram_4[] = {
		{ .addr = 0x112d08, .byte = 0x82 },
		{ .addr = 0x112d09, .byte = 0xf7 },
		{ .addr = 0x112d0a, .byte = 0x69 },
		{ .addr = 0x112d0b, .byte = 0x95 },
		{ .addr = 0x112d0c, .byte = 0x2a },
		{ .addr = 0x112d0d, .byte = 0x73 },
		{ .addr = 0x17fa4e, .byte = 0x2d },
		{ .addr = 0x17fa4f, .byte = 0x0a },
		{ .addr = 0x17fa4a, .byte = 0x85 },
		{ .addr = 0x17fa4b, .byte = 0x06 },
		{ .addr = 0x17fa4c, .byte = 0x00 },
		{ .addr = 0x17fa4d, .byte = 0x11 },
		{ .addr = 0x17fa48, .byte = 0x82 },
		{ .addr = 0x17fa49, .byte = 0xf7 },
		{ .addr = 0x17fa46, .byte = 0xda },
		{ .addr = 0x17fa47, .byte = 0x9f },
		{ .addr = 0x17fa42, .byte = 0x82 },
		{ .addr = 0x17fa43, .byte = 0xf1 },
		{ .addr = 0x17fa44, .byte = 0x3b },
		{ .addr = 0x17fa45, .byte = 0xe2 },
		{ .addr = 0x00000c, .byte = 0xc7 },
		{ .addr = 0x00000d, .byte = 0xa0 },
		{ .addr = 0x00000e, .byte = 0x38 },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0xa03818, .byte = 0x84 },
		{ .addr = 0xa03819, .byte = 0x2e },
		{ .addr = 0xa0381a, .byte = 0xfd },
		{ .addr = 0xa0381b, .byte = 0xed }
};

static const SST_Transaction divu_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1125644, .data = 10867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14867102, .data = 28472, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1571406, .data = 11530, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1571402, .data = 34054, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1571404, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1571400, .data = 33527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1571398, .data = 55967, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1571394, .data = 33521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1571396, .data = 15330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14360, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10500120, .data = 33838, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10500122, .data = 65005, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_5[] = {
		{ .addr = 0x7dbd14, .byte = 0x80 },
		{ .addr = 0x7dbd15, .byte = 0xd4 },
		{ .addr = 0x7dbd16, .byte = 0xae },
		{ .addr = 0x7dbd17, .byte = 0x90 },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x847808, .byte = 0x61 },
		{ .addr = 0x847809, .byte = 0xf2 },
		{ .addr = 0x84780a, .byte = 0x12 },
		{ .addr = 0x84780b, .byte = 0x43 }
};

static const SST_RamByte divu_final_ram_5[] = {
		{ .addr = 0x7dbd14, .byte = 0x80 },
		{ .addr = 0x7dbd15, .byte = 0xd4 },
		{ .addr = 0x7dbd16, .byte = 0xae },
		{ .addr = 0x7dbd17, .byte = 0x90 },
		{ .addr = 0x99f8f0, .byte = 0xbd },
		{ .addr = 0x99f8f1, .byte = 0x16 },
		{ .addr = 0x99f8ec, .byte = 0x82 },
		{ .addr = 0x99f8ed, .byte = 0x18 },
		{ .addr = 0x99f8ee, .byte = 0x00 },
		{ .addr = 0x99f8ef, .byte = 0x7d },
		{ .addr = 0x99f8ea, .byte = 0x80 },
		{ .addr = 0x99f8eb, .byte = 0xd4 },
		{ .addr = 0x99f8e8, .byte = 0x7f },
		{ .addr = 0x99f8e9, .byte = 0x0d },
		{ .addr = 0x99f8e4, .byte = 0x80 },
		{ .addr = 0x99f8e5, .byte = 0xd1 },
		{ .addr = 0x99f8e6, .byte = 0x1d },
		{ .addr = 0x99f8e7, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x847808, .byte = 0x61 },
		{ .addr = 0x847809, .byte = 0xf2 },
		{ .addr = 0x84780a, .byte = 0x12 },
		{ .addr = 0x84780b, .byte = 0x43 }
};

static const SST_Transaction divu_transactions_5[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15761164, .data = 29579, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10090736, .data = 48406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10090732, .data = 33304, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10090734, .data = 125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10090730, .data = 32980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10090728, .data = 32525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10090724, .data = 32977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10090726, .data = 7664, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25732, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8681480, .data = 25074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8681482, .data = 4675, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_6[] = {
		{ .addr = 0x872b8e, .byte = 0x84 },
		{ .addr = 0x872b8f, .byte = 0xf3 },
		{ .addr = 0x872b90, .byte = 0x68 },
		{ .addr = 0x872b91, .byte = 0x2f },
		{ .addr = 0x872b92, .byte = 0xdb },
		{ .addr = 0x872b93, .byte = 0x56 },
		{ .addr = 0x29e696, .byte = 0x3b },
		{ .addr = 0x29e697, .byte = 0x68 },
		{ .addr = 0x872b94, .byte = 0x4d },
		{ .addr = 0x872b95, .byte = 0x6e }
};

static const SST_RamByte divu_final_ram_6[] = {
		{ .addr = 0x872b8e, .byte = 0x84 },
		{ .addr = 0x872b8f, .byte = 0xf3 },
		{ .addr = 0x872b90, .byte = 0x68 },
		{ .addr = 0x872b91, .byte = 0x2f },
		{ .addr = 0x872b92, .byte = 0xdb },
		{ .addr = 0x872b93, .byte = 0x56 },
		{ .addr = 0x29e696, .byte = 0x3b },
		{ .addr = 0x29e697, .byte = 0x68 },
		{ .addr = 0x872b94, .byte = 0x4d },
		{ .addr = 0x872b95, .byte = 0x6e }
};

static const SST_Transaction divu_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8858514, .data = 56150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2746006, .data = 15208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8858516, .data = 19822, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_7[] = {
		{ .addr = 0x8d1de6, .byte = 0x8c },
		{ .addr = 0x8d1de7, .byte = 0xc0 },
		{ .addr = 0x8d1de8, .byte = 0xef },
		{ .addr = 0x8d1de9, .byte = 0x99 },
		{ .addr = 0x8d1dea, .byte = 0x20 },
		{ .addr = 0x8d1deb, .byte = 0xdd }
};

static const SST_RamByte divu_final_ram_7[] = {
		{ .addr = 0x8d1de6, .byte = 0x8c },
		{ .addr = 0x8d1de7, .byte = 0xc0 },
		{ .addr = 0x8d1de8, .byte = 0xef },
		{ .addr = 0x8d1de9, .byte = 0x99 },
		{ .addr = 0x8d1dea, .byte = 0x20 },
		{ .addr = 0x8d1deb, .byte = 0xdd }
};

static const SST_Transaction divu_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9248234, .data = 8413, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_8[] = {
		{ .addr = 0xd68d3c, .byte = 0x86 },
		{ .addr = 0xd68d3d, .byte = 0xc1 },
		{ .addr = 0xd68d3e, .byte = 0x7c },
		{ .addr = 0xd68d3f, .byte = 0xc4 },
		{ .addr = 0xd68d40, .byte = 0x18 },
		{ .addr = 0xd68d41, .byte = 0xea }
};

static const SST_RamByte divu_final_ram_8[] = {
		{ .addr = 0xd68d3c, .byte = 0x86 },
		{ .addr = 0xd68d3d, .byte = 0xc1 },
		{ .addr = 0xd68d3e, .byte = 0x7c },
		{ .addr = 0xd68d3f, .byte = 0xc4 },
		{ .addr = 0xd68d40, .byte = 0x18 },
		{ .addr = 0xd68d41, .byte = 0xea }
};

static const SST_Transaction divu_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 116 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14060864, .data = 6378, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_9[] = {
		{ .addr = 0x8f9666, .byte = 0x84 },
		{ .addr = 0x8f9667, .byte = 0xf1 },
		{ .addr = 0x8f9668, .byte = 0x85 },
		{ .addr = 0x8f9669, .byte = 0x71 },
		{ .addr = 0x8f966a, .byte = 0xc4 },
		{ .addr = 0x8f966b, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0x63 },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xda },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x02da16, .byte = 0x1e },
		{ .addr = 0x02da17, .byte = 0x55 },
		{ .addr = 0x02da18, .byte = 0x0a },
		{ .addr = 0x02da19, .byte = 0x89 }
};

static const SST_RamByte divu_final_ram_9[] = {
		{ .addr = 0x8f9666, .byte = 0x84 },
		{ .addr = 0x8f9667, .byte = 0xf1 },
		{ .addr = 0x8f9668, .byte = 0x85 },
		{ .addr = 0x8f9669, .byte = 0x71 },
		{ .addr = 0x8f966a, .byte = 0xc4 },
		{ .addr = 0x8f966b, .byte = 0xfd },
		{ .addr = 0x0d610a, .byte = 0x96 },
		{ .addr = 0x0d610b, .byte = 0x68 },
		{ .addr = 0x0d6106, .byte = 0x06 },
		{ .addr = 0x0d6107, .byte = 0x04 },
		{ .addr = 0x0d6108, .byte = 0x00 },
		{ .addr = 0x0d6109, .byte = 0x8f },
		{ .addr = 0x0d6104, .byte = 0x84 },
		{ .addr = 0x0d6105, .byte = 0xf1 },
		{ .addr = 0x0d6102, .byte = 0xcc },
		{ .addr = 0x0d6103, .byte = 0x7d },
		{ .addr = 0x0d60fe, .byte = 0x84 },
		{ .addr = 0x0d60ff, .byte = 0xf1 },
		{ .addr = 0x0d6100, .byte = 0x11 },
		{ .addr = 0x0d6101, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x63 },
		{ .addr = 0x00000d, .byte = 0x02 },
		{ .addr = 0x00000e, .byte = 0xda },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x02da16, .byte = 0x1e },
		{ .addr = 0x02da17, .byte = 0x55 },
		{ .addr = 0x02da18, .byte = 0x0a },
		{ .addr = 0x02da19, .byte = 0x89 }
};

static const SST_Transaction divu_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9410154, .data = 50429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4377724, .data = 8757, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 876810, .data = 38504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 876806, .data = 1540, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 876808, .data = 143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 876804, .data = 34033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 876802, .data = 52349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 876798, .data = 34033, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 876800, .data = 4418, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 55830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 186902, .data = 7765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 186904, .data = 2697, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_10[] = {
		{ .addr = 0x9e8646, .byte = 0x8a },
		{ .addr = 0x9e8647, .byte = 0xfa },
		{ .addr = 0x9e8648, .byte = 0x49 },
		{ .addr = 0x9e8649, .byte = 0xae },
		{ .addr = 0x9e864a, .byte = 0x36 },
		{ .addr = 0x9e864b, .byte = 0x7d },
		{ .addr = 0x9ecff6, .byte = 0x8a },
		{ .addr = 0x9ecff7, .byte = 0xf1 },
		{ .addr = 0x9e864c, .byte = 0x95 },
		{ .addr = 0x9e864d, .byte = 0x79 }
};

static const SST_RamByte divu_final_ram_10[] = {
		{ .addr = 0x9e8646, .byte = 0x8a },
		{ .addr = 0x9e8647, .byte = 0xfa },
		{ .addr = 0x9e8648, .byte = 0x49 },
		{ .addr = 0x9e8649, .byte = 0xae },
		{ .addr = 0x9e864a, .byte = 0x36 },
		{ .addr = 0x9e864b, .byte = 0x7d },
		{ .addr = 0x9ecff6, .byte = 0x8a },
		{ .addr = 0x9ecff7, .byte = 0xf1 },
		{ .addr = 0x9e864c, .byte = 0x95 },
		{ .addr = 0x9e864d, .byte = 0x79 }
};

static const SST_Transaction divu_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10389066, .data = 13949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10407926, .data = 35569, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10389068, .data = 38265, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_11[] = {
		{ .addr = 0xdd147e, .byte = 0x82 },
		{ .addr = 0xdd147f, .byte = 0xd4 },
		{ .addr = 0xdd1480, .byte = 0x53 },
		{ .addr = 0xdd1481, .byte = 0xc6 },
		{ .addr = 0xde674e, .byte = 0xef },
		{ .addr = 0xde674f, .byte = 0x72 },
		{ .addr = 0xdd1482, .byte = 0x77 },
		{ .addr = 0xdd1483, .byte = 0xef }
};

static const SST_RamByte divu_final_ram_11[] = {
		{ .addr = 0xdd147e, .byte = 0x82 },
		{ .addr = 0xdd147f, .byte = 0xd4 },
		{ .addr = 0xdd1480, .byte = 0x53 },
		{ .addr = 0xdd1481, .byte = 0xc6 },
		{ .addr = 0xde674e, .byte = 0xef },
		{ .addr = 0xde674f, .byte = 0x72 },
		{ .addr = 0xdd1482, .byte = 0x77 },
		{ .addr = 0xdd1483, .byte = 0xef }
};

static const SST_Transaction divu_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14575438, .data = 61298, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14488706, .data = 30703, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_12[] = {
		{ .addr = 0x169b38, .byte = 0x8c },
		{ .addr = 0x169b39, .byte = 0xec },
		{ .addr = 0x169b3a, .byte = 0x57 },
		{ .addr = 0x169b3b, .byte = 0xed },
		{ .addr = 0x169b3c, .byte = 0x5f },
		{ .addr = 0x169b3d, .byte = 0x4f },
		{ .addr = 0xcce562, .byte = 0xdf },
		{ .addr = 0xcce563, .byte = 0xd4 },
		{ .addr = 0x169b3e, .byte = 0x76 },
		{ .addr = 0x169b3f, .byte = 0xd0 }
};

static const SST_RamByte divu_final_ram_12[] = {
		{ .addr = 0x169b38, .byte = 0x8c },
		{ .addr = 0x169b39, .byte = 0xec },
		{ .addr = 0x169b3a, .byte = 0x57 },
		{ .addr = 0x169b3b, .byte = 0xed },
		{ .addr = 0x169b3c, .byte = 0x5f },
		{ .addr = 0x169b3d, .byte = 0x4f },
		{ .addr = 0xcce562, .byte = 0xdf },
		{ .addr = 0xcce563, .byte = 0xd4 },
		{ .addr = 0x169b3e, .byte = 0x76 },
		{ .addr = 0x169b3f, .byte = 0xd0 }
};

static const SST_Transaction divu_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1481532, .data = 24399, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13428066, .data = 57300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1481534, .data = 30416, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_13[] = {
		{ .addr = 0xb79160, .byte = 0x88 },
		{ .addr = 0xb79161, .byte = 0xe9 },
		{ .addr = 0xb79162, .byte = 0xcc },
		{ .addr = 0xb79163, .byte = 0x23 },
		{ .addr = 0xb79164, .byte = 0x7c },
		{ .addr = 0xb79165, .byte = 0x38 },
		{ .addr = 0xa825c2, .byte = 0xe0 },
		{ .addr = 0xa825c3, .byte = 0x84 },
		{ .addr = 0xb79166, .byte = 0x0b },
		{ .addr = 0xb79167, .byte = 0xc3 }
};

static const SST_RamByte divu_final_ram_13[] = {
		{ .addr = 0xb79160, .byte = 0x88 },
		{ .addr = 0xb79161, .byte = 0xe9 },
		{ .addr = 0xb79162, .byte = 0xcc },
		{ .addr = 0xb79163, .byte = 0x23 },
		{ .addr = 0xb79164, .byte = 0x7c },
		{ .addr = 0xb79165, .byte = 0x38 },
		{ .addr = 0xa825c2, .byte = 0xe0 },
		{ .addr = 0xa825c3, .byte = 0x84 },
		{ .addr = 0xb79166, .byte = 0x0b },
		{ .addr = 0xb79167, .byte = 0xc3 }
};

static const SST_Transaction divu_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12030308, .data = 31800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11019714, .data = 57476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12030310, .data = 3011, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_14[] = {
		{ .addr = 0x247ea2, .byte = 0x84 },
		{ .addr = 0x247ea3, .byte = 0xdc },
		{ .addr = 0x247ea4, .byte = 0x9d },
		{ .addr = 0x247ea5, .byte = 0xee },
		{ .addr = 0x7e96c6, .byte = 0x26 },
		{ .addr = 0x7e96c7, .byte = 0xf2 },
		{ .addr = 0x247ea6, .byte = 0xe4 },
		{ .addr = 0x247ea7, .byte = 0x10 }
};

static const SST_RamByte divu_final_ram_14[] = {
		{ .addr = 0x247ea2, .byte = 0x84 },
		{ .addr = 0x247ea3, .byte = 0xdc },
		{ .addr = 0x247ea4, .byte = 0x9d },
		{ .addr = 0x247ea5, .byte = 0xee },
		{ .addr = 0x7e96c6, .byte = 0x26 },
		{ .addr = 0x7e96c7, .byte = 0xf2 },
		{ .addr = 0x247ea6, .byte = 0xe4 },
		{ .addr = 0x247ea7, .byte = 0x10 }
};

static const SST_Transaction divu_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8296134, .data = 9970, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2391718, .data = 58384, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_15[] = {
		{ .addr = 0x66706a, .byte = 0x86 },
		{ .addr = 0x66706b, .byte = 0xfc },
		{ .addr = 0x66706c, .byte = 0x80 },
		{ .addr = 0x66706d, .byte = 0x40 },
		{ .addr = 0x66706e, .byte = 0x54 },
		{ .addr = 0x66706f, .byte = 0xe1 },
		{ .addr = 0x667070, .byte = 0x90 },
		{ .addr = 0x667071, .byte = 0x02 }
};

static const SST_RamByte divu_final_ram_15[] = {
		{ .addr = 0x66706a, .byte = 0x86 },
		{ .addr = 0x66706b, .byte = 0xfc },
		{ .addr = 0x66706c, .byte = 0x80 },
		{ .addr = 0x66706d, .byte = 0x40 },
		{ .addr = 0x66706e, .byte = 0x54 },
		{ .addr = 0x66706f, .byte = 0xe1 },
		{ .addr = 0x667070, .byte = 0x90 },
		{ .addr = 0x667071, .byte = 0x02 }
};

static const SST_Transaction divu_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6713454, .data = 21729, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 112 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6713456, .data = 36866, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_16[] = {
		{ .addr = 0x66a67c, .byte = 0x86 },
		{ .addr = 0x66a67d, .byte = 0xc1 },
		{ .addr = 0x66a67e, .byte = 0xe6 },
		{ .addr = 0x66a67f, .byte = 0x9a },
		{ .addr = 0x66a680, .byte = 0xed },
		{ .addr = 0x66a681, .byte = 0x49 }
};

static const SST_RamByte divu_final_ram_16[] = {
		{ .addr = 0x66a67c, .byte = 0x86 },
		{ .addr = 0x66a67d, .byte = 0xc1 },
		{ .addr = 0x66a67e, .byte = 0xe6 },
		{ .addr = 0x66a67f, .byte = 0x9a },
		{ .addr = 0x66a680, .byte = 0xed },
		{ .addr = 0x66a681, .byte = 0x49 }
};

static const SST_Transaction divu_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 112 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6727296, .data = 60745, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_17[] = {
		{ .addr = 0xf8b2be, .byte = 0x8c },
		{ .addr = 0xf8b2bf, .byte = 0xe3 },
		{ .addr = 0xf8b2c0, .byte = 0x15 },
		{ .addr = 0xf8b2c1, .byte = 0x28 },
		{ .addr = 0x69f528, .byte = 0xf0 },
		{ .addr = 0x69f529, .byte = 0x0e },
		{ .addr = 0xf8b2c2, .byte = 0xb4 },
		{ .addr = 0xf8b2c3, .byte = 0x32 }
};

static const SST_RamByte divu_final_ram_17[] = {
		{ .addr = 0xf8b2be, .byte = 0x8c },
		{ .addr = 0xf8b2bf, .byte = 0xe3 },
		{ .addr = 0xf8b2c0, .byte = 0x15 },
		{ .addr = 0xf8b2c1, .byte = 0x28 },
		{ .addr = 0x69f528, .byte = 0xf0 },
		{ .addr = 0x69f529, .byte = 0x0e },
		{ .addr = 0xf8b2c2, .byte = 0xb4 },
		{ .addr = 0xf8b2c3, .byte = 0x32 }
};

static const SST_Transaction divu_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6944040, .data = 61454, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 108 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16298690, .data = 46130, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_18[] = {
		{ .addr = 0xaccf22, .byte = 0x82 },
		{ .addr = 0xaccf23, .byte = 0xea },
		{ .addr = 0xaccf24, .byte = 0x74 },
		{ .addr = 0xaccf25, .byte = 0x61 },
		{ .addr = 0xaccf26, .byte = 0x1e },
		{ .addr = 0xaccf27, .byte = 0x67 },
		{ .addr = 0x6a3b04, .byte = 0x9a },
		{ .addr = 0x6a3b05, .byte = 0x06 },
		{ .addr = 0xaccf28, .byte = 0xc8 },
		{ .addr = 0xaccf29, .byte = 0xb9 }
};

static const SST_RamByte divu_final_ram_18[] = {
		{ .addr = 0xaccf22, .byte = 0x82 },
		{ .addr = 0xaccf23, .byte = 0xea },
		{ .addr = 0xaccf24, .byte = 0x74 },
		{ .addr = 0xaccf25, .byte = 0x61 },
		{ .addr = 0xaccf26, .byte = 0x1e },
		{ .addr = 0xaccf27, .byte = 0x67 },
		{ .addr = 0x6a3b04, .byte = 0x9a },
		{ .addr = 0x6a3b05, .byte = 0x06 },
		{ .addr = 0xaccf28, .byte = 0xc8 },
		{ .addr = 0xaccf29, .byte = 0xb9 }
};

static const SST_Transaction divu_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11325222, .data = 7783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6961924, .data = 39430, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11325224, .data = 51385, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_19[] = {
		{ .addr = 0x1fbb36, .byte = 0x82 },
		{ .addr = 0x1fbb37, .byte = 0xe7 },
		{ .addr = 0x1fbb38, .byte = 0xff },
		{ .addr = 0x1fbb39, .byte = 0xf3 },
		{ .addr = 0x1d02c6, .byte = 0x17 },
		{ .addr = 0x1d02c7, .byte = 0x81 },
		{ .addr = 0x1fbb3a, .byte = 0xc1 },
		{ .addr = 0x1fbb3b, .byte = 0x3f }
};

static const SST_RamByte divu_final_ram_19[] = {
		{ .addr = 0x1fbb36, .byte = 0x82 },
		{ .addr = 0x1fbb37, .byte = 0xe7 },
		{ .addr = 0x1fbb38, .byte = 0xff },
		{ .addr = 0x1fbb39, .byte = 0xf3 },
		{ .addr = 0x1d02c6, .byte = 0x17 },
		{ .addr = 0x1d02c7, .byte = 0x81 },
		{ .addr = 0x1fbb3a, .byte = 0xc1 },
		{ .addr = 0x1fbb3b, .byte = 0x3f }
};

static const SST_Transaction divu_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1901254, .data = 6017, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 110 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2079546, .data = 49471, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_20[] = {
		{ .addr = 0x80ceec, .byte = 0x8c },
		{ .addr = 0x80ceed, .byte = 0xc3 },
		{ .addr = 0x80ceee, .byte = 0x00 },
		{ .addr = 0x80ceef, .byte = 0x58 },
		{ .addr = 0x80cef0, .byte = 0x58 },
		{ .addr = 0x80cef1, .byte = 0xc4 }
};

static const SST_RamByte divu_final_ram_20[] = {
		{ .addr = 0x80ceec, .byte = 0x8c },
		{ .addr = 0x80ceed, .byte = 0xc3 },
		{ .addr = 0x80ceee, .byte = 0x00 },
		{ .addr = 0x80ceef, .byte = 0x58 },
		{ .addr = 0x80cef0, .byte = 0x58 },
		{ .addr = 0x80cef1, .byte = 0xc4 }
};

static const SST_Transaction divu_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 110 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8441584, .data = 22724, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_21[] = {
		{ .addr = 0x338958, .byte = 0x86 },
		{ .addr = 0x338959, .byte = 0xf3 },
		{ .addr = 0x33895a, .byte = 0xba },
		{ .addr = 0x33895b, .byte = 0x87 },
		{ .addr = 0x33895c, .byte = 0x26 },
		{ .addr = 0x33895d, .byte = 0xc3 },
		{ .addr = 0x00000c, .byte = 0x97 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0x18 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0xc818e2, .byte = 0x15 },
		{ .addr = 0xc818e3, .byte = 0xfd },
		{ .addr = 0xc818e4, .byte = 0xc8 },
		{ .addr = 0xc818e5, .byte = 0x27 }
};

static const SST_RamByte divu_final_ram_21[] = {
		{ .addr = 0x338958, .byte = 0x86 },
		{ .addr = 0x338959, .byte = 0xf3 },
		{ .addr = 0x33895a, .byte = 0xba },
		{ .addr = 0x33895b, .byte = 0x87 },
		{ .addr = 0x33895c, .byte = 0x26 },
		{ .addr = 0x33895d, .byte = 0xc3 },
		{ .addr = 0x82b85e, .byte = 0x89 },
		{ .addr = 0x82b85f, .byte = 0x5a },
		{ .addr = 0x82b85a, .byte = 0x83 },
		{ .addr = 0x82b85b, .byte = 0x06 },
		{ .addr = 0x82b85c, .byte = 0x00 },
		{ .addr = 0x82b85d, .byte = 0x33 },
		{ .addr = 0x82b858, .byte = 0x86 },
		{ .addr = 0x82b859, .byte = 0xf3 },
		{ .addr = 0x82b856, .byte = 0x9d },
		{ .addr = 0x82b857, .byte = 0x59 },
		{ .addr = 0x82b852, .byte = 0x86 },
		{ .addr = 0x82b853, .byte = 0xf1 },
		{ .addr = 0x82b854, .byte = 0xc3 },
		{ .addr = 0x82b855, .byte = 0x10 },
		{ .addr = 0x00000c, .byte = 0x97 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0x18 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0xc818e2, .byte = 0x15 },
		{ .addr = 0xc818e3, .byte = 0xfd },
		{ .addr = 0xc818e4, .byte = 0xc8 },
		{ .addr = 0xc818e5, .byte = 0x27 }
};

static const SST_Transaction divu_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3377500, .data = 9923, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1088856, .data = 56865, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8566878, .data = 35162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8566874, .data = 33542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8566876, .data = 51, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8566872, .data = 34547, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8566870, .data = 40281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8566866, .data = 34545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8566868, .data = 49936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13113570, .data = 5629, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13113572, .data = 51239, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_22[] = {
		{ .addr = 0x046be0, .byte = 0x80 },
		{ .addr = 0x046be1, .byte = 0xdf },
		{ .addr = 0x046be2, .byte = 0x98 },
		{ .addr = 0x046be3, .byte = 0x5b },
		{ .addr = 0xe4e148, .byte = 0x10 },
		{ .addr = 0xe4e149, .byte = 0xde },
		{ .addr = 0x046be4, .byte = 0xed },
		{ .addr = 0x046be5, .byte = 0x59 }
};

static const SST_RamByte divu_final_ram_22[] = {
		{ .addr = 0x046be0, .byte = 0x80 },
		{ .addr = 0x046be1, .byte = 0xdf },
		{ .addr = 0x046be2, .byte = 0x98 },
		{ .addr = 0x046be3, .byte = 0x5b },
		{ .addr = 0xe4e148, .byte = 0x10 },
		{ .addr = 0xe4e149, .byte = 0xde },
		{ .addr = 0x046be4, .byte = 0xed },
		{ .addr = 0x046be5, .byte = 0x59 }
};

static const SST_Transaction divu_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14999880, .data = 4318, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 289764, .data = 60761, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_23[] = {
		{ .addr = 0x119700, .byte = 0x8a },
		{ .addr = 0x119701, .byte = 0xef },
		{ .addr = 0x119702, .byte = 0x1c },
		{ .addr = 0x119703, .byte = 0x03 },
		{ .addr = 0x119704, .byte = 0xe8 },
		{ .addr = 0x119705, .byte = 0x4d },
		{ .addr = 0x00000c, .byte = 0x13 },
		{ .addr = 0x00000d, .byte = 0xbc },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0xbc521a, .byte = 0x0f },
		{ .addr = 0xbc521b, .byte = 0x40 },
		{ .addr = 0xbc521c, .byte = 0xc0 },
		{ .addr = 0xbc521d, .byte = 0x52 }
};

static const SST_RamByte divu_final_ram_23[] = {
		{ .addr = 0x119700, .byte = 0x8a },
		{ .addr = 0x119701, .byte = 0xef },
		{ .addr = 0x119702, .byte = 0x1c },
		{ .addr = 0x119703, .byte = 0x03 },
		{ .addr = 0x119704, .byte = 0xe8 },
		{ .addr = 0x119705, .byte = 0x4d },
		{ .addr = 0xe0269e, .byte = 0x97 },
		{ .addr = 0xe0269f, .byte = 0x02 },
		{ .addr = 0xe0269a, .byte = 0x27 },
		{ .addr = 0xe0269b, .byte = 0x14 },
		{ .addr = 0xe0269c, .byte = 0x00 },
		{ .addr = 0xe0269d, .byte = 0x11 },
		{ .addr = 0xe02698, .byte = 0x8a },
		{ .addr = 0xe02699, .byte = 0xef },
		{ .addr = 0xe02696, .byte = 0x42 },
		{ .addr = 0xe02697, .byte = 0xa3 },
		{ .addr = 0xe02692, .byte = 0x8a },
		{ .addr = 0xe02693, .byte = 0xf5 },
		{ .addr = 0xe02694, .byte = 0x00 },
		{ .addr = 0xe02695, .byte = 0xe0 },
		{ .addr = 0x00000c, .byte = 0x13 },
		{ .addr = 0x00000d, .byte = 0xbc },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0x1a },
		{ .addr = 0xbc521a, .byte = 0x0f },
		{ .addr = 0xbc521b, .byte = 0x40 },
		{ .addr = 0xbc521c, .byte = 0xc0 },
		{ .addr = 0xbc521d, .byte = 0x52 }
};

static const SST_Transaction divu_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1152772, .data = 59469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14697122, .data = 42506, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14689950, .data = 38658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14689946, .data = 10004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14689948, .data = 17, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14689944, .data = 35567, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14689942, .data = 17059, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14689938, .data = 35573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14689940, .data = 224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12341786, .data = 3904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12341788, .data = 49234, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_24[] = {
		{ .addr = 0x12c3ca, .byte = 0x86 },
		{ .addr = 0x12c3cb, .byte = 0xec },
		{ .addr = 0x12c3cc, .byte = 0x1b },
		{ .addr = 0x12c3cd, .byte = 0xc4 },
		{ .addr = 0x12c3ce, .byte = 0x25 },
		{ .addr = 0x12c3cf, .byte = 0x6b },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xdc },
		{ .addr = 0x00000e, .byte = 0x0d },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0xdc0d24, .byte = 0x84 },
		{ .addr = 0xdc0d25, .byte = 0xd8 },
		{ .addr = 0xdc0d26, .byte = 0x34 },
		{ .addr = 0xdc0d27, .byte = 0xec }
};

static const SST_RamByte divu_final_ram_24[] = {
		{ .addr = 0x12c3ca, .byte = 0x86 },
		{ .addr = 0x12c3cb, .byte = 0xec },
		{ .addr = 0x12c3cc, .byte = 0x1b },
		{ .addr = 0x12c3cd, .byte = 0xc4 },
		{ .addr = 0x12c3ce, .byte = 0x25 },
		{ .addr = 0x12c3cf, .byte = 0x6b },
		{ .addr = 0x544640, .byte = 0xc3 },
		{ .addr = 0x544641, .byte = 0xcc },
		{ .addr = 0x54463c, .byte = 0x02 },
		{ .addr = 0x54463d, .byte = 0x1e },
		{ .addr = 0x54463e, .byte = 0x00 },
		{ .addr = 0x54463f, .byte = 0x12 },
		{ .addr = 0x54463a, .byte = 0x86 },
		{ .addr = 0x54463b, .byte = 0xec },
		{ .addr = 0x544638, .byte = 0x53 },
		{ .addr = 0x544639, .byte = 0xd5 },
		{ .addr = 0x544634, .byte = 0x86 },
		{ .addr = 0x544635, .byte = 0xf1 },
		{ .addr = 0x544636, .byte = 0xca },
		{ .addr = 0x544637, .byte = 0x86 },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xdc },
		{ .addr = 0x00000e, .byte = 0x0d },
		{ .addr = 0x00000f, .byte = 0x24 },
		{ .addr = 0xdc0d24, .byte = 0x84 },
		{ .addr = 0xdc0d25, .byte = 0xd8 },
		{ .addr = 0xdc0d26, .byte = 0x34 },
		{ .addr = 0xdc0d27, .byte = 0xec }
};

static const SST_Transaction divu_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1229774, .data = 9579, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8803284, .data = 19524, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5523008, .data = 50124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5523004, .data = 542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5523006, .data = 18, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5523002, .data = 34540, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5523000, .data = 21461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5522996, .data = 34545, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5522998, .data = 51846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8412, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 3364, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14421284, .data = 34008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14421286, .data = 13548, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_25[] = {
		{ .addr = 0x788a5a, .byte = 0x8e },
		{ .addr = 0x788a5b, .byte = 0xe9 },
		{ .addr = 0x788a5c, .byte = 0xdf },
		{ .addr = 0x788a5d, .byte = 0xe3 },
		{ .addr = 0x788a5e, .byte = 0x11 },
		{ .addr = 0x788a5f, .byte = 0x3d },
		{ .addr = 0xe49ae4, .byte = 0x09 },
		{ .addr = 0xe49ae5, .byte = 0xdd },
		{ .addr = 0x788a60, .byte = 0x65 },
		{ .addr = 0x788a61, .byte = 0xce }
};

static const SST_RamByte divu_final_ram_25[] = {
		{ .addr = 0x788a5a, .byte = 0x8e },
		{ .addr = 0x788a5b, .byte = 0xe9 },
		{ .addr = 0x788a5c, .byte = 0xdf },
		{ .addr = 0x788a5d, .byte = 0xe3 },
		{ .addr = 0x788a5e, .byte = 0x11 },
		{ .addr = 0x788a5f, .byte = 0x3d },
		{ .addr = 0xe49ae4, .byte = 0x09 },
		{ .addr = 0xe49ae5, .byte = 0xdd },
		{ .addr = 0x788a60, .byte = 0x65 },
		{ .addr = 0x788a61, .byte = 0xce }
};

static const SST_Transaction divu_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7899742, .data = 4413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14981860, .data = 2525, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7899744, .data = 26062, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_26[] = {
		{ .addr = 0xa031b8, .byte = 0x80 },
		{ .addr = 0xa031b9, .byte = 0xc7 },
		{ .addr = 0xa031ba, .byte = 0x42 },
		{ .addr = 0xa031bb, .byte = 0x3f },
		{ .addr = 0xa031bc, .byte = 0x0e },
		{ .addr = 0xa031bd, .byte = 0xba }
};

static const SST_RamByte divu_final_ram_26[] = {
		{ .addr = 0xa031b8, .byte = 0x80 },
		{ .addr = 0xa031b9, .byte = 0xc7 },
		{ .addr = 0xa031ba, .byte = 0x42 },
		{ .addr = 0xa031bb, .byte = 0x3f },
		{ .addr = 0xa031bc, .byte = 0x0e },
		{ .addr = 0xa031bd, .byte = 0xba }
};

static const SST_Transaction divu_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10498492, .data = 3770, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_27[] = {
		{ .addr = 0x103428, .byte = 0x82 },
		{ .addr = 0x103429, .byte = 0xf1 },
		{ .addr = 0x10342a, .byte = 0x28 },
		{ .addr = 0x10342b, .byte = 0x1d },
		{ .addr = 0x10342c, .byte = 0x70 },
		{ .addr = 0x10342d, .byte = 0xe1 },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x73 },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0x20730c, .byte = 0x2d },
		{ .addr = 0x20730d, .byte = 0xca },
		{ .addr = 0x20730e, .byte = 0x58 },
		{ .addr = 0x20730f, .byte = 0xe2 }
};

static const SST_RamByte divu_final_ram_27[] = {
		{ .addr = 0x103428, .byte = 0x82 },
		{ .addr = 0x103429, .byte = 0xf1 },
		{ .addr = 0x10342a, .byte = 0x28 },
		{ .addr = 0x10342b, .byte = 0x1d },
		{ .addr = 0x10342c, .byte = 0x70 },
		{ .addr = 0x10342d, .byte = 0xe1 },
		{ .addr = 0x1abe02, .byte = 0x34 },
		{ .addr = 0x1abe03, .byte = 0x2a },
		{ .addr = 0x1abdfe, .byte = 0x20 },
		{ .addr = 0x1abdff, .byte = 0x1d },
		{ .addr = 0x1abe00, .byte = 0x00 },
		{ .addr = 0x1abe01, .byte = 0x10 },
		{ .addr = 0x1abdfc, .byte = 0x82 },
		{ .addr = 0x1abdfd, .byte = 0xf1 },
		{ .addr = 0x1abdfa, .byte = 0x4c },
		{ .addr = 0x1abdfb, .byte = 0x09 },
		{ .addr = 0x1abdf6, .byte = 0x82 },
		{ .addr = 0x1abdf7, .byte = 0xf5 },
		{ .addr = 0x1abdf8, .byte = 0xf7 },
		{ .addr = 0x1abdf9, .byte = 0xfc },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0x20 },
		{ .addr = 0x00000e, .byte = 0x73 },
		{ .addr = 0x00000f, .byte = 0x0c },
		{ .addr = 0x20730c, .byte = 0x2d },
		{ .addr = 0x20730d, .byte = 0xca },
		{ .addr = 0x20730e, .byte = 0x58 },
		{ .addr = 0x20730f, .byte = 0xe2 }
};

static const SST_Transaction divu_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1061932, .data = 28897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16534536, .data = 17722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1752578, .data = 13354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1752574, .data = 8221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1752576, .data = 16, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1752572, .data = 33521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1752570, .data = 19465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1752566, .data = 33525, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1752568, .data = 63484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 29452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2126604, .data = 11722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2126606, .data = 22754, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_28[] = {
		{ .addr = 0xd98dd2, .byte = 0x80 },
		{ .addr = 0xd98dd3, .byte = 0xc6 },
		{ .addr = 0xd98dd4, .byte = 0xf8 },
		{ .addr = 0xd98dd5, .byte = 0xb7 },
		{ .addr = 0xd98dd6, .byte = 0x98 },
		{ .addr = 0xd98dd7, .byte = 0x8e }
};

static const SST_RamByte divu_final_ram_28[] = {
		{ .addr = 0xd98dd2, .byte = 0x80 },
		{ .addr = 0xd98dd3, .byte = 0xc6 },
		{ .addr = 0xd98dd4, .byte = 0xf8 },
		{ .addr = 0xd98dd5, .byte = 0xb7 },
		{ .addr = 0xd98dd6, .byte = 0x98 },
		{ .addr = 0xd98dd7, .byte = 0x8e }
};

static const SST_Transaction divu_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14257622, .data = 39054, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_29[] = {
		{ .addr = 0xb19c16, .byte = 0x88 },
		{ .addr = 0xb19c17, .byte = 0xf2 },
		{ .addr = 0xb19c18, .byte = 0xec },
		{ .addr = 0xb19c19, .byte = 0x25 },
		{ .addr = 0xb19c1a, .byte = 0xe6 },
		{ .addr = 0xb19c1b, .byte = 0x6f },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0x78 },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0x7879d6, .byte = 0x9b },
		{ .addr = 0x7879d7, .byte = 0xed },
		{ .addr = 0x7879d8, .byte = 0x93 },
		{ .addr = 0x7879d9, .byte = 0x34 }
};

static const SST_RamByte divu_final_ram_29[] = {
		{ .addr = 0xb19c16, .byte = 0x88 },
		{ .addr = 0xb19c17, .byte = 0xf2 },
		{ .addr = 0xb19c18, .byte = 0xec },
		{ .addr = 0xb19c19, .byte = 0x25 },
		{ .addr = 0xb19c1a, .byte = 0xe6 },
		{ .addr = 0xb19c1b, .byte = 0x6f },
		{ .addr = 0x08b7de, .byte = 0x9c },
		{ .addr = 0x08b7df, .byte = 0x18 },
		{ .addr = 0x08b7da, .byte = 0xa5 },
		{ .addr = 0x08b7db, .byte = 0x1e },
		{ .addr = 0x08b7dc, .byte = 0x00 },
		{ .addr = 0x08b7dd, .byte = 0xb1 },
		{ .addr = 0x08b7d8, .byte = 0x88 },
		{ .addr = 0x08b7d9, .byte = 0xf2 },
		{ .addr = 0x08b7d6, .byte = 0x33 },
		{ .addr = 0x08b7d7, .byte = 0xe9 },
		{ .addr = 0x08b7d2, .byte = 0x88 },
		{ .addr = 0x08b7d3, .byte = 0xf5 },
		{ .addr = 0x08b7d4, .byte = 0xd9 },
		{ .addr = 0x08b7d5, .byte = 0xd0 },
		{ .addr = 0x00000c, .byte = 0xe9 },
		{ .addr = 0x00000d, .byte = 0x78 },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0x7879d6, .byte = 0x9b },
		{ .addr = 0x7879d7, .byte = 0xed },
		{ .addr = 0x7879d8, .byte = 0x93 },
		{ .addr = 0x7879d9, .byte = 0x34 }
};

static const SST_Transaction divu_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11639834, .data = 58991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13644776, .data = 33313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 571358, .data = 39960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 571354, .data = 42270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 571356, .data = 177, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 571352, .data = 35058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 571350, .data = 13289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 571346, .data = 35061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 571348, .data = 55760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 31190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7895510, .data = 39917, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7895512, .data = 37684, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_30[] = {
		{ .addr = 0x8261de, .byte = 0x84 },
		{ .addr = 0x8261df, .byte = 0xc7 },
		{ .addr = 0x8261e0, .byte = 0x8d },
		{ .addr = 0x8261e1, .byte = 0xb5 },
		{ .addr = 0x8261e2, .byte = 0xad },
		{ .addr = 0x8261e3, .byte = 0x4b }
};

static const SST_RamByte divu_final_ram_30[] = {
		{ .addr = 0x8261de, .byte = 0x84 },
		{ .addr = 0x8261df, .byte = 0xc7 },
		{ .addr = 0x8261e0, .byte = 0x8d },
		{ .addr = 0x8261e1, .byte = 0xb5 },
		{ .addr = 0x8261e2, .byte = 0xad },
		{ .addr = 0x8261e3, .byte = 0x4b }
};

static const SST_Transaction divu_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8544738, .data = 44363, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte divu_initial_ram_31[] = {
		{ .addr = 0x6ec29e, .byte = 0x80 },
		{ .addr = 0x6ec29f, .byte = 0xda },
		{ .addr = 0x6ec2a0, .byte = 0x89 },
		{ .addr = 0x6ec2a1, .byte = 0xd6 },
		{ .addr = 0xd09c08, .byte = 0xaf },
		{ .addr = 0xd09c09, .byte = 0x49 },
		{ .addr = 0x6ec2a2, .byte = 0x40 },
		{ .addr = 0x6ec2a3, .byte = 0x4a }
};

static const SST_RamByte divu_final_ram_31[] = {
		{ .addr = 0x6ec29e, .byte = 0x80 },
		{ .addr = 0x6ec29f, .byte = 0xda },
		{ .addr = 0x6ec2a0, .byte = 0x89 },
		{ .addr = 0x6ec2a1, .byte = 0xd6 },
		{ .addr = 0xd09c08, .byte = 0xaf },
		{ .addr = 0xd09c09, .byte = 0x49 },
		{ .addr = 0x6ec2a2, .byte = 0x40 },
		{ .addr = 0x6ec2a3, .byte = 0x4a }
};

static const SST_Transaction divu_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13671432, .data = 44873, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7258786, .data = 16458, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase divu[] = {
	{
		.name = "000 DIVU (xxx).l, D4 88f9",
		.initial = {
			.regs = {
				851875928, 3326892796, 3873463131, 1757372564, 3594990973, 3869244608, 1245250439, 1267479684, 1311392589, 1906478983, 557940564, 4217376967, 2321827578, 133874346, 2055113439, 2144018, 4103512, 8712, 7822936
			},
			.prefetch0 = 35065,
			.prefetch1 = 31639,
			.ram = divu_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				851875928, 3326892796, 3873463131, 1757372564, 3594990973, 3869244608, 1245250439, 1267479684, 1311392589, 1906478983, 557940564, 4217376967, 2321827578, 133874346, 2055113439, 2144018, 4103512, 8714, 7822942
			},
			.prefetch0 = 15709,
			.prefetch1 = 2869,
			.ram = divu_final_ram_0,
			.ram_len = 12,
		},
		.transactions = divu_transactions_0,
		.transactions_len = 5,
		.lenght = 22,
	},
	{
		.name = "001 DIVU (A5), D5 8ad5",
		.initial = {
			.regs = {
				609730385, 4124972423, 3941380105, 3437635874, 3311011862, 3627752998, 624947638, 610104550, 2431684041, 1152173082, 1641989190, 3856323134, 1329014996, 2425903430, 3929361858, 14119398, 8704032, 41216, 2355880
			},
			.prefetch0 = 35541,
			.prefetch1 = 30450,
			.ram = divu_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				609730385, 4124972423, 3941380105, 3437635874, 3311011862, 3627752998, 624947638, 610104550, 2431684041, 1152173082, 1641989190, 3856323134, 1329014996, 2425903430, 3929361858, 14119398, 8704032, 41226, 2355882
			},
			.prefetch0 = 30450,
			.prefetch1 = 22311,
			.ram = divu_final_ram_1,
			.ram_len = 8,
		},
		.transactions = divu_transactions_1,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "002 DIVU (d16, A2), D5 8aea",
		.initial = {
			.regs = {
				2951521726, 2575853730, 792104566, 2044710209, 2015777966, 1938728211, 4213962660, 2464927978, 1976222876, 3810927986, 2512945711, 1964836953, 1724795965, 1249280116, 2016526301, 5246360, 9042904, 8978, 675248
			},
			.prefetch0 = 35562,
			.prefetch1 = 57839,
			.ram = divu_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2951521726, 2575853730, 792104566, 2044710209, 2015777966, 1938728211, 4213962660, 2464927978, 1976222876, 3810927986, 2512945711, 1964836953, 1724795965, 1249280116, 2016526301, 5246360, 9042904, 8986, 675252
			},
			.prefetch0 = 20051,
			.prefetch1 = 58033,
			.ram = divu_final_ram_2,
			.ram_len = 10,
		},
		.transactions = divu_transactions_2,
		.transactions_len = 4,
		.lenght = 18,
	},
	{
		.name = "003 DIVU (A1), D4 88d1",
		.initial = {
			.regs = {
				3762770723, 1056780672, 4239984359, 2100241640, 1368563587, 2825260819, 4264383602, 3843693385, 1657399139, 2057683472, 2750394859, 204610664, 331947729, 504658003, 2194842631, 14020298, 10897534, 514, 16510062
			},
			.prefetch0 = 35025,
			.prefetch1 = 49028,
			.ram = divu_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3762770723, 1056780672, 4239984359, 2100241640, 23359803, 2825260819, 4264383602, 3843693385, 1657399139, 2057683472, 2750394859, 204610664, 331947729, 504658003, 2194842631, 14020298, 10897534, 512, 16510064
			},
			.prefetch0 = 49028,
			.prefetch1 = 9623,
			.ram = divu_final_ram_3,
			.ram_len = 8,
		},
		.transactions = divu_transactions_3,
		.transactions_len = 3,
		.lenght = 114,
	},
	{
		.name = "004 DIVU (d8, A7, Xn), D1 82f7",
		.initial = {
			.regs = {
				2239634401, 24370212, 2566833687, 4201742024, 894346828, 1840195917, 997492150, 49468502, 3425856001, 3164012082, 2545114681, 385467112, 2502374855, 3697909970, 609247201, 7230804, 1571408, 34054, 1125644
			},
			.prefetch0 = 33527,
			.prefetch1 = 27029,
			.ram = divu_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2239634401, 24370212, 2566833687, 4201742024, 894346828, 1840195917, 997492150, 49468502, 3425856001, 3164012082, 2545114681, 385467112, 2502374855, 3697909970, 609247201, 7230804, 1571394, 9478, 3349166108
			},
			.prefetch0 = 33838,
			.prefetch1 = 65005,
			.ram = divu_final_ram_4,
			.ram_len = 28,
		},
		.transactions = divu_transactions_4,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "005 DIVU (A4), D0 80d4",
		.initial = {
			.regs = {
				514834735, 2199462958, 3683214931, 1162535775, 3274045654, 3545769174, 3491846442, 3623572604, 1284934859, 3858639519, 4195214474, 4243208691, 502300429, 928147812, 1790045593, 3516334, 10090738, 33304, 8240408
			},
			.prefetch0 = 32980,
			.prefetch1 = 44688,
			.ram = divu_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				514834735, 2199462958, 3683214931, 1162535775, 3274045654, 3545769174, 3491846442, 3623572604, 1284934859, 3858639519, 4195214474, 4243208691, 502300429, 928147812, 1790045593, 3516334, 10090724, 8728, 1686403084
			},
			.prefetch0 = 25074,
			.prefetch1 = 4675,
			.ram = divu_final_ram_5,
			.ram_len = 26,
		},
		.transactions = divu_transactions_5,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "006 DIVU (d8, A3, Xn), D2 84f3",
		.initial = {
			.regs = {
				760056281, 3823505087, 3567574526, 3730588751, 1676920743, 2001715322, 1790604525, 3201571908, 3134379555, 928418458, 2239451262, 3798954362, 243258452, 2139728641, 2332136334, 795234, 11681678, 41231, 8858514
			},
			.prefetch0 = 34035,
			.prefetch1 = 26671,
			.ram = divu_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				760056281, 3823505087, 3567574526, 3730588751, 1676920743, 2001715322, 1790604525, 3201571908, 3134379555, 928418458, 2239451262, 3798954362, 243258452, 2139728641, 2332136334, 795234, 11681678, 41226, 8858518
			},
			.prefetch0 = 56150,
			.prefetch1 = 19822,
			.ram = divu_final_ram_6,
			.ram_len = 10,
		},
		.transactions = divu_transactions_6,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "007 DIVU D0, D6 8cc0",
		.initial = {
			.regs = {
				746931485, 4067109922, 3499614074, 2649207284, 409849779, 3864235877, 1810374336, 263862328, 3588038064, 1876799960, 334051610, 2944245654, 2868568184, 2388205789, 3010102259, 7072538, 13442676, 42780, 9248234
			},
			.prefetch0 = 36032,
			.prefetch1 = 61337,
			.ram = divu_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				746931485, 4067109922, 3499614074, 2649207284, 409849779, 3864235877, 1810374336, 263862328, 3588038064, 1876799960, 334051610, 2944245654, 2868568184, 2388205789, 3010102259, 7072538, 13442676, 42778, 9248236
			},
			.prefetch0 = 61337,
			.prefetch1 = 8413,
			.ram = divu_final_ram_7,
			.ram_len = 6,
		},
		.transactions = divu_transactions_7,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "008 DIVU D1, D3 86c1",
		.initial = {
			.regs = {
				1289984396, 1603560626, 3911596622, 1388856142, 859219813, 4154872586, 1389043581, 1297887014, 2928967539, 2499797000, 2409801761, 343424664, 3438425903, 1440000165, 526745978, 2181568, 16238748, 29, 14060864
			},
			.prefetch0 = 34497,
			.prefetch1 = 31940,
			.ram = divu_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1289984396, 1603560626, 3911596622, 972345973, 859219813, 4154872586, 1389043581, 1297887014, 2928967539, 2499797000, 2409801761, 343424664, 3438425903, 1440000165, 526745978, 2181568, 16238748, 24, 14060866
			},
			.prefetch0 = 31940,
			.prefetch1 = 6378,
			.ram = divu_final_ram_8,
			.ram_len = 6,
		},
		.transactions = divu_transactions_8,
		.transactions_len = 2,
		.lenght = 120,
	},
	{
		.name = "009 DIVU (d8, A1, Xn), D2 84f1",
		.initial = {
			.regs = {
				3727523479, 2996564515, 1082792405, 1220291699, 142113174, 4257562005, 3171403363, 933015301, 2715589460, 289616056, 1922258658, 3183787075, 3547188655, 3839747612, 279836131, 2445556, 876812, 1540, 9410154
			},
			.prefetch0 = 34033,
			.prefetch1 = 34161,
			.ram = divu_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3727523479, 2996564515, 1082792405, 1220291699, 142113174, 4257562005, 3171403363, 933015301, 2715589460, 289616056, 1922258658, 3183787075, 3547188655, 3839747612, 279836131, 2445556, 876798, 9732, 1661131290
			},
			.prefetch0 = 7765,
			.prefetch1 = 2697,
			.ram = divu_final_ram_9,
			.ram_len = 28,
		},
		.transactions = divu_transactions_9,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "010 DIVU (d16, PC), D5 8afa",
		.initial = {
			.regs = {
				2655653606, 1184193675, 3929068432, 3092221075, 3463386802, 3797502860, 2296623374, 4173003951, 2391857112, 2366306899, 4207083339, 1317162101, 508742133, 876937925, 383327880, 6781646, 1337358, 8730, 10389066
			},
			.prefetch0 = 35578,
			.prefetch1 = 18862,
			.ram = divu_initial_ram_10,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2655653606, 1184193675, 3929068432, 3092221075, 3463386802, 3797502860, 2296623374, 4173003951, 2391857112, 2366306899, 4207083339, 1317162101, 508742133, 876937925, 383327880, 6781646, 1337358, 8730, 10389070
			},
			.prefetch0 = 13949,
			.prefetch1 = 38265,
			.ram = divu_final_ram_10,
			.ram_len = 10,
		},
		.transactions = divu_transactions_10,
		.transactions_len = 4,
		.lenght = 18,
	},
	{
		.name = "011 DIVU (A4), D1 82d4",
		.initial = {
			.regs = {
				1876766677, 4061521534, 2208332884, 2362614335, 273136970, 1836865185, 3301230910, 3038008840, 2829366225, 1431281442, 2881421154, 1596670056, 1390307150, 967249833, 2793707653, 10606976, 15697814, 277, 14488706
			},
			.prefetch0 = 33492,
			.prefetch1 = 21446,
			.ram = divu_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1876766677, 4061521534, 2208332884, 2362614335, 273136970, 1836865185, 3301230910, 3038008840, 2829366225, 1431281442, 2881421154, 1596670056, 1390307150, 967249833, 2793707653, 10606976, 15697814, 282, 14488708
			},
			.prefetch0 = 21446,
			.prefetch1 = 30703,
			.ram = divu_final_ram_11,
			.ram_len = 8,
		},
		.transactions = divu_transactions_11,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "012 DIVU (d16, A4), D6 8cec",
		.initial = {
			.regs = {
				1144077088, 2150523038, 3819492262, 1687442559, 3832037845, 87499614, 2529557082, 811831202, 3008249772, 2659181587, 1701717248, 3896279646, 416058741, 3835080658, 1394932516, 13648952, 1648194, 8223, 1481532
			},
			.prefetch0 = 36076,
			.prefetch1 = 22509,
			.ram = divu_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1144077088, 2150523038, 3819492262, 1687442559, 3832037845, 87499614, 3183914097, 811831202, 3008249772, 2659181587, 1701717248, 3896279646, 416058741, 3835080658, 1394932516, 13648952, 1648194, 8216, 1481536
			},
			.prefetch0 = 24399,
			.prefetch1 = 30416,
			.ram = divu_final_ram_12,
			.ram_len = 10,
		},
		.transactions = divu_transactions_12,
		.transactions_len = 4,
		.lenght = 120,
	},
	{
		.name = "013 DIVU (d16, A1), D4 88e9",
		.initial = {
			.regs = {
				3833602781, 869789137, 1249145080, 4210681341, 4248262537, 3900367796, 4064151468, 1667960001, 294454278, 1168660895, 3592452722, 1364763968, 4045673021, 218170027, 402343580, 6596460, 10825490, 40961, 12030308
			},
			.prefetch0 = 35049,
			.prefetch1 = 52259,
			.ram = divu_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3833602781, 869789137, 1249145080, 4210681341, 4248262537, 3900367796, 4064151468, 1667960001, 294454278, 1168660895, 3592452722, 1364763968, 4045673021, 218170027, 402343580, 6596460, 10825490, 40970, 12030312
			},
			.prefetch0 = 31800,
			.prefetch1 = 3011,
			.ram = divu_final_ram_13,
			.ram_len = 10,
		},
		.transactions = divu_transactions_13,
		.transactions_len = 4,
		.lenght = 18,
	},
	{
		.name = "014 DIVU (A4)+, D2 84dc",
		.initial = {
			.regs = {
				4283870418, 3755728086, 809804448, 4190776405, 4072490427, 2615037382, 3296759795, 292571800, 1116587736, 1730638900, 554966055, 4100947018, 226399942, 1190116459, 4242497666, 12816482, 4939344, 30, 2391718
			},
			.prefetch0 = 34012,
			.prefetch1 = 40430,
			.ram = divu_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4283870418, 3755728086, 809804448, 4190776405, 4072490427, 2615037382, 3296759795, 292571800, 1116587736, 1730638900, 554966055, 4100947018, 226399944, 1190116459, 4242497666, 12816482, 4939344, 26, 2391720
			},
			.prefetch0 = 40430,
			.prefetch1 = 58384,
			.ram = divu_final_ram_14,
			.ram_len = 8,
		},
		.transactions = divu_transactions_14,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "015 DIVU #, D3 86fc",
		.initial = {
			.regs = {
				2101669456, 1044030798, 480484424, 335131099, 2980818062, 1589966792, 3917855465, 534018477, 2115352440, 1179285648, 133561866, 986044456, 1385834585, 1371732570, 1268470266, 10434682, 9623906, 1823, 6713454
			},
			.prefetch0 = 34556,
			.prefetch1 = 32832,
			.ram = divu_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2101669456, 1044030798, 480484424, 974858207, 2980818062, 1589966792, 3917855465, 534018477, 2115352440, 1179285648, 133561866, 986044456, 1385834585, 1371732570, 1268470266, 10434682, 9623906, 1808, 6713458
			},
			.prefetch0 = 21729,
			.prefetch1 = 36866,
			.ram = divu_final_ram_15,
			.ram_len = 8,
		},
		.transactions = divu_transactions_15,
		.transactions_len = 3,
		.lenght = 120,
	},
	{
		.name = "016 DIVU D1, D3 86c1",
		.initial = {
			.regs = {
				1263405911, 3224270557, 1665850346, 840916061, 1314458269, 1643329254, 2717668052, 1810781369, 3932910352, 262762272, 2429867423, 3325652733, 1694428178, 4266645445, 412219418, 15670342, 4864992, 41229, 6727296
			},
			.prefetch0 = 34497,
			.prefetch1 = 59034,
			.ram = divu_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1263405911, 3224270557, 1665850346, 697723891, 1314458269, 1643329254, 2717668052, 1810781369, 3932910352, 262762272, 2429867423, 3325652733, 1694428178, 4266645445, 412219418, 15670342, 4864992, 41216, 6727298
			},
			.prefetch0 = 59034,
			.prefetch1 = 60745,
			.ram = divu_final_ram_16,
			.ram_len = 6,
		},
		.transactions = divu_transactions_16,
		.transactions_len = 2,
		.lenght = 116,
	},
	{
		.name = "017 DIVU -(A3), D6 8ce3",
		.initial = {
			.regs = {
				2445348413, 2115677995, 3614206827, 2737128618, 2094896589, 756093958, 288520973, 722828615, 3889533322, 3953771109, 2847396612, 1416230186, 3950871573, 4129592256, 1888498671, 11539212, 6400314, 8451, 16298690
			},
			.prefetch0 = 36067,
			.prefetch1 = 5416,
			.ram = divu_initial_ram_17,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2445348413, 2115677995, 3614206827, 2737128618, 2094896589, 756093958, 3663270486, 722828615, 3889533322, 3953771109, 2847396612, 1416230184, 3950871573, 4129592256, 1888498671, 11539212, 6400314, 8448, 16298692
			},
			.prefetch0 = 5416,
			.prefetch1 = 46130,
			.ram = divu_final_ram_17,
			.ram_len = 8,
		},
		.transactions = divu_transactions_17,
		.transactions_len = 4,
		.lenght = 118,
	},
	{
		.name = "018 DIVU (d16, A2), D1 82ea",
		.initial = {
			.regs = {
				3567643420, 3510046692, 540067577, 630418048, 1963974144, 2690534253, 1598904990, 638339439, 252471415, 989548961, 1651099299, 523564802, 2546395189, 537274869, 2883724583, 14279250, 10556760, 1796, 11325222
			},
			.prefetch0 = 33514,
			.prefetch1 = 29793,
			.ram = divu_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3567643420, 3510046692, 540067577, 630418048, 1963974144, 2690534253, 1598904990, 638339439, 252471415, 989548961, 1651099299, 523564802, 2546395189, 537274869, 2883724583, 14279250, 10556760, 1802, 11325226
			},
			.prefetch0 = 7783,
			.prefetch1 = 51385,
			.ram = divu_final_ram_18,
			.ram_len = 10,
		},
		.transactions = divu_transactions_18,
		.transactions_len = 4,
		.lenght = 18,
	},
	{
		.name = "019 DIVU -(A7), D1 82e7",
		.initial = {
			.regs = {
				3919410623, 385752782, 4281873749, 2908994480, 2343659212, 2891635226, 1059511515, 707952366, 2020385577, 695765368, 2801057977, 1195966990, 1538946362, 1672317198, 2777022375, 16271170, 1901256, 9479, 2079546
			},
			.prefetch0 = 33511,
			.prefetch1 = 65523,
			.ram = divu_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3919410623, 190904942, 4281873749, 2908994480, 2343659212, 2891635226, 1059511515, 707952366, 2020385577, 695765368, 2801057977, 1195966990, 1538946362, 1672317198, 2777022375, 16271170, 1901254, 9480, 2079548
			},
			.prefetch0 = 65523,
			.prefetch1 = 49471,
			.ram = divu_final_ram_19,
			.ram_len = 8,
		},
		.transactions = divu_transactions_19,
		.transactions_len = 4,
		.lenght = 120,
	},
	{
		.name = "020 DIVU D3, D6 8cc3",
		.initial = {
			.regs = {
				4169219411, 1215983688, 1824250734, 89381689, 2472802007, 96365057, 3567064540, 4009657762, 1203786048, 4257014138, 1475968768, 1843627407, 1490723550, 4294354781, 503878182, 3685904, 2134968, 769, 8441584
			},
			.prefetch0 = 36035,
			.prefetch1 = 88,
			.ram = divu_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4169219411, 1215983688, 1824250734, 89381689, 2472802007, 96365057, 903149640, 4009657762, 1203786048, 4257014138, 1475968768, 1843627407, 1490723550, 4294354781, 503878182, 3685904, 2134968, 776, 8441586
			},
			.prefetch0 = 88,
			.prefetch1 = 22724,
			.ram = divu_final_ram_20,
			.ram_len = 6,
		},
		.transactions = divu_transactions_20,
		.transactions_len = 2,
		.lenght = 114,
	},
	{
		.name = "021 DIVU (d8, A3, Xn), D3 86f3",
		.initial = {
			.regs = {
				2124417402, 3474553796, 4238007699, 2049942583, 1567744815, 2726987616, 813861107, 2682197752, 710331521, 895248560, 1761173287, 3783806697, 1787130729, 497875167, 506354973, 15727388, 8566880, 33542, 3377500
			},
			.prefetch0 = 34547,
			.prefetch1 = 47751,
			.ram = divu_initial_ram_21,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2124417402, 3474553796, 4238007699, 2049942583, 1567744815, 2726987616, 813861107, 2682197752, 710331521, 895248560, 1761173287, 3783806697, 1787130729, 497875167, 506354973, 15727388, 8566866, 8966, 2546473190
			},
			.prefetch0 = 5629,
			.prefetch1 = 51239,
			.ram = divu_final_ram_21,
			.ram_len = 28,
		},
		.transactions = divu_transactions_21,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "022 DIVU (A7)+, D0 80df",
		.initial = {
			.regs = {
				1482129711, 3314912703, 201420834, 3366367453, 1612085005, 325607918, 3169926627, 3928804785, 3365761524, 1024690133, 2559017214, 2567268152, 1127754357, 3467816370, 2384518059, 14999880, 5105504, 531, 289764
			},
			.prefetch0 = 32991,
			.prefetch1 = 39003,
			.ram = divu_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1482129711, 3314912703, 201420834, 3366367453, 1612085005, 325607918, 3169926627, 3928804785, 3365761524, 1024690133, 2559017214, 2567268152, 1127754357, 3467816370, 2384518059, 14999882, 5105504, 538, 289766
			},
			.prefetch0 = 39003,
			.prefetch1 = 60761,
			.ram = divu_final_ram_22,
			.ram_len = 8,
		},
		.transactions = divu_transactions_22,
		.transactions_len = 3,
		.lenght = 14,
	},
	{
		.name = "023 DIVU (d16, A7), D5 8aef",
		.initial = {
			.regs = {
				3236769607, 802575768, 561047311, 164426844, 3208747492, 984755613, 256956887, 3080006128, 1876760608, 228970313, 1136674279, 1386212105, 3919829832, 355486791, 882864136, 4602696, 14689952, 10004, 1152772
			},
			.prefetch0 = 35567,
			.prefetch1 = 7171,
			.ram = divu_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3236769607, 802575768, 561047311, 164426844, 3208747492, 984755613, 256956887, 3080006128, 1876760608, 228970313, 1136674279, 1386212105, 3919829832, 355486791, 882864136, 4602696, 14689938, 10004, 331108894
			},
			.prefetch0 = 3904,
			.prefetch1 = 49234,
			.ram = divu_final_ram_23,
			.ram_len = 28,
		},
		.transactions = divu_transactions_23,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "024 DIVU (d16, A4), D3 86ec",
		.initial = {
			.regs = {
				2872421418, 2804322077, 2724855312, 3476051646, 2751313109, 677970056, 3890328611, 2216323477, 3018905489, 1618389795, 2677815718, 3064646591, 3397793809, 1753710923, 3947661604, 10025122, 5523010, 542, 1229774
			},
			.prefetch0 = 34540,
			.prefetch1 = 7108,
			.ram = divu_initial_ram_24,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2872421418, 2804322077, 2724855312, 3476051646, 2751313109, 677970056, 3890328611, 2216323477, 3018905489, 1618389795, 2677815718, 3064646591, 3397793809, 1753710923, 3947661604, 10025122, 5522996, 8734, 551292200
			},
			.prefetch0 = 34008,
			.prefetch1 = 13548,
			.ram = divu_final_ram_24,
			.ram_len = 28,
		},
		.transactions = divu_transactions_24,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "025 DIVU (d16, A1), D7 8ee9",
		.initial = {
			.regs = {
				2663170713, 228530244, 2971127574, 1598717530, 263556741, 2924800409, 338519450, 1032606608, 3976981336, 3622091521, 1371331225, 3842207365, 3677229507, 3004359485, 2813223305, 6580204, 7144618, 515, 7899742
			},
			.prefetch0 = 36585,
			.prefetch1 = 57315,
			.ram = divu_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2663170713, 228530244, 2971127574, 1598717530, 263556741, 2924800409, 338519450, 1032606608, 3976981336, 3622091521, 1371331225, 3842207365, 3677229507, 3004359485, 2813223305, 6580204, 7144618, 522, 7899746
			},
			.prefetch0 = 4413,
			.prefetch1 = 26062,
			.ram = divu_final_ram_25,
			.ram_len = 10,
		},
		.transactions = divu_transactions_25,
		.transactions_len = 4,
		.lenght = 18,
	},
	{
		.name = "026 DIVU D7, D0 80c7",
		.initial = {
			.regs = {
				1958778388, 2813342463, 1134360624, 678238598, 2937761464, 4055739039, 3914596992, 2573293150, 2112136914, 1210932046, 1531072149, 610652518, 1489645105, 2508251654, 1886776558, 11032338, 6635980, 9734, 10498492
			},
			.prefetch0 = 32967,
			.prefetch1 = 16959,
			.ram = divu_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1958778388, 2813342463, 1134360624, 678238598, 2937761464, 4055739039, 3914596992, 2573293150, 2112136914, 1210932046, 1531072149, 610652518, 1489645105, 2508251654, 1886776558, 11032338, 6635980, 9738, 10498494
			},
			.prefetch0 = 16959,
			.prefetch1 = 3770,
			.ram = divu_final_ram_26,
			.ram_len = 6,
		},
		.transactions = divu_transactions_26,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "027 DIVU (d8, A1, Xn), D1 82f1",
		.initial = {
			.regs = {
				3222157075, 832164608, 1656084665, 1211817963, 2839384450, 4177102224, 3472635720, 1496755925, 3427928034, 2504422195, 695185797, 1342376186, 998556488, 3792823709, 2471070077, 3121050, 1752580, 8221, 1061932
			},
			.prefetch0 = 33521,
			.prefetch1 = 10269,
			.ram = divu_initial_ram_27,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3222157075, 832164608, 1656084665, 1211817963, 2839384450, 4177102224, 3472635720, 1496755925, 3427928034, 2504422195, 695185797, 1342376186, 998556488, 3792823709, 2471070077, 3121050, 1752566, 8221, 4011881232
			},
			.prefetch0 = 11722,
			.prefetch1 = 22754,
			.ram = divu_final_ram_27,
			.ram_len = 28,
		},
		.transactions = divu_transactions_27,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "028 DIVU D6, D0 80c6",
		.initial = {
			.regs = {
				2951900130, 3674501551, 3224510716, 2193888322, 1359561594, 2527898602, 2480677737, 1128123606, 3330731466, 3476847172, 3733345837, 559071263, 4239599268, 975783237, 3986335150, 8707084, 5996852, 34328, 14257622
			},
			.prefetch0 = 32966,
			.prefetch1 = 63671,
			.ram = divu_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2951900130, 3674501551, 3224510716, 2193888322, 1359561594, 2527898602, 2480677737, 1128123606, 3330731466, 3476847172, 3733345837, 559071263, 4239599268, 975783237, 3986335150, 8707084, 5996852, 34330, 14257624
			},
			.prefetch0 = 63671,
			.prefetch1 = 39054,
			.ram = divu_final_ram_28,
			.ram_len = 6,
		},
		.transactions = divu_transactions_28,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "029 DIVU (d8, A2, Xn), D4 88f2",
		.initial = {
			.regs = {
				2452109153, 641090031, 2754362328, 1395818805, 2204191562, 536536214, 3937496928, 2568005389, 2452832576, 3852823955, 533240915, 156632787, 1218950801, 2504386382, 3121059697, 36446, 571360, 42270, 11639834
			},
			.prefetch0 = 35058,
			.prefetch1 = 60453,
			.ram = divu_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2452109153, 641090031, 2754362328, 1395818805, 2204191562, 536536214, 3937496928, 2568005389, 2452832576, 3852823955, 533240915, 156632787, 1218950801, 2504386382, 3121059697, 36446, 571346, 9502, 3916986842
			},
			.prefetch0 = 39917,
			.prefetch1 = 37684,
			.ram = divu_final_ram_29,
			.ram_len = 28,
		},
		.transactions = divu_transactions_29,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "030 DIVU D7, D2 84c7",
		.initial = {
			.regs = {
				2114981859, 2004698238, 3947648434, 1375828145, 3668714922, 3840986528, 3589490021, 3410953633, 2217446999, 1745826112, 2115228193, 611971406, 1787286653, 3196571150, 1369640963, 13141064, 6636286, 42516, 8544738
			},
			.prefetch0 = 33991,
			.prefetch1 = 36277,
			.ram = divu_initial_ram_30,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2114981859, 2004698238, 3947648434, 1375828145, 3668714922, 3840986528, 3589490021, 3410953633, 2217446999, 1745826112, 2115228193, 611971406, 1787286653, 3196571150, 1369640963, 13141064, 6636286, 42522, 8544740
			},
			.prefetch0 = 36277,
			.prefetch1 = 44363,
			.ram = divu_final_ram_30,
			.ram_len = 6,
		},
		.transactions = divu_transactions_30,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "031 DIVU (A2)+, D0 80da",
		.initial = {
			.regs = {
				3849184278, 974038515, 4134853006, 751564138, 2682750441, 1686039978, 2130848394, 4066253843, 3023333848, 3385988868, 4090534920, 3555304811, 1978137934, 2802099664, 1420209437, 5747980, 16247528, 33814, 7258786
			},
			.prefetch0 = 32986,
			.prefetch1 = 35286,
			.ram = divu_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3849184278, 974038515, 4134853006, 751564138, 2682750441, 1686039978, 2130848394, 4066253843, 3023333848, 3385988868, 4090534922, 3555304811, 1978137934, 2802099664, 1420209437, 5747980, 16247528, 33818, 7258788
			},
			.prefetch0 = 35286,
			.prefetch1 = 16458,
			.ram = divu_final_ram_31,
			.ram_len = 8,
		},
		.transactions = divu_transactions_31,
		.transactions_len = 3,
		.lenght = 14,
	},
};

#endif /* RBT_DIVU_H */