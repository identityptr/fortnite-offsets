/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamQuickMixRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMJamQuickMixRuntime.JamQuickMixControllerComponent
// Kind: Class; super: ControllerComponent
class UJamQuickMixControllerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t bNeedToInitializeUI; // 0x00D8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJamQuickMixControllerComponent, bNeedToInitializeUI) == 216, "Offset mismatch for UJamQuickMixControllerComponent::bNeedToInitializeUI");
