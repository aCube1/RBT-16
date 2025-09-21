#ifndef _RBT_CORE_DECODER_HPP
#define _RBT_CORE_DECODER_HPP

#include "core/EffectiveAddress.hpp"
#include "types.hpp"

#include <functional>
#include <optional>
#include <variant>

namespace rbt {

class Cpu;
class Mmu;

enum class OpClass : i8 {
	BitImmMovep, // 0b0000 | Bit Manipulation/MOVEP/Immediate
	MoveByte,	 // 0b0001 | Move Byte
	MoveLong,	 // 0b0010 | Move Long
	MoveWord,	 // 0b0011 | Move Word
	Misc,		 // 0b0100 | Miscellaneous
	AddQSubQ,	 // 0b0101 | ADDQ/SUBQ/DBcc/TRAPcc
	Branch,		 // 0b0110 | Bcc/BSR/BRA
	MoveQ,		 // 0b0111 | MOVEQ
	OrDiv,		 // 0b1000 | OR/DIV/SBCD
	SubSubX,	 // 0b1001 | SUB/SUBX
	Reserved,	 // 0b1010 | Reserved/Unassigned
	CmpEor,		 // 0b1011 | CMP/EOR
	AndMul,		 // 0b1100 | AND/MUL/ABDC/EXG
	AddAddX,	 // 0b1101 | ADD/ADDX
	Shift,		 // 0b1110 | Shift/Rotate/BitField
	Extension,	 // 0b1111 | Coprocessor Interface/Extensions
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

// TODO: Store disassembler data
struct Instruction {
	using Handler = std::function<void(Cpu&)>;
	Handler handler = nullptr;

	u16 raw;
	OpClass opclass;
	OpMnemonic mnemonic;
	OpCondition cond;
	OperandSize size;
	EffectiveAddress src;
	EffectiveAddress dest;

	[[nodiscard]] static std::optional<Instruction> fetch_and_decode(
		const Mmu& mmu, u32 pc, u32& next_pc
	);

private:
	std::optional<u32> decode_bitimmmovep(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_movebyte(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_movelong(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_moveword(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_misc(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_addqsubq(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_branch(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_moveq(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_ordiv(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_subsubx(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_reserved(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_cmpeor(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_andmul(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_addaddx(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_shift(const Mmu& mmu, u32 pc);
	std::optional<u32> decode_extension(const Mmu& mmu, u32 pc);
};

} // namespace rbt

#endif
