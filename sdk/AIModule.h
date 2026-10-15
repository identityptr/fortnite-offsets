/**
 * decamp dumper generated SDK
 * Package: /Script/AIModule
 */
#pragma once
#include "Basic.h"

// /Script/AIModule.AIDamageEvent
// Kind: ScriptStruct; super: none
struct FAIDamageEvent
{
public:
    float Amount; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t HitLocation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    void* DamagedActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* Instigator; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    FName Tag; // 0x0048 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAIDamageEvent, Amount) == 0, "Offset mismatch for FAIDamageEvent::Amount");
static_assert(offsetof(FAIDamageEvent, Location) == 8, "Offset mismatch for FAIDamageEvent::Location");
static_assert(offsetof(FAIDamageEvent, HitLocation) == 32, "Offset mismatch for FAIDamageEvent::HitLocation");
static_assert(offsetof(FAIDamageEvent, DamagedActor) == 56, "Offset mismatch for FAIDamageEvent::DamagedActor");
static_assert(offsetof(FAIDamageEvent, Instigator) == 64, "Offset mismatch for FAIDamageEvent::Instigator");
static_assert(offsetof(FAIDamageEvent, Tag) == 72, "Offset mismatch for FAIDamageEvent::Tag");

// /Script/AIModule.AIDataProviderBoolValue
// Kind: ScriptStruct; super: AIDataProviderTypedValue
struct FAIDataProviderBoolValue
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultValue; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAIDataProviderBoolValue, DefaultValue) == 48, "Offset mismatch for FAIDataProviderBoolValue::DefaultValue");

// /Script/AIModule.AIDataProviderFloatValue
// Kind: ScriptStruct; super: AIDataProviderTypedValue
struct FAIDataProviderFloatValue
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultValue; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAIDataProviderFloatValue, DefaultValue) == 48, "Offset mismatch for FAIDataProviderFloatValue::DefaultValue");

// /Script/AIModule.AIDataProviderIntValue
// Kind: ScriptStruct; super: AIDataProviderTypedValue
struct FAIDataProviderIntValue
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t DefaultValue; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAIDataProviderIntValue, DefaultValue) == 48, "Offset mismatch for FAIDataProviderIntValue::DefaultValue");

// /Script/AIModule.AIDataProviderStructValue
// Kind: ScriptStruct; super: AIDataProviderValue
struct FAIDataProviderStructValue
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* DataBinding; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    FName DataField; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAIDataProviderStructValue, DataBinding) == 16, "Offset mismatch for FAIDataProviderStructValue::DataBinding");
static_assert(offsetof(FAIDataProviderStructValue, DataField) == 24, "Offset mismatch for FAIDataProviderStructValue::DataField");

// /Script/AIModule.AIDataProviderTypedValue
// Kind: ScriptStruct; super: AIDataProviderValue
struct FAIDataProviderTypedValue
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* PropertyType; // 0x0020 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FAIDataProviderTypedValue, PropertyType) == 32, "Offset mismatch for FAIDataProviderTypedValue::PropertyType");

// /Script/AIModule.AIDataProviderValue
// Kind: ScriptStruct; super: none
struct FAIDataProviderValue
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* DataBinding; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    FName DataField; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAIDataProviderValue, DataBinding) == 16, "Offset mismatch for FAIDataProviderValue::DataBinding");
static_assert(offsetof(FAIDataProviderValue, DataField) == 24, "Offset mismatch for FAIDataProviderValue::DataField");

// /Script/AIModule.AIDynamicParam
// Kind: ScriptStruct; super: none
struct FAIDynamicParam
{
public:
    std::uint8_t ParamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParamType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowBBKey; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t BBKey[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAIDynamicParam, ParamName) == 0, "Offset mismatch for FAIDynamicParam::ParamName");
static_assert(offsetof(FAIDynamicParam, ParamType) == 4, "Offset mismatch for FAIDynamicParam::ParamType");
static_assert(offsetof(FAIDynamicParam, bAllowBBKey) == 5, "Offset mismatch for FAIDynamicParam::bAllowBBKey");
static_assert(offsetof(FAIDynamicParam, Value) == 8, "Offset mismatch for FAIDynamicParam::Value");
static_assert(offsetof(FAIDynamicParam, BBKey) == 16, "Offset mismatch for FAIDynamicParam::BBKey");

// /Script/AIModule.AIMoveRequest
// Kind: ScriptStruct; super: none
struct FAIMoveRequest
{
public:
    TWeakObjectPtr<void> GoalActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FAIMoveRequest, GoalActor) == 0, "Offset mismatch for FAIMoveRequest::GoalActor");

// /Script/AIModule.AINoiseEvent
// Kind: ScriptStruct; super: none
struct FAINoiseEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t NoiseLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float Loudness; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxRange; // 0x0024 (Size: 0x4, Type: FloatProperty)
    void* Instigator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FName Tag; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAINoiseEvent, NoiseLocation) == 8, "Offset mismatch for FAINoiseEvent::NoiseLocation");
static_assert(offsetof(FAINoiseEvent, Loudness) == 32, "Offset mismatch for FAINoiseEvent::Loudness");
static_assert(offsetof(FAINoiseEvent, MaxRange) == 36, "Offset mismatch for FAINoiseEvent::MaxRange");
static_assert(offsetof(FAINoiseEvent, Instigator) == 40, "Offset mismatch for FAINoiseEvent::Instigator");
static_assert(offsetof(FAINoiseEvent, Tag) == 48, "Offset mismatch for FAINoiseEvent::Tag");

// /Script/AIModule.AIPredictionEvent
// Kind: ScriptStruct; super: none
struct FAIPredictionEvent
{
public:
    void* Requestor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* PredictedActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAIPredictionEvent, Requestor) == 0, "Offset mismatch for FAIPredictionEvent::Requestor");
static_assert(offsetof(FAIPredictionEvent, PredictedActor) == 8, "Offset mismatch for FAIPredictionEvent::PredictedActor");

// /Script/AIModule.AIRequestID
// Kind: ScriptStruct; super: none
struct FAIRequestID
{
public:
    std::uint32_t RequestID; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FAIRequestID, RequestID) == 0, "Offset mismatch for FAIRequestID::RequestID");

// /Script/AIModule.AISenseAffiliationFilter
// Kind: ScriptStruct; super: none
struct FAISenseAffiliationFilter
{
public:
    std::uint8_t bDetectEnemies; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bDetectFriendlies (shared storage)
    // 0x0000 BoolProperty bDetectNeutrals (shared storage)
};

static_assert(offsetof(FAISenseAffiliationFilter, bDetectEnemies) == 0, "Offset mismatch for FAISenseAffiliationFilter::bDetectEnemies");

// /Script/AIModule.AISightEvent
// Kind: ScriptStruct; super: none
struct FAISightEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* SeenActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* Observer; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAISightEvent, SeenActor) == 8, "Offset mismatch for FAISightEvent::SeenActor");
static_assert(offsetof(FAISightEvent, Observer) == 16, "Offset mismatch for FAISightEvent::Observer");

// /Script/AIModule.AIStimulus
// Kind: ScriptStruct; super: none
struct FAIStimulus
{
public:
    float Age; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ExpirationAge; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Strength; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t StimulusLocation[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t ReceiverLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    FName Tag; // 0x0040 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0048
    std::uint8_t bSuccessfullySensed; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAIStimulus, Age) == 0, "Offset mismatch for FAIStimulus::Age");
static_assert(offsetof(FAIStimulus, ExpirationAge) == 4, "Offset mismatch for FAIStimulus::ExpirationAge");
static_assert(offsetof(FAIStimulus, Strength) == 8, "Offset mismatch for FAIStimulus::Strength");
static_assert(offsetof(FAIStimulus, StimulusLocation) == 16, "Offset mismatch for FAIStimulus::StimulusLocation");
static_assert(offsetof(FAIStimulus, ReceiverLocation) == 40, "Offset mismatch for FAIStimulus::ReceiverLocation");
static_assert(offsetof(FAIStimulus, Tag) == 64, "Offset mismatch for FAIStimulus::Tag");
static_assert(offsetof(FAIStimulus, bSuccessfullySensed) == 76, "Offset mismatch for FAIStimulus::bSuccessfullySensed");

// /Script/AIModule.AITeamStimulusEvent
// Kind: ScriptStruct; super: none
struct FAITeamStimulusEvent
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* Broadcaster; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* Enemy; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAITeamStimulusEvent, Broadcaster) == 64, "Offset mismatch for FAITeamStimulusEvent::Broadcaster");
static_assert(offsetof(FAITeamStimulusEvent, Enemy) == 72, "Offset mismatch for FAITeamStimulusEvent::Enemy");

// /Script/AIModule.AITouchEvent
// Kind: ScriptStruct; super: none
struct FAITouchEvent
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* TouchReceiver; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* OtherActor; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAITouchEvent, TouchReceiver) == 24, "Offset mismatch for FAITouchEvent::TouchReceiver");
static_assert(offsetof(FAITouchEvent, OtherActor) == 32, "Offset mismatch for FAITouchEvent::OtherActor");

// /Script/AIModule.ActorPerceptionBlueprintInfo
// Kind: ScriptStruct; super: none
struct FActorPerceptionBlueprintInfo
{
public:
    void* Target; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LastSensedStimuli; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsFriendly; // 0x0018 (Size: 0x1, Type: BoolProperty)
    // 0x0018 BoolProperty bIsHostile (shared storage)
};

static_assert(offsetof(FActorPerceptionBlueprintInfo, Target) == 0, "Offset mismatch for FActorPerceptionBlueprintInfo::Target");
static_assert(offsetof(FActorPerceptionBlueprintInfo, LastSensedStimuli) == 8, "Offset mismatch for FActorPerceptionBlueprintInfo::LastSensedStimuli");
static_assert(offsetof(FActorPerceptionBlueprintInfo, bIsFriendly) == 24, "Offset mismatch for FActorPerceptionBlueprintInfo::bIsFriendly");

// /Script/AIModule.ActorPerceptionUpdateInfo
// Kind: ScriptStruct; super: none
struct FActorPerceptionUpdateInfo
{
public:
    std::int32_t TargetId; // 0x0000 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> Target; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t Stimulus[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FActorPerceptionUpdateInfo, TargetId) == 0, "Offset mismatch for FActorPerceptionUpdateInfo::TargetId");
static_assert(offsetof(FActorPerceptionUpdateInfo, Target) == 4, "Offset mismatch for FActorPerceptionUpdateInfo::Target");
static_assert(offsetof(FActorPerceptionUpdateInfo, Stimulus) == 16, "Offset mismatch for FActorPerceptionUpdateInfo::Stimulus");

// /Script/AIModule.BTCompositeChild
// Kind: ScriptStruct; super: none
struct FBTCompositeChild
{
public:
    void* ChildComposite; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ChildTask; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Decorators; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DecoratorOps; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBTCompositeChild, ChildComposite) == 0, "Offset mismatch for FBTCompositeChild::ChildComposite");
static_assert(offsetof(FBTCompositeChild, ChildTask) == 8, "Offset mismatch for FBTCompositeChild::ChildTask");
static_assert(offsetof(FBTCompositeChild, Decorators) == 16, "Offset mismatch for FBTCompositeChild::Decorators");
static_assert(offsetof(FBTCompositeChild, DecoratorOps) == 32, "Offset mismatch for FBTCompositeChild::DecoratorOps");

// /Script/AIModule.BTDecoratorLogic
// Kind: ScriptStruct; super: none
struct FBTDecoratorLogic
{
public:
    std::uint8_t Operation; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0001
    std::uint16_t Number; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FBTDecoratorLogic, Operation) == 0, "Offset mismatch for FBTDecoratorLogic::Operation");
static_assert(offsetof(FBTDecoratorLogic, Number) == 2, "Offset mismatch for FBTDecoratorLogic::Number");

// /Script/AIModule.BehaviorTreeTemplateInfo
// Kind: ScriptStruct; super: none
struct FBehaviorTreeTemplateInfo
{
public:
    void* Asset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Template; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBehaviorTreeTemplateInfo, Asset) == 0, "Offset mismatch for FBehaviorTreeTemplateInfo::Asset");
static_assert(offsetof(FBehaviorTreeTemplateInfo, Template) == 8, "Offset mismatch for FBehaviorTreeTemplateInfo::Template");

// /Script/AIModule.BlackboardEntry
// Kind: ScriptStruct; super: none
struct FBlackboardEntry
{
public:
    FName EntryName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* KeyType; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInstanceSynced; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBlackboardEntry, EntryName) == 0, "Offset mismatch for FBlackboardEntry::EntryName");
static_assert(offsetof(FBlackboardEntry, KeyType) == 8, "Offset mismatch for FBlackboardEntry::KeyType");
static_assert(offsetof(FBlackboardEntry, bInstanceSynced) == 16, "Offset mismatch for FBlackboardEntry::bInstanceSynced");

// /Script/AIModule.BlackboardKeySelector
// Kind: ScriptStruct; super: none
struct FBlackboardKeySelector
{
public:
    TArray<void*> AllowedTypes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FName SelectedKeyName; // 0x0010 (Size: 0x8, Type: NameProperty)
    void* SelectedKeyType; // 0x0018 (Size: 0x8, Type: ClassProperty)
    std::int32_t SelectedKeyID; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNoneIsAllowedValue; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBlackboardKeySelector, AllowedTypes) == 0, "Offset mismatch for FBlackboardKeySelector::AllowedTypes");
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyName) == 16, "Offset mismatch for FBlackboardKeySelector::SelectedKeyName");
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyType) == 24, "Offset mismatch for FBlackboardKeySelector::SelectedKeyType");
static_assert(offsetof(FBlackboardKeySelector, SelectedKeyID) == 32, "Offset mismatch for FBlackboardKeySelector::SelectedKeyID");
static_assert(offsetof(FBlackboardKeySelector, bNoneIsAllowedValue) == 36, "Offset mismatch for FBlackboardKeySelector::bNoneIsAllowedValue");

// /Script/AIModule.CompactIndexedHandleBase
// Kind: ScriptStruct; super: none
struct FCompactIndexedHandleBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.CrowdAvoidanceConfig
// Kind: ScriptStruct; super: none
struct FCrowdAvoidanceConfig
{
public:
    float VelocityBias; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DesiredVelocityWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float CurrentVelocityWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SideBiasWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ImpactTimeWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ImpactTimeRange; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SideBiasThreshold; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float RightSideBias; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CustomPatternIdx; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AdaptiveDivisions; // 0x0021 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AdaptiveRings; // 0x0022 (Size: 0x1, Type: ByteProperty)
    std::uint8_t AdaptiveDepth; // 0x0023 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FCrowdAvoidanceConfig, VelocityBias) == 0, "Offset mismatch for FCrowdAvoidanceConfig::VelocityBias");
static_assert(offsetof(FCrowdAvoidanceConfig, DesiredVelocityWeight) == 4, "Offset mismatch for FCrowdAvoidanceConfig::DesiredVelocityWeight");
static_assert(offsetof(FCrowdAvoidanceConfig, CurrentVelocityWeight) == 8, "Offset mismatch for FCrowdAvoidanceConfig::CurrentVelocityWeight");
static_assert(offsetof(FCrowdAvoidanceConfig, SideBiasWeight) == 12, "Offset mismatch for FCrowdAvoidanceConfig::SideBiasWeight");
static_assert(offsetof(FCrowdAvoidanceConfig, ImpactTimeWeight) == 16, "Offset mismatch for FCrowdAvoidanceConfig::ImpactTimeWeight");
static_assert(offsetof(FCrowdAvoidanceConfig, ImpactTimeRange) == 20, "Offset mismatch for FCrowdAvoidanceConfig::ImpactTimeRange");
static_assert(offsetof(FCrowdAvoidanceConfig, SideBiasThreshold) == 24, "Offset mismatch for FCrowdAvoidanceConfig::SideBiasThreshold");
static_assert(offsetof(FCrowdAvoidanceConfig, RightSideBias) == 28, "Offset mismatch for FCrowdAvoidanceConfig::RightSideBias");
static_assert(offsetof(FCrowdAvoidanceConfig, CustomPatternIdx) == 32, "Offset mismatch for FCrowdAvoidanceConfig::CustomPatternIdx");
static_assert(offsetof(FCrowdAvoidanceConfig, AdaptiveDivisions) == 33, "Offset mismatch for FCrowdAvoidanceConfig::AdaptiveDivisions");
static_assert(offsetof(FCrowdAvoidanceConfig, AdaptiveRings) == 34, "Offset mismatch for FCrowdAvoidanceConfig::AdaptiveRings");
static_assert(offsetof(FCrowdAvoidanceConfig, AdaptiveDepth) == 35, "Offset mismatch for FCrowdAvoidanceConfig::AdaptiveDepth");

// /Script/AIModule.CrowdAvoidanceSamplingPattern
// Kind: ScriptStruct; super: none
struct FCrowdAvoidanceSamplingPattern
{
public:
    TArray<void*> Angles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Radii; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Angles) == 0, "Offset mismatch for FCrowdAvoidanceSamplingPattern::Angles");
static_assert(offsetof(FCrowdAvoidanceSamplingPattern, Radii) == 16, "Offset mismatch for FCrowdAvoidanceSamplingPattern::Radii");

// /Script/AIModule.EQSParametrizedQueryExecutionRequest
// Kind: ScriptStruct; super: none
struct FEQSParametrizedQueryExecutionRequest
{
public:
    void* QueryTemplate; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryConfig; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EQSQueryBlackboardKey[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t RunMode; // 0x0040 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0041
    std::uint8_t bUseBBKeyForQueryTemplate; // 0x0044 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryTemplate) == 0, "Offset mismatch for FEQSParametrizedQueryExecutionRequest::QueryTemplate");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, QueryConfig) == 8, "Offset mismatch for FEQSParametrizedQueryExecutionRequest::QueryConfig");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey) == 24, "Offset mismatch for FEQSParametrizedQueryExecutionRequest::EQSQueryBlackboardKey");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, RunMode) == 64, "Offset mismatch for FEQSParametrizedQueryExecutionRequest::RunMode");
static_assert(offsetof(FEQSParametrizedQueryExecutionRequest, bUseBBKeyForQueryTemplate) == 68, "Offset mismatch for FEQSParametrizedQueryExecutionRequest::bUseBBKeyForQueryTemplate");

// /Script/AIModule.EnvDirection
// Kind: ScriptStruct; super: none
struct FEnvDirection
{
public:
    void* LineFrom; // 0x0000 (Size: 0x8, Type: ClassProperty)
    void* LineTo; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* Rotation; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DirMode; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FEnvDirection, LineFrom) == 0, "Offset mismatch for FEnvDirection::LineFrom");
static_assert(offsetof(FEnvDirection, LineTo) == 8, "Offset mismatch for FEnvDirection::LineTo");
static_assert(offsetof(FEnvDirection, Rotation) == 16, "Offset mismatch for FEnvDirection::Rotation");
static_assert(offsetof(FEnvDirection, DirMode) == 24, "Offset mismatch for FEnvDirection::DirMode");

// /Script/AIModule.EnvNamedValue
// Kind: ScriptStruct; super: none
struct FEnvNamedValue
{
public:
    std::uint8_t ParamName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParamType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FEnvNamedValue, ParamName) == 0, "Offset mismatch for FEnvNamedValue::ParamName");
static_assert(offsetof(FEnvNamedValue, ParamType) == 4, "Offset mismatch for FEnvNamedValue::ParamType");
static_assert(offsetof(FEnvNamedValue, Value) == 8, "Offset mismatch for FEnvNamedValue::Value");

// /Script/AIModule.EnvOverlapData
// Kind: ScriptStruct; super: none
struct FEnvOverlapData
{
public:
    float ExtentX; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ExtentY; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ExtentZ; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t ShapeOffset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t OverlapChannel; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverlapShape; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t bOnlyBlockingHits; // 0x002C (Size: 0x1, Type: BoolProperty)
    // 0x002C BoolProperty bOverlapComplex (shared storage)
    // 0x002C BoolProperty bSkipOverlapQuerier (shared storage)
};

