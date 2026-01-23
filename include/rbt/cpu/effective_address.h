#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/helpers.h"

typedef enum RBT_AddressMode : u16 {
	RBT_EA_DIRECT_DATA = 1 << 0,		   // mode:000, reg:Dn  | Dn
	RBT_EA_DIRECT_ADDR = 1 << 1,		   // mode:001, reg:An  | An
	RBT_EA_INDIRECT = 1 << 2,			   // mode:010, reg:An  | (An)
	RBT_EA_INDIRECT_POSTINC = 1 << 3,	   // mode:011, reg:An  | (An)+
	RBT_EA_INDIRECT_PREDEC = 1 << 4,	   // mode:100, reg:An  | -(An)
	RBT_EA_INDIRECT_DISPLACEMENT = 1 << 5, // mode:101, reg:An  | (d16, An)
	RBT_EA_INDIRECT_INDEXED = 1 << 6,	   // mode:110, reg:An  | (d8, Xi, An)
	RBT_EA_ABSOLUTE_SHORT = 1 << 7,		   // mode:111, reg:000 | (xxx).w
	RBT_EA_ABSOLUTE_LONG = 1 << 8,		   // mode:111, reg:001 | (xxx).l
	RBT_EA_PC_DISPLACEMENT = 1 << 9,	   // mode:111, reg:010 | (d16, PC)
	RBT_EA_PC_INDEXED = 1 << 10,		   // mode:111, reg:011 | (d8, Xi, PC)
	RBT_EA_IMMEDIATE = 1 << 11,			   // mode:111, reg:100 | #imm

	// GROUPS
	RBT_EA_GROUP_IND = RBT_EA_INDIRECT | RBT_EA_INDIRECT_POSTINC | RBT_EA_INDIRECT_PREDEC
					 | RBT_EA_INDIRECT_DISPLACEMENT | RBT_EA_INDIRECT_INDEXED,
	RBT_EA_GROUP_IDX = RBT_EA_INDIRECT_INDEXED | RBT_EA_PC_INDEXED,
	RBT_EA_GROUP_ABS = RBT_EA_ABSOLUTE_SHORT | RBT_EA_ABSOLUTE_LONG,
	RBT_EA_GROUP_PCR = RBT_EA_PC_DISPLACEMENT | RBT_EA_PC_INDEXED,
	RBT_EA_GROUP_DSP = RBT_EA_INDIRECT_DISPLACEMENT | RBT_EA_PC_DISPLACEMENT,
	RBT_EA_GROUP_REL = RBT_EA_INDIRECT_POSTINC | RBT_EA_INDIRECT_PREDEC,
} RBT_AddressMode;

typedef struct RBT_IndexExtension {
	bool is_addr;
	bool is_long;
	u8 xreg;
	u8 scale; // M68020+; Must always be 0 on M68000/MC68008/MC68010
	i32 displacement;
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

	union {
		u8 dreg;							  // EA = Dn
		u8 areg;							  // EA = An
		u8 indirect;						  // EA = (An) / (An) + SIZE / (An) - SIZE
		RBT_IndirectDisp indirect_disp;		  // EA = (An) + d16
		RBT_IndirectIndexed indirect_indexed; // EA = (An) + (Xi) + d8
		u32 absolute_short;					  // EA = (xxx).w | Sign Extended
		u32 absolute_long;					  // EA = (xxx).l
		i32 pc_disp;						  // EA = (PC) + d16
		RBT_IndexExtension pc_indexed;		  // EA = (PC) + (Xi) + d8
		u32 imm;							  // EA = #imm
	};
} RBT_EffectiveAddress;

bool rbt_indexext_from_word(u16 ext, RBT_IndexExtension *ix);
u16 rbt_indexext_to_word(const RBT_IndexExtension *ix);

// return UINT32_MAX as an error
u32 rbt_decode_effective_address(
	u8 mode,
	u8 reg,
	RBT_OperandSize size,
	RBT_MemoryBus *bus,
	u32 pc,
	RBT_EffectiveAddress *ea
);
