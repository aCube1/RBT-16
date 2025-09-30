pub const OperandSize = enum(u8) {
    None = 0,
    Byte = 1, // .b
    Word = 2, // .w
    Long = 4, // .l
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

pub const GeneralPurpose = struct {
    pub const Kind = enum {
        Data,
        Addr,
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
            .Data => truncateToSize(size, self.flat[reg]),
            .Addr => truncateToSize(size, self.flat[reg + 8]),
        };
    }

    pub fn write(self: *GeneralPurpose, kind: Kind, size: OperandSize, reg: u3, value: u32) void {
        const index = switch (kind) {
            .Data => reg,
            .Addr => reg + 8,
        };

        self.flat[index] = writeWithSize(size, self.flat[index], value);
    }
};

pub fn truncateToSize(size: OperandSize, value: u32) u32 {
    return switch (size) {
        .Byte => value & 0x0000_00ff,
        .Word => value & 0x0000_ffff,
        .Long => value,
        .None => unreachable,
    };
}

pub fn writeWithSize(size: OperandSize, data: u32, value: u32) u32 {
    return switch (size) {
        .Byte => (data & 0xffff_ff00) | (value & 0x0000_00ff),
        .Word => (data & 0xffff_0000) | (value & 0x0000_ffff),
        .Long => value,
        .None => unreachable,
    };
}

test "StatusRegister" {
    const std = @import("std");

    const sr: StatusRegister = .from_word(0b1010_0000_0001_1111);

    try std.testing.expectEqual(StatusRegister{
        .carry = true,
        .overflow = true,
        .zero = true,
        .negative = true,
        .extend = true,
        .interrupt_priority = 0b000,
        .supervisor = true,
        .trace1 = true,
    }, sr);

    try std.testing.expectEqual(0b1010_0000_0001_1111, sr.to_word());
}
