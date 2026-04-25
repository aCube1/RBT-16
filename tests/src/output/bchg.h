#ifndef RBT_BCHG_H
#define RBT_BCHG_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte bchg_initial_ram_0[] = {
		{ .addr = 0x5dff42, .byte = 0x01 },
		{ .addr = 0x5dff43, .byte = 0x61 },
		{ .addr = 0x5dff44, .byte = 0x46 },
		{ .addr = 0x5dff45, .byte = 0x83 },
		{ .addr = 0x24ddb4, .byte = 0x99 },
		{ .addr = 0x24ddb5, .byte = 0x3e },
		{ .addr = 0x5dff46, .byte = 0x69 },
		{ .addr = 0x5dff47, .byte = 0x61 }
};

static const SST_RamByte bchg_final_ram_0[] = {
		{ .addr = 0x5dff42, .byte = 0x01 },
		{ .addr = 0x5dff43, .byte = 0x61 },
		{ .addr = 0x5dff44, .byte = 0x46 },
		{ .addr = 0x5dff45, .byte = 0x83 },
		{ .addr = 0x24ddb4, .byte = 0x9d },
		{ .addr = 0x24ddb5, .byte = 0x3e },
		{ .addr = 0x5dff46, .byte = 0x69 },
		{ .addr = 0x5dff47, .byte = 0x61 }
};

static const SST_Transaction bchg_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2416052, .data = 39168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6160198, .data = 26977, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2416052, .data = 40192, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_1[] = {
		{ .addr = 0x7c22f2, .byte = 0x08 },
		{ .addr = 0x7c22f3, .byte = 0x53 },
		{ .addr = 0x7c22f4, .byte = 0x86 },
		{ .addr = 0x7c22f5, .byte = 0x17 },
		{ .addr = 0x7c22f6, .byte = 0x3c },
		{ .addr = 0x7c22f7, .byte = 0x96 },
		{ .addr = 0xc6b3da, .byte = 0x03 },
		{ .addr = 0xc6b3db, .byte = 0xef },
		{ .addr = 0x7c22f8, .byte = 0xf5 },
		{ .addr = 0x7c22f9, .byte = 0xc7 }
};

static const SST_RamByte bchg_final_ram_1[] = {
		{ .addr = 0x7c22f2, .byte = 0x08 },
		{ .addr = 0x7c22f3, .byte = 0x53 },
		{ .addr = 0x7c22f4, .byte = 0x86 },
		{ .addr = 0x7c22f5, .byte = 0x17 },
		{ .addr = 0x7c22f6, .byte = 0x3c },
		{ .addr = 0x7c22f7, .byte = 0x96 },
		{ .addr = 0xc6b3da, .byte = 0x03 },
		{ .addr = 0xc6b3db, .byte = 0x6f },
		{ .addr = 0x7c22f8, .byte = 0xf5 },
		{ .addr = 0x7c22f9, .byte = 0xc7 }
};

static const SST_Transaction bchg_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8135414, .data = 15510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13022170, .data = 239, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8135416, .data = 62919, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13022170, .data = 111, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_2[] = {
		{ .addr = 0xe7dbee, .byte = 0x0f },
		{ .addr = 0xe7dbef, .byte = 0x60 },
		{ .addr = 0xe7dbf0, .byte = 0x33 },
		{ .addr = 0xe7dbf1, .byte = 0xa3 },
		{ .addr = 0x93d50a, .byte = 0x72 },
		{ .addr = 0x93d50b, .byte = 0x78 },
		{ .addr = 0xe7dbf2, .byte = 0xbe },
		{ .addr = 0xe7dbf3, .byte = 0xe0 }
};

static const SST_RamByte bchg_final_ram_2[] = {
		{ .addr = 0xe7dbee, .byte = 0x0f },
		{ .addr = 0xe7dbef, .byte = 0x60 },
		{ .addr = 0xe7dbf0, .byte = 0x33 },
		{ .addr = 0xe7dbf1, .byte = 0xa3 },
		{ .addr = 0x93d50a, .byte = 0x72 },
		{ .addr = 0x93d50b, .byte = 0x7c },
		{ .addr = 0xe7dbf2, .byte = 0xbe },
		{ .addr = 0xe7dbf3, .byte = 0xe0 }
};

static const SST_Transaction bchg_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9688330, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15195122, .data = 48864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9688330, .data = 124, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_3[] = {
		{ .addr = 0x291cc6, .byte = 0x07 },
		{ .addr = 0x291cc7, .byte = 0x70 },
		{ .addr = 0x291cc8, .byte = 0x8c },
		{ .addr = 0x291cc9, .byte = 0x57 },
		{ .addr = 0x291cca, .byte = 0x1f },
		{ .addr = 0x291ccb, .byte = 0xd2 },
		{ .addr = 0x50eafc, .byte = 0x03 },
		{ .addr = 0x50eafd, .byte = 0xd5 },
		{ .addr = 0x291ccc, .byte = 0x28 },
		{ .addr = 0x291ccd, .byte = 0xf9 }
};

