#ifndef RBT_BSR_H
#define RBT_BSR_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte bsr_initial_ram_0[] = {
		{ .addr = 0x4d6d6c, .byte = 0x61 },
		{ .addr = 0x4d6d6d, .byte = 0xec },
		{ .addr = 0x4d6d6e, .byte = 0x8b },
		{ .addr = 0x4d6d6f, .byte = 0xa2 },
		{ .addr = 0x4d6d5a, .byte = 0xc9 },
		{ .addr = 0x4d6d5b, .byte = 0x2d },
		{ .addr = 0x4d6d5c, .byte = 0x65 },
		{ .addr = 0x4d6d5d, .byte = 0xa8 }
};

static const SST_RamByte bsr_final_ram_0[] = {
		{ .addr = 0x4d6d6c, .byte = 0x61 },
		{ .addr = 0x4d6d6d, .byte = 0xec },
		{ .addr = 0x4d6d6e, .byte = 0x8b },
		{ .addr = 0x4d6d6f, .byte = 0xa2 },
		{ .addr = 0x71459c, .byte = 0x00 },
		{ .addr = 0x71459d, .byte = 0x4d },
		{ .addr = 0x71459e, .byte = 0x6d },
		{ .addr = 0x71459f, .byte = 0x6e },
		{ .addr = 0x4d6d5a, .byte = 0xc9 },
		{ .addr = 0x4d6d5b, .byte = 0x2d },
		{ .addr = 0x4d6d5c, .byte = 0x65 },
		{ .addr = 0x4d6d5d, .byte = 0xa8 }
};

static const SST_Transaction bsr_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7423388, .data = 77, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7423390, .data = 28014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5074266, .data = 51501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5074268, .data = 26024, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_1[] = {
		{ .addr = 0xe5b5b8, .byte = 0x61 },
		{ .addr = 0xe5b5b9, .byte = 0x84 },
		{ .addr = 0xe5b5ba, .byte = 0xbd },
		{ .addr = 0xe5b5bb, .byte = 0xa8 },
		{ .addr = 0xe5b53e, .byte = 0x1b },
		{ .addr = 0xe5b53f, .byte = 0x9b },
		{ .addr = 0xe5b540, .byte = 0x65 },
		{ .addr = 0xe5b541, .byte = 0xac }
};

static const SST_RamByte bsr_final_ram_1[] = {
		{ .addr = 0xe5b5b8, .byte = 0x61 },
		{ .addr = 0xe5b5b9, .byte = 0x84 },
		{ .addr = 0xe5b5ba, .byte = 0xbd },
		{ .addr = 0xe5b5bb, .byte = 0xa8 },
		{ .addr = 0xbde0ec, .byte = 0x00 },
		{ .addr = 0xbde0ed, .byte = 0xe5 },
		{ .addr = 0xbde0ee, .byte = 0xb5 },
		{ .addr = 0xbde0ef, .byte = 0xba },
		{ .addr = 0xe5b53e, .byte = 0x1b },
		{ .addr = 0xe5b53f, .byte = 0x9b },
		{ .addr = 0xe5b540, .byte = 0x65 },
		{ .addr = 0xe5b541, .byte = 0xac }
};

static const SST_Transaction bsr_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12443884, .data = 229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12443886, .data = 46522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15054142, .data = 7067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15054144, .data = 26028, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_2[] = {
		{ .addr = 0xeeb266, .byte = 0x61 },
		{ .addr = 0xeeb267, .byte = 0x72 },
		{ .addr = 0xeeb268, .byte = 0xbd },
		{ .addr = 0xeeb269, .byte = 0xf0 },
		{ .addr = 0xeeb2da, .byte = 0xaf },
		{ .addr = 0xeeb2db, .byte = 0xd3 },
		{ .addr = 0xeeb2dc, .byte = 0x21 },
		{ .addr = 0xeeb2dd, .byte = 0x72 }
};

static const SST_RamByte bsr_final_ram_2[] = {
		{ .addr = 0xeeb266, .byte = 0x61 },
		{ .addr = 0xeeb267, .byte = 0x72 },
		{ .addr = 0xeeb268, .byte = 0xbd },
		{ .addr = 0xeeb269, .byte = 0xf0 },
		{ .addr = 0x39ff52, .byte = 0x00 },
		{ .addr = 0x39ff53, .byte = 0xee },
		{ .addr = 0x39ff54, .byte = 0xb2 },
		{ .addr = 0x39ff55, .byte = 0x68 },
		{ .addr = 0xeeb2da, .byte = 0xaf },
		{ .addr = 0xeeb2db, .byte = 0xd3 },
		{ .addr = 0xeeb2dc, .byte = 0x21 },
		{ .addr = 0xeeb2dd, .byte = 0x72 }
};

static const SST_Transaction bsr_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3800914, .data = 238, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3800916, .data = 45672, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15643354, .data = 45011, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15643356, .data = 8562, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_3[] = {
		{ .addr = 0x9d0e6a, .byte = 0x61 },
		{ .addr = 0x9d0e6b, .byte = 0xe5 },
		{ .addr = 0x9d0e6c, .byte = 0xca },
		{ .addr = 0x9d0e6d, .byte = 0x87 },
		{ .addr = 0x00000c, .byte = 0xa9 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0x2c7906, .byte = 0xd6 },
		{ .addr = 0x2c7907, .byte = 0xdd },
		{ .addr = 0x2c7908, .byte = 0xa3 },
		{ .addr = 0x2c7909, .byte = 0xdd }
};

