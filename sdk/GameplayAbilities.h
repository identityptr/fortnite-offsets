/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayAbilities
 */
#pragma once
#include "Basic.h"

// /Script/GameplayAbilities.AbilityEndedData
// Kind: ScriptStruct; super: none
struct FAbilityEndedData
{
public:
    void* AbilityThatEnded; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AbilitySpecHandle[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bReplicateEndAbility; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasCancelled; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAbilityEndedData, AbilityThatEnded) == 0, "Offset mismatch for FAbilityEndedData::AbilityThatEnded");
static_assert(offsetof(FAbilityEndedData, AbilitySpecHandle) == 8, "Offset mismatch for FAbilityEndedData::AbilitySpecHandle");
static_assert(offsetof(FAbilityEndedData, bReplicateEndAbility) == 32, "Offset mismatch for FAbilityEndedData::bReplicateEndAbility");
static_assert(offsetof(FAbilityEndedData, bWasCancelled) == 33, "Offset mismatch for FAbilityEndedData::bWasCancelled");

// /Script/GameplayAbilities.AbilityTaskDebugMessage
// Kind: ScriptStruct; super: none
struct FAbilityTaskDebugMessage
{
public:
    void* FromTask; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    FString Message; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FAbilityTaskDebugMessage, FromTask) == 0, "Offset mismatch for FAbilityTaskDebugMessage::FromTask");
static_assert(offsetof(FAbilityTaskDebugMessage, Message) == 8, "Offset mismatch for FAbilityTaskDebugMessage::Message");

// /Script/GameplayAbilities.AbilityTriggerData
// Kind: ScriptStruct; super: none
struct FAbilityTriggerData
{
public:
    std::uint8_t TriggerTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TriggerSource; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FAbilityTriggerData, TriggerTag) == 0, "Offset mismatch for FAbilityTriggerData::TriggerTag");
static_assert(offsetof(FAbilityTriggerData, TriggerSource) == 4, "Offset mismatch for FAbilityTriggerData::TriggerSource");

// /Script/GameplayAbilities.ActiveGameplayCue
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FActiveGameplayCue
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t GameplayCueTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t PredictionKey[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Parameters[0xD0]; // 0x0020 (Size: 0xD0, Type: StructProperty)
    std::uint8_t bPredictivelyRemoved; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FActiveGameplayCue, GameplayCueTag) == 12, "Offset mismatch for FActiveGameplayCue::GameplayCueTag");
static_assert(offsetof(FActiveGameplayCue, PredictionKey) == 16, "Offset mismatch for FActiveGameplayCue::PredictionKey");
static_assert(offsetof(FActiveGameplayCue, Parameters) == 32, "Offset mismatch for FActiveGameplayCue::Parameters");
static_assert(offsetof(FActiveGameplayCue, bPredictivelyRemoved) == 240, "Offset mismatch for FActiveGameplayCue::bPredictivelyRemoved");

// /Script/GameplayAbilities.ActiveGameplayCueContainer
// Kind: ScriptStruct; super: FastArraySerializer
struct FActiveGameplayCueContainer
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> GameplayCues; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0058
    void* Owner; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActiveGameplayCueContainer, GameplayCues) == 72, "Offset mismatch for FActiveGameplayCueContainer::GameplayCues");
static_assert(offsetof(FActiveGameplayCueContainer, Owner) == 96, "Offset mismatch for FActiveGameplayCueContainer::Owner");

// /Script/GameplayAbilities.ActiveGameplayEffect
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FActiveGameplayEffect
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t Handle[0x14]; // 0x000C (Size: 0x14, Type: StructProperty)
    std::uint8_t Spec[0x1D0]; // 0x0020 (Size: 0x1D0, Type: StructProperty)
    std::uint8_t PredictionKey[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    TArray<void*> GrantedAbilityHandles; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    float StartServerWorldTime; // 0x0210 (Size: 0x4, Type: FloatProperty)
    float CachedStartServerWorldTime; // 0x0214 (Size: 0x4, Type: FloatProperty)
    float StartWorldTime; // 0x0218 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInhibited; // 0x021C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FActiveGameplayEffect, Handle) == 12, "Offset mismatch for FActiveGameplayEffect::Handle");
static_assert(offsetof(FActiveGameplayEffect, Spec) == 32, "Offset mismatch for FActiveGameplayEffect::Spec");
static_assert(offsetof(FActiveGameplayEffect, PredictionKey) == 496, "Offset mismatch for FActiveGameplayEffect::PredictionKey");
static_assert(offsetof(FActiveGameplayEffect, GrantedAbilityHandles) == 512, "Offset mismatch for FActiveGameplayEffect::GrantedAbilityHandles");
static_assert(offsetof(FActiveGameplayEffect, StartServerWorldTime) == 528, "Offset mismatch for FActiveGameplayEffect::StartServerWorldTime");
static_assert(offsetof(FActiveGameplayEffect, CachedStartServerWorldTime) == 532, "Offset mismatch for FActiveGameplayEffect::CachedStartServerWorldTime");
static_assert(offsetof(FActiveGameplayEffect, StartWorldTime) == 536, "Offset mismatch for FActiveGameplayEffect::StartWorldTime");
static_assert(offsetof(FActiveGameplayEffect, bIsInhibited) == 540, "Offset mismatch for FActiveGameplayEffect::bIsInhibited");

// /Script/GameplayAbilities.ActiveGameplayEffectHandle
// Kind: ScriptStruct; super: OwnerUniqueHandleBase
struct FActiveGameplayEffectHandle
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t bPassedFiltersAndWasExecuted; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t Handle; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FActiveGameplayEffectHandle, bPassedFiltersAndWasExecuted) == 12, "Offset mismatch for FActiveGameplayEffectHandle::bPassedFiltersAndWasExecuted");
static_assert(offsetof(FActiveGameplayEffectHandle, Handle) == 16, "Offset mismatch for FActiveGameplayEffectHandle::Handle");

// /Script/GameplayAbilities.ActiveGameplayEffectQuery
// Kind: ScriptStruct; super: none
struct FActiveGameplayEffectQuery
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.ActiveGameplayEffectsContainer
// Kind: ScriptStruct; super: FastArraySerializer
struct FActiveGameplayEffectsContainer
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> GameplayEffects_Internal; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FActiveGameplayEffectsContainer, GameplayEffects_Internal) == 112, "Offset mismatch for FActiveGameplayEffectsContainer::GameplayEffects_Internal");

// /Script/GameplayAbilities.AttributeBasedFloat
// Kind: ScriptStruct; super: none
struct FAttributeBasedFloat
{
public:
    std::uint8_t Coefficient[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreMultiplyAdditiveValue[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostMultiplyAdditiveValue[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t BackingAttribute[0x40]; // 0x0078 (Size: 0x40, Type: StructProperty)
    std::uint8_t AttributeCurve[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t AttributeCalculationType; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FinalChannel; // 0x00C9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x00CA
    std::uint8_t SourceTagFilter[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetTagFilter[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAttributeBasedFloat, Coefficient) == 0, "Offset mismatch for FAttributeBasedFloat::Coefficient");
static_assert(offsetof(FAttributeBasedFloat, PreMultiplyAdditiveValue) == 40, "Offset mismatch for FAttributeBasedFloat::PreMultiplyAdditiveValue");
static_assert(offsetof(FAttributeBasedFloat, PostMultiplyAdditiveValue) == 80, "Offset mismatch for FAttributeBasedFloat::PostMultiplyAdditiveValue");
static_assert(offsetof(FAttributeBasedFloat, BackingAttribute) == 120, "Offset mismatch for FAttributeBasedFloat::BackingAttribute");
static_assert(offsetof(FAttributeBasedFloat, AttributeCurve) == 184, "Offset mismatch for FAttributeBasedFloat::AttributeCurve");
static_assert(offsetof(FAttributeBasedFloat, AttributeCalculationType) == 200, "Offset mismatch for FAttributeBasedFloat::AttributeCalculationType");
static_assert(offsetof(FAttributeBasedFloat, FinalChannel) == 201, "Offset mismatch for FAttributeBasedFloat::FinalChannel");
static_assert(offsetof(FAttributeBasedFloat, SourceTagFilter) == 208, "Offset mismatch for FAttributeBasedFloat::SourceTagFilter");
static_assert(offsetof(FAttributeBasedFloat, TargetTagFilter) == 240, "Offset mismatch for FAttributeBasedFloat::TargetTagFilter");

// /Script/GameplayAbilities.AttributeDefaults
// Kind: ScriptStruct; super: none
struct FAttributeDefaults
{
public:
    void* Attributes; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* DefaultStartingTable; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAttributeDefaults, Attributes) == 0, "Offset mismatch for FAttributeDefaults::Attributes");
static_assert(offsetof(FAttributeDefaults, DefaultStartingTable) == 8, "Offset mismatch for FAttributeDefaults::DefaultStartingTable");

// /Script/GameplayAbilities.AttributeMetaData
// Kind: ScriptStruct; super: TableRowBase
struct FAttributeMetaData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float BaseValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    FString DerivedAttributeInfo; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCanStack; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAttributeMetaData, BaseValue) == 8, "Offset mismatch for FAttributeMetaData::BaseValue");
static_assert(offsetof(FAttributeMetaData, MinValue) == 12, "Offset mismatch for FAttributeMetaData::MinValue");
static_assert(offsetof(FAttributeMetaData, MaxValue) == 16, "Offset mismatch for FAttributeMetaData::MaxValue");
static_assert(offsetof(FAttributeMetaData, DerivedAttributeInfo) == 24, "Offset mismatch for FAttributeMetaData::DerivedAttributeInfo");
static_assert(offsetof(FAttributeMetaData, bCanStack) == 40, "Offset mismatch for FAttributeMetaData::bCanStack");

// /Script/GameplayAbilities.ConditionalGameplayEffect
// Kind: ScriptStruct; super: none
struct FConditionalGameplayEffect
{
public:
    void* EffectClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RequiredSourceTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t RemovalPolicy; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    std::int32_t StackCountToRemove; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FConditionalGameplayEffect, EffectClass) == 0, "Offset mismatch for FConditionalGameplayEffect::EffectClass");
static_assert(offsetof(FConditionalGameplayEffect, RequiredSourceTags) == 8, "Offset mismatch for FConditionalGameplayEffect::RequiredSourceTags");
static_assert(offsetof(FConditionalGameplayEffect, RemovalPolicy) == 40, "Offset mismatch for FConditionalGameplayEffect::RemovalPolicy");
static_assert(offsetof(FConditionalGameplayEffect, StackCountToRemove) == 44, "Offset mismatch for FConditionalGameplayEffect::StackCountToRemove");

// /Script/GameplayAbilities.CustomCalculationBasedFloat
// Kind: ScriptStruct; super: none
struct FCustomCalculationBasedFloat
{
public:
    void* CalculationClassMagnitude; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Coefficient[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t PreMultiplyAdditiveValue[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t PostMultiplyAdditiveValue[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t FinalLookupCurve[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomCalculationBasedFloat, CalculationClassMagnitude) == 0, "Offset mismatch for FCustomCalculationBasedFloat::CalculationClassMagnitude");
static_assert(offsetof(FCustomCalculationBasedFloat, Coefficient) == 8, "Offset mismatch for FCustomCalculationBasedFloat::Coefficient");
static_assert(offsetof(FCustomCalculationBasedFloat, PreMultiplyAdditiveValue) == 48, "Offset mismatch for FCustomCalculationBasedFloat::PreMultiplyAdditiveValue");
static_assert(offsetof(FCustomCalculationBasedFloat, PostMultiplyAdditiveValue) == 88, "Offset mismatch for FCustomCalculationBasedFloat::PostMultiplyAdditiveValue");
static_assert(offsetof(FCustomCalculationBasedFloat, FinalLookupCurve) == 128, "Offset mismatch for FCustomCalculationBasedFloat::FinalLookupCurve");

// /Script/GameplayAbilities.GameplayAbilityActivationInfo
// Kind: ScriptStruct; super: none
struct FGameplayAbilityActivationInfo
{
public:
    std::uint8_t ActivationMode; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bCanBeEndedByOtherInstance; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t PredictionKeyWhenActivated[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayAbilityActivationInfo, ActivationMode) == 0, "Offset mismatch for FGameplayAbilityActivationInfo::ActivationMode");
static_assert(offsetof(FGameplayAbilityActivationInfo, bCanBeEndedByOtherInstance) == 1, "Offset mismatch for FGameplayAbilityActivationInfo::bCanBeEndedByOtherInstance");
static_assert(offsetof(FGameplayAbilityActivationInfo, PredictionKeyWhenActivated) == 4, "Offset mismatch for FGameplayAbilityActivationInfo::PredictionKeyWhenActivated");

// /Script/GameplayAbilities.GameplayAbilityActorInfo
// Kind: ScriptStruct; super: none
struct FGameplayAbilityActorInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> OwnerActor; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AvatarActor; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerController; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AbilitySystemComponent; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SkeletalMeshComponent; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AnimInstance; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MovementComponent; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    FName AffectedAnimInstanceTag; // 0x0040 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGameplayAbilityActorInfo, OwnerActor) == 8, "Offset mismatch for FGameplayAbilityActorInfo::OwnerActor");
static_assert(offsetof(FGameplayAbilityActorInfo, AvatarActor) == 16, "Offset mismatch for FGameplayAbilityActorInfo::AvatarActor");
static_assert(offsetof(FGameplayAbilityActorInfo, PlayerController) == 24, "Offset mismatch for FGameplayAbilityActorInfo::PlayerController");
static_assert(offsetof(FGameplayAbilityActorInfo, AbilitySystemComponent) == 32, "Offset mismatch for FGameplayAbilityActorInfo::AbilitySystemComponent");
static_assert(offsetof(FGameplayAbilityActorInfo, SkeletalMeshComponent) == 40, "Offset mismatch for FGameplayAbilityActorInfo::SkeletalMeshComponent");
static_assert(offsetof(FGameplayAbilityActorInfo, AnimInstance) == 48, "Offset mismatch for FGameplayAbilityActorInfo::AnimInstance");
static_assert(offsetof(FGameplayAbilityActorInfo, MovementComponent) == 56, "Offset mismatch for FGameplayAbilityActorInfo::MovementComponent");
static_assert(offsetof(FGameplayAbilityActorInfo, AffectedAnimInstanceTag) == 64, "Offset mismatch for FGameplayAbilityActorInfo::AffectedAnimInstanceTag");

// /Script/GameplayAbilities.GameplayAbilityBindInfo
// Kind: ScriptStruct; super: none
struct FGameplayAbilityBindInfo
{
public:
    std::uint8_t Command; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* GameplayAbilityClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FGameplayAbilityBindInfo, Command) == 0, "Offset mismatch for FGameplayAbilityBindInfo::Command");
static_assert(offsetof(FGameplayAbilityBindInfo, GameplayAbilityClass) == 8, "Offset mismatch for FGameplayAbilityBindInfo::GameplayAbilityClass");

// /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
// Kind: ScriptStruct; super: none
struct FGameplayAbilityLocalAnimMontage
{
public:
    void* AnimMontage; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayInstanceId; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t PredictionKey[0x10]; // 0x000C (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> AnimatingAbility; // 0x001C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimMontage) == 0, "Offset mismatch for FGameplayAbilityLocalAnimMontage::AnimMontage");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PlayInstanceId) == 8, "Offset mismatch for FGameplayAbilityLocalAnimMontage::PlayInstanceId");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, PredictionKey) == 12, "Offset mismatch for FGameplayAbilityLocalAnimMontage::PredictionKey");
static_assert(offsetof(FGameplayAbilityLocalAnimMontage, AnimatingAbility) == 28, "Offset mismatch for FGameplayAbilityLocalAnimMontage::AnimatingAbility");

// /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
// Kind: ScriptStruct; super: none
struct FGameplayAbilityRepAnimMontage
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SlotName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    float PlayRate; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Position; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float BlendTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float BlendOutTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float PlayCount; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t NextSectionID; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PlayInstanceId; // 0x0021 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IsStopped; // 0x0022 (Size: 0x1, Type: BoolProperty)
    // 0x0022 BoolProperty SkipPositionCorrection (shared storage)
    // 0x0022 BoolProperty bRepPosition (shared storage)
    // 0x0022 BoolProperty bSkipPlayRate (shared storage)
    std::uint8_t Pad_0000[0x1]; // 0x0023
    std::uint8_t PredictionKey[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    std::uint8_t SectionIdToPlay; // 0x0034 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FGameplayAbilityRepAnimMontage, Animation) == 0, "Offset mismatch for FGameplayAbilityRepAnimMontage::Animation");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, SlotName) == 8, "Offset mismatch for FGameplayAbilityRepAnimMontage::SlotName");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PlayRate) == 12, "Offset mismatch for FGameplayAbilityRepAnimMontage::PlayRate");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, Position) == 16, "Offset mismatch for FGameplayAbilityRepAnimMontage::Position");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, BlendTime) == 20, "Offset mismatch for FGameplayAbilityRepAnimMontage::BlendTime");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, BlendOutTime) == 24, "Offset mismatch for FGameplayAbilityRepAnimMontage::BlendOutTime");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PlayCount) == 28, "Offset mismatch for FGameplayAbilityRepAnimMontage::PlayCount");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, NextSectionID) == 32, "Offset mismatch for FGameplayAbilityRepAnimMontage::NextSectionID");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PlayInstanceId) == 33, "Offset mismatch for FGameplayAbilityRepAnimMontage::PlayInstanceId");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, IsStopped) == 34, "Offset mismatch for FGameplayAbilityRepAnimMontage::IsStopped");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, PredictionKey) == 36, "Offset mismatch for FGameplayAbilityRepAnimMontage::PredictionKey");
static_assert(offsetof(FGameplayAbilityRepAnimMontage, SectionIdToPlay) == 52, "Offset mismatch for FGameplayAbilityRepAnimMontage::SectionIdToPlay");

// /Script/GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FGameplayAbilityRepAnimMontageNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayAbilitySpec
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FGameplayAbilitySpec
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Handle[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    void* ability; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Level; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t InputID; // 0x0034 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> SourceObject; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ActiveCount; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t InputPressed; // 0x0041 (Size: 0x1, Type: BoolProperty)
    // 0x0041 BoolProperty PendingRemove (shared storage)
    // 0x0041 BoolProperty RemoveAfterActivation (shared storage)
    // 0x0041 BoolProperty bActivateOnce (shared storage)
    std::uint8_t Pad_0001[0x16]; // 0x0042
    std::uint8_t ActivationInfo[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t DynamicAbilityTags[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    TArray<void*> DynamicAbilityTriggers; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NonReplicatedInstances; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReplicatedInstances; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayEffectHandle[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayAbilitySpec, Handle) == 16, "Offset mismatch for FGameplayAbilitySpec::Handle");
static_assert(offsetof(FGameplayAbilitySpec, ability) == 40, "Offset mismatch for FGameplayAbilitySpec::ability");
static_assert(offsetof(FGameplayAbilitySpec, Level) == 48, "Offset mismatch for FGameplayAbilitySpec::Level");
static_assert(offsetof(FGameplayAbilitySpec, InputID) == 52, "Offset mismatch for FGameplayAbilitySpec::InputID");
static_assert(offsetof(FGameplayAbilitySpec, SourceObject) == 56, "Offset mismatch for FGameplayAbilitySpec::SourceObject");
static_assert(offsetof(FGameplayAbilitySpec, ActiveCount) == 64, "Offset mismatch for FGameplayAbilitySpec::ActiveCount");
static_assert(offsetof(FGameplayAbilitySpec, InputPressed) == 65, "Offset mismatch for FGameplayAbilitySpec::InputPressed");
static_assert(offsetof(FGameplayAbilitySpec, ActivationInfo) == 88, "Offset mismatch for FGameplayAbilitySpec::ActivationInfo");
static_assert(offsetof(FGameplayAbilitySpec, DynamicAbilityTags) == 112, "Offset mismatch for FGameplayAbilitySpec::DynamicAbilityTags");
static_assert(offsetof(FGameplayAbilitySpec, DynamicAbilityTriggers) == 144, "Offset mismatch for FGameplayAbilitySpec::DynamicAbilityTriggers");
static_assert(offsetof(FGameplayAbilitySpec, NonReplicatedInstances) == 160, "Offset mismatch for FGameplayAbilitySpec::NonReplicatedInstances");
static_assert(offsetof(FGameplayAbilitySpec, ReplicatedInstances) == 176, "Offset mismatch for FGameplayAbilitySpec::ReplicatedInstances");
static_assert(offsetof(FGameplayAbilitySpec, GameplayEffectHandle) == 192, "Offset mismatch for FGameplayAbilitySpec::GameplayEffectHandle");

// /Script/GameplayAbilities.GameplayAbilitySpecConfig
// Kind: ScriptStruct; super: none
struct FGameplayAbilitySpecConfig
{
public:
    void* ability; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LevelScalableFloat[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::int32_t InputID; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t RemovalPolicy; // 0x0034 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayAbilitySpecConfig, ability) == 0, "Offset mismatch for FGameplayAbilitySpecConfig::ability");
static_assert(offsetof(FGameplayAbilitySpecConfig, LevelScalableFloat) == 8, "Offset mismatch for FGameplayAbilitySpecConfig::LevelScalableFloat");
static_assert(offsetof(FGameplayAbilitySpecConfig, InputID) == 48, "Offset mismatch for FGameplayAbilitySpecConfig::InputID");
static_assert(offsetof(FGameplayAbilitySpecConfig, RemovalPolicy) == 52, "Offset mismatch for FGameplayAbilitySpecConfig::RemovalPolicy");

// /Script/GameplayAbilities.GameplayAbilitySpecContainer
// Kind: ScriptStruct; super: FastArraySerializer
struct FGameplayAbilitySpecContainer
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayAbilitySpecContainer, Items) == 72, "Offset mismatch for FGameplayAbilitySpecContainer::Items");
static_assert(offsetof(FGameplayAbilitySpecContainer, Owner) == 88, "Offset mismatch for FGameplayAbilitySpecContainer::Owner");

// /Script/GameplayAbilities.GameplayAbilitySpecDef
// Kind: ScriptStruct; super: none
struct FGameplayAbilitySpecDef
{
public:
    void* ability; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t LevelScalableFloat[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::int32_t InputID; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t RemovalPolicy; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0035
    TWeakObjectPtr<void> SourceObject; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0040
    std::uint8_t AssignedHandle[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayAbilitySpecDef, ability) == 0, "Offset mismatch for FGameplayAbilitySpecDef::ability");
static_assert(offsetof(FGameplayAbilitySpecDef, LevelScalableFloat) == 8, "Offset mismatch for FGameplayAbilitySpecDef::LevelScalableFloat");
static_assert(offsetof(FGameplayAbilitySpecDef, InputID) == 48, "Offset mismatch for FGameplayAbilitySpecDef::InputID");
static_assert(offsetof(FGameplayAbilitySpecDef, RemovalPolicy) == 52, "Offset mismatch for FGameplayAbilitySpecDef::RemovalPolicy");
static_assert(offsetof(FGameplayAbilitySpecDef, SourceObject) == 56, "Offset mismatch for FGameplayAbilitySpecDef::SourceObject");
static_assert(offsetof(FGameplayAbilitySpecDef, AssignedHandle) == 80, "Offset mismatch for FGameplayAbilitySpecDef::AssignedHandle");

// /Script/GameplayAbilities.GameplayAbilitySpecHandle
// Kind: ScriptStruct; super: GloballyUniqueHandleBase
struct FGameplayAbilitySpecHandle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t Handle; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGameplayAbilitySpecHandle, Handle) == 16, "Offset mismatch for FGameplayAbilitySpecHandle::Handle");

// /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// Kind: ScriptStruct; super: none
struct FGameplayAbilitySpecHandleAndPredictionKey
{
public:
    std::uint8_t AbilityHandle[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::int32_t PredictionKeyAtCreation; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, AbilityHandle) == 0, "Offset mismatch for FGameplayAbilitySpecHandleAndPredictionKey::AbilityHandle");
static_assert(offsetof(FGameplayAbilitySpecHandleAndPredictionKey, PredictionKeyAtCreation) == 24, "Offset mismatch for FGameplayAbilitySpecHandleAndPredictionKey::PredictionKeyAtCreation");

// /Script/GameplayAbilities.GameplayAbilityTargetData
// Kind: ScriptStruct; super: none
struct FGameplayAbilityTargetData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
// Kind: ScriptStruct; super: none
struct FGameplayAbilityTargetDataHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FGameplayAbilityTargetData_ActorArray
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourceLocation[0x90]; // 0x0010 (Size: 0x90, Type: StructProperty)
    TArray<void*> TargetActorArray; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, SourceLocation) == 16, "Offset mismatch for FGameplayAbilityTargetData_ActorArray::SourceLocation");
static_assert(offsetof(FGameplayAbilityTargetData_ActorArray, TargetActorArray) == 160, "Offset mismatch for FGameplayAbilityTargetData_ActorArray::TargetActorArray");

// /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FGameplayAbilityTargetData_LocationInfo
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourceLocation[0x90]; // 0x0010 (Size: 0x90, Type: StructProperty)
    std::uint8_t TargetLocation[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, SourceLocation) == 16, "Offset mismatch for FGameplayAbilityTargetData_LocationInfo::SourceLocation");
static_assert(offsetof(FGameplayAbilityTargetData_LocationInfo, TargetLocation) == 160, "Offset mismatch for FGameplayAbilityTargetData_LocationInfo::TargetLocation");

// /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FGameplayAbilityTargetData_SingleTargetHit
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t HitResult[0xF8]; // 0x0008 (Size: 0xF8, Type: StructProperty)
    std::uint8_t bHitReplaced; // 0x0100 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, HitResult) == 8, "Offset mismatch for FGameplayAbilityTargetData_SingleTargetHit::HitResult");
static_assert(offsetof(FGameplayAbilityTargetData_SingleTargetHit, bHitReplaced) == 256, "Offset mismatch for FGameplayAbilityTargetData_SingleTargetHit::bHitReplaced");

// /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
// Kind: ScriptStruct; super: none
struct FGameplayAbilityTargetingLocationInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SourceActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* SourceComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* SourceAbility; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LiteralTransform[0x60]; // 0x0020 (Size: 0x60, Type: StructProperty)
    std::uint8_t SourceSocketName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t LocationType; // 0x0084 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceActor) == 8, "Offset mismatch for FGameplayAbilityTargetingLocationInfo::SourceActor");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceComponent) == 16, "Offset mismatch for FGameplayAbilityTargetingLocationInfo::SourceComponent");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceAbility) == 24, "Offset mismatch for FGameplayAbilityTargetingLocationInfo::SourceAbility");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LiteralTransform) == 32, "Offset mismatch for FGameplayAbilityTargetingLocationInfo::LiteralTransform");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, SourceSocketName) == 128, "Offset mismatch for FGameplayAbilityTargetingLocationInfo::SourceSocketName");
static_assert(offsetof(FGameplayAbilityTargetingLocationInfo, LocationType) == 132, "Offset mismatch for FGameplayAbilityTargetingLocationInfo::LocationType");

// /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FGameplayAbilityTargetingLocationInfoNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayAttribute
// Kind: ScriptStruct; super: none
struct FGameplayAttribute
{
public:
    FString AttributeName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Attribute[0x20]; // 0x0010 (Size: 0x20, Type: FieldPathProperty)
    void* AttributeOwner; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayAttribute, AttributeName) == 0, "Offset mismatch for FGameplayAttribute::AttributeName");
static_assert(offsetof(FGameplayAttribute, Attribute) == 16, "Offset mismatch for FGameplayAttribute::Attribute");
static_assert(offsetof(FGameplayAttribute, AttributeOwner) == 48, "Offset mismatch for FGameplayAttribute::AttributeOwner");

// /Script/GameplayAbilities.GameplayAttributeData
// Kind: ScriptStruct; super: none
struct FGameplayAttributeData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float BaseValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CurrentValue; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayAttributeData, BaseValue) == 8, "Offset mismatch for FGameplayAttributeData::BaseValue");
static_assert(offsetof(FGameplayAttributeData, CurrentValue) == 12, "Offset mismatch for FGameplayAttributeData::CurrentValue");

