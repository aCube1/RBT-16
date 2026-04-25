#ifndef RBT_ADDAL_H
#define RBT_ADDAL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte addal_initial_ram_0[] = {
		{ .addr = 0x704f92, .byte = 0xdd },
		{ .addr = 0x704f93, .byte = 0xee },
		{ .addr = 0x704f94, .byte = 0x9c },
		{ .addr = 0x704f95, .byte = 0x4e },
		{ .addr = 0x704f96, .byte = 0x48 },
		{ .addr = 0x704f97, .byte = 0x3b },
		{ .addr = 0xc1c168, .byte = 0xaf },
		{ .addr = 0xc1c169, .byte = 0xf0 },
		{ .addr = 0xc1c16a, .byte = 0xd3 },
		{ .addr = 0xc1c16b, .byte = 0xc6 },
		{ .addr = 0x704f98, .byte = 0x6a },
		{ .addr = 0x704f99, .byte = 0x82 }
};

static const SST_RamByte addal_final_ram_0[] = {
		{ .addr = 0x704f92, .byte = 0xdd },
		{ .addr = 0x704f93, .byte = 0xee },
		{ .addr = 0x704f94, .byte = 0x9c },
		{ .addr = 0x704f95, .byte = 0x4e },
		{ .addr = 0x704f96, .byte = 0x48 },
		{ .addr = 0x704f97, .byte = 0x3b },
		{ .addr = 0xc1c168, .byte = 0xaf },
		{ .addr = 0xc1c169, .byte = 0xf0 },
		{ .addr = 0xc1c16a, .byte = 0xd3 },
		{ .addr = 0xc1c16b, .byte = 0xc6 },
		{ .addr = 0x704f98, .byte = 0x6a },
		{ .addr = 0x704f99, .byte = 0x82 }
};

static const SST_Transaction addal_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7360406, .data = 18491, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12697960, .data = 45040, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12697962, .data = 54214, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7360408, .data = 27266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_1[] = {
		{ .addr = 0x1aede4, .byte = 0xdb },
		{ .addr = 0x1aede5, .byte = 0xe5 },
		{ .addr = 0x1aede6, .byte = 0x93 },
		{ .addr = 0x1aede7, .byte = 0x89 },
		{ .addr = 0x834cd6, .byte = 0x89 },
		{ .addr = 0x834cd7, .byte = 0x86 },
		{ .addr = 0x834cd8, .byte = 0x01 },
		{ .addr = 0x834cd9, .byte = 0xcf },
		{ .addr = 0x1aede8, .byte = 0x95 },
		{ .addr = 0x1aede9, .byte = 0x46 }
};

static const SST_RamByte addal_final_ram_1[] = {
		{ .addr = 0x1aede4, .byte = 0xdb },
		{ .addr = 0x1aede5, .byte = 0xe5 },
		{ .addr = 0x1aede6, .byte = 0x93 },
		{ .addr = 0x1aede7, .byte = 0x89 },
		{ .addr = 0x834cd6, .byte = 0x89 },
		{ .addr = 0x834cd7, .byte = 0x86 },
		{ .addr = 0x834cd8, .byte = 0x01 },
		{ .addr = 0x834cd9, .byte = 0xcf },
		{ .addr = 0x1aede8, .byte = 0x95 },
		{ .addr = 0x1aede9, .byte = 0x46 }
};

static const SST_Transaction addal_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8604886, .data = 35206, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8604888, .data = 463, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1764840, .data = 38214, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_2[] = {
		{ .addr = 0x1d1e6e, .byte = 0xd5 },
		{ .addr = 0x1d1e6f, .byte = 0xe4 },
		{ .addr = 0x1d1e70, .byte = 0xe8 },
		{ .addr = 0x1d1e71, .byte = 0xf2 },
		{ .addr = 0xf1f77c, .byte = 0xd6 },
		{ .addr = 0xf1f77d, .byte = 0x4e },
		{ .addr = 0xf1f77e, .byte = 0x9c },
		{ .addr = 0xf1f77f, .byte = 0x06 },
		{ .addr = 0x1d1e72, .byte = 0x36 },
		{ .addr = 0x1d1e73, .byte = 0x8e }
};

static const SST_RamByte addal_final_ram_2[] = {
		{ .addr = 0x1d1e6e, .byte = 0xd5 },
		{ .addr = 0x1d1e6f, .byte = 0xe4 },
		{ .addr = 0x1d1e70, .byte = 0xe8 },
		{ .addr = 0x1d1e71, .byte = 0xf2 },
		{ .addr = 0xf1f77c, .byte = 0xd6 },
		{ .addr = 0xf1f77d, .byte = 0x4e },
		{ .addr = 0xf1f77e, .byte = 0x9c },
		{ .addr = 0xf1f77f, .byte = 0x06 },
		{ .addr = 0x1d1e72, .byte = 0x36 },
		{ .addr = 0x1d1e73, .byte = 0x8e }
};

static const SST_Transaction addal_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15857532, .data = 54862, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15857534, .data = 39942, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1908338, .data = 13966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_3[] = {
		{ .addr = 0xb22d96, .byte = 0xdb },
		{ .addr = 0xb22d97, .byte = 0xda },
		{ .addr = 0xb22d98, .byte = 0xcb },
		{ .addr = 0xb22d99, .byte = 0x94 },
		{ .addr = 0x00000c, .byte = 0xb3 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x0d },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0x2c0df2, .byte = 0x5d },
		{ .addr = 0x2c0df3, .byte = 0x7e },
		{ .addr = 0x2c0df4, .byte = 0xed },
		{ .addr = 0x2c0df5, .byte = 0x96 }
};

