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

static const SST_RamByte lsrw_initial_ram_16[] = {
		{ .addr = 0xca7fa0, .byte = 0xe2 },
		{ .addr = 0xca7fa1, .byte = 0x6f },
		{ .addr = 0xca7fa2, .byte = 0x69 },
		{ .addr = 0xca7fa3, .byte = 0x7f },
		{ .addr = 0xca7fa4, .byte = 0x9e },
		{ .addr = 0xca7fa5, .byte = 0xd2 }
};

static const SST_RamByte lsrw_final_ram_16[] = {
		{ .addr = 0xca7fa0, .byte = 0xe2 },
		{ .addr = 0xca7fa1, .byte = 0x6f },
		{ .addr = 0xca7fa2, .byte = 0x69 },
		{ .addr = 0xca7fa3, .byte = 0x7f },
		{ .addr = 0xca7fa4, .byte = 0x9e },
		{ .addr = 0xca7fa5, .byte = 0xd2 }
};

static const SST_Transaction lsrw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13270948, .data = 40658, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 94 },
};

static const SST_RamByte lsrw_initial_ram_17[] = {
		{ .addr = 0xc9c6ae, .byte = 0xe2 },
		{ .addr = 0xc9c6af, .byte = 0xf3 },
		{ .addr = 0xc9c6b0, .byte = 0xf4 },
		{ .addr = 0xc9c6b1, .byte = 0xa4 },
		{ .addr = 0xc9c6b2, .byte = 0xe8 },
		{ .addr = 0xc9c6b3, .byte = 0xb2 },
		{ .addr = 0x0afa32, .byte = 0x60 },
		{ .addr = 0x0afa33, .byte = 0xaf },
		{ .addr = 0xc9c6b4, .byte = 0x2b },
		{ .addr = 0xc9c6b5, .byte = 0xdf }
};

static const SST_RamByte lsrw_final_ram_17[] = {
		{ .addr = 0xc9c6ae, .byte = 0xe2 },
		{ .addr = 0xc9c6af, .byte = 0xf3 },
		{ .addr = 0xc9c6b0, .byte = 0xf4 },
		{ .addr = 0xc9c6b1, .byte = 0xa4 },
		{ .addr = 0xc9c6b2, .byte = 0xe8 },
		{ .addr = 0xc9c6b3, .byte = 0xb2 },
		{ .addr = 0x0afa32, .byte = 0x30 },
		{ .addr = 0x0afa33, .byte = 0x57 },
		{ .addr = 0xc9c6b4, .byte = 0x2b },
		{ .addr = 0xc9c6b5, .byte = 0xdf }
};

static const SST_Transaction lsrw_transactions_17[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13223602, .data = 59570, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 719410, .data = 24751, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13223604, .data = 11231, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 719410, .data = 12375, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lsrw_initial_ram_18[] = {
		{ .addr = 0x780a76, .byte = 0xe2 },
		{ .addr = 0x780a77, .byte = 0xf0 },
		{ .addr = 0x780a78, .byte = 0x48 },
		{ .addr = 0x780a79, .byte = 0x03 },
		{ .addr = 0x780a7a, .byte = 0x40 },
		{ .addr = 0x780a7b, .byte = 0xd7 },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0xf1 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0x96f162, .byte = 0x0b },
		{ .addr = 0x96f163, .byte = 0x17 },
		{ .addr = 0x96f164, .byte = 0x40 },
		{ .addr = 0x96f165, .byte = 0xfc }
};

static const SST_RamByte lsrw_final_ram_18[] = {
		{ .addr = 0x780a76, .byte = 0xe2 },
		{ .addr = 0x780a77, .byte = 0xf0 },
		{ .addr = 0x780a78, .byte = 0x48 },
		{ .addr = 0x780a79, .byte = 0x03 },
		{ .addr = 0x780a7a, .byte = 0x40 },
		{ .addr = 0x780a7b, .byte = 0xd7 },
		{ .addr = 0xcedb60, .byte = 0x0a },
		{ .addr = 0xcedb61, .byte = 0x78 },
		{ .addr = 0xcedb5c, .byte = 0x25 },
		{ .addr = 0xcedb5d, .byte = 0x05 },
		{ .addr = 0xcedb5e, .byte = 0x00 },
		{ .addr = 0xcedb5f, .byte = 0x78 },
		{ .addr = 0xcedb5a, .byte = 0xe2 },
		{ .addr = 0xcedb5b, .byte = 0xf0 },
		{ .addr = 0xcedb58, .byte = 0xf5 },
		{ .addr = 0xcedb59, .byte = 0x67 },
		{ .addr = 0xcedb54, .byte = 0xe2 },
		{ .addr = 0xcedb55, .byte = 0xf5 },
		{ .addr = 0xcedb56, .byte = 0x94 },
		{ .addr = 0xcedb57, .byte = 0x99 },
		{ .addr = 0x00000c, .byte = 0x19 },
		{ .addr = 0x00000d, .byte = 0x96 },
		{ .addr = 0x00000e, .byte = 0xf1 },
		{ .addr = 0x00000f, .byte = 0x62 },
		{ .addr = 0x96f162, .byte = 0x0b },
		{ .addr = 0x96f163, .byte = 0x17 },
		{ .addr = 0x96f164, .byte = 0x40 },
		{ .addr = 0x96f165, .byte = 0xfc }
};

