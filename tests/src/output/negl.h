#ifndef RBT_NEGL_H
#define RBT_NEGL_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte negl_initial_ram_0[] = {
		{ .addr = 0x999c20, .byte = 0x44 },
		{ .addr = 0x999c21, .byte = 0xb6 },
		{ .addr = 0x999c22, .byte = 0x98 },
		{ .addr = 0x999c23, .byte = 0x1d },
		{ .addr = 0x999c24, .byte = 0x17 },
		{ .addr = 0x999c25, .byte = 0xd5 },
		{ .addr = 0x5e7162, .byte = 0x90 },
		{ .addr = 0x5e7163, .byte = 0x89 },
		{ .addr = 0x5e7164, .byte = 0x36 },
		{ .addr = 0x5e7165, .byte = 0xa6 },
		{ .addr = 0x999c26, .byte = 0xf1 },
		{ .addr = 0x999c27, .byte = 0xbb }
};

static const SST_RamByte negl_final_ram_0[] = {
		{ .addr = 0x999c20, .byte = 0x44 },
		{ .addr = 0x999c21, .byte = 0xb6 },
		{ .addr = 0x999c22, .byte = 0x98 },
		{ .addr = 0x999c23, .byte = 0x1d },
		{ .addr = 0x999c24, .byte = 0x17 },
		{ .addr = 0x999c25, .byte = 0xd5 },
		{ .addr = 0x5e7162, .byte = 0x6f },
		{ .addr = 0x5e7163, .byte = 0x76 },
		{ .addr = 0x5e7164, .byte = 0xc9 },
		{ .addr = 0x5e7165, .byte = 0x5a },
		{ .addr = 0x999c26, .byte = 0xf1 },
		{ .addr = 0x999c27, .byte = 0xbb }
};

static const SST_Transaction negl_transactions_0[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10066980, .data = 6101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6189410, .data = 37001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6189412, .data = 13990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10066982, .data = 61883, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6189412, .data = 51546, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 6189410, .data = 28534, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_1[] = {
		{ .addr = 0xf4452e, .byte = 0x44 },
		{ .addr = 0xf4452f, .byte = 0xb5 },
		{ .addr = 0xf44530, .byte = 0x4f },
		{ .addr = 0xf44531, .byte = 0x71 },
		{ .addr = 0xf44532, .byte = 0x98 },
		{ .addr = 0xf44533, .byte = 0xbc },
		{ .addr = 0x00000c, .byte = 0x61 },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x0b },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x9e0bbe, .byte = 0xe4 },
		{ .addr = 0x9e0bbf, .byte = 0x37 },
		{ .addr = 0x9e0bc0, .byte = 0xdf },
		{ .addr = 0x9e0bc1, .byte = 0xca }
};

static const SST_RamByte negl_final_ram_1[] = {
		{ .addr = 0xf4452e, .byte = 0x44 },
		{ .addr = 0xf4452f, .byte = 0xb5 },
		{ .addr = 0xf44530, .byte = 0x4f },
		{ .addr = 0xf44531, .byte = 0x71 },
		{ .addr = 0xf44532, .byte = 0x98 },
		{ .addr = 0xf44533, .byte = 0xbc },
		{ .addr = 0xb08b88, .byte = 0x45 },
		{ .addr = 0xb08b89, .byte = 0x30 },
		{ .addr = 0xb08b84, .byte = 0x04 },
		{ .addr = 0xb08b85, .byte = 0x08 },
		{ .addr = 0xb08b86, .byte = 0x00 },
		{ .addr = 0xb08b87, .byte = 0xf4 },
		{ .addr = 0xb08b82, .byte = 0x44 },
		{ .addr = 0xb08b83, .byte = 0xb5 },
		{ .addr = 0xb08b80, .byte = 0x49 },
		{ .addr = 0xb08b81, .byte = 0x8b },
		{ .addr = 0xb08b7c, .byte = 0x44 },
		{ .addr = 0xb08b7d, .byte = 0xb1 },
		{ .addr = 0xb08b7e, .byte = 0x67 },
		{ .addr = 0xb08b7f, .byte = 0xed },
		{ .addr = 0x00000c, .byte = 0x61 },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x0b },
		{ .addr = 0x00000f, .byte = 0xbe },
		{ .addr = 0x9e0bbe, .byte = 0xe4 },
		{ .addr = 0x9e0bbf, .byte = 0x37 },
		{ .addr = 0x9e0bc0, .byte = 0xdf },
		{ .addr = 0x9e0bc1, .byte = 0xca }
};

static const SST_Transaction negl_transactions_1[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16008498, .data = 39100, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 15550858, .data = 8768, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11570056, .data = 17712, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11570052, .data = 1032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11570054, .data = 244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11570050, .data = 17589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11570048, .data = 18827, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11570044, .data = 17585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11570046, .data = 26605, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 24990, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 3006, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10357694, .data = 58423, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10357696, .data = 57290, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_2[] = {
		{ .addr = 0x978ae8, .byte = 0x44 },
		{ .addr = 0x978ae9, .byte = 0xb3 },
		{ .addr = 0x978aea, .byte = 0x77 },
		{ .addr = 0x978aeb, .byte = 0x53 },
		{ .addr = 0x978aec, .byte = 0x0b },
		{ .addr = 0x978aed, .byte = 0x1e },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x444120, .byte = 0xe5 },
		{ .addr = 0x444121, .byte = 0xfe },
		{ .addr = 0x444122, .byte = 0x1d },
		{ .addr = 0x444123, .byte = 0xd9 }
};

static const SST_RamByte negl_final_ram_2[] = {
		{ .addr = 0x978ae8, .byte = 0x44 },
		{ .addr = 0x978ae9, .byte = 0xb3 },
		{ .addr = 0x978aea, .byte = 0x77 },
		{ .addr = 0x978aeb, .byte = 0x53 },
		{ .addr = 0x978aec, .byte = 0x0b },
		{ .addr = 0x978aed, .byte = 0x1e },
		{ .addr = 0xc44190, .byte = 0x8a },
		{ .addr = 0xc44191, .byte = 0xea },
		{ .addr = 0xc4418c, .byte = 0xa4 },
		{ .addr = 0xc4418d, .byte = 0x1e },
		{ .addr = 0xc4418e, .byte = 0x00 },
		{ .addr = 0xc4418f, .byte = 0x97 },
		{ .addr = 0xc4418a, .byte = 0x44 },
		{ .addr = 0xc4418b, .byte = 0xb3 },
		{ .addr = 0xc44188, .byte = 0x6c },
		{ .addr = 0xc44189, .byte = 0xb9 },
		{ .addr = 0xc44184, .byte = 0x44 },
		{ .addr = 0xc44185, .byte = 0xb5 },
		{ .addr = 0xc44186, .byte = 0x3b },
		{ .addr = 0xc44187, .byte = 0x40 },
		{ .addr = 0x00000c, .byte = 0x88 },
		{ .addr = 0x00000d, .byte = 0x44 },
		{ .addr = 0x00000e, .byte = 0x41 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x444120, .byte = 0xe5 },
		{ .addr = 0x444121, .byte = 0xfe },
		{ .addr = 0x444122, .byte = 0x1d },
		{ .addr = 0x444123, .byte = 0xd9 }
};

