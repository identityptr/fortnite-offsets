/**
 * decamp dumper generated SDK
 * Package: /Script/MoonflaxNitroSplashRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MoonflaxNitroSplashRuntime.NitroSplashLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNitroSplashLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsTacSprintNitroSplash; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x1171
    std::uint8_t PlayerConsumingTag[0x1]; // 0x1174 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNitroSplashLayerAnimInstance, bIsTacSprintNitroSplash) == 4464, "Offset mismatch for UNitroSplashLayerAnimInstance::bIsTacSprintNitroSplash");
static_assert(offsetof(UNitroSplashLayerAnimInstance, PlayerConsumingTag) == 4468, "Offset mismatch for UNitroSplashLayerAnimInstance::PlayerConsumingTag");
