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

static const SST_RamByte bsr_initial_ram_16[] = {
		{ .addr = 0x00afd6, .byte = 0x61 },
		{ .addr = 0x00afd7, .byte = 0x09 },
		{ .addr = 0x00afd8, .byte = 0xb2 },
		{ .addr = 0x00afd9, .byte = 0x79 },
		{ .addr = 0x00000c, .byte = 0xb8 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x508090, .byte = 0xea },
		{ .addr = 0x508091, .byte = 0xa2 },
		{ .addr = 0x508092, .byte = 0x3c },
		{ .addr = 0x508093, .byte = 0x97 }
};

static const SST_RamByte bsr_final_ram_16[] = {
		{ .addr = 0x00afd6, .byte = 0x61 },
		{ .addr = 0x00afd7, .byte = 0x09 },
		{ .addr = 0x00afd8, .byte = 0xb2 },
		{ .addr = 0x00afd9, .byte = 0x79 },
		{ .addr = 0xcbadbc, .byte = 0x00 },
		{ .addr = 0xcbadbd, .byte = 0x00 },
		{ .addr = 0xcbadbe, .byte = 0xaf },
		{ .addr = 0xcbadbf, .byte = 0xd8 },
		{ .addr = 0xcbadba, .byte = 0xaf },
		{ .addr = 0xcbadbb, .byte = 0xe1 },
		{ .addr = 0xcbadb6, .byte = 0x24 },
		{ .addr = 0xcbadb7, .byte = 0x18 },
		{ .addr = 0xcbadb8, .byte = 0x00 },
		{ .addr = 0xcbadb9, .byte = 0x00 },
		{ .addr = 0xcbadb4, .byte = 0x61 },
		{ .addr = 0xcbadb5, .byte = 0x09 },
		{ .addr = 0xcbadb2, .byte = 0xaf },
		{ .addr = 0xcbadb3, .byte = 0xe1 },
		{ .addr = 0xcbadae, .byte = 0x61 },
		{ .addr = 0xcbadaf, .byte = 0x16 },
		{ .addr = 0xcbadb0, .byte = 0x00 },
		{ .addr = 0xcbadb1, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xb8 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0x80 },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x508090, .byte = 0xea },
		{ .addr = 0x508091, .byte = 0xa2 },
		{ .addr = 0x508092, .byte = 0x3c },
		{ .addr = 0x508093, .byte = 0x97 }
};

static const SST_Transaction bsr_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348284, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348286, .data = 45016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 45024, .data = 6285, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348282, .data = 45025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348278, .data = 9240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348280, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348276, .data = 24841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348274, .data = 45025, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348270, .data = 24854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13348272, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 47184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32912, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5275792, .data = 60066, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5275794, .data = 15511, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_17[] = {
		{ .addr = 0x0e0d10, .byte = 0x61 },
		{ .addr = 0x0e0d11, .byte = 0x95 },
		{ .addr = 0x0e0d12, .byte = 0x04 },
		{ .addr = 0x0e0d13, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x7d },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x907d7a, .byte = 0x0b },
		{ .addr = 0x907d7b, .byte = 0xea },
		{ .addr = 0x907d7c, .byte = 0xf5 },
		{ .addr = 0x907d7d, .byte = 0x27 }
};

static const SST_RamByte bsr_final_ram_17[] = {
		{ .addr = 0x0e0d10, .byte = 0x61 },
		{ .addr = 0x0e0d11, .byte = 0x95 },
		{ .addr = 0x0e0d12, .byte = 0x04 },
		{ .addr = 0x0e0d13, .byte = 0x97 },
		{ .addr = 0x5434a8, .byte = 0x00 },
		{ .addr = 0x5434a9, .byte = 0x0e },
		{ .addr = 0x5434aa, .byte = 0x0d },
		{ .addr = 0x5434ab, .byte = 0x12 },
		{ .addr = 0x7f8d40, .byte = 0x0c },
		{ .addr = 0x7f8d41, .byte = 0xa7 },
		{ .addr = 0x7f8d3c, .byte = 0x80 },
		{ .addr = 0x7f8d3d, .byte = 0x1d },
		{ .addr = 0x7f8d3e, .byte = 0x00 },
		{ .addr = 0x7f8d3f, .byte = 0x0e },
		{ .addr = 0x7f8d3a, .byte = 0x61 },
		{ .addr = 0x7f8d3b, .byte = 0x95 },
		{ .addr = 0x7f8d38, .byte = 0x0c },
		{ .addr = 0x7f8d39, .byte = 0xa7 },
		{ .addr = 0x7f8d34, .byte = 0x61 },
		{ .addr = 0x7f8d35, .byte = 0x92 },
		{ .addr = 0x7f8d36, .byte = 0x00 },
		{ .addr = 0x7f8d37, .byte = 0x0e },
		{ .addr = 0x00000c, .byte = 0x34 },
		{ .addr = 0x00000d, .byte = 0x90 },
		{ .addr = 0x00000e, .byte = 0x7d },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x907d7a, .byte = 0x0b },
		{ .addr = 0x907d7b, .byte = 0xea },
		{ .addr = 0x907d7c, .byte = 0xf5 },
		{ .addr = 0x907d7d, .byte = 0x27 }
};

static const SST_Transaction bsr_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5518504, .data = 14, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5518506, .data = 3346, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 920742, .data = 14007, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8359232, .data = 3239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8359228, .data = 32797, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8359230, .data = 14, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8359226, .data = 24981, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8359224, .data = 3239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8359220, .data = 24978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8359222, .data = 14, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 32122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9469306, .data = 3050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9469308, .data = 62759, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_18[] = {
		{ .addr = 0x7885cc, .byte = 0x61 },
		{ .addr = 0x7885cd, .byte = 0x39 },
		{ .addr = 0x7885ce, .byte = 0xce },
		{ .addr = 0x7885cf, .byte = 0x68 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xb9 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0xb2b932, .byte = 0xed },
		{ .addr = 0xb2b933, .byte = 0xf2 },
		{ .addr = 0xb2b934, .byte = 0x77 },
		{ .addr = 0xb2b935, .byte = 0x88 }
};

