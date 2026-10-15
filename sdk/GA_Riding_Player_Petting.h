/**
 * decamp dumper generated SDK
 * Package: /RidingContent/Gameplay/General/GA_Riding_Player_Petting
 */
#pragma once
#include "Basic.h"

// /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
// Kind: BlueprintGeneratedClass; super: FortGameplayAbility
class UGA_Riding_Player_Petting_C
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x0B20 (Size: 0x10, Type: StructProperty)
    void* GE_PlayerPetting; // 0x0B30 (Size: 0x8, Type: ClassProperty)
    TArray<void*> TagsToCancelPetting; // 0x0B38 (Size: 0x10, Type: ArrayProperty)
    void* FortPlayerPawnRider; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGA_Riding_Player_Petting_C, UberGraphFrame) == 2848, "Offset mismatch for UGA_Riding_Player_Petting_C::UberGraphFrame");
static_assert(offsetof(UGA_Riding_Player_Petting_C, GE_PlayerPetting) == 2864, "Offset mismatch for UGA_Riding_Player_Petting_C::GE_PlayerPetting");
static_assert(offsetof(UGA_Riding_Player_Petting_C, TagsToCancelPetting) == 2872, "Offset mismatch for UGA_Riding_Player_Petting_C::TagsToCancelPetting");
static_assert(offsetof(UGA_Riding_Player_Petting_C, FortPlayerPawnRider) == 2888, "Offset mismatch for UGA_Riding_Player_Petting_C::FortPlayerPawnRider");
