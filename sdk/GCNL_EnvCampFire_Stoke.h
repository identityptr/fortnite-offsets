/**
 * decamp dumper generated SDK
 * Package: /FNGameplayCues/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Stoke
 */
#pragma once
#include "Basic.h"

// /FNGameplayCues/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCNL_EnvCampFire_Stoke_C
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0C48 (Size: 0x8, Type: StructProperty)
    std::uint8_t Row_TickInterval[0x28]; // 0x0C50 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_MaxHeals[0x1]; // 0x0C78 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGCNL_EnvCampFire_Stoke_C, UberGraphFrame) == 3144, "Offset mismatch for UGCNL_EnvCampFire_Stoke_C::UberGraphFrame");
static_assert(offsetof(UGCNL_EnvCampFire_Stoke_C, Row_TickInterval) == 3152, "Offset mismatch for UGCNL_EnvCampFire_Stoke_C::Row_TickInterval");
static_assert(offsetof(UGCNL_EnvCampFire_Stoke_C, Row_MaxHeals) == 3192, "Offset mismatch for UGCNL_EnvCampFire_Stoke_C::Row_MaxHeals");