static const SST_Transaction negl_transactions_2[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9931500, .data = 2846, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4222136, .data = 49052, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12861840, .data = 35562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12861836, .data = 42014, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12861838, .data = 151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12861834, .data = 17587, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12861832, .data = 27833, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12861828, .data = 17589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12861830, .data = 15168, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34884, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 16672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4473120, .data = 58878, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4473122, .data = 7641, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_3[] = {
		{ .addr = 0x7cbf26, .byte = 0x44 },
		{ .addr = 0x7cbf27, .byte = 0xa1 },
		{ .addr = 0x7cbf28, .byte = 0x79 },
		{ .addr = 0x7cbf29, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x32658a, .byte = 0x5e },
		{ .addr = 0x32658b, .byte = 0x34 },
		{ .addr = 0x32658c, .byte = 0x80 },
		{ .addr = 0x32658d, .byte = 0x3e }
};

static const SST_RamByte negl_final_ram_3[] = {
		{ .addr = 0x7cbf26, .byte = 0x44 },
		{ .addr = 0x7cbf27, .byte = 0xa1 },
		{ .addr = 0x7cbf28, .byte = 0x79 },
		{ .addr = 0x7cbf29, .byte = 0x53 },
		{ .addr = 0x1df812, .byte = 0xbf },
		{ .addr = 0x1df813, .byte = 0x28 },
		{ .addr = 0x1df80e, .byte = 0x05 },
		{ .addr = 0x1df80f, .byte = 0x08 },
		{ .addr = 0x1df810, .byte = 0x00 },
		{ .addr = 0x1df811, .byte = 0x7c },
		{ .addr = 0x1df80c, .byte = 0x44 },
		{ .addr = 0x1df80d, .byte = 0xa1 },
		{ .addr = 0x1df80a, .byte = 0x8f },
		{ .addr = 0x1df80b, .byte = 0x87 },
		{ .addr = 0x1df806, .byte = 0x44 },
		{ .addr = 0x1df807, .byte = 0xb1 },
		{ .addr = 0x1df808, .byte = 0x9c },
		{ .addr = 0x1df809, .byte = 0xd7 },
		{ .addr = 0x00000c, .byte = 0x4a },
		{ .addr = 0x00000d, .byte = 0x32 },
		{ .addr = 0x00000e, .byte = 0x65 },
		{ .addr = 0x00000f, .byte = 0x8a },
		{ .addr = 0x32658a, .byte = 0x5e },
		{ .addr = 0x32658b, .byte = 0x34 },
		{ .addr = 0x32658c, .byte = 0x80 },
		{ .addr = 0x32658d, .byte = 0x3e }
};

static const SST_Transaction negl_transactions_3[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 14126982, .data = 17601, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1964050, .data = 48936, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1964046, .data = 1288, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1964048, .data = 124, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1964044, .data = 17569, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1964042, .data = 36743, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1964038, .data = 17585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1964040, .data = 40151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 18994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25994, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3302794, .data = 24116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3302796, .data = 32830, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_4[] = {
		{ .addr = 0x77fd4a, .byte = 0x44 },
		{ .addr = 0x77fd4b, .byte = 0xb8 },
		{ .addr = 0x77fd4c, .byte = 0xeb },
		{ .addr = 0x77fd4d, .byte = 0x5e },
		{ .addr = 0x77fd4e, .byte = 0xbf },
		{ .addr = 0x77fd4f, .byte = 0xe1 },
		{ .addr = 0xffeb5e, .byte = 0xc9 },
		{ .addr = 0xffeb5f, .byte = 0x09 },
		{ .addr = 0xffeb60, .byte = 0x51 },
		{ .addr = 0xffeb61, .byte = 0x25 },
		{ .addr = 0x77fd50, .byte = 0xe5 },
		{ .addr = 0x77fd51, .byte = 0x42 }
};

static const SST_RamByte negl_final_ram_4[] = {
		{ .addr = 0x77fd4a, .byte = 0x44 },
		{ .addr = 0x77fd4b, .byte = 0xb8 },
		{ .addr = 0x77fd4c, .byte = 0xeb },
		{ .addr = 0x77fd4d, .byte = 0x5e },
		{ .addr = 0x77fd4e, .byte = 0xbf },
		{ .addr = 0x77fd4f, .byte = 0xe1 },
		{ .addr = 0xffeb5e, .byte = 0x36 },
		{ .addr = 0xffeb5f, .byte = 0xf6 },
		{ .addr = 0xffeb60, .byte = 0xae },
		{ .addr = 0xffeb61, .byte = 0xdb },
		{ .addr = 0x77fd50, .byte = 0xe5 },
		{ .addr = 0x77fd51, .byte = 0x42 }
};

static const SST_Transaction negl_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7863630, .data = 49121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16771934, .data = 51465, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16771936, .data = 20773, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7863632, .data = 58690, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16771936, .data = 44763, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16771934, .data = 14070, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_5[] = {
		{ .addr = 0x4b7886, .byte = 0x44 },
		{ .addr = 0x4b7887, .byte = 0x9f },
		{ .addr = 0x4b7888, .byte = 0x4a },
		{ .addr = 0x4b7889, .byte = 0x8d },
		{ .addr = 0x3a2aa6, .byte = 0xcd },
		{ .addr = 0x3a2aa7, .byte = 0x5d },
		{ .addr = 0x3a2aa8, .byte = 0xc1 },
		{ .addr = 0x3a2aa9, .byte = 0x83 },
		{ .addr = 0x4b788a, .byte = 0x46 },
		{ .addr = 0x4b788b, .byte = 0xd1 }
};

static const SST_RamByte negl_final_ram_5[] = {
		{ .addr = 0x4b7886, .byte = 0x44 },
		{ .addr = 0x4b7887, .byte = 0x9f },
		{ .addr = 0x4b7888, .byte = 0x4a },
		{ .addr = 0x4b7889, .byte = 0x8d },
		{ .addr = 0x3a2aa6, .byte = 0x32 },
		{ .addr = 0x3a2aa7, .byte = 0xa2 },
		{ .addr = 0x3a2aa8, .byte = 0x3e },
		{ .addr = 0x3a2aa9, .byte = 0x7d },
		{ .addr = 0x4b788a, .byte = 0x46 },
		{ .addr = 0x4b788b, .byte = 0xd1 }
};

static const SST_Transaction negl_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3812006, .data = 52573, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3812008, .data = 49539, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4946058, .data = 18129, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3812008, .data = 15997, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3812006, .data = 12962, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_6[] = {
		{ .addr = 0x35e5d4, .byte = 0x44 },
		{ .addr = 0x35e5d5, .byte = 0x9e },
		{ .addr = 0x35e5d6, .byte = 0x77 },
		{ .addr = 0x35e5d7, .byte = 0x3b },
		{ .addr = 0xe4e412, .byte = 0xff },
		{ .addr = 0xe4e413, .byte = 0xf7 },
		{ .addr = 0xe4e414, .byte = 0x89 },
		{ .addr = 0xe4e415, .byte = 0x56 },
		{ .addr = 0x35e5d8, .byte = 0xb9 },
		{ .addr = 0x35e5d9, .byte = 0x41 }
};

static const SST_RamByte negl_final_ram_6[] = {
		{ .addr = 0x35e5d4, .byte = 0x44 },
		{ .addr = 0x35e5d5, .byte = 0x9e },
		{ .addr = 0x35e5d6, .byte = 0x77 },
		{ .addr = 0x35e5d7, .byte = 0x3b },
		{ .addr = 0xe4e412, .byte = 0x00 },
		{ .addr = 0xe4e413, .byte = 0x08 },
		{ .addr = 0xe4e414, .byte = 0x76 },
		{ .addr = 0xe4e415, .byte = 0xaa },
		{ .addr = 0x35e5d8, .byte = 0xb9 },
		{ .addr = 0x35e5d9, .byte = 0x41 }
};

static const SST_Transaction negl_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15000594, .data = 65527, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15000596, .data = 35158, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3532248, .data = 47425, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15000596, .data = 30378, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15000594, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_7[] = {
		{ .addr = 0x088798, .byte = 0x44 },
		{ .addr = 0x088799, .byte = 0x85 },
		{ .addr = 0x08879a, .byte = 0x6c },
		{ .addr = 0x08879b, .byte = 0x93 },
		{ .addr = 0x08879c, .byte = 0xa0 },
		{ .addr = 0x08879d, .byte = 0x74 }
};

static const SST_RamByte negl_final_ram_7[] = {
		{ .addr = 0x088798, .byte = 0x44 },
		{ .addr = 0x088799, .byte = 0x85 },
		{ .addr = 0x08879a, .byte = 0x6c },
		{ .addr = 0x08879b, .byte = 0x93 },
		{ .addr = 0x08879c, .byte = 0xa0 },
		{ .addr = 0x08879d, .byte = 0x74 }
};

static const SST_Transaction negl_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 559004, .data = 41076, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negl_initial_ram_8[] = {
		{ .addr = 0xe3496a, .byte = 0x44 },
		{ .addr = 0xe3496b, .byte = 0xa6 },
		{ .addr = 0xe3496c, .byte = 0xe4 },
		{ .addr = 0xe3496d, .byte = 0x43 },
		{ .addr = 0x00000c, .byte = 0x87 },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0x30 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x6c3034, .byte = 0xab },
		{ .addr = 0x6c3035, .byte = 0x47 },
		{ .addr = 0x6c3036, .byte = 0x9f },
		{ .addr = 0x6c3037, .byte = 0x0d }
};

static const SST_RamByte negl_final_ram_8[] = {
		{ .addr = 0xe3496a, .byte = 0x44 },
		{ .addr = 0xe3496b, .byte = 0xa6 },
		{ .addr = 0xe3496c, .byte = 0xe4 },
		{ .addr = 0xe3496d, .byte = 0x43 },
		{ .addr = 0x4788a8, .byte = 0x49 },
		{ .addr = 0x4788a9, .byte = 0x6c },
		{ .addr = 0x4788a4, .byte = 0x23 },
		{ .addr = 0x4788a5, .byte = 0x13 },
		{ .addr = 0x4788a6, .byte = 0x00 },
		{ .addr = 0x4788a7, .byte = 0xe3 },
		{ .addr = 0x4788a2, .byte = 0x44 },
		{ .addr = 0x4788a3, .byte = 0xa6 },
		{ .addr = 0x4788a0, .byte = 0x1c },
		{ .addr = 0x4788a1, .byte = 0x33 },
		{ .addr = 0x47889c, .byte = 0x44 },
		{ .addr = 0x47889d, .byte = 0xb5 },
		{ .addr = 0x47889e, .byte = 0x1d },
		{ .addr = 0x47889f, .byte = 0xef },
		{ .addr = 0x00000c, .byte = 0x87 },
		{ .addr = 0x00000d, .byte = 0x6c },
		{ .addr = 0x00000e, .byte = 0x30 },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x6c3034, .byte = 0xab },
		{ .addr = 0x6c3035, .byte = 0x47 },
		{ .addr = 0x6c3036, .byte = 0x9f },
		{ .addr = 0x6c3037, .byte = 0x0d }
};

static const SST_Transaction negl_transactions_8[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15670322, .data = 34426, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688040, .data = 18796, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688036, .data = 8979, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688038, .data = 227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688034, .data = 17574, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688032, .data = 7219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688028, .data = 17589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4688030, .data = 7663, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 34668, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 12340, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7090228, .data = 43847, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7090230, .data = 40717, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_9[] = {
		{ .addr = 0x393688, .byte = 0x44 },
		{ .addr = 0x393689, .byte = 0xae },
		{ .addr = 0x39368a, .byte = 0xd6 },
		{ .addr = 0x39368b, .byte = 0x9f },
		{ .addr = 0x39368c, .byte = 0x0a },
		{ .addr = 0x39368d, .byte = 0xf7 },
		{ .addr = 0x00000c, .byte = 0x28 },
		{ .addr = 0x00000d, .byte = 0xe6 },
		{ .addr = 0x00000e, .byte = 0x1d },
		{ .addr = 0x00000f, .byte = 0x5e },
		{ .addr = 0xe61d5e, .byte = 0xdf },
		{ .addr = 0xe61d5f, .byte = 0x0b },
		{ .addr = 0xe61d60, .byte = 0x55 },
		{ .addr = 0xe61d61, .byte = 0x76 }
};

static const SST_RamByte negl_final_ram_9[] = {
		{ .addr = 0x393688, .byte = 0x44 },
		{ .addr = 0x393689, .byte = 0xae },
		{ .addr = 0x39368a, .byte = 0xd6 },
		{ .addr = 0x39368b, .byte = 0x9f },
		{ .addr = 0x39368c, .byte = 0x0a },
		{ .addr = 0x39368d, .byte = 0xf7 },
		{ .addr = 0x761c34, .byte = 0x36 },
		{ .addr = 0x761c35, .byte = 0x8a },
		{ .addr = 0x761c30, .byte = 0x05 },
		{ .addr = 0x761c31, .byte = 0x09 },
		{ .addr = 0x761c32, .byte = 0x00 },
		{ .addr = 0x761c33, .byte = 0x39 },
		{ .addr = 0x761c2e, .byte = 0x44 },
		{ .addr = 0x761c2f, .byte = 0xae },
		{ .addr = 0x761c2c, .byte = 0x64 },
		{ .addr = 0x761c2d, .byte = 0xe3 },
		{ .addr = 0x761c28, .byte = 0x44 },
		{ .addr = 0x761c29, .byte = 0xb1 },
		{ .addr = 0x761c2a, .byte = 0xf5 },
		{ .addr = 0x761c2b, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0x28 },
		{ .addr = 0x00000d, .byte = 0xe6 },
		{ .addr = 0x00000e, .byte = 0x1d },
		{ .addr = 0x00000f, .byte = 0x5e },
		{ .addr = 0xe61d5e, .byte = 0xdf },
		{ .addr = 0xe61d5f, .byte = 0x0b },
		{ .addr = 0xe61d60, .byte = 0x55 },
		{ .addr = 0xe61d61, .byte = 0x76 }
};

static const SST_Transaction negl_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3749516, .data = 2807, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9594082, .data = 42166, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7740468, .data = 13962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7740464, .data = 1289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7740466, .data = 57, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7740462, .data = 17582, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7740460, .data = 25827, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7740456, .data = 17585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7740458, .data = 62866, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 10470, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15080798, .data = 57099, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15080800, .data = 21878, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_10[] = {
		{ .addr = 0x8c273a, .byte = 0x44 },
		{ .addr = 0x8c273b, .byte = 0xac },
		{ .addr = 0x8c273c, .byte = 0x10 },
		{ .addr = 0x8c273d, .byte = 0x86 },
		{ .addr = 0x8c273e, .byte = 0x6a },
		{ .addr = 0x8c273f, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x57 },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x9e5776, .byte = 0x9b },
		{ .addr = 0x9e5777, .byte = 0x10 },
		{ .addr = 0x9e5778, .byte = 0x56 },
		{ .addr = 0x9e5779, .byte = 0x17 }
};

static const SST_RamByte negl_final_ram_10[] = {
		{ .addr = 0x8c273a, .byte = 0x44 },
		{ .addr = 0x8c273b, .byte = 0xac },
		{ .addr = 0x8c273c, .byte = 0x10 },
		{ .addr = 0x8c273d, .byte = 0x86 },
		{ .addr = 0x8c273e, .byte = 0x6a },
		{ .addr = 0x8c273f, .byte = 0xf5 },
		{ .addr = 0xf7c8bc, .byte = 0x27 },
		{ .addr = 0xf7c8bd, .byte = 0x3c },
		{ .addr = 0xf7c8b8, .byte = 0x80 },
		{ .addr = 0xf7c8b9, .byte = 0x0c },
		{ .addr = 0xf7c8ba, .byte = 0x00 },
		{ .addr = 0xf7c8bb, .byte = 0x8c },
		{ .addr = 0xf7c8b6, .byte = 0x44 },
		{ .addr = 0xf7c8b7, .byte = 0xac },
		{ .addr = 0xf7c8b4, .byte = 0x97 },
		{ .addr = 0xf7c8b5, .byte = 0xa9 },
		{ .addr = 0xf7c8b0, .byte = 0x44 },
		{ .addr = 0xf7c8b1, .byte = 0xb1 },
		{ .addr = 0xf7c8b2, .byte = 0x9a },
		{ .addr = 0xf7c8b3, .byte = 0xb8 },
		{ .addr = 0x00000c, .byte = 0x3c },
		{ .addr = 0x00000d, .byte = 0x9e },
		{ .addr = 0x00000e, .byte = 0x57 },
		{ .addr = 0x00000f, .byte = 0x76 },
		{ .addr = 0x9e5776, .byte = 0x9b },
		{ .addr = 0x9e5777, .byte = 0x10 },
		{ .addr = 0x9e5778, .byte = 0x56 },
		{ .addr = 0x9e5779, .byte = 0x17 }
};

