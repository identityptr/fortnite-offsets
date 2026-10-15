/**
 * decamp dumper generated SDK
 * Package: /GrindRail/GameplayCues/GCNL_GrindBoostSlow
 */
#pragma once
#include "Basic.h"

// /GrindRail/GameplayCues/GCNL_GrindBoostSlow.GCNL_GrindBoostSlow_C
// Kind: BlueprintGeneratedClass; super: FortGameplayCueNotify_Loop
class UGCNL_GrindBoostSlow_C
{
public:
    std::uint8_t Pad_0000[0x378]; // 0x0000
    std::uint8_t ContextType; // 0x0378 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0379
    void* EffectChooser; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x2C8]; // 0x0388
    std::uint8_t ApplicationBurst[0x148]; // 0x0650 (Size: 0x148, Type: StructProperty)
    std::uint8_t ApplicationResult[0x48]; // 0x0798 (Size: 0x48, Type: StructProperty)
    std::uint8_t DefaultLoopingAttachment[0x58]; // 0x07E0 (Size: 0x58, Type: StructProperty)
    TArray<void*> LoopingParticles; // 0x0838 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoopingSounds; // 0x0848 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LoopingForceFeedbackEffect[0x28]; // 0x0858 (Size: 0x28, Type: StructProperty)
    std::uint8_t LoopingCameraLensEffect[0x18]; // 0x0880 (Size: 0x18, Type: StructProperty)
    std::uint8_t LoopingCameraShake[0x38]; // 0x0898 (Size: 0x38, Type: StructProperty)
    std::uint8_t LoopingResult[0x48]; // 0x08D0 (Size: 0x48, Type: StructProperty)
    std::uint8_t RecurringBurst[0x148]; // 0x0918 (Size: 0x148, Type: StructProperty)
    std::uint8_t RecurringResult[0x48]; // 0x0A60 (Size: 0x48, Type: StructProperty)
    std::uint8_t RemovalBurst[0x148]; // 0x0AA8 (Size: 0x148, Type: StructProperty)
    std::uint8_t RemovalResult[0x48]; // 0x0BF0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bTickEnabled; // 0x0C38 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0C39
    float TickInterval; // 0x0C3C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TickGroup; // 0x0C40 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UGCNL_GrindBoostSlow_C, ContextType) == 888, "Offset mismatch for UGCNL_GrindBoostSlow_C::ContextType");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, EffectChooser) == 896, "Offset mismatch for UGCNL_GrindBoostSlow_C::EffectChooser");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, ApplicationBurst) == 1616, "Offset mismatch for UGCNL_GrindBoostSlow_C::ApplicationBurst");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, ApplicationResult) == 1944, "Offset mismatch for UGCNL_GrindBoostSlow_C::ApplicationResult");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, DefaultLoopingAttachment) == 2016, "Offset mismatch for UGCNL_GrindBoostSlow_C::DefaultLoopingAttachment");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, LoopingParticles) == 2104, "Offset mismatch for UGCNL_GrindBoostSlow_C::LoopingParticles");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, LoopingSounds) == 2120, "Offset mismatch for UGCNL_GrindBoostSlow_C::LoopingSounds");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, LoopingForceFeedbackEffect) == 2136, "Offset mismatch for UGCNL_GrindBoostSlow_C::LoopingForceFeedbackEffect");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, LoopingCameraLensEffect) == 2176, "Offset mismatch for UGCNL_GrindBoostSlow_C::LoopingCameraLensEffect");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, LoopingCameraShake) == 2200, "Offset mismatch for UGCNL_GrindBoostSlow_C::LoopingCameraShake");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, LoopingResult) == 2256, "Offset mismatch for UGCNL_GrindBoostSlow_C::LoopingResult");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, RecurringBurst) == 2328, "Offset mismatch for UGCNL_GrindBoostSlow_C::RecurringBurst");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, RecurringResult) == 2656, "Offset mismatch for UGCNL_GrindBoostSlow_C::RecurringResult");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, RemovalBurst) == 2728, "Offset mismatch for UGCNL_GrindBoostSlow_C::RemovalBurst");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, RemovalResult) == 3056, "Offset mismatch for UGCNL_GrindBoostSlow_C::RemovalResult");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, bTickEnabled) == 3128, "Offset mismatch for UGCNL_GrindBoostSlow_C::bTickEnabled");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, TickInterval) == 3132, "Offset mismatch for UGCNL_GrindBoostSlow_C::TickInterval");
static_assert(offsetof(UGCNL_GrindBoostSlow_C, TickGroup) == 3136, "Offset mismatch for UGCNL_GrindBoostSlow_C::TickGroup");