static const SST_RamByte addal_final_ram_3[] = {
		{ .addr = 0xb22d96, .byte = 0xdb },
		{ .addr = 0xb22d97, .byte = 0xda },
		{ .addr = 0xb22d98, .byte = 0xcb },
		{ .addr = 0xb22d99, .byte = 0x94 },
		{ .addr = 0x78bada, .byte = 0x2d },
		{ .addr = 0x78badb, .byte = 0x98 },
		{ .addr = 0x78bad6, .byte = 0x06 },
		{ .addr = 0x78bad7, .byte = 0x1c },
		{ .addr = 0x78bad8, .byte = 0x00 },
		{ .addr = 0x78bad9, .byte = 0xb2 },
		{ .addr = 0x78bad4, .byte = 0xdb },
		{ .addr = 0x78bad5, .byte = 0xda },
		{ .addr = 0x78bad2, .byte = 0xdb },
		{ .addr = 0x78bad3, .byte = 0xa5 },
		{ .addr = 0x78bace, .byte = 0xdb },
		{ .addr = 0x78bacf, .byte = 0xd1 },
		{ .addr = 0x78bad0, .byte = 0x0d },
		{ .addr = 0x78bad1, .byte = 0x23 },
		{ .addr = 0x00000c, .byte = 0xb3 },
		{ .addr = 0x00000d, .byte = 0x2c },
		{ .addr = 0x00000e, .byte = 0x0d },
		{ .addr = 0x00000f, .byte = 0xf2 },
		{ .addr = 0x2c0df2, .byte = 0x5d },
		{ .addr = 0x2c0df3, .byte = 0x7e },
		{ .addr = 0x2c0df4, .byte = 0xed },
		{ .addr = 0x2c0df5, .byte = 0x96 }
};

static const SST_Transaction addal_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2349988, .data = 13835, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7912154, .data = 11672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7912150, .data = 1564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7912152, .data = 178, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7912148, .data = 56282, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7912146, .data = 56229, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7912142, .data = 56273, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7912144, .data = 3363, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 45868, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 3570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2887154, .data = 23934, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2887156, .data = 60822, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_4[] = {
		{ .addr = 0xeb319a, .byte = 0xdf },
		{ .addr = 0xeb319b, .byte = 0xfc },
		{ .addr = 0xeb319c, .byte = 0xe9 },
		{ .addr = 0xeb319d, .byte = 0xfa },
		{ .addr = 0xeb319e, .byte = 0x49 },
		{ .addr = 0xeb319f, .byte = 0x1c },
		{ .addr = 0xeb31a0, .byte = 0x37 },
		{ .addr = 0xeb31a1, .byte = 0x97 },
		{ .addr = 0xeb31a2, .byte = 0x4e },
		{ .addr = 0xeb31a3, .byte = 0x02 }
};

static const SST_RamByte addal_final_ram_4[] = {
		{ .addr = 0xeb319a, .byte = 0xdf },
		{ .addr = 0xeb319b, .byte = 0xfc },
		{ .addr = 0xeb319c, .byte = 0xe9 },
		{ .addr = 0xeb319d, .byte = 0xfa },
		{ .addr = 0xeb319e, .byte = 0x49 },
		{ .addr = 0xeb319f, .byte = 0x1c },
		{ .addr = 0xeb31a0, .byte = 0x37 },
		{ .addr = 0xeb31a1, .byte = 0x97 },
		{ .addr = 0xeb31a2, .byte = 0x4e },
		{ .addr = 0xeb31a3, .byte = 0x02 }
};

static const SST_Transaction addal_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15413662, .data = 18716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15413664, .data = 14231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15413666, .data = 19970, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addal_initial_ram_5[] = {
		{ .addr = 0xa82a96, .byte = 0xd1 },
		{ .addr = 0xa82a97, .byte = 0xf0 },
		{ .addr = 0xa82a98, .byte = 0x27 },
		{ .addr = 0xa82a99, .byte = 0x09 },
		{ .addr = 0xa82a9a, .byte = 0x18 },
		{ .addr = 0xa82a9b, .byte = 0xf8 },
		{ .addr = 0x5fb4e8, .byte = 0x09 },
		{ .addr = 0x5fb4e9, .byte = 0xe0 },
		{ .addr = 0x5fb4ea, .byte = 0x87 },
		{ .addr = 0x5fb4eb, .byte = 0xfb },
		{ .addr = 0xa82a9c, .byte = 0x0c },
		{ .addr = 0xa82a9d, .byte = 0x61 }
};

static const SST_RamByte addal_final_ram_5[] = {
		{ .addr = 0xa82a96, .byte = 0xd1 },
		{ .addr = 0xa82a97, .byte = 0xf0 },
		{ .addr = 0xa82a98, .byte = 0x27 },
		{ .addr = 0xa82a99, .byte = 0x09 },
		{ .addr = 0xa82a9a, .byte = 0x18 },
		{ .addr = 0xa82a9b, .byte = 0xf8 },
		{ .addr = 0x5fb4e8, .byte = 0x09 },
		{ .addr = 0x5fb4e9, .byte = 0xe0 },
		{ .addr = 0x5fb4ea, .byte = 0x87 },
		{ .addr = 0x5fb4eb, .byte = 0xfb },
		{ .addr = 0xa82a9c, .byte = 0x0c },
		{ .addr = 0xa82a9d, .byte = 0x61 }
};

static const SST_Transaction addal_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11020954, .data = 6392, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6272232, .data = 2528, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6272234, .data = 34811, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11020956, .data = 3169, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_6[] = {
		{ .addr = 0x5fbbfe, .byte = 0xd9 },
		{ .addr = 0x5fbbff, .byte = 0xef },
		{ .addr = 0x5fbc00, .byte = 0x22 },
		{ .addr = 0x5fbc01, .byte = 0xab },
		{ .addr = 0x5fbc02, .byte = 0x70 },
		{ .addr = 0x5fbc03, .byte = 0xe2 },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0xf878d0, .byte = 0x6e },
		{ .addr = 0xf878d1, .byte = 0x42 },
		{ .addr = 0xf878d2, .byte = 0xd4 },
		{ .addr = 0xf878d3, .byte = 0xbb }
};