static const SST_Transaction negl_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9185086, .data = 27381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 12097448, .data = 47881, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16238780, .data = 10044, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16238776, .data = 32780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16238778, .data = 140, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16238774, .data = 17580, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16238772, .data = 38825, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16238768, .data = 17585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16238770, .data = 39608, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 15518, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 22390, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10377078, .data = 39696, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10377080, .data = 22039, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_11[] = {
		{ .addr = 0xb490fe, .byte = 0x44 },
		{ .addr = 0xb490ff, .byte = 0x83 },
		{ .addr = 0xb49100, .byte = 0x58 },
		{ .addr = 0xb49101, .byte = 0x97 },
		{ .addr = 0xb49102, .byte = 0x13 },
		{ .addr = 0xb49103, .byte = 0xdd }
};

static const SST_RamByte negl_final_ram_11[] = {
		{ .addr = 0xb490fe, .byte = 0x44 },
		{ .addr = 0xb490ff, .byte = 0x83 },
		{ .addr = 0xb49100, .byte = 0x58 },
		{ .addr = 0xb49101, .byte = 0x97 },
		{ .addr = 0xb49102, .byte = 0x13 },
		{ .addr = 0xb49103, .byte = 0xdd }
};

static const SST_Transaction negl_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11833602, .data = 5085, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negl_initial_ram_12[] = {
		{ .addr = 0x5693c2, .byte = 0x44 },
		{ .addr = 0x5693c3, .byte = 0x99 },
		{ .addr = 0x5693c4, .byte = 0x75 },
		{ .addr = 0x5693c5, .byte = 0x0a },
		{ .addr = 0x1706b2, .byte = 0x6a },
		{ .addr = 0x1706b3, .byte = 0xe5 },
		{ .addr = 0x1706b4, .byte = 0x0c },
		{ .addr = 0x1706b5, .byte = 0x38 },
		{ .addr = 0x5693c6, .byte = 0x7b },
		{ .addr = 0x5693c7, .byte = 0xa8 }
};

static const SST_RamByte negl_final_ram_12[] = {
		{ .addr = 0x5693c2, .byte = 0x44 },
		{ .addr = 0x5693c3, .byte = 0x99 },
		{ .addr = 0x5693c4, .byte = 0x75 },
		{ .addr = 0x5693c5, .byte = 0x0a },
		{ .addr = 0x1706b2, .byte = 0x95 },
		{ .addr = 0x1706b3, .byte = 0x1a },
		{ .addr = 0x1706b4, .byte = 0xf3 },
		{ .addr = 0x1706b5, .byte = 0xc8 },
		{ .addr = 0x5693c6, .byte = 0x7b },
		{ .addr = 0x5693c7, .byte = 0xa8 }
};

static const SST_Transaction negl_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1509042, .data = 27365, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1509044, .data = 3128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5673926, .data = 31656, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1509044, .data = 62408, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 1509042, .data = 38170, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_13[] = {
		{ .addr = 0xee93ca, .byte = 0x44 },
		{ .addr = 0xee93cb, .byte = 0xa0 },
		{ .addr = 0xee93cc, .byte = 0xa0 },
		{ .addr = 0xee93cd, .byte = 0xf1 },
		{ .addr = 0x5903f0, .byte = 0x81 },
		{ .addr = 0x5903f1, .byte = 0xb3 },
		{ .addr = 0x5903f2, .byte = 0x57 },
		{ .addr = 0x5903f3, .byte = 0xf5 },
		{ .addr = 0xee93ce, .byte = 0x24 },
		{ .addr = 0xee93cf, .byte = 0x92 }
};

static const SST_RamByte negl_final_ram_13[] = {
		{ .addr = 0xee93ca, .byte = 0x44 },
		{ .addr = 0xee93cb, .byte = 0xa0 },
		{ .addr = 0xee93cc, .byte = 0xa0 },
		{ .addr = 0xee93cd, .byte = 0xf1 },
		{ .addr = 0x5903f0, .byte = 0x7e },
		{ .addr = 0x5903f1, .byte = 0x4c },
		{ .addr = 0x5903f2, .byte = 0xa8 },
		{ .addr = 0x5903f3, .byte = 0x0b },
		{ .addr = 0xee93ce, .byte = 0x24 },
		{ .addr = 0xee93cf, .byte = 0x92 }
};

static const SST_Transaction negl_transactions_13[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5833712, .data = 33203, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5833714, .data = 22517, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15635406, .data = 9362, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5833714, .data = 43019, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5833712, .data = 32332, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_14[] = {
		{ .addr = 0xbf603e, .byte = 0x44 },
		{ .addr = 0xbf603f, .byte = 0xb2 },
		{ .addr = 0xbf6040, .byte = 0x78 },
		{ .addr = 0xbf6041, .byte = 0x66 },
		{ .addr = 0xbf6042, .byte = 0xdd },
		{ .addr = 0xbf6043, .byte = 0x29 },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0xf2 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0xf29666, .byte = 0xe6 },
		{ .addr = 0xf29667, .byte = 0x7f },
		{ .addr = 0xf29668, .byte = 0x42 },
		{ .addr = 0xf29669, .byte = 0x8a }
};

static const SST_RamByte negl_final_ram_14[] = {
		{ .addr = 0xbf603e, .byte = 0x44 },
		{ .addr = 0xbf603f, .byte = 0xb2 },
		{ .addr = 0xbf6040, .byte = 0x78 },
		{ .addr = 0xbf6041, .byte = 0x66 },
		{ .addr = 0xbf6042, .byte = 0xdd },
		{ .addr = 0xbf6043, .byte = 0x29 },
		{ .addr = 0x29bfe4, .byte = 0x60 },
		{ .addr = 0x29bfe5, .byte = 0x40 },
		{ .addr = 0x29bfe0, .byte = 0xa1 },
		{ .addr = 0x29bfe1, .byte = 0x1b },
		{ .addr = 0x29bfe2, .byte = 0x00 },
		{ .addr = 0x29bfe3, .byte = 0xbf },
		{ .addr = 0x29bfde, .byte = 0x44 },
		{ .addr = 0x29bfdf, .byte = 0xb2 },
		{ .addr = 0x29bfdc, .byte = 0xee },
		{ .addr = 0x29bfdd, .byte = 0x2b },
		{ .addr = 0x29bfd8, .byte = 0x44 },
		{ .addr = 0x29bfd9, .byte = 0xb5 },
		{ .addr = 0x29bfda, .byte = 0x6c },
		{ .addr = 0x29bfdb, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0x54 },
		{ .addr = 0x00000d, .byte = 0xf2 },
		{ .addr = 0x00000e, .byte = 0x96 },
		{ .addr = 0x00000f, .byte = 0x66 },
		{ .addr = 0xf29666, .byte = 0xe6 },
		{ .addr = 0xf29667, .byte = 0x7f },
		{ .addr = 0xf29668, .byte = 0x42 },
		{ .addr = 0xf29669, .byte = 0x8a }
};

static const SST_Transaction negl_transactions_14[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12542018, .data = 56617, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16117290, .data = 21950, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736100, .data = 24640, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736096, .data = 41243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736098, .data = 191, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736094, .data = 17586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736092, .data = 60971, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736088, .data = 17589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 2736090, .data = 27893, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 21746, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38502, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15898214, .data = 59007, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15898216, .data = 17034, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_15[] = {
		{ .addr = 0x08c874, .byte = 0x44 },
		{ .addr = 0x08c875, .byte = 0x94 },
		{ .addr = 0x08c876, .byte = 0x84 },
		{ .addr = 0x08c877, .byte = 0xaf },
		{ .addr = 0x00000c, .byte = 0xdd },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x1d },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0xee1d7e, .byte = 0x71 },
		{ .addr = 0xee1d7f, .byte = 0x8d },
		{ .addr = 0xee1d80, .byte = 0x25 },
		{ .addr = 0xee1d81, .byte = 0x92 }
};

static const SST_RamByte negl_final_ram_15[] = {
		{ .addr = 0x08c874, .byte = 0x44 },
		{ .addr = 0x08c875, .byte = 0x94 },
		{ .addr = 0x08c876, .byte = 0x84 },
		{ .addr = 0x08c877, .byte = 0xaf },
		{ .addr = 0x317fb6, .byte = 0xc8 },
		{ .addr = 0x317fb7, .byte = 0x76 },
		{ .addr = 0x317fb2, .byte = 0x03 },
		{ .addr = 0x317fb3, .byte = 0x17 },
		{ .addr = 0x317fb4, .byte = 0x00 },
		{ .addr = 0x317fb5, .byte = 0x08 },
		{ .addr = 0x317fb0, .byte = 0x44 },
		{ .addr = 0x317fb1, .byte = 0x94 },
		{ .addr = 0x317fae, .byte = 0xbc },
		{ .addr = 0x317faf, .byte = 0xf5 },
		{ .addr = 0x317faa, .byte = 0x44 },
		{ .addr = 0x317fab, .byte = 0x91 },
		{ .addr = 0x317fac, .byte = 0xb0 },
		{ .addr = 0x317fad, .byte = 0x5f },
		{ .addr = 0x00000c, .byte = 0xdd },
		{ .addr = 0x00000d, .byte = 0xee },
		{ .addr = 0x00000e, .byte = 0x1d },
		{ .addr = 0x00000f, .byte = 0x7e },
		{ .addr = 0xee1d7e, .byte = 0x71 },
		{ .addr = 0xee1d7f, .byte = 0x8d },
		{ .addr = 0xee1d80, .byte = 0x25 },
		{ .addr = 0xee1d81, .byte = 0x92 }
};

