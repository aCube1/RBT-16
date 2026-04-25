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

static const SST_RamByte moveaw_initial_ram_16[] = {
		{ .addr = 0x258fe4, .byte = 0x32 },
		{ .addr = 0x258fe5, .byte = 0x6c },
		{ .addr = 0x258fe6, .byte = 0x60 },
		{ .addr = 0x258fe7, .byte = 0xc1 },
		{ .addr = 0x258fe8, .byte = 0x3c },
		{ .addr = 0x258fe9, .byte = 0x66 },
		{ .addr = 0x405d5a, .byte = 0xac },
		{ .addr = 0x405d5b, .byte = 0xce },
		{ .addr = 0x258fea, .byte = 0xd1 },
		{ .addr = 0x258feb, .byte = 0x12 }
};

static const SST_RamByte moveaw_final_ram_16[] = {
		{ .addr = 0x258fe4, .byte = 0x32 },
		{ .addr = 0x258fe5, .byte = 0x6c },
		{ .addr = 0x258fe6, .byte = 0x60 },
		{ .addr = 0x258fe7, .byte = 0xc1 },
		{ .addr = 0x258fe8, .byte = 0x3c },
		{ .addr = 0x258fe9, .byte = 0x66 },
		{ .addr = 0x405d5a, .byte = 0xac },
		{ .addr = 0x405d5b, .byte = 0xce },
		{ .addr = 0x258fea, .byte = 0xd1 },
		{ .addr = 0x258feb, .byte = 0x12 }
};

static const SST_Transaction moveaw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2461672, .data = 15462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4218202, .data = 44238, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2461674, .data = 53522, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_17[] = {
		{ .addr = 0x3f7e76, .byte = 0x3c },
		{ .addr = 0x3f7e77, .byte = 0x48 },
		{ .addr = 0x3f7e78, .byte = 0xd5 },
		{ .addr = 0x3f7e79, .byte = 0x0c },
		{ .addr = 0x3f7e7a, .byte = 0x95 },
		{ .addr = 0x3f7e7b, .byte = 0x89 }
};

static const SST_RamByte moveaw_final_ram_17[] = {
		{ .addr = 0x3f7e76, .byte = 0x3c },
		{ .addr = 0x3f7e77, .byte = 0x48 },
		{ .addr = 0x3f7e78, .byte = 0xd5 },
		{ .addr = 0x3f7e79, .byte = 0x0c },
		{ .addr = 0x3f7e7a, .byte = 0x95 },
		{ .addr = 0x3f7e7b, .byte = 0x89 }
};

static const SST_Transaction moveaw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4161146, .data = 38281, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_18[] = {
		{ .addr = 0x636aea, .byte = 0x32 },
		{ .addr = 0x636aeb, .byte = 0x50 },
		{ .addr = 0x636aec, .byte = 0xf4 },
		{ .addr = 0x636aed, .byte = 0xee },
		{ .addr = 0x00000c, .byte = 0x42 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xb2403a, .byte = 0xce },
		{ .addr = 0xb2403b, .byte = 0x83 },
		{ .addr = 0xb2403c, .byte = 0xd9 },
		{ .addr = 0xb2403d, .byte = 0xe5 }
};

static const SST_RamByte moveaw_final_ram_18[] = {
		{ .addr = 0x636aea, .byte = 0x32 },
		{ .addr = 0x636aeb, .byte = 0x50 },
		{ .addr = 0x636aec, .byte = 0xf4 },
		{ .addr = 0x636aed, .byte = 0xee },
		{ .addr = 0x114d70, .byte = 0x6a },
		{ .addr = 0x114d71, .byte = 0xec },
		{ .addr = 0x114d6c, .byte = 0xa5 },
		{ .addr = 0x114d6d, .byte = 0x01 },
		{ .addr = 0x114d6e, .byte = 0x00 },
		{ .addr = 0x114d6f, .byte = 0x63 },
		{ .addr = 0x114d6a, .byte = 0x32 },
		{ .addr = 0x114d6b, .byte = 0x50 },
		{ .addr = 0x114d68, .byte = 0xb9 },
		{ .addr = 0x114d69, .byte = 0x6d },
		{ .addr = 0x114d64, .byte = 0x32 },
		{ .addr = 0x114d65, .byte = 0x55 },
		{ .addr = 0x114d66, .byte = 0x36 },
		{ .addr = 0x114d67, .byte = 0xe4 },
		{ .addr = 0x00000c, .byte = 0x42 },
		{ .addr = 0x00000d, .byte = 0xb2 },
		{ .addr = 0x00000e, .byte = 0x40 },
		{ .addr = 0x00000f, .byte = 0x3a },
		{ .addr = 0xb2403a, .byte = 0xce },
		{ .addr = 0xb2403b, .byte = 0x83 },
		{ .addr = 0xb2403c, .byte = 0xd9 },
		{ .addr = 0xb2403d, .byte = 0xe5 }
};

