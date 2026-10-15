/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteQuest
 */
#pragma once
#include "Basic.h"

// /Script/FortniteQuest.EventReactionCumulativeRollEntry
// Kind: ScriptStruct; super: none
struct FEventReactionCumulativeRollEntry
{
public:
    std::int32_t RollChance; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Reactions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEventReactionCumulativeRollEntry, RollChance) == 0, "Offset mismatch for FEventReactionCumulativeRollEntry::RollChance");
static_assert(offsetof(FEventReactionCumulativeRollEntry, Reactions) == 8, "Offset mismatch for FEventReactionCumulativeRollEntry::Reactions");

// /Script/FortniteQuest.EventReaction_Conditional
// Kind: ScriptStruct; super: EventReactionBase
struct FEventReaction_Conditional
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t GrantType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TArray<void*> ConditionalReactions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEventReaction_Conditional, GrantType) == 8, "Offset mismatch for FEventReaction_Conditional::GrantType");
static_assert(offsetof(FEventReaction_Conditional, ConditionalReactions) == 16, "Offset mismatch for FEventReaction_Conditional::ConditionalReactions");

// /Script/FortniteQuest.EventReaction_CumulativeRoll
// Kind: ScriptStruct; super: EventReactionBase
struct FEventReaction_CumulativeRoll
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> CumulativeRollEntries; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEventReaction_CumulativeRoll, CumulativeRollEntries) == 8, "Offset mismatch for FEventReaction_CumulativeRoll::CumulativeRollEntries");

// /Script/FortniteQuest.FortEventReaction_AddMatchStat
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_AddMatchStat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MatchStatTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t UpdateAmount; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseMultiplier; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    std::uint8_t NumericalMultiplier[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEventReaction_AddMatchStat, MatchStatTag) == 8, "Offset mismatch for FFortEventReaction_AddMatchStat::MatchStatTag");
static_assert(offsetof(FFortEventReaction_AddMatchStat, UpdateAmount) == 12, "Offset mismatch for FFortEventReaction_AddMatchStat::UpdateAmount");
static_assert(offsetof(FFortEventReaction_AddMatchStat, bUseMultiplier) == 16, "Offset mismatch for FFortEventReaction_AddMatchStat::bUseMultiplier");
static_assert(offsetof(FFortEventReaction_AddMatchStat, NumericalMultiplier) == 24, "Offset mismatch for FFortEventReaction_AddMatchStat::NumericalMultiplier");

// /Script/FortniteQuest.FortEventReaction_DataTableSideEffect
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_DataTableSideEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TableRowEntry[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEventReaction_DataTableSideEffect, TableRowEntry) == 8, "Offset mismatch for FFortEventReaction_DataTableSideEffect::TableRowEntry");

// /Script/FortniteQuest.FortEventReaction_GrantEmote
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_GrantEmote
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EmoteToGrant[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEventReaction_GrantEmote, EmoteToGrant) == 8, "Offset mismatch for FFortEventReaction_GrantEmote::EmoteToGrant");

// /Script/FortniteQuest.FortEventReaction_GrantGameplayAbilities
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_GrantGameplayAbilities
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> GameplayAbilitiesToGrant; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortEventReaction_GrantGameplayAbilities, GameplayAbilitiesToGrant) == 8, "Offset mismatch for FFortEventReaction_GrantGameplayAbilities::GameplayAbilitiesToGrant");

// /Script/FortniteQuest.FortEventReaction_GrantGameplayEffects
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_GrantGameplayEffects
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> GameplayEffectsToGrant; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortEventReaction_GrantGameplayEffects, GameplayEffectsToGrant) == 8, "Offset mismatch for FFortEventReaction_GrantGameplayEffects::GameplayEffectsToGrant");

// /Script/FortniteQuest.FortEventReaction_RemoveEmote
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_RemoveEmote
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName EmoteCategoryToRemove; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortEventReaction_RemoveEmote, EmoteCategoryToRemove) == 8, "Offset mismatch for FFortEventReaction_RemoveEmote::EmoteCategoryToRemove");

