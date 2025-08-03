#ifndef _RBT_EMU_EFFECTIVEADDRESS_HPP
#define _RBT_EMU_EFFECTIVEADDRESS_HPP

#include "emu/Mmu.hpp"
#include "types.hpp"

#include <optional>

namespace emu {

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

} // namespace emu

#endif
