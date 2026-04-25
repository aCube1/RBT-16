#ifndef RBT_TRAP_H
#define RBT_TRAP_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte trap_initial_ram_0[] = {
		{ .addr = 0x7b0dce, .byte = 0x4e },
		{ .addr = 0x7b0dcf, .byte = 0x48 },
		{ .addr = 0x7b0dd0, .byte = 0x98 },
		{ .addr = 0x7b0dd1, .byte = 0x7f },
		{ .addr = 0x0000a0, .byte = 0xa6 },
		{ .addr = 0x0000a1, .byte = 0x04 },
		{ .addr = 0x0000a2, .byte = 0x0a },
		{ .addr = 0x0000a3, .byte = 0x42 },
		{ .addr = 0x040a42, .byte = 0x11 },
		{ .addr = 0x040a43, .byte = 0x59 },
		{ .addr = 0x040a44, .byte = 0xd7 },
		{ .addr = 0x040a45, .byte = 0xbb }
};

static const SST_RamByte trap_final_ram_0[] = {
		{ .addr = 0x7b0dce, .byte = 0x4e },
		{ .addr = 0x7b0dcf, .byte = 0x48 },
		{ .addr = 0x7b0dd0, .byte = 0x98 },
		{ .addr = 0x7b0dd1, .byte = 0x7f },
		{ .addr = 0x2de810, .byte = 0x0d },
		{ .addr = 0x2de811, .byte = 0xd0 },
		{ .addr = 0x2de80c, .byte = 0x23 },
		{ .addr = 0x2de80d, .byte = 0x0e },
		{ .addr = 0x2de80e, .byte = 0x00 },
		{ .addr = 0x2de80f, .byte = 0x7b },
		{ .addr = 0x0000a0, .byte = 0xa6 },
		{ .addr = 0x0000a1, .byte = 0x04 },
		{ .addr = 0x0000a2, .byte = 0x0a },
		{ .addr = 0x0000a3, .byte = 0x42 },
		{ .addr = 0x040a42, .byte = 0x11 },
		{ .addr = 0x040a43, .byte = 0x59 },
		{ .addr = 0x040a44, .byte = 0xd7 },
		{ .addr = 0x040a45, .byte = 0xbb }
};

static const SST_Transaction trap_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3008528, .data = 3536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3008524, .data = 8974, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3008526, .data = 123, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 160, .data = 42500, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 162, .data = 2626, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 264770, .data = 4441, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 264772, .data = 55227, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_1[] = {
		{ .addr = 0xf00faa, .byte = 0x4e },
		{ .addr = 0xf00fab, .byte = 0x4f },
		{ .addr = 0xf00fac, .byte = 0x9e },
		{ .addr = 0xf00fad, .byte = 0x65 },
		{ .addr = 0x0000bc, .byte = 0x4f },
		{ .addr = 0x0000bd, .byte = 0x58 },
		{ .addr = 0x0000be, .byte = 0xd7 },
		{ .addr = 0x0000bf, .byte = 0x8c },
		{ .addr = 0x58d78c, .byte = 0x7f },
		{ .addr = 0x58d78d, .byte = 0x53 },
		{ .addr = 0x58d78e, .byte = 0xee },
		{ .addr = 0x58d78f, .byte = 0x21 }
};

static const SST_RamByte trap_final_ram_1[] = {
		{ .addr = 0xf00faa, .byte = 0x4e },
		{ .addr = 0xf00fab, .byte = 0x4f },
		{ .addr = 0xf00fac, .byte = 0x9e },
		{ .addr = 0xf00fad, .byte = 0x65 },
		{ .addr = 0x334156, .byte = 0x0f },
		{ .addr = 0x334157, .byte = 0xac },
		{ .addr = 0x334152, .byte = 0x22 },
		{ .addr = 0x334153, .byte = 0x0c },
		{ .addr = 0x334154, .byte = 0x00 },
		{ .addr = 0x334155, .byte = 0xf0 },
		{ .addr = 0x0000bc, .byte = 0x4f },
		{ .addr = 0x0000bd, .byte = 0x58 },
		{ .addr = 0x0000be, .byte = 0xd7 },
		{ .addr = 0x0000bf, .byte = 0x8c },
		{ .addr = 0x58d78c, .byte = 0x7f },
		{ .addr = 0x58d78d, .byte = 0x53 },
		{ .addr = 0x58d78e, .byte = 0xee },
		{ .addr = 0x58d78f, .byte = 0x21 }
};

static const SST_Transaction trap_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3359062, .data = 4012, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3359058, .data = 8716, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3359060, .data = 240, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 188, .data = 20312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 190, .data = 55180, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5822348, .data = 32595, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5822350, .data = 60961, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_2[] = {
		{ .addr = 0x72ef48, .byte = 0x4e },
		{ .addr = 0x72ef49, .byte = 0x44 },
		{ .addr = 0x72ef4a, .byte = 0xfd },
		{ .addr = 0x72ef4b, .byte = 0xaa },
		{ .addr = 0x000090, .byte = 0xc6 },
		{ .addr = 0x000091, .byte = 0x62 },
		{ .addr = 0x000092, .byte = 0x8c },
		{ .addr = 0x000093, .byte = 0xc0 },
		{ .addr = 0x628cc0, .byte = 0x63 },
		{ .addr = 0x628cc1, .byte = 0x32 },
		{ .addr = 0x628cc2, .byte = 0xe7 },
		{ .addr = 0x628cc3, .byte = 0x4d }
};

static const SST_RamByte trap_final_ram_2[] = {
		{ .addr = 0x72ef48, .byte = 0x4e },
		{ .addr = 0x72ef49, .byte = 0x44 },
		{ .addr = 0x72ef4a, .byte = 0xfd },
		{ .addr = 0x72ef4b, .byte = 0xaa },
		{ .addr = 0x86d448, .byte = 0xef },
		{ .addr = 0x86d449, .byte = 0x4a },
		{ .addr = 0x86d444, .byte = 0x86 },
		{ .addr = 0x86d445, .byte = 0x0a },
		{ .addr = 0x86d446, .byte = 0x00 },
		{ .addr = 0x86d447, .byte = 0x72 },
		{ .addr = 0x000090, .byte = 0xc6 },
		{ .addr = 0x000091, .byte = 0x62 },
		{ .addr = 0x000092, .byte = 0x8c },
		{ .addr = 0x000093, .byte = 0xc0 },
		{ .addr = 0x628cc0, .byte = 0x63 },
		{ .addr = 0x628cc1, .byte = 0x32 },
		{ .addr = 0x628cc2, .byte = 0xe7 },
		{ .addr = 0x628cc3, .byte = 0x4d }
};