static_assert(offsetof(FEnvOverlapData, ExtentX) == 0, "Offset mismatch for FEnvOverlapData::ExtentX");
static_assert(offsetof(FEnvOverlapData, ExtentY) == 4, "Offset mismatch for FEnvOverlapData::ExtentY");
static_assert(offsetof(FEnvOverlapData, ExtentZ) == 8, "Offset mismatch for FEnvOverlapData::ExtentZ");
static_assert(offsetof(FEnvOverlapData, ShapeOffset) == 16, "Offset mismatch for FEnvOverlapData::ShapeOffset");
static_assert(offsetof(FEnvOverlapData, OverlapChannel) == 40, "Offset mismatch for FEnvOverlapData::OverlapChannel");
static_assert(offsetof(FEnvOverlapData, OverlapShape) == 41, "Offset mismatch for FEnvOverlapData::OverlapShape");
static_assert(offsetof(FEnvOverlapData, bOnlyBlockingHits) == 44, "Offset mismatch for FEnvOverlapData::bOnlyBlockingHits");

// /Script/AIModule.EnvQueryContextData
// Kind: ScriptStruct; super: none
struct FEnvQueryContextData
{
public:
    void* ValueType; // 0x0000 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FEnvQueryContextData, ValueType) == 0, "Offset mismatch for FEnvQueryContextData::ValueType");

// /Script/AIModule.EnvQueryInstance
// Kind: ScriptStruct; super: EnvQueryResult
struct FEnvQueryInstance
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* World; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0060
    TArray<void*> ContextCache; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Options; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x40]; // 0x00A0
    void* ItemTypeVectorCDO; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* ItemTypeActorCDO; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEnvQueryInstance, World) == 88, "Offset mismatch for FEnvQueryInstance::World");
static_assert(offsetof(FEnvQueryInstance, ContextCache) == 128, "Offset mismatch for FEnvQueryInstance::ContextCache");
static_assert(offsetof(FEnvQueryInstance, Options) == 144, "Offset mismatch for FEnvQueryInstance::Options");
static_assert(offsetof(FEnvQueryInstance, ItemTypeVectorCDO) == 224, "Offset mismatch for FEnvQueryInstance::ItemTypeVectorCDO");
static_assert(offsetof(FEnvQueryInstance, ItemTypeActorCDO) == 232, "Offset mismatch for FEnvQueryInstance::ItemTypeActorCDO");

// /Script/AIModule.EnvQueryInstanceCache
// Kind: ScriptStruct; super: none
struct FEnvQueryInstanceCache
{
public:
    void* Template; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Instance[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEnvQueryInstanceCache, Template) == 0, "Offset mismatch for FEnvQueryInstanceCache::Template");
static_assert(offsetof(FEnvQueryInstanceCache, Instance) == 8, "Offset mismatch for FEnvQueryInstanceCache::Instance");

// /Script/AIModule.EnvQueryInstanceContextCacheItem
// Kind: ScriptStruct; super: none
struct FEnvQueryInstanceContextCacheItem
{
public:
    void* Class; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ContextData[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEnvQueryInstanceContextCacheItem, Class) == 0, "Offset mismatch for FEnvQueryInstanceContextCacheItem::Class");
static_assert(offsetof(FEnvQueryInstanceContextCacheItem, ContextData) == 8, "Offset mismatch for FEnvQueryInstanceContextCacheItem::ContextData");

// /Script/AIModule.EnvQueryManagerConfig
// Kind: ScriptStruct; super: none
struct FEnvQueryManagerConfig
{
public:
    float MaxAllowedTestingTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTestQueriesUsingBreadth; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t QueryCountWarningThreshold; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    double QueryCountWarningInterval; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    double ExecutionTimeWarningSeconds; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double HandlingResultTimeWarningSeconds; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double GenerationTimeWarningSeconds; // 0x0028 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FEnvQueryManagerConfig, MaxAllowedTestingTime) == 0, "Offset mismatch for FEnvQueryManagerConfig::MaxAllowedTestingTime");
static_assert(offsetof(FEnvQueryManagerConfig, bTestQueriesUsingBreadth) == 4, "Offset mismatch for FEnvQueryManagerConfig::bTestQueriesUsingBreadth");
static_assert(offsetof(FEnvQueryManagerConfig, QueryCountWarningThreshold) == 8, "Offset mismatch for FEnvQueryManagerConfig::QueryCountWarningThreshold");
static_assert(offsetof(FEnvQueryManagerConfig, QueryCountWarningInterval) == 16, "Offset mismatch for FEnvQueryManagerConfig::QueryCountWarningInterval");
static_assert(offsetof(FEnvQueryManagerConfig, ExecutionTimeWarningSeconds) == 24, "Offset mismatch for FEnvQueryManagerConfig::ExecutionTimeWarningSeconds");
static_assert(offsetof(FEnvQueryManagerConfig, HandlingResultTimeWarningSeconds) == 32, "Offset mismatch for FEnvQueryManagerConfig::HandlingResultTimeWarningSeconds");
static_assert(offsetof(FEnvQueryManagerConfig, GenerationTimeWarningSeconds) == 40, "Offset mismatch for FEnvQueryManagerConfig::GenerationTimeWarningSeconds");

// /Script/AIModule.EnvQueryOptionInstance
// Kind: ScriptStruct; super: none
struct FEnvQueryOptionInstance
{
public:
    void* Generator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Tests; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0018
    void* ItemType; // 0x0020 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FEnvQueryOptionInstance, Generator) == 0, "Offset mismatch for FEnvQueryOptionInstance::Generator");
static_assert(offsetof(FEnvQueryOptionInstance, Tests) == 8, "Offset mismatch for FEnvQueryOptionInstance::Tests");
static_assert(offsetof(FEnvQueryOptionInstance, ItemType) == 32, "Offset mismatch for FEnvQueryOptionInstance::ItemType");

// /Script/AIModule.EnvQueryRequest
// Kind: ScriptStruct; super: none
struct FEnvQueryRequest
{
public:
    void* QueryTemplate; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Owner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* World; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEnvQueryRequest, QueryTemplate) == 0, "Offset mismatch for FEnvQueryRequest::QueryTemplate");
static_assert(offsetof(FEnvQueryRequest, Owner) == 8, "Offset mismatch for FEnvQueryRequest::Owner");
static_assert(offsetof(FEnvQueryRequest, World) == 16, "Offset mismatch for FEnvQueryRequest::World");

// /Script/AIModule.EnvQueryResult
// Kind: ScriptStruct; super: none
struct FEnvQueryResult
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ItemType; // 0x0010 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x14]; // 0x0018
    std::int32_t OptionIndex; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t QueryID; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FEnvQueryResult, ItemType) == 16, "Offset mismatch for FEnvQueryResult::ItemType");
static_assert(offsetof(FEnvQueryResult, OptionIndex) == 44, "Offset mismatch for FEnvQueryResult::OptionIndex");
static_assert(offsetof(FEnvQueryResult, QueryID) == 48, "Offset mismatch for FEnvQueryResult::QueryID");

// /Script/AIModule.EnvTraceData
// Kind: ScriptStruct; super: none
struct FEnvTraceData
{
public:
    std::int32_t VersionNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* NavigationFilter; // 0x0008 (Size: 0x8, Type: ClassProperty)
    float ProjectDown; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float ProjectUp; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ExtentX; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ExtentY; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ExtentZ; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float PostProjectionVerticalOffset; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceChannel; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SerializedChannel; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t TraceProfileName[0x4]; // 0x002C (Size: 0x4, Type: NameProperty)
    std::uint8_t TraceShape; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TraceMode; // 0x0031 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0032
    std::uint8_t bCanDisableTrace; // 0x0034 (Size: 0x1, Type: BoolProperty)
    // 0x0034 BoolProperty bCanProjectDown (shared storage)
    // 0x0034 BoolProperty bCanTraceOnGeometry (shared storage)
    // 0x0034 BoolProperty bCanTraceOnNavMesh (shared storage)
    // 0x0034 BoolProperty bOnlyBlockingHits (shared storage)
    // 0x0034 BoolProperty bTraceComplex (shared storage)
};

static_assert(offsetof(FEnvTraceData, VersionNum) == 0, "Offset mismatch for FEnvTraceData::VersionNum");
static_assert(offsetof(FEnvTraceData, NavigationFilter) == 8, "Offset mismatch for FEnvTraceData::NavigationFilter");
static_assert(offsetof(FEnvTraceData, ProjectDown) == 16, "Offset mismatch for FEnvTraceData::ProjectDown");
static_assert(offsetof(FEnvTraceData, ProjectUp) == 20, "Offset mismatch for FEnvTraceData::ProjectUp");
static_assert(offsetof(FEnvTraceData, ExtentX) == 24, "Offset mismatch for FEnvTraceData::ExtentX");
static_assert(offsetof(FEnvTraceData, ExtentY) == 28, "Offset mismatch for FEnvTraceData::ExtentY");
static_assert(offsetof(FEnvTraceData, ExtentZ) == 32, "Offset mismatch for FEnvTraceData::ExtentZ");
static_assert(offsetof(FEnvTraceData, PostProjectionVerticalOffset) == 36, "Offset mismatch for FEnvTraceData::PostProjectionVerticalOffset");
static_assert(offsetof(FEnvTraceData, TraceChannel) == 40, "Offset mismatch for FEnvTraceData::TraceChannel");
static_assert(offsetof(FEnvTraceData, SerializedChannel) == 41, "Offset mismatch for FEnvTraceData::SerializedChannel");
static_assert(offsetof(FEnvTraceData, TraceProfileName) == 44, "Offset mismatch for FEnvTraceData::TraceProfileName");
static_assert(offsetof(FEnvTraceData, TraceShape) == 48, "Offset mismatch for FEnvTraceData::TraceShape");
static_assert(offsetof(FEnvTraceData, TraceMode) == 49, "Offset mismatch for FEnvTraceData::TraceMode");
static_assert(offsetof(FEnvTraceData, bCanDisableTrace) == 52, "Offset mismatch for FEnvTraceData::bCanDisableTrace");

// /Script/AIModule.GenericTeamId
// Kind: ScriptStruct; super: none
struct FGenericTeamId
{
public:
    std::uint8_t TeamId; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FGenericTeamId, TeamId) == 0, "Offset mismatch for FGenericTeamId::TeamId");

// /Script/AIModule.IndexedHandleBase
// Kind: ScriptStruct; super: SimpleIndexedHandleBase
struct FIndexedHandleBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.IntervalCountdown
// Kind: ScriptStruct; super: none
struct FIntervalCountdown
{
public:
    float Interval; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FIntervalCountdown, Interval) == 0, "Offset mismatch for FIntervalCountdown::Interval");

// /Script/AIModule.RecastGraphWrapper
// Kind: ScriptStruct; super: none
struct FRecastGraphWrapper
{
public:
    void* RecastNavMeshActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRecastGraphWrapper, RecastNavMeshActor) == 0, "Offset mismatch for FRecastGraphWrapper::RecastNavMeshActor");

// /Script/AIModule.SequentialIDBase
// Kind: ScriptStruct; super: none
struct FSequentialIDBase
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FSequentialIDBase, Value) == 0, "Offset mismatch for FSequentialIDBase::Value");

// /Script/AIModule.SimpleIndexedHandleBase
// Kind: ScriptStruct; super: none
struct FSimpleIndexedHandleBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.ValueOrBBKey_Bool
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Bool
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DefaultValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FValueOrBBKey_Bool, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Bool::DefaultValue");

// /Script/AIModule.ValueOrBBKey_Class
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Class
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* DefaultValue; // 0x0010 (Size: 0x8, Type: ClassProperty)
    void* BaseClass; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FValueOrBBKey_Class, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Class::DefaultValue");
static_assert(offsetof(FValueOrBBKey_Class, BaseClass) == 24, "Offset mismatch for FValueOrBBKey_Class::BaseClass");

// /Script/AIModule.ValueOrBBKey_Enum
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Enum
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DefaultValue; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    void* EnumType; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    FString NativeEnumTypeName; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FValueOrBBKey_Enum, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Enum::DefaultValue");
static_assert(offsetof(FValueOrBBKey_Enum, EnumType) == 24, "Offset mismatch for FValueOrBBKey_Enum::EnumType");
static_assert(offsetof(FValueOrBBKey_Enum, NativeEnumTypeName) == 32, "Offset mismatch for FValueOrBBKey_Enum::NativeEnumTypeName");

// /Script/AIModule.ValueOrBBKey_Float
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Float
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float DefaultValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FValueOrBBKey_Float, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Float::DefaultValue");

// /Script/AIModule.ValueOrBBKey_Int32
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Int32
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t DefaultValue; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FValueOrBBKey_Int32, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Int32::DefaultValue");

// /Script/AIModule.ValueOrBBKey_Name
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Name
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FName DefaultValue; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FValueOrBBKey_Name, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Name::DefaultValue");

// /Script/AIModule.ValueOrBBKey_Object
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Object
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* DefaultValue; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* BaseClass; // 0x0018 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FValueOrBBKey_Object, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Object::DefaultValue");
static_assert(offsetof(FValueOrBBKey_Object, BaseClass) == 24, "Offset mismatch for FValueOrBBKey_Object::BaseClass");

// /Script/AIModule.ValueOrBBKey_Rotator
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Rotator
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FValueOrBBKey_Rotator, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Rotator::DefaultValue");

// /Script/AIModule.ValueOrBBKey_String
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_String
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString DefaultValue; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FValueOrBBKey_String, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_String::DefaultValue");

// /Script/AIModule.ValueOrBBKey_Struct
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Struct
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FValueOrBBKey_Struct, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Struct::DefaultValue");

// /Script/AIModule.ValueOrBBKey_Vector
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_Vector
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FValueOrBBKey_Vector, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_Vector::DefaultValue");

// /Script/AIModule.ValueOrBlackboardKeyBase
// Kind: ScriptStruct; super: none
struct FValueOrBlackboardKeyBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Key; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FValueOrBlackboardKeyBase, Key) == 8, "Offset mismatch for FValueOrBlackboardKeyBase::Key");

// /Script/AIModule.AIAsyncTaskBlueprintProxy
// Kind: Class; super: Object
class UAIAsyncTaskBlueprintProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFail; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAIAsyncTaskBlueprintProxy, OnSuccess) == 40, "Offset mismatch for UAIAsyncTaskBlueprintProxy::OnSuccess");
static_assert(offsetof(UAIAsyncTaskBlueprintProxy, OnFail) == 56, "Offset mismatch for UAIAsyncTaskBlueprintProxy::OnFail");

// /Script/AIModule.AIBlueprintHelperLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAIBlueprintHelperLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.AIController
// Kind: Class; super: Controller
class UAIController
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t bAllowStrafe; // 0x0340 (Size: 0x1, Type: BoolProperty)
    // 0x0340 BoolProperty bLOSflag (shared storage)
    // 0x0340 BoolProperty bSetControlRotationFromPawnOrientation (shared storage)
    // 0x0340 BoolProperty bSkipExtraLOSChecks (shared storage)
    // 0x0340 BoolProperty bSkipRootComponentUpdate (shared storage)
    // 0x0340 BoolProperty bStartAILogicOnPossess (shared storage)
    // 0x0340 BoolProperty bStopAILogicOnUnposses (shared storage)
    // 0x0340 BoolProperty bWantsPlayerState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0341
    void* PathFollowingComponent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* BrainComponent; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* PerceptionComponent; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Blackboard; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameplayTasksComponent; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* DefaultNavigationFilterClass; // 0x0370 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate ReceiveMoveCompleted; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAIController, bAllowStrafe) == 832, "Offset mismatch for UAIController::bAllowStrafe");
static_assert(offsetof(UAIController, PathFollowingComponent) == 840, "Offset mismatch for UAIController::PathFollowingComponent");
static_assert(offsetof(UAIController, BrainComponent) == 848, "Offset mismatch for UAIController::BrainComponent");
static_assert(offsetof(UAIController, PerceptionComponent) == 856, "Offset mismatch for UAIController::PerceptionComponent");
static_assert(offsetof(UAIController, Blackboard) == 864, "Offset mismatch for UAIController::Blackboard");
static_assert(offsetof(UAIController, CachedGameplayTasksComponent) == 872, "Offset mismatch for UAIController::CachedGameplayTasksComponent");
static_assert(offsetof(UAIController, DefaultNavigationFilterClass) == 880, "Offset mismatch for UAIController::DefaultNavigationFilterClass");
static_assert(offsetof(UAIController, ReceiveMoveCompleted) == 888, "Offset mismatch for UAIController::ReceiveMoveCompleted");

// /Script/AIModule.AIDataProvider
// Kind: Class; super: Object
class UAIDataProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.AIDataProvider_QueryParams
// Kind: Class; super: AIDataProvider
class UAIDataProvider_QueryParams
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ParamName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    float FloatValue; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t IntValue; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t BoolValue; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIDataProvider_QueryParams, ParamName) == 40, "Offset mismatch for UAIDataProvider_QueryParams::ParamName");
static_assert(offsetof(UAIDataProvider_QueryParams, FloatValue) == 44, "Offset mismatch for UAIDataProvider_QueryParams::FloatValue");
static_assert(offsetof(UAIDataProvider_QueryParams, IntValue) == 48, "Offset mismatch for UAIDataProvider_QueryParams::IntValue");
static_assert(offsetof(UAIDataProvider_QueryParams, BoolValue) == 52, "Offset mismatch for UAIDataProvider_QueryParams::BoolValue");

// /Script/AIModule.AIDataProvider_Random
// Kind: Class; super: AIDataProvider_QueryParams
class UAIDataProvider_Random
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float min; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float max; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInteger; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIDataProvider_Random, min) == 56, "Offset mismatch for UAIDataProvider_Random::min");
static_assert(offsetof(UAIDataProvider_Random, max) == 60, "Offset mismatch for UAIDataProvider_Random::max");
static_assert(offsetof(UAIDataProvider_Random, bInteger) == 64, "Offset mismatch for UAIDataProvider_Random::bInteger");

// /Script/AIModule.AIHotSpotManager
// Kind: Class; super: Object
class UAIHotSpotManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.AIPerceptionComponent
// Kind: Class; super: ActorComponent
class UAIPerceptionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> SensesConfig; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    void* DominantSense; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D8
    void* AIOwner; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x40]; // 0x00E8
    FMulticastInlineDelegate OnPerceptionUpdated; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTargetPerceptionForgotten; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x0158 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAIPerceptionComponent, SensesConfig) == 192, "Offset mismatch for UAIPerceptionComponent::SensesConfig");
static_assert(offsetof(UAIPerceptionComponent, DominantSense) == 208, "Offset mismatch for UAIPerceptionComponent::DominantSense");
static_assert(offsetof(UAIPerceptionComponent, AIOwner) == 224, "Offset mismatch for UAIPerceptionComponent::AIOwner");
static_assert(offsetof(UAIPerceptionComponent, OnPerceptionUpdated) == 296, "Offset mismatch for UAIPerceptionComponent::OnPerceptionUpdated");
static_assert(offsetof(UAIPerceptionComponent, OnTargetPerceptionForgotten) == 312, "Offset mismatch for UAIPerceptionComponent::OnTargetPerceptionForgotten");
static_assert(offsetof(UAIPerceptionComponent, OnTargetPerceptionUpdated) == 328, "Offset mismatch for UAIPerceptionComponent::OnTargetPerceptionUpdated");
static_assert(offsetof(UAIPerceptionComponent, OnTargetPerceptionInfoUpdated) == 344, "Offset mismatch for UAIPerceptionComponent::OnTargetPerceptionInfoUpdated");

// /Script/AIModule.AIPerceptionListenerInterface
// Kind: Class; super: Interface
class UAIPerceptionListenerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.AIPerceptionStimuliSourceComponent
// Kind: Class; super: ActorComponent
class UAIPerceptionStimuliSourceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bAutoRegisterAsSource; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    TArray<void*> RegisterAsSourceForSenses; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAIPerceptionStimuliSourceComponent, bAutoRegisterAsSource) == 192, "Offset mismatch for UAIPerceptionStimuliSourceComponent::bAutoRegisterAsSource");
static_assert(offsetof(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses) == 200, "Offset mismatch for UAIPerceptionStimuliSourceComponent::RegisterAsSourceForSenses");