// /Script/GameplayAbilities.GameplayCueNotifyActorArray
// Kind: ScriptStruct; super: none
struct FGameplayCueNotifyActorArray
{
public:
    TArray<void*> Actors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayCueNotifyActorArray, Actors) == 0, "Offset mismatch for FGameplayCueNotifyActorArray::Actors");

// /Script/GameplayAbilities.GameplayCueNotifyData
// Kind: ScriptStruct; super: none
struct FGameplayCueNotifyData
{
public:
    std::uint8_t GameplayCueTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayCueNotifyObj[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    void* LoadedGameplayCueClass; // 0x0020 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FGameplayCueNotifyData, GameplayCueTag) == 0, "Offset mismatch for FGameplayCueNotifyData::GameplayCueTag");
static_assert(offsetof(FGameplayCueNotifyData, GameplayCueNotifyObj) == 8, "Offset mismatch for FGameplayCueNotifyData::GameplayCueNotifyObj");
static_assert(offsetof(FGameplayCueNotifyData, LoadedGameplayCueClass) == 32, "Offset mismatch for FGameplayCueNotifyData::LoadedGameplayCueClass");

// /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_BurstEffects
{
public:
    TArray<void*> BurstParticles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BurstSounds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BurstCameraShake[0x98]; // 0x0020 (Size: 0x98, Type: StructProperty)
    std::uint8_t BurstCameraLensEffect[0x90]; // 0x00B8 (Size: 0x90, Type: StructProperty)
    std::uint8_t BurstForceFeedback[0x98]; // 0x0148 (Size: 0x98, Type: StructProperty)
    std::uint8_t BurstDevicePropertyEffect[0x10]; // 0x01E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BurstDecal[0x1]; // 0x01F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstParticles) == 0, "Offset mismatch for FGameplayCueNotify_BurstEffects::BurstParticles");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstSounds) == 16, "Offset mismatch for FGameplayCueNotify_BurstEffects::BurstSounds");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstCameraShake) == 32, "Offset mismatch for FGameplayCueNotify_BurstEffects::BurstCameraShake");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstCameraLensEffect) == 184, "Offset mismatch for FGameplayCueNotify_BurstEffects::BurstCameraLensEffect");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstForceFeedback) == 328, "Offset mismatch for FGameplayCueNotify_BurstEffects::BurstForceFeedback");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstDevicePropertyEffect) == 480, "Offset mismatch for FGameplayCueNotify_BurstEffects::BurstDevicePropertyEffect");
static_assert(offsetof(FGameplayCueNotify_BurstEffects, BurstDecal) == 496, "Offset mismatch for FGameplayCueNotify_BurstEffects::BurstDecal");

// /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_CameraLensEffectInfo
{
public:
    std::uint8_t SpawnConditionOverride[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t PlacementInfoOverride[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    void* CameraLensEffect; // 0x0078 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bOverridePlacementInfo; // 0x0080 (Size: 0x1, Type: BoolProperty)
    // 0x0080 BoolProperty bOverrideSpawnCondition (shared storage)
    // 0x0080 BoolProperty bPlayInWorld (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0081
    float WorldInnerRadius; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float WorldOuterRadius; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, SpawnConditionOverride) == 0, "Offset mismatch for FGameplayCueNotify_CameraLensEffectInfo::SpawnConditionOverride");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, PlacementInfoOverride) == 56, "Offset mismatch for FGameplayCueNotify_CameraLensEffectInfo::PlacementInfoOverride");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, CameraLensEffect) == 120, "Offset mismatch for FGameplayCueNotify_CameraLensEffectInfo::CameraLensEffect");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, bOverridePlacementInfo) == 128, "Offset mismatch for FGameplayCueNotify_CameraLensEffectInfo::bOverridePlacementInfo");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, WorldInnerRadius) == 132, "Offset mismatch for FGameplayCueNotify_CameraLensEffectInfo::WorldInnerRadius");
static_assert(offsetof(FGameplayCueNotify_CameraLensEffectInfo, WorldOuterRadius) == 136, "Offset mismatch for FGameplayCueNotify_CameraLensEffectInfo::WorldOuterRadius");

// /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_CameraShakeInfo
{
public:
    std::uint8_t SpawnConditionOverride[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t PlacementInfoOverride[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    void* CameraShake; // 0x0078 (Size: 0x8, Type: ClassProperty)
    float ShakeScale; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Playspace; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0085
    std::uint8_t bOverridePlacementInfo; // 0x0088 (Size: 0x1, Type: BoolProperty)
    // 0x0088 BoolProperty bOverrideSpawnCondition (shared storage)
    // 0x0088 BoolProperty bPlayInWorld (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    float WorldInnerRadius; // 0x008C (Size: 0x4, Type: FloatProperty)
    float WorldOuterRadius; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float WorldFalloffExponent; // 0x0094 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, SpawnConditionOverride) == 0, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::SpawnConditionOverride");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, PlacementInfoOverride) == 56, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::PlacementInfoOverride");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, CameraShake) == 120, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::CameraShake");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, ShakeScale) == 128, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::ShakeScale");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, Playspace) == 132, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::Playspace");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, bOverridePlacementInfo) == 136, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::bOverridePlacementInfo");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, WorldInnerRadius) == 140, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::WorldInnerRadius");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, WorldOuterRadius) == 144, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::WorldOuterRadius");
static_assert(offsetof(FGameplayCueNotify_CameraShakeInfo, WorldFalloffExponent) == 148, "Offset mismatch for FGameplayCueNotify_CameraShakeInfo::WorldFalloffExponent");

// /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_DecalInfo
{
public:
    std::uint8_t SpawnConditionOverride[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t PlacementInfoOverride[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    void* DecalMaterial; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DecalSize[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideFadeOut; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bOverridePlacementInfo (shared storage)
    // 0x0098 BoolProperty bOverrideSpawnCondition (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0099
    float FadeOutStartDelay; // 0x009C (Size: 0x4, Type: FloatProperty)
    float FadeOutDuration; // 0x00A0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayCueNotify_DecalInfo, SpawnConditionOverride) == 0, "Offset mismatch for FGameplayCueNotify_DecalInfo::SpawnConditionOverride");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, PlacementInfoOverride) == 56, "Offset mismatch for FGameplayCueNotify_DecalInfo::PlacementInfoOverride");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, DecalMaterial) == 120, "Offset mismatch for FGameplayCueNotify_DecalInfo::DecalMaterial");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, DecalSize) == 128, "Offset mismatch for FGameplayCueNotify_DecalInfo::DecalSize");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, bOverrideFadeOut) == 152, "Offset mismatch for FGameplayCueNotify_DecalInfo::bOverrideFadeOut");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, FadeOutStartDelay) == 156, "Offset mismatch for FGameplayCueNotify_DecalInfo::FadeOutStartDelay");
static_assert(offsetof(FGameplayCueNotify_DecalInfo, FadeOutDuration) == 160, "Offset mismatch for FGameplayCueNotify_DecalInfo::FadeOutDuration");

// /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_ForceFeedbackInfo
{
public:
    std::uint8_t SpawnConditionOverride[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t PlacementInfoOverride[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    void* ForceFeedbackEffect; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ForceFeedbackTag[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsLooping; // 0x0084 (Size: 0x1, Type: BoolProperty)
    // 0x0084 BoolProperty bOverridePlacementInfo (shared storage)
    // 0x0084 BoolProperty bOverrideSpawnCondition (shared storage)
    // 0x0084 BoolProperty bPlayInWorld (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0085
    float WorldIntensity; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    void* WorldAttenuation; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, SpawnConditionOverride) == 0, "Offset mismatch for FGameplayCueNotify_ForceFeedbackInfo::SpawnConditionOverride");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, PlacementInfoOverride) == 56, "Offset mismatch for FGameplayCueNotify_ForceFeedbackInfo::PlacementInfoOverride");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackEffect) == 120, "Offset mismatch for FGameplayCueNotify_ForceFeedbackInfo::ForceFeedbackEffect");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, ForceFeedbackTag) == 128, "Offset mismatch for FGameplayCueNotify_ForceFeedbackInfo::ForceFeedbackTag");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, bIsLooping) == 132, "Offset mismatch for FGameplayCueNotify_ForceFeedbackInfo::bIsLooping");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, WorldIntensity) == 136, "Offset mismatch for FGameplayCueNotify_ForceFeedbackInfo::WorldIntensity");
static_assert(offsetof(FGameplayCueNotify_ForceFeedbackInfo, WorldAttenuation) == 144, "Offset mismatch for FGameplayCueNotify_ForceFeedbackInfo::WorldAttenuation");

// /Script/GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_InputDevicePropertyInfo
{
public:
    TArray<void*> DeviceProperties; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayCueNotify_InputDevicePropertyInfo, DeviceProperties) == 0, "Offset mismatch for FGameplayCueNotify_InputDevicePropertyInfo::DeviceProperties");

// /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_LoopingEffects
{
public:
    TArray<void*> LoopingParticles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoopingSounds; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LoopingCameraShake[0x98]; // 0x0020 (Size: 0x98, Type: StructProperty)
    std::uint8_t LoopingCameraLensEffect[0x90]; // 0x00B8 (Size: 0x90, Type: StructProperty)
    std::uint8_t LoopingForceFeedback[0x98]; // 0x0148 (Size: 0x98, Type: StructProperty)
    std::uint8_t LoopingInputDevicePropertyEffect[0x1]; // 0x01E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingParticles) == 0, "Offset mismatch for FGameplayCueNotify_LoopingEffects::LoopingParticles");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingSounds) == 16, "Offset mismatch for FGameplayCueNotify_LoopingEffects::LoopingSounds");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingCameraShake) == 32, "Offset mismatch for FGameplayCueNotify_LoopingEffects::LoopingCameraShake");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingCameraLensEffect) == 184, "Offset mismatch for FGameplayCueNotify_LoopingEffects::LoopingCameraLensEffect");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingForceFeedback) == 328, "Offset mismatch for FGameplayCueNotify_LoopingEffects::LoopingForceFeedback");
static_assert(offsetof(FGameplayCueNotify_LoopingEffects, LoopingInputDevicePropertyEffect) == 480, "Offset mismatch for FGameplayCueNotify_LoopingEffects::LoopingInputDevicePropertyEffect");

// /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_ParticleInfo
{
public:
    std::uint8_t SpawnConditionOverride[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t PlacementInfoOverride[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    void* NiagaraSystem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCastShadow; // 0x0080 (Size: 0x1, Type: BoolProperty)
    // 0x0080 BoolProperty bOverridePlacementInfo (shared storage)
    // 0x0080 BoolProperty bOverrideSpawnCondition (shared storage)
};

static_assert(offsetof(FGameplayCueNotify_ParticleInfo, SpawnConditionOverride) == 0, "Offset mismatch for FGameplayCueNotify_ParticleInfo::SpawnConditionOverride");
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, PlacementInfoOverride) == 56, "Offset mismatch for FGameplayCueNotify_ParticleInfo::PlacementInfoOverride");
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, NiagaraSystem) == 120, "Offset mismatch for FGameplayCueNotify_ParticleInfo::NiagaraSystem");
static_assert(offsetof(FGameplayCueNotify_ParticleInfo, bCastShadow) == 128, "Offset mismatch for FGameplayCueNotify_ParticleInfo::bCastShadow");

// /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_PlacementInfo
{
public:
    std::uint8_t SocketName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttachPolicy; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachmentRule; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint8_t bOverrideRotation; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bOverrideScale (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t RotationOverride[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScaleOverride[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayCueNotify_PlacementInfo, SocketName) == 0, "Offset mismatch for FGameplayCueNotify_PlacementInfo::SocketName");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, AttachPolicy) == 4, "Offset mismatch for FGameplayCueNotify_PlacementInfo::AttachPolicy");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, AttachmentRule) == 5, "Offset mismatch for FGameplayCueNotify_PlacementInfo::AttachmentRule");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, bOverrideRotation) == 8, "Offset mismatch for FGameplayCueNotify_PlacementInfo::bOverrideRotation");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, RotationOverride) == 16, "Offset mismatch for FGameplayCueNotify_PlacementInfo::RotationOverride");
static_assert(offsetof(FGameplayCueNotify_PlacementInfo, ScaleOverride) == 40, "Offset mismatch for FGameplayCueNotify_PlacementInfo::ScaleOverride");

// /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_SoundInfo
{
public:
    std::uint8_t SpawnConditionOverride[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t PlacementInfoOverride[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    void* Sound; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SoundCue; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    float LoopingFadeOutDuration; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float LoopingFadeVolumeLevel; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SoundParameterInterfaceInfo[0x4]; // 0x0090 (Size: 0x4, Type: StructProperty)
    std::uint8_t bOverridePlacementInfo; // 0x0094 (Size: 0x1, Type: BoolProperty)
    // 0x0094 BoolProperty bOverrideSpawnCondition (shared storage)
    // 0x0094 BoolProperty bUseSoundParameterInterface (shared storage)
};

static_assert(offsetof(FGameplayCueNotify_SoundInfo, SpawnConditionOverride) == 0, "Offset mismatch for FGameplayCueNotify_SoundInfo::SpawnConditionOverride");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, PlacementInfoOverride) == 56, "Offset mismatch for FGameplayCueNotify_SoundInfo::PlacementInfoOverride");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, Sound) == 120, "Offset mismatch for FGameplayCueNotify_SoundInfo::Sound");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SoundCue) == 128, "Offset mismatch for FGameplayCueNotify_SoundInfo::SoundCue");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, LoopingFadeOutDuration) == 136, "Offset mismatch for FGameplayCueNotify_SoundInfo::LoopingFadeOutDuration");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, LoopingFadeVolumeLevel) == 140, "Offset mismatch for FGameplayCueNotify_SoundInfo::LoopingFadeVolumeLevel");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, SoundParameterInterfaceInfo) == 144, "Offset mismatch for FGameplayCueNotify_SoundInfo::SoundParameterInterfaceInfo");
static_assert(offsetof(FGameplayCueNotify_SoundInfo, bOverridePlacementInfo) == 148, "Offset mismatch for FGameplayCueNotify_SoundInfo::bOverridePlacementInfo");

// /Script/GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_SoundParameterInterfaceInfo
{
public:
    FName StopTriggerName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGameplayCueNotify_SoundParameterInterfaceInfo, StopTriggerName) == 0, "Offset mismatch for FGameplayCueNotify_SoundParameterInterfaceInfo::StopTriggerName");

// /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_SpawnCondition
{
public:
    std::uint8_t LocallyControlledSource; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LocallyControlledPolicy; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float ChanceToPlay; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TArray<void*> AllowedSurfaceTypes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0018
    TArray<void*> RejectedSurfaceTypes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayCueNotify_SpawnCondition, LocallyControlledSource) == 0, "Offset mismatch for FGameplayCueNotify_SpawnCondition::LocallyControlledSource");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, LocallyControlledPolicy) == 1, "Offset mismatch for FGameplayCueNotify_SpawnCondition::LocallyControlledPolicy");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, ChanceToPlay) == 4, "Offset mismatch for FGameplayCueNotify_SpawnCondition::ChanceToPlay");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, AllowedSurfaceTypes) == 8, "Offset mismatch for FGameplayCueNotify_SpawnCondition::AllowedSurfaceTypes");
static_assert(offsetof(FGameplayCueNotify_SpawnCondition, RejectedSurfaceTypes) == 32, "Offset mismatch for FGameplayCueNotify_SpawnCondition::RejectedSurfaceTypes");

// /Script/GameplayAbilities.GameplayCueNotify_SpawnResult
// Kind: ScriptStruct; super: none
struct FGameplayCueNotify_SpawnResult
{
public:
    TArray<void*> FxSystemComponents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AudioComponents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CameraShakes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CameraLensEffects; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* ForceFeedbackComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* ForceFeedbackTargetPC; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* DecalComponent; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayCueNotify_SpawnResult, FxSystemComponents) == 0, "Offset mismatch for FGameplayCueNotify_SpawnResult::FxSystemComponents");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, AudioComponents) == 16, "Offset mismatch for FGameplayCueNotify_SpawnResult::AudioComponents");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, CameraShakes) == 32, "Offset mismatch for FGameplayCueNotify_SpawnResult::CameraShakes");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, CameraLensEffects) == 48, "Offset mismatch for FGameplayCueNotify_SpawnResult::CameraLensEffects");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, ForceFeedbackComponent) == 64, "Offset mismatch for FGameplayCueNotify_SpawnResult::ForceFeedbackComponent");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, ForceFeedbackTargetPC) == 72, "Offset mismatch for FGameplayCueNotify_SpawnResult::ForceFeedbackTargetPC");
static_assert(offsetof(FGameplayCueNotify_SpawnResult, DecalComponent) == 80, "Offset mismatch for FGameplayCueNotify_SpawnResult::DecalComponent");

// /Script/GameplayAbilities.GameplayCueObjectLibrary
// Kind: ScriptStruct; super: none
struct FGameplayCueObjectLibrary
{
public:
    TArray<void*> Paths; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x20]; // 0x0010
    void* ActorObjectLibrary; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* StaticObjectLibrary; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* CueSet; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0048
    std::uint8_t bShouldSyncScan; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldAsyncLoad; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSyncLoad; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasBeenInitialized; // 0x004F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayCueObjectLibrary, Paths) == 0, "Offset mismatch for FGameplayCueObjectLibrary::Paths");
static_assert(offsetof(FGameplayCueObjectLibrary, ActorObjectLibrary) == 48, "Offset mismatch for FGameplayCueObjectLibrary::ActorObjectLibrary");
static_assert(offsetof(FGameplayCueObjectLibrary, StaticObjectLibrary) == 56, "Offset mismatch for FGameplayCueObjectLibrary::StaticObjectLibrary");
static_assert(offsetof(FGameplayCueObjectLibrary, CueSet) == 64, "Offset mismatch for FGameplayCueObjectLibrary::CueSet");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldSyncScan) == 76, "Offset mismatch for FGameplayCueObjectLibrary::bShouldSyncScan");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldAsyncLoad) == 77, "Offset mismatch for FGameplayCueObjectLibrary::bShouldAsyncLoad");
static_assert(offsetof(FGameplayCueObjectLibrary, bShouldSyncLoad) == 78, "Offset mismatch for FGameplayCueObjectLibrary::bShouldSyncLoad");
static_assert(offsetof(FGameplayCueObjectLibrary, bHasBeenInitialized) == 79, "Offset mismatch for FGameplayCueObjectLibrary::bHasBeenInitialized");

// /Script/GameplayAbilities.GameplayCueParameters
// Kind: ScriptStruct; super: none
struct FGameplayCueParameters
{
public:
    float NormalizedMagnitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RawMagnitude; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EffectContext[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t MatchedTagName[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t OriginalTag[0x4]; // 0x0024 (Size: 0x4, Type: StructProperty)
    std::uint8_t AggregatedSourceTags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t AggregatedTargetTags[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Instigator; // 0x0098 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> EffectCauser; // 0x00A0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> SourceObject; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PhysicalMaterial; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t GameplayEffectLevel; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::int32_t AbilityLevel; // 0x00BC (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> TargetAttachComponent; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bReplicateLocationWhenUsingMinimalRepProxy; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayCueParameters, NormalizedMagnitude) == 0, "Offset mismatch for FGameplayCueParameters::NormalizedMagnitude");
static_assert(offsetof(FGameplayCueParameters, RawMagnitude) == 4, "Offset mismatch for FGameplayCueParameters::RawMagnitude");
static_assert(offsetof(FGameplayCueParameters, EffectContext) == 8, "Offset mismatch for FGameplayCueParameters::EffectContext");
static_assert(offsetof(FGameplayCueParameters, MatchedTagName) == 32, "Offset mismatch for FGameplayCueParameters::MatchedTagName");
static_assert(offsetof(FGameplayCueParameters, OriginalTag) == 36, "Offset mismatch for FGameplayCueParameters::OriginalTag");
static_assert(offsetof(FGameplayCueParameters, AggregatedSourceTags) == 40, "Offset mismatch for FGameplayCueParameters::AggregatedSourceTags");
static_assert(offsetof(FGameplayCueParameters, AggregatedTargetTags) == 72, "Offset mismatch for FGameplayCueParameters::AggregatedTargetTags");
static_assert(offsetof(FGameplayCueParameters, Location) == 104, "Offset mismatch for FGameplayCueParameters::Location");
static_assert(offsetof(FGameplayCueParameters, Normal) == 128, "Offset mismatch for FGameplayCueParameters::Normal");
static_assert(offsetof(FGameplayCueParameters, Instigator) == 152, "Offset mismatch for FGameplayCueParameters::Instigator");
static_assert(offsetof(FGameplayCueParameters, EffectCauser) == 160, "Offset mismatch for FGameplayCueParameters::EffectCauser");
static_assert(offsetof(FGameplayCueParameters, SourceObject) == 168, "Offset mismatch for FGameplayCueParameters::SourceObject");
static_assert(offsetof(FGameplayCueParameters, PhysicalMaterial) == 176, "Offset mismatch for FGameplayCueParameters::PhysicalMaterial");
static_assert(offsetof(FGameplayCueParameters, GameplayEffectLevel) == 184, "Offset mismatch for FGameplayCueParameters::GameplayEffectLevel");
static_assert(offsetof(FGameplayCueParameters, AbilityLevel) == 188, "Offset mismatch for FGameplayCueParameters::AbilityLevel");
static_assert(offsetof(FGameplayCueParameters, TargetAttachComponent) == 192, "Offset mismatch for FGameplayCueParameters::TargetAttachComponent");
static_assert(offsetof(FGameplayCueParameters, bReplicateLocationWhenUsingMinimalRepProxy) == 200, "Offset mismatch for FGameplayCueParameters::bReplicateLocationWhenUsingMinimalRepProxy");

// /Script/GameplayAbilities.GameplayCuePendingExecute
// Kind: ScriptStruct; super: none
struct FGameplayCuePendingExecute
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t PredictionKey[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t PayLoadType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* OwningComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FromSpec[0x78]; // 0x0038 (Size: 0x78, Type: StructProperty)
    std::uint8_t CueParameters[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayCuePendingExecute, PredictionKey) == 24, "Offset mismatch for FGameplayCuePendingExecute::PredictionKey");
static_assert(offsetof(FGameplayCuePendingExecute, PayLoadType) == 40, "Offset mismatch for FGameplayCuePendingExecute::PayLoadType");
static_assert(offsetof(FGameplayCuePendingExecute, OwningComponent) == 48, "Offset mismatch for FGameplayCuePendingExecute::OwningComponent");
static_assert(offsetof(FGameplayCuePendingExecute, FromSpec) == 56, "Offset mismatch for FGameplayCuePendingExecute::FromSpec");
static_assert(offsetof(FGameplayCuePendingExecute, CueParameters) == 176, "Offset mismatch for FGameplayCuePendingExecute::CueParameters");

// /Script/GameplayAbilities.GameplayCueTag
// Kind: ScriptStruct; super: none
struct FGameplayCueTag
{
public:
    std::uint8_t GameplayCueTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayCueTag, GameplayCueTag) == 0, "Offset mismatch for FGameplayCueTag::GameplayCueTag");

// /Script/GameplayAbilities.GameplayCueTranslationLink
// Kind: ScriptStruct; super: none
struct FGameplayCueTranslationLink
{
public:
    void* RulesCDO; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayCueTranslationLink, RulesCDO) == 0, "Offset mismatch for FGameplayCueTranslationLink::RulesCDO");

// /Script/GameplayAbilities.GameplayCueTranslationManager
// Kind: ScriptStruct; super: none
struct FGameplayCueTranslationManager
{
public:
    TArray<void*> TranslationLUT; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> TranslationNameToIndexMap; // 0x0010 (Size: 0x10, Type: MapProperty)
    void* TagManager; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayCueTranslationManager, TranslationLUT) == 0, "Offset mismatch for FGameplayCueTranslationManager::TranslationLUT");
static_assert(offsetof(FGameplayCueTranslationManager, TranslationNameToIndexMap) == 16, "Offset mismatch for FGameplayCueTranslationManager::TranslationNameToIndexMap");
static_assert(offsetof(FGameplayCueTranslationManager, TagManager) == 32, "Offset mismatch for FGameplayCueTranslationManager::TagManager");

// /Script/GameplayAbilities.GameplayCueTranslatorNode
// Kind: ScriptStruct; super: none
struct FGameplayCueTranslatorNode
{
public:
    TArray<void*> Links; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedIndex[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t CachedGameplayTag[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    FName CachedGameplayTagName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FGameplayCueTranslatorNode, Links) == 0, "Offset mismatch for FGameplayCueTranslatorNode::Links");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedIndex) == 16, "Offset mismatch for FGameplayCueTranslatorNode::CachedIndex");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTag) == 20, "Offset mismatch for FGameplayCueTranslatorNode::CachedGameplayTag");