static const SST_RamByte bchg_final_ram_3[] = {
		{ .addr = 0x291cc6, .byte = 0x07 },
		{ .addr = 0x291cc7, .byte = 0x70 },
		{ .addr = 0x291cc8, .byte = 0x8c },
		{ .addr = 0x291cc9, .byte = 0x57 },
		{ .addr = 0x291cca, .byte = 0x1f },
		{ .addr = 0x291ccb, .byte = 0xd2 },
		{ .addr = 0x50eafc, .byte = 0x03 },
		{ .addr = 0x50eafd, .byte = 0xd4 },
		{ .addr = 0x291ccc, .byte = 0x28 },
		{ .addr = 0x291ccd, .byte = 0xf9 }
};

static const SST_Transaction bchg_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2694346, .data = 8146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5303036, .data = 213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2694348, .data = 10489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5303036, .data = 212, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_4[] = {
		{ .addr = 0x2e77f2, .byte = 0x0d },
		{ .addr = 0x2e77f3, .byte = 0x72 },
		{ .addr = 0x2e77f4, .byte = 0xe2 },
		{ .addr = 0x2e77f5, .byte = 0x7a },
		{ .addr = 0x2e77f6, .byte = 0x3e },
		{ .addr = 0x2e77f7, .byte = 0xbe },
		{ .addr = 0xce5638, .byte = 0xed },
		{ .addr = 0xce5639, .byte = 0x7a },
		{ .addr = 0x2e77f8, .byte = 0x06 },
		{ .addr = 0x2e77f9, .byte = 0xfd }
};

static const SST_RamByte bchg_final_ram_4[] = {
		{ .addr = 0x2e77f2, .byte = 0x0d },
		{ .addr = 0x2e77f3, .byte = 0x72 },
		{ .addr = 0x2e77f4, .byte = 0xe2 },
		{ .addr = 0x2e77f5, .byte = 0x7a },
		{ .addr = 0x2e77f6, .byte = 0x3e },
		{ .addr = 0x2e77f7, .byte = 0xbe },
		{ .addr = 0xce5638, .byte = 0xef },
		{ .addr = 0xce5639, .byte = 0x7a },
		{ .addr = 0x2e77f8, .byte = 0x06 },
		{ .addr = 0x2e77f9, .byte = 0xfd }
};

static const SST_Transaction bchg_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3045366, .data = 16062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13522488, .data = 60672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3045368, .data = 1789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13522488, .data = 61184, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_5[] = {
		{ .addr = 0xcda56a, .byte = 0x0d },
		{ .addr = 0xcda56b, .byte = 0x70 },
		{ .addr = 0xcda56c, .byte = 0x2c },
		{ .addr = 0xcda56d, .byte = 0x38 },
		{ .addr = 0xcda56e, .byte = 0x3d },
		{ .addr = 0xcda56f, .byte = 0xb3 },
		{ .addr = 0x4fc3a8, .byte = 0xaf },
		{ .addr = 0x4fc3a9, .byte = 0x6c },
		{ .addr = 0xcda570, .byte = 0x73 },
		{ .addr = 0xcda571, .byte = 0xf2 }
};

static const SST_RamByte bchg_final_ram_5[] = {
		{ .addr = 0xcda56a, .byte = 0x0d },
		{ .addr = 0xcda56b, .byte = 0x70 },
		{ .addr = 0xcda56c, .byte = 0x2c },
		{ .addr = 0xcda56d, .byte = 0x38 },
		{ .addr = 0xcda56e, .byte = 0x3d },
		{ .addr = 0xcda56f, .byte = 0xb3 },
		{ .addr = 0x4fc3a8, .byte = 0x2f },
		{ .addr = 0x4fc3a9, .byte = 0x6c },
		{ .addr = 0xcda570, .byte = 0x73 },
		{ .addr = 0xcda571, .byte = 0xf2 }
};

static const SST_Transaction bchg_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13477230, .data = 15795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5227432, .data = 44800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13477232, .data = 29682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5227432, .data = 12032, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_6[] = {
		{ .addr = 0x8cf4a6, .byte = 0x0d },
		{ .addr = 0x8cf4a7, .byte = 0x77 },
		{ .addr = 0x8cf4a8, .byte = 0x7b },
		{ .addr = 0x8cf4a9, .byte = 0xd4 },
		{ .addr = 0x8cf4aa, .byte = 0x93 },
		{ .addr = 0x8cf4ab, .byte = 0xbb },
		{ .addr = 0xca9810, .byte = 0xe9 },
		{ .addr = 0xca9811, .byte = 0xf7 },
		{ .addr = 0x8cf4ac, .byte = 0x28 },
		{ .addr = 0x8cf4ad, .byte = 0xde }
};