// /Script/AIModule.AIPerceptionSystem
// Kind: Class; super: AISubsystem
class UAIPerceptionSystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Senses; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    float PerceptionAgingRate; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAIPerceptionSystem, Senses) == 72, "Offset mismatch for UAIPerceptionSystem::Senses");
static_assert(offsetof(UAIPerceptionSystem, PerceptionAgingRate) == 88, "Offset mismatch for UAIPerceptionSystem::PerceptionAgingRate");

// /Script/AIModule.AIResourceInterface
// Kind: Class; super: Interface
class UAIResourceInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.AIResource_Logic
// Kind: Class; super: GameplayTaskResource
class UAIResource_Logic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ManualResourceID; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int8_t AutoResourceID; // 0x002C (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t bManuallySetID; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIResource_Logic, ManualResourceID) == 40, "Offset mismatch for UAIResource_Logic::ManualResourceID");
static_assert(offsetof(UAIResource_Logic, AutoResourceID) == 44, "Offset mismatch for UAIResource_Logic::AutoResourceID");
static_assert(offsetof(UAIResource_Logic, bManuallySetID) == 48, "Offset mismatch for UAIResource_Logic::bManuallySetID");

// /Script/AIModule.AIResource_Movement
// Kind: Class; super: GameplayTaskResource
class UAIResource_Movement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ManualResourceID; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int8_t AutoResourceID; // 0x002C (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t bManuallySetID; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAIResource_Movement, ManualResourceID) == 40, "Offset mismatch for UAIResource_Movement::ManualResourceID");
static_assert(offsetof(UAIResource_Movement, AutoResourceID) == 44, "Offset mismatch for UAIResource_Movement::AutoResourceID");
static_assert(offsetof(UAIResource_Movement, bManuallySetID) == 48, "Offset mismatch for UAIResource_Movement::bManuallySetID");

// /Script/AIModule.AISense
// Kind: Class; super: Object
class UAISense
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NotifyType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t bAutoRegisterAllPawnsAsSources; // 0x002C (Size: 0x1, Type: BoolProperty)
    // 0x002C BoolProperty bWantsNewPawnNotification (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x002D
    void* PerceptionSystemInstance; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAISense, NotifyType) == 40, "Offset mismatch for UAISense::NotifyType");
static_assert(offsetof(UAISense, bAutoRegisterAllPawnsAsSources) == 44, "Offset mismatch for UAISense::bAutoRegisterAllPawnsAsSources");
static_assert(offsetof(UAISense, PerceptionSystemInstance) == 48, "Offset mismatch for UAISense::PerceptionSystemInstance");

// /Script/AIModule.AISenseBlueprintListener
// Kind: Class; super: UserDefinedStruct
class UAISenseBlueprintListener
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t Status; // 0x00C8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    std::uint8_t Guid[0x14]; // 0x00CC (Size: 0x14, Type: StructProperty)
    TArray<void*> PropertyIDs; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAISenseBlueprintListener, Status) == 200, "Offset mismatch for UAISenseBlueprintListener::Status");
static_assert(offsetof(UAISenseBlueprintListener, Guid) == 204, "Offset mismatch for UAISenseBlueprintListener::Guid");
static_assert(offsetof(UAISenseBlueprintListener, PropertyIDs) == 224, "Offset mismatch for UAISenseBlueprintListener::PropertyIDs");

// /Script/AIModule.AISenseConfig
// Kind: Class; super: Object
class UAISenseConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DebugColor[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    float MaxAge; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStartsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAISenseConfig, DebugColor) == 40, "Offset mismatch for UAISenseConfig::DebugColor");
static_assert(offsetof(UAISenseConfig, MaxAge) == 44, "Offset mismatch for UAISenseConfig::MaxAge");
static_assert(offsetof(UAISenseConfig, bStartsEnabled) == 48, "Offset mismatch for UAISenseConfig::bStartsEnabled");

// /Script/AIModule.AISenseConfig_Blueprint
// Kind: Class; super: AISenseConfig
class UAISenseConfig_Blueprint
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Implementation; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UAISenseConfig_Blueprint, Implementation) == 72, "Offset mismatch for UAISenseConfig_Blueprint::Implementation");

// /Script/AIModule.AISenseConfig_Damage
// Kind: Class; super: AISenseConfig
class UAISenseConfig_Damage
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Implementation; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UAISenseConfig_Damage, Implementation) == 72, "Offset mismatch for UAISenseConfig_Damage::Implementation");

// /Script/AIModule.AISenseConfig_Hearing
// Kind: Class; super: AISenseConfig
class UAISenseConfig_Hearing
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Implementation; // 0x0048 (Size: 0x8, Type: ClassProperty)
    float HearingRange; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float LoSHearingRange; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseLoSHearing; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::uint8_t DetectionByAffiliation[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAISenseConfig_Hearing, Implementation) == 72, "Offset mismatch for UAISenseConfig_Hearing::Implementation");
static_assert(offsetof(UAISenseConfig_Hearing, HearingRange) == 80, "Offset mismatch for UAISenseConfig_Hearing::HearingRange");
static_assert(offsetof(UAISenseConfig_Hearing, LoSHearingRange) == 84, "Offset mismatch for UAISenseConfig_Hearing::LoSHearingRange");
static_assert(offsetof(UAISenseConfig_Hearing, bUseLoSHearing) == 88, "Offset mismatch for UAISenseConfig_Hearing::bUseLoSHearing");
static_assert(offsetof(UAISenseConfig_Hearing, DetectionByAffiliation) == 92, "Offset mismatch for UAISenseConfig_Hearing::DetectionByAffiliation");

// /Script/AIModule.AISenseConfig_Prediction
// Kind: Class; super: AISenseConfig
class UAISenseConfig_Prediction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DebugColor[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    float MaxAge; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStartsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAISenseConfig_Prediction, DebugColor) == 40, "Offset mismatch for UAISenseConfig_Prediction::DebugColor");
static_assert(offsetof(UAISenseConfig_Prediction, MaxAge) == 44, "Offset mismatch for UAISenseConfig_Prediction::MaxAge");
static_assert(offsetof(UAISenseConfig_Prediction, bStartsEnabled) == 48, "Offset mismatch for UAISenseConfig_Prediction::bStartsEnabled");

// /Script/AIModule.AISenseConfig_Sight
// Kind: Class; super: AISenseConfig
class UAISenseConfig_Sight
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Implementation; // 0x0048 (Size: 0x8, Type: ClassProperty)
    float SightRadius; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float LoseSightRadius; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float PeripheralVisionAngleDegrees; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DetectionByAffiliation[0x4]; // 0x005C (Size: 0x4, Type: StructProperty)
    float AutoSuccessRangeFromLastSeenLocation; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float PointOfViewBackwardOffset; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float NearClippingRadius; // 0x0068 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAISenseConfig_Sight, Implementation) == 72, "Offset mismatch for UAISenseConfig_Sight::Implementation");
static_assert(offsetof(UAISenseConfig_Sight, SightRadius) == 80, "Offset mismatch for UAISenseConfig_Sight::SightRadius");
static_assert(offsetof(UAISenseConfig_Sight, LoseSightRadius) == 84, "Offset mismatch for UAISenseConfig_Sight::LoseSightRadius");
static_assert(offsetof(UAISenseConfig_Sight, PeripheralVisionAngleDegrees) == 88, "Offset mismatch for UAISenseConfig_Sight::PeripheralVisionAngleDegrees");
static_assert(offsetof(UAISenseConfig_Sight, DetectionByAffiliation) == 92, "Offset mismatch for UAISenseConfig_Sight::DetectionByAffiliation");
static_assert(offsetof(UAISenseConfig_Sight, AutoSuccessRangeFromLastSeenLocation) == 96, "Offset mismatch for UAISenseConfig_Sight::AutoSuccessRangeFromLastSeenLocation");
static_assert(offsetof(UAISenseConfig_Sight, PointOfViewBackwardOffset) == 100, "Offset mismatch for UAISenseConfig_Sight::PointOfViewBackwardOffset");
static_assert(offsetof(UAISenseConfig_Sight, NearClippingRadius) == 104, "Offset mismatch for UAISenseConfig_Sight::NearClippingRadius");

// /Script/AIModule.AISenseConfig_Team
// Kind: Class; super: AISenseConfig
class UAISenseConfig_Team
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DebugColor[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    float MaxAge; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStartsEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAISenseConfig_Team, DebugColor) == 40, "Offset mismatch for UAISenseConfig_Team::DebugColor");
static_assert(offsetof(UAISenseConfig_Team, MaxAge) == 44, "Offset mismatch for UAISenseConfig_Team::MaxAge");
static_assert(offsetof(UAISenseConfig_Team, bStartsEnabled) == 48, "Offset mismatch for UAISenseConfig_Team::bStartsEnabled");

// /Script/AIModule.AISenseConfig_Touch
// Kind: Class; super: AISenseConfig
class UAISenseConfig_Touch
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t DetectionByAffiliation[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAISenseConfig_Touch, DetectionByAffiliation) == 72, "Offset mismatch for UAISenseConfig_Touch::DetectionByAffiliation");

// /Script/AIModule.AISenseEvent
// Kind: Class; super: Object
class UAISenseEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.AISenseEvent_Damage
// Kind: Class; super: AISenseEvent
class UAISenseEvent_Damage
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Event[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAISenseEvent_Damage, Event) == 40, "Offset mismatch for UAISenseEvent_Damage::Event");

// /Script/AIModule.AISenseEvent_Hearing
// Kind: Class; super: AISenseEvent
class UAISenseEvent_Hearing
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Event[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAISenseEvent_Hearing, Event) == 40, "Offset mismatch for UAISenseEvent_Hearing::Event");

// /Script/AIModule.AISense_Blueprint
// Kind: Class; super: AISense
class UAISense_Blueprint
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* ListenerDataType; // 0x0078 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ListenerContainer; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnprocessedEvents; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAISense_Blueprint, ListenerDataType) == 120, "Offset mismatch for UAISense_Blueprint::ListenerDataType");
static_assert(offsetof(UAISense_Blueprint, ListenerContainer) == 128, "Offset mismatch for UAISense_Blueprint::ListenerContainer");
static_assert(offsetof(UAISense_Blueprint, UnprocessedEvents) == 144, "Offset mismatch for UAISense_Blueprint::UnprocessedEvents");

// /Script/AIModule.AISense_Damage
// Kind: Class; super: AISense
class UAISense_Damage
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> RegisteredEvents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAISense_Damage, RegisteredEvents) == 120, "Offset mismatch for UAISense_Damage::RegisteredEvents");

// /Script/AIModule.AISense_Hearing
// Kind: Class; super: AISense
class UAISense_Hearing
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> NoiseEvents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    float SpeedOfSoundSq; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAISense_Hearing, NoiseEvents) == 120, "Offset mismatch for UAISense_Hearing::NoiseEvents");
static_assert(offsetof(UAISense_Hearing, SpeedOfSoundSq) == 136, "Offset mismatch for UAISense_Hearing::SpeedOfSoundSq");

// /Script/AIModule.AISense_Prediction
// Kind: Class; super: AISense
class UAISense_Prediction
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> RegisteredEvents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAISense_Prediction, RegisteredEvents) == 120, "Offset mismatch for UAISense_Prediction::RegisteredEvents");

// /Script/AIModule.AISense_Sight
// Kind: Class; super: AISense
class UAISense_Sight
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::int32_t MaxTracesPerTick; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxAsyncTracesPerTick; // 0x00D4 (Size: 0x4, Type: IntProperty)
    std::int32_t MinQueriesPerTimeSliceCheck; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00DC
    double MaxTimeSlicePerTick; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    float HighImportanceQueryDistanceThreshold; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00EC
    float MaxQueryImportance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float SightLimitQueryImportance; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float PendingQueriesBudgetReductionRatio; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAsynchronousTraceForDefaultSightQueries; // 0x00FC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAISense_Sight, MaxTracesPerTick) == 208, "Offset mismatch for UAISense_Sight::MaxTracesPerTick");
static_assert(offsetof(UAISense_Sight, MaxAsyncTracesPerTick) == 212, "Offset mismatch for UAISense_Sight::MaxAsyncTracesPerTick");
static_assert(offsetof(UAISense_Sight, MinQueriesPerTimeSliceCheck) == 216, "Offset mismatch for UAISense_Sight::MinQueriesPerTimeSliceCheck");
static_assert(offsetof(UAISense_Sight, MaxTimeSlicePerTick) == 224, "Offset mismatch for UAISense_Sight::MaxTimeSlicePerTick");
static_assert(offsetof(UAISense_Sight, HighImportanceQueryDistanceThreshold) == 232, "Offset mismatch for UAISense_Sight::HighImportanceQueryDistanceThreshold");
static_assert(offsetof(UAISense_Sight, MaxQueryImportance) == 240, "Offset mismatch for UAISense_Sight::MaxQueryImportance");
static_assert(offsetof(UAISense_Sight, SightLimitQueryImportance) == 244, "Offset mismatch for UAISense_Sight::SightLimitQueryImportance");
static_assert(offsetof(UAISense_Sight, PendingQueriesBudgetReductionRatio) == 248, "Offset mismatch for UAISense_Sight::PendingQueriesBudgetReductionRatio");
static_assert(offsetof(UAISense_Sight, bUseAsynchronousTraceForDefaultSightQueries) == 252, "Offset mismatch for UAISense_Sight::bUseAsynchronousTraceForDefaultSightQueries");

// /Script/AIModule.AISense_Team
// Kind: Class; super: AISense
class UAISense_Team
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> RegisteredEvents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAISense_Team, RegisteredEvents) == 120, "Offset mismatch for UAISense_Team::RegisteredEvents");

// /Script/AIModule.AISense_Touch
// Kind: Class; super: AISense
class UAISense_Touch
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> RegisteredEvents; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAISense_Touch, RegisteredEvents) == 120, "Offset mismatch for UAISense_Touch::RegisteredEvents");

// /Script/AIModule.AISightTargetInterface
// Kind: Class; super: Interface
class UAISightTargetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.AISubsystem
// Kind: Class; super: Object
class UAISubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* AISystem; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAISubsystem, AISystem) == 48, "Offset mismatch for UAISubsystem::AISystem");

// /Script/AIModule.AISystem
// Kind: Class; super: AISystemBase
class UAISystem
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t PerceptionSystemClassName[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t HotSpotManagerClassName[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t EnvQueryManagerClassName[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    float AcceptanceRadius; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float PathfollowingRegularPathPointAcceptanceRadius; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float PathfollowingNavLinkAcceptanceRadius; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFinishMoveOnGoalOverlap; // 0x00AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAcceptPartialPaths; // 0x00AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowStrafing; // 0x00AE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowControllersAsEQSQuerier; // 0x00AF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableDebuggerPlugin; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForgetStaleActors; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAddBlackboardSelfKey; // 0x00B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearBBEntryOnBTEQSFail; // 0x00B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlackboardKeyDecoratorAllowsNoneAsValue; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B5
    std::uint8_t DefaultBlackboard[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultSightCollisionChannel; // 0x00D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00D9
    void* BehaviorTreeManager; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* EnvironmentQueryManager; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* PerceptionSystem; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AllProxyObjects; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    void* HotspotManager; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* NavLocalGrids; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAISystem, PerceptionSystemClassName) == 88, "Offset mismatch for UAISystem::PerceptionSystemClassName");
static_assert(offsetof(UAISystem, HotSpotManagerClassName) == 112, "Offset mismatch for UAISystem::HotSpotManagerClassName");
static_assert(offsetof(UAISystem, EnvQueryManagerClassName) == 136, "Offset mismatch for UAISystem::EnvQueryManagerClassName");
static_assert(offsetof(UAISystem, AcceptanceRadius) == 160, "Offset mismatch for UAISystem::AcceptanceRadius");
static_assert(offsetof(UAISystem, PathfollowingRegularPathPointAcceptanceRadius) == 164, "Offset mismatch for UAISystem::PathfollowingRegularPathPointAcceptanceRadius");
static_assert(offsetof(UAISystem, PathfollowingNavLinkAcceptanceRadius) == 168, "Offset mismatch for UAISystem::PathfollowingNavLinkAcceptanceRadius");
static_assert(offsetof(UAISystem, bFinishMoveOnGoalOverlap) == 172, "Offset mismatch for UAISystem::bFinishMoveOnGoalOverlap");
static_assert(offsetof(UAISystem, bAcceptPartialPaths) == 173, "Offset mismatch for UAISystem::bAcceptPartialPaths");
static_assert(offsetof(UAISystem, bAllowStrafing) == 174, "Offset mismatch for UAISystem::bAllowStrafing");
static_assert(offsetof(UAISystem, bAllowControllersAsEQSQuerier) == 175, "Offset mismatch for UAISystem::bAllowControllersAsEQSQuerier");
static_assert(offsetof(UAISystem, bEnableDebuggerPlugin) == 176, "Offset mismatch for UAISystem::bEnableDebuggerPlugin");
static_assert(offsetof(UAISystem, bForgetStaleActors) == 177, "Offset mismatch for UAISystem::bForgetStaleActors");
static_assert(offsetof(UAISystem, bAddBlackboardSelfKey) == 178, "Offset mismatch for UAISystem::bAddBlackboardSelfKey");
static_assert(offsetof(UAISystem, bClearBBEntryOnBTEQSFail) == 179, "Offset mismatch for UAISystem::bClearBBEntryOnBTEQSFail");
static_assert(offsetof(UAISystem, bBlackboardKeyDecoratorAllowsNoneAsValue) == 180, "Offset mismatch for UAISystem::bBlackboardKeyDecoratorAllowsNoneAsValue");
static_assert(offsetof(UAISystem, DefaultBlackboard) == 184, "Offset mismatch for UAISystem::DefaultBlackboard");
static_assert(offsetof(UAISystem, DefaultSightCollisionChannel) == 216, "Offset mismatch for UAISystem::DefaultSightCollisionChannel");
static_assert(offsetof(UAISystem, BehaviorTreeManager) == 224, "Offset mismatch for UAISystem::BehaviorTreeManager");
static_assert(offsetof(UAISystem, EnvironmentQueryManager) == 232, "Offset mismatch for UAISystem::EnvironmentQueryManager");
static_assert(offsetof(UAISystem, PerceptionSystem) == 240, "Offset mismatch for UAISystem::PerceptionSystem");
static_assert(offsetof(UAISystem, AllProxyObjects) == 248, "Offset mismatch for UAISystem::AllProxyObjects");
static_assert(offsetof(UAISystem, HotspotManager) == 264, "Offset mismatch for UAISystem::HotspotManager");
static_assert(offsetof(UAISystem, NavLocalGrids) == 272, "Offset mismatch for UAISystem::NavLocalGrids");

// /Script/AIModule.AITask
// Kind: Class; super: GameplayTask
class UAITask
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* OwnerController; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAITask, OwnerController) == 96, "Offset mismatch for UAITask::OwnerController");

// /Script/AIModule.AITask_LockLogic
// Kind: Class; super: AITask
class UAITask_LockLogic
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* OwnerController; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAITask_LockLogic, OwnerController) == 96, "Offset mismatch for UAITask_LockLogic::OwnerController");

// /Script/AIModule.AITask_MoveTo
// Kind: Class; super: AITask
class UAITask_MoveTo
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FMulticastInlineDelegate OnRequestFailed; // 0x0080 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMoveFinished; // 0x0090 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MoveRequest[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAITask_MoveTo, OnRequestFailed) == 128, "Offset mismatch for UAITask_MoveTo::OnRequestFailed");
static_assert(offsetof(UAITask_MoveTo, OnMoveFinished) == 144, "Offset mismatch for UAITask_MoveTo::OnMoveFinished");
static_assert(offsetof(UAITask_MoveTo, MoveRequest) == 160, "Offset mismatch for UAITask_MoveTo::MoveRequest");

