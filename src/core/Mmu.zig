const std = @import("std");
const Allocator = std.mem.Allocator;
const assert = std.debug.assert;

const Mmu = @This();

pub const Error = error{
    InvalidAddress,
    MemoryOverflow,
};

pub const max_slot_size = 512 * 1024; // Each RAM slot has 512KB
pub const max_slots = 8;

active_slots: u8,
ram_data: []u8 = undefined,
allocator: Allocator,

pub fn init(allocator: Allocator, slots: u8) !Mmu {
    assert(slots <= max_slots);

    const size = slots * @as(usize, max_slot_size);
    const buf = try allocator.alloc(u8, size);
    @memset(buf, 0);

    return .{
        .active_slots = slots,
        .ram_data = buf,
        .allocator = allocator,
    };
}

pub fn deinit(self: *Mmu) void {
    self.allocator.free(self.ram_data);
}

pub fn slice(self: *Mmu, start: usize, count: usize) Error![]u8 {
    const end = start + count;
    if (start >= end or start >= self.ram_data.len) {
        return Error.InvalidAddress;
    }

    if (end > self.ram_data.len) {
        return Error.MemoryOverflow;
    }

    return self.ram_data[start..end];
}

pub fn read8(self: *Mmu, addr: u32) Error!u8 {
    return try self.slice(addr, 1)[0];
}

pub fn write8(self: *Mmu, addr: u32, byte: u8) Error!void {
    var bytes = try self.slice(addr, 1);
    bytes[0] = byte;
}

// NOTE: Maybe I can use `std.mem.readInt`
pub fn readBe16(self: *Mmu, addr: u32) Error!u16 {
    var bytes = try self.slice(addr, 2);

    return (@as(u16, bytes[0]) << 8) | bytes[1];
}

// NOTE: Maybe I can use `std.mem.writeInt`
pub fn writeBe16(self: *Mmu, addr: u32, word: u16) Error!void {
    var bytes = try self.slice(addr, 2);

    bytes[0] = @truncate(word >> 8);
    bytes[1] = @truncate(word);
}

pub fn readBe32(self: *Mmu, addr: u32) Error!u32 {
    var bytes = try self.slice(addr, 4);

    return (@as(u32, bytes[0]) << 24) |
        (@as(u32, bytes[1]) << 16) |
        (@as(u32, bytes[2]) << 8) |
        @as(u32, bytes[3]);
}

pub fn writeBe32(self: *Mmu, addr: u32, long: u32) Error!void {
    var bytes = try self.slice(addr, 4);

    bytes[0] = @truncate(long >> 24);
    bytes[1] = @truncate(long >> 16);
    bytes[2] = @truncate(long >> 8);
    bytes[3] = @truncate(long);
}

test "MMU" {
    const gpa = std.testing.allocator;

    var mmu = try Mmu.init(gpa, 1);
    defer mmu.deinit();

    try mmu.writeBe16(0xcafe, 0xbeef);
    try std.testing.expect(mmu.ram_data[0xcafe] == 0xbe);
    try std.testing.expect(mmu.ram_data[0xcafe + 1] == 0xef);
    try std.testing.expect((try mmu.readBe16(0xcafe)) == 0xbeef);

    try mmu.writeBe32(0x4224, 0xfeef_bafe);
    try std.testing.expect(mmu.ram_data[0x4224] == 0xfe);
    try std.testing.expect(mmu.ram_data[0x4224 + 1] == 0xef);
    try std.testing.expect(mmu.ram_data[0x4224 + 2] == 0xba);
    try std.testing.expect(mmu.ram_data[0x4224 + 3] == 0xfe);
    try std.testing.expect((try mmu.readBe32(0x4224)) == 0xfeef_bafe);

    var bytes = try mmu.slice(0x0000, 3);
    bytes[0] = 0x12;
    bytes[1] = 0x34;
    bytes[2] = 0x56;

    try std.testing.expect(mmu.ram_data[0x0000] == 0x12);
    try std.testing.expect(mmu.ram_data[0x0001] == 0x34);
    try std.testing.expect(mmu.ram_data[0x0002] == 0x56);
}