static const SST_Transaction negl_transactions_15[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 6274292, .data = 5226, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243958, .data = 51318, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243954, .data = 791, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243956, .data = 8, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243952, .data = 17556, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243950, .data = 48373, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243946, .data = 17553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3243948, .data = 45151, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 56814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15605118, .data = 29069, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15605120, .data = 9618, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_16[] = {
		{ .addr = 0x8b16de, .byte = 0x44 },
		{ .addr = 0x8b16df, .byte = 0x96 },
		{ .addr = 0x8b16e0, .byte = 0x31 },
		{ .addr = 0x8b16e1, .byte = 0xea },
		{ .addr = 0x22b4b6, .byte = 0x78 },
		{ .addr = 0x22b4b7, .byte = 0x63 },
		{ .addr = 0x22b4b8, .byte = 0xe0 },
		{ .addr = 0x22b4b9, .byte = 0xe5 },
		{ .addr = 0x8b16e2, .byte = 0xea },
		{ .addr = 0x8b16e3, .byte = 0x61 }
};

static const SST_RamByte negl_final_ram_16[] = {
		{ .addr = 0x8b16de, .byte = 0x44 },
		{ .addr = 0x8b16df, .byte = 0x96 },
		{ .addr = 0x8b16e0, .byte = 0x31 },
		{ .addr = 0x8b16e1, .byte = 0xea },
		{ .addr = 0x22b4b6, .byte = 0x87 },
		{ .addr = 0x22b4b7, .byte = 0x9c },
		{ .addr = 0x22b4b8, .byte = 0x1f },
		{ .addr = 0x22b4b9, .byte = 0x1b },
		{ .addr = 0x8b16e2, .byte = 0xea },
		{ .addr = 0x8b16e3, .byte = 0x61 }
};

static const SST_Transaction negl_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2274486, .data = 30819, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2274488, .data = 57573, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9115362, .data = 60001, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2274488, .data = 7963, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 2274486, .data = 34716, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_17[] = {
		{ .addr = 0xea5754, .byte = 0x44 },
		{ .addr = 0xea5755, .byte = 0xae },
		{ .addr = 0xea5756, .byte = 0x47 },
		{ .addr = 0xea5757, .byte = 0xca },
		{ .addr = 0xea5758, .byte = 0x0b },
		{ .addr = 0xea5759, .byte = 0x7c },
		{ .addr = 0x3896b8, .byte = 0xe1 },
		{ .addr = 0x3896b9, .byte = 0xfc },
		{ .addr = 0x3896ba, .byte = 0x5e },
		{ .addr = 0x3896bb, .byte = 0x5d },
		{ .addr = 0xea575a, .byte = 0xa8 },
		{ .addr = 0xea575b, .byte = 0xd5 }
};

static const SST_RamByte negl_final_ram_17[] = {
		{ .addr = 0xea5754, .byte = 0x44 },
		{ .addr = 0xea5755, .byte = 0xae },
		{ .addr = 0xea5756, .byte = 0x47 },
		{ .addr = 0xea5757, .byte = 0xca },
		{ .addr = 0xea5758, .byte = 0x0b },
		{ .addr = 0xea5759, .byte = 0x7c },
		{ .addr = 0x3896b8, .byte = 0x1e },
		{ .addr = 0x3896b9, .byte = 0x03 },
		{ .addr = 0x3896ba, .byte = 0xa1 },
		{ .addr = 0x3896bb, .byte = 0xa3 },
		{ .addr = 0xea575a, .byte = 0xa8 },
		{ .addr = 0xea575b, .byte = 0xd5 }
};

static const SST_Transaction negl_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15357784, .data = 2940, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3708600, .data = 57852, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3708602, .data = 24157, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15357786, .data = 43221, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3708602, .data = 41379, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3708600, .data = 7683, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_18[] = {
		{ .addr = 0x6afb44, .byte = 0x44 },
		{ .addr = 0x6afb45, .byte = 0x9e },
		{ .addr = 0x6afb46, .byte = 0xa1 },
		{ .addr = 0x6afb47, .byte = 0xce },
		{ .addr = 0xf117ce, .byte = 0xe5 },
		{ .addr = 0xf117cf, .byte = 0x9c },
		{ .addr = 0xf117d0, .byte = 0xd7 },
		{ .addr = 0xf117d1, .byte = 0xcb },
		{ .addr = 0x6afb48, .byte = 0x9f },
		{ .addr = 0x6afb49, .byte = 0xa0 }
};

static const SST_RamByte negl_final_ram_18[] = {
		{ .addr = 0x6afb44, .byte = 0x44 },
		{ .addr = 0x6afb45, .byte = 0x9e },
		{ .addr = 0x6afb46, .byte = 0xa1 },
		{ .addr = 0x6afb47, .byte = 0xce },
		{ .addr = 0xf117ce, .byte = 0x1a },
		{ .addr = 0xf117cf, .byte = 0x63 },
		{ .addr = 0xf117d0, .byte = 0x28 },
		{ .addr = 0xf117d1, .byte = 0x35 },
		{ .addr = 0x6afb48, .byte = 0x9f },
		{ .addr = 0x6afb49, .byte = 0xa0 }
};

static const SST_Transaction negl_transactions_18[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15800270, .data = 58780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15800272, .data = 55243, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7011144, .data = 40864, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15800272, .data = 10293, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15800270, .data = 6755, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_19[] = {
		{ .addr = 0x701068, .byte = 0x44 },
		{ .addr = 0x701069, .byte = 0x9a },
		{ .addr = 0x70106a, .byte = 0x99 },
		{ .addr = 0x70106b, .byte = 0x6c },
		{ .addr = 0x00000c, .byte = 0x6b },
		{ .addr = 0x00000d, .byte = 0xc2 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0xc21efa, .byte = 0x06 },
		{ .addr = 0xc21efb, .byte = 0xfe },
		{ .addr = 0xc21efc, .byte = 0xa6 },
		{ .addr = 0xc21efd, .byte = 0x7f }
};

static const SST_RamByte negl_final_ram_19[] = {
		{ .addr = 0x701068, .byte = 0x44 },
		{ .addr = 0x701069, .byte = 0x9a },
		{ .addr = 0x70106a, .byte = 0x99 },
		{ .addr = 0x70106b, .byte = 0x6c },
		{ .addr = 0xefec74, .byte = 0x10 },
		{ .addr = 0xefec75, .byte = 0x6a },
		{ .addr = 0xefec70, .byte = 0x27 },
		{ .addr = 0xefec71, .byte = 0x0e },
		{ .addr = 0xefec72, .byte = 0x00 },
		{ .addr = 0xefec73, .byte = 0x70 },
		{ .addr = 0xefec6e, .byte = 0x44 },
		{ .addr = 0xefec6f, .byte = 0x9a },
		{ .addr = 0xefec6c, .byte = 0xe7 },
		{ .addr = 0xefec6d, .byte = 0x35 },
		{ .addr = 0xefec68, .byte = 0x44 },
		{ .addr = 0xefec69, .byte = 0x95 },
		{ .addr = 0xefec6a, .byte = 0x59 },
		{ .addr = 0xefec6b, .byte = 0xf8 },
		{ .addr = 0x00000c, .byte = 0x6b },
		{ .addr = 0x00000d, .byte = 0xc2 },
		{ .addr = 0x00000e, .byte = 0x1e },
		{ .addr = 0x00000f, .byte = 0xfa },
		{ .addr = 0xc21efa, .byte = 0x06 },
		{ .addr = 0xc21efb, .byte = 0xfe },
		{ .addr = 0xc21efc, .byte = 0xa6 },
		{ .addr = 0xc21efd, .byte = 0x7f }
};

static const SST_Transaction negl_transactions_19[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16312116, .data = 43462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723636, .data = 4202, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723632, .data = 9998, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723634, .data = 112, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723630, .data = 17562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723628, .data = 59189, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723624, .data = 17557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15723626, .data = 23032, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 27586, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 7930, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12721914, .data = 1790, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12721916, .data = 42623, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_20[] = {
		{ .addr = 0xd1121a, .byte = 0x44 },
		{ .addr = 0xd1121b, .byte = 0xa9 },
		{ .addr = 0xd1121c, .byte = 0x38 },
		{ .addr = 0xd1121d, .byte = 0x99 },
		{ .addr = 0xd1121e, .byte = 0x83 },
		{ .addr = 0xd1121f, .byte = 0x53 },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x8f },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0xbe8faa, .byte = 0xa4 },
		{ .addr = 0xbe8fab, .byte = 0x54 },
		{ .addr = 0xbe8fac, .byte = 0xc2 },
		{ .addr = 0xbe8fad, .byte = 0xd5 }
};

static const SST_RamByte negl_final_ram_20[] = {
		{ .addr = 0xd1121a, .byte = 0x44 },
		{ .addr = 0xd1121b, .byte = 0xa9 },
		{ .addr = 0xd1121c, .byte = 0x38 },
		{ .addr = 0xd1121d, .byte = 0x99 },
		{ .addr = 0xd1121e, .byte = 0x83 },
		{ .addr = 0xd1121f, .byte = 0x53 },
		{ .addr = 0xf11e68, .byte = 0x12 },
		{ .addr = 0xf11e69, .byte = 0x1c },
		{ .addr = 0xf11e64, .byte = 0x21 },
		{ .addr = 0xf11e65, .byte = 0x0e },
		{ .addr = 0xf11e66, .byte = 0x00 },
		{ .addr = 0xf11e67, .byte = 0xd1 },
		{ .addr = 0xf11e62, .byte = 0x44 },
		{ .addr = 0xf11e63, .byte = 0xa9 },
		{ .addr = 0xf11e60, .byte = 0x3b },
		{ .addr = 0xf11e61, .byte = 0x7b },
		{ .addr = 0xf11e5c, .byte = 0x44 },
		{ .addr = 0xf11e5d, .byte = 0xb5 },
		{ .addr = 0xf11e5e, .byte = 0xf3 },
		{ .addr = 0xf11e5f, .byte = 0x92 },
		{ .addr = 0x00000c, .byte = 0xbb },
		{ .addr = 0x00000d, .byte = 0xbe },
		{ .addr = 0x00000e, .byte = 0x8f },
		{ .addr = 0x00000f, .byte = 0xaa },
		{ .addr = 0xbe8faa, .byte = 0xa4 },
		{ .addr = 0xbe8fab, .byte = 0x54 },
		{ .addr = 0xbe8fac, .byte = 0xc2 },
		{ .addr = 0xbe8fad, .byte = 0xd5 }
};

static const SST_Transaction negl_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 13701662, .data = 33619, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9583482, .data = 17380, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15801960, .data = 4636, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15801956, .data = 8462, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15801958, .data = 209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15801954, .data = 17577, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15801952, .data = 15227, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15801948, .data = 17589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 15801950, .data = 62354, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 48062, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 36778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12488618, .data = 42068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12488620, .data = 49877, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_21[] = {
		{ .addr = 0x16cd88, .byte = 0x44 },
		{ .addr = 0x16cd89, .byte = 0xab },
		{ .addr = 0x16cd8a, .byte = 0x95 },
		{ .addr = 0x16cd8b, .byte = 0x0c },
		{ .addr = 0x16cd8c, .byte = 0xa8 },
		{ .addr = 0x16cd8d, .byte = 0x7f },
		{ .addr = 0xfaf802, .byte = 0x15 },
		{ .addr = 0xfaf803, .byte = 0x74 },
		{ .addr = 0xfaf804, .byte = 0x08 },
		{ .addr = 0xfaf805, .byte = 0x34 },
		{ .addr = 0x16cd8e, .byte = 0x70 },
		{ .addr = 0x16cd8f, .byte = 0xf3 }
};

static const SST_RamByte negl_final_ram_21[] = {
		{ .addr = 0x16cd88, .byte = 0x44 },
		{ .addr = 0x16cd89, .byte = 0xab },
		{ .addr = 0x16cd8a, .byte = 0x95 },
		{ .addr = 0x16cd8b, .byte = 0x0c },
		{ .addr = 0x16cd8c, .byte = 0xa8 },
		{ .addr = 0x16cd8d, .byte = 0x7f },
		{ .addr = 0xfaf802, .byte = 0xea },
		{ .addr = 0xfaf803, .byte = 0x8b },
		{ .addr = 0xfaf804, .byte = 0xf7 },
		{ .addr = 0xfaf805, .byte = 0xcc },
		{ .addr = 0x16cd8e, .byte = 0x70 },
		{ .addr = 0x16cd8f, .byte = 0xf3 }
};

static const SST_Transaction negl_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1494412, .data = 43135, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16447490, .data = 5492, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16447492, .data = 2100, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1494414, .data = 28915, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16447492, .data = 63436, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16447490, .data = 60043, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_22[] = {
		{ .addr = 0x523a58, .byte = 0x44 },
		{ .addr = 0x523a59, .byte = 0x90 },
		{ .addr = 0x523a5a, .byte = 0x77 },
		{ .addr = 0x523a5b, .byte = 0x6b },
		{ .addr = 0xff52ea, .byte = 0xfd },
		{ .addr = 0xff52eb, .byte = 0xc2 },
		{ .addr = 0xff52ec, .byte = 0x85 },
		{ .addr = 0xff52ed, .byte = 0xf4 },
		{ .addr = 0x523a5c, .byte = 0xbf },
		{ .addr = 0x523a5d, .byte = 0x23 }
};

static const SST_RamByte negl_final_ram_22[] = {
		{ .addr = 0x523a58, .byte = 0x44 },
		{ .addr = 0x523a59, .byte = 0x90 },
		{ .addr = 0x523a5a, .byte = 0x77 },
		{ .addr = 0x523a5b, .byte = 0x6b },
		{ .addr = 0xff52ea, .byte = 0x02 },
		{ .addr = 0xff52eb, .byte = 0x3d },
		{ .addr = 0xff52ec, .byte = 0x7a },
		{ .addr = 0xff52ed, .byte = 0x0c },
		{ .addr = 0x523a5c, .byte = 0xbf },
		{ .addr = 0x523a5d, .byte = 0x23 }
};

static const SST_Transaction negl_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16732906, .data = 64962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16732908, .data = 34292, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5388892, .data = 48931, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16732908, .data = 31244, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16732906, .data = 573, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_23[] = {
		{ .addr = 0xfa6f7e, .byte = 0x44 },
		{ .addr = 0xfa6f7f, .byte = 0x9e },
		{ .addr = 0xfa6f80, .byte = 0xc0 },
		{ .addr = 0xfa6f81, .byte = 0x64 },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xf8 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x7af820, .byte = 0x10 },
		{ .addr = 0x7af821, .byte = 0x73 },
		{ .addr = 0x7af822, .byte = 0x48 },
		{ .addr = 0x7af823, .byte = 0xa1 }
};

