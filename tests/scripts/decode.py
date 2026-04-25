#!/usr/bin/python3

# Copyright (c) 2026-today aCube
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.


# pyright: strict, reportAny=false, reportExplicitAny=false

import argparse
from dataclasses import dataclass, field
import logging
from pathlib import Path
import re
from struct import unpack_from
from typing import Literal


REGS_ORDER: list[str] = [
	"d0", "d1", "d2", "d3", "d4", "d5", "d6", "d7",
	"a0", "a1", "a2", "a3", "a4", "a5", "a6",
	"usp", "ssp", "sr", "pc",
]


@dataclass(slots=True)
class CpuState:
	regs: dict[str, int] = field(default_factory=dict)
	prefetch0: int = 0
	prefetch1: int = 0
	ram: list[list[int]] = field(default_factory=list) # 24-bit, 8-bit


@dataclass(slots=True)
class Transaction:
	cycles: int = 0


@dataclass(slots=True)
class IdleTransaction(Transaction):
	kind: Literal["n"] = "n"


@dataclass(slots=True)
class BusTransaction(Transaction):
	kind: Literal["w", "r", "t", "re", "we"] = "w"
	fc: int = 0 # Function Code
	addr: int = 0
	data: int = 0
	uds: bool = False
	lds: bool = False
	width: Literal[".b", ".w"] = ".b"


@dataclass(slots=True)
class TestCase:
	name: str = ""
	initial: CpuState = field(default_factory=CpuState)
	final: CpuState = field(default_factory=CpuState)
	transactions: list[Transaction] = field(default_factory=list)
	length: int = 0 # Total cycles from transaction section


def _parse_args() -> argparse.Namespace:
	parser = argparse.ArgumentParser(
		description="Decode SingleStepTests JSON files into C Headers."
	);
	_ = parser.add_argument(
		"input",
		type=Path,
		help="Input .json.bin file or directory containing .json.bin files"
	)
	_ = parser.add_argument(
		"-o",
		"--out-dir",
		type=Path,
		required=True,
		help="Directory where generated .h files will be written"
	)
	_ = parser.add_argument(
		"--max-tests",
		type=int,
		default=None,
		help="How many tests will write (default: all)"
	)

	return parser.parse_args();


def _find_inputs(path: Path) -> list[Path] | None:
	if path.is_file():
		return [path]

	if not path.is_dir():
		return []

	files = list(path.glob("*.json.bin"));
	if not files:
		return []

	return files


def _decode_name(data: bytes, offset: int) -> tuple[int, str] | None:
	# Name Section:
	#   Word 0: Number of bytes
	#   Word 1: Magic Word=0x89abcdef
	#   Word 2: String length
	#   Word 3-N: UTF-8 byte string

	_, magic = unpack_from("<II", data, offset)
	if magic != 0x89abcdef:
		logging.error("Name's magic-word doesn't match: 0x89abcdef")
		return None
	# print("offset:", hex(offset), " | name:", _)
	offset += 8;

	strlen: int = unpack_from("<I", data, offset)[0]
	offset += 4;

	# Read bytes as a c-string, then decode it into an UTF-8 string
	cstr: bytes = unpack_from(str(strlen) + 's', data, offset)[0]
	offset += strlen;
	name = cstr.decode("utf-8")

	return offset, name


def _decode_state(data: bytes, offset: int) -> tuple[int, CpuState] | None:
	# State Section:
	#   Word 0: Number of bytes
	#   Word 1: Magic Word=0x01234567
	#   Word 2-21: Register's states
	#   Word 22: Prefetch 0
	#   Word 23: Prefetch 1
	#   Word 24: RAM 6-byte values count
	#   Word 25-N: RAM state [
	#		word0: even_addr, byte0: hi_byte,
	#       word2: odd_addr, byte1: lo_byte
	#   ]

	_, magic = unpack_from("<II", data, offset);
	if magic != 0x01234567:
		logging.error("State's magic-number doesn't match: 0xabc12367")
		return None
	# print("offset:", hex(offset), " | state:", _)
	offset += 8;

	state: CpuState = CpuState()
	for reg in REGS_ORDER:
		state.regs[reg] = unpack_from("<I", data, offset)[0]
		offset += 4;

	prefetch0, prefetch1 = unpack_from("<II", data, offset)
	offset += 8
	state.prefetch0 = prefetch0
	state.prefetch1 = prefetch1

	ram_count = unpack_from("<I", data, offset)[0]
	offset += 4

	for _ in range(0, ram_count):
		addr, _data = unpack_from("<IH", data, offset)
		offset += 6
		if addr >= 0x0100_0000:
			logging.error("RAM address cannot be >= 0x0100_0000")
			return None
		state.ram.append([addr, (_data >> 8)]) # High Byte
		state.ram.append([addr | 1, (_data & 0xff)]) # Low Byte

	return offset, state


