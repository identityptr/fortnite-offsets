/**
 * decamp dumper generated SDK
 * Package: /TacticalSprintGame/GameplayCueNotifies/GCN_Athena_Player_TacticalSprint_OutOfEnergy
 */
#pragma once
#include "Basic.h"

// /TacticalSprintGame/GameplayCueNotifies/GCN_Athena_Player_TacticalSprint_OutOfEnergy.GCN_Athena_Player_TacticalSprint_OutOfEnergy_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Burst
class UGCN_Athena_Player_TacticalSprint_OutOfEnergy_C
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t DefaultCondition[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultAttachment[0x58]; // 0x0070 (Size: 0x58, Type: StructProperty)
    std::uint8_t BurstEffectData[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGCN_Athena_Player_TacticalSprint_OutOfEnergy_C, DefaultCondition) == 56, "Offset mismatch for UGCN_Athena_Player_TacticalSprint_OutOfEnergy_C::DefaultCondition");
static_assert(offsetof(UGCN_Athena_Player_TacticalSprint_OutOfEnergy_C, DefaultAttachment) == 112, "Offset mismatch for UGCN_Athena_Player_TacticalSprint_OutOfEnergy_C::DefaultAttachment");
static_assert(offsetof(UGCN_Athena_Player_TacticalSprint_OutOfEnergy_C, BurstEffectData) == 200, "Offset mismatch for UGCN_Athena_Player_TacticalSprint_OutOfEnergy_C::BurstEffectData");
