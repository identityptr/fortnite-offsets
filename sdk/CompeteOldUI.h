/**
 * decamp dumper generated SDK
 * Package: /Script/CompeteOldUI
 */
#pragma once
#include "Basic.h"

// /Script/CompeteOldUI.FortUIGameFeatureAction_CompeteOldUI
// Kind: Class; super: FortUIGameFeatureAction
class UFortUIGameFeatureAction_CompeteOldUI
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> TournamentModalClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortUIGameFeatureAction_CompeteOldUI, TournamentModalClass) == 40, "Offset mismatch for UFortUIGameFeatureAction_CompeteOldUI::TournamentModalClass");