static const SST_RamByte addal_final_ram_6[] = {
		{ .addr = 0x5fbbfe, .byte = 0xd9 },
		{ .addr = 0x5fbbff, .byte = 0xef },
		{ .addr = 0x5fbc00, .byte = 0x22 },
		{ .addr = 0x5fbc01, .byte = 0xab },
		{ .addr = 0x5fbc02, .byte = 0x70 },
		{ .addr = 0x5fbc03, .byte = 0xe2 },
		{ .addr = 0x8adf02, .byte = 0xbc },
		{ .addr = 0x8adf03, .byte = 0x00 },
		{ .addr = 0x8adefe, .byte = 0x06 },
		{ .addr = 0x8adeff, .byte = 0x06 },
		{ .addr = 0x8adf00, .byte = 0x00 },
		{ .addr = 0x8adf01, .byte = 0x5f },
		{ .addr = 0x8adefc, .byte = 0xd9 },
		{ .addr = 0x8adefd, .byte = 0xef },
		{ .addr = 0x8adefa, .byte = 0x6d },
		{ .addr = 0x8adefb, .byte = 0x2f },
		{ .addr = 0x8adef6, .byte = 0xd9 },
		{ .addr = 0x8adef7, .byte = 0xf1 },
		{ .addr = 0x8adef8, .byte = 0x00 },
		{ .addr = 0x8adef9, .byte = 0x1a },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0xf8 },
		{ .addr = 0x00000e, .byte = 0x78 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0xf878d0, .byte = 0x6e },
		{ .addr = 0xf878d1, .byte = 0x42 },
		{ .addr = 0xf878d2, .byte = 0xd4 },
		{ .addr = 0xf878d3, .byte = 0xbb }
};

static const SST_Transaction addal_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6274050, .data = 28898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1731886, .data = 24174, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9101058, .data = 48128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9101054, .data = 1542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9101056, .data = 95, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9101052, .data = 55791, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9101050, .data = 27951, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9101046, .data = 55793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9101048, .data = 26, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 30928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16283856, .data = 28226, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16283858, .data = 54459, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_7[] = {
		{ .addr = 0x318944, .byte = 0xd9 },
		{ .addr = 0x318945, .byte = 0xd5 },
		{ .addr = 0x318946, .byte = 0x49 },
		{ .addr = 0x318947, .byte = 0x84 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xe8c83a, .byte = 0xc4 },
		{ .addr = 0xe8c83b, .byte = 0x04 },
		{ .addr = 0xe8c83c, .byte = 0xb5 },
		{ .addr = 0xe8c83d, .byte = 0x01 }
};

static const SST_RamByte addal_final_ram_7[] = {
		{ .addr = 0x318944, .byte = 0xd9 },
		{ .addr = 0x318945, .byte = 0xd5 },
		{ .addr = 0x318946, .byte = 0x49 },
		{ .addr = 0x318947, .byte = 0x84 },
		{ .addr = 0x7afbd6, .byte = 0x89 },
		{ .addr = 0x7afbd7, .byte = 0x46 },
		{ .addr = 0x7afbd2, .byte = 0xa7 },
		{ .addr = 0x7afbd3, .byte = 0x00 },
		{ .addr = 0x7afbd4, .byte = 0x00 },
		{ .addr = 0x7afbd5, .byte = 0x31 },
		{ .addr = 0x7afbd0, .byte = 0xd9 },
		{ .addr = 0x7afbd1, .byte = 0xd5 },
		{ .addr = 0x7afbce, .byte = 0x77 },
		{ .addr = 0x7afbcf, .byte = 0x37 },
		{ .addr = 0x7afbca, .byte = 0xd9 },
		{ .addr = 0x7afbcb, .byte = 0xd5 },
		{ .addr = 0x7afbcc, .byte = 0x08 },
		{ .addr = 0x7afbcd, .byte = 0xe4 },
		{ .addr = 0x00000c, .byte = 0xca },
		{ .addr = 0x00000d, .byte = 0xe8 },
		{ .addr = 0x00000e, .byte = 0xc8 },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xe8c83a, .byte = 0xc4 },
		{ .addr = 0xe8c83b, .byte = 0x04 },
		{ .addr = 0xe8c83c, .byte = 0xb5 },
		{ .addr = 0xe8c83d, .byte = 0x01 }
};

