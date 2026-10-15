/**
 * decamp dumper generated SDK
 * Package: /Script/HazelnutSpread_RivalsCoreRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HazelnutSpread_RivalsCoreRuntime.HazelnutSpreadClashEvent
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadClashEvent
{
public:
    std::uint8_t EventUnlockTags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHazelnutSpreadClashEvent, EventUnlockTags) == 0, "Offset mismatch for FHazelnutSpreadClashEvent::EventUnlockTags");

// /Script/HazelnutSpread_RivalsCoreRuntime.HazelnutSpreadLeaderboardEntry
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadLeaderboardEntry
{
public:
    FString PlayerAccountId; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PlayerName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t WonDuels; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t FactionId; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHazelnutSpreadLeaderboardEntry, PlayerAccountId) == 0, "Offset mismatch for FHazelnutSpreadLeaderboardEntry::PlayerAccountId");
static_assert(offsetof(FHazelnutSpreadLeaderboardEntry, PlayerName) == 16, "Offset mismatch for FHazelnutSpreadLeaderboardEntry::PlayerName");
static_assert(offsetof(FHazelnutSpreadLeaderboardEntry, WonDuels) == 32, "Offset mismatch for FHazelnutSpreadLeaderboardEntry::WonDuels");
static_assert(offsetof(FHazelnutSpreadLeaderboardEntry, FactionId) == 36, "Offset mismatch for FHazelnutSpreadLeaderboardEntry::FactionId");

// /Script/HazelnutSpread_RivalsCoreRuntime.HazelnutSpreadPersistenceData
// Kind: ScriptStruct; super: none
struct FHazelnutSpreadPersistenceData
{
public:
    std::uint8_t bIsActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t DuelWinVersion; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t NumBounties; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t BountyCurrencyVersion; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t BountyCurrency; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    TArray<void*> RecentBountyResults; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MatchCountSinceLastDuelInitiated; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FHazelnutSpreadPersistenceData, bIsActive) == 0, "Offset mismatch for FHazelnutSpreadPersistenceData::bIsActive");
static_assert(offsetof(FHazelnutSpreadPersistenceData, DuelWinVersion) == 4, "Offset mismatch for FHazelnutSpreadPersistenceData::DuelWinVersion");
static_assert(offsetof(FHazelnutSpreadPersistenceData, NumBounties) == 8, "Offset mismatch for FHazelnutSpreadPersistenceData::NumBounties");
static_assert(offsetof(FHazelnutSpreadPersistenceData, BountyCurrencyVersion) == 12, "Offset mismatch for FHazelnutSpreadPersistenceData::BountyCurrencyVersion");
static_assert(offsetof(FHazelnutSpreadPersistenceData, BountyCurrency) == 16, "Offset mismatch for FHazelnutSpreadPersistenceData::BountyCurrency");
static_assert(offsetof(FHazelnutSpreadPersistenceData, RecentBountyResults) == 24, "Offset mismatch for FHazelnutSpreadPersistenceData::RecentBountyResults");
static_assert(offsetof(FHazelnutSpreadPersistenceData, MatchCountSinceLastDuelInitiated) == 40, "Offset mismatch for FHazelnutSpreadPersistenceData::MatchCountSinceLastDuelInitiated");

// /Script/HazelnutSpread_RivalsCoreRuntime.HazelnutSpread_TitleDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FHazelnutSpread_TitleDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t NumDuelsWon; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    FText PlayerTitle; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FHazelnutSpread_TitleDataRow, NumDuelsWon) == 8, "Offset mismatch for FHazelnutSpread_TitleDataRow::NumDuelsWon");
static_assert(offsetof(FHazelnutSpread_TitleDataRow, PlayerTitle) == 16, "Offset mismatch for FHazelnutSpread_TitleDataRow::PlayerTitle");

// /Script/HazelnutSpread_RivalsCoreRuntime.MilestoneUnlockableItem
// Kind: ScriptStruct; super: none
struct FMilestoneUnlockableItem
{
public:
    TArray<void*> UnlockableItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequiredMilestone[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    FString ForceUnlockCvar; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bRerollLootGroup; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUnlocked; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMilestoneUnlockableItem, UnlockableItems) == 0, "Offset mismatch for FMilestoneUnlockableItem::UnlockableItems");
static_assert(offsetof(FMilestoneUnlockableItem, RequiredMilestone) == 16, "Offset mismatch for FMilestoneUnlockableItem::RequiredMilestone");
static_assert(offsetof(FMilestoneUnlockableItem, ForceUnlockCvar) == 24, "Offset mismatch for FMilestoneUnlockableItem::ForceUnlockCvar");
static_assert(offsetof(FMilestoneUnlockableItem, bRerollLootGroup) == 40, "Offset mismatch for FMilestoneUnlockableItem::bRerollLootGroup");
static_assert(offsetof(FMilestoneUnlockableItem, bIsUnlocked) == 41, "Offset mismatch for FMilestoneUnlockableItem::bIsUnlocked");

// /Script/HazelnutSpread_RivalsCoreRuntime.RivalActData
// Kind: ScriptStruct; super: TableRowBase
struct FRivalActData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RequiredCalendarEvent[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t GameplayEvent[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::int32_t ActNumber; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRivalActData, RequiredCalendarEvent) == 8, "Offset mismatch for FRivalActData::RequiredCalendarEvent");
static_assert(offsetof(FRivalActData, GameplayEvent) == 12, "Offset mismatch for FRivalActData::GameplayEvent");
static_assert(offsetof(FRivalActData, ActNumber) == 16, "Offset mismatch for FRivalActData::ActNumber");

// /Script/HazelnutSpread_RivalsCoreRuntime.RivalFactionData
// Kind: ScriptStruct; super: TableRowBase
struct FRivalFactionData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t MapName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    void* Token; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::int32_t FactionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t RequiredCalendarEvent[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t PlayerFactionTag[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::int32_t LeaderboardID; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRivalFactionData, EventId) == 8, "Offset mismatch for FRivalFactionData::EventId");
static_assert(offsetof(FRivalFactionData, MapName) == 12, "Offset mismatch for FRivalFactionData::MapName");
static_assert(offsetof(FRivalFactionData, Token) == 16, "Offset mismatch for FRivalFactionData::Token");
static_assert(offsetof(FRivalFactionData, FactionIndex) == 24, "Offset mismatch for FRivalFactionData::FactionIndex");
static_assert(offsetof(FRivalFactionData, RequiredCalendarEvent) == 28, "Offset mismatch for FRivalFactionData::RequiredCalendarEvent");
static_assert(offsetof(FRivalFactionData, PlayerFactionTag) == 32, "Offset mismatch for FRivalFactionData::PlayerFactionTag");
static_assert(offsetof(FRivalFactionData, LeaderboardID) == 36, "Offset mismatch for FRivalFactionData::LeaderboardID");

// /Script/HazelnutSpread_RivalsCoreRuntime.RivalGateData
// Kind: ScriptStruct; super: TableRowBase
struct FRivalGateData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int64_t TargetCount; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::uint8_t TargetCalendarEvent[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t GateBehavior; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRivalGateData, TargetCount) == 8, "Offset mismatch for FRivalGateData::TargetCount");
static_assert(offsetof(FRivalGateData, TargetCalendarEvent) == 16, "Offset mismatch for FRivalGateData::TargetCalendarEvent");
static_assert(offsetof(FRivalGateData, GateBehavior) == 20, "Offset mismatch for FRivalGateData::GateBehavior");

// /Script/HazelnutSpread_RivalsCoreRuntime.RivalMilestoneData
// Kind: ScriptStruct; super: TableRowBase
struct FRivalMilestoneData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int64_t RequiredCount; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::uint8_t RequiredCalendarEvent[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t OwningAct; // 0x0014 (Size: 0x4, Type: IntProperty)
    TMap<void*, void*> FactionGameplayEvents; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FRivalMilestoneData, RequiredCount) == 8, "Offset mismatch for FRivalMilestoneData::RequiredCount");
static_assert(offsetof(FRivalMilestoneData, RequiredCalendarEvent) == 16, "Offset mismatch for FRivalMilestoneData::RequiredCalendarEvent");
static_assert(offsetof(FRivalMilestoneData, OwningAct) == 20, "Offset mismatch for FRivalMilestoneData::OwningAct");
static_assert(offsetof(FRivalMilestoneData, FactionGameplayEvents) == 24, "Offset mismatch for FRivalMilestoneData::FactionGameplayEvents");

// /Script/HazelnutSpread_RivalsCoreRuntime.FortControllerComponent_RivalsFaction
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_RivalsFaction
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

static_assert(offsetof(UFortControllerComponent_RivalsFaction, PrimaryComponentTick) == 56, "Offset mismatch for UFortControllerComponent_RivalsFaction::PrimaryComponentTick");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, ComponentTags) == 104, "Offset mismatch for UFortControllerComponent_RivalsFaction::ComponentTags");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, AssetUserData) == 120, "Offset mismatch for UFortControllerComponent_RivalsFaction::AssetUserData");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, UCSSerializationIndex) == 144, "Offset mismatch for UFortControllerComponent_RivalsFaction::UCSSerializationIndex");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, bNetAddressable) == 152, "Offset mismatch for UFortControllerComponent_RivalsFaction::bNetAddressable");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, bAutoActivate) == 154, "Offset mismatch for UFortControllerComponent_RivalsFaction::bAutoActivate");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, bIsEditorOnly) == 155, "Offset mismatch for UFortControllerComponent_RivalsFaction::bIsEditorOnly");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, CreationMethod) == 185, "Offset mismatch for UFortControllerComponent_RivalsFaction::CreationMethod");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, OnComponentActivated) == 186, "Offset mismatch for UFortControllerComponent_RivalsFaction::OnComponentActivated");
static_assert(offsetof(UFortControllerComponent_RivalsFaction, OnComponentDeactivated) == 187, "Offset mismatch for UFortControllerComponent_RivalsFaction::OnComponentDeactivated");

// /Script/HazelnutSpread_RivalsCoreRuntime.FortGameFeatureAction_AddWorldPartitionContentForMilestone
// Kind: Class; super: GameFeatureAction_AddWorldPartitionContent
class UFortGameFeatureAction_AddWorldPartitionContentForMilestone
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t RequiredMilestone[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t bHasUnlocked; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    FString ForceActivateCvar; // 0x0050 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortGameFeatureAction_AddWorldPartitionContentForMilestone, RequiredMilestone) == 72, "Offset mismatch for UFortGameFeatureAction_AddWorldPartitionContentForMilestone::RequiredMilestone");
static_assert(offsetof(UFortGameFeatureAction_AddWorldPartitionContentForMilestone, bHasUnlocked) == 76, "Offset mismatch for UFortGameFeatureAction_AddWorldPartitionContentForMilestone::bHasUnlocked");
static_assert(offsetof(UFortGameFeatureAction_AddWorldPartitionContentForMilestone, ForceActivateCvar) == 80, "Offset mismatch for UFortGameFeatureAction_AddWorldPartitionContentForMilestone::ForceActivateCvar");

// /Script/HazelnutSpread_RivalsCoreRuntime.FortGameFeatureAction_DataRegistrySourceAtMilestone
// Kind: Class; super: GameFeatureAction_DataRegistrySource
class UFortGameFeatureAction_DataRegistrySourceAtMilestone
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t RequiredMilestone[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t bHasUnlocked; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    FString ForceRegisterCvar; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortGameFeatureAction_DataRegistrySourceAtMilestone, RequiredMilestone) == 64, "Offset mismatch for UFortGameFeatureAction_DataRegistrySourceAtMilestone::RequiredMilestone");
static_assert(offsetof(UFortGameFeatureAction_DataRegistrySourceAtMilestone, bHasUnlocked) == 68, "Offset mismatch for UFortGameFeatureAction_DataRegistrySourceAtMilestone::bHasUnlocked");
static_assert(offsetof(UFortGameFeatureAction_DataRegistrySourceAtMilestone, ForceRegisterCvar) == 72, "Offset mismatch for UFortGameFeatureAction_DataRegistrySourceAtMilestone::ForceRegisterCvar");

// /Script/HazelnutSpread_RivalsCoreRuntime.FortGameStateComponent_RivalsFactionManager
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_RivalsFactionManager
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* FactionDataTable; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* MilestoneDataTable; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* ActDataTable; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* GateDataTable; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_RivalsFactionManager, FactionDataTable) == 208, "Offset mismatch for UFortGameStateComponent_RivalsFactionManager::FactionDataTable");
static_assert(offsetof(UFortGameStateComponent_RivalsFactionManager, MilestoneDataTable) == 216, "Offset mismatch for UFortGameStateComponent_RivalsFactionManager::MilestoneDataTable");
static_assert(offsetof(UFortGameStateComponent_RivalsFactionManager, ActDataTable) == 224, "Offset mismatch for UFortGameStateComponent_RivalsFactionManager::ActDataTable");
static_assert(offsetof(UFortGameStateComponent_RivalsFactionManager, GateDataTable) == 232, "Offset mismatch for UFortGameStateComponent_RivalsFactionManager::GateDataTable");

// /Script/HazelnutSpread_RivalsCoreRuntime.FortPlayerStateComponent_HazelnutSpreadPersistence
// Kind: Class; super: FortPlayerStateComponent_SaveFrameworkPersistence
class UFortPlayerStateComponent_HazelnutSpreadPersistence
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    std::uint8_t HF_AllowBotBountyTargets[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_OptInByDefault[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_NumRecentBountyResultsToStore[0x30]; // 0x01D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t Gameplay_bIsActivated; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0209
    std::int32_t Gameplay_NumBounties; // 0x020C (Size: 0x4, Type: IntProperty)
    std::int32_t Gameplay_BountyCurrency; // 0x0210 (Size: 0x4, Type: IntProperty)
    std::uint8_t BountySuccessCustomVerb[0x4]; // 0x0214 (Size: 0x4, Type: StructProperty)
    void* BountyCurrencyItemDefinition; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    FString DuelRankQuestID; // 0x0220 (Size: 0x10, Type: StrProperty)
    std::uint8_t HF_CurrencyCap[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t HF_TicketValue[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    void* RivalryTicketToken; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* RivalryTicketWorldItem; // 0x0288 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, HF_AllowBotBountyTargets) == 392, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::HF_AllowBotBountyTargets");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, HF_OptInByDefault) == 432, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::HF_OptInByDefault");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, HF_NumRecentBountyResultsToStore) == 472, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::HF_NumRecentBountyResultsToStore");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, Gameplay_bIsActivated) == 520, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::Gameplay_bIsActivated");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, Gameplay_NumBounties) == 524, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::Gameplay_NumBounties");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, Gameplay_BountyCurrency) == 528, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::Gameplay_BountyCurrency");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, BountySuccessCustomVerb) == 532, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::BountySuccessCustomVerb");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, BountyCurrencyItemDefinition) == 536, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::BountyCurrencyItemDefinition");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, DuelRankQuestID) == 544, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::DuelRankQuestID");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, HF_CurrencyCap) == 560, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::HF_CurrencyCap");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, HF_TicketValue) == 600, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::HF_TicketValue");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, RivalryTicketToken) == 640, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::RivalryTicketToken");
static_assert(offsetof(UFortPlayerStateComponent_HazelnutSpreadPersistence, RivalryTicketWorldItem) == 648, "Offset mismatch for UFortPlayerStateComponent_HazelnutSpreadPersistence::RivalryTicketWorldItem");

// /Script/HazelnutSpread_RivalsCoreRuntime.FortPlayerStateComponent_RivalsFaction
// Kind: Class; super: FortPlayerStateComponent
class UFortPlayerStateComponent_RivalsFaction
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FName PlayerFaction; // 0x00C0 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_RivalsFaction, PlayerFaction) == 192, "Offset mismatch for UFortPlayerStateComponent_RivalsFaction::PlayerFaction");

// /Script/HazelnutSpread_RivalsCoreRuntime.HazelnutSpreadLeaderboardManager
// Kind: Class; super: FortControllerComponent
class UHazelnutSpreadLeaderboardManager
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnLocalScoreRequestComplete; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFriendsScoreRequestComplete; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t LocalPlayerScore[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    TArray<void*> FriendsListScores; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHazelnutSpreadLeaderboardManager, OnLocalScoreRequestComplete) == 200, "Offset mismatch for UHazelnutSpreadLeaderboardManager::OnLocalScoreRequestComplete");
static_assert(offsetof(UHazelnutSpreadLeaderboardManager, OnFriendsScoreRequestComplete) == 216, "Offset mismatch for UHazelnutSpreadLeaderboardManager::OnFriendsScoreRequestComplete");
static_assert(offsetof(UHazelnutSpreadLeaderboardManager, LocalPlayerScore) == 232, "Offset mismatch for UHazelnutSpreadLeaderboardManager::LocalPlayerScore");
static_assert(offsetof(UHazelnutSpreadLeaderboardManager, FriendsListScores) == 272, "Offset mismatch for UHazelnutSpreadLeaderboardManager::FriendsListScores");

// /Script/HazelnutSpread_RivalsCoreRuntime.RivalryGameFeatureAction_UnlockItemAtMilestone
// Kind: Class; super: FortGameFeatureAction_AllowLootItem
class URivalryGameFeatureAction_UnlockItemAtMilestone
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ItemToMilestoneEventMap; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URivalryGameFeatureAction_UnlockItemAtMilestone, ItemToMilestoneEventMap) == 40, "Offset mismatch for URivalryGameFeatureAction_UnlockItemAtMilestone::ItemToMilestoneEventMap");
