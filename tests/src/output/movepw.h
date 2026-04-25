#ifndef RBT_MOVEPW_H
#define RBT_MOVEPW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte movepw_initial_ram_0[] = {
		{ .addr = 0x54ff90, .byte = 0x05 },
		{ .addr = 0x54ff91, .byte = 0x0a },
		{ .addr = 0x54ff92, .byte = 0xbc },
		{ .addr = 0x54ff93, .byte = 0x5a },
		{ .addr = 0x54ff94, .byte = 0xab },
		{ .addr = 0x54ff95, .byte = 0x16 },
		{ .addr = 0x732e48, .byte = 0x7c },
		{ .addr = 0x732e49, .byte = 0x88 },
		{ .addr = 0x732e4a, .byte = 0x02 },
		{ .addr = 0x732e4b, .byte = 0x3a },
		{ .addr = 0x54ff96, .byte = 0x7f },
		{ .addr = 0x54ff97, .byte = 0x9f }
};

static const SST_RamByte movepw_final_ram_0[] = {
		{ .addr = 0x54ff90, .byte = 0x05 },
		{ .addr = 0x54ff91, .byte = 0x0a },
		{ .addr = 0x54ff92, .byte = 0xbc },
		{ .addr = 0x54ff93, .byte = 0x5a },
		{ .addr = 0x54ff94, .byte = 0xab },
		{ .addr = 0x54ff95, .byte = 0x16 },
		{ .addr = 0x732e48, .byte = 0x7c },
		{ .addr = 0x732e49, .byte = 0x88 },
		{ .addr = 0x732e4a, .byte = 0x02 },
		{ .addr = 0x732e4b, .byte = 0x3a },
		{ .addr = 0x54ff96, .byte = 0x7f },
		{ .addr = 0x54ff97, .byte = 0x9f }
};

static const SST_Transaction movepw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5570452, .data = 43798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7548488, .data = 31744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7548490, .data = 512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5570454, .data = 32671, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_1[] = {
		{ .addr = 0xd449e2, .byte = 0x0b },
		{ .addr = 0xd449e3, .byte = 0x8f },
		{ .addr = 0xd449e4, .byte = 0xbc },
		{ .addr = 0xd449e5, .byte = 0x92 },
		{ .addr = 0xd449e6, .byte = 0x62 },
		{ .addr = 0xd449e7, .byte = 0xf6 },
		{ .addr = 0xd449e8, .byte = 0xee },
		{ .addr = 0xd449e9, .byte = 0xab }
};

static const SST_RamByte movepw_final_ram_1[] = {
		{ .addr = 0xd449e2, .byte = 0x0b },
		{ .addr = 0xd449e3, .byte = 0x8f },
		{ .addr = 0xd449e4, .byte = 0xbc },
		{ .addr = 0xd449e5, .byte = 0x92 },
		{ .addr = 0xd449e6, .byte = 0x62 },
		{ .addr = 0xd449e7, .byte = 0xf6 },
		{ .addr = 0x0a9130, .byte = 0xf1 },
		{ .addr = 0x0a9131, .byte = 0x00 },
		{ .addr = 0x0a9132, .byte = 0xce },
		{ .addr = 0x0a9133, .byte = 0x00 },
		{ .addr = 0xd449e8, .byte = 0xee },
		{ .addr = 0xd449e9, .byte = 0xab }
};

static const SST_Transaction movepw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13912550, .data = 25334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 692528, .data = 61696, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 692530, .data = 52736, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13912552, .data = 61099, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_2[] = {
		{ .addr = 0x7a8476, .byte = 0x0b },
		{ .addr = 0x7a8477, .byte = 0x8a },
		{ .addr = 0x7a8478, .byte = 0xb0 },
		{ .addr = 0x7a8479, .byte = 0x82 },
		{ .addr = 0x7a847a, .byte = 0xe0 },
		{ .addr = 0x7a847b, .byte = 0xa7 },
		{ .addr = 0x7a847c, .byte = 0x66 },
		{ .addr = 0x7a847d, .byte = 0xab }
};

static const SST_RamByte movepw_final_ram_2[] = {
		{ .addr = 0x7a8476, .byte = 0x0b },
		{ .addr = 0x7a8477, .byte = 0x8a },
		{ .addr = 0x7a8478, .byte = 0xb0 },
		{ .addr = 0x7a8479, .byte = 0x82 },
		{ .addr = 0x7a847a, .byte = 0xe0 },
		{ .addr = 0x7a847b, .byte = 0xa7 },
		{ .addr = 0x0a5492, .byte = 0x95 },
		{ .addr = 0x0a5493, .byte = 0x00 },
		{ .addr = 0x0a5494, .byte = 0x4c },
		{ .addr = 0x0a5495, .byte = 0x00 },
		{ .addr = 0x7a847c, .byte = 0x66 },
		{ .addr = 0x7a847d, .byte = 0xab }
};

