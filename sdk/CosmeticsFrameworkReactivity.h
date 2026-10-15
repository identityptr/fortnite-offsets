/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkReactivity
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkReactivity.BaseNumericThresholdRequirement
// Kind: ScriptStruct; super: none
struct FBaseNumericThresholdRequirement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkReactivity.BoolConditionRequirement
// Kind: ScriptStruct; super: none
struct FBoolConditionRequirement
{
public:
    std::uint8_t Operator; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ComparisonValue; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBoolConditionRequirement, Operator) == 0, "Offset mismatch for FBoolConditionRequirement::Operator");
static_assert(offsetof(FBoolConditionRequirement, ComparisonValue) == 1, "Offset mismatch for FBoolConditionRequirement::ComparisonValue");

// /Script/CosmeticsFrameworkReactivity.CosmeticActionContext
// Kind: ScriptStruct; super: none
struct FCosmeticActionContext
{
public:
    void* TargetActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OwnerModifier; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> TickProvider; // 0x0010 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FCosmeticActionContext, TargetActor) == 0, "Offset mismatch for FCosmeticActionContext::TargetActor");
static_assert(offsetof(FCosmeticActionContext, OwnerModifier) == 8, "Offset mismatch for FCosmeticActionContext::OwnerModifier");
static_assert(offsetof(FCosmeticActionContext, TickProvider) == 16, "Offset mismatch for FCosmeticActionContext::TickProvider");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboard
// Kind: ScriptStruct; super: none
struct FCosmeticBlackboard
{
public:
    TMap<void*, void*> Values; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCosmeticBlackboard, Values) == 0, "Offset mismatch for FCosmeticBlackboard::Values");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue
// Kind: ScriptStruct; super: none
struct FCosmeticBlackboardValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValueMapping
// Kind: ScriptStruct; super: none
struct FCosmeticBlackboardValueMapping
{
public:
    std::uint8_t SourceKey[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName TargetKey; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCosmeticBlackboardValueMapping, SourceKey) == 0, "Offset mismatch for FCosmeticBlackboardValueMapping::SourceKey");
static_assert(offsetof(FCosmeticBlackboardValueMapping, TargetKey) == 4, "Offset mismatch for FCosmeticBlackboardValueMapping::TargetKey");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue_Bool
// Kind: ScriptStruct; super: CosmeticBlackboardValue
struct FCosmeticBlackboardValue_Bool
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCosmeticBlackboardValue_Bool, Value) == 8, "Offset mismatch for FCosmeticBlackboardValue_Bool::Value");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue_Float
// Kind: ScriptStruct; super: CosmeticBlackboardValue
struct FCosmeticBlackboardValue_Float
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCosmeticBlackboardValue_Float, Value) == 8, "Offset mismatch for FCosmeticBlackboardValue_Float::Value");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue_Int
// Kind: ScriptStruct; super: CosmeticBlackboardValue
struct FCosmeticBlackboardValue_Int
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Value; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCosmeticBlackboardValue_Int, Value) == 8, "Offset mismatch for FCosmeticBlackboardValue_Int::Value");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue_Name
// Kind: ScriptStruct; super: CosmeticBlackboardValue
struct FCosmeticBlackboardValue_Name
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName Value; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCosmeticBlackboardValue_Name, Value) == 8, "Offset mismatch for FCosmeticBlackboardValue_Name::Value");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue_Object
// Kind: ScriptStruct; super: CosmeticBlackboardValue
struct FCosmeticBlackboardValue_Object
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Value; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCosmeticBlackboardValue_Object, Value) == 8, "Offset mismatch for FCosmeticBlackboardValue_Object::Value");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue_Tag
// Kind: ScriptStruct; super: CosmeticBlackboardValue
struct FCosmeticBlackboardValue_Tag
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticBlackboardValue_Tag, Value) == 8, "Offset mismatch for FCosmeticBlackboardValue_Tag::Value");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardValue_Vector
// Kind: ScriptStruct; super: CosmeticBlackboardValue
struct FCosmeticBlackboardValue_Vector
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticBlackboardValue_Vector, Value) == 8, "Offset mismatch for FCosmeticBlackboardValue_Vector::Value");

// /Script/CosmeticsFrameworkReactivity.CosmeticEventPayload
// Kind: ScriptStruct; super: none
struct FCosmeticEventPayload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkReactivity.CosmeticEventPayloadSchema
// Kind: ScriptStruct; super: none
struct FCosmeticEventPayloadSchema
{
public:
    TArray<void*> Entries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticEventPayloadSchema, Entries) == 0, "Offset mismatch for FCosmeticEventPayloadSchema::Entries");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierContext
