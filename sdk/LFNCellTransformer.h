/**
 * decamp dumper generated SDK
 * Package: /Script/LFNCellTransformer
 */
#pragma once
#include "Basic.h"

// /Script/LFNCellTransformer.LFNCellTransformer
// Kind: Class; super: FNCellTransformer
class ULFNCellTransformer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULFNCellTransformer, bEnabled) == 40, "Offset mismatch for ULFNCellTransformer::bEnabled");

// /Script/LFNCellTransformer.LFNWorldPartitionActor
// Kind: Class; super: FNWorldPartitionActor
class ULFNWorldPartitionActor
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

static_assert(offsetof(ULFNWorldPartitionActor, ISMComponentSettings) == 632, "Offset mismatch for ULFNWorldPartitionActor::ISMComponentSettings");
static_assert(offsetof(ULFNWorldPartitionActor, InvalidPrimitives) == 648, "Offset mismatch for ULFNWorldPartitionActor::InvalidPrimitives");
static_assert(offsetof(ULFNWorldPartitionActor, bCellTransformerIsGridAligned) == 872, "Offset mismatch for ULFNWorldPartitionActor::bCellTransformerIsGridAligned");
static_assert(offsetof(ULFNWorldPartitionActor, ColorSwaps) == 880, "Offset mismatch for ULFNWorldPartitionActor::ColorSwaps");
static_assert(offsetof(ULFNWorldPartitionActor, ColorLUTs) == 896, "Offset mismatch for ULFNWorldPartitionActor::ColorLUTs");
static_assert(offsetof(ULFNWorldPartitionActor, AtlasLUTs) == 912, "Offset mismatch for ULFNWorldPartitionActor::AtlasLUTs");
static_assert(offsetof(ULFNWorldPartitionActor, ColorLookup) == 928, "Offset mismatch for ULFNWorldPartitionActor::ColorLookup");