static const SST_RamByte bsr_final_ram_3[] = {
		{ .addr = 0x9d0e6a, .byte = 0x61 },
		{ .addr = 0x9d0e6b, .byte = 0xe5 },
		{ .addr = 0x9d0e6c, .byte = 0xca },
		{ .addr = 0x9d0e6d, .byte = 0x87 },
		{ .addr = 0xb72556, .byte = 0x00 },
		{ .addr = 0xb72557, .byte = 0x9d },
		{ .addr = 0xb72558, .byte = 0x0e },
		{ .addr = 0xb72559, .byte = 0x6c },
		{ .addr = 0x6aae52, .byte = 0x0e },
		{ .addr = 0x6aae53, .byte = 0x51 },
		{ .addr = 0x6aae4e, .byte = 0x03 },
		{ .addr = 0x6aae4f, .byte = 0x0f },
		{ .addr = 0x6aae50, .byte = 0x00 },
		{ .addr = 0x6aae51, .byte = 0x9d },
		{ .addr = 0x6aae4c, .byte = 0x61 },
		{ .addr = 0x6aae4d, .byte = 0xe5 },
		{ .addr = 0x6aae4a, .byte = 0x0e },
		{ .addr = 0x6aae4b, .byte = 0x51 },
		{ .addr = 0x6aae46, .byte = 0x61 },
		{ .addr = 0x6aae47, .byte = 0xf2 },
		{ .addr = 0x6aae48, .byte = 0x00 },
		{ .addr = 0x6aae49, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0xa9 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x79 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0x2c7906, .byte = 0xd6 },
		{ .addr = 0x2c7907, .byte = 0xdd },
		{ .addr = 0x2c7908, .byte = 0xa3 },
		{ .addr = 0x2c7909, .byte = 0xdd }
};

static const SST_Transaction bsr_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12002646, .data = 157, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12002648, .data = 3692, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10292816, .data = 36103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6991442, .data = 3665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6991438, .data = 783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6991440, .data = 157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6991436, .data = 25061, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6991434, .data = 3665, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6991430, .data = 25074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6991432, .data = 157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30982, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2914566, .data = 55005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2914568, .data = 41949, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_4[] = {
		{ .addr = 0xd0450e, .byte = 0x61 },
		{ .addr = 0xd0450f, .byte = 0x95 },
		{ .addr = 0xd04510, .byte = 0x18 },
		{ .addr = 0xd04511, .byte = 0x4e },
		{ .addr = 0x00000c, .byte = 0xe8 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xe8524e, .byte = 0x2f },
		{ .addr = 0xe8524f, .byte = 0x24 },
		{ .addr = 0xe85250, .byte = 0x9a },
		{ .addr = 0xe85251, .byte = 0x9a }
};

static const SST_RamByte bsr_final_ram_4[] = {
		{ .addr = 0xd0450e, .byte = 0x61 },
		{ .addr = 0xd0450f, .byte = 0x95 },
		{ .addr = 0xd04510, .byte = 0x18 },
		{ .addr = 0xd04511, .byte = 0x4e },
		{ .addr = 0xd73ed4, .byte = 0x00 },
		{ .addr = 0xd73ed5, .byte = 0xd0 },
		{ .addr = 0xd73ed6, .byte = 0x45 },
		{ .addr = 0xd73ed7, .byte = 0x10 },
		{ .addr = 0x1ac79e, .byte = 0x44 },
		{ .addr = 0x1ac79f, .byte = 0xa5 },
		{ .addr = 0x1ac79a, .byte = 0x84 },
		{ .addr = 0x1ac79b, .byte = 0x00 },
		{ .addr = 0x1ac79c, .byte = 0x00 },
		{ .addr = 0x1ac79d, .byte = 0xd0 },
		{ .addr = 0x1ac798, .byte = 0x61 },
		{ .addr = 0x1ac799, .byte = 0x95 },
		{ .addr = 0x1ac796, .byte = 0x44 },
		{ .addr = 0x1ac797, .byte = 0xa5 },
		{ .addr = 0x1ac792, .byte = 0x61 },
		{ .addr = 0x1ac793, .byte = 0x92 },
		{ .addr = 0x1ac794, .byte = 0x00 },
		{ .addr = 0x1ac795, .byte = 0xd0 },
		{ .addr = 0x00000c, .byte = 0xe8 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x52 },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0xe8524e, .byte = 0x2f },
		{ .addr = 0xe8524f, .byte = 0x24 },
		{ .addr = 0xe85250, .byte = 0x9a },
		{ .addr = 0xe85251, .byte = 0x9a }
};

static const SST_Transaction bsr_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14106324, .data = 208, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14106326, .data = 17680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13649060, .data = 56026, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1755038, .data = 17573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1755034, .data = 33792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1755036, .data = 208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1755032, .data = 24981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1755030, .data = 17573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1755026, .data = 24978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1755028, .data = 208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 59624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 21070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15225422, .data = 12068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15225424, .data = 39578, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_5[] = {
		{ .addr = 0xe9993e, .byte = 0x61 },
		{ .addr = 0xe9993f, .byte = 0xfd },
		{ .addr = 0xe99940, .byte = 0x0b },
		{ .addr = 0xe99941, .byte = 0x3e },
		{ .addr = 0x00000c, .byte = 0xc5 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x5e },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0x465e6e, .byte = 0xf7 },
		{ .addr = 0x465e6f, .byte = 0x06 },
		{ .addr = 0x465e70, .byte = 0x39 },
		{ .addr = 0x465e71, .byte = 0x14 }
};

