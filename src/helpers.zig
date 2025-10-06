const std = @import("std");

const OperandSize = @import("core/types.zig").OperandSize;

pub fn signExtend(size: OperandSize, value: u32) i32 {
    return switch (size) {
        .byte => @as(i32, @as(i8, @bitCast(@as(u8, @truncate(value))))),
        .word => @as(i32, @as(i16, @bitCast(@as(u16, @truncate(value))))),
        .long => @as(i32, @bitCast(value)),
        .none => unreachable,
    };
}
