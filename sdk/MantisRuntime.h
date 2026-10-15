/**
 * decamp dumper generated SDK
 * Package: /Script/MantisRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MantisRuntime.FortMantisDeferredTargetDataEffect
// Kind: ScriptStruct; super: none
struct FFortMantisDeferredTargetDataEffect
{
public:
    std::uint8_t TargetDataHandle[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t ApplicationTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::int32_t TechniqueDataIndex; // 0x002C (Size: 0x4, Type: IntProperty)
    float EffectLevel; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMantisDeferredTargetDataEffect, TargetDataHandle) == 0, "Offset mismatch for FFortMantisDeferredTargetDataEffect::TargetDataHandle");
static_assert(offsetof(FFortMantisDeferredTargetDataEffect, ApplicationTag) == 40, "Offset mismatch for FFortMantisDeferredTargetDataEffect::ApplicationTag");
static_assert(offsetof(FFortMantisDeferredTargetDataEffect, TechniqueDataIndex) == 44, "Offset mismatch for FFortMantisDeferredTargetDataEffect::TechniqueDataIndex");
static_assert(offsetof(FFortMantisDeferredTargetDataEffect, EffectLevel) == 48, "Offset mismatch for FFortMantisDeferredTargetDataEffect::EffectLevel");

// /Script/MantisRuntime.FortMantisMontageData
// Kind: ScriptStruct; super: none
struct FFortMantisMontageData
{
public:
    void* Montage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortMantisMontageData, Montage) == 0, "Offset mismatch for FFortMantisMontageData::Montage");

// /Script/MantisRuntime.FortMantisReplicatedAnimInstanceInfo
// Kind: ScriptStruct; super: none
struct FFortMantisReplicatedAnimInstanceInfo
{
public:
    std::uint8_t bIsTechniqueActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ActiveTechniqueName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::int32_t ActiveTechniqueIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ActiveTechniqueConsecutiveBranchesToSelf; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortMantisReplicatedAnimInstanceInfo, bIsTechniqueActive) == 0, "Offset mismatch for FFortMantisReplicatedAnimInstanceInfo::bIsTechniqueActive");
static_assert(offsetof(FFortMantisReplicatedAnimInstanceInfo, ActiveTechniqueName) == 4, "Offset mismatch for FFortMantisReplicatedAnimInstanceInfo::ActiveTechniqueName");
static_assert(offsetof(FFortMantisReplicatedAnimInstanceInfo, ActiveTechniqueIndex) == 8, "Offset mismatch for FFortMantisReplicatedAnimInstanceInfo::ActiveTechniqueIndex");
static_assert(offsetof(FFortMantisReplicatedAnimInstanceInfo, ActiveTechniqueConsecutiveBranchesToSelf) == 12, "Offset mismatch for FFortMantisReplicatedAnimInstanceInfo::ActiveTechniqueConsecutiveBranchesToSelf");

// /Script/MantisRuntime.FortMantisRootMotionWarpInfo
// Kind: ScriptStruct; super: none
struct FFortMantisRootMotionWarpInfo
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

static_assert(offsetof(FFortMantisRootMotionWarpInfo, WarpTarget) == 0, "Offset mismatch for FFortMantisRootMotionWarpInfo::WarpTarget");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, BaseComponentForRelativeTargetLocation) == 8, "Offset mismatch for FFortMantisRootMotionWarpInfo::BaseComponentForRelativeTargetLocation");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, BaseRelativeWarpTargetLocation) == 16, "Offset mismatch for FFortMantisRootMotionWarpInfo::BaseRelativeWarpTargetLocation");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, LastValidWarpTargetLocation) == 40, "Offset mismatch for FFortMantisRootMotionWarpInfo::LastValidWarpTargetLocation");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, bAllowRotationWarp) == 64, "Offset mismatch for FFortMantisRootMotionWarpInfo::bAllowRotationWarp");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, bUseAlternativeWarpingBehavior) == 65, "Offset mismatch for FFortMantisRootMotionWarpInfo::bUseAlternativeWarpingBehavior");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, WarpTranslationMethod) == 66, "Offset mismatch for FFortMantisRootMotionWarpInfo::WarpTranslationMethod");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, WarpTranslationVector) == 72, "Offset mismatch for FFortMantisRootMotionWarpInfo::WarpTranslationVector");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, WarpRotationMethod) == 96, "Offset mismatch for FFortMantisRootMotionWarpInfo::WarpRotationMethod");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, WarpRotationYaw) == 100, "Offset mismatch for FFortMantisRootMotionWarpInfo::WarpRotationYaw");
static_assert(offsetof(FFortMantisRootMotionWarpInfo, DesiredTranslationDistanceToWarpTarget) == 104, "Offset mismatch for FFortMantisRootMotionWarpInfo::DesiredTranslationDistanceToWarpTarget");

// /Script/MantisRuntime.FortMantisRootMotionWarpInfoNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FFortMantisRootMotionWarpInfoNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MantisRuntime.FortMantisRootMotionWarpSettings
// Kind: ScriptStruct; super: none
struct FFortMantisRootMotionWarpSettings
{
public:
    float DesiredTranslationDistanceToWarpTarget; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMantisRootMotionWarpSettings, DesiredTranslationDistanceToWarpTarget) == 0, "Offset mismatch for FFortMantisRootMotionWarpSettings::DesiredTranslationDistanceToWarpTarget");

// /Script/MantisRuntime.FortMantisTargetData
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FFortMantisTargetData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TechniqueWarpInfo[0x70]; // 0x0008 (Size: 0x70, Type: StructProperty)
    std::int32_t TechniqueDataIndex; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsLockedOn; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    FName DynamicMontageName; // 0x0080 (Size: 0x8, Type: NameProperty)
    std::uint8_t TechniqueMetadata[0x40]; // 0x0088 (Size: 0x40, Type: StructProperty)
    std::uint8_t TechniqueContext; // 0x00C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0xF]; // 0x00C9
    void* ProxyAssetEvaluatedAnimMontage; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortMantisTargetData, TechniqueWarpInfo) == 8, "Offset mismatch for FFortMantisTargetData::TechniqueWarpInfo");
static_assert(offsetof(FFortMantisTargetData, TechniqueDataIndex) == 120, "Offset mismatch for FFortMantisTargetData::TechniqueDataIndex");
static_assert(offsetof(FFortMantisTargetData, bIsLockedOn) == 124, "Offset mismatch for FFortMantisTargetData::bIsLockedOn");
static_assert(offsetof(FFortMantisTargetData, DynamicMontageName) == 128, "Offset mismatch for FFortMantisTargetData::DynamicMontageName");
static_assert(offsetof(FFortMantisTargetData, TechniqueMetadata) == 136, "Offset mismatch for FFortMantisTargetData::TechniqueMetadata");
static_assert(offsetof(FFortMantisTargetData, TechniqueContext) == 200, "Offset mismatch for FFortMantisTargetData::TechniqueContext");
static_assert(offsetof(FFortMantisTargetData, ProxyAssetEvaluatedAnimMontage) == 216, "Offset mismatch for FFortMantisTargetData::ProxyAssetEvaluatedAnimMontage");

// /Script/MantisRuntime.FortMantisTechniqueBranch
// Kind: ScriptStruct; super: none
struct FFortMantisTechniqueBranch
{
public:
    std::uint8_t FromTechnique[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ToTechnique[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t BranchPath; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortMantisTechniqueBranch, FromTechnique) == 0, "Offset mismatch for FFortMantisTechniqueBranch::FromTechnique");
static_assert(offsetof(FFortMantisTechniqueBranch, ToTechnique) == 4, "Offset mismatch for FFortMantisTechniqueBranch::ToTechnique");
static_assert(offsetof(FFortMantisTechniqueBranch, BranchPath) == 8, "Offset mismatch for FFortMantisTechniqueBranch::BranchPath");

// /Script/MantisRuntime.FortMantisTechniqueCharacterSettings
// Kind: ScriptStruct; super: none
struct FFortMantisTechniqueCharacterSettings
{
public:
    std::uint8_t bDetachCharacterRotationFromCamera; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float ReattachCharacterRotationBlendTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ReattachCharacterRotationBlendExponent; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReattachCharacterRotationIfNoMovementInput; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceFaceActorTargetDuringTechnique; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    float WindupCharacterRotationRate; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ExecutionCharacterRotationRate; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float RecoveryCharacterRotationRate; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMantisTechniqueCharacterSettings, bDetachCharacterRotationFromCamera) == 0, "Offset mismatch for FFortMantisTechniqueCharacterSettings::bDetachCharacterRotationFromCamera");
static_assert(offsetof(FFortMantisTechniqueCharacterSettings, ReattachCharacterRotationBlendTime) == 4, "Offset mismatch for FFortMantisTechniqueCharacterSettings::ReattachCharacterRotationBlendTime");
static_assert(offsetof(FFortMantisTechniqueCharacterSettings, ReattachCharacterRotationBlendExponent) == 8, "Offset mismatch for FFortMantisTechniqueCharacterSettings::ReattachCharacterRotationBlendExponent");
static_assert(offsetof(FFortMantisTechniqueCharacterSettings, bReattachCharacterRotationIfNoMovementInput) == 12, "Offset mismatch for FFortMantisTechniqueCharacterSettings::bReattachCharacterRotationIfNoMovementInput");
static_assert(offsetof(FFortMantisTechniqueCharacterSettings, bForceFaceActorTargetDuringTechnique) == 13, "Offset mismatch for FFortMantisTechniqueCharacterSettings::bForceFaceActorTargetDuringTechnique");
static_assert(offsetof(FFortMantisTechniqueCharacterSettings, WindupCharacterRotationRate) == 16, "Offset mismatch for FFortMantisTechniqueCharacterSettings::WindupCharacterRotationRate");
static_assert(offsetof(FFortMantisTechniqueCharacterSettings, ExecutionCharacterRotationRate) == 20, "Offset mismatch for FFortMantisTechniqueCharacterSettings::ExecutionCharacterRotationRate");
static_assert(offsetof(FFortMantisTechniqueCharacterSettings, RecoveryCharacterRotationRate) == 24, "Offset mismatch for FFortMantisTechniqueCharacterSettings::RecoveryCharacterRotationRate");

// /Script/MantisRuntime.FortMantisTechniqueData
// Kind: ScriptStruct; super: none
struct FFortMantisTechniqueData
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bBranchesToBlockedOnZeroDamage; // 0x0004 (Size: 0x1, Type: BoolProperty)
    // 0x0004 BoolProperty bEndsSequence (shared storage)
    // 0x0004 BoolProperty bHasValidationTimeOverride (shared storage)
    // 0x0004 BoolProperty bOngoingTagQueryAlwaysInterrupts (shared storage)
    // 0x0004 BoolProperty bStartsSequence (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t MaxConsecutiveBranchesToSelf; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t AnimationType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    void* Montage; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> DynamicMontages; // 0x0018 (Size: 0x10, Type: MapProperty)
    FName DefaultDynamicMontageName; // 0x0028 (Size: 0x8, Type: NameProperty)
    void* ProxyAsset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RootMotionType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnoreZAccumulate; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x003A
    float InputWindowDelay; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ActivationInputType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ActivationTimingType; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0042
    float MinInputHoldDuration; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaxInputHoldDuration; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float RequiredInputHoldingDuration; // 0x004C (Size: 0x4, Type: FloatProperty)
    float ValidationTimeOverride; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0054
    std::uint8_t ActivationGameplayCues[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationTagQuery[0x48]; // 0x0078 (Size: 0x48, Type: StructProperty)
    std::uint8_t OngoingTagQuery[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    std::uint8_t ActivationApplicationTag[0x4]; // 0x0108 (Size: 0x4, Type: StructProperty)
    std::uint8_t DamageApplicationTag[0x4]; // 0x010C (Size: 0x4, Type: StructProperty)
    std::uint8_t CharacterSettings[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMantisTechniqueData, Name) == 0, "Offset mismatch for FFortMantisTechniqueData::Name");
static_assert(offsetof(FFortMantisTechniqueData, bBranchesToBlockedOnZeroDamage) == 4, "Offset mismatch for FFortMantisTechniqueData::bBranchesToBlockedOnZeroDamage");
static_assert(offsetof(FFortMantisTechniqueData, MaxConsecutiveBranchesToSelf) == 8, "Offset mismatch for FFortMantisTechniqueData::MaxConsecutiveBranchesToSelf");
static_assert(offsetof(FFortMantisTechniqueData, AnimationType) == 12, "Offset mismatch for FFortMantisTechniqueData::AnimationType");
static_assert(offsetof(FFortMantisTechniqueData, Montage) == 16, "Offset mismatch for FFortMantisTechniqueData::Montage");
static_assert(offsetof(FFortMantisTechniqueData, DynamicMontages) == 24, "Offset mismatch for FFortMantisTechniqueData::DynamicMontages");
static_assert(offsetof(FFortMantisTechniqueData, DefaultDynamicMontageName) == 40, "Offset mismatch for FFortMantisTechniqueData::DefaultDynamicMontageName");
static_assert(offsetof(FFortMantisTechniqueData, ProxyAsset) == 48, "Offset mismatch for FFortMantisTechniqueData::ProxyAsset");
static_assert(offsetof(FFortMantisTechniqueData, RootMotionType) == 56, "Offset mismatch for FFortMantisTechniqueData::RootMotionType");
static_assert(offsetof(FFortMantisTechniqueData, bIgnoreZAccumulate) == 57, "Offset mismatch for FFortMantisTechniqueData::bIgnoreZAccumulate");
static_assert(offsetof(FFortMantisTechniqueData, InputWindowDelay) == 60, "Offset mismatch for FFortMantisTechniqueData::InputWindowDelay");
static_assert(offsetof(FFortMantisTechniqueData, ActivationInputType) == 64, "Offset mismatch for FFortMantisTechniqueData::ActivationInputType");
static_assert(offsetof(FFortMantisTechniqueData, ActivationTimingType) == 65, "Offset mismatch for FFortMantisTechniqueData::ActivationTimingType");
static_assert(offsetof(FFortMantisTechniqueData, MinInputHoldDuration) == 68, "Offset mismatch for FFortMantisTechniqueData::MinInputHoldDuration");
static_assert(offsetof(FFortMantisTechniqueData, MaxInputHoldDuration) == 72, "Offset mismatch for FFortMantisTechniqueData::MaxInputHoldDuration");
static_assert(offsetof(FFortMantisTechniqueData, RequiredInputHoldingDuration) == 76, "Offset mismatch for FFortMantisTechniqueData::RequiredInputHoldingDuration");
static_assert(offsetof(FFortMantisTechniqueData, ValidationTimeOverride) == 80, "Offset mismatch for FFortMantisTechniqueData::ValidationTimeOverride");
static_assert(offsetof(FFortMantisTechniqueData, ActivationGameplayCues) == 88, "Offset mismatch for FFortMantisTechniqueData::ActivationGameplayCues");
static_assert(offsetof(FFortMantisTechniqueData, ActivationTagQuery) == 120, "Offset mismatch for FFortMantisTechniqueData::ActivationTagQuery");
static_assert(offsetof(FFortMantisTechniqueData, OngoingTagQuery) == 192, "Offset mismatch for FFortMantisTechniqueData::OngoingTagQuery");
static_assert(offsetof(FFortMantisTechniqueData, ActivationApplicationTag) == 264, "Offset mismatch for FFortMantisTechniqueData::ActivationApplicationTag");
static_assert(offsetof(FFortMantisTechniqueData, DamageApplicationTag) == 268, "Offset mismatch for FFortMantisTechniqueData::DamageApplicationTag");
static_assert(offsetof(FFortMantisTechniqueData, CharacterSettings) == 272, "Offset mismatch for FFortMantisTechniqueData::CharacterSettings");

// /Script/MantisRuntime.FortMantisTechniqueMetadata
// Kind: ScriptStruct; super: none
struct FFortMantisTechniqueMetadata
{
public:
    TMap<void*, void*> IntValues; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> FloatValues; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> VectorValues; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StringValues; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FFortMantisTechniqueMetadata, IntValues) == 0, "Offset mismatch for FFortMantisTechniqueMetadata::IntValues");
static_assert(offsetof(FFortMantisTechniqueMetadata, FloatValues) == 16, "Offset mismatch for FFortMantisTechniqueMetadata::FloatValues");
static_assert(offsetof(FFortMantisTechniqueMetadata, VectorValues) == 32, "Offset mismatch for FFortMantisTechniqueMetadata::VectorValues");
static_assert(offsetof(FFortMantisTechniqueMetadata, StringValues) == 48, "Offset mismatch for FFortMantisTechniqueMetadata::StringValues");

// /Script/MantisRuntime.FortMantis_AnimationEvaluationContext
// Kind: ScriptStruct; super: none
struct FFortMantis_AnimationEvaluationContext
{
public:
    std::uint8_t PawnTagsContainer[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t WeaponTagsContainer[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMantis_AnimationEvaluationContext, PawnTagsContainer) == 0, "Offset mismatch for FFortMantis_AnimationEvaluationContext::PawnTagsContainer");
static_assert(offsetof(FFortMantis_AnimationEvaluationContext, WeaponTagsContainer) == 32, "Offset mismatch for FFortMantis_AnimationEvaluationContext::WeaponTagsContainer");

// /Script/MantisRuntime.FortMovementMode_MantisCreationData
// Kind: ScriptStruct; super: FortMovementMode_GuidedMotionCreationData
struct FFortMovementMode_MantisCreationData
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

static_assert(offsetof(FFortMovementMode_MantisCreationData, MoveToComponent) == 16, "Offset mismatch for FFortMovementMode_MantisCreationData::MoveToComponent");
static_assert(offsetof(FFortMovementMode_MantisCreationData, OnFinished) == 24, "Offset mismatch for FFortMovementMode_MantisCreationData::OnFinished");
static_assert(offsetof(FFortMovementMode_MantisCreationData, OnLanded) == 36, "Offset mismatch for FFortMovementMode_MantisCreationData::OnLanded");
static_assert(offsetof(FFortMovementMode_MantisCreationData, InitialPlayerLocation) == 48, "Offset mismatch for FFortMovementMode_MantisCreationData::InitialPlayerLocation");
static_assert(offsetof(FFortMovementMode_MantisCreationData, bHasMovementInput) == 72, "Offset mismatch for FFortMovementMode_MantisCreationData::bHasMovementInput");
static_assert(offsetof(FFortMovementMode_MantisCreationData, OptionalBools) == 80, "Offset mismatch for FFortMovementMode_MantisCreationData::OptionalBools");
static_assert(offsetof(FFortMovementMode_MantisCreationData, OptionalFloats) == 96, "Offset mismatch for FFortMovementMode_MantisCreationData::OptionalFloats");

// /Script/MantisRuntime.FortRootMotionSource_Mantis
// Kind: ScriptStruct; super: RootMotionSource
struct FFortRootMotionSource_Mantis
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float CurrentTechniqueTime; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* TechniqueMontage; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WarpInfo[0x70]; // 0x00D0 (Size: 0x70, Type: StructProperty)
    std::uint8_t LatestRepMovementLocation[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortRootMotionSource_Mantis, CurrentTechniqueTime) == 192, "Offset mismatch for FFortRootMotionSource_Mantis::CurrentTechniqueTime");
static_assert(offsetof(FFortRootMotionSource_Mantis, TechniqueMontage) == 200, "Offset mismatch for FFortRootMotionSource_Mantis::TechniqueMontage");
static_assert(offsetof(FFortRootMotionSource_Mantis, WarpInfo) == 208, "Offset mismatch for FFortRootMotionSource_Mantis::WarpInfo");
static_assert(offsetof(FFortRootMotionSource_Mantis, LatestRepMovementLocation) == 320, "Offset mismatch for FFortRootMotionSource_Mantis::LatestRepMovementLocation");

// /Script/MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
// Kind: Class; super: AbilityTask_ApplyRootMotion_Base
class UFortAbilityTask_ApplyRootMotionMantisForce
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnFinish; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float duration; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* TechniqueMontage; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WarpInfo[0x70]; // 0x00D0 (Size: 0x70, Type: StructProperty)
    std::uint8_t bIgnoreZAccumulate; // 0x0140 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, OnFinish) == 176, "Offset mismatch for UFortAbilityTask_ApplyRootMotionMantisForce::OnFinish");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, duration) == 192, "Offset mismatch for UFortAbilityTask_ApplyRootMotionMantisForce::duration");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, TechniqueMontage) == 200, "Offset mismatch for UFortAbilityTask_ApplyRootMotionMantisForce::TechniqueMontage");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, WarpInfo) == 208, "Offset mismatch for UFortAbilityTask_ApplyRootMotionMantisForce::WarpInfo");
static_assert(offsetof(UFortAbilityTask_ApplyRootMotionMantisForce, bIgnoreZAccumulate) == 320, "Offset mismatch for UFortAbilityTask_ApplyRootMotionMantisForce::bIgnoreZAccumulate");

// /Script/MantisRuntime.FortAnimNotifyState_Mantis
// Kind: Class; super: AnimNotifyState
class UFortAnimNotifyState_Mantis
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MantisNotifyWindow; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MantisBranchRule; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MantisBranchPath; // 0x0032 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0033
    std::uint8_t MantisNotifyTag[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t TranslationWarpLimitRule; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0039
    float TranslationWarpLimit; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RotationRateWarpRule; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0041
    float FixedWarpRotationRate; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWarpRotation; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bWarpTranslation (shared storage)
};

static_assert(offsetof(UFortAnimNotifyState_Mantis, MantisNotifyWindow) == 48, "Offset mismatch for UFortAnimNotifyState_Mantis::MantisNotifyWindow");
static_assert(offsetof(UFortAnimNotifyState_Mantis, MantisBranchRule) == 49, "Offset mismatch for UFortAnimNotifyState_Mantis::MantisBranchRule");
static_assert(offsetof(UFortAnimNotifyState_Mantis, MantisBranchPath) == 50, "Offset mismatch for UFortAnimNotifyState_Mantis::MantisBranchPath");
static_assert(offsetof(UFortAnimNotifyState_Mantis, MantisNotifyTag) == 52, "Offset mismatch for UFortAnimNotifyState_Mantis::MantisNotifyTag");
static_assert(offsetof(UFortAnimNotifyState_Mantis, TranslationWarpLimitRule) == 56, "Offset mismatch for UFortAnimNotifyState_Mantis::TranslationWarpLimitRule");
static_assert(offsetof(UFortAnimNotifyState_Mantis, TranslationWarpLimit) == 60, "Offset mismatch for UFortAnimNotifyState_Mantis::TranslationWarpLimit");
static_assert(offsetof(UFortAnimNotifyState_Mantis, RotationRateWarpRule) == 64, "Offset mismatch for UFortAnimNotifyState_Mantis::RotationRateWarpRule");
static_assert(offsetof(UFortAnimNotifyState_Mantis, FixedWarpRotationRate) == 68, "Offset mismatch for UFortAnimNotifyState_Mantis::FixedWarpRotationRate");
static_assert(offsetof(UFortAnimNotifyState_Mantis, bWarpRotation) == 72, "Offset mismatch for UFortAnimNotifyState_Mantis::bWarpRotation");

// /Script/MantisRuntime.FortAnimNotify_Mantis
// Kind: Class; super: AnimNotify
class UFortAnimNotify_Mantis
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MantisNotifyEvent; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MantisBranchRule; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MantisBranchPath; // 0x003A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMaintainPreviousMantisBranchesInTechnique; // 0x003B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAnimNotify_Mantis, MantisNotifyEvent) == 56, "Offset mismatch for UFortAnimNotify_Mantis::MantisNotifyEvent");
static_assert(offsetof(UFortAnimNotify_Mantis, MantisBranchRule) == 57, "Offset mismatch for UFortAnimNotify_Mantis::MantisBranchRule");
static_assert(offsetof(UFortAnimNotify_Mantis, MantisBranchPath) == 58, "Offset mismatch for UFortAnimNotify_Mantis::MantisBranchPath");
static_assert(offsetof(UFortAnimNotify_Mantis, bMaintainPreviousMantisBranchesInTechnique) == 59, "Offset mismatch for UFortAnimNotify_Mantis::bMaintainPreviousMantisBranchesInTechnique");

// /Script/MantisRuntime.FortGameplayAbility_Mantis
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_Mantis
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t bUseCommitValidation; // 0x0B20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRootMotionWarping; // 0x0B21 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAlternativeWarpingBehavior; // 0x0B22 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyEffectContainerOnTechniqueDamage; // 0x0B23 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyEffectContainerOnTechniqueStart; // 0x0B24 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0B25
    void* MantisPawnComponent; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
    void* MontageTask; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    void* RootMotionTask; // 0x0B38 (Size: 0x8, Type: ObjectProperty)
    void* MantisMovementClass; // 0x0B40 (Size: 0x8, Type: ClassProperty)
    void* MantisHoldPositionClass; // 0x0B48 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortGameplayAbility_Mantis, bUseCommitValidation) == 2848, "Offset mismatch for UFortGameplayAbility_Mantis::bUseCommitValidation");
static_assert(offsetof(UFortGameplayAbility_Mantis, bAllowRootMotionWarping) == 2849, "Offset mismatch for UFortGameplayAbility_Mantis::bAllowRootMotionWarping");
static_assert(offsetof(UFortGameplayAbility_Mantis, bUseAlternativeWarpingBehavior) == 2850, "Offset mismatch for UFortGameplayAbility_Mantis::bUseAlternativeWarpingBehavior");
static_assert(offsetof(UFortGameplayAbility_Mantis, bApplyEffectContainerOnTechniqueDamage) == 2851, "Offset mismatch for UFortGameplayAbility_Mantis::bApplyEffectContainerOnTechniqueDamage");
static_assert(offsetof(UFortGameplayAbility_Mantis, bApplyEffectContainerOnTechniqueStart) == 2852, "Offset mismatch for UFortGameplayAbility_Mantis::bApplyEffectContainerOnTechniqueStart");
static_assert(offsetof(UFortGameplayAbility_Mantis, MantisPawnComponent) == 2856, "Offset mismatch for UFortGameplayAbility_Mantis::MantisPawnComponent");
static_assert(offsetof(UFortGameplayAbility_Mantis, MontageTask) == 2864, "Offset mismatch for UFortGameplayAbility_Mantis::MontageTask");
static_assert(offsetof(UFortGameplayAbility_Mantis, RootMotionTask) == 2872, "Offset mismatch for UFortGameplayAbility_Mantis::RootMotionTask");
static_assert(offsetof(UFortGameplayAbility_Mantis, MantisMovementClass) == 2880, "Offset mismatch for UFortGameplayAbility_Mantis::MantisMovementClass");
static_assert(offsetof(UFortGameplayAbility_Mantis, MantisHoldPositionClass) == 2888, "Offset mismatch for UFortGameplayAbility_Mantis::MantisHoldPositionClass");

// /Script/MantisRuntime.FortMantisAnimInstance
// Kind: Class; super: FortBaseAnimInstance
class UFortMantisAnimInstance
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t MantisAnimInstanceInfo[0x1]; // 0x0330 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMantisAnimInstance, MantisAnimInstanceInfo) == 816, "Offset mismatch for UFortMantisAnimInstance::MantisAnimInstanceInfo");

// /Script/MantisRuntime.FortMantisData
// Kind: Class; super: DataAsset
class UFortMantisData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableRotationOverrideTags; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t LockRotationToCameraTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t UnlockRotationFromCameraTag[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t LockRotationOnFinishTag[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t UnlockRotationOnFinishTag[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t bShowTargetHealthBar; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHoldingEnabled; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x003E
    std::uint8_t PrimaryHoldingInputAction[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SecondaryHoldingInputAction[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    void* TechniqueAbility; // 0x0080 (Size: 0x8, Type: ClassProperty)
    TArray<void*> TechniqueAdditionEffectContainers; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Techniques; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Branches; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMantisData, bEnableRotationOverrideTags) == 40, "Offset mismatch for UFortMantisData::bEnableRotationOverrideTags");
static_assert(offsetof(UFortMantisData, LockRotationToCameraTag) == 44, "Offset mismatch for UFortMantisData::LockRotationToCameraTag");
static_assert(offsetof(UFortMantisData, UnlockRotationFromCameraTag) == 48, "Offset mismatch for UFortMantisData::UnlockRotationFromCameraTag");
static_assert(offsetof(UFortMantisData, LockRotationOnFinishTag) == 52, "Offset mismatch for UFortMantisData::LockRotationOnFinishTag");
static_assert(offsetof(UFortMantisData, UnlockRotationOnFinishTag) == 56, "Offset mismatch for UFortMantisData::UnlockRotationOnFinishTag");
static_assert(offsetof(UFortMantisData, bShowTargetHealthBar) == 60, "Offset mismatch for UFortMantisData::bShowTargetHealthBar");
static_assert(offsetof(UFortMantisData, bIsHoldingEnabled) == 61, "Offset mismatch for UFortMantisData::bIsHoldingEnabled");
static_assert(offsetof(UFortMantisData, PrimaryHoldingInputAction) == 64, "Offset mismatch for UFortMantisData::PrimaryHoldingInputAction");
static_assert(offsetof(UFortMantisData, SecondaryHoldingInputAction) == 96, "Offset mismatch for UFortMantisData::SecondaryHoldingInputAction");
static_assert(offsetof(UFortMantisData, TechniqueAbility) == 128, "Offset mismatch for UFortMantisData::TechniqueAbility");
static_assert(offsetof(UFortMantisData, TechniqueAdditionEffectContainers) == 136, "Offset mismatch for UFortMantisData::TechniqueAdditionEffectContainers");
static_assert(offsetof(UFortMantisData, Techniques) == 152, "Offset mismatch for UFortMantisData::Techniques");
static_assert(offsetof(UFortMantisData, Branches) == 168, "Offset mismatch for UFortMantisData::Branches");

// /Script/MantisRuntime.FortMantisLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UFortMantisLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t MantisAnimInstanceInfo[0x1]; // 0x1170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMantisLayerAnimInstance, MantisAnimInstanceInfo) == 4464, "Offset mismatch for UFortMantisLayerAnimInstance::MantisAnimInstanceInfo");

// /Script/MantisRuntime.FortMantisPawnComponent
// Kind: Class; super: PawnComponent
class UFortMantisPawnComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnTechniqueMetadataReady; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00D0
    FMulticastInlineDelegate OnTechniqueStartedBP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTechniqueEndedBP; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0xE0]; // 0x0120
    TMap<void*, void*> MontageDataMap; // 0x0200 (Size: 0x10, Type: MapProperty)
    void* MantisData; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    void* Weapon; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    void* ProxyTable; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x128]; // 0x0228
    void* ProxyAssetEvaluatedAnimMontage; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMantisPawnComponent, OnTechniqueMetadataReady) == 192, "Offset mismatch for UFortMantisPawnComponent::OnTechniqueMetadataReady");
static_assert(offsetof(UFortMantisPawnComponent, OnTechniqueStartedBP) == 256, "Offset mismatch for UFortMantisPawnComponent::OnTechniqueStartedBP");
static_assert(offsetof(UFortMantisPawnComponent, OnTechniqueEndedBP) == 272, "Offset mismatch for UFortMantisPawnComponent::OnTechniqueEndedBP");
static_assert(offsetof(UFortMantisPawnComponent, MontageDataMap) == 512, "Offset mismatch for UFortMantisPawnComponent::MontageDataMap");
static_assert(offsetof(UFortMantisPawnComponent, MantisData) == 528, "Offset mismatch for UFortMantisPawnComponent::MantisData");
static_assert(offsetof(UFortMantisPawnComponent, Weapon) == 536, "Offset mismatch for UFortMantisPawnComponent::Weapon");
static_assert(offsetof(UFortMantisPawnComponent, ProxyTable) == 544, "Offset mismatch for UFortMantisPawnComponent::ProxyTable");
static_assert(offsetof(UFortMantisPawnComponent, ProxyAssetEvaluatedAnimMontage) == 848, "Offset mismatch for UFortMantisPawnComponent::ProxyAssetEvaluatedAnimMontage");

// /Script/MantisRuntime.FortMantisWeaponComponent
// Kind: Class; super: FortWeaponComponent
class UFortMantisWeaponComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* MantisData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> MantisPawnComponent; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t AnimInstanceInfo[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReplayAnimInstanceInfo[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMantisWeaponComponent, MantisData) == 200, "Offset mismatch for UFortMantisWeaponComponent::MantisData");
static_assert(offsetof(UFortMantisWeaponComponent, MantisPawnComponent) == 208, "Offset mismatch for UFortMantisWeaponComponent::MantisPawnComponent");
static_assert(offsetof(UFortMantisWeaponComponent, AnimInstanceInfo) == 216, "Offset mismatch for UFortMantisWeaponComponent::AnimInstanceInfo");
static_assert(offsetof(UFortMantisWeaponComponent, ReplayAnimInstanceInfo) == 232, "Offset mismatch for UFortMantisWeaponComponent::ReplayAnimInstanceInfo");

// /Script/MantisRuntime.FortMovementMode_ExtMantis
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_ExtMantis
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    std::uint8_t bHoldPosition; // 0x05A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05A1
    float ServerMaxWarpTranslationBeforeValidatedWarpInfo; // 0x05A4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_ExtMantis, bHoldPosition) == 1440, "Offset mismatch for UFortMovementMode_ExtMantis::bHoldPosition");
static_assert(offsetof(UFortMovementMode_ExtMantis, ServerMaxWarpTranslationBeforeValidatedWarpInfo) == 1444, "Offset mismatch for UFortMovementMode_ExtMantis::ServerMaxWarpTranslationBeforeValidatedWarpInfo");

// /Script/MantisRuntime.FortMovementMode_MantisRuntimeData
// Kind: Class; super: FortMovementMode_GuidedMotionRuntimeData
class UFortMovementMode_MantisRuntimeData
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

static_assert(offsetof(UFortMovementMode_MantisRuntimeData, NetInitialComponent_MoveToActor) == 60, "Offset mismatch for UFortMovementMode_MantisRuntimeData::NetInitialComponent_MoveToActor");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, NetInitialWorldLocation_MoveToActor) == 72, "Offset mismatch for UFortMovementMode_MantisRuntimeData::NetInitialWorldLocation_MoveToActor");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, NetInitialWorldDirection_MoveToActor) == 96, "Offset mismatch for UFortMovementMode_MantisRuntimeData::NetInitialWorldDirection_MoveToActor");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, bNetInitialHasMovementInput) == 120, "Offset mismatch for UFortMovementMode_MantisRuntimeData::bNetInitialHasMovementInput");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, NetInitialPlayerLocation) == 128, "Offset mismatch for UFortMovementMode_MantisRuntimeData::NetInitialPlayerLocation");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, NetOptionalBools) == 152, "Offset mismatch for UFortMovementMode_MantisRuntimeData::NetOptionalBools");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, NetOptionalFloats) == 168, "Offset mismatch for UFortMovementMode_MantisRuntimeData::NetOptionalFloats");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalGuideMode) == 184, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalGuideMode");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalMoveToEndLocation) == 192, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalMoveToEndLocation");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalStartElapsedTime) == 216, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalStartElapsedTime");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalEndElapsedTime) == 220, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalEndElapsedTime");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, OnFinished) == 224, "Offset mismatch for UFortMovementMode_MantisRuntimeData::OnFinished");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalMaxDuration) == 324, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalMaxDuration");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalStrength) == 424, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalStrength");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalDirection) == 432, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalDirection");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalHeightAboveGround) == 456, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalHeightAboveGround");
static_assert(offsetof(UFortMovementMode_MantisRuntimeData, LocalInitialPlayerLocation) == 552, "Offset mismatch for UFortMovementMode_MantisRuntimeData::LocalInitialPlayerLocation");
