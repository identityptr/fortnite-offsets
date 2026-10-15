/**
 * decamp dumper generated SDK
 * Package: /Script/JunoResearch
 */
#pragma once
#include "Basic.h"

// /Script/JunoResearch.JunoCanResearchItemsResult
// Kind: ScriptStruct; super: JunoCanResearchReasonChunk
struct FJunoCanResearchItemsResult
{
public:
    std::uint8_t bIsRequirementMet; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCanResearchItemsResult, bIsRequirementMet) == 0, "Offset mismatch for FJunoCanResearchItemsResult::bIsRequirementMet");

// /Script/JunoResearch.JunoCanResearchPrerequisiteResult
// Kind: ScriptStruct; super: JunoCanResearchReasonChunk
struct FJunoCanResearchPrerequisiteResult
{
public:
    std::uint8_t Pad_0000[0x4]; // 0x0000
    std::uint8_t RequiredPrerequisiteResearch[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoCanResearchPrerequisiteResult, RequiredPrerequisiteResearch) == 4, "Offset mismatch for FJunoCanResearchPrerequisiteResult::RequiredPrerequisiteResearch");

// /Script/JunoResearch.JunoCanResearchReasonChunk
// Kind: ScriptStruct; super: none
struct FJunoCanResearchReasonChunk
{
public:
    std::uint8_t bIsRequirementMet; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCanResearchReasonChunk, bIsRequirementMet) == 0, "Offset mismatch for FJunoCanResearchReasonChunk::bIsRequirementMet");

// /Script/JunoResearch.JunoCanResearchResult
// Kind: ScriptStruct; super: none
struct FJunoCanResearchResult
{
public:
    std::uint8_t Request[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t bCanResearch; // 0x0020 (Size: 0x1, Type: BoolProperty)
    // 0x0020 BoolProperty bFoundDefinition (shared storage)
    // 0x0020 BoolProperty bIsAlreadyResearched (shared storage)
    // 0x0020 BoolProperty bIsContextCorrect (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    TArray<void*> ReasonChunks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCanResearchResult, Request) == 0, "Offset mismatch for FJunoCanResearchResult::Request");
static_assert(offsetof(FJunoCanResearchResult, bCanResearch) == 32, "Offset mismatch for FJunoCanResearchResult::bCanResearch");
static_assert(offsetof(FJunoCanResearchResult, ReasonChunks) == 40, "Offset mismatch for FJunoCanResearchResult::ReasonChunks");

// /Script/JunoResearch.JunoCanUpgradeResearchLevelReason
// Kind: ScriptStruct; super: JunoCanUpgradeResearchReasonChunk
struct FJunoCanUpgradeResearchLevelReason
{
public:
    std::uint8_t bIsRequirementMet; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCanUpgradeResearchLevelReason, bIsRequirementMet) == 0, "Offset mismatch for FJunoCanUpgradeResearchLevelReason::bIsRequirementMet");

// /Script/JunoResearch.JunoCanUpgradeResearchReasonChunk
// Kind: ScriptStruct; super: none
struct FJunoCanUpgradeResearchReasonChunk
{
public:
    std::uint8_t bIsRequirementMet; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCanUpgradeResearchReasonChunk, bIsRequirementMet) == 0, "Offset mismatch for FJunoCanUpgradeResearchReasonChunk::bIsRequirementMet");

// /Script/JunoResearch.JunoCanUpgradeResearchResult
// Kind: ScriptStruct; super: none
struct FJunoCanUpgradeResearchResult
{
public:
    std::uint8_t Request[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t bCanUpgrade; // 0x0020 (Size: 0x1, Type: BoolProperty)
    // 0x0020 BoolProperty bFoundDefinition (shared storage)
    // 0x0020 BoolProperty bHasBaseResearch (shared storage)
    // 0x0020 BoolProperty bIsAtMaxLevel (shared storage)
    // 0x0020 BoolProperty bIsContextCorrect (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    TArray<void*> ReasonChunks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoCanUpgradeResearchResult, Request) == 0, "Offset mismatch for FJunoCanUpgradeResearchResult::Request");
static_assert(offsetof(FJunoCanUpgradeResearchResult, bCanUpgrade) == 32, "Offset mismatch for FJunoCanUpgradeResearchResult::bCanUpgrade");
static_assert(offsetof(FJunoCanUpgradeResearchResult, ReasonChunks) == 40, "Offset mismatch for FJunoCanUpgradeResearchResult::ReasonChunks");

// /Script/JunoResearch.JunoChangedResearch
// Kind: ScriptStruct; super: none
struct FJunoChangedResearch
{
public:
    std::uint8_t ResearchTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoChangedResearch, ResearchTag) == 0, "Offset mismatch for FJunoChangedResearch::ResearchTag");

// /Script/JunoResearch.JunoPlayerResearchChangedEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerResearchChangedEvent
{
public:
    TWeakObjectPtr<void> player; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> AllResearch; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPlayerResearchChangedEvent, player) == 0, "Offset mismatch for FJunoPlayerResearchChangedEvent::player");
