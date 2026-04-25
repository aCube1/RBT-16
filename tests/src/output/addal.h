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

static const SST_RamByte addal_initial_ram_16[] = {
		{ .addr = 0x298fe4, .byte = 0xd9 },
		{ .addr = 0x298fe5, .byte = 0xd9 },
		{ .addr = 0x298fe6, .byte = 0xf4 },
		{ .addr = 0x298fe7, .byte = 0x13 },
		{ .addr = 0x2d5bdc, .byte = 0x34 },
		{ .addr = 0x2d5bdd, .byte = 0xea },
		{ .addr = 0x2d5bde, .byte = 0x1e },
		{ .addr = 0x2d5bdf, .byte = 0x8a },
		{ .addr = 0x298fe8, .byte = 0xcc },
		{ .addr = 0x298fe9, .byte = 0xe4 }
};

static const SST_RamByte addal_final_ram_16[] = {
		{ .addr = 0x298fe4, .byte = 0xd9 },
		{ .addr = 0x298fe5, .byte = 0xd9 },
		{ .addr = 0x298fe6, .byte = 0xf4 },
		{ .addr = 0x298fe7, .byte = 0x13 },
		{ .addr = 0x2d5bdc, .byte = 0x34 },
		{ .addr = 0x2d5bdd, .byte = 0xea },
		{ .addr = 0x2d5bde, .byte = 0x1e },
		{ .addr = 0x2d5bdf, .byte = 0x8a },
		{ .addr = 0x298fe8, .byte = 0xcc },
		{ .addr = 0x298fe9, .byte = 0xe4 }
};

static const SST_Transaction addal_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2972636, .data = 13546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2972638, .data = 7818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2723816, .data = 52452, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_17[] = {
		{ .addr = 0x6cad24, .byte = 0xd3 },
		{ .addr = 0x6cad25, .byte = 0xd9 },
		{ .addr = 0x6cad26, .byte = 0xa9 },
		{ .addr = 0x6cad27, .byte = 0x84 },
		{ .addr = 0x95e9b0, .byte = 0xc0 },
		{ .addr = 0x95e9b1, .byte = 0xe3 },
		{ .addr = 0x95e9b2, .byte = 0xcf },
		{ .addr = 0x95e9b3, .byte = 0x53 },
		{ .addr = 0x6cad28, .byte = 0x8b },
		{ .addr = 0x6cad29, .byte = 0xf6 }
};

static const SST_RamByte addal_final_ram_17[] = {
		{ .addr = 0x6cad24, .byte = 0xd3 },
		{ .addr = 0x6cad25, .byte = 0xd9 },
		{ .addr = 0x6cad26, .byte = 0xa9 },
		{ .addr = 0x6cad27, .byte = 0x84 },
		{ .addr = 0x95e9b0, .byte = 0xc0 },
		{ .addr = 0x95e9b1, .byte = 0xe3 },
		{ .addr = 0x95e9b2, .byte = 0xcf },
		{ .addr = 0x95e9b3, .byte = 0x53 },
		{ .addr = 0x6cad28, .byte = 0x8b },
		{ .addr = 0x6cad29, .byte = 0xf6 }
};

static const SST_Transaction addal_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9824688, .data = 49379, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9824690, .data = 53075, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7122216, .data = 35830, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_18[] = {
		{ .addr = 0x27e26a, .byte = 0xd5 },
		{ .addr = 0x27e26b, .byte = 0xf8 },
		{ .addr = 0x27e26c, .byte = 0x1d },
		{ .addr = 0x27e26d, .byte = 0xb1 },
		{ .addr = 0x27e26e, .byte = 0x9d },
		{ .addr = 0x27e26f, .byte = 0x20 },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0x1e },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0x1eb4d6, .byte = 0x5b },
		{ .addr = 0x1eb4d7, .byte = 0xbc },
		{ .addr = 0x1eb4d8, .byte = 0x32 },
		{ .addr = 0x1eb4d9, .byte = 0x2b }
};

static const SST_RamByte addal_final_ram_18[] = {
		{ .addr = 0x27e26a, .byte = 0xd5 },
		{ .addr = 0x27e26b, .byte = 0xf8 },
		{ .addr = 0x27e26c, .byte = 0x1d },
		{ .addr = 0x27e26d, .byte = 0xb1 },
		{ .addr = 0x27e26e, .byte = 0x9d },
		{ .addr = 0x27e26f, .byte = 0x20 },
		{ .addr = 0x3112e0, .byte = 0xe2 },
		{ .addr = 0x3112e1, .byte = 0x6e },
		{ .addr = 0x3112dc, .byte = 0xa5 },
		{ .addr = 0x3112dd, .byte = 0x09 },
		{ .addr = 0x3112de, .byte = 0x00 },
		{ .addr = 0x3112df, .byte = 0x27 },
		{ .addr = 0x3112da, .byte = 0xd5 },
		{ .addr = 0x3112db, .byte = 0xf8 },
		{ .addr = 0x3112d8, .byte = 0x1d },
		{ .addr = 0x3112d9, .byte = 0xb1 },
		{ .addr = 0x3112d4, .byte = 0xd5 },
		{ .addr = 0x3112d5, .byte = 0xf5 },
		{ .addr = 0x3112d6, .byte = 0x00 },
		{ .addr = 0x3112d7, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xe5 },
		{ .addr = 0x00000d, .byte = 0x1e },
		{ .addr = 0x00000e, .byte = 0xb4 },
		{ .addr = 0x00000f, .byte = 0xd6 },
		{ .addr = 0x1eb4d6, .byte = 0x5b },
		{ .addr = 0x1eb4d7, .byte = 0xbc },
		{ .addr = 0x1eb4d8, .byte = 0x32 },
		{ .addr = 0x1eb4d9, .byte = 0x2b }
};

static const SST_Transaction addal_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2613870, .data = 40224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7600, .data = 41006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216096, .data = 57966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216092, .data = 42249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216094, .data = 39, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216090, .data = 54776, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216088, .data = 7601, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216084, .data = 54773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3216086, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 58654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 46294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2012374, .data = 23484, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2012376, .data = 12843, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_19[] = {
		{ .addr = 0xb4426a, .byte = 0xd3 },
		{ .addr = 0xb4426b, .byte = 0xc0 },
		{ .addr = 0xb4426c, .byte = 0x4c },
		{ .addr = 0xb4426d, .byte = 0x36 },
		{ .addr = 0xb4426e, .byte = 0x3c },
		{ .addr = 0xb4426f, .byte = 0x14 }
};

