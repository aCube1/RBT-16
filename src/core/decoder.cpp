#include "core/decoder.hpp"

#include "core/Mmu.hpp"
#include "utils/log.hpp"

using namespace rbt;

std::optional<Instruction> Instruction::fetch_and_decode(
	const Mmu& mmu, u32 pc, u32& next_pc
) {
	auto raw = mmu.read_be16(pc);
	if (!raw) {
		log::warn("[CPU] > Failed to fetch instruction at address: {:#10x}", pc);
		return std::nullopt;
	}

	Instruction instr {};
	instr.raw = *raw;
	instr.pc = pc;
	instr.opclass = static_cast<OpClass>((instr.raw & 0xf000) >> 12);

	std::optional<u32> result = std::nullopt;
	switch (instr.opclass) {
	case OpClass::BitImmMovep: {
		// | F | E | D | C | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
		// | C | C | C | C | K | K | K | K | S | S | M | M | M | R | R | R |
		//
		// CCCC - Operand Class
		// KKKK - Data Register or Instruction ID
		// SS   - Operand Size
		// MMM  - Address Mode
		// RRR  - Xn Register
		u8 kind = (instr.raw >> 8) & 0x0f;
		u8 mode = (instr.raw >> 3) & 0x07;

		if ((kind & 0x01) != 0x01 && mode == 0b001) {
			log::warn("[CPU]({:#010x}) > Illegal address mode: An", pc);
			break;
		}

		pc += 2; // Skip opcode

		if ((kind & 0x01) != 0x01 && kind != 0x0e && kind != 0x08) {
			// ORI | ORItoCCR | ORItoSR
			// ANDI | ANDItoCCR | ANDItoSR
			// EORI | EORItoCCR | EORItoSR
			// SUBI | ADDI | CMPI
			result = instr.decode_class0_imm(mmu, pc);
		} else if (kind == 0x0e) {
			// MOVES
			result = instr.decode_class0_moves(mmu, pc);
		} else {
			if (mode == 0b001) { // MOVEP
				result = instr.decode_class0_movep(mmu, pc);
				break;
			}

			instr.decode_class0_bit(mmu, pc);
		}
	} break;
	case OpClass::MoveByte: {
		// TODO: MoveByte
	} break;
	case OpClass::MoveLong: {
		// TODO: MoveLong
	} break;
	case OpClass::MoveWord: {
		// TODO: MoveWord
	} break;
	case OpClass::Misc: {
		// TODO: Miscellaneous
	} break;
	case OpClass::AddQSubQ: {
		// TODO: ADDQ/SUBQ/DBcc
	} break;
	case OpClass::Branch: {
		// TODO: Bcc/BSR/BRA
	} break;
	case OpClass::MoveQ: {
		// TODO: MOVEQ
	} break;
	case OpClass::OrDiv: {
		// TODO: OR/DIV/SBCD
	} break;
	case OpClass::SubSubX: {
		// TODO: SUB/SUBX
	} break;
	case OpClass::CmpEor: {
		// TODO: CMP/EOR
	} break;
	case OpClass::AndMul: {
		// TODO: AND/MUL/ABCD/EXG
	} break;
	case OpClass::AddAddX: {
		// TODO: ADD/ADDX
	} break;
	case OpClass::Shift: {
		// TODO: Shift/Rotate/Bitfield
	} break;
	case OpClass::Extension:
	case OpClass::Reserved:
		break;
	default:
		std::unreachable();
	}

	if (!result) {
		log::error(
			"[CPU]({:#010x}) > Failed to decode instruction from class: {}", instr.pc,
			instr.opclass
		);
		return std::nullopt;
	}

	next_pc = *result;
	return instr;
}

std::optional<u32> Instruction::decode_class0_imm(const Mmu& mmu, u32 pc) {
	u8 reg = (raw >> 0) & 0x07;
	u8 mode = (raw >> 3) & 0x07;
	u8 size = (raw >> 6) & 0x03;
	u8 kind = (raw >> 8) & 0x0f;

	src = _TRY(EffectiveAddress::from_immediate(size, mmu, pc));
	pc += src->bytes_read;

	if ((kind == 0x00 || kind == 0x02 || kind == 0x0a) // Only ORI/ANDI/EORI
		&& mode == 0b111 && reg == 0b100) {
		if (size == 0b00) {
			dest = EffectiveAddress::from_register(
				RegisterType::ConditionCode, 0, OperandSize::Byte
			);
		} else if (size == 0b01) {
			dest = EffectiveAddress::from_register(
				RegisterType::StatusRegister, 0, OperandSize::Word
			);
		} else {
			log::error("[CPU]({:#10x}) > Illegal register value for ORI/ANDI/EORI", pc);
			return std::nullopt;
		}
	} else {
		opsize = static_cast<OperandSize>(size);
		dest = _TRY(EffectiveAddress::decode(mode, reg, size, mmu, pc));
		pc += dest->bytes_read;
	}

	// clang-format off
	switch (kind) {
	case 0x00: mnemonic = OpMnemonic::ORI; break;
	case 0x02: mnemonic = OpMnemonic::ANDI; break;
	case 0x04: mnemonic = OpMnemonic::SUBI; break;
	case 0x06: mnemonic = OpMnemonic::ADDI; break;
	case 0x0a: mnemonic = OpMnemonic::EORI; break;
	case 0x0c: mnemonic = OpMnemonic::CMPI; break;
	default: std::unreachable();
	}
	// clang-format on

	return pc;
}

