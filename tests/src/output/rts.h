#ifndef RBT_RTS_H
#define RBT_RTS_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte rts_initial_ram_0[] = {
		{ .addr = 0xfe0320, .byte = 0x4e },
		{ .addr = 0xfe0321, .byte = 0x75 },
		{ .addr = 0xfe0322, .byte = 0xc6 },
		{ .addr = 0xfe0323, .byte = 0xf9 },
		{ .addr = 0x25722e, .byte = 0x4d },
		{ .addr = 0x25722f, .byte = 0x22 },
		{ .addr = 0x257230, .byte = 0xf4 },
		{ .addr = 0x257231, .byte = 0x84 },
		{ .addr = 0x22f484, .byte = 0x66 },
		{ .addr = 0x22f485, .byte = 0x3b },
		{ .addr = 0x22f486, .byte = 0x00 },
		{ .addr = 0x22f487, .byte = 0xb7 }
};

static const SST_RamByte rts_final_ram_0[] = {
		{ .addr = 0xfe0320, .byte = 0x4e },
		{ .addr = 0xfe0321, .byte = 0x75 },
		{ .addr = 0xfe0322, .byte = 0xc6 },
		{ .addr = 0xfe0323, .byte = 0xf9 },
		{ .addr = 0x25722e, .byte = 0x4d },
		{ .addr = 0x25722f, .byte = 0x22 },
		{ .addr = 0x257230, .byte = 0xf4 },
		{ .addr = 0x257231, .byte = 0x84 },
		{ .addr = 0x22f484, .byte = 0x66 },
		{ .addr = 0x22f485, .byte = 0x3b },
		{ .addr = 0x22f486, .byte = 0x00 },
		{ .addr = 0x22f487, .byte = 0xb7 }
};

static const SST_Transaction rts_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2454062, .data = 19746, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2454064, .data = 62596, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2290820, .data = 26171, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2290822, .data = 183, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_1[] = {
		{ .addr = 0xd2b53e, .byte = 0x4e },
		{ .addr = 0xd2b53f, .byte = 0x75 },
		{ .addr = 0xd2b540, .byte = 0x0e },
		{ .addr = 0xd2b541, .byte = 0x5c },
		{ .addr = 0x0c6266, .byte = 0xa7 },
		{ .addr = 0x0c6267, .byte = 0x62 },
		{ .addr = 0x0c6268, .byte = 0x8a },
		{ .addr = 0x0c6269, .byte = 0xa8 },
		{ .addr = 0x628aa8, .byte = 0x89 },
		{ .addr = 0x628aa9, .byte = 0xce },
		{ .addr = 0x628aaa, .byte = 0x67 },
		{ .addr = 0x628aab, .byte = 0x9b }
};

static const SST_RamByte rts_final_ram_1[] = {
		{ .addr = 0xd2b53e, .byte = 0x4e },
		{ .addr = 0xd2b53f, .byte = 0x75 },
		{ .addr = 0xd2b540, .byte = 0x0e },
		{ .addr = 0xd2b541, .byte = 0x5c },
		{ .addr = 0x0c6266, .byte = 0xa7 },
		{ .addr = 0x0c6267, .byte = 0x62 },
		{ .addr = 0x0c6268, .byte = 0x8a },
		{ .addr = 0x0c6269, .byte = 0xa8 },
		{ .addr = 0x628aa8, .byte = 0x89 },
		{ .addr = 0x628aa9, .byte = 0xce },
		{ .addr = 0x628aaa, .byte = 0x67 },
		{ .addr = 0x628aab, .byte = 0x9b }
};

static const SST_Transaction rts_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 811622, .data = 42850, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 811624, .data = 35496, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6458024, .data = 35278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6458026, .data = 26523, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_2[] = {
		{ .addr = 0xc80e5e, .byte = 0x4e },
		{ .addr = 0xc80e5f, .byte = 0x75 },
		{ .addr = 0xc80e60, .byte = 0xad },
		{ .addr = 0xc80e61, .byte = 0xb1 },
		{ .addr = 0x4bb0fe, .byte = 0xcc },
		{ .addr = 0x4bb0ff, .byte = 0xd4 },
		{ .addr = 0x4bb100, .byte = 0xb6 },
		{ .addr = 0x4bb101, .byte = 0x67 },
		{ .addr = 0x00000c, .byte = 0x6d },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x1abfe2, .byte = 0x1c },
		{ .addr = 0x1abfe3, .byte = 0xab },
		{ .addr = 0x1abfe4, .byte = 0xaf },
		{ .addr = 0x1abfe5, .byte = 0x2e }
};

static const SST_RamByte rts_final_ram_2[] = {
		{ .addr = 0xc80e5e, .byte = 0x4e },
		{ .addr = 0xc80e5f, .byte = 0x75 },
		{ .addr = 0xc80e60, .byte = 0xad },
		{ .addr = 0xc80e61, .byte = 0xb1 },
		{ .addr = 0x4bb0fe, .byte = 0xcc },
		{ .addr = 0x4bb0ff, .byte = 0xd4 },
		{ .addr = 0x4bb100, .byte = 0xb6 },
		{ .addr = 0x4bb101, .byte = 0x67 },
		{ .addr = 0x43fdea, .byte = 0x0e },
		{ .addr = 0x43fdeb, .byte = 0x60 },
		{ .addr = 0x43fde6, .byte = 0x82 },
		{ .addr = 0x43fde7, .byte = 0x04 },
		{ .addr = 0x43fde8, .byte = 0x00 },
		{ .addr = 0x43fde9, .byte = 0xc8 },
		{ .addr = 0x43fde4, .byte = 0x4e },
		{ .addr = 0x43fde5, .byte = 0x75 },
		{ .addr = 0x43fde2, .byte = 0xb6 },
		{ .addr = 0x43fde3, .byte = 0x67 },
		{ .addr = 0x43fdde, .byte = 0x4e },
		{ .addr = 0x43fddf, .byte = 0x72 },
		{ .addr = 0x43fde0, .byte = 0xcc },
		{ .addr = 0x43fde1, .byte = 0xd4 },
		{ .addr = 0x00000c, .byte = 0x6d },
		{ .addr = 0x00000d, .byte = 0x1a },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x1abfe2, .byte = 0x1c },
		{ .addr = 0x1abfe3, .byte = 0xab },
		{ .addr = 0x1abfe4, .byte = 0xaf },
		{ .addr = 0x1abfe5, .byte = 0x2e }
};

