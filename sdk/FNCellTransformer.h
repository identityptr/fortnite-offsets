/**
 * decamp dumper generated SDK
 * Package: /Script/FNCellTransformer
 */
#pragma once
#include "Basic.h"

// /Script/FNCellTransformer.FNWorldPartitionISMColorLookup
// Kind: ScriptStruct; super: none
struct FFNWorldPartitionISMColorLookup
{
public:
    std::uint16_t PackedIndices; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FFNWorldPartitionISMColorLookup, PackedIndices) == 0, "Offset mismatch for FFNWorldPartitionISMColorLookup::PackedIndices");

// /Script/FNCellTransformer.FNWorldPartitionISMColorSwap
// Kind: ScriptStruct; super: none
struct FFNWorldPartitionISMColorSwap
{
public:
    std::uint16_t Source; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Dest; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FFNWorldPartitionISMColorSwap, Source) == 0, "Offset mismatch for FFNWorldPartitionISMColorSwap::Source");
static_assert(offsetof(FFNWorldPartitionISMColorSwap, Dest) == 2, "Offset mismatch for FFNWorldPartitionISMColorSwap::Dest");

// /Script/FNCellTransformer.FNWorldPartitionISMComponentSettings
// Kind: ScriptStruct; super: none
struct FFNWorldPartitionISMComponentSettings
{
public:
    void* ISM; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint32_t ColorLookupOffset; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ColorSwapOffset; // 0x000C (Size: 0x4, Type: UInt32Property)
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Flags; // 0x0011 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFNWorldPartitionISMComponentSettings, ISM) == 0, "Offset mismatch for FFNWorldPartitionISMComponentSettings::ISM");
static_assert(offsetof(FFNWorldPartitionISMComponentSettings, ColorLookupOffset) == 8, "Offset mismatch for FFNWorldPartitionISMComponentSettings::ColorLookupOffset");
static_assert(offsetof(FFNWorldPartitionISMComponentSettings, ColorSwapOffset) == 12, "Offset mismatch for FFNWorldPartitionISMComponentSettings::ColorSwapOffset");
static_assert(offsetof(FFNWorldPartitionISMComponentSettings, Type) == 16, "Offset mismatch for FFNWorldPartitionISMComponentSettings::Type");
static_assert(offsetof(FFNWorldPartitionISMComponentSettings, Flags) == 17, "Offset mismatch for FFNWorldPartitionISMComponentSettings::Flags");

// /Script/FNCellTransformer.FNCellTransformer
// Kind: Class; super: WorldPartitionRuntimeCellTransformer
class UFNCellTransformer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFNCellTransformer, bEnabled) == 40, "Offset mismatch for UFNCellTransformer::bEnabled");

// /Script/FNCellTransformer.FNCellTransformerActor
// Kind: Class; super: Interface
class UFNCellTransformerActor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNCellTransformer.FNWorldPartitionActor
// Kind: Class; super: Actor
class UFNWorldPartitionActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    TArray<void*> ISMComponentSettings; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InvalidPrimitives; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0xD0]; // 0x0298
    std::uint8_t bCellTransformerIsGridAligned; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0369
    TArray<void*> ColorSwaps; // 0x0370 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorLUTs; // 0x0380 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AtlasLUTs; // 0x0390 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorLookup; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFNWorldPartitionActor, ISMComponentSettings) == 632, "Offset mismatch for UFNWorldPartitionActor::ISMComponentSettings");
static_assert(offsetof(UFNWorldPartitionActor, InvalidPrimitives) == 648, "Offset mismatch for UFNWorldPartitionActor::InvalidPrimitives");
static_assert(offsetof(UFNWorldPartitionActor, bCellTransformerIsGridAligned) == 872, "Offset mismatch for UFNWorldPartitionActor::bCellTransformerIsGridAligned");
static_assert(offsetof(UFNWorldPartitionActor, ColorSwaps) == 880, "Offset mismatch for UFNWorldPartitionActor::ColorSwaps");
static_assert(offsetof(UFNWorldPartitionActor, ColorLUTs) == 896, "Offset mismatch for UFNWorldPartitionActor::ColorLUTs");
static_assert(offsetof(UFNWorldPartitionActor, AtlasLUTs) == 912, "Offset mismatch for UFNWorldPartitionActor::AtlasLUTs");
static_assert(offsetof(UFNWorldPartitionActor, ColorLookup) == 928, "Offset mismatch for UFNWorldPartitionActor::ColorLookup");
