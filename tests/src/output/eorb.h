#ifndef RBT_EORB_H
#define RBT_EORB_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte eorb_initial_ram_0[] = {
		{ .addr = 0xe2097a, .byte = 0xb3 },
		{ .addr = 0xe2097b, .byte = 0x30 },
		{ .addr = 0xe2097c, .byte = 0xa2 },
		{ .addr = 0xe2097d, .byte = 0x59 },
		{ .addr = 0xe2097e, .byte = 0x69 },
		{ .addr = 0xe2097f, .byte = 0x43 },
		{ .addr = 0x9a2650, .byte = 0x29 },
		{ .addr = 0x9a2651, .byte = 0xf1 },
		{ .addr = 0xe20980, .byte = 0xa7 },
		{ .addr = 0xe20981, .byte = 0x17 }
};

static const SST_RamByte eorb_final_ram_0[] = {
		{ .addr = 0xe2097a, .byte = 0xb3 },
		{ .addr = 0xe2097b, .byte = 0x30 },
		{ .addr = 0xe2097c, .byte = 0xa2 },
		{ .addr = 0xe2097d, .byte = 0x59 },
		{ .addr = 0xe2097e, .byte = 0x69 },
		{ .addr = 0xe2097f, .byte = 0x43 },
		{ .addr = 0x9a2650, .byte = 0x29 },
		{ .addr = 0x9a2651, .byte = 0x7b },
		{ .addr = 0xe20980, .byte = 0xa7 },
		{ .addr = 0xe20981, .byte = 0x17 }
};

static const SST_Transaction eorb_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14813566, .data = 26947, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10102352, .data = 241, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14813568, .data = 42775, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10102352, .data = 123, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_1[] = {
		{ .addr = 0x36f738, .byte = 0xb3 },
		{ .addr = 0x36f739, .byte = 0x37 },
		{ .addr = 0x36f73a, .byte = 0xfe },
		{ .addr = 0x36f73b, .byte = 0x31 },
		{ .addr = 0x36f73c, .byte = 0x37 },
		{ .addr = 0x36f73d, .byte = 0xd9 },
		{ .addr = 0x781c34, .byte = 0xe3 },
		{ .addr = 0x781c35, .byte = 0x06 },
		{ .addr = 0x36f73e, .byte = 0x01 },
		{ .addr = 0x36f73f, .byte = 0x0d }
};

static const SST_RamByte eorb_final_ram_1[] = {
		{ .addr = 0x36f738, .byte = 0xb3 },
		{ .addr = 0x36f739, .byte = 0x37 },
		{ .addr = 0x36f73a, .byte = 0xfe },
		{ .addr = 0x36f73b, .byte = 0x31 },
		{ .addr = 0x36f73c, .byte = 0x37 },
		{ .addr = 0x36f73d, .byte = 0xd9 },
		{ .addr = 0x781c34, .byte = 0xe3 },
		{ .addr = 0x781c35, .byte = 0x4f },
		{ .addr = 0x36f73e, .byte = 0x01 },
		{ .addr = 0x36f73f, .byte = 0x0d }
};

static const SST_Transaction eorb_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3602236, .data = 14297, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7871540, .data = 6, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3602238, .data = 269, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 7871540, .data = 79, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_2[] = {
		{ .addr = 0xf57f56, .byte = 0xb7 },
		{ .addr = 0xf57f57, .byte = 0x33 },
		{ .addr = 0xf57f58, .byte = 0x6a },
		{ .addr = 0xf57f59, .byte = 0xe3 },
		{ .addr = 0xf57f5a, .byte = 0x49 },
		{ .addr = 0xf57f5b, .byte = 0xec },
		{ .addr = 0xc6085a, .byte = 0xcc },
		{ .addr = 0xc6085b, .byte = 0xd5 },
		{ .addr = 0xf57f5c, .byte = 0x04 },
		{ .addr = 0xf57f5d, .byte = 0x40 }
};

static const SST_RamByte eorb_final_ram_2[] = {
		{ .addr = 0xf57f56, .byte = 0xb7 },
		{ .addr = 0xf57f57, .byte = 0x33 },
		{ .addr = 0xf57f58, .byte = 0x6a },
		{ .addr = 0xf57f59, .byte = 0xe3 },
		{ .addr = 0xf57f5a, .byte = 0x49 },
		{ .addr = 0xf57f5b, .byte = 0xec },
		{ .addr = 0xc6085a, .byte = 0x99 },
		{ .addr = 0xc6085b, .byte = 0xd5 },
		{ .addr = 0xf57f5c, .byte = 0x04 },
		{ .addr = 0xf57f5d, .byte = 0x40 }
};

static const SST_Transaction eorb_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16088922, .data = 18924, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12978266, .data = 52224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16088924, .data = 1088, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12978266, .data = 39168, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_3[] = {
		{ .addr = 0x3e0696, .byte = 0xbf },
		{ .addr = 0x3e0697, .byte = 0x1b },
		{ .addr = 0x3e0698, .byte = 0xda },
		{ .addr = 0x3e0699, .byte = 0x85 },
		{ .addr = 0x6d2e5e, .byte = 0xbb },
		{ .addr = 0x6d2e5f, .byte = 0xbb },
		{ .addr = 0x3e069a, .byte = 0x73 },
		{ .addr = 0x3e069b, .byte = 0x04 }
};

static const SST_RamByte eorb_final_ram_3[] = {
		{ .addr = 0x3e0696, .byte = 0xbf },
		{ .addr = 0x3e0697, .byte = 0x1b },
		{ .addr = 0x3e0698, .byte = 0xda },
		{ .addr = 0x3e0699, .byte = 0x85 },
		{ .addr = 0x6d2e5e, .byte = 0xd6 },
		{ .addr = 0x6d2e5f, .byte = 0xbb },
		{ .addr = 0x3e069a, .byte = 0x73 },
		{ .addr = 0x3e069b, .byte = 0x04 }
};

static const SST_Transaction eorb_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7155294, .data = 47872, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4064922, .data = 29444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7155294, .data = 54784, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_4[] = {
		{ .addr = 0xe5c31c, .byte = 0xb5 },
		{ .addr = 0xe5c31d, .byte = 0x26 },
		{ .addr = 0xe5c31e, .byte = 0xbd },
		{ .addr = 0xe5c31f, .byte = 0x0f },
		{ .addr = 0x88077a, .byte = 0x6d },
		{ .addr = 0x88077b, .byte = 0xca },
		{ .addr = 0xe5c320, .byte = 0xc6 },
		{ .addr = 0xe5c321, .byte = 0x30 }
};

static const SST_RamByte eorb_final_ram_4[] = {
		{ .addr = 0xe5c31c, .byte = 0xb5 },
		{ .addr = 0xe5c31d, .byte = 0x26 },
		{ .addr = 0xe5c31e, .byte = 0xbd },
		{ .addr = 0xe5c31f, .byte = 0x0f },
		{ .addr = 0x88077a, .byte = 0x53 },
		{ .addr = 0x88077b, .byte = 0xca },
		{ .addr = 0xe5c320, .byte = 0xc6 },
		{ .addr = 0xe5c321, .byte = 0x30 }
};

static const SST_Transaction eorb_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8914810, .data = 27904, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15057696, .data = 50736, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8914810, .data = 21248, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_5[] = {
		{ .addr = 0x494f38, .byte = 0xb1 },
		{ .addr = 0x494f39, .byte = 0x15 },
		{ .addr = 0x494f3a, .byte = 0xa8 },
		{ .addr = 0x494f3b, .byte = 0x0d },
		{ .addr = 0xd649fa, .byte = 0x58 },
		{ .addr = 0xd649fb, .byte = 0x70 },
		{ .addr = 0x494f3c, .byte = 0xaa },
		{ .addr = 0x494f3d, .byte = 0x97 }
};

static const SST_RamByte eorb_final_ram_5[] = {
		{ .addr = 0x494f38, .byte = 0xb1 },
		{ .addr = 0x494f39, .byte = 0x15 },
		{ .addr = 0x494f3a, .byte = 0xa8 },
		{ .addr = 0x494f3b, .byte = 0x0d },
		{ .addr = 0xd649fa, .byte = 0x4c },
		{ .addr = 0xd649fb, .byte = 0x70 },
		{ .addr = 0x494f3c, .byte = 0xaa },
		{ .addr = 0x494f3d, .byte = 0x97 }
};

static const SST_Transaction eorb_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14043642, .data = 22528, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4804412, .data = 43671, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14043642, .data = 19456, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_6[] = {
		{ .addr = 0x3881f4, .byte = 0xbf },
		{ .addr = 0x3881f5, .byte = 0x06 },
		{ .addr = 0x3881f6, .byte = 0xe3 },
		{ .addr = 0x3881f7, .byte = 0x25 },
		{ .addr = 0x3881f8, .byte = 0x7e },
		{ .addr = 0x3881f9, .byte = 0xfe }
};