static const SST_RamByte bsr_final_ram_18[] = {
		{ .addr = 0x7885cc, .byte = 0x61 },
		{ .addr = 0x7885cd, .byte = 0x39 },
		{ .addr = 0x7885ce, .byte = 0xce },
		{ .addr = 0x7885cf, .byte = 0x68 },
		{ .addr = 0x842c14, .byte = 0x00 },
		{ .addr = 0x842c15, .byte = 0x78 },
		{ .addr = 0x842c16, .byte = 0x85 },
		{ .addr = 0x842c17, .byte = 0xce },
		{ .addr = 0x842c12, .byte = 0x86 },
		{ .addr = 0x842c13, .byte = 0x07 },
		{ .addr = 0x842c0e, .byte = 0x26 },
		{ .addr = 0x842c0f, .byte = 0x10 },
		{ .addr = 0x842c10, .byte = 0x00 },
		{ .addr = 0x842c11, .byte = 0x78 },
		{ .addr = 0x842c0c, .byte = 0x61 },
		{ .addr = 0x842c0d, .byte = 0x39 },
		{ .addr = 0x842c0a, .byte = 0x86 },
		{ .addr = 0x842c0b, .byte = 0x07 },
		{ .addr = 0x842c06, .byte = 0x61 },
		{ .addr = 0x842c07, .byte = 0x36 },
		{ .addr = 0x842c08, .byte = 0x00 },
		{ .addr = 0x842c09, .byte = 0x78 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0xb9 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0xb2b932, .byte = 0xed },
		{ .addr = 0xb2b933, .byte = 0xf2 },
		{ .addr = 0xb2b934, .byte = 0x77 },
		{ .addr = 0xb2b935, .byte = 0x88 }
};

static const SST_Transaction bsr_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662036, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662038, .data = 34254, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7898630, .data = 59255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662034, .data = 34311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662030, .data = 9744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662032, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662028, .data = 24889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662026, .data = 34311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662022, .data = 24886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8662024, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 47410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11712818, .data = 60914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11712820, .data = 30600, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_19[] = {
		{ .addr = 0x9653f4, .byte = 0x61 },
		{ .addr = 0x9653f5, .byte = 0xc4 },
		{ .addr = 0x9653f6, .byte = 0xe6 },
		{ .addr = 0x9653f7, .byte = 0xcc },
		{ .addr = 0x9653ba, .byte = 0x41 },
		{ .addr = 0x9653bb, .byte = 0x24 },
		{ .addr = 0x9653bc, .byte = 0x44 },
		{ .addr = 0x9653bd, .byte = 0x44 }
};

static const SST_RamByte bsr_final_ram_19[] = {
		{ .addr = 0x9653f4, .byte = 0x61 },
		{ .addr = 0x9653f5, .byte = 0xc4 },
		{ .addr = 0x9653f6, .byte = 0xe6 },
		{ .addr = 0x9653f7, .byte = 0xcc },
		{ .addr = 0xcf2a40, .byte = 0x00 },
		{ .addr = 0xcf2a41, .byte = 0x96 },
		{ .addr = 0xcf2a42, .byte = 0x53 },
		{ .addr = 0xcf2a43, .byte = 0xf6 },
		{ .addr = 0x9653ba, .byte = 0x41 },
		{ .addr = 0x9653bb, .byte = 0x24 },
		{ .addr = 0x9653bc, .byte = 0x44 },
		{ .addr = 0x9653bd, .byte = 0x44 }
};

static const SST_Transaction bsr_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13576768, .data = 150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13576770, .data = 21494, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9851834, .data = 16676, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9851836, .data = 17476, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_20[] = {
		{ .addr = 0xde1b90, .byte = 0x61 },
		{ .addr = 0xde1b91, .byte = 0xec },
		{ .addr = 0xde1b92, .byte = 0x5f },
		{ .addr = 0xde1b93, .byte = 0xe7 },
		{ .addr = 0xde1b7e, .byte = 0xfc },
		{ .addr = 0xde1b7f, .byte = 0x7c },
		{ .addr = 0xde1b80, .byte = 0xc2 },
		{ .addr = 0xde1b81, .byte = 0x4b }
};

static const SST_RamByte bsr_final_ram_20[] = {
		{ .addr = 0xde1b90, .byte = 0x61 },
		{ .addr = 0xde1b91, .byte = 0xec },
		{ .addr = 0xde1b92, .byte = 0x5f },
		{ .addr = 0xde1b93, .byte = 0xe7 },
		{ .addr = 0x97ed3a, .byte = 0x00 },
		{ .addr = 0x97ed3b, .byte = 0xde },
		{ .addr = 0x97ed3c, .byte = 0x1b },
		{ .addr = 0x97ed3d, .byte = 0x92 },
		{ .addr = 0xde1b7e, .byte = 0xfc },
		{ .addr = 0xde1b7f, .byte = 0x7c },
		{ .addr = 0xde1b80, .byte = 0xc2 },
		{ .addr = 0xde1b81, .byte = 0x4b }
};

static const SST_Transaction bsr_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9956666, .data = 222, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9956668, .data = 7058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14556030, .data = 64636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14556032, .data = 49739, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_21[] = {
		{ .addr = 0xbc8212, .byte = 0x61 },
		{ .addr = 0xbc8213, .byte = 0x17 },
		{ .addr = 0xbc8214, .byte = 0x31 },
		{ .addr = 0xbc8215, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0x44 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0xca4434, .byte = 0x50 },
		{ .addr = 0xca4435, .byte = 0x63 },
		{ .addr = 0xca4436, .byte = 0x37 },
		{ .addr = 0xca4437, .byte = 0x25 }
};

