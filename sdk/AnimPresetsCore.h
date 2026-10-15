/**
 * decamp dumper generated SDK
 * Package: /Script/AnimPresetsCore
 */
#pragma once
#include "Basic.h"

// /Script/AnimPresetsCore.NPCRetargetAnimInstanceProxy
// Kind: ScriptStruct; super: AnimInstanceProxy
struct FNPCRetargetAnimInstanceProxy
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    TMap<void*, void*> SlotGroupInertializationRequestDataMap; // 0x03F0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNPCRetargetAnimInstanceProxy, SlotGroupInertializationRequestDataMap) == 1008, "Offset mismatch for FNPCRetargetAnimInstanceProxy::SlotGroupInertializationRequestDataMap");

// /Script/AnimPresetsCore.AnimPreset
// Kind: Class; super: Object
class UAnimPreset
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AnimPresetsCore.NPCRetargetAnimInstance
// Kind: Class; super: AnimInstance
class UNPCRetargetAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t RetargetNode[0x1]; // 0x0260 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNPCRetargetAnimInstance, RetargetNode) == 608, "Offset mismatch for UNPCRetargetAnimInstance::RetargetNode");