static const SST_Transaction rts_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4960510, .data = 52436, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4960512, .data = 46695, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13940326, .data = 61516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4455914, .data = 3680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4455910, .data = 33284, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4455912, .data = 200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4455908, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4455906, .data = 46695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4455902, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4455904, .data = 52436, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 27930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1753058, .data = 7339, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1753060, .data = 44846, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_3[] = {
		{ .addr = 0x7aaef6, .byte = 0x4e },
		{ .addr = 0x7aaef7, .byte = 0x75 },
		{ .addr = 0x7aaef8, .byte = 0xd4 },
		{ .addr = 0x7aaef9, .byte = 0x66 },
		{ .addr = 0x38ed5c, .byte = 0x94 },
		{ .addr = 0x38ed5d, .byte = 0x01 },
		{ .addr = 0x38ed5e, .byte = 0xca },
		{ .addr = 0x38ed5f, .byte = 0x6f },
		{ .addr = 0x00000c, .byte = 0x95 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0xac },
		{ .addr = 0x00000f, .byte = 0xb0 },
		{ .addr = 0xaaacb0, .byte = 0x81 },
		{ .addr = 0xaaacb1, .byte = 0x9c },
		{ .addr = 0xaaacb2, .byte = 0x00 },
		{ .addr = 0xaaacb3, .byte = 0x00 }
};

static const SST_RamByte rts_final_ram_3[] = {
		{ .addr = 0x7aaef6, .byte = 0x4e },
		{ .addr = 0x7aaef7, .byte = 0x75 },
		{ .addr = 0x7aaef8, .byte = 0xd4 },
		{ .addr = 0x7aaef9, .byte = 0x66 },
		{ .addr = 0x38ed5c, .byte = 0x94 },
		{ .addr = 0x38ed5d, .byte = 0x01 },
		{ .addr = 0x38ed5e, .byte = 0xca },
		{ .addr = 0x38ed5f, .byte = 0x6f },
		{ .addr = 0xe9e3d0, .byte = 0xae },
		{ .addr = 0xe9e3d1, .byte = 0xf8 },
		{ .addr = 0xe9e3cc, .byte = 0x03 },
		{ .addr = 0xe9e3cd, .byte = 0x1b },
		{ .addr = 0xe9e3ce, .byte = 0x00 },
		{ .addr = 0xe9e3cf, .byte = 0x7a },
		{ .addr = 0xe9e3ca, .byte = 0x4e },
		{ .addr = 0xe9e3cb, .byte = 0x75 },
		{ .addr = 0xe9e3c8, .byte = 0xca },
		{ .addr = 0xe9e3c9, .byte = 0x6f },
		{ .addr = 0xe9e3c4, .byte = 0x4e },
		{ .addr = 0xe9e3c5, .byte = 0x72 },
		{ .addr = 0xe9e3c6, .byte = 0x94 },
		{ .addr = 0xe9e3c7, .byte = 0x01 },
		{ .addr = 0x00000c, .byte = 0x95 },
		{ .addr = 0x00000d, .byte = 0xaa },
		{ .addr = 0x00000e, .byte = 0xac },
		{ .addr = 0x00000f, .byte = 0xb0 },
		{ .addr = 0xaaacb0, .byte = 0x81 },
		{ .addr = 0xaaacb1, .byte = 0x9c },
		{ .addr = 0xaaacb2, .byte = 0x00 },
		{ .addr = 0xaaacb3, .byte = 0x00 }
};

static const SST_Transaction rts_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3730780, .data = 37889, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3730782, .data = 51823, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 117358, .data = 37152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15328208, .data = 44792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15328204, .data = 795, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15328206, .data = 122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15328202, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15328200, .data = 51823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15328196, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15328198, .data = 37889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 38314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11185328, .data = 33180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11185330, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_4[] = {
		{ .addr = 0xc88048, .byte = 0x4e },
		{ .addr = 0xc88049, .byte = 0x75 },
		{ .addr = 0xc8804a, .byte = 0xc1 },
		{ .addr = 0xc8804b, .byte = 0x81 },
		{ .addr = 0x59afb8, .byte = 0x92 },
		{ .addr = 0x59afb9, .byte = 0x83 },
		{ .addr = 0x59afba, .byte = 0x94 },
		{ .addr = 0x59afbb, .byte = 0x0d },
		{ .addr = 0x00000c, .byte = 0x55 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0x8c3386, .byte = 0xb9 },
		{ .addr = 0x8c3387, .byte = 0xa1 },
		{ .addr = 0x8c3388, .byte = 0x46 },
		{ .addr = 0x8c3389, .byte = 0xf1 }
};

static const SST_RamByte rts_final_ram_4[] = {
		{ .addr = 0xc88048, .byte = 0x4e },
		{ .addr = 0xc88049, .byte = 0x75 },
		{ .addr = 0xc8804a, .byte = 0xc1 },
		{ .addr = 0xc8804b, .byte = 0x81 },
		{ .addr = 0x59afb8, .byte = 0x92 },
		{ .addr = 0x59afb9, .byte = 0x83 },
		{ .addr = 0x59afba, .byte = 0x94 },
		{ .addr = 0x59afbb, .byte = 0x0d },
		{ .addr = 0xd76ba6, .byte = 0x80 },
		{ .addr = 0xd76ba7, .byte = 0x4a },
		{ .addr = 0xd76ba2, .byte = 0x00 },
		{ .addr = 0xd76ba3, .byte = 0x08 },
		{ .addr = 0xd76ba4, .byte = 0x00 },
		{ .addr = 0xd76ba5, .byte = 0xc8 },
		{ .addr = 0xd76ba0, .byte = 0x4e },
		{ .addr = 0xd76ba1, .byte = 0x75 },
		{ .addr = 0xd76b9e, .byte = 0x94 },
		{ .addr = 0xd76b9f, .byte = 0x0d },
		{ .addr = 0xd76b9a, .byte = 0x4e },
		{ .addr = 0xd76b9b, .byte = 0x72 },
		{ .addr = 0xd76b9c, .byte = 0x92 },
		{ .addr = 0xd76b9d, .byte = 0x83 },
		{ .addr = 0x00000c, .byte = 0x55 },
		{ .addr = 0x00000d, .byte = 0x8c },
		{ .addr = 0x00000e, .byte = 0x33 },
		{ .addr = 0x00000f, .byte = 0x86 },
		{ .addr = 0x8c3386, .byte = 0xb9 },
		{ .addr = 0x8c3387, .byte = 0xa1 },
		{ .addr = 0x8c3388, .byte = 0x46 },
		{ .addr = 0x8c3389, .byte = 0xf1 }
};

static const SST_Transaction rts_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5877688, .data = 37507, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5877690, .data = 37901, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8623116, .data = 37999, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14117798, .data = 32842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14117794, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14117796, .data = 200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14117792, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14117790, .data = 37901, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14117786, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14117788, .data = 37507, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21900, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 13190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9188230, .data = 47521, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9188232, .data = 18161, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_5[] = {
		{ .addr = 0x9fdbd4, .byte = 0x4e },
		{ .addr = 0x9fdbd5, .byte = 0x75 },
		{ .addr = 0x9fdbd6, .byte = 0x7d },
		{ .addr = 0x9fdbd7, .byte = 0x59 },
		{ .addr = 0x0ee9a0, .byte = 0xda },
		{ .addr = 0x0ee9a1, .byte = 0xfd },
		{ .addr = 0x0ee9a2, .byte = 0x37 },
		{ .addr = 0x0ee9a3, .byte = 0xba },
		{ .addr = 0xfd37ba, .byte = 0x29 },
		{ .addr = 0xfd37bb, .byte = 0x5b },
		{ .addr = 0xfd37bc, .byte = 0xc0 },
		{ .addr = 0xfd37bd, .byte = 0x76 }
};

