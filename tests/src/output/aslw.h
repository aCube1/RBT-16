#ifndef RBT_ASLW_H
#define RBT_ASLW_H

#include <stddef.h>
#include <stdint.h>

/* Requires SST_* type definitions included before this header */

static const SST_RamByte aslw_initial_ram_0[] = {
		{ .addr = 0x513d80, .byte = 0xeb },
		{ .addr = 0x513d81, .byte = 0x60 },
		{ .addr = 0x513d82, .byte = 0x86 },
		{ .addr = 0x513d83, .byte = 0xfe },
		{ .addr = 0x513d84, .byte = 0x99 },
		{ .addr = 0x513d85, .byte = 0x1f }
};

static const SST_RamByte aslw_final_ram_0[] = {
		{ .addr = 0x513d80, .byte = 0xeb },
		{ .addr = 0x513d81, .byte = 0x60 },
		{ .addr = 0x513d82, .byte = 0x86 },
		{ .addr = 0x513d83, .byte = 0xfe },
		{ .addr = 0x513d84, .byte = 0x99 },
		{ .addr = 0x513d85, .byte = 0x1f }
};

static const SST_Transaction aslw_transactions_0[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5324164, .data = 39199, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 60 },
};

static const SST_RamByte aslw_initial_ram_1[] = {
		{ .addr = 0x8ff430, .byte = 0xed },
		{ .addr = 0x8ff431, .byte = 0x65 },
		{ .addr = 0x8ff432, .byte = 0xd5 },
		{ .addr = 0x8ff433, .byte = 0xd3 },
		{ .addr = 0x8ff434, .byte = 0xd5 },
		{ .addr = 0x8ff435, .byte = 0xfc }
};

static const SST_RamByte aslw_final_ram_1[] = {
		{ .addr = 0x8ff430, .byte = 0xed },
		{ .addr = 0x8ff431, .byte = 0x65 },
		{ .addr = 0x8ff432, .byte = 0xd5 },
		{ .addr = 0x8ff433, .byte = 0xd3 },
		{ .addr = 0x8ff434, .byte = 0xd5 },
		{ .addr = 0x8ff435, .byte = 0xfc }
};

static const SST_Transaction aslw_transactions_1[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9434164, .data = 54780, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 12 },
};

static const SST_RamByte aslw_initial_ram_2[] = {
		{ .addr = 0x6cddfa, .byte = 0xeb },
		{ .addr = 0x6cddfb, .byte = 0x63 },
		{ .addr = 0x6cddfc, .byte = 0xea },
		{ .addr = 0x6cddfd, .byte = 0x9e },
		{ .addr = 0x6cddfe, .byte = 0xe5 },
		{ .addr = 0x6cddff, .byte = 0x5a }
};

static const SST_RamByte aslw_final_ram_2[] = {
		{ .addr = 0x6cddfa, .byte = 0xeb },
		{ .addr = 0x6cddfb, .byte = 0x63 },
		{ .addr = 0x6cddfc, .byte = 0xea },
		{ .addr = 0x6cddfd, .byte = 0x9e },
		{ .addr = 0x6cddfe, .byte = 0xe5 },
		{ .addr = 0x6cddff, .byte = 0x5a }
};

static const SST_Transaction aslw_transactions_2[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 7134718, .data = 58714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 80 },
};

static const SST_RamByte aslw_initial_ram_3[] = {
		{ .addr = 0x634cbe, .byte = 0xe1 },
		{ .addr = 0x634cbf, .byte = 0xdc },
		{ .addr = 0x634cc0, .byte = 0x93 },
		{ .addr = 0x634cc1, .byte = 0xa0 },
		{ .addr = 0x00000c, .byte = 0xc3 },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0xad },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x8aad90, .byte = 0xcf },
		{ .addr = 0x8aad91, .byte = 0x1d },
		{ .addr = 0x8aad92, .byte = 0xdb },
		{ .addr = 0x8aad93, .byte = 0x4d }
};

static const SST_RamByte aslw_final_ram_3[] = {
		{ .addr = 0x634cbe, .byte = 0xe1 },
		{ .addr = 0x634cbf, .byte = 0xdc },
		{ .addr = 0x634cc0, .byte = 0x93 },
		{ .addr = 0x634cc1, .byte = 0xa0 },
		{ .addr = 0x7807be, .byte = 0x4c },
		{ .addr = 0x7807bf, .byte = 0xc0 },
		{ .addr = 0x7807ba, .byte = 0x23 },
		{ .addr = 0x7807bb, .byte = 0x09 },
		{ .addr = 0x7807bc, .byte = 0x00 },
		{ .addr = 0x7807bd, .byte = 0x63 },
		{ .addr = 0x7807b8, .byte = 0xe1 },
		{ .addr = 0x7807b9, .byte = 0xdc },
		{ .addr = 0x7807b6, .byte = 0xdf },
		{ .addr = 0x7807b7, .byte = 0xa5 },
		{ .addr = 0x7807b2, .byte = 0xe1 },
		{ .addr = 0x7807b3, .byte = 0xd5 },
		{ .addr = 0x7807b4, .byte = 0x28 },
		{ .addr = 0x7807b5, .byte = 0xd0 },
		{ .addr = 0x00000c, .byte = 0xc3 },
		{ .addr = 0x00000d, .byte = 0x8a },
		{ .addr = 0x00000e, .byte = 0xad },
		{ .addr = 0x00000f, .byte = 0x90 },
		{ .addr = 0x8aad90, .byte = 0xcf },
		{ .addr = 0x8aad91, .byte = 0x1d },
		{ .addr = 0x8aad92, .byte = 0xdb },
		{ .addr = 0x8aad93, .byte = 0x4d }
};

