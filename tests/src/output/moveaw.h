#ifndef RBT_MOVEAW_H
#define RBT_MOVEAW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte moveaw_initial_ram_0[] = {
		{ .addr = 0x241c66, .byte = 0x34 },
		{ .addr = 0x241c67, .byte = 0x6d },
		{ .addr = 0x241c68, .byte = 0xa8 },
		{ .addr = 0x241c69, .byte = 0x08 },
		{ .addr = 0x241c6a, .byte = 0xe6 },
		{ .addr = 0x241c6b, .byte = 0x95 },
		{ .addr = 0xedc136, .byte = 0x47 },
		{ .addr = 0xedc137, .byte = 0x1f },
		{ .addr = 0x241c6c, .byte = 0xad },
		{ .addr = 0x241c6d, .byte = 0x5b }
};

static const SST_RamByte moveaw_final_ram_0[] = {
		{ .addr = 0x241c66, .byte = 0x34 },
		{ .addr = 0x241c67, .byte = 0x6d },
		{ .addr = 0x241c68, .byte = 0xa8 },
		{ .addr = 0x241c69, .byte = 0x08 },
		{ .addr = 0x241c6a, .byte = 0xe6 },
		{ .addr = 0x241c6b, .byte = 0x95 },
		{ .addr = 0xedc136, .byte = 0x47 },
		{ .addr = 0xedc137, .byte = 0x1f },
		{ .addr = 0x241c6c, .byte = 0xad },
		{ .addr = 0x241c6d, .byte = 0x5b }
};

static const SST_Transaction moveaw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2366570, .data = 59029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15581494, .data = 18207, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2366572, .data = 44379, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_1[] = {
		{ .addr = 0x9570ce, .byte = 0x34 },
		{ .addr = 0x9570cf, .byte = 0x44 },
		{ .addr = 0x9570d0, .byte = 0xbf },
		{ .addr = 0x9570d1, .byte = 0xdb },
		{ .addr = 0x9570d2, .byte = 0x31 },
		{ .addr = 0x9570d3, .byte = 0xae }
};

static const SST_RamByte moveaw_final_ram_1[] = {
		{ .addr = 0x9570ce, .byte = 0x34 },
		{ .addr = 0x9570cf, .byte = 0x44 },
		{ .addr = 0x9570d0, .byte = 0xbf },
		{ .addr = 0x9570d1, .byte = 0xdb },
		{ .addr = 0x9570d2, .byte = 0x31 },
		{ .addr = 0x9570d3, .byte = 0xae }
};

static const SST_Transaction moveaw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9793746, .data = 12718, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_2[] = {
		{ .addr = 0x18c746, .byte = 0x3c },
		{ .addr = 0x18c747, .byte = 0x60 },
		{ .addr = 0x18c748, .byte = 0xf0 },
		{ .addr = 0x18c749, .byte = 0xcb },
		{ .addr = 0x00000c, .byte = 0x8c },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xbb },
		{ .addr = 0x00000f, .byte = 0xf6 },
		{ .addr = 0x06bbf6, .byte = 0x99 },
		{ .addr = 0x06bbf7, .byte = 0x5f },
		{ .addr = 0x06bbf8, .byte = 0x11 },
		{ .addr = 0x06bbf9, .byte = 0x0b }
};

static const SST_RamByte moveaw_final_ram_2[] = {
		{ .addr = 0x18c746, .byte = 0x3c },
		{ .addr = 0x18c747, .byte = 0x60 },
		{ .addr = 0x18c748, .byte = 0xf0 },
		{ .addr = 0x18c749, .byte = 0xcb },
		{ .addr = 0x5271fc, .byte = 0xc7 },
		{ .addr = 0x5271fd, .byte = 0x4a },
		{ .addr = 0x5271f8, .byte = 0x81 },
		{ .addr = 0x5271f9, .byte = 0x04 },
		{ .addr = 0x5271fa, .byte = 0x00 },
		{ .addr = 0x5271fb, .byte = 0x18 },
		{ .addr = 0x5271f6, .byte = 0x3c },
		{ .addr = 0x5271f7, .byte = 0x60 },
		{ .addr = 0x5271f4, .byte = 0xd7 },
		{ .addr = 0x5271f5, .byte = 0x8f },
		{ .addr = 0x5271f0, .byte = 0x3c },
		{ .addr = 0x5271f1, .byte = 0x71 },
		{ .addr = 0x5271f2, .byte = 0xa6 },
		{ .addr = 0x5271f3, .byte = 0xa1 },
		{ .addr = 0x00000c, .byte = 0x8c },
		{ .addr = 0x00000d, .byte = 0x06 },
		{ .addr = 0x00000e, .byte = 0xbb },
		{ .addr = 0x00000f, .byte = 0xf6 },
		{ .addr = 0x06bbf6, .byte = 0x99 },
		{ .addr = 0x06bbf7, .byte = 0x5f },
		{ .addr = 0x06bbf8, .byte = 0x11 },
		{ .addr = 0x06bbf9, .byte = 0x0b }
};

