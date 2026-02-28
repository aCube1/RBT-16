#pragma once

#include "rbt/basic_types.h"
#include "rbt/error_codes.h"
#include "rbt/helpers.h"

typedef enum RBT_BusDevice {
	RBT_BUSDEV_VDP,
	RBT_BUSDEV_APU,
	RBT_BUSDEV_IO,
	RBT_BUSDEV_SD,
	RBT_BUSDEV_EXT0,
	RBT_BUSDEV_EXT1,
	RBT_BUSDEV_EXT2,
	RBT_BUSDEV_EXT3,
} RBT_BusDevice;

typedef RBT_ErrorCode (*RBT_MMIOReadByteCallback)(void *device, u32 addr, u8 *byte);
typedef RBT_ErrorCode (*RBT_MMIOReadWordCallback)(void *device, u32 addr, u16 *word);
typedef RBT_ErrorCode (*RBT_MMIOWriteByteCallback)(void *device, u32 addr, u8 byte);
typedef RBT_ErrorCode (*RBT_MMIOWriteWordCallback)(void *device, u32 addr, u16 word);

typedef struct RBT_MMIODevice {
	void *device;
	RBT_MMIOReadByteCallback read_byte;
	RBT_MMIOReadWordCallback read_word;
	RBT_MMIOWriteByteCallback write_byte;
	RBT_MMIOWriteWordCallback write_word;
} RBT_MMIODevice;

typedef struct RBT_MemoryBus RBT_MemoryBus;

[[nodiscard]] RBT_MemoryBus *rbt_create_bus(u8 ram_slots);
void rbt_destroy_bus(RBT_MemoryBus *bus);
void rbt_bus_reset(RBT_MemoryBus *bus);

void rbt_attach_bus_mmio(RBT_MemoryBus *bus, RBT_BusDevice dev, RBT_MMIODevice device);
RBT_ErrorCode rbt_bus_init(RBT_MemoryBus *bus, usize size, const u8 *rom);
RBT_ErrorCode rbt_bus_init_from_file(RBT_MemoryBus *bus, const char *filename);

RBT_ErrorCode rbt_bus_read_byte(RBT_MemoryBus *bus, u32 addr, u8 *out);
RBT_ErrorCode rbt_bus_read_word(RBT_MemoryBus *bus, u32 addr, u16 *out);
RBT_ErrorCode rbt_bus_read_long(RBT_MemoryBus *bus, u32 addr, u32 *out);

RBT_ErrorCode rbt_bus_write_byte(RBT_MemoryBus *bus, u32 addr, u8 byte);
RBT_ErrorCode rbt_bus_write_word(RBT_MemoryBus *bus, u32 addr, u16 word);
RBT_ErrorCode rbt_bus_write_long(RBT_MemoryBus *bus, u32 addr, u32 long_);

RBT_ErrorCode rbt_bus_load(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 *out);
RBT_ErrorCode rbt_bus_store(RBT_MemoryBus *bus, RBT_OperandSize size, u32 addr, u32 data);