// Kind: ScriptStruct; super: none
struct FCosmeticModifierContext
{
public:
    void* CosmeticTargetActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TriggerTargetActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ModifierProvider; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCosmeticModifierContext, CosmeticTargetActor) == 0, "Offset mismatch for FCosmeticModifierContext::CosmeticTargetActor");
static_assert(offsetof(FCosmeticModifierContext, TriggerTargetActor) == 8, "Offset mismatch for FCosmeticModifierContext::TriggerTargetActor");
static_assert(offsetof(FCosmeticModifierContext, ModifierProvider) == 16, "Offset mismatch for FCosmeticModifierContext::ModifierProvider");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierReactionDefinition
// Kind: ScriptStruct; super: none
struct FCosmeticModifierReactionDefinition
{
public:
    void* StartTriggerDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* StopTriggerDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActionDefinitions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticModifierReactionDefinition, StartTriggerDefinition) == 0, "Offset mismatch for FCosmeticModifierReactionDefinition::StartTriggerDefinition");
static_assert(offsetof(FCosmeticModifierReactionDefinition, StopTriggerDefinition) == 8, "Offset mismatch for FCosmeticModifierReactionDefinition::StopTriggerDefinition");
static_assert(offsetof(FCosmeticModifierReactionDefinition, ActionDefinitions) == 16, "Offset mismatch for FCosmeticModifierReactionDefinition::ActionDefinitions");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierRequirementContext
// Kind: ScriptStruct; super: none
struct FCosmeticModifierRequirementContext
{
public:
    void* TestSubjectActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCosmeticModifierRequirementContext, TestSubjectActor) == 0, "Offset mismatch for FCosmeticModifierRequirementContext::TestSubjectActor");

// /Script/CosmeticsFrameworkReactivity.CosmeticPayloadSchemaEntry
// Kind: ScriptStruct; super: none
struct FCosmeticPayloadSchemaEntry
{
public:
    std::uint8_t Key[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName PropertyName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCosmeticPayloadSchemaEntry, Key) == 0, "Offset mismatch for FCosmeticPayloadSchemaEntry::Key");
static_assert(offsetof(FCosmeticPayloadSchemaEntry, PropertyName) == 4, "Offset mismatch for FCosmeticPayloadSchemaEntry::PropertyName");

// /Script/CosmeticsFrameworkReactivity.CosmeticReactionEventContext
// Kind: ScriptStruct; super: none
struct FCosmeticReactionEventContext
{
public:
    std::uint8_t ReactivityEffectValues[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticReactionEventContext, ReactivityEffectValues) == 0, "Offset mismatch for FCosmeticReactionEventContext::ReactivityEffectValues");

// /Script/CosmeticsFrameworkReactivity.CosmeticTriggerContext
// Kind: ScriptStruct; super: none
struct FCosmeticTriggerContext
{
public:
    void* TargetActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ModifierOwner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ModifierProvider; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCosmeticTriggerContext, TargetActor) == 0, "Offset mismatch for FCosmeticTriggerContext::TargetActor");
static_assert(offsetof(FCosmeticTriggerContext, ModifierOwner) == 8, "Offset mismatch for FCosmeticTriggerContext::ModifierOwner");
static_assert(offsetof(FCosmeticTriggerContext, ModifierProvider) == 16, "Offset mismatch for FCosmeticTriggerContext::ModifierProvider");

// /Script/CosmeticsFrameworkReactivity.CosmeticTriggerFireRequest
// Kind: ScriptStruct; super: none
struct FCosmeticTriggerFireRequest
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t CosmeticEventPayloadBlackboard[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t DelayTimerHandle[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticTriggerFireRequest, ID) == 0, "Offset mismatch for FCosmeticTriggerFireRequest::ID");
static_assert(offsetof(FCosmeticTriggerFireRequest, CosmeticEventPayloadBlackboard) == 16, "Offset mismatch for FCosmeticTriggerFireRequest::CosmeticEventPayloadBlackboard");
static_assert(offsetof(FCosmeticTriggerFireRequest, DelayTimerHandle) == 32, "Offset mismatch for FCosmeticTriggerFireRequest::DelayTimerHandle");

// /Script/CosmeticsFrameworkReactivity.NumericRangeThresholdRequirement
// Kind: ScriptStruct; super: BaseNumericThresholdRequirement
struct FNumericRangeThresholdRequirement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Operator; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float MinValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNumericRangeThresholdRequirement, Operator) == 8, "Offset mismatch for FNumericRangeThresholdRequirement::Operator");
static_assert(offsetof(FNumericRangeThresholdRequirement, MinValue) == 12, "Offset mismatch for FNumericRangeThresholdRequirement::MinValue");
static_assert(offsetof(FNumericRangeThresholdRequirement, MaxValue) == 16, "Offset mismatch for FNumericRangeThresholdRequirement::MaxValue");