static const SST_Transaction lsrw_transactions_18[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7867002, .data = 16599, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10089830, .data = 58116, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13556576, .data = 2680, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13556572, .data = 9477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13556574, .data = 120, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13556570, .data = 58096, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13556568, .data = 62823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13556564, .data = 58101, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13556566, .data = 38041, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 6550, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 61794, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9892194, .data = 2839, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9892196, .data = 16636, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lsrw_initial_ram_19[] = {
		{ .addr = 0xc4df26, .byte = 0xe2 },
		{ .addr = 0xc4df27, .byte = 0xeb },
		{ .addr = 0xc4df28, .byte = 0x9c },
		{ .addr = 0xc4df29, .byte = 0xc6 },
		{ .addr = 0xc4df2a, .byte = 0x59 },
		{ .addr = 0xc4df2b, .byte = 0x21 },
		{ .addr = 0x00000c, .byte = 0x59 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xec },
		{ .addr = 0x00000f, .byte = 0xee },
		{ .addr = 0x0eecee, .byte = 0xf5 },
		{ .addr = 0x0eecef, .byte = 0x99 },
		{ .addr = 0x0eecf0, .byte = 0xc1 },
		{ .addr = 0x0eecf1, .byte = 0xfa }
};

static const SST_RamByte lsrw_final_ram_19[] = {
		{ .addr = 0xc4df26, .byte = 0xe2 },
		{ .addr = 0xc4df27, .byte = 0xeb },
		{ .addr = 0xc4df28, .byte = 0x9c },
		{ .addr = 0xc4df29, .byte = 0xc6 },
		{ .addr = 0xc4df2a, .byte = 0x59 },
		{ .addr = 0xc4df2b, .byte = 0x21 },
		{ .addr = 0x6b94e8, .byte = 0xdf },
		{ .addr = 0x6b94e9, .byte = 0x28 },
		{ .addr = 0x6b94e4, .byte = 0x02 },
		{ .addr = 0x6b94e5, .byte = 0x13 },
		{ .addr = 0x6b94e6, .byte = 0x00 },
		{ .addr = 0x6b94e7, .byte = 0xc4 },
		{ .addr = 0x6b94e2, .byte = 0xe2 },
		{ .addr = 0x6b94e3, .byte = 0xeb },
		{ .addr = 0x6b94e0, .byte = 0x98 },
		{ .addr = 0x6b94e1, .byte = 0x17 },
		{ .addr = 0x6b94dc, .byte = 0xe2 },
		{ .addr = 0x6b94dd, .byte = 0xf1 },
		{ .addr = 0x6b94de, .byte = 0x1d },
		{ .addr = 0x6b94df, .byte = 0x58 },
		{ .addr = 0x00000c, .byte = 0x59 },
		{ .addr = 0x00000d, .byte = 0x0e },
		{ .addr = 0x00000e, .byte = 0xec },
		{ .addr = 0x00000f, .byte = 0xee },
		{ .addr = 0x0eecee, .byte = 0xf5 },
		{ .addr = 0x0eecef, .byte = 0x99 },
		{ .addr = 0x0eecf0, .byte = 0xc1 },
		{ .addr = 0x0eecf1, .byte = 0xfa }
};

static const SST_Transaction lsrw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12902186, .data = 22817, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 5806102, .data = 7921, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7050472, .data = 57128, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7050468, .data = 531, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7050470, .data = 196, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7050466, .data = 58091, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7050464, .data = 38935, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7050460, .data = 58097, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7050462, .data = 7512, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 22798, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 60654, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 978158, .data = 62873, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 978160, .data = 49658, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lsrw_initial_ram_20[] = {
		{ .addr = 0x67f3be, .byte = 0xe4 },
		{ .addr = 0x67f3bf, .byte = 0x4f },
		{ .addr = 0x67f3c0, .byte = 0x1f },
		{ .addr = 0x67f3c1, .byte = 0x3c },
		{ .addr = 0x67f3c2, .byte = 0x3e },
		{ .addr = 0x67f3c3, .byte = 0x5e }
};

static const SST_RamByte lsrw_final_ram_20[] = {
		{ .addr = 0x67f3be, .byte = 0xe4 },
		{ .addr = 0x67f3bf, .byte = 0x4f },
		{ .addr = 0x67f3c0, .byte = 0x1f },
		{ .addr = 0x67f3c1, .byte = 0x3c },
		{ .addr = 0x67f3c2, .byte = 0x3e },
		{ .addr = 0x67f3c3, .byte = 0x5e }
};

static const SST_Transaction lsrw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6812610, .data = 15966, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte lsrw_initial_ram_21[] = {
		{ .addr = 0x554538, .byte = 0xe2 },
		{ .addr = 0x554539, .byte = 0xdf },
		{ .addr = 0x55453a, .byte = 0x83 },
		{ .addr = 0x55453b, .byte = 0x3d },
		{ .addr = 0xb65364, .byte = 0xb4 },
		{ .addr = 0xb65365, .byte = 0xa6 },
		{ .addr = 0x55453c, .byte = 0xe8 },
		{ .addr = 0x55453d, .byte = 0x15 }
};

static const SST_RamByte lsrw_final_ram_21[] = {
		{ .addr = 0x554538, .byte = 0xe2 },
		{ .addr = 0x554539, .byte = 0xdf },
		{ .addr = 0x55453a, .byte = 0x83 },
		{ .addr = 0x55453b, .byte = 0x3d },
		{ .addr = 0xb65364, .byte = 0x5a },
		{ .addr = 0xb65365, .byte = 0x53 },
		{ .addr = 0x55453c, .byte = 0xe8 },
		{ .addr = 0x55453d, .byte = 0x15 }
};

static const SST_Transaction lsrw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11948900, .data = 46246, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5588284, .data = 59413, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11948900, .data = 23123, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lsrw_initial_ram_22[] = {
		{ .addr = 0x1ad3c2, .byte = 0xe6 },
		{ .addr = 0x1ad3c3, .byte = 0x49 },
		{ .addr = 0x1ad3c4, .byte = 0x27 },
		{ .addr = 0x1ad3c5, .byte = 0x14 },
		{ .addr = 0x1ad3c6, .byte = 0x63 },
		{ .addr = 0x1ad3c7, .byte = 0xf5 }
};

static const SST_RamByte lsrw_final_ram_22[] = {
		{ .addr = 0x1ad3c2, .byte = 0xe6 },
		{ .addr = 0x1ad3c3, .byte = 0x49 },
		{ .addr = 0x1ad3c4, .byte = 0x27 },
		{ .addr = 0x1ad3c5, .byte = 0x14 },
		{ .addr = 0x1ad3c6, .byte = 0x63 },
		{ .addr = 0x1ad3c7, .byte = 0xf5 }
};

static const SST_Transaction lsrw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1758150, .data = 25589, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte lsrw_initial_ram_23[] = {
		{ .addr = 0x9b9acc, .byte = 0xe0 },
		{ .addr = 0x9b9acd, .byte = 0x6a },
		{ .addr = 0x9b9ace, .byte = 0x22 },
		{ .addr = 0x9b9acf, .byte = 0xfa },
		{ .addr = 0x9b9ad0, .byte = 0xc9 },
		{ .addr = 0x9b9ad1, .byte = 0x22 }
};

static const SST_RamByte lsrw_final_ram_23[] = {
		{ .addr = 0x9b9acc, .byte = 0xe0 },
		{ .addr = 0x9b9acd, .byte = 0x6a },
		{ .addr = 0x9b9ace, .byte = 0x22 },
		{ .addr = 0x9b9acf, .byte = 0xfa },
		{ .addr = 0x9b9ad0, .byte = 0xc9 },
		{ .addr = 0x9b9ad1, .byte = 0x22 }
};

static const SST_Transaction lsrw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 10197712, .data = 51490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 56 },
};