static const SST_Transaction aslw_transactions_3[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13688740, .data = 44233, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7866302, .data = 19648, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7866298, .data = 8969, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7866300, .data = 99, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7866296, .data = 57820, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7866294, .data = 57253, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7866290, .data = 57813, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 7866292, .data = 10448, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 50058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 44432, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9088400, .data = 53021, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9088402, .data = 56141, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_4[] = {
		{ .addr = 0xe39fc2, .byte = 0xe1 },
		{ .addr = 0xe39fc3, .byte = 0xd0 },
		{ .addr = 0xe39fc4, .byte = 0xd0 },
		{ .addr = 0xe39fc5, .byte = 0x40 },
		{ .addr = 0xc5130e, .byte = 0x56 },
		{ .addr = 0xc5130f, .byte = 0x3e },
		{ .addr = 0xe39fc6, .byte = 0x30 },
		{ .addr = 0xe39fc7, .byte = 0x3b }
};

static const SST_RamByte aslw_final_ram_4[] = {
		{ .addr = 0xe39fc2, .byte = 0xe1 },
		{ .addr = 0xe39fc3, .byte = 0xd0 },
		{ .addr = 0xe39fc4, .byte = 0xd0 },
		{ .addr = 0xe39fc5, .byte = 0x40 },
		{ .addr = 0xc5130e, .byte = 0xac },
		{ .addr = 0xc5130f, .byte = 0x7c },
		{ .addr = 0xe39fc6, .byte = 0x30 },
		{ .addr = 0xe39fc7, .byte = 0x3b }
};

static const SST_Transaction aslw_transactions_4[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12915470, .data = 22078, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 14917574, .data = 12347, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12915470, .data = 44156, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_5[] = {
		{ .addr = 0x4df17c, .byte = 0xe1 },
		{ .addr = 0x4df17d, .byte = 0xe8 },
		{ .addr = 0x4df17e, .byte = 0x9b },
		{ .addr = 0x4df17f, .byte = 0xcb },
		{ .addr = 0x4df180, .byte = 0x3f },
		{ .addr = 0x4df181, .byte = 0x18 },
		{ .addr = 0x00000c, .byte = 0x49 },
		{ .addr = 0x00000d, .byte = 0x4e },
		{ .addr = 0x00000e, .byte = 0x63 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x4e63d0, .byte = 0xec },
		{ .addr = 0x4e63d1, .byte = 0x64 },
		{ .addr = 0x4e63d2, .byte = 0x0f },
		{ .addr = 0x4e63d3, .byte = 0x84 }
};

static const SST_RamByte aslw_final_ram_5[] = {
		{ .addr = 0x4df17c, .byte = 0xe1 },
		{ .addr = 0x4df17d, .byte = 0xe8 },
		{ .addr = 0x4df17e, .byte = 0x9b },
		{ .addr = 0x4df17f, .byte = 0xcb },
		{ .addr = 0x4df180, .byte = 0x3f },
		{ .addr = 0x4df181, .byte = 0x18 },
		{ .addr = 0x01677c, .byte = 0xf1 },
		{ .addr = 0x01677d, .byte = 0x7e },
		{ .addr = 0x016778, .byte = 0xa5 },
		{ .addr = 0x016779, .byte = 0x16 },
		{ .addr = 0x01677a, .byte = 0x00 },
		{ .addr = 0x01677b, .byte = 0x4d },
		{ .addr = 0x016776, .byte = 0xe1 },
		{ .addr = 0x016777, .byte = 0xe8 },
		{ .addr = 0x016774, .byte = 0x64 },
		{ .addr = 0x016775, .byte = 0xdf },
		{ .addr = 0x016770, .byte = 0xe1 },
		{ .addr = 0x016771, .byte = 0xf5 },
		{ .addr = 0x016772, .byte = 0x33 },
		{ .addr = 0x016773, .byte = 0xfa },
		{ .addr = 0x00000c, .byte = 0x49 },
		{ .addr = 0x00000d, .byte = 0x4e },
		{ .addr = 0x00000e, .byte = 0x63 },
		{ .addr = 0x00000f, .byte = 0xd0 },
		{ .addr = 0x4e63d0, .byte = 0xec },
		{ .addr = 0x4e63d1, .byte = 0x64 },
		{ .addr = 0x4e63d2, .byte = 0x0f },
		{ .addr = 0x4e63d3, .byte = 0x84 }
};

static const SST_Transaction aslw_transactions_5[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5108096, .data = 16152, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 16409822, .data = 8960, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 92028, .data = 61822, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 92024, .data = 42262, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 92026, .data = 77, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 92022, .data = 57832, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 92020, .data = 25823, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 92016, .data = 57845, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 92018, .data = 13306, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 18766, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 25552, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5137360, .data = 60516, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5137362, .data = 3972, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_6[] = {
		{ .addr = 0xe92cec, .byte = 0xe1 },
		{ .addr = 0xe92ced, .byte = 0x63 },
		{ .addr = 0xe92cee, .byte = 0x3b },
		{ .addr = 0xe92cef, .byte = 0xdf },
		{ .addr = 0xe92cf0, .byte = 0xe9 },
		{ .addr = 0xe92cf1, .byte = 0xd6 }
};

static const SST_RamByte aslw_final_ram_6[] = {
		{ .addr = 0xe92cec, .byte = 0xe1 },
		{ .addr = 0xe92ced, .byte = 0x63 },
		{ .addr = 0xe92cee, .byte = 0x3b },
		{ .addr = 0xe92cef, .byte = 0xdf },
		{ .addr = 0xe92cf0, .byte = 0xe9 },
		{ .addr = 0xe92cf1, .byte = 0xd6 }
};

static const SST_Transaction aslw_transactions_6[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15281392, .data = 59862, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 60 },
};

static const SST_RamByte aslw_initial_ram_7[] = {
		{ .addr = 0xe7dc0c, .byte = 0xed },
		{ .addr = 0xe7dc0d, .byte = 0x66 },
		{ .addr = 0xe7dc0e, .byte = 0x71 },
		{ .addr = 0xe7dc0f, .byte = 0xc8 },
		{ .addr = 0xe7dc10, .byte = 0x76 },
		{ .addr = 0xe7dc11, .byte = 0xec }
};

static const SST_RamByte aslw_final_ram_7[] = {
		{ .addr = 0xe7dc0c, .byte = 0xed },
		{ .addr = 0xe7dc0d, .byte = 0x66 },
		{ .addr = 0xe7dc0e, .byte = 0x71 },
		{ .addr = 0xe7dc0f, .byte = 0xc8 },
		{ .addr = 0xe7dc10, .byte = 0x76 },
		{ .addr = 0xe7dc11, .byte = 0xec }
};

static const SST_Transaction aslw_transactions_7[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15195152, .data = 30444, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 116 },
};

static const SST_RamByte aslw_initial_ram_8[] = {
		{ .addr = 0xe83244, .byte = 0xe3 },
		{ .addr = 0xe83245, .byte = 0x65 },
		{ .addr = 0xe83246, .byte = 0x59 },
		{ .addr = 0xe83247, .byte = 0xb0 },
		{ .addr = 0xe83248, .byte = 0xd0 },
		{ .addr = 0xe83249, .byte = 0x49 }
};

static const SST_RamByte aslw_final_ram_8[] = {
		{ .addr = 0xe83244, .byte = 0xe3 },
		{ .addr = 0xe83245, .byte = 0x65 },
		{ .addr = 0xe83246, .byte = 0x59 },
		{ .addr = 0xe83247, .byte = 0xb0 },
		{ .addr = 0xe83248, .byte = 0xd0 },
		{ .addr = 0xe83249, .byte = 0x49 }
};

static const SST_Transaction aslw_transactions_8[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 15217224, .data = 53321, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 122 },
};

static const SST_RamByte aslw_initial_ram_9[] = {
		{ .addr = 0x53d3e0, .byte = 0xe7 },
		{ .addr = 0x53d3e1, .byte = 0x67 },
		{ .addr = 0x53d3e2, .byte = 0x9c },
		{ .addr = 0x53d3e3, .byte = 0xa9 },
		{ .addr = 0x53d3e4, .byte = 0x8d },
		{ .addr = 0x53d3e5, .byte = 0xe5 }
};

static const SST_RamByte aslw_final_ram_9[] = {
		{ .addr = 0x53d3e0, .byte = 0xe7 },
		{ .addr = 0x53d3e1, .byte = 0x67 },
		{ .addr = 0x53d3e2, .byte = 0x9c },
		{ .addr = 0x53d3e3, .byte = 0xa9 },
		{ .addr = 0x53d3e4, .byte = 0x8d },
		{ .addr = 0x53d3e5, .byte = 0xe5 }
};

static const SST_Transaction aslw_transactions_9[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 5493732, .data = 36325, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 96 },
};

static const SST_RamByte aslw_initial_ram_10[] = {
		{ .addr = 0xe18bc0, .byte = 0xe1 },
		{ .addr = 0xe18bc1, .byte = 0xd2 },
		{ .addr = 0xe18bc2, .byte = 0x16 },
		{ .addr = 0xe18bc3, .byte = 0xbc },
		{ .addr = 0x32ecf6, .byte = 0xfe },
		{ .addr = 0x32ecf7, .byte = 0x1d },
		{ .addr = 0xe18bc4, .byte = 0xa5 },
		{ .addr = 0xe18bc5, .byte = 0x75 }
};

static const SST_RamByte aslw_final_ram_10[] = {
		{ .addr = 0xe18bc0, .byte = 0xe1 },
		{ .addr = 0xe18bc1, .byte = 0xd2 },
		{ .addr = 0xe18bc2, .byte = 0x16 },
		{ .addr = 0xe18bc3, .byte = 0xbc },
		{ .addr = 0x32ecf6, .byte = 0xfc },
		{ .addr = 0x32ecf7, .byte = 0x3a },
		{ .addr = 0xe18bc4, .byte = 0xa5 },
		{ .addr = 0xe18bc5, .byte = 0x75 }
};

static const SST_Transaction aslw_transactions_10[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3337462, .data = 65053, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14781380, .data = 42357, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 3337462, .data = 64570, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_11[] = {
		{ .addr = 0xe0499c, .byte = 0xe1 },
		{ .addr = 0xe0499d, .byte = 0xe0 },
		{ .addr = 0xe0499e, .byte = 0x96 },
		{ .addr = 0xe0499f, .byte = 0xd2 },
		{ .addr = 0x00000c, .byte = 0xbe },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x4a977a, .byte = 0xcf },
		{ .addr = 0x4a977b, .byte = 0x4c },
		{ .addr = 0x4a977c, .byte = 0x96 },
		{ .addr = 0x4a977d, .byte = 0x0c }
};

static const SST_RamByte aslw_final_ram_11[] = {
		{ .addr = 0xe0499c, .byte = 0xe1 },
		{ .addr = 0xe0499d, .byte = 0xe0 },
		{ .addr = 0xe0499e, .byte = 0x96 },
		{ .addr = 0xe0499f, .byte = 0xd2 },
		{ .addr = 0x991312, .byte = 0x49 },
		{ .addr = 0x991313, .byte = 0xa0 },
		{ .addr = 0x99130e, .byte = 0xa1 },
		{ .addr = 0x99130f, .byte = 0x03 },
		{ .addr = 0x991310, .byte = 0x00 },
		{ .addr = 0x991311, .byte = 0xe0 },
		{ .addr = 0x99130c, .byte = 0xe1 },
		{ .addr = 0x99130d, .byte = 0xe0 },
		{ .addr = 0x99130a, .byte = 0x90 },
		{ .addr = 0x99130b, .byte = 0xe5 },
		{ .addr = 0x991306, .byte = 0xe1 },
		{ .addr = 0x991307, .byte = 0xf5 },
		{ .addr = 0x991308, .byte = 0xb2 },
		{ .addr = 0x991309, .byte = 0xc9 },
		{ .addr = 0x00000c, .byte = 0xbe },
		{ .addr = 0x00000d, .byte = 0x4a },
		{ .addr = 0x00000e, .byte = 0x97 },
		{ .addr = 0x00000f, .byte = 0x7a },
		{ .addr = 0x4a977a, .byte = 0xcf },
		{ .addr = 0x4a977b, .byte = 0x4c },
		{ .addr = 0x4a977c, .byte = 0x96 },
		{ .addr = 0x4a977d, .byte = 0x0c }
};

static const SST_Transaction aslw_transactions_11[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13209828, .data = 6346, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10031890, .data = 18848, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10031886, .data = 41219, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10031888, .data = 224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10031884, .data = 57824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10031882, .data = 37093, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10031878, .data = 57845, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 10031880, .data = 45769, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 48714, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 38778, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4888442, .data = 53068, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4888444, .data = 38412, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_12[] = {
		{ .addr = 0xa45434, .byte = 0xe1 },
		{ .addr = 0xa45435, .byte = 0xd1 },
		{ .addr = 0xa45436, .byte = 0x49 },
		{ .addr = 0xa45437, .byte = 0x06 },
		{ .addr = 0x00000c, .byte = 0x3f },
		{ .addr = 0x00000d, .byte = 0x36 },
		{ .addr = 0x00000e, .byte = 0xab },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x36abba, .byte = 0xd2 },
		{ .addr = 0x36abbb, .byte = 0xf3 },
		{ .addr = 0x36abbc, .byte = 0xce },
		{ .addr = 0x36abbd, .byte = 0xa2 }
};

