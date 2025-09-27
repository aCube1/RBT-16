#ifndef _RBT_CORE_DECODER_HPP
#define _RBT_CORE_DECODER_HPP

#include "core/EffectiveAddress.hpp"
#include "types.hpp"

#include <optional>

namespace rbt {

class Mmu;

enum class OpClass : i8 {
	BitImmMovep, // 0b0000 | Bit Manipulation/MOVEP/Immediate
	MoveByte,	 // 0b0001 | Move Byte
	MoveLong,	 // 0b0010 | Move Long
	MoveWord,	 // 0b0011 | Move Word
	Misc,		 // 0b0100 | Miscellaneous
	AddQSubQ,	 // 0b0101 | ADDQ/SUBQ/DBcc
	Branch,		 // 0b0110 | Bcc/BSR/BRA
	MoveQ,		 // 0b0111 | MOVEQ
	OrDiv,		 // 0b1000 | OR/DIV/SBCD
	SubSubX,	 // 0b1001 | SUB/SUBX
	Reserved,	 // 0b1010 | Reserved/Unassigned
	CmpEor,		 // 0b1011 | CMP/EOR
	AndMul,		 // 0b1100 | AND/MUL/ABCD/EXG
	AddAddX,	 // 0b1101 | ADD/ADDX
	Shift,		 // 0b1110 | Shift/Rotate/Bitfield
	Extension,	 // 0b1111 | Extensions
};

enum class OpCondition : u8 {
	True,			// 0b0000 | T
	False,			// 0b0001 | F
	Higher,			// 0b0010 | HI
	LowerOrSame,	// 0b0011 | LS
	CarryClear,		// 0b0100 | CC
	CarrySet,		// 0b0101 | CS
	NotEqual,		// 0b0110 | NE
	Equal,			// 0b0111 | EQ
	OverflowClear,	// 0b1000 | VC
	OverflowSet,	// 0b1001 | VS
	Plus,			// 0b1010 | PL
	Minus,			// 0b1011 | MI
	GreaterOrEqual, // 0b1100 | GE
	LessThan,		// 0b1101 | LT
	GreaterThan,	// 0b1110 | GT
	LessOrEqual,	// 0b1111 | LE
};

// clang-format off
enum class OpMnemonic : u8 {
	ABCD,
	ADD, ADDA, ADDI, ADDQ, ADDX,
	AND, ANDI,
	ASL, ASR,
	Bcc,
	BCHG, BCLR,
	BKPT,
	BRA,
	BSET,
	BSR,
	BTST,
	CHK,
	CLR,
	CMP, CMPA, CMPI, CMPM,
	DBcc,
	DIVS, DIVU,
	EOR, EORI,
	EXG,
	EXT,
	ILLEGAL,
	JMP, JSR,
	LEA,
	LINK,
	LSL, LSR,
	MOVE, MOVEA,
	MOVE_from_CCR, MOVE_to_CCR,
	MOVE_from_SR, MOVE_to_SR,
	MOVE_USP,
	MOVEC, MOVEM, MOVEP, MOVEQ, MOVES,
	MULS, MULU,
	NBCD,
	NEG, NEGX,
	NOP,
	NOT,
	OR, ORI,
	PEA,
	RESET,
	ROL, ROR,
	ROXL, ROXR,
	RTD, RTE, RTR, RTS,
	SBCD,
	Scc,
	STOP,
	SUB, SUBA, SUBI, SUBQ, SUBX,
	SWAP,
	TAS,
	TRAP, TRAPV,
	TST,
	UNLK,
};
// clang-format on

struct Instruction {
	struct MoveS {
		bool is_addr;
		bool to_memory;
		u8 reg;
	};

	struct MoveP {
		i32 displacement;
		u8 dx_reg;
		u8 ay_reg;
		bool is_long;
		bool to_memory;
	};

	u32 pc;
	u16 raw;
	OpClass opclass;
	OperandSize opsize = OperandSize::None;
	OpMnemonic mnemonic;

	// Generic operands
	std::optional<EffectiveAddress> src = std::nullopt;
	std::optional<EffectiveAddress> dest = std::nullopt;

	// Special operands
	std::optional<OpCondition> cond; // Bcc/DBcc/Scc
	std::optional<u32> immediate;
	std::optional<i32> displacement;
	std::optional<u8> bit_index;   // BTST/BCHG/BCLR/BSET
	std::optional<u8> trap_vector; // TRAP/TRAPV #<n>

	// Instruction specific
	std::optional<MoveS> moves;
	std::optional<MoveP> movep;
	bool is_bit_immediate = false;

	[[nodiscard]] static std::optional<Instruction> fetch_and_decode(
		const Mmu& mmu, u32 pc, u32& next_pc
	);

private:
	std::optional<u32> decode_class0_imm(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_class0_moves(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_class0_movep(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_class0_bit(const Mmu& mmu, u32 pc);
};

} // namespace rbt

template <>
struct std::formatter<rbt::OpClass> : std::formatter<std::string> {
	auto format(const rbt::OpClass& opclass, std::format_context& ctx) const {
		std::string out;

		// clang-format off
		switch (opclass) {
		case rbt::OpClass::BitImmMovep: out = "Bit Manipulation/MOVEP/Immediate"; break;
		case rbt::OpClass::MoveByte: out = "Move Byte"; break;
		case rbt::OpClass::MoveLong: out = "Move Long"; break;
		case rbt::OpClass::MoveWord: out = "Move Word"; break;
		case rbt::OpClass::Misc: out = "Miscellaneous"; break;
		case rbt::OpClass::AddQSubQ: out = "ADDQ/SUBQ/DBcc"; break;
		case rbt::OpClass::Branch: out = "Bcc/BSR/BRA"; break;
		case rbt::OpClass::MoveQ: out = "MOVEQ"; break;
		case rbt::OpClass::OrDiv: out = "OR/DIV/SBCD"; break;
		case rbt::OpClass::SubSubX: out = "SUB/SUBX"; break;
		case rbt::OpClass::Reserved: out = "Reserved/Unassigned"; break;
		case rbt::OpClass::CmpEor: out = "CMP/EOR"; break;
		case rbt::OpClass::AndMul: out = "AND/MUL/ABCD/EXG"; break;
		case rbt::OpClass::AddAddX: out = "ADD/ADDX"; break;
		case rbt::OpClass::Shift: out = "Shift/Rotate/BitField"; break;
		case rbt::OpClass::Extension: out = "Extensions"; break;
		default: std::unreachable();
		}
		// clang-format on

		return std::formatter<std::string>::format(out, ctx);
	}
};

#endif