// /Script/AIModule.AITask_RunEQS
// Kind: Class; super: AITask
class UAITask_RunEQS
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* OwnerController; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAITask_RunEQS, OwnerController) == 96, "Offset mismatch for UAITask_RunEQS::OwnerController");

// /Script/AIModule.BTAuxiliaryNode
// Kind: Class; super: BTNode
class UBTAuxiliaryNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString NodeName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* TreeAsset; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* ParentNode; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint16_t ExecutionIndex; // 0x0050 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MemoryOffset; // 0x0052 (Size: 0x2, Type: UInt16Property)
    std::uint8_t TreeDepth; // 0x0054 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bCreateNodeInstance; // 0x0055 (Size: 0x1, Type: BoolProperty)
    // 0x0055 BoolProperty bIsInjected (shared storage)
    // 0x0055 BoolProperty bIsInstanced (shared storage)
    // 0x0055 BoolProperty bOwnsGameplayTasks (shared storage)
};

static_assert(offsetof(UBTAuxiliaryNode, NodeName) == 48, "Offset mismatch for UBTAuxiliaryNode::NodeName");
static_assert(offsetof(UBTAuxiliaryNode, TreeAsset) == 64, "Offset mismatch for UBTAuxiliaryNode::TreeAsset");
static_assert(offsetof(UBTAuxiliaryNode, ParentNode) == 72, "Offset mismatch for UBTAuxiliaryNode::ParentNode");
static_assert(offsetof(UBTAuxiliaryNode, ExecutionIndex) == 80, "Offset mismatch for UBTAuxiliaryNode::ExecutionIndex");
static_assert(offsetof(UBTAuxiliaryNode, MemoryOffset) == 82, "Offset mismatch for UBTAuxiliaryNode::MemoryOffset");
static_assert(offsetof(UBTAuxiliaryNode, TreeDepth) == 84, "Offset mismatch for UBTAuxiliaryNode::TreeDepth");
static_assert(offsetof(UBTAuxiliaryNode, bCreateNodeInstance) == 85, "Offset mismatch for UBTAuxiliaryNode::bCreateNodeInstance");

// /Script/AIModule.BTCompositeNode
// Kind: Class; super: BTNode
class UBTCompositeNode
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Children; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Services; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyDecoratorScope; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTCompositeNode, Children) == 88, "Offset mismatch for UBTCompositeNode::Children");
static_assert(offsetof(UBTCompositeNode, Services) == 104, "Offset mismatch for UBTCompositeNode::Services");
static_assert(offsetof(UBTCompositeNode, bApplyDecoratorScope) == 120, "Offset mismatch for UBTCompositeNode::bApplyDecoratorScope");

// /Script/AIModule.BTComposite_Selector
// Kind: Class; super: BTCompositeNode
class UBTComposite_Selector
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Children; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Services; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyDecoratorScope; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTComposite_Selector, Children) == 88, "Offset mismatch for UBTComposite_Selector::Children");
static_assert(offsetof(UBTComposite_Selector, Services) == 104, "Offset mismatch for UBTComposite_Selector::Services");
static_assert(offsetof(UBTComposite_Selector, bApplyDecoratorScope) == 120, "Offset mismatch for UBTComposite_Selector::bApplyDecoratorScope");

// /Script/AIModule.BTComposite_Sequence
// Kind: Class; super: BTCompositeNode
class UBTComposite_Sequence
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Children; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Services; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bApplyDecoratorScope; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTComposite_Sequence, Children) == 88, "Offset mismatch for UBTComposite_Sequence::Children");
static_assert(offsetof(UBTComposite_Sequence, Services) == 104, "Offset mismatch for UBTComposite_Sequence::Services");
static_assert(offsetof(UBTComposite_Sequence, bApplyDecoratorScope) == 120, "Offset mismatch for UBTComposite_Sequence::bApplyDecoratorScope");

// /Script/AIModule.BTComposite_SimpleParallel
// Kind: Class; super: BTCompositeNode
class UBTComposite_SimpleParallel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t FinishMode; // 0x0080 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBTComposite_SimpleParallel, FinishMode) == 128, "Offset mismatch for UBTComposite_SimpleParallel::FinishMode");

// /Script/AIModule.BTDecorator
// Kind: Class; super: BTAuxiliaryNode
class UBTDecorator
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t FlowAbortMode; // 0x0064 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBTDecorator, bInverseCondition) == 96, "Offset mismatch for UBTDecorator::bInverseCondition");
static_assert(offsetof(UBTDecorator, FlowAbortMode) == 100, "Offset mismatch for UBTDecorator::FlowAbortMode");

// /Script/AIModule.BTDecorator_Blackboard
// Kind: Class; super: BTDecorator_BlackboardBase
class UBTDecorator_Blackboard
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::int32_t IntValue; // 0x0090 (Size: 0x4, Type: IntProperty)
    float FloatValue; // 0x0094 (Size: 0x4, Type: FloatProperty)
    FString StringValue; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString CachedDescription; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t OperationType; // 0x00B8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NotifyObserver; // 0x00B9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBTDecorator_Blackboard, IntValue) == 144, "Offset mismatch for UBTDecorator_Blackboard::IntValue");
static_assert(offsetof(UBTDecorator_Blackboard, FloatValue) == 148, "Offset mismatch for UBTDecorator_Blackboard::FloatValue");
static_assert(offsetof(UBTDecorator_Blackboard, StringValue) == 152, "Offset mismatch for UBTDecorator_Blackboard::StringValue");
static_assert(offsetof(UBTDecorator_Blackboard, CachedDescription) == 168, "Offset mismatch for UBTDecorator_Blackboard::CachedDescription");
static_assert(offsetof(UBTDecorator_Blackboard, OperationType) == 184, "Offset mismatch for UBTDecorator_Blackboard::OperationType");
static_assert(offsetof(UBTDecorator_Blackboard, NotifyObserver) == 185, "Offset mismatch for UBTDecorator_Blackboard::NotifyObserver");

// /Script/AIModule.BTDecorator_BlackboardBase
// Kind: Class; super: BTDecorator
class UBTDecorator_BlackboardBase
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_BlackboardBase, BlackboardKey) == 104, "Offset mismatch for UBTDecorator_BlackboardBase::BlackboardKey");

// /Script/AIModule.BTDecorator_BlueprintBase
// Kind: Class; super: BTDecorator
class UBTDecorator_BlueprintBase
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* AIOwner; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* ActorOwner; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedKeyNames; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0088
    std::uint8_t bCheckConditionOnlyBlackBoardChanges; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bShowPropertyDetails (shared storage)
};

static_assert(offsetof(UBTDecorator_BlueprintBase, AIOwner) == 104, "Offset mismatch for UBTDecorator_BlueprintBase::AIOwner");
static_assert(offsetof(UBTDecorator_BlueprintBase, ActorOwner) == 112, "Offset mismatch for UBTDecorator_BlueprintBase::ActorOwner");
static_assert(offsetof(UBTDecorator_BlueprintBase, ObservedKeyNames) == 120, "Offset mismatch for UBTDecorator_BlueprintBase::ObservedKeyNames");
static_assert(offsetof(UBTDecorator_BlueprintBase, bCheckConditionOnlyBlackBoardChanges) == 152, "Offset mismatch for UBTDecorator_BlueprintBase::bCheckConditionOnlyBlackBoardChanges");

// /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
// Kind: Class; super: BTDecorator
class UBTDecorator_CheckGameplayTagsOnActor
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ActorToCheck[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t TagsToMatch; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    std::uint8_t GameplayTags[0x20]; // 0x0098 (Size: 0x20, Type: StructProperty)
    FString CachedDescription; // 0x00B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck) == 104, "Offset mismatch for UBTDecorator_CheckGameplayTagsOnActor::ActorToCheck");
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch) == 144, "Offset mismatch for UBTDecorator_CheckGameplayTagsOnActor::TagsToMatch");
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags) == 152, "Offset mismatch for UBTDecorator_CheckGameplayTagsOnActor::GameplayTags");
static_assert(offsetof(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription) == 184, "Offset mismatch for UBTDecorator_CheckGameplayTagsOnActor::CachedDescription");

// /Script/AIModule.BTDecorator_CompareBBEntries
// Kind: Class; super: BTDecorator
class UBTDecorator_CompareBBEntries
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Operator; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t BlackboardKeyA[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlackboardKeyB[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_CompareBBEntries, Operator) == 104, "Offset mismatch for UBTDecorator_CompareBBEntries::Operator");
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyA) == 112, "Offset mismatch for UBTDecorator_CompareBBEntries::BlackboardKeyA");
static_assert(offsetof(UBTDecorator_CompareBBEntries, BlackboardKeyB) == 152, "Offset mismatch for UBTDecorator_CompareBBEntries::BlackboardKeyB");

// /Script/AIModule.BTDecorator_ConditionalLoop
// Kind: Class; super: BTDecorator_Blackboard
class UBTDecorator_ConditionalLoop
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::int32_t IntValue; // 0x0090 (Size: 0x4, Type: IntProperty)
    float FloatValue; // 0x0094 (Size: 0x4, Type: FloatProperty)
    FString StringValue; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString CachedDescription; // 0x00A8 (Size: 0x10, Type: StrProperty)
    std::uint8_t OperationType; // 0x00B8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NotifyObserver; // 0x00B9 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBTDecorator_ConditionalLoop, IntValue) == 144, "Offset mismatch for UBTDecorator_ConditionalLoop::IntValue");
static_assert(offsetof(UBTDecorator_ConditionalLoop, FloatValue) == 148, "Offset mismatch for UBTDecorator_ConditionalLoop::FloatValue");
static_assert(offsetof(UBTDecorator_ConditionalLoop, StringValue) == 152, "Offset mismatch for UBTDecorator_ConditionalLoop::StringValue");
static_assert(offsetof(UBTDecorator_ConditionalLoop, CachedDescription) == 168, "Offset mismatch for UBTDecorator_ConditionalLoop::CachedDescription");
static_assert(offsetof(UBTDecorator_ConditionalLoop, OperationType) == 184, "Offset mismatch for UBTDecorator_ConditionalLoop::OperationType");
static_assert(offsetof(UBTDecorator_ConditionalLoop, NotifyObserver) == 185, "Offset mismatch for UBTDecorator_ConditionalLoop::NotifyObserver");

// /Script/AIModule.BTDecorator_ConeCheck
// Kind: Class; super: BTDecorator
class UBTDecorator_ConeCheck
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ConeHalfAngle[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConeOrigin[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t ConeDirection[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Observed[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_ConeCheck, ConeHalfAngle) == 104, "Offset mismatch for UBTDecorator_ConeCheck::ConeHalfAngle");
static_assert(offsetof(UBTDecorator_ConeCheck, ConeOrigin) == 128, "Offset mismatch for UBTDecorator_ConeCheck::ConeOrigin");
static_assert(offsetof(UBTDecorator_ConeCheck, ConeDirection) == 168, "Offset mismatch for UBTDecorator_ConeCheck::ConeDirection");
static_assert(offsetof(UBTDecorator_ConeCheck, Observed) == 208, "Offset mismatch for UBTDecorator_ConeCheck::Observed");

// /Script/AIModule.BTDecorator_Cooldown
// Kind: Class; super: BTDecorator
class UBTDecorator_Cooldown
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CooldownTime[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_Cooldown, CooldownTime) == 104, "Offset mismatch for UBTDecorator_Cooldown::CooldownTime");

// /Script/AIModule.BTDecorator_DoesPathExist
// Kind: Class; super: BTDecorator
class UBTDecorator_DoesPathExist
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BlackboardKeyA[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t BlackboardKeyB[0x28]; // 0x0090 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseSelf; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    std::uint8_t PathQueryType[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t FilterClass[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyA) == 104, "Offset mismatch for UBTDecorator_DoesPathExist::BlackboardKeyA");
static_assert(offsetof(UBTDecorator_DoesPathExist, BlackboardKeyB) == 144, "Offset mismatch for UBTDecorator_DoesPathExist::BlackboardKeyB");
static_assert(offsetof(UBTDecorator_DoesPathExist, bUseSelf) == 184, "Offset mismatch for UBTDecorator_DoesPathExist::bUseSelf");
static_assert(offsetof(UBTDecorator_DoesPathExist, PathQueryType) == 192, "Offset mismatch for UBTDecorator_DoesPathExist::PathQueryType");
static_assert(offsetof(UBTDecorator_DoesPathExist, FilterClass) == 240, "Offset mismatch for UBTDecorator_DoesPathExist::FilterClass");

// /Script/AIModule.BTDecorator_ForceSuccess
// Kind: Class; super: BTDecorator
class UBTDecorator_ForceSuccess
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t FlowAbortMode; // 0x0064 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBTDecorator_ForceSuccess, bInverseCondition) == 96, "Offset mismatch for UBTDecorator_ForceSuccess::bInverseCondition");
static_assert(offsetof(UBTDecorator_ForceSuccess, FlowAbortMode) == 100, "Offset mismatch for UBTDecorator_ForceSuccess::FlowAbortMode");

// /Script/AIModule.BTDecorator_IsAtLocation
// Kind: Class; super: BTDecorator_BlackboardBase
class UBTDecorator_IsAtLocation
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float AcceptableRadius; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0094
    std::uint8_t ParametrizedAcceptableRadius[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    std::uint8_t GeometricDistanceType; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00D1
    std::uint8_t bUseParametrizedRadius; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00D5
    std::uint8_t bUseNavAgentGoalLocation[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bPathFindingBasedTest[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_IsAtLocation, AcceptableRadius) == 144, "Offset mismatch for UBTDecorator_IsAtLocation::AcceptableRadius");
static_assert(offsetof(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius) == 152, "Offset mismatch for UBTDecorator_IsAtLocation::ParametrizedAcceptableRadius");
static_assert(offsetof(UBTDecorator_IsAtLocation, GeometricDistanceType) == 208, "Offset mismatch for UBTDecorator_IsAtLocation::GeometricDistanceType");
static_assert(offsetof(UBTDecorator_IsAtLocation, bUseParametrizedRadius) == 212, "Offset mismatch for UBTDecorator_IsAtLocation::bUseParametrizedRadius");
static_assert(offsetof(UBTDecorator_IsAtLocation, bUseNavAgentGoalLocation) == 216, "Offset mismatch for UBTDecorator_IsAtLocation::bUseNavAgentGoalLocation");
static_assert(offsetof(UBTDecorator_IsAtLocation, bPathFindingBasedTest) == 240, "Offset mismatch for UBTDecorator_IsAtLocation::bPathFindingBasedTest");

// /Script/AIModule.BTDecorator_IsBBEntryOfClass
// Kind: Class; super: BTDecorator_BlackboardBase
class UBTDecorator_IsBBEntryOfClass
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t TestClass[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_IsBBEntryOfClass, TestClass) == 144, "Offset mismatch for UBTDecorator_IsBBEntryOfClass::TestClass");

// /Script/AIModule.BTDecorator_KeepInCone
// Kind: Class; super: BTDecorator
class UBTDecorator_KeepInCone
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ConeHalfAngle[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConeOrigin[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t Observed[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseSelfAsObserved; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    // 0x00D0 BoolProperty bUseSelfAsOrigin (shared storage)
};

static_assert(offsetof(UBTDecorator_KeepInCone, ConeHalfAngle) == 104, "Offset mismatch for UBTDecorator_KeepInCone::ConeHalfAngle");
static_assert(offsetof(UBTDecorator_KeepInCone, ConeOrigin) == 128, "Offset mismatch for UBTDecorator_KeepInCone::ConeOrigin");
static_assert(offsetof(UBTDecorator_KeepInCone, Observed) == 168, "Offset mismatch for UBTDecorator_KeepInCone::Observed");
static_assert(offsetof(UBTDecorator_KeepInCone, bUseSelfAsObserved) == 208, "Offset mismatch for UBTDecorator_KeepInCone::bUseSelfAsObserved");

// /Script/AIModule.BTDecorator_Loop
// Kind: Class; super: BTDecorator
class UBTDecorator_Loop
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t NumLoops[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t bInfiniteLoop; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t InfiniteLoopTimeoutTime[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_Loop, NumLoops) == 104, "Offset mismatch for UBTDecorator_Loop::NumLoops");
static_assert(offsetof(UBTDecorator_Loop, bInfiniteLoop) == 128, "Offset mismatch for UBTDecorator_Loop::bInfiniteLoop");
static_assert(offsetof(UBTDecorator_Loop, InfiniteLoopTimeoutTime) == 136, "Offset mismatch for UBTDecorator_Loop::InfiniteLoopTimeoutTime");

// /Script/AIModule.BTDecorator_LoopUntil
// Kind: Class; super: BTDecorator
class UBTDecorator_LoopUntil
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t RequiredResult[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_LoopUntil, RequiredResult) == 104, "Offset mismatch for UBTDecorator_LoopUntil::RequiredResult");

// /Script/AIModule.BTDecorator_ReachedMoveGoal
// Kind: Class; super: BTDecorator
class UBTDecorator_ReachedMoveGoal
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::uint8_t FlowAbortMode; // 0x0064 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBTDecorator_ReachedMoveGoal, bInverseCondition) == 96, "Offset mismatch for UBTDecorator_ReachedMoveGoal::bInverseCondition");
static_assert(offsetof(UBTDecorator_ReachedMoveGoal, FlowAbortMode) == 100, "Offset mismatch for UBTDecorator_ReachedMoveGoal::FlowAbortMode");

// /Script/AIModule.BTDecorator_SetTagCooldown
// Kind: Class; super: BTDecorator
class UBTDecorator_SetTagCooldown
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CooldownTag[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t CooldownDuration[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAddToExistingDuration[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_SetTagCooldown, CooldownTag) == 104, "Offset mismatch for UBTDecorator_SetTagCooldown::CooldownTag");
static_assert(offsetof(UBTDecorator_SetTagCooldown, CooldownDuration) == 112, "Offset mismatch for UBTDecorator_SetTagCooldown::CooldownDuration");
static_assert(offsetof(UBTDecorator_SetTagCooldown, bAddToExistingDuration) == 136, "Offset mismatch for UBTDecorator_SetTagCooldown::bAddToExistingDuration");

// /Script/AIModule.BTDecorator_TagCooldown
// Kind: Class; super: BTDecorator
class UBTDecorator_TagCooldown
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CooldownTag[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t CooldownDuration[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAddToExistingDuration[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t bActivatesCooldown[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_TagCooldown, CooldownTag) == 104, "Offset mismatch for UBTDecorator_TagCooldown::CooldownTag");
static_assert(offsetof(UBTDecorator_TagCooldown, CooldownDuration) == 112, "Offset mismatch for UBTDecorator_TagCooldown::CooldownDuration");
static_assert(offsetof(UBTDecorator_TagCooldown, bAddToExistingDuration) == 136, "Offset mismatch for UBTDecorator_TagCooldown::bAddToExistingDuration");
static_assert(offsetof(UBTDecorator_TagCooldown, bActivatesCooldown) == 160, "Offset mismatch for UBTDecorator_TagCooldown::bActivatesCooldown");

// /Script/AIModule.BTDecorator_TimeLimit
// Kind: Class; super: BTDecorator
class UBTDecorator_TimeLimit
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TimeLimit[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTDecorator_TimeLimit, TimeLimit) == 104, "Offset mismatch for UBTDecorator_TimeLimit::TimeLimit");

// /Script/AIModule.BTFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBTFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.BTNode
// Kind: Class; super: Object
class UBTNode
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString NodeName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* TreeAsset; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* ParentNode; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint16_t ExecutionIndex; // 0x0050 (Size: 0x2, Type: UInt16Property)
    std::uint16_t MemoryOffset; // 0x0052 (Size: 0x2, Type: UInt16Property)
    std::uint8_t TreeDepth; // 0x0054 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bCreateNodeInstance; // 0x0055 (Size: 0x1, Type: BoolProperty)
    // 0x0055 BoolProperty bIsInjected (shared storage)
    // 0x0055 BoolProperty bIsInstanced (shared storage)
    // 0x0055 BoolProperty bOwnsGameplayTasks (shared storage)
};

static_assert(offsetof(UBTNode, NodeName) == 48, "Offset mismatch for UBTNode::NodeName");
static_assert(offsetof(UBTNode, TreeAsset) == 64, "Offset mismatch for UBTNode::TreeAsset");
static_assert(offsetof(UBTNode, ParentNode) == 72, "Offset mismatch for UBTNode::ParentNode");
static_assert(offsetof(UBTNode, ExecutionIndex) == 80, "Offset mismatch for UBTNode::ExecutionIndex");
static_assert(offsetof(UBTNode, MemoryOffset) == 82, "Offset mismatch for UBTNode::MemoryOffset");
static_assert(offsetof(UBTNode, TreeDepth) == 84, "Offset mismatch for UBTNode::TreeDepth");
static_assert(offsetof(UBTNode, bCreateNodeInstance) == 85, "Offset mismatch for UBTNode::bCreateNodeInstance");

// /Script/AIModule.BTService
// Kind: Class; super: BTAuxiliaryNode
class UBTService
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float Interval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCallTickOnSearchStart; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bRestartTimerOnEachActivation (shared storage)
};

static_assert(offsetof(UBTService, Interval) == 96, "Offset mismatch for UBTService::Interval");
static_assert(offsetof(UBTService, RandomDeviation) == 100, "Offset mismatch for UBTService::RandomDeviation");
static_assert(offsetof(UBTService, bCallTickOnSearchStart) == 104, "Offset mismatch for UBTService::bCallTickOnSearchStart");

// /Script/AIModule.BTService_BlackboardBase
// Kind: Class; super: BTService
class UBTService_BlackboardBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTService_BlackboardBase, BlackboardKey) == 112, "Offset mismatch for UBTService_BlackboardBase::BlackboardKey");

// /Script/AIModule.BTService_BlueprintBase
// Kind: Class; super: BTService
class UBTService_BlueprintBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* AIOwner; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ActorOwner; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0080
    std::uint8_t bShowEventDetails; // 0x0090 (Size: 0x1, Type: BoolProperty)
    // 0x0090 BoolProperty bShowPropertyDetails (shared storage)
};