static const SST_RamByte aslw_final_ram_12[] = {
		{ .addr = 0xa45434, .byte = 0xe1 },
		{ .addr = 0xa45435, .byte = 0xd1 },
		{ .addr = 0xa45436, .byte = 0x49 },
		{ .addr = 0xa45437, .byte = 0x06 },
		{ .addr = 0xcbead0, .byte = 0x54 },
		{ .addr = 0xcbead1, .byte = 0x36 },
		{ .addr = 0xcbeacc, .byte = 0x04 },
		{ .addr = 0xcbeacd, .byte = 0x1f },
		{ .addr = 0xcbeace, .byte = 0x00 },
		{ .addr = 0xcbeacf, .byte = 0xa4 },
		{ .addr = 0xcbeaca, .byte = 0xe1 },
		{ .addr = 0xcbeacb, .byte = 0xd1 },
		{ .addr = 0xcbeac8, .byte = 0xc6 },
		{ .addr = 0xcbeac9, .byte = 0x1d },
		{ .addr = 0xcbeac4, .byte = 0xe1 },
		{ .addr = 0xcbeac5, .byte = 0xd1 },
		{ .addr = 0xcbeac6, .byte = 0x75 },
		{ .addr = 0xcbeac7, .byte = 0xf5 },
		{ .addr = 0x00000c, .byte = 0x3f },
		{ .addr = 0x00000d, .byte = 0x36 },
		{ .addr = 0x00000e, .byte = 0xab },
		{ .addr = 0x00000f, .byte = 0xba },
		{ .addr = 0x36abba, .byte = 0xd2 },
		{ .addr = 0x36abbb, .byte = 0xf3 },
		{ .addr = 0x36abbc, .byte = 0xce },
		{ .addr = 0x36abbd, .byte = 0xa2 }
};