static const SST_Transaction moveaw_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10606478, .data = 55679, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5403132, .data = 51018, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5403128, .data = 33028, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5403130, .data = 24, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5403126, .data = 15456, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5403124, .data = 55183, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5403120, .data = 15473, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5403122, .data = 42657, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 35846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 441334, .data = 39263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 441336, .data = 4363, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_3[] = {
		{ .addr = 0x6097fc, .byte = 0x3e },
		{ .addr = 0x6097fd, .byte = 0x59 },
		{ .addr = 0x6097fe, .byte = 0xe5 },
		{ .addr = 0x6097ff, .byte = 0x90 },
		{ .addr = 0x0e94c2, .byte = 0xf1 },
		{ .addr = 0x0e94c3, .byte = 0xbd },
		{ .addr = 0x609800, .byte = 0xed },
		{ .addr = 0x609801, .byte = 0x09 }
};

static const SST_RamByte moveaw_final_ram_3[] = {
		{ .addr = 0x6097fc, .byte = 0x3e },
		{ .addr = 0x6097fd, .byte = 0x59 },
		{ .addr = 0x6097fe, .byte = 0xe5 },
		{ .addr = 0x6097ff, .byte = 0x90 },
		{ .addr = 0x0e94c2, .byte = 0xf1 },
		{ .addr = 0x0e94c3, .byte = 0xbd },
		{ .addr = 0x609800, .byte = 0xed },
		{ .addr = 0x609801, .byte = 0x09 }
};

static const SST_Transaction moveaw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 955586, .data = 61885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6330368, .data = 60681, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_4[] = {
		{ .addr = 0xb034c4, .byte = 0x32 },
		{ .addr = 0xb034c5, .byte = 0x4f },
		{ .addr = 0xb034c6, .byte = 0x3f },
		{ .addr = 0xb034c7, .byte = 0xef },
		{ .addr = 0xb034c8, .byte = 0x1e },
		{ .addr = 0xb034c9, .byte = 0x7c }
};

static const SST_RamByte moveaw_final_ram_4[] = {
		{ .addr = 0xb034c4, .byte = 0x32 },
		{ .addr = 0xb034c5, .byte = 0x4f },
		{ .addr = 0xb034c6, .byte = 0x3f },
		{ .addr = 0xb034c7, .byte = 0xef },
		{ .addr = 0xb034c8, .byte = 0x1e },
		{ .addr = 0xb034c9, .byte = 0x7c }
};

static const SST_Transaction moveaw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11547848, .data = 7804, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_5[] = {
		{ .addr = 0xacd3a2, .byte = 0x34 },
		{ .addr = 0xacd3a3, .byte = 0x48 },
		{ .addr = 0xacd3a4, .byte = 0xcb },
		{ .addr = 0xacd3a5, .byte = 0x8f },
		{ .addr = 0xacd3a6, .byte = 0xd8 },
		{ .addr = 0xacd3a7, .byte = 0xe2 }
};

static const SST_RamByte moveaw_final_ram_5[] = {
		{ .addr = 0xacd3a2, .byte = 0x34 },
		{ .addr = 0xacd3a3, .byte = 0x48 },
		{ .addr = 0xacd3a4, .byte = 0xcb },
		{ .addr = 0xacd3a5, .byte = 0x8f },
		{ .addr = 0xacd3a6, .byte = 0xd8 },
		{ .addr = 0xacd3a7, .byte = 0xe2 }
};

static const SST_Transaction moveaw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11326374, .data = 55522, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_6[] = {
		{ .addr = 0x234aaa, .byte = 0x34 },
		{ .addr = 0x234aab, .byte = 0x63 },
		{ .addr = 0x234aac, .byte = 0xd4 },
		{ .addr = 0x234aad, .byte = 0xf0 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0xf4 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0x34f47c, .byte = 0x63 },
		{ .addr = 0x34f47d, .byte = 0x8d },
		{ .addr = 0x34f47e, .byte = 0x8a },
		{ .addr = 0x34f47f, .byte = 0x7b }
};

static const SST_RamByte moveaw_final_ram_6[] = {
		{ .addr = 0x234aaa, .byte = 0x34 },
		{ .addr = 0x234aab, .byte = 0x63 },
		{ .addr = 0x234aac, .byte = 0xd4 },
		{ .addr = 0x234aad, .byte = 0xf0 },
		{ .addr = 0x4d6fca, .byte = 0x4a },
		{ .addr = 0x4d6fcb, .byte = 0xae },
		{ .addr = 0x4d6fc6, .byte = 0xa0 },
		{ .addr = 0x4d6fc7, .byte = 0x03 },
		{ .addr = 0x4d6fc8, .byte = 0x00 },
		{ .addr = 0x4d6fc9, .byte = 0x23 },
		{ .addr = 0x4d6fc4, .byte = 0x34 },
		{ .addr = 0x4d6fc5, .byte = 0x63 },
		{ .addr = 0x4d6fc2, .byte = 0xd8 },
		{ .addr = 0x4d6fc3, .byte = 0x9f },
		{ .addr = 0x4d6fbe, .byte = 0x34 },
		{ .addr = 0x4d6fbf, .byte = 0x75 },
		{ .addr = 0x4d6fc0, .byte = 0xc0 },
		{ .addr = 0x4d6fc1, .byte = 0x47 },
		{ .addr = 0x00000c, .byte = 0xfd },
		{ .addr = 0x00000d, .byte = 0x34 },
		{ .addr = 0x00000e, .byte = 0xf4 },
		{ .addr = 0x00000f, .byte = 0x7c },
		{ .addr = 0x34f47c, .byte = 0x63 },
		{ .addr = 0x34f47d, .byte = 0x8d },
		{ .addr = 0x34f47e, .byte = 0x8a },
		{ .addr = 0x34f47f, .byte = 0x7b }
};