static const SST_RamByte bchg_final_ram_6[] = {
		{ .addr = 0x8cf4a6, .byte = 0x0d },
		{ .addr = 0x8cf4a7, .byte = 0x77 },
		{ .addr = 0x8cf4a8, .byte = 0x7b },
		{ .addr = 0x8cf4a9, .byte = 0xd4 },
		{ .addr = 0x8cf4aa, .byte = 0x93 },
		{ .addr = 0x8cf4ab, .byte = 0xbb },
		{ .addr = 0xca9810, .byte = 0xe1 },
		{ .addr = 0xca9811, .byte = 0xf7 },
		{ .addr = 0x8cf4ac, .byte = 0x28 },
		{ .addr = 0x8cf4ad, .byte = 0xde }
};

static const SST_Transaction bchg_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9237674, .data = 37819, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13277200, .data = 59648, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9237676, .data = 10462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13277200, .data = 57600, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_7[] = {
		{ .addr = 0xa05d1a, .byte = 0x09 },
		{ .addr = 0xa05d1b, .byte = 0x41 },
		{ .addr = 0xa05d1c, .byte = 0x30 },
		{ .addr = 0xa05d1d, .byte = 0xde },
		{ .addr = 0xa05d1e, .byte = 0xf7 },
		{ .addr = 0xa05d1f, .byte = 0x66 }
};

static const SST_RamByte bchg_final_ram_7[] = {
		{ .addr = 0xa05d1a, .byte = 0x09 },
		{ .addr = 0xa05d1b, .byte = 0x41 },
		{ .addr = 0xa05d1c, .byte = 0x30 },
		{ .addr = 0xa05d1d, .byte = 0xde },
		{ .addr = 0xa05d1e, .byte = 0xf7 },
		{ .addr = 0xa05d1f, .byte = 0x66 }
};

static const SST_Transaction bchg_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10509598, .data = 63334, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte bchg_initial_ram_8[] = {
		{ .addr = 0x426be2, .byte = 0x05 },
		{ .addr = 0x426be3, .byte = 0x5c },
		{ .addr = 0x426be4, .byte = 0x8f },
		{ .addr = 0x426be5, .byte = 0x85 },
		{ .addr = 0xf9d752, .byte = 0x15 },
		{ .addr = 0xf9d753, .byte = 0x01 },
		{ .addr = 0x426be6, .byte = 0xf0 },
		{ .addr = 0x426be7, .byte = 0x15 }
};

static const SST_RamByte bchg_final_ram_8[] = {
		{ .addr = 0x426be2, .byte = 0x05 },
		{ .addr = 0x426be3, .byte = 0x5c },
		{ .addr = 0x426be4, .byte = 0x8f },
		{ .addr = 0x426be5, .byte = 0x85 },
		{ .addr = 0xf9d752, .byte = 0x15 },
		{ .addr = 0xf9d753, .byte = 0x09 },
		{ .addr = 0x426be6, .byte = 0xf0 },
		{ .addr = 0x426be7, .byte = 0x15 }
};

static const SST_Transaction bchg_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16373586, .data = 1, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4352998, .data = 61461, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16373586, .data = 9, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_9[] = {
		{ .addr = 0xf7f74e, .byte = 0x07 },
		{ .addr = 0xf7f74f, .byte = 0x51 },
		{ .addr = 0xf7f750, .byte = 0xd1 },
		{ .addr = 0xf7f751, .byte = 0x54 },
		{ .addr = 0x53f984, .byte = 0x6d },
		{ .addr = 0x53f985, .byte = 0xd8 },
		{ .addr = 0xf7f752, .byte = 0x3e },
		{ .addr = 0xf7f753, .byte = 0xa9 }
};

static const SST_RamByte bchg_final_ram_9[] = {
		{ .addr = 0xf7f74e, .byte = 0x07 },
		{ .addr = 0xf7f74f, .byte = 0x51 },
		{ .addr = 0xf7f750, .byte = 0xd1 },
		{ .addr = 0xf7f751, .byte = 0x54 },
		{ .addr = 0x53f984, .byte = 0x6d },
		{ .addr = 0x53f985, .byte = 0xd9 },
		{ .addr = 0xf7f752, .byte = 0x3e },
		{ .addr = 0xf7f753, .byte = 0xa9 }
};

