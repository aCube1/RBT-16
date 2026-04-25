#ifndef RBT_SUBXB_H
#define RBT_SUBXB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte subxb_initial_ram_0[] = {
		{ .addr = 0xd01174, .byte = 0x9b },
		{ .addr = 0xd01175, .byte = 0x0e },
		{ .addr = 0xd01176, .byte = 0xf3 },
		{ .addr = 0xd01177, .byte = 0x8c },
		{ .addr = 0xf27a14, .byte = 0x72 },
		{ .addr = 0xf27a15, .byte = 0x8c },
		{ .addr = 0x8452c6, .byte = 0x85 },
		{ .addr = 0x8452c7, .byte = 0x8a },
		{ .addr = 0xd01178, .byte = 0x21 },
		{ .addr = 0xd01179, .byte = 0x2d }
};

static const SST_RamByte subxb_final_ram_0[] = {
		{ .addr = 0xd01174, .byte = 0x9b },
		{ .addr = 0xd01175, .byte = 0x0e },
		{ .addr = 0xd01176, .byte = 0xf3 },
		{ .addr = 0xd01177, .byte = 0x8c },
		{ .addr = 0xf27a14, .byte = 0x72 },
		{ .addr = 0xf27a15, .byte = 0x8c },
		{ .addr = 0x8452c6, .byte = 0x13 },
		{ .addr = 0x8452c7, .byte = 0x8a },
		{ .addr = 0xd01178, .byte = 0x21 },
		{ .addr = 0xd01179, .byte = 0x2d }
};

static const SST_Transaction subxb_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15890964, .data = 29184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8671942, .data = 34048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13635960, .data = 8493, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8671942, .data = 4864, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_1[] = {
		{ .addr = 0x9a6b9c, .byte = 0x91 },
		{ .addr = 0x9a6b9d, .byte = 0x04 },
		{ .addr = 0x9a6b9e, .byte = 0x9b },
		{ .addr = 0x9a6b9f, .byte = 0x5b },
		{ .addr = 0x9a6ba0, .byte = 0xe9 },
		{ .addr = 0x9a6ba1, .byte = 0x6f }
};

static const SST_RamByte subxb_final_ram_1[] = {
		{ .addr = 0x9a6b9c, .byte = 0x91 },
		{ .addr = 0x9a6b9d, .byte = 0x04 },
		{ .addr = 0x9a6b9e, .byte = 0x9b },
		{ .addr = 0x9a6b9f, .byte = 0x5b },
		{ .addr = 0x9a6ba0, .byte = 0xe9 },
		{ .addr = 0x9a6ba1, .byte = 0x6f }
};

static const SST_Transaction subxb_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10120096, .data = 59759, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_2[] = {
		{ .addr = 0x83ecde, .byte = 0x9d },
		{ .addr = 0x83ecdf, .byte = 0x0e },
		{ .addr = 0x83ece0, .byte = 0x5b },
		{ .addr = 0x83ece1, .byte = 0xfe },
		{ .addr = 0x6475e6, .byte = 0x0f },
		{ .addr = 0x6475e7, .byte = 0x84 },
		{ .addr = 0x6475e4, .byte = 0x2d },
		{ .addr = 0x6475e5, .byte = 0x41 },
		{ .addr = 0x83ece2, .byte = 0x5d },
		{ .addr = 0x83ece3, .byte = 0x8d }
};

static const SST_RamByte subxb_final_ram_2[] = {
		{ .addr = 0x83ecde, .byte = 0x9d },
		{ .addr = 0x83ecdf, .byte = 0x0e },
		{ .addr = 0x83ece0, .byte = 0x5b },
		{ .addr = 0x83ece1, .byte = 0xfe },
		{ .addr = 0x6475e6, .byte = 0x0f },
		{ .addr = 0x6475e7, .byte = 0x84 },
		{ .addr = 0x6475e4, .byte = 0x2d },
		{ .addr = 0x6475e5, .byte = 0x32 },
		{ .addr = 0x83ece2, .byte = 0x5d },
		{ .addr = 0x83ece3, .byte = 0x8d }
};

