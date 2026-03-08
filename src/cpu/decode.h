#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

typedef enum RBT_OpGroup {
	RBT_OPGROUP_BITMOVEPIMM, // Bit/MOVEP/Immediate
	RBT_OPGROUP_MOVEBYTE,	 // MOVE.b
	RBT_OPGROUP_MOVELONG,	 // MOVE.l
	RBT_OPGROUP_MOVEWORD,	 // MOVE.w
	RBT_OPGROUP_MISC,		 // Miscellaneous
	RBT_OPGROUP_ADDQSUBQ,	 // ADDQ/SUBQ/DBcc
	RBT_OPGROUP_BRANCH,		 // Bcc/BSR/BRA
	RBT_OPGROUP_MOVEQ,		 // MOVEQ
	RBT_OPGROUP_ORDIV,		 // OR/DIV/SBCD
	RBT_OPGROUP_SUBSUBX,	 // SUB/SUBX
	RBT_OPGROUP_LINEA,		 // Reserved/Unassigned
	RBT_OPGROUP_CMPEOR,		 // CMP/EOR
	RBT_OPGROUP_ANDMUL,		 // AND/MUL/ABCD/EXG
	RBT_OPGROUP_ADDADDX,	 // ADD/ADDX
	RBT_OPGROUP_SHIFT,		 // Shift/Rotate
	RBT_OPGROUP_LINEF,		 // Extensions
} RBT_OpGroup;

RBT_ErrorCode rbt_decode_instruction(RBT_MemoryBus *bus, u32 pc, RBT_Instruction *instr);
