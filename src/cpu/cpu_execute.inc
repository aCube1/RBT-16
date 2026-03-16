// RBT-16 - Fantasy Retro-Computer Inspired by the Amiga 500 and Atari ST.
// Copyright (C) 2026  aCube
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, see
// <https://www.gnu.org/licenses/>.

#pragma once

#include "cpu/cpu_internal.h"
#include "error.h"
#include "rbt/cpu/types.h"
#include "rbt/error_codes.h"

#include <assert.h>

typedef RBT_ErrorCode (*RBT_OpExec)(const RBT_Instruction *instr, RBT_Cpu *cpu);

static RBT_ErrorCode _handle_bus_result(RBT_Cpu *cpu, RBT_ErrorCode err) {
	switch (err) {
	case RBT_ERR_MEM_ADDR_ERROR: return _cpu_raise_exception(cpu, _VEC_ADDR_ERROR);
	case RBT_ERR_MEM_BUS_ERROR:	 return _cpu_raise_exception(cpu, _VEC_BUS_ERROR);
	default:					 return err;
	}

	unreachable();
}

static RBT_ErrorCode _op_abcd(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_add(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_adda(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_addi(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_addq(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_addx(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_and(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_andi(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_asl(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_asr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_bcc(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_bchg(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_bclr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_bra(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_bset(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_bsr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_btst(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_chk(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_clr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_cmp(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_cmpa(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_cmpi(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_cmpm(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_dbcc(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_divs(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_divu(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_eor(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_eori(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_exg(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_ext(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_illegal(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_jmp(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_jsr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_lea(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_link(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_lsl(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_lsr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_move(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_movea(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_movem(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_movep(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_moveq(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_muls(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_mulu(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_nbcd(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_neg(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_negx(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_nop(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_not(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_or(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_ori(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_pea(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_reset(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_rol(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_ror(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_roxl(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_roxr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_rte(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_rtr(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_rts(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_sbcd(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_scc(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_stop(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_sub(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_suba(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_subi(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_subq(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_subx(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_swap(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_tas(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_trap(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_trapv(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

static RBT_ErrorCode _op_tst(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_unlk(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

// M68010+
static RBT_ErrorCode _op_bkpt(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_movec(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_moves(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}
static RBT_ErrorCode _op_rtd(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	(void)instr;
	(void)cpu;

	_push_fatal(RBT_ERR_UNIMPLEMENTED, "Unimplemented instruction");
	return RBT_ERR_UNIMPLEMENTED;
}

// clang-format off
static const RBT_OpExec _op_dispatch_table[_RBT_OP_COUNT] = {
	[RBT_OP_ABCD] = _op_abcd,       [RBT_OP_ADD] = _op_add,
	[RBT_OP_ADDA] = _op_adda,       [RBT_OP_ADDI] = _op_addi,
	[RBT_OP_ADDQ] = _op_addq,       [RBT_OP_ADDX] = _op_addx,
	[RBT_OP_AND] = _op_and,         [RBT_OP_ANDI] = _op_andi,
	[RBT_OP_ASL] = _op_asl,         [RBT_OP_ASR] = _op_asr,
	[RBT_OP_Bcc] = _op_bcc,         [RBT_OP_BCHG] = _op_bchg,
	[RBT_OP_BCLR] = _op_bclr,       [RBT_OP_BRA] = _op_bra,
	[RBT_OP_BSET] = _op_bset,       [RBT_OP_BSR] = _op_bsr,
	[RBT_OP_BTST] = _op_btst,       [RBT_OP_CHK] = _op_chk,
	[RBT_OP_CLR] = _op_clr,         [RBT_OP_CMP] = _op_cmp,
	[RBT_OP_CMPA] = _op_cmpa,       [RBT_OP_CMPI] = _op_cmpi,
	[RBT_OP_CMPM] = _op_cmpm,       [RBT_OP_DBcc] = _op_dbcc,
	[RBT_OP_DIVS] = _op_divs,       [RBT_OP_DIVU] = _op_divu,
	[RBT_OP_EOR] = _op_eor,         [RBT_OP_EORI] = _op_eori,
	[RBT_OP_EXG] = _op_exg,         [RBT_OP_EXT] = _op_ext,
	[RBT_OP_ILLEGAL] = _op_illegal, [RBT_OP_JMP] = _op_jmp,
	[RBT_OP_JSR] = _op_jsr,         [RBT_OP_LEA] = _op_lea,
	[RBT_OP_LINK] = _op_link,       [RBT_OP_LSL] = _op_lsl,
	[RBT_OP_LSR] = _op_lsr,         [RBT_OP_MOVE] = _op_move,
	[RBT_OP_MOVEA] = _op_movea,     [RBT_OP_MOVEM] = _op_movem,
	[RBT_OP_MOVEP] = _op_movep,     [RBT_OP_MOVEQ] = _op_moveq,
	[RBT_OP_MULS] = _op_muls,       [RBT_OP_MULU] = _op_mulu,
	[RBT_OP_NBCD] = _op_nbcd,       [RBT_OP_NEG] = _op_neg,
	[RBT_OP_NEGX] = _op_negx,       [RBT_OP_NOP] = _op_nop,
	[RBT_OP_NOT] = _op_not,         [RBT_OP_OR] = _op_or,
	[RBT_OP_ORI] = _op_ori,         [RBT_OP_PEA] = _op_pea,
	[RBT_OP_RESET] = _op_reset,     [RBT_OP_ROL] = _op_rol,
	[RBT_OP_ROR] = _op_ror,         [RBT_OP_ROXL] = _op_roxl,
	[RBT_OP_ROXR] = _op_roxr,       [RBT_OP_RTE] = _op_rte,
	[RBT_OP_RTR] = _op_rtr,         [RBT_OP_RTS] = _op_rts,
	[RBT_OP_SBCD] = _op_sbcd,       [RBT_OP_Scc] = _op_scc,
	[RBT_OP_STOP] = _op_stop,       [RBT_OP_SUB] = _op_sub,
	[RBT_OP_SUBA] = _op_suba,       [RBT_OP_SUBI] = _op_subi,
	[RBT_OP_SUBQ] = _op_subq,       [RBT_OP_SUBX] = _op_subx,
	[RBT_OP_SWAP] = _op_swap,       [RBT_OP_TAS] = _op_tas,
	[RBT_OP_TRAP] = _op_trap,       [RBT_OP_TRAPV] = _op_trapv,
	[RBT_OP_TST] = _op_tst,         [RBT_OP_UNLK] = _op_unlk,

	// M68010+
	[RBT_OP_BKPT] = _op_bkpt,   [RBT_OP_MOVEC] = _op_movec,
	[RBT_OP_MOVES] = _op_moves, [RBT_OP_RTD] = _op_rtd,
};
// clang-format on

static RBT_ErrorCode _cpu_execute(const RBT_Instruction *instr, RBT_Cpu *cpu) {
	assert(instr);
	assert(cpu);

	if (instr->mnemonic == RBT_OP_LINEA)
		return _cpu_raise_exception(cpu, _VEC_LINE_A);

	if (instr->mnemonic == RBT_OP_LINEF)
		return _cpu_raise_exception(cpu, _VEC_LINE_F);

	RBT_OpExec op_exec = _op_dispatch_table[instr->mnemonic];
	if (!op_exec) {
		_push_error(
			RBT_ERR_DECODE_ILLEGAL, "No handler for mnemonic %d", instr->mnemonic
		);
		return _cpu_raise_exception(cpu, _VEC_ILLEGAL);
	}

	return op_exec(instr, cpu);
}