static_assert(offsetof(FGameplayCueTranslatorNode, CachedGameplayTagName) == 24, "Offset mismatch for FGameplayCueTranslatorNode::CachedGameplayTagName");

// /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
// Kind: ScriptStruct; super: none
struct FGameplayCueTranslatorNodeIndex
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGameplayCueTranslatorNodeIndex, Index) == 0, "Offset mismatch for FGameplayCueTranslatorNodeIndex::Index");

// /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// Kind: ScriptStruct; super: none
struct FGameplayEffectAttributeCaptureDefinition
{
public:
    std::uint8_t AttributeToCapture[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t AttributeSource; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSnapshot; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture) == 0, "Offset mismatch for FGameplayEffectAttributeCaptureDefinition::AttributeToCapture");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, AttributeSource) == 56, "Offset mismatch for FGameplayEffectAttributeCaptureDefinition::AttributeSource");
static_assert(offsetof(FGameplayEffectAttributeCaptureDefinition, bSnapshot) == 57, "Offset mismatch for FGameplayEffectAttributeCaptureDefinition::bSnapshot");

// /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
// Kind: ScriptStruct; super: none
struct FGameplayEffectAttributeCaptureSpec
{
public:
    std::uint8_t BackingDefinition[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayEffectAttributeCaptureSpec, BackingDefinition) == 0, "Offset mismatch for FGameplayEffectAttributeCaptureSpec::BackingDefinition");

// /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// Kind: ScriptStruct; super: none
struct FGameplayEffectAttributeCaptureSpecContainer
{
public:
    TArray<void*> SourceAttributes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TargetAttributes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasNonSnapshottedAttributes; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, SourceAttributes) == 0, "Offset mismatch for FGameplayEffectAttributeCaptureSpecContainer::SourceAttributes");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, TargetAttributes) == 16, "Offset mismatch for FGameplayEffectAttributeCaptureSpecContainer::TargetAttributes");
static_assert(offsetof(FGameplayEffectAttributeCaptureSpecContainer, bHasNonSnapshottedAttributes) == 32, "Offset mismatch for FGameplayEffectAttributeCaptureSpecContainer::bHasNonSnapshottedAttributes");

// /Script/GameplayAbilities.GameplayEffectContext
// Kind: ScriptStruct; super: none
struct FGameplayEffectContext
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> Instigator; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> EffectCauser; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AbilityCDO; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> AbilityInstanceNotReplicated; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t AbilityLevel; // 0x0028 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> SourceObject; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InstigatorAbilitySystemComponent; // 0x0034 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    TArray<void*> Actors; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0050
    std::uint8_t WorldOrigin[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasWorldOrigin; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty bReplicateEffectCauser (shared storage)
    // 0x0078 BoolProperty bReplicateInstigator (shared storage)
    // 0x0078 BoolProperty bReplicateSourceObject (shared storage)
};

static_assert(offsetof(FGameplayEffectContext, Instigator) == 8, "Offset mismatch for FGameplayEffectContext::Instigator");
static_assert(offsetof(FGameplayEffectContext, EffectCauser) == 16, "Offset mismatch for FGameplayEffectContext::EffectCauser");
static_assert(offsetof(FGameplayEffectContext, AbilityCDO) == 24, "Offset mismatch for FGameplayEffectContext::AbilityCDO");
static_assert(offsetof(FGameplayEffectContext, AbilityInstanceNotReplicated) == 32, "Offset mismatch for FGameplayEffectContext::AbilityInstanceNotReplicated");
static_assert(offsetof(FGameplayEffectContext, AbilityLevel) == 40, "Offset mismatch for FGameplayEffectContext::AbilityLevel");
static_assert(offsetof(FGameplayEffectContext, SourceObject) == 44, "Offset mismatch for FGameplayEffectContext::SourceObject");
static_assert(offsetof(FGameplayEffectContext, InstigatorAbilitySystemComponent) == 52, "Offset mismatch for FGameplayEffectContext::InstigatorAbilitySystemComponent");
static_assert(offsetof(FGameplayEffectContext, Actors) == 64, "Offset mismatch for FGameplayEffectContext::Actors");
static_assert(offsetof(FGameplayEffectContext, WorldOrigin) == 96, "Offset mismatch for FGameplayEffectContext::WorldOrigin");
static_assert(offsetof(FGameplayEffectContext, bHasWorldOrigin) == 120, "Offset mismatch for FGameplayEffectContext::bHasWorldOrigin");

// /Script/GameplayAbilities.GameplayEffectContextHandle
// Kind: ScriptStruct; super: none
struct FGameplayEffectContextHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
// Kind: ScriptStruct; super: PolymorphicStructNetSerializerConfig
struct FGameplayEffectContextHandleNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectContextNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FGameplayEffectContextNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectCue
// Kind: ScriptStruct; super: none
struct FGameplayEffectCue
{
public:
    std::uint8_t MagnitudeAttribute[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    float MinLevel; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float MaxLevel; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t GameplayCueTags[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayEffectCue, MagnitudeAttribute) == 0, "Offset mismatch for FGameplayEffectCue::MagnitudeAttribute");
static_assert(offsetof(FGameplayEffectCue, MinLevel) == 56, "Offset mismatch for FGameplayEffectCue::MinLevel");
static_assert(offsetof(FGameplayEffectCue, MaxLevel) == 60, "Offset mismatch for FGameplayEffectCue::MaxLevel");
static_assert(offsetof(FGameplayEffectCue, GameplayCueTags) == 64, "Offset mismatch for FGameplayEffectCue::GameplayCueTags");

// /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
// Kind: ScriptStruct; super: none
struct FGameplayEffectCustomExecutionOutput
{
public:
    TArray<void*> OutputModifiers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHandledGameplayCuesManually; // 0x0010 (Size: 0x1, Type: BoolProperty)
    // 0x0010 BoolProperty bHandledStackCountManually (shared storage)
    // 0x0010 BoolProperty bTriggerConditionalGameplayEffects (shared storage)
};

static_assert(offsetof(FGameplayEffectCustomExecutionOutput, OutputModifiers) == 0, "Offset mismatch for FGameplayEffectCustomExecutionOutput::OutputModifiers");
static_assert(offsetof(FGameplayEffectCustomExecutionOutput, bHandledGameplayCuesManually) == 16, "Offset mismatch for FGameplayEffectCustomExecutionOutput::bHandledGameplayCuesManually");

// /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
// Kind: ScriptStruct; super: none
struct FGameplayEffectCustomExecutionParameters
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectExecutionDefinition
// Kind: ScriptStruct; super: none
struct FGameplayEffectExecutionDefinition
{
public:
    void* CalculationClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PassedInTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    TArray<void*> CalculationModifiers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalGameplayEffects; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationClass) == 0, "Offset mismatch for FGameplayEffectExecutionDefinition::CalculationClass");
static_assert(offsetof(FGameplayEffectExecutionDefinition, PassedInTags) == 8, "Offset mismatch for FGameplayEffectExecutionDefinition::PassedInTags");
static_assert(offsetof(FGameplayEffectExecutionDefinition, CalculationModifiers) == 40, "Offset mismatch for FGameplayEffectExecutionDefinition::CalculationModifiers");
static_assert(offsetof(FGameplayEffectExecutionDefinition, ConditionalGameplayEffects) == 56, "Offset mismatch for FGameplayEffectExecutionDefinition::ConditionalGameplayEffects");

// /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// Kind: ScriptStruct; super: none
struct FGameplayEffectExecutionScopedModifierInfo
{
public:
    std::uint8_t CapturedAttribute[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t TransientAggregatorIdentifier[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t AggregatorType; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ModifierOp; // 0x0045 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0046
    std::uint8_t ModifierMagnitude[0x1D8]; // 0x0048 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t EvaluationChannelSettings[0x8]; // 0x0220 (Size: 0x8, Type: StructProperty)
    std::uint8_t SourceTags[0x88]; // 0x0228 (Size: 0x88, Type: StructProperty)
    std::uint8_t TargetTags[0x1]; // 0x02B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, CapturedAttribute) == 0, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::CapturedAttribute");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TransientAggregatorIdentifier) == 64, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::TransientAggregatorIdentifier");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, AggregatorType) == 68, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::AggregatorType");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierOp) == 69, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::ModifierOp");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, ModifierMagnitude) == 72, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::ModifierMagnitude");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, EvaluationChannelSettings) == 544, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::EvaluationChannelSettings");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, SourceTags) == 552, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::SourceTags");
static_assert(offsetof(FGameplayEffectExecutionScopedModifierInfo, TargetTags) == 688, "Offset mismatch for FGameplayEffectExecutionScopedModifierInfo::TargetTags");

// /Script/GameplayAbilities.GameplayEffectModifiedAttribute
// Kind: ScriptStruct; super: none
struct FGameplayEffectModifiedAttribute
{
public:
    std::uint8_t Attribute[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    float TotalMagnitude; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayEffectModifiedAttribute, Attribute) == 0, "Offset mismatch for FGameplayEffectModifiedAttribute::Attribute");
static_assert(offsetof(FGameplayEffectModifiedAttribute, TotalMagnitude) == 56, "Offset mismatch for FGameplayEffectModifiedAttribute::TotalMagnitude");

// /Script/GameplayAbilities.GameplayEffectModifierMagnitude
// Kind: ScriptStruct; super: none
struct FGameplayEffectModifierMagnitude
{
public:
    std::uint8_t MagnitudeCalculationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ScalableFloatMagnitude[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttributeBasedMagnitude[0x110]; // 0x0030 (Size: 0x110, Type: StructProperty)
    std::uint8_t CustomMagnitude[0x90]; // 0x0140 (Size: 0x90, Type: StructProperty)
    std::uint8_t SetByCallerMagnitude[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayEffectModifierMagnitude, MagnitudeCalculationType) == 0, "Offset mismatch for FGameplayEffectModifierMagnitude::MagnitudeCalculationType");
static_assert(offsetof(FGameplayEffectModifierMagnitude, ScalableFloatMagnitude) == 8, "Offset mismatch for FGameplayEffectModifierMagnitude::ScalableFloatMagnitude");
static_assert(offsetof(FGameplayEffectModifierMagnitude, AttributeBasedMagnitude) == 48, "Offset mismatch for FGameplayEffectModifierMagnitude::AttributeBasedMagnitude");
static_assert(offsetof(FGameplayEffectModifierMagnitude, CustomMagnitude) == 320, "Offset mismatch for FGameplayEffectModifierMagnitude::CustomMagnitude");
static_assert(offsetof(FGameplayEffectModifierMagnitude, SetByCallerMagnitude) == 464, "Offset mismatch for FGameplayEffectModifierMagnitude::SetByCallerMagnitude");

// /Script/GameplayAbilities.GameplayEffectQuery
// Kind: ScriptStruct; super: none
struct FGameplayEffectQuery
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FScriptDelegate CustomMatchDelegate_BP; // 0x0010 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t OwningTagQuery[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t EffectTagQuery[0x48]; // 0x0068 (Size: 0x48, Type: StructProperty)
    std::uint8_t SourceTagQuery[0x48]; // 0x00B0 (Size: 0x48, Type: StructProperty)
    std::uint8_t SourceAggregateTagQuery[0x48]; // 0x00F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t ModifyingAttribute[0x38]; // 0x0140 (Size: 0x38, Type: StructProperty)
    void* EffectSource; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* EffectDefinition; // 0x0180 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FGameplayEffectQuery, CustomMatchDelegate_BP) == 16, "Offset mismatch for FGameplayEffectQuery::CustomMatchDelegate_BP");
static_assert(offsetof(FGameplayEffectQuery, OwningTagQuery) == 32, "Offset mismatch for FGameplayEffectQuery::OwningTagQuery");
static_assert(offsetof(FGameplayEffectQuery, EffectTagQuery) == 104, "Offset mismatch for FGameplayEffectQuery::EffectTagQuery");
static_assert(offsetof(FGameplayEffectQuery, SourceTagQuery) == 176, "Offset mismatch for FGameplayEffectQuery::SourceTagQuery");
static_assert(offsetof(FGameplayEffectQuery, SourceAggregateTagQuery) == 248, "Offset mismatch for FGameplayEffectQuery::SourceAggregateTagQuery");
static_assert(offsetof(FGameplayEffectQuery, ModifyingAttribute) == 320, "Offset mismatch for FGameplayEffectQuery::ModifyingAttribute");
static_assert(offsetof(FGameplayEffectQuery, EffectSource) == 376, "Offset mismatch for FGameplayEffectQuery::EffectSource");
static_assert(offsetof(FGameplayEffectQuery, EffectDefinition) == 384, "Offset mismatch for FGameplayEffectQuery::EffectDefinition");

// /Script/GameplayAbilities.GameplayEffectRemovalInfo
// Kind: ScriptStruct; super: none
struct FGameplayEffectRemovalInfo
{
public:
    std::uint8_t bPrematureRemoval; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPredictionRejected; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t StackCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t EffectContext[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    void* OwningASC; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayEffectRemovalInfo, bPrematureRemoval) == 0, "Offset mismatch for FGameplayEffectRemovalInfo::bPrematureRemoval");
static_assert(offsetof(FGameplayEffectRemovalInfo, bPredictionRejected) == 1, "Offset mismatch for FGameplayEffectRemovalInfo::bPredictionRejected");
static_assert(offsetof(FGameplayEffectRemovalInfo, StackCount) == 4, "Offset mismatch for FGameplayEffectRemovalInfo::StackCount");
static_assert(offsetof(FGameplayEffectRemovalInfo, EffectContext) == 8, "Offset mismatch for FGameplayEffectRemovalInfo::EffectContext");
static_assert(offsetof(FGameplayEffectRemovalInfo, OwningASC) == 32, "Offset mismatch for FGameplayEffectRemovalInfo::OwningASC");

// /Script/GameplayAbilities.GameplayEffectSpec
// Kind: ScriptStruct; super: none
struct FGameplayEffectSpec
{
public:
    void* Def; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ModifiedAttributes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CapturedRelevantAttributes[0x38]; // 0x0018 (Size: 0x38, Type: StructProperty)
    float duration; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float Period; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CapturedSourceTags[0x68]; // 0x0058 (Size: 0x68, Type: StructProperty)
    std::uint8_t CapturedTargetTags[0x68]; // 0x00C0 (Size: 0x68, Type: StructProperty)
    std::uint8_t DynamicGrantedTags[0x20]; // 0x0128 (Size: 0x20, Type: StructProperty)
    std::uint8_t DynamicAssetTags[0x20]; // 0x0148 (Size: 0x20, Type: StructProperty)
    TArray<void*> Modifiers; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::int32_t StackCount; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCompletedSourceAttributeCapture; // 0x017C (Size: 0x1, Type: BoolProperty)
    // 0x017C BoolProperty bCompletedTargetAttributeCapture (shared storage)
    // 0x017C BoolProperty bDurationLocked (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x017D
    TArray<void*> GrantedAbilitySpecs; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0190
    std::uint8_t EffectContext[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    float Level; // 0x01C8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayEffectSpec, Def) == 0, "Offset mismatch for FGameplayEffectSpec::Def");
static_assert(offsetof(FGameplayEffectSpec, ModifiedAttributes) == 8, "Offset mismatch for FGameplayEffectSpec::ModifiedAttributes");
static_assert(offsetof(FGameplayEffectSpec, CapturedRelevantAttributes) == 24, "Offset mismatch for FGameplayEffectSpec::CapturedRelevantAttributes");
static_assert(offsetof(FGameplayEffectSpec, duration) == 80, "Offset mismatch for FGameplayEffectSpec::duration");
static_assert(offsetof(FGameplayEffectSpec, Period) == 84, "Offset mismatch for FGameplayEffectSpec::Period");
static_assert(offsetof(FGameplayEffectSpec, CapturedSourceTags) == 88, "Offset mismatch for FGameplayEffectSpec::CapturedSourceTags");
static_assert(offsetof(FGameplayEffectSpec, CapturedTargetTags) == 192, "Offset mismatch for FGameplayEffectSpec::CapturedTargetTags");
static_assert(offsetof(FGameplayEffectSpec, DynamicGrantedTags) == 296, "Offset mismatch for FGameplayEffectSpec::DynamicGrantedTags");
static_assert(offsetof(FGameplayEffectSpec, DynamicAssetTags) == 328, "Offset mismatch for FGameplayEffectSpec::DynamicAssetTags");
static_assert(offsetof(FGameplayEffectSpec, Modifiers) == 360, "Offset mismatch for FGameplayEffectSpec::Modifiers");
static_assert(offsetof(FGameplayEffectSpec, StackCount) == 376, "Offset mismatch for FGameplayEffectSpec::StackCount");
static_assert(offsetof(FGameplayEffectSpec, bCompletedSourceAttributeCapture) == 380, "Offset mismatch for FGameplayEffectSpec::bCompletedSourceAttributeCapture");
static_assert(offsetof(FGameplayEffectSpec, GrantedAbilitySpecs) == 384, "Offset mismatch for FGameplayEffectSpec::GrantedAbilitySpecs");
static_assert(offsetof(FGameplayEffectSpec, EffectContext) == 432, "Offset mismatch for FGameplayEffectSpec::EffectContext");
static_assert(offsetof(FGameplayEffectSpec, Level) == 456, "Offset mismatch for FGameplayEffectSpec::Level");

// /Script/GameplayAbilities.GameplayEffectSpecForRPC
// Kind: ScriptStruct; super: none
struct FGameplayEffectSpecForRPC
{
public:
    void* Def; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ModifiedAttributes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EffectContext[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t AggregatedSourceTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t AggregatedTargetTags[0x20]; // 0x0050 (Size: 0x20, Type: StructProperty)
    float Level; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float AbilityLevel; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGameplayEffectSpecForRPC, Def) == 0, "Offset mismatch for FGameplayEffectSpecForRPC::Def");
static_assert(offsetof(FGameplayEffectSpecForRPC, ModifiedAttributes) == 8, "Offset mismatch for FGameplayEffectSpecForRPC::ModifiedAttributes");
static_assert(offsetof(FGameplayEffectSpecForRPC, EffectContext) == 24, "Offset mismatch for FGameplayEffectSpecForRPC::EffectContext");
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedSourceTags) == 48, "Offset mismatch for FGameplayEffectSpecForRPC::AggregatedSourceTags");
static_assert(offsetof(FGameplayEffectSpecForRPC, AggregatedTargetTags) == 80, "Offset mismatch for FGameplayEffectSpecForRPC::AggregatedTargetTags");
static_assert(offsetof(FGameplayEffectSpecForRPC, Level) == 112, "Offset mismatch for FGameplayEffectSpecForRPC::Level");
static_assert(offsetof(FGameplayEffectSpecForRPC, AbilityLevel) == 116, "Offset mismatch for FGameplayEffectSpecForRPC::AbilityLevel");

// /Script/GameplayAbilities.GameplayEffectSpecHandle
// Kind: ScriptStruct; super: none
struct FGameplayEffectSpecHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectVersion
// Kind: ScriptStruct; super: none
struct FGameplayEffectVersion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEventData
// Kind: ScriptStruct; super: none
struct FGameplayEventData
{
public:
    std::uint8_t EventTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Instigator; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* OptionalObject; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* OptionalObject2; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContextHandle[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t InstigatorTags[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetTags[0x20]; // 0x0060 (Size: 0x20, Type: StructProperty)
    float EventMagnitude; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0084
    std::uint8_t TargetData[0x28]; // 0x0088 (Size: 0x28, Type: StructProperty)
    std::uint8_t InstancedEventData[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayEventData, EventTag) == 0, "Offset mismatch for FGameplayEventData::EventTag");
static_assert(offsetof(FGameplayEventData, Instigator) == 8, "Offset mismatch for FGameplayEventData::Instigator");
static_assert(offsetof(FGameplayEventData, Target) == 16, "Offset mismatch for FGameplayEventData::Target");
static_assert(offsetof(FGameplayEventData, OptionalObject) == 24, "Offset mismatch for FGameplayEventData::OptionalObject");
static_assert(offsetof(FGameplayEventData, OptionalObject2) == 32, "Offset mismatch for FGameplayEventData::OptionalObject2");
static_assert(offsetof(FGameplayEventData, ContextHandle) == 40, "Offset mismatch for FGameplayEventData::ContextHandle");
static_assert(offsetof(FGameplayEventData, InstigatorTags) == 64, "Offset mismatch for FGameplayEventData::InstigatorTags");
static_assert(offsetof(FGameplayEventData, TargetTags) == 96, "Offset mismatch for FGameplayEventData::TargetTags");
static_assert(offsetof(FGameplayEventData, EventMagnitude) == 128, "Offset mismatch for FGameplayEventData::EventMagnitude");
static_assert(offsetof(FGameplayEventData, TargetData) == 136, "Offset mismatch for FGameplayEventData::TargetData");
static_assert(offsetof(FGameplayEventData, InstancedEventData) == 176, "Offset mismatch for FGameplayEventData::InstancedEventData");

// /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
// Kind: ScriptStruct; super: none
struct FGameplayModEvaluationChannelSettings
{
public:
    std::uint8_t Channel; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayModEvaluationChannelSettings, Channel) == 0, "Offset mismatch for FGameplayModEvaluationChannelSettings::Channel");

// /Script/GameplayAbilities.GameplayModifierEvaluatedData
// Kind: ScriptStruct; super: none
struct FGameplayModifierEvaluatedData
{
public:
    std::uint8_t Attribute[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t ModifierOp; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0039
    float Magnitude; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Handle[0x14]; // 0x0040 (Size: 0x14, Type: StructProperty)
    std::uint8_t IsValid; // 0x0054 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayModifierEvaluatedData, Attribute) == 0, "Offset mismatch for FGameplayModifierEvaluatedData::Attribute");
static_assert(offsetof(FGameplayModifierEvaluatedData, ModifierOp) == 56, "Offset mismatch for FGameplayModifierEvaluatedData::ModifierOp");
static_assert(offsetof(FGameplayModifierEvaluatedData, Magnitude) == 60, "Offset mismatch for FGameplayModifierEvaluatedData::Magnitude");
static_assert(offsetof(FGameplayModifierEvaluatedData, Handle) == 64, "Offset mismatch for FGameplayModifierEvaluatedData::Handle");
static_assert(offsetof(FGameplayModifierEvaluatedData, IsValid) == 84, "Offset mismatch for FGameplayModifierEvaluatedData::IsValid");

// /Script/GameplayAbilities.GameplayModifierInfo
// Kind: ScriptStruct; super: none
struct FGameplayModifierInfo
{
public:
    std::uint8_t Attribute[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t ModifierOp; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0039
    std::uint8_t ModifierMagnitude[0x1D8]; // 0x0040 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t EvaluationChannelSettings[0x8]; // 0x0218 (Size: 0x8, Type: StructProperty)
    std::uint8_t SourceTags[0x88]; // 0x0220 (Size: 0x88, Type: StructProperty)
    std::uint8_t TargetTags[0x1]; // 0x02A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayModifierInfo, Attribute) == 0, "Offset mismatch for FGameplayModifierInfo::Attribute");
static_assert(offsetof(FGameplayModifierInfo, ModifierOp) == 56, "Offset mismatch for FGameplayModifierInfo::ModifierOp");
static_assert(offsetof(FGameplayModifierInfo, ModifierMagnitude) == 64, "Offset mismatch for FGameplayModifierInfo::ModifierMagnitude");
static_assert(offsetof(FGameplayModifierInfo, EvaluationChannelSettings) == 536, "Offset mismatch for FGameplayModifierInfo::EvaluationChannelSettings");
static_assert(offsetof(FGameplayModifierInfo, SourceTags) == 544, "Offset mismatch for FGameplayModifierInfo::SourceTags");
static_assert(offsetof(FGameplayModifierInfo, TargetTags) == 680, "Offset mismatch for FGameplayModifierInfo::TargetTags");

// /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
// Kind: ScriptStruct; super: none
struct FGameplayTagBlueprintPropertyMap
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> PropertyMappings; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayTagBlueprintPropertyMap, PropertyMappings) == 16, "Offset mismatch for FGameplayTagBlueprintPropertyMap::PropertyMappings");

// /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
// Kind: ScriptStruct; super: none
struct FGameplayTagBlueprintPropertyMapping
{
public:
    std::uint8_t TagToMap[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t PropertyToEdit[0x20]; // 0x0008 (Size: 0x20, Type: FieldPathProperty)
    std::uint8_t PropertyName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyGuid[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, TagToMap) == 0, "Offset mismatch for FGameplayTagBlueprintPropertyMapping::TagToMap");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyToEdit) == 8, "Offset mismatch for FGameplayTagBlueprintPropertyMapping::PropertyToEdit");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyName) == 40, "Offset mismatch for FGameplayTagBlueprintPropertyMapping::PropertyName");
static_assert(offsetof(FGameplayTagBlueprintPropertyMapping, PropertyGuid) == 44, "Offset mismatch for FGameplayTagBlueprintPropertyMapping::PropertyGuid");

// /Script/GameplayAbilities.GameplayTagChangedEventWrapperSpecHandle
// Kind: ScriptStruct; super: none
struct FGameplayTagChangedEventWrapperSpecHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayTagCountContainer
// Kind: ScriptStruct; super: none
struct FGameplayTagCountContainer
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* Owner; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayTagCountContainer, Owner) == 104, "Offset mismatch for FGameplayTagCountContainer::Owner");

// /Script/GameplayAbilities.GameplayTagCountContainerNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FGameplayTagCountContainerNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayTagCountItem
// Kind: ScriptStruct; super: none
struct FGameplayTagCountItem
{
public:
    std::uint8_t Tag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t Count; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t ReplicationState; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FGameplayTagCountItem, Tag) == 0, "Offset mismatch for FGameplayTagCountItem::Tag");
static_assert(offsetof(FGameplayTagCountItem, Count) == 4, "Offset mismatch for FGameplayTagCountItem::Count");
static_assert(offsetof(FGameplayTagCountItem, ReplicationState) == 8, "Offset mismatch for FGameplayTagCountItem::ReplicationState");

// /Script/GameplayAbilities.GameplayTagReponsePair
// Kind: ScriptStruct; super: none
struct FGameplayTagReponsePair
{
public:
    std::uint8_t Tag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* ResponseGameplayEffect; // 0x0008 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ResponseGameplayEffects; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SoftCountCap; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGameplayTagReponsePair, Tag) == 0, "Offset mismatch for FGameplayTagReponsePair::Tag");
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffect) == 8, "Offset mismatch for FGameplayTagReponsePair::ResponseGameplayEffect");
static_assert(offsetof(FGameplayTagReponsePair, ResponseGameplayEffects) == 16, "Offset mismatch for FGameplayTagReponsePair::ResponseGameplayEffects");
static_assert(offsetof(FGameplayTagReponsePair, SoftCountCap) == 32, "Offset mismatch for FGameplayTagReponsePair::SoftCountCap");