// /Script/FortniteQuest.FortEventReaction_SpawnLoot
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_SpawnLoot
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RewardOffset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t RewardDirection[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t RewardConeAngle[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t RewardFlingMagnitude[0x28]; // 0x0060 (Size: 0x28, Type: StructProperty)
    FName LootTier; // 0x0088 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortEventReaction_SpawnLoot, RewardOffset) == 8, "Offset mismatch for FFortEventReaction_SpawnLoot::RewardOffset");
static_assert(offsetof(FFortEventReaction_SpawnLoot, RewardDirection) == 32, "Offset mismatch for FFortEventReaction_SpawnLoot::RewardDirection");
static_assert(offsetof(FFortEventReaction_SpawnLoot, RewardConeAngle) == 56, "Offset mismatch for FFortEventReaction_SpawnLoot::RewardConeAngle");
static_assert(offsetof(FFortEventReaction_SpawnLoot, RewardFlingMagnitude) == 96, "Offset mismatch for FFortEventReaction_SpawnLoot::RewardFlingMagnitude");
static_assert(offsetof(FFortEventReaction_SpawnLoot, LootTier) == 136, "Offset mismatch for FFortEventReaction_SpawnLoot::LootTier");

// /Script/FortniteQuest.FortEventReaction_SpawnPickup
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_SpawnPickup
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PickupDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t NumberToSpawn; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    std::uint8_t TossDirection[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t bBlockedFromAutoPickup; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bRandomRotation (shared storage)
    // 0x0048 BoolProperty bToss (shared storage)
    std::uint8_t SourceType; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Source; // 0x004A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPickupOnlyRelevantToOwner; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceSpawnAtWorldLocation; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    std::uint8_t WorldSpawnLocation[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnLocationTarget[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSetActorOwner; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x006D
    std::uint8_t ActorOwner[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSetOptionalInstigator; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0075
    std::uint8_t OptionalInstigator[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSetOptionalFlyToTarget; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x007D
    std::uint8_t OptionalFlyToTarget[0x4]; // 0x0080 (Size: 0x4, Type: NameProperty)
    std::uint8_t bPlayPickupSound; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0085
    std::uint8_t SpawnLocationOffset[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseRandomizerToOffset; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x00A1
    std::uint8_t MinRandomOffset[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxRandomOffset[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t AdditionalSpawnSourceTags[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEventReaction_SpawnPickup, PickupDefinition) == 8, "Offset mismatch for FFortEventReaction_SpawnPickup::PickupDefinition");
static_assert(offsetof(FFortEventReaction_SpawnPickup, NumberToSpawn) == 40, "Offset mismatch for FFortEventReaction_SpawnPickup::NumberToSpawn");
static_assert(offsetof(FFortEventReaction_SpawnPickup, TossDirection) == 48, "Offset mismatch for FFortEventReaction_SpawnPickup::TossDirection");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bBlockedFromAutoPickup) == 72, "Offset mismatch for FFortEventReaction_SpawnPickup::bBlockedFromAutoPickup");
static_assert(offsetof(FFortEventReaction_SpawnPickup, SourceType) == 73, "Offset mismatch for FFortEventReaction_SpawnPickup::SourceType");
static_assert(offsetof(FFortEventReaction_SpawnPickup, Source) == 74, "Offset mismatch for FFortEventReaction_SpawnPickup::Source");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bPickupOnlyRelevantToOwner) == 75, "Offset mismatch for FFortEventReaction_SpawnPickup::bPickupOnlyRelevantToOwner");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bForceSpawnAtWorldLocation) == 76, "Offset mismatch for FFortEventReaction_SpawnPickup::bForceSpawnAtWorldLocation");
static_assert(offsetof(FFortEventReaction_SpawnPickup, WorldSpawnLocation) == 80, "Offset mismatch for FFortEventReaction_SpawnPickup::WorldSpawnLocation");
static_assert(offsetof(FFortEventReaction_SpawnPickup, SpawnLocationTarget) == 104, "Offset mismatch for FFortEventReaction_SpawnPickup::SpawnLocationTarget");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bSetActorOwner) == 108, "Offset mismatch for FFortEventReaction_SpawnPickup::bSetActorOwner");
static_assert(offsetof(FFortEventReaction_SpawnPickup, ActorOwner) == 112, "Offset mismatch for FFortEventReaction_SpawnPickup::ActorOwner");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bSetOptionalInstigator) == 116, "Offset mismatch for FFortEventReaction_SpawnPickup::bSetOptionalInstigator");
static_assert(offsetof(FFortEventReaction_SpawnPickup, OptionalInstigator) == 120, "Offset mismatch for FFortEventReaction_SpawnPickup::OptionalInstigator");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bSetOptionalFlyToTarget) == 124, "Offset mismatch for FFortEventReaction_SpawnPickup::bSetOptionalFlyToTarget");
static_assert(offsetof(FFortEventReaction_SpawnPickup, OptionalFlyToTarget) == 128, "Offset mismatch for FFortEventReaction_SpawnPickup::OptionalFlyToTarget");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bPlayPickupSound) == 132, "Offset mismatch for FFortEventReaction_SpawnPickup::bPlayPickupSound");
static_assert(offsetof(FFortEventReaction_SpawnPickup, SpawnLocationOffset) == 136, "Offset mismatch for FFortEventReaction_SpawnPickup::SpawnLocationOffset");
static_assert(offsetof(FFortEventReaction_SpawnPickup, bUseRandomizerToOffset) == 160, "Offset mismatch for FFortEventReaction_SpawnPickup::bUseRandomizerToOffset");
static_assert(offsetof(FFortEventReaction_SpawnPickup, MinRandomOffset) == 168, "Offset mismatch for FFortEventReaction_SpawnPickup::MinRandomOffset");
static_assert(offsetof(FFortEventReaction_SpawnPickup, MaxRandomOffset) == 192, "Offset mismatch for FFortEventReaction_SpawnPickup::MaxRandomOffset");
static_assert(offsetof(FFortEventReaction_SpawnPickup, AdditionalSpawnSourceTags) == 216, "Offset mismatch for FFortEventReaction_SpawnPickup::AdditionalSpawnSourceTags");