static_assert(offsetof(UBTService_BlueprintBase, AIOwner) == 112, "Offset mismatch for UBTService_BlueprintBase::AIOwner");
static_assert(offsetof(UBTService_BlueprintBase, ActorOwner) == 120, "Offset mismatch for UBTService_BlueprintBase::ActorOwner");
static_assert(offsetof(UBTService_BlueprintBase, bShowEventDetails) == 144, "Offset mismatch for UBTService_BlueprintBase::bShowEventDetails");

// /Script/AIModule.BTService_DefaultFocus
// Kind: Class; super: BTService_BlackboardBase
class UBTService_DefaultFocus
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t FocusPriority; // 0x0098 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBTService_DefaultFocus, FocusPriority) == 152, "Offset mismatch for UBTService_DefaultFocus::FocusPriority");

// /Script/AIModule.BTService_RunEQS
// Kind: Class; super: BTService_BlackboardBase
class UBTService_RunEQS
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t EQSRequest[0x48]; // 0x0098 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUpdateBBOnFail; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTService_RunEQS, EQSRequest) == 152, "Offset mismatch for UBTService_RunEQS::EQSRequest");
static_assert(offsetof(UBTService_RunEQS, bUpdateBBOnFail) == 224, "Offset mismatch for UBTService_RunEQS::bUpdateBBOnFail");

// /Script/AIModule.BTTaskNode
// Kind: Class; super: BTNode
class UBTTaskNode
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Services; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIgnoreRestartSelf; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTTaskNode, Services) == 88, "Offset mismatch for UBTTaskNode::Services");
static_assert(offsetof(UBTTaskNode, bIgnoreRestartSelf) == 104, "Offset mismatch for UBTTaskNode::bIgnoreRestartSelf");

// /Script/AIModule.BTTask_BlackboardBase
// Kind: Class; super: BTTaskNode
class UBTTask_BlackboardBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_BlackboardBase, BlackboardKey) == 112, "Offset mismatch for UBTTask_BlackboardBase::BlackboardKey");

// /Script/AIModule.BTTask_BlueprintBase
// Kind: Class; super: BTTaskNode
class UBTTask_BlueprintBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* AIOwner; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ActorOwner; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TickInterval[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShowPropertyDetails; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTTask_BlueprintBase, AIOwner) == 112, "Offset mismatch for UBTTask_BlueprintBase::AIOwner");
static_assert(offsetof(UBTTask_BlueprintBase, ActorOwner) == 120, "Offset mismatch for UBTTask_BlueprintBase::ActorOwner");
static_assert(offsetof(UBTTask_BlueprintBase, TickInterval) == 128, "Offset mismatch for UBTTask_BlueprintBase::TickInterval");
static_assert(offsetof(UBTTask_BlueprintBase, bShowPropertyDetails) == 160, "Offset mismatch for UBTTask_BlueprintBase::bShowPropertyDetails");

// /Script/AIModule.BTTask_FinishWithResult
// Kind: Class; super: BTTaskNode
class UBTTask_FinishWithResult
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Result[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_FinishWithResult, Result) == 112, "Offset mismatch for UBTTask_FinishWithResult::Result");

// /Script/AIModule.BTTask_GameplayTaskBase
// Kind: Class; super: BTTaskNode
class UBTTask_GameplayTaskBase
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bWaitForGameplayTask[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_GameplayTaskBase, bWaitForGameplayTask) == 112, "Offset mismatch for UBTTask_GameplayTaskBase::bWaitForGameplayTask");

// /Script/AIModule.BTTask_MakeNoise
// Kind: Class; super: BTTaskNode
class UBTTask_MakeNoise
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Loudnes[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_MakeNoise, Loudnes) == 112, "Offset mismatch for UBTTask_MakeNoise::Loudnes");

// /Script/AIModule.BTTask_MoveDirectlyToward
// Kind: Class; super: BTTask_MoveTo
class UBTTask_MoveDirectlyToward
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t AcceptableRadius[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t FilterClass[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ObservedBlackboardValueTolerance[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowStrafe[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowPartialPath[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t bTrackMovingGoal[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRequireNavigableEndLocation[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t bProjectGoalLocation[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t bReachTestIncludesAgentRadius[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t bReachTestIncludesGoalRadius[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t bStartFromPreviousPath[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t bObserveBlackboardValue; // 0x01A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTTask_MoveDirectlyToward, AcceptableRadius) == 152, "Offset mismatch for UBTTask_MoveDirectlyToward::AcceptableRadius");
static_assert(offsetof(UBTTask_MoveDirectlyToward, FilterClass) == 176, "Offset mismatch for UBTTask_MoveDirectlyToward::FilterClass");
static_assert(offsetof(UBTTask_MoveDirectlyToward, ObservedBlackboardValueTolerance) == 208, "Offset mismatch for UBTTask_MoveDirectlyToward::ObservedBlackboardValueTolerance");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bAllowStrafe) == 232, "Offset mismatch for UBTTask_MoveDirectlyToward::bAllowStrafe");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bAllowPartialPath) == 256, "Offset mismatch for UBTTask_MoveDirectlyToward::bAllowPartialPath");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bTrackMovingGoal) == 280, "Offset mismatch for UBTTask_MoveDirectlyToward::bTrackMovingGoal");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bRequireNavigableEndLocation) == 304, "Offset mismatch for UBTTask_MoveDirectlyToward::bRequireNavigableEndLocation");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bProjectGoalLocation) == 328, "Offset mismatch for UBTTask_MoveDirectlyToward::bProjectGoalLocation");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bReachTestIncludesAgentRadius) == 352, "Offset mismatch for UBTTask_MoveDirectlyToward::bReachTestIncludesAgentRadius");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bReachTestIncludesGoalRadius) == 376, "Offset mismatch for UBTTask_MoveDirectlyToward::bReachTestIncludesGoalRadius");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bStartFromPreviousPath) == 400, "Offset mismatch for UBTTask_MoveDirectlyToward::bStartFromPreviousPath");
static_assert(offsetof(UBTTask_MoveDirectlyToward, bObserveBlackboardValue) == 424, "Offset mismatch for UBTTask_MoveDirectlyToward::bObserveBlackboardValue");

// /Script/AIModule.BTTask_MoveTo
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_MoveTo
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t AcceptableRadius[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t FilterClass[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ObservedBlackboardValueTolerance[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowStrafe[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowPartialPath[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t bTrackMovingGoal[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRequireNavigableEndLocation[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t bProjectGoalLocation[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t bReachTestIncludesAgentRadius[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t bReachTestIncludesGoalRadius[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t bStartFromPreviousPath[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    std::uint8_t bObserveBlackboardValue; // 0x01A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTTask_MoveTo, AcceptableRadius) == 152, "Offset mismatch for UBTTask_MoveTo::AcceptableRadius");
static_assert(offsetof(UBTTask_MoveTo, FilterClass) == 176, "Offset mismatch for UBTTask_MoveTo::FilterClass");
static_assert(offsetof(UBTTask_MoveTo, ObservedBlackboardValueTolerance) == 208, "Offset mismatch for UBTTask_MoveTo::ObservedBlackboardValueTolerance");
static_assert(offsetof(UBTTask_MoveTo, bAllowStrafe) == 232, "Offset mismatch for UBTTask_MoveTo::bAllowStrafe");
static_assert(offsetof(UBTTask_MoveTo, bAllowPartialPath) == 256, "Offset mismatch for UBTTask_MoveTo::bAllowPartialPath");
static_assert(offsetof(UBTTask_MoveTo, bTrackMovingGoal) == 280, "Offset mismatch for UBTTask_MoveTo::bTrackMovingGoal");
static_assert(offsetof(UBTTask_MoveTo, bRequireNavigableEndLocation) == 304, "Offset mismatch for UBTTask_MoveTo::bRequireNavigableEndLocation");
static_assert(offsetof(UBTTask_MoveTo, bProjectGoalLocation) == 328, "Offset mismatch for UBTTask_MoveTo::bProjectGoalLocation");
static_assert(offsetof(UBTTask_MoveTo, bReachTestIncludesAgentRadius) == 352, "Offset mismatch for UBTTask_MoveTo::bReachTestIncludesAgentRadius");
static_assert(offsetof(UBTTask_MoveTo, bReachTestIncludesGoalRadius) == 376, "Offset mismatch for UBTTask_MoveTo::bReachTestIncludesGoalRadius");
static_assert(offsetof(UBTTask_MoveTo, bStartFromPreviousPath) == 400, "Offset mismatch for UBTTask_MoveTo::bStartFromPreviousPath");
static_assert(offsetof(UBTTask_MoveTo, bObserveBlackboardValue) == 424, "Offset mismatch for UBTTask_MoveTo::bObserveBlackboardValue");

// /Script/AIModule.BTTask_PlayAnimation
// Kind: Class; super: BTTaskNode
class UBTTask_PlayAnimation
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t AnimationToPlay[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t bLooping[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t bNonBlocking[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    void* MyOwnerComp; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* CachedSkelMesh; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBTTask_PlayAnimation, AnimationToPlay) == 112, "Offset mismatch for UBTTask_PlayAnimation::AnimationToPlay");
static_assert(offsetof(UBTTask_PlayAnimation, bLooping) == 144, "Offset mismatch for UBTTask_PlayAnimation::bLooping");
static_assert(offsetof(UBTTask_PlayAnimation, bNonBlocking) == 168, "Offset mismatch for UBTTask_PlayAnimation::bNonBlocking");
static_assert(offsetof(UBTTask_PlayAnimation, MyOwnerComp) == 192, "Offset mismatch for UBTTask_PlayAnimation::MyOwnerComp");
static_assert(offsetof(UBTTask_PlayAnimation, CachedSkelMesh) == 200, "Offset mismatch for UBTTask_PlayAnimation::CachedSkelMesh");

// /Script/AIModule.BTTask_PlaySound
// Kind: Class; super: BTTaskNode
class UBTTask_PlaySound
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SoundToPlay[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_PlaySound, SoundToPlay) == 112, "Offset mismatch for UBTTask_PlaySound::SoundToPlay");

// /Script/AIModule.BTTask_RotateToFaceBBEntry
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_RotateToFaceBBEntry
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Precision[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_RotateToFaceBBEntry, Precision) == 152, "Offset mismatch for UBTTask_RotateToFaceBBEntry::Precision");

// /Script/AIModule.BTTask_RunBehavior
// Kind: Class; super: BTTaskNode
class UBTTask_RunBehavior
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* BehaviorAsset; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBTTask_RunBehavior, BehaviorAsset) == 112, "Offset mismatch for UBTTask_RunBehavior::BehaviorAsset");

// /Script/AIModule.BTTask_RunBehaviorDynamic
// Kind: Class; super: BTTaskNode
class UBTTask_RunBehaviorDynamic
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t InjectionTag[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    void* DefaultBehaviorAsset; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* BehaviorAsset; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBTTask_RunBehaviorDynamic, InjectionTag) == 112, "Offset mismatch for UBTTask_RunBehaviorDynamic::InjectionTag");
static_assert(offsetof(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset) == 120, "Offset mismatch for UBTTask_RunBehaviorDynamic::DefaultBehaviorAsset");
static_assert(offsetof(UBTTask_RunBehaviorDynamic, BehaviorAsset) == 128, "Offset mismatch for UBTTask_RunBehaviorDynamic::BehaviorAsset");

// /Script/AIModule.BTTask_RunEQSQuery
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_RunEQSQuery
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t bUseBBKey; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    std::uint8_t EQSRequest[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUpdateBBOnFail; // 0x00E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBTTask_RunEQSQuery, bUseBBKey) == 152, "Offset mismatch for UBTTask_RunEQSQuery::bUseBBKey");
static_assert(offsetof(UBTTask_RunEQSQuery, EQSRequest) == 160, "Offset mismatch for UBTTask_RunEQSQuery::EQSRequest");
static_assert(offsetof(UBTTask_RunEQSQuery, bUpdateBBOnFail) == 232, "Offset mismatch for UBTTask_RunEQSQuery::bUpdateBBOnFail");

// /Script/AIModule.BTTask_SetKeyValueBool
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueBool
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueBool, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueBool::Value");

// /Script/AIModule.BTTask_SetKeyValueClass
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueClass
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* BaseClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Value[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueClass, BaseClass) == 152, "Offset mismatch for UBTTask_SetKeyValueClass::BaseClass");
static_assert(offsetof(UBTTask_SetKeyValueClass, Value) == 160, "Offset mismatch for UBTTask_SetKeyValueClass::Value");

// /Script/AIModule.BTTask_SetKeyValueEnum
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueEnum
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* EnumType; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Value[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueEnum, EnumType) == 152, "Offset mismatch for UBTTask_SetKeyValueEnum::EnumType");
static_assert(offsetof(UBTTask_SetKeyValueEnum, Value) == 160, "Offset mismatch for UBTTask_SetKeyValueEnum::Value");

// /Script/AIModule.BTTask_SetKeyValueFloat
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueFloat
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueFloat, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueFloat::Value");

// /Script/AIModule.BTTask_SetKeyValueInt32
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueInt32
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueInt32, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueInt32::Value");

// /Script/AIModule.BTTask_SetKeyValueName
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueName
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueName, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueName::Value");

// /Script/AIModule.BTTask_SetKeyValueObject
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueObject
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* BaseClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Value[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueObject, BaseClass) == 152, "Offset mismatch for UBTTask_SetKeyValueObject::BaseClass");
static_assert(offsetof(UBTTask_SetKeyValueObject, Value) == 160, "Offset mismatch for UBTTask_SetKeyValueObject::Value");

// /Script/AIModule.BTTask_SetKeyValueRotator
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueRotator
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueRotator, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueRotator::Value");

// /Script/AIModule.BTTask_SetKeyValueString
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueString
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueString, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueString::Value");

// /Script/AIModule.BTTask_SetKeyValueStruct
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueStruct
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* StructType; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Value[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueStruct, StructType) == 152, "Offset mismatch for UBTTask_SetKeyValueStruct::StructType");
static_assert(offsetof(UBTTask_SetKeyValueStruct, Value) == 160, "Offset mismatch for UBTTask_SetKeyValueStruct::Value");

// /Script/AIModule.BTTask_SetKeyValueVector
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueVector
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueVector, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueVector::Value");

// /Script/AIModule.BTTask_SetTagCooldown
// Kind: Class; super: BTTaskNode
class UBTTask_SetTagCooldown
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t CooldownTag[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAddToExistingDuration[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t CooldownDuration[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetTagCooldown, CooldownTag) == 112, "Offset mismatch for UBTTask_SetTagCooldown::CooldownTag");
static_assert(offsetof(UBTTask_SetTagCooldown, bAddToExistingDuration) == 120, "Offset mismatch for UBTTask_SetTagCooldown::bAddToExistingDuration");
static_assert(offsetof(UBTTask_SetTagCooldown, CooldownDuration) == 144, "Offset mismatch for UBTTask_SetTagCooldown::CooldownDuration");

// /Script/AIModule.BTTask_Wait
// Kind: Class; super: BTTaskNode
class UBTTask_Wait
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t WaitTime[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t RandomDeviation[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_Wait, WaitTime) == 112, "Offset mismatch for UBTTask_Wait::WaitTime");
static_assert(offsetof(UBTTask_Wait, RandomDeviation) == 136, "Offset mismatch for UBTTask_Wait::RandomDeviation");

// /Script/AIModule.BTTask_WaitBlackboardTime
// Kind: Class; super: BTTask_Wait
class UBTTask_WaitBlackboardTime
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t BlackboardKey[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_WaitBlackboardTime, BlackboardKey) == 160, "Offset mismatch for UBTTask_WaitBlackboardTime::BlackboardKey");

// /Script/AIModule.BehaviorTree
// Kind: Class; super: Object
class UBehaviorTree
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* RootNode; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* BlackboardAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> RootDecorators; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RootDecoratorOps; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBehaviorTree, RootNode) == 48, "Offset mismatch for UBehaviorTree::RootNode");
static_assert(offsetof(UBehaviorTree, BlackboardAsset) == 56, "Offset mismatch for UBehaviorTree::BlackboardAsset");
static_assert(offsetof(UBehaviorTree, RootDecorators) == 64, "Offset mismatch for UBehaviorTree::RootDecorators");
static_assert(offsetof(UBehaviorTree, RootDecoratorOps) == 80, "Offset mismatch for UBehaviorTree::RootDecoratorOps");

// /Script/AIModule.BehaviorTreeComponent
// Kind: Class; super: BrainComponent
class UBehaviorTreeComponent
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    TArray<void*> NodeInstances; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0xC8]; // 0x0148
    void* DefaultBehaviorTreeAsset; // 0x0210 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBehaviorTreeComponent, NodeInstances) == 312, "Offset mismatch for UBehaviorTreeComponent::NodeInstances");
static_assert(offsetof(UBehaviorTreeComponent, DefaultBehaviorTreeAsset) == 528, "Offset mismatch for UBehaviorTreeComponent::DefaultBehaviorTreeAsset");

// /Script/AIModule.BehaviorTreeManager
// Kind: Class; super: Object
class UBehaviorTreeManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MaxDebuggerSteps; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> LoadedTemplates; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveComponents; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBehaviorTreeManager, MaxDebuggerSteps) == 40, "Offset mismatch for UBehaviorTreeManager::MaxDebuggerSteps");
static_assert(offsetof(UBehaviorTreeManager, LoadedTemplates) == 48, "Offset mismatch for UBehaviorTreeManager::LoadedTemplates");
static_assert(offsetof(UBehaviorTreeManager, ActiveComponents) == 64, "Offset mismatch for UBehaviorTreeManager::ActiveComponents");

// /Script/AIModule.BehaviorTreeTypes
// Kind: Class; super: Object
class UBehaviorTreeTypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.BlackboardAssetProvider
// Kind: Class; super: Interface
class UBlackboardAssetProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.BlackboardComponent
// Kind: Class; super: ActorComponent
class UBlackboardComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* BrainComp; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultBlackboardAsset; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* BlackboardAsset; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00D8
    TArray<void*> KeyInstances; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBlackboardComponent, BrainComp) == 192, "Offset mismatch for UBlackboardComponent::BrainComp");