static const SST_Transaction subxb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6583782, .data = 3840, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6583780, .data = 65, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8645858, .data = 23949, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6583780, .data = 50, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_3[] = {
		{ .addr = 0x81a8ca, .byte = 0x9b },
		{ .addr = 0x81a8cb, .byte = 0x03 },
		{ .addr = 0x81a8cc, .byte = 0x57 },
		{ .addr = 0x81a8cd, .byte = 0x9b },
		{ .addr = 0x81a8ce, .byte = 0xbd },
		{ .addr = 0x81a8cf, .byte = 0x11 }
};

static const SST_RamByte subxb_final_ram_3[] = {
		{ .addr = 0x81a8ca, .byte = 0x9b },
		{ .addr = 0x81a8cb, .byte = 0x03 },
		{ .addr = 0x81a8cc, .byte = 0x57 },
		{ .addr = 0x81a8cd, .byte = 0x9b },
		{ .addr = 0x81a8ce, .byte = 0xbd },
		{ .addr = 0x81a8cf, .byte = 0x11 }
};

static const SST_Transaction subxb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8497358, .data = 48401, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_4[] = {
		{ .addr = 0xaeffc6, .byte = 0x99 },
		{ .addr = 0xaeffc7, .byte = 0x06 },
		{ .addr = 0xaeffc8, .byte = 0xbe },
		{ .addr = 0xaeffc9, .byte = 0xdb },
		{ .addr = 0xaeffca, .byte = 0xf5 },
		{ .addr = 0xaeffcb, .byte = 0x0d }
};

static const SST_RamByte subxb_final_ram_4[] = {
		{ .addr = 0xaeffc6, .byte = 0x99 },
		{ .addr = 0xaeffc7, .byte = 0x06 },
		{ .addr = 0xaeffc8, .byte = 0xbe },
		{ .addr = 0xaeffc9, .byte = 0xdb },
		{ .addr = 0xaeffca, .byte = 0xf5 },
		{ .addr = 0xaeffcb, .byte = 0x0d }
};

static const SST_Transaction subxb_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11468746, .data = 62733, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_5[] = {
		{ .addr = 0xfa2c68, .byte = 0x9b },
		{ .addr = 0xfa2c69, .byte = 0x01 },
		{ .addr = 0xfa2c6a, .byte = 0x28 },
		{ .addr = 0xfa2c6b, .byte = 0xfd },
		{ .addr = 0xfa2c6c, .byte = 0x0f },
		{ .addr = 0xfa2c6d, .byte = 0x38 }
};

static const SST_RamByte subxb_final_ram_5[] = {
		{ .addr = 0xfa2c68, .byte = 0x9b },
		{ .addr = 0xfa2c69, .byte = 0x01 },
		{ .addr = 0xfa2c6a, .byte = 0x28 },
		{ .addr = 0xfa2c6b, .byte = 0xfd },
		{ .addr = 0xfa2c6c, .byte = 0x0f },
		{ .addr = 0xfa2c6d, .byte = 0x38 }
};

static const SST_Transaction subxb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16395372, .data = 3896, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_6[] = {
		{ .addr = 0xf80ffa, .byte = 0x91 },
		{ .addr = 0xf80ffb, .byte = 0x0a },
		{ .addr = 0xf80ffc, .byte = 0x01 },
		{ .addr = 0xf80ffd, .byte = 0x55 },
		{ .addr = 0x2d25fa, .byte = 0x0c },
		{ .addr = 0x2d25fb, .byte = 0x12 },
		{ .addr = 0xe76464, .byte = 0x15 },
		{ .addr = 0xe76465, .byte = 0xaf },
		{ .addr = 0xf80ffe, .byte = 0x48 },
		{ .addr = 0xf80fff, .byte = 0x56 }
};

static const SST_RamByte subxb_final_ram_6[] = {
		{ .addr = 0xf80ffa, .byte = 0x91 },
		{ .addr = 0xf80ffb, .byte = 0x0a },
		{ .addr = 0xf80ffc, .byte = 0x01 },
		{ .addr = 0xf80ffd, .byte = 0x55 },
		{ .addr = 0x2d25fa, .byte = 0x0c },
		{ .addr = 0x2d25fb, .byte = 0x12 },
		{ .addr = 0xe76464, .byte = 0x09 },
		{ .addr = 0xe76465, .byte = 0xaf },
		{ .addr = 0xf80ffe, .byte = 0x48 },
		{ .addr = 0xf80fff, .byte = 0x56 }
};