// /Script/FortniteQuest.FortEventReaction_UpdateMatchStat
// Kind: ScriptStruct; super: EventReactionBase
struct FFortEventReaction_UpdateMatchStat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MatchStatTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseMultiplier; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t NumericalMultiplier[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortEventReaction_UpdateMatchStat, MatchStatTag) == 8, "Offset mismatch for FFortEventReaction_UpdateMatchStat::MatchStatTag");
static_assert(offsetof(FFortEventReaction_UpdateMatchStat, bUseMultiplier) == 12, "Offset mismatch for FFortEventReaction_UpdateMatchStat::bUseMultiplier");
static_assert(offsetof(FFortEventReaction_UpdateMatchStat, NumericalMultiplier) == 16, "Offset mismatch for FFortEventReaction_UpdateMatchStat::NumericalMultiplier");

// /Script/FortniteQuest.FortMatchStatFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortMatchStatFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComp; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortMatchStatFastArray, Entries) == 72, "Offset mismatch for FFortMatchStatFastArray::Entries");
static_assert(offsetof(FFortMatchStatFastArray, ParentComp) == 88, "Offset mismatch for FFortMatchStatFastArray::ParentComp");

// /Script/FortniteQuest.FortMatchStatFastEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortMatchStatFastEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t StatInfo[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortMatchStatFastEntry, StatInfo) == 12, "Offset mismatch for FFortMatchStatFastEntry::StatInfo");

// /Script/FortniteQuest.FortMatchStatUpdateInfo
// Kind: ScriptStruct; super: none
struct FFortMatchStatUpdateInfo
{
public:
    std::uint8_t MatchStatTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t StatAmount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortMatchStatUpdateInfo, MatchStatTag) == 0, "Offset mismatch for FFortMatchStatUpdateInfo::MatchStatTag");
static_assert(offsetof(FFortMatchStatUpdateInfo, StatAmount) == 4, "Offset mismatch for FFortMatchStatUpdateInfo::StatAmount");

// /Script/FortniteQuest.FortMatchStatUpdatedMessage
// Kind: ScriptStruct; super: none
struct FFortMatchStatUpdatedMessage
{
public:
    TArray<void*> UpdatedStats; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortMatchStatUpdatedMessage, UpdatedStats) == 0, "Offset mismatch for FFortMatchStatUpdatedMessage::UpdatedStats");