static const SST_RamByte negl_final_ram_23[] = {
		{ .addr = 0xfa6f7e, .byte = 0x44 },
		{ .addr = 0xfa6f7f, .byte = 0x9e },
		{ .addr = 0xfa6f80, .byte = 0xc0 },
		{ .addr = 0xfa6f81, .byte = 0x64 },
		{ .addr = 0xc06e00, .byte = 0x6f },
		{ .addr = 0xc06e01, .byte = 0x80 },
		{ .addr = 0xc06dfc, .byte = 0x06 },
		{ .addr = 0xc06dfd, .byte = 0x0e },
		{ .addr = 0xc06dfe, .byte = 0x00 },
		{ .addr = 0xc06dff, .byte = 0xfa },
		{ .addr = 0xc06dfa, .byte = 0x44 },
		{ .addr = 0xc06dfb, .byte = 0x9e },
		{ .addr = 0xc06df8, .byte = 0x2f },
		{ .addr = 0xc06df9, .byte = 0x3f },
		{ .addr = 0xc06df4, .byte = 0x44 },
		{ .addr = 0xc06df5, .byte = 0x91 },
		{ .addr = 0xc06df6, .byte = 0xad },
		{ .addr = 0xc06df7, .byte = 0x47 },
		{ .addr = 0x00000c, .byte = 0xa0 },
		{ .addr = 0x00000d, .byte = 0x7a },
		{ .addr = 0x00000e, .byte = 0xf8 },
		{ .addr = 0x00000f, .byte = 0x20 },
		{ .addr = 0x7af820, .byte = 0x10 },
		{ .addr = 0x7af821, .byte = 0x73 },
		{ .addr = 0x7af822, .byte = 0x48 },
		{ .addr = 0x7af823, .byte = 0xa1 }
};

static const SST_Transaction negl_transactions_23[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 4665150, .data = 43232, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611072, .data = 28544, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611068, .data = 1550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611070, .data = 250, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611066, .data = 17566, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611064, .data = 12095, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611060, .data = 17553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12611062, .data = 44359, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 41082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 63520, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8058912, .data = 4211, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8058914, .data = 18593, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_24[] = {
		{ .addr = 0x144f10, .byte = 0x44 },
		{ .addr = 0x144f11, .byte = 0xa7 },
		{ .addr = 0x144f12, .byte = 0x91 },
		{ .addr = 0x144f13, .byte = 0x7e },
		{ .addr = 0x374272, .byte = 0x2d },
		{ .addr = 0x374273, .byte = 0x7f },
		{ .addr = 0x374274, .byte = 0xd7 },
		{ .addr = 0x374275, .byte = 0xa9 },
		{ .addr = 0x144f14, .byte = 0xc6 },
		{ .addr = 0x144f15, .byte = 0x41 }
};

static const SST_RamByte negl_final_ram_24[] = {
		{ .addr = 0x144f10, .byte = 0x44 },
		{ .addr = 0x144f11, .byte = 0xa7 },
		{ .addr = 0x144f12, .byte = 0x91 },
		{ .addr = 0x144f13, .byte = 0x7e },
		{ .addr = 0x374272, .byte = 0xd2 },
		{ .addr = 0x374273, .byte = 0x80 },
		{ .addr = 0x374274, .byte = 0x28 },
		{ .addr = 0x374275, .byte = 0x57 },
		{ .addr = 0x144f14, .byte = 0xc6 },
		{ .addr = 0x144f15, .byte = 0x41 }
};

static const SST_Transaction negl_transactions_24[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3621490, .data = 11647, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3621492, .data = 55209, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1330964, .data = 50753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3621492, .data = 10327, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3621490, .data = 53888, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_25[] = {
		{ .addr = 0xbbfac8, .byte = 0x44 },
		{ .addr = 0xbbfac9, .byte = 0x9f },
		{ .addr = 0xbbfaca, .byte = 0xbd },
		{ .addr = 0xbbfacb, .byte = 0x5c },
		{ .addr = 0xa772f2, .byte = 0x62 },
		{ .addr = 0xa772f3, .byte = 0xb4 },
		{ .addr = 0xa772f4, .byte = 0x16 },
		{ .addr = 0xa772f5, .byte = 0x5a },
		{ .addr = 0xbbfacc, .byte = 0x7d },
		{ .addr = 0xbbfacd, .byte = 0x53 }
};

static const SST_RamByte negl_final_ram_25[] = {
		{ .addr = 0xbbfac8, .byte = 0x44 },
		{ .addr = 0xbbfac9, .byte = 0x9f },
		{ .addr = 0xbbfaca, .byte = 0xbd },
		{ .addr = 0xbbfacb, .byte = 0x5c },
		{ .addr = 0xa772f2, .byte = 0x9d },
		{ .addr = 0xa772f3, .byte = 0x4b },
		{ .addr = 0xa772f4, .byte = 0xe9 },
		{ .addr = 0xa772f5, .byte = 0xa6 },
		{ .addr = 0xbbfacc, .byte = 0x7d },
		{ .addr = 0xbbfacd, .byte = 0x53 }
};

static const SST_Transaction negl_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973938, .data = 25268, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973940, .data = 5722, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12319436, .data = 32083, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973940, .data = 59814, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10973938, .data = 40267, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_26[] = {
		{ .addr = 0x7b5d66, .byte = 0x44 },
		{ .addr = 0x7b5d67, .byte = 0x82 },
		{ .addr = 0x7b5d68, .byte = 0x0d },
		{ .addr = 0x7b5d69, .byte = 0xce },
		{ .addr = 0x7b5d6a, .byte = 0x5f },
		{ .addr = 0x7b5d6b, .byte = 0xac }
};

static const SST_RamByte negl_final_ram_26[] = {
		{ .addr = 0x7b5d66, .byte = 0x44 },
		{ .addr = 0x7b5d67, .byte = 0x82 },
		{ .addr = 0x7b5d68, .byte = 0x0d },
		{ .addr = 0x7b5d69, .byte = 0xce },
		{ .addr = 0x7b5d6a, .byte = 0x5f },
		{ .addr = 0x7b5d6b, .byte = 0xac }
};

static const SST_Transaction negl_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 8084842, .data = 24492, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
};

static const SST_RamByte negl_initial_ram_27[] = {
		{ .addr = 0x6bed9e, .byte = 0x44 },
		{ .addr = 0x6bed9f, .byte = 0xa9 },
		{ .addr = 0x6beda0, .byte = 0x3a },
		{ .addr = 0x6beda1, .byte = 0x6c },
		{ .addr = 0x6beda2, .byte = 0x7f },
		{ .addr = 0x6beda3, .byte = 0xff },
		{ .addr = 0x2f8330, .byte = 0x59 },
		{ .addr = 0x2f8331, .byte = 0x07 },
		{ .addr = 0x2f8332, .byte = 0x1c },
		{ .addr = 0x2f8333, .byte = 0x3c },
		{ .addr = 0x6beda4, .byte = 0x3e },
		{ .addr = 0x6beda5, .byte = 0xd2 }
};

static const SST_RamByte negl_final_ram_27[] = {
		{ .addr = 0x6bed9e, .byte = 0x44 },
		{ .addr = 0x6bed9f, .byte = 0xa9 },
		{ .addr = 0x6beda0, .byte = 0x3a },
		{ .addr = 0x6beda1, .byte = 0x6c },
		{ .addr = 0x6beda2, .byte = 0x7f },
		{ .addr = 0x6beda3, .byte = 0xff },
		{ .addr = 0x2f8330, .byte = 0xa6 },
		{ .addr = 0x2f8331, .byte = 0xf8 },
		{ .addr = 0x2f8332, .byte = 0xe3 },
		{ .addr = 0x2f8333, .byte = 0xc4 },
		{ .addr = 0x6beda4, .byte = 0x3e },
		{ .addr = 0x6beda5, .byte = 0xd2 }
};

static const SST_Transaction negl_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7073186, .data = 32767, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3113776, .data = 22791, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3113778, .data = 7228, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7073188, .data = 16082, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3113778, .data = 58308, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3113776, .data = 42744, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_28[] = {
		{ .addr = 0x37f080, .byte = 0x44 },
		{ .addr = 0x37f081, .byte = 0xae },
		{ .addr = 0x37f082, .byte = 0x98 },
		{ .addr = 0x37f083, .byte = 0xca },
		{ .addr = 0x37f084, .byte = 0x62 },
		{ .addr = 0x37f085, .byte = 0xfe },
		{ .addr = 0x833698, .byte = 0x9f },
		{ .addr = 0x833699, .byte = 0x38 },
		{ .addr = 0x83369a, .byte = 0x5f },
		{ .addr = 0x83369b, .byte = 0x9c },
		{ .addr = 0x37f086, .byte = 0x1e },
		{ .addr = 0x37f087, .byte = 0xda }
};

static const SST_RamByte negl_final_ram_28[] = {
		{ .addr = 0x37f080, .byte = 0x44 },
		{ .addr = 0x37f081, .byte = 0xae },
		{ .addr = 0x37f082, .byte = 0x98 },
		{ .addr = 0x37f083, .byte = 0xca },
		{ .addr = 0x37f084, .byte = 0x62 },
		{ .addr = 0x37f085, .byte = 0xfe },
		{ .addr = 0x833698, .byte = 0x60 },
		{ .addr = 0x833699, .byte = 0xc7 },
		{ .addr = 0x83369a, .byte = 0xa0 },
		{ .addr = 0x83369b, .byte = 0x64 },
		{ .addr = 0x37f086, .byte = 0x1e },
		{ .addr = 0x37f087, .byte = 0xda }
};

static const SST_Transaction negl_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3666052, .data = 25342, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8599192, .data = 40760, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8599194, .data = 24476, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3666054, .data = 7898, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8599194, .data = 41060, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 8599192, .data = 24775, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_29[] = {
		{ .addr = 0xfb3bf4, .byte = 0x44 },
		{ .addr = 0xfb3bf5, .byte = 0xaa },
		{ .addr = 0xfb3bf6, .byte = 0xb8 },
		{ .addr = 0xfb3bf7, .byte = 0x5c },
		{ .addr = 0xfb3bf8, .byte = 0x5c },
		{ .addr = 0xfb3bf9, .byte = 0xf8 },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x6b },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0x766b18, .byte = 0x5b },
		{ .addr = 0x766b19, .byte = 0x72 },
		{ .addr = 0x766b1a, .byte = 0x2e },
		{ .addr = 0x766b1b, .byte = 0x2b }
};