static const SST_RamByte addal_final_ram_19[] = {
		{ .addr = 0xb4426a, .byte = 0xd3 },
		{ .addr = 0xb4426b, .byte = 0xc0 },
		{ .addr = 0xb4426c, .byte = 0x4c },
		{ .addr = 0xb4426d, .byte = 0x36 },
		{ .addr = 0xb4426e, .byte = 0x3c },
		{ .addr = 0xb4426f, .byte = 0x14 }
};

static const SST_Transaction addal_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11813486, .data = 15380, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addal_initial_ram_20[] = {
		{ .addr = 0x4425f0, .byte = 0xdf },
		{ .addr = 0x4425f1, .byte = 0xfa },
		{ .addr = 0x4425f2, .byte = 0xe6 },
		{ .addr = 0x4425f3, .byte = 0xe9 },
		{ .addr = 0x4425f4, .byte = 0x29 },
		{ .addr = 0x4425f5, .byte = 0x46 },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0xa2 },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0xdea2d2, .byte = 0x6a },
		{ .addr = 0xdea2d3, .byte = 0x4c },
		{ .addr = 0xdea2d4, .byte = 0x71 },
		{ .addr = 0xdea2d5, .byte = 0xd5 }
};

static const SST_RamByte addal_final_ram_20[] = {
		{ .addr = 0x4425f0, .byte = 0xdf },
		{ .addr = 0x4425f1, .byte = 0xfa },
		{ .addr = 0x4425f2, .byte = 0xe6 },
		{ .addr = 0x4425f3, .byte = 0xe9 },
		{ .addr = 0x4425f4, .byte = 0x29 },
		{ .addr = 0x4425f5, .byte = 0x46 },
		{ .addr = 0xdd2e08, .byte = 0x25 },
		{ .addr = 0xdd2e09, .byte = 0xf2 },
		{ .addr = 0xdd2e04, .byte = 0x86 },
		{ .addr = 0xdd2e05, .byte = 0x0b },
		{ .addr = 0xdd2e06, .byte = 0x00 },
		{ .addr = 0xdd2e07, .byte = 0x44 },
		{ .addr = 0xdd2e02, .byte = 0xdf },
		{ .addr = 0xdd2e03, .byte = 0xfa },
		{ .addr = 0xdd2e00, .byte = 0x0c },
		{ .addr = 0xdd2e01, .byte = 0xdb },
		{ .addr = 0xdd2dfc, .byte = 0xdf },
		{ .addr = 0xdd2dfd, .byte = 0xf2 },
		{ .addr = 0xdd2dfe, .byte = 0x00 },
		{ .addr = 0xdd2dff, .byte = 0x44 },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0xde },
		{ .addr = 0x00000e, .byte = 0xa2 },
		{ .addr = 0x00000f, .byte = 0xd2 },
		{ .addr = 0xdea2d2, .byte = 0x6a },
		{ .addr = 0xdea2d3, .byte = 0x4c },
		{ .addr = 0xdea2d4, .byte = 0x71 },
		{ .addr = 0xdea2d5, .byte = 0xd5 }
};

static const SST_Transaction addal_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4466164, .data = 10566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4459738, .data = 11570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14495240, .data = 9714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14495236, .data = 34315, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14495238, .data = 68, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14495234, .data = 57338, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14495232, .data = 3291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14495228, .data = 57330, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14495230, .data = 68, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 48094, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 41682, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14590674, .data = 27212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14590676, .data = 29141, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_21[] = {
		{ .addr = 0x8151ac, .byte = 0xd7 },
		{ .addr = 0x8151ad, .byte = 0xe3 },
		{ .addr = 0x8151ae, .byte = 0x8c },
		{ .addr = 0x8151af, .byte = 0xb3 },
		{ .addr = 0x00000c, .byte = 0xa3 },
		{ .addr = 0x00000d, .byte = 0x1e },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0x1e9428, .byte = 0x94 },
		{ .addr = 0x1e9429, .byte = 0x72 },
		{ .addr = 0x1e942a, .byte = 0xc0 },
		{ .addr = 0x1e942b, .byte = 0x4d }
};

static const SST_RamByte addal_final_ram_21[] = {
		{ .addr = 0x8151ac, .byte = 0xd7 },
		{ .addr = 0x8151ad, .byte = 0xe3 },
		{ .addr = 0x8151ae, .byte = 0x8c },
		{ .addr = 0x8151af, .byte = 0xb3 },
		{ .addr = 0xd4369a, .byte = 0x51 },
		{ .addr = 0xd4369b, .byte = 0xae },
		{ .addr = 0xd43696, .byte = 0x85 },
		{ .addr = 0xd43697, .byte = 0x03 },
		{ .addr = 0xd43698, .byte = 0x00 },
		{ .addr = 0xd43699, .byte = 0x81 },
		{ .addr = 0xd43694, .byte = 0xd7 },
		{ .addr = 0xd43695, .byte = 0xe3 },
		{ .addr = 0xd43692, .byte = 0x71 },
		{ .addr = 0xd43693, .byte = 0x5b },
		{ .addr = 0xd4368e, .byte = 0xd7 },
		{ .addr = 0xd4368f, .byte = 0xf1 },
		{ .addr = 0xd43690, .byte = 0x40 },
		{ .addr = 0xd43691, .byte = 0xe3 },
		{ .addr = 0x00000c, .byte = 0xa3 },
		{ .addr = 0x00000d, .byte = 0x1e },
		{ .addr = 0x00000e, .byte = 0x94 },
		{ .addr = 0x00000f, .byte = 0x28 },
		{ .addr = 0x1e9428, .byte = 0x94 },
		{ .addr = 0x1e9429, .byte = 0x72 },
		{ .addr = 0x1e942a, .byte = 0xc0 },
		{ .addr = 0x1e942b, .byte = 0x4d }
};