// /Script/FortniteQuest.FortTableRow_SideEffect
// Kind: ScriptStruct; super: TableRowBase
struct FFortTableRow_SideEffect
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SideEffect[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortTableRow_SideEffect, SideEffect) == 8, "Offset mismatch for FFortTableRow_SideEffect::SideEffect");

// /Script/FortniteQuest.GameplayEffectReactionGrant
// Kind: ScriptStruct; super: none
struct FGameplayEffectReactionGrant
{
public:
    std::uint8_t GameplayEffectsToGrant[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::int32_t EffectLevel; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FGameplayEffectReactionGrant, GameplayEffectsToGrant) == 0, "Offset mismatch for FGameplayEffectReactionGrant::GameplayEffectsToGrant");
static_assert(offsetof(FGameplayEffectReactionGrant, EffectLevel) == 32, "Offset mismatch for FGameplayEffectReactionGrant::EffectLevel");

// /Script/FortniteQuest.MilestoneQuestTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FMilestoneQuestTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TScriptInterface<void> Quest; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FMilestoneQuestTableRow, Quest) == 8, "Offset mismatch for FMilestoneQuestTableRow::Quest");

// /Script/FortniteQuest.ObjectiveExtension_Conditionals
// Kind: ScriptStruct; super: ObjectiveExtensionData
struct FObjectiveExtension_Conditionals
{
public:
    TArray<void*> Conditionals; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FObjectiveExtension_Conditionals, Conditionals) == 0, "Offset mismatch for FObjectiveExtension_Conditionals::Conditionals");

// /Script/FortniteQuest.ObjectiveExtension_InitialProgress
// Kind: ScriptStruct; super: ObjectiveExtensionData
struct FObjectiveExtension_InitialProgress
{
public:
    std::uint8_t InitialProgress[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FObjectiveExtension_InitialProgress, InitialProgress) == 0, "Offset mismatch for FObjectiveExtension_InitialProgress::InitialProgress");

// /Script/FortniteQuest.ObjectiveUpdateGate_ZoneDifficulty
// Kind: ScriptStruct; super: GateType_ObjectiveUpdate_Base
struct FObjectiveUpdateGate_ZoneDifficulty
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RequiredDifficulty[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FObjectiveUpdateGate_ZoneDifficulty, RequiredDifficulty) == 16, "Offset mismatch for FObjectiveUpdateGate_ZoneDifficulty::RequiredDifficulty");

// /Script/FortniteQuest.ReactionCondition
// Kind: ScriptStruct; super: none
struct FReactionCondition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteQuest.ReactionCondition_AllConditionsPass
// Kind: ScriptStruct; super: ReactionCondition
struct FReactionCondition_AllConditionsPass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Conditions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FReactionCondition_AllConditionsPass, Conditions) == 8, "Offset mismatch for FReactionCondition_AllConditionsPass::Conditions");

// /Script/FortniteQuest.ReactionCondition_AnyConditionsPass
// Kind: ScriptStruct; super: ReactionCondition
struct FReactionCondition_AnyConditionsPass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Conditions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FReactionCondition_AnyConditionsPass, Conditions) == 8, "Offset mismatch for FReactionCondition_AnyConditionsPass::Conditions");

// /Script/FortniteQuest.ReactionCondition_GameplayQuery
// Kind: ScriptStruct; super: ReactionCondition
struct FReactionCondition_GameplayQuery
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t GameplayQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReactionCondition_GameplayQuery, GameplayQuery) == 8, "Offset mismatch for FReactionCondition_GameplayQuery::GameplayQuery");

// /Script/FortniteQuest.ReactionCondition_GameplayTagQuery
// Kind: ScriptStruct; super: ReactionCondition
struct FReactionCondition_GameplayTagQuery
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TargetQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReactionCondition_GameplayTagQuery, TargetQuery) == 8, "Offset mismatch for FReactionCondition_GameplayTagQuery::TargetQuery");