static const SST_RamByte bsr_final_ram_21[] = {
		{ .addr = 0xbc8212, .byte = 0x61 },
		{ .addr = 0xbc8213, .byte = 0x17 },
		{ .addr = 0xbc8214, .byte = 0x31 },
		{ .addr = 0xbc8215, .byte = 0x64 },
		{ .addr = 0x4102f0, .byte = 0x00 },
		{ .addr = 0x4102f1, .byte = 0xbc },
		{ .addr = 0x4102f2, .byte = 0x82 },
		{ .addr = 0x4102f3, .byte = 0x14 },
		{ .addr = 0xd92a6a, .byte = 0x82 },
		{ .addr = 0xd92a6b, .byte = 0x2b },
		{ .addr = 0xd92a66, .byte = 0x06 },
		{ .addr = 0xd92a67, .byte = 0x11 },
		{ .addr = 0xd92a68, .byte = 0x00 },
		{ .addr = 0xd92a69, .byte = 0xbc },
		{ .addr = 0xd92a64, .byte = 0x61 },
		{ .addr = 0xd92a65, .byte = 0x17 },
		{ .addr = 0xd92a62, .byte = 0x82 },
		{ .addr = 0xd92a63, .byte = 0x2b },
		{ .addr = 0xd92a5e, .byte = 0x61 },
		{ .addr = 0xd92a5f, .byte = 0x12 },
		{ .addr = 0xd92a60, .byte = 0x00 },
		{ .addr = 0xd92a61, .byte = 0xbc },
		{ .addr = 0x00000c, .byte = 0x09 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0x44 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0xca4434, .byte = 0x50 },
		{ .addr = 0xca4435, .byte = 0x63 },
		{ .addr = 0xca4436, .byte = 0x37 },
		{ .addr = 0xca4437, .byte = 0x25 }
};

static const SST_Transaction bsr_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4260592, .data = 188, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4260594, .data = 33300, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12354090, .data = 25386, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14232170, .data = 33323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14232166, .data = 1553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14232168, .data = 188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14232164, .data = 24855, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14232162, .data = 33323, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14232158, .data = 24850, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14232160, .data = 188, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 2506, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13255732, .data = 20579, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13255734, .data = 14117, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_22[] = {
		{ .addr = 0xbf5cdc, .byte = 0x61 },
		{ .addr = 0xbf5cdd, .byte = 0x27 },
		{ .addr = 0xbf5cde, .byte = 0x49 },
		{ .addr = 0xbf5cdf, .byte = 0xe9 },
		{ .addr = 0x00000c, .byte = 0xd5 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xf3 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x7cf322, .byte = 0xab },
		{ .addr = 0x7cf323, .byte = 0xb6 },
		{ .addr = 0x7cf324, .byte = 0x8e },
		{ .addr = 0x7cf325, .byte = 0x3d }
};

static const SST_RamByte bsr_final_ram_22[] = {
		{ .addr = 0xbf5cdc, .byte = 0x61 },
		{ .addr = 0xbf5cdd, .byte = 0x27 },
		{ .addr = 0xbf5cde, .byte = 0x49 },
		{ .addr = 0xbf5cdf, .byte = 0xe9 },
		{ .addr = 0x815820, .byte = 0x00 },
		{ .addr = 0x815821, .byte = 0xbf },
		{ .addr = 0x815822, .byte = 0x5c },
		{ .addr = 0x815823, .byte = 0xde },
		{ .addr = 0xdfe668, .byte = 0x5d },
		{ .addr = 0xdfe669, .byte = 0x05 },
		{ .addr = 0xdfe664, .byte = 0x82 },
		{ .addr = 0xdfe665, .byte = 0x00 },
		{ .addr = 0xdfe666, .byte = 0x00 },
		{ .addr = 0xdfe667, .byte = 0xbf },
		{ .addr = 0xdfe662, .byte = 0x61 },
		{ .addr = 0xdfe663, .byte = 0x27 },
		{ .addr = 0xdfe660, .byte = 0x5d },
		{ .addr = 0xdfe661, .byte = 0x05 },
		{ .addr = 0xdfe65c, .byte = 0x61 },
		{ .addr = 0xdfe65d, .byte = 0x32 },
		{ .addr = 0xdfe65e, .byte = 0x00 },
		{ .addr = 0xdfe65f, .byte = 0xbf },
		{ .addr = 0x00000c, .byte = 0xd5 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xf3 },
		{ .addr = 0x00000f, .byte = 0x22 },
		{ .addr = 0x7cf322, .byte = 0xab },
		{ .addr = 0x7cf323, .byte = 0xb6 },
		{ .addr = 0x7cf324, .byte = 0x8e },
		{ .addr = 0x7cf325, .byte = 0x3d }
};

static const SST_Transaction bsr_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8476704, .data = 191, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8476706, .data = 23774, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12541188, .data = 54633, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14673512, .data = 23813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14673508, .data = 33280, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14673510, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14673506, .data = 24871, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14673504, .data = 23813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14673500, .data = 24882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14673502, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54652, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 62242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8188706, .data = 43958, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8188708, .data = 36413, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_23[] = {
		{ .addr = 0xa0f44a, .byte = 0x61 },
		{ .addr = 0xa0f44b, .byte = 0x41 },
		{ .addr = 0xa0f44c, .byte = 0xb7 },
		{ .addr = 0xa0f44d, .byte = 0x98 },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0x26 },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0xfa2640, .byte = 0x93 },
		{ .addr = 0xfa2641, .byte = 0x2f },
		{ .addr = 0xfa2642, .byte = 0xee },
		{ .addr = 0xfa2643, .byte = 0xfe }
};

static const SST_RamByte bsr_final_ram_23[] = {
		{ .addr = 0xa0f44a, .byte = 0x61 },
		{ .addr = 0xa0f44b, .byte = 0x41 },
		{ .addr = 0xa0f44c, .byte = 0xb7 },
		{ .addr = 0xa0f44d, .byte = 0x98 },
		{ .addr = 0x64e52e, .byte = 0x00 },
		{ .addr = 0x64e52f, .byte = 0xa0 },
		{ .addr = 0x64e530, .byte = 0xf4 },
		{ .addr = 0x64e531, .byte = 0x4c },
		{ .addr = 0x64e52c, .byte = 0xf4 },
		{ .addr = 0x64e52d, .byte = 0x8d },
		{ .addr = 0x64e528, .byte = 0x22 },
		{ .addr = 0x64e529, .byte = 0x11 },
		{ .addr = 0x64e52a, .byte = 0x00 },
		{ .addr = 0x64e52b, .byte = 0xa0 },
		{ .addr = 0x64e526, .byte = 0x61 },
		{ .addr = 0x64e527, .byte = 0x41 },
		{ .addr = 0x64e524, .byte = 0xf4 },
		{ .addr = 0x64e525, .byte = 0x8d },
		{ .addr = 0x64e520, .byte = 0x61 },
		{ .addr = 0x64e521, .byte = 0x56 },
		{ .addr = 0x64e522, .byte = 0x00 },
		{ .addr = 0x64e523, .byte = 0xa0 },
		{ .addr = 0x00000c, .byte = 0x50 },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0x26 },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0xfa2640, .byte = 0x93 },
		{ .addr = 0xfa2641, .byte = 0x2f },
		{ .addr = 0xfa2642, .byte = 0xee },
		{ .addr = 0xfa2643, .byte = 0xfe }
};