static const SST_RamByte negl_final_ram_29[] = {
		{ .addr = 0xfb3bf4, .byte = 0x44 },
		{ .addr = 0xfb3bf5, .byte = 0xaa },
		{ .addr = 0xfb3bf6, .byte = 0xb8 },
		{ .addr = 0xfb3bf7, .byte = 0x5c },
		{ .addr = 0xfb3bf8, .byte = 0x5c },
		{ .addr = 0xfb3bf9, .byte = 0xf8 },
		{ .addr = 0xace9ec, .byte = 0x3b },
		{ .addr = 0xace9ed, .byte = 0xf6 },
		{ .addr = 0xace9e8, .byte = 0x83 },
		{ .addr = 0xace9e9, .byte = 0x00 },
		{ .addr = 0xace9ea, .byte = 0x00 },
		{ .addr = 0xace9eb, .byte = 0xfb },
		{ .addr = 0xace9e6, .byte = 0x44 },
		{ .addr = 0xace9e7, .byte = 0xaa },
		{ .addr = 0xace9e4, .byte = 0x9d },
		{ .addr = 0xace9e5, .byte = 0x61 },
		{ .addr = 0xace9e0, .byte = 0x44 },
		{ .addr = 0xace9e1, .byte = 0xb1 },
		{ .addr = 0xace9e2, .byte = 0xf0 },
		{ .addr = 0xace9e3, .byte = 0xf4 },
		{ .addr = 0x00000c, .byte = 0xab },
		{ .addr = 0x00000d, .byte = 0x76 },
		{ .addr = 0x00000e, .byte = 0x6b },
		{ .addr = 0x00000f, .byte = 0x18 },
		{ .addr = 0x766b18, .byte = 0x5b },
		{ .addr = 0x766b19, .byte = 0x72 },
		{ .addr = 0x766b1a, .byte = 0x2e },
		{ .addr = 0x766b1b, .byte = 0x2b }
};

static const SST_Transaction negl_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16464888, .data = 23800, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16031072, .data = 9238, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11332076, .data = 15350, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11332072, .data = 33536, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11332074, .data = 251, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11332070, .data = 17578, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11332068, .data = 40289, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11332064, .data = 17585, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11332066, .data = 61684, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 43894, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 27416, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7760664, .data = 23410, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7760666, .data = 11819, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_30[] = {
		{ .addr = 0xd0225c, .byte = 0x44 },
		{ .addr = 0xd0225d, .byte = 0xa4 },
		{ .addr = 0xd0225e, .byte = 0x18 },
		{ .addr = 0xd0225f, .byte = 0xa7 },
		{ .addr = 0x00000c, .byte = 0x14 },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0xfa6908, .byte = 0xa8 },
		{ .addr = 0xfa6909, .byte = 0x31 },
		{ .addr = 0xfa690a, .byte = 0xe6 },
		{ .addr = 0xfa690b, .byte = 0x6a }
};

static const SST_RamByte negl_final_ram_30[] = {
		{ .addr = 0xd0225c, .byte = 0x44 },
		{ .addr = 0xd0225d, .byte = 0xa4 },
		{ .addr = 0xd0225e, .byte = 0x18 },
		{ .addr = 0xd0225f, .byte = 0xa7 },
		{ .addr = 0x4333ec, .byte = 0x22 },
		{ .addr = 0x4333ed, .byte = 0x5e },
		{ .addr = 0x4333e8, .byte = 0xa2 },
		{ .addr = 0x4333e9, .byte = 0x10 },
		{ .addr = 0x4333ea, .byte = 0x00 },
		{ .addr = 0x4333eb, .byte = 0xd0 },
		{ .addr = 0x4333e6, .byte = 0x44 },
		{ .addr = 0x4333e7, .byte = 0xa4 },
		{ .addr = 0x4333e4, .byte = 0xa6 },
		{ .addr = 0x4333e5, .byte = 0x39 },
		{ .addr = 0x4333e0, .byte = 0x44 },
		{ .addr = 0x4333e1, .byte = 0xb5 },
		{ .addr = 0x4333e2, .byte = 0x5f },
		{ .addr = 0x4333e3, .byte = 0xb2 },
		{ .addr = 0x00000c, .byte = 0x14 },
		{ .addr = 0x00000d, .byte = 0xfa },
		{ .addr = 0x00000e, .byte = 0x69 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0xfa6908, .byte = 0xa8 },
		{ .addr = 0xfa6909, .byte = 0x31 },
		{ .addr = 0xfa690a, .byte = 0xe6 },
		{ .addr = 0xfa690b, .byte = 0x6a }
};

static const SST_Transaction negl_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11707960, .data = 9396, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4404204, .data = 8798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4404200, .data = 41488, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4404202, .data = 208, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4404198, .data = 17572, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4404196, .data = 42553, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4404192, .data = 17589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 4404194, .data = 24498, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 5370, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 26888, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16410888, .data = 43057, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16410890, .data = 58986, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte negl_initial_ram_31[] = {
		{ .addr = 0x3333ec, .byte = 0x44 },
		{ .addr = 0x3333ed, .byte = 0xab },
		{ .addr = 0x3333ee, .byte = 0xd9 },
		{ .addr = 0x3333ef, .byte = 0x6a },
		{ .addr = 0x3333f0, .byte = 0xd6 },
		{ .addr = 0x3333f1, .byte = 0xf0 },
		{ .addr = 0x57f06a, .byte = 0x59 },
		{ .addr = 0x57f06b, .byte = 0x18 },
		{ .addr = 0x57f06c, .byte = 0xaf },
		{ .addr = 0x57f06d, .byte = 0xea },
		{ .addr = 0x3333f2, .byte = 0x1f },
		{ .addr = 0x3333f3, .byte = 0x62 }
};

static const SST_RamByte negl_final_ram_31[] = {
		{ .addr = 0x3333ec, .byte = 0x44 },
		{ .addr = 0x3333ed, .byte = 0xab },
		{ .addr = 0x3333ee, .byte = 0xd9 },
		{ .addr = 0x3333ef, .byte = 0x6a },
		{ .addr = 0x3333f0, .byte = 0xd6 },
		{ .addr = 0x3333f1, .byte = 0xf0 },
		{ .addr = 0x57f06a, .byte = 0xa6 },
		{ .addr = 0x57f06b, .byte = 0xe7 },
		{ .addr = 0x57f06c, .byte = 0x50 },
		{ .addr = 0x57f06d, .byte = 0x16 },
		{ .addr = 0x3333f2, .byte = 0x1f },
		{ .addr = 0x3333f3, .byte = 0x62 }
};