// /Script/GameplayAbilities.GameplayTagRequirements
// Kind: ScriptStruct; super: none
struct FGameplayTagRequirements
{
public:
    std::uint8_t RequireTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t IgnoreTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagQuery[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagRequirements, RequireTags) == 0, "Offset mismatch for FGameplayTagRequirements::RequireTags");
static_assert(offsetof(FGameplayTagRequirements, IgnoreTags) == 32, "Offset mismatch for FGameplayTagRequirements::IgnoreTags");
static_assert(offsetof(FGameplayTagRequirements, TagQuery) == 64, "Offset mismatch for FGameplayTagRequirements::TagQuery");

// /Script/GameplayAbilities.GameplayTagResponseTableEntry
// Kind: ScriptStruct; super: none
struct FGameplayTagResponseTableEntry
{
public:
    std::uint8_t Positive[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t Negative[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagResponseTableEntry, Positive) == 0, "Offset mismatch for FGameplayTagResponseTableEntry::Positive");
static_assert(offsetof(FGameplayTagResponseTableEntry, Negative) == 40, "Offset mismatch for FGameplayTagResponseTableEntry::Negative");

// /Script/GameplayAbilities.GameplayTargetDataFilter
// Kind: ScriptStruct; super: none
struct FGameplayTargetDataFilter
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SelfActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* RequiredActorClass; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SelfFilter; // 0x0018 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bReverseFilter; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameplayTargetDataFilter, SelfActor) == 8, "Offset mismatch for FGameplayTargetDataFilter::SelfActor");
static_assert(offsetof(FGameplayTargetDataFilter, RequiredActorClass) == 16, "Offset mismatch for FGameplayTargetDataFilter::RequiredActorClass");
static_assert(offsetof(FGameplayTargetDataFilter, SelfFilter) == 24, "Offset mismatch for FGameplayTargetDataFilter::SelfFilter");
static_assert(offsetof(FGameplayTargetDataFilter, bReverseFilter) == 25, "Offset mismatch for FGameplayTargetDataFilter::bReverseFilter");

// /Script/GameplayAbilities.GameplayTargetDataFilterHandle
// Kind: ScriptStruct; super: none
struct FGameplayTargetDataFilterHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.InheritedTagContainer
// Kind: ScriptStruct; super: none
struct FInheritedTagContainer
{
public:
    std::uint8_t CombinedTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Added[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Removed[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInheritedTagContainer, CombinedTags) == 0, "Offset mismatch for FInheritedTagContainer::CombinedTags");
static_assert(offsetof(FInheritedTagContainer, Added) == 32, "Offset mismatch for FInheritedTagContainer::Added");
static_assert(offsetof(FInheritedTagContainer, Removed) == 64, "Offset mismatch for FInheritedTagContainer::Removed");

// /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
// Kind: ScriptStruct; super: none
struct FMinimalGameplayCueReplicationProxy
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    void* Owner; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMinimalGameplayCueReplicationProxy, Owner) == 688, "Offset mismatch for FMinimalGameplayCueReplicationProxy::Owner");

// /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
// Kind: ScriptStruct; super: none
struct FMinimalGameplayCueReplicationProxyForNetSerializer
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Locations; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMinimalGameplayCueReplicationProxyForNetSerializer, Tags) == 0, "Offset mismatch for FMinimalGameplayCueReplicationProxyForNetSerializer::Tags");
static_assert(offsetof(FMinimalGameplayCueReplicationProxyForNetSerializer, Locations) == 16, "Offset mismatch for FMinimalGameplayCueReplicationProxyForNetSerializer::Locations");

// /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FMinimalGameplayCueReplicationProxyNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.MinimalReplicationTagCountMap
// Kind: ScriptStruct; super: none
struct FMinimalReplicationTagCountMap
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Owner; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMinimalReplicationTagCountMap, Owner) == 16, "Offset mismatch for FMinimalReplicationTagCountMap::Owner");

// /Script/GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
// Kind: ScriptStruct; super: none
struct FMinimalReplicationTagCountMapForNetSerializer
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMinimalReplicationTagCountMapForNetSerializer, Tags) == 0, "Offset mismatch for FMinimalReplicationTagCountMapForNetSerializer::Tags");

// /Script/GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FMinimalReplicationTagCountMapNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.ModifierSpec
// Kind: ScriptStruct; super: none
struct FModifierSpec
{
public:
    float EvaluatedMagnitude; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FModifierSpec, EvaluatedMagnitude) == 0, "Offset mismatch for FModifierSpec::EvaluatedMagnitude");

// /Script/GameplayAbilities.MovieSceneGameplayCueChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneGameplayCueChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> KeyTimes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeyValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyTimes) == 80, "Offset mismatch for FMovieSceneGameplayCueChannel::KeyTimes");
static_assert(offsetof(FMovieSceneGameplayCueChannel, KeyValues) == 96, "Offset mismatch for FMovieSceneGameplayCueChannel::KeyValues");

// /Script/GameplayAbilities.MovieSceneGameplayCueKey
// Kind: ScriptStruct; super: none
struct FMovieSceneGameplayCueKey
{
public:
    std::uint8_t Cue[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Normal[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachSocketName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    float NormalizedMagnitude; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Instigator[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t EffectCauser[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    void* PhysicalMaterial; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::int32_t GameplayEffectLevel; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t AbilityLevel; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bAttachToBinding; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneGameplayCueKey, Cue) == 0, "Offset mismatch for FMovieSceneGameplayCueKey::Cue");
static_assert(offsetof(FMovieSceneGameplayCueKey, Location) == 8, "Offset mismatch for FMovieSceneGameplayCueKey::Location");
static_assert(offsetof(FMovieSceneGameplayCueKey, Normal) == 32, "Offset mismatch for FMovieSceneGameplayCueKey::Normal");
static_assert(offsetof(FMovieSceneGameplayCueKey, AttachSocketName) == 56, "Offset mismatch for FMovieSceneGameplayCueKey::AttachSocketName");
static_assert(offsetof(FMovieSceneGameplayCueKey, NormalizedMagnitude) == 60, "Offset mismatch for FMovieSceneGameplayCueKey::NormalizedMagnitude");
static_assert(offsetof(FMovieSceneGameplayCueKey, Instigator) == 64, "Offset mismatch for FMovieSceneGameplayCueKey::Instigator");
static_assert(offsetof(FMovieSceneGameplayCueKey, EffectCauser) == 88, "Offset mismatch for FMovieSceneGameplayCueKey::EffectCauser");
static_assert(offsetof(FMovieSceneGameplayCueKey, PhysicalMaterial) == 112, "Offset mismatch for FMovieSceneGameplayCueKey::PhysicalMaterial");
static_assert(offsetof(FMovieSceneGameplayCueKey, GameplayEffectLevel) == 120, "Offset mismatch for FMovieSceneGameplayCueKey::GameplayEffectLevel");
static_assert(offsetof(FMovieSceneGameplayCueKey, AbilityLevel) == 124, "Offset mismatch for FMovieSceneGameplayCueKey::AbilityLevel");
static_assert(offsetof(FMovieSceneGameplayCueKey, bAttachToBinding) == 128, "Offset mismatch for FMovieSceneGameplayCueKey::bAttachToBinding");

// /Script/GameplayAbilities.NetGameplayTagCountContainerStateForNetSerialize
// Kind: ScriptStruct; super: none
struct FNetGameplayTagCountContainerStateForNetSerialize
{
public:
    TArray<void*> TagStates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNetGameplayTagCountContainerStateForNetSerialize, TagStates) == 0, "Offset mismatch for FNetGameplayTagCountContainerStateForNetSerialize::TagStates");

// /Script/GameplayAbilities.NetSerializeScriptStructCache
// Kind: ScriptStruct; super: none
struct FNetSerializeScriptStructCache
{
public:
    TArray<void*> ScriptStructs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* BaseStructType; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNetSerializeScriptStructCache, ScriptStructs) == 0, "Offset mismatch for FNetSerializeScriptStructCache::ScriptStructs");
static_assert(offsetof(FNetSerializeScriptStructCache, BaseStructType) == 16, "Offset mismatch for FNetSerializeScriptStructCache::BaseStructType");

// /Script/GameplayAbilities.PreallocationInfo
// Kind: ScriptStruct; super: none
struct FPreallocationInfo
{
public:
    TMap<void*, void*> PreallocatedInstances; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> ClassesNeedingPreallocation; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPreallocationInfo, PreallocatedInstances) == 0, "Offset mismatch for FPreallocationInfo::PreallocatedInstances");
static_assert(offsetof(FPreallocationInfo, ClassesNeedingPreallocation) == 16, "Offset mismatch for FPreallocationInfo::ClassesNeedingPreallocation");

// /Script/GameplayAbilities.PredictionKey
// Kind: ScriptStruct; super: none
struct FPredictionKey
{
public:
    std::int16_t Current; // 0x0000 (Size: 0x2, Type: Int16Property)
    std::int16_t base; // 0x0002 (Size: 0x2, Type: Int16Property)
    std::uint8_t bIsServerInitiated; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPredictionKey, Current) == 0, "Offset mismatch for FPredictionKey::Current");
static_assert(offsetof(FPredictionKey, base) == 2, "Offset mismatch for FPredictionKey::base");
static_assert(offsetof(FPredictionKey, bIsServerInitiated) == 4, "Offset mismatch for FPredictionKey::bIsServerInitiated");

// /Script/GameplayAbilities.PredictionKeyNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FPredictionKeyNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.ReplicatedPredictionKeyItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FReplicatedPredictionKeyItem
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t PredictionKey[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedPredictionKeyItem, PredictionKey) == 12, "Offset mismatch for FReplicatedPredictionKeyItem::PredictionKey");

// /Script/GameplayAbilities.ReplicatedPredictionKeyMap
// Kind: ScriptStruct; super: FastArraySerializer
struct FReplicatedPredictionKeyMap
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> PredictionKeys; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FReplicatedPredictionKeyMap, PredictionKeys) == 72, "Offset mismatch for FReplicatedPredictionKeyMap::PredictionKeys");

// /Script/GameplayAbilities.ScalableFloat
// Kind: ScriptStruct; super: none
struct FScalableFloat
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Curve[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t RegistryType[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScalableFloat, Value) == 0, "Offset mismatch for FScalableFloat::Value");
static_assert(offsetof(FScalableFloat, Curve) == 8, "Offset mismatch for FScalableFloat::Curve");
static_assert(offsetof(FScalableFloat, RegistryType) == 24, "Offset mismatch for FScalableFloat::RegistryType");

// /Script/GameplayAbilities.ServerAbilityRPCBatch
// Kind: ScriptStruct; super: none
struct FServerAbilityRPCBatch
{
public:
    std::uint8_t AbilitySpecHandle[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t PredictionKey[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t TargetData[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputPressed; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Ended; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Started; // 0x0052 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FServerAbilityRPCBatch, AbilitySpecHandle) == 0, "Offset mismatch for FServerAbilityRPCBatch::AbilitySpecHandle");
static_assert(offsetof(FServerAbilityRPCBatch, PredictionKey) == 24, "Offset mismatch for FServerAbilityRPCBatch::PredictionKey");
static_assert(offsetof(FServerAbilityRPCBatch, TargetData) == 40, "Offset mismatch for FServerAbilityRPCBatch::TargetData");
static_assert(offsetof(FServerAbilityRPCBatch, InputPressed) == 80, "Offset mismatch for FServerAbilityRPCBatch::InputPressed");
static_assert(offsetof(FServerAbilityRPCBatch, Ended) == 81, "Offset mismatch for FServerAbilityRPCBatch::Ended");
static_assert(offsetof(FServerAbilityRPCBatch, Started) == 82, "Offset mismatch for FServerAbilityRPCBatch::Started");

// /Script/GameplayAbilities.SetByCallerFloat
// Kind: ScriptStruct; super: none
struct FSetByCallerFloat
{
public:
    std::uint8_t DataName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t DataTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSetByCallerFloat, DataName) == 0, "Offset mismatch for FSetByCallerFloat::DataName");
static_assert(offsetof(FSetByCallerFloat, DataTag) == 4, "Offset mismatch for FSetByCallerFloat::DataTag");

// /Script/GameplayAbilities.TagContainerAggregator
// Kind: ScriptStruct; super: none
struct FTagContainerAggregator
{
public:
    std::uint8_t CapturedActorTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t CapturedSpecTags[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTagContainerAggregator, CapturedActorTags) == 0, "Offset mismatch for FTagContainerAggregator::CapturedActorTags");
static_assert(offsetof(FTagContainerAggregator, CapturedSpecTags) == 32, "Offset mismatch for FTagContainerAggregator::CapturedSpecTags");

// /Script/GameplayAbilities.WorldReticleParameters
// Kind: ScriptStruct; super: none
struct FWorldReticleParameters
{
public:
    std::uint8_t AOEScale[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWorldReticleParameters, AOEScale) == 0, "Offset mismatch for FWorldReticleParameters::AOEScale");

// /Script/GameplayAbilities.AbilitiesGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UAbilitiesGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> GrantAbilityConfigs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAbilitiesGameplayEffectComponent, GrantAbilityConfigs) == 40, "Offset mismatch for UAbilitiesGameplayEffectComponent::GrantAbilityConfigs");

// /Script/GameplayAbilities.AbilityAsync
// Kind: Class; super: CancellableAsyncAction
class UAbilityAsync
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged
// Kind: Class; super: AbilityAsync
class UAbilityAsync_WaitAttributeChanged
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate Changed; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityAsync_WaitAttributeChanged, Changed) == 56, "Offset mismatch for UAbilityAsync_WaitAttributeChanged::Changed");

// /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
// Kind: Class; super: AbilityAsync
class UAbilityAsync_WaitGameplayEffectApplied
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnApplied; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityAsync_WaitGameplayEffectApplied, OnApplied) == 56, "Offset mismatch for UAbilityAsync_WaitGameplayEffectApplied::OnApplied");

// /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
// Kind: Class; super: AbilityAsync
class UAbilityAsync_WaitGameplayEvent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate EventReceived; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityAsync_WaitGameplayEvent, EventReceived) == 56, "Offset mismatch for UAbilityAsync_WaitGameplayEvent::EventReceived");

// /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
// Kind: Class; super: AbilityAsync
class UAbilityAsync_WaitGameplayTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
// Kind: Class; super: AbilityAsync_WaitGameplayTag
class UAbilityAsync_WaitGameplayTagAdded
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    FMulticastInlineDelegate Added; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityAsync_WaitGameplayTagAdded, Added) == 80, "Offset mismatch for UAbilityAsync_WaitGameplayTagAdded::Added");

// /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagCountChanged
// Kind: Class; super: AbilityAsync
class UAbilityAsync_WaitGameplayTagCountChanged
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FMulticastInlineDelegate TagCountChanged; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityAsync_WaitGameplayTagCountChanged, TagCountChanged) == 72, "Offset mismatch for UAbilityAsync_WaitGameplayTagCountChanged::TagCountChanged");

// /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
// Kind: Class; super: AbilityAsync
class UAbilityAsync_WaitGameplayTagQuery
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate Triggered; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityAsync_WaitGameplayTagQuery, Triggered) == 56, "Offset mismatch for UAbilityAsync_WaitGameplayTagQuery::Triggered");

// /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
// Kind: Class; super: AbilityAsync_WaitGameplayTag
class UAbilityAsync_WaitGameplayTagRemoved
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    FMulticastInlineDelegate Removed; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityAsync_WaitGameplayTagRemoved, Removed) == 80, "Offset mismatch for UAbilityAsync_WaitGameplayTagRemoved::Removed");

// /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAbilitySystemBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemCheatManagerExtension
// Kind: Class; super: CheatManagerExtension
class UAbilitySystemCheatManagerExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemComponent
// Kind: Class; super: GameplayTasksComponent
class UAbilitySystemComponent
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    TArray<void*> DefaultStartingData; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    FName AffectedAnimInstanceTag; // 0x0168 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x160]; // 0x0170
    float OutgoingDuration; // 0x02D0 (Size: 0x4, Type: FloatProperty)
    float IncomingDuration; // 0x02D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x20]; // 0x02D8
    TArray<void*> ClientDebugStrings; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ServerDebugStrings; // 0x0308 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x68]; // 0x0318
    std::uint8_t UserAbilityActivationInhibited; // 0x0380 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ReplicationProxyEnabled; // 0x0381 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressGrantAbility; // 0x0382 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressGameplayCues; // 0x0383 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0384
    TArray<void*> SpawnedTargetActors; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x28]; // 0x0398
    void* OwnerActor; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    void* AvatarActor; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x03D0
    std::uint8_t ActivatableAbilities[0x90]; // 0x03E0 (Size: 0x90, Type: StructProperty)
    TArray<void*> AllReplicatedInstancedAbilities; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x238]; // 0x0480
    std::uint8_t RepAnimMontageInfo[0x38]; // 0x06B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bCachedIsNetSimulated; // 0x06F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPendingMontageRep; // 0x06F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x6]; // 0x06F2
    std::uint8_t LocalAnimMontageInfo[0x48]; // 0x06F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t ActiveGameplayEffects[0x100]; // 0x0740 (Size: 0x100, Type: StructProperty)
    std::uint8_t ActiveGameplayCues[0x68]; // 0x0840 (Size: 0x68, Type: StructProperty)
    std::uint8_t MinimalReplicationGameplayCues[0xD8]; // 0x08A8 (Size: 0xD8, Type: StructProperty)
    std::uint8_t GameplayTagCountContainer[0x88]; // 0x0980 (Size: 0x88, Type: StructProperty)
    TArray<void*> BlockedAbilityBindings; // 0x0A08 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MinimalReplicationTags[0x28]; // 0x0A18 (Size: 0x28, Type: StructProperty)
    TArray<void*> SpawnedAttributes; // 0x0A40 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0009[0x10]; // 0x0A50
    std::uint8_t ReplicatedLooseTags[0x30]; // 0x0A60 (Size: 0x30, Type: StructProperty)
    std::uint8_t ReplicatedPredictionKeyMap[0x68]; // 0x0A90 (Size: 0x68, Type: StructProperty)
    std::uint32_t NextActiveGameplayEffectHandleCounter; // 0x0AF8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UAbilitySystemComponent, DefaultStartingData) == 344, "Offset mismatch for UAbilitySystemComponent::DefaultStartingData");
