#ifndef RBT_LSRW_H
#define RBT_LSRW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte lsrw_initial_ram_0[] = {
		{ .addr = 0x77f858, .byte = 0xe8 },
		{ .addr = 0x77f859, .byte = 0x6a },
		{ .addr = 0x77f85a, .byte = 0xec },
		{ .addr = 0x77f85b, .byte = 0xf5 },
		{ .addr = 0x77f85c, .byte = 0xc5 },
		{ .addr = 0x77f85d, .byte = 0xae }
};

static const SST_RamByte lsrw_final_ram_0[] = {
		{ .addr = 0x77f858, .byte = 0xe8 },
		{ .addr = 0x77f859, .byte = 0x6a },
		{ .addr = 0x77f85a, .byte = 0xec },
		{ .addr = 0x77f85b, .byte = 0xf5 },
		{ .addr = 0x77f85c, .byte = 0xc5 },
		{ .addr = 0x77f85d, .byte = 0xae }
};

static const SST_Transaction lsrw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7862364, .data = 50606, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 68 },
};

static const SST_RamByte lsrw_initial_ram_1[] = {
		{ .addr = 0x4e7fce, .byte = 0xe2 },
		{ .addr = 0x4e7fcf, .byte = 0x4e },
		{ .addr = 0x4e7fd0, .byte = 0x5c },
		{ .addr = 0x4e7fd1, .byte = 0xc7 },
		{ .addr = 0x4e7fd2, .byte = 0xc1 },
		{ .addr = 0x4e7fd3, .byte = 0xc1 }
};

static const SST_RamByte lsrw_final_ram_1[] = {
		{ .addr = 0x4e7fce, .byte = 0xe2 },
		{ .addr = 0x4e7fcf, .byte = 0x4e },
		{ .addr = 0x4e7fd0, .byte = 0x5c },
		{ .addr = 0x4e7fd1, .byte = 0xc7 },
		{ .addr = 0x4e7fd2, .byte = 0xc1 },
		{ .addr = 0x4e7fd3, .byte = 0xc1 }
};

static const SST_Transaction lsrw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5144530, .data = 49601, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte lsrw_initial_ram_2[] = {
		{ .addr = 0x6c2988, .byte = 0xe4 },
		{ .addr = 0x6c2989, .byte = 0x6b },
		{ .addr = 0x6c298a, .byte = 0xbb },
		{ .addr = 0x6c298b, .byte = 0x5c },
		{ .addr = 0x6c298c, .byte = 0xd3 },
		{ .addr = 0x6c298d, .byte = 0xc2 }
};

static const SST_RamByte lsrw_final_ram_2[] = {
		{ .addr = 0x6c2988, .byte = 0xe4 },
		{ .addr = 0x6c2989, .byte = 0x6b },
		{ .addr = 0x6c298a, .byte = 0xbb },
		{ .addr = 0x6c298b, .byte = 0x5c },
		{ .addr = 0x6c298c, .byte = 0xd3 },
		{ .addr = 0x6c298d, .byte = 0xc2 }
};

static const SST_Transaction lsrw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7088524, .data = 54210, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

static const SST_RamByte lsrw_initial_ram_3[] = {
		{ .addr = 0xbb1814, .byte = 0xee },
		{ .addr = 0xbb1815, .byte = 0x6e },
		{ .addr = 0xbb1816, .byte = 0xcc },
		{ .addr = 0xbb1817, .byte = 0xf2 },
		{ .addr = 0xbb1818, .byte = 0xd9 },
		{ .addr = 0xbb1819, .byte = 0x91 }
};

static const SST_RamByte lsrw_final_ram_3[] = {
		{ .addr = 0xbb1814, .byte = 0xee },
		{ .addr = 0xbb1815, .byte = 0x6e },
		{ .addr = 0xbb1816, .byte = 0xcc },
		{ .addr = 0xbb1817, .byte = 0xf2 },
		{ .addr = 0xbb1818, .byte = 0xd9 },
		{ .addr = 0xbb1819, .byte = 0x91 }
};