static const SST_Transaction negl_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3355632, .data = 55024, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5763178, .data = 22808, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5763180, .data = 45034, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3355634, .data = 8034, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5763180, .data = 20502, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5763178, .data = 42727, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_TestCase negl[] = {
	{
		.name = "000 NEG.l (d8, A6, Xn) 44b6",
		.initial = {
			.regs = {
				719086016, 3259811995, 2860197788, 2621662612, 2307160278, 3595857550, 3802541122, 3273727736, 853453440, 2727382335, 3119527772, 529205721, 182644064, 637917436, 2865619974, 10268442, 10730316, 42516, 10066980
			},
			.prefetch0 = 17590,
			.prefetch1 = 38941,
			.ram = negl_initial_ram_0,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				719086016, 3259811995, 2860197788, 2621662612, 2307160278, 3595857550, 3802541122, 3273727736, 853453440, 2727382335, 3119527772, 529205721, 182644064, 637917436, 2865619974, 10268442, 10730316, 42513, 10066984
			},
			.prefetch0 = 6101,
			.prefetch1 = 61883,
			.ram = negl_final_ram_0,
			.ram_len = 12,
		},
		.transactions = negl_transactions_0,
		.transactions_len = 7,
		.lenght = 26,
	},
	{
		.name = "001 NEG.l (d8, A5, Xn) 44b5",
		.initial = {
			.regs = {
				2135624361, 2571874990, 3582683414, 2999902400, 2965224407, 2535872853, 3726411360, 3436637216, 3889245358, 2241367483, 1518998586, 3710640076, 4095533958, 3073346883, 349609713, 2257228, 11570058, 1032, 16008498
			},
			.prefetch0 = 17589,
			.prefetch1 = 20337,
			.ram = negl_initial_ram_1,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				2135624361, 2571874990, 3582683414, 2999902400, 2965224407, 2535872853, 3726411360, 3436637216, 3889245358, 2241367483, 1518998586, 3710640076, 4095533958, 3073346883, 349609713, 2257228, 11570044, 9224, 1637747650
			},
			.prefetch0 = 58423,
			.prefetch1 = 57290,
			.ram = negl_final_ram_1,
			.ram_len = 28,
		},
		.transactions = negl_transactions_1,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "002 NEG.l (d8, A3, Xn) 44b3",
		.initial = {
			.regs = {
				1887750169, 3018609206, 602019390, 1604372999, 1049106576, 355606825, 1718567116, 2101767228, 4243849465, 1239929347, 3457373929, 994050090, 813520729, 414786546, 2753533262, 13627156, 12861842, 42014, 9931500
			},
			.prefetch0 = 17587,
			.prefetch1 = 30547,
			.ram = negl_initial_ram_2,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1887750169, 3018609206, 602019390, 1604372999, 1049106576, 355606825, 1718567116, 2101767228, 4243849465, 1239929347, 3457373929, 994050090, 813520729, 414786546, 2753533262, 13627156, 12861828, 9246, 2286174500
			},
			.prefetch0 = 58878,
			.prefetch1 = 7641,
			.ram = negl_final_ram_2,
			.ram_len = 28,
		},
		.transactions = negl_transactions_2,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "003 NEG.l -(A1) 44a1",
		.initial = {
			.regs = {
				2544176893, 3764978571, 3983738741, 3710024343, 4149812219, 3342715383, 3207731916, 3945991883, 118918807, 2631372683, 1090042060, 3024636712, 2191412532, 716983073, 907200177, 366292, 1964052, 1288, 8175402
			},
			.prefetch0 = 17569,
			.prefetch1 = 31059,
			.ram = negl_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2544176893, 3764978571, 3983738741, 3710024343, 4149812219, 3342715383, 3207731916, 3945991883, 118918807, 2631372679, 1090042060, 3024636712, 2191412532, 716983073, 907200177, 366292, 1964038, 9480, 1244816782
			},
			.prefetch0 = 24116,
			.prefetch1 = 32830,
			.ram = negl_final_ram_3,
			.ram_len = 26,
		},
		.transactions = negl_transactions_3,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "004 NEG.l (xxx).w 44b8",
		.initial = {
			.regs = {
				1328870617, 446336190, 728374727, 651490176, 591291085, 3844712108, 3874991571, 1736740034, 2020719606, 2711992169, 1043432286, 3408310746, 4056353530, 4026529297, 2587747289, 12263342, 10560886, 9217, 7863630
			},
			.prefetch0 = 17592,
			.prefetch1 = 60254,
			.ram = negl_initial_ram_4,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1328870617, 446336190, 728374727, 651490176, 591291085, 3844712108, 3874991571, 1736740034, 2020719606, 2711992169, 1043432286, 3408310746, 4056353530, 4026529297, 2587747289, 12263342, 10560886, 9233, 7863634
			},
			.prefetch0 = 49121,
			.prefetch1 = 58690,
			.ram = negl_final_ram_4,
			.ram_len = 12,
		},
		.transactions = negl_transactions_4,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "005 NEG.l (A7)+ 449f",
		.initial = {
			.regs = {
				1580007547, 422473121, 2413803425, 615492023, 2631966180, 457829973, 1944902897, 2800974588, 3081031253, 2140334209, 2449905358, 3329190673, 1757581114, 1504695323, 1844554947, 11977842, 3812006, 8731, 4946058
			},
			.prefetch0 = 17567,
			.prefetch1 = 19085,
			.ram = negl_initial_ram_5,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1580007547, 422473121, 2413803425, 615492023, 2631966180, 457829973, 1944902897, 2800974588, 3081031253, 2140334209, 2449905358, 3329190673, 1757581114, 1504695323, 1844554947, 11977842, 3812010, 8721, 4946060
			},
			.prefetch0 = 19085,
			.prefetch1 = 18129,
			.ram = negl_final_ram_5,
			.ram_len = 10,
		},
		.transactions = negl_transactions_5,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "006 NEG.l (A6)+ 449e",
		.initial = {
			.regs = {
				2050519229, 4189566975, 2397796261, 838046334, 2911599492, 189871340, 1444373086, 765132202, 2987792209, 2207191807, 620992225, 4096316431, 2909925891, 3862378007, 3236226066, 12759098, 2002416, 42525, 3532248
			},
			.prefetch0 = 17566,
			.prefetch1 = 30523,
			.ram = negl_initial_ram_6,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				2050519229, 4189566975, 2397796261, 838046334, 2911599492, 189871340, 1444373086, 765132202, 2987792209, 2207191807, 620992225, 4096316431, 2909925891, 3862378007, 3236226070, 12759098, 2002416, 42513, 3532250
			},
			.prefetch0 = 30523,
			.prefetch1 = 47425,
			.ram = negl_final_ram_6,
			.ram_len = 10,
		},
		.transactions = negl_transactions_6,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "007 NEG.l D5 4485",
		.initial = {
			.regs = {
				3072494052, 2603384579, 1222830283, 2251729855, 567760899, 1014785612, 3342781364, 3567038227, 4266499929, 3017646249, 3050262737, 374032093, 4221195889, 4154723206, 296403686, 13953444, 1895316, 8968, 559004
			},
			.prefetch0 = 17541,
			.prefetch1 = 27795,
			.ram = negl_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3072494052, 2603384579, 1222830283, 2251729855, 567760899, 3280181684, 3342781364, 3567038227, 4266499929, 3017646249, 3050262737, 374032093, 4221195889, 4154723206, 296403686, 13953444, 1895316, 8985, 559006
			},
			.prefetch0 = 27795,
			.prefetch1 = 41076,
			.ram = negl_final_ram_7,
			.ram_len = 6,
		},
		.transactions = negl_transactions_7,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "008 NEG.l -(A6) 44a6",
		.initial = {
			.regs = {
				2148722162, 4182320702, 2117431891, 3622109817, 606726568, 3772070980, 3182014813, 460245531, 559511100, 2929991092, 1915914423, 4266469105, 2124948272, 1590448055, 502209591, 454914, 4688042, 8979, 14895470
			},
			.prefetch0 = 17574,
			.prefetch1 = 58435,
			.ram = negl_initial_ram_8,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2148722162, 4182320702, 2117431891, 3622109817, 606726568, 3772070980, 3182014813, 460245531, 559511100, 2929991092, 1915914423, 4266469105, 2124948272, 1590448055, 502209587, 454914, 4688028, 8979, 2272014392
			},
			.prefetch0 = 43847,
			.prefetch1 = 40717,
			.ram = negl_final_ram_8,
			.ram_len = 26,
		},
		.transactions = negl_transactions_8,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "009 NEG.l (d16, A6) 44ae",
		.initial = {
			.regs = {
				547115024, 3974466646, 2579978405, 2591606705, 3629013495, 1126659736, 3138229972, 919768647, 727487119, 375521172, 3768687308, 1090012935, 3437062184, 129707735, 4120022596, 949850, 7740470, 1289, 3749516
			},
			.prefetch0 = 17582,
			.prefetch1 = 54943,
			.ram = negl_initial_ram_9,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				547115024, 3974466646, 2579978405, 2591606705, 3629013495, 1126659736, 3138229972, 919768647, 727487119, 375521172, 3768687308, 1090012935, 3437062184, 129707735, 4120022596, 949850, 7740456, 9481, 686169442
			},
			.prefetch0 = 57099,
			.prefetch1 = 21878,
			.ram = negl_final_ram_9,
			.ram_len = 28,
		},
		.transactions = negl_transactions_9,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "010 NEG.l (d16, A4) 44ac",
		.initial = {
			.regs = {
				3858445984, 2003266303, 1710203039, 783323884, 3317217519, 2295657906, 691324031, 2796099608, 3026209410, 3786385724, 891153478, 3125501987, 2595784483, 3154871168, 1090564061, 14857868, 16238782, 32780, 9185086
			},
			.prefetch0 = 17580,
			.prefetch1 = 4230,
			.ram = negl_initial_ram_10,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3858445984, 2003266303, 1710203039, 783323884, 3317217519, 2295657906, 691324031, 2796099608, 3026209410, 3786385724, 891153478, 3125501987, 2595784483, 3154871168, 1090564061, 14857868, 16238768, 8204, 1017010042
			},
			.prefetch0 = 39696,
			.prefetch1 = 22039,
			.ram = negl_final_ram_10,
			.ram_len = 28,
		},
		.transactions = negl_transactions_10,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "011 NEG.l D3 4483",
		.initial = {
			.regs = {
				2278233964, 987133547, 2440702418, 2150968667, 2669618248, 4157380654, 556046385, 1211909221, 3588910710, 462758030, 2221962199, 2657934202, 1483687176, 2736425488, 1295992978, 2769618, 16590612, 33812, 11833602
			},
			.prefetch0 = 17539,
			.prefetch1 = 22679,
			.ram = negl_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2278233964, 987133547, 2440702418, 2143998629, 2669618248, 4157380654, 556046385, 1211909221, 3588910710, 462758030, 2221962199, 2657934202, 1483687176, 2736425488, 1295992978, 2769618, 16590612, 33809, 11833604
			},
			.prefetch0 = 22679,
			.prefetch1 = 5085,
			.ram = negl_final_ram_11,
			.ram_len = 6,
		},
		.transactions = negl_transactions_11,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "012 NEG.l (A1)+ 4499",
		.initial = {
			.regs = {
				3719347771, 1386782745, 846472290, 1156310356, 3349785139, 1890157464, 4184362140, 245737802, 2968986504, 320276146, 3488420525, 1000578055, 2120792293, 3001252158, 2784190541, 2658972, 375628, 8729, 5673926
			},
			.prefetch0 = 17561,
			.prefetch1 = 29962,
			.ram = negl_initial_ram_12,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3719347771, 1386782745, 846472290, 1156310356, 3349785139, 1890157464, 4184362140, 245737802, 2968986504, 320276150, 3488420525, 1000578055, 2120792293, 3001252158, 2784190541, 2658972, 375628, 8729, 5673928
			},
			.prefetch0 = 29962,
			.prefetch1 = 31656,
			.ram = negl_final_ram_12,
			.ram_len = 10,
		},
		.transactions = negl_transactions_12,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "013 NEG.l -(A0) 44a0",
		.initial = {
			.regs = {
				661997050, 319268614, 3834483669, 586321152, 2238479552, 3879998126, 2437282754, 1944164389, 1465451508, 3599178637, 3876225530, 3242581951, 599012896, 1104639109, 629955468, 8990150, 5339804, 41751, 15635406
			},
			.prefetch0 = 17568,
			.prefetch1 = 41201,
			.ram = negl_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				661997050, 319268614, 3834483669, 586321152, 2238479552, 3879998126, 2437282754, 1944164389, 1465451504, 3599178637, 3876225530, 3242581951, 599012896, 1104639109, 629955468, 8990150, 5339804, 41745, 15635408
			},
			.prefetch0 = 41201,
			.prefetch1 = 9362,
			.ram = negl_final_ram_13,
			.ram_len = 10,
		},
		.transactions = negl_transactions_13,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "014 NEG.l (d8, A2, Xn) 44b2",
		.initial = {
			.regs = {
				3338244830, 1410426905, 1106530349, 2604373306, 1166065351, 2855112472, 1579915702, 2314743217, 856599579, 594763021, 3808280596, 1807760274, 2108431314, 148946709, 644014167, 4945632, 2736102, 41243, 12542018
			},
			.prefetch0 = 17586,
			.prefetch1 = 30822,
			.ram = negl_initial_ram_14,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3338244830, 1410426905, 1106530349, 2604373306, 1166065351, 2855112472, 1579915702, 2314743217, 856599579, 594763021, 3808280596, 1807760274, 2108431314, 148946709, 644014167, 4945632, 2736088, 8475, 1425184362
			},
			.prefetch0 = 59007,
			.prefetch1 = 17034,
			.ram = negl_final_ram_14,
			.ram_len = 28,
		},
		.transactions = negl_transactions_14,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "015 NEG.l (A4) 4494",
		.initial = {
			.regs = {
				2962856595, 3325265186, 4142570926, 678544982, 4010890913, 1039201666, 1271742270, 622461369, 3663212691, 3426837388, 1920776117, 1692742536, 2959064309, 2681098963, 1069663797, 12094640, 3243960, 791, 575608
			},
			.prefetch0 = 17556,
			.prefetch1 = 33967,
			.ram = negl_initial_ram_15,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2962856595, 3325265186, 4142570926, 678544982, 4010890913, 1039201666, 1271742270, 622461369, 3663212691, 3426837388, 1920776117, 1692742536, 2959064309, 2681098963, 1069663797, 12094640, 3243946, 8983, 3723369858
			},
			.prefetch0 = 29069,
			.prefetch1 = 9618,
			.ram = negl_final_ram_15,
			.ram_len = 26,
		},
		.transactions = negl_transactions_15,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "016 NEG.l (A6) 4496",
		.initial = {
			.regs = {
				3676832621, 3064002630, 2408833375, 12128785, 1663877466, 529594654, 1707154205, 3745406299, 1942963310, 1493885470, 870401414, 1726864199, 1850773545, 3923118836, 136492214, 4401526, 16233090, 3, 9115362
			},
			.prefetch0 = 17558,
			.prefetch1 = 12778,
			.ram = negl_initial_ram_16,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3676832621, 3064002630, 2408833375, 12128785, 1663877466, 529594654, 1707154205, 3745406299, 1942963310, 1493885470, 870401414, 1726864199, 1850773545, 3923118836, 136492214, 4401526, 16233090, 25, 9115364
			},
			.prefetch0 = 12778,
			.prefetch1 = 60001,
			.ram = negl_final_ram_16,
			.ram_len = 10,
		},
		.transactions = negl_transactions_16,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "017 NEG.l (d16, A6) 44ae",
		.initial = {
			.regs = {
				1011157822, 2537363798, 3946665038, 3766433301, 4043552044, 914237717, 383734466, 2281906861, 4291266894, 3951253333, 207261920, 449727854, 2656565381, 19101465, 2201505518, 13007580, 11329230, 41235, 15357784
			},
			.prefetch0 = 17582,
			.prefetch1 = 18378,
			.ram = negl_initial_ram_17,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				1011157822, 2537363798, 3946665038, 3766433301, 4043552044, 914237717, 383734466, 2281906861, 4291266894, 3951253333, 207261920, 449727854, 2656565381, 19101465, 2201505518, 13007580, 11329230, 41233, 15357788
			},
			.prefetch0 = 2940,
			.prefetch1 = 43221,
			.ram = negl_final_ram_17,
			.ram_len = 12,
		},
		.transactions = negl_transactions_17,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "018 NEG.l (A6)+ 449e",
		.initial = {
			.regs = {
				1159690641, 2735937328, 38453225, 76838118, 3717472612, 2877257609, 2242578981, 1434349697, 570941339, 2937420529, 1026112830, 3259918604, 3732283959, 74217668, 2716932046, 2326868, 4739440, 9993, 7011144
			},
			.prefetch0 = 17566,
			.prefetch1 = 41422,
			.ram = negl_initial_ram_18,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1159690641, 2735937328, 38453225, 76838118, 3717472612, 2877257609, 2242578981, 1434349697, 570941339, 2937420529, 1026112830, 3259918604, 3732283959, 74217668, 2716932050, 2326868, 4739440, 10001, 7011146
			},
			.prefetch0 = 41422,
			.prefetch1 = 40864,
			.ram = negl_final_ram_18,
			.ram_len = 10,
		},
		.transactions = negl_transactions_18,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "019 NEG.l (A2)+ 449a",
		.initial = {
			.regs = {
				3936399306, 857609597, 1306711250, 348550927, 1860365014, 2913516952, 583919027, 3775219051, 3476712199, 1376826202, 1509484341, 2299995297, 435560977, 1216409362, 2541022043, 2255638, 15723638, 9998, 7344236
			},
			.prefetch0 = 17562,
			.prefetch1 = 39276,
			.ram = negl_initial_ram_19,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3936399306, 857609597, 1306711250, 348550927, 1860365014, 2913516952, 583919027, 3775219051, 3476712199, 1376826202, 1509484341, 2299995297, 435560977, 1216409362, 2541022043, 2255638, 15723624, 9998, 1807884030
			},
			.prefetch0 = 1790,
			.prefetch1 = 42623,
			.ram = negl_final_ram_19,
			.ram_len = 26,
		},
		.transactions = negl_transactions_19,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "020 NEG.l (d16, A1) 44a9",
		.initial = {
			.regs = {
				3362564921, 767040171, 1806618873, 4209206237, 3150424207, 847120170, 795855180, 2121338314, 2242350510, 4086432482, 462682498, 2622683446, 3204030129, 3198071846, 2429180295, 12335132, 15801962, 8462, 13701662
			},
			.prefetch0 = 17577,
			.prefetch1 = 14489,
			.ram = negl_initial_ram_20,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3362564921, 767040171, 1806618873, 4209206237, 3150424207, 847120170, 795855180, 2121338314, 2242350510, 4086432482, 462682498, 2622683446, 3204030129, 3198071846, 2429180295, 12335132, 15801948, 8462, 3149828014
			},
			.prefetch0 = 42068,
			.prefetch1 = 49877,
			.ram = negl_final_ram_20,
			.ram_len = 28,
		},
		.transactions = negl_transactions_20,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "021 NEG.l (d16, A3) 44ab",
		.initial = {
			.regs = {
				2406449963, 776151006, 2898271875, 992500003, 1729555560, 837926263, 1047612947, 1899239302, 1652716982, 3948075574, 1361977723, 4143670006, 4118258416, 3972140218, 1121709319, 16741330, 12082648, 32782, 1494412
			},
			.prefetch0 = 17579,
			.prefetch1 = 38156,
			.ram = negl_initial_ram_21,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2406449963, 776151006, 2898271875, 992500003, 1729555560, 837926263, 1047612947, 1899239302, 1652716982, 3948075574, 1361977723, 4143670006, 4118258416, 3972140218, 1121709319, 16741330, 12082648, 32793, 1494416
			},
			.prefetch0 = 43135,
			.prefetch1 = 28915,
			.ram = negl_final_ram_21,
			.ram_len = 12,
		},
		.transactions = negl_transactions_21,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "022 NEG.l (A0) 4490",
		.initial = {
			.regs = {
				1199855753, 3931083057, 3592864234, 1774991497, 4239233392, 1228954901, 3115998971, 2994278891, 3120517866, 4087695849, 3768413184, 480416172, 3973180218, 2258093135, 1161472132, 4917604, 161382, 8204, 5388892
			},
			.prefetch0 = 17552,
			.prefetch1 = 30571,
			.ram = negl_initial_ram_22,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1199855753, 3931083057, 3592864234, 1774991497, 4239233392, 1228954901, 3115998971, 2994278891, 3120517866, 4087695849, 3768413184, 480416172, 3973180218, 2258093135, 1161472132, 4917604, 161382, 8209, 5388894
			},
			.prefetch0 = 30571,
			.prefetch1 = 48931,
			.ram = negl_final_ram_22,
			.ram_len = 10,
		},
		.transactions = negl_transactions_22,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "023 NEG.l (A6)+ 449e",
		.initial = {
			.regs = {
				380910535, 3920663156, 376133648, 3495927514, 2750556948, 914673890, 1725854238, 2130612040, 391739151, 1507831771, 1364294992, 2227588341, 388103912, 2192035738, 2907123519, 10752718, 12611074, 1550, 16412546
			},
			.prefetch0 = 17566,
			.prefetch1 = 49252,
			.ram = negl_initial_ram_23,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				380910535, 3920663156, 376133648, 3495927514, 2750556948, 914673890, 1725854238, 2130612040, 391739151, 1507831771, 1364294992, 2227588341, 388103912, 2192035738, 2907123519, 10752718, 12611060, 9742, 2692413476
			},
			.prefetch0 = 4211,
			.prefetch1 = 18593,
			.ram = negl_final_ram_23,
			.ram_len = 26,
		},
		.transactions = negl_transactions_23,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "024 NEG.l -(A7) 44a7",
		.initial = {
			.regs = {
				3542929673, 1971185033, 2763149612, 1434035325, 284767132, 2139433843, 1546863818, 2660286092, 4084603467, 3747697669, 3205621177, 4034490598, 367533138, 3544151441, 2041258486, 10776642, 3621494, 9743, 1330964
			},
			.prefetch0 = 17575,
			.prefetch1 = 37246,
			.ram = negl_initial_ram_24,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3542929673, 1971185033, 2763149612, 1434035325, 284767132, 2139433843, 1546863818, 2660286092, 4084603467, 3747697669, 3205621177, 4034490598, 367533138, 3544151441, 2041258486, 10776642, 3621490, 9753, 1330966
			},
			.prefetch0 = 37246,
			.prefetch1 = 50753,
			.ram = negl_final_ram_24,
			.ram_len = 10,
		},
		.transactions = negl_transactions_24,
		.transactions_len = 6,
		.lenght = 22,
	},
	{
		.name = "025 NEG.l (A7)+ 449f",
		.initial = {
			.regs = {
				3117544463, 520897302, 1446380187, 2707160300, 4166356785, 2136963588, 2868541052, 1598593225, 3417457447, 2301340244, 924830405, 2484871749, 1699479428, 300855353, 4240053115, 3496884, 10973938, 40981, 12319436
			},
			.prefetch0 = 17567,
			.prefetch1 = 48476,
			.ram = negl_initial_ram_25,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3117544463, 520897302, 1446380187, 2707160300, 4166356785, 2136963588, 2868541052, 1598593225, 3417457447, 2301340244, 924830405, 2484871749, 1699479428, 300855353, 4240053115, 3496884, 10973942, 40985, 12319438
			},
			.prefetch0 = 48476,
			.prefetch1 = 32083,
			.ram = negl_final_ram_25,
			.ram_len = 10,
		},
		.transactions = negl_transactions_25,
		.transactions_len = 5,
		.lenght = 20,
	},
	{
		.name = "026 NEG.l D2 4482",
		.initial = {
			.regs = {
				1342694629, 2848736169, 2799012629, 609874576, 1646105574, 537050767, 2052122761, 536834631, 925813919, 1613388508, 4235925126, 2255805177, 1065169196, 664609250, 3020300842, 6512618, 3573800, 32793, 8084842
			},
			.prefetch0 = 17538,
			.prefetch1 = 3534,
			.ram = negl_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1342694629, 2848736169, 1495954667, 609874576, 1646105574, 537050767, 2052122761, 536834631, 925813919, 1613388508, 4235925126, 2255805177, 1065169196, 664609250, 3020300842, 6512618, 3573800, 32785, 8084844
			},
			.prefetch0 = 3534,
			.prefetch1 = 24492,
			.ram = negl_final_ram_26,
			.ram_len = 6,
		},
		.transactions = negl_transactions_26,
		.transactions_len = 2,
		.lenght = 6,
	},
	{
		.name = "027 NEG.l (d16, A1) 44a9",
		.initial = {
			.regs = {
				4259028075, 4269546288, 912484768, 3126097043, 3843630907, 1317000259, 946547626, 1671177134, 3977355288, 4180625604, 1954104443, 195386726, 3149267597, 2100983997, 1326999531, 6037540, 1437616, 31, 7073186
			},
			.prefetch0 = 17577,
			.prefetch1 = 14956,
			.ram = negl_initial_ram_27,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				4259028075, 4269546288, 912484768, 3126097043, 3843630907, 1317000259, 946547626, 1671177134, 3977355288, 4180625604, 1954104443, 195386726, 3149267597, 2100983997, 1326999531, 6037540, 1437616, 25, 7073190
			},
			.prefetch0 = 32767,
			.prefetch1 = 16082,
			.ram = negl_final_ram_27,
			.ram_len = 12,
		},
		.transactions = negl_transactions_27,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "028 NEG.l (d16, A6) 44ae",
		.initial = {
			.regs = {
				54163702, 940205329, 4025286598, 1774521497, 1203304479, 3233076876, 1979057985, 846336827, 2023728191, 2747188098, 310896137, 1984578686, 977674282, 2843627988, 4253261262, 12778454, 10430596, 41479, 3666052
			},
			.prefetch0 = 17582,
			.prefetch1 = 39114,
			.ram = negl_initial_ram_28,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				54163702, 940205329, 4025286598, 1774521497, 1203304479, 3233076876, 1979057985, 846336827, 2023728191, 2747188098, 310896137, 1984578686, 977674282, 2843627988, 4253261262, 12778454, 10430596, 41489, 3666056
			},
			.prefetch0 = 25342,
			.prefetch1 = 7898,
			.ram = negl_final_ram_28,
			.ram_len = 12,
		},
		.transactions = negl_transactions_28,
		.transactions_len = 6,
		.lenght = 24,
	},
	{
		.name = "029 NEG.l (d16, A2) 44aa",
		.initial = {
			.regs = {
				1118315955, 1117688121, 3055961094, 1567687907, 3506488100, 4137527669, 3719579039, 758335339, 3915124932, 4153762415, 4042581253, 1411074235, 656504530, 3650706727, 3017162007, 8617154, 11332078, 33536, 16464888
			},
			.prefetch0 = 17578,
			.prefetch1 = 47196,
			.ram = negl_initial_ram_29,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				1118315955, 1117688121, 3055961094, 1567687907, 3506488100, 4137527669, 3719579039, 758335339, 3915124932, 4153762415, 4042581253, 1411074235, 656504530, 3650706727, 3017162007, 8617154, 11332064, 8960, 2876664604
			},
			.prefetch0 = 23410,
			.prefetch1 = 11819,
			.ram = negl_final_ram_29,
			.ram_len = 28,
		},
		.transactions = negl_transactions_29,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "030 NEG.l -(A4) 44a4",
		.initial = {
			.regs = {
				2243417599, 382446468, 2694904770, 2313316164, 3596886959, 2791415811, 3891040966, 1789256208, 125470587, 4266993456, 4008063729, 1455341739, 1605543485, 2310231387, 2690300034, 2952618, 4404206, 41488, 13640288
			},
			.prefetch0 = 17572,
			.prefetch1 = 6311,
			.ram = negl_initial_ram_30,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2243417599, 382446468, 2694904770, 2313316164, 3596886959, 2791415811, 3891040966, 1789256208, 125470587, 4266993456, 4008063729, 1455341739, 1605543481, 2310231387, 2690300034, 2952618, 4404192, 8720, 351955212
			},
			.prefetch0 = 43057,
			.prefetch1 = 58986,
			.ram = negl_final_ram_30,
			.ram_len = 26,
		},
		.transactions = negl_transactions_30,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "031 NEG.l (d16, A3) 44ab",
		.initial = {
			.regs = {
				3336746016, 843582822, 3191384578, 126749702, 71422592, 466550805, 655325010, 2692496679, 4077116463, 2121776056, 587936644, 1045960448, 3150997305, 3629577907, 2375511807, 10269924, 16019582, 1801, 3355632
			},
			.prefetch0 = 17579,
			.prefetch1 = 55658,
			.ram = negl_initial_ram_31,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3336746016, 843582822, 3191384578, 126749702, 71422592, 466550805, 655325010, 2692496679, 4077116463, 2121776056, 587936644, 1045960448, 3150997305, 3629577907, 2375511807, 10269924, 16019582, 1817, 3355636
			},
			.prefetch0 = 55024,
			.prefetch1 = 8034,
			.ram = negl_final_ram_31,
			.ram_len = 12,
		},
		.transactions = negl_transactions_31,
		.transactions_len = 6,
		.lenght = 24,
	},
};

#endif /* RBT_NEGL_H */