static const SST_RamByte eorb_final_ram_6[] = {
		{ .addr = 0x3881f4, .byte = 0xbf },
		{ .addr = 0x3881f5, .byte = 0x06 },
		{ .addr = 0x3881f6, .byte = 0xe3 },
		{ .addr = 0x3881f7, .byte = 0x25 },
		{ .addr = 0x3881f8, .byte = 0x7e },
		{ .addr = 0x3881f9, .byte = 0xfe }
};

static const SST_Transaction eorb_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3703288, .data = 32510, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_7[] = {
		{ .addr = 0xa40d3a, .byte = 0xbf },
		{ .addr = 0xa40d3b, .byte = 0x15 },
		{ .addr = 0xa40d3c, .byte = 0x04 },
		{ .addr = 0xa40d3d, .byte = 0xa2 },
		{ .addr = 0x66b590, .byte = 0x91 },
		{ .addr = 0x66b591, .byte = 0xc0 },
		{ .addr = 0xa40d3e, .byte = 0xe2 },
		{ .addr = 0xa40d3f, .byte = 0xc4 }
};

static const SST_RamByte eorb_final_ram_7[] = {
		{ .addr = 0xa40d3a, .byte = 0xbf },
		{ .addr = 0xa40d3b, .byte = 0x15 },
		{ .addr = 0xa40d3c, .byte = 0x04 },
		{ .addr = 0xa40d3d, .byte = 0xa2 },
		{ .addr = 0x66b590, .byte = 0x91 },
		{ .addr = 0x66b591, .byte = 0x69 },
		{ .addr = 0xa40d3e, .byte = 0xe2 },
		{ .addr = 0xa40d3f, .byte = 0xc4 }
};

static const SST_Transaction eorb_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6731152, .data = 192, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 10751294, .data = 58052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6731152, .data = 105, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_8[] = {
		{ .addr = 0x6baa14, .byte = 0xb3 },
		{ .addr = 0x6baa15, .byte = 0x10 },
		{ .addr = 0x6baa16, .byte = 0xe9 },
		{ .addr = 0x6baa17, .byte = 0x9a },
		{ .addr = 0x8323d8, .byte = 0x13 },
		{ .addr = 0x8323d9, .byte = 0x88 },
		{ .addr = 0x6baa18, .byte = 0x66 },
		{ .addr = 0x6baa19, .byte = 0xcd }
};

static const SST_RamByte eorb_final_ram_8[] = {
		{ .addr = 0x6baa14, .byte = 0xb3 },
		{ .addr = 0x6baa15, .byte = 0x10 },
		{ .addr = 0x6baa16, .byte = 0xe9 },
		{ .addr = 0x6baa17, .byte = 0x9a },
		{ .addr = 0x8323d8, .byte = 0x13 },
		{ .addr = 0x8323d9, .byte = 0x59 },
		{ .addr = 0x6baa18, .byte = 0x66 },
		{ .addr = 0x6baa19, .byte = 0xcd }
};

static const SST_Transaction eorb_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8594392, .data = 136, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7055896, .data = 26317, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 8594392, .data = 89, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_9[] = {
		{ .addr = 0x3d4f02, .byte = 0xb7 },
		{ .addr = 0x3d4f03, .byte = 0x2e },
		{ .addr = 0x3d4f04, .byte = 0x70 },
		{ .addr = 0x3d4f05, .byte = 0x5d },
		{ .addr = 0x3d4f06, .byte = 0xb7 },
		{ .addr = 0x3d4f07, .byte = 0x0e },
		{ .addr = 0x799f84, .byte = 0xf9 },
		{ .addr = 0x799f85, .byte = 0x78 },
		{ .addr = 0x3d4f08, .byte = 0xe5 },
		{ .addr = 0x3d4f09, .byte = 0xa5 }
};

static const SST_RamByte eorb_final_ram_9[] = {
		{ .addr = 0x3d4f02, .byte = 0xb7 },
		{ .addr = 0x3d4f03, .byte = 0x2e },
		{ .addr = 0x3d4f04, .byte = 0x70 },
		{ .addr = 0x3d4f05, .byte = 0x5d },
		{ .addr = 0x3d4f06, .byte = 0xb7 },
		{ .addr = 0x3d4f07, .byte = 0x0e },
		{ .addr = 0x799f84, .byte = 0xf9 },
		{ .addr = 0x799f85, .byte = 0xad },
		{ .addr = 0x3d4f08, .byte = 0xe5 },
		{ .addr = 0x3d4f09, .byte = 0xa5 }
};

static const SST_Transaction eorb_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4017926, .data = 46862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7970692, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4017928, .data = 58789, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7970692, .data = 173, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_10[] = {
		{ .addr = 0x8a4f1e, .byte = 0xbd },
		{ .addr = 0x8a4f1f, .byte = 0x00 },
		{ .addr = 0x8a4f20, .byte = 0xe0 },
		{ .addr = 0x8a4f21, .byte = 0x91 },
		{ .addr = 0x8a4f22, .byte = 0x2f },
		{ .addr = 0x8a4f23, .byte = 0xd5 }
};

static const SST_RamByte eorb_final_ram_10[] = {
		{ .addr = 0x8a4f1e, .byte = 0xbd },
		{ .addr = 0x8a4f1f, .byte = 0x00 },
		{ .addr = 0x8a4f20, .byte = 0xe0 },
		{ .addr = 0x8a4f21, .byte = 0x91 },
		{ .addr = 0x8a4f22, .byte = 0x2f },
		{ .addr = 0x8a4f23, .byte = 0xd5 }
};

static const SST_Transaction eorb_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9064226, .data = 12245, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_11[] = {
		{ .addr = 0x07d99e, .byte = 0xb1 },
		{ .addr = 0x07d99f, .byte = 0x27 },
		{ .addr = 0x07d9a0, .byte = 0x9c },
		{ .addr = 0x07d9a1, .byte = 0x91 },
		{ .addr = 0xa6bcd8, .byte = 0xc1 },
		{ .addr = 0xa6bcd9, .byte = 0x7f },
		{ .addr = 0x07d9a2, .byte = 0x79 },
		{ .addr = 0x07d9a3, .byte = 0x2b }
};

static const SST_RamByte eorb_final_ram_11[] = {
		{ .addr = 0x07d99e, .byte = 0xb1 },
		{ .addr = 0x07d99f, .byte = 0x27 },
		{ .addr = 0x07d9a0, .byte = 0x9c },
		{ .addr = 0x07d9a1, .byte = 0x91 },
		{ .addr = 0xa6bcd8, .byte = 0x0e },
		{ .addr = 0xa6bcd9, .byte = 0x7f },
		{ .addr = 0x07d9a2, .byte = 0x79 },
		{ .addr = 0x07d9a3, .byte = 0x2b }
};

static const SST_Transaction eorb_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10927320, .data = 49408, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 514466, .data = 31019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10927320, .data = 3584, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_12[] = {
		{ .addr = 0x851452, .byte = 0xb9 },
		{ .addr = 0x851453, .byte = 0x33 },
		{ .addr = 0x851454, .byte = 0x3f },
		{ .addr = 0x851455, .byte = 0x1f },
		{ .addr = 0x851456, .byte = 0x9b },
		{ .addr = 0x851457, .byte = 0x6a },
		{ .addr = 0x2c4df6, .byte = 0x8e },
		{ .addr = 0x2c4df7, .byte = 0xa9 },
		{ .addr = 0x851458, .byte = 0x66 },
		{ .addr = 0x851459, .byte = 0x9f }
};

static const SST_RamByte eorb_final_ram_12[] = {
		{ .addr = 0x851452, .byte = 0xb9 },
		{ .addr = 0x851453, .byte = 0x33 },
		{ .addr = 0x851454, .byte = 0x3f },
		{ .addr = 0x851455, .byte = 0x1f },
		{ .addr = 0x851456, .byte = 0x9b },
		{ .addr = 0x851457, .byte = 0x6a },
		{ .addr = 0x2c4df6, .byte = 0x0c },
		{ .addr = 0x2c4df7, .byte = 0xa9 },
		{ .addr = 0x851458, .byte = 0x66 },
		{ .addr = 0x851459, .byte = 0x9f }
};

static const SST_Transaction eorb_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8721494, .data = 39786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2903542, .data = 36352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8721496, .data = 26271, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2903542, .data = 3072, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_13[] = {
		{ .addr = 0x623c98, .byte = 0xb5 },
		{ .addr = 0x623c99, .byte = 0x31 },
		{ .addr = 0x623c9a, .byte = 0x21 },
		{ .addr = 0x623c9b, .byte = 0x02 },
		{ .addr = 0x623c9c, .byte = 0x06 },
		{ .addr = 0x623c9d, .byte = 0x55 },
		{ .addr = 0x8f60f6, .byte = 0xf9 },
		{ .addr = 0x8f60f7, .byte = 0x4f },
		{ .addr = 0x623c9e, .byte = 0xf4 },
		{ .addr = 0x623c9f, .byte = 0xe5 }
};

