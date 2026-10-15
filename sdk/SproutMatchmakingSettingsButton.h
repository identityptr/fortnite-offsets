/**
 * decamp dumper generated SDK
 * Package: /Script/SproutMatchmakingSettingsButton
 */
#pragma once
#include "Basic.h"

// /Script/SproutMatchmakingSettingsButton.SproutMatchmakingSettingsButtonOverride
// Kind: Class; super: MatchmakingSettingsOverrideUI
class USproutMatchmakingSettingsButtonOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ProductLogoWidget[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> MatchFoundWidget; // 0x0048 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USproutMatchmakingSettingsButtonOverride, ProductLogoWidget) == 40, "Offset mismatch for USproutMatchmakingSettingsButtonOverride::ProductLogoWidget");
static_assert(offsetof(USproutMatchmakingSettingsButtonOverride, MatchFoundWidget) == 72, "Offset mismatch for USproutMatchmakingSettingsButtonOverride::MatchFoundWidget");
