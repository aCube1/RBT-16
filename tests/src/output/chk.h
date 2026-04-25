#ifndef RBT_CHK_H
#define RBT_CHK_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte chk_initial_ram_0[] = {
		{ .addr = 0xfb68c4, .byte = 0x4d },
		{ .addr = 0xfb68c5, .byte = 0x82 },
		{ .addr = 0xfb68c6, .byte = 0x90 },
		{ .addr = 0xfb68c7, .byte = 0x54 },
		{ .addr = 0x000018, .byte = 0x1e },
		{ .addr = 0x000019, .byte = 0x56 },
		{ .addr = 0x00001a, .byte = 0xf3 },
		{ .addr = 0x00001b, .byte = 0xec },
		{ .addr = 0x56f3ec, .byte = 0xf5 },
		{ .addr = 0x56f3ed, .byte = 0x10 },
		{ .addr = 0x56f3ee, .byte = 0x1b },
		{ .addr = 0x56f3ef, .byte = 0x8c }
};

static const SST_RamByte chk_final_ram_0[] = {
		{ .addr = 0xfb68c4, .byte = 0x4d },
		{ .addr = 0xfb68c5, .byte = 0x82 },
		{ .addr = 0xfb68c6, .byte = 0x90 },
		{ .addr = 0xfb68c7, .byte = 0x54 },
		{ .addr = 0x0f45d2, .byte = 0x68 },
		{ .addr = 0x0f45d3, .byte = 0xc6 },
		{ .addr = 0x0f45ce, .byte = 0x02 },
		{ .addr = 0x0f45cf, .byte = 0x10 },
		{ .addr = 0x0f45d0, .byte = 0x00 },
		{ .addr = 0x0f45d1, .byte = 0xfb },
		{ .addr = 0x000018, .byte = 0x1e },
		{ .addr = 0x000019, .byte = 0x56 },
		{ .addr = 0x00001a, .byte = 0xf3 },
		{ .addr = 0x00001b, .byte = 0xec },
		{ .addr = 0x56f3ec, .byte = 0xf5 },
		{ .addr = 0x56f3ed, .byte = 0x10 },
		{ .addr = 0x56f3ee, .byte = 0x1b },
		{ .addr = 0x56f3ef, .byte = 0x8c }
};

static const SST_Transaction chk_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1000914, .data = 26822, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1000910, .data = 528, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1000912, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 7766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 62444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5698540, .data = 62736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5698542, .data = 7052, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_1[] = {
		{ .addr = 0x77da0e, .byte = 0x4b },
		{ .addr = 0x77da0f, .byte = 0xa7 },
		{ .addr = 0x77da10, .byte = 0xbb },
		{ .addr = 0x77da11, .byte = 0xda },
		{ .addr = 0x73be4c, .byte = 0xaf },
		{ .addr = 0x73be4d, .byte = 0xbf },
		{ .addr = 0x000018, .byte = 0xcf },
		{ .addr = 0x000019, .byte = 0xec },
		{ .addr = 0x00001a, .byte = 0x3a },
		{ .addr = 0x00001b, .byte = 0x8a },
		{ .addr = 0xec3a8a, .byte = 0xac },
		{ .addr = 0xec3a8b, .byte = 0xe3 },
		{ .addr = 0xec3a8c, .byte = 0xb0 },
		{ .addr = 0xec3a8d, .byte = 0x32 }
};

static const SST_RamByte chk_final_ram_1[] = {
		{ .addr = 0x77da0e, .byte = 0x4b },
		{ .addr = 0x77da0f, .byte = 0xa7 },
		{ .addr = 0x77da10, .byte = 0xbb },
		{ .addr = 0x77da11, .byte = 0xda },
		{ .addr = 0x73be4c, .byte = 0xaf },
		{ .addr = 0x73be4d, .byte = 0xbf },
		{ .addr = 0x73be4a, .byte = 0xda },
		{ .addr = 0x73be4b, .byte = 0x10 },
		{ .addr = 0x73be46, .byte = 0x22 },
		{ .addr = 0x73be47, .byte = 0x18 },
		{ .addr = 0x73be48, .byte = 0x00 },
		{ .addr = 0x73be49, .byte = 0x77 },
		{ .addr = 0x000018, .byte = 0xcf },
		{ .addr = 0x000019, .byte = 0xec },
		{ .addr = 0x00001a, .byte = 0x3a },
		{ .addr = 0x00001b, .byte = 0x8a },
		{ .addr = 0xec3a8a, .byte = 0xac },
		{ .addr = 0xec3a8b, .byte = 0xe3 },
		{ .addr = 0xec3a8c, .byte = 0xb0 },
		{ .addr = 0xec3a8d, .byte = 0x32 }
};

static const SST_Transaction chk_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7585356, .data = 44991, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7585354, .data = 55824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7585350, .data = 8728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7585352, .data = 119, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 53228, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 14986, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15481482, .data = 44259, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15481484, .data = 45106, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_2[] = {
		{ .addr = 0xb92f96, .byte = 0x43 },
		{ .addr = 0xb92f97, .byte = 0x9a },
		{ .addr = 0xb92f98, .byte = 0x56 },
		{ .addr = 0xb92f99, .byte = 0x52 },
		{ .addr = 0xa29120, .byte = 0xe4 },
		{ .addr = 0xa29121, .byte = 0xaf },
		{ .addr = 0x000018, .byte = 0x8b },
		{ .addr = 0x000019, .byte = 0x92 },
		{ .addr = 0x00001a, .byte = 0x11 },
		{ .addr = 0x00001b, .byte = 0x0e },
		{ .addr = 0x92110e, .byte = 0xef },
		{ .addr = 0x92110f, .byte = 0xf9 },
		{ .addr = 0x921110, .byte = 0x7c },
		{ .addr = 0x921111, .byte = 0x04 }
};

static const SST_RamByte chk_final_ram_2[] = {
		{ .addr = 0xb92f96, .byte = 0x43 },
		{ .addr = 0xb92f97, .byte = 0x9a },
		{ .addr = 0xb92f98, .byte = 0x56 },
		{ .addr = 0xb92f99, .byte = 0x52 },
		{ .addr = 0xa29120, .byte = 0xe4 },
		{ .addr = 0xa29121, .byte = 0xaf },
		{ .addr = 0x166be4, .byte = 0x2f },
		{ .addr = 0x166be5, .byte = 0x98 },
		{ .addr = 0x166be0, .byte = 0x87 },
		{ .addr = 0x166be1, .byte = 0x10 },
		{ .addr = 0x166be2, .byte = 0x00 },
		{ .addr = 0x166be3, .byte = 0xb9 },
		{ .addr = 0x000018, .byte = 0x8b },
		{ .addr = 0x000019, .byte = 0x92 },
		{ .addr = 0x00001a, .byte = 0x11 },
		{ .addr = 0x00001b, .byte = 0x0e },
		{ .addr = 0x92110e, .byte = 0xef },
		{ .addr = 0x92110f, .byte = 0xf9 },
		{ .addr = 0x921110, .byte = 0x7c },
		{ .addr = 0x921111, .byte = 0x04 }
};

static const SST_Transaction chk_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10653984, .data = 58543, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1469412, .data = 12184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1469408, .data = 34576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1469410, .data = 185, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 35730, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 4366, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9572622, .data = 61433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9572624, .data = 31748, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_3[] = {
		{ .addr = 0x43ba04, .byte = 0x43 },
		{ .addr = 0x43ba05, .byte = 0xa1 },
		{ .addr = 0x43ba06, .byte = 0x78 },
		{ .addr = 0x43ba07, .byte = 0xd1 },
		{ .addr = 0x00000c, .byte = 0x3a },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x06 },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0xd80626, .byte = 0x0c },
		{ .addr = 0xd80627, .byte = 0x48 },
		{ .addr = 0xd80628, .byte = 0xb1 },
		{ .addr = 0xd80629, .byte = 0x7d }
};

static const SST_RamByte chk_final_ram_3[] = {
		{ .addr = 0x43ba04, .byte = 0x43 },
		{ .addr = 0x43ba05, .byte = 0xa1 },
		{ .addr = 0x43ba06, .byte = 0x78 },
		{ .addr = 0x43ba07, .byte = 0xd1 },
		{ .addr = 0xb00cb2, .byte = 0xba },
		{ .addr = 0xb00cb3, .byte = 0x08 },
		{ .addr = 0xb00cae, .byte = 0x23 },
		{ .addr = 0xb00caf, .byte = 0x01 },
		{ .addr = 0xb00cb0, .byte = 0x00 },
		{ .addr = 0xb00cb1, .byte = 0x43 },
		{ .addr = 0xb00cac, .byte = 0x43 },
		{ .addr = 0xb00cad, .byte = 0xa1 },
		{ .addr = 0xb00caa, .byte = 0x45 },
		{ .addr = 0xb00cab, .byte = 0xcd },
		{ .addr = 0xb00ca6, .byte = 0x43 },
		{ .addr = 0xb00ca7, .byte = 0xb5 },
		{ .addr = 0xb00ca8, .byte = 0x4c },
		{ .addr = 0xb00ca9, .byte = 0x65 },
		{ .addr = 0x00000c, .byte = 0x3a },
		{ .addr = 0x00000d, .byte = 0xd8 },
		{ .addr = 0x00000e, .byte = 0x06 },
		{ .addr = 0x00000f, .byte = 0x26 },
		{ .addr = 0xd80626, .byte = 0x0c },
		{ .addr = 0xd80627, .byte = 0x48 },
		{ .addr = 0xd80628, .byte = 0xb1 },
		{ .addr = 0xd80629, .byte = 0x7d }
};

static const SST_Transaction chk_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6637004, .data = 62390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11537586, .data = 47624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11537582, .data = 8961, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11537584, .data = 67, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11537580, .data = 17313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11537578, .data = 17869, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11537574, .data = 17333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11537576, .data = 19557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15064, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1574, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14157350, .data = 3144, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14157352, .data = 45437, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_4[] = {
		{ .addr = 0x5d04f8, .byte = 0x4f },
		{ .addr = 0x5d04f9, .byte = 0xa4 },
		{ .addr = 0x5d04fa, .byte = 0x4d },
		{ .addr = 0x5d04fb, .byte = 0x09 },
		{ .addr = 0x1b8ec4, .byte = 0x6f },
		{ .addr = 0x1b8ec5, .byte = 0xb8 },
		{ .addr = 0x000018, .byte = 0x80 },
		{ .addr = 0x000019, .byte = 0xa0 },
		{ .addr = 0x00001a, .byte = 0x56 },
		{ .addr = 0x00001b, .byte = 0x2a },
		{ .addr = 0xa0562a, .byte = 0x07 },
		{ .addr = 0xa0562b, .byte = 0xdf },
		{ .addr = 0xa0562c, .byte = 0x86 },
		{ .addr = 0xa0562d, .byte = 0x59 }
};

static const SST_RamByte chk_final_ram_4[] = {
		{ .addr = 0x5d04f8, .byte = 0x4f },
		{ .addr = 0x5d04f9, .byte = 0xa4 },
		{ .addr = 0x5d04fa, .byte = 0x4d },
		{ .addr = 0x5d04fb, .byte = 0x09 },
		{ .addr = 0x1b8ec4, .byte = 0x6f },
		{ .addr = 0x1b8ec5, .byte = 0xb8 },
		{ .addr = 0x1e4106, .byte = 0x04 },
		{ .addr = 0x1e4107, .byte = 0xfa },
		{ .addr = 0x1e4102, .byte = 0xa3 },
		{ .addr = 0x1e4103, .byte = 0x00 },
		{ .addr = 0x1e4104, .byte = 0x00 },
		{ .addr = 0x1e4105, .byte = 0x5d },
		{ .addr = 0x000018, .byte = 0x80 },
		{ .addr = 0x000019, .byte = 0xa0 },
		{ .addr = 0x00001a, .byte = 0x56 },
		{ .addr = 0x00001b, .byte = 0x2a },
		{ .addr = 0xa0562a, .byte = 0x07 },
		{ .addr = 0xa0562b, .byte = 0xdf },
		{ .addr = 0xa0562c, .byte = 0x86 },
		{ .addr = 0xa0562d, .byte = 0x59 }
};

static const SST_Transaction chk_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1806020, .data = 28600, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1982726, .data = 1274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1982722, .data = 41728, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1982724, .data = 93, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 32928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 22058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10507818, .data = 2015, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10507820, .data = 34393, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_5[] = {
		{ .addr = 0x74e124, .byte = 0x49 },
		{ .addr = 0x74e125, .byte = 0x92 },
		{ .addr = 0x74e126, .byte = 0xef },
		{ .addr = 0x74e127, .byte = 0xb7 },
		{ .addr = 0x40d522, .byte = 0x55 },
		{ .addr = 0x40d523, .byte = 0xfd },
		{ .addr = 0x000018, .byte = 0x97 },
		{ .addr = 0x000019, .byte = 0xda },
		{ .addr = 0x00001a, .byte = 0x2f },
		{ .addr = 0x00001b, .byte = 0x92 },
		{ .addr = 0xda2f92, .byte = 0x85 },
		{ .addr = 0xda2f93, .byte = 0x7a },
		{ .addr = 0xda2f94, .byte = 0xb9 },
		{ .addr = 0xda2f95, .byte = 0x89 }
};

