/**
 * decamp dumper generated SDK
 * Package: /Script/SequenceRuntimeRecorder
 */
#pragma once
#include "Basic.h"

// /Script/SequenceRuntimeRecorder.TimecodeBoneMethod
// Kind: ScriptStruct; super: none
struct FTimecodeBoneMethod
{
public:
    std::uint8_t BoneMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName BoneName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FTimecodeBoneMethod, BoneMode) == 0, "Offset mismatch for FTimecodeBoneMethod::BoneMode");
static_assert(offsetof(FTimecodeBoneMethod, BoneName) == 4, "Offset mismatch for FTimecodeBoneMethod::BoneName");