static const SST_Transaction lsrw_transactions_3[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12261400, .data = 55697, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte lsrw_initial_ram_4[] = {
		{ .addr = 0xf50662, .byte = 0xe0 },
		{ .addr = 0xf50663, .byte = 0x6e },
		{ .addr = 0xf50664, .byte = 0xc2 },
		{ .addr = 0xf50665, .byte = 0x00 },
		{ .addr = 0xf50666, .byte = 0x4a },
		{ .addr = 0xf50667, .byte = 0xd3 }
};

static const SST_RamByte lsrw_final_ram_4[] = {
		{ .addr = 0xf50662, .byte = 0xe0 },
		{ .addr = 0xf50663, .byte = 0x6e },
		{ .addr = 0xf50664, .byte = 0xc2 },
		{ .addr = 0xf50665, .byte = 0x00 },
		{ .addr = 0xf50666, .byte = 0x4a },
		{ .addr = 0xf50667, .byte = 0xd3 }
};

static const SST_Transaction lsrw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16057958, .data = 19155, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 110 },
};

static const SST_RamByte lsrw_initial_ram_5[] = {
		{ .addr = 0x4caf06, .byte = 0xe4 },
		{ .addr = 0x4caf07, .byte = 0x6e },
		{ .addr = 0x4caf08, .byte = 0x7a },
		{ .addr = 0x4caf09, .byte = 0x25 },
		{ .addr = 0x4caf0a, .byte = 0x0c },
		{ .addr = 0x4caf0b, .byte = 0x1d }
};

static const SST_RamByte lsrw_final_ram_5[] = {
		{ .addr = 0x4caf06, .byte = 0xe4 },
		{ .addr = 0x4caf07, .byte = 0x6e },
		{ .addr = 0x4caf08, .byte = 0x7a },
		{ .addr = 0x4caf09, .byte = 0x25 },
		{ .addr = 0x4caf0a, .byte = 0x0c },
		{ .addr = 0x4caf0b, .byte = 0x1d }
};

static const SST_Transaction lsrw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5025546, .data = 3101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 52 },
};

static const SST_RamByte lsrw_initial_ram_6[] = {
		{ .addr = 0xa70378, .byte = 0xe6 },
		{ .addr = 0xa70379, .byte = 0x6c },
		{ .addr = 0xa7037a, .byte = 0x19 },
		{ .addr = 0xa7037b, .byte = 0x2d },
		{ .addr = 0xa7037c, .byte = 0x40 },
		{ .addr = 0xa7037d, .byte = 0x7e }
};

static const SST_RamByte lsrw_final_ram_6[] = {
		{ .addr = 0xa70378, .byte = 0xe6 },
		{ .addr = 0xa70379, .byte = 0x6c },
		{ .addr = 0xa7037a, .byte = 0x19 },
		{ .addr = 0xa7037b, .byte = 0x2d },
		{ .addr = 0xa7037c, .byte = 0x40 },
		{ .addr = 0xa7037d, .byte = 0x7e }
};

static const SST_Transaction lsrw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10945404, .data = 16510, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 28 },
};

static const SST_RamByte lsrw_initial_ram_7[] = {
		{ .addr = 0xfb118e, .byte = 0xe2 },
		{ .addr = 0xfb118f, .byte = 0x4b },
		{ .addr = 0xfb1190, .byte = 0x8e },
		{ .addr = 0xfb1191, .byte = 0xf5 },
		{ .addr = 0xfb1192, .byte = 0x5d },
		{ .addr = 0xfb1193, .byte = 0x12 }
};

static const SST_RamByte lsrw_final_ram_7[] = {
		{ .addr = 0xfb118e, .byte = 0xe2 },
		{ .addr = 0xfb118f, .byte = 0x4b },
		{ .addr = 0xfb1190, .byte = 0x8e },
		{ .addr = 0xfb1191, .byte = 0xf5 },
		{ .addr = 0xfb1192, .byte = 0x5d },
		{ .addr = 0xfb1193, .byte = 0x12 }
};