static const SST_Transaction addal_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14905690, .data = 57756, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907610, .data = 20910, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907606, .data = 34051, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907608, .data = 129, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907604, .data = 55267, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907602, .data = 29019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907598, .data = 55281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13907600, .data = 16611, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41758, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 37928, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2004008, .data = 38002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2004010, .data = 49229, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_22[] = {
		{ .addr = 0x1217a6, .byte = 0xd7 },
		{ .addr = 0x1217a7, .byte = 0xca },
		{ .addr = 0x1217a8, .byte = 0xd3 },
		{ .addr = 0x1217a9, .byte = 0x52 },
		{ .addr = 0x1217aa, .byte = 0xde },
		{ .addr = 0x1217ab, .byte = 0x6c }
};

static const SST_RamByte addal_final_ram_22[] = {
		{ .addr = 0x1217a6, .byte = 0xd7 },
		{ .addr = 0x1217a7, .byte = 0xca },
		{ .addr = 0x1217a8, .byte = 0xd3 },
		{ .addr = 0x1217a9, .byte = 0x52 },
		{ .addr = 0x1217aa, .byte = 0xde },
		{ .addr = 0x1217ab, .byte = 0x6c }
};

static const SST_Transaction addal_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1185706, .data = 56940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addal_initial_ram_23[] = {
		{ .addr = 0x870874, .byte = 0xdd },
		{ .addr = 0x870875, .byte = 0xec },
		{ .addr = 0x870876, .byte = 0x26 },
		{ .addr = 0x870877, .byte = 0xee },
		{ .addr = 0x870878, .byte = 0x07 },
		{ .addr = 0x870879, .byte = 0x68 },
		{ .addr = 0x00000c, .byte = 0xff },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xaa },
		{ .addr = 0x00000f, .byte = 0x02 },
		{ .addr = 0x06aa02, .byte = 0x3c },
		{ .addr = 0x06aa03, .byte = 0x32 },
		{ .addr = 0x06aa04, .byte = 0x81 },
		{ .addr = 0x06aa05, .byte = 0x68 }
};

static const SST_RamByte addal_final_ram_23[] = {
		{ .addr = 0x870874, .byte = 0xdd },
		{ .addr = 0x870875, .byte = 0xec },
		{ .addr = 0x870876, .byte = 0x26 },
		{ .addr = 0x870877, .byte = 0xee },
		{ .addr = 0x870878, .byte = 0x07 },
		{ .addr = 0x870879, .byte = 0x68 },
		{ .addr = 0x763e16, .byte = 0x08 },
		{ .addr = 0x763e17, .byte = 0x76 },
		{ .addr = 0x763e12, .byte = 0x26 },
		{ .addr = 0x763e13, .byte = 0x11 },
		{ .addr = 0x763e14, .byte = 0x00 },
		{ .addr = 0x763e15, .byte = 0x87 },
		{ .addr = 0x763e10, .byte = 0xdd },
		{ .addr = 0x763e11, .byte = 0xec },
		{ .addr = 0x763e0e, .byte = 0xd0 },
		{ .addr = 0x763e0f, .byte = 0x31 },
		{ .addr = 0x763e0a, .byte = 0xdd },
		{ .addr = 0x763e0b, .byte = 0xf5 },
		{ .addr = 0x763e0c, .byte = 0x84 },
		{ .addr = 0x763e0d, .byte = 0xb8 },
		{ .addr = 0x00000c, .byte = 0xff },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xaa },
		{ .addr = 0x00000f, .byte = 0x02 },
		{ .addr = 0x06aa02, .byte = 0x3c },
		{ .addr = 0x06aa03, .byte = 0x32 },
		{ .addr = 0x06aa04, .byte = 0x81 },
		{ .addr = 0x06aa05, .byte = 0x68 }
};

static const SST_Transaction addal_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8849528, .data = 1896, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12111920, .data = 573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7749142, .data = 2166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7749138, .data = 9745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7749140, .data = 135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7749136, .data = 56812, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7749134, .data = 53297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7749130, .data = 56821, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7749132, .data = 33976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 65286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43522, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 436738, .data = 15410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 436740, .data = 33128, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_24[] = {
		{ .addr = 0x70f7ce, .byte = 0xd5 },
		{ .addr = 0x70f7cf, .byte = 0xdc },
		{ .addr = 0x70f7d0, .byte = 0x6a },
		{ .addr = 0x70f7d1, .byte = 0x1d },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0xca },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xd4cabc, .byte = 0x5c },
		{ .addr = 0xd4cabd, .byte = 0xd7 },
		{ .addr = 0xd4cabe, .byte = 0x0d },
		{ .addr = 0xd4cabf, .byte = 0x0e }
};

static const SST_RamByte addal_final_ram_24[] = {
		{ .addr = 0x70f7ce, .byte = 0xd5 },
		{ .addr = 0x70f7cf, .byte = 0xdc },
		{ .addr = 0x70f7d0, .byte = 0x6a },
		{ .addr = 0x70f7d1, .byte = 0x1d },
		{ .addr = 0x382af2, .byte = 0xf7 },
		{ .addr = 0x382af3, .byte = 0xd0 },
		{ .addr = 0x382aee, .byte = 0x85 },
		{ .addr = 0x382aef, .byte = 0x12 },
		{ .addr = 0x382af0, .byte = 0x00 },
		{ .addr = 0x382af1, .byte = 0x70 },
		{ .addr = 0x382aec, .byte = 0xd5 },
		{ .addr = 0x382aed, .byte = 0xdc },
		{ .addr = 0x382aea, .byte = 0x36 },
		{ .addr = 0x382aeb, .byte = 0xf3 },
		{ .addr = 0x382ae6, .byte = 0xd5 },
		{ .addr = 0x382ae7, .byte = 0xd1 },
		{ .addr = 0x382ae8, .byte = 0x09 },
		{ .addr = 0x382ae9, .byte = 0x32 },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0xd4 },
		{ .addr = 0x00000e, .byte = 0xca },
		{ .addr = 0x00000f, .byte = 0xbc },
		{ .addr = 0xd4cabc, .byte = 0x5c },
		{ .addr = 0xd4cabd, .byte = 0xd7 },
		{ .addr = 0xd4cabe, .byte = 0x0d },
		{ .addr = 0xd4cabf, .byte = 0x0e }
};

