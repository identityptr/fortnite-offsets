/**
 * decamp dumper generated SDK
 * Package: /Script/JunoWorldManagementUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoWorldManagementUI.JunoMatchmakingSettingsUI
// Kind: Class; super: MatchmakingSettingsOverrideUI
class UJunoMatchmakingSettingsUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MatchmakingSettingsModal[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ProductLogoWidget[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> MatchFoundWidget; // 0x0068 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UJunoMatchmakingSettingsUI, MatchmakingSettingsModal) == 40, "Offset mismatch for UJunoMatchmakingSettingsUI::MatchmakingSettingsModal");
static_assert(offsetof(UJunoMatchmakingSettingsUI, ProductLogoWidget) == 72, "Offset mismatch for UJunoMatchmakingSettingsUI::ProductLogoWidget");
static_assert(offsetof(UJunoMatchmakingSettingsUI, MatchFoundWidget) == 104, "Offset mismatch for UJunoMatchmakingSettingsUI::MatchFoundWidget");
