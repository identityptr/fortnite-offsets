/**
 * decamp dumper generated SDK
 * Package: /Script/ProgressionCore
 */
#pragma once
#include "Basic.h"

// /Script/ProgressionCore.EntitlementQuestRewardView
// Kind: ScriptStruct; super: QuestRewardView
struct FEntitlementQuestRewardView
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString EntitlementId; // 0x0068 (Size: 0x10, Type: StrProperty)
    std::int64_t Quantity; // 0x0078 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FEntitlementQuestRewardView, EntitlementId) == 104, "Offset mismatch for FEntitlementQuestRewardView::EntitlementId");
static_assert(offsetof(FEntitlementQuestRewardView, Quantity) == 120, "Offset mismatch for FEntitlementQuestRewardView::Quantity");

// /Script/ProgressionCore.ProgressObjectiveView
// Kind: ScriptStruct; super: QuestObjectiveView
struct FProgressObjectiveView
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    double AchievedCount; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double RequiredCount; // 0x0078 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FProgressObjectiveView, AchievedCount) == 112, "Offset mismatch for FProgressObjectiveView::AchievedCount");
static_assert(offsetof(FProgressObjectiveView, RequiredCount) == 120, "Offset mismatch for FProgressObjectiveView::RequiredCount");

// /Script/ProgressionCore.QuestDebugProgressNode
// Kind: ScriptStruct; super: QuestDebugObjectiveNode
struct FQuestDebugProgressNode
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::int32_t Current; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t Required; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FQuestDebugProgressNode, Current) == 72, "Offset mismatch for FQuestDebugProgressNode::Current");
static_assert(offsetof(FQuestDebugProgressNode, Required) == 76, "Offset mismatch for FQuestDebugProgressNode::Required");

// /Script/ProgressionCore.RewardClaimExtensionData
// Kind: ScriptStruct; super: QuestExtensionPersistencePayload
struct FRewardClaimExtensionData
{
public:
    std::uint8_t bPendingClaim; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClaimed; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRewardClaimExtensionData, bPendingClaim) == 0, "Offset mismatch for FRewardClaimExtensionData::bPendingClaim");
static_assert(offsetof(FRewardClaimExtensionData, bClaimed) == 1, "Offset mismatch for FRewardClaimExtensionData::bClaimed");

// /Script/ProgressionCore.VerbGameplayConditional
// Kind: ScriptStruct; super: GameplayConditional
struct FVerbGameplayConditional
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> RegisteredHandles; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerbGameplayConditional, RegisteredHandles) == 56, "Offset mismatch for FVerbGameplayConditional::RegisteredHandles");

// /Script/ProgressionCore.VerbGameplayConditionalDefinition
// Kind: ScriptStruct; super: GameplayConditionalDefinition
struct FVerbGameplayConditionalDefinition
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> VerbFilters; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VerbMessageTypes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerbGameplayConditionalDefinition, VerbFilters) == 24, "Offset mismatch for FVerbGameplayConditionalDefinition::VerbFilters");
static_assert(offsetof(FVerbGameplayConditionalDefinition, VerbMessageTypes) == 40, "Offset mismatch for FVerbGameplayConditionalDefinition::VerbMessageTypes");

// /Script/ProgressionCore.CompositeObjective
// Kind: Class; super: QuestObjectiveInstance
class UCompositeObjective
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> Objectives; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCompositeObjective, Objectives) == 184, "Offset mismatch for UCompositeObjective::Objectives");

// /Script/ProgressionCore.CompositeObjectiveDefinition
// Kind: Class; super: QuestObjectiveDefinitionBase
class UCompositeObjectiveDefinition
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> ObjectiveDefinitions; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::int32_t RequiredCount; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCompositeObjectiveDefinition, ObjectiveDefinitions) == 144, "Offset mismatch for UCompositeObjectiveDefinition::ObjectiveDefinitions");
static_assert(offsetof(UCompositeObjectiveDefinition, RequiredCount) == 160, "Offset mismatch for UCompositeObjectiveDefinition::RequiredCount");