static_assert(offsetof(UAbilitySystemComponent, AffectedAnimInstanceTag) == 360, "Offset mismatch for UAbilitySystemComponent::AffectedAnimInstanceTag");
static_assert(offsetof(UAbilitySystemComponent, OutgoingDuration) == 720, "Offset mismatch for UAbilitySystemComponent::OutgoingDuration");
static_assert(offsetof(UAbilitySystemComponent, IncomingDuration) == 724, "Offset mismatch for UAbilitySystemComponent::IncomingDuration");
static_assert(offsetof(UAbilitySystemComponent, ClientDebugStrings) == 760, "Offset mismatch for UAbilitySystemComponent::ClientDebugStrings");
static_assert(offsetof(UAbilitySystemComponent, ServerDebugStrings) == 776, "Offset mismatch for UAbilitySystemComponent::ServerDebugStrings");
static_assert(offsetof(UAbilitySystemComponent, UserAbilityActivationInhibited) == 896, "Offset mismatch for UAbilitySystemComponent::UserAbilityActivationInhibited");
static_assert(offsetof(UAbilitySystemComponent, ReplicationProxyEnabled) == 897, "Offset mismatch for UAbilitySystemComponent::ReplicationProxyEnabled");
static_assert(offsetof(UAbilitySystemComponent, bSuppressGrantAbility) == 898, "Offset mismatch for UAbilitySystemComponent::bSuppressGrantAbility");
static_assert(offsetof(UAbilitySystemComponent, bSuppressGameplayCues) == 899, "Offset mismatch for UAbilitySystemComponent::bSuppressGameplayCues");
static_assert(offsetof(UAbilitySystemComponent, SpawnedTargetActors) == 904, "Offset mismatch for UAbilitySystemComponent::SpawnedTargetActors");
static_assert(offsetof(UAbilitySystemComponent, OwnerActor) == 960, "Offset mismatch for UAbilitySystemComponent::OwnerActor");
static_assert(offsetof(UAbilitySystemComponent, AvatarActor) == 968, "Offset mismatch for UAbilitySystemComponent::AvatarActor");
static_assert(offsetof(UAbilitySystemComponent, ActivatableAbilities) == 992, "Offset mismatch for UAbilitySystemComponent::ActivatableAbilities");
static_assert(offsetof(UAbilitySystemComponent, AllReplicatedInstancedAbilities) == 1136, "Offset mismatch for UAbilitySystemComponent::AllReplicatedInstancedAbilities");
static_assert(offsetof(UAbilitySystemComponent, RepAnimMontageInfo) == 1720, "Offset mismatch for UAbilitySystemComponent::RepAnimMontageInfo");
static_assert(offsetof(UAbilitySystemComponent, bCachedIsNetSimulated) == 1776, "Offset mismatch for UAbilitySystemComponent::bCachedIsNetSimulated");
static_assert(offsetof(UAbilitySystemComponent, bPendingMontageRep) == 1777, "Offset mismatch for UAbilitySystemComponent::bPendingMontageRep");
static_assert(offsetof(UAbilitySystemComponent, LocalAnimMontageInfo) == 1784, "Offset mismatch for UAbilitySystemComponent::LocalAnimMontageInfo");
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayEffects) == 1856, "Offset mismatch for UAbilitySystemComponent::ActiveGameplayEffects");
static_assert(offsetof(UAbilitySystemComponent, ActiveGameplayCues) == 2112, "Offset mismatch for UAbilitySystemComponent::ActiveGameplayCues");
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationGameplayCues) == 2216, "Offset mismatch for UAbilitySystemComponent::MinimalReplicationGameplayCues");
static_assert(offsetof(UAbilitySystemComponent, GameplayTagCountContainer) == 2432, "Offset mismatch for UAbilitySystemComponent::GameplayTagCountContainer");
static_assert(offsetof(UAbilitySystemComponent, BlockedAbilityBindings) == 2568, "Offset mismatch for UAbilitySystemComponent::BlockedAbilityBindings");
static_assert(offsetof(UAbilitySystemComponent, MinimalReplicationTags) == 2584, "Offset mismatch for UAbilitySystemComponent::MinimalReplicationTags");
static_assert(offsetof(UAbilitySystemComponent, SpawnedAttributes) == 2624, "Offset mismatch for UAbilitySystemComponent::SpawnedAttributes");
static_assert(offsetof(UAbilitySystemComponent, ReplicatedLooseTags) == 2656, "Offset mismatch for UAbilitySystemComponent::ReplicatedLooseTags");
static_assert(offsetof(UAbilitySystemComponent, ReplicatedPredictionKeyMap) == 2704, "Offset mismatch for UAbilitySystemComponent::ReplicatedPredictionKeyMap");
static_assert(offsetof(UAbilitySystemComponent, NextActiveGameplayEffectHandleCounter) == 2808, "Offset mismatch for UAbilitySystemComponent::NextActiveGameplayEffectHandleCounter");

// /Script/GameplayAbilities.AbilitySystemDebugHUD
// Kind: Class; super: HUD
class UAbilitySystemDebugHUD
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* PlayerOwner; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLostFocusPaused; // 0x0278 (Size: 0x1, Type: BoolProperty)
    // 0x0278 BoolProperty bShowDebugInfo (shared storage)
    // 0x0278 BoolProperty bShowHUD (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    std::int32_t CurrentTargetIndex; // 0x027C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableDebugTextShadow; // 0x0280 (Size: 0x1, Type: BoolProperty)
    // 0x0280 BoolProperty bShowHitBoxDebugInfo (shared storage)
    // 0x0280 BoolProperty bShowOverlays (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0281
    TArray<void*> PostRenderedActors; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0298
    TArray<void*> DebugDisplay; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ToggledDebugCategories; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    void* canvas; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* DebugCanvas; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DebugTextList; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    void* ShowDebugTargetDesiredClass; // 0x02E0 (Size: 0x8, Type: ClassProperty)
    void* ShowDebugTargetActor; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilitySystemDebugHUD, PlayerOwner) == 624, "Offset mismatch for UAbilitySystemDebugHUD::PlayerOwner");
static_assert(offsetof(UAbilitySystemDebugHUD, bLostFocusPaused) == 632, "Offset mismatch for UAbilitySystemDebugHUD::bLostFocusPaused");
static_assert(offsetof(UAbilitySystemDebugHUD, CurrentTargetIndex) == 636, "Offset mismatch for UAbilitySystemDebugHUD::CurrentTargetIndex");
static_assert(offsetof(UAbilitySystemDebugHUD, bEnableDebugTextShadow) == 640, "Offset mismatch for UAbilitySystemDebugHUD::bEnableDebugTextShadow");
static_assert(offsetof(UAbilitySystemDebugHUD, PostRenderedActors) == 648, "Offset mismatch for UAbilitySystemDebugHUD::PostRenderedActors");
static_assert(offsetof(UAbilitySystemDebugHUD, DebugDisplay) == 672, "Offset mismatch for UAbilitySystemDebugHUD::DebugDisplay");
static_assert(offsetof(UAbilitySystemDebugHUD, ToggledDebugCategories) == 688, "Offset mismatch for UAbilitySystemDebugHUD::ToggledDebugCategories");
static_assert(offsetof(UAbilitySystemDebugHUD, canvas) == 704, "Offset mismatch for UAbilitySystemDebugHUD::canvas");
static_assert(offsetof(UAbilitySystemDebugHUD, DebugCanvas) == 712, "Offset mismatch for UAbilitySystemDebugHUD::DebugCanvas");
static_assert(offsetof(UAbilitySystemDebugHUD, DebugTextList) == 720, "Offset mismatch for UAbilitySystemDebugHUD::DebugTextList");
static_assert(offsetof(UAbilitySystemDebugHUD, ShowDebugTargetDesiredClass) == 736, "Offset mismatch for UAbilitySystemDebugHUD::ShowDebugTargetDesiredClass");
static_assert(offsetof(UAbilitySystemDebugHUD, ShowDebugTargetActor) == 744, "Offset mismatch for UAbilitySystemDebugHUD::ShowDebugTargetActor");

// /Script/GameplayAbilities.AbilitySystemDebugHUDExtension
// Kind: Class; super: Object
class UAbilitySystemDebugHUDExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
// Kind: Class; super: AbilitySystemDebugHUDExtension
class UAbilitySystemDebugHUDExtension_Attributes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
// Kind: Class; super: AbilitySystemDebugHUDExtension
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
// Kind: Class; super: AbilitySystemDebugHUDExtension
class UAbilitySystemDebugHUDExtension_Tags
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemGlobals
// Kind: Class; super: Object
class UAbilitySystemGlobals
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AbilitySystemGlobalsClassName[0x44]; // 0x0028 (Size: 0x44, Type: StructProperty)
    std::uint8_t ActivateFailIsDeadTag[0x4]; // 0x006C (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailIsDeadName[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActivateFailCooldownTag[0x4]; // 0x0074 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailCooldownName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActivateFailCostTag[0x4]; // 0x007C (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailCostName[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActivateFailTagsBlockedTag[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailTagsBlockedName[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActivateFailTagsMissingTag[0x4]; // 0x008C (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailTagsMissingName[0x4]; // 0x0090 (Size: 0x4, Type: NameProperty)
    std::uint8_t ActivateFailNetworkingTag[0x4]; // 0x0094 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailNetworkingName[0x4]; // 0x0098 (Size: 0x4, Type: NameProperty)
    std::int32_t MinimalReplicationTagCountBits; // 0x009C (Size: 0x4, Type: IntProperty)
    std::uint8_t TargetDataStructCache[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t EffectContextStructCache[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllowGameplayModEvaluationChannels; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultGameplayModEvaluationChannel; // 0x00E1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00E2
    FName GameplayModEvaluationChannelAliases; // 0x00E4 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0x24]; // 0x00EC
    std::uint8_t GlobalCurveTableName[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    void* GlobalCurveTable; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GlobalAttributeMetaDataTableName[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    void* GlobalAttributeMetaDataTable; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GlobalAttributeSetDefaultsTableName[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    TArray<void*> GlobalAttributeSetDefaultsTableNames; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GlobalAttributeDefaultsTables; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GlobalGameplayCueManagerClass[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalGameplayCueManagerName[0x18]; // 0x01A0 (Size: 0x18, Type: StructProperty)
    TArray<void*> GameplayCueNotifyPaths; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayTagResponseTableName[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    void* GameplayTagResponseTable; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x01E8
    std::uint8_t PredictTargetGameplayEffects; // 0x01E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ReplicateActivationOwnedTags; // 0x01EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x01EB
    void* GlobalGameplayCueManager; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilitySystemGlobals, AbilitySystemGlobalsClassName) == 40, "Offset mismatch for UAbilitySystemGlobals::AbilitySystemGlobalsClassName");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadTag) == 108, "Offset mismatch for UAbilitySystemGlobals::ActivateFailIsDeadTag");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailIsDeadName) == 112, "Offset mismatch for UAbilitySystemGlobals::ActivateFailIsDeadName");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownTag) == 116, "Offset mismatch for UAbilitySystemGlobals::ActivateFailCooldownTag");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCooldownName) == 120, "Offset mismatch for UAbilitySystemGlobals::ActivateFailCooldownName");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostTag) == 124, "Offset mismatch for UAbilitySystemGlobals::ActivateFailCostTag");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailCostName) == 128, "Offset mismatch for UAbilitySystemGlobals::ActivateFailCostName");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedTag) == 132, "Offset mismatch for UAbilitySystemGlobals::ActivateFailTagsBlockedTag");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsBlockedName) == 136, "Offset mismatch for UAbilitySystemGlobals::ActivateFailTagsBlockedName");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingTag) == 140, "Offset mismatch for UAbilitySystemGlobals::ActivateFailTagsMissingTag");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailTagsMissingName) == 144, "Offset mismatch for UAbilitySystemGlobals::ActivateFailTagsMissingName");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingTag) == 148, "Offset mismatch for UAbilitySystemGlobals::ActivateFailNetworkingTag");
static_assert(offsetof(UAbilitySystemGlobals, ActivateFailNetworkingName) == 152, "Offset mismatch for UAbilitySystemGlobals::ActivateFailNetworkingName");
static_assert(offsetof(UAbilitySystemGlobals, MinimalReplicationTagCountBits) == 156, "Offset mismatch for UAbilitySystemGlobals::MinimalReplicationTagCountBits");
static_assert(offsetof(UAbilitySystemGlobals, TargetDataStructCache) == 160, "Offset mismatch for UAbilitySystemGlobals::TargetDataStructCache");
static_assert(offsetof(UAbilitySystemGlobals, EffectContextStructCache) == 192, "Offset mismatch for UAbilitySystemGlobals::EffectContextStructCache");
static_assert(offsetof(UAbilitySystemGlobals, bAllowGameplayModEvaluationChannels) == 224, "Offset mismatch for UAbilitySystemGlobals::bAllowGameplayModEvaluationChannels");
static_assert(offsetof(UAbilitySystemGlobals, DefaultGameplayModEvaluationChannel) == 225, "Offset mismatch for UAbilitySystemGlobals::DefaultGameplayModEvaluationChannel");
static_assert(offsetof(UAbilitySystemGlobals, GameplayModEvaluationChannelAliases) == 228, "Offset mismatch for UAbilitySystemGlobals::GameplayModEvaluationChannelAliases");
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTableName) == 272, "Offset mismatch for UAbilitySystemGlobals::GlobalCurveTableName");
static_assert(offsetof(UAbilitySystemGlobals, GlobalCurveTable) == 296, "Offset mismatch for UAbilitySystemGlobals::GlobalCurveTable");
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTableName) == 304, "Offset mismatch for UAbilitySystemGlobals::GlobalAttributeMetaDataTableName");
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeMetaDataTable) == 328, "Offset mismatch for UAbilitySystemGlobals::GlobalAttributeMetaDataTable");
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableName) == 336, "Offset mismatch for UAbilitySystemGlobals::GlobalAttributeSetDefaultsTableName");
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeSetDefaultsTableNames) == 360, "Offset mismatch for UAbilitySystemGlobals::GlobalAttributeSetDefaultsTableNames");
static_assert(offsetof(UAbilitySystemGlobals, GlobalAttributeDefaultsTables) == 376, "Offset mismatch for UAbilitySystemGlobals::GlobalAttributeDefaultsTables");
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerClass) == 392, "Offset mismatch for UAbilitySystemGlobals::GlobalGameplayCueManagerClass");
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManagerName) == 416, "Offset mismatch for UAbilitySystemGlobals::GlobalGameplayCueManagerName");
static_assert(offsetof(UAbilitySystemGlobals, GameplayCueNotifyPaths) == 440, "Offset mismatch for UAbilitySystemGlobals::GameplayCueNotifyPaths");
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTableName) == 456, "Offset mismatch for UAbilitySystemGlobals::GameplayTagResponseTableName");
static_assert(offsetof(UAbilitySystemGlobals, GameplayTagResponseTable) == 480, "Offset mismatch for UAbilitySystemGlobals::GameplayTagResponseTable");
static_assert(offsetof(UAbilitySystemGlobals, PredictTargetGameplayEffects) == 489, "Offset mismatch for UAbilitySystemGlobals::PredictTargetGameplayEffects");
static_assert(offsetof(UAbilitySystemGlobals, ReplicateActivationOwnedTags) == 490, "Offset mismatch for UAbilitySystemGlobals::ReplicateActivationOwnedTags");
static_assert(offsetof(UAbilitySystemGlobals, GlobalGameplayCueManager) == 496, "Offset mismatch for UAbilitySystemGlobals::GlobalGameplayCueManager");

// /Script/GameplayAbilities.AbilitySystemInterface
// Kind: Class; super: Interface
class UAbilitySystemInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
// Kind: Class; super: Interface
class UAbilitySystemReplicationProxyInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.AbilitySystemTestAttributeSet
// Kind: Class; super: AttributeSet
class UAbilitySystemTestAttributeSet
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float MaxHealth; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float Health; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Mana[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float MaxMana; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Damage; // 0x004C (Size: 0x4, Type: FloatProperty)
    float SpellDamage; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float PhysicalDamage; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float CritChance; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float CritMultiplier; // 0x005C (Size: 0x4, Type: FloatProperty)
    float ArmorDamageReduction; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float DodgeChance; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float LifeSteal; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x006C (Size: 0x4, Type: FloatProperty)
    float StackingAttribute1; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float StackingAttribute2; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float NoStackAttribute; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAbilitySystemTestAttributeSet, MaxHealth) == 48, "Offset mismatch for UAbilitySystemTestAttributeSet::MaxHealth");
static_assert(offsetof(UAbilitySystemTestAttributeSet, Health) == 52, "Offset mismatch for UAbilitySystemTestAttributeSet::Health");
static_assert(offsetof(UAbilitySystemTestAttributeSet, Mana) == 56, "Offset mismatch for UAbilitySystemTestAttributeSet::Mana");
static_assert(offsetof(UAbilitySystemTestAttributeSet, MaxMana) == 72, "Offset mismatch for UAbilitySystemTestAttributeSet::MaxMana");
static_assert(offsetof(UAbilitySystemTestAttributeSet, Damage) == 76, "Offset mismatch for UAbilitySystemTestAttributeSet::Damage");
static_assert(offsetof(UAbilitySystemTestAttributeSet, SpellDamage) == 80, "Offset mismatch for UAbilitySystemTestAttributeSet::SpellDamage");
static_assert(offsetof(UAbilitySystemTestAttributeSet, PhysicalDamage) == 84, "Offset mismatch for UAbilitySystemTestAttributeSet::PhysicalDamage");
static_assert(offsetof(UAbilitySystemTestAttributeSet, CritChance) == 88, "Offset mismatch for UAbilitySystemTestAttributeSet::CritChance");
static_assert(offsetof(UAbilitySystemTestAttributeSet, CritMultiplier) == 92, "Offset mismatch for UAbilitySystemTestAttributeSet::CritMultiplier");
static_assert(offsetof(UAbilitySystemTestAttributeSet, ArmorDamageReduction) == 96, "Offset mismatch for UAbilitySystemTestAttributeSet::ArmorDamageReduction");
static_assert(offsetof(UAbilitySystemTestAttributeSet, DodgeChance) == 100, "Offset mismatch for UAbilitySystemTestAttributeSet::DodgeChance");
static_assert(offsetof(UAbilitySystemTestAttributeSet, LifeSteal) == 104, "Offset mismatch for UAbilitySystemTestAttributeSet::LifeSteal");
static_assert(offsetof(UAbilitySystemTestAttributeSet, Strength) == 108, "Offset mismatch for UAbilitySystemTestAttributeSet::Strength");
static_assert(offsetof(UAbilitySystemTestAttributeSet, StackingAttribute1) == 112, "Offset mismatch for UAbilitySystemTestAttributeSet::StackingAttribute1");
static_assert(offsetof(UAbilitySystemTestAttributeSet, StackingAttribute2) == 116, "Offset mismatch for UAbilitySystemTestAttributeSet::StackingAttribute2");
static_assert(offsetof(UAbilitySystemTestAttributeSet, NoStackAttribute) == 120, "Offset mismatch for UAbilitySystemTestAttributeSet::NoStackAttribute");

// /Script/GameplayAbilities.AbilitySystemTestPawn
// Kind: Class; super: DefaultPawn
class UAbilitySystemTestPawn
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* AbilitySystemComponent; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilitySystemTestPawn, AbilitySystemComponent) == 816, "Offset mismatch for UAbilitySystemTestPawn::AbilitySystemComponent");

// /Script/GameplayAbilities.AbilityTask
// Kind: Class; super: GameplayTask
class UAbilityTask
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* ability; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> AbilitySystemComponent; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAbilityTask, ability) == 96, "Offset mismatch for UAbilityTask::ability");
static_assert(offsetof(UAbilityTask, AbilitySystemComponent) == 104, "Offset mismatch for UAbilityTask::AbilitySystemComponent");

// /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Kind: Class; super: AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotionConstantForce
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnFinish; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t WorldDirection[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    float Strength; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x00DC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAdditive; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    void* StrengthOverTime; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableGravity; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, OnFinish) == 176, "Offset mismatch for UAbilityTask_ApplyRootMotionConstantForce::OnFinish");
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, WorldDirection) == 192, "Offset mismatch for UAbilityTask_ApplyRootMotionConstantForce::WorldDirection");
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, Strength) == 216, "Offset mismatch for UAbilityTask_ApplyRootMotionConstantForce::Strength");
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, duration) == 220, "Offset mismatch for UAbilityTask_ApplyRootMotionConstantForce::duration");
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, bIsAdditive) == 224, "Offset mismatch for UAbilityTask_ApplyRootMotionConstantForce::bIsAdditive");
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, StrengthOverTime) == 232, "Offset mismatch for UAbilityTask_ApplyRootMotionConstantForce::StrengthOverTime");
static_assert(offsetof(UAbilityTask_ApplyRootMotionConstantForce, bEnableGravity) == 240, "Offset mismatch for UAbilityTask_ApplyRootMotionConstantForce::bEnableGravity");

// /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Kind: Class; super: AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotionJumpForce
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnFinish; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLanded; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Rotation[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    float Distance; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float duration; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float MinimumLandedTriggerTime; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFinishOnLanded; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F9
    void* PathOffsetCurve; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* TimeMappingCurve; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, OnFinish) == 176, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::OnFinish");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, OnLanded) == 192, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::OnLanded");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, Rotation) == 208, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::Rotation");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, Distance) == 232, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::Distance");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, Height) == 236, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::Height");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, duration) == 240, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::duration");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, MinimumLandedTriggerTime) == 244, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::MinimumLandedTriggerTime");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, bFinishOnLanded) == 248, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::bFinishOnLanded");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, PathOffsetCurve) == 256, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::PathOffsetCurve");
static_assert(offsetof(UAbilityTask_ApplyRootMotionJumpForce, TimeMappingCurve) == 264, "Offset mismatch for UAbilityTask_ApplyRootMotionJumpForce::TimeMappingCurve");

// /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Kind: Class; super: AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotionMoveToActorForce
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnFinished; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C0
    std::uint8_t StartLocation[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    void* TargetActor; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* TargetComponent; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TargetComponentRelativeLocation[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocationOffset[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t OffsetAlignment; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0139
    float duration; // 0x013C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableDestinationReachedInterrupt; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0141
    float ReachedDestinationDistance; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetNewMovementMode; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NewMovementMode; // 0x0149 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRestrictSpeedToExpected; // 0x014A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x014B
    void* PathOffsetCurve; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* TimeMappingCurve; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* TargetLerpSpeedHorizontalCurve; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    void* TargetLerpSpeedVerticalCurve; // 0x0168 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, OnFinished) == 176, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::OnFinished");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, StartLocation) == 200, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::StartLocation");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocation) == 224, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TargetLocation");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetActor) == 248, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TargetActor");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetComponent) == 256, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TargetComponent");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetComponentRelativeLocation) == 264, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TargetComponentRelativeLocation");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLocationOffset) == 288, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TargetLocationOffset");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, OffsetAlignment) == 312, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::OffsetAlignment");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, duration) == 316, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::duration");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, bDisableDestinationReachedInterrupt) == 320, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::bDisableDestinationReachedInterrupt");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, ReachedDestinationDistance) == 324, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::ReachedDestinationDistance");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, bSetNewMovementMode) == 328, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::bSetNewMovementMode");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, NewMovementMode) == 329, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::NewMovementMode");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, bRestrictSpeedToExpected) == 330, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::bRestrictSpeedToExpected");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, PathOffsetCurve) == 336, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::PathOffsetCurve");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TimeMappingCurve) == 344, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TimeMappingCurve");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedHorizontalCurve) == 352, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TargetLerpSpeedHorizontalCurve");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToActorForce, TargetLerpSpeedVerticalCurve) == 360, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToActorForce::TargetLerpSpeedVerticalCurve");

// /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Kind: Class; super: AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotionMoveToForce
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnTimedOut; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t StartLocation[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    float duration; // 0x0100 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetNewMovementMode; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t NewMovementMode; // 0x0105 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRestrictSpeedToExpected; // 0x0106 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0107
    void* PathOffsetCurve; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, OnTimedOut) == 176, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::OnTimedOut");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, OnTimedOutAndDestinationReached) == 192, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::OnTimedOutAndDestinationReached");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, StartLocation) == 208, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::StartLocation");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, TargetLocation) == 232, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::TargetLocation");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, duration) == 256, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::duration");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, bSetNewMovementMode) == 260, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::bSetNewMovementMode");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, NewMovementMode) == 261, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::NewMovementMode");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, bRestrictSpeedToExpected) == 262, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::bRestrictSpeedToExpected");
static_assert(offsetof(UAbilityTask_ApplyRootMotionMoveToForce, PathOffsetCurve) == 264, "Offset mismatch for UAbilityTask_ApplyRootMotionMoveToForce::PathOffsetCurve");

// /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Kind: Class; super: AbilityTask_ApplyRootMotion_Base
class UAbilityTask_ApplyRootMotionRadialForce
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    FMulticastInlineDelegate OnFinish; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Location[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    void* LocationActor; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    float Strength; // 0x00E0 (Size: 0x4, Type: FloatProperty)
    float duration; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPush; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAdditive; // 0x00ED (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNoZForce; // 0x00EE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00EF
    void* StrengthDistanceFalloff; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* StrengthOverTime; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseFixedWorldDirection; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0101
    std::uint8_t FixedWorldDirection[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, OnFinish) == 176, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::OnFinish");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, Location) == 192, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::Location");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, LocationActor) == 216, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::LocationActor");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, Strength) == 224, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::Strength");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, duration) == 228, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::duration");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, Radius) == 232, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::Radius");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, bIsPush) == 236, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::bIsPush");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, bIsAdditive) == 237, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::bIsAdditive");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, bNoZForce) == 238, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::bNoZForce");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthDistanceFalloff) == 240, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::StrengthDistanceFalloff");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, StrengthOverTime) == 248, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::StrengthOverTime");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, bUseFixedWorldDirection) == 256, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::bUseFixedWorldDirection");
static_assert(offsetof(UAbilityTask_ApplyRootMotionRadialForce, FixedWorldDirection) == 264, "Offset mismatch for UAbilityTask_ApplyRootMotionRadialForce::FixedWorldDirection");

// /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Kind: Class; super: AbilityTask
class UAbilityTask_ApplyRootMotion_Base
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t ForceName[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t FinishVelocityMode; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    std::uint8_t FinishSetVelocity[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    float FinishClampVelocity; // 0x0098 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> MovementComponent; // 0x009C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, ForceName) == 120, "Offset mismatch for UAbilityTask_ApplyRootMotion_Base::ForceName");
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishVelocityMode) == 124, "Offset mismatch for UAbilityTask_ApplyRootMotion_Base::FinishVelocityMode");
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishSetVelocity) == 128, "Offset mismatch for UAbilityTask_ApplyRootMotion_Base::FinishSetVelocity");
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, FinishClampVelocity) == 152, "Offset mismatch for UAbilityTask_ApplyRootMotion_Base::FinishClampVelocity");
static_assert(offsetof(UAbilityTask_ApplyRootMotion_Base, MovementComponent) == 156, "Offset mismatch for UAbilityTask_ApplyRootMotion_Base::MovementComponent");

