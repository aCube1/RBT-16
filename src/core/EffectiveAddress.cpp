#include "core/EffectiveAddress.hpp"

#include "core/Cpu.hpp"
#include "utils/log.hpp"

using namespace rbt;

[[nodiscard]] std::optional<IndexExtension> IndexExtension::decode(
	const Mmu& mmu, u32 pc
) {
	auto data = mmu.read_be16(pc);
	if (!data) {
		log::warn(
			"[CPU]({:#010x}) > Failed to read brief extension word: {}", pc, data.error()
		);
		return std::nullopt;
	}

	return IndexExtension::decode(*data);
}

[[nodiscard]] std::optional<IndexExtension> IndexExtension::decode(u16 ext) {
	if ((ext >> 8) & 0x00) {
		log::warn("[CPU] > M68010 doesn't support full extension word!");
		return std::nullopt;
	}

	// Brief Extension Word
	// | F | E  | D  | C  | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
	// |A/D| Register     | S | Scale | 0 | Displacement Integer          |
	IndexExtension ix {};
	ix.is_addr = (ext >> 15) & 0x01; // A/D: 0=Dn; 1=An
	ix.is_long = (ext >> 11) & 0x01; // S: 0=W; 1=L
	ix.reg = (ext >> 12) & 0x07;
	ix.scale = (ext >> 9) & 0x03;
	ix.displacement = operand_sign_extend(OperandSize::Byte, ext & 0xff);

	return ix;
}

u16 IndexExtension::encode() const {
	u16 ext = 0;

	ext |= (is_addr & 0x01) << 15;
	ext |= (is_long & 0x01) << 11;
	ext |= (reg & 0x07) << 12;
	ext |= (scale & 0x03) << 9;
	ext |= (displacement & 0xff);

	return ext;
}