static const SST_Transaction addal_transactions_7[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14972726, .data = 3118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8059862, .data = 35142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8059858, .data = 42752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8059860, .data = 49, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8059856, .data = 55765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8059854, .data = 30519, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8059850, .data = 55765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8059852, .data = 2276, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 51944, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51258, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15255610, .data = 50180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15255612, .data = 46337, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_8[] = {
		{ .addr = 0x32b14a, .byte = 0xdf },
		{ .addr = 0x32b14b, .byte = 0xcd },
		{ .addr = 0x32b14c, .byte = 0x66 },
		{ .addr = 0x32b14d, .byte = 0xcc },
		{ .addr = 0x32b14e, .byte = 0xa0 },
		{ .addr = 0x32b14f, .byte = 0xa1 }
};

static const SST_RamByte addal_final_ram_8[] = {
		{ .addr = 0x32b14a, .byte = 0xdf },
		{ .addr = 0x32b14b, .byte = 0xcd },
		{ .addr = 0x32b14c, .byte = 0x66 },
		{ .addr = 0x32b14d, .byte = 0xcc },
		{ .addr = 0x32b14e, .byte = 0xa0 },
		{ .addr = 0x32b14f, .byte = 0xa1 }
};

static const SST_Transaction addal_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3322190, .data = 41121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addal_initial_ram_9[] = {
		{ .addr = 0xf1ce24, .byte = 0xd5 },
		{ .addr = 0xf1ce25, .byte = 0xd3 },
		{ .addr = 0xf1ce26, .byte = 0xc4 },
		{ .addr = 0xf1ce27, .byte = 0x56 },
		{ .addr = 0xf25c04, .byte = 0x16 },
		{ .addr = 0xf25c05, .byte = 0x10 },
		{ .addr = 0xf25c06, .byte = 0xea },
		{ .addr = 0xf25c07, .byte = 0xa2 },
		{ .addr = 0xf1ce28, .byte = 0x37 },
		{ .addr = 0xf1ce29, .byte = 0x63 }
};

static const SST_RamByte addal_final_ram_9[] = {
		{ .addr = 0xf1ce24, .byte = 0xd5 },
		{ .addr = 0xf1ce25, .byte = 0xd3 },
		{ .addr = 0xf1ce26, .byte = 0xc4 },
		{ .addr = 0xf1ce27, .byte = 0x56 },
		{ .addr = 0xf25c04, .byte = 0x16 },
		{ .addr = 0xf25c05, .byte = 0x10 },
		{ .addr = 0xf25c06, .byte = 0xea },
		{ .addr = 0xf25c07, .byte = 0xa2 },
		{ .addr = 0xf1ce28, .byte = 0x37 },
		{ .addr = 0xf1ce29, .byte = 0x63 }
};

static const SST_Transaction addal_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15883268, .data = 5648, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15883270, .data = 60066, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15846952, .data = 14179, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_10[] = {
		{ .addr = 0x9f45aa, .byte = 0xd5 },
		{ .addr = 0x9f45ab, .byte = 0xe2 },
		{ .addr = 0x9f45ac, .byte = 0xed },
		{ .addr = 0x9f45ad, .byte = 0x85 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0x58 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0xa8 },
		{ .addr = 0x5846a8, .byte = 0xa6 },
		{ .addr = 0x5846a9, .byte = 0xb8 },
		{ .addr = 0x5846aa, .byte = 0x5c },
		{ .addr = 0x5846ab, .byte = 0xeb }
};

static const SST_RamByte addal_final_ram_10[] = {
		{ .addr = 0x9f45aa, .byte = 0xd5 },
		{ .addr = 0x9f45ab, .byte = 0xe2 },
		{ .addr = 0x9f45ac, .byte = 0xed },
		{ .addr = 0x9f45ad, .byte = 0x85 },
		{ .addr = 0x79447a, .byte = 0x45 },
		{ .addr = 0x79447b, .byte = 0xac },
		{ .addr = 0x794476, .byte = 0x24 },
		{ .addr = 0x794477, .byte = 0x0e },
		{ .addr = 0x794478, .byte = 0x00 },
		{ .addr = 0x794479, .byte = 0x9f },
		{ .addr = 0x794474, .byte = 0xd5 },
		{ .addr = 0x794475, .byte = 0xe2 },
		{ .addr = 0x794472, .byte = 0x76 },
		{ .addr = 0x794473, .byte = 0x49 },
		{ .addr = 0x79446e, .byte = 0xd5 },
		{ .addr = 0x79446f, .byte = 0xf5 },
		{ .addr = 0x794470, .byte = 0xf3 },
		{ .addr = 0x794471, .byte = 0x26 },
		{ .addr = 0x00000c, .byte = 0x12 },
		{ .addr = 0x00000d, .byte = 0x58 },
		{ .addr = 0x00000e, .byte = 0x46 },
		{ .addr = 0x00000f, .byte = 0xa8 },
		{ .addr = 0x5846a8, .byte = 0xa6 },
		{ .addr = 0x5846a9, .byte = 0xb8 },
		{ .addr = 0x5846aa, .byte = 0x5c },
		{ .addr = 0x5846ab, .byte = 0xeb }
};

static const SST_Transaction addal_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2520648, .data = 53550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7947386, .data = 17836, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7947382, .data = 9230, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7947384, .data = 159, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7947380, .data = 54754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7947378, .data = 30281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7947374, .data = 54773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7947376, .data = 62246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 4696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 18088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5785256, .data = 42680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5785258, .data = 23787, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_11[] = {
		{ .addr = 0xa665e0, .byte = 0xdd },
		{ .addr = 0xa665e1, .byte = 0xc7 },
		{ .addr = 0xa665e2, .byte = 0x42 },
		{ .addr = 0xa665e3, .byte = 0xc4 },
		{ .addr = 0xa665e4, .byte = 0xd2 },
		{ .addr = 0xa665e5, .byte = 0xd4 }
};

static const SST_RamByte addal_final_ram_11[] = {
		{ .addr = 0xa665e0, .byte = 0xdd },
		{ .addr = 0xa665e1, .byte = 0xc7 },
		{ .addr = 0xa665e2, .byte = 0x42 },
		{ .addr = 0xa665e3, .byte = 0xc4 },
		{ .addr = 0xa665e4, .byte = 0xd2 },
		{ .addr = 0xa665e5, .byte = 0xd4 }
};

static const SST_Transaction addal_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10905060, .data = 53972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addal_initial_ram_12[] = {
		{ .addr = 0x217bf8, .byte = 0xdf },
		{ .addr = 0x217bf9, .byte = 0xdd },
		{ .addr = 0x217bfa, .byte = 0x30 },
		{ .addr = 0x217bfb, .byte = 0xad },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0x3b },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0x563b4e, .byte = 0x32 },
		{ .addr = 0x563b4f, .byte = 0x3f },
		{ .addr = 0x563b50, .byte = 0x14 },
		{ .addr = 0x563b51, .byte = 0xf4 }
};

