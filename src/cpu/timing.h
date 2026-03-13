#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/types.h"

typedef struct RBT_TimingCtx {
	bool branch_taken; // for Bcc, DBcc
	u8 shift_n;		   // for 6+2n
	u8 movem_n;		   // Popcount (mask)
} RBT_TimingCtx;

typedef struct RBT_Instruction RBT_Instruction;

u16 _calculate_timing(
	const RBT_Instruction *instr, const RBT_TimingCtx *ctx, RBT_CpuModel cpu_model
);