static const SST_Transaction subxb_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2958842, .data = 3072, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15164516, .data = 5376, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16257022, .data = 18518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15164516, .data = 2304, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_7[] = {
		{ .addr = 0xf3bede, .byte = 0x9f },
		{ .addr = 0xf3bedf, .byte = 0x0f },
		{ .addr = 0xf3bee0, .byte = 0x79 },
		{ .addr = 0xf3bee1, .byte = 0x6d },
		{ .addr = 0x54ede2, .byte = 0x85 },
		{ .addr = 0x54ede3, .byte = 0xaa },
		{ .addr = 0x54ede0, .byte = 0x8a },
		{ .addr = 0x54ede1, .byte = 0x14 },
		{ .addr = 0xf3bee2, .byte = 0x3f },
		{ .addr = 0xf3bee3, .byte = 0x2b }
};

static const SST_RamByte subxb_final_ram_7[] = {
		{ .addr = 0xf3bede, .byte = 0x9f },
		{ .addr = 0xf3bedf, .byte = 0x0f },
		{ .addr = 0xf3bee0, .byte = 0x79 },
		{ .addr = 0xf3bee1, .byte = 0x6d },
		{ .addr = 0x54ede2, .byte = 0x85 },
		{ .addr = 0x54ede3, .byte = 0xaa },
		{ .addr = 0x54ede0, .byte = 0x04 },
		{ .addr = 0x54ede1, .byte = 0x14 },
		{ .addr = 0xf3bee2, .byte = 0x3f },
		{ .addr = 0xf3bee3, .byte = 0x2b }
};

static const SST_Transaction subxb_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5565922, .data = 34048, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5565920, .data = 35328, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15974114, .data = 16171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5565920, .data = 1024, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_8[] = {
		{ .addr = 0xa931f4, .byte = 0x93 },
		{ .addr = 0xa931f5, .byte = 0x0f },
		{ .addr = 0xa931f6, .byte = 0xec },
		{ .addr = 0xa931f7, .byte = 0x0a },
		{ .addr = 0x0c43be, .byte = 0x61 },
		{ .addr = 0x0c43bf, .byte = 0xee },
		{ .addr = 0xe00496, .byte = 0x34 },
		{ .addr = 0xe00497, .byte = 0x28 },
		{ .addr = 0xa931f8, .byte = 0x40 },
		{ .addr = 0xa931f9, .byte = 0x2e }
};

static const SST_RamByte subxb_final_ram_8[] = {
		{ .addr = 0xa931f4, .byte = 0x93 },
		{ .addr = 0xa931f5, .byte = 0x0f },
		{ .addr = 0xa931f6, .byte = 0xec },
		{ .addr = 0xa931f7, .byte = 0x0a },
		{ .addr = 0x0c43be, .byte = 0x61 },
		{ .addr = 0x0c43bf, .byte = 0xee },
		{ .addr = 0xe00496, .byte = 0xd3 },
		{ .addr = 0xe00497, .byte = 0x28 },
		{ .addr = 0xa931f8, .byte = 0x40 },
		{ .addr = 0xa931f9, .byte = 0x2e }
};

static const SST_Transaction subxb_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 803774, .data = 24832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14681238, .data = 13312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11088376, .data = 16430, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14681238, .data = 54016, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_9[] = {
		{ .addr = 0xf78630, .byte = 0x95 },
		{ .addr = 0xf78631, .byte = 0x01 },
		{ .addr = 0xf78632, .byte = 0xd1 },
		{ .addr = 0xf78633, .byte = 0xc1 },
		{ .addr = 0xf78634, .byte = 0x5a },
		{ .addr = 0xf78635, .byte = 0x79 }
};

static const SST_RamByte subxb_final_ram_9[] = {
		{ .addr = 0xf78630, .byte = 0x95 },
		{ .addr = 0xf78631, .byte = 0x01 },
		{ .addr = 0xf78632, .byte = 0xd1 },
		{ .addr = 0xf78633, .byte = 0xc1 },
		{ .addr = 0xf78634, .byte = 0x5a },
		{ .addr = 0xf78635, .byte = 0x79 }
};