static const SST_Transaction moveaw_transactions_18[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14989676, .data = 27725, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1133936, .data = 27372, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1133932, .data = 42241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1133934, .data = 99, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1133930, .data = 12880, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1133928, .data = 47469, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1133924, .data = 12885, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1133926, .data = 14052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 17074, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16442, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11681850, .data = 52867, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 11681852, .data = 55781, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_19[] = {
		{ .addr = 0x1ed8cc, .byte = 0x3e },
		{ .addr = 0x1ed8cd, .byte = 0x4f },
		{ .addr = 0x1ed8ce, .byte = 0xfc },
		{ .addr = 0x1ed8cf, .byte = 0x83 },
		{ .addr = 0x1ed8d0, .byte = 0x37 },
		{ .addr = 0x1ed8d1, .byte = 0xca }
};

static const SST_RamByte moveaw_final_ram_19[] = {
		{ .addr = 0x1ed8cc, .byte = 0x3e },
		{ .addr = 0x1ed8cd, .byte = 0x4f },
		{ .addr = 0x1ed8ce, .byte = 0xfc },
		{ .addr = 0x1ed8cf, .byte = 0x83 },
		{ .addr = 0x1ed8d0, .byte = 0x37 },
		{ .addr = 0x1ed8d1, .byte = 0xca }
};

static const SST_Transaction moveaw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2021584, .data = 14282, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_20[] = {
		{ .addr = 0x5319c2, .byte = 0x3c },
		{ .addr = 0x5319c3, .byte = 0x78 },
		{ .addr = 0x5319c4, .byte = 0x16 },
		{ .addr = 0x5319c5, .byte = 0x3f },
		{ .addr = 0x5319c6, .byte = 0xc9 },
		{ .addr = 0x5319c7, .byte = 0x0a },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0xf6 },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x84f646, .byte = 0xe4 },
		{ .addr = 0x84f647, .byte = 0xc8 },
		{ .addr = 0x84f648, .byte = 0xd5 },
		{ .addr = 0x84f649, .byte = 0x42 }
};

static const SST_RamByte moveaw_final_ram_20[] = {
		{ .addr = 0x5319c2, .byte = 0x3c },
		{ .addr = 0x5319c3, .byte = 0x78 },
		{ .addr = 0x5319c4, .byte = 0x16 },
		{ .addr = 0x5319c5, .byte = 0x3f },
		{ .addr = 0x5319c6, .byte = 0xc9 },
		{ .addr = 0x5319c7, .byte = 0x0a },
		{ .addr = 0x6b30f8, .byte = 0x19 },
		{ .addr = 0x6b30f9, .byte = 0xc6 },
		{ .addr = 0x6b30f4, .byte = 0xa0 },
		{ .addr = 0x6b30f5, .byte = 0x0f },
		{ .addr = 0x6b30f6, .byte = 0x00 },
		{ .addr = 0x6b30f7, .byte = 0x53 },
		{ .addr = 0x6b30f2, .byte = 0x3c },
		{ .addr = 0x6b30f3, .byte = 0x78 },
		{ .addr = 0x6b30f0, .byte = 0x16 },
		{ .addr = 0x6b30f1, .byte = 0x3f },
		{ .addr = 0x6b30ec, .byte = 0x3c },
		{ .addr = 0x6b30ed, .byte = 0x75 },
		{ .addr = 0x6b30ee, .byte = 0x00 },
		{ .addr = 0x6b30ef, .byte = 0x00 },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x84 },
		{ .addr = 0x00000e, .byte = 0xf6 },
		{ .addr = 0x00000f, .byte = 0x46 },
		{ .addr = 0x84f646, .byte = 0xe4 },
		{ .addr = 0x84f647, .byte = 0xc8 },
		{ .addr = 0x84f648, .byte = 0xd5 },
		{ .addr = 0x84f649, .byte = 0x42 }
};

static const SST_Transaction moveaw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5446086, .data = 51466, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5694, .data = 378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7024888, .data = 6598, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7024884, .data = 40975, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7024886, .data = 83, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7024882, .data = 15480, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7024880, .data = 5695, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7024876, .data = 15477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7024878, .data = 0, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43908, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8713798, .data = 58568, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8713800, .data = 54594, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_21[] = {
		{ .addr = 0x714f2e, .byte = 0x38 },
		{ .addr = 0x714f2f, .byte = 0x66 },
		{ .addr = 0x714f30, .byte = 0xef },
		{ .addr = 0x714f31, .byte = 0x0e },
		{ .addr = 0x00000c, .byte = 0xcf },
		{ .addr = 0x00000d, .byte = 0x2e },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x38 },
		{ .addr = 0x2ebc38, .byte = 0x8d },
		{ .addr = 0x2ebc39, .byte = 0x03 },
		{ .addr = 0x2ebc3a, .byte = 0xba },
		{ .addr = 0x2ebc3b, .byte = 0x4d }
};

static const SST_RamByte moveaw_final_ram_21[] = {
		{ .addr = 0x714f2e, .byte = 0x38 },
		{ .addr = 0x714f2f, .byte = 0x66 },
		{ .addr = 0x714f30, .byte = 0xef },
		{ .addr = 0x714f31, .byte = 0x0e },
		{ .addr = 0xba5c24, .byte = 0x4f },
		{ .addr = 0xba5c25, .byte = 0x32 },
		{ .addr = 0xba5c20, .byte = 0xa5 },
		{ .addr = 0xba5c21, .byte = 0x02 },
		{ .addr = 0xba5c22, .byte = 0x00 },
		{ .addr = 0xba5c23, .byte = 0x71 },
		{ .addr = 0xba5c1e, .byte = 0x38 },
		{ .addr = 0xba5c1f, .byte = 0x66 },
		{ .addr = 0xba5c1c, .byte = 0xf0 },
		{ .addr = 0xba5c1d, .byte = 0xf9 },
		{ .addr = 0xba5c18, .byte = 0x38 },
		{ .addr = 0xba5c19, .byte = 0x75 },
		{ .addr = 0xba5c1a, .byte = 0xff },
		{ .addr = 0xba5c1b, .byte = 0xbc },
		{ .addr = 0x00000c, .byte = 0xcf },
		{ .addr = 0x00000d, .byte = 0x2e },
		{ .addr = 0x00000e, .byte = 0xbc },
		{ .addr = 0x00000f, .byte = 0x38 },
		{ .addr = 0x2ebc38, .byte = 0x8d },
		{ .addr = 0x2ebc39, .byte = 0x03 },
		{ .addr = 0x2ebc3a, .byte = 0xba },
		{ .addr = 0x2ebc3b, .byte = 0x4d }
};

