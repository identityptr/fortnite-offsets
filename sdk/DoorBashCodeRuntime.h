/**
 * decamp dumper generated SDK
 * Package: /Script/DoorBashCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DoorBashCodeRuntime.DoorBashHitData
// Kind: ScriptStruct; super: none
struct FDoorBashHitData
{
public:
    std::uint8_t BashHitResult[0xF8]; // 0x0000 (Size: 0xF8, Type: StructProperty)
    std::uint8_t FXLocation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> BashedActor; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bBashOpen; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDoorBashHitData, BashHitResult) == 0, "Offset mismatch for FDoorBashHitData::BashHitResult");
static_assert(offsetof(FDoorBashHitData, FXLocation) == 248, "Offset mismatch for FDoorBashHitData::FXLocation");
static_assert(offsetof(FDoorBashHitData, BashedActor) == 272, "Offset mismatch for FDoorBashHitData::BashedActor");
static_assert(offsetof(FDoorBashHitData, bBashOpen) == 280, "Offset mismatch for FDoorBashHitData::bBashOpen");

// /Script/DoorBashCodeRuntime.FortGameplayAbility_DoorBash
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_DoorBash
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t HF_DoorBashEnabled[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_ForwardDoorCheckMult[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_ForwardDoorBoostAdditionalDistance[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_LaunchPawnImpulseMult[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_PawnVelocityMinThreshold[0x28]; // 0x0BC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_EndAbilityGracePeriod[0x28]; // 0x0BE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_DoorCheckPeriod[0x28]; // 0x0C10 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_PawnLaunchOverlapRadius[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_DelayNewDoorCheckTimerAfterSuccess[0x28]; // 0x0C60 (Size: 0x28, Type: StructProperty)
    void* DoorBashMale; // 0x0C88 (Size: 0x8, Type: ObjectProperty)
    void* DoorBashFemale; // 0x0C90 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GC_DoorImpact[0x4]; // 0x0C98 (Size: 0x4, Type: StructProperty)
    std::uint8_t GC_LaunchPlayer[0x4]; // 0x0C9C (Size: 0x4, Type: StructProperty)
    std::uint8_t AdditionalQuestSourceTags[0x20]; // 0x0CA0 (Size: 0x20, Type: StructProperty)
    TArray<void*> DoorCheckQueryTypes; // 0x0CC0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnObjectQueryTypes; // 0x0CD0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SkipAnimationTag[0x4]; // 0x0CE0 (Size: 0x4, Type: StructProperty)
    std::uint8_t AllowActionWithoutSprintTag[0x4]; // 0x0CE4 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventDoorBashSuccessTag[0x4]; // 0x0CE8 (Size: 0x4, Type: StructProperty)
    std::uint8_t BoostForwardDoorCheckTag[0x1]; // 0x0CEC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_DoorBashEnabled) == 2848, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_DoorBashEnabled");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_ForwardDoorCheckMult) == 2888, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_ForwardDoorCheckMult");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_ForwardDoorBoostAdditionalDistance) == 2928, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_ForwardDoorBoostAdditionalDistance");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_LaunchPawnImpulseMult) == 2968, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_LaunchPawnImpulseMult");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_PawnVelocityMinThreshold) == 3008, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_PawnVelocityMinThreshold");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_EndAbilityGracePeriod) == 3048, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_EndAbilityGracePeriod");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_DoorCheckPeriod) == 3088, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_DoorCheckPeriod");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_PawnLaunchOverlapRadius) == 3128, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_PawnLaunchOverlapRadius");
static_assert(offsetof(UFortGameplayAbility_DoorBash, HF_DelayNewDoorCheckTimerAfterSuccess) == 3168, "Offset mismatch for UFortGameplayAbility_DoorBash::HF_DelayNewDoorCheckTimerAfterSuccess");
static_assert(offsetof(UFortGameplayAbility_DoorBash, DoorBashMale) == 3208, "Offset mismatch for UFortGameplayAbility_DoorBash::DoorBashMale");
static_assert(offsetof(UFortGameplayAbility_DoorBash, DoorBashFemale) == 3216, "Offset mismatch for UFortGameplayAbility_DoorBash::DoorBashFemale");
static_assert(offsetof(UFortGameplayAbility_DoorBash, GC_DoorImpact) == 3224, "Offset mismatch for UFortGameplayAbility_DoorBash::GC_DoorImpact");
static_assert(offsetof(UFortGameplayAbility_DoorBash, GC_LaunchPlayer) == 3228, "Offset mismatch for UFortGameplayAbility_DoorBash::GC_LaunchPlayer");
static_assert(offsetof(UFortGameplayAbility_DoorBash, AdditionalQuestSourceTags) == 3232, "Offset mismatch for UFortGameplayAbility_DoorBash::AdditionalQuestSourceTags");
static_assert(offsetof(UFortGameplayAbility_DoorBash, DoorCheckQueryTypes) == 3264, "Offset mismatch for UFortGameplayAbility_DoorBash::DoorCheckQueryTypes");
static_assert(offsetof(UFortGameplayAbility_DoorBash, PawnObjectQueryTypes) == 3280, "Offset mismatch for UFortGameplayAbility_DoorBash::PawnObjectQueryTypes");
static_assert(offsetof(UFortGameplayAbility_DoorBash, SkipAnimationTag) == 3296, "Offset mismatch for UFortGameplayAbility_DoorBash::SkipAnimationTag");
static_assert(offsetof(UFortGameplayAbility_DoorBash, AllowActionWithoutSprintTag) == 3300, "Offset mismatch for UFortGameplayAbility_DoorBash::AllowActionWithoutSprintTag");
static_assert(offsetof(UFortGameplayAbility_DoorBash, EventDoorBashSuccessTag) == 3304, "Offset mismatch for UFortGameplayAbility_DoorBash::EventDoorBashSuccessTag");
static_assert(offsetof(UFortGameplayAbility_DoorBash, BoostForwardDoorCheckTag) == 3308, "Offset mismatch for UFortGameplayAbility_DoorBash::BoostForwardDoorCheckTag");