// /Script/GameplayAbilities.AbilityTask_MoveToLocation
// Kind: Class; super: AbilityTask
class UAbilityTask_MoveToLocation
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnTargetLocationReached; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::uint8_t StartLocation[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t TargetLocation[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    float DurationOfMovement; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0xC]; // 0x00C4
    void* LerpCurve; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* LerpCurveVector; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_MoveToLocation, OnTargetLocationReached) == 120, "Offset mismatch for UAbilityTask_MoveToLocation::OnTargetLocationReached");
static_assert(offsetof(UAbilityTask_MoveToLocation, StartLocation) == 144, "Offset mismatch for UAbilityTask_MoveToLocation::StartLocation");
static_assert(offsetof(UAbilityTask_MoveToLocation, TargetLocation) == 168, "Offset mismatch for UAbilityTask_MoveToLocation::TargetLocation");
static_assert(offsetof(UAbilityTask_MoveToLocation, DurationOfMovement) == 192, "Offset mismatch for UAbilityTask_MoveToLocation::DurationOfMovement");
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurve) == 208, "Offset mismatch for UAbilityTask_MoveToLocation::LerpCurve");
static_assert(offsetof(UAbilityTask_MoveToLocation, LerpCurveVector) == 216, "Offset mismatch for UAbilityTask_MoveToLocation::LerpCurveVector");

// /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
// Kind: Class; super: AbilityTask
class UAbilityTask_NetworkSyncPoint
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnSync; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_NetworkSyncPoint, OnSync) == 120, "Offset mismatch for UAbilityTask_NetworkSyncPoint::OnSync");

// /Script/GameplayAbilities.AbilityTask_PlayAnimAndWait
// Kind: Class; super: AbilityTask
class UAbilityTask_PlayAnimAndWait
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendOut; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendIn; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelled; // 0x00B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x38]; // 0x00C8
    void* AnimSequenceToPlay; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_PlayAnimAndWait, OnCompleted) == 120, "Offset mismatch for UAbilityTask_PlayAnimAndWait::OnCompleted");
static_assert(offsetof(UAbilityTask_PlayAnimAndWait, OnBlendOut) == 136, "Offset mismatch for UAbilityTask_PlayAnimAndWait::OnBlendOut");
static_assert(offsetof(UAbilityTask_PlayAnimAndWait, OnBlendIn) == 152, "Offset mismatch for UAbilityTask_PlayAnimAndWait::OnBlendIn");
static_assert(offsetof(UAbilityTask_PlayAnimAndWait, OnInterrupted) == 168, "Offset mismatch for UAbilityTask_PlayAnimAndWait::OnInterrupted");
static_assert(offsetof(UAbilityTask_PlayAnimAndWait, OnCancelled) == 184, "Offset mismatch for UAbilityTask_PlayAnimAndWait::OnCancelled");
static_assert(offsetof(UAbilityTask_PlayAnimAndWait, AnimSequenceToPlay) == 256, "Offset mismatch for UAbilityTask_PlayAnimAndWait::AnimSequenceToPlay");

// /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
// Kind: Class; super: AbilityTask
class UAbilityTask_PlayMontageAndWait
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnCompleted; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendedIn; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBlendOut; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x00A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelled; // 0x00B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x38]; // 0x00C8
    void* MontageToPlay; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    float Rate; // 0x0108 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StartSection[0x4]; // 0x010C (Size: 0x4, Type: NameProperty)
    float AnimRootMotionTranslationScale; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float StartTimeSeconds; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStopWhenAbilityEnds; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInterruptAfterBlendOut; // 0x0119 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAbilityTask_PlayMontageAndWait, OnCompleted) == 120, "Offset mismatch for UAbilityTask_PlayMontageAndWait::OnCompleted");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, OnBlendedIn) == 136, "Offset mismatch for UAbilityTask_PlayMontageAndWait::OnBlendedIn");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, OnBlendOut) == 152, "Offset mismatch for UAbilityTask_PlayMontageAndWait::OnBlendOut");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, OnInterrupted) == 168, "Offset mismatch for UAbilityTask_PlayMontageAndWait::OnInterrupted");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, OnCancelled) == 184, "Offset mismatch for UAbilityTask_PlayMontageAndWait::OnCancelled");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, MontageToPlay) == 256, "Offset mismatch for UAbilityTask_PlayMontageAndWait::MontageToPlay");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, Rate) == 264, "Offset mismatch for UAbilityTask_PlayMontageAndWait::Rate");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, StartSection) == 268, "Offset mismatch for UAbilityTask_PlayMontageAndWait::StartSection");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, AnimRootMotionTranslationScale) == 272, "Offset mismatch for UAbilityTask_PlayMontageAndWait::AnimRootMotionTranslationScale");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, StartTimeSeconds) == 276, "Offset mismatch for UAbilityTask_PlayMontageAndWait::StartTimeSeconds");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, bStopWhenAbilityEnds) == 280, "Offset mismatch for UAbilityTask_PlayMontageAndWait::bStopWhenAbilityEnds");
static_assert(offsetof(UAbilityTask_PlayMontageAndWait, bAllowInterruptAfterBlendOut) == 281, "Offset mismatch for UAbilityTask_PlayMontageAndWait::bAllowInterruptAfterBlendOut");

// /Script/GameplayAbilities.AbilityTask_Repeat
// Kind: Class; super: AbilityTask
class UAbilityTask_Repeat
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnPerformAction; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFinished; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_Repeat, OnPerformAction) == 120, "Offset mismatch for UAbilityTask_Repeat::OnPerformAction");
static_assert(offsetof(UAbilityTask_Repeat, OnFinished) == 136, "Offset mismatch for UAbilityTask_Repeat::OnFinished");

// /Script/GameplayAbilities.AbilityTask_SpawnActor
// Kind: Class; super: AbilityTask
class UAbilityTask_SpawnActor
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate Success; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate DidNotSpawn; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_SpawnActor, Success) == 120, "Offset mismatch for UAbilityTask_SpawnActor::Success");
static_assert(offsetof(UAbilityTask_SpawnActor, DidNotSpawn) == 136, "Offset mismatch for UAbilityTask_SpawnActor::DidNotSpawn");

// /Script/GameplayAbilities.AbilityTask_StartAbilityState
// Kind: Class; super: AbilityTask
class UAbilityTask_StartAbilityState
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnStateEnded; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStateInterrupted; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_StartAbilityState, OnStateEnded) == 120, "Offset mismatch for UAbilityTask_StartAbilityState::OnStateEnded");
static_assert(offsetof(UAbilityTask_StartAbilityState, OnStateInterrupted) == 136, "Offset mismatch for UAbilityTask_StartAbilityState::OnStateInterrupted");

// /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
// Kind: Class; super: AbilityTask
class UAbilityTask_VisualizeTargeting
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate TimeElapsed; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_VisualizeTargeting, TimeElapsed) == 120, "Offset mismatch for UAbilityTask_VisualizeTargeting::TimeElapsed");

// /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitAbilityActivate
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnActivate; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitAbilityActivate, OnActivate) == 120, "Offset mismatch for UAbilityTask_WaitAbilityActivate::OnActivate");

// /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitAbilityCommit
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnCommit; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitAbilityCommit, OnCommit) == 120, "Offset mismatch for UAbilityTask_WaitAbilityCommit::OnCommit");

// /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitAttributeChange
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnChange; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0088
    void* ExternalOwner; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitAttributeChange, OnChange) == 120, "Offset mismatch for UAbilityTask_WaitAttributeChange::OnChange");
static_assert(offsetof(UAbilityTask_WaitAttributeChange, ExternalOwner) == 224, "Offset mismatch for UAbilityTask_WaitAttributeChange::ExternalOwner");

// /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitAttributeChangeRatioThreshold
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnChange; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0xA8]; // 0x0088
    void* ExternalOwner; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitAttributeChangeRatioThreshold, OnChange) == 120, "Offset mismatch for UAbilityTask_WaitAttributeChangeRatioThreshold::OnChange");
static_assert(offsetof(UAbilityTask_WaitAttributeChangeRatioThreshold, ExternalOwner) == 304, "Offset mismatch for UAbilityTask_WaitAttributeChangeRatioThreshold::ExternalOwner");

// /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitAttributeChangeThreshold
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnChange; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x58]; // 0x0088
    void* ExternalOwner; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitAttributeChangeThreshold, OnChange) == 120, "Offset mismatch for UAbilityTask_WaitAttributeChangeThreshold::OnChange");
static_assert(offsetof(UAbilityTask_WaitAttributeChangeThreshold, ExternalOwner) == 224, "Offset mismatch for UAbilityTask_WaitAttributeChangeThreshold::ExternalOwner");

// /Script/GameplayAbilities.AbilityTask_WaitCancel
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitCancel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnCancel; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitCancel, OnCancel) == 120, "Offset mismatch for UAbilityTask_WaitCancel::OnCancel");

// /Script/GameplayAbilities.AbilityTask_WaitConfirm
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitConfirm
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnConfirm; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitConfirm, OnConfirm) == 120, "Offset mismatch for UAbilityTask_WaitConfirm::OnConfirm");

// /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitConfirmCancel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnConfirm; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancel; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitConfirmCancel, OnConfirm) == 120, "Offset mismatch for UAbilityTask_WaitConfirmCancel::OnConfirm");
static_assert(offsetof(UAbilityTask_WaitConfirmCancel, OnCancel) == 136, "Offset mismatch for UAbilityTask_WaitConfirmCancel::OnCancel");

// /Script/GameplayAbilities.AbilityTask_WaitDelay
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitDelay
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnFinish; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitDelay, OnFinish) == 120, "Offset mismatch for UAbilityTask_WaitDelay::OnFinish");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayEffectApplied
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    void* ExternalOwner; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayEffectApplied, ExternalOwner) == 976, "Offset mismatch for UAbilityTask_WaitGameplayEffectApplied::ExternalOwner");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// Kind: Class; super: AbilityTask_WaitGameplayEffectApplied
class UAbilityTask_WaitGameplayEffectApplied_Self
{
public:
    std::uint8_t Pad_0000[0x3E8]; // 0x0000
    FMulticastInlineDelegate OnApplied; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayEffectApplied_Self, OnApplied) == 1000, "Offset mismatch for UAbilityTask_WaitGameplayEffectApplied_Self::OnApplied");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// Kind: Class; super: AbilityTask_WaitGameplayEffectApplied
class UAbilityTask_WaitGameplayEffectApplied_Target
{
public:
    std::uint8_t Pad_0000[0x3E8]; // 0x0000
    FMulticastInlineDelegate OnApplied; // 0x03E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayEffectApplied_Target, OnApplied) == 1000, "Offset mismatch for UAbilityTask_WaitGameplayEffectApplied_Target::OnApplied");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayEffectBlockedImmunity
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate bLocked; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x118]; // 0x0088
    void* ExternalOwner; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayEffectBlockedImmunity, bLocked) == 120, "Offset mismatch for UAbilityTask_WaitGameplayEffectBlockedImmunity::bLocked");
static_assert(offsetof(UAbilityTask_WaitGameplayEffectBlockedImmunity, ExternalOwner) == 416, "Offset mismatch for UAbilityTask_WaitGameplayEffectBlockedImmunity::ExternalOwner");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayEffectRemoved
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnRemoved; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate InvalidHandle; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayEffectRemoved, OnRemoved) == 120, "Offset mismatch for UAbilityTask_WaitGameplayEffectRemoved::OnRemoved");
static_assert(offsetof(UAbilityTask_WaitGameplayEffectRemoved, InvalidHandle) == 136, "Offset mismatch for UAbilityTask_WaitGameplayEffectRemoved::InvalidHandle");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayEffectStackChange
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnChange; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate InvalidHandle; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayEffectStackChange, OnChange) == 120, "Offset mismatch for UAbilityTask_WaitGameplayEffectStackChange::OnChange");
static_assert(offsetof(UAbilityTask_WaitGameplayEffectStackChange, InvalidHandle) == 136, "Offset mismatch for UAbilityTask_WaitGameplayEffectStackChange::InvalidHandle");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayEvent
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate EventReceived; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    void* OptionalExternalTarget; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayEvent, EventReceived) == 120, "Offset mismatch for UAbilityTask_WaitGameplayEvent::EventReceived");
static_assert(offsetof(UAbilityTask_WaitGameplayEvent, OptionalExternalTarget) == 144, "Offset mismatch for UAbilityTask_WaitGameplayEvent::OptionalExternalTarget");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayTag
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* OptionalExternalTarget; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayTag, OptionalExternalTarget) == 128, "Offset mismatch for UAbilityTask_WaitGameplayTag::OptionalExternalTarget");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// Kind: Class; super: AbilityTask_WaitGameplayTag
class UAbilityTask_WaitGameplayTagAdded
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    FMulticastInlineDelegate Added; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayTagAdded, Added) == 152, "Offset mismatch for UAbilityTask_WaitGameplayTagAdded::Added");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayTagCountChanged
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayTagCountChanged
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate TagCountChanged; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    void* OptionalExternalTarget; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayTagCountChanged, TagCountChanged) == 120, "Offset mismatch for UAbilityTask_WaitGameplayTagCountChanged::TagCountChanged");
static_assert(offsetof(UAbilityTask_WaitGameplayTagCountChanged, OptionalExternalTarget) == 144, "Offset mismatch for UAbilityTask_WaitGameplayTagCountChanged::OptionalExternalTarget");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitGameplayTagQuery
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    FMulticastInlineDelegate Triggered; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* OptionalExternalTarget; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayTagQuery, Triggered) == 248, "Offset mismatch for UAbilityTask_WaitGameplayTagQuery::Triggered");
static_assert(offsetof(UAbilityTask_WaitGameplayTagQuery, OptionalExternalTarget) == 264, "Offset mismatch for UAbilityTask_WaitGameplayTagQuery::OptionalExternalTarget");

// /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// Kind: Class; super: AbilityTask_WaitGameplayTag
class UAbilityTask_WaitGameplayTagRemoved
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    FMulticastInlineDelegate Removed; // 0x0098 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitGameplayTagRemoved, Removed) == 152, "Offset mismatch for UAbilityTask_WaitGameplayTagRemoved::Removed");

// /Script/GameplayAbilities.AbilityTask_WaitInputPress
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitInputPress
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnPress; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitInputPress, OnPress) == 120, "Offset mismatch for UAbilityTask_WaitInputPress::OnPress");

// /Script/GameplayAbilities.AbilityTask_WaitInputRelease
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitInputRelease
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnRelease; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitInputRelease, OnRelease) == 120, "Offset mismatch for UAbilityTask_WaitInputRelease::OnRelease");

// /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitMovementModeChange
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnChange; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitMovementModeChange, OnChange) == 120, "Offset mismatch for UAbilityTask_WaitMovementModeChange::OnChange");

// /Script/GameplayAbilities.AbilityTask_WaitOverlap
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitOverlap
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnOverlap; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAbilityTask_WaitOverlap, OnOverlap) == 120, "Offset mismatch for UAbilityTask_WaitOverlap::OnOverlap");

// /Script/GameplayAbilities.AbilityTask_WaitTargetData
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitTargetData
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate ValidData; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate Cancelled; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* TargetClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
    void* TargetActor; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitTargetData, ValidData) == 120, "Offset mismatch for UAbilityTask_WaitTargetData::ValidData");
static_assert(offsetof(UAbilityTask_WaitTargetData, Cancelled) == 136, "Offset mismatch for UAbilityTask_WaitTargetData::Cancelled");
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetClass) == 152, "Offset mismatch for UAbilityTask_WaitTargetData::TargetClass");
static_assert(offsetof(UAbilityTask_WaitTargetData, TargetActor) == 160, "Offset mismatch for UAbilityTask_WaitTargetData::TargetActor");

// /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
// Kind: Class; super: AbilityTask
class UAbilityTask_WaitVelocityChange
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FMulticastInlineDelegate OnVelocityChage; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> CachedMovementComponent; // 0x0088 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UAbilityTask_WaitVelocityChange, OnVelocityChage) == 120, "Offset mismatch for UAbilityTask_WaitVelocityChange::OnVelocityChage");
static_assert(offsetof(UAbilityTask_WaitVelocityChange, CachedMovementComponent) == 136, "Offset mismatch for UAbilityTask_WaitVelocityChange::CachedMovementComponent");

// /Script/GameplayAbilities.AdditionalEffectsGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UAdditionalEffectsGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bOnApplicationCopyDataFromOriginalSpec; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> OnApplicationGameplayEffects; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OnCompleteAlways; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OnCompleteNormal; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OnCompletePrematurely; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, bOnApplicationCopyDataFromOriginalSpec) == 40, "Offset mismatch for UAdditionalEffectsGameplayEffectComponent::bOnApplicationCopyDataFromOriginalSpec");
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnApplicationGameplayEffects) == 48, "Offset mismatch for UAdditionalEffectsGameplayEffectComponent::OnApplicationGameplayEffects");
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnCompleteAlways) == 64, "Offset mismatch for UAdditionalEffectsGameplayEffectComponent::OnCompleteAlways");
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnCompleteNormal) == 80, "Offset mismatch for UAdditionalEffectsGameplayEffectComponent::OnCompleteNormal");
static_assert(offsetof(UAdditionalEffectsGameplayEffectComponent, OnCompletePrematurely) == 96, "Offset mismatch for UAdditionalEffectsGameplayEffectComponent::OnCompletePrematurely");

// /Script/GameplayAbilities.AnimNotify_GameplayCue
// Kind: Class; super: AnimNotify
class UAnimNotify_GameplayCue
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t GameplayCue[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnimNotify_GameplayCue, GameplayCue) == 56, "Offset mismatch for UAnimNotify_GameplayCue::GameplayCue");

// /Script/GameplayAbilities.AnimNotify_GameplayCueState
// Kind: Class; super: AnimNotifyState
class UAnimNotify_GameplayCueState
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GameplayCue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAnimNotify_GameplayCueState, GameplayCue) == 48, "Offset mismatch for UAnimNotify_GameplayCueState::GameplayCue");

// /Script/GameplayAbilities.AssetTagsGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UAssetTagsGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InheritableAssetTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAssetTagsGameplayEffectComponent, InheritableAssetTags) == 40, "Offset mismatch for UAssetTagsGameplayEffectComponent::InheritableAssetTags");

// /Script/GameplayAbilities.AttributeSet
// Kind: Class; super: Object
class UAttributeSet
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UBlockAbilityTagsGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InheritableBlockedAbilityTagsContainer[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBlockAbilityTagsGameplayEffectComponent, InheritableBlockedAbilityTagsContainer) == 40, "Offset mismatch for UBlockAbilityTagsGameplayEffectComponent::InheritableBlockedAbilityTagsContainer");

// /Script/GameplayAbilities.CancelAbilityTagsGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UCancelAbilityTagsGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ComponentMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    std::uint8_t InheritableCancelAbilitiesWithTagsContainer[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableCancelAbilitiesWithoutTagsContainer[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCancelAbilityTagsGameplayEffectComponent, ComponentMode) == 40, "Offset mismatch for UCancelAbilityTagsGameplayEffectComponent::ComponentMode");
static_assert(offsetof(UCancelAbilityTagsGameplayEffectComponent, InheritableCancelAbilitiesWithTagsContainer) == 48, "Offset mismatch for UCancelAbilityTagsGameplayEffectComponent::InheritableCancelAbilitiesWithTagsContainer");
static_assert(offsetof(UCancelAbilityTagsGameplayEffectComponent, InheritableCancelAbilitiesWithoutTagsContainer) == 144, "Offset mismatch for UCancelAbilityTagsGameplayEffectComponent::InheritableCancelAbilitiesWithoutTagsContainer");

// /Script/GameplayAbilities.ChanceToApplyGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UChanceToApplyGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ChanceToApplyToTarget[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChanceToApplyGameplayEffectComponent, ChanceToApplyToTarget) == 40, "Offset mismatch for UChanceToApplyGameplayEffectComponent::ChanceToApplyToTarget");

// /Script/GameplayAbilities.CustomCanApplyGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UCustomCanApplyGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ApplicationRequirements; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomCanApplyGameplayEffectComponent, ApplicationRequirements) == 40, "Offset mismatch for UCustomCanApplyGameplayEffectComponent::ApplicationRequirements");

