#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/helpers.h"

typedef enum RBT_AddressMode : u16 {
	_EA_NONE = 0,

	_EA_DIRECT_DATA = 1 << 0,			// mode:000, reg:Dn  | Dn
	_EA_DIRECT_ADDR = 1 << 1,			// mode:001, reg:An  | An
	_EA_INDIRECT = 1 << 2,				// mode:010, reg:An  | (An)
	_EA_INDIRECT_POSTINC = 1 << 3,		// mode:011, reg:An  | (An)+
	_EA_INDIRECT_PREDEC = 1 << 4,		// mode:100, reg:An  | -(An)
	_EA_INDIRECT_DISPLACEMENT = 1 << 5, // mode:101, reg:An  | (d16, An)
	_EA_INDIRECT_INDEXED = 1 << 6,		// mode:110, reg:An  | (d8, Xi, An)
	_EA_ABSOLUTE_SHORT = 1 << 7,		// mode:111, reg:000 | (xxx).w
	_EA_ABSOLUTE_LONG = 1 << 8,			// mode:111, reg:001 | (xxx).l
	_EA_PC_DISPLACEMENT = 1 << 9,		// mode:111, reg:010 | (d16, PC)
	_EA_PC_INDEXED = 1 << 10,			// mode:111, reg:011 | (d8, Xi, PC)
	_EA_IMMEDIATE = 1 << 11,			// mode:111, reg:100 | #imm

	_EA_DISPLACEMENT = 1 << 12, // d16 | Displacement
	_EA_REGISTER_CCR = 1 << 13, // CCR | Condition Code Register
	_EA_REGISTER_SR = 1 << 14,	// SR  | Status Register
	_EA_REGISTER_USP = 1 << 15, // USP | User Stack Pointer

	// GROUPS
	_EA_GROUP_REG = _EA_DIRECT_DATA | _EA_DIRECT_ADDR,
	_EA_GROUP_IND = _EA_INDIRECT | _EA_INDIRECT_POSTINC | _EA_INDIRECT_PREDEC
				  | _EA_INDIRECT_DISPLACEMENT | _EA_INDIRECT_INDEXED,
	_EA_GROUP_IDX = _EA_INDIRECT_INDEXED | _EA_PC_INDEXED,
	_EA_GROUP_ABS = _EA_ABSOLUTE_SHORT | _EA_ABSOLUTE_LONG,
	_EA_GROUP_PCR = _EA_PC_DISPLACEMENT | _EA_PC_INDEXED,
	_EA_GROUP_DSP = _EA_INDIRECT_DISPLACEMENT | _EA_PC_DISPLACEMENT,
	_EA_GROUP_REL = _EA_INDIRECT_POSTINC | _EA_INDIRECT_PREDEC,
} RBT_AddressMode;

typedef struct RBT_IndexExtension {
	bool is_addr;
	bool is_long;
	u8 xreg;
	// u8 scale; // M68020+; Must always be 0 on M68000/MC68008/MC68010
	i32 disp;
} RBT_IndexExtension;

typedef struct RBT_IndirectDisp {
	u8 areg; // An
	i32 disp;
} RBT_IndirectDisp;

typedef struct RBT_IndirectIndexed {
	u8 areg; // An
	RBT_IndexExtension ix;
} RBT_IndirectIndexed;

typedef struct RBT_EffectiveAddress {
	RBT_AddressMode mode;
	u32 start_pc;
	RBT_OperandSize size;

	union {
		u8 reg;						 // EA = Dn or An
		u8 indirect;				 // EA = (An) / (An) + SIZE / (An) - SIZE
		RBT_IndirectDisp ind_disp;	 // EA = (An) + d16
		RBT_IndirectIndexed ind_idx; // EA = (An) + (Xi) + d8
		u32 absolute_short;			 // EA = (xxx).w | Sign Extended
		u32 absolute_long;			 // EA = (xxx).l
		i32 pc_disp;				 // EA = (PC) + d16
		RBT_IndexExtension pc_idx;	 // EA = (PC) + (Xi) + d8
		u32 imm;					 // EA = #imm, reg-list, conditions
		i32 disp;					 // EA = d16
	};
} RBT_EffectiveAddress;

bool _indexext_from_word(u16 ext, RBT_IndexExtension *ix);
u16 _indexext_to_word(const RBT_IndexExtension *ix);

// return UINT32_MAX as an error
u32 _decode_effective_address(
	u8 mode,
	u8 reg,
	RBT_OperandSize size,
	RBT_MemoryBus *bus,
	u32 pc,
	RBT_EffectiveAddress *ea
);