static const SST_RamByte lsrw_initial_ram_24[] = {
		{ .addr = 0xb40044, .byte = 0xee },
		{ .addr = 0xb40045, .byte = 0x69 },
		{ .addr = 0xb40046, .byte = 0x27 },
		{ .addr = 0xb40047, .byte = 0xba },
		{ .addr = 0xb40048, .byte = 0x4d },
		{ .addr = 0xb40049, .byte = 0xe1 }
};

static const SST_RamByte lsrw_final_ram_24[] = {
		{ .addr = 0xb40044, .byte = 0xee },
		{ .addr = 0xb40045, .byte = 0x69 },
		{ .addr = 0xb40046, .byte = 0x27 },
		{ .addr = 0xb40047, .byte = 0xba },
		{ .addr = 0xb40048, .byte = 0x4d },
		{ .addr = 0xb40049, .byte = 0xe1 }
};

static const SST_Transaction lsrw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11796552, .data = 19937, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 78 },
};

static const SST_RamByte lsrw_initial_ram_25[] = {
		{ .addr = 0xfc0dda, .byte = 0xe8 },
		{ .addr = 0xfc0ddb, .byte = 0x69 },
		{ .addr = 0xfc0ddc, .byte = 0x01 },
		{ .addr = 0xfc0ddd, .byte = 0x85 },
		{ .addr = 0xfc0dde, .byte = 0xf8 },
		{ .addr = 0xfc0ddf, .byte = 0x1c }
};