static const SST_Transaction subxb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16221748, .data = 23161, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_10[] = {
		{ .addr = 0x43c83a, .byte = 0x95 },
		{ .addr = 0x43c83b, .byte = 0x01 },
		{ .addr = 0x43c83c, .byte = 0xda },
		{ .addr = 0x43c83d, .byte = 0x60 },
		{ .addr = 0x43c83e, .byte = 0x5f },
		{ .addr = 0x43c83f, .byte = 0xf8 }
};

static const SST_RamByte subxb_final_ram_10[] = {
		{ .addr = 0x43c83a, .byte = 0x95 },
		{ .addr = 0x43c83b, .byte = 0x01 },
		{ .addr = 0x43c83c, .byte = 0xda },
		{ .addr = 0x43c83d, .byte = 0x60 },
		{ .addr = 0x43c83e, .byte = 0x5f },
		{ .addr = 0x43c83f, .byte = 0xf8 }
};

static const SST_Transaction subxb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4442174, .data = 24568, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_11[] = {
		{ .addr = 0x42ff1a, .byte = 0x9d },
		{ .addr = 0x42ff1b, .byte = 0x0e },
		{ .addr = 0x42ff1c, .byte = 0xc7 },
		{ .addr = 0x42ff1d, .byte = 0xa7 },
		{ .addr = 0xd2eea4, .byte = 0xfd },
		{ .addr = 0xd2eea5, .byte = 0x04 },
		{ .addr = 0xd2eea2, .byte = 0xd5 },
		{ .addr = 0xd2eea3, .byte = 0x0b },
		{ .addr = 0x42ff1e, .byte = 0x9a },
		{ .addr = 0x42ff1f, .byte = 0xf9 }
};

static const SST_RamByte subxb_final_ram_11[] = {
		{ .addr = 0x42ff1a, .byte = 0x9d },
		{ .addr = 0x42ff1b, .byte = 0x0e },
		{ .addr = 0x42ff1c, .byte = 0xc7 },
		{ .addr = 0x42ff1d, .byte = 0xa7 },
		{ .addr = 0xd2eea4, .byte = 0xfd },
		{ .addr = 0xd2eea5, .byte = 0x04 },
		{ .addr = 0xd2eea2, .byte = 0xd5 },
		{ .addr = 0xd2eea3, .byte = 0x0e },
		{ .addr = 0x42ff1e, .byte = 0x9a },
		{ .addr = 0x42ff1f, .byte = 0xf9 }
};

static const SST_Transaction subxb_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13823652, .data = 64768, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13823650, .data = 11, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4390686, .data = 39673, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13823650, .data = 14, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_12[] = {
		{ .addr = 0x7c0f96, .byte = 0x95 },
		{ .addr = 0x7c0f97, .byte = 0x0d },
		{ .addr = 0x7c0f98, .byte = 0x62 },
		{ .addr = 0x7c0f99, .byte = 0x9c },
		{ .addr = 0x411064, .byte = 0x54 },
		{ .addr = 0x411065, .byte = 0x30 },
		{ .addr = 0xe181d4, .byte = 0x27 },
		{ .addr = 0xe181d5, .byte = 0x56 },
		{ .addr = 0x7c0f9a, .byte = 0x74 },
		{ .addr = 0x7c0f9b, .byte = 0xd2 }
};

static const SST_RamByte subxb_final_ram_12[] = {
		{ .addr = 0x7c0f96, .byte = 0x95 },
		{ .addr = 0x7c0f97, .byte = 0x0d },
		{ .addr = 0x7c0f98, .byte = 0x62 },
		{ .addr = 0x7c0f99, .byte = 0x9c },
		{ .addr = 0x411064, .byte = 0x54 },
		{ .addr = 0x411065, .byte = 0x30 },
		{ .addr = 0xe181d4, .byte = 0x27 },
		{ .addr = 0xe181d5, .byte = 0x01 },
		{ .addr = 0x7c0f9a, .byte = 0x74 },
		{ .addr = 0x7c0f9b, .byte = 0xd2 }
};

static const SST_Transaction subxb_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4264036, .data = 21504, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14778836, .data = 86, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8130458, .data = 29906, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14778836, .data = 1, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_13[] = {
		{ .addr = 0x21f4b8, .byte = 0x95 },
		{ .addr = 0x21f4b9, .byte = 0x01 },
		{ .addr = 0x21f4ba, .byte = 0xb0 },
		{ .addr = 0x21f4bb, .byte = 0xb6 },
		{ .addr = 0x21f4bc, .byte = 0xe3 },
		{ .addr = 0x21f4bd, .byte = 0x65 }
};