static const SST_Transaction bchg_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5503364, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16250706, .data = 16041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5503364, .data = 217, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_10[] = {
		{ .addr = 0x8204be, .byte = 0x0f },
		{ .addr = 0x8204bf, .byte = 0x55 },
		{ .addr = 0x8204c0, .byte = 0xb7 },
		{ .addr = 0x8204c1, .byte = 0x41 },
		{ .addr = 0xbcae4a, .byte = 0xa9 },
		{ .addr = 0xbcae4b, .byte = 0x48 },
		{ .addr = 0x8204c2, .byte = 0xd9 },
		{ .addr = 0x8204c3, .byte = 0x6f }
};

static const SST_RamByte bchg_final_ram_10[] = {
		{ .addr = 0x8204be, .byte = 0x0f },
		{ .addr = 0x8204bf, .byte = 0x55 },
		{ .addr = 0x8204c0, .byte = 0xb7 },
		{ .addr = 0x8204c1, .byte = 0x41 },
		{ .addr = 0xbcae4a, .byte = 0xe9 },
		{ .addr = 0xbcae4b, .byte = 0x48 },
		{ .addr = 0x8204c2, .byte = 0xd9 },
		{ .addr = 0x8204c3, .byte = 0x6f }
};

static const SST_Transaction bchg_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12365386, .data = 43264, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8520898, .data = 55663, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12365386, .data = 59648, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_11[] = {
		{ .addr = 0xa9bb92, .byte = 0x0b },
		{ .addr = 0xa9bb93, .byte = 0x66 },
		{ .addr = 0xa9bb94, .byte = 0x80 },
		{ .addr = 0xa9bb95, .byte = 0x35 },
		{ .addr = 0x3618c4, .byte = 0x69 },
		{ .addr = 0x3618c5, .byte = 0x6d },
		{ .addr = 0xa9bb96, .byte = 0x3b },
		{ .addr = 0xa9bb97, .byte = 0x3a }
};

static const SST_RamByte bchg_final_ram_11[] = {
		{ .addr = 0xa9bb92, .byte = 0x0b },
		{ .addr = 0xa9bb93, .byte = 0x66 },
		{ .addr = 0xa9bb94, .byte = 0x80 },
		{ .addr = 0xa9bb95, .byte = 0x35 },
		{ .addr = 0x3618c4, .byte = 0x6b },
		{ .addr = 0x3618c5, .byte = 0x6d },
		{ .addr = 0xa9bb96, .byte = 0x3b },
		{ .addr = 0xa9bb97, .byte = 0x3a }
};

static const SST_Transaction bchg_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3545284, .data = 26880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11123606, .data = 15162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3545284, .data = 27392, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_12[] = {
		{ .addr = 0x193258, .byte = 0x0d },
		{ .addr = 0x193259, .byte = 0x6f },
		{ .addr = 0x19325a, .byte = 0x52 },
		{ .addr = 0x19325b, .byte = 0x48 },
		{ .addr = 0x19325c, .byte = 0xd5 },
		{ .addr = 0x19325d, .byte = 0xc2 },
		{ .addr = 0x624824, .byte = 0xe1 },
		{ .addr = 0x624825, .byte = 0x02 },
		{ .addr = 0x19325e, .byte = 0x2a },
		{ .addr = 0x19325f, .byte = 0x88 }
};

static const SST_RamByte bchg_final_ram_12[] = {
		{ .addr = 0x193258, .byte = 0x0d },
		{ .addr = 0x193259, .byte = 0x6f },
		{ .addr = 0x19325a, .byte = 0x52 },
		{ .addr = 0x19325b, .byte = 0x48 },
		{ .addr = 0x19325c, .byte = 0xd5 },
		{ .addr = 0x19325d, .byte = 0xc2 },
		{ .addr = 0x624824, .byte = 0x61 },
		{ .addr = 0x624825, .byte = 0x02 },
		{ .addr = 0x19325e, .byte = 0x2a },
		{ .addr = 0x19325f, .byte = 0x88 }
};

static const SST_Transaction bchg_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1651292, .data = 54722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6440996, .data = 57600, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1651294, .data = 10888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6440996, .data = 24832, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_13[] = {
		{ .addr = 0x1fc5e6, .byte = 0x05 },
		{ .addr = 0x1fc5e7, .byte = 0x69 },
		{ .addr = 0x1fc5e8, .byte = 0x52 },
		{ .addr = 0x1fc5e9, .byte = 0x1c },
		{ .addr = 0x1fc5ea, .byte = 0xc1 },
		{ .addr = 0x1fc5eb, .byte = 0xf5 },
		{ .addr = 0xf6e99c, .byte = 0x49 },
		{ .addr = 0xf6e99d, .byte = 0x3f },
		{ .addr = 0x1fc5ec, .byte = 0x92 },
		{ .addr = 0x1fc5ed, .byte = 0x42 }
};