static_assert(offsetof(UBlackboardComponent, DefaultBlackboardAsset) == 200, "Offset mismatch for UBlackboardComponent::DefaultBlackboardAsset");
static_assert(offsetof(UBlackboardComponent, BlackboardAsset) == 208, "Offset mismatch for UBlackboardComponent::BlackboardAsset");
static_assert(offsetof(UBlackboardComponent, KeyInstances) == 248, "Offset mismatch for UBlackboardComponent::KeyInstances");

// /Script/AIModule.BlackboardData
// Kind: Class; super: DataAsset
class UBlackboardData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Parent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Keys; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasSynchronizedKeys; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBlackboardData, Parent) == 40, "Offset mismatch for UBlackboardData::Parent");
static_assert(offsetof(UBlackboardData, Keys) == 48, "Offset mismatch for UBlackboardData::Keys");
static_assert(offsetof(UBlackboardData, bHasSynchronizedKeys) == 64, "Offset mismatch for UBlackboardData::bHasSynchronizedKeys");

// /Script/AIModule.BlackboardKeyType
// Kind: Class; super: Object
class UBlackboardKeyType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.BlackboardKeyType_Bool
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Bool
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bDefaultValue; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBlackboardKeyType_Bool, bDefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_Bool::bDefaultValue");

// /Script/AIModule.BlackboardKeyType_Class
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Class
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* BaseClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* DefaultValue; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBlackboardKeyType_Class, BaseClass) == 48, "Offset mismatch for UBlackboardKeyType_Class::BaseClass");
static_assert(offsetof(UBlackboardKeyType_Class, DefaultValue) == 56, "Offset mismatch for UBlackboardKeyType_Class::DefaultValue");

// /Script/AIModule.BlackboardKeyType_Enum
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Enum
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* EnumType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FString EnumName; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t DefaultValue; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t bIsEnumNameValid; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBlackboardKeyType_Enum, EnumType) == 48, "Offset mismatch for UBlackboardKeyType_Enum::EnumType");
static_assert(offsetof(UBlackboardKeyType_Enum, EnumName) == 56, "Offset mismatch for UBlackboardKeyType_Enum::EnumName");
static_assert(offsetof(UBlackboardKeyType_Enum, DefaultValue) == 72, "Offset mismatch for UBlackboardKeyType_Enum::DefaultValue");
static_assert(offsetof(UBlackboardKeyType_Enum, bIsEnumNameValid) == 76, "Offset mismatch for UBlackboardKeyType_Enum::bIsEnumNameValid");

// /Script/AIModule.BlackboardKeyType_Float
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Float
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float DefaultValue; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBlackboardKeyType_Float, DefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_Float::DefaultValue");

// /Script/AIModule.BlackboardKeyType_Int
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Int
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t DefaultValue; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UBlackboardKeyType_Int, DefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_Int::DefaultValue");

// /Script/AIModule.BlackboardKeyType_Name
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Name
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName DefaultValue; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBlackboardKeyType_Name, DefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_Name::DefaultValue");

// /Script/AIModule.BlackboardKeyType_NativeEnum
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_NativeEnum
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString EnumName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* EnumType; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumName) == 48, "Offset mismatch for UBlackboardKeyType_NativeEnum::EnumName");
static_assert(offsetof(UBlackboardKeyType_NativeEnum, EnumType) == 64, "Offset mismatch for UBlackboardKeyType_NativeEnum::EnumType");

// /Script/AIModule.BlackboardKeyType_Object
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Object
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* BaseClass; // 0x0030 (Size: 0x8, Type: ClassProperty)
    void* DefaultValue; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlackboardKeyType_Object, BaseClass) == 48, "Offset mismatch for UBlackboardKeyType_Object::BaseClass");
static_assert(offsetof(UBlackboardKeyType_Object, DefaultValue) == 56, "Offset mismatch for UBlackboardKeyType_Object::DefaultValue");

// /Script/AIModule.BlackboardKeyType_Rotator
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Rotator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultValue[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseDefaultValue; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBlackboardKeyType_Rotator, DefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_Rotator::DefaultValue");
static_assert(offsetof(UBlackboardKeyType_Rotator, bUseDefaultValue) == 72, "Offset mismatch for UBlackboardKeyType_Rotator::bUseDefaultValue");

// /Script/AIModule.BlackboardKeyType_String
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_String
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString StringValue; // 0x0030 (Size: 0x10, Type: StrProperty)
    FString DefaultValue; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UBlackboardKeyType_String, StringValue) == 48, "Offset mismatch for UBlackboardKeyType_String::StringValue");
static_assert(offsetof(UBlackboardKeyType_String, DefaultValue) == 64, "Offset mismatch for UBlackboardKeyType_String::DefaultValue");

// /Script/AIModule.BlackboardKeyType_Struct
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Struct
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultValue[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t Value[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBlackboardKeyType_Struct, DefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_Struct::DefaultValue");
static_assert(offsetof(UBlackboardKeyType_Struct, Value) == 64, "Offset mismatch for UBlackboardKeyType_Struct::Value");

// /Script/AIModule.BlackboardKeyType_Vector
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_Vector
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultValue[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseDefaultValue; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBlackboardKeyType_Vector, DefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_Vector::DefaultValue");
static_assert(offsetof(UBlackboardKeyType_Vector, bUseDefaultValue) == 72, "Offset mismatch for UBlackboardKeyType_Vector::bUseDefaultValue");

// /Script/AIModule.BrainComponent
// Kind: Class; super: ActorComponent
class UBrainComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* BlackboardComp; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* AIOwner; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBrainComponent, BlackboardComp) == 200, "Offset mismatch for UBrainComponent::BlackboardComp");
static_assert(offsetof(UBrainComponent, AIOwner) == 208, "Offset mismatch for UBrainComponent::AIOwner");

// /Script/AIModule.CrowdAgentInterface
// Kind: Class; super: Interface
class UCrowdAgentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.CrowdFollowingComponent
// Kind: Class; super: PathFollowingComponent
class UCrowdFollowingComponent
{
public:
    std::uint8_t Pad_0000[0x328]; // 0x0000
    std::uint8_t CrowdAgentMoveDirection[0x1]; // 0x0328 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCrowdFollowingComponent, CrowdAgentMoveDirection) == 808, "Offset mismatch for UCrowdFollowingComponent::CrowdAgentMoveDirection");

// /Script/AIModule.CrowdManager
// Kind: Class; super: CrowdManagerBase
class UCrowdManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MyNavData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AvoidanceConfig; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SamplingPatterns; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxAgents; // 0x0050 (Size: 0x4, Type: IntProperty)
    float MaxAgentRadius; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxAvoidedAgents; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxAvoidedWalls; // 0x005C (Size: 0x4, Type: IntProperty)
    float NavmeshCheckInterval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float PathOptimizationInterval; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float SeparationDirClamp; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float PathOffsetRadiusMultiplier; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bResolveCollisions; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCrowdManager, MyNavData) == 40, "Offset mismatch for UCrowdManager::MyNavData");
static_assert(offsetof(UCrowdManager, AvoidanceConfig) == 48, "Offset mismatch for UCrowdManager::AvoidanceConfig");
static_assert(offsetof(UCrowdManager, SamplingPatterns) == 64, "Offset mismatch for UCrowdManager::SamplingPatterns");
static_assert(offsetof(UCrowdManager, MaxAgents) == 80, "Offset mismatch for UCrowdManager::MaxAgents");
static_assert(offsetof(UCrowdManager, MaxAgentRadius) == 84, "Offset mismatch for UCrowdManager::MaxAgentRadius");
static_assert(offsetof(UCrowdManager, MaxAvoidedAgents) == 88, "Offset mismatch for UCrowdManager::MaxAvoidedAgents");
static_assert(offsetof(UCrowdManager, MaxAvoidedWalls) == 92, "Offset mismatch for UCrowdManager::MaxAvoidedWalls");
static_assert(offsetof(UCrowdManager, NavmeshCheckInterval) == 96, "Offset mismatch for UCrowdManager::NavmeshCheckInterval");
static_assert(offsetof(UCrowdManager, PathOptimizationInterval) == 100, "Offset mismatch for UCrowdManager::PathOptimizationInterval");
static_assert(offsetof(UCrowdManager, SeparationDirClamp) == 104, "Offset mismatch for UCrowdManager::SeparationDirClamp");
static_assert(offsetof(UCrowdManager, PathOffsetRadiusMultiplier) == 108, "Offset mismatch for UCrowdManager::PathOffsetRadiusMultiplier");
static_assert(offsetof(UCrowdManager, bResolveCollisions) == 112, "Offset mismatch for UCrowdManager::bResolveCollisions");

// /Script/AIModule.DetourCrowdAIController
// Kind: Class; super: AIController
class UDetourCrowdAIController
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t bAllowStrafe; // 0x0340 (Size: 0x1, Type: BoolProperty)
    // 0x0340 BoolProperty bLOSflag (shared storage)
    // 0x0340 BoolProperty bSetControlRotationFromPawnOrientation (shared storage)
    // 0x0340 BoolProperty bSkipExtraLOSChecks (shared storage)
    // 0x0340 BoolProperty bSkipRootComponentUpdate (shared storage)
    // 0x0340 BoolProperty bStartAILogicOnPossess (shared storage)
    // 0x0340 BoolProperty bStopAILogicOnUnposses (shared storage)
    // 0x0340 BoolProperty bWantsPlayerState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0341
    void* PathFollowingComponent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* BrainComponent; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* PerceptionComponent; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Blackboard; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameplayTasksComponent; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* DefaultNavigationFilterClass; // 0x0370 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate ReceiveMoveCompleted; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDetourCrowdAIController, bAllowStrafe) == 832, "Offset mismatch for UDetourCrowdAIController::bAllowStrafe");
static_assert(offsetof(UDetourCrowdAIController, PathFollowingComponent) == 840, "Offset mismatch for UDetourCrowdAIController::PathFollowingComponent");
static_assert(offsetof(UDetourCrowdAIController, BrainComponent) == 848, "Offset mismatch for UDetourCrowdAIController::BrainComponent");
static_assert(offsetof(UDetourCrowdAIController, PerceptionComponent) == 856, "Offset mismatch for UDetourCrowdAIController::PerceptionComponent");
static_assert(offsetof(UDetourCrowdAIController, Blackboard) == 864, "Offset mismatch for UDetourCrowdAIController::Blackboard");
static_assert(offsetof(UDetourCrowdAIController, CachedGameplayTasksComponent) == 872, "Offset mismatch for UDetourCrowdAIController::CachedGameplayTasksComponent");
static_assert(offsetof(UDetourCrowdAIController, DefaultNavigationFilterClass) == 880, "Offset mismatch for UDetourCrowdAIController::DefaultNavigationFilterClass");
static_assert(offsetof(UDetourCrowdAIController, ReceiveMoveCompleted) == 888, "Offset mismatch for UDetourCrowdAIController::ReceiveMoveCompleted");