static const SST_RamByte subxb_final_ram_13[] = {
		{ .addr = 0x21f4b8, .byte = 0x95 },
		{ .addr = 0x21f4b9, .byte = 0x01 },
		{ .addr = 0x21f4ba, .byte = 0xb0 },
		{ .addr = 0x21f4bb, .byte = 0xb6 },
		{ .addr = 0x21f4bc, .byte = 0xe3 },
		{ .addr = 0x21f4bd, .byte = 0x65 }
};

static const SST_Transaction subxb_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2225340, .data = 58213, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_14[] = {
		{ .addr = 0xe5b3dc, .byte = 0x91 },
		{ .addr = 0xe5b3dd, .byte = 0x00 },
		{ .addr = 0xe5b3de, .byte = 0x02 },
		{ .addr = 0xe5b3df, .byte = 0x92 },
		{ .addr = 0xe5b3e0, .byte = 0x4e },
		{ .addr = 0xe5b3e1, .byte = 0x47 }
};

static const SST_RamByte subxb_final_ram_14[] = {
		{ .addr = 0xe5b3dc, .byte = 0x91 },
		{ .addr = 0xe5b3dd, .byte = 0x00 },
		{ .addr = 0xe5b3de, .byte = 0x02 },
		{ .addr = 0xe5b3df, .byte = 0x92 },
		{ .addr = 0xe5b3e0, .byte = 0x4e },
		{ .addr = 0xe5b3e1, .byte = 0x47 }
};

static const SST_Transaction subxb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15053792, .data = 20039, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte subxb_initial_ram_15[] = {
		{ .addr = 0x70f1a4, .byte = 0x99 },
		{ .addr = 0x70f1a5, .byte = 0x0e },
		{ .addr = 0x70f1a6, .byte = 0xb9 },
		{ .addr = 0x70f1a7, .byte = 0xa7 },
		{ .addr = 0xbdf07c, .byte = 0x60 },
		{ .addr = 0xbdf07d, .byte = 0x49 },
		{ .addr = 0x76cca4, .byte = 0x1b },
		{ .addr = 0x76cca5, .byte = 0x71 },
		{ .addr = 0x70f1a8, .byte = 0xc0 },
		{ .addr = 0x70f1a9, .byte = 0x5e }
};

static const SST_RamByte subxb_final_ram_15[] = {
		{ .addr = 0x70f1a4, .byte = 0x99 },
		{ .addr = 0x70f1a5, .byte = 0x0e },
		{ .addr = 0x70f1a6, .byte = 0xb9 },
		{ .addr = 0x70f1a7, .byte = 0xa7 },
		{ .addr = 0xbdf07c, .byte = 0x60 },
		{ .addr = 0xbdf07d, .byte = 0x49 },
		{ .addr = 0x76cca4, .byte = 0xbb },
		{ .addr = 0x76cca5, .byte = 0x71 },
		{ .addr = 0x70f1a8, .byte = 0xc0 },
		{ .addr = 0x70f1a9, .byte = 0x5e }
};