static const SST_RamByte chk_final_ram_5[] = {
		{ .addr = 0x74e124, .byte = 0x49 },
		{ .addr = 0x74e125, .byte = 0x92 },
		{ .addr = 0x74e126, .byte = 0xef },
		{ .addr = 0x74e127, .byte = 0xb7 },
		{ .addr = 0x40d522, .byte = 0x55 },
		{ .addr = 0x40d523, .byte = 0xfd },
		{ .addr = 0xcc48ec, .byte = 0xe1 },
		{ .addr = 0xcc48ed, .byte = 0x26 },
		{ .addr = 0xcc48e8, .byte = 0x21 },
		{ .addr = 0xcc48e9, .byte = 0x08 },
		{ .addr = 0xcc48ea, .byte = 0x00 },
		{ .addr = 0xcc48eb, .byte = 0x74 },
		{ .addr = 0x000018, .byte = 0x97 },
		{ .addr = 0x000019, .byte = 0xda },
		{ .addr = 0x00001a, .byte = 0x2f },
		{ .addr = 0x00001b, .byte = 0x92 },
		{ .addr = 0xda2f92, .byte = 0x85 },
		{ .addr = 0xda2f93, .byte = 0x7a },
		{ .addr = 0xda2f94, .byte = 0xb9 },
		{ .addr = 0xda2f95, .byte = 0x89 }
};

static const SST_Transaction chk_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4248866, .data = 22013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13388012, .data = 57638, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13388008, .data = 8456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13388010, .data = 116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 38874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 12178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14299026, .data = 34170, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14299028, .data = 47497, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_6[] = {
		{ .addr = 0x57a5c4, .byte = 0x49 },
		{ .addr = 0x57a5c5, .byte = 0xa3 },
		{ .addr = 0x57a5c6, .byte = 0x35 },
		{ .addr = 0x57a5c7, .byte = 0x62 },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x4a2f46, .byte = 0x6f },
		{ .addr = 0x4a2f47, .byte = 0xfd },
		{ .addr = 0x4a2f48, .byte = 0x65 },
		{ .addr = 0x4a2f49, .byte = 0x41 }
};

static const SST_RamByte chk_final_ram_6[] = {
		{ .addr = 0x57a5c4, .byte = 0x49 },
		{ .addr = 0x57a5c5, .byte = 0xa3 },
		{ .addr = 0x57a5c6, .byte = 0x35 },
		{ .addr = 0x57a5c7, .byte = 0x62 },
		{ .addr = 0x3968ac, .byte = 0xa5 },
		{ .addr = 0x3968ad, .byte = 0xc8 },
		{ .addr = 0x3968a8, .byte = 0x03 },
		{ .addr = 0x3968a9, .byte = 0x0d },
		{ .addr = 0x3968aa, .byte = 0x00 },
		{ .addr = 0x3968ab, .byte = 0x57 },
		{ .addr = 0x3968a6, .byte = 0x49 },
		{ .addr = 0x3968a7, .byte = 0xa3 },
		{ .addr = 0x3968a4, .byte = 0xb7 },
		{ .addr = 0x3968a5, .byte = 0x79 },
		{ .addr = 0x3968a0, .byte = 0x49 },
		{ .addr = 0x3968a1, .byte = 0xb1 },
		{ .addr = 0x3968a2, .byte = 0x7b },
		{ .addr = 0x3968a3, .byte = 0xa9 },
		{ .addr = 0x00000c, .byte = 0xd4 },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x2f },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x4a2f46, .byte = 0x6f },
		{ .addr = 0x4a2f47, .byte = 0xfd },
		{ .addr = 0x4a2f48, .byte = 0x65 },
		{ .addr = 0x4a2f49, .byte = 0x41 }
};

static const SST_Transaction chk_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11122552, .data = 61088, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3762348, .data = 42440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3762344, .data = 781, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3762346, .data = 87, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3762342, .data = 18851, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3762340, .data = 46969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3762336, .data = 18865, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3762338, .data = 31657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4861766, .data = 28669, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4861768, .data = 25921, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_7[] = {
		{ .addr = 0x6b131a, .byte = 0x45 },
		{ .addr = 0x6b131b, .byte = 0xaa },
		{ .addr = 0x6b131c, .byte = 0x7e },
		{ .addr = 0x6b131d, .byte = 0x0a },
		{ .addr = 0x6b131e, .byte = 0x4c },
		{ .addr = 0x6b131f, .byte = 0x97 },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0xac },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0xacddfa, .byte = 0x1b },
		{ .addr = 0xacddfb, .byte = 0x06 },
		{ .addr = 0xacddfc, .byte = 0x56 },
		{ .addr = 0xacddfd, .byte = 0xd6 }
};

static const SST_RamByte chk_final_ram_7[] = {
		{ .addr = 0x6b131a, .byte = 0x45 },
		{ .addr = 0x6b131b, .byte = 0xaa },
		{ .addr = 0x6b131c, .byte = 0x7e },
		{ .addr = 0x6b131d, .byte = 0x0a },
		{ .addr = 0x6b131e, .byte = 0x4c },
		{ .addr = 0x6b131f, .byte = 0x97 },
		{ .addr = 0xd2e694, .byte = 0x13 },
		{ .addr = 0xd2e695, .byte = 0x1c },
		{ .addr = 0xd2e690, .byte = 0x06 },
		{ .addr = 0xd2e691, .byte = 0x08 },
		{ .addr = 0xd2e692, .byte = 0x00 },
		{ .addr = 0xd2e693, .byte = 0x6b },
		{ .addr = 0xd2e68e, .byte = 0x45 },
		{ .addr = 0xd2e68f, .byte = 0xaa },
		{ .addr = 0xd2e68c, .byte = 0x15 },
		{ .addr = 0xd2e68d, .byte = 0xfb },
		{ .addr = 0xd2e688, .byte = 0x45 },
		{ .addr = 0xd2e689, .byte = 0xb1 },
		{ .addr = 0xd2e68a, .byte = 0x63 },
		{ .addr = 0xd2e68b, .byte = 0xad },
		{ .addr = 0x00000c, .byte = 0xdc },
		{ .addr = 0x00000d, .byte = 0xac },
		{ .addr = 0x00000e, .byte = 0xdd },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0xacddfa, .byte = 0x1b },
		{ .addr = 0xacddfb, .byte = 0x06 },
		{ .addr = 0xacddfc, .byte = 0x56 },
		{ .addr = 0xacddfd, .byte = 0xd6 }
};

static const SST_Transaction chk_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7017246, .data = 19607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11343354, .data = 58464, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13821588, .data = 4892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13821584, .data = 1544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13821586, .data = 107, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13821582, .data = 17834, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13821580, .data = 5627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13821576, .data = 17841, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13821578, .data = 25517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 56826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11329018, .data = 6918, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11329020, .data = 22230, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_8[] = {
		{ .addr = 0xe58ba2, .byte = 0x4d },
		{ .addr = 0xe58ba3, .byte = 0xac },
		{ .addr = 0xe58ba4, .byte = 0xde },
		{ .addr = 0xe58ba5, .byte = 0x43 },
		{ .addr = 0xe58ba6, .byte = 0x60 },
		{ .addr = 0xe58ba7, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x3c4c08, .byte = 0x35 },
		{ .addr = 0x3c4c09, .byte = 0xe4 },
		{ .addr = 0x3c4c0a, .byte = 0xfc },
		{ .addr = 0x3c4c0b, .byte = 0xee }
};

static const SST_RamByte chk_final_ram_8[] = {
		{ .addr = 0xe58ba2, .byte = 0x4d },
		{ .addr = 0xe58ba3, .byte = 0xac },
		{ .addr = 0xe58ba4, .byte = 0xde },
		{ .addr = 0xe58ba5, .byte = 0x43 },
		{ .addr = 0xe58ba6, .byte = 0x60 },
		{ .addr = 0xe58ba7, .byte = 0xdc },
		{ .addr = 0x05fbc2, .byte = 0x8b },
		{ .addr = 0x05fbc3, .byte = 0xa4 },
		{ .addr = 0x05fbbe, .byte = 0x00 },
		{ .addr = 0x05fbbf, .byte = 0x01 },
		{ .addr = 0x05fbc0, .byte = 0x00 },
		{ .addr = 0x05fbc1, .byte = 0xe5 },
		{ .addr = 0x05fbbc, .byte = 0x4d },
		{ .addr = 0x05fbbd, .byte = 0xac },
		{ .addr = 0x05fbba, .byte = 0x8a },
		{ .addr = 0x05fbbb, .byte = 0x9d },
		{ .addr = 0x05fbb6, .byte = 0x4d },
		{ .addr = 0x05fbb7, .byte = 0xb1 },
		{ .addr = 0x05fbb8, .byte = 0x0c },
		{ .addr = 0x05fbb9, .byte = 0x18 },
		{ .addr = 0x00000c, .byte = 0x0c },
		{ .addr = 0x00000d, .byte = 0x3c },
		{ .addr = 0x00000e, .byte = 0x4c },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x3c4c08, .byte = 0x35 },
		{ .addr = 0x3c4c09, .byte = 0xe4 },
		{ .addr = 0x3c4c0a, .byte = 0xfc },
		{ .addr = 0x3c4c0b, .byte = 0xee }
};

static const SST_Transaction chk_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15043494, .data = 24796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1608348, .data = 50154, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 392130, .data = 35748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 392126, .data = 1, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 392128, .data = 229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 392124, .data = 19884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 392122, .data = 35485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 392118, .data = 19889, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 392120, .data = 3096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3132, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 19464, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3951624, .data = 13796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3951626, .data = 64750, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_9[] = {
		{ .addr = 0x7d318a, .byte = 0x49 },
		{ .addr = 0x7d318b, .byte = 0x9d },
		{ .addr = 0x7d318c, .byte = 0xf8 },
		{ .addr = 0x7d318d, .byte = 0xb5 },
		{ .addr = 0x23b52c, .byte = 0xbb },
		{ .addr = 0x23b52d, .byte = 0x11 },
		{ .addr = 0x000018, .byte = 0x8d },
		{ .addr = 0x000019, .byte = 0x14 },
		{ .addr = 0x00001a, .byte = 0xf3 },
		{ .addr = 0x00001b, .byte = 0xe0 },
		{ .addr = 0x14f3e0, .byte = 0x4c },
		{ .addr = 0x14f3e1, .byte = 0xd3 },
		{ .addr = 0x14f3e2, .byte = 0xda },
		{ .addr = 0x14f3e3, .byte = 0x30 }
};

static const SST_RamByte chk_final_ram_9[] = {
		{ .addr = 0x7d318a, .byte = 0x49 },
		{ .addr = 0x7d318b, .byte = 0x9d },
		{ .addr = 0x7d318c, .byte = 0xf8 },
		{ .addr = 0x7d318d, .byte = 0xb5 },
		{ .addr = 0x23b52c, .byte = 0xbb },
		{ .addr = 0x23b52d, .byte = 0x11 },
		{ .addr = 0x5713c4, .byte = 0x31 },
		{ .addr = 0x5713c5, .byte = 0x8c },
		{ .addr = 0x5713c0, .byte = 0x82 },
		{ .addr = 0x5713c1, .byte = 0x10 },
		{ .addr = 0x5713c2, .byte = 0x00 },
		{ .addr = 0x5713c3, .byte = 0x7d },
		{ .addr = 0x000018, .byte = 0x8d },
		{ .addr = 0x000019, .byte = 0x14 },
		{ .addr = 0x00001a, .byte = 0xf3 },
		{ .addr = 0x00001b, .byte = 0xe0 },
		{ .addr = 0x14f3e0, .byte = 0x4c },
		{ .addr = 0x14f3e1, .byte = 0xd3 },
		{ .addr = 0x14f3e2, .byte = 0xda },
		{ .addr = 0x14f3e3, .byte = 0x30 }
};

static const SST_Transaction chk_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2340140, .data = 47889, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5706692, .data = 12684, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5706688, .data = 33296, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5706690, .data = 125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 36116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 62432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1373152, .data = 19667, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1373154, .data = 55856, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_10[] = {
		{ .addr = 0x3af284, .byte = 0x49 },
		{ .addr = 0x3af285, .byte = 0x9d },
		{ .addr = 0x3af286, .byte = 0x58 },
		{ .addr = 0x3af287, .byte = 0x0d },
		{ .addr = 0x00000c, .byte = 0x0d },
		{ .addr = 0x00000d, .byte = 0xb6 },
		{ .addr = 0x00000e, .byte = 0x06 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xb6068a, .byte = 0xcc },
		{ .addr = 0xb6068b, .byte = 0x17 },
		{ .addr = 0xb6068c, .byte = 0xe2 },
		{ .addr = 0xb6068d, .byte = 0x0c }
};

static const SST_RamByte chk_final_ram_10[] = {
		{ .addr = 0x3af284, .byte = 0x49 },
		{ .addr = 0x3af285, .byte = 0x9d },
		{ .addr = 0x3af286, .byte = 0x58 },
		{ .addr = 0x3af287, .byte = 0x0d },
		{ .addr = 0x6f13ca, .byte = 0xf2 },
		{ .addr = 0x6f13cb, .byte = 0x86 },
		{ .addr = 0x6f13c6, .byte = 0xa7 },
		{ .addr = 0x6f13c7, .byte = 0x00 },
		{ .addr = 0x6f13c8, .byte = 0x00 },
		{ .addr = 0x6f13c9, .byte = 0x3a },
		{ .addr = 0x6f13c4, .byte = 0x49 },
		{ .addr = 0x6f13c5, .byte = 0x9d },
		{ .addr = 0x6f13c2, .byte = 0xc4 },
		{ .addr = 0x6f13c3, .byte = 0xe5 },
		{ .addr = 0x6f13be, .byte = 0x49 },
		{ .addr = 0x6f13bf, .byte = 0x95 },
		{ .addr = 0x6f13c0, .byte = 0x31 },
		{ .addr = 0x6f13c1, .byte = 0x11 },
		{ .addr = 0x00000c, .byte = 0x0d },
		{ .addr = 0x00000d, .byte = 0xb6 },
		{ .addr = 0x00000e, .byte = 0x06 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0xb6068a, .byte = 0xcc },
		{ .addr = 0xb6068b, .byte = 0x17 },
		{ .addr = 0xb6068c, .byte = 0xe2 },
		{ .addr = 0xb6068d, .byte = 0x0c }
};

