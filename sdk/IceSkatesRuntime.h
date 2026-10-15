/**
 * decamp dumper generated SDK
 * Package: /Script/IceSkatesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/IceSkatesRuntime.IceSkatesMME_AttributesBase
// Kind: Class; super: FortMovementMode_ExtMovementAttribute
class UIceSkatesMME_AttributesBase
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    std::uint8_t MaxSpeedMultiplier_TacSprinting[0x38]; // 0x03D0 (Size: 0x38, Type: OptionalProperty)
    std::uint8_t MaxSpeedMultiplier_NotTacSprinting[0x1]; // 0x0408 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UIceSkatesMME_AttributesBase, MaxSpeedMultiplier_TacSprinting) == 976, "Offset mismatch for UIceSkatesMME_AttributesBase::MaxSpeedMultiplier_TacSprinting");
static_assert(offsetof(UIceSkatesMME_AttributesBase, MaxSpeedMultiplier_NotTacSprinting) == 1032, "Offset mismatch for UIceSkatesMME_AttributesBase::MaxSpeedMultiplier_NotTacSprinting");
