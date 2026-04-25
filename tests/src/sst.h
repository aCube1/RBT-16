#pragma once

#include "rbt/basic_types.h"

enum {
	SST_REG_D0 = 0,
	SST_REG_D1,
	SST_REG_D2,
	SST_REG_D3,
	SST_REG_D4,
	SST_REG_D5,
	SST_REG_D6,
	SST_REG_D7,
	SST_REG_A0,
	SST_REG_A1,
	SST_REG_A2,
	SST_REG_A3,
	SST_REG_A4,
	SST_REG_A5,
	SST_REG_A6,
	SST_REG_USP, // A7
	SST_REG_SSP,
	SST_REG_SR,
	SST_REG_PC,
	SST_REG_COUNT,
};

typedef enum SST_TransactionKind {
	SST_TS_N = 0, // Idle
	SST_TS_W,	  // Write
	SST_TS_R,	  // Read
	SST_TS_T,	  // TAS
	SST_TS_RE,	  // Read Error
	SST_TS_WE,	  // Write Error
} SST_TransactionKind;

typedef struct SST_RamByte {
	u32 addr;
	u8 byte;
} SST_RamByte;

typedef struct SST_CpuState {
	u32 regs[SST_REG_COUNT];
	u32 prefetch0;
	u32 prefetch1;
	const SST_RamByte *ram;
	u32 ram_len;
} SST_CpuState;

typedef struct SST_Transaction {
	SST_TransactionKind kind;
	u32 cycles;
	struct {
		u32 fc; // Function Code
		u32 addr;
		u32 data;
		bool uds;
		bool lds;
		bool is_word; // 0: .b | 1: .w
	} bus;
} SST_Transaction;

typedef struct SST_TestCase {
	const char *name;
	SST_CpuState initial;
	SST_CpuState final;
	const SST_Transaction *transactions;
	u32 transactions_len;
	u32 lenght;
} SST_TestCase;