static const SST_Transaction aslw_transactions_12[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 16107036, .data = 56390, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13363920, .data = 21558, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13363916, .data = 1055, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13363918, .data = 164, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13363914, .data = 57809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13363912, .data = 50717, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13363908, .data = 57809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 13363910, .data = 30197, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 16182, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 43962, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3582906, .data = 54003, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3582908, .data = 52898, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_13[] = {
		{ .addr = 0x18dc4a, .byte = 0xe1 },
		{ .addr = 0x18dc4b, .byte = 0xed },
		{ .addr = 0x18dc4c, .byte = 0xe1 },
		{ .addr = 0x18dc4d, .byte = 0xf4 },
		{ .addr = 0x18dc4e, .byte = 0x3a },
		{ .addr = 0x18dc4f, .byte = 0x6b },
		{ .addr = 0x09310c, .byte = 0x71 },
		{ .addr = 0x09310d, .byte = 0x80 },
		{ .addr = 0x18dc50, .byte = 0xc8 },
		{ .addr = 0x18dc51, .byte = 0x41 }
};

static const SST_RamByte aslw_final_ram_13[] = {
		{ .addr = 0x18dc4a, .byte = 0xe1 },
		{ .addr = 0x18dc4b, .byte = 0xed },
		{ .addr = 0x18dc4c, .byte = 0xe1 },
		{ .addr = 0x18dc4d, .byte = 0xf4 },
		{ .addr = 0x18dc4e, .byte = 0x3a },
		{ .addr = 0x18dc4f, .byte = 0x6b },
		{ .addr = 0x09310c, .byte = 0xe3 },
		{ .addr = 0x09310d, .byte = 0x00 },
		{ .addr = 0x18dc50, .byte = 0xc8 },
		{ .addr = 0x18dc51, .byte = 0x41 }
};

static const SST_Transaction aslw_transactions_13[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1629262, .data = 14955, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 602380, .data = 29056, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1629264, .data = 51265, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 602380, .data = 58112, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_14[] = {
		{ .addr = 0x90e25e, .byte = 0xe1 },
		{ .addr = 0x90e25f, .byte = 0xe8 },
		{ .addr = 0x90e260, .byte = 0x74 },
		{ .addr = 0x90e261, .byte = 0x33 },
		{ .addr = 0x90e262, .byte = 0xec },
		{ .addr = 0x90e263, .byte = 0x01 },
		{ .addr = 0x9576d4, .byte = 0x24 },
		{ .addr = 0x9576d5, .byte = 0xed },
		{ .addr = 0x90e264, .byte = 0x82 },
		{ .addr = 0x90e265, .byte = 0xd2 }
};

static const SST_RamByte aslw_final_ram_14[] = {
		{ .addr = 0x90e25e, .byte = 0xe1 },
		{ .addr = 0x90e25f, .byte = 0xe8 },
		{ .addr = 0x90e260, .byte = 0x74 },
		{ .addr = 0x90e261, .byte = 0x33 },
		{ .addr = 0x90e262, .byte = 0xec },
		{ .addr = 0x90e263, .byte = 0x01 },
		{ .addr = 0x9576d4, .byte = 0x49 },
		{ .addr = 0x9576d5, .byte = 0xda },
		{ .addr = 0x90e264, .byte = 0x82 },
		{ .addr = 0x90e265, .byte = 0xd2 }
};

static const SST_Transaction aslw_transactions_14[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9495138, .data = 60417, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9795284, .data = 9453, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9495140, .data = 33490, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 9795284, .data = 18906, .uds = true, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_15[] = {
		{ .addr = 0x5f7852, .byte = 0xe5 },
		{ .addr = 0x5f7853, .byte = 0x40 },
		{ .addr = 0x5f7854, .byte = 0x44 },
		{ .addr = 0x5f7855, .byte = 0x11 },
		{ .addr = 0x5f7856, .byte = 0x5a },
		{ .addr = 0x5f7857, .byte = 0xed }
};

static const SST_RamByte aslw_final_ram_15[] = {
		{ .addr = 0x5f7852, .byte = 0xe5 },
		{ .addr = 0x5f7853, .byte = 0x40 },
		{ .addr = 0x5f7854, .byte = 0x44 },
		{ .addr = 0x5f7855, .byte = 0x11 },
		{ .addr = 0x5f7856, .byte = 0x5a },
		{ .addr = 0x5f7857, .byte = 0xed }
};

static const SST_Transaction aslw_transactions_15[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 6256726, .data = 23277, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_RamByte aslw_initial_ram_16[] = {
		{ .addr = 0x579c74, .byte = 0xeb },
		{ .addr = 0x579c75, .byte = 0x65 },
		{ .addr = 0x579c76, .byte = 0x9d },
		{ .addr = 0x579c77, .byte = 0xf9 },
		{ .addr = 0x579c78, .byte = 0xe8 },
		{ .addr = 0x579c79, .byte = 0xaa }
};

static const SST_RamByte aslw_final_ram_16[] = {
		{ .addr = 0x579c74, .byte = 0xeb },
		{ .addr = 0x579c75, .byte = 0x65 },
		{ .addr = 0x579c76, .byte = 0x9d },
		{ .addr = 0x579c77, .byte = 0xf9 },
		{ .addr = 0x579c78, .byte = 0xe8 },
		{ .addr = 0x579c79, .byte = 0xaa }
};

static const SST_Transaction aslw_transactions_16[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 5741688, .data = 59562, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 96 },
};

static const SST_RamByte aslw_initial_ram_17[] = {
		{ .addr = 0xbdeb0c, .byte = 0xe9 },
		{ .addr = 0xbdeb0d, .byte = 0x60 },
		{ .addr = 0xbdeb0e, .byte = 0x6e },
		{ .addr = 0xbdeb0f, .byte = 0x82 },
		{ .addr = 0xbdeb10, .byte = 0xf9 },
		{ .addr = 0xbdeb11, .byte = 0x3e }
};

static const SST_RamByte aslw_final_ram_17[] = {
		{ .addr = 0xbdeb0c, .byte = 0xe9 },
		{ .addr = 0xbdeb0d, .byte = 0x60 },
		{ .addr = 0xbdeb0e, .byte = 0x6e },
		{ .addr = 0xbdeb0f, .byte = 0x82 },
		{ .addr = 0xbdeb10, .byte = 0xf9 },
		{ .addr = 0xbdeb11, .byte = 0x3e }
};

static const SST_Transaction aslw_transactions_17[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 12446480, .data = 63806, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 20 },
};

static const SST_RamByte aslw_initial_ram_18[] = {
		{ .addr = 0x26a3c2, .byte = 0xe1 },
		{ .addr = 0x26a3c3, .byte = 0xd0 },
		{ .addr = 0x26a3c4, .byte = 0x26 },
		{ .addr = 0x26a3c5, .byte = 0x5a },
		{ .addr = 0x00000c, .byte = 0x93 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xc0 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x38c008, .byte = 0xd3 },
		{ .addr = 0x38c009, .byte = 0xd0 },
		{ .addr = 0x38c00a, .byte = 0xb3 },
		{ .addr = 0x38c00b, .byte = 0x28 }
};

static const SST_RamByte aslw_final_ram_18[] = {
		{ .addr = 0x26a3c2, .byte = 0xe1 },
		{ .addr = 0x26a3c3, .byte = 0xd0 },
		{ .addr = 0x26a3c4, .byte = 0x26 },
		{ .addr = 0x26a3c5, .byte = 0x5a },
		{ .addr = 0x351364, .byte = 0xa3 },
		{ .addr = 0x351365, .byte = 0xc4 },
		{ .addr = 0x351360, .byte = 0x85 },
		{ .addr = 0x351361, .byte = 0x0a },
		{ .addr = 0x351362, .byte = 0x00 },
		{ .addr = 0x351363, .byte = 0x26 },
		{ .addr = 0x35135e, .byte = 0xe1 },
		{ .addr = 0x35135f, .byte = 0xd0 },
		{ .addr = 0x35135c, .byte = 0x30 },
		{ .addr = 0x35135d, .byte = 0x29 },
		{ .addr = 0x351358, .byte = 0xe1 },
		{ .addr = 0x351359, .byte = 0xd1 },
		{ .addr = 0x35135a, .byte = 0x81 },
		{ .addr = 0x35135b, .byte = 0x16 },
		{ .addr = 0x00000c, .byte = 0x93 },
		{ .addr = 0x00000d, .byte = 0x38 },
		{ .addr = 0x00000e, .byte = 0xc0 },
		{ .addr = 0x00000f, .byte = 0x08 },
		{ .addr = 0x38c008, .byte = 0xd3 },
		{ .addr = 0x38c009, .byte = 0xd0 },
		{ .addr = 0x38c00a, .byte = 0xb3 },
		{ .addr = 0x38c00b, .byte = 0x28 }
};

static const SST_Transaction aslw_transactions_18[] = {
	{
		.kind = SST_TS_RE,
		.cycles = 4,
		.bus = {
			.fc = 1, .addr = 1454120, .data = 34933, .uds = true, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3478372, .data = 41924, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3478368, .data = 34058, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3478370, .data = 38, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3478366, .data = 57808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3478364, .data = 12329, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3478360, .data = 57809, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3478362, .data = 33046, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 12, .data = 37688, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 14, .data = 49160, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3719176, .data = 54224, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3719178, .data = 45864, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_19[] = {
		{ .addr = 0xc89f8a, .byte = 0xef },
		{ .addr = 0xc89f8b, .byte = 0x45 },
		{ .addr = 0xc89f8c, .byte = 0x08 },
		{ .addr = 0xc89f8d, .byte = 0x5f },
		{ .addr = 0xc89f8e, .byte = 0x27 },
		{ .addr = 0xc89f8f, .byte = 0x89 }
};

static const SST_RamByte aslw_final_ram_19[] = {
		{ .addr = 0xc89f8a, .byte = 0xef },
		{ .addr = 0xc89f8b, .byte = 0x45 },
		{ .addr = 0xc89f8c, .byte = 0x08 },
		{ .addr = 0xc89f8d, .byte = 0x5f },
		{ .addr = 0xc89f8e, .byte = 0x27 },
		{ .addr = 0xc89f8f, .byte = 0x89 }
};

static const SST_Transaction aslw_transactions_19[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 13148046, .data = 10121, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte aslw_initial_ram_20[] = {
		{ .addr = 0x60b1ee, .byte = 0xe3 },
		{ .addr = 0x60b1ef, .byte = 0x47 },
		{ .addr = 0x60b1f0, .byte = 0x71 },
		{ .addr = 0x60b1f1, .byte = 0xc4 },
		{ .addr = 0x60b1f2, .byte = 0x69 },
		{ .addr = 0x60b1f3, .byte = 0x1f }
};

static const SST_RamByte aslw_final_ram_20[] = {
		{ .addr = 0x60b1ee, .byte = 0xe3 },
		{ .addr = 0x60b1ef, .byte = 0x47 },
		{ .addr = 0x60b1f0, .byte = 0x71 },
		{ .addr = 0x60b1f1, .byte = 0xc4 },
		{ .addr = 0x60b1f2, .byte = 0x69 },
		{ .addr = 0x60b1f3, .byte = 0x1f }
};

static const SST_Transaction aslw_transactions_20[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 6337010, .data = 26911, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 4 },
};

static const SST_RamByte aslw_initial_ram_21[] = {
		{ .addr = 0x457b44, .byte = 0xe5 },
		{ .addr = 0x457b45, .byte = 0x67 },
		{ .addr = 0x457b46, .byte = 0x49 },
		{ .addr = 0x457b47, .byte = 0x87 },
		{ .addr = 0x457b48, .byte = 0xfb },
		{ .addr = 0x457b49, .byte = 0x7d }
};

static const SST_RamByte aslw_final_ram_21[] = {
		{ .addr = 0x457b44, .byte = 0xe5 },
		{ .addr = 0x457b45, .byte = 0x67 },
		{ .addr = 0x457b46, .byte = 0x49 },
		{ .addr = 0x457b47, .byte = 0x87 },
		{ .addr = 0x457b48, .byte = 0xfb },
		{ .addr = 0x457b49, .byte = 0x7d }
};

static const SST_Transaction aslw_transactions_21[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 4553544, .data = 64381, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 46 },
};

static const SST_RamByte aslw_initial_ram_22[] = {
		{ .addr = 0xe4db1c, .byte = 0xe9 },
		{ .addr = 0xe4db1d, .byte = 0x40 },
		{ .addr = 0xe4db1e, .byte = 0x17 },
		{ .addr = 0xe4db1f, .byte = 0x41 },
		{ .addr = 0xe4db20, .byte = 0x64 },
		{ .addr = 0xe4db21, .byte = 0xae }
};

static const SST_RamByte aslw_final_ram_22[] = {
		{ .addr = 0xe4db1c, .byte = 0xe9 },
		{ .addr = 0xe4db1d, .byte = 0x40 },
		{ .addr = 0xe4db1e, .byte = 0x17 },
		{ .addr = 0xe4db1f, .byte = 0x41 },
		{ .addr = 0xe4db20, .byte = 0x64 },
		{ .addr = 0xe4db21, .byte = 0xae }
};

static const SST_Transaction aslw_transactions_22[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 14998304, .data = 25774, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 10 },
};

static const SST_RamByte aslw_initial_ram_23[] = {
		{ .addr = 0x8fb4c0, .byte = 0xed },
		{ .addr = 0x8fb4c1, .byte = 0x42 },
		{ .addr = 0x8fb4c2, .byte = 0xf4 },
		{ .addr = 0x8fb4c3, .byte = 0xcf },
		{ .addr = 0x8fb4c4, .byte = 0xd6 },
		{ .addr = 0x8fb4c5, .byte = 0x18 }
};

static const SST_RamByte aslw_final_ram_23[] = {
		{ .addr = 0x8fb4c0, .byte = 0xed },
		{ .addr = 0x8fb4c1, .byte = 0x42 },
		{ .addr = 0x8fb4c2, .byte = 0xf4 },
		{ .addr = 0x8fb4c3, .byte = 0xcf },
		{ .addr = 0x8fb4c4, .byte = 0xd6 },
		{ .addr = 0x8fb4c5, .byte = 0x18 }
};

static const SST_Transaction aslw_transactions_23[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 9417924, .data = 54808, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 14 },
};

static const SST_RamByte aslw_initial_ram_24[] = {
		{ .addr = 0x1b4acc, .byte = 0xe1 },
		{ .addr = 0x1b4acd, .byte = 0x67 },
		{ .addr = 0x1b4ace, .byte = 0xb8 },
		{ .addr = 0x1b4acf, .byte = 0x52 },
		{ .addr = 0x1b4ad0, .byte = 0x07 },
		{ .addr = 0x1b4ad1, .byte = 0x37 }
};

static const SST_RamByte aslw_final_ram_24[] = {
		{ .addr = 0x1b4acc, .byte = 0xe1 },
		{ .addr = 0x1b4acd, .byte = 0x67 },
		{ .addr = 0x1b4ace, .byte = 0xb8 },
		{ .addr = 0x1b4acf, .byte = 0x52 },
		{ .addr = 0x1b4ad0, .byte = 0x07 },
		{ .addr = 0x1b4ad1, .byte = 0x37 }
};

static const SST_Transaction aslw_transactions_24[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 1788624, .data = 1847, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 60 },
};

static const SST_RamByte aslw_initial_ram_25[] = {
		{ .addr = 0x2e57e2, .byte = 0xef },
		{ .addr = 0x2e57e3, .byte = 0x44 },
		{ .addr = 0x2e57e4, .byte = 0xa7 },
		{ .addr = 0x2e57e5, .byte = 0x3a },
		{ .addr = 0x2e57e6, .byte = 0x9e },
		{ .addr = 0x2e57e7, .byte = 0xb3 }
};

static const SST_RamByte aslw_final_ram_25[] = {
		{ .addr = 0x2e57e2, .byte = 0xef },
		{ .addr = 0x2e57e3, .byte = 0x44 },
		{ .addr = 0x2e57e4, .byte = 0xa7 },
		{ .addr = 0x2e57e5, .byte = 0x3a },
		{ .addr = 0x2e57e6, .byte = 0x9e },
		{ .addr = 0x2e57e7, .byte = 0xb3 }
};

static const SST_Transaction aslw_transactions_25[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 3037158, .data = 40627, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 16 },
};

static const SST_RamByte aslw_initial_ram_26[] = {
		{ .addr = 0xb06afe, .byte = 0xe7 },
		{ .addr = 0xb06aff, .byte = 0x46 },
		{ .addr = 0xb06b00, .byte = 0x66 },
		{ .addr = 0xb06b01, .byte = 0x22 },
		{ .addr = 0xb06b02, .byte = 0x68 },
		{ .addr = 0xb06b03, .byte = 0x30 }
};

