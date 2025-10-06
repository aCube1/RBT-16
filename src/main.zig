const std = @import("std");

pub fn main() !void {
    std.debug.print("Hello World!\n", .{});
}

test {
    _ = @import("core/Mmu.zig");
    _ = @import("core/effective_address.zig");
    _ = @import("core/types.zig");
    _ = @import("helpers.zig");
}