std::optional<u32> Instruction::decode_class0_moves(const Mmu& mmu, u32 pc) {
	u8 reg = (raw >> 0) & 0x07;
	u8 mode = (raw >> 3) & 0x07;
	u8 size = (raw >> 6) & 0x03;

	if (auto ext = mmu.read_be16(pc); ext) {
		// | F | E  | D  | C  | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
		// |A/D| Register     |DR | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
		moves.emplace();
		moves->is_addr = ((*ext) >> 15) & 0x01;
		moves->reg = ((*ext) >> 12) & 0x07;
		moves->to_memory = ((*ext) >> 11) & 0x01;

		pc += 2;
	} else {
		log::error(
			"[CPU]({:#010x}) > Failed to read word extension: {}", pc, ext.error()
		);
		return std::nullopt;
	}

	// Illegal for: Dn | (d16, PC) | (d8, PC, Xn) | #imm
	if (mode == 0b000 || (mode == 0b111 && (reg >= 0b010))) {
		log::error(
			"[CPU]({:#010x}) > Illegal MOVES address mode: mode={:#06b} reg={:#06b}", pc,
			mode, reg
		);
		return std::nullopt;
	}

	dest = _TRY(EffectiveAddress::decode(mode, reg, size, mmu, pc));
	pc += dest->bytes_read;

	opsize = static_cast<OperandSize>(size);
	mnemonic = OpMnemonic::MOVES;

	return pc;
}

std::optional<u32> Instruction::decode_class0_movep(const Mmu& mmu, u32 pc) {
	movep.emplace();

	if (auto data = mmu.read_be16(pc); data) {
		movep->displacement = operand_sign_extend(OperandSize::Word, *data);
	} else {
		log::error("[CPU]({:#010x}) > Failed to read displacement: {}", pc, data.error());
		return std::nullopt;
	}
	pc += 2;

	movep->dx_reg = (raw >> 9) & 0x07;
	movep->ay_reg = (raw >> 0) & 0x07;
	movep->is_long = (raw >> 6) & 0x01;
	movep->to_memory = (raw >> 7) & 0x01;

	mnemonic = OpMnemonic::MOVEP;
	return pc;
}

std::optional<u32> Instruction::decode_class0_bit(const Mmu& mmu, u32 pc) {
	u8 reg = (raw >> 0) & 0x07;
	u8 mode = (raw >> 3) & 0x07;
	u8 type = (raw >> 6) & 0x03;

	opsize = OperandSize::Byte;
	is_bit_immediate = (raw >> 8) & 0x01;

	if (is_bit_immediate) {
		auto data = mmu.read_be16(pc);
		if (!data) {
			log::error(
				"[CPU]({:#010x}) > Failed to read bit-field immediate: {}", pc,
				data.error()
			);
			return std::nullopt;
		}

		bit_index = (*data) & 0x00ff;
		pc += 2;
	} else {
		bit_index = reg;
	}

	// Illegal for: (d16, PC) | (d8, PC, Xn) | #imm
	if (mode == 0b111 && (reg >= 0b010)) {
		log::error(
			"[CPU]({:#010x}) > Illegal bit-manipulation address mode: mode={:#06b} "
			"reg={:#06b}",
			pc, mode, reg
		);
		return std::nullopt;
	}

	if (mode == 0b000) {
		dest = _TRY(EffectiveAddress::decode(mode, reg, OperandSize::Long, mmu, pc));
	} else {
		dest = _TRY(EffectiveAddress::decode(mode, reg, OperandSize::Byte, mmu, pc));
	}

	pc += dest->bytes_read;

	// clang-format off
	switch (type) {
	case 0b00: mnemonic = OpMnemonic::BTST; break;
	case 0b01: mnemonic = OpMnemonic::BCHG; break;
	case 0b10: mnemonic = OpMnemonic::BCLR; break;
	case 0b11: mnemonic = OpMnemonic::BSET; break;
	default: std::unreachable();
	}
	// clang-format on

	return pc;
}