static const SST_RamByte lsrw_final_ram_25[] = {
		{ .addr = 0xfc0dda, .byte = 0xe8 },
		{ .addr = 0xfc0ddb, .byte = 0x69 },
		{ .addr = 0xfc0ddc, .byte = 0x01 },
		{ .addr = 0xfc0ddd, .byte = 0x85 },
		{ .addr = 0xfc0dde, .byte = 0xf8 },
		{ .addr = 0xfc0ddf, .byte = 0x1c }
};

static const SST_Transaction lsrw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 16518622, .data = 63516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 82 },
};

static const SST_RamByte lsrw_initial_ram_26[] = {
		{ .addr = 0x2fcf16, .byte = 0xe8 },
		{ .addr = 0x2fcf17, .byte = 0x6c },
		{ .addr = 0x2fcf18, .byte = 0xfd },
		{ .addr = 0x2fcf19, .byte = 0x81 },
		{ .addr = 0x2fcf1a, .byte = 0xe3 },
		{ .addr = 0x2fcf1b, .byte = 0xa6 }
};

static const SST_RamByte lsrw_final_ram_26[] = {
		{ .addr = 0x2fcf16, .byte = 0xe8 },
		{ .addr = 0x2fcf17, .byte = 0x6c },
		{ .addr = 0x2fcf18, .byte = 0xfd },
		{ .addr = 0x2fcf19, .byte = 0x81 },
		{ .addr = 0x2fcf1a, .byte = 0xe3 },
		{ .addr = 0x2fcf1b, .byte = 0xa6 }
};

static const SST_Transaction lsrw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 3133210, .data = 58278, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrw_initial_ram_27[] = {
		{ .addr = 0x7ad6ea, .byte = 0xee },
		{ .addr = 0x7ad6eb, .byte = 0x4e },
		{ .addr = 0x7ad6ec, .byte = 0x58 },
		{ .addr = 0x7ad6ed, .byte = 0x5d },
		{ .addr = 0x7ad6ee, .byte = 0xab },
		{ .addr = 0x7ad6ef, .byte = 0x99 }
};

static const SST_RamByte lsrw_final_ram_27[] = {
		{ .addr = 0x7ad6ea, .byte = 0xee },
		{ .addr = 0x7ad6eb, .byte = 0x4e },
		{ .addr = 0x7ad6ec, .byte = 0x58 },
		{ .addr = 0x7ad6ed, .byte = 0x5d },
		{ .addr = 0x7ad6ee, .byte = 0xab },
		{ .addr = 0x7ad6ef, .byte = 0x99 }
};

static const SST_Transaction lsrw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8050414, .data = 43929, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte lsrw_initial_ram_28[] = {
		{ .addr = 0x695cf0, .byte = 0xee },
		{ .addr = 0x695cf1, .byte = 0x6f },
		{ .addr = 0x695cf2, .byte = 0xd1 },
		{ .addr = 0x695cf3, .byte = 0x39 },
		{ .addr = 0x695cf4, .byte = 0xcb },
		{ .addr = 0x695cf5, .byte = 0x23 }
};

static const SST_RamByte lsrw_final_ram_28[] = {
		{ .addr = 0x695cf0, .byte = 0xee },
		{ .addr = 0x695cf1, .byte = 0x6f },
		{ .addr = 0x695cf2, .byte = 0xd1 },
		{ .addr = 0x695cf3, .byte = 0x39 },
		{ .addr = 0x695cf4, .byte = 0xcb },
		{ .addr = 0x695cf5, .byte = 0x23 }
};

