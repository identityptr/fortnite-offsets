/**
 * decamp dumper generated SDK
 * Package: /GliderRelease/GameplayCues/GCN_DangerLoop_New
 */
#pragma once
#include "Basic.h"

// /GliderRelease/GameplayCues/GCN_DangerLoop_New.GCN_DangerLoop_New_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCN_DangerLoop_New_C
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t UberGraphFrame[0xE0]; // 0x0C48 (Size: 0xE0, Type: StructProperty)
    void* ListenToShouldShowDangerWarningChangedAsyncAction; // 0x0D28 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DangerScreenVisualEffectBurstData[0x148]; // 0x0D30 (Size: 0x148, Type: StructProperty)
    std::uint8_t DangerSoundEffectBurstData[0x148]; // 0x0E78 (Size: 0x148, Type: StructProperty)
    std::uint8_t DangerCameraShakeBurstData[0x148]; // 0x0FC0 (Size: 0x148, Type: StructProperty)
    std::uint8_t ShouldShowScreenVisualEffect[0x28]; // 0x1108 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldPlaySoundEffect[0x28]; // 0x1130 (Size: 0x28, Type: StructProperty)
    std::uint8_t ShouldTriggerCameraShake[0x1]; // 0x1158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGCN_DangerLoop_New_C, UberGraphFrame) == 3144, "Offset mismatch for UGCN_DangerLoop_New_C::UberGraphFrame");
static_assert(offsetof(UGCN_DangerLoop_New_C, ListenToShouldShowDangerWarningChangedAsyncAction) == 3368, "Offset mismatch for UGCN_DangerLoop_New_C::ListenToShouldShowDangerWarningChangedAsyncAction");
static_assert(offsetof(UGCN_DangerLoop_New_C, DangerScreenVisualEffectBurstData) == 3376, "Offset mismatch for UGCN_DangerLoop_New_C::DangerScreenVisualEffectBurstData");
static_assert(offsetof(UGCN_DangerLoop_New_C, DangerSoundEffectBurstData) == 3704, "Offset mismatch for UGCN_DangerLoop_New_C::DangerSoundEffectBurstData");
static_assert(offsetof(UGCN_DangerLoop_New_C, DangerCameraShakeBurstData) == 4032, "Offset mismatch for UGCN_DangerLoop_New_C::DangerCameraShakeBurstData");
static_assert(offsetof(UGCN_DangerLoop_New_C, ShouldShowScreenVisualEffect) == 4360, "Offset mismatch for UGCN_DangerLoop_New_C::ShouldShowScreenVisualEffect");
static_assert(offsetof(UGCN_DangerLoop_New_C, ShouldPlaySoundEffect) == 4400, "Offset mismatch for UGCN_DangerLoop_New_C::ShouldPlaySoundEffect");
static_assert(offsetof(UGCN_DangerLoop_New_C, ShouldTriggerCameraShake) == 4440, "Offset mismatch for UGCN_DangerLoop_New_C::ShouldTriggerCameraShake");