[[nodiscard]] std::optional<EffectiveAddress> EffectiveAddress::decode(
	u8 mode, u8 reg, u8 size, const Mmu& mmu, u32 pc
) {
	EffectiveAddress ea {};
	ea.reg = reg;
	ea.size = OperandSize::None;
	ea.program_counter = pc;

	switch (mode) {
	case 0b000: // Dn
		ea.mode = AddressMode::DirectData;
		ea.reg_type = RegisterType::Data;
		ea.size = static_cast<OperandSize>(size);

		break;
	case 0b001: // An
		ea.mode = AddressMode::DirectAddress;
		ea.reg_type = RegisterType::Address;
		ea.size = static_cast<OperandSize>(size);

		break;
	case 0b010: // (An)
		ea.mode = AddressMode::Indirect;
		ea.reg_type = RegisterType::Address;

		break;
	case 0b011: // (An)+
		ea.mode = AddressMode::IndirectPostInc;
		ea.reg_type = RegisterType::Address;
		ea.size = static_cast<OperandSize>(size);

		break;
	case 0b100: // -(An)
		ea.mode = AddressMode::IndirectPreDec;
		ea.reg_type = RegisterType::Address;
		ea.size = static_cast<OperandSize>(size);

		break;
	case 0b101: { // (d16, An)
		ea.mode = AddressMode::IndirectDisplacement;
		ea.reg_type = RegisterType::Address;
		ea.bytes_read = 2;

		auto disp = mmu.read_be16(pc);
		if (!disp) {
			log::warn(
				"[CPU]({:#010x}) > Failed to read absolute address: {}", pc, disp.error()
			);
			return std::nullopt;
		}

		ea.displacement = operand_sign_extend(OperandSize::Word, *disp);
	} break;
	case 0b110: // (d8, An, Xn)
		ea.mode = AddressMode::IndirectIndex;
		ea.reg_type = RegisterType::Address;
		ea.bytes_read = 2;
		ea.index = IndexExtension::decode(mmu, pc);
		if (!ea.index) {
			return std::nullopt;
		}

		break;
	case 0b111:
		switch (reg) {
		case 0b000: { // (xxx).W
			ea.mode = AddressMode::AbsoluteShort;
			ea.reg_type = RegisterType::None;
			ea.bytes_read = 2;

			auto abs = mmu.read_be16(pc);
			if (!abs) {
				log::warn(
					"[CPU]({:#010x}) > Failed to read absolute address: {}", pc,
					abs.error()
				);
				return std::nullopt;
			}

			ea.absolute = *abs;
		} break;
		case 0b001: { // (xxx).L
			ea.mode = AddressMode::AbsoluteLong;
			ea.reg_type = RegisterType::None;
			ea.bytes_read = 4;

			auto abs = mmu.read_be32(pc);
			if (!abs) {
				log::warn(
					"[CPU]({:#010x}) > Failed to read absolute address: {}", pc,
					abs.error()
				);
				return std::nullopt;
			}

			ea.absolute = *abs;
		} break;
		case 0b010: { // (d16, PC)
			ea.mode = AddressMode::ProgramCounterDisplacement;
			ea.reg_type = RegisterType::ProgramCounter;
			ea.bytes_read = 2;

			auto disp = mmu.read_be16(pc);
			if (!disp) {
				log::warn(
					"[CPU]({:#010x}) > Failed to read displacement: {}", pc, disp.error()
				);
				return std::nullopt;
			}

			ea.displacement = operand_sign_extend(OperandSize::Word, *disp);
		} break;
		case 0b011: // (d8, PC, Xn)
			ea.mode = AddressMode::ProgramCounterIndex;
			ea.reg_type = RegisterType::ProgramCounter;
			ea.bytes_read = 2;
			ea.index = IndexExtension::decode(mmu, pc);
			if (!ea.index) {
				return std::nullopt;
			}

			break;
		case 0b100: { // #imm
			if (size >= 0x03) {
				log::warn(
					"[CPU] > Invalid address size for immediate mode: {:#05b}", size
				);
				return std::nullopt;
			}

			ea.mode = AddressMode::Immediate;
			ea.reg_type = RegisterType::None;
			ea.size = static_cast<OperandSize>(size);

			auto imm = mmu.load(pc, ea.size);
			if (!imm) {
				log::warn(
					"[CPU]({:#010x}) > Failed to read immediate data: {}", pc, imm.error()
				);
				return std::nullopt;
			}

			ea.immediate = *imm;
			ea.bytes_read = ea.size == OperandSize::Long ? 4 : 2;
		} break;
		default:
			log::warn(
				"[CPU] > Address mode {:#05b}:{:#05b} isn't supported by the M68010!",
				mode, reg
			);
			return std::nullopt;
		}

		break;
	default:
		log::warn(
			"[CPU] > Address mode {:#05b}:{:#05b} isn't supported by the M68010!", mode,
			reg

		);
		return std::nullopt;
	}

	return ea;
}

[[nodiscard]] EffectiveAddress EffectiveAddress::from_register(
	RegisterType type, u8 reg, OperandSize size
) {
	EffectiveAddress ea;

	if (type == RegisterType::Data) {
		ea.mode = AddressMode::DirectData;
		ea.reg_type = RegisterType::Data;
	} else if (type == RegisterType::Address) {
		ea.mode = AddressMode::DirectAddress;
		ea.reg_type = RegisterType::Address;
	} else {
		ea.mode = AddressMode::ImpliedRegister;
		ea.reg_type = type;
	}

	ea.size = size;
	ea.reg = reg;
	ea.displacement = 0;
	ea.absolute = 0;
	ea.immediate = 0;
	ea.index = std::nullopt;
	ea.program_counter = 0;
	ea.bytes_read = 0;
	return ea;
}

