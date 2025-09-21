#include "core/decoder.hpp"

#include "core/Cpu.hpp"
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

	using DecoderFn = std::optional<u32> (Instruction::*)(const Mmu&, u32);
	static constexpr DecoderFn decoders[] = {
		&Instruction::decode_bitimmmovep, &Instruction::decode_movebyte,
		&Instruction::decode_movelong,	  &Instruction::decode_moveword,
		&Instruction::decode_misc,		  &Instruction::decode_addqsubq,
		&Instruction::decode_branch,	  &Instruction::decode_moveq,
		&Instruction::decode_ordiv,		  &Instruction::decode_subsubx,
		&Instruction::decode_reserved,	  &Instruction::decode_cmpeor,
		&Instruction::decode_andmul,	  &Instruction::decode_addaddx,
		&Instruction::decode_shift,		  &Instruction::decode_extension,
	};

	u8 opclass = (instr.raw & 0xf000) >> 12;

	auto res = (instr.*decoders[opclass])(mmu, pc);
	if (!res) {
		log::error("[CPU] > Failed to decode instruction from class: {:#6b}", opclass);
		return std::nullopt;
	}

	next_pc = *res;
	return instr;
}

std::optional<u32> _decode_immediate(const Mmu& mmu, u32 pc) {
	u32 next_pc = pc;

	return next_pc;
}

std::optional<u32> Instruction::decode_bitimmmovep(const Mmu& mmu, u32 pc) {
	// | F | E | D | C | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
	// | 0 | 0 | 0 | 0 | D | D | D | I | S | S | M | M | M | R | R | R |
	//
	// RRR - Xn Register
	// MMM - Address Mode
	// SS  - Operand Size
	// I   - 1=Dn, 0=Imm
	// DDD - Data Register or Instruction ID

	u8 reg = (raw >> 0) & 0x07;
	u8 mode = (raw >> 3) & 0x07;
	u8 size = (raw >> 6) & 0x03;
	u8 kind = (raw >> 8) & 0x0f;

	u32 next_pc = pc + 2; // Skip opcode

	opclass = OpClass::BitImmMovep;

	switch (kind) {
	case 0x00: // ORI | ORI to CCR | ORI to SR
	case 0x02: // ANDI | ANDI to CCR | ANDI to SR
	case 0x04: // SUBI
	case 0x06: // ADDI
	case 0x0a: // EORI | EORI to CCR | EORI to SR
	case 0x0c: // CMPI
	{
		src = _TRY(EffectiveAddress::from_immediate(size, mmu, next_pc));
		next_pc += src.bytes_read;

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
				return std::nullopt;
			}
		} else {
			dest = _TRY(EffectiveAddress::decode(mode, reg, size, mmu, next_pc));
			next_pc += dest.bytes_read;
		}

		// clang-format off
		switch (kind) {
		case 0x00: handler = [this](Cpu& cpu) { cpu.op_or(src, dest); }; break;
		case 0x02: handler = [this](Cpu& cpu) { cpu.op_and(src, dest); }; break;
		case 0x04: handler = [this](Cpu& cpu) { cpu.op_sub(src, dest); }; break;
		case 0x06: handler = [this](Cpu& cpu) { cpu.op_add(src, dest); }; break;
		case 0x0a: handler = [this](Cpu& cpu) { cpu.op_eor(src, dest); }; break;
		case 0x0c: handler = [this](Cpu& cpu) { cpu.op_cmp(src, dest); }; break;
		default: std::unreachable();
		}
		// clang-format on
	} break;
	case 0x0e: { // MOVES
		bool is_addr;
		u8 rn_reg;
		bool to_memory;

		if (auto index = mmu.read_be16(next_pc); !index) {
			log::error(
				"[CPU]({:#010x}) > Failed to read word extension: {}", next_pc,
				index.error()
			);
			return std::nullopt;
		} else {
			next_pc += 2;

			// | F | E  | D  | C  | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
			// |A/D| Register     |DR | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
			is_addr = ((*index) >> 15) & 0x01;
			rn_reg = ((*index) >> 12) & 0x07;
			to_memory = ((*index) >> 11) & 0x01;
		}

		dest = _TRY(EffectiveAddress::decode(mode, reg, size, mmu, next_pc));
		next_pc += dest.bytes_read;

		handler = [=, this](Cpu& cpu) { cpu.op_moves(dest, is_addr, rn_reg, to_memory); };
	} break;
	default: { // BTST | BCHG | BCLR | BSET | MOVEP
		// Handle the MOVEP
		if (mode == 0b001) {
			i32 displacement;
			if (auto data = mmu.read_be16(next_pc); !data) {
				log::error(
					"[CPU]({:#010x}) > Failed to read displacement: {}", next_pc,
					data.error()
				);
				return std::nullopt;
			} else {
				displacement = operand_sign_extend(OperandSize::Word, *data);
				next_pc += 2;
			}

			u8 dx_reg = (raw >> 9) & 0x07;
			u8 ay_reg = (raw >> 0) & 0x07;
			bool is_long = (raw >> 6) & 0x01;
			bool to_memory = (raw >> 7) & 0x01;

			handler = [=](Cpu& cpu) {
				cpu.op_movep(dx_reg, ay_reg, to_memory, is_long, displacement);
			};
			break;
		}

		bool is_imm = (raw >> 8) & 0x01;
		u8 bit_index = reg;
		if (is_imm) {
			auto data = mmu.read_be16(next_pc);
			if (!data) {
				log::error(
					"[CPU]({:#010x}) > Failed to read bit-field immediate: {}", next_pc,
					data.error()
				);
				return std::nullopt;
			}

			bit_index = (*data) & 0x00ff;
			next_pc += 2;
		}

		dest = _TRY(EffectiveAddress::decode(mode, reg, size, mmu, next_pc));
		next_pc += dest.bytes_read;

		switch (size) {
		case 0b00:
			handler = [=, this](Cpu& cpu) { cpu.op_btst(is_imm, bit_index, dest); };
			break;
		case 0b01:
			handler = [=, this](Cpu& cpu) { cpu.op_bchg(is_imm, bit_index, dest); };
			break;
		case 0b10:
			handler = [=, this](Cpu& cpu) { cpu.op_bclr(is_imm, bit_index, dest); };
			break;
		case 0b11:
			handler = [=, this](Cpu& cpu) { cpu.op_bset(is_imm, bit_index, dest); };
			break;
		default:
			std::unreachable();
		}
	} break;
	}

	return next_pc;
}

std::optional<u32> Instruction::decode_movebyte(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_movelong(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_moveword(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_misc(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_addqsubq(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_branch(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_moveq(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_ordiv(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_subsubx(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_reserved(const Mmu& mmu, u32 pc) {
	_UNUSED(mmu);

	log::warn(
		"[CPU]({:#10x}) > Invalid instruction from class: 0b1010 | "
		"Unassigned/Reserved",
		pc
	);
	return std::nullopt;
}

std::optional<u32> Instruction::decode_cmpeor(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_andmul(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_addaddx(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_shift(const Mmu& mmu, u32 pc) { }

std::optional<u32> Instruction::decode_extension(const Mmu& mmu, u32 pc) {
	_UNUSED(mmu);

	log::warn(
		"[CPU]({:#10x}) > Invalid instruction from class: 0b1111 | Coprocessor "
		"Interface",
		pc
	);
	return std::nullopt;
}