static const SST_Transaction lsrw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 16454034, .data = 23826, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte lsrw_initial_ram_8[] = {
		{ .addr = 0x934976, .byte = 0xea },
		{ .addr = 0x934977, .byte = 0x4f },
		{ .addr = 0x934978, .byte = 0x1b },
		{ .addr = 0x934979, .byte = 0xdb },
		{ .addr = 0x93497a, .byte = 0x05 },
		{ .addr = 0x93497b, .byte = 0x27 }
};

static const SST_RamByte lsrw_final_ram_8[] = {
		{ .addr = 0x934976, .byte = 0xea },
		{ .addr = 0x934977, .byte = 0x4f },
		{ .addr = 0x934978, .byte = 0x1b },
		{ .addr = 0x934979, .byte = 0xdb },
		{ .addr = 0x93497a, .byte = 0x05 },
		{ .addr = 0x93497b, .byte = 0x27 }
};

static const SST_Transaction lsrw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9652602, .data = 1319, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte lsrw_initial_ram_9[] = {
		{ .addr = 0x290598, .byte = 0xee },
		{ .addr = 0x290599, .byte = 0x4a },
		{ .addr = 0x29059a, .byte = 0xf2 },
		{ .addr = 0x29059b, .byte = 0x8f },
		{ .addr = 0x29059c, .byte = 0xa5 },
		{ .addr = 0x29059d, .byte = 0x81 }
};

static const SST_RamByte lsrw_final_ram_9[] = {
		{ .addr = 0x290598, .byte = 0xee },
		{ .addr = 0x290599, .byte = 0x4a },
		{ .addr = 0x29059a, .byte = 0xf2 },
		{ .addr = 0x29059b, .byte = 0x8f },
		{ .addr = 0x29059c, .byte = 0xa5 },
		{ .addr = 0x29059d, .byte = 0x81 }
};

static const SST_Transaction lsrw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 2688412, .data = 42369, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrw_initial_ram_10[] = {
		{ .addr = 0xecf82c, .byte = 0xe4 },
		{ .addr = 0xecf82d, .byte = 0x49 },
		{ .addr = 0xecf82e, .byte = 0xad },
		{ .addr = 0xecf82f, .byte = 0x53 },
		{ .addr = 0xecf830, .byte = 0x90 },
		{ .addr = 0xecf831, .byte = 0x90 }
};

static const SST_RamByte lsrw_final_ram_10[] = {
		{ .addr = 0xecf82c, .byte = 0xe4 },
		{ .addr = 0xecf82d, .byte = 0x49 },
		{ .addr = 0xecf82e, .byte = 0xad },
		{ .addr = 0xecf82f, .byte = 0x53 },
		{ .addr = 0xecf830, .byte = 0x90 },
		{ .addr = 0xecf831, .byte = 0x90 }
};

static const SST_Transaction lsrw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15530032, .data = 37008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrw_initial_ram_11[] = {
		{ .addr = 0x680bcc, .byte = 0xe4 },
		{ .addr = 0x680bcd, .byte = 0x49 },
		{ .addr = 0x680bce, .byte = 0x07 },
		{ .addr = 0x680bcf, .byte = 0xe4 },
		{ .addr = 0x680bd0, .byte = 0xe2 },
		{ .addr = 0x680bd1, .byte = 0x98 }
};

static const SST_RamByte lsrw_final_ram_11[] = {
		{ .addr = 0x680bcc, .byte = 0xe4 },
		{ .addr = 0x680bcd, .byte = 0x49 },
		{ .addr = 0x680bce, .byte = 0x07 },
		{ .addr = 0x680bcf, .byte = 0xe4 },
		{ .addr = 0x680bd0, .byte = 0xe2 },
		{ .addr = 0x680bd1, .byte = 0x98 }
};