static const SST_Transaction moveaw_transactions_21[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12382456, .data = 1247, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12213284, .data = 20274, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12213280, .data = 42242, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12213282, .data = 113, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12213278, .data = 14438, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12213276, .data = 61689, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12213272, .data = 14453, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12213274, .data = 65468, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 53038, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 48184, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3062840, .data = 36099, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3062842, .data = 47693, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_22[] = {
		{ .addr = 0x2f4a12, .byte = 0x3a },
		{ .addr = 0x2f4a13, .byte = 0x63 },
		{ .addr = 0x2f4a14, .byte = 0x25 },
		{ .addr = 0x2f4a15, .byte = 0x3f },
		{ .addr = 0xb65710, .byte = 0x6f },
		{ .addr = 0xb65711, .byte = 0x9b },
		{ .addr = 0x2f4a16, .byte = 0x6f },
		{ .addr = 0x2f4a17, .byte = 0x78 }
};

static const SST_RamByte moveaw_final_ram_22[] = {
		{ .addr = 0x2f4a12, .byte = 0x3a },
		{ .addr = 0x2f4a13, .byte = 0x63 },
		{ .addr = 0x2f4a14, .byte = 0x25 },
		{ .addr = 0x2f4a15, .byte = 0x3f },
		{ .addr = 0xb65710, .byte = 0x6f },
		{ .addr = 0xb65711, .byte = 0x9b },
		{ .addr = 0x2f4a16, .byte = 0x6f },
		{ .addr = 0x2f4a17, .byte = 0x78 }
};

static const SST_Transaction moveaw_transactions_22[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11949840, .data = 28571, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3099158, .data = 28536, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_23[] = {
		{ .addr = 0xd11e14, .byte = 0x34 },
		{ .addr = 0xd11e15, .byte = 0x79 },
		{ .addr = 0xd11e16, .byte = 0xdc },
		{ .addr = 0xd11e17, .byte = 0xa9 },
		{ .addr = 0xd11e18, .byte = 0xa5 },
		{ .addr = 0xd11e19, .byte = 0xa3 },
		{ .addr = 0xd11e1a, .byte = 0xd1 },
		{ .addr = 0xd11e1b, .byte = 0x85 },
		{ .addr = 0x00000c, .byte = 0x4e },
		{ .addr = 0x00000d, .byte = 0x94 },
		{ .addr = 0x00000e, .byte = 0x5e },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x945e68, .byte = 0xa3 },
		{ .addr = 0x945e69, .byte = 0x29 },
		{ .addr = 0x945e6a, .byte = 0xef },
		{ .addr = 0x945e6b, .byte = 0x6a }
};

static const SST_RamByte moveaw_final_ram_23[] = {
		{ .addr = 0xd11e14, .byte = 0x34 },
		{ .addr = 0xd11e15, .byte = 0x79 },
		{ .addr = 0xd11e16, .byte = 0xdc },
		{ .addr = 0xd11e17, .byte = 0xa9 },
		{ .addr = 0xd11e18, .byte = 0xa5 },
		{ .addr = 0xd11e19, .byte = 0xa3 },
		{ .addr = 0xd11e1a, .byte = 0xd1 },
		{ .addr = 0xd11e1b, .byte = 0x85 },
		{ .addr = 0x09d3f2, .byte = 0x1e },
		{ .addr = 0x09d3f3, .byte = 0x1a },
		{ .addr = 0x09d3ee, .byte = 0xa4 },
		{ .addr = 0x09d3ef, .byte = 0x16 },
		{ .addr = 0x09d3f0, .byte = 0x00 },
		{ .addr = 0x09d3f1, .byte = 0xd1 },
		{ .addr = 0x09d3ec, .byte = 0x34 },
		{ .addr = 0x09d3ed, .byte = 0x79 },
		{ .addr = 0x09d3ea, .byte = 0xa5 },
		{ .addr = 0x09d3eb, .byte = 0xa3 },
		{ .addr = 0x09d3e6, .byte = 0x34 },
		{ .addr = 0x09d3e7, .byte = 0x75 },
		{ .addr = 0x09d3e8, .byte = 0xdc },
		{ .addr = 0x09d3e9, .byte = 0xa9 },
		{ .addr = 0x00000c, .byte = 0x4e },
		{ .addr = 0x00000d, .byte = 0x94 },
		{ .addr = 0x00000e, .byte = 0x5e },
		{ .addr = 0x00000f, .byte = 0x68 },
		{ .addr = 0x945e68, .byte = 0xa3 },
		{ .addr = 0x945e69, .byte = 0x29 },
		{ .addr = 0x945e6a, .byte = 0xef },
		{ .addr = 0x945e6b, .byte = 0x6a }
};

static const SST_Transaction moveaw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13704728, .data = 42403, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13704730, .data = 53637, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11117986, .data = 42793, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 644082, .data = 7706, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 644078, .data = 42006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 644080, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 644076, .data = 13433, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 644074, .data = 42403, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 644070, .data = 13429, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 644072, .data = 56489, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 20116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 24168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9723496, .data = 41769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9723498, .data = 61290, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_24[] = {
		{ .addr = 0x1b5d64, .byte = 0x32 },
		{ .addr = 0x1b5d65, .byte = 0x44 },
		{ .addr = 0x1b5d66, .byte = 0x52 },
		{ .addr = 0x1b5d67, .byte = 0xcd },
		{ .addr = 0x1b5d68, .byte = 0xa6 },
		{ .addr = 0x1b5d69, .byte = 0xc9 }
};

static const SST_RamByte moveaw_final_ram_24[] = {
		{ .addr = 0x1b5d64, .byte = 0x32 },
		{ .addr = 0x1b5d65, .byte = 0x44 },
		{ .addr = 0x1b5d66, .byte = 0x52 },
		{ .addr = 0x1b5d67, .byte = 0xcd },
		{ .addr = 0x1b5d68, .byte = 0xa6 },
		{ .addr = 0x1b5d69, .byte = 0xc9 }
};

static const SST_Transaction moveaw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1793384, .data = 42697, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_25[] = {
		{ .addr = 0xd8431e, .byte = 0x3c },
		{ .addr = 0xd8431f, .byte = 0x64 },
		{ .addr = 0xd84320, .byte = 0xd9 },
		{ .addr = 0xd84321, .byte = 0x09 },
		{ .addr = 0x00000c, .byte = 0x49 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0xef },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0xcaef16, .byte = 0xf7 },
		{ .addr = 0xcaef17, .byte = 0x4e },
		{ .addr = 0xcaef18, .byte = 0x4b },
		{ .addr = 0xcaef19, .byte = 0xaa }
};