static_assert(offsetof(FJunoPlayerResearchChangedEvent, AllResearch) == 8, "Offset mismatch for FJunoPlayerResearchChangedEvent::AllResearch");

// /Script/JunoResearch.JunoPlayerResearchSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayerResearchSaveData
{
public:
    TArray<void*> ResearchArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPlayerResearchSaveData, ResearchArray) == 0, "Offset mismatch for FJunoPlayerResearchSaveData::ResearchArray");

// /Script/JunoResearch.JunoPlayerResearchedEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerResearchedEvent
{
public:
    TWeakObjectPtr<void> player; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ResearchedResearch; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPlayerResearchedEvent, player) == 0, "Offset mismatch for FJunoPlayerResearchedEvent::player");
static_assert(offsetof(FJunoPlayerResearchedEvent, ResearchedResearch) == 8, "Offset mismatch for FJunoPlayerResearchedEvent::ResearchedResearch");

// /Script/JunoResearch.JunoPlayerUpgradedResearchEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerUpgradedResearchEvent
{
public:
    TWeakObjectPtr<void> player; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> ResearchUpgraded; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPlayerUpgradedResearchEvent, player) == 0, "Offset mismatch for FJunoPlayerUpgradedResearchEvent::player");
static_assert(offsetof(FJunoPlayerUpgradedResearchEvent, ResearchUpgraded) == 8, "Offset mismatch for FJunoPlayerUpgradedResearchEvent::ResearchUpgraded");

// /Script/JunoResearch.JunoReplicatedAllPlayerResearch
// Kind: ScriptStruct; super: none
struct FJunoReplicatedAllPlayerResearch
{
public:
    TArray<void*> ResearchArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoReplicatedAllPlayerResearch, ResearchArray) == 0, "Offset mismatch for FJunoReplicatedAllPlayerResearch::ResearchArray");

// /Script/JunoResearch.JunoReplicatedPlayerResearch
// Kind: ScriptStruct; super: none
struct FJunoReplicatedPlayerResearch
{
public:
    std::uint8_t ReplicatedResearch[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoReplicatedPlayerResearch, ReplicatedResearch) == 0, "Offset mismatch for FJunoReplicatedPlayerResearch::ReplicatedResearch");

// /Script/JunoResearch.JunoReplicatedResearch
// Kind: ScriptStruct; super: none
struct FJunoReplicatedResearch
{
public:
    std::uint8_t ResearchDefinitionTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> ReplicatedResearchChunks; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoReplicatedResearch, ResearchDefinitionTag) == 0, "Offset mismatch for FJunoReplicatedResearch::ResearchDefinitionTag");
static_assert(offsetof(FJunoReplicatedResearch, ReplicatedResearchChunks) == 8, "Offset mismatch for FJunoReplicatedResearch::ReplicatedResearchChunks");

// /Script/JunoResearch.JunoReplicatedResearchChunk
// Kind: ScriptStruct; super: none
struct FJunoReplicatedResearchChunk
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoReplicatedResearchLevel
// Kind: ScriptStruct; super: JunoReplicatedResearchChunk
struct FJunoReplicatedResearchLevel
{
public:
    std::int32_t CurrentLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoReplicatedResearchLevel, CurrentLevel) == 0, "Offset mismatch for FJunoReplicatedResearchLevel::CurrentLevel");

// /Script/JunoResearch.JunoReplicatedResearchSpentItems
// Kind: ScriptStruct; super: JunoReplicatedResearchChunk
struct FJunoReplicatedResearchSpentItems
{
public:
    std::int32_t Level; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> ItemCounts; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoReplicatedResearchSpentItems, Level) == 0, "Offset mismatch for FJunoReplicatedResearchSpentItems::Level");
static_assert(offsetof(FJunoReplicatedResearchSpentItems, ItemCounts) == 8, "Offset mismatch for FJunoReplicatedResearchSpentItems::ItemCounts");

// /Script/JunoResearch.JunoResearchAbilitySetReward
// Kind: ScriptStruct; super: JunoResearchReward
struct FJunoResearchAbilitySetReward
{
public:
    TArray<void*> RewardAbilitySets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoResearchAbilitySetReward, RewardAbilitySets) == 0, "Offset mismatch for FJunoResearchAbilitySetReward::RewardAbilitySets");