// /Script/FortniteQuest.ReactionCondition_HasRequiredToken
// Kind: ScriptStruct; super: ReactionCondition
struct FReactionCondition_HasRequiredToken
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> RequiredTokenDefinition; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FReactionCondition_HasRequiredToken, RequiredTokenDefinition) == 8, "Offset mismatch for FReactionCondition_HasRequiredToken::RequiredTokenDefinition");

// /Script/FortniteQuest.ReactionCondition_NoConditionsPass
// Kind: ScriptStruct; super: ReactionCondition
struct FReactionCondition_NoConditionsPass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Conditions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FReactionCondition_NoConditionsPass, Conditions) == 8, "Offset mismatch for FReactionCondition_NoConditionsPass::Conditions");

// /Script/FortniteQuest.ReactionConditionalGrant
// Kind: ScriptStruct; super: none
struct FReactionConditionalGrant
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ReactionsToGrant; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Condition[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReactionConditionalGrant, ReactionsToGrant) == 8, "Offset mismatch for FReactionConditionalGrant::ReactionsToGrant");
static_assert(offsetof(FReactionConditionalGrant, Condition) == 24, "Offset mismatch for FReactionConditionalGrant::Condition");

// /Script/FortniteQuest.TrackingVolumeParticipant
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FTrackingVolumeParticipant
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t UserId[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> TrackingVolume; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> PlayerStateCached; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ControllerCached; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FTrackingVolumeParticipant, UserId) == 16, "Offset mismatch for FTrackingVolumeParticipant::UserId");
static_assert(offsetof(FTrackingVolumeParticipant, TrackingVolume) == 64, "Offset mismatch for FTrackingVolumeParticipant::TrackingVolume");
static_assert(offsetof(FTrackingVolumeParticipant, PlayerStateCached) == 72, "Offset mismatch for FTrackingVolumeParticipant::PlayerStateCached");
static_assert(offsetof(FTrackingVolumeParticipant, ControllerCached) == 80, "Offset mismatch for FTrackingVolumeParticipant::ControllerCached");

// /Script/FortniteQuest.TrackingVolumeParticipantList
// Kind: ScriptStruct; super: FastArraySerializer
struct FTrackingVolumeParticipantList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> TrackingVolumeParticipants; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0058
    void* TrackingVolume; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTrackingVolumeParticipantList, TrackingVolumeParticipants) == 72, "Offset mismatch for FTrackingVolumeParticipantList::TrackingVolumeParticipants");
static_assert(offsetof(FTrackingVolumeParticipantList, TrackingVolume) == 112, "Offset mismatch for FTrackingVolumeParticipantList::TrackingVolume");

// /Script/FortniteQuest.FortCheatManager_Quests
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_Quests
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteQuest.FortGameFrameworkComponent_MatchStats
// Kind: Class; super: GameFrameworkComponent
class UFortGameFrameworkComponent_MatchStats
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMatchStatsUpdated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientMatchStatUpdate; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ReplicatedMatchStats[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameFrameworkComponent_MatchStats, OnMatchStatsUpdated) == 192, "Offset mismatch for UFortGameFrameworkComponent_MatchStats::OnMatchStatsUpdated");
static_assert(offsetof(UFortGameFrameworkComponent_MatchStats, OnClientMatchStatUpdate) == 208, "Offset mismatch for UFortGameFrameworkComponent_MatchStats::OnClientMatchStatUpdate");
static_assert(offsetof(UFortGameFrameworkComponent_MatchStats, ReplicatedMatchStats) == 224, "Offset mismatch for UFortGameFrameworkComponent_MatchStats::ReplicatedMatchStats");

// /Script/FortniteQuest.FortGameStateComponent_MilestoneQuests
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_MilestoneQuests
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t DataRegistryType_SeasonalMilestoneQuests[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameStateComponent_MilestoneQuests, DataRegistryType_SeasonalMilestoneQuests) == 216, "Offset mismatch for UFortGameStateComponent_MilestoneQuests::DataRegistryType_SeasonalMilestoneQuests");

// /Script/FortniteQuest.FortPlayerStateComponent_MilestoneQuests
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_MilestoneQuests
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

