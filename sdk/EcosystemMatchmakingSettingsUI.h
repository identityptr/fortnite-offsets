/**
 * decamp dumper generated SDK
 * Package: /Script/EcosystemMatchmakingSettingsUI
 */
#pragma once
#include "Basic.h"

// /Script/EcosystemMatchmakingSettingsUI.EcosystemMatchmakingSettingsUI
// Kind: Class; super: MatchmakingSettingsOverrideUI
class UEcosystemMatchmakingSettingsUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MatchmakingSettingsModal[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> MatchFoundWidgetsForProductTagEntries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TSoftClassPtr<void> DefaultMatchFoundWidget; // 0x0058 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UEcosystemMatchmakingSettingsUI, MatchmakingSettingsModal) == 40, "Offset mismatch for UEcosystemMatchmakingSettingsUI::MatchmakingSettingsModal");
static_assert(offsetof(UEcosystemMatchmakingSettingsUI, MatchFoundWidgetsForProductTagEntries) == 72, "Offset mismatch for UEcosystemMatchmakingSettingsUI::MatchFoundWidgetsForProductTagEntries");
static_assert(offsetof(UEcosystemMatchmakingSettingsUI, DefaultMatchFoundWidget) == 88, "Offset mismatch for UEcosystemMatchmakingSettingsUI::DefaultMatchFoundWidget");