static const SST_Transaction addal_transactions_24[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3290866, .data = 48250, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3681010, .data = 63440, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3681006, .data = 34066, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3681008, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3681004, .data = 54748, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3681002, .data = 14067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3680998, .data = 54737, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3681000, .data = 2354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 51900, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13945532, .data = 23767, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13945534, .data = 3342, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_25[] = {
		{ .addr = 0x8bb954, .byte = 0xdd },
		{ .addr = 0x8bb955, .byte = 0xe0 },
		{ .addr = 0x8bb956, .byte = 0x2d },
		{ .addr = 0x8bb957, .byte = 0x47 },
		{ .addr = 0x00000c, .byte = 0xcf },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x81 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x088154, .byte = 0xcc },
		{ .addr = 0x088155, .byte = 0x81 },
		{ .addr = 0x088156, .byte = 0x97 },
		{ .addr = 0x088157, .byte = 0x42 }
};

static const SST_RamByte addal_final_ram_25[] = {
		{ .addr = 0x8bb954, .byte = 0xdd },
		{ .addr = 0x8bb955, .byte = 0xe0 },
		{ .addr = 0x8bb956, .byte = 0x2d },
		{ .addr = 0x8bb957, .byte = 0x47 },
		{ .addr = 0x46838a, .byte = 0xb9 },
		{ .addr = 0x46838b, .byte = 0x56 },
		{ .addr = 0x468386, .byte = 0x01 },
		{ .addr = 0x468387, .byte = 0x0b },
		{ .addr = 0x468388, .byte = 0x00 },
		{ .addr = 0x468389, .byte = 0x8b },
		{ .addr = 0x468384, .byte = 0xdd },
		{ .addr = 0x468385, .byte = 0xe0 },
		{ .addr = 0x468382, .byte = 0xce },
		{ .addr = 0x468383, .byte = 0x09 },
		{ .addr = 0x46837e, .byte = 0xdd },
		{ .addr = 0x46837f, .byte = 0xf1 },
		{ .addr = 0x468380, .byte = 0xb4 },
		{ .addr = 0x468381, .byte = 0xdc },
		{ .addr = 0x00000c, .byte = 0xcf },
		{ .addr = 0x00000d, .byte = 0x08 },
		{ .addr = 0x00000e, .byte = 0x81 },
		{ .addr = 0x00000f, .byte = 0x54 },
		{ .addr = 0x088154, .byte = 0xcc },
		{ .addr = 0x088155, .byte = 0x81 },
		{ .addr = 0x088156, .byte = 0x97 },
		{ .addr = 0x088157, .byte = 0x42 }
};

static const SST_Transaction addal_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14470664, .data = 31935, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621194, .data = 47446, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621190, .data = 267, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621192, .data = 139, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621188, .data = 56800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621186, .data = 52745, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621182, .data = 56817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4621184, .data = 46300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53000, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 33108, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 557396, .data = 52353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 557398, .data = 38722, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_26[] = {
		{ .addr = 0xdf24da, .byte = 0xd1 },
		{ .addr = 0xdf24db, .byte = 0xc7 },
		{ .addr = 0xdf24dc, .byte = 0xdf },
		{ .addr = 0xdf24dd, .byte = 0x2a },
		{ .addr = 0xdf24de, .byte = 0x60 },
		{ .addr = 0xdf24df, .byte = 0x25 }
};

static const SST_RamByte addal_final_ram_26[] = {
		{ .addr = 0xdf24da, .byte = 0xd1 },
		{ .addr = 0xdf24db, .byte = 0xc7 },
		{ .addr = 0xdf24dc, .byte = 0xdf },
		{ .addr = 0xdf24dd, .byte = 0x2a },
		{ .addr = 0xdf24de, .byte = 0x60 },
		{ .addr = 0xdf24df, .byte = 0x25 }
};

static const SST_Transaction addal_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14623966, .data = 24613, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte addal_initial_ram_27[] = {
		{ .addr = 0x7f7fa0, .byte = 0xdf },
		{ .addr = 0x7f7fa1, .byte = 0xef },
		{ .addr = 0x7f7fa2, .byte = 0xeb },
		{ .addr = 0x7f7fa3, .byte = 0xc4 },
		{ .addr = 0x7f7fa4, .byte = 0x26 },
		{ .addr = 0x7f7fa5, .byte = 0xfb },
		{ .addr = 0x7661c8, .byte = 0x8d },
		{ .addr = 0x7661c9, .byte = 0x2c },
		{ .addr = 0x7661ca, .byte = 0xdf },
		{ .addr = 0x7661cb, .byte = 0x6d },
		{ .addr = 0x7f7fa6, .byte = 0x53 },
		{ .addr = 0x7f7fa7, .byte = 0xdf }
};

static const SST_RamByte addal_final_ram_27[] = {
		{ .addr = 0x7f7fa0, .byte = 0xdf },
		{ .addr = 0x7f7fa1, .byte = 0xef },
		{ .addr = 0x7f7fa2, .byte = 0xeb },
		{ .addr = 0x7f7fa3, .byte = 0xc4 },
		{ .addr = 0x7f7fa4, .byte = 0x26 },
		{ .addr = 0x7f7fa5, .byte = 0xfb },
		{ .addr = 0x7661c8, .byte = 0x8d },
		{ .addr = 0x7661c9, .byte = 0x2c },
		{ .addr = 0x7661ca, .byte = 0xdf },
		{ .addr = 0x7661cb, .byte = 0x6d },
		{ .addr = 0x7f7fa6, .byte = 0x53 },
		{ .addr = 0x7f7fa7, .byte = 0xdf }
};

static const SST_Transaction addal_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8355748, .data = 9979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7758280, .data = 36140, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7758282, .data = 57197, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8355750, .data = 21471, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte addal_initial_ram_28[] = {
		{ .addr = 0x56ca2e, .byte = 0xdb },
		{ .addr = 0x56ca2f, .byte = 0xf6 },
		{ .addr = 0x56ca30, .byte = 0x00 },
		{ .addr = 0x56ca31, .byte = 0x7d },
		{ .addr = 0x56ca32, .byte = 0x7a },
		{ .addr = 0x56ca33, .byte = 0x36 },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x84 },
		{ .addr = 0x40bf84, .byte = 0x92 },
		{ .addr = 0x40bf85, .byte = 0x14 },
		{ .addr = 0x40bf86, .byte = 0x35 },
		{ .addr = 0x40bf87, .byte = 0x5e }
};