static const SST_RamByte eorb_final_ram_13[] = {
		{ .addr = 0x623c98, .byte = 0xb5 },
		{ .addr = 0x623c99, .byte = 0x31 },
		{ .addr = 0x623c9a, .byte = 0x21 },
		{ .addr = 0x623c9b, .byte = 0x02 },
		{ .addr = 0x623c9c, .byte = 0x06 },
		{ .addr = 0x623c9d, .byte = 0x55 },
		{ .addr = 0x8f60f6, .byte = 0x97 },
		{ .addr = 0x8f60f7, .byte = 0x4f },
		{ .addr = 0x623c9e, .byte = 0xf4 },
		{ .addr = 0x623c9f, .byte = 0xe5 }
};

static const SST_Transaction eorb_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6438044, .data = 1621, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9396470, .data = 63744, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6438046, .data = 62693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9396470, .data = 38656, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_14[] = {
		{ .addr = 0x4c32fe, .byte = 0xb1 },
		{ .addr = 0x4c32ff, .byte = 0x05 },
		{ .addr = 0x4c3300, .byte = 0x0e },
		{ .addr = 0x4c3301, .byte = 0x87 },
		{ .addr = 0x4c3302, .byte = 0x07 },
		{ .addr = 0x4c3303, .byte = 0xba }
};

static const SST_RamByte eorb_final_ram_14[] = {
		{ .addr = 0x4c32fe, .byte = 0xb1 },
		{ .addr = 0x4c32ff, .byte = 0x05 },
		{ .addr = 0x4c3300, .byte = 0x0e },
		{ .addr = 0x4c3301, .byte = 0x87 },
		{ .addr = 0x4c3302, .byte = 0x07 },
		{ .addr = 0x4c3303, .byte = 0xba }
};

static const SST_Transaction eorb_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 4993794, .data = 1978, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_15[] = {
		{ .addr = 0xd01b70, .byte = 0xb9 },
		{ .addr = 0xd01b71, .byte = 0x33 },
		{ .addr = 0xd01b72, .byte = 0xf4 },
		{ .addr = 0xd01b73, .byte = 0x14 },
		{ .addr = 0xd01b74, .byte = 0xcd },
		{ .addr = 0xd01b75, .byte = 0x4e },
		{ .addr = 0x2c54c8, .byte = 0x96 },
		{ .addr = 0x2c54c9, .byte = 0x43 },
		{ .addr = 0xd01b76, .byte = 0x35 },
		{ .addr = 0xd01b77, .byte = 0xca }
};

static const SST_RamByte eorb_final_ram_15[] = {
		{ .addr = 0xd01b70, .byte = 0xb9 },
		{ .addr = 0xd01b71, .byte = 0x33 },
		{ .addr = 0xd01b72, .byte = 0xf4 },
		{ .addr = 0xd01b73, .byte = 0x14 },
		{ .addr = 0xd01b74, .byte = 0xcd },
		{ .addr = 0xd01b75, .byte = 0x4e },
		{ .addr = 0x2c54c8, .byte = 0x96 },
		{ .addr = 0x2c54c9, .byte = 0x6d },
		{ .addr = 0xd01b76, .byte = 0x35 },
		{ .addr = 0xd01b77, .byte = 0xca }
};

static const SST_Transaction eorb_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13638516, .data = 52558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2905288, .data = 67, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13638518, .data = 13770, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2905288, .data = 109, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_16[] = {
		{ .addr = 0x7ba86e, .byte = 0xb7 },
		{ .addr = 0x7ba86f, .byte = 0x23 },
		{ .addr = 0x7ba870, .byte = 0x56 },
		{ .addr = 0x7ba871, .byte = 0x70 },
		{ .addr = 0xb1ff8c, .byte = 0xb7 },
		{ .addr = 0xb1ff8d, .byte = 0x75 },
		{ .addr = 0x7ba872, .byte = 0x32 },
		{ .addr = 0x7ba873, .byte = 0xe3 }
};

static const SST_RamByte eorb_final_ram_16[] = {
		{ .addr = 0x7ba86e, .byte = 0xb7 },
		{ .addr = 0x7ba86f, .byte = 0x23 },
		{ .addr = 0x7ba870, .byte = 0x56 },
		{ .addr = 0x7ba871, .byte = 0x70 },
		{ .addr = 0xb1ff8c, .byte = 0x4c },
		{ .addr = 0xb1ff8d, .byte = 0x75 },
		{ .addr = 0x7ba872, .byte = 0x32 },
		{ .addr = 0x7ba873, .byte = 0xe3 }
};

