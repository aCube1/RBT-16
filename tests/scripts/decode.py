#!/usr/bin/python3

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
	registers: dict[str, int] = field(default_factory=dict)
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
		state.registers[reg] = unpack_from("<I", data, offset)[0]
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
		if addr >= 0x1000_0000:
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


def _decode_file(in_file: Path, out_file: Path) -> bool:
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

	return True


def main() -> None:
	args = _parse_args()
	inputs = _find_inputs(args.input)
	if not inputs:
		return

	pattern = re.compile(r"^([A-Z]+)(?:\.([bwl]))?\.json\.bin$")
	for in_file in inputs:
		match = pattern.match(in_file.name)
		if not match:
			continue

		opcode, size = match.groups()
		new_name = f"{opcode.lower()}{size or ''}.h"

		out_file: Path = Path(args.out_dir) / in_file.with_name(new_name).name
		if not _decode_file(in_file, out_file):
			logging.fatal("An error has been found while decoding...")
			return


if __name__ == "__main__":
	main()
