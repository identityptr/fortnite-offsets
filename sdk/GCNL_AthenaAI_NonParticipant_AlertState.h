/**
 * decamp dumper generated SDK
 * Package: /FNGameplayCues/Athena/GameplayCueNotifies/GCNL_AthenaAI_NonParticipant_AlertState
 */
#pragma once
#include "Basic.h"

// /FNGameplayCues/Athena/GameplayCueNotifies/GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotifyAthena_AIAlertState
class UGCNL_AthenaAI_NonParticipant_AlertState_C
{
public:
    std::uint8_t Pad_0000[0xCF0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0CF0 (Size: 0x8, Type: StructProperty)
    std::uint8_t IconColorAlert[0x10]; // 0x0CF8 (Size: 0x10, Type: StructProperty)
    std::uint8_t IconColorThreatend[0x10]; // 0x0D08 (Size: 0x10, Type: StructProperty)
    double AnimationLength; // 0x0D18 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t IconColorAlertInner[0x18]; // 0x0D20 (Size: 0x18, Type: StructProperty)
    void* SearchingSound; // 0x0D38 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0D40
    std::uint8_t TagsToPreventUIAndAudio[0x1]; // 0x0D48 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGCNL_AthenaAI_NonParticipant_AlertState_C, UberGraphFrame) == 3312, "Offset mismatch for UGCNL_AthenaAI_NonParticipant_AlertState_C::UberGraphFrame");
static_assert(offsetof(UGCNL_AthenaAI_NonParticipant_AlertState_C, IconColorAlert) == 3320, "Offset mismatch for UGCNL_AthenaAI_NonParticipant_AlertState_C::IconColorAlert");
static_assert(offsetof(UGCNL_AthenaAI_NonParticipant_AlertState_C, IconColorThreatend) == 3336, "Offset mismatch for UGCNL_AthenaAI_NonParticipant_AlertState_C::IconColorThreatend");
static_assert(offsetof(UGCNL_AthenaAI_NonParticipant_AlertState_C, AnimationLength) == 3352, "Offset mismatch for UGCNL_AthenaAI_NonParticipant_AlertState_C::AnimationLength");
static_assert(offsetof(UGCNL_AthenaAI_NonParticipant_AlertState_C, IconColorAlertInner) == 3360, "Offset mismatch for UGCNL_AthenaAI_NonParticipant_AlertState_C::IconColorAlertInner");
static_assert(offsetof(UGCNL_AthenaAI_NonParticipant_AlertState_C, SearchingSound) == 3384, "Offset mismatch for UGCNL_AthenaAI_NonParticipant_AlertState_C::SearchingSound");
static_assert(offsetof(UGCNL_AthenaAI_NonParticipant_AlertState_C, TagsToPreventUIAndAudio) == 3400, "Offset mismatch for UGCNL_AthenaAI_NonParticipant_AlertState_C::TagsToPreventUIAndAudio");