// /Script/CosmeticsFrameworkReactivity.NumericThresholdRequirement
// Kind: ScriptStruct; super: BaseNumericThresholdRequirement
struct FNumericThresholdRequirement
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Operator; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float ComparisonValue; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNumericThresholdRequirement, Operator) == 8, "Offset mismatch for FNumericThresholdRequirement::Operator");
static_assert(offsetof(FNumericThresholdRequirement, ComparisonValue) == 12, "Offset mismatch for FNumericThresholdRequirement::ComparisonValue");

// /Script/CosmeticsFrameworkReactivity.CosmeticAction
// Kind: Class; super: Object
class UCosmeticAction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Definition; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Context[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t LastReactionEventContext[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsActive; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCosmeticAction, Definition) == 48, "Offset mismatch for UCosmeticAction::Definition");
static_assert(offsetof(UCosmeticAction, Context) == 56, "Offset mismatch for UCosmeticAction::Context");
static_assert(offsetof(UCosmeticAction, LastReactionEventContext) == 88, "Offset mismatch for UCosmeticAction::LastReactionEventContext");
static_assert(offsetof(UCosmeticAction, bIsActive) == 104, "Offset mismatch for UCosmeticAction::bIsActive");

// /Script/CosmeticsFrameworkReactivity.CosmeticActionDefinition
// Kind: Class; super: Object
class UCosmeticActionDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float duration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ReactivationPolicy; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCosmeticActionDefinition, duration) == 40, "Offset mismatch for UCosmeticActionDefinition::duration");
static_assert(offsetof(UCosmeticActionDefinition, ReactivationPolicy) == 44, "Offset mismatch for UCosmeticActionDefinition::ReactivationPolicy");

// /Script/CosmeticsFrameworkReactivity.CosmeticBlackboardTransformer
// Kind: Class; super: Object
class UCosmeticBlackboardTransformer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ValueMappings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticBlackboardTransformer, ValueMappings) == 40, "Offset mismatch for UCosmeticBlackboardTransformer::ValueMappings");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifier
// Kind: Class; super: Object
class UCosmeticModifier
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Context[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    void* Definition; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ModifierReactions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* ReactivityEffectsHandler; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCosmeticModifier, Context) == 40, "Offset mismatch for UCosmeticModifier::Context");
static_assert(offsetof(UCosmeticModifier, Definition) == 64, "Offset mismatch for UCosmeticModifier::Definition");
static_assert(offsetof(UCosmeticModifier, ModifierReactions) == 72, "Offset mismatch for UCosmeticModifier::ModifierReactions");
static_assert(offsetof(UCosmeticModifier, ReactivityEffectsHandler) == 88, "Offset mismatch for UCosmeticModifier::ReactivityEffectsHandler");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierDefinition
// Kind: Class; super: DataAsset
class UCosmeticModifierDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ModifierReactions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RequirementLibrary; // 0x0038 (Size: 0x10, Type: MapProperty)
    void* CosmeticReactivityEffectsHandlerClass; // 0x0048 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UCosmeticModifierDefinition, ModifierReactions) == 40, "Offset mismatch for UCosmeticModifierDefinition::ModifierReactions");
static_assert(offsetof(UCosmeticModifierDefinition, RequirementLibrary) == 56, "Offset mismatch for UCosmeticModifierDefinition::RequirementLibrary");
static_assert(offsetof(UCosmeticModifierDefinition, CosmeticReactivityEffectsHandlerClass) == 72, "Offset mismatch for UCosmeticModifierDefinition::CosmeticReactivityEffectsHandlerClass");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierReaction
// Kind: Class; super: Object
class UCosmeticModifierReaction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* OwnerCosmeticModifier; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* StartTrigger; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* StopTrigger; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CosmeticActions; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticModifierReaction, OwnerCosmeticModifier) == 40, "Offset mismatch for UCosmeticModifierReaction::OwnerCosmeticModifier");
static_assert(offsetof(UCosmeticModifierReaction, StartTrigger) == 48, "Offset mismatch for UCosmeticModifierReaction::StartTrigger");
static_assert(offsetof(UCosmeticModifierReaction, StopTrigger) == 56, "Offset mismatch for UCosmeticModifierReaction::StopTrigger");
static_assert(offsetof(UCosmeticModifierReaction, CosmeticActions) == 64, "Offset mismatch for UCosmeticModifierReaction::CosmeticActions");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierRequirement
// Kind: Class; super: Object
class UCosmeticModifierRequirement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCosmeticModifierRequirement, bInverseCondition) == 40, "Offset mismatch for UCosmeticModifierRequirement::bInverseCondition");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierRequirement_AllOf
// Kind: Class; super: CosmeticModifierRequirement
class UCosmeticModifierRequirement_AllOf
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Requirements; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticModifierRequirement_AllOf, Requirements) == 48, "Offset mismatch for UCosmeticModifierRequirement_AllOf::Requirements");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierRequirement_AnyOf
// Kind: Class; super: CosmeticModifierRequirement
class UCosmeticModifierRequirement_AnyOf
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Requirements; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticModifierRequirement_AnyOf, Requirements) == 48, "Offset mismatch for UCosmeticModifierRequirement_AnyOf::Requirements");