static const SST_Transaction movepw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8029306, .data = 57511, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 677010, .data = 38144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 677012, .data = 19456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8029308, .data = 26283, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_3[] = {
		{ .addr = 0x1cc086, .byte = 0x03 },
		{ .addr = 0x1cc087, .byte = 0x0e },
		{ .addr = 0x1cc088, .byte = 0x32 },
		{ .addr = 0x1cc089, .byte = 0x05 },
		{ .addr = 0x1cc08a, .byte = 0xf8 },
		{ .addr = 0x1cc08b, .byte = 0x4b },
		{ .addr = 0x4c9bec, .byte = 0x4a },
		{ .addr = 0x4c9bed, .byte = 0x1a },
		{ .addr = 0x4c9bee, .byte = 0x32 },
		{ .addr = 0x4c9bef, .byte = 0x2a },
		{ .addr = 0x1cc08c, .byte = 0xb8 },
		{ .addr = 0x1cc08d, .byte = 0x6d }
};

static const SST_RamByte movepw_final_ram_3[] = {
		{ .addr = 0x1cc086, .byte = 0x03 },
		{ .addr = 0x1cc087, .byte = 0x0e },
		{ .addr = 0x1cc088, .byte = 0x32 },
		{ .addr = 0x1cc089, .byte = 0x05 },
		{ .addr = 0x1cc08a, .byte = 0xf8 },
		{ .addr = 0x1cc08b, .byte = 0x4b },
		{ .addr = 0x4c9bec, .byte = 0x4a },
		{ .addr = 0x4c9bed, .byte = 0x1a },
		{ .addr = 0x4c9bee, .byte = 0x32 },
		{ .addr = 0x4c9bef, .byte = 0x2a },
		{ .addr = 0x1cc08c, .byte = 0xb8 },
		{ .addr = 0x1cc08d, .byte = 0x6d }
};

static const SST_Transaction movepw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1884298, .data = 63563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020652, .data = 26, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5020654, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1884300, .data = 47213, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_4[] = {
		{ .addr = 0xe0e332, .byte = 0x01 },
		{ .addr = 0xe0e333, .byte = 0x8a },
		{ .addr = 0xe0e334, .byte = 0xd7 },
		{ .addr = 0xe0e335, .byte = 0xfd },
		{ .addr = 0xe0e336, .byte = 0x7e },
		{ .addr = 0xe0e337, .byte = 0x2c },
		{ .addr = 0xe0e338, .byte = 0x8e },
		{ .addr = 0xe0e339, .byte = 0x58 }
};

static const SST_RamByte movepw_final_ram_4[] = {
		{ .addr = 0xe0e332, .byte = 0x01 },
		{ .addr = 0xe0e333, .byte = 0x8a },
		{ .addr = 0xe0e334, .byte = 0xd7 },
		{ .addr = 0xe0e335, .byte = 0xfd },
		{ .addr = 0xe0e336, .byte = 0x7e },
		{ .addr = 0xe0e337, .byte = 0x2c },
		{ .addr = 0x533fc0, .byte = 0x00 },
		{ .addr = 0x533fc1, .byte = 0x3e },
		{ .addr = 0x533fc2, .byte = 0x00 },
		{ .addr = 0x533fc3, .byte = 0x5b },
		{ .addr = 0xe0e338, .byte = 0x8e },
		{ .addr = 0xe0e339, .byte = 0x58 }
};

static const SST_Transaction movepw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14738230, .data = 32300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5455808, .data = 62, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5455810, .data = 91, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14738232, .data = 36440, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_5[] = {
		{ .addr = 0x24aaf8, .byte = 0x0b },
		{ .addr = 0x24aaf9, .byte = 0x8c },
		{ .addr = 0x24aafa, .byte = 0xc6 },
		{ .addr = 0x24aafb, .byte = 0x01 },
		{ .addr = 0x24aafc, .byte = 0x81 },
		{ .addr = 0x24aafd, .byte = 0x62 },
		{ .addr = 0x24aafe, .byte = 0xf5 },
		{ .addr = 0x24aaff, .byte = 0xaa }
};

static const SST_RamByte movepw_final_ram_5[] = {
		{ .addr = 0x24aaf8, .byte = 0x0b },
		{ .addr = 0x24aaf9, .byte = 0x8c },
		{ .addr = 0x24aafa, .byte = 0xc6 },
		{ .addr = 0x24aafb, .byte = 0x01 },
		{ .addr = 0x24aafc, .byte = 0x81 },
		{ .addr = 0x24aafd, .byte = 0x62 },
		{ .addr = 0xfe68f4, .byte = 0x00 },
		{ .addr = 0xfe68f5, .byte = 0x50 },
		{ .addr = 0xfe68f6, .byte = 0x00 },
		{ .addr = 0xfe68f7, .byte = 0x47 },
		{ .addr = 0x24aafe, .byte = 0xf5 },
		{ .addr = 0x24aaff, .byte = 0xaa }
};