static const SST_RamByte bchg_final_ram_13[] = {
		{ .addr = 0x1fc5e6, .byte = 0x05 },
		{ .addr = 0x1fc5e7, .byte = 0x69 },
		{ .addr = 0x1fc5e8, .byte = 0x52 },
		{ .addr = 0x1fc5e9, .byte = 0x1c },
		{ .addr = 0x1fc5ea, .byte = 0xc1 },
		{ .addr = 0x1fc5eb, .byte = 0xf5 },
		{ .addr = 0xf6e99c, .byte = 0x48 },
		{ .addr = 0xf6e99d, .byte = 0x3f },
		{ .addr = 0x1fc5ec, .byte = 0x92 },
		{ .addr = 0x1fc5ed, .byte = 0x42 }
};

static const SST_Transaction bchg_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2082282, .data = 49653, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16181660, .data = 18688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2082284, .data = 37442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16181660, .data = 18432, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_14[] = {
		{ .addr = 0x78808c, .byte = 0x08 },
		{ .addr = 0x78808d, .byte = 0x5e },
		{ .addr = 0x78808e, .byte = 0xe6 },
		{ .addr = 0x78808f, .byte = 0xd1 },
		{ .addr = 0x788090, .byte = 0xe3 },
		{ .addr = 0x788091, .byte = 0x44 },
		{ .addr = 0xf7830e, .byte = 0x15 },
		{ .addr = 0xf7830f, .byte = 0x56 },
		{ .addr = 0x788092, .byte = 0xa3 },
		{ .addr = 0x788093, .byte = 0x6a }
};

static const SST_RamByte bchg_final_ram_14[] = {
		{ .addr = 0x78808c, .byte = 0x08 },
		{ .addr = 0x78808d, .byte = 0x5e },
		{ .addr = 0x78808e, .byte = 0xe6 },
		{ .addr = 0x78808f, .byte = 0xd1 },
		{ .addr = 0x788090, .byte = 0xe3 },
		{ .addr = 0x788091, .byte = 0x44 },
		{ .addr = 0xf7830e, .byte = 0x15 },
		{ .addr = 0xf7830f, .byte = 0x54 },
		{ .addr = 0x788092, .byte = 0xa3 },
		{ .addr = 0x788093, .byte = 0x6a }
};

static const SST_Transaction bchg_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7897232, .data = 58180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16220942, .data = 86, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7897234, .data = 41834, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16220942, .data = 84, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte bchg_initial_ram_15[] = {
		{ .addr = 0x01982c, .byte = 0x08 },
		{ .addr = 0x01982d, .byte = 0x72 },
		{ .addr = 0x01982e, .byte = 0x1b },
		{ .addr = 0x01982f, .byte = 0x43 },
		{ .addr = 0x019830, .byte = 0xe4 },
		{ .addr = 0x019831, .byte = 0x5f },
		{ .addr = 0x019832, .byte = 0x9b },
		{ .addr = 0x019833, .byte = 0xcd },
		{ .addr = 0xababaa, .byte = 0x25 },
		{ .addr = 0xababab, .byte = 0xd0 },
		{ .addr = 0x019834, .byte = 0x85 },
		{ .addr = 0x019835, .byte = 0x54 }
};

static const SST_RamByte bchg_final_ram_15[] = {
		{ .addr = 0x01982c, .byte = 0x08 },
		{ .addr = 0x01982d, .byte = 0x72 },
		{ .addr = 0x01982e, .byte = 0x1b },
		{ .addr = 0x01982f, .byte = 0x43 },
		{ .addr = 0x019830, .byte = 0xe4 },
		{ .addr = 0x019831, .byte = 0x5f },
		{ .addr = 0x019832, .byte = 0x9b },
		{ .addr = 0x019833, .byte = 0xcd },
		{ .addr = 0xababaa, .byte = 0x25 },
		{ .addr = 0xababab, .byte = 0xd8 },
		{ .addr = 0x019834, .byte = 0x85 },
		{ .addr = 0x019835, .byte = 0x54 }
};