static const SST_Transaction lsrw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6905076, .data = 52003, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte lsrw_initial_ram_29[] = {
		{ .addr = 0xf1edee, .byte = 0xee },
		{ .addr = 0xf1edef, .byte = 0x6e },
		{ .addr = 0xf1edf0, .byte = 0xe1 },
		{ .addr = 0xf1edf1, .byte = 0xc8 },
		{ .addr = 0xf1edf2, .byte = 0xcb },
		{ .addr = 0xf1edf3, .byte = 0xff }
};

static const SST_RamByte lsrw_final_ram_29[] = {
		{ .addr = 0xf1edee, .byte = 0xee },
		{ .addr = 0xf1edef, .byte = 0x6e },
		{ .addr = 0xf1edf0, .byte = 0xe1 },
		{ .addr = 0xf1edf1, .byte = 0xc8 },
		{ .addr = 0xf1edf2, .byte = 0xcb },
		{ .addr = 0xf1edf3, .byte = 0xff }
};

static const SST_Transaction lsrw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15855090, .data = 52223, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 82 },
};

static const SST_RamByte lsrw_initial_ram_30[] = {
		{ .addr = 0x86357e, .byte = 0xe2 },
		{ .addr = 0x86357f, .byte = 0xd4 },
		{ .addr = 0x863580, .byte = 0x78 },
		{ .addr = 0x863581, .byte = 0x37 },
		{ .addr = 0x938846, .byte = 0x1f },
		{ .addr = 0x938847, .byte = 0xb3 },
		{ .addr = 0x863582, .byte = 0xc2 },
		{ .addr = 0x863583, .byte = 0xf5 }
};

static const SST_RamByte lsrw_final_ram_30[] = {
		{ .addr = 0x86357e, .byte = 0xe2 },
		{ .addr = 0x86357f, .byte = 0xd4 },
		{ .addr = 0x863580, .byte = 0x78 },
		{ .addr = 0x863581, .byte = 0x37 },
		{ .addr = 0x938846, .byte = 0x0f },
		{ .addr = 0x938847, .byte = 0xd9 },
		{ .addr = 0x863582, .byte = 0xc2 },
		{ .addr = 0x863583, .byte = 0xf5 }
};