static const SST_Transaction moveaw_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4708510, .data = 33060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5074890, .data = 19118, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5074886, .data = 40963, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5074888, .data = 35, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5074884, .data = 13411, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5074882, .data = 55455, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5074878, .data = 13429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5074880, .data = 49223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 64820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 62588, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3470460, .data = 25485, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3470462, .data = 35451, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_7[] = {
		{ .addr = 0xe9e36a, .byte = 0x3c },
		{ .addr = 0xe9e36b, .byte = 0x71 },
		{ .addr = 0xe9e36c, .byte = 0x77 },
		{ .addr = 0xe9e36d, .byte = 0x0a },
		{ .addr = 0xe9e36e, .byte = 0xcc },
		{ .addr = 0xe9e36f, .byte = 0xa6 },
		{ .addr = 0x07dea0, .byte = 0xf1 },
		{ .addr = 0x07dea1, .byte = 0xa5 },
		{ .addr = 0xe9e370, .byte = 0x7a },
		{ .addr = 0xe9e371, .byte = 0x2f }
};

static const SST_RamByte moveaw_final_ram_7[] = {
		{ .addr = 0xe9e36a, .byte = 0x3c },
		{ .addr = 0xe9e36b, .byte = 0x71 },
		{ .addr = 0xe9e36c, .byte = 0x77 },
		{ .addr = 0xe9e36d, .byte = 0x0a },
		{ .addr = 0xe9e36e, .byte = 0xcc },
		{ .addr = 0xe9e36f, .byte = 0xa6 },
		{ .addr = 0x07dea0, .byte = 0xf1 },
		{ .addr = 0x07dea1, .byte = 0xa5 },
		{ .addr = 0xe9e370, .byte = 0x7a },
		{ .addr = 0xe9e371, .byte = 0x2f }
};

static const SST_Transaction moveaw_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15328110, .data = 52390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 515744, .data = 61861, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15328112, .data = 31279, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_8[] = {
		{ .addr = 0x1ae090, .byte = 0x3a },
		{ .addr = 0x1ae091, .byte = 0x78 },
		{ .addr = 0x1ae092, .byte = 0x22 },
		{ .addr = 0x1ae093, .byte = 0x18 },
		{ .addr = 0x1ae094, .byte = 0xbc },
		{ .addr = 0x1ae095, .byte = 0xa6 },
		{ .addr = 0x002218, .byte = 0x17 },
		{ .addr = 0x002219, .byte = 0x7a },
		{ .addr = 0x1ae096, .byte = 0x74 },
		{ .addr = 0x1ae097, .byte = 0xb3 }
};

static const SST_RamByte moveaw_final_ram_8[] = {
		{ .addr = 0x1ae090, .byte = 0x3a },
		{ .addr = 0x1ae091, .byte = 0x78 },
		{ .addr = 0x1ae092, .byte = 0x22 },
		{ .addr = 0x1ae093, .byte = 0x18 },
		{ .addr = 0x1ae094, .byte = 0xbc },
		{ .addr = 0x1ae095, .byte = 0xa6 },
		{ .addr = 0x002218, .byte = 0x17 },
		{ .addr = 0x002219, .byte = 0x7a },
		{ .addr = 0x1ae096, .byte = 0x74 },
		{ .addr = 0x1ae097, .byte = 0xb3 }
};

static const SST_Transaction moveaw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1761428, .data = 48294, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8728, .data = 6010, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1761430, .data = 29875, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_9[] = {
		{ .addr = 0x8ebbb2, .byte = 0x3e },
		{ .addr = 0x8ebbb3, .byte = 0x6c },
		{ .addr = 0x8ebbb4, .byte = 0x28 },
		{ .addr = 0x8ebbb5, .byte = 0xeb },
		{ .addr = 0x8ebbb6, .byte = 0xd6 },
		{ .addr = 0x8ebbb7, .byte = 0xf4 },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xd7 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x38d752, .byte = 0x33 },
		{ .addr = 0x38d753, .byte = 0xb2 },
		{ .addr = 0x38d754, .byte = 0xa4 },
		{ .addr = 0x38d755, .byte = 0xa3 }
};

