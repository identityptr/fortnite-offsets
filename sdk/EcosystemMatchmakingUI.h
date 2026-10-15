/**
 * decamp dumper generated SDK
 * Package: /Script/EcosystemMatchmakingUI
 */
#pragma once
#include "Basic.h"

// /Script/EcosystemMatchmakingUI.MatchmakingWidgetOverride
// Kind: Class; super: GameFeatureAction
class UMatchmakingWidgetOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> MatchmakingWidgetClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UMatchmakingWidgetOverride, MatchmakingWidgetClass) == 40, "Offset mismatch for UMatchmakingWidgetOverride::MatchmakingWidgetClass");