// /Script/GameplayAbilities.GameplayAbilitiesDeveloperSettings
// Kind: Class; super: DeveloperSettings
class UGameplayAbilitiesDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t AbilitySystemGlobalsClassName[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseDebugTargetFromHud; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    TArray<void*> GlobalAttributeSetDefaultsTableNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GlobalAttributeMetaDataTableName[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalGameplayCueManagerClass[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalGameplayCueManagerName[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    TArray<void*> GameplayCueNotifyPaths; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GlobalCurveTableName[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t PredictTargetGameplayEffects; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ReplicateActivationOwnedTags; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00D2
    std::uint8_t ActivateFailCanActivateAbilityTag[0x4]; // 0x00D4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailCooldownTag[0x4]; // 0x00D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailCostTag[0x4]; // 0x00DC (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailNetworkingTag[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailTagsBlockedTag[0x4]; // 0x00E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivateFailTagsMissingTag[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t GameplayTagResponseTableName[0x18]; // 0x00F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowGameplayModEvaluationChannels; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultGameplayModEvaluationChannel; // 0x0109 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x010A
    FName GameplayModEvaluationChannelAliases; // 0x010C (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0004[0x20]; // 0x0114
    std::int32_t MinimalReplicationTagCountBits; // 0x0134 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, AbilitySystemGlobalsClassName) == 48, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::AbilitySystemGlobalsClassName");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, bUseDebugTargetFromHud) == 72, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::bUseDebugTargetFromHud");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GlobalAttributeSetDefaultsTableNames) == 80, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GlobalAttributeSetDefaultsTableNames");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GlobalAttributeMetaDataTableName) == 96, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GlobalAttributeMetaDataTableName");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GlobalGameplayCueManagerClass) == 120, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GlobalGameplayCueManagerClass");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GlobalGameplayCueManagerName) == 144, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GlobalGameplayCueManagerName");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GameplayCueNotifyPaths) == 168, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GameplayCueNotifyPaths");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GlobalCurveTableName) == 184, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GlobalCurveTableName");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, PredictTargetGameplayEffects) == 208, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::PredictTargetGameplayEffects");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, ReplicateActivationOwnedTags) == 209, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::ReplicateActivationOwnedTags");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, ActivateFailCanActivateAbilityTag) == 212, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::ActivateFailCanActivateAbilityTag");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, ActivateFailCooldownTag) == 216, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::ActivateFailCooldownTag");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, ActivateFailCostTag) == 220, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::ActivateFailCostTag");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, ActivateFailNetworkingTag) == 224, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::ActivateFailNetworkingTag");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, ActivateFailTagsBlockedTag) == 228, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::ActivateFailTagsBlockedTag");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, ActivateFailTagsMissingTag) == 232, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::ActivateFailTagsMissingTag");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GameplayTagResponseTableName) == 240, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GameplayTagResponseTableName");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, bAllowGameplayModEvaluationChannels) == 264, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::bAllowGameplayModEvaluationChannels");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, DefaultGameplayModEvaluationChannel) == 265, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::DefaultGameplayModEvaluationChannel");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, GameplayModEvaluationChannelAliases) == 268, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::GameplayModEvaluationChannelAliases");
static_assert(offsetof(UGameplayAbilitiesDeveloperSettings, MinimalReplicationTagCountBits) == 308, "Offset mismatch for UGameplayAbilitiesDeveloperSettings::MinimalReplicationTagCountBits");

// /Script/GameplayAbilities.GameplayAbilitiesEditorDeveloperSettings
// Kind: Class; super: DeveloperSettingsBackedByCVars
class UGameplayAbilitiesEditorDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIgnoreCooldowns; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreCosts; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    float AbilitySystemGlobalScaler; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DebugDrawMaxDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGameplayAbilitiesEditorDeveloperSettings, bIgnoreCooldowns) == 48, "Offset mismatch for UGameplayAbilitiesEditorDeveloperSettings::bIgnoreCooldowns");
static_assert(offsetof(UGameplayAbilitiesEditorDeveloperSettings, bIgnoreCosts) == 49, "Offset mismatch for UGameplayAbilitiesEditorDeveloperSettings::bIgnoreCosts");
static_assert(offsetof(UGameplayAbilitiesEditorDeveloperSettings, AbilitySystemGlobalScaler) == 52, "Offset mismatch for UGameplayAbilitiesEditorDeveloperSettings::AbilitySystemGlobalScaler");
static_assert(offsetof(UGameplayAbilitiesEditorDeveloperSettings, DebugDrawMaxDistance) == 56, "Offset mismatch for UGameplayAbilitiesEditorDeveloperSettings::DebugDrawMaxDistance");

// /Script/GameplayAbilities.GameplayAbility
// Kind: Class; super: Object
class UGameplayAbility
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AbilityTags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bReplicateInputDirectly; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RemoteInstanceEnded; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CA
    std::uint8_t ReplicationPolicy; // 0x00CE (Size: 0x1, Type: ByteProperty)
    std::uint8_t InstancingPolicy; // 0x00CF (Size: 0x1, Type: ByteProperty)
    std::uint8_t bServerRespectsRemoteAbilityCancellation; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRetriggerInstancedAbility; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00D2
    std::uint8_t CurrentActivationInfo[0x14]; // 0x00D4 (Size: 0x14, Type: StructProperty)
    std::uint8_t CurrentEventData[0xC0]; // 0x00E8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t NetExecutionPolicy; // 0x01A8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetSecurityPolicy; // 0x01A9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x6]; // 0x01AA
    void* CostGameplayEffectClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> AbilityTriggers; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    void* CooldownGameplayEffectClass; // 0x01C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CancelAbilitiesWithTag[0x20]; // 0x01D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockAbilitiesWithTag[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationOwnedTags[0x20]; // 0x0210 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationRequiredTags[0x20]; // 0x0230 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationBlockedTags[0x20]; // 0x0250 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceRequiredTags[0x20]; // 0x0270 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceBlockedTags[0x20]; // 0x0290 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetRequiredTags[0x20]; // 0x02B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetBlockedTags[0x40]; // 0x02D0 (Size: 0x40, Type: StructProperty)
    TArray<void*> ActiveTasks; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0320
    void* CurrentMontage; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x30]; // 0x0338
    std::uint8_t bIsActive; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAbilityEnding; // 0x0369 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCancelable; // 0x036A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBlockingOtherAbilities; // 0x036B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayAbility, AbilityTags) == 168, "Offset mismatch for UGameplayAbility::AbilityTags");
static_assert(offsetof(UGameplayAbility, bReplicateInputDirectly) == 200, "Offset mismatch for UGameplayAbility::bReplicateInputDirectly");
static_assert(offsetof(UGameplayAbility, RemoteInstanceEnded) == 201, "Offset mismatch for UGameplayAbility::RemoteInstanceEnded");
static_assert(offsetof(UGameplayAbility, ReplicationPolicy) == 206, "Offset mismatch for UGameplayAbility::ReplicationPolicy");
static_assert(offsetof(UGameplayAbility, InstancingPolicy) == 207, "Offset mismatch for UGameplayAbility::InstancingPolicy");
static_assert(offsetof(UGameplayAbility, bServerRespectsRemoteAbilityCancellation) == 208, "Offset mismatch for UGameplayAbility::bServerRespectsRemoteAbilityCancellation");
static_assert(offsetof(UGameplayAbility, bRetriggerInstancedAbility) == 209, "Offset mismatch for UGameplayAbility::bRetriggerInstancedAbility");
static_assert(offsetof(UGameplayAbility, CurrentActivationInfo) == 212, "Offset mismatch for UGameplayAbility::CurrentActivationInfo");
static_assert(offsetof(UGameplayAbility, CurrentEventData) == 232, "Offset mismatch for UGameplayAbility::CurrentEventData");
static_assert(offsetof(UGameplayAbility, NetExecutionPolicy) == 424, "Offset mismatch for UGameplayAbility::NetExecutionPolicy");
static_assert(offsetof(UGameplayAbility, NetSecurityPolicy) == 425, "Offset mismatch for UGameplayAbility::NetSecurityPolicy");
static_assert(offsetof(UGameplayAbility, CostGameplayEffectClass) == 432, "Offset mismatch for UGameplayAbility::CostGameplayEffectClass");
static_assert(offsetof(UGameplayAbility, AbilityTriggers) == 440, "Offset mismatch for UGameplayAbility::AbilityTriggers");
static_assert(offsetof(UGameplayAbility, CooldownGameplayEffectClass) == 456, "Offset mismatch for UGameplayAbility::CooldownGameplayEffectClass");
static_assert(offsetof(UGameplayAbility, CancelAbilitiesWithTag) == 464, "Offset mismatch for UGameplayAbility::CancelAbilitiesWithTag");
static_assert(offsetof(UGameplayAbility, BlockAbilitiesWithTag) == 496, "Offset mismatch for UGameplayAbility::BlockAbilitiesWithTag");
static_assert(offsetof(UGameplayAbility, ActivationOwnedTags) == 528, "Offset mismatch for UGameplayAbility::ActivationOwnedTags");
static_assert(offsetof(UGameplayAbility, ActivationRequiredTags) == 560, "Offset mismatch for UGameplayAbility::ActivationRequiredTags");
static_assert(offsetof(UGameplayAbility, ActivationBlockedTags) == 592, "Offset mismatch for UGameplayAbility::ActivationBlockedTags");
static_assert(offsetof(UGameplayAbility, SourceRequiredTags) == 624, "Offset mismatch for UGameplayAbility::SourceRequiredTags");
static_assert(offsetof(UGameplayAbility, SourceBlockedTags) == 656, "Offset mismatch for UGameplayAbility::SourceBlockedTags");
static_assert(offsetof(UGameplayAbility, TargetRequiredTags) == 688, "Offset mismatch for UGameplayAbility::TargetRequiredTags");
static_assert(offsetof(UGameplayAbility, TargetBlockedTags) == 720, "Offset mismatch for UGameplayAbility::TargetBlockedTags");
static_assert(offsetof(UGameplayAbility, ActiveTasks) == 784, "Offset mismatch for UGameplayAbility::ActiveTasks");
static_assert(offsetof(UGameplayAbility, CurrentMontage) == 816, "Offset mismatch for UGameplayAbility::CurrentMontage");
static_assert(offsetof(UGameplayAbility, bIsActive) == 872, "Offset mismatch for UGameplayAbility::bIsActive");
static_assert(offsetof(UGameplayAbility, bIsAbilityEnding) == 873, "Offset mismatch for UGameplayAbility::bIsAbilityEnding");
static_assert(offsetof(UGameplayAbility, bIsCancelable) == 874, "Offset mismatch for UGameplayAbility::bIsCancelable");
static_assert(offsetof(UGameplayAbility, bIsBlockingOtherAbilities) == 875, "Offset mismatch for UGameplayAbility::bIsBlockingOtherAbilities");

// /Script/GameplayAbilities.GameplayAbilityBlueprint
// Kind: Class; super: Blueprint
class UGameplayAbilityBlueprint
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* ParentClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BlueprintType; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHasBeenRegenerated; // 0x0061 (Size: 0x1, Type: BoolProperty)
    // 0x0061 BoolProperty bIsRegeneratingOnLoad (shared storage)
    // 0x0061 BoolProperty bRecompileOnLoad (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0062
    std::int32_t BlueprintSystemVersion; // 0x0064 (Size: 0x4, Type: IntProperty)
    void* SimpleConstructionScript; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ComponentTemplates; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Timelines; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentClassOverrides; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* InheritableComponentHandler; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayAbilityBlueprint, ParentClass) == 88, "Offset mismatch for UGameplayAbilityBlueprint::ParentClass");
static_assert(offsetof(UGameplayAbilityBlueprint, BlueprintType) == 96, "Offset mismatch for UGameplayAbilityBlueprint::BlueprintType");
static_assert(offsetof(UGameplayAbilityBlueprint, bHasBeenRegenerated) == 97, "Offset mismatch for UGameplayAbilityBlueprint::bHasBeenRegenerated");
static_assert(offsetof(UGameplayAbilityBlueprint, BlueprintSystemVersion) == 100, "Offset mismatch for UGameplayAbilityBlueprint::BlueprintSystemVersion");
static_assert(offsetof(UGameplayAbilityBlueprint, SimpleConstructionScript) == 104, "Offset mismatch for UGameplayAbilityBlueprint::SimpleConstructionScript");
static_assert(offsetof(UGameplayAbilityBlueprint, ComponentTemplates) == 112, "Offset mismatch for UGameplayAbilityBlueprint::ComponentTemplates");
static_assert(offsetof(UGameplayAbilityBlueprint, Timelines) == 128, "Offset mismatch for UGameplayAbilityBlueprint::Timelines");
static_assert(offsetof(UGameplayAbilityBlueprint, ComponentClassOverrides) == 144, "Offset mismatch for UGameplayAbilityBlueprint::ComponentClassOverrides");
static_assert(offsetof(UGameplayAbilityBlueprint, InheritableComponentHandler) == 160, "Offset mismatch for UGameplayAbilityBlueprint::InheritableComponentHandler");

// /Script/GameplayAbilities.GameplayAbilitySet
// Kind: Class; super: DataAsset
class UGameplayAbilitySet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Abilities; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayAbilitySet, Abilities) == 40, "Offset mismatch for UGameplayAbilitySet::Abilities");

// /Script/GameplayAbilities.GameplayAbilityTargetActor
// Kind: Class; super: Actor
class UGameplayAbilityTargetActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ShouldProduceTargetDataOnServer; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0271
    std::uint8_t StartLocation[0xC0]; // 0x0280 (Size: 0xC0, Type: StructProperty)
    void* PrimaryPC; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* OwningAbility; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDestroyOnConfirmation; // 0x0350 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0351
    void* SourceActor; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReticleParams[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    void* ReticleClass; // 0x0378 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Filter[0x10]; // 0x0380 (Size: 0x10, Type: StructProperty)
    std::uint8_t bDebug; // 0x0390 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x17]; // 0x0391
    void* GenericDelegateBoundASC; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayAbilityTargetActor, ShouldProduceTargetDataOnServer) == 624, "Offset mismatch for UGameplayAbilityTargetActor::ShouldProduceTargetDataOnServer");
static_assert(offsetof(UGameplayAbilityTargetActor, StartLocation) == 640, "Offset mismatch for UGameplayAbilityTargetActor::StartLocation");
static_assert(offsetof(UGameplayAbilityTargetActor, PrimaryPC) == 832, "Offset mismatch for UGameplayAbilityTargetActor::PrimaryPC");
static_assert(offsetof(UGameplayAbilityTargetActor, OwningAbility) == 840, "Offset mismatch for UGameplayAbilityTargetActor::OwningAbility");
static_assert(offsetof(UGameplayAbilityTargetActor, bDestroyOnConfirmation) == 848, "Offset mismatch for UGameplayAbilityTargetActor::bDestroyOnConfirmation");
static_assert(offsetof(UGameplayAbilityTargetActor, SourceActor) == 856, "Offset mismatch for UGameplayAbilityTargetActor::SourceActor");
static_assert(offsetof(UGameplayAbilityTargetActor, ReticleParams) == 864, "Offset mismatch for UGameplayAbilityTargetActor::ReticleParams");
static_assert(offsetof(UGameplayAbilityTargetActor, ReticleClass) == 888, "Offset mismatch for UGameplayAbilityTargetActor::ReticleClass");
static_assert(offsetof(UGameplayAbilityTargetActor, Filter) == 896, "Offset mismatch for UGameplayAbilityTargetActor::Filter");
static_assert(offsetof(UGameplayAbilityTargetActor, bDebug) == 912, "Offset mismatch for UGameplayAbilityTargetActor::bDebug");
static_assert(offsetof(UGameplayAbilityTargetActor, GenericDelegateBoundASC) == 936, "Offset mismatch for UGameplayAbilityTargetActor::GenericDelegateBoundASC");

// /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// Kind: Class; super: GameplayAbilityTargetActor_GroundTrace
class UGameplayAbilityTargetActor_ActorPlacement
{
public:
    std::uint8_t Pad_0000[0x3F0]; // 0x0000
    void* PlacedActorClass; // 0x03F0 (Size: 0x8, Type: ClassProperty)
    void* PlacedActorMaterial; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayAbilityTargetActor_ActorPlacement, PlacedActorClass) == 1008, "Offset mismatch for UGameplayAbilityTargetActor_ActorPlacement::PlacedActorClass");
static_assert(offsetof(UGameplayAbilityTargetActor_ActorPlacement, PlacedActorMaterial) == 1016, "Offset mismatch for UGameplayAbilityTargetActor_ActorPlacement::PlacedActorMaterial");

// /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// Kind: Class; super: GameplayAbilityTargetActor_Trace
class UGameplayAbilityTargetActor_GroundTrace
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    float CollisionRadius; // 0x03D0 (Size: 0x4, Type: FloatProperty)
    float CollisionHeight; // 0x03D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGameplayAbilityTargetActor_GroundTrace, CollisionRadius) == 976, "Offset mismatch for UGameplayAbilityTargetActor_GroundTrace::CollisionRadius");
static_assert(offsetof(UGameplayAbilityTargetActor_GroundTrace, CollisionHeight) == 980, "Offset mismatch for UGameplayAbilityTargetActor_GroundTrace::CollisionHeight");

// /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
// Kind: Class; super: GameplayAbilityTargetActor
class UGameplayAbilityTargetActor_Radius
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    float Radius; // 0x03B0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGameplayAbilityTargetActor_Radius, Radius) == 944, "Offset mismatch for UGameplayAbilityTargetActor_Radius::Radius");

// /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// Kind: Class; super: GameplayAbilityTargetActor_Trace
class UGameplayAbilityTargetActor_SingleLineTrace
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    float MaxRange; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceProfile[0x4]; // 0x03B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t bTraceAffectsAimPitch; // 0x03B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayAbilityTargetActor_SingleLineTrace, MaxRange) == 944, "Offset mismatch for UGameplayAbilityTargetActor_SingleLineTrace::MaxRange");
static_assert(offsetof(UGameplayAbilityTargetActor_SingleLineTrace, TraceProfile) == 948, "Offset mismatch for UGameplayAbilityTargetActor_SingleLineTrace::TraceProfile");
static_assert(offsetof(UGameplayAbilityTargetActor_SingleLineTrace, bTraceAffectsAimPitch) == 952, "Offset mismatch for UGameplayAbilityTargetActor_SingleLineTrace::bTraceAffectsAimPitch");

// /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
// Kind: Class; super: GameplayAbilityTargetActor
class UGameplayAbilityTargetActor_Trace
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    float MaxRange; // 0x03B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceProfile[0x4]; // 0x03B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t bTraceAffectsAimPitch; // 0x03B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayAbilityTargetActor_Trace, MaxRange) == 944, "Offset mismatch for UGameplayAbilityTargetActor_Trace::MaxRange");
static_assert(offsetof(UGameplayAbilityTargetActor_Trace, TraceProfile) == 948, "Offset mismatch for UGameplayAbilityTargetActor_Trace::TraceProfile");
static_assert(offsetof(UGameplayAbilityTargetActor_Trace, bTraceAffectsAimPitch) == 952, "Offset mismatch for UGameplayAbilityTargetActor_Trace::bTraceAffectsAimPitch");

// /Script/GameplayAbilities.GameplayAbilityWorldReticle
// Kind: Class; super: Actor
class UGameplayAbilityWorldReticle
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t Parameters[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFaceOwnerFlat; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToTargetedActor; // 0x0289 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTargetValid; // 0x028A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTargetAnActor; // 0x028B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x028C
    void* PrimaryPC; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* TargetingActor; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayAbilityWorldReticle, Parameters) == 624, "Offset mismatch for UGameplayAbilityWorldReticle::Parameters");
static_assert(offsetof(UGameplayAbilityWorldReticle, bFaceOwnerFlat) == 648, "Offset mismatch for UGameplayAbilityWorldReticle::bFaceOwnerFlat");
static_assert(offsetof(UGameplayAbilityWorldReticle, bSnapToTargetedActor) == 649, "Offset mismatch for UGameplayAbilityWorldReticle::bSnapToTargetedActor");
static_assert(offsetof(UGameplayAbilityWorldReticle, bIsTargetValid) == 650, "Offset mismatch for UGameplayAbilityWorldReticle::bIsTargetValid");
static_assert(offsetof(UGameplayAbilityWorldReticle, bIsTargetAnActor) == 651, "Offset mismatch for UGameplayAbilityWorldReticle::bIsTargetAnActor");
static_assert(offsetof(UGameplayAbilityWorldReticle, PrimaryPC) == 656, "Offset mismatch for UGameplayAbilityWorldReticle::PrimaryPC");
static_assert(offsetof(UGameplayAbilityWorldReticle, TargetingActor) == 664, "Offset mismatch for UGameplayAbilityWorldReticle::TargetingActor");

// /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// Kind: Class; super: GameplayAbilityWorldReticle
class UGameplayAbilityWorldReticle_ActorVisualization
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    void* CollisionComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> VisualizationComponents; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayAbilityWorldReticle_ActorVisualization, CollisionComponent) == 672, "Offset mismatch for UGameplayAbilityWorldReticle_ActorVisualization::CollisionComponent");
static_assert(offsetof(UGameplayAbilityWorldReticle_ActorVisualization, VisualizationComponents) == 680, "Offset mismatch for UGameplayAbilityWorldReticle_ActorVisualization::VisualizationComponents");

// /Script/GameplayAbilities.GameplayAbility_CharacterJump
// Kind: Class; super: GameplayAbility
class UGameplayAbility_CharacterJump
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AbilityTags[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t bReplicateInputDirectly; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RemoteInstanceEnded; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00CA
    std::uint8_t ReplicationPolicy; // 0x00CE (Size: 0x1, Type: ByteProperty)
    std::uint8_t InstancingPolicy; // 0x00CF (Size: 0x1, Type: ByteProperty)
    std::uint8_t bServerRespectsRemoteAbilityCancellation; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRetriggerInstancedAbility; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x00D2
    std::uint8_t CurrentActivationInfo[0x14]; // 0x00D4 (Size: 0x14, Type: StructProperty)
    std::uint8_t CurrentEventData[0xC0]; // 0x00E8 (Size: 0xC0, Type: StructProperty)
    std::uint8_t NetExecutionPolicy; // 0x01A8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetSecurityPolicy; // 0x01A9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x6]; // 0x01AA
    void* CostGameplayEffectClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> AbilityTriggers; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    void* CooldownGameplayEffectClass; // 0x01C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CancelAbilitiesWithTag[0x20]; // 0x01D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockAbilitiesWithTag[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationOwnedTags[0x20]; // 0x0210 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationRequiredTags[0x20]; // 0x0230 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivationBlockedTags[0x20]; // 0x0250 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceRequiredTags[0x20]; // 0x0270 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceBlockedTags[0x20]; // 0x0290 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetRequiredTags[0x20]; // 0x02B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TargetBlockedTags[0x40]; // 0x02D0 (Size: 0x40, Type: StructProperty)
    TArray<void*> ActiveTasks; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0320
    void* CurrentMontage; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x30]; // 0x0338
    std::uint8_t bIsActive; // 0x0368 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAbilityEnding; // 0x0369 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCancelable; // 0x036A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBlockingOtherAbilities; // 0x036B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayAbility_CharacterJump, AbilityTags) == 168, "Offset mismatch for UGameplayAbility_CharacterJump::AbilityTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, bReplicateInputDirectly) == 200, "Offset mismatch for UGameplayAbility_CharacterJump::bReplicateInputDirectly");
static_assert(offsetof(UGameplayAbility_CharacterJump, RemoteInstanceEnded) == 201, "Offset mismatch for UGameplayAbility_CharacterJump::RemoteInstanceEnded");
static_assert(offsetof(UGameplayAbility_CharacterJump, ReplicationPolicy) == 206, "Offset mismatch for UGameplayAbility_CharacterJump::ReplicationPolicy");
static_assert(offsetof(UGameplayAbility_CharacterJump, InstancingPolicy) == 207, "Offset mismatch for UGameplayAbility_CharacterJump::InstancingPolicy");
static_assert(offsetof(UGameplayAbility_CharacterJump, bServerRespectsRemoteAbilityCancellation) == 208, "Offset mismatch for UGameplayAbility_CharacterJump::bServerRespectsRemoteAbilityCancellation");
static_assert(offsetof(UGameplayAbility_CharacterJump, bRetriggerInstancedAbility) == 209, "Offset mismatch for UGameplayAbility_CharacterJump::bRetriggerInstancedAbility");
static_assert(offsetof(UGameplayAbility_CharacterJump, CurrentActivationInfo) == 212, "Offset mismatch for UGameplayAbility_CharacterJump::CurrentActivationInfo");
static_assert(offsetof(UGameplayAbility_CharacterJump, CurrentEventData) == 232, "Offset mismatch for UGameplayAbility_CharacterJump::CurrentEventData");
static_assert(offsetof(UGameplayAbility_CharacterJump, NetExecutionPolicy) == 424, "Offset mismatch for UGameplayAbility_CharacterJump::NetExecutionPolicy");
static_assert(offsetof(UGameplayAbility_CharacterJump, NetSecurityPolicy) == 425, "Offset mismatch for UGameplayAbility_CharacterJump::NetSecurityPolicy");
static_assert(offsetof(UGameplayAbility_CharacterJump, CostGameplayEffectClass) == 432, "Offset mismatch for UGameplayAbility_CharacterJump::CostGameplayEffectClass");
static_assert(offsetof(UGameplayAbility_CharacterJump, AbilityTriggers) == 440, "Offset mismatch for UGameplayAbility_CharacterJump::AbilityTriggers");
static_assert(offsetof(UGameplayAbility_CharacterJump, CooldownGameplayEffectClass) == 456, "Offset mismatch for UGameplayAbility_CharacterJump::CooldownGameplayEffectClass");
static_assert(offsetof(UGameplayAbility_CharacterJump, CancelAbilitiesWithTag) == 464, "Offset mismatch for UGameplayAbility_CharacterJump::CancelAbilitiesWithTag");
static_assert(offsetof(UGameplayAbility_CharacterJump, BlockAbilitiesWithTag) == 496, "Offset mismatch for UGameplayAbility_CharacterJump::BlockAbilitiesWithTag");
static_assert(offsetof(UGameplayAbility_CharacterJump, ActivationOwnedTags) == 528, "Offset mismatch for UGameplayAbility_CharacterJump::ActivationOwnedTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, ActivationRequiredTags) == 560, "Offset mismatch for UGameplayAbility_CharacterJump::ActivationRequiredTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, ActivationBlockedTags) == 592, "Offset mismatch for UGameplayAbility_CharacterJump::ActivationBlockedTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, SourceRequiredTags) == 624, "Offset mismatch for UGameplayAbility_CharacterJump::SourceRequiredTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, SourceBlockedTags) == 656, "Offset mismatch for UGameplayAbility_CharacterJump::SourceBlockedTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, TargetRequiredTags) == 688, "Offset mismatch for UGameplayAbility_CharacterJump::TargetRequiredTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, TargetBlockedTags) == 720, "Offset mismatch for UGameplayAbility_CharacterJump::TargetBlockedTags");
static_assert(offsetof(UGameplayAbility_CharacterJump, ActiveTasks) == 784, "Offset mismatch for UGameplayAbility_CharacterJump::ActiveTasks");
static_assert(offsetof(UGameplayAbility_CharacterJump, CurrentMontage) == 816, "Offset mismatch for UGameplayAbility_CharacterJump::CurrentMontage");
static_assert(offsetof(UGameplayAbility_CharacterJump, bIsActive) == 872, "Offset mismatch for UGameplayAbility_CharacterJump::bIsActive");
static_assert(offsetof(UGameplayAbility_CharacterJump, bIsAbilityEnding) == 873, "Offset mismatch for UGameplayAbility_CharacterJump::bIsAbilityEnding");
static_assert(offsetof(UGameplayAbility_CharacterJump, bIsCancelable) == 874, "Offset mismatch for UGameplayAbility_CharacterJump::bIsCancelable");
static_assert(offsetof(UGameplayAbility_CharacterJump, bIsBlockingOtherAbilities) == 875, "Offset mismatch for UGameplayAbility_CharacterJump::bIsBlockingOtherAbilities");

// /Script/GameplayAbilities.GameplayAbility_Montage
// Kind: Class; super: GameplayAbility
class UGameplayAbility_Montage
{
public:
    std::uint8_t Pad_0000[0x380]; // 0x0000
    void* MontageToPlay; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    float PlayRate; // 0x0388 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SectionName[0x4]; // 0x038C (Size: 0x4, Type: NameProperty)
    TArray<void*> GameplayEffectClassesWhileAnimating; // 0x0390 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameplayEffectsWhileAnimating; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayAbility_Montage, MontageToPlay) == 896, "Offset mismatch for UGameplayAbility_Montage::MontageToPlay");
static_assert(offsetof(UGameplayAbility_Montage, PlayRate) == 904, "Offset mismatch for UGameplayAbility_Montage::PlayRate");
static_assert(offsetof(UGameplayAbility_Montage, SectionName) == 908, "Offset mismatch for UGameplayAbility_Montage::SectionName");
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectClassesWhileAnimating) == 912, "Offset mismatch for UGameplayAbility_Montage::GameplayEffectClassesWhileAnimating");
static_assert(offsetof(UGameplayAbility_Montage, GameplayEffectsWhileAnimating) == 928, "Offset mismatch for UGameplayAbility_Montage::GameplayEffectsWhileAnimating");

// /Script/GameplayAbilities.GameplayCueFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGameplayCueFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayCueInterface
// Kind: Class; super: Interface
class UGameplayCueInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayCueManager
// Kind: Class; super: DataAsset
class UGameplayCueManager
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t RuntimeGameplayCueObjectLibrary[0x50]; // 0x0040 (Size: 0x50, Type: StructProperty)
    std::uint8_t EditorGameplayCueObjectLibrary[0x108]; // 0x0090 (Size: 0x108, Type: StructProperty)
    TArray<void*> LoadedGameplayCueNotifyClasses; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GameplayCueClassesForPreallocation; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingExecuteCues; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t GameplayCueSendContextCount; // 0x01C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01CC
    TArray<void*> PreallocationInfoList_Internal; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayCueManager, RuntimeGameplayCueObjectLibrary) == 64, "Offset mismatch for UGameplayCueManager::RuntimeGameplayCueObjectLibrary");