static const SST_RamByte addal_final_ram_12[] = {
		{ .addr = 0x217bf8, .byte = 0xdf },
		{ .addr = 0x217bf9, .byte = 0xdd },
		{ .addr = 0x217bfa, .byte = 0x30 },
		{ .addr = 0x217bfb, .byte = 0xad },
		{ .addr = 0x2abf94, .byte = 0x7b },
		{ .addr = 0x2abf95, .byte = 0xfa },
		{ .addr = 0x2abf90, .byte = 0x20 },
		{ .addr = 0x2abf91, .byte = 0x19 },
		{ .addr = 0x2abf92, .byte = 0x00 },
		{ .addr = 0x2abf93, .byte = 0x21 },
		{ .addr = 0x2abf8e, .byte = 0xdf },
		{ .addr = 0x2abf8f, .byte = 0xdd },
		{ .addr = 0x2abf8c, .byte = 0x99 },
		{ .addr = 0x2abf8d, .byte = 0x49 },
		{ .addr = 0x2abf88, .byte = 0xdf },
		{ .addr = 0x2abf89, .byte = 0xd5 },
		{ .addr = 0x2abf8a, .byte = 0x14 },
		{ .addr = 0x2abf8b, .byte = 0x42 },
		{ .addr = 0x00000c, .byte = 0x5f },
		{ .addr = 0x00000d, .byte = 0x56 },
		{ .addr = 0x00000e, .byte = 0x3b },
		{ .addr = 0x00000f, .byte = 0x4e },
		{ .addr = 0x563b4e, .byte = 0x32 },
		{ .addr = 0x563b4f, .byte = 0x3f },
		{ .addr = 0x563b50, .byte = 0x14 },
		{ .addr = 0x563b51, .byte = 0xf4 }
};

static const SST_Transaction addal_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4364616, .data = 44102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801556, .data = 31738, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801552, .data = 8217, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801554, .data = 33, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801550, .data = 57309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801548, .data = 39241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801544, .data = 57301, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2801546, .data = 5186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24406, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 15182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5651278, .data = 12863, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5651280, .data = 5364, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_13[] = {
		{ .addr = 0x7b666a, .byte = 0xdf },
		{ .addr = 0x7b666b, .byte = 0xd4 },
		{ .addr = 0x7b666c, .byte = 0xf5 },
		{ .addr = 0x7b666d, .byte = 0x38 },
		{ .addr = 0x9e7556, .byte = 0xd0 },
		{ .addr = 0x9e7557, .byte = 0x28 },
		{ .addr = 0x9e7558, .byte = 0x9e },
		{ .addr = 0x9e7559, .byte = 0xed },
		{ .addr = 0x7b666e, .byte = 0x8b },
		{ .addr = 0x7b666f, .byte = 0xc3 }
};

static const SST_RamByte addal_final_ram_13[] = {
		{ .addr = 0x7b666a, .byte = 0xdf },
		{ .addr = 0x7b666b, .byte = 0xd4 },
		{ .addr = 0x7b666c, .byte = 0xf5 },
		{ .addr = 0x7b666d, .byte = 0x38 },
		{ .addr = 0x9e7556, .byte = 0xd0 },
		{ .addr = 0x9e7557, .byte = 0x28 },
		{ .addr = 0x9e7558, .byte = 0x9e },
		{ .addr = 0x9e7559, .byte = 0xed },
		{ .addr = 0x7b666e, .byte = 0x8b },
		{ .addr = 0x7b666f, .byte = 0xc3 }
};

static const SST_Transaction addal_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10384726, .data = 53288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10384728, .data = 40685, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8087150, .data = 35779, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_14[] = {
		{ .addr = 0x526e1c, .byte = 0xdb },
		{ .addr = 0x526e1d, .byte = 0xf2 },
		{ .addr = 0x526e1e, .byte = 0xeb },
		{ .addr = 0x526e1f, .byte = 0x79 },
		{ .addr = 0x526e20, .byte = 0xf4 },
		{ .addr = 0x526e21, .byte = 0x0a },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x42bc48, .byte = 0x8c },
		{ .addr = 0x42bc49, .byte = 0x84 },
		{ .addr = 0x42bc4a, .byte = 0x79 },
		{ .addr = 0x42bc4b, .byte = 0xf8 }
};

static const SST_RamByte addal_final_ram_14[] = {
		{ .addr = 0x526e1c, .byte = 0xdb },
		{ .addr = 0x526e1d, .byte = 0xf2 },
		{ .addr = 0x526e1e, .byte = 0xeb },
		{ .addr = 0x526e1f, .byte = 0x79 },
		{ .addr = 0x526e20, .byte = 0xf4 },
		{ .addr = 0x526e21, .byte = 0x0a },
		{ .addr = 0x4ec502, .byte = 0x6e },
		{ .addr = 0x4ec503, .byte = 0x1e },
		{ .addr = 0x4ec4fe, .byte = 0x21 },
		{ .addr = 0x4ec4ff, .byte = 0x07 },
		{ .addr = 0x4ec500, .byte = 0x00 },
		{ .addr = 0x4ec501, .byte = 0x52 },
		{ .addr = 0x4ec4fc, .byte = 0xdb },
		{ .addr = 0x4ec4fd, .byte = 0xf2 },
		{ .addr = 0x4ec4fa, .byte = 0x9d },
		{ .addr = 0x4ec4fb, .byte = 0x63 },
		{ .addr = 0x4ec4f6, .byte = 0xdb },
		{ .addr = 0x4ec4f7, .byte = 0xf5 },
		{ .addr = 0x4ec4f8, .byte = 0x55 },
		{ .addr = 0x4ec4f9, .byte = 0xf1 },
		{ .addr = 0x00000c, .byte = 0xd2 },
		{ .addr = 0x00000d, .byte = 0x42 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x48 },
		{ .addr = 0x42bc48, .byte = 0x8c },
		{ .addr = 0x42bc49, .byte = 0x84 },
		{ .addr = 0x42bc4a, .byte = 0x79 },
		{ .addr = 0x42bc4b, .byte = 0xf8 }
};