static const SST_Transaction movepw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2403068, .data = 33122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16673012, .data = 80, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16673014, .data = 71, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2403070, .data = 62890, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_6[] = {
		{ .addr = 0xf1500c, .byte = 0x09 },
		{ .addr = 0xf1500d, .byte = 0x0e },
		{ .addr = 0xf1500e, .byte = 0x85 },
		{ .addr = 0xf1500f, .byte = 0xd8 },
		{ .addr = 0xf15010, .byte = 0x33 },
		{ .addr = 0xf15011, .byte = 0x3a },
		{ .addr = 0x0d9fb4, .byte = 0xee },
		{ .addr = 0x0d9fb5, .byte = 0x1c },
		{ .addr = 0x0d9fb6, .byte = 0x65 },
		{ .addr = 0x0d9fb7, .byte = 0x7a },
		{ .addr = 0xf15012, .byte = 0xef },
		{ .addr = 0xf15013, .byte = 0x9b }
};

static const SST_RamByte movepw_final_ram_6[] = {
		{ .addr = 0xf1500c, .byte = 0x09 },
		{ .addr = 0xf1500d, .byte = 0x0e },
		{ .addr = 0xf1500e, .byte = 0x85 },
		{ .addr = 0xf1500f, .byte = 0xd8 },
		{ .addr = 0xf15010, .byte = 0x33 },
		{ .addr = 0xf15011, .byte = 0x3a },
		{ .addr = 0x0d9fb4, .byte = 0xee },
		{ .addr = 0x0d9fb5, .byte = 0x1c },
		{ .addr = 0x0d9fb6, .byte = 0x65 },
		{ .addr = 0x0d9fb7, .byte = 0x7a },
		{ .addr = 0xf15012, .byte = 0xef },
		{ .addr = 0xf15013, .byte = 0x9b }
};

static const SST_Transaction movepw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15814672, .data = 13114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 892852, .data = 28, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 892854, .data = 122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15814674, .data = 61339, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_7[] = {
		{ .addr = 0x14abae, .byte = 0x09 },
		{ .addr = 0x14abaf, .byte = 0x8d },
		{ .addr = 0x14abb0, .byte = 0xa7 },
		{ .addr = 0x14abb1, .byte = 0x72 },
		{ .addr = 0x14abb2, .byte = 0x3b },
		{ .addr = 0x14abb3, .byte = 0x4e },
		{ .addr = 0x14abb4, .byte = 0xe9 },
		{ .addr = 0x14abb5, .byte = 0x25 }
};

static const SST_RamByte movepw_final_ram_7[] = {
		{ .addr = 0x14abae, .byte = 0x09 },
		{ .addr = 0x14abaf, .byte = 0x8d },
		{ .addr = 0x14abb0, .byte = 0xa7 },
		{ .addr = 0x14abb1, .byte = 0x72 },
		{ .addr = 0x14abb2, .byte = 0x3b },
		{ .addr = 0x14abb3, .byte = 0x4e },
		{ .addr = 0xd5aefc, .byte = 0x8f },
		{ .addr = 0xd5aefd, .byte = 0x00 },
		{ .addr = 0xd5aefe, .byte = 0xe7 },
		{ .addr = 0xd5aeff, .byte = 0x00 },
		{ .addr = 0x14abb4, .byte = 0xe9 },
		{ .addr = 0x14abb5, .byte = 0x25 }
};

static const SST_Transaction movepw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1354674, .data = 15182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14003964, .data = 36608, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14003966, .data = 59136, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1354676, .data = 59685, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_8[] = {
		{ .addr = 0x8329b0, .byte = 0x0d },
		{ .addr = 0x8329b1, .byte = 0x0c },
		{ .addr = 0x8329b2, .byte = 0xa9 },
		{ .addr = 0x8329b3, .byte = 0x6b },
		{ .addr = 0x8329b4, .byte = 0x7b },
		{ .addr = 0x8329b5, .byte = 0xc2 },
		{ .addr = 0xa9e0d8, .byte = 0x3e },
		{ .addr = 0xa9e0d9, .byte = 0xac },
		{ .addr = 0xa9e0da, .byte = 0xe7 },
		{ .addr = 0xa9e0db, .byte = 0x16 },
		{ .addr = 0x8329b6, .byte = 0xbc },
		{ .addr = 0x8329b7, .byte = 0x26 }
};

static const SST_RamByte movepw_final_ram_8[] = {
		{ .addr = 0x8329b0, .byte = 0x0d },
		{ .addr = 0x8329b1, .byte = 0x0c },
		{ .addr = 0x8329b2, .byte = 0xa9 },
		{ .addr = 0x8329b3, .byte = 0x6b },
		{ .addr = 0x8329b4, .byte = 0x7b },
		{ .addr = 0x8329b5, .byte = 0xc2 },
		{ .addr = 0xa9e0d8, .byte = 0x3e },
		{ .addr = 0xa9e0d9, .byte = 0xac },
		{ .addr = 0xa9e0da, .byte = 0xe7 },
		{ .addr = 0xa9e0db, .byte = 0x16 },
		{ .addr = 0x8329b6, .byte = 0xbc },
		{ .addr = 0x8329b7, .byte = 0x26 }
};