static const SST_Transaction bchg_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 104496, .data = 58463, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 104498, .data = 39885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11250602, .data = 208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 104500, .data = 34132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11250602, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t BCHG_TEST_COUNT = 16;
static const SST_TestCase bchg[] = {
	{
		.name = "000 BCHG D0, -(A1) 0161",
		.initial = {
			.regs = {
				1013149314, 2079776874, 2628387610, 3093919338, 1212947663, 1187050979, 2884907894, 163182458, 763790839, 270851509, 1306710656, 466495534, 3398793354, 2050585928, 1615290214, 4945676, 13782418, 42511, 6160198
			},
			.prefetch0 = 353,
			.prefetch1 = 18051,
			.ram = bchg_initial_ram_0,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1013149314, 2079776874, 2628387610, 3093919338, 1212947663, 1187050979, 2884907894, 163182458, 763790839, 270851508, 1306710656, 466495534, 3398793354, 2050585928, 1615290214, 4945676, 13782418, 42511, 6160200
			},
			.prefetch0 = 18051,
			.prefetch1 = 26977,
			.ram = bchg_final_ram_0,
			.ram_len = 8,
		},
		.transactions = bchg_transactions_0,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "001 BCHG #, (A3) 0853",
		.initial = {
			.regs = {
				327682556, 378778900, 4105253005, 1936534267, 1318903154, 3164836879, 3653763998, 675268263, 3870130380, 3561549826, 3247382229, 751219675, 2315276678, 4289928313, 1871740151, 6724018, 11194984, 9759, 8135414
			},
			.prefetch0 = 2131,
			.prefetch1 = 34327,
			.ram = bchg_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				327682556, 378778900, 4105253005, 1936534267, 1318903154, 3164836879, 3653763998, 675268263, 3870130380, 3561549826, 3247382229, 751219675, 2315276678, 4289928313, 1871740151, 6724018, 11194984, 9755, 8135418
			},
			.prefetch0 = 15510,
			.prefetch1 = 62919,
			.ram = bchg_final_ram_1,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 BCHG D7, -(A0) 0f60",
		.initial = {
			.regs = {
				4280725066, 698708135, 2595828340, 3671123314, 2784049476, 3724615242, 997646584, 1545721634, 513004812, 2088514181, 2218469841, 2041269707, 8906989, 1808164479, 2804870649, 15822868, 14211148, 9738, 15195122
			},
			.prefetch0 = 3936,
			.prefetch1 = 13219,
			.ram = bchg_initial_ram_2,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4280725066, 698708135, 2595828340, 3671123314, 2784049476, 3724615242, 997646584, 1545721634, 513004811, 2088514181, 2218469841, 2041269707, 8906989, 1808164479, 2804870649, 15822868, 14211148, 9742, 15195124
			},
			.prefetch0 = 13219,
			.prefetch1 = 48864,
			.ram = bchg_final_ram_2,
			.ram_len = 8,
		},
		.transactions = bchg_transactions_2,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "003 BCHG D3, (d8, A0, Xn) 0770",
		.initial = {
			.regs = {
				3972576495, 1311412866, 2551761822, 3225481272, 1163827989, 700197480, 120473039, 4089548972, 908621139, 493359293, 1218308349, 4040954159, 12153656, 1227184986, 2266772629, 6788292, 3896110, 41490, 2694346
			},
			.prefetch0 = 1904,
			.prefetch1 = 35927,
			.ram = bchg_initial_ram_3,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3972576495, 1311412866, 2551761822, 3225481272, 1163827989, 700197480, 120473039, 4089548972, 908621139, 493359293, 1218308349, 4040954159, 12153656, 1227184986, 2266772629, 6788292, 3896110, 41490, 2694350
			},
			.prefetch0 = 8146,
			.prefetch1 = 10489,
			.ram = bchg_final_ram_3,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_3,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "004 BCHG D6, (d8, A2, Xn) 0d72",
		.initial = {
			.regs = {
				2591126057, 4211531393, 592420920, 3560407026, 770190242, 4230973450, 4287925721, 497921087, 704766266, 265310274, 4140725736, 373614845, 2490369607, 111989359, 1995759574, 10285274, 130266, 8212, 3045366
			},
			.prefetch0 = 3442,
			.prefetch1 = 57978,
			.ram = bchg_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2591126057, 4211531393, 592420920, 3560407026, 770190242, 4230973450, 4287925721, 497921087, 704766266, 265310274, 4140725736, 373614845, 2490369607, 111989359, 1995759574, 10285274, 130266, 8212, 3045370
			},
			.prefetch0 = 16062,
			.prefetch1 = 1789,
			.ram = bchg_final_ram_4,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_4,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "005 BCHG D6, (d8, A0, Xn) 0d70",
		.initial = {
			.regs = {
				2278556182, 2848123336, 1855227806, 70079637, 3335192322, 3553930989, 1658865695, 3761387367, 2377858002, 710598452, 2052317224, 1567498444, 683502296, 2568806940, 3125758660, 11392098, 8795688, 8969, 13477230
			},
			.prefetch0 = 3440,
			.prefetch1 = 11320,
			.ram = bchg_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2278556182, 2848123336, 1855227806, 70079637, 3335192322, 3553930989, 1658865695, 3761387367, 2377858002, 710598452, 2052317224, 1567498444, 683502296, 2568806940, 3125758660, 11392098, 8795688, 8969, 13477234
			},
			.prefetch0 = 15795,
			.prefetch1 = 29682,
			.ram = bchg_final_ram_5,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_5,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "006 BCHG D6, (d8, A7, Xn) 0d77",
		.initial = {
			.regs = {
				4247566891, 643576581, 3920992360, 2036614908, 1194794255, 2613699298, 242597595, 1156866040, 139003542, 3380985355, 3235194713, 164016737, 3889629455, 3543513485, 721830764, 14039108, 11667832, 1560, 9237674
			},
			.prefetch0 = 3447,
			.prefetch1 = 31700,
			.ram = bchg_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4247566891, 643576581, 3920992360, 2036614908, 1194794255, 2613699298, 242597595, 1156866040, 139003542, 3380985355, 3235194713, 164016737, 3889629455, 3543513485, 721830764, 14039108, 11667832, 1560, 9237678
			},
			.prefetch0 = 37819,
			.prefetch1 = 10462,
			.ram = bchg_final_ram_6,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_6,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "007 BCHG D4, D1 0941",
		.initial = {
			.regs = {
				65771877, 2393763596, 1603731951, 856357614, 2216452717, 1154842069, 573606810, 2975963134, 3123110315, 610061192, 4067726710, 2188379498, 4099383292, 1222838313, 2857490972, 14636274, 4929694, 32795, 10509598
			},
			.prefetch0 = 2369,
			.prefetch1 = 12510,
			.ram = bchg_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				65771877, 2393755404, 1603731951, 856357614, 2216452717, 1154842069, 573606810, 2975963134, 3123110315, 610061192, 4067726710, 2188379498, 4099383292, 1222838313, 2857490972, 14636274, 4929694, 32795, 10509600
			},
			.prefetch0 = 12510,
			.prefetch1 = 63334,
			.ram = bchg_final_ram_7,
			.ram_len = 6,
		},
		.transactions = bchg_transactions_7,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "008 BCHG D2, (A4)+ 055c",
		.initial = {
			.regs = {
				864547303, 424780311, 1598169595, 4019085305, 1044160648, 4264658193, 2213491285, 1804181948, 2544558928, 3399194667, 1552943701, 2213315881, 2432292691, 1430449607, 1919853320, 12977566, 8121126, 34330, 4352998
			},
			.prefetch0 = 1372,
			.prefetch1 = 36741,
			.ram = bchg_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				864547303, 424780311, 1598169595, 4019085305, 1044160648, 4264658193, 2213491285, 1804181948, 2544558928, 3399194667, 1552943701, 2213315881, 2432292692, 1430449607, 1919853320, 12977566, 8121126, 34334, 4353000
			},
			.prefetch0 = 36741,
			.prefetch1 = 61461,
			.ram = bchg_final_ram_8,
			.ram_len = 8,
		},
		.transactions = bchg_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 BCHG D3, (A1) 0751",
		.initial = {
			.regs = {
				469297172, 75833265, 2710509853, 2150038728, 4285848522, 3971503153, 511785919, 674238606, 292273813, 827586949, 2153671345, 3741122837, 3781656216, 883710530, 3242499497, 13667398, 5667808, 40981, 16250706
			},
			.prefetch0 = 1873,
			.prefetch1 = 53588,
			.ram = bchg_initial_ram_9,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				469297172, 75833265, 2710509853, 2150038728, 4285848522, 3971503153, 511785919, 674238606, 292273813, 827586949, 2153671345, 3741122837, 3781656216, 883710530, 3242499497, 13667398, 5667808, 40981, 16250708
			},
			.prefetch0 = 53588,
			.prefetch1 = 16041,
			.ram = bchg_final_ram_9,
			.ram_len = 8,
		},
		.transactions = bchg_transactions_9,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "010 BCHG D7, (A5) 0f55",
		.initial = {
			.regs = {
				1498998521, 241026269, 502747932, 3765783914, 3988185964, 3325843066, 3968323623, 4290556926, 4202936805, 2295704018, 572481914, 221457105, 3767048391, 3099373130, 1463379447, 9347690, 13762296, 1305, 8520898
			},
			.prefetch0 = 3925,
			.prefetch1 = 46913,
			.ram = bchg_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1498998521, 241026269, 502747932, 3765783914, 3988185964, 3325843066, 3968323623, 4290556926, 4202936805, 2295704018, 572481914, 221457105, 3767048391, 3099373130, 1463379447, 9347690, 13762296, 1309, 8520900
			},
			.prefetch0 = 46913,
			.prefetch1 = 55663,
			.ram = bchg_final_ram_10,
			.ram_len = 8,
		},
		.transactions = bchg_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 BCHG D5, -(A6) 0b66",
		.initial = {
			.regs = {
				2064210479, 1242000510, 1364734362, 3636286367, 1403183535, 3034941233, 3829514549, 1196386832, 4249176380, 3622978984, 1667898929, 1597475325, 3154657179, 3064401913, 1379276997, 12417140, 7155424, 8963, 11123606
			},
			.prefetch0 = 2918,
			.prefetch1 = 32821,
			.ram = bchg_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2064210479, 1242000510, 1364734362, 3636286367, 1403183535, 3034941233, 3829514549, 1196386832, 4249176380, 3622978984, 1667898929, 1597475325, 3154657179, 3064401913, 1379276996, 12417140, 7155424, 8967, 11123608
			},
			.prefetch0 = 32821,
			.prefetch1 = 15162,
			.ram = bchg_final_ram_11,
			.ram_len = 8,
		},
		.transactions = bchg_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 BCHG D6, (d16, A7) 0d6f",
		.initial = {
			.regs = {
				3253757441, 3469518898, 1872997447, 2032258693, 3309905759, 293345491, 3552045935, 1024760893, 3648860327, 2867823839, 2051878867, 2674560501, 1725283921, 138835444, 652052803, 6419932, 9538022, 34063, 1651292
			},
			.prefetch0 = 3439,
			.prefetch1 = 21064,
			.ram = bchg_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3253757441, 3469518898, 1872997447, 2032258693, 3309905759, 293345491, 3552045935, 1024760893, 3648860327, 2867823839, 2051878867, 2674560501, 1725283921, 138835444, 652052803, 6419932, 9538022, 34059, 1651296
			},
			.prefetch0 = 54722,
			.prefetch1 = 10888,
			.ram = bchg_final_ram_12,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_12,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "013 BCHG D2, (d16, A1) 0569",
		.initial = {
			.regs = {
				926786126, 2202802158, 4251630112, 3344264544, 3849250468, 1898420958, 3450712947, 3462722205, 1452371289, 1308006272, 2351400835, 4138174017, 2484146045, 2297039965, 483250859, 14853834, 6363418, 8462, 2082282
			},
			.prefetch0 = 1385,
			.prefetch1 = 21020,
			.ram = bchg_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				926786126, 2202802158, 4251630112, 3344264544, 3849250468, 1898420958, 3450712947, 3462722205, 1452371289, 1308006272, 2351400835, 4138174017, 2484146045, 2297039965, 483250859, 14853834, 6363418, 8458, 2082286
			},
			.prefetch0 = 49653,
			.prefetch1 = 37442,
			.ram = bchg_final_ram_13,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 BCHG #, (A6)+ 085e",
		.initial = {
			.regs = {
				1534701360, 2613768764, 458785525, 3506294113, 2498984024, 1153657523, 1186649114, 1752569082, 4160675040, 1695253181, 3401256598, 2501445287, 1034202204, 917872933, 334988047, 11647984, 12054282, 34586, 7897232
			},
			.prefetch0 = 2142,
			.prefetch1 = 59089,
			.ram = bchg_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1534701360, 2613768764, 458785525, 3506294113, 2498984024, 1153657523, 1186649114, 1752569082, 4160675040, 1695253181, 3401256598, 2501445287, 1034202204, 917872933, 334988048, 11647984, 12054282, 34586, 7897236
			},
			.prefetch0 = 58180,
			.prefetch1 = 41834,
			.ram = bchg_final_ram_14,
			.ram_len = 10,
		},
		.transactions = bchg_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 BCHG #, (d8, A2, Xn) 0872",
		.initial = {
			.regs = {
				3161616026, 3937733952, 211639075, 973559092, 1713046523, 4006842586, 567886417, 1559671914, 38798415, 3851675718, 2343295549, 657979447, 532374770, 630862894, 4260679951, 10796768, 12173052, 42252, 104496
			},
			.prefetch0 = 2162,
			.prefetch1 = 6979,
			.ram = bchg_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3161616026, 3937733952, 211639075, 973559092, 1713046523, 4006842586, 567886417, 1559671914, 38798415, 3851675718, 2343295549, 657979447, 532374770, 630862894, 4260679951, 10796768, 12173052, 42252, 104502
			},
			.prefetch0 = 39885,
			.prefetch1 = 34132,
			.ram = bchg_final_ram_15,
			.ram_len = 12,
		},
		.transactions = bchg_transactions_15,
		.transactions_len = 6,
		.lenght = 22,
	},
};

#endif /* RBT_BCHG_H */