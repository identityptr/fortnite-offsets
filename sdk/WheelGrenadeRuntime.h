/**
 * decamp dumper generated SDK
 * Package: /Script/WheelGrenadeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WheelGrenadeRuntime.WheelGrenadeWheel
// Kind: Class; super: AttachableWheel
class UWheelGrenadeWheel
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    float MaxHealth; // 0x0318 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x031C
    void* AbilitySystemComponent; // 0x0320 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWheelGrenadeWheel, MaxHealth) == 792, "Offset mismatch for UWheelGrenadeWheel::MaxHealth");
static_assert(offsetof(UWheelGrenadeWheel, AbilitySystemComponent) == 800, "Offset mismatch for UWheelGrenadeWheel::AbilitySystemComponent");