static const SST_Transaction bsr_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612270, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612272, .data = 62540, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10548364, .data = 60940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612268, .data = 62605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612264, .data = 8721, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612266, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612262, .data = 24897, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612260, .data = 62605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612256, .data = 24918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6612258, .data = 160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 9792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16393792, .data = 37679, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16393794, .data = 61182, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_24[] = {
		{ .addr = 0x326902, .byte = 0x61 },
		{ .addr = 0x326903, .byte = 0x66 },
		{ .addr = 0x326904, .byte = 0xd7 },
		{ .addr = 0x326905, .byte = 0x48 },
		{ .addr = 0x32696a, .byte = 0xff },
		{ .addr = 0x32696b, .byte = 0x91 },
		{ .addr = 0x32696c, .byte = 0xa2 },
		{ .addr = 0x32696d, .byte = 0x8b }
};

static const SST_RamByte bsr_final_ram_24[] = {
		{ .addr = 0x326902, .byte = 0x61 },
		{ .addr = 0x326903, .byte = 0x66 },
		{ .addr = 0x326904, .byte = 0xd7 },
		{ .addr = 0x326905, .byte = 0x48 },
		{ .addr = 0x1a210e, .byte = 0x00 },
		{ .addr = 0x1a210f, .byte = 0x32 },
		{ .addr = 0x1a2110, .byte = 0x69 },
		{ .addr = 0x1a2111, .byte = 0x04 },
		{ .addr = 0x32696a, .byte = 0xff },
		{ .addr = 0x32696b, .byte = 0x91 },
		{ .addr = 0x32696c, .byte = 0xa2 },
		{ .addr = 0x32696d, .byte = 0x8b }
};

static const SST_Transaction bsr_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1712398, .data = 50, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1712400, .data = 26884, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3303786, .data = 65425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3303788, .data = 41611, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_25[] = {
		{ .addr = 0xb36e96, .byte = 0x61 },
		{ .addr = 0xb36e97, .byte = 0xff },
		{ .addr = 0xb36e98, .byte = 0x02 },
		{ .addr = 0xb36e99, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0x66bcfe, .byte = 0x52 },
		{ .addr = 0x66bcff, .byte = 0x0a },
		{ .addr = 0x66bd00, .byte = 0x36 },
		{ .addr = 0x66bd01, .byte = 0xb7 }
};

static const SST_RamByte bsr_final_ram_25[] = {
		{ .addr = 0xb36e96, .byte = 0x61 },
		{ .addr = 0xb36e97, .byte = 0xff },
		{ .addr = 0xb36e98, .byte = 0x02 },
		{ .addr = 0xb36e99, .byte = 0xf0 },
		{ .addr = 0xb26164, .byte = 0x00 },
		{ .addr = 0xb26165, .byte = 0xb3 },
		{ .addr = 0xb26166, .byte = 0x6e },
		{ .addr = 0xb26167, .byte = 0x98 },
		{ .addr = 0x7fc34e, .byte = 0x6e },
		{ .addr = 0x7fc34f, .byte = 0x97 },
		{ .addr = 0x7fc34a, .byte = 0x87 },
		{ .addr = 0x7fc34b, .byte = 0x01 },
		{ .addr = 0x7fc34c, .byte = 0x00 },
		{ .addr = 0x7fc34d, .byte = 0xb3 },
		{ .addr = 0x7fc348, .byte = 0x61 },
		{ .addr = 0x7fc349, .byte = 0xff },
		{ .addr = 0x7fc346, .byte = 0x6e },
		{ .addr = 0x7fc347, .byte = 0x97 },
		{ .addr = 0x7fc342, .byte = 0x61 },
		{ .addr = 0x7fc343, .byte = 0xf2 },
		{ .addr = 0x7fc344, .byte = 0x00 },
		{ .addr = 0x7fc345, .byte = 0xb3 },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x66 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0xfe },
		{ .addr = 0x66bcfe, .byte = 0x52 },
		{ .addr = 0x66bcff, .byte = 0x0a },
		{ .addr = 0x66bd00, .byte = 0x36 },
		{ .addr = 0x66bd01, .byte = 0xb7 }
};

static const SST_Transaction bsr_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11690340, .data = 179, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11690342, .data = 28312, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11759254, .data = 25087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8373070, .data = 28311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8373066, .data = 34561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8373068, .data = 179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8373064, .data = 25087, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8373062, .data = 28311, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8373058, .data = 25074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8373060, .data = 179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48382, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6733054, .data = 21002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6733056, .data = 14007, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_26[] = {
		{ .addr = 0x64e404, .byte = 0x61 },
		{ .addr = 0x64e405, .byte = 0x5d },
		{ .addr = 0x64e406, .byte = 0xf7 },
		{ .addr = 0x64e407, .byte = 0x1f },
		{ .addr = 0x00000c, .byte = 0xc4 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x56 },
		{ .addr = 0x00000f, .byte = 0x74 },
		{ .addr = 0x0e5674, .byte = 0xec },
		{ .addr = 0x0e5675, .byte = 0x14 },
		{ .addr = 0x0e5676, .byte = 0x35 },
		{ .addr = 0x0e5677, .byte = 0x86 }
};