static const SST_RamByte rts_final_ram_5[] = {
		{ .addr = 0x9fdbd4, .byte = 0x4e },
		{ .addr = 0x9fdbd5, .byte = 0x75 },
		{ .addr = 0x9fdbd6, .byte = 0x7d },
		{ .addr = 0x9fdbd7, .byte = 0x59 },
		{ .addr = 0x0ee9a0, .byte = 0xda },
		{ .addr = 0x0ee9a1, .byte = 0xfd },
		{ .addr = 0x0ee9a2, .byte = 0x37 },
		{ .addr = 0x0ee9a3, .byte = 0xba },
		{ .addr = 0xfd37ba, .byte = 0x29 },
		{ .addr = 0xfd37bb, .byte = 0x5b },
		{ .addr = 0xfd37bc, .byte = 0xc0 },
		{ .addr = 0xfd37bd, .byte = 0x76 }
};

static const SST_Transaction rts_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 977312, .data = 56061, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 977314, .data = 14266, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16594874, .data = 10587, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16594876, .data = 49270, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_6[] = {
		{ .addr = 0xd690cc, .byte = 0x4e },
		{ .addr = 0xd690cd, .byte = 0x75 },
		{ .addr = 0xd690ce, .byte = 0xda },
		{ .addr = 0xd690cf, .byte = 0xc6 },
		{ .addr = 0xca19a8, .byte = 0x01 },
		{ .addr = 0xca19a9, .byte = 0xf3 },
		{ .addr = 0xca19aa, .byte = 0x2a },
		{ .addr = 0xca19ab, .byte = 0x2a },
		{ .addr = 0xf32a2a, .byte = 0x75 },
		{ .addr = 0xf32a2b, .byte = 0xb3 },
		{ .addr = 0xf32a2c, .byte = 0x3c },
		{ .addr = 0xf32a2d, .byte = 0x87 }
};

static const SST_RamByte rts_final_ram_6[] = {
		{ .addr = 0xd690cc, .byte = 0x4e },
		{ .addr = 0xd690cd, .byte = 0x75 },
		{ .addr = 0xd690ce, .byte = 0xda },
		{ .addr = 0xd690cf, .byte = 0xc6 },
		{ .addr = 0xca19a8, .byte = 0x01 },
		{ .addr = 0xca19a9, .byte = 0xf3 },
		{ .addr = 0xca19aa, .byte = 0x2a },
		{ .addr = 0xca19ab, .byte = 0x2a },
		{ .addr = 0xf32a2a, .byte = 0x75 },
		{ .addr = 0xf32a2b, .byte = 0xb3 },
		{ .addr = 0xf32a2c, .byte = 0x3c },
		{ .addr = 0xf32a2d, .byte = 0x87 }
};

static const SST_Transaction rts_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13244840, .data = 499, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13244842, .data = 10794, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15936042, .data = 30131, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15936044, .data = 15495, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_7[] = {
		{ .addr = 0x244342, .byte = 0x4e },
		{ .addr = 0x244343, .byte = 0x75 },
		{ .addr = 0x244344, .byte = 0x7d },
		{ .addr = 0x244345, .byte = 0x0d },
		{ .addr = 0xc8503c, .byte = 0xcb },
		{ .addr = 0xc8503d, .byte = 0x46 },
		{ .addr = 0xc8503e, .byte = 0xf4 },
		{ .addr = 0xc8503f, .byte = 0xe0 },
		{ .addr = 0x46f4e0, .byte = 0xfc },
		{ .addr = 0x46f4e1, .byte = 0x43 },
		{ .addr = 0x46f4e2, .byte = 0xb7 },
		{ .addr = 0x46f4e3, .byte = 0x9d }
};

static const SST_RamByte rts_final_ram_7[] = {
		{ .addr = 0x244342, .byte = 0x4e },
		{ .addr = 0x244343, .byte = 0x75 },
		{ .addr = 0x244344, .byte = 0x7d },
		{ .addr = 0x244345, .byte = 0x0d },
		{ .addr = 0xc8503c, .byte = 0xcb },
		{ .addr = 0xc8503d, .byte = 0x46 },
		{ .addr = 0xc8503e, .byte = 0xf4 },
		{ .addr = 0xc8503f, .byte = 0xe0 },
		{ .addr = 0x46f4e0, .byte = 0xfc },
		{ .addr = 0x46f4e1, .byte = 0x43 },
		{ .addr = 0x46f4e2, .byte = 0xb7 },
		{ .addr = 0x46f4e3, .byte = 0x9d }
};

static const SST_Transaction rts_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13127740, .data = 52038, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13127742, .data = 62688, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4650208, .data = 64579, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4650210, .data = 47005, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_8[] = {
		{ .addr = 0x0865be, .byte = 0x4e },
		{ .addr = 0x0865bf, .byte = 0x75 },
		{ .addr = 0x0865c0, .byte = 0x30 },
		{ .addr = 0x0865c1, .byte = 0xac },
		{ .addr = 0x48a7aa, .byte = 0xe9 },
		{ .addr = 0x48a7ab, .byte = 0xd6 },
		{ .addr = 0x48a7ac, .byte = 0x8d },
		{ .addr = 0x48a7ad, .byte = 0xd9 },
		{ .addr = 0x00000c, .byte = 0x16 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x81 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0xe8810e, .byte = 0xb9 },
		{ .addr = 0xe8810f, .byte = 0x05 },
		{ .addr = 0xe88110, .byte = 0x06 },
		{ .addr = 0xe88111, .byte = 0xc2 }
};

static const SST_RamByte rts_final_ram_8[] = {
		{ .addr = 0x0865be, .byte = 0x4e },
		{ .addr = 0x0865bf, .byte = 0x75 },
		{ .addr = 0x0865c0, .byte = 0x30 },
		{ .addr = 0x0865c1, .byte = 0xac },
		{ .addr = 0x48a7aa, .byte = 0x00 },
		{ .addr = 0x48a7ab, .byte = 0x08 },
		{ .addr = 0x48a7ac, .byte = 0x65 },
		{ .addr = 0x48a7ad, .byte = 0xc0 },
		{ .addr = 0x48a7a8, .byte = 0xa0 },
		{ .addr = 0x48a7a9, .byte = 0x1a },
		{ .addr = 0x48a7a6, .byte = 0x4e },
		{ .addr = 0x48a7a7, .byte = 0x75 },
		{ .addr = 0x48a7a4, .byte = 0x8d },
		{ .addr = 0x48a7a5, .byte = 0xd9 },
		{ .addr = 0x48a7a0, .byte = 0x4e },
		{ .addr = 0x48a7a1, .byte = 0x76 },
		{ .addr = 0x48a7a2, .byte = 0xe9 },
		{ .addr = 0x48a7a3, .byte = 0xd6 },
		{ .addr = 0x00000c, .byte = 0x16 },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0x81 },
		{ .addr = 0x00000f, .byte = 0x0e },
		{ .addr = 0xe8810e, .byte = 0xb9 },
		{ .addr = 0xe8810f, .byte = 0x05 },
		{ .addr = 0xe88110, .byte = 0x06 },
		{ .addr = 0xe88111, .byte = 0xc2 }
};