static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, PrimaryComponentTick) == 56, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::PrimaryComponentTick");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, ComponentTags) == 104, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::ComponentTags");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, AssetUserData) == 120, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::AssetUserData");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, UCSSerializationIndex) == 144, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::UCSSerializationIndex");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, bNetAddressable) == 152, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::bNetAddressable");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, bAutoActivate) == 154, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::bAutoActivate");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, bIsEditorOnly) == 155, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::bIsEditorOnly");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, CreationMethod) == 185, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::CreationMethod");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, OnComponentActivated) == 186, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::OnComponentActivated");
static_assert(offsetof(UFortPlayerStateComponent_MilestoneQuests, OnComponentDeactivated) == 187, "Offset mismatch for UFortPlayerStateComponent_MilestoneQuests::OnComponentDeactivated");

// /Script/FortniteQuest.FortQuestDefinitionComponent_Accolade
// Kind: Class; super: FortQuestDefinitionComponent
class UFortQuestDefinitionComponent_Accolade
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_Accolade, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_Accolade::ObjectivesExtensionData");

// /Script/FortniteQuest.FortQuestDefinitionComponent_Conditionals
// Kind: Class; super: FortQuestDefinitionComponent
class UFortQuestDefinitionComponent_Conditionals
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_Conditionals, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_Conditionals::ObjectivesExtensionData");

// /Script/FortniteQuest.FortQuestDefinitionComponent_InitialProgress
// Kind: Class; super: FortQuestDefinitionComponent
class UFortQuestDefinitionComponent_InitialProgress
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_InitialProgress, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_InitialProgress::ObjectivesExtensionData");

// /Script/FortniteQuest.FortQuestDefinitionComponent_MilestoneQuest
// Kind: Class; super: FortQuestDefinitionComponent
class UFortQuestDefinitionComponent_MilestoneQuest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_MilestoneQuest, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_MilestoneQuest::ObjectivesExtensionData");

// /Script/FortniteQuest.FortQuestDefinitionComponent_ProductCompatibilityInjector_GameModeRanked
// Kind: Class; super: FortQuestDefinitionComponent_ProductCompatibilityInjector
class UFortQuestDefinitionComponent_ProductCompatibilityInjector_GameModeRanked
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_ProductCompatibilityInjector_GameModeRanked, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_ProductCompatibilityInjector_GameModeRanked::ObjectivesExtensionData");

// /Script/FortniteQuest.FortQuestDefinitionComponent_ProductCompatibilityInjector_IslandMetadata
// Kind: Class; super: FortQuestDefinitionComponent_ProductCompatibilityInjector
class UFortQuestDefinitionComponent_ProductCompatibilityInjector_IslandMetadata
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> ObjectivesExtensionData; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortQuestDefinitionComponent_ProductCompatibilityInjector_IslandMetadata, ObjectivesExtensionData) == 48, "Offset mismatch for UFortQuestDefinitionComponent_ProductCompatibilityInjector_IslandMetadata::ObjectivesExtensionData");

// /Script/FortniteQuest.FortQuestItemComponent_Accolade
// Kind: Class; super: FortQuestItemComponent
class UFortQuestItemComponent_Accolade
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* QuestDefinitionComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestItemComponent_Accolade, QuestDefinitionComponent) == 48, "Offset mismatch for UFortQuestItemComponent_Accolade::QuestDefinitionComponent");

// /Script/FortniteQuest.FortQuestItemComponent_Conditionals
// Kind: Class; super: FortQuestItemComponent
class UFortQuestItemComponent_Conditionals
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* QuestDefinitionComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestItemComponent_Conditionals, QuestDefinitionComponent) == 48, "Offset mismatch for UFortQuestItemComponent_Conditionals::QuestDefinitionComponent");

// /Script/FortniteQuest.FortQuestItemComponent_InitialProgress
// Kind: Class; super: FortQuestItemComponent
class UFortQuestItemComponent_InitialProgress
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* QuestDefinitionComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestItemComponent_InitialProgress, QuestDefinitionComponent) == 48, "Offset mismatch for UFortQuestItemComponent_InitialProgress::QuestDefinitionComponent");

// /Script/FortniteQuest.FortQuestItemComponent_MilestoneQuest
// Kind: Class; super: FortQuestItemComponent
class UFortQuestItemComponent_MilestoneQuest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* QuestDefinitionComponent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestItemComponent_MilestoneQuest, QuestDefinitionComponent) == 48, "Offset mismatch for UFortQuestItemComponent_MilestoneQuest::QuestDefinitionComponent");

