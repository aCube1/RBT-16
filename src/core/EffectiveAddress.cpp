#include "core/EffectiveAddress.hpp"

#include "core/Cpu.hpp"
#include "utils/log.hpp"

using namespace rbt;

static i32 _sign_extend(u32 data, OperandSize size) {
	switch (size) {
	case OperandSize::Byte:
		return static_cast<i32>(static_cast<i8>(static_cast<u8>(data)));
	case OperandSize::Word:
		return static_cast<i32>(static_cast<i16>(static_cast<u16>(data)));
	case OperandSize::Long:
		[[fallthrough]];
	case OperandSize::None:
		return static_cast<i32>(data);
	}
}

[[nodiscard]] std::optional<IndexExtension> IndexExtension::decode(
	const Mmu& mmu, u32 pc
) {
	u16 ext;
	if (auto err = mmu.read_be16(pc, ext); err != Mmu::Err::None) {
		log::warn("[CPU] > Failed to read Brief Extension Word at {:#x}", pc);
		return std::nullopt;
	}

	return IndexExtension::decode(ext);
}

[[nodiscard]] std::optional<IndexExtension> IndexExtension::decode(u16 ext) {
	if ((ext >> 8) & 0x00) {
		log::warn("[CPU] > M68010 doesn't support full extension word!");
		return std::nullopt;
	}

	// Brief Extension Word
	// | 15 | 14 | 13 | 12 | 11 | 10 | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
	// | DA | Register     | WL | Scale  | 0 | Displacement Integer          |
	IndexExtension ix {};
	ix.is_addr = (ext >> 15) & 0x01;
	ix.is_long = (ext >> 11) & 0x01;
	ix.reg = (ext >> 12) & 0x07;
	ix.scale = (ext >> 9) & 0x03;
	ix.offset = _sign_extend(ext & 0xff, OperandSize::Byte);

	return ix;
}

u16 IndexExtension::encode() const {
	u16 ext = 0;

	ext |= (is_addr & 0x01) << 15;
	ext |= (is_long & 0x01) << 11;
	ext |= (reg & 0x07) << 12;
	ext |= (scale & 0x03) << 9;
	ext |= (offset & 0xff);

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

		break;
	case 0b001: // An
		ea.mode = AddressMode::DirectAddress;
		ea.reg_type = RegisterType::Address;

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
		ea.mode = AddressMode::IndirectOffset;
		ea.reg_type = RegisterType::Address;
		ea.bytes_read = 2;

		u16 offset;
		if (auto err = mmu.read_be16(pc, offset); err != Mmu::Err::None) {
			log::warn("[CPU] > Failed to read displacement offset at {:#x}", pc);
			return std::nullopt;
		}

		ea.offset = _sign_extend(offset, OperandSize::Word);
	} break;
	case 0b110: // (d8, An, Xn)
		ea.mode = AddressMode::IndirectIndexed;
		ea.reg_type = RegisterType::Address;
		ea.bytes_read = 2;
		ea.index = IndexExtension::decode(mmu, pc);
		if (!ea.index) {
			return std::nullopt;
		}

		break;
	case 0b111:
		switch (reg) {
		case 0b000: // (xxx).W
			ea.mode = AddressMode::AbsoluteShort;
			ea.reg_type = RegisterType::None;
			ea.bytes_read = 2;
			if (auto err = mmu.read_be16(pc, (u16&)ea.absolute); err != Mmu::Err::None) {
				log::warn("[CPU] > Failed to read absolute address at {:#x}", pc);
				return std::nullopt;
			}

			break;
		case 0b001: // (xxx).L
			ea.mode = AddressMode::AbsoluteLong;
			ea.reg_type = RegisterType::None;
			ea.bytes_read = 4;
			if (auto err = mmu.read_be32(pc, ea.absolute); err != Mmu::Err::None) {
				log::warn("[CPU] > Failed to read absolute address at {:#x}", pc);
				return std::nullopt;
			}

			break;
		case 0b010: { // (d16, PC)
			ea.mode = AddressMode::ProgramCounterOffset;
			ea.reg_type = RegisterType::ProgramCounter;
			ea.bytes_read = 2;

			u16 offset;
			if (auto err = mmu.read_be16(pc, offset); err != Mmu::Err::None) {
				log::warn("[CPU] > Failed to read displacement offset at {:#x}", pc);
				return std::nullopt;
			}

			ea.offset = _sign_extend(offset, OperandSize::Word);
		} break;
		case 0b011: // (d8, PC, Xn)
			ea.mode = AddressMode::ProgramCounterIndexed;
			ea.reg_type = RegisterType::ProgramCounter;
			ea.bytes_read = 2;
			ea.index = IndexExtension::decode(mmu, pc);
			if (!ea.index) {
				return std::nullopt;
			}

			break;
		case 0b100: // #imm
			if (size >= 0x03) {
				log::warn("[CPU] > Invalid address size for immediate mode: {:#x}", size);
				return std::nullopt;
			}

			ea.mode = AddressMode::Immediate;
			ea.reg_type = RegisterType::None;
			ea.size = static_cast<OperandSize>(size);
			break;
		default:
			log::warn(
				"[CPU] > Address mode {:#b}:{:#b} isn't supported by the M68010!", mode,
				reg
			);
			return std::nullopt;
		}

		break;
	default:
		log::warn(
			"[CPU] > Address mode {:#b}:{:#b} isn't supported by the M68010!", mode, reg
		);
		return std::nullopt;
	}

	switch (ea.size) {
	case OperandSize::Byte:
	case OperandSize::Word: {
		u32 data;
		if (auto err = mmu.read_be16(pc, (u16&)data); err != Mmu::Err::None) {
			log::warn("[CPU] > Failed to read immediate data at {:#x}", pc);
			return std::nullopt;
		}

		ea.immediate = size == 0x00 ? (data & 0x00ff) : data;
		ea.bytes_read = 2;
	} break;
	case OperandSize::Long:
		if (auto err = mmu.read_be32(pc, ea.immediate); err != Mmu::Err::None) {
			log::warn("[CPU] > Failed to read immediate data at {:#x}", pc);
		}

		ea.bytes_read = 4;
		break;
	default:
		break;
	}

	return ea;
}

