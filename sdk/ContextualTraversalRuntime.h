/**
 * decamp dumper generated SDK
 * Package: /Script/ContextualTraversalRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ContextualTraversalRuntime.ContextualTraversalTargetingData
// Kind: ScriptStruct; super: none
struct FContextualTraversalTargetingData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ScoringModifier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tag[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextualTraversalTargetingData, ScoringModifier) == 8, "Offset mismatch for FContextualTraversalTargetingData::ScoringModifier");
static_assert(offsetof(FContextualTraversalTargetingData, Location) == 16, "Offset mismatch for FContextualTraversalTargetingData::Location");
static_assert(offsetof(FContextualTraversalTargetingData, Rotation) == 40, "Offset mismatch for FContextualTraversalTargetingData::Rotation");
static_assert(offsetof(FContextualTraversalTargetingData, Tag) == 64, "Offset mismatch for FContextualTraversalTargetingData::Tag");

// /Script/ContextualTraversalRuntime.FortMovementMode_TraversalBaseCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_TraversalBaseCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SynchedActionInfo[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    std::uint8_t SynchedActionWarpPointInfo[0xA0]; // 0x0040 (Size: 0xA0, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetRotation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> RefObject; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> RefActorComponent; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t RefActorBoneName[0x4]; // 0x0120 (Size: 0x4, Type: NameProperty)
    std::uint8_t EndMovementMode; // 0x0124 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsWindow; // 0x0125 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, SynchedActionInfo) == 16, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::SynchedActionInfo");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, SynchedActionWarpPointInfo) == 64, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::SynchedActionWarpPointInfo");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, TargetLocation) == 224, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::TargetLocation");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, TargetRotation) == 248, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::TargetRotation");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, RefObject) == 272, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::RefObject");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, RefActorComponent) == 280, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::RefActorComponent");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, RefActorBoneName) == 288, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::RefActorBoneName");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, EndMovementMode) == 292, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::EndMovementMode");
static_assert(offsetof(FFortMovementMode_TraversalBaseCreationData, bIsWindow) == 293, "Offset mismatch for FFortMovementMode_TraversalBaseCreationData::bIsWindow");

// /Script/ContextualTraversalRuntime.FortContextualTraversalComponent
// Kind: Class; super: FortPawnComponent
class UFortContextualTraversalComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* ScoringDistanceCurve; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* ScoringAngleCurve; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00D8
    float LockedInteractionTime; // 0x00F8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortContextualTraversalComponent, ScoringDistanceCurve) == 200, "Offset mismatch for UFortContextualTraversalComponent::ScoringDistanceCurve");
static_assert(offsetof(UFortContextualTraversalComponent, ScoringAngleCurve) == 208, "Offset mismatch for UFortContextualTraversalComponent::ScoringAngleCurve");
static_assert(offsetof(UFortContextualTraversalComponent, LockedInteractionTime) == 248, "Offset mismatch for UFortContextualTraversalComponent::LockedInteractionTime");

// /Script/ContextualTraversalRuntime.FortMovementMode_ExtLogicTraversalBase
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicTraversalBase
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    std::uint8_t SynchedActionTag[0x4]; // 0x01E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t PreventWeaponHolsterTag[0x4]; // 0x01E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t MontageStartSectionName[0x4]; // 0x01E8 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseNextSectionAnimName; // 0x01EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01ED
    float OverrideServerAllowablePositionError; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float OverrideAnimBlendOutTimeWhenLanding; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AllowWeaponHolster[0x30]; // 0x01F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t DisableRotatePawnToCamera[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t EndOnRootMotionSourceHasFinished[0x1]; // 0x0250 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, SynchedActionTag) == 480, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::SynchedActionTag");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, PreventWeaponHolsterTag) == 484, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::PreventWeaponHolsterTag");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, MontageStartSectionName) == 488, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::MontageStartSectionName");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, bUseNextSectionAnimName) == 492, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::bUseNextSectionAnimName");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, OverrideServerAllowablePositionError) == 496, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::OverrideServerAllowablePositionError");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, OverrideAnimBlendOutTimeWhenLanding) == 500, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::OverrideAnimBlendOutTimeWhenLanding");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, AllowWeaponHolster) == 504, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::AllowWeaponHolster");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, DisableRotatePawnToCamera) == 552, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::DisableRotatePawnToCamera");
static_assert(offsetof(UFortMovementMode_ExtLogicTraversalBase, EndOnRootMotionSourceHasFinished) == 592, "Offset mismatch for UFortMovementMode_ExtLogicTraversalBase::EndOnRootMotionSourceHasFinished");

// /Script/ContextualTraversalRuntime.FortMovementMode_TraversalBaseRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_TraversalBaseRuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* AnimMontage; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MontageStartSectionName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    FName MontageMiddleSectionName; // 0x0044 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    std::uint8_t SynchedActionWarpPointInfo[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_TraversalBaseRuntimeData, AnimMontage) == 56, "Offset mismatch for UFortMovementMode_TraversalBaseRuntimeData::AnimMontage");
static_assert(offsetof(UFortMovementMode_TraversalBaseRuntimeData, MontageStartSectionName) == 64, "Offset mismatch for UFortMovementMode_TraversalBaseRuntimeData::MontageStartSectionName");
static_assert(offsetof(UFortMovementMode_TraversalBaseRuntimeData, MontageMiddleSectionName) == 68, "Offset mismatch for UFortMovementMode_TraversalBaseRuntimeData::MontageMiddleSectionName");
static_assert(offsetof(UFortMovementMode_TraversalBaseRuntimeData, SynchedActionWarpPointInfo) == 80, "Offset mismatch for UFortMovementMode_TraversalBaseRuntimeData::SynchedActionWarpPointInfo");