static const SST_Transaction chk_transactions_10[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1164516, .data = 38862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7279562, .data = 62086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7279558, .data = 42752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7279560, .data = 58, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7279556, .data = 18845, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7279554, .data = 50405, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7279550, .data = 18837, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7279552, .data = 12561, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 3510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 1674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11929226, .data = 52247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11929228, .data = 57868, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_11[] = {
		{ .addr = 0x0874ba, .byte = 0x4b },
		{ .addr = 0x0874bb, .byte = 0x9a },
		{ .addr = 0x0874bc, .byte = 0xf0 },
		{ .addr = 0x0874bd, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0x65 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xd0 },
		{ .addr = 0x00000f, .byte = 0x9a },
		{ .addr = 0xc8d09a, .byte = 0xff },
		{ .addr = 0xc8d09b, .byte = 0x8e },
		{ .addr = 0xc8d09c, .byte = 0x54 },
		{ .addr = 0xc8d09d, .byte = 0xf6 }
};

static const SST_RamByte chk_final_ram_11[] = {
		{ .addr = 0x0874ba, .byte = 0x4b },
		{ .addr = 0x0874bb, .byte = 0x9a },
		{ .addr = 0x0874bc, .byte = 0xf0 },
		{ .addr = 0x0874bd, .byte = 0x53 },
		{ .addr = 0x86f510, .byte = 0x74 },
		{ .addr = 0x86f511, .byte = 0xbc },
		{ .addr = 0x86f50c, .byte = 0xa4 },
		{ .addr = 0x86f50d, .byte = 0x1d },
		{ .addr = 0x86f50e, .byte = 0x00 },
		{ .addr = 0x86f50f, .byte = 0x08 },
		{ .addr = 0x86f50a, .byte = 0x4b },
		{ .addr = 0x86f50b, .byte = 0x9a },
		{ .addr = 0x86f508, .byte = 0x8f },
		{ .addr = 0x86f509, .byte = 0xc9 },
		{ .addr = 0x86f504, .byte = 0x4b },
		{ .addr = 0x86f505, .byte = 0x95 },
		{ .addr = 0x86f506, .byte = 0xf3 },
		{ .addr = 0x86f507, .byte = 0xc2 },
		{ .addr = 0x00000c, .byte = 0x65 },
		{ .addr = 0x00000d, .byte = 0xc8 },
		{ .addr = 0x00000e, .byte = 0xd0 },
		{ .addr = 0x00000f, .byte = 0x9a },
		{ .addr = 0xc8d09a, .byte = 0xff },
		{ .addr = 0xc8d09b, .byte = 0x8e },
		{ .addr = 0xc8d09c, .byte = 0x54 },
		{ .addr = 0xc8d09d, .byte = 0xf6 }
};

static const SST_Transaction chk_transactions_11[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12750792, .data = 6844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8844560, .data = 29884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8844556, .data = 42013, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8844558, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8844554, .data = 19354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8844552, .data = 36809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8844548, .data = 19349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8844550, .data = 62402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 26056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 53402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13160602, .data = 65422, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13160604, .data = 21750, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_12[] = {
		{ .addr = 0x0f438c, .byte = 0x41 },
		{ .addr = 0x0f438d, .byte = 0x94 },
		{ .addr = 0x0f438e, .byte = 0x3e },
		{ .addr = 0x0f438f, .byte = 0x63 },
		{ .addr = 0x00000c, .byte = 0xd6 },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0x11 },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x8411c4, .byte = 0x75 },
		{ .addr = 0x8411c5, .byte = 0xff },
		{ .addr = 0x8411c6, .byte = 0x52 },
		{ .addr = 0x8411c7, .byte = 0x93 }
};

static const SST_RamByte chk_final_ram_12[] = {
		{ .addr = 0x0f438c, .byte = 0x41 },
		{ .addr = 0x0f438d, .byte = 0x94 },
		{ .addr = 0x0f438e, .byte = 0x3e },
		{ .addr = 0x0f438f, .byte = 0x63 },
		{ .addr = 0x8c023c, .byte = 0x43 },
		{ .addr = 0x8c023d, .byte = 0x8e },
		{ .addr = 0x8c0238, .byte = 0x26 },
		{ .addr = 0x8c0239, .byte = 0x15 },
		{ .addr = 0x8c023a, .byte = 0x00 },
		{ .addr = 0x8c023b, .byte = 0x0f },
		{ .addr = 0x8c0236, .byte = 0x41 },
		{ .addr = 0x8c0237, .byte = 0x94 },
		{ .addr = 0x8c0234, .byte = 0x1d },
		{ .addr = 0x8c0235, .byte = 0x9b },
		{ .addr = 0x8c0230, .byte = 0x41 },
		{ .addr = 0x8c0231, .byte = 0x95 },
		{ .addr = 0x8c0232, .byte = 0x45 },
		{ .addr = 0x8c0233, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0xd6 },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0x11 },
		{ .addr = 0x00000f, .byte = 0xc4 },
		{ .addr = 0x8411c4, .byte = 0x75 },
		{ .addr = 0x8411c5, .byte = 0xff },
		{ .addr = 0x8411c6, .byte = 0x52 },
		{ .addr = 0x8411c7, .byte = 0x93 }
};

static const SST_Transaction chk_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3284378, .data = 17649, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9175612, .data = 17294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9175608, .data = 9749, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9175610, .data = 15, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9175606, .data = 16788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9175604, .data = 7579, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9175600, .data = 16789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9175602, .data = 17714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54916, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 4548, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8655300, .data = 30207, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8655302, .data = 21139, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_13[] = {
		{ .addr = 0xfcc4ec, .byte = 0x4b },
		{ .addr = 0xfcc4ed, .byte = 0x91 },
		{ .addr = 0xfcc4ee, .byte = 0xf0 },
		{ .addr = 0xfcc4ef, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0xdd },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x02 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0x700232, .byte = 0xed },
		{ .addr = 0x700233, .byte = 0x54 },
		{ .addr = 0x700234, .byte = 0x61 },
		{ .addr = 0x700235, .byte = 0x63 }
};

static const SST_RamByte chk_final_ram_13[] = {
		{ .addr = 0xfcc4ec, .byte = 0x4b },
		{ .addr = 0xfcc4ed, .byte = 0x91 },
		{ .addr = 0xfcc4ee, .byte = 0xf0 },
		{ .addr = 0xfcc4ef, .byte = 0x32 },
		{ .addr = 0x8b86b8, .byte = 0xc4 },
		{ .addr = 0x8b86b9, .byte = 0xee },
		{ .addr = 0x8b86b4, .byte = 0x23 },
		{ .addr = 0x8b86b5, .byte = 0x12 },
		{ .addr = 0x8b86b6, .byte = 0x00 },
		{ .addr = 0x8b86b7, .byte = 0xfc },
		{ .addr = 0x8b86b2, .byte = 0x4b },
		{ .addr = 0x8b86b3, .byte = 0x91 },
		{ .addr = 0x8b86b0, .byte = 0x61 },
		{ .addr = 0x8b86b1, .byte = 0x5f },
		{ .addr = 0x8b86ac, .byte = 0x4b },
		{ .addr = 0x8b86ad, .byte = 0x95 },
		{ .addr = 0x8b86ae, .byte = 0x06 },
		{ .addr = 0x8b86af, .byte = 0x72 },
		{ .addr = 0x00000c, .byte = 0xdd },
		{ .addr = 0x00000d, .byte = 0x70 },
		{ .addr = 0x00000e, .byte = 0x02 },
		{ .addr = 0x00000f, .byte = 0x32 },
		{ .addr = 0x700232, .byte = 0xed },
		{ .addr = 0x700233, .byte = 0x54 },
		{ .addr = 0x700234, .byte = 0x61 },
		{ .addr = 0x700235, .byte = 0x63 }
};

static const SST_Transaction chk_transactions_13[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7496030, .data = 40560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9143992, .data = 50414, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9143988, .data = 8978, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9143990, .data = 252, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9143986, .data = 19345, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9143984, .data = 24927, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9143980, .data = 19349, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9143982, .data = 1650, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7340594, .data = 60756, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7340596, .data = 24931, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_14[] = {
		{ .addr = 0x15336a, .byte = 0x47 },
		{ .addr = 0x15336b, .byte = 0xb4 },
		{ .addr = 0x15336c, .byte = 0xb3 },
		{ .addr = 0x15336d, .byte = 0x7a },
		{ .addr = 0x15336e, .byte = 0x8d },
		{ .addr = 0x15336f, .byte = 0x7f },
		{ .addr = 0x996846, .byte = 0x20 },
		{ .addr = 0x996847, .byte = 0x61 },
		{ .addr = 0x000018, .byte = 0x9c },
		{ .addr = 0x000019, .byte = 0x00 },
		{ .addr = 0x00001a, .byte = 0x56 },
		{ .addr = 0x00001b, .byte = 0x2c },
		{ .addr = 0x00562c, .byte = 0x6c },
		{ .addr = 0x00562d, .byte = 0x3e },
		{ .addr = 0x00562e, .byte = 0xd4 },
		{ .addr = 0x00562f, .byte = 0xd0 }
};

static const SST_RamByte chk_final_ram_14[] = {
		{ .addr = 0x15336a, .byte = 0x47 },
		{ .addr = 0x15336b, .byte = 0xb4 },
		{ .addr = 0x15336c, .byte = 0xb3 },
		{ .addr = 0x15336d, .byte = 0x7a },
		{ .addr = 0x15336e, .byte = 0x8d },
		{ .addr = 0x15336f, .byte = 0x7f },
		{ .addr = 0x996846, .byte = 0x20 },
		{ .addr = 0x996847, .byte = 0x61 },
		{ .addr = 0x861fd2, .byte = 0x33 },
		{ .addr = 0x861fd3, .byte = 0x6e },
		{ .addr = 0x861fce, .byte = 0x05 },
		{ .addr = 0x861fcf, .byte = 0x08 },
		{ .addr = 0x861fd0, .byte = 0x00 },
		{ .addr = 0x861fd1, .byte = 0x15 },
		{ .addr = 0x000018, .byte = 0x9c },
		{ .addr = 0x000019, .byte = 0x00 },
		{ .addr = 0x00001a, .byte = 0x56 },
		{ .addr = 0x00001b, .byte = 0x2c },
		{ .addr = 0x00562c, .byte = 0x6c },
		{ .addr = 0x00562d, .byte = 0x3e },
		{ .addr = 0x00562e, .byte = 0xd4 },
		{ .addr = 0x00562f, .byte = 0xd0 }
};

static const SST_Transaction chk_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1389422, .data = 36223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10053702, .data = 8289, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8789970, .data = 13166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8789966, .data = 1288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8789968, .data = 21, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 39936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 22060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 22060, .data = 27710, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 22062, .data = 54480, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_15[] = {
		{ .addr = 0x6a6cc0, .byte = 0x45 },
		{ .addr = 0x6a6cc1, .byte = 0x98 },
		{ .addr = 0x6a6cc2, .byte = 0x7f },
		{ .addr = 0x6a6cc3, .byte = 0x8c },
		{ .addr = 0x00000c, .byte = 0xc0 },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0xe5 },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xcce5bc, .byte = 0xcf },
		{ .addr = 0xcce5bd, .byte = 0x9e },
		{ .addr = 0xcce5be, .byte = 0x49 },
		{ .addr = 0xcce5bf, .byte = 0x9c }
};

static const SST_RamByte chk_final_ram_15[] = {
		{ .addr = 0x6a6cc0, .byte = 0x45 },
		{ .addr = 0x6a6cc1, .byte = 0x98 },
		{ .addr = 0x6a6cc2, .byte = 0x7f },
		{ .addr = 0x6a6cc3, .byte = 0x8c },
		{ .addr = 0x50d028, .byte = 0x6c },
		{ .addr = 0x50d029, .byte = 0xc2 },
		{ .addr = 0x50d024, .byte = 0x03 },
		{ .addr = 0x50d025, .byte = 0x14 },
		{ .addr = 0x50d026, .byte = 0x00 },
		{ .addr = 0x50d027, .byte = 0x6a },
		{ .addr = 0x50d022, .byte = 0x45 },
		{ .addr = 0x50d023, .byte = 0x98 },
		{ .addr = 0x50d020, .byte = 0x8d },
		{ .addr = 0x50d021, .byte = 0xd9 },
		{ .addr = 0x50d01c, .byte = 0x45 },
		{ .addr = 0x50d01d, .byte = 0x91 },
		{ .addr = 0x50d01e, .byte = 0xe8 },
		{ .addr = 0x50d01f, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0xc0 },
		{ .addr = 0x00000d, .byte = 0xcc },
		{ .addr = 0x00000e, .byte = 0xe5 },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xcce5bc, .byte = 0xcf },
		{ .addr = 0xcce5bd, .byte = 0x9e },
		{ .addr = 0xcce5be, .byte = 0x49 },
		{ .addr = 0xcce5bf, .byte = 0x9c }
};