static const SST_Transaction lsrw_transactions_11[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6818768, .data = 58008, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrw_initial_ram_12[] = {
		{ .addr = 0x2e7742, .byte = 0xe2 },
		{ .addr = 0x2e7743, .byte = 0x4a },
		{ .addr = 0x2e7744, .byte = 0x66 },
		{ .addr = 0x2e7745, .byte = 0x82 },
		{ .addr = 0x2e7746, .byte = 0x13 },
		{ .addr = 0x2e7747, .byte = 0x65 }
};

static const SST_RamByte lsrw_final_ram_12[] = {
		{ .addr = 0x2e7742, .byte = 0xe2 },
		{ .addr = 0x2e7743, .byte = 0x4a },
		{ .addr = 0x2e7744, .byte = 0x66 },
		{ .addr = 0x2e7745, .byte = 0x82 },
		{ .addr = 0x2e7746, .byte = 0x13 },
		{ .addr = 0x2e7747, .byte = 0x65 }
};

static const SST_Transaction lsrw_transactions_12[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3045190, .data = 4965, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte lsrw_initial_ram_13[] = {
		{ .addr = 0x9b0710, .byte = 0xee },
		{ .addr = 0x9b0711, .byte = 0x4f },
		{ .addr = 0x9b0712, .byte = 0x00 },
		{ .addr = 0x9b0713, .byte = 0x5a },
		{ .addr = 0x9b0714, .byte = 0xec },
		{ .addr = 0x9b0715, .byte = 0x8d }
};

static const SST_RamByte lsrw_final_ram_13[] = {
		{ .addr = 0x9b0710, .byte = 0xee },
		{ .addr = 0x9b0711, .byte = 0x4f },
		{ .addr = 0x9b0712, .byte = 0x00 },
		{ .addr = 0x9b0713, .byte = 0x5a },
		{ .addr = 0x9b0714, .byte = 0xec },
		{ .addr = 0x9b0715, .byte = 0x8d }
};

static const SST_Transaction lsrw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10159892, .data = 60557, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrw_initial_ram_14[] = {
		{ .addr = 0x3f7e2a, .byte = 0xe2 },
		{ .addr = 0x3f7e2b, .byte = 0xd3 },
		{ .addr = 0x3f7e2c, .byte = 0x97 },
		{ .addr = 0x3f7e2d, .byte = 0x30 },
		{ .addr = 0x00000c, .byte = 0x06 },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x283a34, .byte = 0x33 },
		{ .addr = 0x283a35, .byte = 0xa8 },
		{ .addr = 0x283a36, .byte = 0x34 },
		{ .addr = 0x283a37, .byte = 0xaf }
};

static const SST_RamByte lsrw_final_ram_14[] = {
		{ .addr = 0x3f7e2a, .byte = 0xe2 },
		{ .addr = 0x3f7e2b, .byte = 0xd3 },
		{ .addr = 0x3f7e2c, .byte = 0x97 },
		{ .addr = 0x3f7e2d, .byte = 0x30 },
		{ .addr = 0x5608d0, .byte = 0x7e },
		{ .addr = 0x5608d1, .byte = 0x2c },
		{ .addr = 0x5608cc, .byte = 0x83 },
		{ .addr = 0x5608cd, .byte = 0x1c },
		{ .addr = 0x5608ce, .byte = 0x00 },
		{ .addr = 0x5608cf, .byte = 0x3f },
		{ .addr = 0x5608ca, .byte = 0xe2 },
		{ .addr = 0x5608cb, .byte = 0xd3 },
		{ .addr = 0x5608c8, .byte = 0x45 },
		{ .addr = 0x5608c9, .byte = 0x59 },
		{ .addr = 0x5608c4, .byte = 0xe2 },
		{ .addr = 0x5608c5, .byte = 0xd1 },
		{ .addr = 0x5608c6, .byte = 0x03 },
		{ .addr = 0x5608c7, .byte = 0xa1 },
		{ .addr = 0x00000c, .byte = 0x06 },
		{ .addr = 0x00000d, .byte = 0x28 },
		{ .addr = 0x00000e, .byte = 0x3a },
		{ .addr = 0x00000f, .byte = 0x34 },
		{ .addr = 0x283a34, .byte = 0x33 },
		{ .addr = 0x283a35, .byte = 0xa8 },
		{ .addr = 0x283a36, .byte = 0x34 },
		{ .addr = 0x283a37, .byte = 0xaf }
};

static const SST_Transaction lsrw_transactions_14[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 10569048, .data = 63657, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5638352, .data = 32300, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5638348, .data = 33564, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5638350, .data = 63, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5638346, .data = 58067, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5638344, .data = 17753, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5638340, .data = 58065, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 5638342, .data = 929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 1576, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 14900, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2636340, .data = 13224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 2636342, .data = 13487, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lsrw_initial_ram_15[] = {
		{ .addr = 0x1d2e1a, .byte = 0xe4 },
		{ .addr = 0x1d2e1b, .byte = 0x4d },
		{ .addr = 0x1d2e1c, .byte = 0x25 },
		{ .addr = 0x1d2e1d, .byte = 0x1d },
		{ .addr = 0x1d2e1e, .byte = 0xb1 },
		{ .addr = 0x1d2e1f, .byte = 0xdb }
};

static const SST_RamByte lsrw_final_ram_15[] = {
		{ .addr = 0x1d2e1a, .byte = 0xe4 },
		{ .addr = 0x1d2e1b, .byte = 0x4d },
		{ .addr = 0x1d2e1c, .byte = 0x25 },
		{ .addr = 0x1d2e1d, .byte = 0x1d },
		{ .addr = 0x1d2e1e, .byte = 0xb1 },
		{ .addr = 0x1d2e1f, .byte = 0xdb }
};

static const SST_Transaction lsrw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1912350, .data = 45531, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

const uint32_t LSRW_TEST_COUNT = 16;
static const SST_TestCase lsrw[] = {
	{
		.name = "000 LSR.w D4, D2 e86a",
		.initial = {
			.regs = {
				3613981479, 1950888893, 1502505187, 320882185, 2422289313, 3915343000, 2255352576, 3620703378, 2446806331, 836741192, 92728229, 3595702912, 2953516710, 815619293, 926650486, 11189918, 7477314, 42264, 7862364
			},
			.prefetch0 = 59498,
			.prefetch1 = 60661,
			.ram = lsrw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3613981479, 1950888893, 1502478336, 320882185, 2422289313, 3915343000, 2255352576, 3620703378, 2446806331, 836741192, 92728229, 3595702912, 2953516710, 815619293, 926650486, 11189918, 7477314, 42244, 7862366
			},
			.prefetch0 = 60661,
			.prefetch1 = 50606,
			.ram = lsrw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_0,
		.transactions_len = 2,
		.lenght = 72,
	},
	{
		.name = "001 LSR.w 1, D6 e24e",
		.initial = {
			.regs = {
				3271205083, 2638954767, 1707709208, 1339610584, 1932660923, 1972294183, 675314138, 92962455, 1928408435, 4250577240, 2957528106, 601147322, 2620358404, 2021913579, 1557259892, 12024600, 1782020, 1054, 5144530
			},
			.prefetch0 = 57934,
			.prefetch1 = 23751,
			.ram = lsrw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3271205083, 2638954767, 1707709208, 1339610584, 1932660923, 1972294183, 675298541, 92962455, 1928408435, 4250577240, 2957528106, 601147322, 2620358404, 2021913579, 1557259892, 12024600, 1782020, 1024, 5144532
			},
			.prefetch0 = 23751,
			.prefetch1 = 49601,
			.ram = lsrw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_1,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "002 LSR.w D2, D3 e46b",
		.initial = {
			.regs = {
				3033994658, 915522549, 4184348860, 170793263, 940442031, 3852691495, 1157070072, 1354260411, 1562344920, 3842542457, 2101600425, 2469644305, 3683468103, 3276234087, 2384355066, 9310120, 16467292, 33540, 7088524
			},
			.prefetch0 = 58475,
			.prefetch1 = 47964,
			.ram = lsrw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3033994658, 915522549, 4184348860, 170786816, 940442031, 3852691495, 1157070072, 1354260411, 1562344920, 3842542457, 2101600425, 2469644305, 3683468103, 3276234087, 2384355066, 9310120, 16467292, 33540, 7088526
			},
			.prefetch0 = 47964,
			.prefetch1 = 54210,
			.ram = lsrw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_2,
		.transactions_len = 2,
		.lenght = 126,
	},
	{
		.name = "003 LSR.w D7, D6 ee6e",
		.initial = {
			.regs = {
				2761589127, 4219007150, 116253604, 840221678, 3750643893, 1928890084, 3654946759, 3749058203, 847277345, 2756617401, 256042878, 1592923751, 2591176430, 1733015776, 7133605, 14959230, 14451244, 34576, 12261400
			},
			.prefetch0 = 61038,
			.prefetch1 = 52466,
			.ram = lsrw_initial_ram_3,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2761589127, 4219007150, 116253604, 840221678, 3750643893, 1928890084, 3654942720, 3749058203, 847277345, 2756617401, 256042878, 1592923751, 2591176430, 1733015776, 7133605, 14959230, 14451244, 34564, 12261402
			},
			.prefetch0 = 52466,
			.prefetch1 = 55697,
			.ram = lsrw_final_ram_3,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_3,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "004 LSR.w D0, D6 e06e",
		.initial = {
			.regs = {
				4259172406, 3837739468, 3506797000, 3736142562, 2208961877, 383180572, 2077072159, 102922834, 2150472920, 3382787577, 3029180215, 1273537790, 3715275669, 673114836, 2704113387, 2587720, 7710736, 8980, 16057958
			},
			.prefetch0 = 57454,
			.prefetch1 = 49664,
			.ram = lsrw_initial_ram_4,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4259172406, 3837739468, 3506797000, 3736142562, 2208961877, 383180572, 2077032448, 102922834, 2150472920, 3382787577, 3029180215, 1273537790, 3715275669, 673114836, 2704113387, 2587720, 7710736, 8964, 16057960
			},
			.prefetch0 = 49664,
			.prefetch1 = 19155,
			.ram = lsrw_final_ram_4,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_4,
		.transactions_len = 2,
		.lenght = 114,
	},
	{
		.name = "005 LSR.w D2, D6 e46e",
		.initial = {
			.regs = {
				4145029765, 2781337265, 736964953, 2685693845, 44262887, 1121989977, 2219642518, 1050787555, 3181209237, 2901739859, 257950066, 2047904567, 3802628641, 1003531379, 2973099289, 9721804, 12513472, 34060, 5025546
			},
			.prefetch0 = 58478,
			.prefetch1 = 31269,
			.ram = lsrw_initial_ram_5,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4145029765, 2781337265, 736964953, 2685693845, 44262887, 1121989977, 2219638784, 1050787555, 3181209237, 2901739859, 257950066, 2047904567, 3802628641, 1003531379, 2973099289, 9721804, 12513472, 34052, 5025548
			},
			.prefetch0 = 31269,
			.prefetch1 = 3101,
			.ram = lsrw_final_ram_5,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_5,
		.transactions_len = 2,
		.lenght = 56,
	},
	{
		.name = "006 LSR.w D3, D4 e66c",
		.initial = {
			.regs = {
				1757169808, 2377533126, 3246104792, 1806517197, 1618057017, 1142112591, 1143711732, 3999046938, 1583885878, 3675380696, 637640367, 4222113839, 3486155147, 1825166860, 3792010409, 15047950, 11048742, 8213, 10945404
			},
			.prefetch0 = 58988,
			.prefetch1 = 6445,
			.ram = lsrw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1757169808, 2377533126, 3246104792, 1806517197, 1618018308, 1142112591, 1143711732, 3999046938, 1583885878, 3675380696, 637640367, 4222113839, 3486155147, 1825166860, 3792010409, 15047950, 11048742, 8209, 10945406
			},
			.prefetch0 = 6445,
			.prefetch1 = 16510,
			.ram = lsrw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_6,
		.transactions_len = 2,
		.lenght = 32,
	},
	{
		.name = "007 LSR.w 1, D3 e24b",
		.initial = {
			.regs = {
				3165131170, 1753455291, 2684594387, 3752134483, 1018457167, 1921660999, 349780991, 1901188571, 1312126862, 2630067956, 731865659, 469882029, 140922437, 3371850607, 2620631188, 12161258, 11402898, 775, 16454034
			},
			.prefetch0 = 57931,
			.prefetch1 = 36597,
			.ram = lsrw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3165131170, 1753455291, 2684594387, 3752133545, 1018457167, 1921660999, 349780991, 1901188571, 1312126862, 2630067956, 731865659, 469882029, 140922437, 3371850607, 2620631188, 12161258, 11402898, 785, 16454036
			},
			.prefetch0 = 36597,
			.prefetch1 = 23826,
			.ram = lsrw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_7,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "008 LSR.w 5, D7 ea4f",
		.initial = {
			.regs = {
				278509158, 2319799889, 741112727, 2058011364, 4021819762, 2110128144, 2153035321, 1663506613, 1244292063, 3085207564, 1794535008, 2642351176, 268549483, 1451980654, 726838541, 915874, 16494866, 1296, 9652602
			},
			.prefetch0 = 59983,
			.prefetch1 = 7131,
			.ram = lsrw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				278509158, 2319799889, 741112727, 2058011364, 4021819762, 2110128144, 2153035321, 1663500485, 1244292063, 3085207564, 1794535008, 2642351176, 268549483, 1451980654, 726838541, 915874, 16494866, 1297, 9652604
			},
			.prefetch0 = 7131,
			.prefetch1 = 1319,
			.ram = lsrw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_8,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "009 LSR.w 7, D2 ee4a",
		.initial = {
			.regs = {
				3599382194, 207325402, 4251526299, 3462534433, 291155985, 2410864039, 3575806061, 299325230, 1135742415, 1499543409, 1576970817, 564979866, 2144821441, 2265580319, 1058747443, 112254, 5830606, 33817, 2688412
			},
			.prefetch0 = 61002,
			.prefetch1 = 62095,
			.ram = lsrw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3599382194, 207325402, 4251517001, 3462534433, 291155985, 2410864039, 3575806061, 299325230, 1135742415, 1499543409, 1576970817, 564979866, 2144821441, 2265580319, 1058747443, 112254, 5830606, 33792, 2688414
			},
			.prefetch0 = 62095,
			.prefetch1 = 42369,
			.ram = lsrw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_9,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "010 LSR.w 2, D1 e449",
		.initial = {
			.regs = {
				613258578, 381116267, 118486495, 4223495707, 921288479, 3885908127, 1061602347, 1390876791, 2300449059, 2133355223, 3384429052, 2461756093, 4243549873, 3269114667, 1376021978, 8285518, 494398, 1028, 15530032
			},
			.prefetch0 = 58441,
			.prefetch1 = 44371,
			.ram = lsrw_initial_ram_10,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				613258578, 381097946, 118486495, 4223495707, 921288479, 3885908127, 1061602347, 1390876791, 2300449059, 2133355223, 3384429052, 2461756093, 4243549873, 3269114667, 1376021978, 8285518, 494398, 1041, 15530034
			},
			.prefetch0 = 44371,
			.prefetch1 = 37008,
			.ram = lsrw_final_ram_10,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_10,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "011 LSR.w 2, D1 e449",
		.initial = {
			.regs = {
				730005266, 3090066650, 2888315065, 2552748749, 3938323374, 2241823956, 1079885492, 496175343, 2984377498, 637703788, 1898001283, 2355582165, 3038466409, 1008540858, 3810386406, 6178324, 2942134, 8731, 6818768
			},
			.prefetch0 = 58441,
			.prefetch1 = 2020,
			.ram = lsrw_initial_ram_11,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				730005266, 3090033462, 2888315065, 2552748749, 3938323374, 2241823956, 1079885492, 496175343, 2984377498, 637703788, 1898001283, 2355582165, 3038466409, 1008540858, 3810386406, 6178324, 2942134, 8721, 6818770
			},
			.prefetch0 = 2020,
			.prefetch1 = 58008,
			.ram = lsrw_final_ram_11,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_11,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "012 LSR.w 1, D2 e24a",
		.initial = {
			.regs = {
				1202652438, 1970286762, 1778711033, 2091262411, 2946408874, 1288801421, 1969232712, 226233290, 1921231893, 3725547592, 2725058333, 1829963317, 4255945552, 3238286859, 2321911281, 9562148, 2149416, 41472, 3045190
			},
			.prefetch0 = 57930,
			.prefetch1 = 26242,
			.ram = lsrw_initial_ram_12,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1202652438, 1970286762, 1778679036, 2091262411, 2946408874, 1288801421, 1969232712, 226233290, 1921231893, 3725547592, 2725058333, 1829963317, 4255945552, 3238286859, 2321911281, 9562148, 2149416, 41489, 3045192
			},
			.prefetch0 = 26242,
			.prefetch1 = 4965,
			.ram = lsrw_final_ram_12,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_12,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "013 LSR.w 7, D7 ee4f",
		.initial = {
			.regs = {
				3857562715, 2292421338, 1359499374, 3859231068, 3963793401, 2819268476, 2724155249, 260341970, 1475273062, 3109123295, 177173555, 2748944200, 1249088607, 2401746179, 3942015250, 5231594, 12180366, 8210, 10159892
			},
			.prefetch0 = 61007,
			.prefetch1 = 90,
			.ram = lsrw_initial_ram_13,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3857562715, 2292421338, 1359499374, 3859231068, 3963793401, 2819268476, 2724155249, 260309249, 1475273062, 3109123295, 177173555, 2748944200, 1249088607, 2401746179, 3942015250, 5231594, 12180366, 8209, 10159894
			},
			.prefetch0 = 90,
			.prefetch1 = 60557,
			.ram = lsrw_final_ram_13,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_13,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "014 LSR.w (A3) e2d3",
		.initial = {
			.regs = {
				668798968, 909641168, 1302692275, 2887137566, 1811585501, 2348038952, 626458000, 3840327247, 1494106599, 1262006349, 2302703730, 60900697, 710016847, 540767341, 2113383650, 11925644, 5638354, 33564, 4161070
			},
			.prefetch0 = 58067,
			.prefetch1 = 38704,
			.ram = lsrw_initial_ram_14,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				668798968, 909641168, 1302692275, 2887137566, 1811585501, 2348038952, 626458000, 3840327247, 1494106599, 1262006349, 2302703730, 60900697, 710016847, 540767341, 2113383650, 11925644, 5638340, 8988, 103299640
			},
			.prefetch0 = 13224,
			.prefetch1 = 13487,
			.ram = lsrw_final_ram_14,
			.ram_len = 26,
		},
		.transactions = lsrw_transactions_14,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "015 LSR.w 2, D5 e44d",
		.initial = {
			.regs = {
				269227028, 3298012039, 2656079112, 3307467188, 3815491057, 1518460903, 2222828401, 3277172934, 2077575265, 1773742341, 3219434479, 3841422336, 2665206248, 2145017921, 3545997557, 5254592, 88318, 1560, 1912350
			},
			.prefetch0 = 58445,
			.prefetch1 = 9501,
			.ram = lsrw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				269227028, 3298012039, 2656079112, 3307467188, 3815491057, 1518417913, 2222828401, 3277172934, 2077575265, 1773742341, 3219434479, 3841422336, 2665206248, 2145017921, 3545997557, 5254592, 88318, 1553, 1912352
			},
			.prefetch0 = 9501,
			.prefetch1 = 45531,
			.ram = lsrw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_15,
		.transactions_len = 2,
		.lenght = 10,
	},
};

#endif /* RBT_LSRW_H */