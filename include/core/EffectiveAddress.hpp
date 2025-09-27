#ifndef _RBT_CORE_EFFECTIVEADDRESS_HPP
#define _RBT_CORE_EFFECTIVEADDRESS_HPP

#include "core/Mmu.hpp"
#include "core/common.hpp"
#include "types.hpp"
#include "utils/log.hpp"

#include <format>
#include <optional>

namespace rbt {

struct CpuState;

enum class AddressMode : u8 {
	DirectData,					// mode:000, reg:Dn  | Dn
	DirectAddress,				// mode:001, reg:An  | An
	Indirect,					// mode:010, reg:An  | (An)
	IndirectPostInc,			// mode:011, reg:An  | (An)+
	IndirectPreDec,				// mode:100, reg:An  | -(An)
	IndirectDisplacement,		// mode:101, reg:An  | (d16, An)
	IndirectIndex,				// mode:110, reg:An  | (d8, An, Xn)
	AbsoluteShort,				// mode:111, reg:000 | (xxx).W
	AbsoluteLong,				// mode:111, reg:001 | (xxx).L
	ProgramCounterDisplacement, // mode:111, reg:010 | (d16, PC)
	ProgramCounterIndex,		// mode:111, reg:011 | (d8, PC, Xn)
	Immediate,					// mode:111, reg:100 | #imm
	ImpliedRegister,			// CCR, SR
};

enum class RegisterType : u8 {
	None,
	Data,
	Address,
	ProgramCounter,
	StatusRegister,
	ConditionCode,
};

struct IndexExtension {
	bool is_addr; // Dn:0 | An:1
	bool is_long; // W:0 | L:1
	u8 reg;
	u8 scale; // Ignored. Must always be 0 on M68010.
	i32 displacement;

	[[nodiscard]] static std::optional<IndexExtension> decode(const Mmu& mmu, u32 pc);
	[[nodiscard]] static std::optional<IndexExtension> decode(u16 ext);

	u16 encode() const;
};

struct EffectiveAddress {
	AddressMode mode;
	RegisterType reg_type;
	OperandSize size;
	u8 reg; // Dn or An

	i32 displacement; // d16 or d8
	u32 absolute;	  // (xxx).W or (xxx).L
	u32 immediate;	  // #imm
	std::optional<IndexExtension> index = std::nullopt;

	u32 program_counter;
	u32 bytes_read;

	[[nodiscard]] static std::optional<EffectiveAddress> decode(
		u8 mode, u8 reg, OperandSize size, const Mmu& mmu, u32 pc
	);

	[[nodiscard]] static EffectiveAddress from_register(
		RegisterType type, u8 reg, OperandSize size = OperandSize::Long
	);

	[[nodiscard]] static constexpr std::optional<EffectiveAddress> from_displacement(
		OperandSize size, const Mmu& mmu, u32 pc
	);

	std::optional<u32> compute_address(CpuState& state) const;

	std::string to_string() const;

	[[nodiscard]] static constexpr std::optional<EffectiveAddress> from_immediate(
		u8 size, const Mmu& mmu, u32 pc
	) {
		return EffectiveAddress::decode(0b111, 0b100, size, mmu, pc);
	}

	[[nodiscard]] static std::optional<EffectiveAddress> decode(
		u8 mode, u8 reg, u8 size, const Mmu& mmu, u32 pc
	) {
		if (size >= 0x03) {
			log::error("[CPU] > Invalid address size for immediate mode: {:#05b}", size);
			return std::nullopt;
		}

		auto opsize = static_cast<OperandSize>(size);
		return EffectiveAddress::decode(mode, reg, opsize, mmu, pc);
	}
};

[[nodiscard]] constexpr bool operator==(
	const IndexExtension& left, const IndexExtension& right
) noexcept {
	return left.is_addr == right.is_addr && left.is_long == right.is_long
		&& left.reg == right.reg && left.scale == right.scale
		&& left.displacement == right.displacement;
}

[[nodiscard]] constexpr bool operator==(
	const EffectiveAddress& left, const EffectiveAddress& right
) noexcept {
	return left.mode == right.mode && left.reg_type == right.reg_type
		&& left.size == right.size && left.reg == right.reg
		&& left.displacement == right.displacement && left.absolute == right.absolute
		&& left.immediate == right.immediate && left.index == right.index
		&& left.program_counter == right.program_counter
		&& left.bytes_read == right.bytes_read;
}

} // namespace rbt

template <>
struct std::formatter<rbt::IndexExtension> : std::formatter<std::string> {
	auto format(const rbt::IndexExtension& ix, std::format_context& ctx) const {
		std::string out = std::format(
			"{{ reg={}, size={}, Xn={}, scale={}, displacement={} }}",
			!ix.is_addr ? "Dn" : "An", !ix.is_long ? "W" : "L", ix.reg, ix.scale,
			ix.displacement
		);

		return std::formatter<std::string>::format(out, ctx);
	}
};

template <>
struct std::formatter<rbt::EffectiveAddress> : std::formatter<std::string> {
	auto format(const rbt::EffectiveAddress& ea, std::format_context& ctx) const {
		using namespace rbt;

		const std::string_view modes[] = {
			"Dn",	   "An",		"(An)",			"(An)+",
			"-(An)",   "(d16, An)", "(d8, An, Xn)", "(xxx).W",
			"(xxx).L", "(d16, PC)", "(d8, PC, Xn)", "#imm",
		};

		const std::string_view sizes[] = {
			"Byte",
			"Word",
			"Long",
			"None",
		};

		std::string reg;
		switch (ea.reg_type) {
		case RegisterType::Data:
			reg = std::format("D{}", ea.reg);
			break;
		case RegisterType::Address:
			if (ea.reg == 7) {
				reg = "USP/SSP";
			} else {
				reg = std::format("A{}", ea.reg);
			}
			break;
		case RegisterType::ProgramCounter:
			reg = "PC";
			break;
		case RegisterType::StatusRegister:
			reg = "SR";
			break;
		case RegisterType::ConditionCode:
			reg = "CCR";
			break;
		case RegisterType::None:
			reg = "None";
			break;
		}

		// Output: {
		//		mode: Mode
		//		reg: Xn -> reg
		//		size: Size
		//		dis: i16
		//		abs: u64
		//		imm: u64
		//		index: IndexExtension
		//		pc: u32
		//		bytes: u32
		// }
		std::string out = "{\n";
		out += std::format("\tmode: {}\n", modes[static_cast<u8>(ea.mode)]);
		out += std::format("\treg: {} -> {:#05b}\n", reg, ea.reg);
		out += std::format("\tsize: {}\n", sizes[static_cast<u8>(ea.size)]);

		const auto index = ea.index ? std::format("{}", *ea.index) : "nullopt";
		out += std::format(
			"\tdis: {}\n"
			"\tabs: {:#010x}\n"
			"\timm: {:#010x}\n"
			"\tindex: {}\n"
			"\tpc: {:#010x}\n"
			"\tbytes: {}\n",
			ea.displacement, ea.absolute, ea.immediate, index, ea.program_counter,
			ea.bytes_read
		);
		out += "}";

		return std::formatter<std::string>::format(out, ctx);
	}
};

#endif