// /Script/ProgressionCore.ConditionalObjective
// Kind: Class; super: ProgressObjective
class UConditionalObjective
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> Conditionals; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RegisteredHandles; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConditionalObjective, Conditionals) == 224, "Offset mismatch for UConditionalObjective::Conditionals");
static_assert(offsetof(UConditionalObjective, RegisteredHandles) == 240, "Offset mismatch for UConditionalObjective::RegisteredHandles");

// /Script/ProgressionCore.ConditionalObjectiveDefinition
// Kind: Class; super: ProgressObjectiveDefinition
class UConditionalObjectiveDefinition
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    TArray<void*> ConditionalDefinitions; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConditionalObjectiveDefinition, ConditionalDefinitions) == 152, "Offset mismatch for UConditionalObjectiveDefinition::ConditionalDefinitions");

// /Script/ProgressionCore.ProgressObjective
// Kind: Class; super: QuestObjectiveInstance
class UProgressObjective
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TScriptInterface<void> OwningDefinition; // 0x0088 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> OwningQuest; // 0x0098 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UProgressObjective, OwningDefinition) == 136, "Offset mismatch for UProgressObjective::OwningDefinition");
static_assert(offsetof(UProgressObjective, OwningQuest) == 152, "Offset mismatch for UProgressObjective::OwningQuest");

// /Script/ProgressionCore.ProgressObjectiveDefinition
// Kind: Class; super: QuestObjectiveDefinitionBase
class UProgressObjectiveDefinition
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    double RequiredCount; // 0x0090 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UProgressObjectiveDefinition, RequiredCount) == 144, "Offset mismatch for UProgressObjectiveDefinition::RequiredCount");

// /Script/ProgressionCore.RewardClaimQuestDefinitionExtension
// Kind: Class; super: QuestDefinitionExtensionBase
class URewardClaimQuestDefinitionExtension
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString ExtensionTemplateId; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(URewardClaimQuestDefinitionExtension, ExtensionTemplateId) == 48, "Offset mismatch for URewardClaimQuestDefinitionExtension::ExtensionTemplateId");

// /Script/ProgressionCore.RewardClaimQuestExtension
// Kind: Class; super: QuestExtensionBase
class URewardClaimQuestExtension
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> OwningDefinition; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(URewardClaimQuestExtension, OwningDefinition) == 48, "Offset mismatch for URewardClaimQuestExtension::OwningDefinition");

// /Script/ProgressionCore.SequentialObjective
// Kind: Class; super: QuestObjectiveInstance
class USequentialObjective
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> Objectives; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USequentialObjective, Objectives) == 184, "Offset mismatch for USequentialObjective::Objectives");

// /Script/ProgressionCore.SequentialObjectiveDefinition
// Kind: Class; super: QuestObjectiveDefinitionBase
class USequentialObjectiveDefinition
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> ObjectiveDefinitions; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USequentialObjectiveDefinition, ObjectiveDefinitions) == 144, "Offset mismatch for USequentialObjectiveDefinition::ObjectiveDefinitions");

// /Script/ProgressionCore.TimedObjective
// Kind: Class; super: QuestObjectiveInstance
class UTimedObjective
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TScriptInterface<void> Objective; // 0x00D0 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UTimedObjective, Objective) == 208, "Offset mismatch for UTimedObjective::Objective");

// /Script/ProgressionCore.TimedObjectiveDefinition
// Kind: Class; super: QuestObjectiveDefinitionBase
class UTimedObjectiveDefinition
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float TimeLimit; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0094
    void* ObjectiveDefinition; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTimedObjectiveDefinition, TimeLimit) == 144, "Offset mismatch for UTimedObjectiveDefinition::TimeLimit");
static_assert(offsetof(UTimedObjectiveDefinition, ObjectiveDefinition) == 152, "Offset mismatch for UTimedObjectiveDefinition::ObjectiveDefinition");
