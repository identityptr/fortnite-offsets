/**
 * decamp dumper generated SDK
 * Package: /ShowmanZap_GumboGroove/GameplayCues/Nightmare/GCN_Nightmare_LocalPlayer_Activation
 */
#pragma once
#include "Basic.h"

// /ShowmanZap_GumboGroove/GameplayCues/Nightmare/GCN_Nightmare_LocalPlayer_Activation.GCN_Nightmare_LocalPlayer_Activation_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Burst
class UGCN_Nightmare_LocalPlayer_Activation_C
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t DefaultCondition[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultAttachment[0x58]; // 0x0070 (Size: 0x58, Type: StructProperty)
    std::uint8_t BurstEffectData[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGCN_Nightmare_LocalPlayer_Activation_C, DefaultCondition) == 56, "Offset mismatch for UGCN_Nightmare_LocalPlayer_Activation_C::DefaultCondition");
static_assert(offsetof(UGCN_Nightmare_LocalPlayer_Activation_C, DefaultAttachment) == 112, "Offset mismatch for UGCN_Nightmare_LocalPlayer_Activation_C::DefaultAttachment");
static_assert(offsetof(UGCN_Nightmare_LocalPlayer_Activation_C, BurstEffectData) == 200, "Offset mismatch for UGCN_Nightmare_LocalPlayer_Activation_C::BurstEffectData");