// /Script/JunoResearch.JunoResearchContext
// Kind: ScriptStruct; super: none
struct FJunoResearchContext
{
public:
    TWeakObjectPtr<void> player; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FJunoResearchContext, player) == 0, "Offset mismatch for FJunoResearchContext::player");

// /Script/JunoResearch.JunoResearchDefinitionChunk
// Kind: ScriptStruct; super: none
struct FJunoResearchDefinitionChunk
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchDefinitionRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoResearchDefinitionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ResearchDefinitionTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    TArray<void*> Requirements; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Rewards; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Scopes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Misc; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoResearchDefinitionRow, ResearchDefinitionTag) == 8, "Offset mismatch for FJunoResearchDefinitionRow::ResearchDefinitionTag");
static_assert(offsetof(FJunoResearchDefinitionRow, bEnabled) == 12, "Offset mismatch for FJunoResearchDefinitionRow::bEnabled");
static_assert(offsetof(FJunoResearchDefinitionRow, Requirements) == 16, "Offset mismatch for FJunoResearchDefinitionRow::Requirements");
static_assert(offsetof(FJunoResearchDefinitionRow, Rewards) == 32, "Offset mismatch for FJunoResearchDefinitionRow::Rewards");
static_assert(offsetof(FJunoResearchDefinitionRow, Scopes) == 48, "Offset mismatch for FJunoResearchDefinitionRow::Scopes");
static_assert(offsetof(FJunoResearchDefinitionRow, Misc) == 64, "Offset mismatch for FJunoResearchDefinitionRow::Misc");

// /Script/JunoResearch.JunoResearchGroupingDefinition
// Kind: ScriptStruct; super: JunoResearchMiscDefinition
struct FJunoResearchGroupingDefinition
{
public:
    std::uint8_t Group[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float GroupPriority; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Priority; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoResearchGroupingDefinition, Group) == 0, "Offset mismatch for FJunoResearchGroupingDefinition::Group");
static_assert(offsetof(FJunoResearchGroupingDefinition, GroupPriority) == 4, "Offset mismatch for FJunoResearchGroupingDefinition::GroupPriority");
static_assert(offsetof(FJunoResearchGroupingDefinition, Priority) == 8, "Offset mismatch for FJunoResearchGroupingDefinition::Priority");

// /Script/JunoResearch.JunoResearchIngredient
// Kind: ScriptStruct; super: none
struct FJunoResearchIngredient
{
public:
    std::uint8_t IngredientTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t IngredientCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoResearchIngredient, IngredientTag) == 0, "Offset mismatch for FJunoResearchIngredient::IngredientTag");
static_assert(offsetof(FJunoResearchIngredient, IngredientCount) == 4, "Offset mismatch for FJunoResearchIngredient::IngredientCount");

// /Script/JunoResearch.JunoResearchItemsRequirement
// Kind: ScriptStruct; super: JunoResearchRequirement
struct FJunoResearchItemsRequirement
{
public:
    TArray<void*> RequiredIngredients; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoResearchItemsRequirement, RequiredIngredients) == 0, "Offset mismatch for FJunoResearchItemsRequirement::RequiredIngredients");

// /Script/JunoResearch.JunoResearchLevelSaveDataChunk
// Kind: ScriptStruct; super: JunoResearchSaveDataChunk
struct FJunoResearchLevelSaveDataChunk
{
public:
    std::int32_t Level; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoResearchLevelSaveDataChunk, Level) == 0, "Offset mismatch for FJunoResearchLevelSaveDataChunk::Level");

// /Script/JunoResearch.JunoResearchMiscDefinition
// Kind: ScriptStruct; super: JunoResearchDefinitionChunk
struct FJunoResearchMiscDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchPerPlayerPerWorldScope
// Kind: ScriptStruct; super: JunoResearchScope
struct FJunoResearchPerPlayerPerWorldScope
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchPrerequisiteRequirement
// Kind: ScriptStruct; super: JunoResearchRequirement
struct FJunoResearchPrerequisiteRequirement
{
public:
    std::uint8_t RequiredPrerequisiteResearch[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoResearchPrerequisiteRequirement, RequiredPrerequisiteResearch) == 0, "Offset mismatch for FJunoResearchPrerequisiteRequirement::RequiredPrerequisiteResearch");

// /Script/JunoResearch.JunoResearchRecipeReward
// Kind: ScriptStruct; super: JunoResearchReward
struct FJunoResearchRecipeReward
{
public:
    FName RewardedRecipe; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoResearchRecipeReward, RewardedRecipe) == 0, "Offset mismatch for FJunoResearchRecipeReward::RewardedRecipe");