// /Script/AIModule.EQSQueryResultSourceInterface
// Kind: Class; super: Interface
class UEQSQueryResultSourceInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EQSRenderingComponent
// Kind: Class; super: DebugDrawComponent
class UEQSRenderingComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEQSRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for UEQSRenderingComponent::MinDrawDistance");
static_assert(offsetof(UEQSRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for UEQSRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(UEQSRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for UEQSRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(UEQSRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for UEQSRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(UEQSRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for UEQSRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(UEQSRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for UEQSRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(UEQSRenderingComponent, LightmapType) == 647, "Offset mismatch for UEQSRenderingComponent::LightmapType");
static_assert(offsetof(UEQSRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for UEQSRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(UEQSRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for UEQSRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(UEQSRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for UEQSRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(UEQSRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for UEQSRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(UEQSRenderingComponent, bHoldout) == 652, "Offset mismatch for UEQSRenderingComponent::bHoldout");
static_assert(offsetof(UEQSRenderingComponent, CastShadow) == 653, "Offset mismatch for UEQSRenderingComponent::CastShadow");
static_assert(offsetof(UEQSRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for UEQSRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(UEQSRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for UEQSRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(UEQSRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for UEQSRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(UEQSRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for UEQSRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(UEQSRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for UEQSRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(UEQSRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for UEQSRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(UEQSRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for UEQSRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(UEQSRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for UEQSRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(UEQSRenderingComponent, LightingChannels) == 663, "Offset mismatch for UEQSRenderingComponent::LightingChannels");
static_assert(offsetof(UEQSRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for UEQSRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(UEQSRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for UEQSRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(UEQSRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for UEQSRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(UEQSRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for UEQSRenderingComponent::RayTracingGroupId");
static_assert(offsetof(UEQSRenderingComponent, VisibilityId) == 672, "Offset mismatch for UEQSRenderingComponent::VisibilityId");
static_assert(offsetof(UEQSRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for UEQSRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(UEQSRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for UEQSRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(UEQSRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for UEQSRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(UEQSRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for UEQSRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(UEQSRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for UEQSRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(UEQSRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for UEQSRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(UEQSRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for UEQSRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(UEQSRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for UEQSRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(UEQSRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for UEQSRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(UEQSRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for UEQSRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(UEQSRenderingComponent, BoundsScale) == 840, "Offset mismatch for UEQSRenderingComponent::BoundsScale");
static_assert(offsetof(UEQSRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for UEQSRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(UEQSRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for UEQSRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(UEQSRenderingComponent, BodyInstance) == 896, "Offset mismatch for UEQSRenderingComponent::BodyInstance");
static_assert(offsetof(UEQSRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for UEQSRenderingComponent::OnComponentHit");
static_assert(offsetof(UEQSRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for UEQSRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(UEQSRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for UEQSRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(UEQSRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for UEQSRenderingComponent::OnComponentWake");
static_assert(offsetof(UEQSRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for UEQSRenderingComponent::OnComponentSleep");
static_assert(offsetof(UEQSRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for UEQSRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(UEQSRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for UEQSRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(UEQSRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for UEQSRenderingComponent::OnEndCursorOver");
static_assert(offsetof(UEQSRenderingComponent, OnClicked) == 1329, "Offset mismatch for UEQSRenderingComponent::OnClicked");
static_assert(offsetof(UEQSRenderingComponent, OnReleased) == 1330, "Offset mismatch for UEQSRenderingComponent::OnReleased");
static_assert(offsetof(UEQSRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for UEQSRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(UEQSRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for UEQSRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(UEQSRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for UEQSRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(UEQSRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for UEQSRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(UEQSRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for UEQSRenderingComponent::OnTouchBegan");
static_assert(offsetof(UEQSRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for UEQSRenderingComponent::OnTouchEnded");
static_assert(offsetof(UEQSRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for UEQSRenderingComponent::OnTouchEntered");
static_assert(offsetof(UEQSRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for UEQSRenderingComponent::OnTouchExited");
static_assert(offsetof(UEQSRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for UEQSRenderingComponent::LODParentPrimitive");

// /Script/AIModule.EQSTestingPawn
// Kind: Class; super: Character
class UEQSTestingPawn
{
public:
    std::uint8_t Pad_0000[0x638]; // 0x0000
    void* QueryTemplate; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QueryParams; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QueryConfig; // 0x0650 (Size: 0x10, Type: ArrayProperty)
    float TimeLimitPerStep; // 0x0660 (Size: 0x4, Type: FloatProperty)
    std::int32_t StepToDebugDraw; // 0x0664 (Size: 0x4, Type: IntProperty)
    std::uint8_t HighlightMode; // 0x0668 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0669
    std::uint8_t bDrawFailedItems; // 0x066C (Size: 0x1, Type: BoolProperty)
    // 0x066C BoolProperty bDrawItemOrientation (shared storage)
    // 0x066C BoolProperty bDrawLabels (shared storage)
    // 0x066C BoolProperty bReRunQueryOnlyOnFinishedMove (shared storage)
    // 0x066C BoolProperty bRunQueryOnSelectionChanged (shared storage)
    // 0x066C BoolProperty bShouldBeVisibleInGame (shared storage)
    // 0x066C BoolProperty bTickDuringGame (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x066D
    std::uint8_t QueryingMode; // 0x0670 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0671
    std::uint8_t NavAgentProperties[0x40]; // 0x0678 (Size: 0x40, Type: StructProperty)
    TArray<void*> StepResults; // 0x06B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEQSTestingPawn, QueryTemplate) == 1592, "Offset mismatch for UEQSTestingPawn::QueryTemplate");
static_assert(offsetof(UEQSTestingPawn, QueryParams) == 1600, "Offset mismatch for UEQSTestingPawn::QueryParams");
static_assert(offsetof(UEQSTestingPawn, QueryConfig) == 1616, "Offset mismatch for UEQSTestingPawn::QueryConfig");
static_assert(offsetof(UEQSTestingPawn, TimeLimitPerStep) == 1632, "Offset mismatch for UEQSTestingPawn::TimeLimitPerStep");
static_assert(offsetof(UEQSTestingPawn, StepToDebugDraw) == 1636, "Offset mismatch for UEQSTestingPawn::StepToDebugDraw");
static_assert(offsetof(UEQSTestingPawn, HighlightMode) == 1640, "Offset mismatch for UEQSTestingPawn::HighlightMode");
static_assert(offsetof(UEQSTestingPawn, bDrawFailedItems) == 1644, "Offset mismatch for UEQSTestingPawn::bDrawFailedItems");
static_assert(offsetof(UEQSTestingPawn, QueryingMode) == 1648, "Offset mismatch for UEQSTestingPawn::QueryingMode");
static_assert(offsetof(UEQSTestingPawn, NavAgentProperties) == 1656, "Offset mismatch for UEQSTestingPawn::NavAgentProperties");
static_assert(offsetof(UEQSTestingPawn, StepResults) == 1720, "Offset mismatch for UEQSTestingPawn::StepResults");

// /Script/AIModule.EnvQuery
// Kind: Class; super: DataAsset
class UEnvQuery
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName QueryName; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> Options; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bStripFromClientBuilds; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQuery, QueryName) == 40, "Offset mismatch for UEnvQuery::QueryName");
static_assert(offsetof(UEnvQuery, Options) == 48, "Offset mismatch for UEnvQuery::Options");
static_assert(offsetof(UEnvQuery, bStripFromClientBuilds) == 64, "Offset mismatch for UEnvQuery::bStripFromClientBuilds");

// /Script/AIModule.EnvQueryContext
// Kind: Class; super: Object
class UEnvQueryContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryContext_BlueprintBase
// Kind: Class; super: EnvQueryContext
class UEnvQueryContext_BlueprintBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryContext_Item
// Kind: Class; super: EnvQueryContext
class UEnvQueryContext_Item
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryContext_NavigationData
// Kind: Class; super: EnvQueryContext
class UEnvQueryContext_NavigationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NavAgentProperties[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnvQueryContext_NavigationData, NavAgentProperties) == 40, "Offset mismatch for UEnvQueryContext_NavigationData::NavAgentProperties");

// /Script/AIModule.EnvQueryContext_Querier
// Kind: Class; super: EnvQueryContext
class UEnvQueryContext_Querier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryDebugHelpers
// Kind: Class; super: Object
class UEnvQueryDebugHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryGenerator
// Kind: Class; super: EnvQueryNode
class UEnvQueryGenerator
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString OptionName; // 0x0030 (Size: 0x10, Type: StrProperty)
    void* ItemType; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAutoSortTests; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bCanRunAsync (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t EnvQueryResultNormalizationOption; // 0x004C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UEnvQueryGenerator, OptionName) == 48, "Offset mismatch for UEnvQueryGenerator::OptionName");
static_assert(offsetof(UEnvQueryGenerator, ItemType) == 64, "Offset mismatch for UEnvQueryGenerator::ItemType");
static_assert(offsetof(UEnvQueryGenerator, bAutoSortTests) == 72, "Offset mismatch for UEnvQueryGenerator::bAutoSortTests");
static_assert(offsetof(UEnvQueryGenerator, EnvQueryResultNormalizationOption) == 76, "Offset mismatch for UEnvQueryGenerator::EnvQueryResultNormalizationOption");

// /Script/AIModule.EnvQueryGenerator_ActorsOfClass
// Kind: Class; super: EnvQueryGenerator
class UEnvQueryGenerator_ActorsOfClass
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SearchedActorClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GenerateOnlyActorsInRadius[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    std::uint8_t SearchRadius[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    void* SearchCenter; // 0x00C8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchedActorClass) == 80, "Offset mismatch for UEnvQueryGenerator_ActorsOfClass::SearchedActorClass");
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, GenerateOnlyActorsInRadius) == 88, "Offset mismatch for UEnvQueryGenerator_ActorsOfClass::GenerateOnlyActorsInRadius");
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchRadius) == 144, "Offset mismatch for UEnvQueryGenerator_ActorsOfClass::SearchRadius");
static_assert(offsetof(UEnvQueryGenerator_ActorsOfClass, SearchCenter) == 200, "Offset mismatch for UEnvQueryGenerator_ActorsOfClass::SearchCenter");

// /Script/AIModule.EnvQueryGenerator_BlueprintBase
// Kind: Class; super: EnvQueryGenerator
class UEnvQueryGenerator_BlueprintBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t GeneratorsActionDescription[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    void* Context; // 0x0060 (Size: 0x8, Type: ClassProperty)
    void* GeneratedItemType; // 0x0068 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratorsActionDescription) == 80, "Offset mismatch for UEnvQueryGenerator_BlueprintBase::GeneratorsActionDescription");
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, Context) == 96, "Offset mismatch for UEnvQueryGenerator_BlueprintBase::Context");
static_assert(offsetof(UEnvQueryGenerator_BlueprintBase, GeneratedItemType) == 104, "Offset mismatch for UEnvQueryGenerator_BlueprintBase::GeneratedItemType");

// /Script/AIModule.EnvQueryGenerator_Composite
// Kind: Class; super: EnvQueryGenerator
class UEnvQueryGenerator_Composite
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Generators; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowDifferentItemTypes; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bHasMatchingItemType (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    void* ForcedItemType; // 0x0068 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryGenerator_Composite, Generators) == 80, "Offset mismatch for UEnvQueryGenerator_Composite::Generators");
static_assert(offsetof(UEnvQueryGenerator_Composite, bAllowDifferentItemTypes) == 96, "Offset mismatch for UEnvQueryGenerator_Composite::bAllowDifferentItemTypes");
static_assert(offsetof(UEnvQueryGenerator_Composite, ForcedItemType) == 104, "Offset mismatch for UEnvQueryGenerator_Composite::ForcedItemType");

// /Script/AIModule.EnvQueryGenerator_Cone
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_Cone
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t AlignedPointsDistance[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t ConeDegrees[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t AngleStep[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t Range[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    void* CenterActor; // 0x0170 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIncludeContextLocation; // 0x0178 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryGenerator_Cone, AlignedPointsDistance) == 144, "Offset mismatch for UEnvQueryGenerator_Cone::AlignedPointsDistance");
static_assert(offsetof(UEnvQueryGenerator_Cone, ConeDegrees) == 200, "Offset mismatch for UEnvQueryGenerator_Cone::ConeDegrees");
static_assert(offsetof(UEnvQueryGenerator_Cone, AngleStep) == 256, "Offset mismatch for UEnvQueryGenerator_Cone::AngleStep");
static_assert(offsetof(UEnvQueryGenerator_Cone, Range) == 312, "Offset mismatch for UEnvQueryGenerator_Cone::Range");
static_assert(offsetof(UEnvQueryGenerator_Cone, CenterActor) == 368, "Offset mismatch for UEnvQueryGenerator_Cone::CenterActor");
static_assert(offsetof(UEnvQueryGenerator_Cone, bIncludeContextLocation) == 376, "Offset mismatch for UEnvQueryGenerator_Cone::bIncludeContextLocation");

// /Script/AIModule.EnvQueryGenerator_CurrentLocation
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_CurrentLocation
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* QueryContext; // 0x0090 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryGenerator_CurrentLocation, QueryContext) == 144, "Offset mismatch for UEnvQueryGenerator_CurrentLocation::QueryContext");

// /Script/AIModule.EnvQueryGenerator_Donut
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_Donut
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t InnerRadius[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t OuterRadius[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumberOfRings[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t PointOnRingSpacingMethod; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    std::uint8_t SpaceBetweenPoints[0x38]; // 0x0140 (Size: 0x38, Type: StructProperty)
    std::uint8_t PointsPerRing[0x38]; // 0x0178 (Size: 0x38, Type: StructProperty)
    std::uint8_t ArcDirection[0x20]; // 0x01B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ArcAngle[0x38]; // 0x01D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bUseSpiralPattern; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0209
    void* Center; // 0x0210 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDefineArc; // 0x0218 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryGenerator_Donut, InnerRadius) == 144, "Offset mismatch for UEnvQueryGenerator_Donut::InnerRadius");
static_assert(offsetof(UEnvQueryGenerator_Donut, OuterRadius) == 200, "Offset mismatch for UEnvQueryGenerator_Donut::OuterRadius");
static_assert(offsetof(UEnvQueryGenerator_Donut, NumberOfRings) == 256, "Offset mismatch for UEnvQueryGenerator_Donut::NumberOfRings");
static_assert(offsetof(UEnvQueryGenerator_Donut, PointOnRingSpacingMethod) == 312, "Offset mismatch for UEnvQueryGenerator_Donut::PointOnRingSpacingMethod");
static_assert(offsetof(UEnvQueryGenerator_Donut, SpaceBetweenPoints) == 320, "Offset mismatch for UEnvQueryGenerator_Donut::SpaceBetweenPoints");
static_assert(offsetof(UEnvQueryGenerator_Donut, PointsPerRing) == 376, "Offset mismatch for UEnvQueryGenerator_Donut::PointsPerRing");
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcDirection) == 432, "Offset mismatch for UEnvQueryGenerator_Donut::ArcDirection");
static_assert(offsetof(UEnvQueryGenerator_Donut, ArcAngle) == 464, "Offset mismatch for UEnvQueryGenerator_Donut::ArcAngle");
static_assert(offsetof(UEnvQueryGenerator_Donut, bUseSpiralPattern) == 520, "Offset mismatch for UEnvQueryGenerator_Donut::bUseSpiralPattern");
static_assert(offsetof(UEnvQueryGenerator_Donut, Center) == 528, "Offset mismatch for UEnvQueryGenerator_Donut::Center");
static_assert(offsetof(UEnvQueryGenerator_Donut, bDefineArc) == 536, "Offset mismatch for UEnvQueryGenerator_Donut::bDefineArc");

// /Script/AIModule.EnvQueryGenerator_OnCircle
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_OnCircle
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t CircleRadius[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t PointOnCircleSpacingMethod; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t SpaceBetween[0x38]; // 0x00D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t NumberOfPoints[0x38]; // 0x0108 (Size: 0x38, Type: StructProperty)
    std::uint8_t ArcDirection[0x20]; // 0x0140 (Size: 0x20, Type: StructProperty)
    std::uint8_t ArcDirectionOffsetDegrees[0x38]; // 0x0160 (Size: 0x38, Type: StructProperty)
    std::uint8_t ArcAngle[0x38]; // 0x0198 (Size: 0x38, Type: StructProperty)
    void* CircleCenter; // 0x01D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x01D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01D9
    std::uint8_t CircleCenterZOffset[0x38]; // 0x01E0 (Size: 0x38, Type: StructProperty)
    std::uint8_t TraceData[0x38]; // 0x0218 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineArc; // 0x0250 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleRadius) == 144, "Offset mismatch for UEnvQueryGenerator_OnCircle::CircleRadius");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, PointOnCircleSpacingMethod) == 200, "Offset mismatch for UEnvQueryGenerator_OnCircle::PointOnCircleSpacingMethod");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, SpaceBetween) == 208, "Offset mismatch for UEnvQueryGenerator_OnCircle::SpaceBetween");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, NumberOfPoints) == 264, "Offset mismatch for UEnvQueryGenerator_OnCircle::NumberOfPoints");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcDirection) == 320, "Offset mismatch for UEnvQueryGenerator_OnCircle::ArcDirection");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcDirectionOffsetDegrees) == 352, "Offset mismatch for UEnvQueryGenerator_OnCircle::ArcDirectionOffsetDegrees");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, ArcAngle) == 408, "Offset mismatch for UEnvQueryGenerator_OnCircle::ArcAngle");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenter) == 464, "Offset mismatch for UEnvQueryGenerator_OnCircle::CircleCenter");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, bIgnoreAnyContextActorsWhenGeneratingCircle) == 472, "Offset mismatch for UEnvQueryGenerator_OnCircle::bIgnoreAnyContextActorsWhenGeneratingCircle");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, CircleCenterZOffset) == 480, "Offset mismatch for UEnvQueryGenerator_OnCircle::CircleCenterZOffset");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, TraceData) == 536, "Offset mismatch for UEnvQueryGenerator_OnCircle::TraceData");
static_assert(offsetof(UEnvQueryGenerator_OnCircle, bDefineArc) == 592, "Offset mismatch for UEnvQueryGenerator_OnCircle::bDefineArc");

// /Script/AIModule.EnvQueryGenerator_PathingGrid
// Kind: Class; super: EnvQueryGenerator_SimpleGrid
class UEnvQueryGenerator_PathingGrid
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t PathToItem[0x38]; // 0x0108 (Size: 0x38, Type: StructProperty)
    void* NavigationFilter; // 0x0140 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ScanRangeMultiplier[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnvQueryGenerator_PathingGrid, PathToItem) == 264, "Offset mismatch for UEnvQueryGenerator_PathingGrid::PathToItem");
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, NavigationFilter) == 320, "Offset mismatch for UEnvQueryGenerator_PathingGrid::NavigationFilter");
static_assert(offsetof(UEnvQueryGenerator_PathingGrid, ScanRangeMultiplier) == 328, "Offset mismatch for UEnvQueryGenerator_PathingGrid::ScanRangeMultiplier");

// /Script/AIModule.EnvQueryGenerator_PerceivedActors
// Kind: Class; super: EnvQueryGenerator
class UEnvQueryGenerator_PerceivedActors
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* AllowedActorClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SearchRadius[0x38]; // 0x0058 (Size: 0x38, Type: StructProperty)
    void* ListenerContext; // 0x0090 (Size: 0x8, Type: ClassProperty)
    void* SenseToUse; // 0x0098 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIncludeKnownActors; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, AllowedActorClass) == 80, "Offset mismatch for UEnvQueryGenerator_PerceivedActors::AllowedActorClass");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, SearchRadius) == 88, "Offset mismatch for UEnvQueryGenerator_PerceivedActors::SearchRadius");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, ListenerContext) == 144, "Offset mismatch for UEnvQueryGenerator_PerceivedActors::ListenerContext");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, SenseToUse) == 152, "Offset mismatch for UEnvQueryGenerator_PerceivedActors::SenseToUse");
static_assert(offsetof(UEnvQueryGenerator_PerceivedActors, bIncludeKnownActors) == 160, "Offset mismatch for UEnvQueryGenerator_PerceivedActors::bIncludeKnownActors");

// /Script/AIModule.EnvQueryGenerator_ProjectedPoints
// Kind: Class; super: EnvQueryGenerator
class UEnvQueryGenerator_ProjectedPoints
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t ProjectionData[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    void* NavDataOverrideContext; // 0x0088 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryGenerator_ProjectedPoints, ProjectionData) == 80, "Offset mismatch for UEnvQueryGenerator_ProjectedPoints::ProjectionData");
static_assert(offsetof(UEnvQueryGenerator_ProjectedPoints, NavDataOverrideContext) == 136, "Offset mismatch for UEnvQueryGenerator_ProjectedPoints::NavDataOverrideContext");

// /Script/AIModule.EnvQueryGenerator_SimpleGrid
// Kind: Class; super: EnvQueryGenerator_ProjectedPoints
class UEnvQueryGenerator_SimpleGrid
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t GridSize[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpaceBetween[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    void* GenerateAround; // 0x0100 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GridSize) == 144, "Offset mismatch for UEnvQueryGenerator_SimpleGrid::GridSize");
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, SpaceBetween) == 200, "Offset mismatch for UEnvQueryGenerator_SimpleGrid::SpaceBetween");
static_assert(offsetof(UEnvQueryGenerator_SimpleGrid, GenerateAround) == 256, "Offset mismatch for UEnvQueryGenerator_SimpleGrid::GenerateAround");

// /Script/AIModule.EnvQueryInstanceBlueprintWrapper
// Kind: Class; super: Object
class UEnvQueryInstanceBlueprintWrapper
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t QueryID; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x24]; // 0x0034
    void* ItemType; // 0x0058 (Size: 0x8, Type: ClassProperty)
    std::int32_t OptionIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0064
    FMulticastInlineDelegate OnQueryFinishedEvent; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, QueryID) == 48, "Offset mismatch for UEnvQueryInstanceBlueprintWrapper::QueryID");
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, ItemType) == 88, "Offset mismatch for UEnvQueryInstanceBlueprintWrapper::ItemType");
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, OptionIndex) == 96, "Offset mismatch for UEnvQueryInstanceBlueprintWrapper::OptionIndex");
static_assert(offsetof(UEnvQueryInstanceBlueprintWrapper, OnQueryFinishedEvent) == 104, "Offset mismatch for UEnvQueryInstanceBlueprintWrapper::OnQueryFinishedEvent");

// /Script/AIModule.EnvQueryItemType
// Kind: Class; super: Object
class UEnvQueryItemType
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryItemType_Actor
// Kind: Class; super: EnvQueryItemType_ActorBase
class UEnvQueryItemType_Actor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryItemType_ActorBase
// Kind: Class; super: EnvQueryItemType_VectorBase
class UEnvQueryItemType_ActorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryItemType_Direction
// Kind: Class; super: EnvQueryItemType_VectorBase
class UEnvQueryItemType_Direction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryItemType_OrientedPoint
// Kind: Class; super: EnvQueryItemType_Point
class UEnvQueryItemType_OrientedPoint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryItemType_Point
// Kind: Class; super: EnvQueryItemType_VectorBase
class UEnvQueryItemType_Point
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryItemType_VectorBase
// Kind: Class; super: EnvQueryItemType
class UEnvQueryItemType_VectorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.EnvQueryManager
// Kind: Class; super: AISubsystem
class UEnvQueryManager
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> InstanceCache; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LocalContexts; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GCShieldedWrappers; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x14]; // 0x0098
    float MaxAllowedTestingTime; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTestQueriesUsingBreadth; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B1
    std::int32_t QueryCountWarningThreshold; // 0x00B4 (Size: 0x4, Type: IntProperty)
    double QueryCountWarningInterval; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    double ExecutionTimeWarningSeconds; // 0x00C0 (Size: 0x8, Type: DoubleProperty)
    double HandlingResultTimeWarningSeconds; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
    double GenerationTimeWarningSeconds; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UEnvQueryManager, InstanceCache) == 104, "Offset mismatch for UEnvQueryManager::InstanceCache");
static_assert(offsetof(UEnvQueryManager, LocalContexts) == 120, "Offset mismatch for UEnvQueryManager::LocalContexts");
static_assert(offsetof(UEnvQueryManager, GCShieldedWrappers) == 136, "Offset mismatch for UEnvQueryManager::GCShieldedWrappers");
static_assert(offsetof(UEnvQueryManager, MaxAllowedTestingTime) == 172, "Offset mismatch for UEnvQueryManager::MaxAllowedTestingTime");
static_assert(offsetof(UEnvQueryManager, bTestQueriesUsingBreadth) == 176, "Offset mismatch for UEnvQueryManager::bTestQueriesUsingBreadth");
static_assert(offsetof(UEnvQueryManager, QueryCountWarningThreshold) == 180, "Offset mismatch for UEnvQueryManager::QueryCountWarningThreshold");
static_assert(offsetof(UEnvQueryManager, QueryCountWarningInterval) == 184, "Offset mismatch for UEnvQueryManager::QueryCountWarningInterval");
static_assert(offsetof(UEnvQueryManager, ExecutionTimeWarningSeconds) == 192, "Offset mismatch for UEnvQueryManager::ExecutionTimeWarningSeconds");
static_assert(offsetof(UEnvQueryManager, HandlingResultTimeWarningSeconds) == 200, "Offset mismatch for UEnvQueryManager::HandlingResultTimeWarningSeconds");
static_assert(offsetof(UEnvQueryManager, GenerationTimeWarningSeconds) == 208, "Offset mismatch for UEnvQueryManager::GenerationTimeWarningSeconds");

// /Script/AIModule.EnvQueryNode
// Kind: Class; super: Object
class UEnvQueryNode
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t VerNum; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UEnvQueryNode, VerNum) == 40, "Offset mismatch for UEnvQueryNode::VerNum");

// /Script/AIModule.EnvQueryOption
// Kind: Class; super: Object
class UEnvQueryOption
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Generator; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Tests; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEnvQueryOption, Generator) == 40, "Offset mismatch for UEnvQueryOption::Generator");
static_assert(offsetof(UEnvQueryOption, Tests) == 48, "Offset mismatch for UEnvQueryOption::Tests");

// /Script/AIModule.EnvQueryTest
// Kind: Class; super: EnvQueryNode
class UEnvQueryTest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryTest, TestOrder) == 48, "Offset mismatch for UEnvQueryTest::TestOrder");
static_assert(offsetof(UEnvQueryTest, TestPurpose) == 52, "Offset mismatch for UEnvQueryTest::TestPurpose");
static_assert(offsetof(UEnvQueryTest, TestComment) == 56, "Offset mismatch for UEnvQueryTest::TestComment");
static_assert(offsetof(UEnvQueryTest, MultipleContextFilterOp) == 72, "Offset mismatch for UEnvQueryTest::MultipleContextFilterOp");
static_assert(offsetof(UEnvQueryTest, MultipleContextScoreOp) == 73, "Offset mismatch for UEnvQueryTest::MultipleContextScoreOp");
static_assert(offsetof(UEnvQueryTest, FilterType) == 74, "Offset mismatch for UEnvQueryTest::FilterType");
static_assert(offsetof(UEnvQueryTest, BoolValue) == 80, "Offset mismatch for UEnvQueryTest::BoolValue");
static_assert(offsetof(UEnvQueryTest, FloatValueMin) == 136, "Offset mismatch for UEnvQueryTest::FloatValueMin");
static_assert(offsetof(UEnvQueryTest, FloatValueMax) == 192, "Offset mismatch for UEnvQueryTest::FloatValueMax");
static_assert(offsetof(UEnvQueryTest, ScoringEquation) == 249, "Offset mismatch for UEnvQueryTest::ScoringEquation");
static_assert(offsetof(UEnvQueryTest, ClampMinType) == 250, "Offset mismatch for UEnvQueryTest::ClampMinType");
static_assert(offsetof(UEnvQueryTest, ClampMaxType) == 251, "Offset mismatch for UEnvQueryTest::ClampMaxType");
static_assert(offsetof(UEnvQueryTest, NormalizationType) == 252, "Offset mismatch for UEnvQueryTest::NormalizationType");
static_assert(offsetof(UEnvQueryTest, ScoreClampMin) == 256, "Offset mismatch for UEnvQueryTest::ScoreClampMin");
static_assert(offsetof(UEnvQueryTest, ScoreClampMax) == 312, "Offset mismatch for UEnvQueryTest::ScoreClampMax");
static_assert(offsetof(UEnvQueryTest, ScoringFactor) == 368, "Offset mismatch for UEnvQueryTest::ScoringFactor");
static_assert(offsetof(UEnvQueryTest, ReferenceValue) == 424, "Offset mismatch for UEnvQueryTest::ReferenceValue");
static_assert(offsetof(UEnvQueryTest, bDefineReferenceValue) == 480, "Offset mismatch for UEnvQueryTest::bDefineReferenceValue");
static_assert(offsetof(UEnvQueryTest, bWorkOnFloatValues) == 496, "Offset mismatch for UEnvQueryTest::bWorkOnFloatValues");

// /Script/AIModule.EnvQueryTest_Distance
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Distance
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t TestMode; // 0x01F8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    void* DistanceTo; // 0x0200 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryTest_Distance, TestMode) == 504, "Offset mismatch for UEnvQueryTest_Distance::TestMode");
static_assert(offsetof(UEnvQueryTest_Distance, DistanceTo) == 512, "Offset mismatch for UEnvQueryTest_Distance::DistanceTo");

// /Script/AIModule.EnvQueryTest_Dot
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Dot
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t LineA[0x20]; // 0x01F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t LineB[0x20]; // 0x0218 (Size: 0x20, Type: StructProperty)
    std::uint8_t TestMode; // 0x0238 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAbsoluteValue; // 0x0239 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryTest_Dot, LineA) == 504, "Offset mismatch for UEnvQueryTest_Dot::LineA");
static_assert(offsetof(UEnvQueryTest_Dot, LineB) == 536, "Offset mismatch for UEnvQueryTest_Dot::LineB");
static_assert(offsetof(UEnvQueryTest_Dot, TestMode) == 568, "Offset mismatch for UEnvQueryTest_Dot::TestMode");
static_assert(offsetof(UEnvQueryTest_Dot, bAbsoluteValue) == 569, "Offset mismatch for UEnvQueryTest_Dot::bAbsoluteValue");

// /Script/AIModule.EnvQueryTest_GameplayTags
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_GameplayTags
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t TagQueryToMatch[0x48]; // 0x01F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t bSearchComponentsForTags; // 0x0240 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRejectIncompatibleItems; // 0x0241 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdatedToUseQuery; // 0x0242 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TagsToMatch; // 0x0243 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0244
    std::uint8_t GameplayTags[0x1]; // 0x0248 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnvQueryTest_GameplayTags, TagQueryToMatch) == 504, "Offset mismatch for UEnvQueryTest_GameplayTags::TagQueryToMatch");
static_assert(offsetof(UEnvQueryTest_GameplayTags, bSearchComponentsForTags) == 576, "Offset mismatch for UEnvQueryTest_GameplayTags::bSearchComponentsForTags");
static_assert(offsetof(UEnvQueryTest_GameplayTags, bRejectIncompatibleItems) == 577, "Offset mismatch for UEnvQueryTest_GameplayTags::bRejectIncompatibleItems");
static_assert(offsetof(UEnvQueryTest_GameplayTags, bUpdatedToUseQuery) == 578, "Offset mismatch for UEnvQueryTest_GameplayTags::bUpdatedToUseQuery");
static_assert(offsetof(UEnvQueryTest_GameplayTags, TagsToMatch) == 579, "Offset mismatch for UEnvQueryTest_GameplayTags::TagsToMatch");
static_assert(offsetof(UEnvQueryTest_GameplayTags, GameplayTags) == 584, "Offset mismatch for UEnvQueryTest_GameplayTags::GameplayTags");

// /Script/AIModule.EnvQueryTest_Overlap
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Overlap
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t OverlapData[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnvQueryTest_Overlap, OverlapData) == 504, "Offset mismatch for UEnvQueryTest_Overlap::OverlapData");

// /Script/AIModule.EnvQueryTest_Pathfinding
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Pathfinding
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t TestMode; // 0x01F8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    void* Context; // 0x0200 (Size: 0x8, Type: ClassProperty)
    std::uint8_t PathFromContext[0x38]; // 0x0208 (Size: 0x38, Type: StructProperty)
    std::uint8_t SkipUnreachable[0x38]; // 0x0240 (Size: 0x38, Type: StructProperty)
    void* FilterClass; // 0x0278 (Size: 0x8, Type: ClassProperty)
    void* NavDataOverrideContext; // 0x0280 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryTest_Pathfinding, TestMode) == 504, "Offset mismatch for UEnvQueryTest_Pathfinding::TestMode");
static_assert(offsetof(UEnvQueryTest_Pathfinding, Context) == 512, "Offset mismatch for UEnvQueryTest_Pathfinding::Context");
static_assert(offsetof(UEnvQueryTest_Pathfinding, PathFromContext) == 520, "Offset mismatch for UEnvQueryTest_Pathfinding::PathFromContext");
static_assert(offsetof(UEnvQueryTest_Pathfinding, SkipUnreachable) == 576, "Offset mismatch for UEnvQueryTest_Pathfinding::SkipUnreachable");
static_assert(offsetof(UEnvQueryTest_Pathfinding, FilterClass) == 632, "Offset mismatch for UEnvQueryTest_Pathfinding::FilterClass");
static_assert(offsetof(UEnvQueryTest_Pathfinding, NavDataOverrideContext) == 640, "Offset mismatch for UEnvQueryTest_Pathfinding::NavDataOverrideContext");

// /Script/AIModule.EnvQueryTest_PathfindingBatch
// Kind: Class; super: EnvQueryTest_Pathfinding
class UEnvQueryTest_PathfindingBatch
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t ScanRangeMultiplier[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier) == 648, "Offset mismatch for UEnvQueryTest_PathfindingBatch::ScanRangeMultiplier");

// /Script/AIModule.EnvQueryTest_Project
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Project
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t ProjectionData[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnvQueryTest_Project, ProjectionData) == 504, "Offset mismatch for UEnvQueryTest_Project::ProjectionData");

// /Script/AIModule.EnvQueryTest_Random
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Random
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t TestOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t TestPurpose; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    FString TestComment; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t MultipleContextFilterOp; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MultipleContextScoreOp; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t FilterType; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x5]; // 0x004B
    std::uint8_t BoolValue[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMin[0x38]; // 0x0088 (Size: 0x38, Type: StructProperty)
    std::uint8_t FloatValueMax[0x39]; // 0x00C0 (Size: 0x39, Type: StructProperty)
    std::uint8_t ScoringEquation; // 0x00F9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMinType; // 0x00FA (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClampMaxType; // 0x00FB (Size: 0x1, Type: ByteProperty)
    std::uint8_t NormalizationType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00FD
    std::uint8_t ScoreClampMin[0x38]; // 0x0100 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoreClampMax[0x38]; // 0x0138 (Size: 0x38, Type: StructProperty)
    std::uint8_t ScoringFactor[0x38]; // 0x0170 (Size: 0x38, Type: StructProperty)
    std::uint8_t ReferenceValue[0x38]; // 0x01A8 (Size: 0x38, Type: StructProperty)
    std::uint8_t bDefineReferenceValue; // 0x01E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0xF]; // 0x01E1
    std::uint8_t bWorkOnFloatValues; // 0x01F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryTest_Random, TestOrder) == 48, "Offset mismatch for UEnvQueryTest_Random::TestOrder");
static_assert(offsetof(UEnvQueryTest_Random, TestPurpose) == 52, "Offset mismatch for UEnvQueryTest_Random::TestPurpose");
static_assert(offsetof(UEnvQueryTest_Random, TestComment) == 56, "Offset mismatch for UEnvQueryTest_Random::TestComment");
static_assert(offsetof(UEnvQueryTest_Random, MultipleContextFilterOp) == 72, "Offset mismatch for UEnvQueryTest_Random::MultipleContextFilterOp");
static_assert(offsetof(UEnvQueryTest_Random, MultipleContextScoreOp) == 73, "Offset mismatch for UEnvQueryTest_Random::MultipleContextScoreOp");
static_assert(offsetof(UEnvQueryTest_Random, FilterType) == 74, "Offset mismatch for UEnvQueryTest_Random::FilterType");
static_assert(offsetof(UEnvQueryTest_Random, BoolValue) == 80, "Offset mismatch for UEnvQueryTest_Random::BoolValue");
static_assert(offsetof(UEnvQueryTest_Random, FloatValueMin) == 136, "Offset mismatch for UEnvQueryTest_Random::FloatValueMin");
static_assert(offsetof(UEnvQueryTest_Random, FloatValueMax) == 192, "Offset mismatch for UEnvQueryTest_Random::FloatValueMax");
static_assert(offsetof(UEnvQueryTest_Random, ScoringEquation) == 249, "Offset mismatch for UEnvQueryTest_Random::ScoringEquation");
static_assert(offsetof(UEnvQueryTest_Random, ClampMinType) == 250, "Offset mismatch for UEnvQueryTest_Random::ClampMinType");
static_assert(offsetof(UEnvQueryTest_Random, ClampMaxType) == 251, "Offset mismatch for UEnvQueryTest_Random::ClampMaxType");
static_assert(offsetof(UEnvQueryTest_Random, NormalizationType) == 252, "Offset mismatch for UEnvQueryTest_Random::NormalizationType");
static_assert(offsetof(UEnvQueryTest_Random, ScoreClampMin) == 256, "Offset mismatch for UEnvQueryTest_Random::ScoreClampMin");
static_assert(offsetof(UEnvQueryTest_Random, ScoreClampMax) == 312, "Offset mismatch for UEnvQueryTest_Random::ScoreClampMax");
static_assert(offsetof(UEnvQueryTest_Random, ScoringFactor) == 368, "Offset mismatch for UEnvQueryTest_Random::ScoringFactor");
static_assert(offsetof(UEnvQueryTest_Random, ReferenceValue) == 424, "Offset mismatch for UEnvQueryTest_Random::ReferenceValue");
static_assert(offsetof(UEnvQueryTest_Random, bDefineReferenceValue) == 480, "Offset mismatch for UEnvQueryTest_Random::bDefineReferenceValue");
static_assert(offsetof(UEnvQueryTest_Random, bWorkOnFloatValues) == 496, "Offset mismatch for UEnvQueryTest_Random::bWorkOnFloatValues");

// /Script/AIModule.EnvQueryTest_Trace
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Trace
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t TraceData[0x38]; // 0x01F8 (Size: 0x38, Type: StructProperty)
    std::uint8_t TraceFromContext[0x38]; // 0x0230 (Size: 0x38, Type: StructProperty)
    std::uint8_t ItemHeightOffset[0x38]; // 0x0268 (Size: 0x38, Type: StructProperty)
    std::uint8_t ContextHeightOffset[0x38]; // 0x02A0 (Size: 0x38, Type: StructProperty)
    void* Context; // 0x02D8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UEnvQueryTest_Trace, TraceData) == 504, "Offset mismatch for UEnvQueryTest_Trace::TraceData");
static_assert(offsetof(UEnvQueryTest_Trace, TraceFromContext) == 560, "Offset mismatch for UEnvQueryTest_Trace::TraceFromContext");
static_assert(offsetof(UEnvQueryTest_Trace, ItemHeightOffset) == 616, "Offset mismatch for UEnvQueryTest_Trace::ItemHeightOffset");
static_assert(offsetof(UEnvQueryTest_Trace, ContextHeightOffset) == 672, "Offset mismatch for UEnvQueryTest_Trace::ContextHeightOffset");
static_assert(offsetof(UEnvQueryTest_Trace, Context) == 728, "Offset mismatch for UEnvQueryTest_Trace::Context");

// /Script/AIModule.EnvQueryTest_Volume
// Kind: Class; super: EnvQueryTest
class UEnvQueryTest_Volume
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    void* VolumeContext; // 0x01F8 (Size: 0x8, Type: ClassProperty)
    void* VolumeClass; // 0x0200 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDoComplexVolumeTest; // 0x0208 (Size: 0x1, Type: BoolProperty)
    // 0x0208 BoolProperty bSkipTestIfNoVolumes (shared storage)
};

static_assert(offsetof(UEnvQueryTest_Volume, VolumeContext) == 504, "Offset mismatch for UEnvQueryTest_Volume::VolumeContext");
static_assert(offsetof(UEnvQueryTest_Volume, VolumeClass) == 512, "Offset mismatch for UEnvQueryTest_Volume::VolumeClass");
static_assert(offsetof(UEnvQueryTest_Volume, bDoComplexVolumeTest) == 520, "Offset mismatch for UEnvQueryTest_Volume::bDoComplexVolumeTest");

// /Script/AIModule.EnvQueryTypes
// Kind: Class; super: Object
class UEnvQueryTypes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.GeneratedNavLinksProxy
// Kind: Class; super: BaseGeneratedNavLinksProxy
class UGeneratedNavLinksProxy
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FMulticastInlineDelegate OnSmartLinkReached; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UGeneratedNavLinksProxy, OnSmartLinkReached) == 64, "Offset mismatch for UGeneratedNavLinksProxy::OnSmartLinkReached");

// /Script/AIModule.GenericTeamAgentInterface
// Kind: Class; super: Interface
class UGenericTeamAgentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.GridPathAIController
// Kind: Class; super: AIController
class UGridPathAIController
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    std::uint8_t bAllowStrafe; // 0x0340 (Size: 0x1, Type: BoolProperty)
    // 0x0340 BoolProperty bLOSflag (shared storage)
    // 0x0340 BoolProperty bSetControlRotationFromPawnOrientation (shared storage)
    // 0x0340 BoolProperty bSkipExtraLOSChecks (shared storage)
    // 0x0340 BoolProperty bSkipRootComponentUpdate (shared storage)
    // 0x0340 BoolProperty bStartAILogicOnPossess (shared storage)
    // 0x0340 BoolProperty bStopAILogicOnUnposses (shared storage)
    // 0x0340 BoolProperty bWantsPlayerState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0341
    void* PathFollowingComponent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    void* BrainComponent; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    void* PerceptionComponent; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* Blackboard; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameplayTasksComponent; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* DefaultNavigationFilterClass; // 0x0370 (Size: 0x8, Type: ClassProperty)
    FMulticastInlineDelegate ReceiveMoveCompleted; // 0x0378 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UGridPathAIController, bAllowStrafe) == 832, "Offset mismatch for UGridPathAIController::bAllowStrafe");
static_assert(offsetof(UGridPathAIController, PathFollowingComponent) == 840, "Offset mismatch for UGridPathAIController::PathFollowingComponent");
static_assert(offsetof(UGridPathAIController, BrainComponent) == 848, "Offset mismatch for UGridPathAIController::BrainComponent");
static_assert(offsetof(UGridPathAIController, PerceptionComponent) == 856, "Offset mismatch for UGridPathAIController::PerceptionComponent");
static_assert(offsetof(UGridPathAIController, Blackboard) == 864, "Offset mismatch for UGridPathAIController::Blackboard");
static_assert(offsetof(UGridPathAIController, CachedGameplayTasksComponent) == 872, "Offset mismatch for UGridPathAIController::CachedGameplayTasksComponent");
static_assert(offsetof(UGridPathAIController, DefaultNavigationFilterClass) == 880, "Offset mismatch for UGridPathAIController::DefaultNavigationFilterClass");
static_assert(offsetof(UGridPathAIController, ReceiveMoveCompleted) == 888, "Offset mismatch for UGridPathAIController::ReceiveMoveCompleted");

// /Script/AIModule.GridPathFollowingComponent
// Kind: Class; super: PathFollowingComponent
class UGridPathFollowingComponent
{
public:
    std::uint8_t Pad_0000[0x310]; // 0x0000
    void* GridManager; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGridPathFollowingComponent, GridManager) == 784, "Offset mismatch for UGridPathFollowingComponent::GridManager");

// /Script/AIModule.NavFilter_AIControllerDefault
// Kind: Class; super: NavigationQueryFilter
class UNavFilter_AIControllerDefault
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Areas; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IncludeFlags[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t ExcludeFlags[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNavFilter_AIControllerDefault, Areas) == 40, "Offset mismatch for UNavFilter_AIControllerDefault::Areas");
static_assert(offsetof(UNavFilter_AIControllerDefault, IncludeFlags) == 56, "Offset mismatch for UNavFilter_AIControllerDefault::IncludeFlags");
static_assert(offsetof(UNavFilter_AIControllerDefault, ExcludeFlags) == 60, "Offset mismatch for UNavFilter_AIControllerDefault::ExcludeFlags");

// /Script/AIModule.NavLinkProxy
// Kind: Class; super: Actor
class UNavLinkProxy
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TArray<void*> PointLinks; // 0x0280 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SegmentLinks; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    void* SmartLinkComp; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSmartLinkIsRelevant; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02A9
    FMulticastInlineDelegate OnSmartLinkReached; // 0x02B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UNavLinkProxy, PointLinks) == 640, "Offset mismatch for UNavLinkProxy::PointLinks");
static_assert(offsetof(UNavLinkProxy, SegmentLinks) == 656, "Offset mismatch for UNavLinkProxy::SegmentLinks");
static_assert(offsetof(UNavLinkProxy, SmartLinkComp) == 672, "Offset mismatch for UNavLinkProxy::SmartLinkComp");
static_assert(offsetof(UNavLinkProxy, bSmartLinkIsRelevant) == 680, "Offset mismatch for UNavLinkProxy::bSmartLinkIsRelevant");
static_assert(offsetof(UNavLinkProxy, OnSmartLinkReached) == 688, "Offset mismatch for UNavLinkProxy::OnSmartLinkReached");

// /Script/AIModule.NavLocalGridManager
// Kind: Class; super: Object
class UNavLocalGridManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.PathFollowingComponent
// Kind: Class; super: ActorComponent
class UPathFollowingComponent
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* MovementComp; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0100
    void* MyNavData; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPathFollowingComponent, MovementComp) == 248, "Offset mismatch for UPathFollowingComponent::MovementComp");
static_assert(offsetof(UPathFollowingComponent, MyNavData) == 288, "Offset mismatch for UPathFollowingComponent::MyNavData");

// /Script/AIModule.PathFollowingManager
// Kind: Class; super: Object
class UPathFollowingManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.PawnSensingComponent
// Kind: Class; super: ActorComponent
class UPawnSensingComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float HearingThreshold; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float LOSHearingThreshold; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float SightRadius; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float SensingInterval; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float HearingMaxSoundAge; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableSensingUpdates; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    // 0x00D4 BoolProperty bHearNoises (shared storage)
    // 0x00D4 BoolProperty bOnlySensePlayers (shared storage)
    // 0x00D4 BoolProperty bSeePawns (shared storage)
    std::uint8_t Pad_0001[0xB]; // 0x00D5
    FMulticastInlineDelegate OnSeePawn; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHearNoise; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float PeripheralVisionAngle; // 0x0100 (Size: 0x4, Type: FloatProperty)
    float PeripheralVisionCosine; // 0x0104 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPawnSensingComponent, HearingThreshold) == 192, "Offset mismatch for UPawnSensingComponent::HearingThreshold");
static_assert(offsetof(UPawnSensingComponent, LOSHearingThreshold) == 196, "Offset mismatch for UPawnSensingComponent::LOSHearingThreshold");
static_assert(offsetof(UPawnSensingComponent, SightRadius) == 200, "Offset mismatch for UPawnSensingComponent::SightRadius");
static_assert(offsetof(UPawnSensingComponent, SensingInterval) == 204, "Offset mismatch for UPawnSensingComponent::SensingInterval");
static_assert(offsetof(UPawnSensingComponent, HearingMaxSoundAge) == 208, "Offset mismatch for UPawnSensingComponent::HearingMaxSoundAge");
static_assert(offsetof(UPawnSensingComponent, bEnableSensingUpdates) == 212, "Offset mismatch for UPawnSensingComponent::bEnableSensingUpdates");
static_assert(offsetof(UPawnSensingComponent, OnSeePawn) == 224, "Offset mismatch for UPawnSensingComponent::OnSeePawn");
static_assert(offsetof(UPawnSensingComponent, OnHearNoise) == 240, "Offset mismatch for UPawnSensingComponent::OnHearNoise");
static_assert(offsetof(UPawnSensingComponent, PeripheralVisionAngle) == 256, "Offset mismatch for UPawnSensingComponent::PeripheralVisionAngle");
static_assert(offsetof(UPawnSensingComponent, PeripheralVisionCosine) == 260, "Offset mismatch for UPawnSensingComponent::PeripheralVisionCosine");

// /Script/AIModule.ValueOrBBKeyBlueprintUtility
// Kind: Class; super: BlueprintFunctionLibrary
class UValueOrBBKeyBlueprintUtility
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AIModule.VisualLoggerExtension
// Kind: Class; super: Object
class UVisualLoggerExtension
{
public:
    std::uint8_t Opaque[1];
};