static const SST_Transaction rts_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761514, .data = 59862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761516, .data = 36313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14061016, .data = 30132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761516, .data = 26048, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761512, .data = 40986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761514, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761510, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761508, .data = 36313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761504, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4761506, .data = 59862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15237390, .data = 47365, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15237392, .data = 1730, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_9[] = {
		{ .addr = 0x408e72, .byte = 0x4e },
		{ .addr = 0x408e73, .byte = 0x75 },
		{ .addr = 0x408e74, .byte = 0xd1 },
		{ .addr = 0x408e75, .byte = 0x42 },
		{ .addr = 0x03f85c, .byte = 0x94 },
		{ .addr = 0x03f85d, .byte = 0xae },
		{ .addr = 0x03f85e, .byte = 0x7d },
		{ .addr = 0x03f85f, .byte = 0x85 },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xda },
		{ .addr = 0x00000f, .byte = 0xf4 },
		{ .addr = 0x06daf4, .byte = 0x05 },
		{ .addr = 0x06daf5, .byte = 0x3e },
		{ .addr = 0x06daf6, .byte = 0xff },
		{ .addr = 0x06daf7, .byte = 0x38 }
};

static const SST_RamByte rts_final_ram_9[] = {
		{ .addr = 0x408e72, .byte = 0x4e },
		{ .addr = 0x408e73, .byte = 0x75 },
		{ .addr = 0x408e74, .byte = 0xd1 },
		{ .addr = 0x408e75, .byte = 0x42 },
		{ .addr = 0x03f85c, .byte = 0x94 },
		{ .addr = 0x03f85d, .byte = 0xae },
		{ .addr = 0x03f85e, .byte = 0x7d },
		{ .addr = 0x03f85f, .byte = 0x85 },
		{ .addr = 0xe2f000, .byte = 0x8e },
		{ .addr = 0xe2f001, .byte = 0x74 },
		{ .addr = 0xe2effc, .byte = 0x03 },
		{ .addr = 0xe2effd, .byte = 0x0f },
		{ .addr = 0xe2effe, .byte = 0x00 },
		{ .addr = 0xe2efff, .byte = 0x40 },
		{ .addr = 0xe2effa, .byte = 0x4e },
		{ .addr = 0xe2effb, .byte = 0x75 },
		{ .addr = 0xe2eff8, .byte = 0x7d },
		{ .addr = 0xe2eff9, .byte = 0x85 },
		{ .addr = 0xe2eff4, .byte = 0x4e },
		{ .addr = 0xe2eff5, .byte = 0x72 },
		{ .addr = 0xe2eff6, .byte = 0x94 },
		{ .addr = 0xe2eff7, .byte = 0xae },
		{ .addr = 0x00000c, .byte = 0xb4 },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xda },
		{ .addr = 0x00000f, .byte = 0xf4 },
		{ .addr = 0x06daf4, .byte = 0x05 },
		{ .addr = 0x06daf5, .byte = 0x3e },
		{ .addr = 0x06daf6, .byte = 0xff },
		{ .addr = 0x06daf7, .byte = 0x38 }
};

static const SST_Transaction rts_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 260188, .data = 38062, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 260190, .data = 32133, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11435396, .data = 50580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14872576, .data = 36468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14872572, .data = 783, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14872574, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14872570, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14872568, .data = 32133, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14872564, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14872566, .data = 38062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 46086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 449268, .data = 1342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 449270, .data = 65336, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_10[] = {
		{ .addr = 0x9f7e6e, .byte = 0x4e },
		{ .addr = 0x9f7e6f, .byte = 0x75 },
		{ .addr = 0x9f7e70, .byte = 0x0e },
		{ .addr = 0x9f7e71, .byte = 0xc4 },
		{ .addr = 0xd1769c, .byte = 0x90 },
		{ .addr = 0xd1769d, .byte = 0xd9 },
		{ .addr = 0xd1769e, .byte = 0xa3 },
		{ .addr = 0xd1769f, .byte = 0x50 },
		{ .addr = 0xd9a350, .byte = 0xdb },
		{ .addr = 0xd9a351, .byte = 0x4f },
		{ .addr = 0xd9a352, .byte = 0x36 },
		{ .addr = 0xd9a353, .byte = 0xdc }
};

static const SST_RamByte rts_final_ram_10[] = {
		{ .addr = 0x9f7e6e, .byte = 0x4e },
		{ .addr = 0x9f7e6f, .byte = 0x75 },
		{ .addr = 0x9f7e70, .byte = 0x0e },
		{ .addr = 0x9f7e71, .byte = 0xc4 },
		{ .addr = 0xd1769c, .byte = 0x90 },
		{ .addr = 0xd1769d, .byte = 0xd9 },
		{ .addr = 0xd1769e, .byte = 0xa3 },
		{ .addr = 0xd1769f, .byte = 0x50 },
		{ .addr = 0xd9a350, .byte = 0xdb },
		{ .addr = 0xd9a351, .byte = 0x4f },
		{ .addr = 0xd9a352, .byte = 0x36 },
		{ .addr = 0xd9a353, .byte = 0xdc }
};

static const SST_Transaction rts_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13727388, .data = 37081, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13727390, .data = 41808, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14263120, .data = 56143, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14263122, .data = 14044, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_11[] = {
		{ .addr = 0x92a022, .byte = 0x4e },
		{ .addr = 0x92a023, .byte = 0x75 },
		{ .addr = 0x92a024, .byte = 0x83 },
		{ .addr = 0x92a025, .byte = 0xe5 },
		{ .addr = 0xe005d4, .byte = 0x59 },
		{ .addr = 0xe005d5, .byte = 0x66 },
		{ .addr = 0xe005d6, .byte = 0xee },
		{ .addr = 0xe005d7, .byte = 0xbf },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0x0e },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0xfe0ee4, .byte = 0x64 },
		{ .addr = 0xfe0ee5, .byte = 0xe2 },
		{ .addr = 0xfe0ee6, .byte = 0x01 },
		{ .addr = 0xfe0ee7, .byte = 0x34 }
};