static const SST_RamByte bsr_final_ram_26[] = {
		{ .addr = 0x64e404, .byte = 0x61 },
		{ .addr = 0x64e405, .byte = 0x5d },
		{ .addr = 0x64e406, .byte = 0xf7 },
		{ .addr = 0x64e407, .byte = 0x1f },
		{ .addr = 0xfc7772, .byte = 0x00 },
		{ .addr = 0xfc7773, .byte = 0x64 },
		{ .addr = 0xfc7774, .byte = 0xe4 },
		{ .addr = 0xfc7775, .byte = 0x06 },
		{ .addr = 0xfc7770, .byte = 0xe4 },
		{ .addr = 0xfc7771, .byte = 0x63 },
		{ .addr = 0xfc776c, .byte = 0xa5 },
		{ .addr = 0xfc776d, .byte = 0x10 },
		{ .addr = 0xfc776e, .byte = 0x00 },
		{ .addr = 0xfc776f, .byte = 0x64 },
		{ .addr = 0xfc776a, .byte = 0x61 },
		{ .addr = 0xfc776b, .byte = 0x5d },
		{ .addr = 0xfc7768, .byte = 0xe4 },
		{ .addr = 0xfc7769, .byte = 0x63 },
		{ .addr = 0xfc7764, .byte = 0x61 },
		{ .addr = 0xfc7765, .byte = 0x56 },
		{ .addr = 0xfc7766, .byte = 0x00 },
		{ .addr = 0xfc7767, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0xc4 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0x56 },
		{ .addr = 0x00000f, .byte = 0x74 },
		{ .addr = 0x0e5674, .byte = 0xec },
		{ .addr = 0x0e5675, .byte = 0x14 },
		{ .addr = 0x0e5676, .byte = 0x35 },
		{ .addr = 0x0e5677, .byte = 0x86 }
};

static const SST_Transaction bsr_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545650, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545652, .data = 58374, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6612066, .data = 35507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545648, .data = 58467, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545644, .data = 42256, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545646, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545642, .data = 24925, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545640, .data = 58467, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545636, .data = 24918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16545638, .data = 100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 939636, .data = 60436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 939638, .data = 13702, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_27[] = {
		{ .addr = 0xd75f66, .byte = 0x61 },
		{ .addr = 0xd75f67, .byte = 0x51 },
		{ .addr = 0xd75f68, .byte = 0x84 },
		{ .addr = 0xd75f69, .byte = 0xc5 },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0xbebcb8, .byte = 0x04 },
		{ .addr = 0xbebcb9, .byte = 0xd0 },
		{ .addr = 0xbebcba, .byte = 0xe4 },
		{ .addr = 0xbebcbb, .byte = 0x7b }
};

static const SST_RamByte bsr_final_ram_27[] = {
		{ .addr = 0xd75f66, .byte = 0x61 },
		{ .addr = 0xd75f67, .byte = 0x51 },
		{ .addr = 0xd75f68, .byte = 0x84 },
		{ .addr = 0xd75f69, .byte = 0xc5 },
		{ .addr = 0xc93fe4, .byte = 0x00 },
		{ .addr = 0xc93fe5, .byte = 0xd7 },
		{ .addr = 0xc93fe6, .byte = 0x5f },
		{ .addr = 0xc93fe7, .byte = 0x68 },
		{ .addr = 0x0871e4, .byte = 0x5f },
		{ .addr = 0x0871e5, .byte = 0xb9 },
		{ .addr = 0x0871e0, .byte = 0x01 },
		{ .addr = 0x0871e1, .byte = 0x0e },
		{ .addr = 0x0871e2, .byte = 0x00 },
		{ .addr = 0x0871e3, .byte = 0xd7 },
		{ .addr = 0x0871de, .byte = 0x61 },
		{ .addr = 0x0871df, .byte = 0x51 },
		{ .addr = 0x0871dc, .byte = 0x5f },
		{ .addr = 0x0871dd, .byte = 0xb9 },
		{ .addr = 0x0871d8, .byte = 0x61 },
		{ .addr = 0x0871d9, .byte = 0x52 },
		{ .addr = 0x0871da, .byte = 0x00 },
		{ .addr = 0x0871db, .byte = 0xd7 },
		{ .addr = 0x00000c, .byte = 0x81 },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0xb8 },
		{ .addr = 0xbebcb8, .byte = 0x04 },
		{ .addr = 0xbebcb9, .byte = 0xd0 },
		{ .addr = 0xbebcba, .byte = 0xe4 },
		{ .addr = 0xbebcbb, .byte = 0x7b }
};

static const SST_Transaction bsr_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13189092, .data = 215, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13189094, .data = 24424, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14114744, .data = 33138, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 553444, .data = 24505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 553440, .data = 270, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 553442, .data = 215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 553438, .data = 24913, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 553436, .data = 24505, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 553432, .data = 24914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 553434, .data = 215, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 33214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12500152, .data = 1232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12500154, .data = 58491, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_28[] = {
		{ .addr = 0xd903ba, .byte = 0x61 },
		{ .addr = 0xd903bb, .byte = 0xb8 },
		{ .addr = 0xd903bc, .byte = 0x9a },
		{ .addr = 0xd903bd, .byte = 0x69 },
		{ .addr = 0xd90374, .byte = 0xda },
		{ .addr = 0xd90375, .byte = 0x13 },
		{ .addr = 0xd90376, .byte = 0xd4 },
		{ .addr = 0xd90377, .byte = 0x0d }
};

static const SST_RamByte bsr_final_ram_28[] = {
		{ .addr = 0xd903ba, .byte = 0x61 },
		{ .addr = 0xd903bb, .byte = 0xb8 },
		{ .addr = 0xd903bc, .byte = 0x9a },
		{ .addr = 0xd903bd, .byte = 0x69 },
		{ .addr = 0xe60c38, .byte = 0x00 },
		{ .addr = 0xe60c39, .byte = 0xd9 },
		{ .addr = 0xe60c3a, .byte = 0x03 },
		{ .addr = 0xe60c3b, .byte = 0xbc },
		{ .addr = 0xd90374, .byte = 0xda },
		{ .addr = 0xd90375, .byte = 0x13 },
		{ .addr = 0xd90376, .byte = 0xd4 },
		{ .addr = 0xd90377, .byte = 0x0d }
};

static const SST_Transaction bsr_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15076408, .data = 217, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15076410, .data = 956, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14222196, .data = 55827, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14222198, .data = 54285, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_29[] = {
		{ .addr = 0x8de610, .byte = 0x61 },
		{ .addr = 0x8de611, .byte = 0x6a },
		{ .addr = 0x8de612, .byte = 0x9c },
		{ .addr = 0x8de613, .byte = 0x57 },
		{ .addr = 0x8de67c, .byte = 0x0b },
		{ .addr = 0x8de67d, .byte = 0x0c },
		{ .addr = 0x8de67e, .byte = 0x90 },
		{ .addr = 0x8de67f, .byte = 0x41 }
};

