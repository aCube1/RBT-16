pub const OperandSize = enum(u8) {
    none = 0,
    byte = 1, // .b
    word = 2, // .w
    long = 4, // .l
};

pub const Registers = struct {
    pc: u32, // Current Program Counter
    usp: u32, // User Stack Pointer
    ssp: u32, // System Stack Pointer

    sr: StatusRegister,
    gpr: GeneralPurpose,

    // M68010+
    vbr: u32, // Vector Base Register
    dfc: u3, // Destination Function Code
    sfc: u3, // Source Function Code
};

// | F  | E  | D | C | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
// | T1 | T0 | S | M | 0 | I | I | I | 0 | 0 | 0 | X | N | Z | V | C |
pub const StatusRegister = struct {
    carry: bool,
    overflow: bool,
    zero: bool,
    negative: bool,
    extend: bool,
    interrupt_priority: u16,
    //master: bool, // M68020+
    supervisor: bool,
    //trace0: bool, // M68020+
    trace1: bool,

    pub fn to_word(self: StatusRegister) u16 {
        var word: u16 = 0;

        if (self.carry)
            word |= 1 << 0;
        if (self.overflow)
            word |= 1 << 1;
        if (self.zero)
            word |= 1 << 2;
        if (self.negative)
            word |= 1 << 3;
        if (self.extend)
            word |= 1 << 4;

        word |= self.interrupt_priority << 8;

        if (self.supervisor)
            word |= 1 << 13;
        if (self.trace1)
            word |= 1 << 15;

        return word;
    }

    pub fn from_word(sr: u16) StatusRegister {
        return .{
            .carry = (sr & (1 << 0)) != 0,
            .overflow = (sr & (1 << 1)) != 0,
            .zero = (sr & (1 << 2)) != 0,
            .negative = (sr & (1 << 3)) != 0,
            .extend = (sr & (1 << 4)) != 0,
            .interrupt_priority = (sr >> 8) & 0b111,
            .supervisor = (sr & (1 << 13)) != 0,
            .trace1 = (sr & (1 << 15)) != 0,
        };
    }
};

test "StatusRegister" {
    const std = @import("std");

    const sr: StatusRegister = .from_word(0b1010_0000_0001_1111);
    const expected: StatusRegister = .{
        .carry = true,
        .overflow = true,
        .zero = true,
        .negative = true,
        .extend = true,
        .interrupt_priority = 0b000,
        .supervisor = true,
        .trace1 = true,
    };

    try std.testing.expectEqual(expected, sr);

    try std.testing.expectEqual(0b1010_0000_0001_1111, sr.to_word());
}

pub const GeneralPurpose = struct {
    pub const Kind = enum {
        data,
        addr,
    };

    flat: [16]u32, // D0-D7 + A0-A7

    pub fn sp(self: *GeneralPurpose) *u32 {
        return &self.flat[15]; // A7 == SP
    }

    pub fn data(self: *GeneralPurpose) []u32 {
        return self.flat[0..8]; // D0-D7
    }

    pub fn addr(self: *GeneralPurpose) []u32 {
        return self.flat[8..16]; // A0-A7
    }

    pub fn read(self: GeneralPurpose, kind: Kind, size: OperandSize, reg: u3) u32 {
        return switch (kind) {
            .data => truncateToSize(size, self.flat[reg]),
            .addr => truncateToSize(size, self.flat[reg + 8]),
        };
    }

    pub fn write(self: *GeneralPurpose, kind: Kind, size: OperandSize, reg: u3, value: u32) void {
        const index = switch (kind) {
            .data => reg,
            .addr => reg + 8,
        };

        self.flat[index] = writeWithSize(size, self.flat[index], value);
    }
};

pub fn truncateToSize(size: OperandSize, value: u32) u32 {
    return switch (size) {
        .byte => value & 0x0000_00ff,
        .word => value & 0x0000_ffff,
        .long => value,
        .none => unreachable,
    };
}

pub fn writeWithSize(size: OperandSize, data: u32, value: u32) u32 {
    return switch (size) {
        .byte => (data & 0xffff_ff00) | (value & 0x0000_00ff),
        .word => (data & 0xffff_0000) | (value & 0x0000_ffff),
        .long => value,
        .none => unreachable,
    };
}

test "GeneralPurposeRegisters" {
    const std = @import("std");

    var gpr: GeneralPurpose = .{
        .flat = [_]u32{0} ** 16,
    };

    try std.testing.expectEqualSlices(u32, &([_]u32{0}) ** 16, &gpr.flat);

    gpr.addr()[0] = 0xcafe;
    gpr.data()[2] = 0xbeef;

    try std.testing.expectEqual(0xcafe, gpr.flat[8]);
    try std.testing.expectEqual(0xbeef, gpr.flat[2]);
}