static const SST_Transaction trap_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8836168, .data = 61258, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8836164, .data = 34314, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8836166, .data = 114, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 144, .data = 50786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 146, .data = 36032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6458560, .data = 25394, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6458562, .data = 59213, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_3[] = {
		{ .addr = 0xd107c2, .byte = 0x4e },
		{ .addr = 0xd107c3, .byte = 0x4a },
		{ .addr = 0xd107c4, .byte = 0xf2 },
		{ .addr = 0xd107c5, .byte = 0x1e },
		{ .addr = 0x0000a8, .byte = 0x5e },
		{ .addr = 0x0000a9, .byte = 0x82 },
		{ .addr = 0x0000aa, .byte = 0x9c },
		{ .addr = 0x0000ab, .byte = 0x30 },
		{ .addr = 0x829c30, .byte = 0x9b },
		{ .addr = 0x829c31, .byte = 0xfb },
		{ .addr = 0x829c32, .byte = 0x8a },
		{ .addr = 0x829c33, .byte = 0xcc }
};

static const SST_RamByte trap_final_ram_3[] = {
		{ .addr = 0xd107c2, .byte = 0x4e },
		{ .addr = 0xd107c3, .byte = 0x4a },
		{ .addr = 0xd107c4, .byte = 0xf2 },
		{ .addr = 0xd107c5, .byte = 0x1e },
		{ .addr = 0xe1ce22, .byte = 0x07 },
		{ .addr = 0xe1ce23, .byte = 0xc4 },
		{ .addr = 0xe1ce1e, .byte = 0x82 },
		{ .addr = 0xe1ce1f, .byte = 0x0b },
		{ .addr = 0xe1ce20, .byte = 0x00 },
		{ .addr = 0xe1ce21, .byte = 0xd1 },
		{ .addr = 0x0000a8, .byte = 0x5e },
		{ .addr = 0x0000a9, .byte = 0x82 },
		{ .addr = 0x0000aa, .byte = 0x9c },
		{ .addr = 0x0000ab, .byte = 0x30 },
		{ .addr = 0x829c30, .byte = 0x9b },
		{ .addr = 0x829c31, .byte = 0xfb },
		{ .addr = 0x829c32, .byte = 0x8a },
		{ .addr = 0x829c33, .byte = 0xcc }
};

static const SST_Transaction trap_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14798370, .data = 1988, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14798366, .data = 33291, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14798368, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 168, .data = 24194, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 170, .data = 39984, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8559664, .data = 39931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8559666, .data = 35532, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_4[] = {
		{ .addr = 0xe0d658, .byte = 0x4e },
		{ .addr = 0xe0d659, .byte = 0x41 },
		{ .addr = 0xe0d65a, .byte = 0x1e },
		{ .addr = 0xe0d65b, .byte = 0x33 },
		{ .addr = 0x000084, .byte = 0x17 },
		{ .addr = 0x000085, .byte = 0x26 },
		{ .addr = 0x000086, .byte = 0xa9 },
		{ .addr = 0x000087, .byte = 0x18 },
		{ .addr = 0x26a918, .byte = 0x23 },
		{ .addr = 0x26a919, .byte = 0x3b },
		{ .addr = 0x26a91a, .byte = 0x24 },
		{ .addr = 0x26a91b, .byte = 0xb5 }
};

static const SST_RamByte trap_final_ram_4[] = {
		{ .addr = 0xe0d658, .byte = 0x4e },
		{ .addr = 0xe0d659, .byte = 0x41 },
		{ .addr = 0xe0d65a, .byte = 0x1e },
		{ .addr = 0xe0d65b, .byte = 0x33 },
		{ .addr = 0x538300, .byte = 0xd6 },
		{ .addr = 0x538301, .byte = 0x5a },
		{ .addr = 0x5382fc, .byte = 0xa2 },
		{ .addr = 0x5382fd, .byte = 0x12 },
		{ .addr = 0x5382fe, .byte = 0x00 },
		{ .addr = 0x5382ff, .byte = 0xe0 },
		{ .addr = 0x000084, .byte = 0x17 },
		{ .addr = 0x000085, .byte = 0x26 },
		{ .addr = 0x000086, .byte = 0xa9 },
		{ .addr = 0x000087, .byte = 0x18 },
		{ .addr = 0x26a918, .byte = 0x23 },
		{ .addr = 0x26a919, .byte = 0x3b },
		{ .addr = 0x26a91a, .byte = 0x24 },
		{ .addr = 0x26a91b, .byte = 0xb5 }
};