static const SST_Transaction chk_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9604568, .data = 35827, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5296168, .data = 27842, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5296164, .data = 788, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5296166, .data = 106, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5296162, .data = 17816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5296160, .data = 36313, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5296156, .data = 17809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5296158, .data = 59538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 49356, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13428156, .data = 53150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13428158, .data = 18844, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_16[] = {
		{ .addr = 0x935852, .byte = 0x47 },
		{ .addr = 0x935853, .byte = 0x9f },
		{ .addr = 0x935854, .byte = 0xd6 },
		{ .addr = 0x935855, .byte = 0x17 },
		{ .addr = 0x21fa90, .byte = 0x30 },
		{ .addr = 0x21fa91, .byte = 0xcb },
		{ .addr = 0x000018, .byte = 0xb8 },
		{ .addr = 0x000019, .byte = 0xdc },
		{ .addr = 0x00001a, .byte = 0xdf },
		{ .addr = 0x00001b, .byte = 0x6c },
		{ .addr = 0xdcdf6c, .byte = 0x8a },
		{ .addr = 0xdcdf6d, .byte = 0xed },
		{ .addr = 0xdcdf6e, .byte = 0xb6 },
		{ .addr = 0xdcdf6f, .byte = 0x3a }
};

static const SST_RamByte chk_final_ram_16[] = {
		{ .addr = 0x935852, .byte = 0x47 },
		{ .addr = 0x935853, .byte = 0x9f },
		{ .addr = 0x935854, .byte = 0xd6 },
		{ .addr = 0x935855, .byte = 0x17 },
		{ .addr = 0x21fa90, .byte = 0x58 },
		{ .addr = 0x21fa91, .byte = 0x54 },
		{ .addr = 0x21fa8c, .byte = 0x27 },
		{ .addr = 0x21fa8d, .byte = 0x00 },
		{ .addr = 0x21fa8e, .byte = 0x00 },
		{ .addr = 0x21fa8f, .byte = 0x93 },
		{ .addr = 0x000018, .byte = 0xb8 },
		{ .addr = 0x000019, .byte = 0xdc },
		{ .addr = 0x00001a, .byte = 0xdf },
		{ .addr = 0x00001b, .byte = 0x6c },
		{ .addr = 0xdcdf6c, .byte = 0x8a },
		{ .addr = 0xdcdf6d, .byte = 0xed },
		{ .addr = 0xdcdf6e, .byte = 0xb6 },
		{ .addr = 0xdcdf6f, .byte = 0x3a }
};

static const SST_Transaction chk_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2226832, .data = 12491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2226832, .data = 22612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2226828, .data = 9984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2226830, .data = 147, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 47324, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 57196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14475116, .data = 35565, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14475118, .data = 46650, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_17[] = {
		{ .addr = 0xa7bfac, .byte = 0x43 },
		{ .addr = 0xa7bfad, .byte = 0xb1 },
		{ .addr = 0xa7bfae, .byte = 0xcd },
		{ .addr = 0xa7bfaf, .byte = 0x99 },
		{ .addr = 0xa7bfb0, .byte = 0x6e },
		{ .addr = 0xa7bfb1, .byte = 0xb4 },
		{ .addr = 0x00000c, .byte = 0x15 },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0xbd },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0xfabd2a, .byte = 0x23 },
		{ .addr = 0xfabd2b, .byte = 0x95 },
		{ .addr = 0xfabd2c, .byte = 0x1e },
		{ .addr = 0xfabd2d, .byte = 0x41 }
};

static const SST_RamByte chk_final_ram_17[] = {
		{ .addr = 0xa7bfac, .byte = 0x43 },
		{ .addr = 0xa7bfad, .byte = 0xb1 },
		{ .addr = 0xa7bfae, .byte = 0xcd },
		{ .addr = 0xa7bfaf, .byte = 0x99 },
		{ .addr = 0xa7bfb0, .byte = 0x6e },
		{ .addr = 0xa7bfb1, .byte = 0xb4 },
		{ .addr = 0x9c2eee, .byte = 0xbf },
		{ .addr = 0x9c2eef, .byte = 0xae },
		{ .addr = 0x9c2eea, .byte = 0x26 },
		{ .addr = 0x9c2eeb, .byte = 0x13 },
		{ .addr = 0x9c2eec, .byte = 0x00 },
		{ .addr = 0x9c2eed, .byte = 0xa7 },
		{ .addr = 0x9c2ee8, .byte = 0x43 },
		{ .addr = 0x9c2ee9, .byte = 0xb1 },
		{ .addr = 0x9c2ee6, .byte = 0x6a },
		{ .addr = 0x9c2ee7, .byte = 0x65 },
		{ .addr = 0x9c2ee2, .byte = 0x43 },
		{ .addr = 0x9c2ee3, .byte = 0xb5 },
		{ .addr = 0x9c2ee4, .byte = 0xd9 },
		{ .addr = 0x9c2ee5, .byte = 0x52 },
		{ .addr = 0x00000c, .byte = 0x15 },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0xbd },
		{ .addr = 0x00000f, .byte = 0x2a },
		{ .addr = 0xfabd2a, .byte = 0x23 },
		{ .addr = 0xfabd2b, .byte = 0x95 },
		{ .addr = 0xfabd2c, .byte = 0x1e },
		{ .addr = 0xfabd2d, .byte = 0x41 }
};

static const SST_Transaction chk_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10993584, .data = 28340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5401188, .data = 9321, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10235630, .data = 49070, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10235626, .data = 9747, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10235628, .data = 167, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10235624, .data = 17329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10235622, .data = 27237, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10235618, .data = 17333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10235620, .data = 55634, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5626, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16432426, .data = 9109, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16432428, .data = 7745, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_18[] = {
		{ .addr = 0xff7d86, .byte = 0x47 },
		{ .addr = 0xff7d87, .byte = 0xac },
		{ .addr = 0xff7d88, .byte = 0xb0 },
		{ .addr = 0xff7d89, .byte = 0xbf },
		{ .addr = 0xff7d8a, .byte = 0x29 },
		{ .addr = 0xff7d8b, .byte = 0x0e },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xe5 },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0x7ce578, .byte = 0xb9 },
		{ .addr = 0x7ce579, .byte = 0xe5 },
		{ .addr = 0x7ce57a, .byte = 0x45 },
		{ .addr = 0x7ce57b, .byte = 0x2f }
};

static const SST_RamByte chk_final_ram_18[] = {
		{ .addr = 0xff7d86, .byte = 0x47 },
		{ .addr = 0xff7d87, .byte = 0xac },
		{ .addr = 0xff7d88, .byte = 0xb0 },
		{ .addr = 0xff7d89, .byte = 0xbf },
		{ .addr = 0xff7d8a, .byte = 0x29 },
		{ .addr = 0xff7d8b, .byte = 0x0e },
		{ .addr = 0x7b4626, .byte = 0x7d },
		{ .addr = 0x7b4627, .byte = 0x88 },
		{ .addr = 0x7b4622, .byte = 0x83 },
		{ .addr = 0x7b4623, .byte = 0x1b },
		{ .addr = 0x7b4624, .byte = 0x00 },
		{ .addr = 0x7b4625, .byte = 0xff },
		{ .addr = 0x7b4620, .byte = 0x47 },
		{ .addr = 0x7b4621, .byte = 0xac },
		{ .addr = 0x7b461e, .byte = 0x42 },
		{ .addr = 0x7b461f, .byte = 0xbd },
		{ .addr = 0x7b461a, .byte = 0x47 },
		{ .addr = 0x7b461b, .byte = 0xb1 },
		{ .addr = 0x7b461c, .byte = 0x45 },
		{ .addr = 0x7b461d, .byte = 0x87 },
		{ .addr = 0x00000c, .byte = 0xf5 },
		{ .addr = 0x00000d, .byte = 0x7c },
		{ .addr = 0x00000e, .byte = 0xe5 },
		{ .addr = 0x00000f, .byte = 0x78 },
		{ .addr = 0x7ce578, .byte = 0xb9 },
		{ .addr = 0x7ce579, .byte = 0xe5 },
		{ .addr = 0x7ce57a, .byte = 0x45 },
		{ .addr = 0x7ce57b, .byte = 0x2f }
};

static const SST_Transaction chk_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16743818, .data = 10510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8864444, .data = 9605, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078886, .data = 32136, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078882, .data = 33563, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078884, .data = 255, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078880, .data = 18348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078878, .data = 17085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078874, .data = 18353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8078876, .data = 17799, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 62844, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 58744, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8185208, .data = 47589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8185210, .data = 17711, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_19[] = {
		{ .addr = 0x9f68ec, .byte = 0x4f },
		{ .addr = 0x9f68ed, .byte = 0x81 },
		{ .addr = 0x9f68ee, .byte = 0x23 },
		{ .addr = 0x9f68ef, .byte = 0xc6 },
		{ .addr = 0x000018, .byte = 0x98 },
		{ .addr = 0x000019, .byte = 0xee },
		{ .addr = 0x00001a, .byte = 0x94 },
		{ .addr = 0x00001b, .byte = 0x8a },
		{ .addr = 0xee948a, .byte = 0xd2 },
		{ .addr = 0xee948b, .byte = 0xf8 },
		{ .addr = 0xee948c, .byte = 0x12 },
		{ .addr = 0xee948d, .byte = 0x60 }
};

static const SST_RamByte chk_final_ram_19[] = {
		{ .addr = 0x9f68ec, .byte = 0x4f },
		{ .addr = 0x9f68ed, .byte = 0x81 },
		{ .addr = 0x9f68ee, .byte = 0x23 },
		{ .addr = 0x9f68ef, .byte = 0xc6 },
		{ .addr = 0x8955cc, .byte = 0x68 },
		{ .addr = 0x8955cd, .byte = 0xee },
		{ .addr = 0x8955c8, .byte = 0xa4 },
		{ .addr = 0x8955c9, .byte = 0x18 },
		{ .addr = 0x8955ca, .byte = 0x00 },
		{ .addr = 0x8955cb, .byte = 0x9f },
		{ .addr = 0x000018, .byte = 0x98 },
		{ .addr = 0x000019, .byte = 0xee },
		{ .addr = 0x00001a, .byte = 0x94 },
		{ .addr = 0x00001b, .byte = 0x8a },
		{ .addr = 0xee948a, .byte = 0xd2 },
		{ .addr = 0xee948b, .byte = 0xf8 },
		{ .addr = 0xee948c, .byte = 0x12 },
		{ .addr = 0xee948d, .byte = 0x60 }
};

static const SST_Transaction chk_transactions_19[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9000396, .data = 26862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9000392, .data = 42008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9000394, .data = 159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 39150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 38026, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15635594, .data = 54008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15635596, .data = 4704, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_20[] = {
		{ .addr = 0x23253e, .byte = 0x4b },
		{ .addr = 0x23253f, .byte = 0x84 },
		{ .addr = 0x232540, .byte = 0xa3 },
		{ .addr = 0x232541, .byte = 0xa7 },
		{ .addr = 0x000018, .byte = 0xb6 },
		{ .addr = 0x000019, .byte = 0xd8 },
		{ .addr = 0x00001a, .byte = 0xb2 },
		{ .addr = 0x00001b, .byte = 0x10 },
		{ .addr = 0xd8b210, .byte = 0xfa },
		{ .addr = 0xd8b211, .byte = 0xbb },
		{ .addr = 0xd8b212, .byte = 0x44 },
		{ .addr = 0xd8b213, .byte = 0xe9 }
};

static const SST_RamByte chk_final_ram_20[] = {
		{ .addr = 0x23253e, .byte = 0x4b },
		{ .addr = 0x23253f, .byte = 0x84 },
		{ .addr = 0x232540, .byte = 0xa3 },
		{ .addr = 0x232541, .byte = 0xa7 },
		{ .addr = 0x690f62, .byte = 0x25 },
		{ .addr = 0x690f63, .byte = 0x40 },
		{ .addr = 0x690f5e, .byte = 0x03 },
		{ .addr = 0x690f5f, .byte = 0x00 },
		{ .addr = 0x690f60, .byte = 0x00 },
		{ .addr = 0x690f61, .byte = 0x23 },
		{ .addr = 0x000018, .byte = 0xb6 },
		{ .addr = 0x000019, .byte = 0xd8 },
		{ .addr = 0x00001a, .byte = 0xb2 },
		{ .addr = 0x00001b, .byte = 0x10 },
		{ .addr = 0xd8b210, .byte = 0xfa },
		{ .addr = 0xd8b211, .byte = 0xbb },
		{ .addr = 0xd8b212, .byte = 0x44 },
		{ .addr = 0xd8b213, .byte = 0xe9 }
};

static const SST_Transaction chk_transactions_20[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6885218, .data = 9536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6885214, .data = 768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6885216, .data = 35, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 46808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 45584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14201360, .data = 64187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14201362, .data = 17641, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_21[] = {
		{ .addr = 0xd81b58, .byte = 0x47 },
		{ .addr = 0xd81b59, .byte = 0xa4 },
		{ .addr = 0xd81b5a, .byte = 0xd0 },
		{ .addr = 0xd81b5b, .byte = 0xc7 },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0x63 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xf0635a, .byte = 0x3c },
		{ .addr = 0xf0635b, .byte = 0xa4 },
		{ .addr = 0xf0635c, .byte = 0xf1 },
		{ .addr = 0xf0635d, .byte = 0x2e }
};

static const SST_RamByte chk_final_ram_21[] = {
		{ .addr = 0xd81b58, .byte = 0x47 },
		{ .addr = 0xd81b59, .byte = 0xa4 },
		{ .addr = 0xd81b5a, .byte = 0xd0 },
		{ .addr = 0xd81b5b, .byte = 0xc7 },
		{ .addr = 0xd61288, .byte = 0x1b },
		{ .addr = 0xd61289, .byte = 0x5c },
		{ .addr = 0xd61284, .byte = 0x84 },
		{ .addr = 0xd61285, .byte = 0x01 },
		{ .addr = 0xd61286, .byte = 0x00 },
		{ .addr = 0xd61287, .byte = 0xd8 },
		{ .addr = 0xd61282, .byte = 0x47 },
		{ .addr = 0xd61283, .byte = 0xa4 },
		{ .addr = 0xd61280, .byte = 0xfe },
		{ .addr = 0xd61281, .byte = 0x23 },
		{ .addr = 0xd6127c, .byte = 0x47 },
		{ .addr = 0xd6127d, .byte = 0xb1 },
		{ .addr = 0xd6127e, .byte = 0xa9 },
		{ .addr = 0xd6127f, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0x1b },
		{ .addr = 0x00000d, .byte = 0xf0 },
		{ .addr = 0x00000e, .byte = 0x63 },
		{ .addr = 0x00000f, .byte = 0x5a },
		{ .addr = 0xf0635a, .byte = 0x3c },
		{ .addr = 0xf0635b, .byte = 0xa4 },
		{ .addr = 0xf0635c, .byte = 0xf1 },
		{ .addr = 0xf0635d, .byte = 0x2e }
};

static const SST_Transaction chk_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3341858, .data = 47490, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14029448, .data = 7004, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14029444, .data = 33793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14029446, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14029442, .data = 18340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14029440, .data = 65059, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14029436, .data = 18353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14029438, .data = 43314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 7152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25434, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15754074, .data = 15524, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15754076, .data = 61742, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_22[] = {
		{ .addr = 0xae01b6, .byte = 0x4b },
		{ .addr = 0xae01b7, .byte = 0xaf },
		{ .addr = 0xae01b8, .byte = 0x4d },
		{ .addr = 0xae01b9, .byte = 0xcb },
		{ .addr = 0xae01ba, .byte = 0x1c },
		{ .addr = 0xae01bb, .byte = 0x9d },
		{ .addr = 0x00000c, .byte = 0x6f },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0xa6 },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x34a6ca, .byte = 0xda },
		{ .addr = 0x34a6cb, .byte = 0x4a },
		{ .addr = 0x34a6cc, .byte = 0x31 },
		{ .addr = 0x34a6cd, .byte = 0xb8 }
};