// /Script/FortniteQuest.FortQuestManagerVolume
// Kind: Class; super: FortOverlapTrackingVolume
class UFortQuestManagerVolume
{
public:
    std::uint8_t Pad_0000[0x3A8]; // 0x0000
    TArray<void*> QuestsToGrantOnStart; // 0x03A8 (Size: 0x10, Type: ArrayProperty)
    void* ReactionComponent; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VolumeParticipants[0x78]; // 0x03C0 (Size: 0x78, Type: StructProperty)
    TArray<void*> PendingUsers; // 0x0438 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestManagerVolume, QuestsToGrantOnStart) == 936, "Offset mismatch for UFortQuestManagerVolume::QuestsToGrantOnStart");
static_assert(offsetof(UFortQuestManagerVolume, ReactionComponent) == 952, "Offset mismatch for UFortQuestManagerVolume::ReactionComponent");
static_assert(offsetof(UFortQuestManagerVolume, VolumeParticipants) == 960, "Offset mismatch for UFortQuestManagerVolume::VolumeParticipants");
static_assert(offsetof(UFortQuestManagerVolume, PendingUsers) == 1080, "Offset mismatch for UFortQuestManagerVolume::PendingUsers");

// /Script/FortniteQuest.FortQuestVolumeComponent_QueuedReactions
// Kind: Class; super: FortGameFrameworkComponent_QueuedReactionsManager
class UFortQuestVolumeComponent_QueuedReactions
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t DefaultTimeReactionStillRelevant[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    TArray<void*> ReactionPriorityQueue; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestVolumeComponent_QueuedReactions, DefaultTimeReactionStillRelevant) == 432, "Offset mismatch for UFortQuestVolumeComponent_QueuedReactions::DefaultTimeReactionStillRelevant");
static_assert(offsetof(UFortQuestVolumeComponent_QueuedReactions, ReactionPriorityQueue) == 472, "Offset mismatch for UFortQuestVolumeComponent_QueuedReactions::ReactionPriorityQueue");

// /Script/FortniteQuest.FortReactionGrantVolume
// Kind: Class; super: GameplayVolume
class UFortReactionGrantVolume
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* OverlapComponent; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ReactionsToGrantOnEnter; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReactionsToGrantOnExit; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseQuestRequirement; // 0x0360 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTriggerExitOnObjectiveCompletion; // 0x0361 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0362
    std::uint8_t RequiredQuest[0x20]; // 0x0368 (Size: 0x20, Type: SoftObjectProperty)
    FName RequiredObjective; // 0x0388 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortReactionGrantVolume, OverlapComponent) == 824, "Offset mismatch for UFortReactionGrantVolume::OverlapComponent");
static_assert(offsetof(UFortReactionGrantVolume, ReactionsToGrantOnEnter) == 832, "Offset mismatch for UFortReactionGrantVolume::ReactionsToGrantOnEnter");
static_assert(offsetof(UFortReactionGrantVolume, ReactionsToGrantOnExit) == 848, "Offset mismatch for UFortReactionGrantVolume::ReactionsToGrantOnExit");
static_assert(offsetof(UFortReactionGrantVolume, bUseQuestRequirement) == 864, "Offset mismatch for UFortReactionGrantVolume::bUseQuestRequirement");
static_assert(offsetof(UFortReactionGrantVolume, bTriggerExitOnObjectiveCompletion) == 865, "Offset mismatch for UFortReactionGrantVolume::bTriggerExitOnObjectiveCompletion");
static_assert(offsetof(UFortReactionGrantVolume, RequiredQuest) == 872, "Offset mismatch for UFortReactionGrantVolume::RequiredQuest");
static_assert(offsetof(UFortReactionGrantVolume, RequiredObjective) == 904, "Offset mismatch for UFortReactionGrantVolume::RequiredObjective");

// /Script/FortniteQuest.ProgressionTechDebugDrawManager
// Kind: Class; super: GameInstanceSubsystem
class UProgressionTechDebugDrawManager
{
public:
    std::uint8_t Opaque[1];
};