static const SST_Transaction subxb_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12447868, .data = 24576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7785636, .data = 6912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7401896, .data = 49246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7785636, .data = 47872, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t SUBXB_TEST_COUNT = 16;
static const SST_TestCase subxb[] = {
	{
		.name = "000 SUBX.b -(A6), -(A5) 9b0e",
		.initial = {
			.regs = {
				1992413736, 2830914761, 1670552328, 1701732656, 790525025, 2778523620, 586266019, 2663743660, 2006458740, 662972021, 885725256, 2224149744, 3585966472, 1971606215, 1492285973, 12911244, 7204516, 8463, 13635960
			},
			.prefetch0 = 39694,
			.prefetch1 = 62348,
			.ram = subxb_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1992413736, 2830914761, 1670552328, 1701732656, 790525025, 2778523620, 586266019, 2663743660, 2006458740, 662972021, 885725256, 2224149744, 3585966472, 1971606214, 1492285972, 12911244, 7204516, 8450, 13635962
			},
			.prefetch0 = 62348,
			.prefetch1 = 8493,
			.ram = subxb_final_ram_0,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 SUBX.b D4, D0 9104",
		.initial = {
			.regs = {
				2444365864, 599849298, 1490890176, 261702312, 3367108730, 4136686243, 22674913, 2414730258, 2855604333, 1345633000, 3047673241, 2360286320, 1358658922, 2357643619, 717456618, 6788374, 14420328, 33816, 10120096
			},
			.prefetch0 = 37124,
			.prefetch1 = 39771,
			.ram = subxb_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2444365997, 599849298, 1490890176, 261702312, 3367108730, 4136686243, 22674913, 2414730258, 2855604333, 1345633000, 3047673241, 2360286320, 1358658922, 2357643619, 717456618, 6788374, 14420328, 33817, 10120098
			},
			.prefetch0 = 39771,
			.prefetch1 = 59759,
			.ram = subxb_final_ram_1,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 SUBX.b -(A6), -(A6) 9d0e",
		.initial = {
			.regs = {
				1211610694, 2966212525, 3530421839, 3153613557, 1421489449, 405897354, 2053103716, 1015586139, 2198940213, 1006148062, 3452209259, 1245486736, 389310410, 2235947992, 744781287, 16391954, 616196, 9220, 8645858
			},
			.prefetch0 = 40206,
			.prefetch1 = 23550,
			.ram = subxb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1211610694, 2966212525, 3530421839, 3153613557, 1421489449, 405897354, 2053103716, 1015586139, 2198940213, 1006148062, 3452209259, 1245486736, 389310410, 2235947992, 744781285, 16391954, 616196, 9216, 8645860
			},
			.prefetch0 = 23550,
			.prefetch1 = 23949,
			.ram = subxb_final_ram_2,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 SUBX.b D3, D5 9b03",
		.initial = {
			.regs = {
				740821844, 2631122419, 1002806512, 1802946654, 1337570722, 2592492795, 1741188897, 2179197067, 3034991683, 4286183179, 2399550568, 3742094467, 2550729894, 3297166955, 99633837, 6206280, 15878924, 1032, 8497358
			},
			.prefetch0 = 39683,
			.prefetch1 = 22427,
			.ram = subxb_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				740821844, 2631122419, 1002806512, 1802946654, 1337570722, 2592492701, 1741188897, 2179197067, 3034991683, 4286183179, 2399550568, 3742094467, 2550729894, 3297166955, 99633837, 6206280, 15878924, 1032, 8497360
			},
			.prefetch0 = 22427,
			.prefetch1 = 48401,
			.ram = subxb_final_ram_3,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_3,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "004 SUBX.b D6, D4 9906",
		.initial = {
			.regs = {
				2424964200, 512478292, 2405994916, 3617799704, 36201514, 2177321298, 4058967487, 1051763783, 3989000125, 3739969109, 3965043498, 1014691222, 327482502, 3826912737, 203277371, 576118, 11605668, 9474, 11468746
			},
			.prefetch0 = 39174,
			.prefetch1 = 48859,
			.ram = subxb_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2424964200, 512478292, 2405994916, 3617799704, 36201579, 2177321298, 4058967487, 1051763783, 3989000125, 3739969109, 3965043498, 1014691222, 327482502, 3826912737, 203277371, 576118, 11605668, 9489, 11468748
			},
			.prefetch0 = 48859,
			.prefetch1 = 62733,
			.ram = subxb_final_ram_4,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 SUBX.b D1, D5 9b01",
		.initial = {
			.regs = {
				534036625, 3176689089, 1961202253, 3865133109, 267875867, 587174300, 844608169, 3370511982, 2192646563, 1133427150, 1857907310, 761620647, 1306195821, 1452577799, 2433620707, 7197512, 13863964, 1303, 16395372
			},
			.prefetch0 = 39681,
			.prefetch1 = 10493,
			.ram = subxb_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				534036625, 3176689089, 1961202253, 3865133109, 267875867, 587174362, 844608169, 3370511982, 2192646563, 1133427150, 1857907310, 761620647, 1306195821, 1452577799, 2433620707, 7197512, 13863964, 1305, 16395374
			},
			.prefetch0 = 10493,
			.prefetch1 = 3896,
			.ram = subxb_final_ram_5,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 SUBX.b -(A2), -(A0) 910a",
		.initial = {
			.regs = {
				4221264124, 1442029094, 3248857616, 1148914703, 2705558034, 3433181259, 169364341, 2169060693, 1390896229, 3872206497, 70067707, 3670797817, 58553050, 1165570630, 937468412, 9352830, 3205220, 34313, 16257022
			},
			.prefetch0 = 37130,
			.prefetch1 = 341,
			.ram = subxb_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4221264124, 1442029094, 3248857616, 1148914703, 2705558034, 3433181259, 169364341, 2169060693, 1390896228, 3872206497, 70067706, 3670797817, 58553050, 1165570630, 937468412, 9352830, 3205220, 34304, 16257024
			},
			.prefetch0 = 341,
			.prefetch1 = 18518,
			.ram = subxb_final_ram_6,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_6,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "007 SUBX.b -(A7), -(A7) 9f0f",
		.initial = {
			.regs = {
				2861594633, 2481668495, 228648925, 1979631452, 2861213469, 4189916886, 2003775763, 2893585976, 1405806097, 4182750156, 3650385727, 3194127694, 334466023, 3469155979, 1612261748, 5565924, 3288454, 1557, 15974114
			},
			.prefetch0 = 40719,
			.prefetch1 = 31085,
			.ram = subxb_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2861594633, 2481668495, 228648925, 1979631452, 2861213469, 4189916886, 2003775763, 2893585976, 1405806097, 4182750156, 3650385727, 3194127694, 334466023, 3469155979, 1612261748, 5565920, 3288454, 1536, 15974116
			},
			.prefetch0 = 31085,
			.prefetch1 = 16171,
			.ram = subxb_final_ram_7,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_7,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "008 SUBX.b -(A7), -(A1) 930f",
		.initial = {
			.regs = {
				2709686885, 2167787837, 2995578735, 4075970474, 654423976, 296113478, 3759729119, 2097066145, 1101350717, 450888855, 492381958, 3690082707, 1429521987, 3134973591, 2386301024, 5998916, 803776, 41226, 11088376
			},
			.prefetch0 = 37647,
			.prefetch1 = 60426,
			.ram = subxb_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2709686885, 2167787837, 2995578735, 4075970474, 654423976, 296113478, 3759729119, 2097066145, 1101350717, 450888854, 492381958, 3690082707, 1429521987, 3134973591, 2386301024, 5998916, 803774, 41241, 11088378
			},
			.prefetch0 = 60426,
			.prefetch1 = 16430,
			.ram = subxb_final_ram_8,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_8,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "009 SUBX.b D1, D2 9501",
		.initial = {
			.regs = {
				1867413390, 1012903167, 3602318082, 1230070716, 2310266902, 225222219, 521399861, 1137172374, 1414487996, 1214537977, 3106398509, 452664874, 1116667770, 2525452861, 1717723436, 4401198, 10676828, 42245, 16221748
			},
			.prefetch0 = 38145,
			.prefetch1 = 53697,
			.ram = subxb_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1867413390, 1012903167, 3602318083, 1230070716, 2310266902, 225222219, 521399861, 1137172374, 1414487996, 1214537977, 3106398509, 452664874, 1116667770, 2525452861, 1717723436, 4401198, 10676828, 42257, 16221750
			},
			.prefetch0 = 53697,
			.prefetch1 = 23161,
			.ram = subxb_final_ram_9,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_9,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "010 SUBX.b D1, D2 9501",
		.initial = {
			.regs = {
				4178029317, 4074232871, 3186953870, 3031028332, 2172205291, 10313829, 2935935128, 1370769804, 2835012265, 1555371897, 1723404199, 3349638664, 3237328006, 1524709839, 1334047129, 661468, 9477700, 8971, 4442174
			},
			.prefetch0 = 38145,
			.prefetch1 = 55904,
			.ram = subxb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4178029317, 4074232871, 3186953831, 3031028332, 2172205291, 10313829, 2935935128, 1370769804, 2835012265, 1555371897, 1723404199, 3349638664, 3237328006, 1524709839, 1334047129, 661468, 9477700, 8962, 4442176
			},
			.prefetch0 = 55904,
			.prefetch1 = 24568,
			.ram = subxb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 SUBX.b -(A6), -(A6) 9d0e",
		.initial = {
			.regs = {
				3863109217, 1970268534, 875227949, 3880996202, 1223095743, 1751128033, 3478647567, 331098439, 2128539750, 3210871653, 2227436342, 2362642078, 1122911722, 803945254, 1423109797, 16157514, 5878082, 33283, 4390686
			},
			.prefetch0 = 40206,
			.prefetch1 = 51111,
			.ram = subxb_initial_ram_11,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3863109217, 1970268534, 875227949, 3880996202, 1223095743, 1751128033, 3478647567, 331098439, 2128539750, 3210871653, 2227436342, 2362642078, 1122911722, 803945254, 1423109795, 16157514, 5878082, 33297, 4390688
			},
			.prefetch0 = 51111,
			.prefetch1 = 39673,
			.ram = subxb_final_ram_11,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 SUBX.b -(A5), -(A2) 950d",
		.initial = {
			.regs = {
				2033999174, 68369446, 457908084, 3704425275, 2577813820, 280404245, 1452093190, 1093423194, 1096050605, 3811713545, 1675723222, 3223633625, 2612007236, 104927333, 3373544255, 12128566, 4335840, 34579, 8130458
			},
			.prefetch0 = 38157,
			.prefetch1 = 25244,
			.ram = subxb_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2033999174, 68369446, 457908084, 3704425275, 2577813820, 280404245, 1452093190, 1093423194, 1096050605, 3811713545, 1675723221, 3223633625, 2612007236, 104927332, 3373544255, 12128566, 4335840, 34560, 8130460
			},
			.prefetch0 = 25244,
			.prefetch1 = 29906,
			.ram = subxb_final_ram_12,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_12,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "013 SUBX.b D1, D2 9501",
		.initial = {
			.regs = {
				1653587429, 3951992753, 3321928186, 4006449992, 1539911700, 3085503673, 296963756, 947811430, 3687077000, 1548989861, 577178179, 3271040466, 3176967109, 771180111, 2809297228, 4553928, 3977852, 34072, 2225340
			},
			.prefetch0 = 38145,
			.prefetch1 = 45238,
			.ram = subxb_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1653587429, 3951992753, 3321928008, 4006449992, 1539911700, 3085503673, 296963756, 947811430, 3687077000, 1548989861, 577178179, 3271040466, 3176967109, 771180111, 2809297228, 4553928, 3977852, 34048, 2225342
			},
			.prefetch0 = 45238,
			.prefetch1 = 58213,
			.ram = subxb_final_ram_13,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_13,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "014 SUBX.b D0, D0 9100",
		.initial = {
			.regs = {
				982463872, 2474648306, 561097362, 2392632114, 2254172612, 1968681301, 1827572952, 811511809, 2753372520, 4217045275, 4290766093, 516566475, 2985484201, 1296044040, 3954779990, 10219872, 11082512, 33299, 15053792
			},
			.prefetch0 = 37120,
			.prefetch1 = 658,
			.ram = subxb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				982463999, 2474648306, 561097362, 2392632114, 2254172612, 1968681301, 1827572952, 811511809, 2753372520, 4217045275, 4290766093, 516566475, 2985484201, 1296044040, 3954779990, 10219872, 11082512, 33305, 15053794
			},
			.prefetch0 = 658,
			.prefetch1 = 20039,
			.ram = subxb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = subxb_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 SUBX.b -(A6), -(A4) 990e",
		.initial = {
			.regs = {
				2633445256, 2889671766, 1095731633, 2669030099, 3101107467, 3925844827, 3474348089, 3078744309, 731660400, 845272919, 554532285, 2404163853, 2474036389, 1502277637, 1757278333, 4726432, 2287414, 41216, 7401896
			},
			.prefetch0 = 39182,
			.prefetch1 = 47527,
			.ram = subxb_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2633445256, 2889671766, 1095731633, 2669030099, 3101107467, 3925844827, 3474348089, 3078744309, 731660400, 845272919, 554532285, 2404163853, 2474036388, 1502277637, 1757278332, 4726432, 2287414, 41241, 7401898
			},
			.prefetch0 = 47527,
			.prefetch1 = 49246,
			.ram = subxb_final_ram_15,
			.ram_len = 10,
		},
		.transactions = subxb_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_SUBXB_H */