static const SST_Transaction movepw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8595892, .data = 31682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11133144, .data = 172, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11133146, .data = 22, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8595894, .data = 48166, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_9[] = {
		{ .addr = 0x48058c, .byte = 0x0f },
		{ .addr = 0x48058d, .byte = 0x8d },
		{ .addr = 0x48058e, .byte = 0x2f },
		{ .addr = 0x48058f, .byte = 0x6f },
		{ .addr = 0x480590, .byte = 0x5f },
		{ .addr = 0x480591, .byte = 0xce },
		{ .addr = 0x480592, .byte = 0x72 },
		{ .addr = 0x480593, .byte = 0xb9 }
};

static const SST_RamByte movepw_final_ram_9[] = {
		{ .addr = 0x48058c, .byte = 0x0f },
		{ .addr = 0x48058d, .byte = 0x8d },
		{ .addr = 0x48058e, .byte = 0x2f },
		{ .addr = 0x48058f, .byte = 0x6f },
		{ .addr = 0x480590, .byte = 0x5f },
		{ .addr = 0x480591, .byte = 0xce },
		{ .addr = 0x61d502, .byte = 0x72 },
		{ .addr = 0x61d503, .byte = 0x00 },
		{ .addr = 0x61d504, .byte = 0xf5 },
		{ .addr = 0x61d505, .byte = 0x00 },
		{ .addr = 0x480592, .byte = 0x72 },
		{ .addr = 0x480593, .byte = 0xb9 }
};

static const SST_Transaction movepw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4720016, .data = 24526, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6411522, .data = 29184, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6411524, .data = 62720, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4720018, .data = 29369, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_10[] = {
		{ .addr = 0xe9400c, .byte = 0x03 },
		{ .addr = 0xe9400d, .byte = 0x8a },
		{ .addr = 0xe9400e, .byte = 0x19 },
		{ .addr = 0xe9400f, .byte = 0xdc },
		{ .addr = 0xe94010, .byte = 0x86 },
		{ .addr = 0xe94011, .byte = 0x05 },
		{ .addr = 0xe94012, .byte = 0x16 },
		{ .addr = 0xe94013, .byte = 0xf9 }
};

static const SST_RamByte movepw_final_ram_10[] = {
		{ .addr = 0xe9400c, .byte = 0x03 },
		{ .addr = 0xe9400d, .byte = 0x8a },
		{ .addr = 0xe9400e, .byte = 0x19 },
		{ .addr = 0xe9400f, .byte = 0xdc },
		{ .addr = 0xe94010, .byte = 0x86 },
		{ .addr = 0xe94011, .byte = 0x05 },
		{ .addr = 0xdcac38, .byte = 0x00 },
		{ .addr = 0xdcac39, .byte = 0xfd },
		{ .addr = 0xdcac3a, .byte = 0x00 },
		{ .addr = 0xdcac3b, .byte = 0x20 },
		{ .addr = 0xe94012, .byte = 0x16 },
		{ .addr = 0xe94013, .byte = 0xf9 }
};

static const SST_Transaction movepw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15286288, .data = 34309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14462008, .data = 253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14462010, .data = 32, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15286290, .data = 5881, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_11[] = {
		{ .addr = 0x1f1868, .byte = 0x0b },
		{ .addr = 0x1f1869, .byte = 0x8e },
		{ .addr = 0x1f186a, .byte = 0xfb },
		{ .addr = 0x1f186b, .byte = 0x42 },
		{ .addr = 0x1f186c, .byte = 0x54 },
		{ .addr = 0x1f186d, .byte = 0x84 },
		{ .addr = 0x1f186e, .byte = 0x46 },
		{ .addr = 0x1f186f, .byte = 0xff }
};

static const SST_RamByte movepw_final_ram_11[] = {
		{ .addr = 0x1f1868, .byte = 0x0b },
		{ .addr = 0x1f1869, .byte = 0x8e },
		{ .addr = 0x1f186a, .byte = 0xfb },
		{ .addr = 0x1f186b, .byte = 0x42 },
		{ .addr = 0x1f186c, .byte = 0x54 },
		{ .addr = 0x1f186d, .byte = 0x84 },
		{ .addr = 0xe5adb8, .byte = 0x00 },
		{ .addr = 0xe5adb9, .byte = 0xeb },
		{ .addr = 0xe5adba, .byte = 0x00 },
		{ .addr = 0xe5adbb, .byte = 0x98 },
		{ .addr = 0x1f186e, .byte = 0x46 },
		{ .addr = 0x1f186f, .byte = 0xff }
};

static const SST_Transaction movepw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2037868, .data = 21636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15052216, .data = 235, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15052218, .data = 152, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2037870, .data = 18175, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_12[] = {
		{ .addr = 0xf0a7b6, .byte = 0x05 },
		{ .addr = 0xf0a7b7, .byte = 0x09 },
		{ .addr = 0xf0a7b8, .byte = 0xcc },
		{ .addr = 0xf0a7b9, .byte = 0x0e },
		{ .addr = 0xf0a7ba, .byte = 0xa2 },
		{ .addr = 0xf0a7bb, .byte = 0x65 },
		{ .addr = 0x65792a, .byte = 0xe4 },
		{ .addr = 0x65792b, .byte = 0x99 },
		{ .addr = 0x65792c, .byte = 0x45 },
		{ .addr = 0x65792d, .byte = 0xde },
		{ .addr = 0xf0a7bc, .byte = 0xe4 },
		{ .addr = 0xf0a7bd, .byte = 0xb4 }
};