static const SST_RamByte moveaw_final_ram_25[] = {
		{ .addr = 0xd8431e, .byte = 0x3c },
		{ .addr = 0xd8431f, .byte = 0x64 },
		{ .addr = 0xd84320, .byte = 0xd9 },
		{ .addr = 0xd84321, .byte = 0x09 },
		{ .addr = 0x8d9ea0, .byte = 0x43 },
		{ .addr = 0x8d9ea1, .byte = 0x22 },
		{ .addr = 0x8d9e9c, .byte = 0x82 },
		{ .addr = 0x8d9e9d, .byte = 0x0b },
		{ .addr = 0x8d9e9e, .byte = 0x00 },
		{ .addr = 0x8d9e9f, .byte = 0xd8 },
		{ .addr = 0x8d9e9a, .byte = 0x3c },
		{ .addr = 0x8d9e9b, .byte = 0x64 },
		{ .addr = 0x8d9e98, .byte = 0xe7 },
		{ .addr = 0x8d9e99, .byte = 0x57 },
		{ .addr = 0x8d9e94, .byte = 0x3c },
		{ .addr = 0x8d9e95, .byte = 0x71 },
		{ .addr = 0x8d9e96, .byte = 0xc8 },
		{ .addr = 0x8d9e97, .byte = 0x6c },
		{ .addr = 0x00000c, .byte = 0x49 },
		{ .addr = 0x00000d, .byte = 0xca },
		{ .addr = 0x00000e, .byte = 0xef },
		{ .addr = 0x00000f, .byte = 0x16 },
		{ .addr = 0xcaef16, .byte = 0xf7 },
		{ .addr = 0xcaef17, .byte = 0x4e },
		{ .addr = 0xcaef18, .byte = 0x4b },
		{ .addr = 0xcaef19, .byte = 0xaa }
};