static const SST_RamByte chk_final_ram_22[] = {
		{ .addr = 0xae01b6, .byte = 0x4b },
		{ .addr = 0xae01b7, .byte = 0xaf },
		{ .addr = 0xae01b8, .byte = 0x4d },
		{ .addr = 0xae01b9, .byte = 0xcb },
		{ .addr = 0xae01ba, .byte = 0x1c },
		{ .addr = 0xae01bb, .byte = 0x9d },
		{ .addr = 0xf76cda, .byte = 0x01 },
		{ .addr = 0xf76cdb, .byte = 0xb8 },
		{ .addr = 0xf76cd6, .byte = 0x07 },
		{ .addr = 0xf76cd7, .byte = 0x16 },
		{ .addr = 0xf76cd8, .byte = 0x00 },
		{ .addr = 0xf76cd9, .byte = 0xae },
		{ .addr = 0xf76cd4, .byte = 0x4b },
		{ .addr = 0xf76cd5, .byte = 0xaf },
		{ .addr = 0xf76cd2, .byte = 0x7e },
		{ .addr = 0xf76cd3, .byte = 0x0b },
		{ .addr = 0xf76cce, .byte = 0x4b },
		{ .addr = 0xf76ccf, .byte = 0xb1 },
		{ .addr = 0xf76cd0, .byte = 0x00 },
		{ .addr = 0xf76cd1, .byte = 0xa6 },
		{ .addr = 0x00000c, .byte = 0x6f },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0xa6 },
		{ .addr = 0x00000f, .byte = 0xca },
		{ .addr = 0x34a6ca, .byte = 0xda },
		{ .addr = 0x34a6cb, .byte = 0x4a },
		{ .addr = 0x34a6cc, .byte = 0x31 },
		{ .addr = 0x34a6cd, .byte = 0xb8 }
};

static const SST_Transaction chk_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11403706, .data = 7325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10911242, .data = 6390, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215258, .data = 440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215254, .data = 1814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215256, .data = 174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215252, .data = 19375, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215250, .data = 32267, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215246, .data = 19377, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16215248, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 28468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42698, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3450570, .data = 55882, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3450572, .data = 12728, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_23[] = {
		{ .addr = 0xdfa0be, .byte = 0x45 },
		{ .addr = 0xdfa0bf, .byte = 0x83 },
		{ .addr = 0xdfa0c0, .byte = 0x50 },
		{ .addr = 0xdfa0c1, .byte = 0xeb },
		{ .addr = 0x000018, .byte = 0x7c },
		{ .addr = 0x000019, .byte = 0x4c },
		{ .addr = 0x00001a, .byte = 0x63 },
		{ .addr = 0x00001b, .byte = 0xe2 },
		{ .addr = 0x4c63e2, .byte = 0x14 },
		{ .addr = 0x4c63e3, .byte = 0x43 },
		{ .addr = 0x4c63e4, .byte = 0xc1 },
		{ .addr = 0x4c63e5, .byte = 0x21 }
};

static const SST_RamByte chk_final_ram_23[] = {
		{ .addr = 0xdfa0be, .byte = 0x45 },
		{ .addr = 0xdfa0bf, .byte = 0x83 },
		{ .addr = 0xdfa0c0, .byte = 0x50 },
		{ .addr = 0xdfa0c1, .byte = 0xeb },
		{ .addr = 0xdb600a, .byte = 0xa0 },
		{ .addr = 0xdb600b, .byte = 0xc0 },
		{ .addr = 0xdb6006, .byte = 0x83 },
		{ .addr = 0xdb6007, .byte = 0x18 },
		{ .addr = 0xdb6008, .byte = 0x00 },
		{ .addr = 0xdb6009, .byte = 0xdf },
		{ .addr = 0x000018, .byte = 0x7c },
		{ .addr = 0x000019, .byte = 0x4c },
		{ .addr = 0x00001a, .byte = 0x63 },
		{ .addr = 0x00001b, .byte = 0xe2 },
		{ .addr = 0x4c63e2, .byte = 0x14 },
		{ .addr = 0x4c63e3, .byte = 0x43 },
		{ .addr = 0x4c63e4, .byte = 0xc1 },
		{ .addr = 0x4c63e5, .byte = 0x21 }
};

static const SST_Transaction chk_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14376970, .data = 41152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14376966, .data = 33560, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14376968, .data = 223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 31820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 25570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5006306, .data = 5187, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5006308, .data = 49441, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_24[] = {
		{ .addr = 0x09dad0, .byte = 0x4b },
		{ .addr = 0x09dad1, .byte = 0x86 },
		{ .addr = 0x09dad2, .byte = 0x28 },
		{ .addr = 0x09dad3, .byte = 0x55 },
		{ .addr = 0x000018, .byte = 0xdc },
		{ .addr = 0x000019, .byte = 0xb8 },
		{ .addr = 0x00001a, .byte = 0x0a },
		{ .addr = 0x00001b, .byte = 0x3e },
		{ .addr = 0xb80a3e, .byte = 0xe8 },
		{ .addr = 0xb80a3f, .byte = 0xd5 },
		{ .addr = 0xb80a40, .byte = 0x6b },
		{ .addr = 0xb80a41, .byte = 0x3b }
};

static const SST_RamByte chk_final_ram_24[] = {
		{ .addr = 0x09dad0, .byte = 0x4b },
		{ .addr = 0x09dad1, .byte = 0x86 },
		{ .addr = 0x09dad2, .byte = 0x28 },
		{ .addr = 0x09dad3, .byte = 0x55 },
		{ .addr = 0x76d734, .byte = 0xda },
		{ .addr = 0x76d735, .byte = 0xd2 },
		{ .addr = 0x76d730, .byte = 0x02 },
		{ .addr = 0x76d731, .byte = 0x18 },
		{ .addr = 0x76d732, .byte = 0x00 },
		{ .addr = 0x76d733, .byte = 0x09 },
		{ .addr = 0x000018, .byte = 0xdc },
		{ .addr = 0x000019, .byte = 0xb8 },
		{ .addr = 0x00001a, .byte = 0x0a },
		{ .addr = 0x00001b, .byte = 0x3e },
		{ .addr = 0xb80a3e, .byte = 0xe8 },
		{ .addr = 0xb80a3f, .byte = 0xd5 },
		{ .addr = 0xb80a40, .byte = 0x6b },
		{ .addr = 0xb80a41, .byte = 0x3b }
};

static const SST_Transaction chk_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7788340, .data = 56018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7788336, .data = 536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7788338, .data = 9, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 56504, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 2622, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12061246, .data = 59605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12061248, .data = 27451, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_25[] = {
		{ .addr = 0x74c8e2, .byte = 0x4b },
		{ .addr = 0x74c8e3, .byte = 0x82 },
		{ .addr = 0x74c8e4, .byte = 0x64 },
		{ .addr = 0x74c8e5, .byte = 0x10 },
		{ .addr = 0x000018, .byte = 0x23 },
		{ .addr = 0x000019, .byte = 0x56 },
		{ .addr = 0x00001a, .byte = 0x8f },
		{ .addr = 0x00001b, .byte = 0x0c },
		{ .addr = 0x568f0c, .byte = 0x5f },
		{ .addr = 0x568f0d, .byte = 0xa6 },
		{ .addr = 0x568f0e, .byte = 0xa6 },
		{ .addr = 0x568f0f, .byte = 0x43 }
};

static const SST_RamByte chk_final_ram_25[] = {
		{ .addr = 0x74c8e2, .byte = 0x4b },
		{ .addr = 0x74c8e3, .byte = 0x82 },
		{ .addr = 0x74c8e4, .byte = 0x64 },
		{ .addr = 0x74c8e5, .byte = 0x10 },
		{ .addr = 0xbcf260, .byte = 0xc8 },
		{ .addr = 0xbcf261, .byte = 0xe4 },
		{ .addr = 0xbcf25c, .byte = 0x20 },
		{ .addr = 0xbcf25d, .byte = 0x00 },
		{ .addr = 0xbcf25e, .byte = 0x00 },
		{ .addr = 0xbcf25f, .byte = 0x74 },
		{ .addr = 0x000018, .byte = 0x23 },
		{ .addr = 0x000019, .byte = 0x56 },
		{ .addr = 0x00001a, .byte = 0x8f },
		{ .addr = 0x00001b, .byte = 0x0c },
		{ .addr = 0x568f0c, .byte = 0x5f },
		{ .addr = 0x568f0d, .byte = 0xa6 },
		{ .addr = 0x568f0e, .byte = 0xa6 },
		{ .addr = 0x568f0f, .byte = 0x43 }
};

static const SST_Transaction chk_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12382816, .data = 51428, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12382812, .data = 8192, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12382814, .data = 116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 9046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 36620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5672716, .data = 24486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5672718, .data = 42563, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_26[] = {
		{ .addr = 0x41f71c, .byte = 0x47 },
		{ .addr = 0x41f71d, .byte = 0xb5 },
		{ .addr = 0x41f71e, .byte = 0xe6 },
		{ .addr = 0x41f71f, .byte = 0xf9 },
		{ .addr = 0x41f720, .byte = 0xe8 },
		{ .addr = 0x41f721, .byte = 0x41 },
		{ .addr = 0x00000c, .byte = 0x8a },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x7a1b2c, .byte = 0x9e },
		{ .addr = 0x7a1b2d, .byte = 0x2c },
		{ .addr = 0x7a1b2e, .byte = 0x33 },
		{ .addr = 0x7a1b2f, .byte = 0x0d }
};

static const SST_RamByte chk_final_ram_26[] = {
		{ .addr = 0x41f71c, .byte = 0x47 },
		{ .addr = 0x41f71d, .byte = 0xb5 },
		{ .addr = 0x41f71e, .byte = 0xe6 },
		{ .addr = 0x41f71f, .byte = 0xf9 },
		{ .addr = 0x41f720, .byte = 0xe8 },
		{ .addr = 0x41f721, .byte = 0x41 },
		{ .addr = 0x207362, .byte = 0xf7 },
		{ .addr = 0x207363, .byte = 0x1e },
		{ .addr = 0x20735e, .byte = 0x81 },
		{ .addr = 0x20735f, .byte = 0x10 },
		{ .addr = 0x207360, .byte = 0x00 },
		{ .addr = 0x207361, .byte = 0x41 },
		{ .addr = 0x20735c, .byte = 0x47 },
		{ .addr = 0x20735d, .byte = 0xb5 },
		{ .addr = 0x20735a, .byte = 0x3a },
		{ .addr = 0x20735b, .byte = 0xf7 },
		{ .addr = 0x207356, .byte = 0x47 },
		{ .addr = 0x207357, .byte = 0xb1 },
		{ .addr = 0x207358, .byte = 0x42 },
		{ .addr = 0x207359, .byte = 0xa1 },
		{ .addr = 0x00000c, .byte = 0x8a },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0x1b },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x7a1b2c, .byte = 0x9e },
		{ .addr = 0x7a1b2d, .byte = 0x2c },
		{ .addr = 0x7a1b2e, .byte = 0x33 },
		{ .addr = 0x7a1b2f, .byte = 0x0d }
};

