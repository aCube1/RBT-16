#pragma once

#include "rbt/basic_types.h"

typedef struct RBT_Instruction RBT_Instruction;

u16 rbt_calculate_timing(const RBT_Instruction *instr);
