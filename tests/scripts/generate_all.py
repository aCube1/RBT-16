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

# pyright: strict, reportAny=false, reportPrivateUsage=false

import argparse
from pathlib import Path

from decode import _emit_block  # pyright: ignore[reportImplicitRelativeImport]

def _parse_args() -> argparse.Namespace:
	parser = argparse.ArgumentParser(
		description="Generate all tests into a single file"
	)
	_ = parser.add_argument(
		"-o",
		"--out-file",
		type=Path,
		required=True,
		help="File which generated header will be written"
	)
	_ = parser.add_argument(
		"input",
		type=Path,
		help="Directory containing decoder generated header files"
	)

	return parser.parse_args()


args = _parse_args()
assert args, "No Arguments provided!"

assert args.out_file.is_file(), "Output must be file!"
assert args.input.is_dir(), "Input must be a directory!"

print(f"Generating {args.out_file}")

outs = sorted(args.input.glob("*.h"))
lines: list[str] = []

_emit_block(lines, 0, "#pragma once\n")
_emit_block(lines, 0, "\n")
_emit_block(lines, 0, "#include <stddef.h>\n")
_emit_block(lines, 0, "#include \"sst.h\"\n")
for out in outs:
	_emit_block(lines, 0, f"#include \"output/{out.name}\"\n")

_emit_block(lines, 0, "\n")
_emit_block(lines, 0, "typedef struct SST_TestSuite {\n")
_emit_block(lines, 1, "const char *name;\n")
_emit_block(lines, 1, "const SST_TestCase *cases;\n")
_emit_block(lines, 1, "size_t len;\n")
_emit_block(lines, 0, "} SST_TestSuite;\n")
_emit_block(lines, 0, "\n")

_emit_block(lines, 0, "static const SST_TestSuite sst_suites[] = {\n")
for out in outs:
	_emit_block(lines, 1,
		 f"{{ .name = \"{out.stem}\", .cases = {out.stem}, .len = sizeof({out.stem}) / sizeof({out.stem}[0]) }},"
	)
	_emit_block(lines, 1, "\n")
_emit_block(lines, 0, "};\n")
_emit_block(lines, 0, "static const size_t sst_suites_len = sizeof(sst_suites) / sizeof(sst_suites[0]);\n")

args.out_file.write_text("".join(lines), newline='\n')