static const SST_RamByte moveaw_final_ram_9[] = {
		{ .addr = 0x8ebbb2, .byte = 0x3e },
		{ .addr = 0x8ebbb3, .byte = 0x6c },
		{ .addr = 0x8ebbb4, .byte = 0x28 },
		{ .addr = 0x8ebbb5, .byte = 0xeb },
		{ .addr = 0x8ebbb6, .byte = 0xd6 },
		{ .addr = 0x8ebbb7, .byte = 0xf4 },
		{ .addr = 0x360d16, .byte = 0xbb },
		{ .addr = 0x360d17, .byte = 0xb4 },
		{ .addr = 0x360d12, .byte = 0x01 },
		{ .addr = 0x360d13, .byte = 0x19 },
		{ .addr = 0x360d14, .byte = 0x00 },
		{ .addr = 0x360d15, .byte = 0x8e },
		{ .addr = 0x360d10, .byte = 0x3e },
		{ .addr = 0x360d11, .byte = 0x6c },
		{ .addr = 0x360d0e, .byte = 0xb0 },
		{ .addr = 0x360d0f, .byte = 0xa9 },
		{ .addr = 0x360d0a, .byte = 0x3e },
		{ .addr = 0x360d0b, .byte = 0x71 },
		{ .addr = 0x360d0c, .byte = 0x45 },
		{ .addr = 0x360d0d, .byte = 0x58 },
		{ .addr = 0x00000c, .byte = 0xd3 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xd7 },
		{ .addr = 0x00000f, .byte = 0x52 },
		{ .addr = 0x38d752, .byte = 0x33 },
		{ .addr = 0x38d753, .byte = 0xb2 },
		{ .addr = 0x38d754, .byte = 0xa4 },
		{ .addr = 0x38d755, .byte = 0xa3 }
};

static const SST_Transaction moveaw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9354166, .data = 55028, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5812392, .data = 25406, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3542294, .data = 48052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3542290, .data = 281, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3542292, .data = 142, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3542288, .data = 15980, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3542286, .data = 45225, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3542282, .data = 15985, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3542284, .data = 17752, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 54072, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 55122, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3725138, .data = 13234, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3725140, .data = 42147, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_10[] = {
		{ .addr = 0x38511c, .byte = 0x38 },
		{ .addr = 0x38511d, .byte = 0x4b },
		{ .addr = 0x38511e, .byte = 0x5b },
		{ .addr = 0x38511f, .byte = 0x2d },
		{ .addr = 0x385120, .byte = 0xb6 },
		{ .addr = 0x385121, .byte = 0xd0 }
};

static const SST_RamByte moveaw_final_ram_10[] = {
		{ .addr = 0x38511c, .byte = 0x38 },
		{ .addr = 0x38511d, .byte = 0x4b },
		{ .addr = 0x38511e, .byte = 0x5b },
		{ .addr = 0x38511f, .byte = 0x2d },
		{ .addr = 0x385120, .byte = 0xb6 },
		{ .addr = 0x385121, .byte = 0xd0 }
};

static const SST_Transaction moveaw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3690784, .data = 46800, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_11[] = {
		{ .addr = 0x02effa, .byte = 0x3a },
		{ .addr = 0x02effb, .byte = 0x47 },
		{ .addr = 0x02effc, .byte = 0x08 },
		{ .addr = 0x02effd, .byte = 0xa2 },
		{ .addr = 0x02effe, .byte = 0xfc },
		{ .addr = 0x02efff, .byte = 0xc6 }
};

static const SST_RamByte moveaw_final_ram_11[] = {
		{ .addr = 0x02effa, .byte = 0x3a },
		{ .addr = 0x02effb, .byte = 0x47 },
		{ .addr = 0x02effc, .byte = 0x08 },
		{ .addr = 0x02effd, .byte = 0xa2 },
		{ .addr = 0x02effe, .byte = 0xfc },
		{ .addr = 0x02efff, .byte = 0xc6 }
};

static const SST_Transaction moveaw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 192510, .data = 64710, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_12[] = {
		{ .addr = 0xd4a7e6, .byte = 0x32 },
		{ .addr = 0xd4a7e7, .byte = 0x76 },
		{ .addr = 0xd4a7e8, .byte = 0xfa },
		{ .addr = 0xd4a7e9, .byte = 0xeb },
		{ .addr = 0xd4a7ea, .byte = 0x23 },
		{ .addr = 0xd4a7eb, .byte = 0x8e },
		{ .addr = 0xaddf28, .byte = 0x4a },
		{ .addr = 0xaddf29, .byte = 0xc1 },
		{ .addr = 0xd4a7ec, .byte = 0xe4 },
		{ .addr = 0xd4a7ed, .byte = 0x5a }
};

static const SST_RamByte moveaw_final_ram_12[] = {
		{ .addr = 0xd4a7e6, .byte = 0x32 },
		{ .addr = 0xd4a7e7, .byte = 0x76 },
		{ .addr = 0xd4a7e8, .byte = 0xfa },
		{ .addr = 0xd4a7e9, .byte = 0xeb },
		{ .addr = 0xd4a7ea, .byte = 0x23 },
		{ .addr = 0xd4a7eb, .byte = 0x8e },
		{ .addr = 0xaddf28, .byte = 0x4a },
		{ .addr = 0xaddf29, .byte = 0xc1 },
		{ .addr = 0xd4a7ec, .byte = 0xe4 },
		{ .addr = 0xd4a7ed, .byte = 0x5a }
};