static_assert(offsetof(UGameplayCueManager, EditorGameplayCueObjectLibrary) == 144, "Offset mismatch for UGameplayCueManager::EditorGameplayCueObjectLibrary");
static_assert(offsetof(UGameplayCueManager, LoadedGameplayCueNotifyClasses) == 408, "Offset mismatch for UGameplayCueManager::LoadedGameplayCueNotifyClasses");
static_assert(offsetof(UGameplayCueManager, GameplayCueClassesForPreallocation) == 424, "Offset mismatch for UGameplayCueManager::GameplayCueClassesForPreallocation");
static_assert(offsetof(UGameplayCueManager, PendingExecuteCues) == 440, "Offset mismatch for UGameplayCueManager::PendingExecuteCues");
static_assert(offsetof(UGameplayCueManager, GameplayCueSendContextCount) == 456, "Offset mismatch for UGameplayCueManager::GameplayCueSendContextCount");
static_assert(offsetof(UGameplayCueManager, PreallocationInfoList_Internal) == 464, "Offset mismatch for UGameplayCueManager::PreallocationInfoList_Internal");

// /Script/GameplayAbilities.GameplayCueNotify_Actor
// Kind: Class; super: Actor
class UGameplayCueNotify_Actor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bAutoDestroyOnRemove; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0271
    float AutoDestroyDelay; // 0x0274 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WarnIfTimelineIsStillRunning; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WarnIfLatentActionIsStillRunning; // 0x0279 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x027A
    std::uint8_t GameplayCueTag[0x4]; // 0x027C (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCueName[0x4]; // 0x0280 (Size: 0x4, Type: NameProperty)
    std::uint8_t bAutoAttachToOwner; // 0x0284 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsOverride; // 0x0285 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUniqueInstancePerInstigator; // 0x0286 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUniqueInstancePerSourceObject; // 0x0287 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleOnActiveEvents; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleWhileActiveEvents; // 0x0289 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x028A
    std::int32_t NumPreallocatedInstances; // 0x028C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGameplayCueNotify_Actor, bAutoDestroyOnRemove) == 624, "Offset mismatch for UGameplayCueNotify_Actor::bAutoDestroyOnRemove");
static_assert(offsetof(UGameplayCueNotify_Actor, AutoDestroyDelay) == 628, "Offset mismatch for UGameplayCueNotify_Actor::AutoDestroyDelay");
static_assert(offsetof(UGameplayCueNotify_Actor, WarnIfTimelineIsStillRunning) == 632, "Offset mismatch for UGameplayCueNotify_Actor::WarnIfTimelineIsStillRunning");
static_assert(offsetof(UGameplayCueNotify_Actor, WarnIfLatentActionIsStillRunning) == 633, "Offset mismatch for UGameplayCueNotify_Actor::WarnIfLatentActionIsStillRunning");
static_assert(offsetof(UGameplayCueNotify_Actor, GameplayCueTag) == 636, "Offset mismatch for UGameplayCueNotify_Actor::GameplayCueTag");
static_assert(offsetof(UGameplayCueNotify_Actor, GameplayCueName) == 640, "Offset mismatch for UGameplayCueNotify_Actor::GameplayCueName");
static_assert(offsetof(UGameplayCueNotify_Actor, bAutoAttachToOwner) == 644, "Offset mismatch for UGameplayCueNotify_Actor::bAutoAttachToOwner");
static_assert(offsetof(UGameplayCueNotify_Actor, IsOverride) == 645, "Offset mismatch for UGameplayCueNotify_Actor::IsOverride");
static_assert(offsetof(UGameplayCueNotify_Actor, bUniqueInstancePerInstigator) == 646, "Offset mismatch for UGameplayCueNotify_Actor::bUniqueInstancePerInstigator");
static_assert(offsetof(UGameplayCueNotify_Actor, bUniqueInstancePerSourceObject) == 647, "Offset mismatch for UGameplayCueNotify_Actor::bUniqueInstancePerSourceObject");
static_assert(offsetof(UGameplayCueNotify_Actor, bAllowMultipleOnActiveEvents) == 648, "Offset mismatch for UGameplayCueNotify_Actor::bAllowMultipleOnActiveEvents");
static_assert(offsetof(UGameplayCueNotify_Actor, bAllowMultipleWhileActiveEvents) == 649, "Offset mismatch for UGameplayCueNotify_Actor::bAllowMultipleWhileActiveEvents");
static_assert(offsetof(UGameplayCueNotify_Actor, NumPreallocatedInstances) == 652, "Offset mismatch for UGameplayCueNotify_Actor::NumPreallocatedInstances");

// /Script/GameplayAbilities.GameplayCueNotify_Burst
// Kind: Class; super: GameplayCueNotify_Static
class UGameplayCueNotify_Burst
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t DefaultSpawnCondition[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultPlacementInfo[0x40]; // 0x0070 (Size: 0x40, Type: StructProperty)
    std::uint8_t BurstEffects[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayCueNotify_Burst, DefaultSpawnCondition) == 56, "Offset mismatch for UGameplayCueNotify_Burst::DefaultSpawnCondition");
static_assert(offsetof(UGameplayCueNotify_Burst, DefaultPlacementInfo) == 112, "Offset mismatch for UGameplayCueNotify_Burst::DefaultPlacementInfo");
static_assert(offsetof(UGameplayCueNotify_Burst, BurstEffects) == 176, "Offset mismatch for UGameplayCueNotify_Burst::BurstEffects");

// /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
// Kind: Class; super: GameplayCueNotify_Actor
class UGameplayCueNotify_BurstLatent
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    std::uint8_t DefaultSpawnCondition[0x38]; // 0x02B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultPlacementInfo[0x40]; // 0x02F0 (Size: 0x40, Type: StructProperty)
    std::uint8_t BurstEffects[0x298]; // 0x0330 (Size: 0x298, Type: StructProperty)
    std::uint8_t BurstSpawnResults[0x1]; // 0x05C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayCueNotify_BurstLatent, DefaultSpawnCondition) == 696, "Offset mismatch for UGameplayCueNotify_BurstLatent::DefaultSpawnCondition");
static_assert(offsetof(UGameplayCueNotify_BurstLatent, DefaultPlacementInfo) == 752, "Offset mismatch for UGameplayCueNotify_BurstLatent::DefaultPlacementInfo");
static_assert(offsetof(UGameplayCueNotify_BurstLatent, BurstEffects) == 816, "Offset mismatch for UGameplayCueNotify_BurstLatent::BurstEffects");
static_assert(offsetof(UGameplayCueNotify_BurstLatent, BurstSpawnResults) == 1480, "Offset mismatch for UGameplayCueNotify_BurstLatent::BurstSpawnResults");

// /Script/GameplayAbilities.GameplayCueNotify_HitImpact
// Kind: Class; super: GameplayCueNotify_Static
class UGameplayCueNotify_HitImpact
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Sound; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* ParticleSystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayCueNotify_HitImpact, Sound) == 56, "Offset mismatch for UGameplayCueNotify_HitImpact::Sound");
static_assert(offsetof(UGameplayCueNotify_HitImpact, ParticleSystem) == 64, "Offset mismatch for UGameplayCueNotify_HitImpact::ParticleSystem");

// /Script/GameplayAbilities.GameplayCueNotify_Looping
// Kind: Class; super: GameplayCueNotify_Actor
class UGameplayCueNotify_Looping
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    std::uint8_t DefaultSpawnCondition[0x38]; // 0x02B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultPlacementInfo[0x40]; // 0x02F0 (Size: 0x40, Type: StructProperty)
    std::uint8_t ApplicationEffects[0x298]; // 0x0330 (Size: 0x298, Type: StructProperty)
    std::uint8_t ApplicationSpawnResults[0x58]; // 0x05C8 (Size: 0x58, Type: StructProperty)
    std::uint8_t LoopingEffects[0x1F0]; // 0x0620 (Size: 0x1F0, Type: StructProperty)
    std::uint8_t LoopingSpawnResults[0x58]; // 0x0810 (Size: 0x58, Type: StructProperty)
    std::uint8_t RecurringEffects[0x298]; // 0x0868 (Size: 0x298, Type: StructProperty)
    std::uint8_t RecurringSpawnResults[0x58]; // 0x0B00 (Size: 0x58, Type: StructProperty)
    std::uint8_t RemovalEffects[0x298]; // 0x0B58 (Size: 0x298, Type: StructProperty)
    std::uint8_t RemovalSpawnResults[0x1]; // 0x0DF0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayCueNotify_Looping, DefaultSpawnCondition) == 696, "Offset mismatch for UGameplayCueNotify_Looping::DefaultSpawnCondition");
static_assert(offsetof(UGameplayCueNotify_Looping, DefaultPlacementInfo) == 752, "Offset mismatch for UGameplayCueNotify_Looping::DefaultPlacementInfo");
static_assert(offsetof(UGameplayCueNotify_Looping, ApplicationEffects) == 816, "Offset mismatch for UGameplayCueNotify_Looping::ApplicationEffects");
static_assert(offsetof(UGameplayCueNotify_Looping, ApplicationSpawnResults) == 1480, "Offset mismatch for UGameplayCueNotify_Looping::ApplicationSpawnResults");
static_assert(offsetof(UGameplayCueNotify_Looping, LoopingEffects) == 1568, "Offset mismatch for UGameplayCueNotify_Looping::LoopingEffects");
static_assert(offsetof(UGameplayCueNotify_Looping, LoopingSpawnResults) == 2064, "Offset mismatch for UGameplayCueNotify_Looping::LoopingSpawnResults");
static_assert(offsetof(UGameplayCueNotify_Looping, RecurringEffects) == 2152, "Offset mismatch for UGameplayCueNotify_Looping::RecurringEffects");
static_assert(offsetof(UGameplayCueNotify_Looping, RecurringSpawnResults) == 2816, "Offset mismatch for UGameplayCueNotify_Looping::RecurringSpawnResults");
static_assert(offsetof(UGameplayCueNotify_Looping, RemovalEffects) == 2904, "Offset mismatch for UGameplayCueNotify_Looping::RemovalEffects");
static_assert(offsetof(UGameplayCueNotify_Looping, RemovalSpawnResults) == 3568, "Offset mismatch for UGameplayCueNotify_Looping::RemovalSpawnResults");

// /Script/GameplayAbilities.GameplayCueNotify_Static
// Kind: Class; super: Object
class UGameplayCueNotify_Static
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayCueTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCueName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t IsOverride; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueTag) == 40, "Offset mismatch for UGameplayCueNotify_Static::GameplayCueTag");
static_assert(offsetof(UGameplayCueNotify_Static, GameplayCueName) == 44, "Offset mismatch for UGameplayCueNotify_Static::GameplayCueName");
static_assert(offsetof(UGameplayCueNotify_Static, IsOverride) == 48, "Offset mismatch for UGameplayCueNotify_Static::IsOverride");

// /Script/GameplayAbilities.GameplayCueNotify_UnitTest
// Kind: Class; super: GameplayCueNotify_Static
class UGameplayCueNotify_UnitTest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayCueTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t GameplayCueName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t IsOverride; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayCueNotify_UnitTest, GameplayCueTag) == 40, "Offset mismatch for UGameplayCueNotify_UnitTest::GameplayCueTag");
static_assert(offsetof(UGameplayCueNotify_UnitTest, GameplayCueName) == 44, "Offset mismatch for UGameplayCueNotify_UnitTest::GameplayCueName");
static_assert(offsetof(UGameplayCueNotify_UnitTest, IsOverride) == 48, "Offset mismatch for UGameplayCueNotify_UnitTest::IsOverride");

// /Script/GameplayAbilities.GameplayCueSet
// Kind: Class; super: DataAsset
class UGameplayCueSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> GameplayCueData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayCueSet, GameplayCueData) == 40, "Offset mismatch for UGameplayCueSet::GameplayCueData");

// /Script/GameplayAbilities.GameplayCueTranslator
// Kind: Class; super: Object
class UGameplayCueTranslator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayCueTranslator_Test
// Kind: Class; super: GameplayCueTranslator
class UGameplayCueTranslator_Test
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffect
// Kind: Class; super: Object
class UGameplayEffect
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DurationPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t DurationMagnitude[0x1D8]; // 0x0038 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t MaxDurationMagnitude[0x1D8]; // 0x0210 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t Period[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bExecutePeriodicEffectOnApplication; // 0x0410 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PeriodicInhibitionPolicy; // 0x0411 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0412
    TArray<void*> Modifiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Executions; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChanceToApplyToTarget[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    TArray<void*> ApplicationRequirements; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalGameplayEffects; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverflowEffects; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDenyOverflowApplication; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearStackOnOverflow; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0492
    TArray<void*> PrematureExpirationEffectClasses; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RoutineExpirationEffectClasses; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireModifierSuccessToTriggerCues; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressStackingCues; // 0x04B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x04BA
    TArray<void*> GameplayCues; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* UIData; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InheritableGameplayEffectTags[0x60]; // 0x04D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableOwnedTagsContainer[0x60]; // 0x0538 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableBlockedAbilityTagsContainer[0x60]; // 0x0598 (Size: 0x60, Type: StructProperty)
    std::uint8_t OngoingTagRequirements[0x88]; // 0x05F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t ApplicationTagRequirements[0x88]; // 0x0680 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemovalTagRequirements[0x88]; // 0x0708 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectsWithTags[0x60]; // 0x0790 (Size: 0x60, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityTags[0x88]; // 0x07F0 (Size: 0x88, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityQuery[0x1A0]; // 0x0878 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectQuery[0x199]; // 0x0A18 (Size: 0x199, Type: StructProperty)
    std::uint8_t StackingType; // 0x0BB1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0BB2
    std::int32_t StackLimitCount; // 0x0BB4 (Size: 0x4, Type: IntProperty)
    std::uint8_t StackDurationRefreshPolicy; // 0x0BB8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackPeriodResetPolicy; // 0x0BB9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackExpirationPolicy; // 0x0BBA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFactorInStackCount; // 0x0BBB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0BBC
    TArray<void*> GrantedAbilities; // 0x0BC0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x60]; // 0x0BD0
    TArray<void*> GEComponents; // 0x0C30 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayEffect, DurationPolicy) == 48, "Offset mismatch for UGameplayEffect::DurationPolicy");
static_assert(offsetof(UGameplayEffect, DurationMagnitude) == 56, "Offset mismatch for UGameplayEffect::DurationMagnitude");
static_assert(offsetof(UGameplayEffect, MaxDurationMagnitude) == 528, "Offset mismatch for UGameplayEffect::MaxDurationMagnitude");
static_assert(offsetof(UGameplayEffect, Period) == 1000, "Offset mismatch for UGameplayEffect::Period");
static_assert(offsetof(UGameplayEffect, bExecutePeriodicEffectOnApplication) == 1040, "Offset mismatch for UGameplayEffect::bExecutePeriodicEffectOnApplication");
static_assert(offsetof(UGameplayEffect, PeriodicInhibitionPolicy) == 1041, "Offset mismatch for UGameplayEffect::PeriodicInhibitionPolicy");
static_assert(offsetof(UGameplayEffect, Modifiers) == 1048, "Offset mismatch for UGameplayEffect::Modifiers");
static_assert(offsetof(UGameplayEffect, Executions) == 1064, "Offset mismatch for UGameplayEffect::Executions");
static_assert(offsetof(UGameplayEffect, ChanceToApplyToTarget) == 1080, "Offset mismatch for UGameplayEffect::ChanceToApplyToTarget");
static_assert(offsetof(UGameplayEffect, ApplicationRequirements) == 1120, "Offset mismatch for UGameplayEffect::ApplicationRequirements");
static_assert(offsetof(UGameplayEffect, ConditionalGameplayEffects) == 1136, "Offset mismatch for UGameplayEffect::ConditionalGameplayEffects");
static_assert(offsetof(UGameplayEffect, OverflowEffects) == 1152, "Offset mismatch for UGameplayEffect::OverflowEffects");
static_assert(offsetof(UGameplayEffect, bDenyOverflowApplication) == 1168, "Offset mismatch for UGameplayEffect::bDenyOverflowApplication");
static_assert(offsetof(UGameplayEffect, bClearStackOnOverflow) == 1169, "Offset mismatch for UGameplayEffect::bClearStackOnOverflow");
static_assert(offsetof(UGameplayEffect, PrematureExpirationEffectClasses) == 1176, "Offset mismatch for UGameplayEffect::PrematureExpirationEffectClasses");
static_assert(offsetof(UGameplayEffect, RoutineExpirationEffectClasses) == 1192, "Offset mismatch for UGameplayEffect::RoutineExpirationEffectClasses");
static_assert(offsetof(UGameplayEffect, bRequireModifierSuccessToTriggerCues) == 1208, "Offset mismatch for UGameplayEffect::bRequireModifierSuccessToTriggerCues");
static_assert(offsetof(UGameplayEffect, bSuppressStackingCues) == 1209, "Offset mismatch for UGameplayEffect::bSuppressStackingCues");
static_assert(offsetof(UGameplayEffect, GameplayCues) == 1216, "Offset mismatch for UGameplayEffect::GameplayCues");
static_assert(offsetof(UGameplayEffect, UIData) == 1232, "Offset mismatch for UGameplayEffect::UIData");
static_assert(offsetof(UGameplayEffect, InheritableGameplayEffectTags) == 1240, "Offset mismatch for UGameplayEffect::InheritableGameplayEffectTags");
static_assert(offsetof(UGameplayEffect, InheritableOwnedTagsContainer) == 1336, "Offset mismatch for UGameplayEffect::InheritableOwnedTagsContainer");
static_assert(offsetof(UGameplayEffect, InheritableBlockedAbilityTagsContainer) == 1432, "Offset mismatch for UGameplayEffect::InheritableBlockedAbilityTagsContainer");
static_assert(offsetof(UGameplayEffect, OngoingTagRequirements) == 1528, "Offset mismatch for UGameplayEffect::OngoingTagRequirements");
static_assert(offsetof(UGameplayEffect, ApplicationTagRequirements) == 1664, "Offset mismatch for UGameplayEffect::ApplicationTagRequirements");
static_assert(offsetof(UGameplayEffect, RemovalTagRequirements) == 1800, "Offset mismatch for UGameplayEffect::RemovalTagRequirements");
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectsWithTags) == 1936, "Offset mismatch for UGameplayEffect::RemoveGameplayEffectsWithTags");
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityTags) == 2032, "Offset mismatch for UGameplayEffect::GrantedApplicationImmunityTags");
static_assert(offsetof(UGameplayEffect, GrantedApplicationImmunityQuery) == 2168, "Offset mismatch for UGameplayEffect::GrantedApplicationImmunityQuery");
static_assert(offsetof(UGameplayEffect, RemoveGameplayEffectQuery) == 2584, "Offset mismatch for UGameplayEffect::RemoveGameplayEffectQuery");
static_assert(offsetof(UGameplayEffect, StackingType) == 2993, "Offset mismatch for UGameplayEffect::StackingType");
static_assert(offsetof(UGameplayEffect, StackLimitCount) == 2996, "Offset mismatch for UGameplayEffect::StackLimitCount");
static_assert(offsetof(UGameplayEffect, StackDurationRefreshPolicy) == 3000, "Offset mismatch for UGameplayEffect::StackDurationRefreshPolicy");
static_assert(offsetof(UGameplayEffect, StackPeriodResetPolicy) == 3001, "Offset mismatch for UGameplayEffect::StackPeriodResetPolicy");
static_assert(offsetof(UGameplayEffect, StackExpirationPolicy) == 3002, "Offset mismatch for UGameplayEffect::StackExpirationPolicy");
static_assert(offsetof(UGameplayEffect, bFactorInStackCount) == 3003, "Offset mismatch for UGameplayEffect::bFactorInStackCount");
static_assert(offsetof(UGameplayEffect, GrantedAbilities) == 3008, "Offset mismatch for UGameplayEffect::GrantedAbilities");
static_assert(offsetof(UGameplayEffect, GEComponents) == 3120, "Offset mismatch for UGameplayEffect::GEComponents");

// /Script/GameplayAbilities.GameplayEffectCalculation
// Kind: Class; super: Object
class UGameplayEffectCalculation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RelevantAttributesToCapture; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayEffectCalculation, RelevantAttributesToCapture) == 40, "Offset mismatch for UGameplayEffectCalculation::RelevantAttributesToCapture");

// /Script/GameplayAbilities.GameplayEffectComponent
// Kind: Class; super: Object
class UGameplayEffectComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
// Kind: Class; super: Object
class UGameplayEffectCustomApplicationRequirement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectExecutionCalculation
// Kind: Class; super: GameplayEffectCalculation
class UGameplayEffectExecutionCalculation
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bRequiresPassedInTags; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayEffectExecutionCalculation, bRequiresPassedInTags) == 56, "Offset mismatch for UGameplayEffectExecutionCalculation::bRequiresPassedInTags");

// /Script/GameplayAbilities.GameplayEffectUIData
// Kind: Class; super: GameplayEffectComponent
class UGameplayEffectUIData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
// Kind: Class; super: GameplayEffectUIData
class UGameplayEffectUIData_TextOnly
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FText Description; // 0x0028 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UGameplayEffectUIData_TextOnly, Description) == 40, "Offset mismatch for UGameplayEffectUIData_TextOnly::Description");

// /Script/GameplayAbilities.GameplayModMagnitudeCalculation
// Kind: Class; super: GameplayEffectCalculation
class UGameplayModMagnitudeCalculation
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bAllowNonNetAuthorityDependencyRegistration; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayModMagnitudeCalculation, bAllowNonNetAuthorityDependencyRegistration) == 56, "Offset mismatch for UGameplayModMagnitudeCalculation::bAllowNonNetAuthorityDependencyRegistration");

// /Script/GameplayAbilities.GameplayTagReponseTable
// Kind: Class; super: DataAsset
class UGameplayTagReponseTable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Entries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayTagReponseTable, Entries) == 40, "Offset mismatch for UGameplayTagReponseTable::Entries");

// /Script/GameplayAbilities.ImmunityGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UImmunityGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ImmunityQueries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UImmunityGameplayEffectComponent, ImmunityQueries) == 40, "Offset mismatch for UImmunityGameplayEffectComponent::ImmunityQueries");

// /Script/GameplayAbilities.MovieSceneGameplayCueSection
// Kind: Class; super: MovieSceneHookSection
class UMovieSceneGameplayCueSection
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::uint8_t Cue[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneGameplayCueSection, Cue) == 344, "Offset mismatch for UMovieSceneGameplayCueSection::Cue");

// /Script/GameplayAbilities.MovieSceneGameplayCueTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneGameplayCueTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneGameplayCueTrack, Sections) == 248, "Offset mismatch for UMovieSceneGameplayCueTrack::Sections");

// /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
// Kind: Class; super: MovieSceneHookSection
class UMovieSceneGameplayCueTriggerSection
{
public:
    std::uint8_t Pad_0000[0x158]; // 0x0000
    std::uint8_t Channel[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneGameplayCueTriggerSection, Channel) == 344, "Offset mismatch for UMovieSceneGameplayCueTriggerSection::Channel");

// /Script/GameplayAbilities.RemoveOtherGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class URemoveOtherGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RemoveGameplayEffectQueries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URemoveOtherGameplayEffectComponent, RemoveGameplayEffectQueries) == 40, "Offset mismatch for URemoveOtherGameplayEffectComponent::RemoveGameplayEffectQueries");

// /Script/GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UTargetTagRequirementsGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ApplicationTagRequirements[0x88]; // 0x0028 (Size: 0x88, Type: StructProperty)
    std::uint8_t OngoingTagRequirements[0x88]; // 0x00B0 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemovalTagRequirements[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetTagRequirementsGameplayEffectComponent, ApplicationTagRequirements) == 40, "Offset mismatch for UTargetTagRequirementsGameplayEffectComponent::ApplicationTagRequirements");
static_assert(offsetof(UTargetTagRequirementsGameplayEffectComponent, OngoingTagRequirements) == 176, "Offset mismatch for UTargetTagRequirementsGameplayEffectComponent::OngoingTagRequirements");
static_assert(offsetof(UTargetTagRequirementsGameplayEffectComponent, RemovalTagRequirements) == 312, "Offset mismatch for UTargetTagRequirementsGameplayEffectComponent::RemovalTagRequirements");

// /Script/GameplayAbilities.TargetTagsGameplayEffectComponent
// Kind: Class; super: GameplayEffectComponent
class UTargetTagsGameplayEffectComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InheritableGrantedTagsContainer[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetTagsGameplayEffectComponent, InheritableGrantedTagsContainer) == 40, "Offset mismatch for UTargetTagsGameplayEffectComponent::InheritableGrantedTagsContainer");

// /Script/GameplayAbilities.TickableAttributeSetInterface
// Kind: Class; super: Interface
class UTickableAttributeSetInterface
{
public:
    std::uint8_t Opaque[1];
};