static const SST_RamByte rts_final_ram_11[] = {
		{ .addr = 0x92a022, .byte = 0x4e },
		{ .addr = 0x92a023, .byte = 0x75 },
		{ .addr = 0x92a024, .byte = 0x83 },
		{ .addr = 0x92a025, .byte = 0xe5 },
		{ .addr = 0xe005d4, .byte = 0x59 },
		{ .addr = 0xe005d5, .byte = 0x66 },
		{ .addr = 0xe005d6, .byte = 0xee },
		{ .addr = 0xe005d7, .byte = 0xbf },
		{ .addr = 0xb0f3ca, .byte = 0xa0 },
		{ .addr = 0xb0f3cb, .byte = 0x24 },
		{ .addr = 0xb0f3c6, .byte = 0x07 },
		{ .addr = 0xb0f3c7, .byte = 0x1a },
		{ .addr = 0xb0f3c8, .byte = 0x00 },
		{ .addr = 0xb0f3c9, .byte = 0x92 },
		{ .addr = 0xb0f3c4, .byte = 0x4e },
		{ .addr = 0xb0f3c5, .byte = 0x75 },
		{ .addr = 0xb0f3c2, .byte = 0xee },
		{ .addr = 0xb0f3c3, .byte = 0xbf },
		{ .addr = 0xb0f3be, .byte = 0x4e },
		{ .addr = 0xb0f3bf, .byte = 0x72 },
		{ .addr = 0xb0f3c0, .byte = 0x59 },
		{ .addr = 0xb0f3c1, .byte = 0x66 },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0xfe },
		{ .addr = 0x00000e, .byte = 0x0e },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0xfe0ee4, .byte = 0x64 },
		{ .addr = 0xfe0ee5, .byte = 0xe2 },
		{ .addr = 0xfe0ee6, .byte = 0x01 },
		{ .addr = 0xfe0ee7, .byte = 0x34 }
};

static const SST_Transaction rts_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14681556, .data = 22886, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14681558, .data = 61119, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6745790, .data = 46978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11596746, .data = 40996, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11596742, .data = 1818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11596744, .data = 146, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11596740, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11596738, .data = 61119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11596734, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11596736, .data = 22886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31742, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 3812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16649956, .data = 25826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16649958, .data = 308, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_12[] = {
		{ .addr = 0x957030, .byte = 0x4e },
		{ .addr = 0x957031, .byte = 0x75 },
		{ .addr = 0x957032, .byte = 0x29 },
		{ .addr = 0x957033, .byte = 0x80 },
		{ .addr = 0xb716d0, .byte = 0x71 },
		{ .addr = 0xb716d1, .byte = 0xa0 },
		{ .addr = 0xb716d2, .byte = 0x51 },
		{ .addr = 0xb716d3, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0xf42f40, .byte = 0xf6 },
		{ .addr = 0xf42f41, .byte = 0x8a },
		{ .addr = 0xf42f42, .byte = 0xa2 },
		{ .addr = 0xf42f43, .byte = 0xe8 }
};

static const SST_RamByte rts_final_ram_12[] = {
		{ .addr = 0x957030, .byte = 0x4e },
		{ .addr = 0x957031, .byte = 0x75 },
		{ .addr = 0x957032, .byte = 0x29 },
		{ .addr = 0x957033, .byte = 0x80 },
		{ .addr = 0xb716d0, .byte = 0x71 },
		{ .addr = 0xb716d1, .byte = 0xa0 },
		{ .addr = 0xb716d2, .byte = 0x51 },
		{ .addr = 0xb716d3, .byte = 0x5f },
		{ .addr = 0x01d5d4, .byte = 0x70 },
		{ .addr = 0x01d5d5, .byte = 0x32 },
		{ .addr = 0x01d5d0, .byte = 0x80 },
		{ .addr = 0x01d5d1, .byte = 0x1c },
		{ .addr = 0x01d5d2, .byte = 0x00 },
		{ .addr = 0x01d5d3, .byte = 0x95 },
		{ .addr = 0x01d5ce, .byte = 0x4e },
		{ .addr = 0x01d5cf, .byte = 0x75 },
		{ .addr = 0x01d5cc, .byte = 0x51 },
		{ .addr = 0x01d5cd, .byte = 0x5f },
		{ .addr = 0x01d5c8, .byte = 0x4e },
		{ .addr = 0x01d5c9, .byte = 0x72 },
		{ .addr = 0x01d5ca, .byte = 0x71 },
		{ .addr = 0x01d5cb, .byte = 0xa0 },
		{ .addr = 0x00000c, .byte = 0xef },
		{ .addr = 0x00000d, .byte = 0xf4 },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x40 },
		{ .addr = 0xf42f40, .byte = 0xf6 },
		{ .addr = 0xf42f41, .byte = 0x8a },
		{ .addr = 0xf42f42, .byte = 0xa2 },
		{ .addr = 0xf42f43, .byte = 0xe8 }
};

static const SST_Transaction rts_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11998928, .data = 29088, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11998930, .data = 20831, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10506590, .data = 60271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 120276, .data = 28722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 120272, .data = 32796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 120274, .data = 149, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 120270, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 120268, .data = 20831, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 120264, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 120266, .data = 29088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 61428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16002880, .data = 63114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16002882, .data = 41704, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_13[] = {
		{ .addr = 0xa355b4, .byte = 0x4e },
		{ .addr = 0xa355b5, .byte = 0x75 },
		{ .addr = 0xa355b6, .byte = 0x61 },
		{ .addr = 0xa355b7, .byte = 0x5e },
		{ .addr = 0xaa8890, .byte = 0xda },
		{ .addr = 0xaa8891, .byte = 0xdc },
		{ .addr = 0xaa8892, .byte = 0x66 },
		{ .addr = 0xaa8893, .byte = 0x22 },
		{ .addr = 0xdc6622, .byte = 0xc8 },
		{ .addr = 0xdc6623, .byte = 0x6e },
		{ .addr = 0xdc6624, .byte = 0x81 },
		{ .addr = 0xdc6625, .byte = 0xd5 }
};

static const SST_RamByte rts_final_ram_13[] = {
		{ .addr = 0xa355b4, .byte = 0x4e },
		{ .addr = 0xa355b5, .byte = 0x75 },
		{ .addr = 0xa355b6, .byte = 0x61 },
		{ .addr = 0xa355b7, .byte = 0x5e },
		{ .addr = 0xaa8890, .byte = 0xda },
		{ .addr = 0xaa8891, .byte = 0xdc },
		{ .addr = 0xaa8892, .byte = 0x66 },
		{ .addr = 0xaa8893, .byte = 0x22 },
		{ .addr = 0xdc6622, .byte = 0xc8 },
		{ .addr = 0xdc6623, .byte = 0x6e },
		{ .addr = 0xdc6624, .byte = 0x81 },
		{ .addr = 0xdc6625, .byte = 0xd5 }
};

