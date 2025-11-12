#pragma once

#include "rbt/basic_types.h"
#include "rbt/cpu/mmu.h"
#include "rbt/helpers.h"

typedef enum RBT_AddressMode {
	RBT_DIRECT_DATA,		   // mode:000, reg:Dn  | Dn
	RBT_DIRECT_ADDR,		   // mode:001, reg:An  | An
	RBT_INDIRECT,			   // mode:010, reg:An  | (An)
	RBT_INDIRECT_POSTINC,	   // mode:011, reg:An  | (An)+
	RBT_INDIRECT_PREDEC,	   // mode:100, reg:An  | -(An)
	RBT_INDIRECT_DISPLACEMENT, // mode:101, reg:An  | (d16, An)
	RBT_INDIRECT_INDEXED,	   // mode:110, reg:An  | (d8, Xn, An)
	RBT_ABSOLUTE_SHORT,		   // mode:111, reg:000 | (xxx).w
	RBT_ABSOLUTE_LONG,		   // mode:111, reg:001 | (xxx).l
	RBT_PC_DISPLACEMENT,	   // mode:111, reg:010 | (d16, PC)
	RBT_PC_INDEXED,			   // mode:111, reg:011 | (d8, Xn, PC)
	RBT_IMMEDIATE,			   // mode:111, reg:100 | #imm
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
	RBT_OperandSize size;
	u32 start_pc;
	u8 words;

	union {
		u8 dreg;							  // EA = Dn
		u8 areg;							  // EA = An
		u8 indirect;						  // EA = (An) | (An) + SIZE | (An) - SIZE
		RBT_IndirectDisp indirect_disp;		  // EA = (An) + d16
		RBT_IndirectIndexed indirect_indexed; // EA = (An) + (Xn) + d8
		u32 absolute_short;					  // EA = (xxx).w | Sign Extended
		u32 absolute_long;					  // EA = (xxx).l
		i32 pc_disp;						  // EA = (PC) + d16
		RBT_IndexExtension pc_indexed;		  // EA = (PC) + (Xn) + d8
		u32 imm;							  // EA = #imm
	};
} RBT_EffectiveAddress;

bool rbt_indexext_from_word(u16 ext, RBT_IndexExtension *ix);
u16 rbt_indexext_to_word(const RBT_IndexExtension *ix);

bool rbt_decode_effective_address(
	u8 mode,
	u8 reg,
	RBT_OperandSize size,
	RBT_MemoryBus *bus,
	u32 pc,
	RBT_EffectiveAddress *ea
);