def _decode_transactions(data: bytes, offset: int) -> tuple[int, list[Transaction], int] | None:
	# Transaction Section:
	#   Word 0: Number of bytes
	#   Word 1: Magic Word=0x456789AB
	#   Word 2: Cycles count
	#   Word 3: Transactions count
	#   Byte 4: Transaction kind [w, r, t, re, we]
	#   Word 5: Cycles
	#   Word 6: Function Code
	#   Word 7: Address Bus
	#   Word 8: Data Bus
	#   Word 9-10: UDS and LDS

	_, magic = unpack_from("<II", data, offset)
	if magic != 0x456789AB:
		logging.error("Transaction's magic-number doesn't match: 0x456789AB")
		return None
	# print("offset:", hex(offset), " | transaction:", _)
	offset += 8

	transactions: list[Transaction] = []
	cycle_count, transaction_count = unpack_from("<II", data, offset)
	offset += 8

	for _ in range(0, transaction_count):
		kind, cycles = unpack_from("<BI", data, offset)
		offset += 5
		if kind == 0:
			transactions.append(IdleTransaction(kind='n', cycles=cycles))
			continue

		fc, addr_bus, data_bus = unpack_from("<III", data, offset)
		uds, lds = unpack_from("<II", data, offset)
		offset += 20
		bw = uds + lds

		if kind == 1: # Write
			kind_name = 'w'
		elif kind == 2: # Read
			kind_name = 'r'
		elif kind == 3: # TAS cycles
			kind_name = 't'
		elif kind == 4: # Read address error (no AS assert)
			kind_name = "re"
		elif kind == 5: # Write address error (no AS assert)
			kind_name = "we"
		else:
			logging.error("Unknown transaction kind")
			return None

		transactions.append(BusTransaction(
			kind=kind_name,
			cycles=cycles,
			fc=fc,
			addr=addr_bus,
			data=data_bus,
			uds=uds == 1,
			lds=lds == 1,
			width=".w" if bw == 2 else ".b",
		))

	return offset, transactions, cycle_count



def _decode_test(data: bytes, offset: int) -> tuple[int, TestCase] | None:
	# Test Section:
	#   Word 0: Number of bytes
	#   Word 1: Magic Word=0xabc12367

	_, magic = unpack_from("<II", data, offset)
	if magic != 0xabc12367:
		logging.error("Test's magic-number doesn't match: 0xabc12367")
		return None
	# print("offset:", hex(offset), " | test:", _)
	offset += 8;

	test: TestCase = TestCase()

	result = _decode_name(data, offset)
	if not result:
		return None
	offset, test.name = result

	result = _decode_state(data, offset)
	if not result:
		return None
	offset, test.initial = result

	result = _decode_state(data, offset)
	if not result:
		return None
	offset, test.final = result

	result = _decode_transactions(data, offset)
	if not result:
		return None
	offset, test.transactions, test.length = result

	return offset, test


def _emit_block(lines: list[str], level: int, text: str) -> None:
	lines.append(('\t' * level) + text)


def _emit_regs(lines: list[str], level: int, regs: dict[str, int]) -> None:
	_emit_block(lines, level, ".regs = {\n")
	rows = ", ".join(f"{reg}" for reg in regs.values())
	_emit_block(lines, level + 1, rows + "\n")
	_emit_block(lines, level, "},\n")


def _emit_ram(lines: list[str], level: int, ram: list[list[int]]) -> None:
	rows = ",\n".join(
		f"{'\t' * (level + 1)}{{ .addr = 0x{a:06x}, .byte = 0x{v:02x} }}" for a, v, in ram
	)
	lines.append(rows + "\n")

def _transaction_kind(key: str) -> str:
	return {
		"n": "SST_TS_N", "w": "SST_TS_W", "r": "SST_TS_R",
		"t": "SST_TS_T", "re": "SST_TS_RE", "we": "SST_TS_WE"
	}[key]


def _emit_transactions(lines: list[str], level: int, transactions: list[Transaction]) -> None:
	for ts in transactions:
		if isinstance(ts, IdleTransaction):
			_emit_block(lines, level,
				f"{{ .kind = {_transaction_kind(ts.kind)}, .cycles = {ts.cycles} }},\n"
			)

		if isinstance(ts, BusTransaction):
			_emit_block(lines, level, "{\n")
			_emit_block(lines, level + 1, f".kind = {_transaction_kind(ts.kind)},\n")
			_emit_block(lines, level + 1, f".cycles = {ts.cycles},\n")

			_emit_block(lines, level + 1, ".bus = {\n")
			_emit_block(lines, level + 2, "")
			lines.append(f".fc = {ts.fc}, ")
			lines.append(f".addr = {ts.addr}, ")
			lines.append(f".data = {ts.data}, ")
			lines.append(f".uds = {"true" if ts.uds else "false"}, ")
			lines.append(f".lds = {"true" if ts.lds else "false"}, ")
			lines.append(f".is_word = {"true" if ts.width == ".w" else "false"}, ")
			lines.append("\n")
			_emit_block(lines, level + 1, "}\n")
			_emit_block(lines, level, "},\n")


