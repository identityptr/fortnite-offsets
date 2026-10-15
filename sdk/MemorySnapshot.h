/**
 * decamp dumper generated SDK
 * Package: /Script/MemorySnapshot
 */
#pragma once
#include "Basic.h"

// /Script/MemorySnapshot.TakeAssetSnapshot
// Kind: ScriptStruct; super: none
struct FTakeAssetSnapshot
{
public:
    std::uint16_t Port; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t TargetInstanceId[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint32_t TraceFlags; // 0x0014 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FTakeAssetSnapshot, Port) == 0, "Offset mismatch for FTakeAssetSnapshot::Port");
static_assert(offsetof(FTakeAssetSnapshot, TargetInstanceId) == 4, "Offset mismatch for FTakeAssetSnapshot::TargetInstanceId");
static_assert(offsetof(FTakeAssetSnapshot, TraceFlags) == 20, "Offset mismatch for FTakeAssetSnapshot::TraceFlags");