static const SST_Transaction moveaw_transactions_25[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7137110, .data = 32614, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9281184, .data = 17186, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9281180, .data = 33291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9281182, .data = 216, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9281178, .data = 15460, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9281176, .data = 59223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9281172, .data = 15473, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9281174, .data = 51308, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 18890, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61206, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13299478, .data = 63310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13299480, .data = 19370, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_26[] = {
		{ .addr = 0xe678ba, .byte = 0x32 },
		{ .addr = 0xe678bb, .byte = 0x79 },
		{ .addr = 0xe678bc, .byte = 0x65 },
		{ .addr = 0xe678bd, .byte = 0x2a },
		{ .addr = 0xe678be, .byte = 0xb7 },
		{ .addr = 0xe678bf, .byte = 0x9e },
		{ .addr = 0xe678c0, .byte = 0x0a },
		{ .addr = 0xe678c1, .byte = 0x56 },
		{ .addr = 0x2ab79e, .byte = 0xb1 },
		{ .addr = 0x2ab79f, .byte = 0x1c },
		{ .addr = 0xe678c2, .byte = 0xa8 },
		{ .addr = 0xe678c3, .byte = 0x13 }
};

static const SST_RamByte moveaw_final_ram_26[] = {
		{ .addr = 0xe678ba, .byte = 0x32 },
		{ .addr = 0xe678bb, .byte = 0x79 },
		{ .addr = 0xe678bc, .byte = 0x65 },
		{ .addr = 0xe678bd, .byte = 0x2a },
		{ .addr = 0xe678be, .byte = 0xb7 },
		{ .addr = 0xe678bf, .byte = 0x9e },
		{ .addr = 0xe678c0, .byte = 0x0a },
		{ .addr = 0xe678c1, .byte = 0x56 },
		{ .addr = 0x2ab79e, .byte = 0xb1 },
		{ .addr = 0x2ab79f, .byte = 0x1c },
		{ .addr = 0xe678c2, .byte = 0xa8 },
		{ .addr = 0xe678c3, .byte = 0x13 }
};

static const SST_Transaction moveaw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15104190, .data = 47006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15104192, .data = 2646, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2799518, .data = 45340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15104194, .data = 43027, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_27[] = {
		{ .addr = 0x3e4130, .byte = 0x38 },
		{ .addr = 0x3e4131, .byte = 0x5b },
		{ .addr = 0x3e4132, .byte = 0x3d },
		{ .addr = 0x3e4133, .byte = 0xb8 },
		{ .addr = 0x46529e, .byte = 0x90 },
		{ .addr = 0x46529f, .byte = 0xc5 },
		{ .addr = 0x3e4134, .byte = 0x2f },
		{ .addr = 0x3e4135, .byte = 0x6c }
};

static const SST_RamByte moveaw_final_ram_27[] = {
		{ .addr = 0x3e4130, .byte = 0x38 },
		{ .addr = 0x3e4131, .byte = 0x5b },
		{ .addr = 0x3e4132, .byte = 0x3d },
		{ .addr = 0x3e4133, .byte = 0xb8 },
		{ .addr = 0x46529e, .byte = 0x90 },
		{ .addr = 0x46529f, .byte = 0xc5 },
		{ .addr = 0x3e4134, .byte = 0x2f },
		{ .addr = 0x3e4135, .byte = 0x6c }
};

static const SST_Transaction moveaw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4608670, .data = 37061, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4079924, .data = 12140, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_28[] = {
		{ .addr = 0xb387f2, .byte = 0x34 },
		{ .addr = 0xb387f3, .byte = 0x53 },
		{ .addr = 0xb387f4, .byte = 0x85 },
		{ .addr = 0xb387f5, .byte = 0xe1 },
		{ .addr = 0xeb3ad4, .byte = 0xf4 },
		{ .addr = 0xeb3ad5, .byte = 0x69 },
		{ .addr = 0xb387f6, .byte = 0x4a },
		{ .addr = 0xb387f7, .byte = 0xa0 }
};

static const SST_RamByte moveaw_final_ram_28[] = {
		{ .addr = 0xb387f2, .byte = 0x34 },
		{ .addr = 0xb387f3, .byte = 0x53 },
		{ .addr = 0xb387f4, .byte = 0x85 },
		{ .addr = 0xb387f5, .byte = 0xe1 },
		{ .addr = 0xeb3ad4, .byte = 0xf4 },
		{ .addr = 0xeb3ad5, .byte = 0x69 },
		{ .addr = 0xb387f6, .byte = 0x4a },
		{ .addr = 0xb387f7, .byte = 0xa0 }
};

static const SST_Transaction moveaw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15416020, .data = 62569, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11765750, .data = 19104, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_29[] = {
		{ .addr = 0x531c54, .byte = 0x3c },
		{ .addr = 0x531c55, .byte = 0x60 },
		{ .addr = 0x531c56, .byte = 0x06 },
		{ .addr = 0x531c57, .byte = 0xc0 },
		{ .addr = 0x0d5b70, .byte = 0x2b },
		{ .addr = 0x0d5b71, .byte = 0x67 },
		{ .addr = 0x531c58, .byte = 0x9f },
		{ .addr = 0x531c59, .byte = 0x52 }
};

static const SST_RamByte moveaw_final_ram_29[] = {
		{ .addr = 0x531c54, .byte = 0x3c },
		{ .addr = 0x531c55, .byte = 0x60 },
		{ .addr = 0x531c56, .byte = 0x06 },
		{ .addr = 0x531c57, .byte = 0xc0 },
		{ .addr = 0x0d5b70, .byte = 0x2b },
		{ .addr = 0x0d5b71, .byte = 0x67 },
		{ .addr = 0x531c58, .byte = 0x9f },
		{ .addr = 0x531c59, .byte = 0x52 }
};

static const SST_Transaction moveaw_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 875376, .data = 11111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5446744, .data = 40786, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_30[] = {
		{ .addr = 0x2ad17a, .byte = 0x38 },
		{ .addr = 0x2ad17b, .byte = 0x53 },
		{ .addr = 0x2ad17c, .byte = 0x03 },
		{ .addr = 0x2ad17d, .byte = 0xc0 },
		{ .addr = 0x46aff6, .byte = 0x14 },
		{ .addr = 0x46aff7, .byte = 0xea },
		{ .addr = 0x2ad17e, .byte = 0xab },
		{ .addr = 0x2ad17f, .byte = 0x16 }
};

static const SST_RamByte moveaw_final_ram_30[] = {
		{ .addr = 0x2ad17a, .byte = 0x38 },
		{ .addr = 0x2ad17b, .byte = 0x53 },
		{ .addr = 0x2ad17c, .byte = 0x03 },
		{ .addr = 0x2ad17d, .byte = 0xc0 },
		{ .addr = 0x46aff6, .byte = 0x14 },
		{ .addr = 0x46aff7, .byte = 0xea },
		{ .addr = 0x2ad17e, .byte = 0xab },
		{ .addr = 0x2ad17f, .byte = 0x16 }
};

static const SST_Transaction moveaw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4632566, .data = 5354, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2806142, .data = 43798, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte moveaw_initial_ram_31[] = {
		{ .addr = 0x8f422c, .byte = 0x30 },
		{ .addr = 0x8f422d, .byte = 0x40 },
		{ .addr = 0x8f422e, .byte = 0xb8 },
		{ .addr = 0x8f422f, .byte = 0x7a },
		{ .addr = 0x8f4230, .byte = 0x14 },
		{ .addr = 0x8f4231, .byte = 0x6e }
};

static const SST_RamByte moveaw_final_ram_31[] = {
		{ .addr = 0x8f422c, .byte = 0x30 },
		{ .addr = 0x8f422d, .byte = 0x40 },
		{ .addr = 0x8f422e, .byte = 0xb8 },
		{ .addr = 0x8f422f, .byte = 0x7a },
		{ .addr = 0x8f4230, .byte = 0x14 },
		{ .addr = 0x8f4231, .byte = 0x6e }
};

static const SST_Transaction moveaw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9388592, .data = 5230, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

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
	{
		.name = "016 MOVEA.w (d16, A4), A1 326c",
		.initial = {
			.regs = {
				4234451056, 2414225704, 1782004644, 2026011653, 3231683044, 3731087807, 3775741156, 1879452276, 3140209877, 3056986955, 3827818375, 1079517311, 1228930201, 1981144971, 4142734658, 4057592, 10965210, 32794, 2461672
			},
			.prefetch0 = 12908,
			.prefetch1 = 24769,
			.ram = moveaw_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4234451056, 2414225704, 1782004644, 2026011653, 3231683044, 3731087807, 3775741156, 1879452276, 3140209877, 4294945998, 3827818375, 1079517311, 1228930201, 1981144971, 4142734658, 4057592, 10965210, 32794, 2461676
			},
			.prefetch0 = 15462,
			.prefetch1 = 53522,
			.ram = moveaw_final_ram_16,
			.ram_len = 10,
		},
		.transactions = moveaw_transactions_16,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "017 MOVEA.w A0, A6 3c48",
		.initial = {
			.regs = {
				769577628, 855509525, 3600218377, 4089291481, 3204155429, 1594905551, 1650092255, 1840024101, 168159898, 2743140778, 3392960418, 2968023091, 4002813573, 4121286792, 1967904199, 5881016, 2100568, 8477, 4161146
			},
			.prefetch0 = 15432,
			.prefetch1 = 54540,
			.ram = moveaw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				769577628, 855509525, 3600218377, 4089291481, 3204155429, 1594905551, 1650092255, 1840024101, 168159898, 2743140778, 3392960418, 2968023091, 4002813573, 4121286792, 4294961818, 5881016, 2100568, 8477, 4161148
			},
			.prefetch0 = 54540,
			.prefetch1 = 38281,
			.ram = moveaw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 MOVEA.w (A0), A1 3250",
		.initial = {
			.regs = {
				3924336415, 2972359623, 3647958065, 211615514, 4124583726, 514185308, 1058484551, 3061444579, 920959341, 4078347342, 4060585471, 3970358609, 2343102536, 3586606843, 2426451859, 5296446, 1133938, 42241, 6515438
			},
			.prefetch0 = 12880,
			.prefetch1 = 62702,
			.ram = moveaw_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3924336415, 2972359623, 3647958065, 211615514, 4124583726, 514185308, 1058484551, 3061444579, 920959341, 4078347342, 4060585471, 3970358609, 2343102536, 3586606843, 2426451859, 5296446, 1133924, 9473, 1118978110
			},
			.prefetch0 = 52867,
			.prefetch1 = 55781,
			.ram = moveaw_final_ram_18,
			.ram_len = 26,
		},
		.transactions = moveaw_transactions_18,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "019 MOVEA.w A7, A7 3e4f",
		.initial = {
			.regs = {
				1292738190, 1116246423, 2029191882, 2869344144, 299812335, 3047916080, 109881105, 2570918158, 820222420, 1138209544, 3261446753, 883185902, 3336475335, 3052328691, 3510910433, 254316, 11584832, 42769, 2021584
			},
			.prefetch0 = 15951,
			.prefetch1 = 64643,
			.ram = moveaw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1292738190, 1116246423, 2029191882, 2869344144, 299812335, 3047916080, 109881105, 2570918158, 820222420, 1138209544, 3261446753, 883185902, 3336475335, 3052328691, 3510910433, 254316, 4294952256, 42769, 2021586
			},
			.prefetch0 = 64643,
			.prefetch1 = 14282,
			.ram = moveaw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_19,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "020 MOVEA.w (xxx).w, A6 3c78",
		.initial = {
			.regs = {
				1726100643, 4288875117, 2901187499, 1047929967, 3568168599, 2884846883, 3881796670, 2914118660, 2758513333, 1832045613, 1568391597, 23902799, 2325754235, 1059858731, 1328352537, 5507984, 7024890, 40975, 5446086
			},
			.prefetch0 = 15480,
			.prefetch1 = 5695,
			.ram = moveaw_initial_ram_20,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1726100643, 4288875117, 2901187499, 1047929967, 3568168599, 2884846883, 3881796670, 2914118660, 2758513333, 1832045613, 1568391597, 23902799, 2325754235, 1059858731, 1328352537, 5507984, 7024876, 8207, 2877617738
			},
			.prefetch0 = 58568,
			.prefetch1 = 54594,
			.ram = moveaw_final_ram_20,
			.ram_len = 28,
		},
		.transactions = moveaw_transactions_20,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "021 MOVEA.w -(A6), A4 3866",
		.initial = {
			.regs = {
				3167609254, 2677119557, 3152793122, 872650302, 3848579384, 3903719372, 1821910391, 2253518855, 2787397835, 2442313314, 2617227812, 1741808252, 2498269098, 1284634547, 4290572539, 3356536, 12213286, 42242, 7425842
			},
			.prefetch0 = 14438,
			.prefetch1 = 61198,
			.ram = moveaw_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3167609254, 2677119557, 3152793122, 872650302, 3848579384, 3903719372, 1821910391, 2253518855, 2787397835, 2442313314, 2617227812, 1741808252, 2498269098, 1284634547, 4290572537, 3356536, 12213272, 9474, 3475946556
			},
			.prefetch0 = 36099,
			.prefetch1 = 47693,
			.ram = moveaw_final_ram_21,
			.ram_len = 26,
		},
		.transactions = moveaw_transactions_21,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "022 MOVEA.w -(A3), A5 3a63",
		.initial = {
			.regs = {
				3588965126, 1064277032, 3004490946, 3763720755, 1318582164, 3533822131, 822054809, 3604409732, 2821130224, 3656620651, 2212120639, 162944786, 3645775118, 3177422618, 2481741955, 6885960, 9797256, 8463, 3099158
			},
			.prefetch0 = 14947,
			.prefetch1 = 9535,
			.ram = moveaw_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3588965126, 1064277032, 3004490946, 3763720755, 1318582164, 3533822131, 822054809, 3604409732, 2821130224, 3656620651, 2212120639, 162944784, 3645775118, 28571, 2481741955, 6885960, 9797256, 8463, 3099160
			},
			.prefetch0 = 9535,
			.prefetch1 = 28536,
			.ram = moveaw_final_ram_22,
			.ram_len = 8,
		},
		.transactions = moveaw_transactions_22,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "023 MOVEA.w (xxx).l, A2 3479",
		.initial = {
			.regs = {
				599325786, 1304282530, 3019881841, 1185274514, 4028273414, 1576535440, 3491956614, 1494540059, 2261874268, 3141523966, 1011957662, 1633897026, 545993238, 1669702652, 2767568161, 13596494, 644084, 42006, 13704728
			},
			.prefetch0 = 13433,
			.prefetch1 = 56489,
			.ram = moveaw_initial_ram_23,
			.ram_len = 16,
		},
		.final = {
			.regs = {
				599325786, 1304282530, 3019881841, 1185274514, 4028273414, 1576535440, 3491956614, 1494540059, 2261874268, 3141523966, 1011957662, 1633897026, 545993238, 1669702652, 2767568161, 13596494, 644070, 9238, 1318346348
			},
			.prefetch0 = 41769,
			.prefetch1 = 61290,
			.ram = moveaw_final_ram_23,
			.ram_len = 30,
		},
		.transactions = moveaw_transactions_23,
		.transactions_len = 16,
		.lenght = 66,
	},
	{
		.name = "024 MOVEA.w D4, A1 3244",
		.initial = {
			.regs = {
				68802331, 220962237, 2700564611, 2943360903, 3232928098, 3283770853, 3252518076, 694972991, 1845973190, 1170666298, 2068812317, 717003663, 2808493735, 1449994049, 3226697984, 7790976, 6590004, 8968, 1793384
			},
			.prefetch0 = 12868,
			.prefetch1 = 21197,
			.ram = moveaw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				68802331, 220962237, 2700564611, 2943360903, 3232928098, 3283770853, 3252518076, 694972991, 1845973190, 4294938978, 2068812317, 717003663, 2808493735, 1449994049, 3226697984, 7790976, 6590004, 8968, 1793386
			},
			.prefetch0 = 21197,
			.prefetch1 = 42697,
			.ram = moveaw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 MOVEA.w -(A4), A6 3c64",
		.initial = {
			.regs = {
				4201830274, 1192150440, 1196128701, 3048045115, 1040977529, 1764056433, 1091760930, 3945001257, 991046896, 4256293102, 1919942876, 3420657924, 3362580313, 1087897653, 1074817615, 6630884, 9281186, 33291, 14172962
			},
			.prefetch0 = 15460,
			.prefetch1 = 55561,
			.ram = moveaw_initial_ram_25,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4201830274, 1192150440, 1196128701, 3048045115, 1040977529, 1764056433, 1091760930, 3945001257, 991046896, 4256293102, 1919942876, 3420657924, 3362580311, 1087897653, 1074817615, 6630884, 9281172, 8715, 1238036250
			},
			.prefetch0 = 63310,
			.prefetch1 = 19370,
			.ram = moveaw_final_ram_25,
			.ram_len = 26,
		},
		.transactions = moveaw_transactions_25,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "026 MOVEA.w (xxx).l, A1 3279",
		.initial = {
			.regs = {
				1666964718, 2348548721, 572157155, 799812147, 2620257675, 3998608872, 1280743620, 979851295, 3686103311, 1818572236, 3437954299, 331063040, 659893123, 2243853885, 2121672608, 14907124, 991164, 41241, 15104190
			},
			.prefetch0 = 12921,
			.prefetch1 = 25898,
			.ram = moveaw_initial_ram_26,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1666964718, 2348548721, 572157155, 799812147, 2620257675, 3998608872, 1280743620, 979851295, 3686103311, 4294947100, 3437954299, 331063040, 659893123, 2243853885, 2121672608, 14907124, 991164, 41241, 15104196
			},
			.prefetch0 = 2646,
			.prefetch1 = 43027,
			.ram = moveaw_final_ram_26,
			.ram_len = 12,
		},
		.transactions = moveaw_transactions_26,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "027 MOVEA.w (A3)+, A4 385b",
		.initial = {
			.regs = {
				105668197, 2355144336, 733376730, 3964702191, 2998539972, 7804743, 1065419398, 1725049883, 2050364436, 954497603, 1502046553, 3930477214, 603937506, 3284622983, 104396941, 13212832, 12053128, 541, 4079924
			},
			.prefetch0 = 14427,
			.prefetch1 = 15800,
			.ram = moveaw_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				105668197, 2355144336, 733376730, 3964702191, 2998539972, 7804743, 1065419398, 1725049883, 2050364436, 954497603, 1502046553, 3930477216, 4294938821, 3284622983, 104396941, 13212832, 12053128, 541, 4079926
			},
			.prefetch0 = 15800,
			.prefetch1 = 12140,
			.ram = moveaw_final_ram_27,
			.ram_len = 8,
		},
		.transactions = moveaw_transactions_27,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "028 MOVEA.w (A3), A2 3453",
		.initial = {
			.regs = {
				3202793153, 1229966124, 1516974325, 1737963022, 4214492245, 1596179178, 2344470566, 1979671845, 2469003234, 2412033292, 2104245692, 401291988, 1403974754, 3682794541, 3828846835, 2744878, 16133330, 32769, 11765750
			},
			.prefetch0 = 13395,
			.prefetch1 = 34273,
			.ram = moveaw_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3202793153, 1229966124, 1516974325, 1737963022, 4214492245, 1596179178, 2344470566, 1979671845, 2469003234, 2412033292, 4294964329, 401291988, 1403974754, 3682794541, 3828846835, 2744878, 16133330, 32769, 11765752
			},
			.prefetch0 = 34273,
			.prefetch1 = 19104,
			.ram = moveaw_final_ram_28,
			.ram_len = 8,
		},
		.transactions = moveaw_transactions_28,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "029 MOVEA.w -(A0), A6 3c60",
		.initial = {
			.regs = {
				1775868251, 143249392, 1634045076, 3210490577, 2350049079, 3148635881, 2370496894, 2492342907, 1879923570, 3272372040, 3943564464, 386765720, 1853558500, 3983677020, 1520476413, 9328484, 2085638, 41495, 5446744
			},
			.prefetch0 = 15456,
			.prefetch1 = 1728,
			.ram = moveaw_initial_ram_29,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1775868251, 143249392, 1634045076, 3210490577, 2350049079, 3148635881, 2370496894, 2492342907, 1879923568, 3272372040, 3943564464, 386765720, 1853558500, 3983677020, 11111, 9328484, 2085638, 41495, 5446746
			},
			.prefetch0 = 1728,
			.prefetch1 = 40786,
			.ram = moveaw_final_ram_29,
			.ram_len = 8,
		},
		.transactions = moveaw_transactions_29,
		.transactions_len = 3,
		.lenght = 10,
	},
	{
		.name = "030 MOVEA.w (A3), A4 3853",
		.initial = {
			.regs = {
				698655180, 1521705508, 612709692, 3734304367, 1193809378, 2784291820, 2914799498, 4141813191, 3449543157, 1643658426, 3218387905, 2806427638, 2477849185, 623780621, 1857039981, 7748302, 1749916, 1042, 2806142
			},
			.prefetch0 = 14419,
			.prefetch1 = 960,
			.ram = moveaw_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				698655180, 1521705508, 612709692, 3734304367, 1193809378, 2784291820, 2914799498, 4141813191, 3449543157, 1643658426, 3218387905, 2806427638, 5354, 623780621, 1857039981, 7748302, 1749916, 1042, 2806144
			},
			.prefetch0 = 960,
			.prefetch1 = 43798,
			.ram = moveaw_final_ram_30,
			.ram_len = 8,
		},
		.transactions = moveaw_transactions_30,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "031 MOVEA.w D0, A0 3040",
		.initial = {
			.regs = {
				2463174244, 570044429, 3651524142, 808315006, 2047073745, 3971549214, 204153203, 4163773069, 1414607960, 3556020844, 324104755, 2396664945, 1071331, 4290049447, 2379727119, 15199330, 6923104, 1812, 9388592
			},
			.prefetch0 = 12352,
			.prefetch1 = 47226,
			.ram = moveaw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2463174244, 570044429, 3651524142, 808315006, 2047073745, 3971549214, 204153203, 4163773069, 3684, 3556020844, 324104755, 2396664945, 1071331, 4290049447, 2379727119, 15199330, 6923104, 1812, 9388594
			},
			.prefetch0 = 47226,
			.prefetch1 = 5230,
			.ram = moveaw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = moveaw_transactions_31,
		.transactions_len = 1,
		.lenght = 4,
	},
};

#endif /* RBT_MOVEAW_H */