static u32& _get_address_register(CpuState& state, u8 reg) {
	return reg == 7 ? state.reg_usp : state.reg_addr[reg];
}

std::optional<u32> EffectiveAddress::compute_address(CpuState& state) const {
	u8 size_in_bytes[] = { 1, 2, 4 };

	switch (mode) {
	case AddressMode::DirectData:
	case AddressMode::DirectAddress:
	case AddressMode::Immediate:
		return std::nullopt;
	case AddressMode::Indirect:
		assert(reg < 8);

		return _get_address_register(state, reg);
	case AddressMode::IndirectPostInc: {
		assert(reg < 8);

		if (size == OperandSize::None) {
			log::warn("[CPU] > Invalid operand size for IndireictPostInc address mode");
			return std::nullopt;
		}

		u32& reg_a = _get_address_register(state, reg);
		u32 addr = reg_a;
		reg_a += size_in_bytes[static_cast<u8>(size)];

		return addr;
	};
	case AddressMode::IndirectPreDec: {
		assert(reg < 8);

		if (size == OperandSize::None) {
			log::warn("[CPU] > Invalid operand size for IndirectPreDec address mode");
			return std::nullopt;
		}

		u32& reg_a = _get_address_register(state, reg);
		reg_a -= size_in_bytes[static_cast<u8>(size)];
		return reg_a;
	};
	case AddressMode::IndirectOffset:
		assert(reg < 8);
		return _get_address_register(state, reg) + offset;
	case AddressMode::IndirectIndexed: {
		if (!index) {
			log::warn("[CPU] > Invalid index extension");
			return std::nullopt;
		}
		assert(index->reg < 8);

		i32 base = _get_address_register(state, reg)
				 + _sign_extend(index->offset, OperandSize::Byte);
		i32 index_val = index->is_addr ? _get_address_register(state, index->reg)
									   : state.reg_data[index->reg];
		if (!index->is_long) {
			index_val = _sign_extend(index_val & 0xffff, OperandSize::Word);
		}

		return base + index_val;
	}
	case AddressMode::AbsoluteShort:
		return _sign_extend(absolute & 0xffff, OperandSize::Word);
	case AddressMode::AbsoluteLong:
		return absolute;
	case AddressMode::ProgramCounterOffset:
		return program_counter + offset;
	case AddressMode::ProgramCounterIndexed: {
		if (!index) {
			log::warn("[CPU] > Invalid index extension");
			return std::nullopt;
		}
		assert(index->reg < 8);

		i32 base = program_counter + index->offset;
		i32 index_val;

		if (index->is_addr) {
			index_val = _get_address_register(state, index->reg);
		} else {
			index_val = state.reg_data[index->reg];
		}

		if (!index->is_long) {
			index_val = _sign_extend(index_val & 0xffff, OperandSize::Word);
		}

		return base + index_val;
	}
	}

	return std::nullopt;
}