static const SST_Transaction rts_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11176080, .data = 56028, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11176082, .data = 26146, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14444066, .data = 51310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14444068, .data = 33237, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_14[] = {
		{ .addr = 0x6cd374, .byte = 0x4e },
		{ .addr = 0x6cd375, .byte = 0x75 },
		{ .addr = 0x6cd376, .byte = 0x77 },
		{ .addr = 0x6cd377, .byte = 0x47 },
		{ .addr = 0x9d9c3e, .byte = 0x96 },
		{ .addr = 0x9d9c3f, .byte = 0xd0 },
		{ .addr = 0x9d9c40, .byte = 0x71 },
		{ .addr = 0x9d9c41, .byte = 0x6b },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xa6 },
		{ .addr = 0x00000e, .byte = 0x45 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0xa64506, .byte = 0xd7 },
		{ .addr = 0xa64507, .byte = 0x18 },
		{ .addr = 0xa64508, .byte = 0xed },
		{ .addr = 0xa64509, .byte = 0x91 }
};

static const SST_RamByte rts_final_ram_14[] = {
		{ .addr = 0x6cd374, .byte = 0x4e },
		{ .addr = 0x6cd375, .byte = 0x75 },
		{ .addr = 0x6cd376, .byte = 0x77 },
		{ .addr = 0x6cd377, .byte = 0x47 },
		{ .addr = 0x9d9c3e, .byte = 0x96 },
		{ .addr = 0x9d9c3f, .byte = 0xd0 },
		{ .addr = 0x9d9c40, .byte = 0x71 },
		{ .addr = 0x9d9c41, .byte = 0x6b },
		{ .addr = 0x41dfd6, .byte = 0xd3 },
		{ .addr = 0x41dfd7, .byte = 0x76 },
		{ .addr = 0x41dfd2, .byte = 0x07 },
		{ .addr = 0x41dfd3, .byte = 0x13 },
		{ .addr = 0x41dfd4, .byte = 0x00 },
		{ .addr = 0x41dfd5, .byte = 0x6c },
		{ .addr = 0x41dfd0, .byte = 0x4e },
		{ .addr = 0x41dfd1, .byte = 0x75 },
		{ .addr = 0x41dfce, .byte = 0x71 },
		{ .addr = 0x41dfcf, .byte = 0x6b },
		{ .addr = 0x41dfca, .byte = 0x4e },
		{ .addr = 0x41dfcb, .byte = 0x72 },
		{ .addr = 0x41dfcc, .byte = 0x96 },
		{ .addr = 0x41dfcd, .byte = 0xd0 },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xa6 },
		{ .addr = 0x00000e, .byte = 0x45 },
		{ .addr = 0x00000f, .byte = 0x06 },
		{ .addr = 0xa64506, .byte = 0xd7 },
		{ .addr = 0xa64507, .byte = 0x18 },
		{ .addr = 0xa64508, .byte = 0xed },
		{ .addr = 0xa64509, .byte = 0x91 }
};

static const SST_Transaction rts_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10329150, .data = 38608, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10329152, .data = 29035, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13660522, .data = 63077, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4317142, .data = 54134, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4317138, .data = 1811, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4317140, .data = 108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4317136, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4317134, .data = 29035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4317130, .data = 20082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4317132, .data = 38608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8358, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 17670, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10896646, .data = 55064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10896648, .data = 60817, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte rts_initial_ram_15[] = {
		{ .addr = 0x5d8d8e, .byte = 0x4e },
		{ .addr = 0x5d8d8f, .byte = 0x75 },
		{ .addr = 0x5d8d90, .byte = 0xc8 },
		{ .addr = 0x5d8d91, .byte = 0xa5 },
		{ .addr = 0x8121c8, .byte = 0xee },
		{ .addr = 0x8121c9, .byte = 0xdc },
		{ .addr = 0x8121ca, .byte = 0xf2 },
		{ .addr = 0x8121cb, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0xa8 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x12a8e2, .byte = 0x7f },
		{ .addr = 0x12a8e3, .byte = 0x48 },
		{ .addr = 0x12a8e4, .byte = 0x87 },
		{ .addr = 0x12a8e5, .byte = 0xa8 }
};

static const SST_RamByte rts_final_ram_15[] = {
		{ .addr = 0x5d8d8e, .byte = 0x4e },
		{ .addr = 0x5d8d8f, .byte = 0x75 },
		{ .addr = 0x5d8d90, .byte = 0xc8 },
		{ .addr = 0x5d8d91, .byte = 0xa5 },
		{ .addr = 0x8121c8, .byte = 0x00 },
		{ .addr = 0x8121c9, .byte = 0x5d },
		{ .addr = 0x8121ca, .byte = 0x8d },
		{ .addr = 0x8121cb, .byte = 0x90 },
		{ .addr = 0x8121c6, .byte = 0xa6 },
		{ .addr = 0x8121c7, .byte = 0x08 },
		{ .addr = 0x8121c4, .byte = 0x4e },
		{ .addr = 0x8121c5, .byte = 0x75 },
		{ .addr = 0x8121c2, .byte = 0xf2 },
		{ .addr = 0x8121c3, .byte = 0xf5 },
		{ .addr = 0x8121be, .byte = 0x4e },
		{ .addr = 0x8121bf, .byte = 0x76 },
		{ .addr = 0x8121c0, .byte = 0xee },
		{ .addr = 0x8121c1, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0x36 },
		{ .addr = 0x00000d, .byte = 0x12 },
		{ .addr = 0x00000e, .byte = 0xa8 },
		{ .addr = 0x00000f, .byte = 0xe2 },
		{ .addr = 0x12a8e2, .byte = 0x7f },
		{ .addr = 0x12a8e3, .byte = 0x48 },
		{ .addr = 0x12a8e4, .byte = 0x87 },
		{ .addr = 0x12a8e5, .byte = 0xa8 }
};