static const SST_Transaction lsrw_transactions_30[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9668678, .data = 8115, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 8795522, .data = 49909, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 9668678, .data = 4057, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte lsrw_initial_ram_31[] = {
		{ .addr = 0x4e6fe6, .byte = 0xe0 },
		{ .addr = 0x4e6fe7, .byte = 0x68 },
		{ .addr = 0x4e6fe8, .byte = 0x92 },
		{ .addr = 0x4e6fe9, .byte = 0xe2 },
		{ .addr = 0x4e6fea, .byte = 0xbf },
		{ .addr = 0x4e6feb, .byte = 0x49 }
};

static const SST_RamByte lsrw_final_ram_31[] = {
		{ .addr = 0x4e6fe6, .byte = 0xe0 },
		{ .addr = 0x4e6fe7, .byte = 0x68 },
		{ .addr = 0x4e6fe8, .byte = 0x92 },
		{ .addr = 0x4e6fe9, .byte = 0xe2 },
		{ .addr = 0x4e6fea, .byte = 0xbf },
		{ .addr = 0x4e6feb, .byte = 0x49 }
};

static const SST_Transaction lsrw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5140458, .data = 48969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 26 },
};

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
	{
		.name = "016 LSR.w D1, D7 e26f",
		.initial = {
			.regs = {
				1022417236, 1596694318, 1686289191, 509798756, 383396524, 1235015784, 3492767330, 237264955, 3065779198, 3058745, 2960878910, 2356237143, 2070427970, 1951104661, 283021146, 9837392, 3287004, 528, 13270948
			},
			.prefetch0 = 57967,
			.prefetch1 = 27007,
			.ram = lsrw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1022417236, 1596694318, 1686289191, 509798756, 383396524, 1235015784, 3492767330, 237240320, 3065779198, 3058745, 2960878910, 2356237143, 2070427970, 1951104661, 283021146, 9837392, 3287004, 516, 13270950
			},
			.prefetch0 = 27007,
			.prefetch1 = 40658,
			.ram = lsrw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_16,
		.transactions_len = 2,
		.lenght = 98,
	},
	{
		.name = "017 LSR.w (d8, A3, Xn) e2f3",
		.initial = {
			.regs = {
				73903207, 2296840551, 2214393074, 1907935660, 2287157417, 84540911, 3758742605, 490084393, 1009585827, 287182077, 1427091030, 1795892970, 4076876055, 2573207306, 1515343660, 9556900, 9227808, 1305, 13223602
			},
			.prefetch0 = 58099,
			.prefetch1 = 62628,
			.ram = lsrw_initial_ram_17,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				73903207, 2296840551, 2214393074, 1907935660, 2287157417, 84540911, 3758742605, 490084393, 1009585827, 287182077, 1427091030, 1795892970, 4076876055, 2573207306, 1515343660, 9556900, 9227808, 1297, 13223606
			},
			.prefetch0 = 59570,
			.prefetch1 = 11231,
			.ram = lsrw_final_ram_17,
			.ram_len = 10,
		},
		.transactions = lsrw_transactions_17,
		.transactions_len = 5,
		.lenght = 18,
	},
	{
		.name = "018 LSR.w (d8, A0, Xn) e2f0",
		.initial = {
			.regs = {
				383071272, 670242704, 2667410718, 573372423, 129922139, 3187495564, 491161452, 1654499539, 2363195657, 2424622630, 4096029066, 2636356550, 3781489988, 1100813836, 3058117458, 5827976, 13556578, 9477, 7867002
			},
			.prefetch0 = 58096,
			.prefetch1 = 18435,
			.ram = lsrw_initial_ram_18,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				383071272, 670242704, 2667410718, 573372423, 129922139, 3187495564, 491161452, 1654499539, 2363195657, 2424622630, 4096029066, 2636356550, 3781489988, 1100813836, 3058117458, 5827976, 13556564, 9477, 429322598
			},
			.prefetch0 = 2839,
			.prefetch1 = 16636,
			.ram = lsrw_final_ram_18,
			.ram_len = 28,
		},
		.transactions = lsrw_transactions_18,
		.transactions_len = 16,
		.lenght = 64,
	},
	{
		.name = "019 LSR.w (d16, A3) e2eb",
		.initial = {
			.regs = {
				4026811863, 501040855, 920136511, 3739448539, 2670947740, 2634845767, 3716763833, 1995153997, 2939542319, 3436023024, 4053817108, 492370769, 3883660577, 2298071877, 3836822977, 13100348, 7050474, 531, 12902186
			},
			.prefetch0 = 58091,
			.prefetch1 = 40134,
			.ram = lsrw_initial_ram_19,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				4026811863, 501040855, 920136511, 3739448539, 2670947740, 2634845767, 3716763833, 1995153997, 2939542319, 3436023024, 4053817108, 492370769, 3883660577, 2298071877, 3836822977, 13100348, 7050460, 8723, 1494150386
			},
			.prefetch0 = 62873,
			.prefetch1 = 49658,
			.ram = lsrw_final_ram_19,
			.ram_len = 28,
		},
		.transactions = lsrw_transactions_19,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "020 LSR.w 2, D7 e44f",
		.initial = {
			.regs = {
				155617909, 1311284383, 1951370357, 3296696811, 1799905283, 2940692359, 3781060903, 2306222610, 4287502654, 2344611630, 3665846509, 2118886204, 1740699309, 1300483924, 707558373, 16310516, 13176124, 25, 6812610
			},
			.prefetch0 = 58447,
			.prefetch1 = 7996,
			.ram = lsrw_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				155617909, 1311284383, 1951370357, 3296696811, 1799905283, 2940692359, 3781060903, 2306214532, 4287502654, 2344611630, 3665846509, 2118886204, 1740699309, 1300483924, 707558373, 16310516, 13176124, 17, 6812612
			},
			.prefetch0 = 7996,
			.prefetch1 = 15966,
			.ram = lsrw_final_ram_20,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_20,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "021 LSR.w (A7)+ e2df",
		.initial = {
			.regs = {
				2021224069, 2397405976, 3059484845, 3197249348, 3183025794, 1980033519, 1104380950, 52862156, 1959265619, 3202094464, 693677897, 70635534, 2459749807, 2667201178, 1383834029, 3066456, 11948900, 9730, 5588284
			},
			.prefetch0 = 58079,
			.prefetch1 = 33597,
			.ram = lsrw_initial_ram_21,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2021224069, 2397405976, 3059484845, 3197249348, 3183025794, 1980033519, 1104380950, 52862156, 1959265619, 3202094464, 693677897, 70635534, 2459749807, 2667201178, 1383834029, 3066456, 11948902, 9728, 5588286
			},
			.prefetch0 = 33597,
			.prefetch1 = 59413,
			.ram = lsrw_final_ram_21,
			.ram_len = 8,
		},
		.transactions = lsrw_transactions_21,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "022 LSR.w 3, D1 e649",
		.initial = {
			.regs = {
				830667691, 2167156417, 3725252308, 989357242, 1439418425, 1884223270, 4184360524, 922877903, 1432012907, 3799192570, 3477462559, 3830986396, 1220146048, 4234241630, 1926383411, 11514262, 3715738, 8193, 1758150
			},
			.prefetch0 = 58953,
			.prefetch1 = 10004,
			.ram = lsrw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				830667691, 2167145944, 3725252308, 989357242, 1439418425, 1884223270, 4184360524, 922877903, 1432012907, 3799192570, 3477462559, 3830986396, 1220146048, 4234241630, 1926383411, 11514262, 3715738, 8192, 1758152
			},
			.prefetch0 = 10004,
			.prefetch1 = 25589,
			.ram = lsrw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_22,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "023 LSR.w D0, D2 e06a",
		.initial = {
			.regs = {
				3914904539, 2423160244, 2985346874, 3556593455, 3073541691, 3726412215, 3631852209, 298040455, 1543380318, 805731110, 84883423, 1234425177, 3655125813, 3527956879, 1349393231, 4331484, 9578868, 8218, 10197712
			},
			.prefetch0 = 57450,
			.prefetch1 = 8954,
			.ram = lsrw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3914904539, 2423160244, 2985295872, 3556593455, 3073541691, 3726412215, 3631852209, 298040455, 1543380318, 805731110, 84883423, 1234425177, 3655125813, 3527956879, 1349393231, 4331484, 9578868, 8196, 10197714
			},
			.prefetch0 = 8954,
			.prefetch1 = 51490,
			.ram = lsrw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_23,
		.transactions_len = 2,
		.lenght = 60,
	},
	{
		.name = "024 LSR.w D7, D1 ee69",
		.initial = {
			.regs = {
				2765755005, 3320271258, 1845601196, 2581147991, 3460984403, 2977081347, 2941302012, 2076561254, 1637835209, 2807467326, 4066511759, 4189496677, 1198429504, 1131392683, 3830203913, 8421412, 6515688, 34576, 11796552
			},
			.prefetch0 = 61033,
			.prefetch1 = 10170,
			.ram = lsrw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2765755005, 3320250368, 1845601196, 2581147991, 3460984403, 2977081347, 2941302012, 2076561254, 1637835209, 2807467326, 4066511759, 4189496677, 1198429504, 1131392683, 3830203913, 8421412, 6515688, 34564, 11796554
			},
			.prefetch0 = 10170,
			.prefetch1 = 19937,
			.ram = lsrw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_24,
		.transactions_len = 2,
		.lenght = 82,
	},
	{
		.name = "025 LSR.w D4, D1 e869",
		.initial = {
			.regs = {
				1344630730, 3180674914, 1024726910, 3451536672, 2703879208, 3837321611, 1871179796, 265371718, 167291738, 3602577746, 470885232, 686273122, 521808832, 1284743353, 3141472075, 1409212, 13355118, 41491, 16518622
			},
			.prefetch0 = 59497,
			.prefetch1 = 389,
			.ram = lsrw_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1344630730, 3180658688, 1024726910, 3451536672, 2703879208, 3837321611, 1871179796, 265371718, 167291738, 3602577746, 470885232, 686273122, 521808832, 1284743353, 3141472075, 1409212, 13355118, 41476, 16518624
			},
			.prefetch0 = 389,
			.prefetch1 = 63516,
			.ram = lsrw_final_ram_25,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_25,
		.transactions_len = 2,
		.lenght = 86,
	},
	{
		.name = "026 LSR.w D4, D4 e86c",
		.initial = {
			.regs = {
				1575477710, 93727517, 4166411401, 1001257818, 3881475655, 145110552, 2636780323, 1542786073, 3236491811, 3979153084, 2936033035, 1915130313, 1869578788, 1540662383, 426294819, 4520108, 14783926, 34056, 3133210
			},
			.prefetch0 = 59500,
			.prefetch1 = 64897,
			.ram = lsrw_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1575477710, 93727517, 4166411401, 1001257818, 3881435452, 145110552, 2636780323, 1542786073, 3236491811, 3979153084, 2936033035, 1915130313, 1869578788, 1540662383, 426294819, 4520108, 14783926, 34065, 3133212
			},
			.prefetch0 = 64897,
			.prefetch1 = 58278,
			.ram = lsrw_final_ram_26,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_26,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "027 LSR.w 7, D6 ee4e",
		.initial = {
			.regs = {
				3822455218, 3546609017, 4228605186, 1495689960, 583335603, 1323138432, 2802863270, 3918725361, 1087237941, 2222526267, 1880644469, 41524804, 829573718, 3944127707, 474393243, 6218576, 13312280, 42511, 8050414
			},
			.prefetch0 = 61006,
			.prefetch1 = 22621,
			.ram = lsrw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3822455218, 3546609017, 4228605186, 1495689960, 583335603, 1323138432, 2802843801, 3918725361, 1087237941, 2222526267, 1880644469, 41524804, 829573718, 3944127707, 474393243, 6218576, 13312280, 42496, 8050416
			},
			.prefetch0 = 22621,
			.prefetch1 = 43929,
			.ram = lsrw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_27,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "028 LSR.w D7, D7 ee6f",
		.initial = {
			.regs = {
				3447062138, 375340143, 1676435091, 881874156, 3699421990, 3163443150, 1375501623, 3217137476, 4235146928, 1095828719, 1925368051, 391375726, 915783577, 2912254787, 2528542197, 14573592, 3951748, 10009, 6905076
			},
			.prefetch0 = 61039,
			.prefetch1 = 53561,
			.ram = lsrw_initial_ram_28,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3447062138, 375340143, 1676435091, 881874156, 3699421990, 3163443150, 1375501623, 3217099252, 4235146928, 1095828719, 1925368051, 391375726, 915783577, 2912254787, 2528542197, 14573592, 3951748, 9984, 6905078
			},
			.prefetch0 = 53561,
			.prefetch1 = 52003,
			.ram = lsrw_final_ram_28,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_28,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "029 LSR.w D7, D6 ee6e",
		.initial = {
			.regs = {
				1587540460, 2010569023, 1242418848, 3543967426, 3802228354, 702726307, 922608278, 2138876712, 2528587439, 3066917729, 638056042, 202908926, 1574067676, 856529747, 208055827, 3753070, 7516656, 41218, 15855090
			},
			.prefetch0 = 61038,
			.prefetch1 = 57800,
			.ram = lsrw_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1587540460, 2010569023, 1242418848, 3543967426, 3802228354, 702726307, 922550272, 2138876712, 2528587439, 3066917729, 638056042, 202908926, 1574067676, 856529747, 208055827, 3753070, 7516656, 41220, 15855092
			},
			.prefetch0 = 57800,
			.prefetch1 = 52223,
			.ram = lsrw_final_ram_29,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_29,
		.transactions_len = 2,
		.lenght = 86,
	},
	{
		.name = "030 LSR.w (A4) e2d4",
		.initial = {
			.regs = {
				1417272437, 1667430940, 2887614456, 3132385932, 3389753200, 2155441162, 4148498870, 600542184, 1081534381, 356836053, 2430005811, 3433599633, 3868428358, 537878598, 2240567154, 15595750, 12823314, 42782, 8795522
			},
			.prefetch0 = 58068,
			.prefetch1 = 30775,
			.ram = lsrw_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				1417272437, 1667430940, 2887614456, 3132385932, 3389753200, 2155441162, 4148498870, 600542184, 1081534381, 356836053, 2430005811, 3433599633, 3868428358, 537878598, 2240567154, 15595750, 12823314, 42769, 8795524
			},
			.prefetch0 = 30775,
			.prefetch1 = 49909,
			.ram = lsrw_final_ram_30,
			.ram_len = 8,
		},
		.transactions = lsrw_transactions_30,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "031 LSR.w D0, D0 e068",
		.initial = {
			.regs = {
				3621122828, 1985421434, 1592477554, 4233836594, 184197220, 3792727803, 214118479, 1674131252, 1548995216, 926349098, 1727081572, 324373068, 3452255783, 3045455373, 3558247411, 1192402, 11244918, 40962, 5140458
			},
			.prefetch0 = 57448,
			.prefetch1 = 37602,
			.ram = lsrw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3621060623, 1985421434, 1592477554, 4233836594, 184197220, 3792727803, 214118479, 1674131252, 1548995216, 926349098, 1727081572, 324373068, 3452255783, 3045455373, 3558247411, 1192402, 11244918, 40960, 5140460
			},
			.prefetch0 = 37602,
			.prefetch1 = 48969,
			.ram = lsrw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = lsrw_transactions_31,
		.transactions_len = 2,
		.lenght = 30,
	},
};

#endif /* RBT_LSRW_H */