// /Script/CosmeticsFrameworkReactivity.CosmeticModifierRequirement_CustomQueryOf
// Kind: Class; super: CosmeticModifierRequirement
class UCosmeticModifierRequirement_CustomQueryOf
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> TagQueryIdentifierToRequirement; // 0x0030 (Size: 0x10, Type: MapProperty)
    std::uint8_t TagQuery[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticModifierRequirement_CustomQueryOf, TagQueryIdentifierToRequirement) == 48, "Offset mismatch for UCosmeticModifierRequirement_CustomQueryOf::TagQueryIdentifierToRequirement");
static_assert(offsetof(UCosmeticModifierRequirement_CustomQueryOf, TagQuery) == 64, "Offset mismatch for UCosmeticModifierRequirement_CustomQueryOf::TagQuery");

// /Script/CosmeticsFrameworkReactivity.CosmeticReactivityComponent
// Kind: Class; super: ActorComponent
class UCosmeticReactivityComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> CosmeticModifiers; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveTickableEntries; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingTickableEntriesToRemove; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingTickableEntriesToAdd; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticReactivityComponent, CosmeticModifiers) == 200, "Offset mismatch for UCosmeticReactivityComponent::CosmeticModifiers");
static_assert(offsetof(UCosmeticReactivityComponent, ActiveTickableEntries) == 216, "Offset mismatch for UCosmeticReactivityComponent::ActiveTickableEntries");
static_assert(offsetof(UCosmeticReactivityComponent, PendingTickableEntriesToRemove) == 232, "Offset mismatch for UCosmeticReactivityComponent::PendingTickableEntriesToRemove");
static_assert(offsetof(UCosmeticReactivityComponent, PendingTickableEntriesToAdd) == 248, "Offset mismatch for UCosmeticReactivityComponent::PendingTickableEntriesToAdd");

// /Script/CosmeticsFrameworkReactivity.CosmeticReactivityEffectsHandler
// Kind: Class; super: Actor
class UCosmeticReactivityEffectsHandler
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t CosmeticModifierContext[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticReactivityEffectsHandler, CosmeticModifierContext) == 624, "Offset mismatch for UCosmeticReactivityEffectsHandler::CosmeticModifierContext");

// /Script/CosmeticsFrameworkReactivity.CosmeticTickProvider
// Kind: Class; super: Interface
class UCosmeticTickProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkReactivity.CosmeticTickableEntry
// Kind: Class; super: Interface
class UCosmeticTickableEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkReactivity.CosmeticTrigger
// Kind: Class; super: Object
class UCosmeticTrigger
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Context[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    void* Definition; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsActive; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    TArray<void*> PendingFireRequests; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCosmeticTrigger, Context) == 64, "Offset mismatch for UCosmeticTrigger::Context");
static_assert(offsetof(UCosmeticTrigger, Definition) == 88, "Offset mismatch for UCosmeticTrigger::Definition");
static_assert(offsetof(UCosmeticTrigger, bIsActive) == 96, "Offset mismatch for UCosmeticTrigger::bIsActive");
static_assert(offsetof(UCosmeticTrigger, PendingFireRequests) == 104, "Offset mismatch for UCosmeticTrigger::PendingFireRequests");

// /Script/CosmeticsFrameworkReactivity.CosmeticTriggerDefinition
// Kind: Class; super: Object
class UCosmeticTriggerDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float TriggerFireDelay; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t ExtraFireRequirements[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    void* CosmeticEventPayloadTransformer; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCosmeticTriggerDefinition, TriggerFireDelay) == 40, "Offset mismatch for UCosmeticTriggerDefinition::TriggerFireDelay");
static_assert(offsetof(UCosmeticTriggerDefinition, ExtraFireRequirements) == 48, "Offset mismatch for UCosmeticTriggerDefinition::ExtraFireRequirements");
static_assert(offsetof(UCosmeticTriggerDefinition, CosmeticEventPayloadTransformer) == 80, "Offset mismatch for UCosmeticTriggerDefinition::CosmeticEventPayloadTransformer");