static const SST_RamByte movepw_final_ram_12[] = {
		{ .addr = 0xf0a7b6, .byte = 0x05 },
		{ .addr = 0xf0a7b7, .byte = 0x09 },
		{ .addr = 0xf0a7b8, .byte = 0xcc },
		{ .addr = 0xf0a7b9, .byte = 0x0e },
		{ .addr = 0xf0a7ba, .byte = 0xa2 },
		{ .addr = 0xf0a7bb, .byte = 0x65 },
		{ .addr = 0x65792a, .byte = 0xe4 },
		{ .addr = 0x65792b, .byte = 0x99 },
		{ .addr = 0x65792c, .byte = 0x45 },
		{ .addr = 0x65792d, .byte = 0xde },
		{ .addr = 0xf0a7bc, .byte = 0xe4 },
		{ .addr = 0xf0a7bd, .byte = 0xb4 }
};

static const SST_Transaction movepw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15771578, .data = 41573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6650154, .data = 58368, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6650156, .data = 17664, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15771580, .data = 58548, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_13[] = {
		{ .addr = 0xcce5ae, .byte = 0x05 },
		{ .addr = 0xcce5af, .byte = 0x8a },
		{ .addr = 0xcce5b0, .byte = 0x10 },
		{ .addr = 0xcce5b1, .byte = 0x5d },
		{ .addr = 0xcce5b2, .byte = 0x62 },
		{ .addr = 0xcce5b3, .byte = 0x3e },
		{ .addr = 0xcce5b4, .byte = 0xe2 },
		{ .addr = 0xcce5b5, .byte = 0x83 }
};

static const SST_RamByte movepw_final_ram_13[] = {
		{ .addr = 0xcce5ae, .byte = 0x05 },
		{ .addr = 0xcce5af, .byte = 0x8a },
		{ .addr = 0xcce5b0, .byte = 0x10 },
		{ .addr = 0xcce5b1, .byte = 0x5d },
		{ .addr = 0xcce5b2, .byte = 0x62 },
		{ .addr = 0xcce5b3, .byte = 0x3e },
		{ .addr = 0xeca864, .byte = 0x00 },
		{ .addr = 0xeca865, .byte = 0x0a },
		{ .addr = 0xeca866, .byte = 0x00 },
		{ .addr = 0xeca867, .byte = 0xd6 },
		{ .addr = 0xcce5b4, .byte = 0xe2 },
		{ .addr = 0xcce5b5, .byte = 0x83 }
};

static const SST_Transaction movepw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13428146, .data = 25150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15509604, .data = 10, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15509606, .data = 214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13428148, .data = 57987, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_14[] = {
		{ .addr = 0x8e071e, .byte = 0x01 },
		{ .addr = 0x8e071f, .byte = 0x8a },
		{ .addr = 0x8e0720, .byte = 0x2c },
		{ .addr = 0x8e0721, .byte = 0x49 },
		{ .addr = 0x8e0722, .byte = 0x94 },
		{ .addr = 0x8e0723, .byte = 0x3d },
		{ .addr = 0x8e0724, .byte = 0x92 },
		{ .addr = 0x8e0725, .byte = 0x4a }
};

static const SST_RamByte movepw_final_ram_14[] = {
		{ .addr = 0x8e071e, .byte = 0x01 },
		{ .addr = 0x8e071f, .byte = 0x8a },
		{ .addr = 0x8e0720, .byte = 0x2c },
		{ .addr = 0x8e0721, .byte = 0x49 },
		{ .addr = 0x8e0722, .byte = 0x94 },
		{ .addr = 0x8e0723, .byte = 0x3d },
		{ .addr = 0x19c4b6, .byte = 0x00 },
		{ .addr = 0x19c4b7, .byte = 0x4c },
		{ .addr = 0x19c4b8, .byte = 0x00 },
		{ .addr = 0x19c4b9, .byte = 0x61 },
		{ .addr = 0x8e0724, .byte = 0x92 },
		{ .addr = 0x8e0725, .byte = 0x4a }
};

static const SST_Transaction movepw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9307938, .data = 37949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1688758, .data = 76, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1688760, .data = 97, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9307940, .data = 37450, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte movepw_initial_ram_15[] = {
		{ .addr = 0x5cb670, .byte = 0x0d },
		{ .addr = 0x5cb671, .byte = 0x08 },
		{ .addr = 0x5cb672, .byte = 0x94 },
		{ .addr = 0x5cb673, .byte = 0x18 },
		{ .addr = 0x5cb674, .byte = 0xf1 },
		{ .addr = 0x5cb675, .byte = 0xdd },
		{ .addr = 0xe5ca1a, .byte = 0x9d },
		{ .addr = 0xe5ca1b, .byte = 0x99 },
		{ .addr = 0xe5ca1c, .byte = 0xee },
		{ .addr = 0xe5ca1d, .byte = 0x18 },
		{ .addr = 0x5cb676, .byte = 0x41 },
		{ .addr = 0x5cb677, .byte = 0xf7 }
};