// /Script/JunoResearch.JunoResearchRequest
// Kind: ScriptStruct; super: none
struct FJunoResearchRequest
{
public:
    std::uint8_t Context[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ResearchTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> RequestChunks; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoResearchRequest, Context) == 0, "Offset mismatch for FJunoResearchRequest::Context");
static_assert(offsetof(FJunoResearchRequest, ResearchTag) == 8, "Offset mismatch for FJunoResearchRequest::ResearchTag");
static_assert(offsetof(FJunoResearchRequest, RequestChunks) == 16, "Offset mismatch for FJunoResearchRequest::RequestChunks");

// /Script/JunoResearch.JunoResearchRequestChunk
// Kind: ScriptStruct; super: none
struct FJunoResearchRequestChunk
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchRequirement
// Kind: ScriptStruct; super: JunoResearchDefinitionChunk
struct FJunoResearchRequirement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchReward
// Kind: ScriptStruct; super: JunoResearchDefinitionChunk
struct FJunoResearchReward
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchSaveData
// Kind: ScriptStruct; super: none
struct FJunoResearchSaveData
{
public:
    std::uint8_t SavedResearchTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> SavedResearchChunks; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoResearchSaveData, SavedResearchTag) == 0, "Offset mismatch for FJunoResearchSaveData::SavedResearchTag");
static_assert(offsetof(FJunoResearchSaveData, SavedResearchChunks) == 8, "Offset mismatch for FJunoResearchSaveData::SavedResearchChunks");

// /Script/JunoResearch.JunoResearchSaveDataChunk
// Kind: ScriptStruct; super: none
struct FJunoResearchSaveDataChunk
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchScope
// Kind: ScriptStruct; super: JunoResearchDefinitionChunk
struct FJunoResearchScope
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchSimpleLevelsDefinition
// Kind: ScriptStruct; super: JunoResearchMiscDefinition
struct FJunoResearchSimpleLevelsDefinition
{
public:
    std::int32_t NumLevels; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoResearchSimpleLevelsDefinition, NumLevels) == 0, "Offset mismatch for FJunoResearchSimpleLevelsDefinition::NumLevels");

// /Script/JunoResearch.JunoResearchSpentItem
// Kind: ScriptStruct; super: none
struct FJunoResearchSpentItem
{
public:
    std::uint8_t ItemDefinition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t Count; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoResearchSpentItem, ItemDefinition) == 0, "Offset mismatch for FJunoResearchSpentItem::ItemDefinition");
static_assert(offsetof(FJunoResearchSpentItem, Count) == 32, "Offset mismatch for FJunoResearchSpentItem::Count");

// /Script/JunoResearch.JunoResearchSpentItemsSaveDataChunk
// Kind: ScriptStruct; super: JunoResearchSaveDataChunk
struct FJunoResearchSpentItemsSaveDataChunk
{
public:
    std::int32_t Level; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> SavedItemCounts; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoResearchSpentItemsSaveDataChunk, Level) == 0, "Offset mismatch for FJunoResearchSpentItemsSaveDataChunk::Level");
static_assert(offsetof(FJunoResearchSpentItemsSaveDataChunk, SavedItemCounts) == 8, "Offset mismatch for FJunoResearchSpentItemsSaveDataChunk::SavedItemCounts");

// /Script/JunoResearch.JunoResearchStartupDefinition
// Kind: ScriptStruct; super: JunoResearchMiscDefinition
struct FJunoResearchStartupDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchTagsReward
// Kind: ScriptStruct; super: JunoResearchReward
struct FJunoResearchTagsReward
{
public:
    std::uint8_t PlayerTags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoResearchTagsReward, PlayerTags) == 0, "Offset mismatch for FJunoResearchTagsReward::PlayerTags");

// /Script/JunoResearch.JunoResearchUIDefinition
// Kind: ScriptStruct; super: JunoResearchMiscDefinition
struct FJunoResearchUIDefinition
{
public:
    std::uint8_t Category[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Theme[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t OwnedGameplayTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoResearchUIDefinition, Category) == 0, "Offset mismatch for FJunoResearchUIDefinition::Category");
static_assert(offsetof(FJunoResearchUIDefinition, Theme) == 4, "Offset mismatch for FJunoResearchUIDefinition::Theme");
static_assert(offsetof(FJunoResearchUIDefinition, OwnedGameplayTags) == 8, "Offset mismatch for FJunoResearchUIDefinition::OwnedGameplayTags");

// /Script/JunoResearch.JunoResearchedResearch
// Kind: ScriptStruct; super: none
struct FJunoResearchedResearch
{
public:
    std::uint8_t ResearchTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoResearchedResearch, ResearchTag) == 0, "Offset mismatch for FJunoResearchedResearch::ResearchTag");