static const SST_Transaction addal_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5402144, .data = 62474, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15834466, .data = 6702, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5162242, .data = 28190, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5162238, .data = 8455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5162240, .data = 82, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5162236, .data = 56306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5162234, .data = 40291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5162230, .data = 56309, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5162232, .data = 22001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4373576, .data = 35972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4373578, .data = 31224, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_15[] = {
		{ .addr = 0x948284, .byte = 0xd5 },
		{ .addr = 0x948285, .byte = 0xda },
		{ .addr = 0x948286, .byte = 0x3b },
		{ .addr = 0x948287, .byte = 0x3a },
		{ .addr = 0xf6be32, .byte = 0xda },
		{ .addr = 0xf6be33, .byte = 0xc5 },
		{ .addr = 0xf6be34, .byte = 0x70 },
		{ .addr = 0xf6be35, .byte = 0x02 },
		{ .addr = 0x948288, .byte = 0xfc },
		{ .addr = 0x948289, .byte = 0x9f }
};

static const SST_RamByte addal_final_ram_15[] = {
		{ .addr = 0x948284, .byte = 0xd5 },
		{ .addr = 0x948285, .byte = 0xda },
		{ .addr = 0x948286, .byte = 0x3b },
		{ .addr = 0x948287, .byte = 0x3a },
		{ .addr = 0xf6be32, .byte = 0xda },
		{ .addr = 0xf6be33, .byte = 0xc5 },
		{ .addr = 0xf6be34, .byte = 0x70 },
		{ .addr = 0xf6be35, .byte = 0x02 },
		{ .addr = 0x948288, .byte = 0xfc },
		{ .addr = 0x948289, .byte = 0x9f }
};

static const SST_Transaction addal_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16170546, .data = 56005, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16170548, .data = 28674, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9732744, .data = 64671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