static const SST_Transaction eorb_transactions_16[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11665292, .data = 46848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8104050, .data = 13027, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11665292, .data = 19456, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_17[] = {
		{ .addr = 0x33af6e, .byte = 0xb5 },
		{ .addr = 0x33af6f, .byte = 0x05 },
		{ .addr = 0x33af70, .byte = 0xd6 },
		{ .addr = 0x33af71, .byte = 0xf3 },
		{ .addr = 0x33af72, .byte = 0x76 },
		{ .addr = 0x33af73, .byte = 0x66 }
};

static const SST_RamByte eorb_final_ram_17[] = {
		{ .addr = 0x33af6e, .byte = 0xb5 },
		{ .addr = 0x33af6f, .byte = 0x05 },
		{ .addr = 0x33af70, .byte = 0xd6 },
		{ .addr = 0x33af71, .byte = 0xf3 },
		{ .addr = 0x33af72, .byte = 0x76 },
		{ .addr = 0x33af73, .byte = 0x66 }
};

static const SST_Transaction eorb_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3387250, .data = 30310, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_18[] = {
		{ .addr = 0xb6d18e, .byte = 0xbd },
		{ .addr = 0xb6d18f, .byte = 0x2f },
		{ .addr = 0xb6d190, .byte = 0x4a },
		{ .addr = 0xb6d191, .byte = 0xd1 },
		{ .addr = 0xb6d192, .byte = 0x66 },
		{ .addr = 0xb6d193, .byte = 0x78 },
		{ .addr = 0x44f560, .byte = 0x9a },
		{ .addr = 0x44f561, .byte = 0x77 },
		{ .addr = 0xb6d194, .byte = 0x34 },
		{ .addr = 0xb6d195, .byte = 0xbc }
};

static const SST_RamByte eorb_final_ram_18[] = {
		{ .addr = 0xb6d18e, .byte = 0xbd },
		{ .addr = 0xb6d18f, .byte = 0x2f },
		{ .addr = 0xb6d190, .byte = 0x4a },
		{ .addr = 0xb6d191, .byte = 0xd1 },
		{ .addr = 0xb6d192, .byte = 0x66 },
		{ .addr = 0xb6d193, .byte = 0x78 },
		{ .addr = 0x44f560, .byte = 0x9a },
		{ .addr = 0x44f561, .byte = 0x29 },
		{ .addr = 0xb6d194, .byte = 0x34 },
		{ .addr = 0xb6d195, .byte = 0xbc }
};

static const SST_Transaction eorb_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11981202, .data = 26232, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4519264, .data = 119, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11981204, .data = 13500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4519264, .data = 41, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_19[] = {
		{ .addr = 0x610cb0, .byte = 0xbf },
		{ .addr = 0x610cb1, .byte = 0x2c },
		{ .addr = 0x610cb2, .byte = 0xbc },
		{ .addr = 0x610cb3, .byte = 0x70 },
		{ .addr = 0x610cb4, .byte = 0x54 },
		{ .addr = 0x610cb5, .byte = 0x72 },
		{ .addr = 0x126842, .byte = 0xeb },
		{ .addr = 0x126843, .byte = 0xf9 },
		{ .addr = 0x610cb6, .byte = 0x77 },
		{ .addr = 0x610cb7, .byte = 0x16 }
};

static const SST_RamByte eorb_final_ram_19[] = {
		{ .addr = 0x610cb0, .byte = 0xbf },
		{ .addr = 0x610cb1, .byte = 0x2c },
		{ .addr = 0x610cb2, .byte = 0xbc },
		{ .addr = 0x610cb3, .byte = 0x70 },
		{ .addr = 0x610cb4, .byte = 0x54 },
		{ .addr = 0x610cb5, .byte = 0x72 },
		{ .addr = 0x126842, .byte = 0xeb },
		{ .addr = 0x126843, .byte = 0x8e },
		{ .addr = 0x610cb6, .byte = 0x77 },
		{ .addr = 0x610cb7, .byte = 0x16 }
};

static const SST_Transaction eorb_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6360244, .data = 21618, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1206338, .data = 249, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6360246, .data = 30486, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1206338, .data = 142, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_20[] = {
		{ .addr = 0x92080c, .byte = 0x0a },
		{ .addr = 0x92080d, .byte = 0x32 },
		{ .addr = 0x92080e, .byte = 0x3d },
		{ .addr = 0x92080f, .byte = 0xf0 },
		{ .addr = 0x920810, .byte = 0x69 },
		{ .addr = 0x920811, .byte = 0x52 },
		{ .addr = 0x920812, .byte = 0x03 },
		{ .addr = 0x920813, .byte = 0xc5 },
		{ .addr = 0xcd1f0c, .byte = 0x86 },
		{ .addr = 0xcd1f0d, .byte = 0xe7 },
		{ .addr = 0x920814, .byte = 0x28 },
		{ .addr = 0x920815, .byte = 0xa1 }
};

static const SST_RamByte eorb_final_ram_20[] = {
		{ .addr = 0x92080c, .byte = 0x0a },
		{ .addr = 0x92080d, .byte = 0x32 },
		{ .addr = 0x92080e, .byte = 0x3d },
		{ .addr = 0x92080f, .byte = 0xf0 },
		{ .addr = 0x920810, .byte = 0x69 },
		{ .addr = 0x920811, .byte = 0x52 },
		{ .addr = 0x920812, .byte = 0x03 },
		{ .addr = 0x920813, .byte = 0xc5 },
		{ .addr = 0xcd1f0c, .byte = 0x76 },
		{ .addr = 0xcd1f0d, .byte = 0xe7 },
		{ .addr = 0x920814, .byte = 0x28 },
		{ .addr = 0x920815, .byte = 0xa1 }
};

static const SST_Transaction eorb_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9570320, .data = 26962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9570322, .data = 965, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13442828, .data = 34304, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9570324, .data = 10401, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 13442828, .data = 30208, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_21[] = {
		{ .addr = 0xeae822, .byte = 0x0a },
		{ .addr = 0xeae823, .byte = 0x04 },
		{ .addr = 0xeae824, .byte = 0x74 },
		{ .addr = 0xeae825, .byte = 0x9d },
		{ .addr = 0xeae826, .byte = 0x07 },
		{ .addr = 0xeae827, .byte = 0x52 },
		{ .addr = 0xeae828, .byte = 0x2c },
		{ .addr = 0xeae829, .byte = 0x03 }
};

static const SST_RamByte eorb_final_ram_21[] = {
		{ .addr = 0xeae822, .byte = 0x0a },
		{ .addr = 0xeae823, .byte = 0x04 },
		{ .addr = 0xeae824, .byte = 0x74 },
		{ .addr = 0xeae825, .byte = 0x9d },
		{ .addr = 0xeae826, .byte = 0x07 },
		{ .addr = 0xeae827, .byte = 0x52 },
		{ .addr = 0xeae828, .byte = 0x2c },
		{ .addr = 0xeae829, .byte = 0x03 }
};

static const SST_Transaction eorb_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15394854, .data = 1874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15394856, .data = 11267, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_22[] = {
		{ .addr = 0x11dfca, .byte = 0xbf },
		{ .addr = 0x11dfcb, .byte = 0x10 },
		{ .addr = 0x11dfcc, .byte = 0x25 },
		{ .addr = 0x11dfcd, .byte = 0xe9 },
		{ .addr = 0x8c7984, .byte = 0x6e },
		{ .addr = 0x8c7985, .byte = 0xfa },
		{ .addr = 0x11dfce, .byte = 0x9e },
		{ .addr = 0x11dfcf, .byte = 0x12 }
};

static const SST_RamByte eorb_final_ram_22[] = {
		{ .addr = 0x11dfca, .byte = 0xbf },
		{ .addr = 0x11dfcb, .byte = 0x10 },
		{ .addr = 0x11dfcc, .byte = 0x25 },
		{ .addr = 0x11dfcd, .byte = 0xe9 },
		{ .addr = 0x8c7984, .byte = 0x6e },
		{ .addr = 0x8c7985, .byte = 0xf9 },
		{ .addr = 0x11dfce, .byte = 0x9e },
		{ .addr = 0x11dfcf, .byte = 0x12 }
};

static const SST_Transaction eorb_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9206148, .data = 250, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1171406, .data = 40466, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9206148, .data = 249, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_23[] = {
		{ .addr = 0x00fd64, .byte = 0xbb },
		{ .addr = 0x00fd65, .byte = 0x37 },
		{ .addr = 0x00fd66, .byte = 0xbd },
		{ .addr = 0x00fd67, .byte = 0x72 },
		{ .addr = 0x00fd68, .byte = 0x5f },
		{ .addr = 0x00fd69, .byte = 0xda },
		{ .addr = 0x1438ee, .byte = 0xff },
		{ .addr = 0x1438ef, .byte = 0xc6 },
		{ .addr = 0x00fd6a, .byte = 0x41 },
		{ .addr = 0x00fd6b, .byte = 0x48 }
};

static const SST_RamByte eorb_final_ram_23[] = {
		{ .addr = 0x00fd64, .byte = 0xbb },
		{ .addr = 0x00fd65, .byte = 0x37 },
		{ .addr = 0x00fd66, .byte = 0xbd },
		{ .addr = 0x00fd67, .byte = 0x72 },
		{ .addr = 0x00fd68, .byte = 0x5f },
		{ .addr = 0x00fd69, .byte = 0xda },
		{ .addr = 0x1438ee, .byte = 0xff },
		{ .addr = 0x1438ef, .byte = 0x53 },
		{ .addr = 0x00fd6a, .byte = 0x41 },
		{ .addr = 0x00fd6b, .byte = 0x48 }
};

static const SST_Transaction eorb_transactions_23[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 64872, .data = 24538, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1325294, .data = 198, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 64874, .data = 16712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1325294, .data = 83, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_24[] = {
		{ .addr = 0xa13f00, .byte = 0xbd },
		{ .addr = 0xa13f01, .byte = 0x06 },
		{ .addr = 0xa13f02, .byte = 0xab },
		{ .addr = 0xa13f03, .byte = 0x5f },
		{ .addr = 0xa13f04, .byte = 0xcb },
		{ .addr = 0xa13f05, .byte = 0x90 }
};

static const SST_RamByte eorb_final_ram_24[] = {
		{ .addr = 0xa13f00, .byte = 0xbd },
		{ .addr = 0xa13f01, .byte = 0x06 },
		{ .addr = 0xa13f02, .byte = 0xab },
		{ .addr = 0xa13f03, .byte = 0x5f },
		{ .addr = 0xa13f04, .byte = 0xcb },
		{ .addr = 0xa13f05, .byte = 0x90 }
};

static const SST_Transaction eorb_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10567428, .data = 52112, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_25[] = {
		{ .addr = 0xcb9fee, .byte = 0xb3 },
		{ .addr = 0xcb9fef, .byte = 0x2b },
		{ .addr = 0xcb9ff0, .byte = 0x4d },
		{ .addr = 0xcb9ff1, .byte = 0x56 },
		{ .addr = 0xcb9ff2, .byte = 0x60 },
		{ .addr = 0xcb9ff3, .byte = 0x94 },
		{ .addr = 0xe0250e, .byte = 0x4d },
		{ .addr = 0xe0250f, .byte = 0x28 },
		{ .addr = 0xcb9ff4, .byte = 0xf6 },
		{ .addr = 0xcb9ff5, .byte = 0x3b }
};

static const SST_RamByte eorb_final_ram_25[] = {
		{ .addr = 0xcb9fee, .byte = 0xb3 },
		{ .addr = 0xcb9fef, .byte = 0x2b },
		{ .addr = 0xcb9ff0, .byte = 0x4d },
		{ .addr = 0xcb9ff1, .byte = 0x56 },
		{ .addr = 0xcb9ff2, .byte = 0x60 },
		{ .addr = 0xcb9ff3, .byte = 0x94 },
		{ .addr = 0xe0250e, .byte = 0x88 },
		{ .addr = 0xe0250f, .byte = 0x28 },
		{ .addr = 0xcb9ff4, .byte = 0xf6 },
		{ .addr = 0xcb9ff5, .byte = 0x3b }
};

static const SST_Transaction eorb_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13344754, .data = 24724, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14689550, .data = 19712, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13344756, .data = 63035, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14689550, .data = 34816, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_26[] = {
		{ .addr = 0xcd5d0e, .byte = 0xb3 },
		{ .addr = 0xcd5d0f, .byte = 0x38 },
		{ .addr = 0xcd5d10, .byte = 0xb4 },
		{ .addr = 0xcd5d11, .byte = 0x7f },
		{ .addr = 0xcd5d12, .byte = 0x3b },
		{ .addr = 0xcd5d13, .byte = 0xd8 },
		{ .addr = 0xffb47e, .byte = 0x5f },
		{ .addr = 0xffb47f, .byte = 0x8d },
		{ .addr = 0xcd5d14, .byte = 0x39 },
		{ .addr = 0xcd5d15, .byte = 0x35 }
};

static const SST_RamByte eorb_final_ram_26[] = {
		{ .addr = 0xcd5d0e, .byte = 0xb3 },
		{ .addr = 0xcd5d0f, .byte = 0x38 },
		{ .addr = 0xcd5d10, .byte = 0xb4 },
		{ .addr = 0xcd5d11, .byte = 0x7f },
		{ .addr = 0xcd5d12, .byte = 0x3b },
		{ .addr = 0xcd5d13, .byte = 0xd8 },
		{ .addr = 0xffb47e, .byte = 0x5f },
		{ .addr = 0xffb47f, .byte = 0xcd },
		{ .addr = 0xcd5d14, .byte = 0x39 },
		{ .addr = 0xcd5d15, .byte = 0x35 }
};

static const SST_Transaction eorb_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13458706, .data = 15320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16757886, .data = 141, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13458708, .data = 14645, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16757886, .data = 205, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_27[] = {
		{ .addr = 0x87e7ee, .byte = 0xb7 },
		{ .addr = 0x87e7ef, .byte = 0x17 },
		{ .addr = 0x87e7f0, .byte = 0x23 },
		{ .addr = 0x87e7f1, .byte = 0xdd },
		{ .addr = 0x382fa2, .byte = 0x9b },
		{ .addr = 0x382fa3, .byte = 0xb3 },
		{ .addr = 0x87e7f2, .byte = 0x3e },
		{ .addr = 0x87e7f3, .byte = 0xa0 }
};

static const SST_RamByte eorb_final_ram_27[] = {
		{ .addr = 0x87e7ee, .byte = 0xb7 },
		{ .addr = 0x87e7ef, .byte = 0x17 },
		{ .addr = 0x87e7f0, .byte = 0x23 },
		{ .addr = 0x87e7f1, .byte = 0xdd },
		{ .addr = 0x382fa2, .byte = 0xa3 },
		{ .addr = 0x382fa3, .byte = 0xb3 },
		{ .addr = 0x87e7f2, .byte = 0x3e },
		{ .addr = 0x87e7f3, .byte = 0xa0 }
};

static const SST_Transaction eorb_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3682210, .data = 39680, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8906738, .data = 16032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3682210, .data = 41728, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_28[] = {
		{ .addr = 0x078d36, .byte = 0xbb },
		{ .addr = 0x078d37, .byte = 0x21 },
		{ .addr = 0x078d38, .byte = 0x2e },
		{ .addr = 0x078d39, .byte = 0x06 },
		{ .addr = 0xbb2300, .byte = 0x91 },
		{ .addr = 0xbb2301, .byte = 0xd5 },
		{ .addr = 0x078d3a, .byte = 0x12 },
		{ .addr = 0x078d3b, .byte = 0x6b }
};

static const SST_RamByte eorb_final_ram_28[] = {
		{ .addr = 0x078d36, .byte = 0xbb },
		{ .addr = 0x078d37, .byte = 0x21 },
		{ .addr = 0x078d38, .byte = 0x2e },
		{ .addr = 0x078d39, .byte = 0x06 },
		{ .addr = 0xbb2300, .byte = 0x9b },
		{ .addr = 0xbb2301, .byte = 0xd5 },
		{ .addr = 0x078d3a, .byte = 0x12 },
		{ .addr = 0x078d3b, .byte = 0x6b }
};

static const SST_Transaction eorb_transactions_28[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12264192, .data = 37120, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 494906, .data = 4715, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12264192, .data = 39680, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_29[] = {
		{ .addr = 0xbc4e42, .byte = 0xb7 },
		{ .addr = 0xbc4e43, .byte = 0x35 },
		{ .addr = 0xbc4e44, .byte = 0xf0 },
		{ .addr = 0xbc4e45, .byte = 0x1d },
		{ .addr = 0xbc4e46, .byte = 0x44 },
		{ .addr = 0xbc4e47, .byte = 0x5d },
		{ .addr = 0x4ea3fa, .byte = 0x45 },
		{ .addr = 0x4ea3fb, .byte = 0x62 },
		{ .addr = 0xbc4e48, .byte = 0x60 },
		{ .addr = 0xbc4e49, .byte = 0x4e }
};

static const SST_RamByte eorb_final_ram_29[] = {
		{ .addr = 0xbc4e42, .byte = 0xb7 },
		{ .addr = 0xbc4e43, .byte = 0x35 },
		{ .addr = 0xbc4e44, .byte = 0xf0 },
		{ .addr = 0xbc4e45, .byte = 0x1d },
		{ .addr = 0xbc4e46, .byte = 0x44 },
		{ .addr = 0xbc4e47, .byte = 0x5d },
		{ .addr = 0x4ea3fa, .byte = 0x45 },
		{ .addr = 0x4ea3fb, .byte = 0x18 },
		{ .addr = 0xbc4e48, .byte = 0x60 },
		{ .addr = 0xbc4e49, .byte = 0x4e }
};

static const SST_Transaction eorb_transactions_29[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12340806, .data = 17501, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5153786, .data = 98, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12340808, .data = 24654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5153786, .data = 24, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_30[] = {
		{ .addr = 0x06f8d0, .byte = 0xbb },
		{ .addr = 0x06f8d1, .byte = 0x19 },
		{ .addr = 0x06f8d2, .byte = 0xdc },
		{ .addr = 0x06f8d3, .byte = 0x7d },
		{ .addr = 0xe62862, .byte = 0x1f },
		{ .addr = 0xe62863, .byte = 0xa7 },
		{ .addr = 0x06f8d4, .byte = 0xd6 },
		{ .addr = 0x06f8d5, .byte = 0xfd }
};

static const SST_RamByte eorb_final_ram_30[] = {
		{ .addr = 0x06f8d0, .byte = 0xbb },
		{ .addr = 0x06f8d1, .byte = 0x19 },
		{ .addr = 0x06f8d2, .byte = 0xdc },
		{ .addr = 0x06f8d3, .byte = 0x7d },
		{ .addr = 0xe62862, .byte = 0x9b },
		{ .addr = 0xe62863, .byte = 0xa7 },
		{ .addr = 0x06f8d4, .byte = 0xd6 },
		{ .addr = 0x06f8d5, .byte = 0xfd }
};

static const SST_Transaction eorb_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15083618, .data = 7936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 456916, .data = 55037, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15083618, .data = 39680, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte eorb_initial_ram_31[] = {
		{ .addr = 0xbf3532, .byte = 0xbb },
		{ .addr = 0xbf3533, .byte = 0x1b },
		{ .addr = 0xbf3534, .byte = 0x06 },
		{ .addr = 0xbf3535, .byte = 0xa8 },
		{ .addr = 0x4ef008, .byte = 0x1b },
		{ .addr = 0x4ef009, .byte = 0x9e },
		{ .addr = 0xbf3536, .byte = 0x58 },
		{ .addr = 0xbf3537, .byte = 0x38 }
};

static const SST_RamByte eorb_final_ram_31[] = {
		{ .addr = 0xbf3532, .byte = 0xbb },
		{ .addr = 0xbf3533, .byte = 0x1b },
		{ .addr = 0xbf3534, .byte = 0x06 },
		{ .addr = 0xbf3535, .byte = 0xa8 },
		{ .addr = 0x4ef008, .byte = 0x1b },
		{ .addr = 0x4ef009, .byte = 0x46 },
		{ .addr = 0xbf3536, .byte = 0x58 },
		{ .addr = 0xbf3537, .byte = 0x38 }
};

static const SST_Transaction eorb_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5173256, .data = 158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12530998, .data = 22584, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5173256, .data = 70, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase eorb[] = {
	{
		.name = "000 EOR.b D1, (d8, A0, Xn) b330",
		.initial = {
			.regs = {
				322243750, 2165232778, 2100007715, 4237342435, 2572068118, 2875607722, 1503358159, 3668045673, 295339817, 68187332, 509124303, 2875758993, 4210229374, 3978168128, 3190833285, 14749924, 8164118, 33034, 14813566
			},
			.prefetch0 = 45872,
			.prefetch1 = 41561,
			.ram = eorb_initial_ram_0,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				322243750, 2165232778, 2100007715, 4237342435, 2572068118, 2875607722, 1503358159, 3668045673, 295339817, 68187332, 509124303, 2875758993, 4210229374, 3978168128, 3190833285, 14749924, 8164118, 33024, 14813570
			},
			.prefetch0 = 26947,
			.prefetch1 = 42775,
			.ram = eorb_final_ram_0,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_0,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "001 EOR.b D1, (d8, A7, Xn) b337",
		.initial = {
			.regs = {
				3791088911, 583872329, 3482425318, 2563402364, 3543892958, 28401104, 3301090054, 3740486941, 3502638801, 1050867534, 184851443, 2819443447, 3484133620, 1017079068, 1040671575, 12324354, 9356438, 1548, 3602236
			},
			.prefetch0 = 45879,
			.prefetch1 = 65073,
			.ram = eorb_initial_ram_1,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3791088911, 583872329, 3482425318, 2563402364, 3543892958, 28401104, 3301090054, 3740486941, 3502638801, 1050867534, 184851443, 2819443447, 3484133620, 1017079068, 1040671575, 12324354, 9356438, 1536, 3602240
			},
			.prefetch0 = 14297,
			.prefetch1 = 269,
			.ram = eorb_final_ram_1,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_1,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "002 EOR.b D3, (d8, A3, Xn) b733",
		.initial = {
			.regs = {
				3881714707, 569687215, 3743294142, 1987332181, 1738302386, 1589369797, 3633161183, 2534628961, 3893088856, 701388455, 3387877274, 4047004824, 583114192, 3988788978, 2358193131, 16235256, 12844274, 9224, 16088922
			},
			.prefetch0 = 46899,
			.prefetch1 = 27363,
			.ram = eorb_initial_ram_2,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3881714707, 569687215, 3743294142, 1987332181, 1738302386, 1589369797, 3633161183, 2534628961, 3893088856, 701388455, 3387877274, 4047004824, 583114192, 3988788978, 2358193131, 16235256, 12844274, 9224, 16088926
			},
			.prefetch0 = 18924,
			.prefetch1 = 1088,
			.ram = eorb_final_ram_2,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_2,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "003 EOR.b D7, (A3)+ bf1b",
		.initial = {
			.regs = {
				2382141880, 3956560973, 1306520985, 2548442843, 1023765667, 1918642629, 1704869146, 1781799277, 1061945588, 3384650200, 2441120789, 577580638, 1146579562, 2724384803, 4273210264, 6929390, 11584654, 8991, 4064922
			},
			.prefetch0 = 48923,
			.prefetch1 = 55941,
			.ram = eorb_initial_ram_3,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2382141880, 3956560973, 1306520985, 2548442843, 1023765667, 1918642629, 1704869146, 1781799277, 1061945588, 3384650200, 2441120789, 577580639, 1146579562, 2724384803, 4273210264, 6929390, 11584654, 8984, 4064924
			},
			.prefetch0 = 55941,
			.prefetch1 = 29444,
			.ram = eorb_final_ram_3,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_3,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "004 EOR.b D2, -(A6) b526",
		.initial = {
			.regs = {
				2347978789, 2678371717, 235710526, 1308664938, 2785023225, 3055018887, 1491574068, 1000462372, 3759776447, 290530128, 3974810306, 3226905467, 3947743059, 2623232301, 1569195899, 5944250, 16069034, 34048, 15057696
			},
			.prefetch0 = 46374,
			.prefetch1 = 48399,
			.ram = eorb_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2347978789, 2678371717, 235710526, 1308664938, 2785023225, 3055018887, 1491574068, 1000462372, 3759776447, 290530128, 3974810306, 3226905467, 3947743059, 2623232301, 1569195898, 5944250, 16069034, 34048, 15057698
			},
			.prefetch0 = 48399,
			.prefetch1 = 50736,
			.ram = eorb_final_ram_4,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_4,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "005 EOR.b D0, (A5) b115",
		.initial = {
			.regs = {
				1406177044, 2939963249, 494435542, 1929692412, 1970779902, 766221759, 3694861561, 1002821221, 3147155358, 2027332710, 3829003271, 1755286576, 3408146130, 1087785466, 3050316026, 5225786, 16743294, 34331, 4804412
			},
			.prefetch0 = 45333,
			.prefetch1 = 43021,
			.ram = eorb_initial_ram_5,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1406177044, 2939963249, 494435542, 1929692412, 1970779902, 766221759, 3694861561, 1002821221, 3147155358, 2027332710, 3829003271, 1755286576, 3408146130, 1087785466, 3050316026, 5225786, 16743294, 34320, 4804414
			},
			.prefetch0 = 43021,
			.prefetch1 = 43671,
			.ram = eorb_final_ram_5,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_5,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "006 EOR.b D7, D6 bf06",
		.initial = {
			.regs = {
				3160029927, 273664056, 1395042353, 1581044746, 1843675313, 3282241233, 3561748570, 1302859473, 3838078338, 907803810, 70672790, 2626335225, 486425459, 1223192405, 3032396706, 16754796, 12211004, 21, 3703288
			},
			.prefetch0 = 48902,
			.prefetch1 = 58149,
			.ram = eorb_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3160029927, 273664056, 1395042353, 1581044746, 1843675313, 3282241233, 3561748619, 1302859473, 3838078338, 907803810, 70672790, 2626335225, 486425459, 1223192405, 3032396706, 16754796, 12211004, 24, 3703290
			},
			.prefetch0 = 58149,
			.prefetch1 = 32510,
			.ram = eorb_final_ram_6,
			.ram_len = 6,
		},
		.transactions = eorb_transactions_6,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "007 EOR.b D7, (A5) bf15",
		.initial = {
			.regs = {
				1254771453, 675467010, 2251785995, 3308025233, 2965549531, 1716748682, 2232721921, 2280452265, 170265653, 404687956, 3763790095, 641224170, 3895220594, 291943825, 938897805, 9476266, 13797462, 33543, 10751294
			},
			.prefetch0 = 48917,
			.prefetch1 = 1186,
			.ram = eorb_initial_ram_7,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1254771453, 675467010, 2251785995, 3308025233, 2965549531, 1716748682, 2232721921, 2280452265, 170265653, 404687956, 3763790095, 641224170, 3895220594, 291943825, 938897805, 9476266, 13797462, 33536, 10751296
			},
			.prefetch0 = 1186,
			.prefetch1 = 58052,
			.ram = eorb_final_ram_7,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_7,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "008 EOR.b D1, (A0) b310",
		.initial = {
			.regs = {
				2102926031, 1500506065, 913667655, 1895261240, 709263603, 81109173, 2580204362, 4106074045, 595796953, 1414216382, 1825589853, 1443271611, 2640438232, 3275346801, 3091720649, 15783374, 16157010, 1035, 7055896
			},
			.prefetch0 = 45840,
			.prefetch1 = 59802,
			.ram = eorb_initial_ram_8,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2102926031, 1500506065, 913667655, 1895261240, 709263603, 81109173, 2580204362, 4106074045, 595796953, 1414216382, 1825589853, 1443271611, 2640438232, 3275346801, 3091720649, 15783374, 16157010, 1024, 7055898
			},
			.prefetch0 = 59802,
			.prefetch1 = 26317,
			.ram = eorb_final_ram_8,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_8,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "009 EOR.b D3, (d16, A6) b72e",
		.initial = {
			.regs = {
				874807200, 1726361515, 1963142502, 2294095573, 334950289, 4004730426, 1145990675, 1227824824, 4265248236, 3332679206, 1178271817, 3276871041, 3704792234, 3685641294, 779693864, 7357848, 15519142, 8714, 4017926
			},
			.prefetch0 = 46894,
			.prefetch1 = 28765,
			.ram = eorb_initial_ram_9,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				874807200, 1726361515, 1963142502, 2294095573, 334950289, 4004730426, 1145990675, 1227824824, 4265248236, 3332679206, 1178271817, 3276871041, 3704792234, 3685641294, 779693864, 7357848, 15519142, 8712, 4017930
			},
			.prefetch0 = 46862,
			.prefetch1 = 58789,
			.ram = eorb_final_ram_9,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_9,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "010 EOR.b D6, D0 bd00",
		.initial = {
			.regs = {
				3466329364, 2269418517, 1056597917, 790665278, 3435184011, 2271765734, 3370321875, 3406486753, 823806252, 3930894339, 232760984, 4239729355, 4239504870, 1663433678, 3540687842, 14375512, 10691940, 34573, 9064226
			},
			.prefetch0 = 48384,
			.prefetch1 = 57489,
			.ram = eorb_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3466329543, 2269418517, 1056597917, 790665278, 3435184011, 2271765734, 3370321875, 3406486753, 823806252, 3930894339, 232760984, 4239729355, 4239504870, 1663433678, 3540687842, 14375512, 10691940, 34568, 9064228
			},
			.prefetch0 = 57489,
			.prefetch1 = 12245,
			.ram = eorb_final_ram_10,
			.ram_len = 6,
		},
		.transactions = eorb_transactions_10,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "011 EOR.b D0, -(A7) b127",
		.initial = {
			.regs = {
				556355791, 2749974457, 1912749945, 2847808646, 1191374013, 2749835275, 1900936418, 1660907175, 2737529564, 2195017933, 1108293724, 2148167248, 1998043811, 378988933, 1070563313, 10927322, 11570568, 33289, 514466
			},
			.prefetch0 = 45351,
			.prefetch1 = 40081,
			.ram = eorb_initial_ram_11,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				556355791, 2749974457, 1912749945, 2847808646, 1191374013, 2749835275, 1900936418, 1660907175, 2737529564, 2195017933, 1108293724, 2148167248, 1998043811, 378988933, 1070563313, 10927320, 11570568, 33280, 514468
			},
			.prefetch0 = 40081,
			.prefetch1 = 31019,
			.ram = eorb_final_ram_11,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_11,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "012 EOR.b D4, (d8, A3, Xn) b933",
		.initial = {
			.regs = {
				814054517, 1502886518, 552088018, 2522837625, 525446786, 2213347796, 902022832, 2397807389, 3199658546, 3966086533, 1749672560, 4073511774, 3233754790, 739873824, 3528306567, 11949954, 15735560, 8210, 8721494
			},
			.prefetch0 = 47411,
			.prefetch1 = 16159,
			.ram = eorb_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				814054517, 1502886518, 552088018, 2522837625, 525446786, 2213347796, 902022832, 2397807389, 3199658546, 3966086533, 1749672560, 4073511774, 3233754790, 739873824, 3528306567, 11949954, 15735560, 8208, 8721498
			},
			.prefetch0 = 39786,
			.prefetch1 = 26271,
			.ram = eorb_final_ram_12,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_12,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "013 EOR.b D2, (d8, A1, Xn) b531",
		.initial = {
			.regs = {
				1099313685, 1929560821, 3508550254, 4254095332, 2831904595, 69456964, 2904348514, 823768566, 414567493, 4220462726, 1264409177, 821778622, 2369610161, 2979502238, 2722252652, 7472172, 7758048, 33048, 6438044
			},
			.prefetch0 = 46385,
			.prefetch1 = 8450,
			.ram = eorb_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1099313685, 1929560821, 3508550254, 4254095332, 2831904595, 69456964, 2904348514, 823768566, 414567493, 4220462726, 1264409177, 821778622, 2369610161, 2979502238, 2722252652, 7472172, 7758048, 33048, 6438048
			},
			.prefetch0 = 1621,
			.prefetch1 = 62693,
			.ram = eorb_final_ram_13,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_13,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "014 EOR.b D0, D5 b105",
		.initial = {
			.regs = {
				3713188563, 313006728, 2988896972, 3379607528, 2984234035, 3620149645, 1268582118, 3894956254, 4216678000, 3553013123, 3510153649, 1610248911, 2610215956, 3019357443, 1633349429, 9649804, 14297934, 1311, 4993794
			},
			.prefetch0 = 45317,
			.prefetch1 = 3719,
			.ram = eorb_initial_ram_14,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3713188563, 313006728, 2988896972, 3379607528, 2984234035, 3620149598, 1268582118, 3894956254, 4216678000, 3553013123, 3510153649, 1610248911, 2610215956, 3019357443, 1633349429, 9649804, 14297934, 1296, 4993796
			},
			.prefetch0 = 3719,
			.prefetch1 = 1978,
			.ram = eorb_final_ram_14,
			.ram_len = 6,
		},
		.transactions = eorb_transactions_14,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "015 EOR.b D4, (d8, A3, Xn) b933",
		.initial = {
			.regs = {
				504750483, 2949900371, 2212077451, 377133945, 3257660462, 2129253276, 402844785, 1665429889, 1595105639, 4199159773, 868391730, 2351693545, 2336841749, 2557700393, 2897287779, 10704332, 12410056, 1290, 13638516
			},
			.prefetch0 = 47411,
			.prefetch1 = 62484,
			.ram = eorb_initial_ram_15,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				504750483, 2949900371, 2212077451, 377133945, 3257660462, 2129253276, 402844785, 1665429889, 1595105639, 4199159773, 868391730, 2351693545, 2336841749, 2557700393, 2897287779, 10704332, 12410056, 1280, 13638520
			},
			.prefetch0 = 52558,
			.prefetch1 = 13770,
			.ram = eorb_final_ram_15,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_15,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "016 EOR.b D3, -(A3) b723",
		.initial = {
			.regs = {
				473029903, 659835285, 3613420987, 2528075003, 3373522485, 1030767182, 292263476, 1206241568, 3110442980, 1890287527, 2456606334, 3249667981, 3578829, 1755717726, 2961957056, 5817204, 8991922, 8961, 8104050
			},
			.prefetch0 = 46883,
			.prefetch1 = 22128,
			.ram = eorb_initial_ram_16,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				473029903, 659835285, 3613420987, 2528075003, 3373522485, 1030767182, 292263476, 1206241568, 3110442980, 1890287527, 2456606334, 3249667980, 3578829, 1755717726, 2961957056, 5817204, 8991922, 8960, 8104052
			},
			.prefetch0 = 22128,
			.prefetch1 = 13027,
			.ram = eorb_final_ram_16,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_16,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "017 EOR.b D2, D5 b505",
		.initial = {
			.regs = {
				4065116007, 2353589895, 3264112745, 2688231680, 125429972, 3295875955, 1445929329, 3668788250, 1409671154, 1189897873, 90715964, 77705418, 65745282, 2220291514, 3639972813, 15503478, 7328002, 17, 3387250
			},
			.prefetch0 = 46341,
			.prefetch1 = 55027,
			.ram = eorb_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4065116007, 2353589895, 3264112745, 2688231680, 125429972, 3295875866, 1445929329, 3668788250, 1409671154, 1189897873, 90715964, 77705418, 65745282, 2220291514, 3639972813, 15503478, 7328002, 16, 3387252
			},
			.prefetch0 = 55027,
			.prefetch1 = 30310,
			.ram = eorb_final_ram_17,
			.ram_len = 6,
		},
		.transactions = eorb_transactions_17,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "018 EOR.b D6, (d16, A7) bd2f",
		.initial = {
			.regs = {
				594806756, 2229859527, 2987500336, 3518506108, 1117970044, 1580324955, 2842422366, 1851678514, 2920505560, 3752200168, 2979120016, 3991903398, 2269530580, 203233928, 4030023788, 4500112, 8525886, 1797, 11981202
			},
			.prefetch0 = 48431,
			.prefetch1 = 19153,
			.ram = eorb_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				594806756, 2229859527, 2987500336, 3518506108, 1117970044, 1580324955, 2842422366, 1851678514, 2920505560, 3752200168, 2979120016, 3991903398, 2269530580, 203233928, 4030023788, 4500112, 8525886, 1792, 11981206
			},
			.prefetch0 = 26232,
			.prefetch1 = 13500,
			.ram = eorb_final_ram_18,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_18,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "019 EOR.b D7, (d16, A4) bf2c",
		.initial = {
			.regs = {
				4240812926, 3000011734, 3003817795, 2146578757, 812048138, 334768739, 1350388946, 3251225207, 2054784366, 1529890345, 3334843629, 366590207, 4094864339, 2953873270, 4276929154, 6179470, 15586224, 42267, 6360244
			},
			.prefetch0 = 48940,
			.prefetch1 = 48240,
			.ram = eorb_initial_ram_19,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4240812926, 3000011734, 3003817795, 2146578757, 812048138, 334768739, 1350388946, 3251225207, 2054784366, 1529890345, 3334843629, 366590207, 4094864339, 2953873270, 4276929154, 6179470, 15586224, 42264, 6360248
			},
			.prefetch0 = 21618,
			.prefetch1 = 30486,
			.ram = eorb_final_ram_19,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_19,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "020 EOR.b #, (d8, A2, Xn) 0a32",
		.initial = {
			.regs = {
				3043139532, 346643691, 3476613278, 1782093900, 915006631, 3961248198, 846444891, 971006742, 748337307, 3543343173, 4233717087, 3875284054, 2353906580, 3533838759, 2888784158, 5832652, 12532352, 32790, 9570320
			},
			.prefetch0 = 2610,
			.prefetch1 = 15856,
			.ram = eorb_initial_ram_20,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3043139532, 346643691, 3476613278, 1782093900, 915006631, 3961248198, 846444891, 971006742, 748337307, 3543343173, 4233717087, 3875284054, 2353906580, 3533838759, 2888784158, 5832652, 12532352, 32784, 9570326
			},
			.prefetch0 = 965,
			.prefetch1 = 10401,
			.ram = eorb_final_ram_20,
			.ram_len = 12,
		},
		.transactions = eorb_transactions_20,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "021 EOR.b #, D4 0a04",
		.initial = {
			.regs = {
				2053971587, 40880922, 1172663936, 2487131241, 1487522997, 1017321775, 364113520, 3753393689, 565881255, 2311582388, 1015171908, 1706903634, 981812981, 1600343109, 3897262645, 13831422, 8809916, 41759, 15394854
			},
			.prefetch0 = 2564,
			.prefetch1 = 29853,
			.ram = eorb_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2053971587, 40880922, 1172663936, 2487131241, 1487522856, 1017321775, 364113520, 3753393689, 565881255, 2311582388, 1015171908, 1706903634, 981812981, 1600343109, 3897262645, 13831422, 8809916, 41744, 15394858
			},
			.prefetch0 = 1874,
			.prefetch1 = 11267,
			.ram = eorb_final_ram_21,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_21,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "022 EOR.b D7, (A0) bf10",
		.initial = {
			.regs = {
				3750391440, 437776768, 805478286, 1325222831, 994286979, 825442217, 2744259090, 563205379, 445413765, 4173517797, 3856758155, 4018607911, 2736720114, 240608908, 4232927407, 669350, 2002916, 34588, 1171406
			},
			.prefetch0 = 48912,
			.prefetch1 = 9705,
			.ram = eorb_initial_ram_22,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3750391440, 437776768, 805478286, 1325222831, 994286979, 825442217, 2744259090, 563205379, 445413765, 4173517797, 3856758155, 4018607911, 2736720114, 240608908, 4232927407, 669350, 2002916, 34584, 1171408
			},
			.prefetch0 = 9705,
			.prefetch1 = 40466,
			.ram = eorb_final_ram_22,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_22,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "023 EOR.b D5, (d8, A7, Xn) bb37",
		.initial = {
			.regs = {
				4050596377, 2268612000, 3082515532, 2406344293, 202408158, 3315475349, 3176839126, 1651725370, 1095896797, 3918816413, 3189534269, 3922216329, 2029766290, 2065016935, 1177351478, 4977396, 13629536, 32771, 64872
			},
			.prefetch0 = 47927,
			.prefetch1 = 48498,
			.ram = eorb_initial_ram_23,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				4050596377, 2268612000, 3082515532, 2406344293, 202408158, 3315475349, 3176839126, 1651725370, 1095896797, 3918816413, 3189534269, 3922216329, 2029766290, 2065016935, 1177351478, 4977396, 13629536, 32768, 64876
			},
			.prefetch0 = 24538,
			.prefetch1 = 16712,
			.ram = eorb_final_ram_23,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_23,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "024 EOR.b D6, D6 bd06",
		.initial = {
			.regs = {
				1047514900, 113893843, 317552254, 2926860367, 1102733571, 1816788081, 2360045248, 7519398, 3289901478, 3505669031, 1198507750, 3205680615, 2426039084, 1387235168, 1140168646, 6650208, 2353222, 9478, 10567428
			},
			.prefetch0 = 48390,
			.prefetch1 = 43871,
			.ram = eorb_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1047514900, 113893843, 317552254, 2926860367, 1102733571, 1816788081, 2360045056, 7519398, 3289901478, 3505669031, 1198507750, 3205680615, 2426039084, 1387235168, 1140168646, 6650208, 2353222, 9476, 10567430
			},
			.prefetch0 = 43871,
			.prefetch1 = 52112,
			.ram = eorb_final_ram_24,
			.ram_len = 6,
		},
		.transactions = eorb_transactions_24,
		.transactions_len = 1,
		.lenght = 4,
	},
	{
		.name = "025 EOR.b D1, (d16, A3) b32b",
		.initial = {
			.regs = {
				3844841711, 2334124997, 1663641043, 3203577860, 1265784952, 1469538235, 3709111392, 3725587342, 3574721845, 3051488582, 1217315145, 2229262264, 2982816828, 1342073319, 2669813232, 1593196, 883510, 536, 13344754
			},
			.prefetch0 = 45867,
			.prefetch1 = 19798,
			.ram = eorb_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3844841711, 2334124997, 1663641043, 3203577860, 1265784952, 1469538235, 3709111392, 3725587342, 3574721845, 3051488582, 1217315145, 2229262264, 2982816828, 1342073319, 2669813232, 1593196, 883510, 536, 13344758
			},
			.prefetch0 = 24724,
			.prefetch1 = 63035,
			.ram = eorb_final_ram_25,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_25,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "026 EOR.b D1, (xxx).w b338",
		.initial = {
			.regs = {
				2458601130, 461905472, 3431870686, 3405049919, 1524538690, 483152301, 2117488042, 2162938280, 1572495144, 717092101, 3554950887, 2924086219, 1454783604, 1646050763, 4066440713, 8994998, 9143974, 8449, 13458706
			},
			.prefetch0 = 45880,
			.prefetch1 = 46207,
			.ram = eorb_initial_ram_26,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2458601130, 461905472, 3431870686, 3405049919, 1524538690, 483152301, 2117488042, 2162938280, 1572495144, 717092101, 3554950887, 2924086219, 1454783604, 1646050763, 4066440713, 8994998, 9143974, 8456, 13458710
			},
			.prefetch0 = 15320,
			.prefetch1 = 14645,
			.ram = eorb_final_ram_26,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_26,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "027 EOR.b D3, (A7) b717",
		.initial = {
			.regs = {
				2654619461, 1567883726, 1050076869, 415120440, 1797659034, 3833683578, 904385858, 3106032944, 560686657, 506953918, 3796788128, 1255076662, 1634713553, 531416900, 1328732836, 3682210, 5880026, 275, 8906738
			},
			.prefetch0 = 46871,
			.prefetch1 = 9181,
			.ram = eorb_initial_ram_27,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2654619461, 1567883726, 1050076869, 415120440, 1797659034, 3833683578, 904385858, 3106032944, 560686657, 506953918, 3796788128, 1255076662, 1634713553, 531416900, 1328732836, 3682210, 5880026, 280, 8906740
			},
			.prefetch0 = 9181,
			.prefetch1 = 16032,
			.ram = eorb_final_ram_27,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_27,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "028 EOR.b D5, -(A1) bb21",
		.initial = {
			.regs = {
				4203634880, 699086480, 856697209, 3280003394, 1735294418, 2692629770, 240306406, 1950410669, 3429066657, 230368001, 272701157, 1881485576, 92656838, 1334789668, 3786199858, 14725100, 8153516, 34588, 494906
			},
			.prefetch0 = 47905,
			.prefetch1 = 11782,
			.ram = eorb_initial_ram_28,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4203634880, 699086480, 856697209, 3280003394, 1735294418, 2692629770, 240306406, 1950410669, 3429066657, 230368000, 272701157, 1881485576, 92656838, 1334789668, 3786199858, 14725100, 8153516, 34584, 494908
			},
			.prefetch0 = 11782,
			.prefetch1 = 4715,
			.ram = eorb_final_ram_28,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_28,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "029 EOR.b D3, (d8, A5, Xn) b735",
		.initial = {
			.regs = {
				1023548991, 2472057619, 658787589, 77561722, 3311278464, 626217391, 3064437285, 1018487595, 3697398351, 1503275998, 847126016, 2595064809, 2414403640, 3679369696, 1088197398, 12904958, 1959952, 34578, 12340806
			},
			.prefetch0 = 46901,
			.prefetch1 = 61469,
			.ram = eorb_initial_ram_29,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1023548991, 2472057619, 658787589, 77561722, 3311278464, 626217391, 3064437285, 1018487595, 3697398351, 1503275998, 847126016, 2595064809, 2414403640, 3679369696, 1088197398, 12904958, 1959952, 34576, 12340810
			},
			.prefetch0 = 17501,
			.prefetch1 = 24654,
			.ram = eorb_final_ram_29,
			.ram_len = 10,
		},
		.transactions = eorb_transactions_29,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "030 EOR.b D5, (A1)+ bb19",
		.initial = {
			.regs = {
				3390332325, 2761597198, 4249455853, 2207717450, 2864604737, 2283687812, 2104081682, 4091217421, 996035972, 1021716578, 1623624456, 1003378005, 1238175133, 2228441003, 4165506331, 807916, 15588966, 42256, 456916
			},
			.prefetch0 = 47897,
			.prefetch1 = 56445,
			.ram = eorb_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3390332325, 2761597198, 4249455853, 2207717450, 2864604737, 2283687812, 2104081682, 4091217421, 996035972, 1021716579, 1623624456, 1003378005, 1238175133, 2228441003, 4165506331, 807916, 15588966, 42264, 456918
			},
			.prefetch0 = 56445,
			.prefetch1 = 55037,
			.ram = eorb_final_ram_30,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_30,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "031 EOR.b D5, (A3)+ bb1b",
		.initial = {
			.regs = {
				4130765456, 3056109149, 1788752890, 193188427, 1684860595, 2961494744, 1005470638, 333556022, 488575207, 1761853698, 3323153739, 894365705, 3521443547, 33669351, 3024131265, 13582442, 8851264, 42523, 12530998
			},
			.prefetch0 = 47899,
			.prefetch1 = 1704,
			.ram = eorb_initial_ram_31,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4130765456, 3056109149, 1788752890, 193188427, 1684860595, 2961494744, 1005470638, 333556022, 488575207, 1761853698, 3323153739, 894365706, 3521443547, 33669351, 3024131265, 13582442, 8851264, 42512, 12531000
			},
			.prefetch0 = 1704,
			.prefetch1 = 22584,
			.ram = eorb_final_ram_31,
			.ram_len = 8,
		},
		.transactions = eorb_transactions_31,
		.transactions_len = 3,
		.lenght = 12,
	},
};

#endif /* RBT_EORB_H */