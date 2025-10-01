const std = @import("std");

pub fn main() !void {
    std.debug.print("Hello World!\n", .{});
}

test {
    _ = @import("cpu/types.zig");
    _ = @import("cpu/Mmu.zig");
}