static const SST_RamByte bsr_final_ram_5[] = {
		{ .addr = 0xe9993e, .byte = 0x61 },
		{ .addr = 0xe9993f, .byte = 0xfd },
		{ .addr = 0xe99940, .byte = 0x0b },
		{ .addr = 0xe99941, .byte = 0x3e },
		{ .addr = 0x7eabac, .byte = 0x00 },
		{ .addr = 0x7eabad, .byte = 0xe9 },
		{ .addr = 0x7eabae, .byte = 0x99 },
		{ .addr = 0x7eabaf, .byte = 0x40 },
		{ .addr = 0x7eabaa, .byte = 0x99 },
		{ .addr = 0x7eabab, .byte = 0x3d },
		{ .addr = 0x7eaba6, .byte = 0x22 },
		{ .addr = 0x7eaba7, .byte = 0x06 },
		{ .addr = 0x7eaba8, .byte = 0x00 },
		{ .addr = 0x7eaba9, .byte = 0xe9 },
		{ .addr = 0x7eaba4, .byte = 0x61 },
		{ .addr = 0x7eaba5, .byte = 0xfd },
		{ .addr = 0x7eaba2, .byte = 0x99 },
		{ .addr = 0x7eaba3, .byte = 0x3d },
		{ .addr = 0x7eab9e, .byte = 0x61 },
		{ .addr = 0x7eab9f, .byte = 0xf6 },
		{ .addr = 0x7eaba0, .byte = 0x00 },
		{ .addr = 0x7eaba1, .byte = 0xe9 },
		{ .addr = 0x00000c, .byte = 0xc5 },
		{ .addr = 0x00000d, .byte = 0x46 },
		{ .addr = 0x00000e, .byte = 0x5e },
		{ .addr = 0x00000f, .byte = 0x6e },
		{ .addr = 0x465e6e, .byte = 0xf7 },
		{ .addr = 0x465e6f, .byte = 0x06 },
		{ .addr = 0x465e70, .byte = 0x39 },
		{ .addr = 0x465e71, .byte = 0x14 }
};

static const SST_Transaction bsr_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301484, .data = 233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301486, .data = 39232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15309116, .data = 28865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301482, .data = 39229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301478, .data = 8710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301480, .data = 233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301476, .data = 25085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301474, .data = 39229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301470, .data = 25078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8301472, .data = 233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4611694, .data = 63238, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4611696, .data = 14612, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_6[] = {
		{ .addr = 0x0a284c, .byte = 0x61 },
		{ .addr = 0x0a284d, .byte = 0xa2 },
		{ .addr = 0x0a284e, .byte = 0xf7 },
		{ .addr = 0x0a284f, .byte = 0x8a },
		{ .addr = 0x0a27f0, .byte = 0x97 },
		{ .addr = 0x0a27f1, .byte = 0xf9 },
		{ .addr = 0x0a27f2, .byte = 0xae },
		{ .addr = 0x0a27f3, .byte = 0xfe }
};

static const SST_RamByte bsr_final_ram_6[] = {
		{ .addr = 0x0a284c, .byte = 0x61 },
		{ .addr = 0x0a284d, .byte = 0xa2 },
		{ .addr = 0x0a284e, .byte = 0xf7 },
		{ .addr = 0x0a284f, .byte = 0x8a },
		{ .addr = 0xb8dfd0, .byte = 0x00 },
		{ .addr = 0xb8dfd1, .byte = 0x0a },
		{ .addr = 0xb8dfd2, .byte = 0x28 },
		{ .addr = 0xb8dfd3, .byte = 0x4e },
		{ .addr = 0x0a27f0, .byte = 0x97 },
		{ .addr = 0x0a27f1, .byte = 0xf9 },
		{ .addr = 0x0a27f2, .byte = 0xae },
		{ .addr = 0x0a27f3, .byte = 0xfe }
};

static const SST_Transaction bsr_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12115920, .data = 10, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12115922, .data = 10318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 665584, .data = 38905, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 665586, .data = 44798, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_7[] = {
		{ .addr = 0x8d4f76, .byte = 0x61 },
		{ .addr = 0x8d4f77, .byte = 0xb0 },
		{ .addr = 0x8d4f78, .byte = 0x57 },
		{ .addr = 0x8d4f79, .byte = 0xcd },
		{ .addr = 0x8d4f28, .byte = 0x1f },
		{ .addr = 0x8d4f29, .byte = 0x34 },
		{ .addr = 0x8d4f2a, .byte = 0x20 },
		{ .addr = 0x8d4f2b, .byte = 0x45 }
};

static const SST_RamByte bsr_final_ram_7[] = {
		{ .addr = 0x8d4f76, .byte = 0x61 },
		{ .addr = 0x8d4f77, .byte = 0xb0 },
		{ .addr = 0x8d4f78, .byte = 0x57 },
		{ .addr = 0x8d4f79, .byte = 0xcd },
		{ .addr = 0x2e44f8, .byte = 0x00 },
		{ .addr = 0x2e44f9, .byte = 0x8d },
		{ .addr = 0x2e44fa, .byte = 0x4f },
		{ .addr = 0x2e44fb, .byte = 0x78 },
		{ .addr = 0x8d4f28, .byte = 0x1f },
		{ .addr = 0x8d4f29, .byte = 0x34 },
		{ .addr = 0x8d4f2a, .byte = 0x20 },
		{ .addr = 0x8d4f2b, .byte = 0x45 }
};

static const SST_Transaction bsr_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3032312, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3032314, .data = 20344, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9260840, .data = 7988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9260842, .data = 8261, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_8[] = {
		{ .addr = 0x1c9cb8, .byte = 0x61 },
		{ .addr = 0x1c9cb9, .byte = 0x65 },
		{ .addr = 0x1c9cba, .byte = 0x24 },
		{ .addr = 0x1c9cbb, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0xfe },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0x4a },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x304ae4, .byte = 0xba },
		{ .addr = 0x304ae5, .byte = 0xc1 },
		{ .addr = 0x304ae6, .byte = 0xd9 },
		{ .addr = 0x304ae7, .byte = 0x00 }
};