const uint32_t ADDAL_TEST_COUNT = 16;
static const SST_TestCase addal[] = {
	{
		.name = "000 ADDA.l (d16, A6), A6 ddee",
		.initial = {
			.regs = {
				601553886, 3882265256, 4081024186, 3333190385, 226977110, 1489897429, 129445653, 2806454671, 4046042593, 3262263489, 483918555, 4268878349, 560546210, 1619534125, 1069688090, 9316066, 7938836, 34322, 7360406
			},
			.prefetch0 = 56814,
			.prefetch1 = 40014,
			.ram = addal_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				601553886, 3882265256, 4081024186, 3333190385, 226977110, 1489897429, 129445653, 2806454671, 4046042593, 3262263489, 483918555, 4268878349, 560546210, 1619534125, 4021483744, 9316066, 7938836, 34322, 7360410
			},
			.prefetch0 = 18491,
			.prefetch1 = 27266,
			.ram = addal_final_ram_0,
			.ram_len = 12,
		},
		.transactions = addal_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 ADDA.l -(A5), A5 dbe5",
		.initial = {
			.regs = {
				1420327856, 3759277676, 3601228356, 871114858, 2749570485, 2782793662, 391540759, 1827325915, 1487304206, 530132232, 443615084, 892620536, 1856330742, 2139311322, 1394962132, 4756136, 13334834, 33292, 1764840
			},
			.prefetch0 = 56293,
			.prefetch1 = 37769,
			.ram = addal_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1420327856, 3759277676, 3601228356, 871114858, 2749570485, 2782793662, 391540759, 1827325915, 1487304206, 530132232, 443615084, 892620536, 1856330742, 151604901, 1394962132, 4756136, 13334834, 33292, 1764842
			},
			.prefetch0 = 37769,
			.prefetch1 = 38214,
			.ram = addal_final_ram_1,
			.ram_len = 10,
		},
		.transactions = addal_transactions_1,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "002 ADDA.l -(A4), A2 d5e4",
		.initial = {
			.regs = {
				1340742914, 68833977, 4281764448, 2386594667, 1629481901, 2738347457, 1132593203, 122318442, 2196839384, 38618320, 2180683271, 191923568, 2834429824, 904682738, 3537753439, 13806942, 8460970, 525, 1908338
			},
			.prefetch0 = 54756,
			.prefetch1 = 59634,
			.ram = addal_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1340742914, 68833977, 4281764448, 2386594667, 1629481901, 2738347457, 1132593203, 122318442, 2196839384, 38618320, 1481191949, 191923568, 2834429820, 904682738, 3537753439, 13806942, 8460970, 525, 1908340
			},
			.prefetch0 = 59634,
			.prefetch1 = 13966,
			.ram = addal_final_ram_2,
			.ram_len = 10,
		},
		.transactions = addal_transactions_2,
		.transactions_len = 5,
		.lenght = 16,
	},
	{
		.name = "003 ADDA.l (A2)+, A5 dbda",
		.initial = {
			.regs = {
				1719154460, 1820686733, 561660423, 740574280, 3074816224, 4080038009, 657830358, 1278671087, 3418621886, 2317008517, 220453797, 568243559, 2656649684, 3365898108, 1930157096, 10480040, 7912156, 1564, 11677082
			},
			.prefetch0 = 56282,
			.prefetch1 = 52116,
			.ram = addal_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1719154460, 1820686733, 561660423, 740574280, 3074816224, 4080038009, 657830358, 1278671087, 3418621886, 2317008517, 220453797, 568243559, 2656649684, 3365898108, 1930157096, 10480040, 7912142, 9756, 3006008822
			},
			.prefetch0 = 23934,
			.prefetch1 = 60822,
			.ram = addal_final_ram_3,
			.ram_len = 26,
		},
		.transactions = addal_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 ADDA.l #, A7 dffc",
		.initial = {
			.regs = {
				592379492, 4236099339, 3308118381, 992320068, 766042683, 1757739938, 3587938441, 3476295157, 2697052279, 904864216, 3873986527, 1080100105, 120708701, 60704301, 2855603059, 3144184, 443628, 33810, 15413662
			},
			.prefetch0 = 57340,
			.prefetch1 = 59898,
			.ram = addal_initial_ram_4,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				592379492, 4236099339, 3308118381, 992320068, 766042683, 1757739938, 3587938441, 3476295157, 2697052279, 904864216, 3873986527, 1080100105, 120708701, 60704301, 2855603059, 3928638228, 443628, 33810, 15413668
			},
			.prefetch0 = 14231,
			.prefetch1 = 19970,
			.ram = addal_final_ram_4,
			.ram_len = 10,
		},
		.transactions = addal_transactions_4,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "005 ADDA.l (d8, A0, Xn), A0 d1f0",
		.initial = {
			.regs = {
				3052144072, 3870975742, 1592976589, 1802230696, 1039834565, 2975125594, 1061916624, 3636356484, 660590610, 788173080, 3867107360, 1960317985, 4255432819, 1190362255, 18475317, 3846712, 16472280, 1536, 11020954
			},
			.prefetch0 = 53744,
			.prefetch1 = 9993,
			.ram = addal_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3052144072, 3870975742, 1592976589, 1802230696, 1039834565, 2975125594, 1061916624, 3636356484, 826300429, 788173080, 3867107360, 1960317985, 4255432819, 1190362255, 18475317, 3846712, 16472280, 1536, 11020958
			},
			.prefetch0 = 6392,
			.prefetch1 = 3169,
			.ram = addal_final_ram_5,
			.ram_len = 12,
		},
		.transactions = addal_transactions_5,
		.transactions_len = 6,
		.lenght = 20,
	},
	{
		.name = "006 ADDA.l (d16, A7), A4 d9ef",
		.initial = {
			.regs = {
				2182954165, 1178624319, 3126292847, 3372870047, 1667026527, 924603135, 1478907866, 4044477912, 3731757052, 3924029903, 3384765273, 2818730797, 1700473227, 1370460670, 262244010, 1723012, 9101060, 1542, 6274050
			},
			.prefetch0 = 55791,
			.prefetch1 = 8875,
			.ram = addal_initial_ram_6,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2182954165, 1178624319, 3126292847, 3372870047, 1667026527, 924603135, 1478907866, 4044477912, 3731757052, 3924029903, 3384765273, 2818730797, 1700473227, 1370460670, 262244010, 1723012, 9101046, 9734, 3539499220
			},
			.prefetch0 = 28226,
			.prefetch1 = 54459,
			.ram = addal_final_ram_6,
			.ram_len = 28,
		},
		.transactions = addal_transactions_6,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "007 ADDA.l (A5), A4 d9d5",
		.initial = {
			.regs = {
				2318422519, 235916257, 4271040924, 396186245, 561020413, 598453514, 67796727, 1283821676, 3961827675, 716159891, 3036426501, 171605935, 1720698153, 149190455, 1799790495, 4914006, 8059864, 42752, 3246408
			},
			.prefetch0 = 55765,
			.prefetch1 = 18820,
			.ram = addal_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2318422519, 235916257, 4271040924, 396186245, 561020413, 598453514, 67796727, 1283821676, 3961827675, 716159891, 3036426501, 171605935, 1720698153, 149190455, 1799790495, 4914006, 8059850, 9984, 3404253246
			},
			.prefetch0 = 50180,
			.prefetch1 = 46337,
			.ram = addal_final_ram_7,
			.ram_len = 26,
		},
		.transactions = addal_transactions_7,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "008 ADDA.l A5, A7 dfcd",
		.initial = {
			.regs = {
				2587650758, 3141892015, 1438204421, 1441973306, 2883241423, 1903790165, 2273796012, 1895381019, 1371127245, 3964439764, 1908488541, 699171116, 3846374135, 436374462, 4165683594, 13137250, 11183580, 9757, 3322190
			},
			.prefetch0 = 57293,
			.prefetch1 = 26316,
			.ram = addal_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2587650758, 3141892015, 1438204421, 1441973306, 2883241423, 1903790165, 2273796012, 1895381019, 1371127245, 3964439764, 1908488541, 699171116, 3846374135, 436374462, 4165683594, 13137250, 447558042, 9757, 3322192
			},
			.prefetch0 = 26316,
			.prefetch1 = 41121,
			.ram = addal_final_ram_8,
			.ram_len = 6,
		},
		.transactions = addal_transactions_8,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "009 ADDA.l (A3), A2 d5d3",
		.initial = {
			.regs = {
				1703696252, 615989780, 3907751290, 1505263861, 4030243781, 995095254, 4047856265, 3484879957, 1062001099, 3372106860, 1707698115, 82992132, 1655505331, 4093474996, 1302511376, 8632350, 4677338, 527, 15846952
			},
			.prefetch0 = 54739,
			.prefetch1 = 50262,
			.ram = addal_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1703696252, 615989780, 3907751290, 1505263861, 4030243781, 995095254, 4047856265, 3484879957, 1062001099, 3372106860, 2077905509, 82992132, 1655505331, 4093474996, 1302511376, 8632350, 4677338, 527, 15846954
			},
			.prefetch0 = 50262,
			.prefetch1 = 14179,
			.ram = addal_final_ram_9,
			.ram_len = 10,
		},
		.transactions = addal_transactions_9,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "010 ADDA.l -(A2), A2 d5e2",
		.initial = {
			.regs = {
				2452682177, 248420474, 1603089514, 2013442661, 3709310751, 1028103679, 3855430122, 846415247, 1543809725, 3729868369, 4079384141, 4226251368, 3831525136, 210715028, 3073845438, 14775758, 7947388, 9230, 10438062
			},
			.prefetch0 = 54754,
			.prefetch1 = 60805,
			.ram = addal_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2452682177, 248420474, 1603089514, 2013442661, 3709310751, 1028103679, 3855430122, 846415247, 1543809725, 3729868369, 4079384137, 4226251368, 3831525136, 210715028, 3073845438, 14775758, 7947374, 9230, 307775148
			},
			.prefetch0 = 42680,
			.prefetch1 = 23787,
			.ram = addal_final_ram_10,
			.ram_len = 26,
		},
		.transactions = addal_transactions_10,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "011 ADDA.l D7, A6 ddc7",
		.initial = {
			.regs = {
				837185214, 632579661, 2227165487, 2558050615, 2452794327, 4257563506, 573961946, 1677488711, 2363030502, 10085902, 1627168571, 2482104354, 2383652422, 2473571557, 4161187749, 52834, 2484298, 1792, 10905060
			},
			.prefetch0 = 56775,
			.prefetch1 = 17092,
			.ram = addal_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				837185214, 632579661, 2227165487, 2558050615, 2452794327, 4257563506, 573961946, 1677488711, 2363030502, 10085902, 1627168571, 2482104354, 2383652422, 2473571557, 1543709164, 52834, 2484298, 1792, 10905062
			},
			.prefetch0 = 17092,
			.prefetch1 = 53972,
			.ram = addal_final_ram_11,
			.ram_len = 6,
		},
		.transactions = addal_transactions_11,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "012 ADDA.l (A5)+, A7 dfdd",
		.initial = {
			.regs = {
				3854620786, 674599449, 2020301629, 3033802603, 374787036, 3878377899, 4090433172, 1150173880, 3153940810, 1085445920, 2118387913, 3749303435, 3433491093, 339908937, 3667688948, 5421222, 2801558, 8217, 2194428
			},
			.prefetch0 = 57309,
			.prefetch1 = 12461,
			.ram = addal_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3854620786, 674599449, 2020301629, 3033802603, 374787036, 3878377899, 4090433172, 1150173880, 3153940810, 1085445920, 2118387913, 3749303435, 3433491093, 339908937, 3667688948, 5421222, 2801544, 8217, 1599486802
			},
			.prefetch0 = 12863,
			.prefetch1 = 5364,
			.ram = addal_final_ram_12,
			.ram_len = 26,
		},
		.transactions = addal_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 ADDA.l (A4), A7 dfd4",
		.initial = {
			.regs = {
				2162345517, 3063101131, 1792138384, 3192877498, 897397204, 4076852486, 518881758, 2533615264, 901552810, 3899309636, 519848892, 1998733247, 3734926678, 4093925507, 773912147, 11181030, 2797306, 8195, 8087150
			},
			.prefetch0 = 57300,
			.prefetch1 = 62776,
			.ram = addal_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2162345517, 3063101131, 1792138384, 3192877498, 897397204, 4076852486, 518881758, 2533615264, 901552810, 3899309636, 519848892, 1998733247, 3734926678, 4093925507, 773912147, 11181030, 3495120359, 8195, 8087152
			},
			.prefetch0 = 62776,
			.prefetch1 = 35779,
			.ram = addal_final_ram_13,
			.ram_len = 10,
		},
		.transactions = addal_transactions_13,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "014 ADDA.l (d8, A2, Xn), A5 dbf2",
		.initial = {
			.regs = {
				933636482, 2657545865, 1123712079, 2040638909, 3869550530, 3814529533, 1701403438, 2791305435, 3811975864, 1623290881, 751227724, 2767453809, 2924553790, 1210991160, 690669982, 6952454, 5162244, 8455, 5402144
			},
			.prefetch0 = 56306,
			.prefetch1 = 60281,
			.ram = addal_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				933636482, 2657545865, 1123712079, 2040638909, 3869550530, 3814529533, 1701403438, 2791305435, 3811975864, 1623290881, 751227724, 2767453809, 2924553790, 1210991160, 690669982, 6952454, 5162230, 8455, 3527588940
			},
			.prefetch0 = 35972,
			.prefetch1 = 31224,
			.ram = addal_final_ram_14,
			.ram_len = 28,
		},
		.transactions = addal_transactions_14,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "015 ADDA.l (A2)+, A2 d5da",
		.initial = {
			.regs = {
				3254162582, 3534569852, 443596678, 1088362196, 1129694904, 648627444, 1712534557, 1780328340, 2235936851, 3466145180, 3405168178, 188934549, 1750379269, 1233012407, 861115722, 9070138, 11532858, 41244, 9732744
			},
			.prefetch0 = 54746,
			.prefetch1 = 15162,
			.ram = addal_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3254162582, 3534569852, 443596678, 1088362196, 1129694904, 648627444, 1712534557, 1780328340, 2235936851, 3466145180, 2780573240, 188934549, 1750379269, 1233012407, 861115722, 9070138, 11532858, 41244, 9732746
			},
			.prefetch0 = 15162,
			.prefetch1 = 64671,
			.ram = addal_final_ram_15,
			.ram_len = 10,
		},
		.transactions = addal_transactions_15,
		.transactions_len = 4,
		.lenght = 14,
	},
};

#endif /* RBT_ADDAL_H */