static const SST_RamByte aslw_final_ram_26[] = {
		{ .addr = 0xb06afe, .byte = 0xe7 },
		{ .addr = 0xb06aff, .byte = 0x46 },
		{ .addr = 0xb06b00, .byte = 0x66 },
		{ .addr = 0xb06b01, .byte = 0x22 },
		{ .addr = 0xb06b02, .byte = 0x68 },
		{ .addr = 0xb06b03, .byte = 0x30 }
};

static const SST_Transaction aslw_transactions_26[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 11561730, .data = 26672, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 8 },
};

static const SST_RamByte aslw_initial_ram_27[] = {
		{ .addr = 0x74a11a, .byte = 0xe1 },
		{ .addr = 0x74a11b, .byte = 0x43 },
		{ .addr = 0x74a11c, .byte = 0x2b },
		{ .addr = 0x74a11d, .byte = 0xa7 },
		{ .addr = 0x74a11e, .byte = 0xf8 },
		{ .addr = 0x74a11f, .byte = 0xf6 }
};

static const SST_RamByte aslw_final_ram_27[] = {
		{ .addr = 0x74a11a, .byte = 0xe1 },
		{ .addr = 0x74a11b, .byte = 0x43 },
		{ .addr = 0x74a11c, .byte = 0x2b },
		{ .addr = 0x74a11d, .byte = 0xa7 },
		{ .addr = 0x74a11e, .byte = 0xf8 },
		{ .addr = 0x74a11f, .byte = 0xf6 }
};

static const SST_Transaction aslw_transactions_27[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 7643422, .data = 63734, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 18 },
};

static const SST_RamByte aslw_initial_ram_28[] = {
		{ .addr = 0xbd340a, .byte = 0xe1 },
		{ .addr = 0xbd340b, .byte = 0xef },
		{ .addr = 0xbd340c, .byte = 0x40 },
		{ .addr = 0xbd340d, .byte = 0x20 },
		{ .addr = 0xbd340e, .byte = 0xfd },
		{ .addr = 0xbd340f, .byte = 0x38 },
		{ .addr = 0xb6b826, .byte = 0xc9 },
		{ .addr = 0xb6b827, .byte = 0x15 },
		{ .addr = 0xbd3410, .byte = 0x1a },
		{ .addr = 0xbd3411, .byte = 0xe6 }
};

static const SST_RamByte aslw_final_ram_28[] = {
		{ .addr = 0xbd340a, .byte = 0xe1 },
		{ .addr = 0xbd340b, .byte = 0xef },
		{ .addr = 0xbd340c, .byte = 0x40 },
		{ .addr = 0xbd340d, .byte = 0x20 },
		{ .addr = 0xbd340e, .byte = 0xfd },
		{ .addr = 0xbd340f, .byte = 0x38 },
		{ .addr = 0xb6b826, .byte = 0x92 },
		{ .addr = 0xb6b827, .byte = 0x2a },
		{ .addr = 0xbd3410, .byte = 0x1a },
		{ .addr = 0xbd3411, .byte = 0xe6 }
};

static const SST_Transaction aslw_transactions_28[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12399630, .data = 64824, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11974694, .data = 51477, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 12399632, .data = 6886, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 11974694, .data = 37418, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_29[] = {
		{ .addr = 0x98891e, .byte = 0xe7 },
		{ .addr = 0x98891f, .byte = 0x61 },
		{ .addr = 0x988920, .byte = 0x6b },
		{ .addr = 0x988921, .byte = 0xfb },
		{ .addr = 0x988922, .byte = 0x7a },
		{ .addr = 0x988923, .byte = 0xa6 }
};

static const SST_RamByte aslw_final_ram_29[] = {
		{ .addr = 0x98891e, .byte = 0xe7 },
		{ .addr = 0x98891f, .byte = 0x61 },
		{ .addr = 0x988920, .byte = 0x6b },
		{ .addr = 0x988921, .byte = 0xfb },
		{ .addr = 0x988922, .byte = 0x7a },
		{ .addr = 0x988923, .byte = 0xa6 }
};

static const SST_Transaction aslw_transactions_29[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 9996578, .data = 31398, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 26 },
};

static const SST_RamByte aslw_initial_ram_30[] = {
		{ .addr = 0xeced5a, .byte = 0xe1 },
		{ .addr = 0xeced5b, .byte = 0xe0 },
		{ .addr = 0xeced5c, .byte = 0xee },
		{ .addr = 0xeced5d, .byte = 0x04 },
		{ .addr = 0x343ba6, .byte = 0xef },
		{ .addr = 0x343ba7, .byte = 0x0b },
		{ .addr = 0xeced5e, .byte = 0x6e },
		{ .addr = 0xeced5f, .byte = 0x28 }
};

static const SST_RamByte aslw_final_ram_30[] = {
		{ .addr = 0xeced5a, .byte = 0xe1 },
		{ .addr = 0xeced5b, .byte = 0xe0 },
		{ .addr = 0xeced5c, .byte = 0xee },
		{ .addr = 0xeced5d, .byte = 0x04 },
		{ .addr = 0x343ba6, .byte = 0xde },
		{ .addr = 0x343ba7, .byte = 0x16 },
		{ .addr = 0xeced5e, .byte = 0x6e },
		{ .addr = 0xeced5f, .byte = 0x28 }
};

static const SST_Transaction aslw_transactions_30[] = {
	{ .kind = SST_TS_N, .cycles = 2 },
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3423142, .data = 61195, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 6, .addr = 15527262, .data = 28200, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{
		.kind = SST_TS_W,
		.cycles = 4,
		.bus = {
			.fc = 5, .addr = 3423142, .data = 56854, .uds = false, .lds = false, .is_word = false, 
		}
	},
};

static const SST_RamByte aslw_initial_ram_31[] = {
		{ .addr = 0x16baf8, .byte = 0xe5 },
		{ .addr = 0x16baf9, .byte = 0x40 },
		{ .addr = 0x16bafa, .byte = 0x35 },
		{ .addr = 0x16bafb, .byte = 0x40 },
		{ .addr = 0x16bafc, .byte = 0xa1 },
		{ .addr = 0x16bafd, .byte = 0x89 }
};

static const SST_RamByte aslw_final_ram_31[] = {
		{ .addr = 0x16baf8, .byte = 0xe5 },
		{ .addr = 0x16baf9, .byte = 0x40 },
		{ .addr = 0x16bafa, .byte = 0x35 },
		{ .addr = 0x16bafb, .byte = 0x40 },
		{ .addr = 0x16bafc, .byte = 0xa1 },
		{ .addr = 0x16bafd, .byte = 0x89 }
};

static const SST_Transaction aslw_transactions_31[] = {
	{
		.kind = SST_TS_R,
		.cycles = 4,
		.bus = {
			.fc = 2, .addr = 1489660, .data = 41353, .uds = false, .lds = false, .is_word = false, 
		}
	},
	{ .kind = SST_TS_N, .cycles = 6 },
};