static const SST_RamByte bsr_final_ram_8[] = {
		{ .addr = 0x1c9cb8, .byte = 0x61 },
		{ .addr = 0x1c9cb9, .byte = 0x65 },
		{ .addr = 0x1c9cba, .byte = 0x24 },
		{ .addr = 0x1c9cbb, .byte = 0x09 },
		{ .addr = 0x420250, .byte = 0x00 },
		{ .addr = 0x420251, .byte = 0x1c },
		{ .addr = 0x420252, .byte = 0x9c },
		{ .addr = 0x420253, .byte = 0xba },
		{ .addr = 0x5af3c6, .byte = 0x9d },
		{ .addr = 0x5af3c7, .byte = 0x1f },
		{ .addr = 0x5af3c2, .byte = 0x82 },
		{ .addr = 0x5af3c3, .byte = 0x13 },
		{ .addr = 0x5af3c4, .byte = 0x00 },
		{ .addr = 0x5af3c5, .byte = 0x1c },
		{ .addr = 0x5af3c0, .byte = 0x61 },
		{ .addr = 0x5af3c1, .byte = 0x65 },
		{ .addr = 0x5af3be, .byte = 0x9d },
		{ .addr = 0x5af3bf, .byte = 0x1f },
		{ .addr = 0x5af3ba, .byte = 0x61 },
		{ .addr = 0x5af3bb, .byte = 0x72 },
		{ .addr = 0x5af3bc, .byte = 0x00 },
		{ .addr = 0x5af3bd, .byte = 0x1c },
		{ .addr = 0x00000c, .byte = 0xfe },
		{ .addr = 0x00000d, .byte = 0x30 },
		{ .addr = 0x00000e, .byte = 0x4a },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x304ae4, .byte = 0xba },
		{ .addr = 0x304ae5, .byte = 0xc1 },
		{ .addr = 0x304ae6, .byte = 0xd9 },
		{ .addr = 0x304ae7, .byte = 0x00 }
};

static const SST_Transaction bsr_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4325968, .data = 28, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4325970, .data = 40122, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1875230, .data = 893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5960646, .data = 40223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5960642, .data = 33299, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5960644, .data = 28, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5960640, .data = 24933, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5960638, .data = 40223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5960634, .data = 24946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5960636, .data = 28, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 65072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 19172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3164900, .data = 47809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3164902, .data = 55552, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_9[] = {
		{ .addr = 0x63bcd4, .byte = 0x61 },
		{ .addr = 0x63bcd5, .byte = 0x7c },
		{ .addr = 0x63bcd6, .byte = 0x73 },
		{ .addr = 0x63bcd7, .byte = 0xa1 },
		{ .addr = 0x63bd52, .byte = 0x99 },
		{ .addr = 0x63bd53, .byte = 0xc8 },
		{ .addr = 0x63bd54, .byte = 0x7f },
		{ .addr = 0x63bd55, .byte = 0x41 }
};

static const SST_RamByte bsr_final_ram_9[] = {
		{ .addr = 0x63bcd4, .byte = 0x61 },
		{ .addr = 0x63bcd5, .byte = 0x7c },
		{ .addr = 0x63bcd6, .byte = 0x73 },
		{ .addr = 0x63bcd7, .byte = 0xa1 },
		{ .addr = 0x956fe0, .byte = 0x00 },
		{ .addr = 0x956fe1, .byte = 0x63 },
		{ .addr = 0x956fe2, .byte = 0xbc },
		{ .addr = 0x956fe3, .byte = 0xd6 },
		{ .addr = 0x63bd52, .byte = 0x99 },
		{ .addr = 0x63bd53, .byte = 0xc8 },
		{ .addr = 0x63bd54, .byte = 0x7f },
		{ .addr = 0x63bd55, .byte = 0x41 }
};

static const SST_Transaction bsr_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9793504, .data = 99, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9793506, .data = 48342, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6536530, .data = 39368, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6536532, .data = 32577, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_10[] = {
		{ .addr = 0x2a6db0, .byte = 0x61 },
		{ .addr = 0x2a6db1, .byte = 0x71 },
		{ .addr = 0x2a6db2, .byte = 0x86 },
		{ .addr = 0x2a6db3, .byte = 0x72 },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0xb6 },
		{ .addr = 0x00000e, .byte = 0x8b },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xb68b0a, .byte = 0xfd },
		{ .addr = 0xb68b0b, .byte = 0x4e },
		{ .addr = 0xb68b0c, .byte = 0x31 },
		{ .addr = 0xb68b0d, .byte = 0x1b }
};

static const SST_RamByte bsr_final_ram_10[] = {
		{ .addr = 0x2a6db0, .byte = 0x61 },
		{ .addr = 0x2a6db1, .byte = 0x71 },
		{ .addr = 0x2a6db2, .byte = 0x86 },
		{ .addr = 0x2a6db3, .byte = 0x72 },
		{ .addr = 0x38f656, .byte = 0x00 },
		{ .addr = 0x38f657, .byte = 0x2a },
		{ .addr = 0x38f658, .byte = 0x6d },
		{ .addr = 0x38f659, .byte = 0xb2 },
		{ .addr = 0xd49ff2, .byte = 0x6e },
		{ .addr = 0xd49ff3, .byte = 0x23 },
		{ .addr = 0xd49fee, .byte = 0x82 },
		{ .addr = 0xd49fef, .byte = 0x1d },
		{ .addr = 0xd49ff0, .byte = 0x00 },
		{ .addr = 0xd49ff1, .byte = 0x2a },
		{ .addr = 0xd49fec, .byte = 0x61 },
		{ .addr = 0xd49fed, .byte = 0x71 },
		{ .addr = 0xd49fea, .byte = 0x6e },
		{ .addr = 0xd49feb, .byte = 0x23 },
		{ .addr = 0xd49fe6, .byte = 0x61 },
		{ .addr = 0xd49fe7, .byte = 0x72 },
		{ .addr = 0xd49fe8, .byte = 0x00 },
		{ .addr = 0xd49fe9, .byte = 0x2a },
		{ .addr = 0x00000c, .byte = 0xfa },
		{ .addr = 0x00000d, .byte = 0xb6 },
		{ .addr = 0x00000e, .byte = 0x8b },
		{ .addr = 0x00000f, .byte = 0x0a },
		{ .addr = 0xb68b0a, .byte = 0xfd },
		{ .addr = 0xb68b0b, .byte = 0x4e },
		{ .addr = 0xb68b0c, .byte = 0x31 },
		{ .addr = 0xb68b0d, .byte = 0x1b }
};

