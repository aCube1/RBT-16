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

const uint32_t EORB_TEST_COUNT = 16;
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
};

#endif /* RBT_EORB_H */