static const SST_RamByte bsr_final_ram_29[] = {
		{ .addr = 0x8de610, .byte = 0x61 },
		{ .addr = 0x8de611, .byte = 0x6a },
		{ .addr = 0x8de612, .byte = 0x9c },
		{ .addr = 0x8de613, .byte = 0x57 },
		{ .addr = 0x3c8bb6, .byte = 0x00 },
		{ .addr = 0x3c8bb7, .byte = 0x8d },
		{ .addr = 0x3c8bb8, .byte = 0xe6 },
		{ .addr = 0x3c8bb9, .byte = 0x12 },
		{ .addr = 0x8de67c, .byte = 0x0b },
		{ .addr = 0x8de67d, .byte = 0x0c },
		{ .addr = 0x8de67e, .byte = 0x90 },
		{ .addr = 0x8de67f, .byte = 0x41 }
};

static const SST_Transaction bsr_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3967926, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3967928, .data = 58898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9299580, .data = 2828, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9299582, .data = 36929, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_30[] = {
		{ .addr = 0xd629d6, .byte = 0x61 },
		{ .addr = 0xd629d7, .byte = 0x45 },
		{ .addr = 0xd629d8, .byte = 0x16 },
		{ .addr = 0xd629d9, .byte = 0x11 },
		{ .addr = 0x00000c, .byte = 0xa1 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0xba61b4, .byte = 0x2b },
		{ .addr = 0xba61b5, .byte = 0x5c },
		{ .addr = 0xba61b6, .byte = 0xc4 },
		{ .addr = 0xba61b7, .byte = 0x69 }
};

static const SST_RamByte bsr_final_ram_30[] = {
		{ .addr = 0xd629d6, .byte = 0x61 },
		{ .addr = 0xd629d7, .byte = 0x45 },
		{ .addr = 0xd629d8, .byte = 0x16 },
		{ .addr = 0xd629d9, .byte = 0x11 },
		{ .addr = 0x8cd21c, .byte = 0x00 },
		{ .addr = 0x8cd21d, .byte = 0xd6 },
		{ .addr = 0x8cd21e, .byte = 0x29 },
		{ .addr = 0x8cd21f, .byte = 0xd8 },
		{ .addr = 0x728ba6, .byte = 0x2a },
		{ .addr = 0x728ba7, .byte = 0x1d },
		{ .addr = 0x728ba2, .byte = 0x85 },
		{ .addr = 0x728ba3, .byte = 0x02 },
		{ .addr = 0x728ba4, .byte = 0x00 },
		{ .addr = 0x728ba5, .byte = 0xd6 },
		{ .addr = 0x728ba0, .byte = 0x61 },
		{ .addr = 0x728ba1, .byte = 0x45 },
		{ .addr = 0x728b9e, .byte = 0x2a },
		{ .addr = 0x728b9f, .byte = 0x1d },
		{ .addr = 0x728b9a, .byte = 0x61 },
		{ .addr = 0x728b9b, .byte = 0x52 },
		{ .addr = 0x728b9c, .byte = 0x00 },
		{ .addr = 0x728b9d, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0xa1 },
		{ .addr = 0x00000d, .byte = 0xba },
		{ .addr = 0x00000e, .byte = 0x61 },
		{ .addr = 0x00000f, .byte = 0xb4 },
		{ .addr = 0xba61b4, .byte = 0x2b },
		{ .addr = 0xba61b5, .byte = 0x5c },
		{ .addr = 0xba61b6, .byte = 0xc4 },
		{ .addr = 0xba61b7, .byte = 0x69 }
};

static const SST_Transaction bsr_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9228828, .data = 214, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9228830, .data = 10712, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14035484, .data = 63608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7506854, .data = 10781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7506850, .data = 34050, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7506852, .data = 214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7506848, .data = 24901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7506846, .data = 10781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7506842, .data = 24914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7506844, .data = 214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12214708, .data = 11100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12214710, .data = 50281, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bsr_initial_ram_31[] = {
		{ .addr = 0x79cc24, .byte = 0x61 },
		{ .addr = 0x79cc25, .byte = 0x90 },
		{ .addr = 0x79cc26, .byte = 0xb0 },
		{ .addr = 0x79cc27, .byte = 0xa0 },
		{ .addr = 0x79cbb6, .byte = 0x67 },
		{ .addr = 0x79cbb7, .byte = 0xd6 },
		{ .addr = 0x79cbb8, .byte = 0xbf },
		{ .addr = 0x79cbb9, .byte = 0xaf }
};

static const SST_RamByte bsr_final_ram_31[] = {
		{ .addr = 0x79cc24, .byte = 0x61 },
		{ .addr = 0x79cc25, .byte = 0x90 },
		{ .addr = 0x79cc26, .byte = 0xb0 },
		{ .addr = 0x79cc27, .byte = 0xa0 },
		{ .addr = 0x142854, .byte = 0x00 },
		{ .addr = 0x142855, .byte = 0x79 },
		{ .addr = 0x142856, .byte = 0xcc },
		{ .addr = 0x142857, .byte = 0x26 },
		{ .addr = 0x79cbb6, .byte = 0x67 },
		{ .addr = 0x79cbb7, .byte = 0xd6 },
		{ .addr = 0x79cbb8, .byte = 0xbf },
		{ .addr = 0x79cbb9, .byte = 0xaf }
};