static const SST_Transaction bsr_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3733078, .data = 42, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3733080, .data = 28082, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2780706, .data = 55478, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13934578, .data = 28195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13934574, .data = 33309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13934576, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13934572, .data = 24945, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13934570, .data = 28195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13934566, .data = 24946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13934568, .data = 42, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 35594, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11963146, .data = 64846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11963148, .data = 12571, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_11[] = {
		{ .addr = 0xbffe92, .byte = 0x61 },
		{ .addr = 0xbffe93, .byte = 0xb4 },
		{ .addr = 0xbffe94, .byte = 0x2b },
		{ .addr = 0xbffe95, .byte = 0x8d },
		{ .addr = 0xbffe48, .byte = 0xeb },
		{ .addr = 0xbffe49, .byte = 0xb3 },
		{ .addr = 0xbffe4a, .byte = 0xfd },
		{ .addr = 0xbffe4b, .byte = 0xdd }
};

static const SST_RamByte bsr_final_ram_11[] = {
		{ .addr = 0xbffe92, .byte = 0x61 },
		{ .addr = 0xbffe93, .byte = 0xb4 },
		{ .addr = 0xbffe94, .byte = 0x2b },
		{ .addr = 0xbffe95, .byte = 0x8d },
		{ .addr = 0x2d44b4, .byte = 0x00 },
		{ .addr = 0x2d44b5, .byte = 0xbf },
		{ .addr = 0x2d44b6, .byte = 0xfe },
		{ .addr = 0x2d44b7, .byte = 0x94 },
		{ .addr = 0xbffe48, .byte = 0xeb },
		{ .addr = 0xbffe49, .byte = 0xb3 },
		{ .addr = 0xbffe4a, .byte = 0xfd },
		{ .addr = 0xbffe4b, .byte = 0xdd }
};

static const SST_Transaction bsr_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2966708, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2966710, .data = 65172, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12582472, .data = 60339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12582474, .data = 64989, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_12[] = {
		{ .addr = 0x133944, .byte = 0x61 },
		{ .addr = 0x133945, .byte = 0x8f },
		{ .addr = 0x133946, .byte = 0x84 },
		{ .addr = 0x133947, .byte = 0xe6 },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0x0d },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x480d80, .byte = 0x43 },
		{ .addr = 0x480d81, .byte = 0xe9 },
		{ .addr = 0x480d82, .byte = 0x34 },
		{ .addr = 0x480d83, .byte = 0x90 }
};

static const SST_RamByte bsr_final_ram_12[] = {
		{ .addr = 0x133944, .byte = 0x61 },
		{ .addr = 0x133945, .byte = 0x8f },
		{ .addr = 0x133946, .byte = 0x84 },
		{ .addr = 0x133947, .byte = 0xe6 },
		{ .addr = 0x77ef24, .byte = 0x00 },
		{ .addr = 0x77ef25, .byte = 0x13 },
		{ .addr = 0x77ef26, .byte = 0x39 },
		{ .addr = 0x77ef27, .byte = 0x46 },
		{ .addr = 0x823c6e, .byte = 0x38 },
		{ .addr = 0x823c6f, .byte = 0xd5 },
		{ .addr = 0x823c6a, .byte = 0x85 },
		{ .addr = 0x823c6b, .byte = 0x01 },
		{ .addr = 0x823c6c, .byte = 0x00 },
		{ .addr = 0x823c6d, .byte = 0x13 },
		{ .addr = 0x823c68, .byte = 0x61 },
		{ .addr = 0x823c69, .byte = 0x8f },
		{ .addr = 0x823c66, .byte = 0x38 },
		{ .addr = 0x823c67, .byte = 0xd5 },
		{ .addr = 0x823c62, .byte = 0x61 },
		{ .addr = 0x823c63, .byte = 0x92 },
		{ .addr = 0x823c64, .byte = 0x00 },
		{ .addr = 0x823c65, .byte = 0x13 },
		{ .addr = 0x00000c, .byte = 0x3d },
		{ .addr = 0x00000d, .byte = 0x48 },
		{ .addr = 0x00000e, .byte = 0x0d },
		{ .addr = 0x00000f, .byte = 0x80 },
		{ .addr = 0x480d80, .byte = 0x43 },
		{ .addr = 0x480d81, .byte = 0xe9 },
		{ .addr = 0x480d82, .byte = 0x34 },
		{ .addr = 0x480d83, .byte = 0x90 }
};

static const SST_Transaction bsr_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7860004, .data = 19, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7860006, .data = 14662, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1259732, .data = 31021, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8535150, .data = 14549, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8535146, .data = 34049, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8535148, .data = 19, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8535144, .data = 24975, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8535142, .data = 14549, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8535138, .data = 24978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8535140, .data = 19, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 3456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4722048, .data = 17385, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4722050, .data = 13456, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_13[] = {
		{ .addr = 0x1ef5e0, .byte = 0x61 },
		{ .addr = 0x1ef5e1, .byte = 0x9b },
		{ .addr = 0x1ef5e2, .byte = 0x61 },
		{ .addr = 0x1ef5e3, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0x01 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x120150, .byte = 0xb8 },
		{ .addr = 0x120151, .byte = 0x29 },
		{ .addr = 0x120152, .byte = 0xe2 },
		{ .addr = 0x120153, .byte = 0x7f }
};