static const SST_Transaction chk_transactions_26[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4323104, .data = 59457, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10566390, .data = 27495, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2126690, .data = 63262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2126686, .data = 33040, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2126688, .data = 65, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2126684, .data = 18357, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2126682, .data = 15095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2126678, .data = 18353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2126680, .data = 17057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35450, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 6956, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8002348, .data = 40492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8002350, .data = 13069, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_27[] = {
		{ .addr = 0x3d558e, .byte = 0x4b },
		{ .addr = 0x3d558f, .byte = 0x81 },
		{ .addr = 0x3d5590, .byte = 0x02 },
		{ .addr = 0x3d5591, .byte = 0x07 },
		{ .addr = 0x000018, .byte = 0xaf },
		{ .addr = 0x000019, .byte = 0x56 },
		{ .addr = 0x00001a, .byte = 0x6e },
		{ .addr = 0x00001b, .byte = 0x06 },
		{ .addr = 0x566e06, .byte = 0xea },
		{ .addr = 0x566e07, .byte = 0x1a },
		{ .addr = 0x566e08, .byte = 0x6e },
		{ .addr = 0x566e09, .byte = 0x5a }
};

static const SST_RamByte chk_final_ram_27[] = {
		{ .addr = 0x3d558e, .byte = 0x4b },
		{ .addr = 0x3d558f, .byte = 0x81 },
		{ .addr = 0x3d5590, .byte = 0x02 },
		{ .addr = 0x3d5591, .byte = 0x07 },
		{ .addr = 0xa72942, .byte = 0x55 },
		{ .addr = 0xa72943, .byte = 0x90 },
		{ .addr = 0xa7293e, .byte = 0x00 },
		{ .addr = 0xa7293f, .byte = 0x08 },
		{ .addr = 0xa72940, .byte = 0x00 },
		{ .addr = 0xa72941, .byte = 0x3d },
		{ .addr = 0x000018, .byte = 0xaf },
		{ .addr = 0x000019, .byte = 0x56 },
		{ .addr = 0x00001a, .byte = 0x6e },
		{ .addr = 0x00001b, .byte = 0x06 },
		{ .addr = 0x566e06, .byte = 0xea },
		{ .addr = 0x566e07, .byte = 0x1a },
		{ .addr = 0x566e08, .byte = 0x6e },
		{ .addr = 0x566e09, .byte = 0x5a }
};

static const SST_Transaction chk_transactions_27[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10955074, .data = 21904, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10955070, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10955072, .data = 61, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 44886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 28166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5664262, .data = 59930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5664264, .data = 28250, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_28[] = {
		{ .addr = 0xc28dd8, .byte = 0x43 },
		{ .addr = 0xc28dd9, .byte = 0x85 },
		{ .addr = 0xc28dda, .byte = 0x12 },
		{ .addr = 0xc28ddb, .byte = 0x4b },
		{ .addr = 0x000018, .byte = 0x1a },
		{ .addr = 0x000019, .byte = 0xca },
		{ .addr = 0x00001a, .byte = 0x71 },
		{ .addr = 0x00001b, .byte = 0xfc },
		{ .addr = 0xca71fc, .byte = 0x07 },
		{ .addr = 0xca71fd, .byte = 0xd1 },
		{ .addr = 0xca71fe, .byte = 0xbb },
		{ .addr = 0xca71ff, .byte = 0x5d }
};

static const SST_RamByte chk_final_ram_28[] = {
		{ .addr = 0xc28dd8, .byte = 0x43 },
		{ .addr = 0xc28dd9, .byte = 0x85 },
		{ .addr = 0xc28dda, .byte = 0x12 },
		{ .addr = 0xc28ddb, .byte = 0x4b },
		{ .addr = 0x764ffa, .byte = 0x8d },
		{ .addr = 0x764ffb, .byte = 0xda },
		{ .addr = 0x764ff6, .byte = 0x22 },
		{ .addr = 0x764ff7, .byte = 0x00 },
		{ .addr = 0x764ff8, .byte = 0x00 },
		{ .addr = 0x764ff9, .byte = 0xc2 },
		{ .addr = 0x000018, .byte = 0x1a },
		{ .addr = 0x000019, .byte = 0xca },
		{ .addr = 0x00001a, .byte = 0x71 },
		{ .addr = 0x00001b, .byte = 0xfc },
		{ .addr = 0xca71fc, .byte = 0x07 },
		{ .addr = 0xca71fd, .byte = 0xd1 },
		{ .addr = 0xca71fe, .byte = 0xbb },
		{ .addr = 0xca71ff, .byte = 0x5d }
};

static const SST_Transaction chk_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7753722, .data = 36314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7753718, .data = 8704, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7753720, .data = 194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 6858, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 29180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13267452, .data = 2001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13267454, .data = 47965, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_29[] = {
		{ .addr = 0x1aa356, .byte = 0x4f },
		{ .addr = 0x1aa357, .byte = 0x95 },
		{ .addr = 0x1aa358, .byte = 0xab },
		{ .addr = 0x1aa359, .byte = 0xcd },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0x82 },
		{ .addr = 0x00000e, .byte = 0x37 },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x82372c, .byte = 0x79 },
		{ .addr = 0x82372d, .byte = 0x45 },
		{ .addr = 0x82372e, .byte = 0x27 },
		{ .addr = 0x82372f, .byte = 0xdc }
};

static const SST_RamByte chk_final_ram_29[] = {
		{ .addr = 0x1aa356, .byte = 0x4f },
		{ .addr = 0x1aa357, .byte = 0x95 },
		{ .addr = 0x1aa358, .byte = 0xab },
		{ .addr = 0x1aa359, .byte = 0xcd },
		{ .addr = 0x4910fe, .byte = 0xa3 },
		{ .addr = 0x4910ff, .byte = 0x58 },
		{ .addr = 0x4910fa, .byte = 0x03 },
		{ .addr = 0x4910fb, .byte = 0x10 },
		{ .addr = 0x4910fc, .byte = 0x00 },
		{ .addr = 0x4910fd, .byte = 0x1a },
		{ .addr = 0x4910f8, .byte = 0x4f },
		{ .addr = 0x4910f9, .byte = 0x95 },
		{ .addr = 0x4910f6, .byte = 0xed },
		{ .addr = 0x4910f7, .byte = 0xb5 },
		{ .addr = 0x4910f2, .byte = 0x4f },
		{ .addr = 0x4910f3, .byte = 0x91 },
		{ .addr = 0x4910f4, .byte = 0x7a },
		{ .addr = 0x4910f5, .byte = 0xfb },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0x82 },
		{ .addr = 0x00000e, .byte = 0x37 },
		{ .addr = 0x00000f, .byte = 0x2c },
		{ .addr = 0x82372c, .byte = 0x79 },
		{ .addr = 0x82372d, .byte = 0x45 },
		{ .addr = 0x82372e, .byte = 0x27 },
		{ .addr = 0x82372f, .byte = 0xdc }
};

static const SST_Transaction chk_transactions_29[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16510388, .data = 22017, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4788478, .data = 41816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4788474, .data = 784, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4788476, .data = 26, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4788472, .data = 20373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4788470, .data = 60853, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4788466, .data = 20369, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4788468, .data = 31483, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8322, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8533804, .data = 31045, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8533806, .data = 10204, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_30[] = {
		{ .addr = 0xd92fd8, .byte = 0x4d },
		{ .addr = 0xd92fd9, .byte = 0x90 },
		{ .addr = 0xd92fda, .byte = 0x86 },
		{ .addr = 0xd92fdb, .byte = 0xfd },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0xa6 },
		{ .addr = 0xb4a4a6, .byte = 0x5e },
		{ .addr = 0xb4a4a7, .byte = 0x3d },
		{ .addr = 0xb4a4a8, .byte = 0xa6 },
		{ .addr = 0xb4a4a9, .byte = 0x5d }
};

static const SST_RamByte chk_final_ram_30[] = {
		{ .addr = 0xd92fd8, .byte = 0x4d },
		{ .addr = 0xd92fd9, .byte = 0x90 },
		{ .addr = 0xd92fda, .byte = 0x86 },
		{ .addr = 0xd92fdb, .byte = 0xfd },
		{ .addr = 0x69c38a, .byte = 0x2f },
		{ .addr = 0x69c38b, .byte = 0xda },
		{ .addr = 0x69c386, .byte = 0xa5 },
		{ .addr = 0x69c387, .byte = 0x00 },
		{ .addr = 0x69c388, .byte = 0x00 },
		{ .addr = 0x69c389, .byte = 0xd9 },
		{ .addr = 0x69c384, .byte = 0x4d },
		{ .addr = 0x69c385, .byte = 0x90 },
		{ .addr = 0x69c382, .byte = 0x39 },
		{ .addr = 0x69c383, .byte = 0x5d },
		{ .addr = 0x69c37e, .byte = 0x4d },
		{ .addr = 0x69c37f, .byte = 0x95 },
		{ .addr = 0x69c380, .byte = 0x13 },
		{ .addr = 0x69c381, .byte = 0xfb },
		{ .addr = 0x00000c, .byte = 0x20 },
		{ .addr = 0x00000d, .byte = 0xb4 },
		{ .addr = 0x00000e, .byte = 0xa4 },
		{ .addr = 0x00000f, .byte = 0xa6 },
		{ .addr = 0xb4a4a6, .byte = 0x5e },
		{ .addr = 0xb4a4a7, .byte = 0x3d },
		{ .addr = 0xb4a4a8, .byte = 0xa6 },
		{ .addr = 0xb4a4a9, .byte = 0x5d }
};