def _emit_header(tests: list[TestCase], sym: str, max_tests: int) -> str | None:
	lines: list[str] = []
	guard = f"RBT_{sym.upper()}_H"

	_emit_block(lines, 0, f"#ifndef {guard}\n")
	_emit_block(lines, 0, f"#define {guard}\n\n")
	_emit_block(lines, 0, "#include <stddef.h>\n")
	_emit_block(lines, 0, "#include <stdint.h>\n\n")
	_emit_block(lines, 0,
			 "/* Requires SST_* type definitions included before this header */\n\n"
	)

	for i, test in enumerate(tests[:max_tests]):
		initial_ram = f"{sym}_initial_ram_{i}"
		final_ram = f"{sym}_final_ram_{i}"
		transaction = f"{sym}_transactions_{i}"

		_emit_block(lines, 0, f"static const SST_RamByte {initial_ram}[] = {{\n")
		_emit_ram(lines, 1, test.initial.ram)
		_emit_block(lines, 0, "};\n")
		_emit_block(lines, 0, "\n")

		_emit_block(lines, 0, f"static const SST_RamByte {final_ram}[] = {{\n")
		_emit_ram(lines, 1, test.final.ram)
		_emit_block(lines, 0, "};\n")
		_emit_block(lines, 0, "\n")

		_emit_block(lines, 0, f"static const SST_Transaction {transaction}[] = {{\n")
		_emit_transactions(lines, 1, test.transactions)
		_emit_block(lines, 0, "};\n")
		_emit_block(lines, 0, "\n")


	_emit_block(lines, 0,
			 f"const size_t {sym.upper()}_TEST_COUNT = {max_tests or len(tests)};\n"
	)
	_emit_block(lines, 0, f"static const SST_TestCase {sym}[] = {{\n")
	for i, test in enumerate(tests[:max_tests]):
		initial_ram = f"{sym}_initial_ram_{i}"
		final_ram = f"{sym}_final_ram_{i}"
		transaction = f"{sym}_transactions_{i}"

		_emit_block(lines, 1, "{\n")
		_emit_block(lines, 2, f".name = \"{test.name}\",\n")

		# SST_CpuState initial
		_emit_block(lines, 2, ".initial = {\n")
		_emit_regs(lines, 3, test.initial.regs);
		_emit_block(lines, 3, f".prefetch0 = {test.initial.prefetch0},\n")
		_emit_block(lines, 3, f".prefetch1 = {test.initial.prefetch1},\n")
		_emit_block(lines, 3, f".ram = {initial_ram},\n")
		_emit_block(lines, 3, f".ram_len = {len(test.initial.ram)},\n")
		_emit_block(lines, 2, "},\n")

		# SST_CpuState final
		_emit_block(lines, 2, ".final = {\n")
		_emit_regs(lines, 3, test.final.regs);
		_emit_block(lines, 3, f".prefetch0 = {test.final.prefetch0},\n")
		_emit_block(lines, 3, f".prefetch1 = {test.final.prefetch1},\n")
		_emit_block(lines, 3, f".ram = {final_ram},\n")
		_emit_block(lines, 3, f".ram_len = {len(test.final.ram)},\n")
		_emit_block(lines, 2, "},\n")

		_emit_block(lines, 2, f".transactions = {transaction},\n")
		_emit_block(lines, 2, f".transactions_len = {len(test.transactions)},\n")
		_emit_block(lines, 2, f".lenght = {test.length},\n")
		_emit_block(lines, 1, "},\n")

	_emit_block(lines, 0, "};\n")
	_emit_block(lines, 0, "\n")
	_emit_block(lines, 0, f"#endif /* {guard} */")

	return "".join(lines)


def _decode_file(in_file: Path, out_file: Path, max_tests: int) -> bool:
	print("Decoding:", in_file, "->", out_file)

	binary_data = in_file.read_bytes();
	offset: int = 0

	# Header Section:
	#   Word 0: Magic Word=0x1a3f5d71
	#   Word 1: Number of tests(Usually 2500 tests)
	header, test_count = unpack_from("<II", binary_data, offset)
	if header != 0x1a3f5d71:
		logging.error("Header magic-number doesn't match: 0x1a3f5d71")
		return False
	offset += 8

	tests: list[TestCase] = []
	for _ in range(0, test_count):
		result = _decode_test(binary_data, offset)
		if not result:
			return False
		offset, test = result
		tests.append(test)

	c_header = _emit_header(tests, out_file.stem, max_tests)
	if not c_header:
		return False

	out_file.parent.mkdir(parents=True, exist_ok=True)
	_ = out_file.write_text(c_header, newline='\n')
	return True


def main() -> None:
	args = _parse_args()
	inputs = _find_inputs(args.input)
	if not inputs:
		return

	pattern = re.compile(r"^([a-zA-Z_]+)(?:\.([bwl]))?\.json\.bin$")
	for in_file in inputs:
		match = pattern.match(in_file.name)
		if not match:
			continue

		opcode, size = match.groups()
		new_name = f"{opcode.lower()}{size or ''}.h"

		out_file: Path = Path(args.out_dir) / in_file.with_name(new_name).name
		if not _decode_file(in_file, out_file, args.max_tests):
			logging.fatal("An error has been found while decoding...")
			return


if __name__ == "__main__":
	main()
