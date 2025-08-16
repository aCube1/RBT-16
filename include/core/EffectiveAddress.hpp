#ifndef _RBT_CORE_EFFECTIVEADDRESS_HPP
#define _RBT_CORE_EFFECTIVEADDRESS_HPP

#include "core/Mmu.hpp"
#include "types.hpp"

#include <format>
#include <optional>

namespace rbt {

enum class AddressMode : u8 {
	DirectData,			   // mode:000, reg:Dn  | Dn
	DirectAddress,		   // mode:001, reg:An  | An
	Indirect,			   // mode:010, reg:An  | (An)
	IndirectPostInc,	   // mode:011, reg:An  | (An)+
	IndirectPreDec,		   // mode:100, reg:An  | -(An)
	IndirectOffset,		   // mode:101, reg:An  | (d16, An)
	IndirectIndexed,	   // mode:110, reg:An  | (d8, An, Xn)
	AbsoluteShort,		   // mode:111, reg:000 | (xxx).W
	AbsoluteLong,		   // mode:111, reg:001 | (xxx).L
	ProgramCounterOffset,  // mode:111, reg:010 | (d16, PC)
	ProgramCounterIndexed, // mode:111, reg:011 | (d8, PC, Xn)
	Immediate,			   // mode:111, reg:100 | #imm
};

enum class RegisterType : u8 {
	None,
	Data,
	Address,
	ProgramCounter,
};

struct IndexExtension {
	bool mode; // Dn:0 | -(An):1
	bool size; // W:0 | L:1
	u8 reg;
	u8 scale; // Ignored. Must always be 0b000 on M68010.
	i8 offset;

	[[nodiscard]] static std::optional<IndexExtension> decode(const Mmu& mmu, u32 pc);
	[[nodiscard]] static std::optional<IndexExtension> decode(u16 ext);

	u16 encode() const;
};

struct EffectiveAddress {
	AddressMode mode;
	RegisterType reg_type;
	u8 reg; // Dn or An
	u8 bytes_read;
	i32 offset;	  // d16 or d8
	u32 absolute; // (xxx).W or (xxx).L
	std::optional<IndexExtension> index = std::nullopt;

	[[nodiscard]] static std::optional<EffectiveAddress> decode(
		u8 mode, u8 reg, const Mmu& mmu, u32 pc
	);
};

[[nodiscard]] inline bool operator==(
	const IndexExtension& left, const IndexExtension& right
) {
	return (left.mode == right.mode) && (left.size == right.size)
		&& (left.reg == right.reg) && (left.scale == right.scale)
		&& (left.offset == right.offset);
}

[[nodiscard]] inline bool operator==(
	const EffectiveAddress& left, const EffectiveAddress& right
) {
	return (left.mode == right.mode) && (left.reg_type == right.reg_type)
		&& (left.bytes_read == right.bytes_read) && (left.reg == right.reg)
		&& (left.offset == right.offset) && (left.absolute == right.absolute)
		&& (left.index == right.index);
}

} // namespace rbt

template <>
struct std::formatter<rbt::IndexExtension> : std::formatter<std::string> {
	auto format(const rbt::IndexExtension& ix, std::format_context& ctx) const {
		std::string out = std::format(
			"{{ mode={}, size={}, reg={}, scale={}, offset={:#x} }}",
			static_cast<i32>(ix.mode), static_cast<i32>(ix.size), ix.reg, ix.scale,
			ix.offset
		);

		return std::formatter<std::string>::format(out, ctx);
	}
};

template <>
struct std::formatter<rbt::EffectiveAddress> : std::formatter<std::string> {
	auto format(const rbt::EffectiveAddress& ea, std::format_context& ctx) const {
		std::string out = std::format(
			"{{ mode={}, reg_type={}, reg={}, bytes={}, offset={:#x}, absolute={}, "
			"index={} }}",
			static_cast<i32>(ea.mode), static_cast<i32>(ea.reg_type), ea.reg,
			ea.bytes_read, ea.offset, ea.absolute,
			ea.index ? std::format("{}", *ea.index) : "nullopt"
		);

		return std::formatter<std::string>::format(out, ctx);
	}
};

#endif