static const SST_RamByte bsr_final_ram_13[] = {
		{ .addr = 0x1ef5e0, .byte = 0x61 },
		{ .addr = 0x1ef5e1, .byte = 0x9b },
		{ .addr = 0x1ef5e2, .byte = 0x61 },
		{ .addr = 0x1ef5e3, .byte = 0x30 },
		{ .addr = 0xcc0b1c, .byte = 0x00 },
		{ .addr = 0xcc0b1d, .byte = 0x1e },
		{ .addr = 0xcc0b1e, .byte = 0xf5 },
		{ .addr = 0xcc0b1f, .byte = 0xe2 },
		{ .addr = 0x460370, .byte = 0xf5 },
		{ .addr = 0x460371, .byte = 0x7d },
		{ .addr = 0x46036c, .byte = 0x80 },
		{ .addr = 0x46036d, .byte = 0x18 },
		{ .addr = 0x46036e, .byte = 0x00 },
		{ .addr = 0x46036f, .byte = 0x1e },
		{ .addr = 0x46036a, .byte = 0x61 },
		{ .addr = 0x46036b, .byte = 0x9b },
		{ .addr = 0x460368, .byte = 0xf5 },
		{ .addr = 0x460369, .byte = 0x7d },
		{ .addr = 0x460364, .byte = 0x61 },
		{ .addr = 0x460365, .byte = 0x92 },
		{ .addr = 0x460366, .byte = 0x00 },
		{ .addr = 0x460367, .byte = 0x1e },
		{ .addr = 0x00000c, .byte = 0x23 },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0x01 },
		{ .addr = 0x00000f, .byte = 0x50 },
		{ .addr = 0x120150, .byte = 0xb8 },
		{ .addr = 0x120151, .byte = 0x29 },
		{ .addr = 0x120152, .byte = 0xe2 },
		{ .addr = 0x120153, .byte = 0x7f }
};

static const SST_Transaction bsr_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13372188, .data = 30, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13372190, .data = 62946, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2028924, .data = 64424, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4588400, .data = 62845, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4588396, .data = 32792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4588398, .data = 30, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4588394, .data = 24987, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4588392, .data = 62845, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4588388, .data = 24978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4588390, .data = 30, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 336, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1179984, .data = 47145, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1179986, .data = 57983, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_14[] = {
		{ .addr = 0xb08c04, .byte = 0x61 },
		{ .addr = 0xb08c05, .byte = 0x7c },
		{ .addr = 0xb08c06, .byte = 0x80 },
		{ .addr = 0xb08c07, .byte = 0x66 },
		{ .addr = 0xb08c82, .byte = 0x42 },
		{ .addr = 0xb08c83, .byte = 0xf1 },
		{ .addr = 0xb08c84, .byte = 0x5a },
		{ .addr = 0xb08c85, .byte = 0x54 }
};

static const SST_RamByte bsr_final_ram_14[] = {
		{ .addr = 0xb08c04, .byte = 0x61 },
		{ .addr = 0xb08c05, .byte = 0x7c },
		{ .addr = 0xb08c06, .byte = 0x80 },
		{ .addr = 0xb08c07, .byte = 0x66 },
		{ .addr = 0xa01322, .byte = 0x00 },
		{ .addr = 0xa01323, .byte = 0xb0 },
		{ .addr = 0xa01324, .byte = 0x8c },
		{ .addr = 0xa01325, .byte = 0x06 },
		{ .addr = 0xb08c82, .byte = 0x42 },
		{ .addr = 0xb08c83, .byte = 0xf1 },
		{ .addr = 0xb08c84, .byte = 0x5a },
		{ .addr = 0xb08c85, .byte = 0x54 }
};

static const SST_Transaction bsr_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10490658, .data = 176, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10490660, .data = 35846, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11570306, .data = 17137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11570308, .data = 23124, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_15[] = {
		{ .addr = 0xca1ea8, .byte = 0x61 },
		{ .addr = 0xca1ea9, .byte = 0x50 },
		{ .addr = 0xca1eaa, .byte = 0x9d },
		{ .addr = 0xca1eab, .byte = 0xc6 },
		{ .addr = 0xca1efa, .byte = 0x5b },
		{ .addr = 0xca1efb, .byte = 0x10 },
		{ .addr = 0xca1efc, .byte = 0xf2 },
		{ .addr = 0xca1efd, .byte = 0xcd }
};

static const SST_RamByte bsr_final_ram_15[] = {
		{ .addr = 0xca1ea8, .byte = 0x61 },
		{ .addr = 0xca1ea9, .byte = 0x50 },
		{ .addr = 0xca1eaa, .byte = 0x9d },
		{ .addr = 0xca1eab, .byte = 0xc6 },
		{ .addr = 0xd3d2c6, .byte = 0x00 },
		{ .addr = 0xd3d2c7, .byte = 0xca },
		{ .addr = 0xd3d2c8, .byte = 0x1e },
		{ .addr = 0xd3d2c9, .byte = 0xaa },
		{ .addr = 0xca1efa, .byte = 0x5b },
		{ .addr = 0xca1efb, .byte = 0x10 },
		{ .addr = 0xca1efc, .byte = 0xf2 },
		{ .addr = 0xca1efd, .byte = 0xcd }
};

