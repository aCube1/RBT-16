#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

typedef enum RBT_OpGroup {
	_OPGROUP_BITMOVEPIMM, // Bit/MOVEP/Immediate
	_OPGROUP_MOVEBYTE,	  // MOVE.b
	_OPGROUP_MOVELONG,	  // MOVE.l
	_OPGROUP_MOVEWORD,	  // MOVE.w
	_OPGROUP_MISC,		  // Miscellaneous
	_OPGROUP_ADDQSUBQ,	  // ADDQ/SUBQ/DBcc
	_OPGROUP_BRANCH,	  // Bcc/BSR/BRA
	_OPGROUP_MOVEQ,		  // MOVEQ
	_OPGROUP_ORDIV,		  // OR/DIV/SBCD
	_OPGROUP_SUBSUBX,	  // SUB/SUBX
	_OPGROUP_LINEA,		  // Reserved/Unassigned
	_OPGROUP_CMPEOR,	  // CMP/EOR
	_OPGROUP_ANDMUL,	  // AND/MUL/ABCD/EXG
	_OPGROUP_ADDADDX,	  // ADD/ADDX
	_OPGROUP_SHIFT,		  // Shift/Rotate
	_OPGROUP_LINEF,		  // Extensions
} RBT_OpGroup;

RBT_ErrorCode _decode_instruction(RBT_MemoryBus *bus, u32 pc, RBT_Instruction *instr);
