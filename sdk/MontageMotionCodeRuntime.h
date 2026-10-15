/**
 * decamp dumper generated SDK
 * Package: /Script/MontageMotionCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MontageMotionCodeRuntime.FortMontageMotionAlternativeWarpSettings
// Kind: ScriptStruct; super: none
struct FFortMontageMotionAlternativeWarpSettings
{
public:
    void* TargetActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSnapshotTargetActorLocation; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WarpTranslationMethod; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    std::uint8_t WarpTranslationVector[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t WarpRotationMethod; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t StaticRotation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMontageMotionAlternativeWarpSettings, TargetActor) == 0, "Offset mismatch for FFortMontageMotionAlternativeWarpSettings::TargetActor");
static_assert(offsetof(FFortMontageMotionAlternativeWarpSettings, bSnapshotTargetActorLocation) == 8, "Offset mismatch for FFortMontageMotionAlternativeWarpSettings::bSnapshotTargetActorLocation");
static_assert(offsetof(FFortMontageMotionAlternativeWarpSettings, WarpTranslationMethod) == 9, "Offset mismatch for FFortMontageMotionAlternativeWarpSettings::WarpTranslationMethod");
static_assert(offsetof(FFortMontageMotionAlternativeWarpSettings, WarpTranslationVector) == 16, "Offset mismatch for FFortMontageMotionAlternativeWarpSettings::WarpTranslationVector");
static_assert(offsetof(FFortMontageMotionAlternativeWarpSettings, WarpRotationMethod) == 40, "Offset mismatch for FFortMontageMotionAlternativeWarpSettings::WarpRotationMethod");
static_assert(offsetof(FFortMontageMotionAlternativeWarpSettings, StaticRotation) == 48, "Offset mismatch for FFortMontageMotionAlternativeWarpSettings::StaticRotation");

// /Script/MontageMotionCodeRuntime.FortMontageMotionMMEData
// Kind: ScriptStruct; super: none
struct FFortMontageMotionMMEData
{
public:
    void* AnimMontage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float AnimPlayRate; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ServerMaxClientWarpTranslation; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseServerWarpInfo; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAlternativeWarpingBehavior; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableGravity; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMMEPlaysMontage; // 0x0013 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortMontageMotionMMEData, AnimMontage) == 0, "Offset mismatch for FFortMontageMotionMMEData::AnimMontage");
static_assert(offsetof(FFortMontageMotionMMEData, AnimPlayRate) == 8, "Offset mismatch for FFortMontageMotionMMEData::AnimPlayRate");
static_assert(offsetof(FFortMontageMotionMMEData, ServerMaxClientWarpTranslation) == 12, "Offset mismatch for FFortMontageMotionMMEData::ServerMaxClientWarpTranslation");
static_assert(offsetof(FFortMontageMotionMMEData, bUseServerWarpInfo) == 16, "Offset mismatch for FFortMontageMotionMMEData::bUseServerWarpInfo");
static_assert(offsetof(FFortMontageMotionMMEData, bUseAlternativeWarpingBehavior) == 17, "Offset mismatch for FFortMontageMotionMMEData::bUseAlternativeWarpingBehavior");
static_assert(offsetof(FFortMontageMotionMMEData, bEnableGravity) == 18, "Offset mismatch for FFortMontageMotionMMEData::bEnableGravity");
static_assert(offsetof(FFortMontageMotionMMEData, bMMEPlaysMontage) == 19, "Offset mismatch for FFortMontageMotionMMEData::bMMEPlaysMontage");

// /Script/MontageMotionCodeRuntime.FortMontageMotionWarpInfo
// Kind: ScriptStruct; super: none
struct FFortMontageMotionWarpInfo
{
public:
    TWeakObjectPtr<void> WarpTarget; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> BaseComponentForRelativeTargetLocation; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t BaseRelativeWarpTargetLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t LastValidWarpTargetLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowRotationWarp; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bAllowTranslationWarp (shared storage)
    // 0x0040 BoolProperty bSnapshotTargetLocation (shared storage)
    std::uint8_t bUseAlternativeWarpingBehavior; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WarpTranslationMethod; // 0x0042 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0043
    std::uint8_t WarpTranslationVector[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t WarpRotationMethod; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    float WarpRotationYaw; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float DesiredTranslationDistanceToWarpTarget; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMontageMotionWarpInfo, WarpTarget) == 0, "Offset mismatch for FFortMontageMotionWarpInfo::WarpTarget");
static_assert(offsetof(FFortMontageMotionWarpInfo, BaseComponentForRelativeTargetLocation) == 8, "Offset mismatch for FFortMontageMotionWarpInfo::BaseComponentForRelativeTargetLocation");
static_assert(offsetof(FFortMontageMotionWarpInfo, BaseRelativeWarpTargetLocation) == 16, "Offset mismatch for FFortMontageMotionWarpInfo::BaseRelativeWarpTargetLocation");
static_assert(offsetof(FFortMontageMotionWarpInfo, LastValidWarpTargetLocation) == 40, "Offset mismatch for FFortMontageMotionWarpInfo::LastValidWarpTargetLocation");
static_assert(offsetof(FFortMontageMotionWarpInfo, bAllowRotationWarp) == 64, "Offset mismatch for FFortMontageMotionWarpInfo::bAllowRotationWarp");
static_assert(offsetof(FFortMontageMotionWarpInfo, bUseAlternativeWarpingBehavior) == 65, "Offset mismatch for FFortMontageMotionWarpInfo::bUseAlternativeWarpingBehavior");
static_assert(offsetof(FFortMontageMotionWarpInfo, WarpTranslationMethod) == 66, "Offset mismatch for FFortMontageMotionWarpInfo::WarpTranslationMethod");
static_assert(offsetof(FFortMontageMotionWarpInfo, WarpTranslationVector) == 72, "Offset mismatch for FFortMontageMotionWarpInfo::WarpTranslationVector");
static_assert(offsetof(FFortMontageMotionWarpInfo, WarpRotationMethod) == 96, "Offset mismatch for FFortMontageMotionWarpInfo::WarpRotationMethod");
static_assert(offsetof(FFortMontageMotionWarpInfo, WarpRotationYaw) == 100, "Offset mismatch for FFortMontageMotionWarpInfo::WarpRotationYaw");
static_assert(offsetof(FFortMontageMotionWarpInfo, DesiredTranslationDistanceToWarpTarget) == 104, "Offset mismatch for FFortMontageMotionWarpInfo::DesiredTranslationDistanceToWarpTarget");

// /Script/MontageMotionCodeRuntime.FortMontageMotionWarpSettings
// Kind: ScriptStruct; super: none
struct FFortMontageMotionWarpSettings
{
public:
    std::uint8_t bAllowTranslationWarp; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRotationWarp; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    void* TargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSnapshotTargetActorLocation; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarpTranslationToLocation; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0012
    std::uint8_t TargetLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideRootMotionWarpSettings; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0031
    float DesiredTranslationDistanceToWarpTarget; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMontageMotionWarpSettings, bAllowTranslationWarp) == 0, "Offset mismatch for FFortMontageMotionWarpSettings::bAllowTranslationWarp");
static_assert(offsetof(FFortMontageMotionWarpSettings, bAllowRotationWarp) == 1, "Offset mismatch for FFortMontageMotionWarpSettings::bAllowRotationWarp");
static_assert(offsetof(FFortMontageMotionWarpSettings, TargetActor) == 8, "Offset mismatch for FFortMontageMotionWarpSettings::TargetActor");
static_assert(offsetof(FFortMontageMotionWarpSettings, bSnapshotTargetActorLocation) == 16, "Offset mismatch for FFortMontageMotionWarpSettings::bSnapshotTargetActorLocation");
static_assert(offsetof(FFortMontageMotionWarpSettings, bWarpTranslationToLocation) == 17, "Offset mismatch for FFortMontageMotionWarpSettings::bWarpTranslationToLocation");
static_assert(offsetof(FFortMontageMotionWarpSettings, TargetLocation) == 24, "Offset mismatch for FFortMontageMotionWarpSettings::TargetLocation");
static_assert(offsetof(FFortMontageMotionWarpSettings, bOverrideRootMotionWarpSettings) == 48, "Offset mismatch for FFortMontageMotionWarpSettings::bOverrideRootMotionWarpSettings");
static_assert(offsetof(FFortMontageMotionWarpSettings, DesiredTranslationDistanceToWarpTarget) == 52, "Offset mismatch for FFortMontageMotionWarpSettings::DesiredTranslationDistanceToWarpTarget");

// /Script/MontageMotionCodeRuntime.FortMovementMode_MontageMotionCreationData
// Kind: ScriptStruct; super: FortMovementMode_GuidedMotionCreationData
struct FFortMovementMode_MontageMotionCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TWeakObjectPtr<void> MoveToComponent; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t OnFinished[0xC]; // 0x0018 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnLanded[0xC]; // 0x0024 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t InitialPlayerLocation[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasMovementInput; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    TArray<void*> OptionalBools; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OptionalFloats; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortMovementMode_MontageMotionCreationData, MoveToComponent) == 16, "Offset mismatch for FFortMovementMode_MontageMotionCreationData::MoveToComponent");
static_assert(offsetof(FFortMovementMode_MontageMotionCreationData, OnFinished) == 24, "Offset mismatch for FFortMovementMode_MontageMotionCreationData::OnFinished");
static_assert(offsetof(FFortMovementMode_MontageMotionCreationData, OnLanded) == 36, "Offset mismatch for FFortMovementMode_MontageMotionCreationData::OnLanded");
static_assert(offsetof(FFortMovementMode_MontageMotionCreationData, InitialPlayerLocation) == 48, "Offset mismatch for FFortMovementMode_MontageMotionCreationData::InitialPlayerLocation");
static_assert(offsetof(FFortMovementMode_MontageMotionCreationData, bHasMovementInput) == 72, "Offset mismatch for FFortMovementMode_MontageMotionCreationData::bHasMovementInput");
static_assert(offsetof(FFortMovementMode_MontageMotionCreationData, OptionalBools) == 80, "Offset mismatch for FFortMovementMode_MontageMotionCreationData::OptionalBools");
static_assert(offsetof(FFortMovementMode_MontageMotionCreationData, OptionalFloats) == 96, "Offset mismatch for FFortMovementMode_MontageMotionCreationData::OptionalFloats");

// /Script/MontageMotionCodeRuntime.FortSynchronizedMontageMotionActorMontagePair
// Kind: ScriptStruct; super: none
struct FFortSynchronizedMontageMotionActorMontagePair
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* AnimMontage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Role[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortSynchronizedMontageMotionActorMontagePair, Actor) == 0, "Offset mismatch for FFortSynchronizedMontageMotionActorMontagePair::Actor");
static_assert(offsetof(FFortSynchronizedMontageMotionActorMontagePair, AnimMontage) == 8, "Offset mismatch for FFortSynchronizedMontageMotionActorMontagePair::AnimMontage");
static_assert(offsetof(FFortSynchronizedMontageMotionActorMontagePair, Role) == 16, "Offset mismatch for FFortSynchronizedMontageMotionActorMontagePair::Role");

// /Script/MontageMotionCodeRuntime.FortSynchronizedMontageMotionMMEData
// Kind: ScriptStruct; super: none
struct FFortSynchronizedMontageMotionMMEData
{
public:
    TArray<void*> Participants; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortSynchronizedMontageMotionMMEData, Participants) == 0, "Offset mismatch for FFortSynchronizedMontageMotionMMEData::Participants");

// /Script/MontageMotionCodeRuntime.FortAnimNotifyState_MontageMotion
// Kind: Class; super: AnimNotifyState
class UFortAnimNotifyState_MontageMotion
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MontageMotionNotifyWindow; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t MontageMotionNotifyTag[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t TranslationWarpLimitRule; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    float TranslationWarpLimit; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotationRateWarpRule; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0041
    float FixedWarpRotationRate; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWarpRotation; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bWarpTranslation (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0049
    std::uint8_t AttachTargetRoleTag[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAnimNotifyState_MontageMotion, MontageMotionNotifyWindow) == 48, "Offset mismatch for UFortAnimNotifyState_MontageMotion::MontageMotionNotifyWindow");
static_assert(offsetof(UFortAnimNotifyState_MontageMotion, MontageMotionNotifyTag) == 52, "Offset mismatch for UFortAnimNotifyState_MontageMotion::MontageMotionNotifyTag");
static_assert(offsetof(UFortAnimNotifyState_MontageMotion, TranslationWarpLimitRule) == 56, "Offset mismatch for UFortAnimNotifyState_MontageMotion::TranslationWarpLimitRule");
static_assert(offsetof(UFortAnimNotifyState_MontageMotion, TranslationWarpLimit) == 60, "Offset mismatch for UFortAnimNotifyState_MontageMotion::TranslationWarpLimit");
static_assert(offsetof(UFortAnimNotifyState_MontageMotion, RotationRateWarpRule) == 64, "Offset mismatch for UFortAnimNotifyState_MontageMotion::RotationRateWarpRule");
static_assert(offsetof(UFortAnimNotifyState_MontageMotion, FixedWarpRotationRate) == 68, "Offset mismatch for UFortAnimNotifyState_MontageMotion::FixedWarpRotationRate");
static_assert(offsetof(UFortAnimNotifyState_MontageMotion, bWarpRotation) == 72, "Offset mismatch for UFortAnimNotifyState_MontageMotion::bWarpRotation");
static_assert(offsetof(UFortAnimNotifyState_MontageMotion, AttachTargetRoleTag) == 76, "Offset mismatch for UFortAnimNotifyState_MontageMotion::AttachTargetRoleTag");

// /Script/MontageMotionCodeRuntime.FortAnimNotify_MontageMotion
// Kind: Class; super: AnimNotify
class UFortAnimNotify_MontageMotion
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MontageMotionNotifyTag[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAnimNotify_MontageMotion, MontageMotionNotifyTag) == 56, "Offset mismatch for UFortAnimNotify_MontageMotion::MontageMotionNotifyTag");

// /Script/MontageMotionCodeRuntime.FortGameplayAbility_MontageMotion
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_MontageMotion
{
public:
    std::uint8_t Pad_0000[0xB28]; // 0x0000
    void* MontageMotionMME; // 0x0B28 (Size: 0x8, Type: ClassProperty)
    void* AnimMontage; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    float AnimPlayRate; // 0x0B38 (Size: 0x4, Type: FloatProperty)
    float ServerMaxClientWarpTranslation; // 0x0B3C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopMontageWhenAbilityEnds; // 0x0B40 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEndAbilityOnMontageEnd; // 0x0B41 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayerMMEOriginatesOnServer; // 0x0B42 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAlternativeWarpingBehavior; // 0x0B43 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseServerWarpInfo; // 0x0B44 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableGravity; // 0x0B45 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMMEPlaysMontage; // 0x0B46 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x9]; // 0x0B47
    void* MontageTask; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayAbility_MontageMotion, MontageMotionMME) == 2856, "Offset mismatch for UFortGameplayAbility_MontageMotion::MontageMotionMME");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, AnimMontage) == 2864, "Offset mismatch for UFortGameplayAbility_MontageMotion::AnimMontage");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, AnimPlayRate) == 2872, "Offset mismatch for UFortGameplayAbility_MontageMotion::AnimPlayRate");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, ServerMaxClientWarpTranslation) == 2876, "Offset mismatch for UFortGameplayAbility_MontageMotion::ServerMaxClientWarpTranslation");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, bStopMontageWhenAbilityEnds) == 2880, "Offset mismatch for UFortGameplayAbility_MontageMotion::bStopMontageWhenAbilityEnds");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, bEndAbilityOnMontageEnd) == 2881, "Offset mismatch for UFortGameplayAbility_MontageMotion::bEndAbilityOnMontageEnd");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, bPlayerMMEOriginatesOnServer) == 2882, "Offset mismatch for UFortGameplayAbility_MontageMotion::bPlayerMMEOriginatesOnServer");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, bUseAlternativeWarpingBehavior) == 2883, "Offset mismatch for UFortGameplayAbility_MontageMotion::bUseAlternativeWarpingBehavior");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, bUseServerWarpInfo) == 2884, "Offset mismatch for UFortGameplayAbility_MontageMotion::bUseServerWarpInfo");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, bEnableGravity) == 2885, "Offset mismatch for UFortGameplayAbility_MontageMotion::bEnableGravity");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, bMMEPlaysMontage) == 2886, "Offset mismatch for UFortGameplayAbility_MontageMotion::bMMEPlaysMontage");
static_assert(offsetof(UFortGameplayAbility_MontageMotion, MontageTask) == 2896, "Offset mismatch for UFortGameplayAbility_MontageMotion::MontageTask");

// /Script/MontageMotionCodeRuntime.FortMovementInterface_MontageMotionAbility
// Kind: Class; super: Interface
class UFortMovementInterface_MontageMotionAbility
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MontageMotionCodeRuntime.FortMovementMode_ExtMontageMotion
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_ExtMontageMotion
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    TWeakObjectPtr<void> OwnerMontageMotionComponent; // 0x05A0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIgnoreControllerDesiredRotation; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreZAccumulate; // 0x05A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x05AA
    float ServerMaxClientWarpTranslation; // 0x05AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtMontageMotion, OwnerMontageMotionComponent) == 1440, "Offset mismatch for UFortMovementMode_ExtMontageMotion::OwnerMontageMotionComponent");
static_assert(offsetof(UFortMovementMode_ExtMontageMotion, bIgnoreControllerDesiredRotation) == 1448, "Offset mismatch for UFortMovementMode_ExtMontageMotion::bIgnoreControllerDesiredRotation");
static_assert(offsetof(UFortMovementMode_ExtMontageMotion, bIgnoreZAccumulate) == 1449, "Offset mismatch for UFortMovementMode_ExtMontageMotion::bIgnoreZAccumulate");
static_assert(offsetof(UFortMovementMode_ExtMontageMotion, ServerMaxClientWarpTranslation) == 1452, "Offset mismatch for UFortMovementMode_ExtMontageMotion::ServerMaxClientWarpTranslation");

// /Script/MontageMotionCodeRuntime.FortMovementMode_ExtSynchronizedMontageMotion
// Kind: Class; super: FortMovementMode_ExtMontageMotion
class UFortMovementMode_ExtSynchronizedMontageMotion
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    TWeakObjectPtr<void> OwnerMontageMotionComponent; // 0x05A0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIgnoreControllerDesiredRotation; // 0x05A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreZAccumulate; // 0x05A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x05AA
    float ServerMaxClientWarpTranslation; // 0x05AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtSynchronizedMontageMotion, OwnerMontageMotionComponent) == 1440, "Offset mismatch for UFortMovementMode_ExtSynchronizedMontageMotion::OwnerMontageMotionComponent");
static_assert(offsetof(UFortMovementMode_ExtSynchronizedMontageMotion, bIgnoreControllerDesiredRotation) == 1448, "Offset mismatch for UFortMovementMode_ExtSynchronizedMontageMotion::bIgnoreControllerDesiredRotation");
static_assert(offsetof(UFortMovementMode_ExtSynchronizedMontageMotion, bIgnoreZAccumulate) == 1449, "Offset mismatch for UFortMovementMode_ExtSynchronizedMontageMotion::bIgnoreZAccumulate");
static_assert(offsetof(UFortMovementMode_ExtSynchronizedMontageMotion, ServerMaxClientWarpTranslation) == 1452, "Offset mismatch for UFortMovementMode_ExtSynchronizedMontageMotion::ServerMaxClientWarpTranslation");

// /Script/MontageMotionCodeRuntime.FortMovementMode_MontageMotionRuntimeData
// Kind: Class; super: FortMovementMode_GuidedMotionRuntimeData
class UFortMovementMode_MontageMotionRuntimeData
{
public:
    std::uint8_t Pad_0000[0x3C]; // 0x0000
    TWeakObjectPtr<void> NetInitialComponent_MoveToActor; // 0x003C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t NetInitialWorldLocation_MoveToActor[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t NetInitialWorldDirection_MoveToActor[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bNetInitialHasMovementInput; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    std::uint8_t NetInitialPlayerLocation[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    TArray<void*> NetOptionalBools; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NetOptionalFloats; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocalGuideMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00B9
    std::uint8_t LocalMoveToEndLocation[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    float LocalStartElapsedTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float LocalEndElapsedTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
    FScriptDelegate OnFinished; // 0x00E0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0004[0x54]; // 0x00F0
    float LocalMaxDuration; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x60]; // 0x0148
    float LocalStrength; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x01AC
    std::uint8_t LocalDirection[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    float LocalHeightAboveGround; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x5C]; // 0x01CC
    std::uint8_t LocalInitialPlayerLocation[0x1]; // 0x0228 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, NetInitialComponent_MoveToActor) == 60, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::NetInitialComponent_MoveToActor");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, NetInitialWorldLocation_MoveToActor) == 72, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::NetInitialWorldLocation_MoveToActor");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, NetInitialWorldDirection_MoveToActor) == 96, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::NetInitialWorldDirection_MoveToActor");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, bNetInitialHasMovementInput) == 120, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::bNetInitialHasMovementInput");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, NetInitialPlayerLocation) == 128, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::NetInitialPlayerLocation");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, NetOptionalBools) == 152, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::NetOptionalBools");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, NetOptionalFloats) == 168, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::NetOptionalFloats");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalGuideMode) == 184, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalGuideMode");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalMoveToEndLocation) == 192, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalMoveToEndLocation");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalStartElapsedTime) == 216, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalStartElapsedTime");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalEndElapsedTime) == 220, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalEndElapsedTime");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, OnFinished) == 224, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::OnFinished");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalMaxDuration) == 324, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalMaxDuration");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalStrength) == 424, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalStrength");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalDirection) == 432, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalDirection");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalHeightAboveGround) == 456, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalHeightAboveGround");
static_assert(offsetof(UFortMovementMode_MontageMotionRuntimeData, LocalInitialPlayerLocation) == 552, "Offset mismatch for UFortMovementMode_MontageMotionRuntimeData::LocalInitialPlayerLocation");

// /Script/MontageMotionCodeRuntime.FortMovementMode_SynchronizedMontageMotionRuntimeData
// Kind: Class; super: FortMovementMode_MontageMotionRuntimeData
class UFortMovementMode_SynchronizedMontageMotionRuntimeData
{
public:
    std::uint8_t Pad_0000[0x3C]; // 0x0000
    TWeakObjectPtr<void> NetInitialComponent_MoveToActor; // 0x003C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t NetInitialWorldLocation_MoveToActor[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t NetInitialWorldDirection_MoveToActor[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bNetInitialHasMovementInput; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    std::uint8_t NetInitialPlayerLocation[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    TArray<void*> NetOptionalBools; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NetOptionalFloats; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocalGuideMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00B9
    std::uint8_t LocalMoveToEndLocation[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    float LocalStartElapsedTime; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float LocalEndElapsedTime; // 0x00DC (Size: 0x4, Type: FloatProperty)
    FScriptDelegate OnFinished; // 0x00E0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0004[0x54]; // 0x00F0
    float LocalMaxDuration; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x60]; // 0x0148
    float LocalStrength; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x01AC
    std::uint8_t LocalDirection[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    float LocalHeightAboveGround; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0007[0x5C]; // 0x01CC
    std::uint8_t LocalInitialPlayerLocation[0x1]; // 0x0228 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, NetInitialComponent_MoveToActor) == 60, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::NetInitialComponent_MoveToActor");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, NetInitialWorldLocation_MoveToActor) == 72, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::NetInitialWorldLocation_MoveToActor");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, NetInitialWorldDirection_MoveToActor) == 96, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::NetInitialWorldDirection_MoveToActor");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, bNetInitialHasMovementInput) == 120, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::bNetInitialHasMovementInput");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, NetInitialPlayerLocation) == 128, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::NetInitialPlayerLocation");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, NetOptionalBools) == 152, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::NetOptionalBools");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, NetOptionalFloats) == 168, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::NetOptionalFloats");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalGuideMode) == 184, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalGuideMode");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalMoveToEndLocation) == 192, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalMoveToEndLocation");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalStartElapsedTime) == 216, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalStartElapsedTime");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalEndElapsedTime) == 220, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalEndElapsedTime");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, OnFinished) == 224, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::OnFinished");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalMaxDuration) == 324, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalMaxDuration");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalStrength) == 424, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalStrength");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalDirection) == 432, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalDirection");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalHeightAboveGround) == 456, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalHeightAboveGround");
static_assert(offsetof(UFortMovementMode_SynchronizedMontageMotionRuntimeData, LocalInitialPlayerLocation) == 552, "Offset mismatch for UFortMovementMode_SynchronizedMontageMotionRuntimeData::LocalInitialPlayerLocation");

// /Script/MontageMotionCodeRuntime.FortPawnComponent_MontageMotion
// Kind: Class; super: PawnComponent
class UFortPawnComponent_MontageMotion
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMMERequestPlayMontageDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMMERequestSynchronizedMontageMotionDataDelegate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMMEActivatedDelegate; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMMEDeactivatedDelegate; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageMotionNotifyWindowStarted; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageMotionNotifyWindowEnded; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMontageMotionNotifyEvent; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t OnConfigureMontageMotionWarpInfo[0xC]; // 0x0130 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnConfigureMontageMotionAlternativeWarpInfo; // 0x013C (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0001[0x24]; // 0x014C
    std::uint8_t DefaultDesiredTranslationDistanceToWarpTarget[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_MontageMotion, OnMMERequestPlayMontageDelegate) == 192, "Offset mismatch for UFortPawnComponent_MontageMotion::OnMMERequestPlayMontageDelegate");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnMMERequestSynchronizedMontageMotionDataDelegate) == 208, "Offset mismatch for UFortPawnComponent_MontageMotion::OnMMERequestSynchronizedMontageMotionDataDelegate");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnMMEActivatedDelegate) == 224, "Offset mismatch for UFortPawnComponent_MontageMotion::OnMMEActivatedDelegate");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnMMEDeactivatedDelegate) == 240, "Offset mismatch for UFortPawnComponent_MontageMotion::OnMMEDeactivatedDelegate");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnMontageMotionNotifyWindowStarted) == 256, "Offset mismatch for UFortPawnComponent_MontageMotion::OnMontageMotionNotifyWindowStarted");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnMontageMotionNotifyWindowEnded) == 272, "Offset mismatch for UFortPawnComponent_MontageMotion::OnMontageMotionNotifyWindowEnded");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnMontageMotionNotifyEvent) == 288, "Offset mismatch for UFortPawnComponent_MontageMotion::OnMontageMotionNotifyEvent");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnConfigureMontageMotionWarpInfo) == 304, "Offset mismatch for UFortPawnComponent_MontageMotion::OnConfigureMontageMotionWarpInfo");
static_assert(offsetof(UFortPawnComponent_MontageMotion, OnConfigureMontageMotionAlternativeWarpInfo) == 316, "Offset mismatch for UFortPawnComponent_MontageMotion::OnConfigureMontageMotionAlternativeWarpInfo");
static_assert(offsetof(UFortPawnComponent_MontageMotion, DefaultDesiredTranslationDistanceToWarpTarget) == 368, "Offset mismatch for UFortPawnComponent_MontageMotion::DefaultDesiredTranslationDistanceToWarpTarget");
