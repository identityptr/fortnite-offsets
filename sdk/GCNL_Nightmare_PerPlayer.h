/**
 * decamp dumper generated SDK
 * Package: /ShowmanZap_GumboGroove/GameplayCues/Nightmare/GCNL_Nightmare_PerPlayer
 */
#pragma once
#include "Basic.h"

// /ShowmanZap_GumboGroove/GameplayCues/Nightmare/GCNL_Nightmare_PerPlayer.GCNL_Nightmare_PerPlayer_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCNL_Nightmare_PerPlayer_C
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0C48 (Size: 0x8, Type: StructProperty)
    std::uint8_t RenderTimeUpdateTimerHandle[0x8]; // 0x0C50 (Size: 0x8, Type: StructProperty)
    void* NightmareComponent; // 0x0C58 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGCNL_Nightmare_PerPlayer_C, UberGraphFrame) == 3144, "Offset mismatch for UGCNL_Nightmare_PerPlayer_C::UberGraphFrame");
static_assert(offsetof(UGCNL_Nightmare_PerPlayer_C, RenderTimeUpdateTimerHandle) == 3152, "Offset mismatch for UGCNL_Nightmare_PerPlayer_C::RenderTimeUpdateTimerHandle");
static_assert(offsetof(UGCNL_Nightmare_PerPlayer_C, NightmareComponent) == 3160, "Offset mismatch for UGCNL_Nightmare_PerPlayer_C::NightmareComponent");