static const SST_TestCase aslw[] = {
	{
		.name = "000 ASL.w D5, D0 eb60",
		.initial = {
			.regs = {
				539159205, 1202972415, 1760886831, 2020840429, 745339187, 2945258589, 3163311252, 1696235226, 2902778343, 432696657, 4208285870, 3029119350, 803463438, 2960705152, 4130681196, 12337110, 8421566, 8195, 5324164
			},
			.prefetch0 = 60256,
			.prefetch1 = 34558,
			.ram = aslw_initial_ram_0,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				539099136, 1202972415, 1760886831, 2020840429, 745339187, 2945258589, 3163311252, 1696235226, 2902778343, 432696657, 4208285870, 3029119350, 803463438, 2960705152, 4130681196, 12337110, 8421566, 8198, 5324166
			},
			.prefetch0 = 34558,
			.prefetch1 = 39199,
			.ram = aslw_final_ram_0,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_0,
		.transactions_len = 2,
		.lenght = 64,
	},
	{
		.name = "001 ASL.w D6, D5 ed65",
		.initial = {
			.regs = {
				477842092, 3557934204, 1338884877, 1854142647, 3754347124, 438499333, 39618245, 702147016, 1135548680, 753679023, 1371658985, 507372839, 2455112295, 2119549300, 329003220, 15456034, 15390106, 41240, 9434164
			},
			.prefetch0 = 60773,
			.prefetch1 = 54739,
			.ram = aslw_initial_ram_1,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				477842092, 3557934204, 1338884877, 1854142647, 3754347124, 438436000, 39618245, 702147016, 1135548680, 753679023, 1371658985, 507372839, 2455112295, 2119549300, 329003220, 15456034, 15390106, 41235, 9434166
			},
			.prefetch0 = 54739,
			.prefetch1 = 54780,
			.ram = aslw_final_ram_1,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_1,
		.transactions_len = 2,
		.lenght = 16,
	},
	{
		.name = "002 ASL.w D5, D3 eb63",
		.initial = {
			.regs = {
				1687574928, 238466078, 2985735021, 2856459200, 4118747154, 3834182055, 428653614, 4048332428, 2918659153, 2013641695, 1286088728, 3565097039, 4175577990, 3197360244, 3844738204, 15793468, 9867888, 41997, 7134718
			},
			.prefetch0 = 60259,
			.prefetch1 = 60062,
			.ram = aslw_initial_ram_2,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1687574928, 238466078, 2985735021, 2856452096, 4118747154, 3834182055, 428653614, 4048332428, 2918659153, 2013641695, 1286088728, 3565097039, 4175577990, 3197360244, 3844738204, 15793468, 9867888, 41990, 7134720
			},
			.prefetch0 = 60062,
			.prefetch1 = 58714,
			.ram = aslw_final_ram_2,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_2,
		.transactions_len = 2,
		.lenght = 84,
	},
	{
		.name = "003 ASL.w (A4)+ e1dc",
		.initial = {
			.regs = {
				3934462364, 486379464, 988200791, 2569952015, 703831454, 1894500481, 1081404221, 2450230386, 828280259, 197055939, 3701873976, 2022447385, 684777381, 1284376217, 2034721312, 9288434, 7866304, 8969, 6507714
			},
			.prefetch0 = 57820,
			.prefetch1 = 37792,
			.ram = aslw_initial_ram_3,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3934462364, 486379464, 988200791, 2569952015, 703831454, 1894500481, 1081404221, 2450230386, 828280259, 197055939, 3701873976, 2022447385, 684777383, 1284376217, 2034721312, 9288434, 7866290, 8969, 3280645524
			},
			.prefetch0 = 53021,
			.prefetch1 = 56141,
			.ram = aslw_final_ram_3,
			.ram_len = 26,
		},
		.transactions = aslw_transactions_3,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "004 ASL.w (A0) e1d0",
		.initial = {
			.regs = {
				2572652239, 207596709, 57152517, 2057409021, 1882565677, 1857791787, 3025699315, 1172997546, 1120211726, 3748028062, 350876567, 1340240808, 386437900, 3530118406, 783413025, 15652446, 15683378, 42248, 14917574
			},
			.prefetch0 = 57808,
			.prefetch1 = 53312,
			.ram = aslw_initial_ram_4,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				2572652239, 207596709, 57152517, 2057409021, 1882565677, 1857791787, 3025699315, 1172997546, 1120211726, 3748028062, 350876567, 1340240808, 386437900, 3530118406, 783413025, 15652446, 15683378, 42250, 14917576
			},
			.prefetch0 = 53312,
			.prefetch1 = 12347,
			.ram = aslw_final_ram_4,
			.ram_len = 8,
		},
		.transactions = aslw_transactions_4,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "005 ASL.w (d16, A0) e1e8",
		.initial = {
			.regs = {
				3272896169, 545916136, 4172008262, 4192004297, 1227314397, 2256059178, 1724541602, 1406748954, 872073492, 1639218996, 2025908131, 2210352380, 190538728, 3314800327, 440926100, 10509084, 92030, 42262, 5108096
			},
			.prefetch0 = 57832,
			.prefetch1 = 39883,
			.ram = aslw_initial_ram_5,
			.ram_len = 14,
		},
		.final = {
			.regs = {
				3272896169, 545916136, 4172008262, 4192004297, 1227314397, 2256059178, 1724541602, 1406748954, 872073492, 1639218996, 2025908131, 2210352380, 190538728, 3314800327, 440926100, 10509084, 92016, 9494, 1229874132
			},
			.prefetch0 = 60516,
			.prefetch1 = 3972,
			.ram = aslw_final_ram_5,
			.ram_len = 28,
		},
		.transactions = aslw_transactions_5,
		.transactions_len = 15,
		.lenght = 62,
	},
	{
		.name = "006 ASL.w D0, D3 e163",
		.initial = {
			.regs = {
				2863606749, 917844242, 2488522343, 1301704346, 1054373816, 1133455484, 2306983646, 2758142394, 1611868598, 4114068307, 3691429117, 3027354935, 1702842494, 2990770826, 1242386665, 4212468, 778040, 8976, 15281392
			},
			.prefetch0 = 57699,
			.prefetch1 = 15327,
			.ram = aslw_initial_ram_6,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2863606749, 917844242, 2488522343, 1301676032, 1054373816, 1133455484, 2306983646, 2758142394, 1611868598, 4114068307, 3691429117, 3027354935, 1702842494, 2990770826, 1242386665, 4212468, 778040, 8966, 15281394
			},
			.prefetch0 = 15327,
			.prefetch1 = 59862,
			.ram = aslw_final_ram_6,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_6,
		.transactions_len = 2,
		.lenght = 64,
	},
	{
		.name = "007 ASL.w D6, D6 ed66",
		.initial = {
			.regs = {
				2952953544, 3123247747, 2319291566, 3785595786, 1337589868, 3103101593, 3194392825, 3540702919, 4105232784, 1809721764, 1467010997, 4238111538, 176555355, 1215742622, 3966105505, 4748908, 4036202, 9245, 15195152
			},
			.prefetch0 = 60774,
			.prefetch1 = 29128,
			.ram = aslw_initial_ram_7,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2952953544, 3123247747, 2319291566, 3785595786, 1337589868, 3103101593, 3194355712, 3540702919, 4105232784, 1809721764, 1467010997, 4238111538, 176555355, 1215742622, 3966105505, 4748908, 4036202, 9222, 15195154
			},
			.prefetch0 = 29128,
			.prefetch1 = 30444,
			.ram = aslw_final_ram_7,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_7,
		.transactions_len = 2,
		.lenght = 120,
	},
	{
		.name = "008 ASL.w D1, D5 e365",
		.initial = {
			.regs = {
				1932467217, 3561171964, 391560153, 667763049, 2563056060, 3797872522, 1129073613, 1148865734, 1828655081, 4222972804, 403289994, 4042859056, 2371983258, 802992020, 3522880566, 3462034, 13744400, 1044, 15217224
			},
			.prefetch0 = 58213,
			.prefetch1 = 22960,
			.ram = aslw_initial_ram_8,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1932467217, 3561171964, 391560153, 667763049, 2563056060, 3797811200, 1129073613, 1148865734, 1828655081, 4222972804, 403289994, 4042859056, 2371983258, 802992020, 3522880566, 3462034, 13744400, 1030, 15217226
			},
			.prefetch0 = 22960,
			.prefetch1 = 53321,
			.ram = aslw_final_ram_8,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_8,
		.transactions_len = 2,
		.lenght = 126,
	},
	{
		.name = "009 ASL.w D3, D7 e767",
		.initial = {
			.regs = {
				2648051940, 1077050180, 150156780, 168983983, 2372283952, 3339678243, 1033065919, 853611361, 1530235433, 3850562064, 4287178297, 702558183, 1256244609, 1093455221, 591077645, 7747818, 6895648, 33557, 5493732
			},
			.prefetch0 = 59239,
			.prefetch1 = 40105,
			.ram = aslw_initial_ram_9,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2648051940, 1077050180, 150156780, 168983983, 2372283952, 3339678243, 1033065919, 853606400, 1530235433, 3850562064, 4287178297, 702558183, 1256244609, 1093455221, 591077645, 7747818, 6895648, 33542, 5493734
			},
			.prefetch0 = 40105,
			.prefetch1 = 36325,
			.ram = aslw_final_ram_9,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_9,
		.transactions_len = 2,
		.lenght = 100,
	},
	{
		.name = "010 ASL.w (A2) e1d2",
		.initial = {
			.regs = {
				3664788222, 1901155753, 3858808314, 2124661164, 3608488114, 510316989, 2956714090, 1790127041, 3636175891, 2536685689, 909307126, 2453304698, 3974325863, 3578274749, 92975724, 15981220, 13179532, 1555, 14781380
			},
			.prefetch0 = 57810,
			.prefetch1 = 5820,
			.ram = aslw_initial_ram_10,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				3664788222, 1901155753, 3858808314, 2124661164, 3608488114, 510316989, 2956714090, 1790127041, 3636175891, 2536685689, 909307126, 2453304698, 3974325863, 3578274749, 92975724, 15981220, 13179532, 1561, 14781382
			},
			.prefetch0 = 5820,
			.prefetch1 = 42357,
			.ram = aslw_final_ram_10,
			.ram_len = 8,
		},
		.transactions = aslw_transactions_10,
		.transactions_len = 3,
		.lenght = 12,
	},
	{
		.name = "011 ASL.w -(A0) e1e0",
		.initial = {
			.regs = {
				39022935, 93644748, 524101157, 3124868707, 3565157584, 1726642350, 284016380, 530461074, 2999554279, 1776494927, 3509650605, 1745932871, 678905672, 3443464197, 2813035593, 505204, 10031892, 41219, 14698912
			},
			.prefetch0 = 57824,
			.prefetch1 = 38610,
			.ram = aslw_initial_ram_11,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				39022935, 93644748, 524101157, 3124868707, 3565157584, 1726642350, 284016380, 530461074, 2999554277, 1776494927, 3509650605, 1745932871, 678905672, 3443464197, 2813035593, 505204, 10031878, 8451, 3192559486
			},
			.prefetch0 = 53068,
			.prefetch1 = 38412,
			.ram = aslw_final_ram_11,
			.ram_len = 26,
		},
		.transactions = aslw_transactions_11,
		.transactions_len = 15,
		.lenght = 60,
	},
	{
		.name = "012 ASL.w (A1) e1d1",
		.initial = {
			.regs = {
				3511443428, 1275608631, 231419922, 1500856107, 381667172, 3773594969, 3971709946, 3571044343, 523472537, 1979041309, 2029610573, 2849096978, 1168671584, 1188909522, 2989632673, 10946360, 13363922, 1055, 10769464
			},
			.prefetch0 = 57809,
			.prefetch1 = 18694,
			.ram = aslw_initial_ram_12,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				3511443428, 1275608631, 231419922, 1500856107, 381667172, 3773594969, 3971709946, 3571044343, 523472537, 1979041309, 2029610573, 2849096978, 1168671584, 1188909522, 2989632673, 10946360, 13363908, 9247, 1060547518
			},
			.prefetch0 = 54003,
			.prefetch1 = 52898,
			.ram = aslw_final_ram_12,
			.ram_len = 26,
		},
		.transactions = aslw_transactions_12,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "013 ASL.w (d16, A5) e1ed",
		.initial = {
			.regs = {
				1839950470, 3565511683, 2038430612, 3347230442, 3128994357, 3373944053, 4071437350, 4183037474, 1151515318, 2708382266, 4242925621, 827514292, 1473386497, 3691597592, 673080251, 8889704, 5297302, 8981, 1629262
			},
			.prefetch0 = 57837,
			.prefetch1 = 57844,
			.ram = aslw_initial_ram_13,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				1839950470, 3565511683, 2038430612, 3347230442, 3128994357, 3373944053, 4071437350, 4183037474, 1151515318, 2708382266, 4242925621, 827514292, 1473386497, 3691597592, 673080251, 8889704, 5297302, 8970, 1629266
			},
			.prefetch0 = 14955,
			.prefetch1 = 51265,
			.ram = aslw_final_ram_13,
			.ram_len = 10,
		},
		.transactions = aslw_transactions_13,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "014 ASL.w (d16, A0) e1e8",
		.initial = {
			.regs = {
				3541395547, 1817952169, 2951352488, 416977666, 3431038470, 1002372332, 629501133, 3929273557, 1872036513, 571674534, 2594802520, 3119122475, 365753550, 2934597949, 2442548846, 11439186, 1535196, 1286, 9495138
			},
			.prefetch0 = 57832,
			.prefetch1 = 29747,
			.ram = aslw_initial_ram_14,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				3541395547, 1817952169, 2951352488, 416977666, 3431038470, 1002372332, 629501133, 3929273557, 1872036513, 571674534, 2594802520, 3119122475, 365753550, 2934597949, 2442548846, 11439186, 1535196, 1280, 9495142
			},
			.prefetch0 = 60417,
			.prefetch1 = 33490,
			.ram = aslw_final_ram_14,
			.ram_len = 10,
		},
		.transactions = aslw_transactions_14,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "015 ASL.w 2, D0 e540",
		.initial = {
			.regs = {
				2711186529, 2307652835, 907312956, 332742413, 2756907973, 3562816666, 2494433056, 4211884651, 2385432646, 3282237484, 2981433810, 1448990106, 4167013938, 4134388686, 4041914474, 4489004, 13138894, 9498, 6256726
			},
			.prefetch0 = 58688,
			.prefetch1 = 17425,
			.ram = aslw_initial_ram_15,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2711204228, 2307652835, 907312956, 332742413, 2756907973, 3562816666, 2494433056, 4211884651, 2385432646, 3282237484, 2981433810, 1448990106, 4167013938, 4134388686, 4041914474, 4489004, 13138894, 9499, 6256728
			},
			.prefetch0 = 17425,
			.prefetch1 = 23277,
			.ram = aslw_final_ram_15,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_15,
		.transactions_len = 2,
		.lenght = 10,
	},
	{
		.name = "016 ASL.w D5, D5 eb65",
		.initial = {
			.regs = {
				660680240, 3998061721, 4026081525, 3317741670, 708970610, 1319362607, 171459281, 3820302813, 1568363973, 2627879776, 3016914981, 773414646, 3450983932, 3208275412, 515583410, 3078794, 10613296, 42262, 5741688
			},
			.prefetch0 = 60261,
			.prefetch1 = 40441,
			.ram = aslw_initial_ram_16,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				660680240, 3998061721, 4026081525, 3317741670, 708970610, 1319305216, 171459281, 3820302813, 1568363973, 2627879776, 3016914981, 773414646, 3450983932, 3208275412, 515583410, 3078794, 10613296, 42246, 5741690
			},
			.prefetch0 = 40441,
			.prefetch1 = 59562,
			.ram = aslw_final_ram_16,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_16,
		.transactions_len = 2,
		.lenght = 100,
	},
	{
		.name = "017 ASL.w D4, D0 e960",
		.initial = {
			.regs = {
				3566764183, 2951227799, 3532384357, 2747929000, 1587467273, 132102562, 393478799, 2146622154, 1957225521, 2996272246, 2205717507, 2886484660, 3179520645, 2925923524, 742479580, 13015864, 9449210, 33309, 12446480
			},
			.prefetch0 = 59744,
			.prefetch1 = 28290,
			.ram = aslw_initial_ram_17,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3566743040, 2951227799, 3532384357, 2747929000, 1587467273, 132102562, 393478799, 2146622154, 1957225521, 2996272246, 2205717507, 2886484660, 3179520645, 2925923524, 742479580, 13015864, 9449210, 33299, 12446482
			},
			.prefetch0 = 28290,
			.prefetch1 = 63806,
			.ram = aslw_final_ram_17,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_17,
		.transactions_len = 2,
		.lenght = 24,
	},
	{
		.name = "018 ASL.w (A0) e1d0",
		.initial = {
			.regs = {
				2350512369, 1298754226, 3969010131, 2915377080, 4033325142, 1369594763, 3501409552, 1164126450, 2165714985, 1230124772, 1056187407, 3527320275, 2360811334, 2642208540, 1163883651, 818406, 3478374, 34058, 2532294
			},
			.prefetch0 = 57808,
			.prefetch1 = 9818,
			.ram = aslw_initial_ram_18,
			.ram_len = 12,
		},
		.final = {
			.regs = {
				2350512369, 1298754226, 3969010131, 2915377080, 4033325142, 1369594763, 3501409552, 1164126450, 2165714985, 1230124772, 1056187407, 3527320275, 2360811334, 2642208540, 1163883651, 818406, 3478360, 9482, 2469969932
			},
			.prefetch0 = 54224,
			.prefetch1 = 45864,
			.ram = aslw_final_ram_18,
			.ram_len = 26,
		},
		.transactions = aslw_transactions_18,
		.transactions_len = 14,
		.lenght = 58,
	},
	{
		.name = "019 ASL.w 7, D5 ef45",
		.initial = {
			.regs = {
				1903199366, 3841884241, 3088098390, 2405899723, 1052027560, 4151915306, 3479316196, 4211805529, 2102967901, 1870616191, 4067796725, 1415918479, 221199340, 3709939155, 4254167093, 5394814, 5796666, 34564, 13148046
			},
			.prefetch0 = 61253,
			.prefetch1 = 2143,
			.ram = aslw_initial_ram_19,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1903199366, 3841884241, 3088098390, 2405899723, 1052027560, 4151940352, 3479316196, 4211805529, 2102967901, 1870616191, 4067796725, 1415918479, 221199340, 3709939155, 4254167093, 5394814, 5796666, 34587, 13148048
			},
			.prefetch0 = 2143,
			.prefetch1 = 10121,
			.ram = aslw_final_ram_19,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_19,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "020 ASL.w 1, D7 e347",
		.initial = {
			.regs = {
				1048590655, 1276345805, 2987257631, 3336649172, 521294662, 3090197364, 3291667759, 1322206258, 3961748017, 3234119359, 3300409023, 335390469, 4014790524, 3413186625, 949768157, 3851948, 8293716, 33282, 6337010
			},
			.prefetch0 = 58183,
			.prefetch1 = 29124,
			.ram = aslw_initial_ram_20,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1048590655, 1276345805, 2987257631, 3336649172, 521294662, 3090197364, 3291667759, 1322223716, 3961748017, 3234119359, 3300409023, 335390469, 4014790524, 3413186625, 949768157, 3851948, 8293716, 33290, 6337012
			},
			.prefetch0 = 29124,
			.prefetch1 = 26911,
			.ram = aslw_final_ram_20,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_20,
		.transactions_len = 2,
		.lenght = 8,
	},
	{
		.name = "021 ASL.w D2, D7 e567",
		.initial = {
			.regs = {
				2960316420, 3605752944, 1202150166, 3448866177, 1581537437, 520256122, 1350531279, 4149768921, 3478552379, 1224105480, 67903437, 716939319, 14626598, 623486472, 1545667367, 12450208, 15721260, 41737, 4553544
			},
			.prefetch0 = 58727,
			.prefetch1 = 18823,
			.ram = aslw_initial_ram_21,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2960316420, 3605752944, 1202150166, 3448866177, 1581537437, 520256122, 1350531279, 4149739520, 3478552379, 1224105480, 67903437, 716939319, 14626598, 623486472, 1545667367, 12450208, 15721260, 41734, 4553546
			},
			.prefetch0 = 18823,
			.prefetch1 = 64381,
			.ram = aslw_final_ram_21,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_21,
		.transactions_len = 2,
		.lenght = 50,
	},
	{
		.name = "022 ASL.w 4, D0 e940",
		.initial = {
			.regs = {
				3180813450, 773204935, 433200793, 934564614, 2254700762, 473057944, 1402181017, 954084863, 425225368, 3540504295, 1962915873, 3181092871, 1732847343, 2541499072, 1973450177, 12751118, 10704884, 33029, 14998304
			},
			.prefetch0 = 59712,
			.prefetch1 = 5953,
			.ram = aslw_initial_ram_22,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3180841120, 773204935, 433200793, 934564614, 2254700762, 473057944, 1402181017, 954084863, 425225368, 3540504295, 1962915873, 3181092871, 1732847343, 2541499072, 1973450177, 12751118, 10704884, 33051, 14998306
			},
			.prefetch0 = 5953,
			.prefetch1 = 25774,
			.ram = aslw_final_ram_22,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_22,
		.transactions_len = 2,
		.lenght = 14,
	},
	{
		.name = "023 ASL.w 6, D2 ed42",
		.initial = {
			.regs = {
				3140555336, 2557906806, 3465020875, 1247275611, 4125421, 1156052571, 2477821357, 3244656827, 499580267, 3267193497, 1343355317, 3861540092, 1322867227, 4290867727, 3754483346, 9768090, 6982706, 40987, 9417924
			},
			.prefetch0 = 60738,
			.prefetch1 = 62671,
			.ram = aslw_initial_ram_23,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				3140555336, 2557906806, 3465048768, 1247275611, 4125421, 1156052571, 2477821357, 3244656827, 499580267, 3267193497, 1343355317, 3861540092, 1322867227, 4290867727, 3754483346, 9768090, 6982706, 40979, 9417926
			},
			.prefetch0 = 62671,
			.prefetch1 = 54808,
			.ram = aslw_final_ram_23,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_23,
		.transactions_len = 2,
		.lenght = 18,
	},
	{
		.name = "024 ASL.w D0, D7 e167",
		.initial = {
			.regs = {
				2242473885, 4253593802, 3467016573, 3415125875, 1904377986, 4289826602, 2058903109, 923460722, 2217427499, 3629009941, 4169857926, 117845874, 1511673042, 74391709, 2176663125, 1147462, 3299216, 9244, 1788624
			},
			.prefetch0 = 57703,
			.prefetch1 = 47186,
			.ram = aslw_initial_ram_24,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2242473885, 4253593802, 3467016573, 3415125875, 1904377986, 4289826602, 2058903109, 923402240, 2217427499, 3629009941, 4169857926, 117845874, 1511673042, 74391709, 2176663125, 1147462, 3299216, 9222, 1788626
			},
			.prefetch0 = 47186,
			.prefetch1 = 1847,
			.ram = aslw_final_ram_24,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_24,
		.transactions_len = 2,
		.lenght = 64,
	},
	{
		.name = "025 ASL.w 7, D4 ef44",
		.initial = {
			.regs = {
				4013325073, 3054354392, 3387005497, 3892581296, 3298904147, 3008260655, 2114162117, 1353174433, 580203999, 2931075369, 869686370, 3425536660, 976127066, 941262907, 3763132335, 14142284, 16489432, 9475, 3037158
			},
			.prefetch0 = 61252,
			.prefetch1 = 42810,
			.ram = aslw_initial_ram_25,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				4013325073, 3054354392, 3387005497, 3892581296, 3298896256, 3008260655, 2114162117, 1353174433, 580203999, 2931075369, 869686370, 3425536660, 976127066, 941262907, 3763132335, 14142284, 16489432, 9474, 3037160
			},
			.prefetch0 = 42810,
			.prefetch1 = 40627,
			.ram = aslw_final_ram_25,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_25,
		.transactions_len = 2,
		.lenght = 20,
	},
	{
		.name = "026 ASL.w 3, D6 e746",
		.initial = {
			.regs = {
				1057161852, 3339734338, 424394279, 653059823, 2112452351, 185591596, 175554222, 3853319785, 262112090, 1056390110, 3541916035, 3387673049, 2877652527, 2864098107, 2305433582, 5056070, 11600964, 34327, 11561730
			},
			.prefetch0 = 59206,
			.prefetch1 = 26146,
			.ram = aslw_initial_ram_26,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1057161852, 3339734338, 424394279, 653059823, 2112452351, 185591596, 175568240, 3853319785, 262112090, 1056390110, 3541916035, 3387673049, 2877652527, 2864098107, 2305433582, 5056070, 11600964, 34331, 11561732
			},
			.prefetch0 = 26146,
			.prefetch1 = 26672,
			.ram = aslw_final_ram_26,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_26,
		.transactions_len = 2,
		.lenght = 12,
	},
	{
		.name = "027 ASL.w 8, D3 e143",
		.initial = {
			.regs = {
				2211402513, 1331276863, 241809660, 1015051299, 2176558291, 2830520060, 2972683164, 3854987835, 2956980662, 1146455101, 3555352032, 2185615512, 1634135575, 1701747977, 2989253011, 11061454, 14641330, 791, 7643422
			},
			.prefetch0 = 57667,
			.prefetch1 = 11175,
			.ram = aslw_initial_ram_27,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				2211402513, 1331276863, 241809660, 1015030528, 2176558291, 2830520060, 2972683164, 3854987835, 2956980662, 1146455101, 3555352032, 2185615512, 1634135575, 1701747977, 2989253011, 11061454, 14641330, 770, 7643424
			},
			.prefetch0 = 11175,
			.prefetch1 = 63734,
			.ram = aslw_final_ram_27,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_27,
		.transactions_len = 2,
		.lenght = 22,
	},
	{
		.name = "028 ASL.w (d16, A7) e1ef",
		.initial = {
			.regs = {
				830404134, 3450780193, 3745005210, 3971575378, 3457581282, 3119616670, 3468858887, 604696715, 2190798829, 3738153195, 3530356048, 3963745497, 75256102, 2897684151, 3365951803, 11411026, 11958278, 42015, 12399630
			},
			.prefetch0 = 57839,
			.prefetch1 = 16416,
			.ram = aslw_initial_ram_28,
			.ram_len = 10,
		},
		.final = {
			.regs = {
				830404134, 3450780193, 3745005210, 3971575378, 3457581282, 3119616670, 3468858887, 604696715, 2190798829, 3738153195, 3530356048, 3963745497, 75256102, 2897684151, 3365951803, 11411026, 11958278, 42009, 12399634
			},
			.prefetch0 = 64824,
			.prefetch1 = 6886,
			.ram = aslw_final_ram_28,
			.ram_len = 10,
		},
		.transactions = aslw_transactions_28,
		.transactions_len = 4,
		.lenght = 16,
	},
	{
		.name = "029 ASL.w D3, D1 e761",
		.initial = {
			.regs = {
				1816232938, 1601225051, 3850351430, 4084002508, 1014303671, 1511032786, 2173729194, 2140948630, 3319539930, 2497982103, 1861460246, 4109926881, 494066061, 467855646, 3362379111, 7260386, 4068578, 33806, 9996578
			},
			.prefetch0 = 59233,
			.prefetch1 = 27643,
			.ram = aslw_initial_ram_29,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1816232938, 1601220608, 3850351430, 4084002508, 1014303671, 1511032786, 2173729194, 2140948630, 3319539930, 2497982103, 1861460246, 4109926881, 494066061, 467855646, 3362379111, 7260386, 4068578, 33819, 9996580
			},
			.prefetch0 = 27643,
			.prefetch1 = 31398,
			.ram = aslw_final_ram_29,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_29,
		.transactions_len = 2,
		.lenght = 30,
	},
	{
		.name = "030 ASL.w -(A0) e1e0",
		.initial = {
			.regs = {
				4125283403, 1721753983, 1955185457, 3761909196, 4035573784, 4183226199, 1754890071, 3458143762, 1999911848, 2706874350, 2448584490, 2360991418, 1535348089, 182208807, 3278617558, 13107796, 456930, 41245, 15527262
			},
			.prefetch0 = 57824,
			.prefetch1 = 60932,
			.ram = aslw_initial_ram_30,
			.ram_len = 8,
		},
		.final = {
			.regs = {
				4125283403, 1721753983, 1955185457, 3761909196, 4035573784, 4183226199, 1754890071, 3458143762, 1999911846, 2706874350, 2448584490, 2360991418, 1535348089, 182208807, 3278617558, 13107796, 456930, 41241, 15527264
			},
			.prefetch0 = 60932,
			.prefetch1 = 28200,
			.ram = aslw_final_ram_30,
			.ram_len = 8,
		},
		.transactions = aslw_transactions_30,
		.transactions_len = 4,
		.lenght = 14,
	},
	{
		.name = "031 ASL.w 2, D0 e540",
		.initial = {
			.regs = {
				1438371785, 2593089803, 827846641, 1423964992, 534349605, 1618183521, 2801561060, 397422328, 4201200852, 2860530371, 1423114194, 810070304, 1555505418, 1054886588, 1317212233, 8709438, 7386040, 773, 1489660
			},
			.prefetch0 = 58688,
			.prefetch1 = 13632,
			.ram = aslw_initial_ram_31,
			.ram_len = 6,
		},
		.final = {
			.regs = {
				1438334756, 2593089803, 827846641, 1423964992, 534349605, 1618183521, 2801561060, 397422328, 4201200852, 2860530371, 1423114194, 810070304, 1555505418, 1054886588, 1317212233, 8709438, 7386040, 787, 1489662
			},
			.prefetch0 = 13632,
			.prefetch1 = 41353,
			.ram = aslw_final_ram_31,
			.ram_len = 6,
		},
		.transactions = aslw_transactions_31,
		.transactions_len = 2,
		.lenght = 10,
	},
};

#endif /* RBT_ASLW_H */