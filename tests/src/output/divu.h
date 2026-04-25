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

const uint32_t DIVU_TEST_COUNT = 16;
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
};

#endif /* RBT_DIVU_H */