static const SST_Transaction bsr_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1321044, .data = 121, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1321046, .data = 52262, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7982006, .data = 26582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7982008, .data = 49071, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 BSR 9 6109",
		.initial = {
			.regs = {
				3044262078, 1145501212, 4154583652, 3848671692, 3187470306, 1963462417, 4164343657, 2658886925, 4004533580, 2835774613, 2693927147, 406497625, 2299772675, 1123269456, 1157141274, 2216308, 13348288, 9240, 45018
			},
			.prefetch0 = 24841,
			.prefetch1 = 45689,
			.ram = bsr_initial_ram_16,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3044262078, 1145501212, 4154583652, 3848671692, 3187470306, 1963462417, 4164343657, 2658886925, 4004533580, 2835774613, 2693927147, 406497625, 2299772675, 1123269456, 1157141274, 2216308, 13348270, 9240, 3092283540
			},
			.prefetch0 = 60066,
			.prefetch1 = 15511,
			.ram = bsr_final_ram_16,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_16,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "017 BSR -107 6195",
		.initial = {
			.regs = {
				2100573620, 298964036, 1885130938, 2363614885, 1962733010, 728397309, 73582447, 1324656867, 1340127162, 1278114266, 3765570309, 2449845324, 2116614493, 717572749, 2305253929, 5518508, 8359234, 32797, 920852
			},
			.prefetch0 = 24981,
			.prefetch1 = 1175,
			.ram = bsr_initial_ram_17,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2100573620, 298964036, 1885130938, 2363614885, 1962733010, 728397309, 73582447, 1324656867, 1340127162, 1278114266, 3765570309, 2449845324, 2116614493, 717572749, 2305253929, 5518504, 8359220, 8221, 881884542
			},
			.prefetch0 = 3050,
			.prefetch1 = 62759,
			.ram = bsr_final_ram_17,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_17,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "018 BSR 57 6139",
		.initial = {
			.regs = {
				3416906409, 951652946, 2066020867, 1105617236, 3454742436, 2429669617, 531290173, 3187712139, 2378137517, 2214401103, 1976917973, 2861604499, 2277460353, 290322647, 738625320, 281080, 8662040, 9744, 7898576
			},
			.prefetch0 = 24889,
			.prefetch1 = 52840,
			.ram = bsr_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3416906409, 951652946, 2066020867, 1105617236, 3454742436, 2429669617, 531290173, 3187712139, 2378137517, 2214401103, 1976917973, 2861604499, 2277460353, 290322647, 738625320, 281080, 8662022, 9744, 3400710454
			},
			.prefetch0 = 60914,
			.prefetch1 = 30600,
			.ram = bsr_final_ram_18,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_18,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "019 BSR -60 61c4",
		.initial = {
			.regs = {
				3924732909, 3282802439, 1301752307, 962061684, 2069649552, 2432507525, 2337450139, 1552706436, 4241470463, 859080734, 2413678787, 4252104878, 515169923, 2903189421, 219512278, 16077422, 13576772, 42010, 9851896
			},
			.prefetch0 = 25028,
			.prefetch1 = 59084,
			.ram = bsr_initial_ram_19,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3924732909, 3282802439, 1301752307, 962061684, 2069649552, 2432507525, 2337450139, 1552706436, 4241470463, 859080734, 2413678787, 4252104878, 515169923, 2903189421, 219512278, 16077422, 13576768, 42010, 9851838
			},
			.prefetch0 = 16676,
			.prefetch1 = 17476,
			.ram = bsr_final_ram_19,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_19,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "020 BSR -20 61ec",
		.initial = {
			.regs = {
				1640415598, 489659127, 1014792347, 2695208935, 522483292, 3614645358, 3088738413, 3326076276, 1683039378, 2883579434, 2910324642, 1564510232, 1760552844, 3001252431, 287202996, 9910106, 9956670, 42243, 14556052
			},
			.prefetch0 = 25068,
			.prefetch1 = 24551,
			.ram = bsr_initial_ram_20,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1640415598, 489659127, 1014792347, 2695208935, 522483292, 3614645358, 3088738413, 3326076276, 1683039378, 2883579434, 2910324642, 1564510232, 1760552844, 3001252431, 287202996, 9910106, 9956666, 42243, 14556034
			},
			.prefetch0 = 64636,
			.prefetch1 = 49739,
			.ram = bsr_final_ram_20,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_20,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "021 BSR 23 6117",
		.initial = {
			.regs = {
				2833318677, 1019041860, 3904332889, 2273204188, 2203363238, 296356483, 2038305171, 3815068246, 3597967686, 738423398, 170341359, 2756473193, 73160850, 3008567637, 547402125, 4260596, 14232172, 1553, 12354070
			},
			.prefetch0 = 24855,
			.prefetch1 = 12644,
			.ram = bsr_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2833318677, 1019041860, 3904332889, 2273204188, 2203363238, 296356483, 2038305171, 3815068246, 3597967686, 738423398, 170341359, 2756473193, 73160850, 3008567637, 547402125, 4260592, 14232158, 9745, 164250680
			},
			.prefetch0 = 20579,
			.prefetch1 = 14117,
			.ram = bsr_final_ram_21,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_21,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "022 BSR 39 6127",
		.initial = {
			.regs = {
				3552385611, 4105916887, 338731772, 4193263009, 2061185395, 2681308595, 132586808, 931384663, 606045701, 2790564224, 1001454720, 1913376281, 1141151453, 923830141, 1943495571, 8476708, 14673514, 33280, 12541152
			},
			.prefetch0 = 24871,
			.prefetch1 = 18921,
			.ram = bsr_initial_ram_22,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3552385611, 4105916887, 338731772, 4193263009, 2061185395, 2681308595, 132586808, 931384663, 606045701, 2790564224, 1001454720, 1913376281, 1141151453, 923830141, 1943495571, 8476704, 14673500, 8704, 3581735718
			},
			.prefetch0 = 43958,
			.prefetch1 = 36413,
			.ram = bsr_final_ram_22,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_22,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "023 BSR 65 6141",
		.initial = {
			.regs = {
				2146385546, 474965615, 2703354342, 4287000155, 90273280, 301733261, 3656772303, 1612886196, 2061886656, 3183026, 2916191846, 52556438, 3910631972, 1170056632, 4005508624, 9749288, 6612274, 8721, 10548302
			},
			.prefetch0 = 24897,
			.prefetch1 = 47000,
			.ram = bsr_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2146385546, 474965615, 2703354342, 4287000155, 90273280, 301733261, 3656772303, 1612886196, 2061886656, 3183026, 2916191846, 52556438, 3910631972, 1170056632, 4005508624, 9749288, 6612256, 8721, 1358571076
			},
			.prefetch0 = 37679,
			.prefetch1 = 61182,
			.ram = bsr_final_ram_23,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_23,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "024 BSR 102 6166",
		.initial = {
			.regs = {
				1471243807, 2985975950, 1105093744, 664002285, 3487840515, 4191916173, 1545751273, 2725885196, 4209214752, 3681561673, 227265219, 2747801993, 174614484, 1996360738, 1744390783, 1712402, 10674742, 33303, 3303686
			},
			.prefetch0 = 24934,
			.prefetch1 = 55112,
			.ram = bsr_initial_ram_24,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1471243807, 2985975950, 1105093744, 664002285, 3487840515, 4191916173, 1545751273, 2725885196, 4209214752, 3681561673, 227265219, 2747801993, 174614484, 1996360738, 1744390783, 1712398, 10674742, 33303, 3303790
			},
			.prefetch0 = 65425,
			.prefetch1 = 41611,
			.ram = bsr_final_ram_24,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_24,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "025 BSR -1 61ff",
		.initial = {
			.regs = {
				3763246787, 3615052007, 941604598, 2828106788, 1028263993, 808188456, 582324121, 1916602020, 3887787348, 2420457697, 2778699812, 477077762, 1085943474, 2576480024, 2099603436, 11690344, 8373072, 34561, 11759258
			},
			.prefetch0 = 25087,
			.prefetch1 = 752,
			.ram = bsr_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3763246787, 3615052007, 941604598, 2828106788, 1028263993, 808188456, 582324121, 1916602020, 3887787348, 2420457697, 2778699812, 477077762, 1085943474, 2576480024, 2099603436, 11690340, 8373058, 9985, 208059650
			},
			.prefetch0 = 21002,
			.prefetch1 = 14007,
			.ram = bsr_final_ram_25,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_25,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "026 BSR 93 615d",
		.initial = {
			.regs = {
				2817850179, 2671419130, 2209700741, 2775089092, 1556059523, 4247995132, 1866835636, 3440991013, 3834774891, 2355116779, 2667431778, 1786907820, 2406407652, 1012142874, 160777122, 1131996, 16545654, 42256, 6611976
			},
			.prefetch0 = 24925,
			.prefetch1 = 63263,
			.ram = bsr_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2817850179, 2671419130, 2209700741, 2775089092, 1556059523, 4247995132, 1866835636, 3440991013, 3834774891, 2355116779, 2667431778, 1786907820, 2406407652, 1012142874, 160777122, 1131996, 16545636, 9488, 3289273976
			},
			.prefetch0 = 60436,
			.prefetch1 = 13702,
			.ram = bsr_final_ram_26,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_26,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "027 BSR 81 6151",
		.initial = {
			.regs = {
				984198661, 2685422434, 4055207515, 1913760491, 3594439025, 986659318, 3674658293, 456706750, 1698847443, 941605942, 3800864282, 2869243040, 1072811164, 1009338263, 1808458886, 13189096, 553446, 270, 14114666
			},
			.prefetch0 = 24913,
			.prefetch1 = 33989,
			.ram = bsr_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				984198661, 2685422434, 4055207515, 1913760491, 3594439025, 986659318, 3674658293, 456706750, 1698847443, 941605942, 3800864282, 2869243040, 1072811164, 1009338263, 1808458886, 13189092, 553432, 8462, 2176761020
			},
			.prefetch0 = 1232,
			.prefetch1 = 58491,
			.ram = bsr_final_ram_27,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_27,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "028 BSR -72 61b8",
		.initial = {
			.regs = {
				1745948983, 2524626352, 1192746486, 3245956711, 968247974, 519205923, 1360230047, 3461730965, 1221307383, 3153033647, 3544012651, 2853303817, 4247277664, 3675079737, 2297345968, 15076412, 7544650, 1822, 14222270
			},
			.prefetch0 = 25016,
			.prefetch1 = 39529,
			.ram = bsr_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1745948983, 2524626352, 1192746486, 3245956711, 968247974, 519205923, 1360230047, 3461730965, 1221307383, 3153033647, 3544012651, 2853303817, 4247277664, 3675079737, 2297345968, 15076408, 7544650, 1822, 14222200
			},
			.prefetch0 = 55827,
			.prefetch1 = 54285,
			.ram = bsr_final_ram_28,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_28,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "029 BSR 106 616a",
		.initial = {
			.regs = {
				344650975, 290583119, 300024506, 454925098, 3051271235, 2982211985, 2339554165, 827351453, 1904584625, 2122179743, 310696103, 1831304671, 1027943265, 2894719296, 2199147340, 5443454, 3967930, 10015, 9299476
			},
			.prefetch0 = 24938,
			.prefetch1 = 40023,
			.ram = bsr_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				344650975, 290583119, 300024506, 454925098, 3051271235, 2982211985, 2339554165, 827351453, 1904584625, 2122179743, 310696103, 1831304671, 1027943265, 2894719296, 2199147340, 5443454, 3967926, 10015, 9299584
			},
			.prefetch0 = 2828,
			.prefetch1 = 36929,
			.ram = bsr_final_ram_29,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_29,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "030 BSR 69 6145",
		.initial = {
			.regs = {
				2321573928, 397873571, 2424919796, 3799173819, 2068314169, 1739566463, 3313970931, 348361343, 671505270, 4017139924, 496117840, 3684336963, 229684366, 1516109794, 4094936826, 9228832, 7506856, 34050, 14035418
			},
			.prefetch0 = 24901,
			.prefetch1 = 5649,
			.ram = bsr_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2321573928, 397873571, 2424919796, 3799173819, 2068314169, 1739566463, 3313970931, 348361343, 671505270, 4017139924, 496117840, 3684336963, 229684366, 1516109794, 4094936826, 9228828, 7506842, 9474, 2713346488
			},
			.prefetch0 = 11100,
			.prefetch1 = 50281,
			.ram = bsr_final_ram_30,
			.ram_len = 30,
		},
		.transactions = bsr_transactions_30,
		.transactions_len = 17,
		.lenght = 68,
	},
	{
		.name = "031 BSR -112 6190",
		.initial = {
			.regs = {
				4283261000, 3461424113, 750098801, 3033789036, 1779484621, 3594389098, 3315030064, 1383606307, 170256491, 3470576291, 2253069561, 1416368283, 3342029786, 2097162252, 1704066988, 1321048, 564418, 34057, 7982120
			},
			.prefetch0 = 24976,
			.prefetch1 = 45216,
			.ram = bsr_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4283261000, 3461424113, 750098801, 3033789036, 1779484621, 3594389098, 3315030064, 1383606307, 170256491, 3470576291, 2253069561, 1416368283, 3342029786, 2097162252, 1704066988, 1321044, 564418, 34057, 7982010
			},
			.prefetch0 = 26582,
			.prefetch1 = 49071,
			.ram = bsr_final_ram_31,
			.ram_len = 12,
		},
		.transactions = bsr_transactions_31,
		.transactions_len = 5,
		.lenght = 18,
	},
};

#endif /* RBT_BSR_H */