#include "core/EffectiveAddress.hpp"

#include "utils/log.hpp"

using namespace rbt;

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
	// | DA | Register     | WL | 0  | 0 | 0 | Displacement Integer          |
	IndexExtension ix {};
	ix.mode = (ext >> 15) & 0x01;
	ix.size = (ext >> 11) & 0x01;
	ix.reg = (ext >> 12) & 0x07;
	ix.scale = (ext >> 9) & 0x03;
	ix.offset = ext & 0xff;

	return ix;
}

u16 IndexExtension::encode() const {
	u16 ext = 0;

	ext |= (mode & 0x01) << 15;
	ext |= (size & 0x01) << 11;
	ext |= (reg & 0x07) << 12;
	ext |= (scale & 0x03) << 9;
	ext |= (offset & 0xff);

	return ext;
}

[[nodiscard]] std::optional<EffectiveAddress> EffectiveAddress::decode(
	u8 mode, u8 reg, const Mmu& mmu, u32 pc
) {
	EffectiveAddress ea {};
	ea.reg = reg;
	ea.bytes_read = 0;

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

		break;
	case 0b100: // -(An)
		ea.mode = AddressMode::IndirectPreDec;
		ea.reg_type = RegisterType::Address;

		break;
	case 0b101: // (d16, An)
		ea.mode = AddressMode::IndirectOffset;
		ea.reg_type = RegisterType::Address;
		ea.bytes_read = 2;
		if (auto err = mmu.read_be16(pc, (u16&)ea.offset); err != Mmu::Err::None) {
			log::warn("[CPU] > Failed to read displacement offset at {:#x}", pc);
			return std::nullopt;
		}

		break;
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
		case 0b010: // (d16, PC)
			ea.mode = AddressMode::ProgramCounterOffset;
			ea.reg_type = RegisterType::ProgramCounter;
			ea.bytes_read = 2;
			if (auto err = mmu.read_be16(pc, (u16&)ea.offset); err != Mmu::Err::None) {
				log::warn("[CPU] > Failed to read displacement offset at {:#x}", pc);
				return std::nullopt;
			}

			break;
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
			ea.mode = AddressMode::Immediate;
			ea.reg_type = RegisterType::None;

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

	return ea;
}