static const SST_Transaction chk_transactions_30[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16464220, .data = 7655, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6931338, .data = 12250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6931334, .data = 42240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6931336, .data = 217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6931332, .data = 19856, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6931330, .data = 14685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6931326, .data = 19861, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6931328, .data = 5115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 8372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 42150, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11838630, .data = 24125, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11838632, .data = 42589, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte chk_initial_ram_31[] = {
		{ .addr = 0xd076e8, .byte = 0x4d },
		{ .addr = 0xd076e9, .byte = 0x90 },
		{ .addr = 0xd076ea, .byte = 0x35 },
		{ .addr = 0xd076eb, .byte = 0x81 },
		{ .addr = 0xaabafa, .byte = 0x99 },
		{ .addr = 0xaabafb, .byte = 0xa9 },
		{ .addr = 0x000018, .byte = 0x4e },
		{ .addr = 0x000019, .byte = 0x06 },
		{ .addr = 0x00001a, .byte = 0xb5 },
		{ .addr = 0x00001b, .byte = 0x02 },
		{ .addr = 0x06b502, .byte = 0x4e },
		{ .addr = 0x06b503, .byte = 0x1e },
		{ .addr = 0x06b504, .byte = 0xea },
		{ .addr = 0x06b505, .byte = 0x3f }
};

static const SST_RamByte chk_final_ram_31[] = {
		{ .addr = 0xd076e8, .byte = 0x4d },
		{ .addr = 0xd076e9, .byte = 0x90 },
		{ .addr = 0xd076ea, .byte = 0x35 },
		{ .addr = 0xd076eb, .byte = 0x81 },
		{ .addr = 0xaabafa, .byte = 0x99 },
		{ .addr = 0xaabafb, .byte = 0xa9 },
		{ .addr = 0x1c11d8, .byte = 0x76 },
		{ .addr = 0x1c11d9, .byte = 0xea },
		{ .addr = 0x1c11d4, .byte = 0xa3 },
		{ .addr = 0x1c11d5, .byte = 0x18 },
		{ .addr = 0x1c11d6, .byte = 0x00 },
		{ .addr = 0x1c11d7, .byte = 0xd0 },
		{ .addr = 0x000018, .byte = 0x4e },
		{ .addr = 0x000019, .byte = 0x06 },
		{ .addr = 0x00001a, .byte = 0xb5 },
		{ .addr = 0x00001b, .byte = 0x02 },
		{ .addr = 0x06b502, .byte = 0x4e },
		{ .addr = 0x06b503, .byte = 0x1e },
		{ .addr = 0x06b504, .byte = 0xea },
		{ .addr = 0x06b505, .byte = 0x3f }
};

static const SST_Transaction chk_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11188986, .data = 39337, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1839576, .data = 30442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1839572, .data = 41752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1839574, .data = 208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 24, .data = 19974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 26, .data = 46338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 439554, .data = 19998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 439556, .data = 59967, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase chk[] = {
	{
		.name = "000 CHK D2, D6 4d82",
		.initial = {
			.regs = {
				1093139940, 3229618212, 2916979269, 30567346, 377616289, 3682892879, 1066143283, 4054575747, 2332478783, 1687551685, 4067523350, 1440976318, 2531329268, 1056890715, 2838602126, 8875980, 1000916, 533, 16476360
			},
			.prefetch0 = 19842,
			.prefetch1 = 36948,
			.ram = chk_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1093139940, 3229618212, 2916979269, 30567346, 377616289, 3682892879, 1066143283, 4054575747, 2332478783, 1687551685, 4067523350, 1440976318, 2531329268, 1056890715, 2838602126, 8875980, 1000910, 8720, 509015024
			},
			.prefetch0 = 62736,
			.prefetch1 = 7052,
			.ram = chk_final_ram_0,
			.ram_len = 18,
		},
		.transactions = chk_transactions_0,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "001 CHK -(A7), D5 4ba7",
		.initial = {
			.regs = {
				1388865005, 914348983, 539888286, 3361804535, 767032238, 2370232027, 287907444, 2162468330, 3565395433, 4249562985, 2801617642, 2969197689, 433405670, 556954343, 303643779, 12016180, 7585358, 8733, 7854610
			},
			.prefetch0 = 19367,
			.prefetch1 = 48090,
			.ram = chk_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1388865005, 914348983, 539888286, 3361804535, 767032238, 2370232027, 287907444, 2162468330, 3565395433, 4249562985, 2801617642, 2969197689, 433405670, 556954343, 303643779, 12016180, 7585350, 8728, 3488365198
			},
			.prefetch0 = 44259,
			.prefetch1 = 45106,
			.ram = chk_final_ram_1,
			.ram_len = 20,
		},
		.transactions = chk_transactions_1,
		.transactions_len = 11,
		.lenght = 44,
	},
	{
		.name = "002 CHK (A2)+, D1 439a",
		.initial = {
			.regs = {
				605507055, 424677226, 2586940745, 518807077, 1671577804, 1078425282, 273613530, 659391448, 1889158199, 1193395196, 3231879456, 2502876112, 2648027250, 875749261, 1381866855, 16449516, 1469414, 34582, 12136346
			},
			.prefetch0 = 17306,
			.prefetch1 = 22098,
			.ram = chk_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				605507055, 424677226, 2586940745, 518807077, 1671577804, 1078425282, 273613530, 659391448, 1889158199, 1193395196, 3231879458, 2502876112, 2648027250, 875749261, 1381866855, 16449516, 1469408, 10000, 2341605650
			},
			.prefetch0 = 61433,
			.prefetch1 = 31748,
			.ram = chk_final_ram_2,
			.ram_len = 20,
		},
		.transactions = chk_transactions_2,
		.transactions_len = 10,
		.lenght = 42,
	},
	{
		.name = "003 CHK -(A1), D1 43a1",
		.initial = {
			.regs = {
				2984187738, 671421759, 1902384941, 369577167, 3772982571, 991642450, 584895900, 3800779892, 4075071250, 1281705423, 3628547864, 1476520913, 350706630, 3185007734, 1528443501, 8633702, 11537588, 8961, 4438536
			},
			.prefetch0 = 17313,
			.prefetch1 = 30929,
			.ram = chk_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2984187738, 671421759, 1902384941, 369577167, 3772982571, 991642450, 584895900, 3800779892, 4075071250, 1281705421, 3628547864, 1476520913, 350706630, 3185007734, 1528443501, 8633702, 11537574, 8961, 987235882
			},
			.prefetch0 = 3144,
			.prefetch1 = 45437,
			.ram = chk_final_ram_3,
			.ram_len = 26,
		},
		.transactions = chk_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 CHK -(A4), D7 4fa4",
		.initial = {
			.regs = {
				2986299972, 2014910225, 3829779759, 1692131658, 2721105096, 957676491, 3090586284, 4244797609, 3772366298, 630524214, 2318726716, 1504763862, 471568070, 2153194210, 1523642257, 3619442, 1982728, 41742, 6096124
			},
			.prefetch0 = 20388,
			.prefetch1 = 19721,
			.ram = chk_initial_ram_4,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2986299972, 2014910225, 3829779759, 1692131658, 2721105096, 957676491, 3090586284, 4244797609, 3772366298, 630524214, 2318726716, 1504763862, 471568068, 2153194210, 1523642257, 3619442, 1982722, 8960, 2157991470
			},
			.prefetch0 = 2015,
			.prefetch1 = 34393,
			.ram = chk_final_ram_4,
			.ram_len = 20,
		},
		.transactions = chk_transactions_4,
		.transactions_len = 11,
		.lenght = 44,
	},
	{
		.name = "005 CHK (A2), D4 4992",
		.initial = {
			.regs = {
				3671083246, 1985796058, 3552504637, 342260914, 616495419, 3076027340, 2583087619, 2250127211, 113220289, 281896494, 1648416034, 712097853, 890847238, 2974564400, 3034337816, 3751494, 13388014, 8456, 7659816
			},
			.prefetch0 = 18834,
			.prefetch1 = 61367,
			.ram = chk_initial_ram_5,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3671083246, 1985796058, 3552504637, 342260914, 616495419, 3076027340, 2583087619, 2250127211, 113220289, 281896494, 1648416034, 712097853, 890847238, 2974564400, 3034337816, 3751494, 13388008, 8456, 2547658646
			},
			.prefetch0 = 34170,
			.prefetch1 = 47497,
			.ram = chk_final_ram_5,
			.ram_len = 20,
		},
		.transactions = chk_transactions_5,
		.transactions_len = 10,
		.lenght = 44,
	},
	{
		.name = "006 CHK -(A3), D4 49a3",
		.initial = {
			.regs = {
				3409833388, 2014860267, 3386925447, 4292964830, 3920786769, 1857775202, 1426095907, 22209700, 2950093701, 824016423, 3055082894, 2074720123, 1669451865, 544222607, 256307475, 8865538, 3762350, 781, 5744072
			},
			.prefetch0 = 18851,
			.prefetch1 = 13666,
			.ram = chk_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3409833388, 2014860267, 3386925447, 4292964830, 3920786769, 1857775202, 1426095907, 22209700, 2950093701, 824016423, 3055082894, 2074720121, 1669451865, 544222607, 256307475, 8865538, 3762336, 8973, 3561631562
			},
			.prefetch0 = 28669,
			.prefetch1 = 25921,
			.ram = chk_final_ram_6,
			.ram_len = 26,
		},
		.transactions = chk_transactions_6,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "007 CHK (d16, A2), D2 45aa",
		.initial = {
			.regs = {
				3486396491, 439518929, 3864305238, 2805269831, 361331926, 4044608831, 2598625555, 98506967, 3911050153, 3664157901, 1672255473, 3172214141, 3517160364, 1685852703, 755316523, 4474612, 13821590, 1544, 7017246
			},
			.prefetch0 = 17834,
			.prefetch1 = 32266,
			.ram = chk_initial_ram_7,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3486396491, 439518929, 3864305238, 2805269831, 361331926, 4044608831, 2598625555, 98506967, 3911050153, 3664157901, 1672255473, 3172214141, 3517160364, 1685852703, 755316523, 4474612, 13821576, 9736, 3702316542
			},
			.prefetch0 = 6918,
			.prefetch1 = 22230,
			.ram = chk_final_ram_7,
			.ram_len = 28,
		},
		.transactions = chk_transactions_7,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "008 CHK (d16, A4), D6 4dac",
		.initial = {
			.regs = {
				2860557396, 1906953244, 298773679, 735879883, 741207960, 3931851589, 712382061, 3508921915, 1872203379, 1763337162, 825694938, 2317885000, 202943578, 4034985459, 3579180922, 6738722, 392132, 1, 15043494
			},
			.prefetch0 = 19884,
			.prefetch1 = 56899,
			.ram = chk_initial_ram_8,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2860557396, 1906953244, 298773679, 735879883, 741207960, 3931851589, 712382061, 3508921915, 1872203379, 1763337162, 825694938, 2317885000, 202943578, 4034985459, 3579180922, 6738722, 392118, 8193, 205278220
			},
			.prefetch0 = 13796,
			.prefetch1 = 64750,
			.ram = chk_final_ram_8,
			.ram_len = 28,
		},
		.transactions = chk_transactions_8,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "009 CHK (A5)+, D4 499d",
		.initial = {
			.regs = {
				2146720960, 880340843, 1153039003, 2512875417, 4189795874, 3992519230, 3408688794, 3002025176, 3545643925, 1775749144, 4207129063, 1005182791, 3236112779, 3156456748, 1680585139, 3864068, 5706694, 33304, 8204686
			},
			.prefetch0 = 18845,
			.prefetch1 = 63669,
			.ram = chk_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2146720960, 880340843, 1153039003, 2512875417, 4189795874, 3992519230, 3408688794, 3002025176, 3545643925, 1775749144, 4207129063, 1005182791, 3236112779, 3156456750, 1680585139, 3864068, 5706688, 8720, 2366960612
			},
			.prefetch0 = 19667,
			.prefetch1 = 55856,
			.ram = chk_final_ram_9,
			.ram_len = 20,
		},
		.transactions = chk_transactions_9,
		.transactions_len = 10,
		.lenght = 42,
	},
	{
		.name = "010 CHK (A5)+, D4 499d",
		.initial = {
			.regs = {
				3572804098, 634609233, 962797442, 686898702, 436403571, 3612906632, 4072456437, 316333913, 3336521214, 2331199594, 4180829095, 3239394193, 2953818365, 823248101, 10382018, 15237648, 7279564, 42752, 3863176
			},
			.prefetch0 = 18845,
			.prefetch1 = 22541,
			.ram = chk_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3572804098, 634609233, 962797442, 686898702, 436403571, 3612906632, 4072456437, 316333913, 3336521214, 2331199594, 4180829095, 3239394193, 2953818365, 823248103, 10382018, 15237648, 7279550, 9984, 230033038
			},
			.prefetch0 = 52247,
			.prefetch1 = 57868,
			.ram = chk_final_ram_10,
			.ram_len = 26,
		},
		.transactions = chk_transactions_10,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "011 CHK (A2)+, D5 4b9a",
		.initial = {
			.regs = {
				2561159740, 2795225319, 2878921148, 3760711292, 2319742469, 1226830031, 3977183768, 1952451832, 3356493568, 2741881052, 4089614281, 1414624950, 1961011462, 3713627782, 1072653135, 8454082, 8844562, 42013, 554174
			},
			.prefetch0 = 19354,
			.prefetch1 = 61523,
			.ram = chk_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2561159740, 2795225319, 2878921148, 3760711292, 2319742469, 1226830031, 3977183768, 1952451832, 3356493568, 2741881052, 4089614283, 1414624950, 1961011462, 3713627782, 1072653135, 8454082, 8844548, 9245, 1707659422
			},
			.prefetch0 = 65422,
			.prefetch1 = 21750,
			.ram = chk_final_ram_11,
			.ram_len = 26,
		},
		.transactions = chk_transactions_11,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "012 CHK (A4), D0 4194",
		.initial = {
			.regs = {
				419334068, 1241361310, 741436328, 3543636316, 3804346027, 3507369723, 3895228705, 2663126807, 1010365863, 2773938115, 3690678892, 911213996, 1160912283, 1419244639, 1286297677, 6575584, 9175614, 9749, 1000336
			},
			.prefetch0 = 16788,
			.prefetch1 = 15971,
			.ram = chk_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				419334068, 1241361310, 741436328, 3543636316, 3804346027, 3507369723, 3895228705, 2663126807, 1010365863, 2773938115, 3690678892, 911213996, 1160912283, 1419244639, 1286297677, 6575584, 9175600, 9749, 3598979528
			},
			.prefetch0 = 30207,
			.prefetch1 = 21139,
			.ram = chk_final_ram_12,
			.ram_len = 26,
		},
		.transactions = chk_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 CHK (A1), D5 4b91",
		.initial = {
			.regs = {
				1511102796, 3522366849, 1750453614, 1919404030, 2185926208, 3519752131, 3585921674, 195268380, 3577947883, 108159327, 3787587436, 193670532, 705625037, 2900913881, 3235029024, 9424372, 9143994, 8978, 16565488
			},
			.prefetch0 = 19345,
			.prefetch1 = 61490,
			.ram = chk_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1511102796, 3522366849, 1750453614, 1919404030, 2185926208, 3519752131, 3585921674, 195268380, 3577947883, 108159327, 3787587436, 193670532, 705625037, 2900913881, 3235029024, 9424372, 9143980, 8978, 3715105334
			},
			.prefetch0 = 60756,
			.prefetch1 = 24931,
			.ram = chk_final_ram_13,
			.ram_len = 26,
		},
		.transactions = chk_transactions_13,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "014 CHK (d8, A4, Xn), D3 47b4",
		.initial = {
			.regs = {
				3138825102, 1993648431, 2793993127, 3267738843, 4252558100, 1931797188, 1977607120, 3582406637, 3577030979, 2956498592, 1764543989, 2789295699, 4154007929, 3059921550, 244040814, 14285880, 8789972, 1280, 1389422
			},
			.prefetch0 = 18356,
			.prefetch1 = 45946,
			.ram = chk_initial_ram_14,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				3138825102, 1993648431, 2793993127, 3267738843, 4252558100, 1931797188, 1977607120, 3582406637, 3577030979, 2956498592, 1764543989, 2789295699, 4154007929, 3059921550, 244040814, 14285880, 8789966, 9480, 2617267760
			},
			.prefetch0 = 27710,
			.prefetch1 = 54480,
			.ram = chk_final_ram_14,
			.ram_len = 22,
		},
		.transactions = chk_transactions_14,
		.transactions_len = 12,
		.lenght = 50,
	},
	{
		.name = "015 CHK (A0)+, D2 4598",
		.initial = {
			.regs = {
				1274950193, 2146542644, 3642787674, 1734808375, 629180160, 660820418, 3287965094, 1493547450, 3901918681, 4205916215, 3210371288, 1803762935, 3632107470, 4275537500, 2001478038, 8566924, 5296170, 788, 6974660
			},
			.prefetch0 = 17816,
			.prefetch1 = 32652,
			.ram = chk_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1274950193, 2146542644, 3642787674, 1734808375, 629180160, 660820418, 3287965094, 1493547450, 3901918683, 4205916215, 3210371288, 1803762935, 3632107470, 4275537500, 2001478038, 8566924, 5296156, 8980, 3234653632
			},
			.prefetch0 = 53150,
			.prefetch1 = 18844,
			.ram = chk_final_ram_15,
			.ram_len = 26,
		},
		.transactions = chk_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "016 CHK (A7)+, D3 479f",
		.initial = {
			.regs = {
				3619621623, 1456965440, 708372623, 2924689917, 226288091, 4032981442, 1216431610, 3481228716, 654216928, 3976588095, 865066689, 2478872187, 3837054084, 2105554668, 2102769532, 1408346, 2226832, 9992, 9656406
			},
			.prefetch0 = 18335,
			.prefetch1 = 54807,
			.ram = chk_initial_ram_16,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3619621623, 1456965440, 708372623, 2924689917, 226288091, 4032981442, 1216431610, 3481228716, 654216928, 3976588095, 865066689, 2478872187, 3837054084, 2105554668, 2102769532, 1408346, 2226828, 9984, 3101482864
			},
			.prefetch0 = 35565,
			.prefetch1 = 46650,
			.ram = chk_final_ram_16,
			.ram_len = 18,
		},
		.transactions = chk_transactions_16,
		.transactions_len = 10,
		.lenght = 42,
	},
	{
		.name = "017 CHK (d8, A1, Xn), D1 43b1",
		.initial = {
			.regs = {
				1411475596, 3451460115, 661960151, 119262317, 2476559725, 2393451747, 1711047071, 2216272995, 73762690, 2723358691, 3837720957, 820664099, 922698473, 1161271347, 1748808148, 4977174, 10235632, 9747, 10993584
			},
			.prefetch0 = 17329,
			.prefetch1 = 52633,
			.ram = chk_initial_ram_17,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1411475596, 3451460115, 661960151, 119262317, 2476559725, 2393451747, 1711047071, 2216272995, 73762690, 2723358691, 3837720957, 820664099, 922698473, 1161271347, 1748808148, 4977174, 10235618, 9747, 368753966
			},
			.prefetch0 = 9109,
			.prefetch1 = 7745,
			.ram = chk_final_ram_17,
			.ram_len = 28,
		},
		.transactions = chk_transactions_17,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "018 CHK (d16, A4), D3 47ac",
		.initial = {
			.regs = {
				3531893959, 2647197958, 3523757563, 4102937940, 233882155, 357315738, 30514673, 2442513219, 3543828898, 3938064303, 1402179322, 543551282, 1166512638, 1680755247, 4142322398, 14976022, 8078888, 33563, 16743818
			},
			.prefetch0 = 18348,
			.prefetch1 = 45247,
			.ram = chk_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3531893959, 2647197958, 3523757563, 4102937940, 233882155, 357315738, 30514673, 2442513219, 3543828898, 3938064303, 1402179322, 543551282, 1166512638, 1680755247, 4142322398, 14976022, 8078874, 8987, 4118603132
			},
			.prefetch0 = 47589,
			.prefetch1 = 17711,
			.ram = chk_final_ram_18,
			.ram_len = 28,
		},
		.transactions = chk_transactions_18,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "019 CHK D1, D7 4f81",
		.initial = {
			.regs = {
				3624862305, 1574083126, 3235669480, 3746921094, 2296816214, 1438083692, 81600756, 3847807540, 3071085373, 2985340320, 460469554, 51013653, 1423839219, 3370769476, 2676488275, 2260476, 9000398, 42000, 10447088
			},
			.prefetch0 = 20353,
			.prefetch1 = 9158,
			.ram = chk_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3624862305, 1574083126, 3235669480, 3746921094, 2296816214, 1438083692, 81600756, 3847807540, 3071085373, 2985340320, 460469554, 51013653, 1423839219, 3370769476, 2676488275, 2260476, 9000392, 9240, 2565772430
			},
			.prefetch0 = 54008,
			.prefetch1 = 4704,
			.ram = chk_final_ram_19,
			.ram_len = 18,
		},
		.transactions = chk_transactions_19,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "020 CHK D4, D5 4b84",
		.initial = {
			.regs = {
				2407092395, 2609884566, 3314470930, 1261117213, 3583020674, 1031032358, 2293277882, 3540551669, 6213711, 1973996519, 2740426183, 3627053780, 1871055994, 3071736021, 3503799868, 1463394, 6885220, 778, 2303298
			},
			.prefetch0 = 19332,
			.prefetch1 = 41895,
			.ram = chk_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2407092395, 2609884566, 3314470930, 1261117213, 3583020674, 1031032358, 2293277882, 3540551669, 6213711, 1973996519, 2740426183, 3627053780, 1871055994, 3071736021, 3503799868, 1463394, 6885214, 8960, 3067654676
			},
			.prefetch0 = 64187,
			.prefetch1 = 17641,
			.ram = chk_final_ram_20,
			.ram_len = 18,
		},
		.transactions = chk_transactions_20,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "021 CHK -(A4), D3 47a4",
		.initial = {
			.regs = {
				2508364810, 3092823743, 2158234323, 2022679329, 374085000, 2280489240, 4035323495, 1103438502, 3597817603, 2886241046, 2583802689, 3498197287, 2838691365, 1852425992, 1395493047, 3884362, 14029450, 33793, 14162780
			},
			.prefetch0 = 18340,
			.prefetch1 = 53447,
			.ram = chk_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2508364810, 3092823743, 2158234323, 2022679329, 374085000, 2280489240, 4035323495, 1103438502, 3597817603, 2886241046, 2583802689, 3498197287, 2838691363, 1852425992, 1395493047, 3884362, 14029436, 9217, 468738910
			},
			.prefetch0 = 15524,
			.prefetch1 = 61742,
			.ram = chk_final_ram_21,
			.ram_len = 26,
		},
		.transactions = chk_transactions_21,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "022 CHK (d16, A7), D5 4baf",
		.initial = {
			.regs = {
				521136964, 4025520409, 1556297781, 2790134728, 681963404, 403140616, 2916109658, 386370234, 3986185824, 2137590608, 362091709, 3158410502, 1206991217, 25392489, 3237269562, 10891328, 16215260, 1814, 11403706
			},
			.prefetch0 = 19375,
			.prefetch1 = 19915,
			.ram = chk_initial_ram_22,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				521136964, 4025520409, 1556297781, 2790134728, 681963404, 403140616, 2916109658, 386370234, 3986185824, 2137590608, 362091709, 3158410502, 1206991217, 25392489, 3237269562, 10891328, 16215246, 10006, 1865721550
			},
			.prefetch0 = 55882,
			.prefetch1 = 12728,
			.ram = chk_final_ram_22,
			.ram_len = 28,
		},
		.transactions = chk_transactions_22,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "023 CHK D3, D2 4583",
		.initial = {
			.regs = {
				2906157522, 90683713, 1135845735, 2432391222, 687994144, 2419480453, 3395092186, 2619334857, 207597, 2893560269, 79987038, 963726068, 2568997521, 3485879390, 1738542725, 9792308, 14376972, 33557, 14655682
			},
			.prefetch0 = 17795,
			.prefetch1 = 20715,
			.ram = chk_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2906157522, 90683713, 1135845735, 2432391222, 687994144, 2419480453, 3395092186, 2619334857, 207597, 2893560269, 79987038, 963726068, 2568997521, 3485879390, 1738542725, 9792308, 14376966, 8984, 2085381094
			},
			.prefetch0 = 5187,
			.prefetch1 = 49441,
			.ram = chk_final_ram_23,
			.ram_len = 18,
		},
		.transactions = chk_transactions_23,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "024 CHK D6, D5 4b86",
		.initial = {
			.regs = {
				3839151522, 2378483402, 2529078936, 2173031926, 1085873175, 3894199143, 197088736, 861968818, 3958734407, 770170449, 681497498, 2818997750, 3546885636, 894457279, 3478006691, 4821038, 7788342, 528, 645844
			},
			.prefetch0 = 19334,
			.prefetch1 = 10325,
			.ram = chk_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3839151522, 2378483402, 2529078936, 2173031926, 1085873175, 3894199143, 197088736, 861968818, 3958734407, 770170449, 681497498, 2818997750, 3546885636, 894457279, 3478006691, 4821038, 7788336, 8728, 3703048770
			},
			.prefetch0 = 59605,
			.prefetch1 = 27451,
			.ram = chk_final_ram_24,
			.ram_len = 18,
		},
		.transactions = chk_transactions_24,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "025 CHK D2, D5 4b82",
		.initial = {
			.regs = {
				2109286625, 383618013, 2017809911, 3833578516, 321097878, 4209866852, 668188319, 1757448565, 790213868, 1702000535, 4015759818, 3907915486, 706835031, 2147978875, 1627717180, 5926350, 12382818, 8199, 7653606
			},
			.prefetch0 = 19330,
			.prefetch1 = 25616,
			.ram = chk_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2109286625, 383618013, 2017809911, 3833578516, 321097878, 4209866852, 668188319, 1757448565, 790213868, 1702000535, 4015759818, 3907915486, 706835031, 2147978875, 1627717180, 5926350, 12382812, 8192, 592875280
			},
			.prefetch0 = 24486,
			.prefetch1 = 42563,
			.ram = chk_final_ram_25,
			.ram_len = 18,
		},
		.transactions = chk_transactions_25,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "026 CHK (d8, A5, Xn), D3 47b5",
		.initial = {
			.regs = {
				147885351, 3500663241, 3459738359, 3826737407, 350447430, 3478491552, 1950932103, 2810912149, 1363784598, 4011766413, 1776505586, 3100189888, 725099176, 1117831508, 3946150314, 3457678, 2126692, 33040, 4323104
			},
			.prefetch0 = 18357,
			.prefetch1 = 59129,
			.ram = chk_initial_ram_26,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				147885351, 3500663241, 3459738359, 3826737407, 350447430, 3478491552, 1950932103, 2810912149, 1363784598, 4011766413, 1776505586, 3100189888, 725099176, 1117831508, 3946150314, 3457678, 2126678, 8464, 2323258160
			},
			.prefetch0 = 40492,
			.prefetch1 = 13069,
			.ram = chk_final_ram_26,
			.ram_len = 28,
		},
		.transactions = chk_transactions_26,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "027 CHK D1, D5 4b81",
		.initial = {
			.regs = {
				1401197649, 340099607, 2933490381, 1882065976, 1984635462, 2084144592, 2813228732, 127346087, 141609339, 3026133788, 2507374078, 1186896528, 1488343587, 21327706, 3315801940, 9737668, 10955076, 6, 4019602
			},
			.prefetch0 = 19329,
			.prefetch1 = 519,
			.ram = chk_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1401197649, 340099607, 2933490381, 1882065976, 1984635462, 2084144592, 2813228732, 127346087, 141609339, 3026133788, 2507374078, 1186896528, 1488343587, 21327706, 3315801940, 9737668, 10955070, 8200, 2941677066
			},
			.prefetch0 = 59930,
			.prefetch1 = 28250,
			.ram = chk_final_ram_27,
			.ram_len = 18,
		},
		.transactions = chk_transactions_27,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "028 CHK D5, D1 4385",
		.initial = {
			.regs = {
				60573996, 4066727350, 4288506561, 2546171984, 3762898449, 3425245943, 1884583940, 3850404704, 4211315809, 1625994012, 2901329412, 3252336890, 322736998, 518336009, 4039942451, 11173926, 7753724, 8708, 12750300
			},
			.prefetch0 = 17285,
			.prefetch1 = 4683,
			.ram = chk_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				60573996, 4066727350, 4288506561, 2546171984, 3762898449, 3425245943, 1884583940, 3850404704, 4211315809, 1625994012, 2901329412, 3252336890, 322736998, 518336009, 4039942451, 11173926, 7753718, 8704, 449475072
			},
			.prefetch0 = 2001,
			.prefetch1 = 47965,
			.ram = chk_final_ram_28,
			.ram_len = 18,
		},
		.transactions = chk_transactions_28,
		.transactions_len = 9,
		.lenght = 38,
	},
	{
		.name = "029 CHK (A5), D7 4f95",
		.initial = {
			.regs = {
				1798983797, 1796045307, 3365716384, 3096014646, 595539522, 222805433, 3673862719, 2588187456, 2672606988, 1681113493, 3751294955, 931863611, 2944662762, 2063330741, 2673022455, 15362190, 4788480, 784, 1745754
			},
			.prefetch0 = 20373,
			.prefetch1 = 43981,
			.ram = chk_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1798983797, 1796045307, 3365716384, 3096014646, 595539522, 222805433, 3673862719, 2588187456, 2672606988, 1681113493, 3751294955, 931863611, 2944662762, 2063330741, 2673022455, 15362190, 4788466, 8976, 545404720
			},
			.prefetch0 = 31045,
			.prefetch1 = 10204,
			.ram = chk_final_ram_29,
			.ram_len = 26,
		},
		.transactions = chk_transactions_29,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "030 CHK (A0), D6 4d90",
		.initial = {
			.regs = {
				3353800854, 2604422584, 1088650153, 3139757526, 648759173, 3087584800, 1895436246, 1483725566, 335231325, 594618005, 596540061, 3020656982, 1725313188, 490550502, 3614212154, 2273570, 6931340, 42240, 14233564
			},
			.prefetch0 = 19856,
			.prefetch1 = 34557,
			.ram = chk_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3353800854, 2604422584, 1088650153, 3139757526, 648759173, 3087584800, 1895436246, 1483725566, 335231325, 594618005, 596540061, 3020656982, 1725313188, 490550502, 3614212154, 2273570, 6931326, 9472, 548709546
			},
			.prefetch0 = 24125,
			.prefetch1 = 42589,
			.ram = chk_final_ram_30,
			.ram_len = 26,
		},
		.transactions = chk_transactions_30,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "031 CHK (A0), D6 4d90",
		.initial = {
			.regs = {
				3609825402, 4147578933, 4060764498, 3863105367, 1236603721, 1003462264, 4022663965, 2924132079, 564837114, 3805491160, 3083107382, 312103092, 1188007281, 225789199, 2476064548, 12427770, 1839578, 41759, 13661932
			},
			.prefetch0 = 19856,
			.prefetch1 = 13697,
			.ram = chk_initial_ram_31,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3609825402, 4147578933, 4060764498, 3863105367, 1236603721, 1003462264, 4022663965, 2924132079, 564837114, 3805491160, 3083107382, 312103092, 1188007281, 225789199, 2476064548, 12427770, 1839572, 8984, 1309062406
			},
			.prefetch0 = 19998,
			.prefetch1 = 59967,
			.ram = chk_final_ram_31,
			.ram_len = 20,
		},
		.transactions = chk_transactions_31,
		.transactions_len = 10,
		.lenght = 42,
	},
};

#endif /* RBT_CHK_H */