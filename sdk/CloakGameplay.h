/**
 * decamp dumper generated SDK
 * Package: /Script/CloakGameplay
 */
#pragma once
#include "Basic.h"

// /Script/CloakGameplay.FortGameCueCloakModifier
// Kind: ScriptStruct; super: none
struct FFortGameCueCloakModifier
{
public:
    std::uint8_t bCanBeEnabled[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t VisibilityModifierMultiplicative[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t VisibilityModifierAdditive[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t AlphaTimeToEnabled[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t AlphaTimeToDisabled[0x28]; // 0x00A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCurrentlyEnabled; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00C9
    float CurrentAlpha; // 0x00CC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortGameCueCloakModifier, bCanBeEnabled) == 0, "Offset mismatch for FFortGameCueCloakModifier::bCanBeEnabled");
static_assert(offsetof(FFortGameCueCloakModifier, VisibilityModifierMultiplicative) == 40, "Offset mismatch for FFortGameCueCloakModifier::VisibilityModifierMultiplicative");
static_assert(offsetof(FFortGameCueCloakModifier, VisibilityModifierAdditive) == 80, "Offset mismatch for FFortGameCueCloakModifier::VisibilityModifierAdditive");
static_assert(offsetof(FFortGameCueCloakModifier, AlphaTimeToEnabled) == 120, "Offset mismatch for FFortGameCueCloakModifier::AlphaTimeToEnabled");
static_assert(offsetof(FFortGameCueCloakModifier, AlphaTimeToDisabled) == 160, "Offset mismatch for FFortGameCueCloakModifier::AlphaTimeToDisabled");
static_assert(offsetof(FFortGameCueCloakModifier, bCurrentlyEnabled) == 200, "Offset mismatch for FFortGameCueCloakModifier::bCurrentlyEnabled");
static_assert(offsetof(FFortGameCueCloakModifier, CurrentAlpha) == 204, "Offset mismatch for FFortGameCueCloakModifier::CurrentAlpha");

// /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGameCueNotifyLoop_Cloak
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    void* TargetPlayer; // 0x0C48 (Size: 0x8, Type: ObjectProperty)
    float VisibilityLevel; // 0x0C50 (Size: 0x4, Type: FloatProperty)
    float StationaryVisMult; // 0x0C54 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedVisMult; // 0x0C58 (Size: 0x4, Type: FloatProperty)
    float SpeedForMaxVis; // 0x0C5C (Size: 0x4, Type: FloatProperty)
    float VisibilityMinFriendly; // 0x0C60 (Size: 0x4, Type: FloatProperty)
    float VisibilityMinNonfriendly; // 0x0C64 (Size: 0x4, Type: FloatProperty)
    float VisibilityLevelChangeRate; // 0x0C68 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0C6C
    TMap<void*, void*> CloakModifiersByNameMap; // 0x0C70 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, TargetPlayer) == 3144, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::TargetPlayer");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, VisibilityLevel) == 3152, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::VisibilityLevel");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, StationaryVisMult) == 3156, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::StationaryVisMult");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, MaxSpeedVisMult) == 3160, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::MaxSpeedVisMult");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, SpeedForMaxVis) == 3164, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::SpeedForMaxVis");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, VisibilityMinFriendly) == 3168, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::VisibilityMinFriendly");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, VisibilityMinNonfriendly) == 3172, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::VisibilityMinNonfriendly");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, VisibilityLevelChangeRate) == 3176, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::VisibilityLevelChangeRate");
static_assert(offsetof(UFortGameCueNotifyLoop_Cloak, CloakModifiersByNameMap) == 3184, "Offset mismatch for UFortGameCueNotifyLoop_Cloak::CloakModifiersByNameMap");