// /Script/JunoResearch.JunoUpgradeResearchRequest
// Kind: ScriptStruct; super: none
struct FJunoUpgradeResearchRequest
{
public:
    std::uint8_t Context[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t ResearchTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> RequestChunks; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoUpgradeResearchRequest, Context) == 0, "Offset mismatch for FJunoUpgradeResearchRequest::Context");
static_assert(offsetof(FJunoUpgradeResearchRequest, ResearchTag) == 8, "Offset mismatch for FJunoUpgradeResearchRequest::ResearchTag");
static_assert(offsetof(FJunoUpgradeResearchRequest, RequestChunks) == 16, "Offset mismatch for FJunoUpgradeResearchRequest::RequestChunks");

// /Script/JunoResearch.JunoUpgradeResearchRequestChunk
// Kind: ScriptStruct; super: none
struct FJunoUpgradeResearchRequestChunk
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoUpgradedResearch
// Kind: ScriptStruct; super: none
struct FJunoUpgradedResearch
{
public:
    std::uint8_t ResearchTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoUpgradedResearch, ResearchTag) == 0, "Offset mismatch for FJunoUpgradedResearch::ResearchTag");

// /Script/JunoResearch.JunoGameStateComponent_Research
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_Research
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Research, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_Research::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_Research, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_Research::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_Research, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_Research::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_Research, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_Research::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_Research, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_Research::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_Research, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_Research::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_Research, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_Research::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_Research, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_Research::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_Research, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_Research::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_Research, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_Research::OnComponentDeactivated");

// /Script/JunoResearch.JunoResearchAnalytics
// Kind: Class; super: Object
class UJunoResearchAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoResearchCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoResearchControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnPlayerResearchChangedEvent; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerResearchedEvent; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerUpgradedResearch; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* WaitForPlayerPersistence; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AllPlayerResearch[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> UnlockedRecipes; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoResearchControllerComponent, OnPlayerResearchChangedEvent) == 200, "Offset mismatch for UJunoResearchControllerComponent::OnPlayerResearchChangedEvent");
static_assert(offsetof(UJunoResearchControllerComponent, OnPlayerResearchedEvent) == 216, "Offset mismatch for UJunoResearchControllerComponent::OnPlayerResearchedEvent");
static_assert(offsetof(UJunoResearchControllerComponent, OnPlayerUpgradedResearch) == 232, "Offset mismatch for UJunoResearchControllerComponent::OnPlayerUpgradedResearch");
static_assert(offsetof(UJunoResearchControllerComponent, WaitForPlayerPersistence) == 248, "Offset mismatch for UJunoResearchControllerComponent::WaitForPlayerPersistence");
static_assert(offsetof(UJunoResearchControllerComponent, AllPlayerResearch) == 256, "Offset mismatch for UJunoResearchControllerComponent::AllPlayerResearch");
static_assert(offsetof(UJunoResearchControllerComponent, UnlockedRecipes) == 272, "Offset mismatch for UJunoResearchControllerComponent::UnlockedRecipes");

// /Script/JunoResearch.JunoResearchGameStateInterface
// Kind: Class; super: Interface
class UJunoResearchGameStateInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchInteractComponent
// Kind: Class; super: ActorComponent
class UJunoResearchInteractComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t RequiredTagsForInteraction[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoResearchInteractComponent, RequiredTagsForInteraction) == 192, "Offset mismatch for UJunoResearchInteractComponent::RequiredTagsForInteraction");

// /Script/JunoResearch.JunoResearchLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoResearchLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoResearch.JunoResearchPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoResearchPersistenceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoResearchPersistenceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoResearchPersistenceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoResearchPersistenceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoResearchPersistenceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoResearchPersistenceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoResearchPersistenceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoResearchPersistenceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoResearchPersistenceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoResearchPersistenceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoResearchPersistenceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoResearchPersistenceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoResearchPersistenceComponent::bSubscribeToMeshNetwork");

// /Script/JunoResearch.JunoResearchPlayerPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoResearchPlayerPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoResearchPlayerPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoResearchPlayerPersistenceFeatureModule::Description");

// /Script/JunoResearch.JunoResearchReactComponent
// Kind: Class; super: ActorComponent
class UJunoResearchReactComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> ActiveAbilitySets; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoResearchReactComponent, ActiveAbilitySets) == 224, "Offset mismatch for UJunoResearchReactComponent::ActiveAbilitySets");