static const SST_Transaction moveaw_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13936618, .data = 9102, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 11394856, .data = 19137, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13936620, .data = 58458, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_13[] = {
		{ .addr = 0x16c576, .byte = 0x30 },
		{ .addr = 0x16c577, .byte = 0x61 },
		{ .addr = 0x16c578, .byte = 0xbd },
		{ .addr = 0x16c579, .byte = 0x8a },
		{ .addr = 0x566d1a, .byte = 0x6a },
		{ .addr = 0x566d1b, .byte = 0xe7 },
		{ .addr = 0x16c57a, .byte = 0x33 },
		{ .addr = 0x16c57b, .byte = 0xa6 }
};

static const SST_RamByte moveaw_final_ram_13[] = {
		{ .addr = 0x16c576, .byte = 0x30 },
		{ .addr = 0x16c577, .byte = 0x61 },
		{ .addr = 0x16c578, .byte = 0xbd },
		{ .addr = 0x16c579, .byte = 0x8a },
		{ .addr = 0x566d1a, .byte = 0x6a },
		{ .addr = 0x566d1b, .byte = 0xe7 },
		{ .addr = 0x16c57a, .byte = 0x33 },
		{ .addr = 0x16c57b, .byte = 0xa6 }
};

static const SST_Transaction moveaw_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5664026, .data = 27367, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1492346, .data = 13222, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_14[] = {
		{ .addr = 0x7ddb76, .byte = 0x3e },
		{ .addr = 0x7ddb77, .byte = 0x68 },
		{ .addr = 0x7ddb78, .byte = 0xf2 },
		{ .addr = 0x7ddb79, .byte = 0xb3 },
		{ .addr = 0x7ddb7a, .byte = 0x5e },
		{ .addr = 0x7ddb7b, .byte = 0xcf },
		{ .addr = 0x6ddd3e, .byte = 0x8a },
		{ .addr = 0x6ddd3f, .byte = 0x6a },
		{ .addr = 0x7ddb7c, .byte = 0xcf },
		{ .addr = 0x7ddb7d, .byte = 0xf1 }
};

static const SST_RamByte moveaw_final_ram_14[] = {
		{ .addr = 0x7ddb76, .byte = 0x3e },
		{ .addr = 0x7ddb77, .byte = 0x68 },
		{ .addr = 0x7ddb78, .byte = 0xf2 },
		{ .addr = 0x7ddb79, .byte = 0xb3 },
		{ .addr = 0x7ddb7a, .byte = 0x5e },
		{ .addr = 0x7ddb7b, .byte = 0xcf },
		{ .addr = 0x6ddd3e, .byte = 0x8a },
		{ .addr = 0x6ddd3f, .byte = 0x6a },
		{ .addr = 0x7ddb7c, .byte = 0xcf },
		{ .addr = 0x7ddb7d, .byte = 0xf1 }
};

static const SST_Transaction moveaw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8248186, .data = 24271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7200062, .data = 35434, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8248188, .data = 53233, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_15[] = {
		{ .addr = 0x385d44, .byte = 0x3a },
		{ .addr = 0x385d45, .byte = 0x54 },
		{ .addr = 0x385d46, .byte = 0x3f },
		{ .addr = 0x385d47, .byte = 0xcb },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x50bc44, .byte = 0xb4 },
		{ .addr = 0x50bc45, .byte = 0x60 },
		{ .addr = 0x50bc46, .byte = 0x5b },
		{ .addr = 0x50bc47, .byte = 0xfb }
};

static const SST_RamByte moveaw_final_ram_15[] = {
		{ .addr = 0x385d44, .byte = 0x3a },
		{ .addr = 0x385d45, .byte = 0x54 },
		{ .addr = 0x385d46, .byte = 0x3f },
		{ .addr = 0x385d47, .byte = 0xcb },
		{ .addr = 0x99f4ae, .byte = 0x5d },
		{ .addr = 0x99f4af, .byte = 0x46 },
		{ .addr = 0x99f4aa, .byte = 0x84 },
		{ .addr = 0x99f4ab, .byte = 0x09 },
		{ .addr = 0x99f4ac, .byte = 0x00 },
		{ .addr = 0x99f4ad, .byte = 0x38 },
		{ .addr = 0x99f4a8, .byte = 0x3a },
		{ .addr = 0x99f4a9, .byte = 0x54 },
		{ .addr = 0x99f4a6, .byte = 0x39 },
		{ .addr = 0x99f4a7, .byte = 0xff },
		{ .addr = 0x99f4a2, .byte = 0x3a },
		{ .addr = 0x99f4a3, .byte = 0x51 },
		{ .addr = 0x99f4a4, .byte = 0x5e },
		{ .addr = 0x99f4a5, .byte = 0x6e },
		{ .addr = 0x00000c, .byte = 0x64 },
		{ .addr = 0x00000d, .byte = 0x50 },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x44 },
		{ .addr = 0x50bc44, .byte = 0xb4 },
		{ .addr = 0x50bc45, .byte = 0x60 },
		{ .addr = 0x50bc46, .byte = 0x5b },
		{ .addr = 0x50bc47, .byte = 0xfb }
};

