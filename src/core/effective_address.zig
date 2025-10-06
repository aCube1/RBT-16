const std = @import("std");

const signExtend = @import("../helpers.zig").signExtend;
const Mmu = @import("Mmu.zig");
const types = @import("types.zig");
const OperandSize = types.OperandSize;

pub const Error = error{
    InvalidExtensionWord,
    UnknownAddressMode,
};

pub const AddressMode = enum {
    /// mode:000, reg:Dn  | Dn
    direct_data,
    /// mode:001, reg:An  | An
    direct_address,
    /// mode:010, reg:An  | (An)
    indirect,
    /// mode:011, reg:An  | (An)+
    indirect_postinc,
    /// mode:100, reg:An  | -(An)
    indirect_predec,
    /// mode:101, reg:An  | (d16, An)
    indirect_displacement,
    /// mode:110, reg:An  | (d8, An, Xn)
    indirect_indexed,
    /// mode:111, reg:000 | (xxx).W
    absolute_short,
    /// mode:111, reg:001 | (xxx).L
    absolute_long,
    /// mode:111, reg:010 | (d16, PC)
    pc_displacement,
    /// mode:111, reg:011 | (d8, PC, Xn)
    pc_indexed,
    /// mode:111, reg:100 | #imm
    immediate,
};

pub const IndexExtension = struct {
    is_addr: bool, // Dn:0 | An:1
    is_long: bool, // W:0 | L:1
    reg: u3,
    scale: u2, // M68020+; Must always be 0 on M68000/M68008/MC68010
    disp: i32,

    pub fn from_word(ext: u16) !IndexExtension {
        // Brief Extension Word
        // | F | E  | D  | C  | B | A | 9 | 8 | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
        // |A/D| Register     | S | Scale | 0 | Displacement Integer          |

        const scale: u2 = @truncate(ext >> 8);
        if (scale != 0) {
            std.log.err("[CPU] > M68010 doesn't support full extension word", .{});
            return Error.InvalidExtensionWord;
        }

        const displacement: u8 = @truncate(ext & 0xff);

        return .{
            .is_addr = ((ext >> 15) & 0x01) != 0,
            .is_long = ((ext >> 11) & 0x01) != 0,
            .reg = @truncate((ext >> 12) & 0x07),
            .scale = scale,
            .disp = signExtend(.byte, displacement),
        };
    }

    pub fn to_word(self: IndexExtension) u16 {
        if (self.scale != 0) {
            std.log.warn("[CPU] > Extension word's scale is not zero", .{});
        }

        var word: u16 = 0;

        if (self.is_addr)
            word |= 1 << 15;
        if (self.is_long)
            word |= 1 << 11;

        word |= @as(u16, self.reg) << 12;
        word |= @truncate(@as(u32, @bitCast(self.disp)) & 0xff);

        return word;
    }
};

test "IndexExtension" {
    const ix = try IndexExtension.from_word(0b0_111_1_00_0_1100_1110);

    try std.testing.expectEqual(0b0_111_1_00_0_1100_1110, ix.to_word());
}

pub const EffectiveAddress = struct {
    size: OperandSize,
    start_pc: u32,
    words: u8,

    mode: union(AddressMode) {
        /// EA = Dn
        direct_data: u3,
        /// EA = An
        direct_address: u3,
        /// EA = (An)
        indirect: u3,
        /// EA = (An) + SIZE
        indirect_postinc: u3,
        /// EA = (An) - SIZE
        indirect_predec: u3,
        /// EA = (An) + d16
        indirect_displacement: struct { reg: u3, disp: i32 },
        /// EA = (An) + (Xn) + d8
        indirect_indexed: struct { reg: u3, ix: IndexExtension },
        /// EA = (xxx).W - Sign Extended
        absolute_short: u32,
        /// EA = (xxx).L
        absolute_long: u32,
        /// EA = (PC) + d16
        pc_displacement: i32,
        /// EA = (PC) + (Xn) + d8
        pc_indexed: IndexExtension,
        /// EA = #imm
        immediate: u32,
    },

    pub fn decode(mode: u3, reg: u3, size: OperandSize, mmu: *const Mmu, pc: u32) !EffectiveAddress {
        return switch (mode) {
            0b000 => .{ // Dn
                .size = size,
                .start_pc = pc,
                .words = 0,
                .mode = .{ .direct_data = reg },
            },
            0b001 => .{ // An
                .size = size,
                .start_pc = pc,
                .words = 0,
                .mode = .{ .direct_address = reg },
            },
            0b010 => .{ // (An)
                .size = size,
                .start_pc = pc,
                .words = 0,
                .mode = .{ .indirect = reg },
            },
            0b011 => .{ // (An)+
                .size = size,
                .start_pc = pc,
                .words = 0,
                .mode = .{ .indirect_postinc = reg },
            },
            0b100 => .{ // -(An)
                .size = size,
                .start_pc = pc,
                .words = 0,
                .mode = .{ .indirect_predec = reg },
            },
            0b101 => .{ // (d16, An)
                .size = size,
                .start_pc = pc,
                .words = 1,
                .mode = .{ .indirect_displacement = .{
                    .reg = reg,
                    .disp = signExtend(.word, try mmu.readBe16(pc)),
                } },
            },
            0b110 => blk: { // (d8, An, Xn)
                const ext = try mmu.readBe16(pc);

                break :blk .{
                    .size = size,
                    .start_pc = pc,
                    .words = 1,
                    .mode = .{ .indirect_indexed = .{
                        .reg = reg,
                        .ix = try IndexExtension.from_word(ext),
                    } },
                };
            },
            0b111 => switch (reg) {
                0b000 => .{ // (xxx).W
                    .size = size,
                    .start_pc = pc,
                    .words = 1,
                    .mode = .{
                        .absolute_short = @bitCast(signExtend(.word, try mmu.readBe16(pc))),
                    },
                },
                0b001 => .{ // (xxx).L
                    .size = size,
                    .start_pc = pc,
                    .words = 2,
                    .mode = .{ .absolute_long = try mmu.readBe32(pc) },
                },
                0b010 => .{ // (d16, PC)
                    .size = size,
                    .start_pc = pc,
                    .words = 1,
                    .mode = .{ .pc_displacement = signExtend(.word, try mmu.readBe16(pc)) },
                },
                0b011 => blk: { // (d8, PC, Xn)
                    const ext = try mmu.readBe16(pc);

                    break :blk .{
                        .size = size,
                        .start_pc = pc,
                        .words = 1,
                        .mode = .{ .pc_indexed = try IndexExtension.from_word(ext) },
                    };
                },
                0b100 => .{ // #imm
                    .size = size,
                    .start_pc = pc,
                    .words = size,
                    .mode = .{ .immediate = switch (size) {
                        .byte => try mmu.load(size, pc),
                        .none => unreachable,
                    } },
                },
                else => Error.UnknownAddressMode,
            },
        };
    }
};