static const SST_Transaction trap_transactions_4[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5473024, .data = 54874, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5473020, .data = 41490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5473022, .data = 224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 132, .data = 5926, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 134, .data = 43288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2533656, .data = 9019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2533658, .data = 9397, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_5[] = {
		{ .addr = 0x0bcefe, .byte = 0x4e },
		{ .addr = 0x0bceff, .byte = 0x4d },
		{ .addr = 0x0bcf00, .byte = 0x18 },
		{ .addr = 0x0bcf01, .byte = 0x3e },
		{ .addr = 0x0000b4, .byte = 0x94 },
		{ .addr = 0x0000b5, .byte = 0x80 },
		{ .addr = 0x0000b6, .byte = 0xa8 },
		{ .addr = 0x0000b7, .byte = 0xf0 },
		{ .addr = 0x80a8f0, .byte = 0x4e },
		{ .addr = 0x80a8f1, .byte = 0x04 },
		{ .addr = 0x80a8f2, .byte = 0xbe },
		{ .addr = 0x80a8f3, .byte = 0xe5 }
};

static const SST_RamByte trap_final_ram_5[] = {
		{ .addr = 0x0bcefe, .byte = 0x4e },
		{ .addr = 0x0bceff, .byte = 0x4d },
		{ .addr = 0x0bcf00, .byte = 0x18 },
		{ .addr = 0x0bcf01, .byte = 0x3e },
		{ .addr = 0xfbdcba, .byte = 0xcf },
		{ .addr = 0xfbdcbb, .byte = 0x00 },
		{ .addr = 0xfbdcb6, .byte = 0xa5 },
		{ .addr = 0xfbdcb7, .byte = 0x01 },
		{ .addr = 0xfbdcb8, .byte = 0x00 },
		{ .addr = 0xfbdcb9, .byte = 0x0b },
		{ .addr = 0x0000b4, .byte = 0x94 },
		{ .addr = 0x0000b5, .byte = 0x80 },
		{ .addr = 0x0000b6, .byte = 0xa8 },
		{ .addr = 0x0000b7, .byte = 0xf0 },
		{ .addr = 0x80a8f0, .byte = 0x4e },
		{ .addr = 0x80a8f1, .byte = 0x04 },
		{ .addr = 0x80a8f2, .byte = 0xbe },
		{ .addr = 0x80a8f3, .byte = 0xe5 }
};

static const SST_Transaction trap_transactions_5[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16506042, .data = 52992, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16506038, .data = 42241, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16506040, .data = 11, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 180, .data = 38016, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 182, .data = 43248, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8431856, .data = 19972, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8431858, .data = 48869, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_6[] = {
		{ .addr = 0xf55d52, .byte = 0x4e },
		{ .addr = 0xf55d53, .byte = 0x45 },
		{ .addr = 0xf55d54, .byte = 0xac },
		{ .addr = 0xf55d55, .byte = 0x93 },
		{ .addr = 0x000094, .byte = 0xc0 },
		{ .addr = 0x000095, .byte = 0xca },
		{ .addr = 0x000096, .byte = 0xa1 },
		{ .addr = 0x000097, .byte = 0x2a },
		{ .addr = 0xcaa12a, .byte = 0xd8 },
		{ .addr = 0xcaa12b, .byte = 0xfa },
		{ .addr = 0xcaa12c, .byte = 0x08 },
		{ .addr = 0xcaa12d, .byte = 0x57 }
};

static const SST_RamByte trap_final_ram_6[] = {
		{ .addr = 0xf55d52, .byte = 0x4e },
		{ .addr = 0xf55d53, .byte = 0x45 },
		{ .addr = 0xf55d54, .byte = 0xac },
		{ .addr = 0xf55d55, .byte = 0x93 },
		{ .addr = 0xea5154, .byte = 0x5d },
		{ .addr = 0xea5155, .byte = 0x54 },
		{ .addr = 0xea5150, .byte = 0x81 },
		{ .addr = 0xea5151, .byte = 0x05 },
		{ .addr = 0xea5152, .byte = 0x00 },
		{ .addr = 0xea5153, .byte = 0xf5 },
		{ .addr = 0x000094, .byte = 0xc0 },
		{ .addr = 0x000095, .byte = 0xca },
		{ .addr = 0x000096, .byte = 0xa1 },
		{ .addr = 0x000097, .byte = 0x2a },
		{ .addr = 0xcaa12a, .byte = 0xd8 },
		{ .addr = 0xcaa12b, .byte = 0xfa },
		{ .addr = 0xcaa12c, .byte = 0x08 },
		{ .addr = 0xcaa12d, .byte = 0x57 }
};

static const SST_Transaction trap_transactions_6[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15356244, .data = 23892, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15356240, .data = 33029, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15356242, .data = 245, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 148, .data = 49354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 150, .data = 41258, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13279530, .data = 55546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13279532, .data = 2135, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_7[] = {
		{ .addr = 0x6840e2, .byte = 0x4e },
		{ .addr = 0x6840e3, .byte = 0x46 },
		{ .addr = 0x6840e4, .byte = 0xef },
		{ .addr = 0x6840e5, .byte = 0xe0 },
		{ .addr = 0x000098, .byte = 0x84 },
		{ .addr = 0x000099, .byte = 0xb8 },
		{ .addr = 0x00009a, .byte = 0x8e },
		{ .addr = 0x00009b, .byte = 0xfa },
		{ .addr = 0xb88efa, .byte = 0xba },
		{ .addr = 0xb88efb, .byte = 0x4d },
		{ .addr = 0xb88efc, .byte = 0x28 },
		{ .addr = 0xb88efd, .byte = 0x97 }
};

static const SST_RamByte trap_final_ram_7[] = {
		{ .addr = 0x6840e2, .byte = 0x4e },
		{ .addr = 0x6840e3, .byte = 0x46 },
		{ .addr = 0x6840e4, .byte = 0xef },
		{ .addr = 0x6840e5, .byte = 0xe0 },
		{ .addr = 0x5984ea, .byte = 0x40 },
		{ .addr = 0x5984eb, .byte = 0xe4 },
		{ .addr = 0x5984e6, .byte = 0x04 },
		{ .addr = 0x5984e7, .byte = 0x13 },
		{ .addr = 0x5984e8, .byte = 0x00 },
		{ .addr = 0x5984e9, .byte = 0x68 },
		{ .addr = 0x000098, .byte = 0x84 },
		{ .addr = 0x000099, .byte = 0xb8 },
		{ .addr = 0x00009a, .byte = 0x8e },
		{ .addr = 0x00009b, .byte = 0xfa },
		{ .addr = 0xb88efa, .byte = 0xba },
		{ .addr = 0xb88efb, .byte = 0x4d },
		{ .addr = 0xb88efc, .byte = 0x28 },
		{ .addr = 0xb88efd, .byte = 0x97 }
};

static const SST_Transaction trap_transactions_7[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5866730, .data = 16612, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5866726, .data = 1043, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5866728, .data = 104, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 152, .data = 33976, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 154, .data = 36602, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12095226, .data = 47693, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12095228, .data = 10391, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_8[] = {
		{ .addr = 0xa25598, .byte = 0x4e },
		{ .addr = 0xa25599, .byte = 0x47 },
		{ .addr = 0xa2559a, .byte = 0xe8 },
		{ .addr = 0xa2559b, .byte = 0x00 },
		{ .addr = 0x00009c, .byte = 0xbf },
		{ .addr = 0x00009d, .byte = 0xe0 },
		{ .addr = 0x00009e, .byte = 0x34 },
		{ .addr = 0x00009f, .byte = 0x28 },
		{ .addr = 0xe03428, .byte = 0x43 },
		{ .addr = 0xe03429, .byte = 0xf4 },
		{ .addr = 0xe0342a, .byte = 0xbe },
		{ .addr = 0xe0342b, .byte = 0x44 }
};

static const SST_RamByte trap_final_ram_8[] = {
		{ .addr = 0xa25598, .byte = 0x4e },
		{ .addr = 0xa25599, .byte = 0x47 },
		{ .addr = 0xa2559a, .byte = 0xe8 },
		{ .addr = 0xa2559b, .byte = 0x00 },
		{ .addr = 0x114e78, .byte = 0x55 },
		{ .addr = 0x114e79, .byte = 0x9a },
		{ .addr = 0x114e74, .byte = 0x87 },
		{ .addr = 0x114e75, .byte = 0x0a },
		{ .addr = 0x114e76, .byte = 0x00 },
		{ .addr = 0x114e77, .byte = 0xa2 },
		{ .addr = 0x00009c, .byte = 0xbf },
		{ .addr = 0x00009d, .byte = 0xe0 },
		{ .addr = 0x00009e, .byte = 0x34 },
		{ .addr = 0x00009f, .byte = 0x28 },
		{ .addr = 0xe03428, .byte = 0x43 },
		{ .addr = 0xe03429, .byte = 0xf4 },
		{ .addr = 0xe0342a, .byte = 0xbe },
		{ .addr = 0xe0342b, .byte = 0x44 }
};

static const SST_Transaction trap_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1134200, .data = 21914, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1134196, .data = 34570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1134198, .data = 162, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 156, .data = 49120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 158, .data = 13352, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14693416, .data = 17396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14693418, .data = 48708, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_9[] = {
		{ .addr = 0xa6b9b4, .byte = 0x4e },
		{ .addr = 0xa6b9b5, .byte = 0x4a },
		{ .addr = 0xa6b9b6, .byte = 0x54 },
		{ .addr = 0xa6b9b7, .byte = 0x13 },
		{ .addr = 0x0000a8, .byte = 0xab },
		{ .addr = 0x0000a9, .byte = 0x4e },
		{ .addr = 0x0000aa, .byte = 0xa6 },
		{ .addr = 0x0000ab, .byte = 0x52 },
		{ .addr = 0x4ea652, .byte = 0x03 },
		{ .addr = 0x4ea653, .byte = 0x1e },
		{ .addr = 0x4ea654, .byte = 0x37 },
		{ .addr = 0x4ea655, .byte = 0x88 }
};

static const SST_RamByte trap_final_ram_9[] = {
		{ .addr = 0xa6b9b4, .byte = 0x4e },
		{ .addr = 0xa6b9b5, .byte = 0x4a },
		{ .addr = 0xa6b9b6, .byte = 0x54 },
		{ .addr = 0xa6b9b7, .byte = 0x13 },
		{ .addr = 0x56af7c, .byte = 0xb9 },
		{ .addr = 0x56af7d, .byte = 0xb6 },
		{ .addr = 0x56af78, .byte = 0x85 },
		{ .addr = 0x56af79, .byte = 0x1e },
		{ .addr = 0x56af7a, .byte = 0x00 },
		{ .addr = 0x56af7b, .byte = 0xa6 },
		{ .addr = 0x0000a8, .byte = 0xab },
		{ .addr = 0x0000a9, .byte = 0x4e },
		{ .addr = 0x0000aa, .byte = 0xa6 },
		{ .addr = 0x0000ab, .byte = 0x52 },
		{ .addr = 0x4ea652, .byte = 0x03 },
		{ .addr = 0x4ea653, .byte = 0x1e },
		{ .addr = 0x4ea654, .byte = 0x37 },
		{ .addr = 0x4ea655, .byte = 0x88 }
};

static const SST_Transaction trap_transactions_9[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5681020, .data = 47542, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5681016, .data = 34078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5681018, .data = 166, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 168, .data = 43854, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 170, .data = 42578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5154386, .data = 798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5154388, .data = 14216, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_10[] = {
		{ .addr = 0x2ce178, .byte = 0x4e },
		{ .addr = 0x2ce179, .byte = 0x49 },
		{ .addr = 0x2ce17a, .byte = 0x76 },
		{ .addr = 0x2ce17b, .byte = 0x01 },
		{ .addr = 0x0000a4, .byte = 0x60 },
		{ .addr = 0x0000a5, .byte = 0x2c },
		{ .addr = 0x0000a6, .byte = 0xd6 },
		{ .addr = 0x0000a7, .byte = 0xda },
		{ .addr = 0x2cd6da, .byte = 0x32 },
		{ .addr = 0x2cd6db, .byte = 0x10 },
		{ .addr = 0x2cd6dc, .byte = 0x6c },
		{ .addr = 0x2cd6dd, .byte = 0xa1 }
};

static const SST_RamByte trap_final_ram_10[] = {
		{ .addr = 0x2ce178, .byte = 0x4e },
		{ .addr = 0x2ce179, .byte = 0x49 },
		{ .addr = 0x2ce17a, .byte = 0x76 },
		{ .addr = 0x2ce17b, .byte = 0x01 },
		{ .addr = 0x2afab4, .byte = 0xe1 },
		{ .addr = 0x2afab5, .byte = 0x7a },
		{ .addr = 0x2afab0, .byte = 0x07 },
		{ .addr = 0x2afab1, .byte = 0x00 },
		{ .addr = 0x2afab2, .byte = 0x00 },
		{ .addr = 0x2afab3, .byte = 0x2c },
		{ .addr = 0x0000a4, .byte = 0x60 },
		{ .addr = 0x0000a5, .byte = 0x2c },
		{ .addr = 0x0000a6, .byte = 0xd6 },
		{ .addr = 0x0000a7, .byte = 0xda },
		{ .addr = 0x2cd6da, .byte = 0x32 },
		{ .addr = 0x2cd6db, .byte = 0x10 },
		{ .addr = 0x2cd6dc, .byte = 0x6c },
		{ .addr = 0x2cd6dd, .byte = 0xa1 }
};

static const SST_Transaction trap_transactions_10[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2816692, .data = 57722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2816688, .data = 1792, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2816690, .data = 44, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 164, .data = 24620, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 166, .data = 55002, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2938586, .data = 12816, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2938588, .data = 27809, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_11[] = {
		{ .addr = 0xaff0c2, .byte = 0x4e },
		{ .addr = 0xaff0c3, .byte = 0x43 },
		{ .addr = 0xaff0c4, .byte = 0xb8 },
		{ .addr = 0xaff0c5, .byte = 0xcc },
		{ .addr = 0x00008c, .byte = 0xdd },
		{ .addr = 0x00008d, .byte = 0x22 },
		{ .addr = 0x00008e, .byte = 0xe6 },
		{ .addr = 0x00008f, .byte = 0x8c },
		{ .addr = 0x22e68c, .byte = 0x12 },
		{ .addr = 0x22e68d, .byte = 0xa0 },
		{ .addr = 0x22e68e, .byte = 0xf0 },
		{ .addr = 0x22e68f, .byte = 0x0e }
};

static const SST_RamByte trap_final_ram_11[] = {
		{ .addr = 0xaff0c2, .byte = 0x4e },
		{ .addr = 0xaff0c3, .byte = 0x43 },
		{ .addr = 0xaff0c4, .byte = 0xb8 },
		{ .addr = 0xaff0c5, .byte = 0xcc },
		{ .addr = 0x122258, .byte = 0xf0 },
		{ .addr = 0x122259, .byte = 0xc4 },
		{ .addr = 0x122254, .byte = 0x86 },
		{ .addr = 0x122255, .byte = 0x08 },
		{ .addr = 0x122256, .byte = 0x00 },
		{ .addr = 0x122257, .byte = 0xaf },
		{ .addr = 0x00008c, .byte = 0xdd },
		{ .addr = 0x00008d, .byte = 0x22 },
		{ .addr = 0x00008e, .byte = 0xe6 },
		{ .addr = 0x00008f, .byte = 0x8c },
		{ .addr = 0x22e68c, .byte = 0x12 },
		{ .addr = 0x22e68d, .byte = 0xa0 },
		{ .addr = 0x22e68e, .byte = 0xf0 },
		{ .addr = 0x22e68f, .byte = 0x0e }
};

static const SST_Transaction trap_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1188440, .data = 61636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1188436, .data = 34312, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1188438, .data = 175, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 140, .data = 56610, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 142, .data = 59020, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2287244, .data = 4768, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2287246, .data = 61454, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_12[] = {
		{ .addr = 0x40b812, .byte = 0x4e },
		{ .addr = 0x40b813, .byte = 0x41 },
		{ .addr = 0x40b814, .byte = 0x63 },
		{ .addr = 0x40b815, .byte = 0xa8 },
		{ .addr = 0x000084, .byte = 0x16 },
		{ .addr = 0x000085, .byte = 0xa6 },
		{ .addr = 0x000086, .byte = 0x21 },
		{ .addr = 0x000087, .byte = 0x54 },
		{ .addr = 0xa62154, .byte = 0x7f },
		{ .addr = 0xa62155, .byte = 0xde },
		{ .addr = 0xa62156, .byte = 0x45 },
		{ .addr = 0xa62157, .byte = 0x2c }
};

static const SST_RamByte trap_final_ram_12[] = {
		{ .addr = 0x40b812, .byte = 0x4e },
		{ .addr = 0x40b813, .byte = 0x41 },
		{ .addr = 0x40b814, .byte = 0x63 },
		{ .addr = 0x40b815, .byte = 0xa8 },
		{ .addr = 0x196890, .byte = 0xb8 },
		{ .addr = 0x196891, .byte = 0x14 },
		{ .addr = 0x19688c, .byte = 0x26 },
		{ .addr = 0x19688d, .byte = 0x1a },
		{ .addr = 0x19688e, .byte = 0x00 },
		{ .addr = 0x19688f, .byte = 0x40 },
		{ .addr = 0x000084, .byte = 0x16 },
		{ .addr = 0x000085, .byte = 0xa6 },
		{ .addr = 0x000086, .byte = 0x21 },
		{ .addr = 0x000087, .byte = 0x54 },
		{ .addr = 0xa62154, .byte = 0x7f },
		{ .addr = 0xa62155, .byte = 0xde },
		{ .addr = 0xa62156, .byte = 0x45 },
		{ .addr = 0xa62157, .byte = 0x2c }
};

static const SST_Transaction trap_transactions_12[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1665168, .data = 47124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1665164, .data = 9754, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1665166, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 132, .data = 5798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 134, .data = 8532, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10887508, .data = 32734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10887510, .data = 17708, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_13[] = {
		{ .addr = 0xd5c7da, .byte = 0x4e },
		{ .addr = 0xd5c7db, .byte = 0x41 },
		{ .addr = 0xd5c7dc, .byte = 0xb3 },
		{ .addr = 0xd5c7dd, .byte = 0x8d },
		{ .addr = 0x000084, .byte = 0x70 },
		{ .addr = 0x000085, .byte = 0x4e },
		{ .addr = 0x000086, .byte = 0x9d },
		{ .addr = 0x000087, .byte = 0x80 },
		{ .addr = 0x4e9d80, .byte = 0x73 },
		{ .addr = 0x4e9d81, .byte = 0xa7 },
		{ .addr = 0x4e9d82, .byte = 0x34 },
		{ .addr = 0x4e9d83, .byte = 0xed }
};

static const SST_RamByte trap_final_ram_13[] = {
		{ .addr = 0xd5c7da, .byte = 0x4e },
		{ .addr = 0xd5c7db, .byte = 0x41 },
		{ .addr = 0xd5c7dc, .byte = 0xb3 },
		{ .addr = 0xd5c7dd, .byte = 0x8d },
		{ .addr = 0xcc27e0, .byte = 0xc7 },
		{ .addr = 0xcc27e1, .byte = 0xdc },
		{ .addr = 0xcc27dc, .byte = 0xa5 },
		{ .addr = 0xcc27dd, .byte = 0x17 },
		{ .addr = 0xcc27de, .byte = 0x00 },
		{ .addr = 0xcc27df, .byte = 0xd5 },
		{ .addr = 0x000084, .byte = 0x70 },
		{ .addr = 0x000085, .byte = 0x4e },
		{ .addr = 0x000086, .byte = 0x9d },
		{ .addr = 0x000087, .byte = 0x80 },
		{ .addr = 0x4e9d80, .byte = 0x73 },
		{ .addr = 0x4e9d81, .byte = 0xa7 },
		{ .addr = 0x4e9d82, .byte = 0x34 },
		{ .addr = 0x4e9d83, .byte = 0xed }
};

static const SST_Transaction trap_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13379552, .data = 51164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13379548, .data = 42263, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13379550, .data = 213, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 132, .data = 28750, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 134, .data = 40320, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5152128, .data = 29607, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5152130, .data = 13549, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_14[] = {
		{ .addr = 0x40bc5e, .byte = 0x4e },
		{ .addr = 0x40bc5f, .byte = 0x43 },
		{ .addr = 0x40bc60, .byte = 0x80 },
		{ .addr = 0x40bc61, .byte = 0x8e },
		{ .addr = 0x00008c, .byte = 0xe4 },
		{ .addr = 0x00008d, .byte = 0xc4 },
		{ .addr = 0x00008e, .byte = 0x7c },
		{ .addr = 0x00008f, .byte = 0x10 },
		{ .addr = 0xc47c10, .byte = 0xd3 },
		{ .addr = 0xc47c11, .byte = 0xd3 },
		{ .addr = 0xc47c12, .byte = 0x71 },
		{ .addr = 0xc47c13, .byte = 0x2b }
};

static const SST_RamByte trap_final_ram_14[] = {
		{ .addr = 0x40bc5e, .byte = 0x4e },
		{ .addr = 0x40bc5f, .byte = 0x43 },
		{ .addr = 0x40bc60, .byte = 0x80 },
		{ .addr = 0x40bc61, .byte = 0x8e },
		{ .addr = 0xce52d0, .byte = 0xbc },
		{ .addr = 0xce52d1, .byte = 0x60 },
		{ .addr = 0xce52cc, .byte = 0x82 },
		{ .addr = 0xce52cd, .byte = 0x1e },
		{ .addr = 0xce52ce, .byte = 0x00 },
		{ .addr = 0xce52cf, .byte = 0x40 },
		{ .addr = 0x00008c, .byte = 0xe4 },
		{ .addr = 0x00008d, .byte = 0xc4 },
		{ .addr = 0x00008e, .byte = 0x7c },
		{ .addr = 0x00008f, .byte = 0x10 },
		{ .addr = 0xc47c10, .byte = 0xd3 },
		{ .addr = 0xc47c11, .byte = 0xd3 },
		{ .addr = 0xc47c12, .byte = 0x71 },
		{ .addr = 0xc47c13, .byte = 0x2b }
};

static const SST_Transaction trap_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13521616, .data = 48224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13521612, .data = 33310, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13521614, .data = 64, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 140, .data = 58564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 142, .data = 31760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12876816, .data = 54227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12876818, .data = 28971, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte trap_initial_ram_15[] = {
		{ .addr = 0x6f1bac, .byte = 0x4e },
		{ .addr = 0x6f1bad, .byte = 0x42 },
		{ .addr = 0x6f1bae, .byte = 0x65 },
		{ .addr = 0x6f1baf, .byte = 0x1f },
		{ .addr = 0x000088, .byte = 0xe8 },
		{ .addr = 0x000089, .byte = 0xa2 },
		{ .addr = 0x00008a, .byte = 0x43 },
		{ .addr = 0x00008b, .byte = 0x8a },
		{ .addr = 0xa2438a, .byte = 0xf1 },
		{ .addr = 0xa2438b, .byte = 0x5a },
		{ .addr = 0xa2438c, .byte = 0x4e },
		{ .addr = 0xa2438d, .byte = 0xff }
};

static const SST_RamByte trap_final_ram_15[] = {
		{ .addr = 0x6f1bac, .byte = 0x4e },
		{ .addr = 0x6f1bad, .byte = 0x42 },
		{ .addr = 0x6f1bae, .byte = 0x65 },
		{ .addr = 0x6f1baf, .byte = 0x1f },
		{ .addr = 0xc7c5cc, .byte = 0x1b },
		{ .addr = 0xc7c5cd, .byte = 0xae },
		{ .addr = 0xc7c5c8, .byte = 0x81 },
		{ .addr = 0xc7c5c9, .byte = 0x1f },
		{ .addr = 0xc7c5ca, .byte = 0x00 },
		{ .addr = 0xc7c5cb, .byte = 0x6f },
		{ .addr = 0x000088, .byte = 0xe8 },
		{ .addr = 0x000089, .byte = 0xa2 },
		{ .addr = 0x00008a, .byte = 0x43 },
		{ .addr = 0x00008b, .byte = 0x8a },
		{ .addr = 0xa2438a, .byte = 0xf1 },
		{ .addr = 0xa2438b, .byte = 0x5a },
		{ .addr = 0xa2438c, .byte = 0x4e },
		{ .addr = 0xa2438d, .byte = 0xff }
};

static const SST_Transaction trap_transactions_15[] = {
	{ .kind = SST_TS_N, .cycles = 4 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13092300, .data = 7086, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13092296, .data = 33055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13092298, .data = 111, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 136, .data = 59554, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 138, .data = 17290, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10634122, .data = 61786, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10634124, .data = 20223, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

const uint32_t TRAP_TEST_COUNT = 16;
static const SST_TestCase trap[] = {
	{
		.name = "000 TRAP 8 4e48",
		.initial = {
			.regs = {
				3400333495, 711917462, 730326889, 2934301075, 1530823477, 3055452475, 2560220869, 2227894313, 926492777, 3219346398, 2157483417, 2220865159, 4261461242, 2400926708, 826610775, 14898600, 3008530, 8974, 8064466
			},
			.prefetch0 = 20040,
			.prefetch1 = 39039,
			.ram = trap_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3400333495, 711917462, 730326889, 2934301075, 1530823477, 3055452475, 2560220869, 2227894313, 926492777, 3219346398, 2157483417, 2220865159, 4261461242, 2400926708, 826610775, 14898600, 3008524, 8974, 2785282630
			},
			.prefetch0 = 4441,
			.prefetch1 = 55227,
			.ram = trap_final_ram_0,
			.ram_len = 18,
		},
		.transactions = trap_transactions_0,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "001 TRAP 15 4e4f",
		.initial = {
			.regs = {
				3395954614, 1471409660, 1373017538, 1534167816, 4276930513, 3240177857, 1604849918, 3016248870, 1076901025, 3514820044, 284776625, 1656377493, 2136841296, 3197195282, 3634970693, 5918438, 3359064, 8716, 15732654
			},
			.prefetch0 = 20047,
			.prefetch1 = 40549,
			.ram = trap_initial_ram_1,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3395954614, 1471409660, 1373017538, 1534167816, 4276930513, 3240177857, 1604849918, 3016248870, 1076901025, 3514820044, 284776625, 1656377493, 2136841296, 3197195282, 3634970693, 5918438, 3359058, 8716, 1331222416
			},
			.prefetch0 = 32595,
			.prefetch1 = 60961,
			.ram = trap_final_ram_1,
			.ram_len = 18,
		},
		.transactions = trap_transactions_1,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "002 TRAP 4 4e44",
		.initial = {
			.regs = {
				1124062580, 4235425087, 3866197705, 2697383578, 4054050527, 1734886508, 1735982177, 4284381058, 1291102059, 1059844852, 1694501148, 1419843910, 2900947137, 2492053144, 526354339, 1502162, 8836170, 34314, 7532364
			},
			.prefetch0 = 20036,
			.prefetch1 = 64938,
			.ram = trap_initial_ram_2,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1124062580, 4235425087, 3866197705, 2697383578, 4054050527, 1734886508, 1735982177, 4284381058, 1291102059, 1059844852, 1694501148, 1419843910, 2900947137, 2492053144, 526354339, 1502162, 8836164, 9738, 3328347332
			},
			.prefetch0 = 25394,
			.prefetch1 = 59213,
			.ram = trap_final_ram_2,
			.ram_len = 18,
		},
		.transactions = trap_transactions_2,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "003 TRAP 10 4e4a",
		.initial = {
			.regs = {
				2387061429, 3026716509, 3313165974, 851015492, 4277780044, 656319764, 3968099564, 507045741, 791213246, 2312826004, 734864200, 1611160638, 684904150, 2081720614, 1404372985, 3142574, 14798372, 33291, 13699014
			},
			.prefetch0 = 20042,
			.prefetch1 = 61982,
			.ram = trap_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2387061429, 3026716509, 3313165974, 851015492, 4277780044, 656319764, 3968099564, 507045741, 791213246, 2312826004, 734864200, 1611160638, 684904150, 2081720614, 1404372985, 3142574, 14798366, 8715, 1585617972
			},
			.prefetch0 = 39931,
			.prefetch1 = 35532,
			.ram = trap_final_ram_3,
			.ram_len = 18,
		},
		.transactions = trap_transactions_3,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "004 TRAP 1 4e41",
		.initial = {
			.regs = {
				2499185772, 3117530667, 2102865225, 2182657503, 2058281427, 61740929, 3844337751, 4138212902, 3206909704, 3401076281, 1090601116, 3840365999, 1718990944, 4270872638, 2592527994, 13892922, 5473026, 41490, 14734940
			},
			.prefetch0 = 20033,
			.prefetch1 = 7731,
			.ram = trap_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2499185772, 3117530667, 2102865225, 2182657503, 2058281427, 61740929, 3844337751, 4138212902, 3206909704, 3401076281, 1090601116, 3840365999, 1718990944, 4270872638, 2592527994, 13892922, 5473020, 8722, 388409628
			},
			.prefetch0 = 9019,
			.prefetch1 = 9397,
			.ram = trap_final_ram_4,
			.ram_len = 18,
		},
		.transactions = trap_transactions_4,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "005 TRAP 13 4e4d",
		.initial = {
			.regs = {
				645143863, 732127191, 2647236844, 4227268124, 254055546, 851829026, 2457146096, 2207245183, 383643386, 1742472509, 3776361660, 2551424073, 3659483913, 2616126904, 2708427953, 2918480, 16506044, 42241, 773890
			},
			.prefetch0 = 20045,
			.prefetch1 = 6206,
			.ram = trap_initial_ram_5,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				645143863, 732127191, 2647236844, 4227268124, 254055546, 851829026, 2457146096, 2207245183, 383643386, 1742472509, 3776361660, 2551424073, 3659483913, 2616126904, 2708427953, 2918480, 16506038, 9473, 2491459828
			},
			.prefetch0 = 19972,
			.prefetch1 = 48869,
			.ram = trap_final_ram_5,
			.ram_len = 18,
		},
		.transactions = trap_transactions_5,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "006 TRAP 5 4e45",
		.initial = {
			.regs = {
				3611491787, 2195852364, 3528846285, 562574869, 4226563230, 2963227195, 4190448423, 1751122682, 1999249163, 1479127623, 140825568, 1030391465, 2046245175, 4084411779, 1142864017, 14478802, 15356246, 33029, 16080214
			},
			.prefetch0 = 20037,
			.prefetch1 = 44179,
			.ram = trap_initial_ram_6,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3611491787, 2195852364, 3528846285, 562574869, 4226563230, 2963227195, 4190448423, 1751122682, 1999249163, 1479127623, 140825568, 1030391465, 2046245175, 4084411779, 1142864017, 14478802, 15356240, 8453, 3234505006
			},
			.prefetch0 = 55546,
			.prefetch1 = 2135,
			.ram = trap_final_ram_6,
			.ram_len = 18,
		},
		.transactions = trap_transactions_6,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "007 TRAP 6 4e46",
		.initial = {
			.regs = {
				4074248972, 2708954536, 469015611, 939977751, 3135478516, 3981779144, 3588021549, 1256062625, 2380107529, 2895923045, 2911300242, 371527121, 1104263820, 639043083, 2430363282, 5252868, 5866732, 1043, 6832358
			},
			.prefetch0 = 20038,
			.prefetch1 = 61408,
			.ram = trap_initial_ram_7,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4074248972, 2708954536, 469015611, 939977751, 3135478516, 3981779144, 3588021549, 1256062625, 2380107529, 2895923045, 2911300242, 371527121, 1104263820, 639043083, 2430363282, 5252868, 5866726, 9235, 2226687742
			},
			.prefetch0 = 47693,
			.prefetch1 = 10391,
			.ram = trap_final_ram_7,
			.ram_len = 18,
		},
		.transactions = trap_transactions_7,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "008 TRAP 7 4e47",
		.initial = {
			.regs = {
				3003418582, 2737731194, 121822133, 2839940032, 3256174643, 3889882113, 2281149838, 1618506597, 891425326, 1974544127, 4109951274, 3046545588, 2420906146, 1989849863, 1230688957, 7146466, 1134202, 34570, 10638748
			},
			.prefetch0 = 20039,
			.prefetch1 = 59392,
			.ram = trap_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3003418582, 2737731194, 121822133, 2839940032, 3256174643, 3889882113, 2281149838, 1618506597, 891425326, 1974544127, 4109951274, 3046545588, 2420906146, 1989849863, 1230688957, 7146466, 1134196, 9994, 3219141676
			},
			.prefetch0 = 17396,
			.prefetch1 = 48708,
			.ram = trap_final_ram_8,
			.ram_len = 18,
		},
		.transactions = trap_transactions_8,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "009 TRAP 10 4e4a",
		.initial = {
			.regs = {
				1339117356, 701377368, 567936193, 42718235, 1921237485, 3795372940, 2357530214, 1026816057, 1828398052, 2163927404, 109289656, 1971512951, 2825731453, 4082388669, 3702589075, 10790712, 5681022, 34078, 10926520
			},
			.prefetch0 = 20042,
			.prefetch1 = 21523,
			.ram = trap_initial_ram_9,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1339117356, 701377368, 567936193, 42718235, 1921237485, 3795372940, 2357530214, 1026816057, 1828398052, 2163927404, 109289656, 1971512951, 2825731453, 4082388669, 3702589075, 10790712, 5681016, 9502, 2874058326
			},
			.prefetch0 = 798,
			.prefetch1 = 14216,
			.ram = trap_final_ram_9,
			.ram_len = 18,
		},
		.transactions = trap_transactions_9,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "010 TRAP 9 4e49",
		.initial = {
			.regs = {
				4184133015, 4047939469, 1777716618, 3911546356, 2457442716, 441588208, 2545236185, 3471868043, 105657365, 4292172824, 2936108691, 1057685863, 3945319563, 2318059978, 1328982705, 16611658, 2816694, 1792, 2941308
			},
			.prefetch0 = 20041,
			.prefetch1 = 30209,
			.ram = trap_initial_ram_10,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4184133015, 4047939469, 1777716618, 3911546356, 2457442716, 441588208, 2545236185, 3471868043, 105657365, 4292172824, 2936108691, 1057685863, 3945319563, 2318059978, 1328982705, 16611658, 2816688, 9984, 1613551326
			},
			.prefetch0 = 12816,
			.prefetch1 = 27809,
			.ram = trap_final_ram_10,
			.ram_len = 18,
		},
		.transactions = trap_transactions_10,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "011 TRAP 3 4e43",
		.initial = {
			.regs = {
				3064554832, 3656668787, 1966898224, 850849462, 2022869831, 1239534326, 669536315, 2062178459, 1597364378, 3513343127, 3379972068, 4223867894, 2926673833, 2775197683, 384274534, 6723656, 1188442, 34312, 11530438
			},
			.prefetch0 = 20035,
			.prefetch1 = 47308,
			.ram = trap_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3064554832, 3656668787, 1966898224, 850849462, 2022869831, 1239534326, 669536315, 2062178459, 1597364378, 3513343127, 3379972068, 4223867894, 2926673833, 2775197683, 384274534, 6723656, 1188436, 9736, 3710051984
			},
			.prefetch0 = 4768,
			.prefetch1 = 61454,
			.ram = trap_final_ram_11,
			.ram_len = 18,
		},
		.transactions = trap_transactions_11,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "012 TRAP 1 4e41",
		.initial = {
			.regs = {
				346239720, 1755430521, 889478428, 2001723073, 50688371, 3252012678, 4239017480, 602979085, 1554703331, 1160600386, 2592988913, 1988536193, 1846575250, 622757153, 4276546057, 7510834, 1665170, 9754, 4241430
			},
			.prefetch0 = 20033,
			.prefetch1 = 25512,
			.ram = trap_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				346239720, 1755430521, 889478428, 2001723073, 50688371, 3252012678, 4239017480, 602979085, 1554703331, 1160600386, 2592988913, 1988536193, 1846575250, 622757153, 4276546057, 7510834, 1665164, 9754, 379986264
			},
			.prefetch0 = 32734,
			.prefetch1 = 17708,
			.ram = trap_final_ram_12,
			.ram_len = 18,
		},
		.transactions = trap_transactions_12,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "013 TRAP 1 4e41",
		.initial = {
			.regs = {
				176322110, 2072698662, 1686234379, 1080336661, 1140381537, 3879653444, 3963153181, 2205832473, 2502830229, 4159498287, 3115633086, 4068962585, 3745793184, 1542740924, 2910274999, 8106850, 13379554, 42263, 14010334
			},
			.prefetch0 = 20033,
			.prefetch1 = 45965,
			.ram = trap_initial_ram_13,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				176322110, 2072698662, 1686234379, 1080336661, 1140381537, 3879653444, 3963153181, 2205832473, 2502830229, 4159498287, 3115633086, 4068962585, 3745793184, 1542740924, 2910274999, 8106850, 13379548, 9495, 1884200324
			},
			.prefetch0 = 29607,
			.prefetch1 = 13549,
			.ram = trap_final_ram_13,
			.ram_len = 18,
		},
		.transactions = trap_transactions_13,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "014 TRAP 3 4e43",
		.initial = {
			.regs = {
				2044445097, 596080652, 481931384, 855799797, 1222229720, 257179498, 3565066048, 3648380681, 72804392, 2348290640, 1162414373, 2954237839, 3099938996, 1677564143, 2681355345, 7947250, 13521618, 33310, 4242530
			},
			.prefetch0 = 20035,
			.prefetch1 = 32910,
			.ram = trap_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2044445097, 596080652, 481931384, 855799797, 1222229720, 257179498, 3565066048, 3648380681, 72804392, 2348290640, 1162414373, 2954237839, 3099938996, 1677564143, 2681355345, 7947250, 13521612, 8734, 3838082068
			},
			.prefetch0 = 54227,
			.prefetch1 = 28971,
			.ram = trap_final_ram_14,
			.ram_len = 18,
		},
		.transactions = trap_transactions_14,
		.transactions_len = 9,
		.lenght = 34,
	},
	{
		.name = "015 TRAP 2 4e42",
		.initial = {
			.regs = {
				3199079711, 1708086548, 3464078424, 835575215, 270194825, 3255363214, 3935576114, 1976202428, 4121704015, 1336392062, 3762069792, 283603674, 1857788232, 2027808381, 779797045, 6165730, 13092302, 33055, 7281584
			},
			.prefetch0 = 20034,
			.prefetch1 = 25887,
			.ram = trap_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3199079711, 1708086548, 3464078424, 835575215, 270194825, 3255363214, 3935576114, 1976202428, 4121704015, 1336392062, 3762069792, 283603674, 1857788232, 2027808381, 779797045, 6165730, 13092296, 8479, 3902948238
			},
			.prefetch0 = 61786,
			.prefetch1 = 20223,
			.ram = trap_final_ram_15,
			.ram_len = 18,
		},
		.transactions = trap_transactions_15,
		.transactions_len = 9,
		.lenght = 34,
	},
};

#endif /* RBT_TRAP_H */