std::optional<u32> EffectiveAddress::compute_address(CpuState& state) const {
	switch (mode) {
	case AddressMode::DirectData:
	case AddressMode::DirectAddress:
	case AddressMode::Immediate:
		return std::nullopt;
	case AddressMode::Indirect:
		assert(reg < 8);

		return state.get_address_register(reg);
	case AddressMode::IndirectPostInc: {
		assert(reg < 8);

		if (size == OperandSize::None) {
			log::warn("[CPU] > Invalid operand size for IndirectPostInc address mode");
			return std::nullopt;
		}

		u32& reg_a = state.get_address_register(reg);
		u32 addr = reg_a;
		reg_a += operand_width(size);

		return addr;
	};
	case AddressMode::IndirectPreDec: {
		assert(reg < 8);

		if (size == OperandSize::None) {
			log::warn("[CPU] > Invalid operand size for IndirectPreDec address mode");
			return std::nullopt;
		}

		u32& reg_a = state.get_address_register(reg);
		reg_a -= operand_width(size);
		return reg_a;
	};
	case AddressMode::IndirectDisplacement:
		assert(reg < 8);
		return state.get_address_register(reg) + displacement;
	case AddressMode::IndirectIndex: {
		if (!index) {
			log::warn("[CPU] > Invalid index extension");
			return std::nullopt;
		}
		assert(index->reg < 8);

		i32 base = state.get_address_register(reg);
		base += operand_sign_extend(OperandSize::Byte, index->displacement);

		i32 index_val = index->is_addr ? state.get_address_register(index->reg)
									   : state.reg_data[index->reg];
		if (!index->is_long) {
			index_val = operand_sign_extend(OperandSize::Word, index_val & 0xffff);
		}

		return base + index_val;
	}
	case AddressMode::AbsoluteShort:
		return operand_sign_extend(OperandSize::Word, absolute & 0xffff);
	case AddressMode::AbsoluteLong:
		return absolute;
	case AddressMode::ProgramCounterDisplacement:
		return program_counter + displacement;
	case AddressMode::ProgramCounterIndex: {
		if (!index) {
			log::warn("[CPU] > Invalid index extension");
			return std::nullopt;
		}
		assert(index->reg < 8);

		i32 base = program_counter + index->displacement;
		i32 index_val;

		if (index->is_addr) {
			index_val = state.get_address_register(index->reg);
		} else {
			index_val = state.reg_data[index->reg];
		}

		if (!index->is_long) {
			index_val = operand_sign_extend(OperandSize::Word, index_val & 0xffff);
		}

		return base + index_val;
	}
	default:
		std::unreachable();
	}

	return std::nullopt;
}

static std::string _get_register_name(bool is_addr, u8 reg) {
	if (!is_addr) {
		return std::format("D{}", reg);
	}

	if (reg == 7) {
		return "USP/SSP";
	}
	return std::format("A{}", reg);
}

std::string EffectiveAddress::to_string() const {
	switch (mode) {
	case AddressMode::DirectData:
	case AddressMode::DirectAddress:
		return _get_register_name(reg_type == RegisterType::Address, reg);
	case AddressMode::Indirect:
		return std::format("(A{})", reg);
	case AddressMode::IndirectPostInc:
		return std::format("(A{})+", reg);
	case AddressMode::IndirectPreDec:
		return std::format("-(A{})", reg);
	case AddressMode::IndirectDisplacement:
		return std::format("({:#x}, A{})", displacement, reg);
	case AddressMode::IndirectIndex:
		assert(index);

		return std::format(
			"({:#x}, A{}, {}.{})", index->displacement, reg,
			_get_register_name(index->is_addr, index->reg), index->is_long ? 'L' : 'W'
		);
	case AddressMode::AbsoluteShort:
		return std::format("({:#06x}).W", absolute);
	case AddressMode::AbsoluteLong:
		return std::format("({:#010x}).L", absolute);
	case AddressMode::ProgramCounterDisplacement:
		return std::format("({:#x}, PC)", displacement);
	case AddressMode::ProgramCounterIndex:
		assert(index);

		return std::format(
			"({:#x}, PC, {}.{})", index->displacement,
			_get_register_name(index->is_addr, index->reg), index->is_long ? 'L' : 'W'
		);
	case AddressMode::Immediate:
		return std::format("#{:#010x}", immediate);
	default:
		std::unreachable();
	}
}