static const SST_RamByte addal_final_ram_28[] = {
		{ .addr = 0x56ca2e, .byte = 0xdb },
		{ .addr = 0x56ca2f, .byte = 0xf6 },
		{ .addr = 0x56ca30, .byte = 0x00 },
		{ .addr = 0x56ca31, .byte = 0x7d },
		{ .addr = 0x56ca32, .byte = 0x7a },
		{ .addr = 0x56ca33, .byte = 0x36 },
		{ .addr = 0x5d29b4, .byte = 0xca },
		{ .addr = 0x5d29b5, .byte = 0x30 },
		{ .addr = 0x5d29b0, .byte = 0x82 },
		{ .addr = 0x5d29b1, .byte = 0x0a },
		{ .addr = 0x5d29b2, .byte = 0x00 },
		{ .addr = 0x5d29b3, .byte = 0x56 },
		{ .addr = 0x5d29ae, .byte = 0xdb },
		{ .addr = 0x5d29af, .byte = 0xf6 },
		{ .addr = 0x5d29ac, .byte = 0x4f },
		{ .addr = 0x5d29ad, .byte = 0xdf },
		{ .addr = 0x5d29a8, .byte = 0xdb },
		{ .addr = 0x5d29a9, .byte = 0xf1 },
		{ .addr = 0x5d29aa, .byte = 0x01 },
		{ .addr = 0x5d29ab, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0x7b },
		{ .addr = 0x00000d, .byte = 0x40 },
		{ .addr = 0x00000e, .byte = 0xbf },
		{ .addr = 0x00000f, .byte = 0x84 },
		{ .addr = 0x40bf84, .byte = 0x92 },
		{ .addr = 0x40bf85, .byte = 0x14 },
		{ .addr = 0x40bf86, .byte = 0x35 },
		{ .addr = 0x40bf87, .byte = 0x5e }
};

static const SST_Transaction addal_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5687858, .data = 31286, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9588702, .data = 3452, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6105524, .data = 51760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6105520, .data = 33290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6105522, .data = 86, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6105518, .data = 56310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6105516, .data = 20447, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6105512, .data = 56305, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6105514, .data = 402, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 31552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49028, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4243332, .data = 37396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4243334, .data = 13662, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_29[] = {
		{ .addr = 0x75b0d0, .byte = 0xd9 },
		{ .addr = 0x75b0d1, .byte = 0xdc },
		{ .addr = 0x75b0d2, .byte = 0x25 },
		{ .addr = 0x75b0d3, .byte = 0x4b },
		{ .addr = 0x00000c, .byte = 0x6f },
		{ .addr = 0x00000d, .byte = 0x78 },
		{ .addr = 0x00000e, .byte = 0x14 },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x7814e4, .byte = 0x63 },
		{ .addr = 0x7814e5, .byte = 0xd1 },
		{ .addr = 0x7814e6, .byte = 0x7a },
		{ .addr = 0x7814e7, .byte = 0x8c }
};

static const SST_RamByte addal_final_ram_29[] = {
		{ .addr = 0x75b0d0, .byte = 0xd9 },
		{ .addr = 0x75b0d1, .byte = 0xdc },
		{ .addr = 0x75b0d2, .byte = 0x25 },
		{ .addr = 0x75b0d3, .byte = 0x4b },
		{ .addr = 0xfe6382, .byte = 0xb0 },
		{ .addr = 0xfe6383, .byte = 0xd2 },
		{ .addr = 0xfe637e, .byte = 0x25 },
		{ .addr = 0xfe637f, .byte = 0x0d },
		{ .addr = 0xfe6380, .byte = 0x00 },
		{ .addr = 0xfe6381, .byte = 0x75 },
		{ .addr = 0xfe637c, .byte = 0xd9 },
		{ .addr = 0xfe637d, .byte = 0xdc },
		{ .addr = 0xfe637a, .byte = 0xd2 },
		{ .addr = 0xfe637b, .byte = 0x0d },
		{ .addr = 0xfe6376, .byte = 0xd9 },
		{ .addr = 0xfe6377, .byte = 0xd5 },
		{ .addr = 0xfe6378, .byte = 0x55 },
		{ .addr = 0xfe6379, .byte = 0xba },
		{ .addr = 0x00000c, .byte = 0x6f },
		{ .addr = 0x00000d, .byte = 0x78 },
		{ .addr = 0x00000e, .byte = 0x14 },
		{ .addr = 0x00000f, .byte = 0xe4 },
		{ .addr = 0x7814e4, .byte = 0x63 },
		{ .addr = 0x7814e5, .byte = 0xd1 },
		{ .addr = 0x7814e6, .byte = 0x7a },
		{ .addr = 0x7814e7, .byte = 0x8c }
};

static const SST_Transaction addal_transactions_29[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12243468, .data = 45212, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16671618, .data = 45266, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16671614, .data = 9485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16671616, .data = 117, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16671612, .data = 55772, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16671610, .data = 53773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16671606, .data = 55765, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16671608, .data = 21946, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 28536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 5348, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7869668, .data = 25553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7869670, .data = 31372, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_30[] = {
		{ .addr = 0x89b9ac, .byte = 0xdd },
		{ .addr = 0x89b9ad, .byte = 0xfb },
		{ .addr = 0x89b9ae, .byte = 0x8b },
		{ .addr = 0x89b9af, .byte = 0x7d },
		{ .addr = 0x89b9b0, .byte = 0x9a },
		{ .addr = 0x89b9b1, .byte = 0xc8 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0x2e },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x3e2e16, .byte = 0xc0 },
		{ .addr = 0x3e2e17, .byte = 0xae },
		{ .addr = 0x3e2e18, .byte = 0x6d },
		{ .addr = 0x3e2e19, .byte = 0x83 }
};

