#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/effective_address.h"

enum {
	RBT_MAX_INSTR_WORDS = 16,
};

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

typedef enum RBT_OpCondition {
	RBT_COND_T = 0b0000,  // True
	RBT_COND_F = 0b0001,  // False
	RBT_COND_HI = 0b0010, // HIgh
	RBT_COND_LS = 0b0011, // Lower or Same
	RBT_COND_CC = 0b0100, // Carry Clear
	RBT_COND_CS = 0b0101, // Cary Set
	RBT_COND_NE = 0b0110, // Not Equal
	RBT_COND_EQ = 0b0111, // EQual
	RBT_COND_VC = 0b1000, // oVerflow Clear
	RBT_COND_VS = 0b1001, // oVerflow Set
	RBT_COND_PL = 0b1010, // PLus
	RBT_COND_MI = 0b1011, // MInus
	RBT_COND_GE = 0b1100, // Greater or Equal
	RBT_COND_LT = 0b1101, // Less Than
	RBT_COND_GT = 0b1110, // Greater Than
	RBT_COND_LE = 0b1111, // Lower or Equal
} RBT_OpCondition;

// clang-format off
typedef enum RBT_OpMnemonic {
	RBT_OP_ABCD,
	RBT_OP_ADD, RBT_OP_ADDA, RBT_OP_ADDI, RBT_OP_ADDX,
	RBT_OP_AND, RBT_OP_ANDI,
	RBT_OP_ASL, RBT_OP_ASR,
	RBT_OP_Bcc,
	RBT_OP_BCHG, RBT_OP_BCLR,
	RBT_OP_BRA,
	RBT_OP_BSET,
	RBT_OP_BSR,
	RBT_OP_BTST,
	RBT_OP_CHK,
	RBT_OP_CLR,
	RBT_OP_CMP, RBT_OP_CMPA, RBT_OP_CMPI, RBT_OP_CMPM,
	RBT_OP_DBcc,
	RBT_OP_DIVS, RBT_OP_DIVU,
	RBT_OP_EOR, RBT_OP_EORI,
	RBT_OP_EXG,
	RBT_OP_EXT,
	RBT_OP_ILLEGAL,
	RBT_OP_JMP, RBT_OP_JSR,
	RBT_OP_LEA,
	RBT_OP_LINK,
	RBT_OP_LSL, RBT_OP_LSR,
	RBT_OP_MOVE, RBT_OP_MOVEA, RBT_OP_MOVEM, RBT_OP_MOVEP, RBT_OP_MOVEQ,
	RBT_OP_MULS, RBT_OP_MULU,
	RBT_OP_NBCD,
	RBT_OP_NEG, RBT_OP_NEGX,
	RBT_OP_NOP,
	RBT_OP_NOT,
	RBT_OP_OR, RBT_OP_ORI,
	RBT_OP_PEA,
	RBT_OP_RESET,
	RBT_OP_ROL, RBT_OP_ROR, RBT_OP_ROXL, RBT_OP_ROXR,
	RBT_OP_RTE, RBT_OP_RTR, RBT_OP_RTS,
	RBT_OP_SBCD,
	RBT_OP_Scc,
	RBT_OP_STOP,
	RBT_OP_SUB, RBT_OP_SUBA, RBT_OP_SUBI, RBT_OP_SUBQ, RBT_OP_SUBX,
	RBT_OP_SWAP,
	RBT_OP_TAS,
	RBT_OP_TRAP, RBT_OP_TRAPV,
	RBT_OP_TST,
	RBT_OP_UNLK,

	// M68010+
	RBT_OP_BKPT, RBT_OP_MOVEC, RBT_OP_MOVES, RBT_OP_RTD,

	// Unimplemeted lines
	RBT_OP_LINEA, RBT_OP_LINEF,
} RBT_OpMnemonic;
// clang-format on

typedef enum RBT_OperandType {
	RBT_OPERAND_NONE,
	RBT_OPERAND_EA,		 // Effective Address
	RBT_OPERAND_DREG,	 // Dn
	RBT_OPERAND_AREG,	 // An
	RBT_OPERAND_IMM,	 // Generic immediate data: #imm, reglist...
	RBT_OPERAND_DISP,	 // Displacement
	RBT_OPERAND_INDDISP, // Indirect displacement (d16, An)
	RBT_OPERAND_DIR,	 // Direction
	// Implied registers
	RBT_OPERAND_CCR,
	RBT_OPERAND_SR,
	RBT_OPERAND_USP,
} RBT_OperandType;

typedef struct RBT_Operand {
	RBT_OperandType type;
	RBT_OperandSize size; // Specific size of operation: Eg. BTST <#imm,Dn>, Dn is Long
	union {
		RBT_EffectiveAddress ea;
		u8 reg;
		u32 imm;
		i32 disp;
		RBT_IndirectDisp inddisp;
		bool dir;
	};
} RBT_Operand;

typedef struct RBT_Instruction {
	RBT_OpMnemonic mnemonic;
	RBT_OperandSize size; // General size of instruction
	u32 start_pc;
	u8 len;

	RBT_Operand aux;
	RBT_Operand src;
	RBT_Operand dst;

	// Raw instruction words (max: opcode + 15 extension words)
	u16 words[RBT_MAX_INSTR_WORDS];
	u8 word_count;
} RBT_Instruction;

RBT_ErrorCode rbt_decode_instruction(RBT_MemoryBus *bus, u32 pc, RBT_Instruction *instr);