static const SST_Transaction bsr_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13882054, .data = 202, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13882056, .data = 7850, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13246202, .data = 23312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13246204, .data = 62157, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t BSR_TEST_COUNT = 16;
static const SST_TestCase bsr[] = {
	{
		.name = "000 BSR -20 61ec",
		.initial = {
			.regs = {
				282065017, 450776920, 4155908866, 846884965, 61560607, 2160627461, 2290516079, 3350402472, 609322689, 1107540203, 1702551578, 2455661732, 994947294, 1134626817, 1803885892, 13118394, 7423392, 40988, 5074288
			},
			.prefetch0 = 25068,
			.prefetch1 = 35746,
			.ram = bsr_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				282065017, 450776920, 4155908866, 846884965, 61560607, 2160627461, 2290516079, 3350402472, 609322689, 1107540203, 1702551578, 2455661732, 994947294, 1134626817, 1803885892, 13118394, 7423388, 40988, 5074270
			},
			.prefetch0 = 51501,
			.prefetch1 = 26024,
			.ram = bsr_final_ram_0,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 BSR -124 6184",
		.initial = {
			.regs = {
				3147470470, 2157507377, 1913686428, 398104204, 2808528810, 1283439398, 1422596092, 2490649097, 82676925, 4219364043, 3747469014, 2930060949, 3316802872, 4225707564, 1412238263, 13275104, 12443888, 8976, 15054268
			},
			.prefetch0 = 24964,
			.prefetch1 = 48552,
			.ram = bsr_initial_ram_1,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3147470470, 2157507377, 1913686428, 398104204, 2808528810, 1283439398, 1422596092, 2490649097, 82676925, 4219364043, 3747469014, 2930060949, 3316802872, 4225707564, 1412238263, 13275104, 12443884, 8976, 15054146
			},
			.prefetch0 = 7067,
			.prefetch1 = 26028,
			.ram = bsr_final_ram_1,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 BSR 114 6172",
		.initial = {
			.regs = {
				2339458089, 1404559250, 3845298443, 2307771687, 1886081331, 3454603946, 401814543, 378348818, 3145831725, 2151261697, 1417349397, 222695507, 2049379747, 3536218830, 3928160280, 3800918, 14033826, 33820, 15643242
			},
			.prefetch0 = 24946,
			.prefetch1 = 48624,
			.ram = bsr_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2339458089, 1404559250, 3845298443, 2307771687, 1886081331, 3454603946, 401814543, 378348818, 3145831725, 2151261697, 1417349397, 222695507, 2049379747, 3536218830, 3928160280, 3800914, 14033826, 33820, 15643358
			},
			.prefetch0 = 45011,
			.prefetch1 = 8562,
			.ram = bsr_final_ram_2,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 BSR -27 61e5",
		.initial = {
			.regs = {
				2774413364, 3970953311, 1486053319, 2128200154, 2568350892, 815312710, 56471433, 2544639562, 2081254047, 4009143051, 477919043, 1183143373, 3999580773, 2201160992, 670713758, 12002650, 6991444, 783, 10292846
			},
			.prefetch0 = 25061,
			.prefetch1 = 51847,
			.ram = bsr_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2774413364, 3970953311, 1486053319, 2128200154, 2568350892, 815312710, 56471433, 2544639562, 2081254047, 4009143051, 477919043, 1183143373, 3999580773, 2201160992, 670713758, 12002646, 6991430, 8975, 2838264074
			},
			.prefetch0 = 55005,
			.prefetch1 = 41949,
			.ram = bsr_final_ram_3,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_3,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "004 BSR -107 6195",
		.initial = {
			.regs = {
				3448302667, 3337096354, 3940120710, 3311438215, 732588675, 3001708858, 2943205444, 2293791237, 3656045357, 2381910592, 3031290044, 2976573099, 2556418411, 1638106366, 1942292375, 14106328, 1755040, 33792, 13649170
			},
			.prefetch0 = 24981,
			.prefetch1 = 6222,
			.ram = bsr_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3448302667, 3337096354, 3940120710, 3311438215, 732588675, 3001708858, 2943205444, 2293791237, 3656045357, 2381910592, 3031290044, 2976573099, 2556418411, 1638106366, 1942292375, 14106324, 1755026, 9216, 3907539538
			},
			.prefetch0 = 12068,
			.prefetch1 = 39578,
			.ram = bsr_final_ram_4,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_4,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "005 BSR -3 61fd",
		.initial = {
			.regs = {
				2116322266, 3064216953, 22786963, 894414969, 3258122249, 1647976275, 3466672744, 2343341475, 3019410969, 4054743106, 1330322943, 1420476326, 2955172468, 3609501861, 2698697278, 273434, 8301488, 8710, 15309122
			},
			.prefetch0 = 25085,
			.prefetch1 = 2878,
			.ram = bsr_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2116322266, 3064216953, 22786963, 894414969, 3258122249, 1647976275, 3466672744, 2343341475, 3019410969, 4054743106, 1330322943, 1420476326, 2955172468, 3609501861, 2698697278, 273434, 8301470, 8710, 3309723250
			},
			.prefetch0 = 63238,
			.prefetch1 = 14612,
			.ram = bsr_final_ram_5,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_5,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "006 BSR -94 61a2",
		.initial = {
			.regs = {
				3531628730, 2229683334, 1542258154, 3507933566, 843321954, 3381644734, 4162939677, 1241441522, 4024052015, 3616434695, 1126524655, 1101521323, 1675319102, 2636659279, 2452684665, 10716384, 12115924, 41476, 665680
			},
			.prefetch0 = 24994,
			.prefetch1 = 63370,
			.ram = bsr_initial_ram_6,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3531628730, 2229683334, 1542258154, 3507933566, 843321954, 3381644734, 4162939677, 1241441522, 4024052015, 3616434695, 1126524655, 1101521323, 1675319102, 2636659279, 2452684665, 10716384, 12115920, 41476, 665588
			},
			.prefetch0 = 38905,
			.prefetch1 = 44798,
			.ram = bsr_final_ram_6,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_6,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "007 BSR -80 61b0",
		.initial = {
			.regs = {
				2003200246, 2790406506, 595806467, 3956816410, 314392602, 580887898, 3398111741, 1852768819, 385059739, 332341119, 168025973, 3813629222, 2897283070, 983859607, 517058103, 1979136, 3032316, 8217, 9260922
			},
			.prefetch0 = 25008,
			.prefetch1 = 22477,
			.ram = bsr_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2003200246, 2790406506, 595806467, 3956816410, 314392602, 580887898, 3398111741, 1852768819, 385059739, 332341119, 168025973, 3813629222, 2897283070, 983859607, 517058103, 1979136, 3032312, 8217, 9260844
			},
			.prefetch0 = 7988,
			.prefetch1 = 8261,
			.ram = bsr_final_ram_7,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_7,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "008 BSR 101 6165",
		.initial = {
			.regs = {
				2805806301, 597141944, 3835715507, 3752112208, 2882104843, 4006963715, 1054188007, 1997339425, 2658162396, 3550084939, 2843292714, 3166905488, 1318883067, 271641178, 191860831, 4325972, 5960648, 33299, 1875132
			},
			.prefetch0 = 24933,
			.prefetch1 = 9225,
			.ram = bsr_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2805806301, 597141944, 3835715507, 3752112208, 2882104843, 4006963715, 1054188007, 1997339425, 2658162396, 3550084939, 2843292714, 3166905488, 1318883067, 271641178, 191860831, 4325968, 5960634, 8723, 4264577768
			},
			.prefetch0 = 47809,
			.prefetch1 = 55552,
			.ram = bsr_final_ram_8,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_8,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "009 BSR 124 617c",
		.initial = {
			.regs = {
				865221800, 717479933, 2618479317, 4109066016, 1827678485, 3458863659, 2285724946, 3732119827, 3204456385, 1005900722, 2256144820, 1704178999, 3967777240, 3327363118, 2485890328, 9793508, 11270878, 33811, 6536408
			},
			.prefetch0 = 24956,
			.prefetch1 = 29601,
			.ram = bsr_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				865221800, 717479933, 2618479317, 4109066016, 1827678485, 3458863659, 2285724946, 3732119827, 3204456385, 1005900722, 2256144820, 1704178999, 3967777240, 3327363118, 2485890328, 9793504, 11270878, 33811, 6536534
			},
			.prefetch0 = 39368,
			.prefetch1 = 32577,
			.ram = bsr_final_ram_9,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_9,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "010 BSR 113 6171",
		.initial = {
			.regs = {
				2682281506, 105133417, 487904236, 1431436717, 624163303, 3764466348, 3503622692, 1012224573, 3929651000, 1687946121, 3668641937, 226981279, 3210762464, 1527017887, 658451058, 3733082, 13934580, 33309, 2780596
			},
			.prefetch0 = 24945,
			.prefetch1 = 34418,
			.ram = bsr_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2682281506, 105133417, 487904236, 1431436717, 624163303, 3764466348, 3503622692, 1012224573, 3929651000, 1687946121, 3668641937, 226981279, 3210762464, 1527017887, 658451058, 3733078, 13934566, 8733, 4206267150
			},
			.prefetch0 = 64846,
			.prefetch1 = 12571,
			.ram = bsr_final_ram_10,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_10,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "011 BSR -76 61b4",
		.initial = {
			.regs = {
				2574104214, 3583513084, 3387146338, 1023262554, 4090508239, 2656475515, 1031270491, 4046031321, 1884066080, 2464147857, 941128653, 248453789, 937089416, 2704426304, 3769443651, 6236368, 2966712, 41477, 12582550
			},
			.prefetch0 = 25012,
			.prefetch1 = 11149,
			.ram = bsr_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2574104214, 3583513084, 3387146338, 1023262554, 4090508239, 2656475515, 1031270491, 4046031321, 1884066080, 2464147857, 941128653, 248453789, 937089416, 2704426304, 3769443651, 6236368, 2966708, 41477, 12582476
			},
			.prefetch0 = 60339,
			.prefetch1 = 64989,
			.ram = bsr_final_ram_11,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_11,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "012 BSR -113 618f",
		.initial = {
			.regs = {
				277047573, 1583929421, 1751234292, 4250580057, 3221854702, 3494801489, 4176015538, 4294901663, 2120927525, 4273489456, 951226355, 3664221581, 3525565013, 3525876140, 1296097651, 7860008, 8535152, 34049, 1259848
			},
			.prefetch0 = 24975,
			.prefetch1 = 34022,
			.ram = bsr_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				277047573, 1583929421, 1751234292, 4250580057, 3221854702, 3494801489, 4176015538, 4294901663, 2120927525, 4273489456, 951226355, 3664221581, 3525565013, 3525876140, 1296097651, 7860004, 8535138, 9473, 1028132228
			},
			.prefetch0 = 17385,
			.prefetch1 = 13456,
			.ram = bsr_final_ram_12,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_12,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "013 BSR -101 619b",
		.initial = {
			.regs = {
				1085321609, 3760490883, 2904474624, 3107963844, 4109449881, 1287612714, 3526601969, 3740718983, 2497107319, 1647112399, 1079308417, 2963126967, 1632663753, 3635451183, 1283442651, 13372192, 4588402, 32792, 2029028
			},
			.prefetch0 = 24987,
			.prefetch1 = 24880,
			.ram = bsr_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1085321609, 3760490883, 2904474624, 3107963844, 4109449881, 1287612714, 3526601969, 3740718983, 2497107319, 1647112399, 1079308417, 2963126967, 1632663753, 3635451183, 1283442651, 13372188, 4588388, 8216, 588382548
			},
			.prefetch0 = 47145,
			.prefetch1 = 57983,
			.ram = bsr_final_ram_13,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_13,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "014 BSR 124 617c",
		.initial = {
			.regs = {
				2683942999, 3360867411, 1178374528, 1616468443, 4222675409, 1496361164, 569141539, 2846000669, 3240064412, 2927525543, 4019845811, 4215721781, 3752422136, 647502909, 3299638453, 10490662, 11394980, 34577, 11570184
			},
			.prefetch0 = 24956,
			.prefetch1 = 32870,
			.ram = bsr_initial_ram_14,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2683942999, 3360867411, 1178374528, 1616468443, 4222675409, 1496361164, 569141539, 2846000669, 3240064412, 2927525543, 4019845811, 4215721781, 3752422136, 647502909, 3299638453, 10490658, 11394980, 34577, 11570310
			},
			.prefetch0 = 17137,
			.prefetch1 = 23124,
			.ram = bsr_final_ram_14,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_14,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "015 BSR 80 6150",
		.initial = {
			.regs = {
				300071768, 235439060, 2366499405, 3220171537, 1533580980, 1843631709, 1982756599, 1703233532, 1568903936, 2084567573, 449957190, 3050842220, 1152236623, 4056491016, 3925277495, 13882058, 16051788, 1549, 13246124
			},
			.prefetch0 = 24912,
			.prefetch1 = 40390,
			.ram = bsr_initial_ram_15,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				300071768, 235439060, 2366499405, 3220171537, 1533580980, 1843631709, 1982756599, 1703233532, 1568903936, 2084567573, 449957190, 3050842220, 1152236623, 4056491016, 3925277495, 13882054, 16051788, 1549, 13246206
			},
			.prefetch0 = 23312,
			.prefetch1 = 62157,
			.ram = bsr_final_ram_15,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_BSR_H */