static const SST_RamByte addal_final_ram_30[] = {
		{ .addr = 0x89b9ac, .byte = 0xdd },
		{ .addr = 0x89b9ad, .byte = 0xfb },
		{ .addr = 0x89b9ae, .byte = 0x8b },
		{ .addr = 0x89b9af, .byte = 0x7d },
		{ .addr = 0x89b9b0, .byte = 0x9a },
		{ .addr = 0x89b9b1, .byte = 0xc8 },
		{ .addr = 0x4adcc4, .byte = 0xb9 },
		{ .addr = 0x4adcc5, .byte = 0xae },
		{ .addr = 0x4adcc0, .byte = 0x86 },
		{ .addr = 0x4adcc1, .byte = 0x1d },
		{ .addr = 0x4adcc2, .byte = 0x00 },
		{ .addr = 0x4adcc3, .byte = 0x89 },
		{ .addr = 0x4adcbe, .byte = 0xdd },
		{ .addr = 0x4adcbf, .byte = 0xfb },
		{ .addr = 0x4adcbc, .byte = 0x38 },
		{ .addr = 0x4adcbd, .byte = 0x77 },
		{ .addr = 0x4adcb8, .byte = 0xdd },
		{ .addr = 0x4adcb9, .byte = 0xf2 },
		{ .addr = 0x4adcba, .byte = 0x7f },
		{ .addr = 0x4adcbb, .byte = 0xb3 },
		{ .addr = 0x00000c, .byte = 0xe1 },
		{ .addr = 0x00000d, .byte = 0x3e },
		{ .addr = 0x00000e, .byte = 0x2e },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0x3e2e16, .byte = 0xc0 },
		{ .addr = 0x3e2e17, .byte = 0xae },
		{ .addr = 0x3e2e18, .byte = 0x6d },
		{ .addr = 0x3e2e19, .byte = 0x83 }
};

static const SST_Transaction addal_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9025968, .data = 39624, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11745398, .data = 59998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4906180, .data = 47534, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4906176, .data = 34333, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4906178, .data = 137, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4906174, .data = 56827, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4906172, .data = 14455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4906168, .data = 56818, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4906170, .data = 32691, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 57662, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 11798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4075030, .data = 49326, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4075032, .data = 28035, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte addal_initial_ram_31[] = {
		{ .addr = 0x542a40, .byte = 0xd9 },
		{ .addr = 0x542a41, .byte = 0xf7 },
		{ .addr = 0x542a42, .byte = 0xde },
		{ .addr = 0x542a43, .byte = 0xbc },
		{ .addr = 0x542a44, .byte = 0xff },
		{ .addr = 0x542a45, .byte = 0xda },
		{ .addr = 0xba50dc, .byte = 0x2d },
		{ .addr = 0xba50dd, .byte = 0x16 },
		{ .addr = 0xba50de, .byte = 0x00 },
		{ .addr = 0xba50df, .byte = 0x39 },
		{ .addr = 0x542a46, .byte = 0x10 },
		{ .addr = 0x542a47, .byte = 0x07 }
};

static const SST_RamByte addal_final_ram_31[] = {
		{ .addr = 0x542a40, .byte = 0xd9 },
		{ .addr = 0x542a41, .byte = 0xf7 },
		{ .addr = 0x542a42, .byte = 0xde },
		{ .addr = 0x542a43, .byte = 0xbc },
		{ .addr = 0x542a44, .byte = 0xff },
		{ .addr = 0x542a45, .byte = 0xda },
		{ .addr = 0xba50dc, .byte = 0x2d },
		{ .addr = 0xba50dd, .byte = 0x16 },
		{ .addr = 0xba50de, .byte = 0x00 },
		{ .addr = 0xba50df, .byte = 0x39 },
		{ .addr = 0x542a46, .byte = 0x10 },
		{ .addr = 0x542a47, .byte = 0x07 }
};