static const SST_Transaction moveaw_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7223806, .data = 37102, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089646, .data = 23878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089642, .data = 33801, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089644, .data = 56, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089640, .data = 14932, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089638, .data = 14847, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089634, .data = 14929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089636, .data = 24174, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 25680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5291076, .data = 46176, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5291078, .data = 23547, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t MOVEAW_TEST_COUNT = 16;
static const SST_TestCase moveaw[] = {
	{
		.name = "000 MOVEA.w (d16, A5), A2 346d",
		.initial = {
			.regs = {
				2633737401, 881409296, 938630714, 350777443, 1246386968, 4128130004, 773338312, 3810805693, 3643743800, 2737871102, 460026691, 3399621626, 3889092532, 2548963630, 2799262639, 9629732, 9702902, 33298, 2366570
			},
			.prefetch0 = 13421,
			.prefetch1 = 43016,
			.ram = moveaw_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2633737401, 881409296, 938630714, 350777443, 1246386968, 4128130004, 773338312, 3810805693, 3643743800, 2737871102, 18207, 3399621626, 3889092532, 2548963630, 2799262639, 9629732, 9702902, 33298, 2366574
			},
			.prefetch0 = 59029,
			.prefetch1 = 44379,
			.ram = moveaw_final_ram_0,
			.ram_len = 10,
		},
		.transactions = moveaw_transactions_0,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "001 MOVEA.w D4, A2 3444",
		.initial = {
			.regs = {
				3569710835, 2389875046, 3450703328, 458964072, 1374752335, 2682468420, 2842841321, 1837080605, 3334746194, 4117890097, 1409355951, 745122549, 2178999144, 3452493134, 2876202106, 6908740, 15649442, 8472, 9793746
			},
			.prefetch0 = 13380,
			.prefetch1 = 49115,
			.ram = moveaw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3569710835, 2389875046, 3450703328, 458964072, 1374752335, 2682468420, 2842841321, 1837080605, 3334746194, 4117890097, 3663, 745122549, 2178999144, 3452493134, 2876202106, 6908740, 15649442, 8472, 9793748
			},
			.prefetch0 = 49115,
			.prefetch1 = 12718,
			.ram = moveaw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_1,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "002 MOVEA.w -(A0), A6 3c60",
		.initial = {
			.regs = {
				4037732353, 1621284127, 505901182, 4038319472, 2529566020, 794077055, 2241475695, 348736011, 2795624337, 1193873897, 4211617809, 507648840, 3735933536, 3652349155, 1254198424, 11307980, 5403134, 33028, 1623882
			},
			.prefetch0 = 15456,
			.prefetch1 = 61643,
			.ram = moveaw_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4037732353, 1621284127, 505901182, 4038319472, 2529566020, 794077055, 2241475695, 348736011, 2795624335, 1193873897, 4211617809, 507648840, 3735933536, 3652349155, 1254198424, 11307980, 5403120, 8452, 2349251578
			},
			.prefetch0 = 39263,
			.prefetch1 = 4363,
			.ram = moveaw_final_ram_2,
			.ram_len = 26,
		},
		.transactions = moveaw_transactions_2,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "003 MOVEA.w (A1)+, A7 3e59",
		.initial = {
			.regs = {
				4071434873, 126138820, 2726333733, 1262213048, 1036330958, 4248643698, 3420556465, 1734631479, 4019578243, 1980667074, 683616412, 2335010749, 3239818184, 3658702156, 3585678382, 4322950, 15960596, 8727, 6330368
			},
			.prefetch0 = 15961,
			.prefetch1 = 58768,
			.ram = moveaw_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4071434873, 126138820, 2726333733, 1262213048, 1036330958, 4248643698, 3420556465, 1734631479, 4019578243, 1980667076, 683616412, 2335010749, 3239818184, 3658702156, 3585678382, 4322950, 4294963645, 8727, 6330370
			},
			.prefetch0 = 58768,
			.prefetch1 = 60681,
			.ram = moveaw_final_ram_3,
			.ram_len = 8,
		},
		.transactions = moveaw_transactions_3,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "004 MOVEA.w A7, A1 324f",
		.initial = {
			.regs = {
				778696114, 3050797316, 1103179712, 272342519, 2019701393, 1855268963, 2054848809, 1750240894, 85540172, 2851769632, 1703720330, 862342328, 593813206, 1899223137, 3597231377, 16734750, 1899446, 8717, 11547848
			},
			.prefetch0 = 12879,
			.prefetch1 = 16367,
			.ram = moveaw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				778696114, 3050797316, 1103179712, 272342519, 2019701393, 1855268963, 2054848809, 1750240894, 85540172, 4294966198, 1703720330, 862342328, 593813206, 1899223137, 3597231377, 16734750, 1899446, 8717, 11547850
			},
			.prefetch0 = 16367,
			.prefetch1 = 7804,
			.ram = moveaw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_4,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "005 MOVEA.w A0, A2 3448",
		.initial = {
			.regs = {
				45076077, 498805022, 521195924, 525243637, 1161621026, 3941373785, 2615641348, 1246290670, 2652924666, 2660768312, 871504277, 1571332524, 3852679580, 3947865682, 2703640811, 13624486, 9763882, 9493, 11326374
			},
			.prefetch0 = 13384,
			.prefetch1 = 52111,
			.ram = moveaw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				45076077, 498805022, 521195924, 525243637, 1161621026, 3941373785, 2615641348, 1246290670, 2652924666, 2660768312, 27386, 1571332524, 3852679580, 3947865682, 2703640811, 13624486, 9763882, 9493, 11326376
			},
			.prefetch0 = 52111,
			.prefetch1 = 55522,
			.ram = moveaw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_5,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "006 MOVEA.w -(A3), A2 3463",
		.initial = {
			.regs = {
				3430142145, 3690100517, 2245676523, 2507131327, 4204919767, 3037299708, 595803868, 2959509414, 3802327860, 3440030346, 1386889810, 3225933985, 1582357172, 2574596307, 3950012245, 9132554, 5074892, 40963, 2312878
			},
			.prefetch0 = 13411,
			.prefetch1 = 54512,
			.ram = moveaw_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3430142145, 3690100517, 2245676523, 2507131327, 4204919767, 3037299708, 595803868, 2959509414, 3802327860, 3440030346, 1386889810, 3225933983, 1582357172, 2574596307, 3950012245, 9132554, 5074878, 8195, 4248106112
			},
			.prefetch0 = 25485,
			.prefetch1 = 35451,
			.ram = moveaw_final_ram_6,
			.ram_len = 26,
		},
		.transactions = moveaw_transactions_6,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "007 MOVEA.w (d8, A1, Xn), A6 3c71",
		.initial = {
			.regs = {
				15124890, 2627508465, 1449663152, 27606877, 2069701353, 1648561319, 3950869098, 2858756123, 1212190623, 2902963835, 3064771430, 2997059299, 2821145097, 1966651229, 1689537140, 2229908, 15054288, 1561, 15328110
			},
			.prefetch0 = 15473,
			.prefetch1 = 30474,
			.ram = moveaw_initial_ram_7,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				15124890, 2627508465, 1449663152, 27606877, 2069701353, 1648561319, 3950869098, 2858756123, 1212190623, 2902963835, 3064771430, 2997059299, 2821145097, 1966651229, 4294963621, 2229908, 15054288, 1561, 15328114
			},
			.prefetch0 = 52390,
			.prefetch1 = 31279,
			.ram = moveaw_final_ram_7,
			.ram_len = 10,
		},
		.transactions = moveaw_transactions_7,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "008 MOVEA.w (xxx).w, A5 3a78",
		.initial = {
			.regs = {
				3472080896, 3070580649, 4267260177, 1595999130, 2677965418, 3243409806, 1914370532, 2698193731, 196242952, 4281053380, 3178893307, 1412188196, 1246474018, 1865095216, 715947266, 5979066, 12595824, 33801, 1761428
			},
			.prefetch0 = 14968,
			.prefetch1 = 8728,
			.ram = moveaw_initial_ram_8,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3472080896, 3070580649, 4267260177, 1595999130, 2677965418, 3243409806, 1914370532, 2698193731, 196242952, 4281053380, 3178893307, 1412188196, 1246474018, 6010, 715947266, 5979066, 12595824, 33801, 1761432
			},
			.prefetch0 = 48294,
			.prefetch1 = 29875,
			.ram = moveaw_final_ram_8,
			.ram_len = 10,
		},
		.transactions = moveaw_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 MOVEA.w (d16, A4), A7 3e6c",
		.initial = {
			.regs = {
				3196908049, 1081486236, 1313039590, 3281592558, 2824130811, 2581891922, 2231777868, 2048063018, 3642225998, 2060555664, 827348279, 3638797140, 1163429822, 3202139259, 3114646422, 2951632, 3542296, 281, 9354166
			},
			.prefetch0 = 15980,
			.prefetch1 = 10475,
			.ram = moveaw_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3196908049, 1081486236, 1313039590, 3281592558, 2824130811, 2581891922, 2231777868, 2048063018, 3642225998, 2060555664, 827348279, 3638797140, 1163429822, 3202139259, 3114646422, 2951632, 3542282, 8473, 3543717718
			},
			.prefetch0 = 13234,
			.prefetch1 = 42147,
			.ram = moveaw_final_ram_9,
			.ram_len = 28,
		},
		.transactions = moveaw_transactions_9,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "010 MOVEA.w A3, A4 384b",
		.initial = {
			.regs = {
				2502203926, 1920104724, 936859675, 3109590735, 2939007474, 3024862947, 4279650543, 277965407, 770867083, 1496305876, 3921021122, 604885231, 4006194227, 1848113872, 4238492584, 2812004, 7363526, 780, 3690784
			},
			.prefetch0 = 14411,
			.prefetch1 = 23341,
			.ram = moveaw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2502203926, 1920104724, 936859675, 3109590735, 2939007474, 3024862947, 4279650543, 277965407, 770867083, 1496305876, 3921021122, 604885231, 4294955247, 1848113872, 4238492584, 2812004, 7363526, 780, 3690786
			},
			.prefetch0 = 23341,
			.prefetch1 = 46800,
			.ram = moveaw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 MOVEA.w D7, A5 3a47",
		.initial = {
			.regs = {
				197997874, 2484706905, 3188137010, 1844213110, 1552098795, 682274832, 3047415089, 3027692796, 2593549166, 2588048617, 408711288, 229034571, 4056249523, 2470860888, 2870775259, 7073788, 9852584, 33299, 192510
			},
			.prefetch0 = 14919,
			.prefetch1 = 2210,
			.ram = moveaw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				197997874, 2484706905, 3188137010, 1844213110, 1552098795, 682274832, 3047415089, 3027692796, 2593549166, 2588048617, 408711288, 229034571, 4056249523, 4294962428, 2870775259, 7073788, 9852584, 33299, 192512
			},
			.prefetch0 = 2210,
			.prefetch1 = 64710,
			.ram = moveaw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_11,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "012 MOVEA.w (d8, A6, Xn), A1 3276",
		.initial = {
			.regs = {
				491962186, 1891646525, 2446116572, 3841875248, 521118734, 554460805, 719372328, 2285610508, 2195141379, 2894408797, 475295580, 2757537302, 4060955403, 1277754176, 3349332027, 728834, 1946136, 33793, 13936618
			},
			.prefetch0 = 12918,
			.prefetch1 = 64235,
			.ram = moveaw_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				491962186, 1891646525, 2446116572, 3841875248, 521118734, 554460805, 719372328, 2285610508, 2195141379, 19137, 475295580, 2757537302, 4060955403, 1277754176, 3349332027, 728834, 1946136, 33793, 13936622
			},
			.prefetch0 = 9102,
			.prefetch1 = 58458,
			.ram = moveaw_final_ram_12,
			.ram_len = 10,
		},
		.transactions = moveaw_transactions_12,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "013 MOVEA.w -(A1), A0 3061",
		.initial = {
			.regs = {
				1569011611, 1510348849, 1914387213, 2944059352, 1406767252, 2054452974, 679096576, 3189110699, 3367516275, 156658972, 1537419904, 4055045970, 3446202823, 2113105020, 843021006, 3033986, 14120968, 9741, 1492346
			},
			.prefetch0 = 12385,
			.prefetch1 = 48522,
			.ram = moveaw_initial_ram_13,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1569011611, 1510348849, 1914387213, 2944059352, 1406767252, 2054452974, 679096576, 3189110699, 27367, 156658970, 1537419904, 4055045970, 3446202823, 2113105020, 843021006, 3033986, 14120968, 9741, 1492348
			},
			.prefetch0 = 48522,
			.prefetch1 = 13222,
			.ram = moveaw_final_ram_13,
			.ram_len = 8,
		},
		.transactions = moveaw_transactions_13,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "014 MOVEA.w (d16, A0), A7 3e68",
		.initial = {
			.regs = {
				4152266925, 1460878600, 2431647807, 1068568235, 2210309879, 1138144499, 2431987660, 1103432710, 2959993483, 657634767, 2891065323, 1477844416, 1215475219, 3070612805, 362254249, 7282710, 4170886, 33043, 8248186
			},
			.prefetch0 = 15976,
			.prefetch1 = 62131,
			.ram = moveaw_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4152266925, 1460878600, 2431647807, 1068568235, 2210309879, 1138144499, 2431987660, 1103432710, 2959993483, 657634767, 2891065323, 1477844416, 1215475219, 3070612805, 362254249, 4294937194, 4170886, 33043, 8248190
			},
			.prefetch0 = 24271,
			.prefetch1 = 53233,
			.ram = moveaw_final_ram_14,
			.ram_len = 10,
		},
		.transactions = moveaw_transactions_14,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "015 MOVEA.w (A4), A5 3a54",
		.initial = {
			.regs = {
				2499707362, 621448431, 558272765, 1624984048, 3094215278, 3503904845, 2933271533, 1709219912, 1116908730, 3298930383, 1901298594, 1962643530, 1584282111, 2401905687, 3043925250, 12260072, 10089648, 33801, 3693896
			},
			.prefetch0 = 14932,
			.prefetch1 = 16331,
			.ram = moveaw_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2499707362, 621448431, 558272765, 1624984048, 3094215278, 3503904845, 2933271533, 1709219912, 1116908730, 3298930383, 1901298594, 1962643530, 1584282111, 2401905687, 3043925250, 12260072, 10089634, 9225, 1683012680
			},
			.prefetch0 = 46176,
			.prefetch1 = 23547,
			.ram = moveaw_final_ram_15,
			.ram_len = 26,
		},
		.transactions = moveaw_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
};

#endif /* RBT_MOVEAW_H */