static const SST_Transaction rts_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462792, .data = 61148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462794, .data = 62197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14480116, .data = 30289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462794, .data = 36240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462790, .data = 42504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462792, .data = 93, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462788, .data = 20085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462786, .data = 62197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462782, .data = 20086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8462784, .data = 61148, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 13842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1222882, .data = 32584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1222884, .data = 34728, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t RTS_TEST_COUNT = 16;
static const SST_TestCase rts[] = {
	{
		.name = "000 RTS 4e75",
		.initial = {
			.regs = {
				1695586892, 2581458317, 3573081930, 3842343658, 3273788867, 3861101892, 497534621, 1062265147, 680415265, 3338935803, 612009649, 3170529000, 1229391163, 1605743300, 3812752736, 2170122, 2454062, 42001, 16646948
			},
			.prefetch0 = 20085,
			.prefetch1 = 50937,
			.ram = rts_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1695586892, 2581458317, 3573081930, 3842343658, 3273788867, 3861101892, 497534621, 1062265147, 680415265, 3338935803, 612009649, 3170529000, 1229391163, 1605743300, 3812752736, 2170122, 2454066, 42001, 1294136456
			},
			.prefetch0 = 26171,
			.prefetch1 = 183,
			.ram = rts_final_ram_0,
			.ram_len = 12,
		},
		.transactions = rts_transactions_0,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "001 RTS 4e75",
		.initial = {
			.regs = {
				2587553556, 863576031, 20741715, 1525301491, 130752747, 2488123870, 2836407715, 720204560, 688291953, 1266482820, 703155817, 103604173, 1484715574, 2954922021, 815425238, 811622, 13393464, 33311, 13808962
			},
			.prefetch0 = 20085,
			.prefetch1 = 3676,
			.ram = rts_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2587553556, 863576031, 20741715, 1525301491, 130752747, 2488123870, 2836407715, 720204560, 688291953, 1266482820, 703155817, 103604173, 1484715574, 2954922021, 815425238, 811626, 13393464, 33311, 2808253100
			},
			.prefetch0 = 35278,
			.prefetch1 = 26523,
			.ram = rts_final_ram_1,
			.ram_len = 12,
		},
		.transactions = rts_transactions_1,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "002 RTS 4e75",
		.initial = {
			.regs = {
				4248770795, 87300593, 1383432522, 2918686561, 3801019839, 3912595793, 1152959324, 2243019697, 990126355, 2986478501, 296526301, 4129988507, 1912406023, 3005755924, 734760185, 4960510, 4455916, 33284, 13110882
			},
			.prefetch0 = 20085,
			.prefetch1 = 44465,
			.ram = rts_initial_ram_2,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				4248770795, 87300593, 1383432522, 2918686561, 3801019839, 3912595793, 1152959324, 2243019697, 990126355, 2986478501, 296526301, 4129988507, 1912406023, 3005755924, 734760185, 4960514, 4455902, 8708, 1830469606
			},
			.prefetch0 = 7339,
			.prefetch1 = 44846,
			.ram = rts_final_ram_2,
			.ram_len = 30,
		},
		.transactions = rts_transactions_2,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "003 RTS 4e75",
		.initial = {
			.regs = {
				3383930028, 1933021319, 827949699, 1491064185, 1955448502, 2599483868, 585477963, 2541563113, 3991355809, 1963541271, 3869907539, 1318398285, 1322869327, 771958044, 386148897, 3730780, 15328210, 795, 8040186
			},
			.prefetch0 = 20085,
			.prefetch1 = 54374,
			.ram = rts_initial_ram_3,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3383930028, 1933021319, 827949699, 1491064185, 1955448502, 2599483868, 585477963, 2541563113, 3991355809, 1963541271, 3869907539, 1318398285, 1322869327, 771958044, 386148897, 3730784, 15328196, 8987, 2510990516
			},
			.prefetch0 = 33180,
			.prefetch1 = 0,
			.ram = rts_final_ram_3,
			.ram_len = 30,
		},
		.transactions = rts_transactions_3,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "004 RTS 4e75",
		.initial = {
			.regs = {
				3862333814, 1704174571, 3562952391, 3314679578, 1530414469, 3643660803, 3912930739, 3220830813, 2872719615, 3041575438, 1980350928, 3463056525, 1509708891, 1180301625, 68526009, 5877688, 14117800, 8, 13140044
			},
			.prefetch0 = 20085,
			.prefetch1 = 49537,
			.ram = rts_initial_ram_4,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3862333814, 1704174571, 3562952391, 3314679578, 1530414469, 3643660803, 3912930739, 3220830813, 2872719615, 3041575438, 1980350928, 3463056525, 1509708891, 1180301625, 68526009, 5877692, 14117786, 8200, 1435251594
			},
			.prefetch0 = 47521,
			.prefetch1 = 18161,
			.ram = rts_final_ram_4,
			.ram_len = 30,
		},
		.transactions = rts_transactions_4,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "005 RTS 4e75",
		.initial = {
			.regs = {
				2677899865, 2146644296, 3973715294, 3313699780, 3414069042, 2229125232, 2352902483, 956856036, 1222109114, 3245245427, 3995258640, 1947481267, 2875737099, 785718299, 419029464, 977312, 4194136, 33797, 10476504
			},
			.prefetch0 = 20085,
			.prefetch1 = 32089,
			.ram = rts_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2677899865, 2146644296, 3973715294, 3313699780, 3414069042, 2229125232, 2352902483, 956856036, 1222109114, 3245245427, 3995258640, 1947481267, 2875737099, 785718299, 419029464, 977316, 4194136, 33797, 3674027966
			},
			.prefetch0 = 10587,
			.prefetch1 = 49270,
			.ram = rts_final_ram_5,
			.ram_len = 12,
		},
		.transactions = rts_transactions_5,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "006 RTS 4e75",
		.initial = {
			.regs = {
				1604350166, 4845738, 4124951256, 1594345271, 3090795789, 3470296245, 3735548910, 1370360641, 2007627823, 2858754833, 2103131416, 2429749112, 53341131, 352048873, 1891484290, 13244840, 7430072, 33811, 14061776
			},
			.prefetch0 = 20085,
			.prefetch1 = 56006,
			.ram = rts_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1604350166, 4845738, 4124951256, 1594345271, 3090795789, 3470296245, 3735548910, 1370360641, 2007627823, 2858754833, 2103131416, 2429749112, 53341131, 352048873, 1891484290, 13244844, 7430072, 33811, 32713262
			},
			.prefetch0 = 30131,
			.prefetch1 = 15495,
			.ram = rts_final_ram_6,
			.ram_len = 12,
		},
		.transactions = rts_transactions_6,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "007 RTS 4e75",
		.initial = {
			.regs = {
				1703315640, 91163345, 3844220892, 1501042910, 2887028684, 2244550317, 3198360916, 753517783, 3061160128, 2259894446, 1182338404, 3465441038, 1592396424, 3857304447, 2434830880, 13127740, 799548, 259, 2376518
			},
			.prefetch0 = 20085,
			.prefetch1 = 32013,
			.ram = rts_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1703315640, 91163345, 3844220892, 1501042910, 2887028684, 2244550317, 3198360916, 753517783, 3061160128, 2259894446, 1182338404, 3465441038, 1592396424, 3857304447, 2434830880, 13127744, 799548, 259, 3410425060
			},
			.prefetch0 = 64579,
			.prefetch1 = 47005,
			.ram = rts_final_ram_7,
			.ram_len = 12,
		},
		.transactions = rts_transactions_7,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "008 RTS 4e75",
		.initial = {
			.regs = {
				2701847666, 1407428908, 1061269104, 3721402833, 2939163670, 2102185319, 1816752614, 2058475840, 2686109304, 456367912, 4092394848, 3256014104, 4109265994, 3888087815, 163233605, 9691854, 4761514, 40986, 550338
			},
			.prefetch0 = 20085,
			.prefetch1 = 12460,
			.ram = rts_initial_ram_8,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2701847666, 1407428908, 1061269104, 3721402833, 2939163670, 2102185319, 1816752614, 2058475840, 2686109304, 456367912, 4092394848, 3256014104, 4109265994, 3888087815, 163233605, 9691854, 4761504, 8218, 384336146
			},
			.prefetch0 = 47365,
			.prefetch1 = 1730,
			.ram = rts_final_ram_8,
			.ram_len = 26,
		},
		.transactions = rts_transactions_8,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "009 RTS 4e75",
		.initial = {
			.regs = {
				1470305499, 3656708275, 1899984855, 1257628137, 1901385817, 1282032706, 1502570243, 1989393497, 2195843834, 1937623543, 312054582, 3434430127, 260312974, 3838960438, 2581753505, 260188, 14872578, 783, 4230774
			},
			.prefetch0 = 20085,
			.prefetch1 = 53570,
			.ram = rts_initial_ram_9,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1470305499, 3656708275, 1899984855, 1257628137, 1901385817, 1282032706, 1502570243, 1989393497, 2195843834, 1937623543, 312054582, 3434430127, 260312974, 3838960438, 2581753505, 260192, 14872564, 8975, 3020348152
			},
			.prefetch0 = 1342,
			.prefetch1 = 65336,
			.ram = rts_final_ram_9,
			.ram_len = 30,
		},
		.transactions = rts_transactions_9,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "010 RTS 4e75",
		.initial = {
			.regs = {
				3407113289, 988102688, 3116940435, 3939126596, 2489361924, 317123099, 1721406833, 3052754504, 1137690804, 4180353141, 3890049577, 1195745349, 2991783174, 3609527264, 2538104477, 13727388, 14679328, 280, 10452594
			},
			.prefetch0 = 20085,
			.prefetch1 = 3780,
			.ram = rts_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3407113289, 988102688, 3116940435, 3939126596, 2489361924, 317123099, 1721406833, 3052754504, 1137690804, 4180353141, 3890049577, 1195745349, 2991783174, 3609527264, 2538104477, 13727392, 14679328, 280, 2430182228
			},
			.prefetch0 = 56143,
			.prefetch1 = 14044,
			.ram = rts_final_ram_10,
			.ram_len = 12,
		},
		.transactions = rts_transactions_10,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "011 RTS 4e75",
		.initial = {
			.regs = {
				2799915170, 899305260, 2251130010, 3300372740, 2599616370, 363589610, 3586906847, 68606553, 4116652838, 87031097, 137431332, 3168721050, 198565920, 199276681, 3241998349, 14681556, 11596748, 1818, 9609254
			},
			.prefetch0 = 20085,
			.prefetch1 = 33765,
			.ram = rts_initial_ram_11,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2799915170, 899305260, 2251130010, 3300372740, 2599616370, 363589610, 3586906847, 68606553, 4116652838, 87031097, 137431332, 3168721050, 198565920, 199276681, 3241998349, 14681560, 11596734, 10010, 2080247528
			},
			.prefetch0 = 25826,
			.prefetch1 = 308,
			.ram = rts_final_ram_11,
			.ram_len = 30,
		},
		.transactions = rts_transactions_11,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "012 RTS 4e75",
		.initial = {
			.regs = {
				1196251895, 1535875872, 4035477869, 1439275840, 28466095, 2990295925, 1497915782, 4117731343, 3321823592, 3378388930, 62371072, 366364356, 1308607625, 2545356059, 1084613586, 11998928, 120278, 32796, 9793588
			},
			.prefetch0 = 20085,
			.prefetch1 = 10624,
			.ram = rts_initial_ram_12,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				1196251895, 1535875872, 4035477869, 1439275840, 28466095, 2990295925, 1497915782, 4117731343, 3321823592, 3378388930, 62371072, 366364356, 1308607625, 2545356059, 1084613586, 11998932, 120264, 8220, 4025757508
			},
			.prefetch0 = 63114,
			.prefetch1 = 41704,
			.ram = rts_final_ram_12,
			.ram_len = 30,
		},
		.transactions = rts_transactions_12,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "013 RTS 4e75",
		.initial = {
			.regs = {
				731745351, 1382298543, 3509653365, 2468553870, 3674766476, 2415324590, 2577130112, 2666846815, 2815114728, 2936835838, 1008473656, 2495461451, 558625715, 1277252156, 2873757176, 11176080, 5550494, 543, 10704312
			},
			.prefetch0 = 20085,
			.prefetch1 = 24926,
			.ram = rts_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				731745351, 1382298543, 3509653365, 2468553870, 3674766476, 2415324590, 2577130112, 2666846815, 2815114728, 2936835838, 1008473656, 2495461451, 558625715, 1277252156, 2873757176, 11176084, 5550494, 543, 3671877158
			},
			.prefetch0 = 51310,
			.prefetch1 = 33237,
			.ram = rts_final_ram_13,
			.ram_len = 12,
		},
		.transactions = rts_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 RTS 4e75",
		.initial = {
			.regs = {
				2551047338, 4013541656, 658624699, 4159841692, 1841168348, 999659152, 562616169, 2761945818, 2541040800, 2569200923, 1575066040, 1411987985, 2513171404, 1080187074, 4246465789, 10329150, 4317144, 1811, 7132024
			},
			.prefetch0 = 20085,
			.prefetch1 = 30535,
			.ram = rts_initial_ram_14,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				2551047338, 4013541656, 658624699, 4159841692, 1841168348, 999659152, 562616169, 2761945818, 2541040800, 2569200923, 1575066040, 1411987985, 2513171404, 1080187074, 4246465789, 10329154, 4317130, 10003, 547767562
			},
			.prefetch0 = 55064,
			.prefetch1 = 60817,
			.ram = rts_final_ram_14,
			.ram_len = 30,
		},
		.transactions = rts_transactions_14,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "015 RTS 4e75",
		.initial = {
			.regs = {
				3548130153, 3663696426, 2936009, 3482842444, 3586893120, 408145749, 13395292, 991870815, 4265040486, 2670953598, 165080993, 1648615009, 3776777646, 2100287807, 1174619266, 515164, 8462792, 42504, 6131090
			},
			.prefetch0 = 20085,
			.prefetch1 = 51365,
			.ram = rts_initial_ram_15,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3548130153, 3663696426, 2936009, 3482842444, 3586893120, 408145749, 13395292, 991870815, 4265040486, 2670953598, 165080993, 1648615009, 3776777646, 2100287807, 1174619266, 515164, 8462782, 9736, 907192550
			},
			.prefetch0 = 32584,
			.prefetch1 = 34728,
			.ram = rts_final_ram_15,
			.ram_len = 26,
		},
		.transactions = rts_transactions_15,
		.transactions_len = 16,
		.lenght = 66,
	},
};

#endif /* RBT_RTS_H */