static const SST_Transaction addal_transactions_31[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5515844, .data = 65498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12210396, .data = 11542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12210398, .data = 57, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5515846, .data = 4103, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

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
	{
		.name = "016 ADDA.l (A1)+, A4 d9d9",
		.initial = {
			.regs = {
				2602980429, 401500109, 4133382435, 1615486994, 3814291760, 3141785322, 2746504321, 3578426863, 891613395, 1445813212, 3337659384, 3199433531, 595965834, 556083134, 4269292449, 2211774, 11137720, 8472, 2723816
			},
			.prefetch0 = 55769,
			.prefetch1 = 62483,
			.ram = addal_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2602980429, 401500109, 4133382435, 1615486994, 3814291760, 3141785322, 2746504321, 3578426863, 891613395, 1445813216, 3337659384, 3199433531, 1483724308, 556083134, 4269292449, 2211774, 11137720, 8472, 2723818
			},
			.prefetch0 = 62483,
			.prefetch1 = 52452,
			.ram = addal_final_ram_16,
			.ram_len = 10,
		},
		.transactions = addal_transactions_16,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "017 ADDA.l (A1)+, A1 d3d9",
		.initial = {
			.regs = {
				3268678876, 952542287, 3920095419, 3207489919, 4284931184, 3146370334, 3603985602, 2926314895, 1656585875, 3214272944, 1401622939, 1215949238, 1548390486, 1232736002, 4265831701, 4794328, 1910386, 42525, 7122216
			},
			.prefetch0 = 54233,
			.prefetch1 = 43396,
			.ram = addal_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3268678876, 952542287, 3920095419, 3207489919, 4284931184, 3146370334, 3603985602, 2926314895, 1656585875, 2155460871, 1401622939, 1215949238, 1548390486, 1232736002, 4265831701, 4794328, 1910386, 42525, 7122218
			},
			.prefetch0 = 43396,
			.prefetch1 = 35830,
			.ram = addal_final_ram_17,
			.ram_len = 10,
		},
		.transactions = addal_transactions_17,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "018 ADDA.l (xxx).w, A2 d5f8",
		.initial = {
			.regs = {
				3115972557, 795223978, 2283121134, 2598622776, 324516897, 190878260, 1603344523, 1283163729, 1241258925, 34256926, 3721946605, 149778024, 1074444948, 2457486421, 4139085859, 1173518, 3216098, 42249, 2613870
			},
			.prefetch0 = 54776,
			.prefetch1 = 7601,
			.ram = addal_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3115972557, 795223978, 2283121134, 2598622776, 324516897, 190878260, 1603344523, 1283163729, 1241258925, 34256926, 3721946605, 149778024, 1074444948, 2457486421, 4139085859, 1173518, 3216084, 9481, 3843994842
			},
			.prefetch0 = 23484,
			.prefetch1 = 12843,
			.ram = addal_final_ram_18,
			.ram_len = 28,
		},
		.transactions = addal_transactions_18,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "019 ADDA.l D0, A1 d3c0",
		.initial = {
			.regs = {
				1239145592, 3660274856, 129132683, 3893820659, 1559258097, 1244265883, 3033816855, 1996090251, 1292222894, 1616113935, 2145353669, 1274737243, 2024020422, 2029102654, 914099111, 5404246, 12778850, 33046, 11813486
			},
			.prefetch0 = 54208,
			.prefetch1 = 19510,
			.ram = addal_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1239145592, 3660274856, 129132683, 3893820659, 1559258097, 1244265883, 3033816855, 1996090251, 1292222894, 2855259527, 2145353669, 1274737243, 2024020422, 2029102654, 914099111, 5404246, 12778850, 33046, 11813488
			},
			.prefetch0 = 19510,
			.prefetch1 = 15380,
			.ram = addal_final_ram_19,
			.ram_len = 6,
		},
		.transactions = addal_transactions_19,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "020 ADDA.l (d16, PC), A7 dffa",
		.initial = {
			.regs = {
				8711491, 1416995198, 515129092, 1724628812, 1399460986, 2658252775, 2269201930, 4003348757, 1958392548, 2089535100, 2721270627, 2554474126, 40041018, 1796849872, 1045206779, 15354884, 14495242, 34315, 4466164
			},
			.prefetch0 = 57338,
			.prefetch1 = 59113,
			.ram = addal_initial_ram_20,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				8711491, 1416995198, 515129092, 1724628812, 1399460986, 2658252775, 2269201930, 4003348757, 1958392548, 2089535100, 2721270627, 2554474126, 40041018, 1796849872, 1045206779, 15354884, 14495228, 9739, 3151930070
			},
			.prefetch0 = 27212,
			.prefetch1 = 29141,
			.ram = addal_final_ram_20,
			.ram_len = 28,
		},
		.transactions = addal_transactions_20,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "021 ADDA.l -(A3), A3 d7e3",
		.initial = {
			.regs = {
				902520249, 2222331479, 3843413800, 704330224, 3118403063, 399389468, 1771205357, 379197171, 168816198, 4193453462, 3504987193, 1088647519, 4025585154, 2530153452, 218229593, 5217182, 13907612, 34051, 8475056
			},
			.prefetch0 = 55267,
			.prefetch1 = 36019,
			.ram = addal_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				902520249, 2222331479, 3843413800, 704330224, 3118403063, 399389468, 1771205357, 379197171, 168816198, 4193453462, 3504987193, 1088647515, 4025585154, 2530153452, 218229593, 5217182, 13907598, 9475, 2736690220
			},
			.prefetch0 = 38002,
			.prefetch1 = 49229,
			.ram = addal_final_ram_21,
			.ram_len = 26,
		},
		.transactions = addal_transactions_21,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "022 ADDA.l A2, A3 d7ca",
		.initial = {
			.regs = {
				2832540407, 2353595359, 993145446, 122614756, 3534257101, 2044509578, 1197877033, 2958639870, 940078813, 3794767009, 369424966, 1933586178, 2689446706, 3660338881, 2135199706, 14807160, 467896, 34325, 1185706
			},
			.prefetch0 = 55242,
			.prefetch1 = 54098,
			.ram = addal_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2832540407, 2353595359, 993145446, 122614756, 3534257101, 2044509578, 1197877033, 2958639870, 940078813, 3794767009, 369424966, 2303011144, 2689446706, 3660338881, 2135199706, 14807160, 467896, 34325, 1185708
			},
			.prefetch0 = 54098,
			.prefetch1 = 56940,
			.ram = addal_final_ram_22,
			.ram_len = 6,
		},
		.transactions = addal_transactions_22,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "023 ADDA.l (d16, A4), A6 ddec",
		.initial = {
			.regs = {
				1605756009, 139190190, 989542815, 2845783841, 2471474231, 1389560640, 886122672, 355921270, 4127383369, 2631120955, 3328462944, 3388381780, 2226694467, 3359982136, 400947009, 11913530, 7749144, 9745, 8849528
			},
			.prefetch0 = 56812,
			.prefetch1 = 9966,
			.ram = addal_initial_ram_23,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1605756009, 139190190, 989542815, 2845783841, 2471474231, 1389560640, 886122672, 355921270, 4127383369, 2631120955, 3328462944, 3388381780, 2226694467, 3359982136, 400947009, 11913530, 7749130, 9745, 4278626822
			},
			.prefetch0 = 15410,
			.prefetch1 = 33128,
			.ram = addal_final_ram_23,
			.ram_len = 28,
		},
		.transactions = addal_transactions_23,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "024 ADDA.l (A4)+, A2 d5dc",
		.initial = {
			.regs = {
				4281781374, 4074794097, 3170360534, 3490727743, 3351412673, 2360474653, 3204826296, 3897002220, 3900740422, 1922186794, 3718211067, 1000670004, 154285811, 2349597926, 3665322595, 2683088, 3681012, 34066, 7403474
			},
			.prefetch0 = 54748,
			.prefetch1 = 27165,
			.ram = addal_initial_ram_24,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4281781374, 4074794097, 3170360534, 3490727743, 3351412673, 2360474653, 3204826296, 3897002220, 3900740422, 1922186794, 3718211067, 1000670004, 154285811, 2349597926, 3665322595, 2683088, 3680998, 9490, 433375936
			},
			.prefetch0 = 23767,
			.prefetch1 = 3342,
			.ram = addal_final_ram_24,
			.ram_len = 26,
		},
		.transactions = addal_transactions_24,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "025 ADDA.l -(A0), A6 dde0",
		.initial = {
			.regs = {
				4254632074, 3175227960, 1444648840, 389467433, 952271613, 773013848, 2691954918, 1726795104, 3034369549, 2340098067, 3406208523, 3931577549, 234310958, 1121525538, 931745730, 1369286, 4621196, 267, 9156952
			},
			.prefetch0 = 56800,
			.prefetch1 = 11591,
			.ram = addal_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4254632074, 3175227960, 1444648840, 389467433, 952271613, 773013848, 2691954918, 1726795104, 3034369545, 2340098067, 3406208523, 3931577549, 234310958, 1121525538, 931745730, 1369286, 4621182, 8459, 3473441112
			},
			.prefetch0 = 52353,
			.prefetch1 = 38722,
			.ram = addal_final_ram_25,
			.ram_len = 26,
		},
		.transactions = addal_transactions_25,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "026 ADDA.l D7, A0 d1c7",
		.initial = {
			.regs = {
				679507467, 1600982885, 142132791, 1314609082, 3337028530, 1041424393, 4253507052, 1638215813, 3863554129, 881392949, 3965927349, 4001815863, 1628586456, 4138430554, 1407455470, 8169780, 7577178, 40960, 14623966
			},
			.prefetch0 = 53703,
			.prefetch1 = 57130,
			.ram = addal_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				679507467, 1600982885, 142132791, 1314609082, 3337028530, 1041424393, 4253507052, 1638215813, 1206802646, 881392949, 3965927349, 4001815863, 1628586456, 4138430554, 1407455470, 8169780, 7577178, 40960, 14623968
			},
			.prefetch0 = 57130,
			.prefetch1 = 24613,
			.ram = addal_final_ram_26,
			.ram_len = 6,
		},
		.transactions = addal_transactions_26,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "027 ADDA.l (d16, A7), A7 dfef",
		.initial = {
			.regs = {
				1250132306, 1867426676, 953960085, 2803923810, 1662699734, 2279190493, 2595654789, 208635474, 3103487128, 497424048, 112883058, 1201565229, 260329635, 1140345534, 3669604244, 7763460, 8525750, 33563, 8355748
			},
			.prefetch0 = 57327,
			.prefetch1 = 60356,
			.ram = addal_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1250132306, 1867426676, 953960085, 2803923810, 1662699734, 2279190493, 2595654789, 208635474, 3103487128, 497424048, 112883058, 1201565229, 260329635, 1140345534, 3669604244, 2376291697, 8525750, 33563, 8355752
			},
			.prefetch0 = 9979,
			.prefetch1 = 21471,
			.ram = addal_final_ram_27,
			.ram_len = 12,
		},
		.transactions = addal_transactions_27,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "028 ADDA.l (d8, A6, Xn), A5 dbf6",
		.initial = {
			.regs = {
				2359668018, 3152764018, 3280646847, 2365914798, 2577880269, 520998306, 3010732151, 3256511259, 1943930857, 4195038207, 4264484573, 2964726722, 743371093, 3554138443, 26386992, 11433340, 6105526, 33290, 5687858
			},
			.prefetch0 = 56310,
			.prefetch1 = 125,
			.ram = addal_initial_ram_28,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2359668018, 3152764018, 3280646847, 2365914798, 2577880269, 520998306, 3010732151, 3256511259, 1943930857, 4195038207, 4264484573, 2964726722, 743371093, 3554138443, 26386992, 11433340, 6105512, 8714, 2067840904
			},
			.prefetch0 = 37396,
			.prefetch1 = 13662,
			.ram = addal_final_ram_28,
			.ram_len = 28,
		},
		.transactions = addal_transactions_28,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "029 ADDA.l (A4)+, A4 d9dc",
		.initial = {
			.regs = {
				484371385, 1817737603, 1204834367, 1332398685, 1105991645, 1928839466, 1660506202, 2486130078, 4018195569, 63405043, 269732083, 671058479, 1438306829, 3264104819, 1474139526, 112188, 16671620, 9485, 7712980
			},
			.prefetch0 = 55772,
			.prefetch1 = 9547,
			.ram = addal_initial_ram_29,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				484371385, 1817737603, 1204834367, 1332398685, 1105991645, 1928839466, 1660506202, 2486130078, 4018195569, 63405043, 269732083, 671058479, 1438306829, 3264104819, 1474139526, 112188, 16671606, 9485, 1870140648
			},
			.prefetch0 = 25553,
			.prefetch1 = 31372,
			.ram = addal_final_ram_29,
			.ram_len = 26,
		},
		.transactions = addal_transactions_29,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "030 ADDA.l (d8, PC, Xn), A6 ddfb",
		.initial = {
			.regs = {
				767733953, 1299645295, 2059487543, 3294702615, 2807566761, 1094666692, 695293634, 377704463, 2133425740, 1203345076, 403995946, 1832613428, 231979306, 983961884, 879960637, 11001190, 4906182, 34333, 9025968
			},
			.prefetch0 = 56827,
			.prefetch1 = 35709,
			.ram = addal_initial_ram_30,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				767733953, 1299645295, 2059487543, 3294702615, 2807566761, 1094666692, 695293634, 377704463, 2133425740, 1203345076, 403995946, 1832613428, 231979306, 983961884, 879960637, 11001190, 4906168, 9757, 3778948634
			},
			.prefetch0 = 49326,
			.prefetch1 = 28035,
			.ram = addal_final_ram_30,
			.ram_len = 28,
		},
		.transactions = addal_transactions_30,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "031 ADDA.l (d8, A7, Xn), A4 d9f7",
		.initial = {
			.regs = {
				4223355832, 2046598767, 3243438608, 4209296308, 3843338248, 871582324, 213746955, 1451095380, 912314003, 1106404515, 3109938330, 2679071658, 2858914537, 3825336308, 2214375726, 13894346, 12079404, 9499, 5515844
			},
			.prefetch0 = 55799,
			.prefetch1 = 57020,
			.ram = addal_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4223355832, 2046598767, 3243438608, 4209296308, 3843338248, 871582324, 213746955, 1451095380, 912314003, 1106404515, 3109938330, 2679071658, 3615331106, 3825336308, 2214375726, 13894346, 12079404, 9499, 5515848
			},
			.prefetch0 = 65498,
			.prefetch1 = 4103,
			.ram = addal_final_ram_31,
			.ram_len = 12,
		},
		.transactions = addal_transactions_31,
		.transactions_len = 6,
		.lenght = 20,
	},
};

#endif /* RBT_ADDAL_H */