static const SST_RamByte movepw_final_ram_15[] = {
		{ .addr = 0x5cb670, .byte = 0x0d },
		{ .addr = 0x5cb671, .byte = 0x08 },
		{ .addr = 0x5cb672, .byte = 0x94 },
		{ .addr = 0x5cb673, .byte = 0x18 },
		{ .addr = 0x5cb674, .byte = 0xf1 },
		{ .addr = 0x5cb675, .byte = 0xdd },
		{ .addr = 0xe5ca1a, .byte = 0x9d },
		{ .addr = 0xe5ca1b, .byte = 0x99 },
		{ .addr = 0xe5ca1c, .byte = 0xee },
		{ .addr = 0xe5ca1d, .byte = 0x18 },
		{ .addr = 0x5cb676, .byte = 0x41 },
		{ .addr = 0x5cb677, .byte = 0xf7 }
};

static const SST_Transaction movepw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6076020, .data = 61917, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15059482, .data = 40192, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15059484, .data = 60928, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6076022, .data = 16887, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t MOVEPW_TEST_COUNT = 16;
static const SST_TestCase movepw[] = {
	{
		.name = "000 MOVEP.w (d16, A2), D2 050a",
		.initial = {
			.regs = {
				3900302818, 2506507470, 3822282754, 2339417319, 1891721485, 405460408, 547950994, 3291501729, 1344045938, 1036996011, 1836282350, 2517245756, 589922482, 1154093737, 3280878085, 1870710, 15185858, 8213, 5570452
			},
			.prefetch0 = 1290,
			.prefetch1 = 48218,
			.ram = movepw_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3900302818, 2506507470, 3822287874, 2339417319, 1891721485, 405460408, 547950994, 3291501729, 1344045938, 1036996011, 1836282350, 2517245756, 589922482, 1154093737, 3280878085, 1870710, 15185858, 8213, 5570456
			},
			.prefetch0 = 43798,
			.prefetch1 = 32671,
			.ram = movepw_final_ram_0,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_0,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "001 MOVEP.w D5, (d16, A7) 0b8f",
		.initial = {
			.regs = {
				2502627936, 1620231526, 2139953333, 3944027909, 2542841888, 4162974158, 3840136149, 2482864442, 4049050175, 3105838511, 1161512193, 3111076479, 3482367895, 2010036475, 3233257113, 709790, 10296888, 33806, 13912550
			},
			.prefetch0 = 2959,
			.prefetch1 = 48274,
			.ram = movepw_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2502627936, 1620231526, 2139953333, 3944027909, 2542841888, 4162974158, 3840136149, 2482864442, 4049050175, 3105838511, 1161512193, 3111076479, 3482367895, 2010036475, 3233257113, 709790, 10296888, 33806, 13912554
			},
			.prefetch0 = 25334,
			.prefetch1 = 61099,
			.ram = movepw_final_ram_1,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 MOVEP.w D5, (d16, A2) 0b8a",
		.initial = {
			.regs = {
				33397961, 2385721820, 2385672128, 2139710471, 3566953501, 3502019916, 662583857, 3313665221, 3385924233, 116427624, 1443537936, 1228986585, 1713178891, 3970061682, 3234624265, 13178466, 12415700, 9747, 8029306
			},
			.prefetch0 = 2954,
			.prefetch1 = 45186,
			.ram = movepw_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				33397961, 2385721820, 2385672128, 2139710471, 3566953501, 3502019916, 662583857, 3313665221, 3385924233, 116427624, 1443537936, 1228986585, 1713178891, 3970061682, 3234624265, 13178466, 12415700, 9747, 8029310
			},
			.prefetch0 = 57511,
			.prefetch1 = 26283,
			.ram = movepw_final_ram_2,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_2,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "003 MOVEP.w (d16, A6), D1 030e",
		.initial = {
			.regs = {
				919544175, 3615979849, 176404608, 1560759972, 715397271, 533198644, 831014464, 2985022940, 193592390, 766613637, 1226820303, 551169396, 10046495, 1351034135, 3679218152, 16765078, 8493340, 41225, 1884298
			},
			.prefetch0 = 782,
			.prefetch1 = 12805,
			.ram = movepw_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				919544175, 3615955498, 176404608, 1560759972, 715397271, 533198644, 831014464, 2985022940, 193592390, 766613637, 1226820303, 551169396, 10046495, 1351034135, 3679218152, 16765078, 8493340, 41225, 1884302
			},
			.prefetch0 = 63563,
			.prefetch1 = 47213,
			.ram = movepw_final_ram_3,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_3,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "004 MOVEP.w D0, (d16, A2) 018a",
		.initial = {
			.regs = {
				3193978459, 1074902802, 3784618733, 810369193, 2360712425, 3917368413, 2201536154, 3794990081, 435087847, 2657080443, 2085840836, 3159627956, 318321781, 494557213, 1226903710, 3877084, 13360080, 1806, 14738230
			},
			.prefetch0 = 394,
			.prefetch1 = 55293,
			.ram = movepw_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3193978459, 1074902802, 3784618733, 810369193, 2360712425, 3917368413, 2201536154, 3794990081, 435087847, 2657080443, 2085840836, 3159627956, 318321781, 494557213, 1226903710, 3877084, 13360080, 1806, 14738234
			},
			.prefetch0 = 32300,
			.prefetch1 = 36440,
			.ram = movepw_final_ram_4,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 MOVEP.w D5, (d16, A4) 0b8c",
		.initial = {
			.regs = {
				725403424, 3699135965, 2515733348, 308590199, 3253701131, 1598902343, 425857253, 2039560663, 3194730593, 10685440, 4241996551, 1506462677, 402563828, 4205758865, 319631548, 14300404, 16094808, 41227, 2403068
			},
			.prefetch0 = 2956,
			.prefetch1 = 50689,
			.ram = movepw_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				725403424, 3699135965, 2515733348, 308590199, 3253701131, 1598902343, 425857253, 2039560663, 3194730593, 10685440, 4241996551, 1506462677, 402563828, 4205758865, 319631548, 14300404, 16094808, 41227, 2403072
			},
			.prefetch0 = 33122,
			.prefetch1 = 62890,
			.ram = movepw_final_ram_5,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 MOVEP.w (d16, A6), D4 090e",
		.initial = {
			.regs = {
				2758887766, 1438842377, 2917994570, 1296614354, 3041301488, 817042209, 2633954533, 1663143649, 953859587, 521849262, 2865887798, 675375806, 3256263137, 3623133602, 2098076125, 9678646, 2609044, 41499, 15814672
			},
			.prefetch0 = 2318,
			.prefetch1 = 34264,
			.ram = movepw_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2758887766, 1438842377, 2917994570, 1296614354, 3041270906, 817042209, 2633954533, 1663143649, 953859587, 521849262, 2865887798, 675375806, 3256263137, 3623133602, 2098076125, 9678646, 2609044, 41499, 15814676
			},
			.prefetch0 = 13114,
			.prefetch1 = 61339,
			.ram = movepw_final_ram_6,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_6,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "007 MOVEP.w D4, (d16, A5) 098d",
		.initial = {
			.regs = {
				1836304086, 281299041, 1517094524, 1814533631, 653430759, 784473101, 4130419757, 3981812846, 3152695588, 2670610004, 844453513, 787872842, 189049605, 181798794, 2731960371, 10902680, 1850802, 1290, 1354674
			},
			.prefetch0 = 2445,
			.prefetch1 = 42866,
			.ram = movepw_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1836304086, 281299041, 1517094524, 1814533631, 653430759, 784473101, 4130419757, 3981812846, 3152695588, 2670610004, 844453513, 787872842, 189049605, 181798794, 2731960371, 10902680, 1850802, 1290, 1354678
			},
			.prefetch0 = 15182,
			.prefetch1 = 59685,
			.ram = movepw_final_ram_7,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 MOVEP.w (d16, A4), D6 0d0c",
		.initial = {
			.regs = {
				1689578787, 276846106, 3003825739, 616036229, 2752511084, 2813634565, 136507104, 1397664064, 4087281155, 1616559450, 440904752, 2798286363, 4104796014, 2121999233, 2570041413, 7545844, 12556312, 33539, 8595892
			},
			.prefetch0 = 3340,
			.prefetch1 = 43371,
			.ram = movepw_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1689578787, 276846106, 3003825739, 616036229, 2752511084, 2813634565, 136490006, 1397664064, 4087281155, 1616559450, 440904752, 2798286363, 4104796014, 2121999233, 2570041413, 7545844, 12556312, 33539, 8595896
			},
			.prefetch0 = 31682,
			.prefetch1 = 48166,
			.ram = movepw_final_ram_8,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_8,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "009 MOVEP.w D7, (d16, A5) 0f8d",
		.initial = {
			.regs = {
				2486646667, 3388104908, 2751603251, 1593368759, 2263734564, 1288834972, 532076472, 1012495093, 2376734303, 2796054900, 4000775251, 894216037, 478460868, 2506204563, 3626368760, 13732630, 16198534, 33797, 4720016
			},
			.prefetch0 = 3981,
			.prefetch1 = 12143,
			.ram = movepw_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2486646667, 3388104908, 2751603251, 1593368759, 2263734564, 1288834972, 532076472, 1012495093, 2376734303, 2796054900, 4000775251, 894216037, 478460868, 2506204563, 3626368760, 13732630, 16198534, 33797, 4720020
			},
			.prefetch0 = 24526,
			.prefetch1 = 29369,
			.ram = movepw_final_ram_9,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_9,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "010 MOVEP.w D1, (d16, A2) 038a",
		.initial = {
			.regs = {
				645319465, 259128608, 397746112, 2840972468, 3139771701, 3992428266, 3370015601, 1447510876, 832304691, 770765028, 3218903645, 4158153686, 1980582468, 2468895183, 432292062, 12535938, 14524000, 9992, 15286288
			},
			.prefetch0 = 906,
			.prefetch1 = 6620,
			.ram = movepw_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				645319465, 259128608, 397746112, 2840972468, 3139771701, 3992428266, 3370015601, 1447510876, 832304691, 770765028, 3218903645, 4158153686, 1980582468, 2468895183, 432292062, 12535938, 14524000, 9992, 15286292
			},
			.prefetch0 = 34309,
			.prefetch1 = 5881,
			.ram = movepw_final_ram_10,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_10,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "011 MOVEP.w D5, (d16, A6) 0b8e",
		.initial = {
			.regs = {
				103711465, 3845894245, 1622768809, 1424021670, 973537475, 491056024, 2399415816, 3631183798, 4010668415, 3457884406, 1341344930, 1069091090, 3779793079, 1556741037, 4041585271, 15180922, 14867970, 33040, 2037868
			},
			.prefetch0 = 2958,
			.prefetch1 = 64322,
			.ram = movepw_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				103711465, 3845894245, 1622768809, 1424021670, 973537475, 491056024, 2399415816, 3631183798, 4010668415, 3457884406, 1341344930, 1069091090, 3779793079, 1556741037, 4041585271, 15180922, 14867970, 33040, 2037872
			},
			.prefetch0 = 21636,
			.prefetch1 = 18175,
			.ram = movepw_final_ram_11,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_11,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "012 MOVEP.w (d16, A1), D2 0509",
		.initial = {
			.regs = {
				3699272653, 1225946794, 4152225076, 2911663993, 549408214, 405977794, 1850849351, 4101129583, 4252938152, 2925899036, 2004549074, 1158314257, 1689871415, 2901789728, 3219131440, 2831406, 2366886, 525, 15771578
			},
			.prefetch0 = 1289,
			.prefetch1 = 52238,
			.ram = movepw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3699272653, 1225946794, 4152222789, 2911663993, 549408214, 405977794, 1850849351, 4101129583, 4252938152, 2925899036, 2004549074, 1158314257, 1689871415, 2901789728, 3219131440, 2831406, 2366886, 525, 15771582
			},
			.prefetch0 = 41573,
			.prefetch1 = 58548,
			.ram = movepw_final_ram_12,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_12,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "013 MOVEP.w D2, (d16, A2) 058a",
		.initial = {
			.regs = {
				2323437815, 2216545121, 3396340438, 3791920434, 2369059683, 1009639396, 3930271447, 680010719, 2976940761, 3253502912, 3823933448, 608160139, 1684971575, 3044440867, 3122189869, 10806974, 15985894, 8207, 13428146
			},
			.prefetch0 = 1418,
			.prefetch1 = 4189,
			.ram = movepw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2323437815, 2216545121, 3396340438, 3791920434, 2369059683, 1009639396, 3930271447, 680010719, 2976940761, 3253502912, 3823933448, 608160139, 1684971575, 3044440867, 3122189869, 10806974, 15985894, 8207, 13428150
			},
			.prefetch0 = 25150,
			.prefetch1 = 57987,
			.ram = movepw_final_ram_13,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 MOVEP.w D0, (d16, A2) 018a",
		.initial = {
			.regs = {
				3127856225, 3692397869, 2562579114, 3491175307, 1110185255, 3733486273, 686055708, 2153927773, 4212080006, 3957033095, 1595512942, 2505273016, 1910556155, 1517856461, 2876551104, 12151610, 3359812, 42516, 9307938
			},
			.prefetch0 = 394,
			.prefetch1 = 11337,
			.ram = movepw_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3127856225, 3692397869, 2562579114, 3491175307, 1110185255, 3733486273, 686055708, 2153927773, 4212080006, 3957033095, 1595512942, 2505273016, 1910556155, 1517856461, 2876551104, 12151610, 3359812, 42516, 9307942
			},
			.prefetch0 = 37949,
			.prefetch1 = 37450,
			.ram = movepw_final_ram_14,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 MOVEP.w (d16, A0), D6 0d08",
		.initial = {
			.regs = {
				1951293849, 3733230631, 268486168, 3849348529, 122065442, 770806308, 2090052789, 3305500891, 149304834, 651052478, 1214144560, 1723449603, 3594181926, 2784620927, 1168867171, 14376774, 15979566, 1802, 6076020
			},
			.prefetch0 = 3336,
			.prefetch1 = 37912,
			.ram = movepw_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1951293849, 3733230631, 268486168, 3849348529, 122065442, 770806308, 2090049006, 3305500891, 149304834, 651052478, 1214144560, 1723449603, 3594181926, 2784620927, 1168867171, 14376774, 15979566, 1802, 6076024
			},
			.prefetch0 = 61917,
			.prefetch1 = 16887,
			.ram = movepw_final_ram_15,
			.ram_len = 12,
		},
		.transactions = movepw_transactions_15,
		.transactions_len = 4,
		.lenght = 16,
	},
};

#endif /* RBT_MOVEPW_H */