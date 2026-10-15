/**
 * decamp dumper generated SDK
 * Package: /Script/SproutNativeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SproutNativeRuntime.ActiveJobDataEntry_Server
// Kind: ScriptStruct; super: none
struct FActiveJobDataEntry_Server
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.DecorReinitEntry
// Kind: ScriptStruct; super: none
struct FDecorReinitEntry
{
public:
    std::uint8_t ActorToCorrect[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CorrectedItemDefinition[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDecorReinitEntry, ActorToCorrect) == 0, "Offset mismatch for FDecorReinitEntry::ActorToCorrect");
static_assert(offsetof(FDecorReinitEntry, CorrectedItemDefinition) == 32, "Offset mismatch for FDecorReinitEntry::CorrectedItemDefinition");

// /Script/SproutNativeRuntime.DecorRemapEntry
// Kind: ScriptStruct; super: none
struct FDecorRemapEntry
{
public:
    std::uint8_t OldItemDefinition[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CorrectedItemDefinition[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDecorRemapEntry, OldItemDefinition) == 0, "Offset mismatch for FDecorRemapEntry::OldItemDefinition");
static_assert(offsetof(FDecorRemapEntry, CorrectedItemDefinition) == 8, "Offset mismatch for FDecorRemapEntry::CorrectedItemDefinition");

// /Script/SproutNativeRuntime.DollHouseSpawnerSaveData
// Kind: ScriptStruct; super: none
struct FDollHouseSpawnerSaveData
{
public:
    std::uint8_t bIsLoaded; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t PlayerNetId[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t UniqueNPCTag[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDollHouseSpawnerSaveData, bIsLoaded) == 0, "Offset mismatch for FDollHouseSpawnerSaveData::bIsLoaded");
static_assert(offsetof(FDollHouseSpawnerSaveData, PlayerNetId) == 8, "Offset mismatch for FDollHouseSpawnerSaveData::PlayerNetId");
static_assert(offsetof(FDollHouseSpawnerSaveData, UniqueNPCTag) == 56, "Offset mismatch for FDollHouseSpawnerSaveData::UniqueNPCTag");

// /Script/SproutNativeRuntime.DollHouseTrait
// Kind: ScriptStruct; super: none
struct FDollHouseTrait
{
public:
    std::uint8_t Tag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnableByDefaultOnNewNPCs; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDollHouseTrait, Tag) == 0, "Offset mismatch for FDollHouseTrait::Tag");
static_assert(offsetof(FDollHouseTrait, bEnableByDefaultOnNewNPCs) == 4, "Offset mismatch for FDollHouseTrait::bEnableByDefaultOnNewNPCs");

// /Script/SproutNativeRuntime.HeldItemUsageEntry
// Kind: ScriptStruct; super: none
struct FHeldItemUsageEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.HouseReactionVoteKey
// Kind: ScriptStruct; super: none
struct FHouseReactionVoteKey
{
public:
    std::uint8_t SourcePlayer[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t TargetPlayer[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t HomeId[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FHouseReactionVoteKey, SourcePlayer) == 0, "Offset mismatch for FHouseReactionVoteKey::SourcePlayer");
static_assert(offsetof(FHouseReactionVoteKey, TargetPlayer) == 48, "Offset mismatch for FHouseReactionVoteKey::TargetPlayer");
static_assert(offsetof(FHouseReactionVoteKey, HomeId) == 96, "Offset mismatch for FHouseReactionVoteKey::HomeId");

// /Script/SproutNativeRuntime.LocationEntry
// Kind: ScriptStruct; super: none
struct FLocationEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.LotOwnershipInfo
// Kind: ScriptStruct; super: none
struct FLotOwnershipInfo
{
public:
    std::uint8_t HouseOwnerID[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t bIsNeighborhoodOwned; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    std::uint8_t NeighborhoodSlotSaveId[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLotOwnershipInfo, HouseOwnerID) == 0, "Offset mismatch for FLotOwnershipInfo::HouseOwnerID");
static_assert(offsetof(FLotOwnershipInfo, bIsNeighborhoodOwned) == 48, "Offset mismatch for FLotOwnershipInfo::bIsNeighborhoodOwned");
static_assert(offsetof(FLotOwnershipInfo, NeighborhoodSlotSaveId) == 52, "Offset mismatch for FLotOwnershipInfo::NeighborhoodSlotSaveId");

// /Script/SproutNativeRuntime.ManagedAMUCollection
// Kind: ScriptStruct; super: none
struct FManagedAMUCollection
{
public:
    std::int32_t NumIterationsPerTick; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::int32_t ThresholdRadius; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* DefaultInstance; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FManagedAMUCollection, NumIterationsPerTick) == 0, "Offset mismatch for FManagedAMUCollection::NumIterationsPerTick");
static_assert(offsetof(FManagedAMUCollection, ThresholdRadius) == 8, "Offset mismatch for FManagedAMUCollection::ThresholdRadius");
static_assert(offsetof(FManagedAMUCollection, DefaultInstance) == 16, "Offset mismatch for FManagedAMUCollection::DefaultInstance");

// /Script/SproutNativeRuntime.NeighborhoodHousingSlot
// Kind: ScriptStruct; super: none
struct FNeighborhoodHousingSlot
{
public:
    std::uint8_t SaveSlotID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayerHousingShellID[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t TotalDecorCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSanctioned; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t OwnerID[0x30]; // 0x0020 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> CurrentHousingVolume; // 0x0050 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FNeighborhoodHousingSlot, SaveSlotID) == 0, "Offset mismatch for FNeighborhoodHousingSlot::SaveSlotID");
static_assert(offsetof(FNeighborhoodHousingSlot, PlayerHousingShellID) == 16, "Offset mismatch for FNeighborhoodHousingSlot::PlayerHousingShellID");
static_assert(offsetof(FNeighborhoodHousingSlot, TotalDecorCount) == 20, "Offset mismatch for FNeighborhoodHousingSlot::TotalDecorCount");
static_assert(offsetof(FNeighborhoodHousingSlot, bIsSanctioned) == 24, "Offset mismatch for FNeighborhoodHousingSlot::bIsSanctioned");
static_assert(offsetof(FNeighborhoodHousingSlot, OwnerID) == 32, "Offset mismatch for FNeighborhoodHousingSlot::OwnerID");
static_assert(offsetof(FNeighborhoodHousingSlot, CurrentHousingVolume) == 80, "Offset mismatch for FNeighborhoodHousingSlot::CurrentHousingVolume");

// /Script/SproutNativeRuntime.PlayerHousingClaim
// Kind: ScriptStruct; super: none
struct FPlayerHousingClaim
{
public:
    TWeakObjectPtr<void> CurrentHousingLot; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SaveSlotID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAutoClaim; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayerHousingClaim, CurrentHousingLot) == 0, "Offset mismatch for FPlayerHousingClaim::CurrentHousingLot");
static_assert(offsetof(FPlayerHousingClaim, SaveSlotID) == 8, "Offset mismatch for FPlayerHousingClaim::SaveSlotID");
static_assert(offsetof(FPlayerHousingClaim, bAutoClaim) == 24, "Offset mismatch for FPlayerHousingClaim::bAutoClaim");

// /Script/SproutNativeRuntime.PlayerHousingSlot
// Kind: ScriptStruct; super: none
struct FPlayerHousingSlot
{
public:
    std::uint8_t SaveSlotID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayerHousingShellID[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t TotalDecorCount; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSanctioned; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    std::uint8_t OwningNeighborhood[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPlayerHousingSlot, SaveSlotID) == 0, "Offset mismatch for FPlayerHousingSlot::SaveSlotID");
static_assert(offsetof(FPlayerHousingSlot, PlayerHousingShellID) == 16, "Offset mismatch for FPlayerHousingSlot::PlayerHousingShellID");
static_assert(offsetof(FPlayerHousingSlot, TotalDecorCount) == 20, "Offset mismatch for FPlayerHousingSlot::TotalDecorCount");
static_assert(offsetof(FPlayerHousingSlot, bIsSanctioned) == 24, "Offset mismatch for FPlayerHousingSlot::bIsSanctioned");
static_assert(offsetof(FPlayerHousingSlot, OwningNeighborhood) == 28, "Offset mismatch for FPlayerHousingSlot::OwningNeighborhood");

// /Script/SproutNativeRuntime.ReplicatedJobVolumeData
// Kind: ScriptStruct; super: none
struct FReplicatedJobVolumeData
{
public:
    std::uint8_t JobBounds[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t JobTags[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocationTags[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedJobVolumeData, JobBounds) == 0, "Offset mismatch for FReplicatedJobVolumeData::JobBounds");
static_assert(offsetof(FReplicatedJobVolumeData, JobTags) == 56, "Offset mismatch for FReplicatedJobVolumeData::JobTags");
static_assert(offsetof(FReplicatedJobVolumeData, LocationTags) == 88, "Offset mismatch for FReplicatedJobVolumeData::LocationTags");

// /Script/SproutNativeRuntime.SessionHouseReaction
// Kind: ScriptStruct; super: none
struct FSessionHouseReaction
{
public:
    std::uint8_t TargetPlayer[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t HouseSaveID[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReactionType[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSessionHouseReaction, TargetPlayer) == 0, "Offset mismatch for FSessionHouseReaction::TargetPlayer");
static_assert(offsetof(FSessionHouseReaction, HouseSaveID) == 48, "Offset mismatch for FSessionHouseReaction::HouseSaveID");
static_assert(offsetof(FSessionHouseReaction, ReactionType) == 64, "Offset mismatch for FSessionHouseReaction::ReactionType");

// /Script/SproutNativeRuntime.SproutActionBar
// Kind: ScriptStruct; super: none
struct FSproutActionBar
{
public:
    std::int32_t CurrentRowIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> ActionBarRows; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsActive; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutActionBar, CurrentRowIndex) == 0, "Offset mismatch for FSproutActionBar::CurrentRowIndex");
static_assert(offsetof(FSproutActionBar, ActionBarRows) == 8, "Offset mismatch for FSproutActionBar::ActionBarRows");
static_assert(offsetof(FSproutActionBar, bIsActive) == 24, "Offset mismatch for FSproutActionBar::bIsActive");

// /Script/SproutNativeRuntime.SproutActionBarConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutActionBarConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> ActionBarRows; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutActionBarConfigTableRow, ActionBarRows) == 8, "Offset mismatch for FSproutActionBarConfigTableRow::ActionBarRows");

// /Script/SproutNativeRuntime.SproutActionBarOption
// Kind: ScriptStruct; super: none
struct FSproutActionBarOption
{
public:
    std::uint8_t OptionIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* OptionItem; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutActionBarOption, OptionIdentifier) == 0, "Offset mismatch for FSproutActionBarOption::OptionIdentifier");
static_assert(offsetof(FSproutActionBarOption, OptionItem) == 8, "Offset mismatch for FSproutActionBarOption::OptionItem");

// /Script/SproutNativeRuntime.SproutActionBarOptionConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutActionBarOptionConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t OptionIdentifier[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TSoftObjectPtr<void> OptionItemDefinition; // 0x0010 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutActionBarOptionConfigTableRow, OptionIdentifier) == 8, "Offset mismatch for FSproutActionBarOptionConfigTableRow::OptionIdentifier");
static_assert(offsetof(FSproutActionBarOptionConfigTableRow, OptionItemDefinition) == 16, "Offset mismatch for FSproutActionBarOptionConfigTableRow::OptionItemDefinition");

// /Script/SproutNativeRuntime.SproutActionBarRow
// Kind: ScriptStruct; super: none
struct FSproutActionBarRow
{
public:
    std::int32_t CurrentOptionIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t RowIdentifier[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    TArray<void*> RowOptions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutActionBarRow, CurrentOptionIndex) == 0, "Offset mismatch for FSproutActionBarRow::CurrentOptionIndex");
static_assert(offsetof(FSproutActionBarRow, RowIdentifier) == 4, "Offset mismatch for FSproutActionBarRow::RowIdentifier");
static_assert(offsetof(FSproutActionBarRow, RowOptions) == 8, "Offset mismatch for FSproutActionBarRow::RowOptions");

// /Script/SproutNativeRuntime.SproutActionBarRowConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutActionBarRowConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RowIdentifier[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> RowOptions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutActionBarRowConfigTableRow, RowIdentifier) == 8, "Offset mismatch for FSproutActionBarRowConfigTableRow::RowIdentifier");
static_assert(offsetof(FSproutActionBarRowConfigTableRow, RowOptions) == 16, "Offset mismatch for FSproutActionBarRowConfigTableRow::RowOptions");

// /Script/SproutNativeRuntime.SproutActionBarStateChangeData
// Kind: ScriptStruct; super: none
struct FSproutActionBarStateChangeData
{
public:
    std::uint8_t PreviousRow[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t PreviousOption[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t NewRow[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t NewOption[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutActionBarStateChangeData, PreviousRow) == 0, "Offset mismatch for FSproutActionBarStateChangeData::PreviousRow");
static_assert(offsetof(FSproutActionBarStateChangeData, PreviousOption) == 24, "Offset mismatch for FSproutActionBarStateChangeData::PreviousOption");
static_assert(offsetof(FSproutActionBarStateChangeData, NewRow) == 40, "Offset mismatch for FSproutActionBarStateChangeData::NewRow");
static_assert(offsetof(FSproutActionBarStateChangeData, NewOption) == 64, "Offset mismatch for FSproutActionBarStateChangeData::NewOption");

// /Script/SproutNativeRuntime.SproutActiveEventArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutActiveEventArray
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> Entries; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutActiveEventArray, Entries) == 144, "Offset mismatch for FSproutActiveEventArray::Entries");

// /Script/SproutNativeRuntime.SproutActiveEventEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutActiveEventEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t EventTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t EventState; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::uint8_t EventScheduleRegistryID[0xC]; // 0x0014 (Size: 0xC, Type: StructProperty)
    std::uint8_t EventStartTime[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventEndTime[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t NextEventHandle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutActiveEventEntry, EventTag) == 12, "Offset mismatch for FSproutActiveEventEntry::EventTag");
static_assert(offsetof(FSproutActiveEventEntry, EventState) == 16, "Offset mismatch for FSproutActiveEventEntry::EventState");
static_assert(offsetof(FSproutActiveEventEntry, EventScheduleRegistryID) == 20, "Offset mismatch for FSproutActiveEventEntry::EventScheduleRegistryID");
static_assert(offsetof(FSproutActiveEventEntry, EventStartTime) == 32, "Offset mismatch for FSproutActiveEventEntry::EventStartTime");
static_assert(offsetof(FSproutActiveEventEntry, EventEndTime) == 40, "Offset mismatch for FSproutActiveEventEntry::EventEndTime");
static_assert(offsetof(FSproutActiveEventEntry, NextEventHandle) == 48, "Offset mismatch for FSproutActiveEventEntry::NextEventHandle");

// /Script/SproutNativeRuntime.SproutActiveJobDataEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutActiveJobDataEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t JobTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::int32_t PlayerCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCanGainExperience; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockExperienceUntilInitialTaskIsCompleted; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    TArray<void*> LevelUpRewards; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxJobLevel; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutActiveJobDataEntry, JobTag) == 12, "Offset mismatch for FSproutActiveJobDataEntry::JobTag");
static_assert(offsetof(FSproutActiveJobDataEntry, PlayerCount) == 16, "Offset mismatch for FSproutActiveJobDataEntry::PlayerCount");
static_assert(offsetof(FSproutActiveJobDataEntry, bCanGainExperience) == 20, "Offset mismatch for FSproutActiveJobDataEntry::bCanGainExperience");
static_assert(offsetof(FSproutActiveJobDataEntry, bBlockExperienceUntilInitialTaskIsCompleted) == 21, "Offset mismatch for FSproutActiveJobDataEntry::bBlockExperienceUntilInitialTaskIsCompleted");
static_assert(offsetof(FSproutActiveJobDataEntry, LevelUpRewards) == 24, "Offset mismatch for FSproutActiveJobDataEntry::LevelUpRewards");
static_assert(offsetof(FSproutActiveJobDataEntry, MaxJobLevel) == 40, "Offset mismatch for FSproutActiveJobDataEntry::MaxJobLevel");

// /Script/SproutNativeRuntime.SproutActiveJobDataFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutActiveJobDataFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Owner; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSproutActiveJobDataFastArray, Entries) == 72, "Offset mismatch for FSproutActiveJobDataFastArray::Entries");
static_assert(offsetof(FSproutActiveJobDataFastArray, Owner) == 88, "Offset mismatch for FSproutActiveJobDataFastArray::Owner");

// /Script/SproutNativeRuntime.SproutActiveJobDataLevelRewardsEntry
// Kind: ScriptStruct; super: none
struct FSproutActiveJobDataLevelRewardsEntry
{
public:
    std::int32_t RequiredLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t LootBundleIdentifiers[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutActiveJobDataLevelRewardsEntry, RequiredLevel) == 0, "Offset mismatch for FSproutActiveJobDataLevelRewardsEntry::RequiredLevel");
static_assert(offsetof(FSproutActiveJobDataLevelRewardsEntry, LootBundleIdentifiers) == 8, "Offset mismatch for FSproutActiveJobDataLevelRewardsEntry::LootBundleIdentifiers");

// /Script/SproutNativeRuntime.SproutActivityUpdateTelemetryData
// Kind: ScriptStruct; super: none
struct FSproutActivityUpdateTelemetryData
{
public:
    std::uint8_t ActivityName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float ActivityDurationSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t ActivityID; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutActivityUpdateTelemetryData, ActivityName) == 0, "Offset mismatch for FSproutActivityUpdateTelemetryData::ActivityName");
static_assert(offsetof(FSproutActivityUpdateTelemetryData, ActivityDurationSeconds) == 4, "Offset mismatch for FSproutActivityUpdateTelemetryData::ActivityDurationSeconds");
static_assert(offsetof(FSproutActivityUpdateTelemetryData, ActivityID) == 8, "Offset mismatch for FSproutActivityUpdateTelemetryData::ActivityID");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateAutomaticChange
// Kind: ScriptStruct; super: none
struct FSproutActorComponent_ActivityStateAutomaticChange
{
public:
    std::uint8_t RequiredCondition[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinTimeRange[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxTimeRange[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewState[0x4]; // 0x0078 (Size: 0x4, Type: StructProperty)
    std::uint8_t bResetTimerOnStateReselection; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHiddenChange; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x007E
    float MinTime; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MaxTime; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, RequiredCondition) == 0, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::RequiredCondition");
static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, MinTimeRange) == 40, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::MinTimeRange");
static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, MaxTimeRange) == 80, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::MaxTimeRange");
static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, NewState) == 120, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::NewState");
static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, bResetTimerOnStateReselection) == 124, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::bResetTimerOnStateReselection");
static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, bHiddenChange) == 125, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::bHiddenChange");
static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, MinTime) == 128, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::MinTime");
static_assert(offsetof(FSproutActorComponent_ActivityStateAutomaticChange, MaxTime) == 132, "Offset mismatch for FSproutActorComponent_ActivityStateAutomaticChange::MaxTime");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateCategoryConfiguration
// Kind: ScriptStruct; super: none
struct FSproutActorComponent_ActivityStateCategoryConfiguration
{
public:
    std::uint8_t CategoryTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> PossibleStates; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultState[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t bSavedToPersistentData; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateCategoryConfiguration, CategoryTag) == 0, "Offset mismatch for FSproutActorComponent_ActivityStateCategoryConfiguration::CategoryTag");
static_assert(offsetof(FSproutActorComponent_ActivityStateCategoryConfiguration, PossibleStates) == 8, "Offset mismatch for FSproutActorComponent_ActivityStateCategoryConfiguration::PossibleStates");
static_assert(offsetof(FSproutActorComponent_ActivityStateCategoryConfiguration, DefaultState) == 24, "Offset mismatch for FSproutActorComponent_ActivityStateCategoryConfiguration::DefaultState");
static_assert(offsetof(FSproutActorComponent_ActivityStateCategoryConfiguration, bSavedToPersistentData) == 28, "Offset mismatch for FSproutActorComponent_ActivityStateCategoryConfiguration::bSavedToPersistentData");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateConfiguration
// Kind: ScriptStruct; super: none
struct FSproutActorComponent_ActivityStateConfiguration
{
public:
    std::uint8_t StateTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> EffectsToApply; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AutomaticStateChanges; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CTATags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateConfiguration, StateTag) == 0, "Offset mismatch for FSproutActorComponent_ActivityStateConfiguration::StateTag");
static_assert(offsetof(FSproutActorComponent_ActivityStateConfiguration, EffectsToApply) == 8, "Offset mismatch for FSproutActorComponent_ActivityStateConfiguration::EffectsToApply");
static_assert(offsetof(FSproutActorComponent_ActivityStateConfiguration, AutomaticStateChanges) == 24, "Offset mismatch for FSproutActorComponent_ActivityStateConfiguration::AutomaticStateChanges");
static_assert(offsetof(FSproutActorComponent_ActivityStateConfiguration, CTATags) == 40, "Offset mismatch for FSproutActorComponent_ActivityStateConfiguration::CTATags");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateConfigurationCategoryRuntime
// Kind: ScriptStruct; super: none
struct FSproutActorComponent_ActivityStateConfigurationCategoryRuntime
{
public:
    TArray<void*> AllActiveStatesByCategory; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateConfigurationCategoryRuntime, AllActiveStatesByCategory) == 0, "Offset mismatch for FSproutActorComponent_ActivityStateConfigurationCategoryRuntime::AllActiveStatesByCategory");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateConfigurationRuntime
// Kind: ScriptStruct; super: SproutActorComponent_ActivityStateConfiguration
struct FSproutActorComponent_ActivityStateConfigurationRuntime
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t CategoryTag[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsValid; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    TArray<void*> RunningAutomaticStateChanges; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AppliedEffects; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateConfigurationRuntime, CategoryTag) == 72, "Offset mismatch for FSproutActorComponent_ActivityStateConfigurationRuntime::CategoryTag");
static_assert(offsetof(FSproutActorComponent_ActivityStateConfigurationRuntime, bIsValid) == 76, "Offset mismatch for FSproutActorComponent_ActivityStateConfigurationRuntime::bIsValid");
static_assert(offsetof(FSproutActorComponent_ActivityStateConfigurationRuntime, RunningAutomaticStateChanges) == 80, "Offset mismatch for FSproutActorComponent_ActivityStateConfigurationRuntime::RunningAutomaticStateChanges");
static_assert(offsetof(FSproutActorComponent_ActivityStateConfigurationRuntime, AppliedEffects) == 96, "Offset mismatch for FSproutActorComponent_ActivityStateConfigurationRuntime::AppliedEffects");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateEffect
// Kind: ScriptStruct; super: none
struct FSproutActorComponent_ActivityStateEffect
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateEffect_GameplayCue
// Kind: ScriptStruct; super: SproutActorComponent_ActivityStateEffect
struct FSproutActorComponent_ActivityStateEffect_GameplayCue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t GameplayCueTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsPersistent; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetTargetAttachComponentToMesh; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_GameplayCue, GameplayCueTag) == 8, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_GameplayCue::GameplayCueTag");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_GameplayCue, bIsPersistent) == 12, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_GameplayCue::bIsPersistent");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_GameplayCue, bSetTargetAttachComponentToMesh) == 13, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_GameplayCue::bSetTargetAttachComponentToMesh");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateEffect_LFNColor
// Kind: ScriptStruct; super: SproutActorComponent_ActivityStateEffect
struct FSproutActorComponent_ActivityStateEffect_LFNColor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ColorLUTAtlas; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ColorLUTTexture; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* PreviousColorLUTAtlas; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* PreviousColorLUTTexture; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PreviousColorComponent; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_LFNColor, ColorLUTAtlas) == 8, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_LFNColor::ColorLUTAtlas");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_LFNColor, ColorLUTTexture) == 16, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_LFNColor::ColorLUTTexture");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_LFNColor, PreviousColorLUTAtlas) == 24, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_LFNColor::PreviousColorLUTAtlas");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_LFNColor, PreviousColorLUTTexture) == 32, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_LFNColor::PreviousColorLUTTexture");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_LFNColor, PreviousColorComponent) == 40, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_LFNColor::PreviousColorComponent");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityStateEffect_Mesh
// Kind: ScriptStruct; super: SproutActorComponent_ActivityStateEffect
struct FSproutActorComponent_ActivityStateEffect_Mesh
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* MeshToApply; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ComponentTag[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t bHasFetchedPreviousMesh; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    void* PreviousMesh; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> PreviousMeshComponent; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_Mesh, MeshToApply) == 8, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_Mesh::MeshToApply");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_Mesh, ComponentTag) == 16, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_Mesh::ComponentTag");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_Mesh, bHasFetchedPreviousMesh) == 20, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_Mesh::bHasFetchedPreviousMesh");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_Mesh, PreviousMesh) == 24, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_Mesh::PreviousMesh");
static_assert(offsetof(FSproutActorComponent_ActivityStateEffect_Mesh, PreviousMeshComponent) == 32, "Offset mismatch for FSproutActorComponent_ActivityStateEffect_Mesh::PreviousMeshComponent");

// /Script/SproutNativeRuntime.SproutActorComponent_PersistentStateData
// Kind: ScriptStruct; super: none
struct FSproutActorComponent_PersistentStateData
{
public:
    std::uint8_t CategoryTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t StateTag[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutActorComponent_PersistentStateData, CategoryTag) == 0, "Offset mismatch for FSproutActorComponent_PersistentStateData::CategoryTag");
static_assert(offsetof(FSproutActorComponent_PersistentStateData, StateTag) == 4, "Offset mismatch for FSproutActorComponent_PersistentStateData::StateTag");

// /Script/SproutNativeRuntime.SproutActorComponent_RunningAutomaticStateChange
// Kind: ScriptStruct; super: none
struct FSproutActorComponent_RunningAutomaticStateChange
{
public:
    float StartTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TimerHandle[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bHiddenChange; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t RequireConditionQueryState[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutActorComponent_RunningAutomaticStateChange, StartTime) == 0, "Offset mismatch for FSproutActorComponent_RunningAutomaticStateChange::StartTime");
static_assert(offsetof(FSproutActorComponent_RunningAutomaticStateChange, EndTime) == 4, "Offset mismatch for FSproutActorComponent_RunningAutomaticStateChange::EndTime");
static_assert(offsetof(FSproutActorComponent_RunningAutomaticStateChange, TimerHandle) == 8, "Offset mismatch for FSproutActorComponent_RunningAutomaticStateChange::TimerHandle");
static_assert(offsetof(FSproutActorComponent_RunningAutomaticStateChange, bHiddenChange) == 16, "Offset mismatch for FSproutActorComponent_RunningAutomaticStateChange::bHiddenChange");
static_assert(offsetof(FSproutActorComponent_RunningAutomaticStateChange, RequireConditionQueryState) == 24, "Offset mismatch for FSproutActorComponent_RunningAutomaticStateChange::RequireConditionQueryState");

// /Script/SproutNativeRuntime.SproutActorSpawnerDataBase
// Kind: ScriptStruct; super: TableRowBase
struct FSproutActorSpawnerDataBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t ActorClass[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t LocationTag[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t DescriptiveTags[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t SmallestCompatibleSize; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LargestCompatibleSize; // 0x0059 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x005A
    std::uint8_t OptionalItemDefinition[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    float Weight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PlacementTag[0x4]; // 0x0084 (Size: 0x4, Type: StructProperty)
    std::uint8_t RequiredEventTags[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredEventTagsProcessingBehavior; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00A9
    std::uint8_t ExcludedEventTags[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutActorSpawnerDataBase, bEnabled) == 8, "Offset mismatch for FSproutActorSpawnerDataBase::bEnabled");
static_assert(offsetof(FSproutActorSpawnerDataBase, ActorClass) == 16, "Offset mismatch for FSproutActorSpawnerDataBase::ActorClass");
static_assert(offsetof(FSproutActorSpawnerDataBase, LocationTag) == 48, "Offset mismatch for FSproutActorSpawnerDataBase::LocationTag");
static_assert(offsetof(FSproutActorSpawnerDataBase, DescriptiveTags) == 56, "Offset mismatch for FSproutActorSpawnerDataBase::DescriptiveTags");
static_assert(offsetof(FSproutActorSpawnerDataBase, SmallestCompatibleSize) == 88, "Offset mismatch for FSproutActorSpawnerDataBase::SmallestCompatibleSize");
static_assert(offsetof(FSproutActorSpawnerDataBase, LargestCompatibleSize) == 89, "Offset mismatch for FSproutActorSpawnerDataBase::LargestCompatibleSize");
static_assert(offsetof(FSproutActorSpawnerDataBase, OptionalItemDefinition) == 96, "Offset mismatch for FSproutActorSpawnerDataBase::OptionalItemDefinition");
static_assert(offsetof(FSproutActorSpawnerDataBase, Weight) == 128, "Offset mismatch for FSproutActorSpawnerDataBase::Weight");
static_assert(offsetof(FSproutActorSpawnerDataBase, PlacementTag) == 132, "Offset mismatch for FSproutActorSpawnerDataBase::PlacementTag");
static_assert(offsetof(FSproutActorSpawnerDataBase, RequiredEventTags) == 136, "Offset mismatch for FSproutActorSpawnerDataBase::RequiredEventTags");
static_assert(offsetof(FSproutActorSpawnerDataBase, RequiredEventTagsProcessingBehavior) == 168, "Offset mismatch for FSproutActorSpawnerDataBase::RequiredEventTagsProcessingBehavior");
static_assert(offsetof(FSproutActorSpawnerDataBase, ExcludedEventTags) == 176, "Offset mismatch for FSproutActorSpawnerDataBase::ExcludedEventTags");

// /Script/SproutNativeRuntime.SproutActorSpawnerData_Furniture
// Kind: ScriptStruct; super: SproutActorSpawnerDataBase
struct FSproutActorSpawnerData_Furniture
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FString Category; // 0x00D0 (Size: 0x10, Type: StrProperty)
    std::int32_t Price; // 0x00E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOnSale; // 0x00E4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutActorSpawnerData_Furniture, Category) == 208, "Offset mismatch for FSproutActorSpawnerData_Furniture::Category");
static_assert(offsetof(FSproutActorSpawnerData_Furniture, Price) == 224, "Offset mismatch for FSproutActorSpawnerData_Furniture::Price");
static_assert(offsetof(FSproutActorSpawnerData_Furniture, bOnSale) == 228, "Offset mismatch for FSproutActorSpawnerData_Furniture::bOnSale");

// /Script/SproutNativeRuntime.SproutActorSpawnerEntry
// Kind: ScriptStruct; super: none
struct FSproutActorSpawnerEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutActorSpawnerRegistryEntry
// Kind: ScriptStruct; super: none
struct FSproutActorSpawnerRegistryEntry
{
public:
    FName RegistryName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSproutActorSpawnerRegistryEntry, RegistryName) == 0, "Offset mismatch for FSproutActorSpawnerRegistryEntry::RegistryName");

// /Script/SproutNativeRuntime.SproutActorSpawnerSpawnEntry
// Kind: ScriptStruct; super: none
struct FSproutActorSpawnerSpawnEntry
{
public:
    std::uint8_t RegistryID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SoftClassPtr[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    TWeakObjectPtr<void> TargetSpawner; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSproutActorSpawnerSpawnEntry, RegistryID) == 0, "Offset mismatch for FSproutActorSpawnerSpawnEntry::RegistryID");
static_assert(offsetof(FSproutActorSpawnerSpawnEntry, SoftClassPtr) == 8, "Offset mismatch for FSproutActorSpawnerSpawnEntry::SoftClassPtr");
static_assert(offsetof(FSproutActorSpawnerSpawnEntry, TargetSpawner) == 40, "Offset mismatch for FSproutActorSpawnerSpawnEntry::TargetSpawner");

// /Script/SproutNativeRuntime.SproutAllRequestsPerCategory
// Kind: ScriptStruct; super: none
struct FSproutAllRequestsPerCategory
{
public:
    std::uint8_t CategoryTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> AllRequests; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutAllRequestsPerCategory, CategoryTag) == 0, "Offset mismatch for FSproutAllRequestsPerCategory::CategoryTag");
static_assert(offsetof(FSproutAllRequestsPerCategory, AllRequests) == 8, "Offset mismatch for FSproutAllRequestsPerCategory::AllRequests");

// /Script/SproutNativeRuntime.SproutAnimalCarePetState
// Kind: ScriptStruct; super: none
struct FSproutAnimalCarePetState
{
public:
    float CurrentPetValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CurrentPettingCooldown; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TArray<void*> PettingThresholds; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentPetQuality[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsActive; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutAnimalCarePetState, CurrentPetValue) == 0, "Offset mismatch for FSproutAnimalCarePetState::CurrentPetValue");
static_assert(offsetof(FSproutAnimalCarePetState, CurrentPettingCooldown) == 4, "Offset mismatch for FSproutAnimalCarePetState::CurrentPettingCooldown");
static_assert(offsetof(FSproutAnimalCarePetState, PettingThresholds) == 8, "Offset mismatch for FSproutAnimalCarePetState::PettingThresholds");
static_assert(offsetof(FSproutAnimalCarePetState, CurrentPetQuality) == 24, "Offset mismatch for FSproutAnimalCarePetState::CurrentPetQuality");
static_assert(offsetof(FSproutAnimalCarePetState, bIsActive) == 28, "Offset mismatch for FSproutAnimalCarePetState::bIsActive");

// /Script/SproutNativeRuntime.SproutAutomaticRequestRerollCondition
// Kind: ScriptStruct; super: none
struct FSproutAutomaticRequestRerollCondition
{
public:
    std::uint8_t MinPlayersInArea[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxPlayersInArea[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAutomaticRequestedInArea[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAutomaticRequestedInArea[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollPercentage[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutAutomaticRequestRerollCondition, MinPlayersInArea) == 0, "Offset mismatch for FSproutAutomaticRequestRerollCondition::MinPlayersInArea");
static_assert(offsetof(FSproutAutomaticRequestRerollCondition, MaxPlayersInArea) == 40, "Offset mismatch for FSproutAutomaticRequestRerollCondition::MaxPlayersInArea");
static_assert(offsetof(FSproutAutomaticRequestRerollCondition, MinAutomaticRequestedInArea) == 80, "Offset mismatch for FSproutAutomaticRequestRerollCondition::MinAutomaticRequestedInArea");
static_assert(offsetof(FSproutAutomaticRequestRerollCondition, MaxAutomaticRequestedInArea) == 120, "Offset mismatch for FSproutAutomaticRequestRerollCondition::MaxAutomaticRequestedInArea");
static_assert(offsetof(FSproutAutomaticRequestRerollCondition, RollPercentage) == 160, "Offset mismatch for FSproutAutomaticRequestRerollCondition::RollPercentage");

// /Script/SproutNativeRuntime.SproutBountyBoardConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutBountyBoardConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ActiveDailyTaskAmount[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t DailyTaskPool[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActiveEventTaskAmount[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t EventTaskPool[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t BountyClaimVerbTag[0x4]; // 0x0098 (Size: 0x4, Type: StructProperty)
    std::uint8_t BountyClaimAllVerbTag[0x1]; // 0x009C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutBountyBoardConfigTableRow, ActiveDailyTaskAmount) == 8, "Offset mismatch for FSproutBountyBoardConfigTableRow::ActiveDailyTaskAmount");
static_assert(offsetof(FSproutBountyBoardConfigTableRow, DailyTaskPool) == 48, "Offset mismatch for FSproutBountyBoardConfigTableRow::DailyTaskPool");
static_assert(offsetof(FSproutBountyBoardConfigTableRow, ActiveEventTaskAmount) == 80, "Offset mismatch for FSproutBountyBoardConfigTableRow::ActiveEventTaskAmount");
static_assert(offsetof(FSproutBountyBoardConfigTableRow, EventTaskPool) == 120, "Offset mismatch for FSproutBountyBoardConfigTableRow::EventTaskPool");
static_assert(offsetof(FSproutBountyBoardConfigTableRow, BountyClaimVerbTag) == 152, "Offset mismatch for FSproutBountyBoardConfigTableRow::BountyClaimVerbTag");
static_assert(offsetof(FSproutBountyBoardConfigTableRow, BountyClaimAllVerbTag) == 156, "Offset mismatch for FSproutBountyBoardConfigTableRow::BountyClaimAllVerbTag");

// /Script/SproutNativeRuntime.SproutBountyUpdateTelemetryData
// Kind: ScriptStruct; super: none
struct FSproutBountyUpdateTelemetryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutCTARewardsTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutCTARewardsTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CTATags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t LootBundleTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutCTARewardsTableRow, CTATags) == 8, "Offset mismatch for FSproutCTARewardsTableRow::CTATags");
static_assert(offsetof(FSproutCTARewardsTableRow, LootBundleTags) == 40, "Offset mismatch for FSproutCTARewardsTableRow::LootBundleTags");

// /Script/SproutNativeRuntime.SproutCinematicConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutCinematicConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CinematicLevelSequence[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsCinematicEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t HasBeenViewed_PersistenceEventTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    std::uint8_t TagsToApplyToPlayerMidCinematic[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutCinematicConfigTableRow, CinematicLevelSequence) == 8, "Offset mismatch for FSproutCinematicConfigTableRow::CinematicLevelSequence");
static_assert(offsetof(FSproutCinematicConfigTableRow, bIsCinematicEnabled) == 40, "Offset mismatch for FSproutCinematicConfigTableRow::bIsCinematicEnabled");
static_assert(offsetof(FSproutCinematicConfigTableRow, HasBeenViewed_PersistenceEventTag) == 44, "Offset mismatch for FSproutCinematicConfigTableRow::HasBeenViewed_PersistenceEventTag");
static_assert(offsetof(FSproutCinematicConfigTableRow, TagsToApplyToPlayerMidCinematic) == 48, "Offset mismatch for FSproutCinematicConfigTableRow::TagsToApplyToPlayerMidCinematic");

// /Script/SproutNativeRuntime.SproutCinematicRelevencyTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutCinematicRelevencyTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftClassPtr<void> ActorClassToHide; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FSproutCinematicRelevencyTableRow, ActorClassToHide) == 8, "Offset mismatch for FSproutCinematicRelevencyTableRow::ActorClassToHide");

// /Script/SproutNativeRuntime.SproutCollectionItem
// Kind: ScriptStruct; super: none
struct FSproutCollectionItem
{
public:
    std::uint8_t ItemID[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsCollected; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Rarity; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsNew; // 0x0006 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutCollectionItem, ItemID) == 0, "Offset mismatch for FSproutCollectionItem::ItemID");
static_assert(offsetof(FSproutCollectionItem, bIsCollected) == 4, "Offset mismatch for FSproutCollectionItem::bIsCollected");
static_assert(offsetof(FSproutCollectionItem, Rarity) == 5, "Offset mismatch for FSproutCollectionItem::Rarity");
static_assert(offsetof(FSproutCollectionItem, bIsNew) == 6, "Offset mismatch for FSproutCollectionItem::bIsNew");

// /Script/SproutNativeRuntime.SproutCollectionUpdateTelemetryData
// Kind: ScriptStruct; super: none
struct FSproutCollectionUpdateTelemetryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutCollectionUpdatedMessage
// Kind: ScriptStruct; super: none
struct FSproutCollectionUpdatedMessage
{
public:
    TArray<void*> UpdatedItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Component; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSproutCollectionUpdatedMessage, UpdatedItems) == 0, "Offset mismatch for FSproutCollectionUpdatedMessage::UpdatedItems");
static_assert(offsetof(FSproutCollectionUpdatedMessage, Component) == 16, "Offset mismatch for FSproutCollectionUpdatedMessage::Component");

// /Script/SproutNativeRuntime.SproutCollectionsCategoryTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutCollectionsCategoryTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CategoryTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DetailsPanelWidget[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    std::int32_t SortOrder; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0064
    std::uint8_t DiscoverMoreHint[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t bShouldShowDescription; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutCollectionsCategoryTableRow, CategoryTag) == 8, "Offset mismatch for FSproutCollectionsCategoryTableRow::CategoryTag");
static_assert(offsetof(FSproutCollectionsCategoryTableRow, DisplayName) == 16, "Offset mismatch for FSproutCollectionsCategoryTableRow::DisplayName");
static_assert(offsetof(FSproutCollectionsCategoryTableRow, Icon) == 32, "Offset mismatch for FSproutCollectionsCategoryTableRow::Icon");
static_assert(offsetof(FSproutCollectionsCategoryTableRow, DetailsPanelWidget) == 64, "Offset mismatch for FSproutCollectionsCategoryTableRow::DetailsPanelWidget");
static_assert(offsetof(FSproutCollectionsCategoryTableRow, SortOrder) == 96, "Offset mismatch for FSproutCollectionsCategoryTableRow::SortOrder");
static_assert(offsetof(FSproutCollectionsCategoryTableRow, DiscoverMoreHint) == 104, "Offset mismatch for FSproutCollectionsCategoryTableRow::DiscoverMoreHint");
static_assert(offsetof(FSproutCollectionsCategoryTableRow, bShouldShowDescription) == 120, "Offset mismatch for FSproutCollectionsCategoryTableRow::bShouldShowDescription");

// /Script/SproutNativeRuntime.SproutCollectionsFastArray
// Kind: ScriptStruct; super: IrisFastArraySerializer
struct FSproutCollectionsFastArray
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> Entries; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComp; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSproutCollectionsFastArray, Entries) == 96, "Offset mismatch for FSproutCollectionsFastArray::Entries");
static_assert(offsetof(FSproutCollectionsFastArray, ParentComp) == 112, "Offset mismatch for FSproutCollectionsFastArray::ParentComp");

// /Script/SproutNativeRuntime.SproutCollectionsFastArrayItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutCollectionsFastArrayItem
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t CollectionItem[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutCollectionsFastArrayItem, CollectionItem) == 12, "Offset mismatch for FSproutCollectionsFastArrayItem::CollectionItem");

// /Script/SproutNativeRuntime.SproutCollectionsItemTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutCollectionsItemTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t CategoryTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargeImage[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargeImageUnknown[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Description[0x10]; // 0x0080 (Size: 0x10, Type: TextProperty)
    std::uint8_t DescriptionUnknown[0x10]; // 0x0090 (Size: 0x10, Type: TextProperty)
    std::uint8_t SourceLocations[0x20]; // 0x00A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t SourceEvents[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ItemSpecificTags[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    TArray<void*> UnlockedByItems; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutCollectionsItemTableRow, CategoryTag) == 8, "Offset mismatch for FSproutCollectionsItemTableRow::CategoryTag");
static_assert(offsetof(FSproutCollectionsItemTableRow, DisplayName) == 16, "Offset mismatch for FSproutCollectionsItemTableRow::DisplayName");
static_assert(offsetof(FSproutCollectionsItemTableRow, Icon) == 32, "Offset mismatch for FSproutCollectionsItemTableRow::Icon");
static_assert(offsetof(FSproutCollectionsItemTableRow, LargeImage) == 64, "Offset mismatch for FSproutCollectionsItemTableRow::LargeImage");
static_assert(offsetof(FSproutCollectionsItemTableRow, LargeImageUnknown) == 96, "Offset mismatch for FSproutCollectionsItemTableRow::LargeImageUnknown");
static_assert(offsetof(FSproutCollectionsItemTableRow, Description) == 128, "Offset mismatch for FSproutCollectionsItemTableRow::Description");
static_assert(offsetof(FSproutCollectionsItemTableRow, DescriptionUnknown) == 144, "Offset mismatch for FSproutCollectionsItemTableRow::DescriptionUnknown");
static_assert(offsetof(FSproutCollectionsItemTableRow, SourceLocations) == 160, "Offset mismatch for FSproutCollectionsItemTableRow::SourceLocations");
static_assert(offsetof(FSproutCollectionsItemTableRow, SourceEvents) == 192, "Offset mismatch for FSproutCollectionsItemTableRow::SourceEvents");
static_assert(offsetof(FSproutCollectionsItemTableRow, ItemSpecificTags) == 224, "Offset mismatch for FSproutCollectionsItemTableRow::ItemSpecificTags");
static_assert(offsetof(FSproutCollectionsItemTableRow, UnlockedByItems) == 256, "Offset mismatch for FSproutCollectionsItemTableRow::UnlockedByItems");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_SellOrGiftHandheldMemory
// Kind: ScriptStruct; super: none
struct FSproutConversationTaskNode_SellOrGiftHandheldMemory
{
public:
    TWeakObjectPtr<void> HandheldRuntimeItem; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t HandheldItem[0x98]; // 0x0008 (Size: 0x98, Type: StructProperty)
    std::int32_t CTACredsForOne; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x00A4
    std::uint8_t CTATags[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheldMemory, HandheldRuntimeItem) == 0, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheldMemory::HandheldRuntimeItem");
static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheldMemory, HandheldItem) == 8, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheldMemory::HandheldItem");
static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheldMemory, CTACredsForOne) == 160, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheldMemory::CTACredsForOne");
static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheldMemory, CTATags) == 168, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheldMemory::CTATags");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_SellOrGiftHandheld_MappingRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutConversationTaskNode_SellOrGiftHandheld_MappingRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Conditions[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    TArray<void*> PossibleItems; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheld_MappingRow, Conditions) == 8, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheld_MappingRow::Conditions");
static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheld_MappingRow, PossibleItems) == 48, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheld_MappingRow::PossibleItems");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_SellOrGiftHandheld_SingleElement
// Kind: ScriptStruct; super: none
struct FSproutConversationTaskNode_SellOrGiftHandheld_SingleElement
{
public:
    std::uint8_t ItemTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t CTATags[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheld_SingleElement, ItemTagQuery) == 0, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheld_SingleElement::ItemTagQuery");
static_assert(offsetof(FSproutConversationTaskNode_SellOrGiftHandheld_SingleElement, CTATags) == 72, "Offset mismatch for FSproutConversationTaskNode_SellOrGiftHandheld_SingleElement::CTATags");

// /Script/SproutNativeRuntime.SproutDollHouseCachedWordKitPromptsPerIdentifier
// Kind: ScriptStruct; super: none
struct FSproutDollHouseCachedWordKitPromptsPerIdentifier
{
public:
    std::uint8_t Identifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Prompts; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseCachedWordKitPromptsPerIdentifier, Identifier) == 0, "Offset mismatch for FSproutDollHouseCachedWordKitPromptsPerIdentifier::Identifier");
static_assert(offsetof(FSproutDollHouseCachedWordKitPromptsPerIdentifier, Prompts) == 8, "Offset mismatch for FSproutDollHouseCachedWordKitPromptsPerIdentifier::Prompts");

// /Script/SproutNativeRuntime.SproutDollHouseOptionsRuntimeNPCWordKitVariable
// Kind: ScriptStruct; super: none
struct FSproutDollHouseOptionsRuntimeNPCWordKitVariable
{
public:
    std::uint8_t Identifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t PickedIdentifier[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    TArray<void*> PickedOptions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseOptionsRuntimeNPCWordKitVariable, Identifier) == 0, "Offset mismatch for FSproutDollHouseOptionsRuntimeNPCWordKitVariable::Identifier");
static_assert(offsetof(FSproutDollHouseOptionsRuntimeNPCWordKitVariable, PickedIdentifier) == 4, "Offset mismatch for FSproutDollHouseOptionsRuntimeNPCWordKitVariable::PickedIdentifier");
static_assert(offsetof(FSproutDollHouseOptionsRuntimeNPCWordKitVariable, PickedOptions) == 8, "Offset mismatch for FSproutDollHouseOptionsRuntimeNPCWordKitVariable::PickedOptions");

// /Script/SproutNativeRuntime.SproutDollHouseOptionsRuntimeSingleNPCWordKitOptionsBlock
// Kind: ScriptStruct; super: none
struct FSproutDollHouseOptionsRuntimeSingleNPCWordKitOptionsBlock
{
public:
    std::uint8_t Identifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t PickedOptionIdentifier[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutDollHouseOptionsRuntimeSingleNPCWordKitOptionsBlock, Identifier) == 0, "Offset mismatch for FSproutDollHouseOptionsRuntimeSingleNPCWordKitOptionsBlock::Identifier");
static_assert(offsetof(FSproutDollHouseOptionsRuntimeSingleNPCWordKitOptionsBlock, PickedOptionIdentifier) == 4, "Offset mismatch for FSproutDollHouseOptionsRuntimeSingleNPCWordKitOptionsBlock::PickedOptionIdentifier");

// /Script/SproutNativeRuntime.SproutDollHouseSaveDataPerPlayer
// Kind: ScriptStruct; super: none
struct FSproutDollHouseSaveDataPerPlayer
{
public:
    std::uint8_t UniquePlayerId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SaveData[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    TArray<void*> CachedGeneratedWordKitPromptsPerIdentifier; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseSaveDataPerPlayer, UniquePlayerId) == 0, "Offset mismatch for FSproutDollHouseSaveDataPerPlayer::UniquePlayerId");
static_assert(offsetof(FSproutDollHouseSaveDataPerPlayer, SaveData) == 48, "Offset mismatch for FSproutDollHouseSaveDataPerPlayer::SaveData");
static_assert(offsetof(FSproutDollHouseSaveDataPerPlayer, CachedGeneratedWordKitPromptsPerIdentifier) == 64, "Offset mismatch for FSproutDollHouseSaveDataPerPlayer::CachedGeneratedWordKitPromptsPerIdentifier");

// /Script/SproutNativeRuntime.SproutDollHouseSaveDataSingleNPC
// Kind: ScriptStruct; super: none
struct FSproutDollHouseSaveDataSingleNPC
{
public:
    std::uint8_t UniqueTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bShouldSpawn; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t BaseCIDPrimaryAssetId[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TArray<void*> Traits; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    FString Summary; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t bHasStaleSummary; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t Name[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t SpeechPattern[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t bLLMEnabled; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    std::uint8_t PersonalityType[0x4]; // 0x0050 (Size: 0x4, Type: StructProperty)
    std::uint8_t PersonalityTrait[0x4]; // 0x0054 (Size: 0x4, Type: StructProperty)
    std::uint8_t Flaw[0x4]; // 0x0058 (Size: 0x4, Type: StructProperty)
    std::uint8_t Role[0x4]; // 0x005C (Size: 0x4, Type: StructProperty)
    std::uint8_t Voice[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoiceModifiers[0x1C]; // 0x0064 (Size: 0x1C, Type: StructProperty)
    TArray<void*> WordKitVariables; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, UniqueTag) == 0, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::UniqueTag");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, bShouldSpawn) == 4, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::bShouldSpawn");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, BaseCIDPrimaryAssetId) == 8, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::BaseCIDPrimaryAssetId");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, Traits) == 16, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::Traits");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, Summary) == 32, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::Summary");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, bHasStaleSummary) == 48, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::bHasStaleSummary");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, Name) == 56, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::Name");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, SpeechPattern) == 72, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::SpeechPattern");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, bLLMEnabled) == 76, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::bLLMEnabled");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, PersonalityType) == 80, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::PersonalityType");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, PersonalityTrait) == 84, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::PersonalityTrait");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, Flaw) == 88, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::Flaw");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, Role) == 92, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::Role");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, Voice) == 96, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::Voice");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, VoiceModifiers) == 100, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::VoiceModifiers");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPC, WordKitVariables) == 128, "Offset mismatch for FSproutDollHouseSaveDataSingleNPC::WordKitVariables");

// /Script/SproutNativeRuntime.SproutDollHouseSaveDataSingleNPCWordKitOptionsBlock
// Kind: ScriptStruct; super: none
struct FSproutDollHouseSaveDataSingleNPCWordKitOptionsBlock
{
public:
    std::uint8_t Identifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t PickedOptionIdentifier[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutDollHouseSaveDataSingleNPCWordKitOptionsBlock, Identifier) == 0, "Offset mismatch for FSproutDollHouseSaveDataSingleNPCWordKitOptionsBlock::Identifier");
static_assert(offsetof(FSproutDollHouseSaveDataSingleNPCWordKitOptionsBlock, PickedOptionIdentifier) == 4, "Offset mismatch for FSproutDollHouseSaveDataSingleNPCWordKitOptionsBlock::PickedOptionIdentifier");

// /Script/SproutNativeRuntime.SproutDollHouseSaveDataWordKitVariable
// Kind: ScriptStruct; super: none
struct FSproutDollHouseSaveDataWordKitVariable
{
public:
    std::uint8_t Identifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t PickedIdentifier[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    TArray<void*> PickedOptions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseSaveDataWordKitVariable, Identifier) == 0, "Offset mismatch for FSproutDollHouseSaveDataWordKitVariable::Identifier");
static_assert(offsetof(FSproutDollHouseSaveDataWordKitVariable, PickedIdentifier) == 4, "Offset mismatch for FSproutDollHouseSaveDataWordKitVariable::PickedIdentifier");
static_assert(offsetof(FSproutDollHouseSaveDataWordKitVariable, PickedOptions) == 8, "Offset mismatch for FSproutDollHouseSaveDataWordKitVariable::PickedOptions");

// /Script/SproutNativeRuntime.SproutDollHouseSlotConfigurationOptions
// Kind: ScriptStruct; super: TableRowBase
struct FSproutDollHouseSlotConfigurationOptions
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bFixInvalidData; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    TArray<void*> PossibleNPCTags; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InitializationStyle; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0021
    TArray<void*> Traits; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SummaryPromptTypeIdentifier[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t AutomaticName[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    TArray<void*> Names; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SpeechPatterns; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanEnableLLM; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0071
    TArray<void*> PersonalityTypes; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PersonalityTraits; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Flaws; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Roles; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Voices; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VoiceModifiersConfiguration[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    TArray<void*> WordKitVariables; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VoiceAudioFormat; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VoiceAudioModel; // 0x00F1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x6]; // 0x00F2
    std::uint8_t VoiceStreamingConfig[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    TArray<void*> DeniedCIDs; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, bFixInvalidData) == 8, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::bFixInvalidData");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, PossibleNPCTags) == 16, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::PossibleNPCTags");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, InitializationStyle) == 32, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::InitializationStyle");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, Traits) == 40, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::Traits");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, SummaryPromptTypeIdentifier) == 56, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::SummaryPromptTypeIdentifier");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, AutomaticName) == 64, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::AutomaticName");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, Names) == 80, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::Names");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, SpeechPatterns) == 96, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::SpeechPatterns");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, bCanEnableLLM) == 112, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::bCanEnableLLM");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, PersonalityTypes) == 120, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::PersonalityTypes");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, PersonalityTraits) == 136, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::PersonalityTraits");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, Flaws) == 152, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::Flaws");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, Roles) == 168, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::Roles");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, Voices) == 184, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::Voices");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, VoiceModifiersConfiguration) == 200, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::VoiceModifiersConfiguration");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, WordKitVariables) == 224, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::WordKitVariables");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, VoiceAudioFormat) == 240, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::VoiceAudioFormat");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, VoiceAudioModel) == 241, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::VoiceAudioModel");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, VoiceStreamingConfig) == 248, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::VoiceStreamingConfig");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptions, DeniedCIDs) == 272, "Offset mismatch for FSproutDollHouseSlotConfigurationOptions::DeniedCIDs");

// /Script/SproutNativeRuntime.SproutDollHouseSlotConfigurationOptionsRuntime
// Kind: ScriptStruct; super: none
struct FSproutDollHouseSlotConfigurationOptionsRuntime
{
public:
    TArray<void*> Traits; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FString Summary; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bHasStaleSummary; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    std::uint8_t Name[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t SpeechPattern[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t bLLMEnabled; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x003D
    std::uint8_t PersonalityType[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t PersonalityTrait[0x4]; // 0x0044 (Size: 0x4, Type: StructProperty)
    std::uint8_t Flaw[0x4]; // 0x0048 (Size: 0x4, Type: StructProperty)
    std::uint8_t Role[0x4]; // 0x004C (Size: 0x4, Type: StructProperty)
    std::uint8_t Voice[0x4]; // 0x0050 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoiceModifiers[0x1C]; // 0x0054 (Size: 0x1C, Type: StructProperty)
    TArray<void*> WordKitVariables; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, Traits) == 0, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::Traits");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, Summary) == 16, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::Summary");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, bHasStaleSummary) == 32, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::bHasStaleSummary");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, Name) == 40, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::Name");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, SpeechPattern) == 56, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::SpeechPattern");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, bLLMEnabled) == 60, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::bLLMEnabled");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, PersonalityType) == 64, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::PersonalityType");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, PersonalityTrait) == 68, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::PersonalityTrait");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, Flaw) == 72, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::Flaw");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, Role) == 76, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::Role");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, Voice) == 80, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::Voice");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, VoiceModifiers) == 84, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::VoiceModifiers");
static_assert(offsetof(FSproutDollHouseSlotConfigurationOptionsRuntime, WordKitVariables) == 112, "Offset mismatch for FSproutDollHouseSlotConfigurationOptionsRuntime::WordKitVariables");

// /Script/SproutNativeRuntime.SproutDollHouseVoiceConfiguration
// Kind: ScriptStruct; super: none
struct FSproutDollHouseVoiceConfiguration
{
public:
    std::uint8_t Identifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t Voice[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutDollHouseVoiceConfiguration, Identifier) == 0, "Offset mismatch for FSproutDollHouseVoiceConfiguration::Identifier");
static_assert(offsetof(FSproutDollHouseVoiceConfiguration, Voice) == 4, "Offset mismatch for FSproutDollHouseVoiceConfiguration::Voice");

// /Script/SproutNativeRuntime.SproutDollHouseVoiceModifiers
// Kind: ScriptStruct; super: none
struct FSproutDollHouseVoiceModifiers
{
public:
    std::uint8_t bEnablePlaybackVolumeMultiplierOverride; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float PlaybackVolumeMultiplierOverride; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnablePlaybackPitchOverride; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float PlaybackPitchOverride; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableSpeedOverride; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0011
    float SpeedOverride; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutDollHouseVoiceModifiers, bEnablePlaybackVolumeMultiplierOverride) == 0, "Offset mismatch for FSproutDollHouseVoiceModifiers::bEnablePlaybackVolumeMultiplierOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiers, PlaybackVolumeMultiplierOverride) == 4, "Offset mismatch for FSproutDollHouseVoiceModifiers::PlaybackVolumeMultiplierOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiers, bEnablePlaybackPitchOverride) == 8, "Offset mismatch for FSproutDollHouseVoiceModifiers::bEnablePlaybackPitchOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiers, PlaybackPitchOverride) == 12, "Offset mismatch for FSproutDollHouseVoiceModifiers::PlaybackPitchOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiers, bEnableSpeedOverride) == 16, "Offset mismatch for FSproutDollHouseVoiceModifiers::bEnableSpeedOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiers, SpeedOverride) == 20, "Offset mismatch for FSproutDollHouseVoiceModifiers::SpeedOverride");

// /Script/SproutNativeRuntime.SproutDollHouseVoiceModifiersConfiguration
// Kind: ScriptStruct; super: none
struct FSproutDollHouseVoiceModifiersConfiguration
{
public:
    float MinPlaybackVolumeMultiplierOverride; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxPlaybackVolumeMultiplierOverride; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinPlaybackPitchOverride; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxPlaybackPitchOverride; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MinSpeedOverride; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedOverride; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutDollHouseVoiceModifiersConfiguration, MinPlaybackVolumeMultiplierOverride) == 0, "Offset mismatch for FSproutDollHouseVoiceModifiersConfiguration::MinPlaybackVolumeMultiplierOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiersConfiguration, MaxPlaybackVolumeMultiplierOverride) == 4, "Offset mismatch for FSproutDollHouseVoiceModifiersConfiguration::MaxPlaybackVolumeMultiplierOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiersConfiguration, MinPlaybackPitchOverride) == 8, "Offset mismatch for FSproutDollHouseVoiceModifiersConfiguration::MinPlaybackPitchOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiersConfiguration, MaxPlaybackPitchOverride) == 12, "Offset mismatch for FSproutDollHouseVoiceModifiersConfiguration::MaxPlaybackPitchOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiersConfiguration, MinSpeedOverride) == 16, "Offset mismatch for FSproutDollHouseVoiceModifiersConfiguration::MinSpeedOverride");
static_assert(offsetof(FSproutDollHouseVoiceModifiersConfiguration, MaxSpeedOverride) == 20, "Offset mismatch for FSproutDollHouseVoiceModifiersConfiguration::MaxSpeedOverride");

// /Script/SproutNativeRuntime.SproutDollHouseWordKitConfiguration
// Kind: ScriptStruct; super: none
struct FSproutDollHouseWordKitConfiguration
{
public:
    std::uint8_t Identifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t BasePrompt[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TArray<void*> OptionsBlocks; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseWordKitConfiguration, Identifier) == 0, "Offset mismatch for FSproutDollHouseWordKitConfiguration::Identifier");
static_assert(offsetof(FSproutDollHouseWordKitConfiguration, BasePrompt) == 8, "Offset mismatch for FSproutDollHouseWordKitConfiguration::BasePrompt");
static_assert(offsetof(FSproutDollHouseWordKitConfiguration, OptionsBlocks) == 24, "Offset mismatch for FSproutDollHouseWordKitConfiguration::OptionsBlocks");

// /Script/SproutNativeRuntime.SproutDollHouseWordKitOptionsBlock
// Kind: ScriptStruct; super: none
struct FSproutDollHouseWordKitOptionsBlock
{
public:
    std::uint8_t Identifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Options; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseWordKitOptionsBlock, Identifier) == 0, "Offset mismatch for FSproutDollHouseWordKitOptionsBlock::Identifier");
static_assert(offsetof(FSproutDollHouseWordKitOptionsBlock, Options) == 8, "Offset mismatch for FSproutDollHouseWordKitOptionsBlock::Options");

// /Script/SproutNativeRuntime.SproutDollHouseWordKitSingleOption
// Kind: ScriptStruct; super: none
struct FSproutDollHouseWordKitSingleOption
{
public:
    std::uint8_t Identifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FText Value; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSproutDollHouseWordKitSingleOption, Identifier) == 0, "Offset mismatch for FSproutDollHouseWordKitSingleOption::Identifier");
static_assert(offsetof(FSproutDollHouseWordKitSingleOption, Value) == 8, "Offset mismatch for FSproutDollHouseWordKitSingleOption::Value");

// /Script/SproutNativeRuntime.SproutDollHouseWordKitVariable
// Kind: ScriptStruct; super: none
struct FSproutDollHouseWordKitVariable
{
public:
    std::uint8_t Identifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> WordKits; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutDollHouseWordKitVariable, Identifier) == 0, "Offset mismatch for FSproutDollHouseWordKitVariable::Identifier");
static_assert(offsetof(FSproutDollHouseWordKitVariable, WordKits) == 8, "Offset mismatch for FSproutDollHouseWordKitVariable::WordKits");

// /Script/SproutNativeRuntime.SproutEventReaction_GrantJobExperience
// Kind: ScriptStruct; super: FortEventReaction_Reward
struct FSproutEventReaction_GrantJobExperience
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> JobExperienceRewards; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutEventReaction_GrantJobExperience, JobExperienceRewards) == 8, "Offset mismatch for FSproutEventReaction_GrantJobExperience::JobExperienceRewards");

// /Script/SproutNativeRuntime.SproutEventReaction_GrantLootBundle
// Kind: ScriptStruct; super: FortEventReaction_Reward
struct FSproutEventReaction_GrantLootBundle
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> LootBundleRewards; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutEventReaction_GrantLootBundle, LootBundleRewards) == 8, "Offset mismatch for FSproutEventReaction_GrantLootBundle::LootBundleRewards");

// /Script/SproutNativeRuntime.SproutEventReaction_GrantMail
// Kind: ScriptStruct; super: FortEventReaction_Reward
struct FSproutEventReaction_GrantMail
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> MailRewards; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutEventReaction_GrantMail, MailRewards) == 8, "Offset mismatch for FSproutEventReaction_GrantMail::MailRewards");

// /Script/SproutNativeRuntime.SproutEventSchedule
// Kind: ScriptStruct; super: TableRowBase
struct FSproutEventSchedule
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnable; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t EventType; // 0x000D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    std::int32_t DayToRepeat; // 0x0010 (Size: 0x4, Type: IntProperty)
    float ValidMinHour; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float ValidMaxHour; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::int32_t ValidMinDayOfMonth; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t ValidMaxDayOfMonth; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0024
    std::uint8_t EventFixedStart[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventFixedEnd[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t TriggeringPhase; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0039
    float OffsetAfterPhaseStartInGameHours; // 0x003C (Size: 0x4, Type: FloatProperty)
    float DurationInGameHours; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float StartHour; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float EndingHour; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutEventSchedule, EventTag) == 8, "Offset mismatch for FSproutEventSchedule::EventTag");
static_assert(offsetof(FSproutEventSchedule, bEnable) == 12, "Offset mismatch for FSproutEventSchedule::bEnable");
static_assert(offsetof(FSproutEventSchedule, EventType) == 13, "Offset mismatch for FSproutEventSchedule::EventType");
static_assert(offsetof(FSproutEventSchedule, DayToRepeat) == 16, "Offset mismatch for FSproutEventSchedule::DayToRepeat");
static_assert(offsetof(FSproutEventSchedule, ValidMinHour) == 20, "Offset mismatch for FSproutEventSchedule::ValidMinHour");
static_assert(offsetof(FSproutEventSchedule, ValidMaxHour) == 24, "Offset mismatch for FSproutEventSchedule::ValidMaxHour");
static_assert(offsetof(FSproutEventSchedule, ValidMinDayOfMonth) == 28, "Offset mismatch for FSproutEventSchedule::ValidMinDayOfMonth");
static_assert(offsetof(FSproutEventSchedule, ValidMaxDayOfMonth) == 32, "Offset mismatch for FSproutEventSchedule::ValidMaxDayOfMonth");
static_assert(offsetof(FSproutEventSchedule, EventFixedStart) == 40, "Offset mismatch for FSproutEventSchedule::EventFixedStart");
static_assert(offsetof(FSproutEventSchedule, EventFixedEnd) == 48, "Offset mismatch for FSproutEventSchedule::EventFixedEnd");
static_assert(offsetof(FSproutEventSchedule, TriggeringPhase) == 56, "Offset mismatch for FSproutEventSchedule::TriggeringPhase");
static_assert(offsetof(FSproutEventSchedule, OffsetAfterPhaseStartInGameHours) == 60, "Offset mismatch for FSproutEventSchedule::OffsetAfterPhaseStartInGameHours");
static_assert(offsetof(FSproutEventSchedule, DurationInGameHours) == 64, "Offset mismatch for FSproutEventSchedule::DurationInGameHours");
static_assert(offsetof(FSproutEventSchedule, StartHour) == 68, "Offset mismatch for FSproutEventSchedule::StartHour");
static_assert(offsetof(FSproutEventSchedule, EndingHour) == 72, "Offset mismatch for FSproutEventSchedule::EndingHour");

// /Script/SproutNativeRuntime.SproutEventStateMessage
// Kind: ScriptStruct; super: none
struct FSproutEventStateMessage
{
public:
    std::uint8_t EventState; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t EventTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventScheduleRegistryID[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventStartTime[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventEndTime[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutEventStateMessage, EventState) == 0, "Offset mismatch for FSproutEventStateMessage::EventState");
static_assert(offsetof(FSproutEventStateMessage, EventTag) == 4, "Offset mismatch for FSproutEventStateMessage::EventTag");
static_assert(offsetof(FSproutEventStateMessage, EventScheduleRegistryID) == 8, "Offset mismatch for FSproutEventStateMessage::EventScheduleRegistryID");
static_assert(offsetof(FSproutEventStateMessage, EventStartTime) == 16, "Offset mismatch for FSproutEventStateMessage::EventStartTime");
static_assert(offsetof(FSproutEventStateMessage, EventEndTime) == 24, "Offset mismatch for FSproutEventStateMessage::EventEndTime");

// /Script/SproutNativeRuntime.SproutEvent_AnnounceAchievement
// Kind: ScriptStruct; super: JunoEvent_Announcement
struct FSproutEvent_AnnounceAchievement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CollectionUpdateType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t CollectionCategoryTag[0x4]; // 0x002C (Size: 0x4, Type: StructProperty)
    void* Item; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_AnnounceAchievement, CollectionUpdateType) == 40, "Offset mismatch for FSproutEvent_AnnounceAchievement::CollectionUpdateType");
static_assert(offsetof(FSproutEvent_AnnounceAchievement, CollectionCategoryTag) == 44, "Offset mismatch for FSproutEvent_AnnounceAchievement::CollectionCategoryTag");
static_assert(offsetof(FSproutEvent_AnnounceAchievement, Item) == 48, "Offset mismatch for FSproutEvent_AnnounceAchievement::Item");

// /Script/SproutNativeRuntime.SproutEvent_CinematicUIExistence
// Kind: ScriptStruct; super: none
struct FSproutEvent_CinematicUIExistence
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_ClientNotification
// Kind: ScriptStruct; super: none
struct FSproutEvent_ClientNotification
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_ClientReadyForNotifications
// Kind: ScriptStruct; super: none
struct FSproutEvent_ClientReadyForNotifications
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_CookingMinigameComplete
// Kind: ScriptStruct; super: none
struct FSproutEvent_CookingMinigameComplete
{
public:
    float CompletionProgress; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t ResultTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutEvent_CookingMinigameComplete, CompletionProgress) == 0, "Offset mismatch for FSproutEvent_CookingMinigameComplete::CompletionProgress");
static_assert(offsetof(FSproutEvent_CookingMinigameComplete, ResultTags) == 8, "Offset mismatch for FSproutEvent_CookingMinigameComplete::ResultTags");

// /Script/SproutNativeRuntime.SproutEvent_CookingMinigameProgressResult
// Kind: ScriptStruct; super: none
struct FSproutEvent_CookingMinigameProgressResult
{
public:
    float MinigameProgressResult; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutEvent_CookingMinigameProgressResult, MinigameProgressResult) == 0, "Offset mismatch for FSproutEvent_CookingMinigameProgressResult::MinigameProgressResult");

// /Script/SproutNativeRuntime.SproutEvent_DestroyItemProgress
// Kind: ScriptStruct; super: none
struct FSproutEvent_DestroyItemProgress
{
public:
    std::uint8_t bActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float HoldTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutEvent_DestroyItemProgress, bActive) == 0, "Offset mismatch for FSproutEvent_DestroyItemProgress::bActive");
static_assert(offsetof(FSproutEvent_DestroyItemProgress, HoldTime) == 4, "Offset mismatch for FSproutEvent_DestroyItemProgress::HoldTime");

// /Script/SproutNativeRuntime.SproutEvent_HousingInfoMenuEvent
// Kind: ScriptStruct; super: none
struct FSproutEvent_HousingInfoMenuEvent
{
public:
    std::uint8_t bOpen; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TSoftObjectPtr<void> HousingLot; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutEvent_HousingInfoMenuEvent, bOpen) == 0, "Offset mismatch for FSproutEvent_HousingInfoMenuEvent::bOpen");
static_assert(offsetof(FSproutEvent_HousingInfoMenuEvent, HousingLot) == 8, "Offset mismatch for FSproutEvent_HousingInfoMenuEvent::HousingLot");

// /Script/SproutNativeRuntime.SproutEvent_JobVolumeActivated
// Kind: ScriptStruct; super: none
struct FSproutEvent_JobVolumeActivated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_JobVolumeDeactivated
// Kind: ScriptStruct; super: none
struct FSproutEvent_JobVolumeDeactivated
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_NotificationBase
// Kind: ScriptStruct; super: none
struct FSproutEvent_NotificationBase
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutEvent_NotificationBase, MessageId) == 0, "Offset mismatch for FSproutEvent_NotificationBase::MessageId");

// /Script/SproutNativeRuntime.SproutEvent_NotificationGlobal
// Kind: ScriptStruct; super: SproutEvent_NotificationBase
struct FSproutEvent_NotificationGlobal
{
public:
    std::uint8_t MessageId[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutEvent_NotificationGlobal, MessageId) == 0, "Offset mismatch for FSproutEvent_NotificationGlobal::MessageId");

// /Script/SproutNativeRuntime.SproutEvent_NotificationJob
// Kind: ScriptStruct; super: SproutEvent_NotificationBase
struct FSproutEvent_NotificationJob
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Query[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutEvent_NotificationJob, Query) == 8, "Offset mismatch for FSproutEvent_NotificationJob::Query");

// /Script/SproutNativeRuntime.SproutEvent_NotificationJobVolume
// Kind: ScriptStruct; super: SproutEvent_NotificationBase
struct FSproutEvent_NotificationJobVolume
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* JobVolume; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_NotificationJobVolume, JobVolume) == 8, "Offset mismatch for FSproutEvent_NotificationJobVolume::JobVolume");

// /Script/SproutNativeRuntime.SproutEvent_NotificationPlayer
// Kind: ScriptStruct; super: SproutEvent_NotificationBase
struct FSproutEvent_NotificationPlayer
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* RoutingPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_NotificationPlayer, RoutingPlayerState) == 8, "Offset mismatch for FSproutEvent_NotificationPlayer::RoutingPlayerState");

// /Script/SproutNativeRuntime.SproutEvent_OwnedHouseUpdated
// Kind: ScriptStruct; super: none
struct FSproutEvent_OwnedHouseUpdated
{
public:
    TWeakObjectPtr<void> Owner; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> HousingVolume; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t HousingSaveID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutEvent_OwnedHouseUpdated, Owner) == 0, "Offset mismatch for FSproutEvent_OwnedHouseUpdated::Owner");
static_assert(offsetof(FSproutEvent_OwnedHouseUpdated, HousingVolume) == 8, "Offset mismatch for FSproutEvent_OwnedHouseUpdated::HousingVolume");
static_assert(offsetof(FSproutEvent_OwnedHouseUpdated, HousingSaveID) == 16, "Offset mismatch for FSproutEvent_OwnedHouseUpdated::HousingSaveID");

// /Script/SproutNativeRuntime.SproutEvent_PlayerRequestEvent
// Kind: ScriptStruct; super: none
struct FSproutEvent_PlayerRequestEvent
{
public:
    std::uint8_t bShow; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* OwningPlayerState; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutEvent_PlayerRequestEvent, bShow) == 0, "Offset mismatch for FSproutEvent_PlayerRequestEvent::bShow");
static_assert(offsetof(FSproutEvent_PlayerRequestEvent, OwningPlayerState) == 8, "Offset mismatch for FSproutEvent_PlayerRequestEvent::OwningPlayerState");

// /Script/SproutNativeRuntime.SproutEvent_RequestCelebrationDisplay
// Kind: ScriptStruct; super: none
struct FSproutEvent_RequestCelebrationDisplay
{
public:
    void* ItemDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsNew; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutEvent_RequestCelebrationDisplay, ItemDefinition) == 0, "Offset mismatch for FSproutEvent_RequestCelebrationDisplay::ItemDefinition");
static_assert(offsetof(FSproutEvent_RequestCelebrationDisplay, bIsNew) == 8, "Offset mismatch for FSproutEvent_RequestCelebrationDisplay::bIsNew");

// /Script/SproutNativeRuntime.SproutEvent_RequestCookingMinigame
// Kind: ScriptStruct; super: none
struct FSproutEvent_RequestCookingMinigame
{
public:
    TArray<void*> Outcomes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float MaxDuration; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutEvent_RequestCookingMinigame, Outcomes) == 0, "Offset mismatch for FSproutEvent_RequestCookingMinigame::Outcomes");
static_assert(offsetof(FSproutEvent_RequestCookingMinigame, MaxDuration) == 16, "Offset mismatch for FSproutEvent_RequestCookingMinigame::MaxDuration");

// /Script/SproutNativeRuntime.SproutEvent_RequestCookingMinigameStop
// Kind: ScriptStruct; super: none
struct FSproutEvent_RequestCookingMinigameStop
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_RequestPoseSelection
// Kind: ScriptStruct; super: none
struct FSproutEvent_RequestPoseSelection
{
public:
    std::uint8_t bStart; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutEvent_RequestPoseSelection, bStart) == 0, "Offset mismatch for FSproutEvent_RequestPoseSelection::bStart");

// /Script/SproutNativeRuntime.SproutEvent_RequestRecipeBook
// Kind: ScriptStruct; super: none
struct FSproutEvent_RequestRecipeBook
{
public:
    TArray<void*> Recipes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOpen; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutEvent_RequestRecipeBook, Recipes) == 0, "Offset mismatch for FSproutEvent_RequestRecipeBook::Recipes");
static_assert(offsetof(FSproutEvent_RequestRecipeBook, bOpen) == 16, "Offset mismatch for FSproutEvent_RequestRecipeBook::bOpen");

// /Script/SproutNativeRuntime.SproutEvent_RequestTogglePoseSelection
// Kind: ScriptStruct; super: none
struct FSproutEvent_RequestTogglePoseSelection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_ShowChatWheel
// Kind: ScriptStruct; super: none
struct FSproutEvent_ShowChatWheel
{
public:
    std::uint8_t bShow; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutEvent_ShowChatWheel, bShow) == 0, "Offset mismatch for FSproutEvent_ShowChatWheel::bShow");

// /Script/SproutNativeRuntime.SproutEvent_TransitionUIExistence
// Kind: ScriptStruct; super: none
struct FSproutEvent_TransitionUIExistence
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEvent_TransitionUIVisibility
// Kind: ScriptStruct; super: none
struct FSproutEvent_TransitionUIVisibility
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutExperienceRewardEntry
// Kind: ScriptStruct; super: none
struct FSproutExperienceRewardEntry
{
public:
    std::uint8_t JobTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t ExperiencePoints; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutExperienceRewardEntry, JobTag) == 0, "Offset mismatch for FSproutExperienceRewardEntry::JobTag");
static_assert(offsetof(FSproutExperienceRewardEntry, ExperiencePoints) == 4, "Offset mismatch for FSproutExperienceRewardEntry::ExperiencePoints");

// /Script/SproutNativeRuntime.SproutHousingCloneOptions
// Kind: ScriptStruct; super: none
struct FSproutHousingCloneOptions
{
public:
    std::uint8_t bRemoveFoundations; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float VerticalOffset; // 0x0004 (Size: 0x4, Type: FloatProperty)
    TArray<void*> PerClassOptions; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* MeshConversionClass; // 0x0018 (Size: 0x8, Type: ClassProperty)
    FName GeneratedActorTag; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSproutHousingCloneOptions, bRemoveFoundations) == 0, "Offset mismatch for FSproutHousingCloneOptions::bRemoveFoundations");
static_assert(offsetof(FSproutHousingCloneOptions, VerticalOffset) == 4, "Offset mismatch for FSproutHousingCloneOptions::VerticalOffset");
static_assert(offsetof(FSproutHousingCloneOptions, PerClassOptions) == 8, "Offset mismatch for FSproutHousingCloneOptions::PerClassOptions");
static_assert(offsetof(FSproutHousingCloneOptions, MeshConversionClass) == 24, "Offset mismatch for FSproutHousingCloneOptions::MeshConversionClass");
static_assert(offsetof(FSproutHousingCloneOptions, GeneratedActorTag) == 32, "Offset mismatch for FSproutHousingCloneOptions::GeneratedActorTag");

// /Script/SproutNativeRuntime.SproutHousingClonePerClassOptions
// Kind: ScriptStruct; super: none
struct FSproutHousingClonePerClassOptions
{
public:
    void* BaseClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bTrack; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnore; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x000A
    TArray<void*> ComponentsToIgnore; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutHousingClonePerClassOptions, BaseClass) == 0, "Offset mismatch for FSproutHousingClonePerClassOptions::BaseClass");
static_assert(offsetof(FSproutHousingClonePerClassOptions, bTrack) == 8, "Offset mismatch for FSproutHousingClonePerClassOptions::bTrack");
static_assert(offsetof(FSproutHousingClonePerClassOptions, bIgnore) == 9, "Offset mismatch for FSproutHousingClonePerClassOptions::bIgnore");
static_assert(offsetof(FSproutHousingClonePerClassOptions, ComponentsToIgnore) == 16, "Offset mismatch for FSproutHousingClonePerClassOptions::ComponentsToIgnore");

// /Script/SproutNativeRuntime.SproutHousingCloneSpawnInfo
// Kind: ScriptStruct; super: none
struct FSproutHousingCloneSpawnInfo
{
public:
    void* ClassToSpawn; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Transform[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutHousingCloneSpawnInfo, ClassToSpawn) == 0, "Offset mismatch for FSproutHousingCloneSpawnInfo::ClassToSpawn");
static_assert(offsetof(FSproutHousingCloneSpawnInfo, Transform) == 16, "Offset mismatch for FSproutHousingCloneSpawnInfo::Transform");

// /Script/SproutNativeRuntime.SproutHousingEditPermissions
// Kind: ScriptStruct; super: none
struct FSproutHousingEditPermissions
{
public:
    std::int32_t PermissionFlags; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> PersistedEditors; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutHousingEditPermissions, PermissionFlags) == 0, "Offset mismatch for FSproutHousingEditPermissions::PermissionFlags");
static_assert(offsetof(FSproutHousingEditPermissions, PersistedEditors) == 8, "Offset mismatch for FSproutHousingEditPermissions::PersistedEditors");

// /Script/SproutNativeRuntime.SproutHousingLevel
// Kind: ScriptStruct; super: none
struct FSproutHousingLevel
{
public:
    void* HousingItemAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LevelLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    float LevelYawRotation; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LevelInjectionID[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlayerSaveSlotId[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t MainLevel_GridName[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    FName HLODLevel_GridName; // 0x0048 (Size: 0x8, Type: NameProperty)
    std::uint8_t LevelBounds[0x38]; // 0x0050 (Size: 0x38, Type: StructProperty)
    std::int32_t LevelStreamingPriority; // 0x0088 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutHousingLevel, HousingItemAsset) == 0, "Offset mismatch for FSproutHousingLevel::HousingItemAsset");
static_assert(offsetof(FSproutHousingLevel, LevelLocation) == 8, "Offset mismatch for FSproutHousingLevel::LevelLocation");
static_assert(offsetof(FSproutHousingLevel, LevelYawRotation) == 32, "Offset mismatch for FSproutHousingLevel::LevelYawRotation");
static_assert(offsetof(FSproutHousingLevel, LevelInjectionID) == 36, "Offset mismatch for FSproutHousingLevel::LevelInjectionID");
static_assert(offsetof(FSproutHousingLevel, PlayerSaveSlotId) == 52, "Offset mismatch for FSproutHousingLevel::PlayerSaveSlotId");
static_assert(offsetof(FSproutHousingLevel, MainLevel_GridName) == 68, "Offset mismatch for FSproutHousingLevel::MainLevel_GridName");
static_assert(offsetof(FSproutHousingLevel, HLODLevel_GridName) == 72, "Offset mismatch for FSproutHousingLevel::HLODLevel_GridName");
static_assert(offsetof(FSproutHousingLevel, LevelBounds) == 80, "Offset mismatch for FSproutHousingLevel::LevelBounds");
static_assert(offsetof(FSproutHousingLevel, LevelStreamingPriority) == 136, "Offset mismatch for FSproutHousingLevel::LevelStreamingPriority");

// /Script/SproutNativeRuntime.SproutHousingLevelEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutHousingLevelEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutHousingLevelEntry, Value) == 16, "Offset mismatch for FSproutHousingLevelEntry::Value");

// /Script/SproutNativeRuntime.SproutHousingLotOwnership
// Kind: ScriptStruct; super: none
struct FSproutHousingLotOwnership
{
public:
    void* HousingVolume; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HouseOwnerID[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t bNeighborhoodOwned; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0039
    std::uint8_t HouseSaveID[0x14]; // 0x003C (Size: 0x14, Type: StructProperty)
    void* HousingShellItemDefinition; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsHouseInLockdown; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    TArray<void*> HouseReactions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentDecorCount; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0074
    std::uint8_t EditPermissions[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutHousingLotOwnership, HousingVolume) == 0, "Offset mismatch for FSproutHousingLotOwnership::HousingVolume");
static_assert(offsetof(FSproutHousingLotOwnership, HouseOwnerID) == 8, "Offset mismatch for FSproutHousingLotOwnership::HouseOwnerID");
static_assert(offsetof(FSproutHousingLotOwnership, bNeighborhoodOwned) == 56, "Offset mismatch for FSproutHousingLotOwnership::bNeighborhoodOwned");
static_assert(offsetof(FSproutHousingLotOwnership, HouseSaveID) == 60, "Offset mismatch for FSproutHousingLotOwnership::HouseSaveID");
static_assert(offsetof(FSproutHousingLotOwnership, HousingShellItemDefinition) == 80, "Offset mismatch for FSproutHousingLotOwnership::HousingShellItemDefinition");
static_assert(offsetof(FSproutHousingLotOwnership, bIsHouseInLockdown) == 88, "Offset mismatch for FSproutHousingLotOwnership::bIsHouseInLockdown");
static_assert(offsetof(FSproutHousingLotOwnership, HouseReactions) == 96, "Offset mismatch for FSproutHousingLotOwnership::HouseReactions");
static_assert(offsetof(FSproutHousingLotOwnership, CurrentDecorCount) == 112, "Offset mismatch for FSproutHousingLotOwnership::CurrentDecorCount");
static_assert(offsetof(FSproutHousingLotOwnership, EditPermissions) == 120, "Offset mismatch for FSproutHousingLotOwnership::EditPermissions");

// /Script/SproutNativeRuntime.SproutHousingLotOwnershipEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutHousingLotOwnershipEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OwnerData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutHousingLotOwnershipEntry, OwnerData) == 16, "Offset mismatch for FSproutHousingLotOwnershipEntry::OwnerData");

// /Script/SproutNativeRuntime.SproutHousingLotOwnershipFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutHousingLotOwnershipFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* SproutHousing; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutHousingLotOwnershipFastArray, Entries) == 72, "Offset mismatch for FSproutHousingLotOwnershipFastArray::Entries");
static_assert(offsetof(FSproutHousingLotOwnershipFastArray, SproutHousing) == 88, "Offset mismatch for FSproutHousingLotOwnershipFastArray::SproutHousing");

// /Script/SproutNativeRuntime.SproutHousingReactionEntry
// Kind: ScriptStruct; super: none
struct FSproutHousingReactionEntry
{
public:
    std::uint8_t ReactionType[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t ReactionCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutHousingReactionEntry, ReactionType) == 0, "Offset mismatch for FSproutHousingReactionEntry::ReactionType");
static_assert(offsetof(FSproutHousingReactionEntry, ReactionCount) == 4, "Offset mismatch for FSproutHousingReactionEntry::ReactionCount");

// /Script/SproutNativeRuntime.SproutHousingShellTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutHousingShellTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t HousingShellItemDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HousingShellTags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnabledForSale; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForLoad; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutHousingShellTableRow, HousingShellItemDefinition) == 8, "Offset mismatch for FSproutHousingShellTableRow::HousingShellItemDefinition");
static_assert(offsetof(FSproutHousingShellTableRow, HousingShellTags) == 40, "Offset mismatch for FSproutHousingShellTableRow::HousingShellTags");
static_assert(offsetof(FSproutHousingShellTableRow, bEnabledForSale) == 72, "Offset mismatch for FSproutHousingShellTableRow::bEnabledForSale");
static_assert(offsetof(FSproutHousingShellTableRow, bEnabledForLoad) == 73, "Offset mismatch for FSproutHousingShellTableRow::bEnabledForLoad");

// /Script/SproutNativeRuntime.SproutHousingStreamingLevelFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutHousingStreamingLevelFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* SproutHousing; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutHousingStreamingLevelFastArray, Entries) == 72, "Offset mismatch for FSproutHousingStreamingLevelFastArray::Entries");
static_assert(offsetof(FSproutHousingStreamingLevelFastArray, SproutHousing) == 88, "Offset mismatch for FSproutHousingStreamingLevelFastArray::SproutHousing");

// /Script/SproutNativeRuntime.SproutIntroCinematicResolvedEventData
// Kind: ScriptStruct; super: none
struct FSproutIntroCinematicResolvedEventData
{
public:
    std::uint8_t bIntroCinematicSuccessfullyPlayed; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasSkipped; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutIntroCinematicResolvedEventData, bIntroCinematicSuccessfullyPlayed) == 0, "Offset mismatch for FSproutIntroCinematicResolvedEventData::bIntroCinematicSuccessfullyPlayed");
static_assert(offsetof(FSproutIntroCinematicResolvedEventData, bWasSkipped) == 1, "Offset mismatch for FSproutIntroCinematicResolvedEventData::bWasSkipped");

// /Script/SproutNativeRuntime.SproutItemBaseConfiguration
// Kind: ScriptStruct; super: none
struct FSproutItemBaseConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Count; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* Item; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutItemBaseConfiguration, Count) == 8, "Offset mismatch for FSproutItemBaseConfiguration::Count");
static_assert(offsetof(FSproutItemBaseConfiguration, Item) == 16, "Offset mismatch for FSproutItemBaseConfiguration::Item");

// /Script/SproutNativeRuntime.SproutItemBaseConfigurationWithRuntime
// Kind: ScriptStruct; super: SproutItemBaseConfiguration
struct FSproutItemBaseConfigurationWithRuntime
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* RuntimeItem; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutItemBaseConfigurationWithRuntime, RuntimeItem) == 24, "Offset mismatch for FSproutItemBaseConfigurationWithRuntime::RuntimeItem");

// /Script/SproutNativeRuntime.SproutItemToConsumeConfiguration
// Kind: ScriptStruct; super: SproutItemBaseConfiguration
struct FSproutItemToConsumeConfiguration
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t MinCount; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    std::uint8_t ItemTagsQuery[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t bMustBeHandheldItem; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutItemToConsumeConfiguration, MinCount) == 24, "Offset mismatch for FSproutItemToConsumeConfiguration::MinCount");
static_assert(offsetof(FSproutItemToConsumeConfiguration, ItemTagsQuery) == 32, "Offset mismatch for FSproutItemToConsumeConfiguration::ItemTagsQuery");
static_assert(offsetof(FSproutItemToConsumeConfiguration, bMustBeHandheldItem) == 104, "Offset mismatch for FSproutItemToConsumeConfiguration::bMustBeHandheldItem");

// /Script/SproutNativeRuntime.SproutItemToGiveConfiguration
// Kind: ScriptStruct; super: SproutItemBaseConfiguration
struct FSproutItemToGiveConfiguration
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Count; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    void* Item; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutItemToGiveConfiguration, Count) == 8, "Offset mismatch for FSproutItemToGiveConfiguration::Count");
static_assert(offsetof(FSproutItemToGiveConfiguration, Item) == 16, "Offset mismatch for FSproutItemToGiveConfiguration::Item");

// /Script/SproutNativeRuntime.SproutItemsReceivedPayload
// Kind: ScriptStruct; super: none
struct FSproutItemsReceivedPayload
{
public:
    TArray<void*> ItemsReceived; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* Interactor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutItemsReceivedPayload, ItemsReceived) == 0, "Offset mismatch for FSproutItemsReceivedPayload::ItemsReceived");
static_assert(offsetof(FSproutItemsReceivedPayload, Interactor) == 16, "Offset mismatch for FSproutItemsReceivedPayload::Interactor");

// /Script/SproutNativeRuntime.SproutJobConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutJobConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t JobAvailabilityFilters; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t JobTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t bUseNewProgressionFlow; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDefaultJob; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPermanentlyTrending; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0013
    std::uint8_t RequiredXpForLevel[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxJobLevel[0x28]; // 0x0040 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCanGainExperience; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockExperienceUntilInitialTaskIsCompleted; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x006A
    TMap<void*, void*> LevelGatingJobTaskIds; // 0x0070 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LevelUpLootBundleRewards; // 0x0080 (Size: 0x10, Type: MapProperty)
    std::uint8_t ActiveTaskPoolIds[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    std::uint8_t InterimTaskPoolIds[0x20]; // 0x00B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t InitialTaskPoolIds[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShouldPersistInitialTaskCompletion; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutJobConfigTableRow, JobAvailabilityFilters) == 8, "Offset mismatch for FSproutJobConfigTableRow::JobAvailabilityFilters");
static_assert(offsetof(FSproutJobConfigTableRow, JobTag) == 12, "Offset mismatch for FSproutJobConfigTableRow::JobTag");
static_assert(offsetof(FSproutJobConfigTableRow, bUseNewProgressionFlow) == 16, "Offset mismatch for FSproutJobConfigTableRow::bUseNewProgressionFlow");
static_assert(offsetof(FSproutJobConfigTableRow, bIsDefaultJob) == 17, "Offset mismatch for FSproutJobConfigTableRow::bIsDefaultJob");
static_assert(offsetof(FSproutJobConfigTableRow, bIsPermanentlyTrending) == 18, "Offset mismatch for FSproutJobConfigTableRow::bIsPermanentlyTrending");
static_assert(offsetof(FSproutJobConfigTableRow, RequiredXpForLevel) == 24, "Offset mismatch for FSproutJobConfigTableRow::RequiredXpForLevel");
static_assert(offsetof(FSproutJobConfigTableRow, MaxJobLevel) == 64, "Offset mismatch for FSproutJobConfigTableRow::MaxJobLevel");
static_assert(offsetof(FSproutJobConfigTableRow, bCanGainExperience) == 104, "Offset mismatch for FSproutJobConfigTableRow::bCanGainExperience");
static_assert(offsetof(FSproutJobConfigTableRow, bBlockExperienceUntilInitialTaskIsCompleted) == 105, "Offset mismatch for FSproutJobConfigTableRow::bBlockExperienceUntilInitialTaskIsCompleted");
static_assert(offsetof(FSproutJobConfigTableRow, LevelGatingJobTaskIds) == 112, "Offset mismatch for FSproutJobConfigTableRow::LevelGatingJobTaskIds");
static_assert(offsetof(FSproutJobConfigTableRow, LevelUpLootBundleRewards) == 128, "Offset mismatch for FSproutJobConfigTableRow::LevelUpLootBundleRewards");
static_assert(offsetof(FSproutJobConfigTableRow, ActiveTaskPoolIds) == 144, "Offset mismatch for FSproutJobConfigTableRow::ActiveTaskPoolIds");
static_assert(offsetof(FSproutJobConfigTableRow, InterimTaskPoolIds) == 176, "Offset mismatch for FSproutJobConfigTableRow::InterimTaskPoolIds");
static_assert(offsetof(FSproutJobConfigTableRow, InitialTaskPoolIds) == 208, "Offset mismatch for FSproutJobConfigTableRow::InitialTaskPoolIds");
static_assert(offsetof(FSproutJobConfigTableRow, bShouldPersistInitialTaskCompletion) == 240, "Offset mismatch for FSproutJobConfigTableRow::bShouldPersistInitialTaskCompletion");

// /Script/SproutNativeRuntime.SproutJobInfoRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutJobInfoRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bIsJobAvailable; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowTaskGrantingUI; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    std::uint8_t JobTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t JobName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t JobIcon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t JobDesc[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::int32_t SortingPriority; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0054
    std::uint8_t JobProgression[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    FText KeepWorkingTextOverride; // 0x0068 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSproutJobInfoRow, bIsJobAvailable) == 8, "Offset mismatch for FSproutJobInfoRow::bIsJobAvailable");
static_assert(offsetof(FSproutJobInfoRow, bShowTaskGrantingUI) == 9, "Offset mismatch for FSproutJobInfoRow::bShowTaskGrantingUI");
static_assert(offsetof(FSproutJobInfoRow, JobTag) == 12, "Offset mismatch for FSproutJobInfoRow::JobTag");
static_assert(offsetof(FSproutJobInfoRow, JobName) == 16, "Offset mismatch for FSproutJobInfoRow::JobName");
static_assert(offsetof(FSproutJobInfoRow, JobIcon) == 32, "Offset mismatch for FSproutJobInfoRow::JobIcon");
static_assert(offsetof(FSproutJobInfoRow, JobDesc) == 64, "Offset mismatch for FSproutJobInfoRow::JobDesc");
static_assert(offsetof(FSproutJobInfoRow, SortingPriority) == 80, "Offset mismatch for FSproutJobInfoRow::SortingPriority");
static_assert(offsetof(FSproutJobInfoRow, JobProgression) == 88, "Offset mismatch for FSproutJobInfoRow::JobProgression");
static_assert(offsetof(FSproutJobInfoRow, KeepWorkingTextOverride) == 104, "Offset mismatch for FSproutJobInfoRow::KeepWorkingTextOverride");

// /Script/SproutNativeRuntime.SproutJobProgressionEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutJobProgressionEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    std::uint8_t JobTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t ProgressionValues[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsInitialTaskCompleted; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t JobSource; // 0x0021 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    std::uint8_t GrantedLootBundles[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutJobProgressionEntry, JobTag) == 12, "Offset mismatch for FSproutJobProgressionEntry::JobTag");
static_assert(offsetof(FSproutJobProgressionEntry, ProgressionValues) == 16, "Offset mismatch for FSproutJobProgressionEntry::ProgressionValues");
static_assert(offsetof(FSproutJobProgressionEntry, bIsInitialTaskCompleted) == 32, "Offset mismatch for FSproutJobProgressionEntry::bIsInitialTaskCompleted");
static_assert(offsetof(FSproutJobProgressionEntry, JobSource) == 33, "Offset mismatch for FSproutJobProgressionEntry::JobSource");
static_assert(offsetof(FSproutJobProgressionEntry, GrantedLootBundles) == 40, "Offset mismatch for FSproutJobProgressionEntry::GrantedLootBundles");

// /Script/SproutNativeRuntime.SproutJobProgressionFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutJobProgressionFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> Owner; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSproutJobProgressionFastArray, Entries) == 72, "Offset mismatch for FSproutJobProgressionFastArray::Entries");
static_assert(offsetof(FSproutJobProgressionFastArray, Owner) == 88, "Offset mismatch for FSproutJobProgressionFastArray::Owner");

// /Script/SproutNativeRuntime.SproutJobProgressionInfo
// Kind: ScriptStruct; super: none
struct FSproutJobProgressionInfo
{
public:
    TArray<void*> ProgressionRanks; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutJobProgressionInfo, ProgressionRanks) == 0, "Offset mismatch for FSproutJobProgressionInfo::ProgressionRanks");

// /Script/SproutNativeRuntime.SproutJobProgressionRankInfo
// Kind: ScriptStruct; super: none
struct FSproutJobProgressionRankInfo
{
public:
    std::int32_t Level; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FText Title; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSproutJobProgressionRankInfo, Level) == 0, "Offset mismatch for FSproutJobProgressionRankInfo::Level");
static_assert(offsetof(FSproutJobProgressionRankInfo, Title) == 8, "Offset mismatch for FSproutJobProgressionRankInfo::Title");

// /Script/SproutNativeRuntime.SproutJobProgressionValues
// Kind: ScriptStruct; super: none
struct FSproutJobProgressionValues
{
public:
    std::int32_t JobExperiencePoints; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t JobLevel; // 0x0004 (Size: 0x4, Type: IntProperty)
    float LevelProgressPercentage; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t ExperiencePointsNeededForNextLevel; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutJobProgressionValues, JobExperiencePoints) == 0, "Offset mismatch for FSproutJobProgressionValues::JobExperiencePoints");
static_assert(offsetof(FSproutJobProgressionValues, JobLevel) == 4, "Offset mismatch for FSproutJobProgressionValues::JobLevel");
static_assert(offsetof(FSproutJobProgressionValues, LevelProgressPercentage) == 8, "Offset mismatch for FSproutJobProgressionValues::LevelProgressPercentage");
static_assert(offsetof(FSproutJobProgressionValues, ExperiencePointsNeededForNextLevel) == 12, "Offset mismatch for FSproutJobProgressionValues::ExperiencePointsNeededForNextLevel");

// /Script/SproutNativeRuntime.SproutJobTask
// Kind: ScriptStruct; super: none
struct FSproutJobTask
{
public:
    std::uint8_t TaskIdentifier[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinkedQuestDefinition[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ProgressionState; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0039
    std::uint8_t LocationTags[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t TaskType; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    float TimeLimitInSeconds; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t GrantedTimeStamp[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutJobTask, TaskIdentifier) == 0, "Offset mismatch for FSproutJobTask::TaskIdentifier");
static_assert(offsetof(FSproutJobTask, LinkedQuestDefinition) == 24, "Offset mismatch for FSproutJobTask::LinkedQuestDefinition");
static_assert(offsetof(FSproutJobTask, ProgressionState) == 56, "Offset mismatch for FSproutJobTask::ProgressionState");
static_assert(offsetof(FSproutJobTask, LocationTags) == 64, "Offset mismatch for FSproutJobTask::LocationTags");
static_assert(offsetof(FSproutJobTask, TaskType) == 96, "Offset mismatch for FSproutJobTask::TaskType");
static_assert(offsetof(FSproutJobTask, TimeLimitInSeconds) == 100, "Offset mismatch for FSproutJobTask::TimeLimitInSeconds");
static_assert(offsetof(FSproutJobTask, GrantedTimeStamp) == 104, "Offset mismatch for FSproutJobTask::GrantedTimeStamp");

// /Script/SproutNativeRuntime.SproutJobTaskAction
// Kind: ScriptStruct; super: none
struct FSproutJobTaskAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutJobTaskActionList
// Kind: ScriptStruct; super: none
struct FSproutJobTaskActionList
{
public:
    TArray<void*> TaskActions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutJobTaskActionList, TaskActions) == 0, "Offset mismatch for FSproutJobTaskActionList::TaskActions");

// /Script/SproutNativeRuntime.SproutJobTaskAction_JobVolumeProcessor
// Kind: ScriptStruct; super: SproutJobTaskAction
struct FSproutJobTaskAction_JobVolumeProcessor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t JobVolumeTagQuery[0x48]; // 0x0008 (Size: 0x48, Type: StructProperty)
    std::uint8_t JobVolumeProcessingBehavior; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSproutJobTaskAction_JobVolumeProcessor, JobVolumeTagQuery) == 8, "Offset mismatch for FSproutJobTaskAction_JobVolumeProcessor::JobVolumeTagQuery");
static_assert(offsetof(FSproutJobTaskAction_JobVolumeProcessor, JobVolumeProcessingBehavior) == 80, "Offset mismatch for FSproutJobTaskAction_JobVolumeProcessor::JobVolumeProcessingBehavior");

// /Script/SproutNativeRuntime.SproutJobTaskAction_SetActivityStatesWithinJobVolumes
// Kind: ScriptStruct; super: SproutJobTaskAction_JobVolumeProcessor
struct FSproutJobTaskAction_SetActivityStatesWithinJobVolumes
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bApplyGlobalLimit; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::int32_t ActivityStateModificationGlobalLimit; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t bApplyPerVolumeLimit; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    std::int32_t ActivityStateModificationPerVolumeLimit; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::uint8_t SmartObjectTagQuery[0x48]; // 0x0068 (Size: 0x48, Type: StructProperty)
    std::uint8_t ActivityStateCategoryTag[0x4]; // 0x00B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActivityStateTagToApply[0x1]; // 0x00B4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutJobTaskAction_SetActivityStatesWithinJobVolumes, bApplyGlobalLimit) == 88, "Offset mismatch for FSproutJobTaskAction_SetActivityStatesWithinJobVolumes::bApplyGlobalLimit");
static_assert(offsetof(FSproutJobTaskAction_SetActivityStatesWithinJobVolumes, ActivityStateModificationGlobalLimit) == 92, "Offset mismatch for FSproutJobTaskAction_SetActivityStatesWithinJobVolumes::ActivityStateModificationGlobalLimit");
static_assert(offsetof(FSproutJobTaskAction_SetActivityStatesWithinJobVolumes, bApplyPerVolumeLimit) == 96, "Offset mismatch for FSproutJobTaskAction_SetActivityStatesWithinJobVolumes::bApplyPerVolumeLimit");
static_assert(offsetof(FSproutJobTaskAction_SetActivityStatesWithinJobVolumes, ActivityStateModificationPerVolumeLimit) == 100, "Offset mismatch for FSproutJobTaskAction_SetActivityStatesWithinJobVolumes::ActivityStateModificationPerVolumeLimit");
static_assert(offsetof(FSproutJobTaskAction_SetActivityStatesWithinJobVolumes, SmartObjectTagQuery) == 104, "Offset mismatch for FSproutJobTaskAction_SetActivityStatesWithinJobVolumes::SmartObjectTagQuery");
static_assert(offsetof(FSproutJobTaskAction_SetActivityStatesWithinJobVolumes, ActivityStateCategoryTag) == 176, "Offset mismatch for FSproutJobTaskAction_SetActivityStatesWithinJobVolumes::ActivityStateCategoryTag");
static_assert(offsetof(FSproutJobTaskAction_SetActivityStatesWithinJobVolumes, ActivityStateTagToApply) == 180, "Offset mismatch for FSproutJobTaskAction_SetActivityStatesWithinJobVolumes::ActivityStateTagToApply");

// /Script/SproutNativeRuntime.SproutJobTaskAction_SetGoalItemWithinJobVolumes
// Kind: ScriptStruct; super: SproutJobTaskAction_JobVolumeProcessor
struct FSproutJobTaskAction_SetGoalItemWithinJobVolumes
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t SmartObjectTagQuery[0x48]; // 0x0058 (Size: 0x48, Type: StructProperty)
    std::uint8_t GoalItem[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GoalItemTags[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutJobTaskAction_SetGoalItemWithinJobVolumes, SmartObjectTagQuery) == 88, "Offset mismatch for FSproutJobTaskAction_SetGoalItemWithinJobVolumes::SmartObjectTagQuery");
static_assert(offsetof(FSproutJobTaskAction_SetGoalItemWithinJobVolumes, GoalItem) == 160, "Offset mismatch for FSproutJobTaskAction_SetGoalItemWithinJobVolumes::GoalItem");
static_assert(offsetof(FSproutJobTaskAction_SetGoalItemWithinJobVolumes, GoalItemTags) == 192, "Offset mismatch for FSproutJobTaskAction_SetGoalItemWithinJobVolumes::GoalItemTags");

// /Script/SproutNativeRuntime.SproutJobTaskConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutJobTaskConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TaskIdentifier[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t TagsToApplyToPlayer[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocationTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t LinkedQuestDefinition[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TaskTimeLimitInRealSeconds[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    TMap<void*, void*> TaskActionsToExecuteAtProgressionState; // 0x0098 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSproutJobTaskConfigTableRow, TaskIdentifier) == 8, "Offset mismatch for FSproutJobTaskConfigTableRow::TaskIdentifier");
static_assert(offsetof(FSproutJobTaskConfigTableRow, TagsToApplyToPlayer) == 16, "Offset mismatch for FSproutJobTaskConfigTableRow::TagsToApplyToPlayer");
static_assert(offsetof(FSproutJobTaskConfigTableRow, LocationTags) == 48, "Offset mismatch for FSproutJobTaskConfigTableRow::LocationTags");
static_assert(offsetof(FSproutJobTaskConfigTableRow, LinkedQuestDefinition) == 80, "Offset mismatch for FSproutJobTaskConfigTableRow::LinkedQuestDefinition");
static_assert(offsetof(FSproutJobTaskConfigTableRow, TaskTimeLimitInRealSeconds) == 112, "Offset mismatch for FSproutJobTaskConfigTableRow::TaskTimeLimitInRealSeconds");
static_assert(offsetof(FSproutJobTaskConfigTableRow, TaskActionsToExecuteAtProgressionState) == 152, "Offset mismatch for FSproutJobTaskConfigTableRow::TaskActionsToExecuteAtProgressionState");

// /Script/SproutNativeRuntime.SproutJobUpdateTelemetryData
// Kind: ScriptStruct; super: none
struct FSproutJobUpdateTelemetryData
{
public:
    std::uint8_t JobAction; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t JobID; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t JobType[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t JobLevel; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t JobLevelXP; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t TaskIdentifier[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    std::uint8_t JobSource; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSproutJobUpdateTelemetryData, JobAction) == 0, "Offset mismatch for FSproutJobUpdateTelemetryData::JobAction");
static_assert(offsetof(FSproutJobUpdateTelemetryData, JobID) == 4, "Offset mismatch for FSproutJobUpdateTelemetryData::JobID");
static_assert(offsetof(FSproutJobUpdateTelemetryData, JobType) == 8, "Offset mismatch for FSproutJobUpdateTelemetryData::JobType");
static_assert(offsetof(FSproutJobUpdateTelemetryData, JobLevel) == 12, "Offset mismatch for FSproutJobUpdateTelemetryData::JobLevel");
static_assert(offsetof(FSproutJobUpdateTelemetryData, JobLevelXP) == 16, "Offset mismatch for FSproutJobUpdateTelemetryData::JobLevelXP");
static_assert(offsetof(FSproutJobUpdateTelemetryData, TaskIdentifier) == 20, "Offset mismatch for FSproutJobUpdateTelemetryData::TaskIdentifier");
static_assert(offsetof(FSproutJobUpdateTelemetryData, JobSource) == 24, "Offset mismatch for FSproutJobUpdateTelemetryData::JobSource");

// /Script/SproutNativeRuntime.SproutLootBundle
// Kind: ScriptStruct; super: none
struct FSproutLootBundle
{
public:
    TArray<void*> LootEntries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrendingLootEntries; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PersistedUnlocksToGrant; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> JobXPEntries; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CashToGive; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIgnoreTrendingJobBoosts; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0045
    TMap<void*, void*> RewardTokensToApply; // 0x0048 (Size: 0x10, Type: MapProperty)
    TArray<void*> MailToGive; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutLootBundle, LootEntries) == 0, "Offset mismatch for FSproutLootBundle::LootEntries");
static_assert(offsetof(FSproutLootBundle, TrendingLootEntries) == 16, "Offset mismatch for FSproutLootBundle::TrendingLootEntries");
static_assert(offsetof(FSproutLootBundle, PersistedUnlocksToGrant) == 32, "Offset mismatch for FSproutLootBundle::PersistedUnlocksToGrant");
static_assert(offsetof(FSproutLootBundle, JobXPEntries) == 48, "Offset mismatch for FSproutLootBundle::JobXPEntries");
static_assert(offsetof(FSproutLootBundle, CashToGive) == 64, "Offset mismatch for FSproutLootBundle::CashToGive");
static_assert(offsetof(FSproutLootBundle, bIgnoreTrendingJobBoosts) == 68, "Offset mismatch for FSproutLootBundle::bIgnoreTrendingJobBoosts");
static_assert(offsetof(FSproutLootBundle, RewardTokensToApply) == 72, "Offset mismatch for FSproutLootBundle::RewardTokensToApply");
static_assert(offsetof(FSproutLootBundle, MailToGive) == 88, "Offset mismatch for FSproutLootBundle::MailToGive");

// /Script/SproutNativeRuntime.SproutLootBundleTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutLootBundleTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LootBundleIdentifier[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t LootBundle[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutLootBundleTableRow, LootBundleIdentifier) == 8, "Offset mismatch for FSproutLootBundleTableRow::LootBundleIdentifier");
static_assert(offsetof(FSproutLootBundleTableRow, LootBundle) == 16, "Offset mismatch for FSproutLootBundleTableRow::LootBundle");

// /Script/SproutNativeRuntime.SproutLootEntry
// Kind: ScriptStruct; super: none
struct FSproutLootEntry
{
public:
    std::int32_t ItemCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TSoftObjectPtr<void> LootItemDefinition; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutLootEntry, ItemCount) == 0, "Offset mismatch for FSproutLootEntry::ItemCount");
static_assert(offsetof(FSproutLootEntry, LootItemDefinition) == 8, "Offset mismatch for FSproutLootEntry::LootItemDefinition");

// /Script/SproutNativeRuntime.SproutLootJobXPEntry
// Kind: ScriptStruct; super: none
struct FSproutLootJobXPEntry
{
public:
    std::uint8_t JobTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::int32_t XPToGrant; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutLootJobXPEntry, JobTags) == 0, "Offset mismatch for FSproutLootJobXPEntry::JobTags");
static_assert(offsetof(FSproutLootJobXPEntry, XPToGrant) == 32, "Offset mismatch for FSproutLootJobXPEntry::XPToGrant");

// /Script/SproutNativeRuntime.SproutLootMailEntry
// Kind: ScriptStruct; super: none
struct FSproutLootMailEntry
{
public:
    std::uint8_t Sender[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t SubjectMessageId[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t BodyMessageId[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    std::uint8_t AttachedAsset[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::int32_t AttachedAssetCount; // 0x001C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutLootMailEntry, Sender) == 0, "Offset mismatch for FSproutLootMailEntry::Sender");
static_assert(offsetof(FSproutLootMailEntry, SubjectMessageId) == 4, "Offset mismatch for FSproutLootMailEntry::SubjectMessageId");
static_assert(offsetof(FSproutLootMailEntry, BodyMessageId) == 12, "Offset mismatch for FSproutLootMailEntry::BodyMessageId");
static_assert(offsetof(FSproutLootMailEntry, AttachedAsset) == 20, "Offset mismatch for FSproutLootMailEntry::AttachedAsset");
static_assert(offsetof(FSproutLootMailEntry, AttachedAssetCount) == 28, "Offset mismatch for FSproutLootMailEntry::AttachedAssetCount");

// /Script/SproutNativeRuntime.SproutMailStringTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutMailStringTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FText WrappedString; // 0x0008 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FSproutMailStringTableRow, WrappedString) == 8, "Offset mismatch for FSproutMailStringTableRow::WrappedString");

// /Script/SproutNativeRuntime.SproutMailTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutMailTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SenderTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t MessageSubjectId[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    std::uint8_t MessageBodyId[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t PrimaryAssetId[0x8]; // 0x001C (Size: 0x8, Type: StructProperty)
    std::int32_t ItemCount; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutMailTableRow, SenderTag) == 8, "Offset mismatch for FSproutMailTableRow::SenderTag");
static_assert(offsetof(FSproutMailTableRow, MessageSubjectId) == 12, "Offset mismatch for FSproutMailTableRow::MessageSubjectId");
static_assert(offsetof(FSproutMailTableRow, MessageBodyId) == 20, "Offset mismatch for FSproutMailTableRow::MessageBodyId");
static_assert(offsetof(FSproutMailTableRow, PrimaryAssetId) == 28, "Offset mismatch for FSproutMailTableRow::PrimaryAssetId");
static_assert(offsetof(FSproutMailTableRow, ItemCount) == 36, "Offset mismatch for FSproutMailTableRow::ItemCount");
static_assert(offsetof(FSproutMailTableRow, bEnabled) == 40, "Offset mismatch for FSproutMailTableRow::bEnabled");

// /Script/SproutNativeRuntime.SproutNPCPawnComponent_DollHouseData
// Kind: ScriptStruct; super: none
struct FSproutNPCPawnComponent_DollHouseData
{
public:
    TWeakObjectPtr<void> SpawnerComponent; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DollHouseNPCMapData[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedOptions[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNPCPawnComponent_DollHouseData, SpawnerComponent) == 0, "Offset mismatch for FSproutNPCPawnComponent_DollHouseData::SpawnerComponent");
static_assert(offsetof(FSproutNPCPawnComponent_DollHouseData, DollHouseNPCMapData) == 8, "Offset mismatch for FSproutNPCPawnComponent_DollHouseData::DollHouseNPCMapData");
static_assert(offsetof(FSproutNPCPawnComponent_DollHouseData, CachedOptions) == 64, "Offset mismatch for FSproutNPCPawnComponent_DollHouseData::CachedOptions");

// /Script/SproutNativeRuntime.SproutNeighborhoodDescription
// Kind: ScriptStruct; super: none
struct FSproutNeighborhoodDescription
{
public:
    std::uint8_t NeighborhoodBadges[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNeighborhoodDescription, NeighborhoodBadges) == 0, "Offset mismatch for FSproutNeighborhoodDescription::NeighborhoodBadges");

// /Script/SproutNativeRuntime.SproutNeighborhoodHousingEntry
// Kind: ScriptStruct; super: none
struct FSproutNeighborhoodHousingEntry
{
public:
    std::uint8_t HousingEntry[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    FString LotActorName; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t OwnerID[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNeighborhoodHousingEntry, HousingEntry) == 0, "Offset mismatch for FSproutNeighborhoodHousingEntry::HousingEntry");
static_assert(offsetof(FSproutNeighborhoodHousingEntry, LotActorName) == 96, "Offset mismatch for FSproutNeighborhoodHousingEntry::LotActorName");
static_assert(offsetof(FSproutNeighborhoodHousingEntry, OwnerID) == 112, "Offset mismatch for FSproutNeighborhoodHousingEntry::OwnerID");

// /Script/SproutNativeRuntime.SproutNeighborhoodHousingSaveData
// Kind: ScriptStruct; super: none
struct FSproutNeighborhoodHousingSaveData
{
public:
    TMap<void*, void*> SavedHouses; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSproutNeighborhoodHousingSaveData, SavedHouses) == 0, "Offset mismatch for FSproutNeighborhoodHousingSaveData::SavedHouses");

// /Script/SproutNativeRuntime.SproutNeighborhoodKnowledge
// Kind: ScriptStruct; super: none
struct FSproutNeighborhoodKnowledge
{
public:
    std::uint8_t NeighborhoodId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastDescription[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t bIsFavorite; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvitedToVisit; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvitedToJoin; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x003B
    std::uint8_t LastTimeVisitied[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNeighborhoodKnowledge, NeighborhoodId) == 0, "Offset mismatch for FSproutNeighborhoodKnowledge::NeighborhoodId");
static_assert(offsetof(FSproutNeighborhoodKnowledge, LastDescription) == 16, "Offset mismatch for FSproutNeighborhoodKnowledge::LastDescription");
static_assert(offsetof(FSproutNeighborhoodKnowledge, bIsFavorite) == 56, "Offset mismatch for FSproutNeighborhoodKnowledge::bIsFavorite");
static_assert(offsetof(FSproutNeighborhoodKnowledge, bInvitedToVisit) == 57, "Offset mismatch for FSproutNeighborhoodKnowledge::bInvitedToVisit");
static_assert(offsetof(FSproutNeighborhoodKnowledge, bInvitedToJoin) == 58, "Offset mismatch for FSproutNeighborhoodKnowledge::bInvitedToJoin");
static_assert(offsetof(FSproutNeighborhoodKnowledge, LastTimeVisitied) == 64, "Offset mismatch for FSproutNeighborhoodKnowledge::LastTimeVisitied");

// /Script/SproutNativeRuntime.SproutNeighborhoodKnowledgeDescription
// Kind: ScriptStruct; super: none
struct FSproutNeighborhoodKnowledgeDescription
{
public:
    std::uint8_t Description[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t DescriptionTime[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNeighborhoodKnowledgeDescription, Description) == 0, "Offset mismatch for FSproutNeighborhoodKnowledgeDescription::Description");
static_assert(offsetof(FSproutNeighborhoodKnowledgeDescription, DescriptionTime) == 32, "Offset mismatch for FSproutNeighborhoodKnowledgeDescription::DescriptionTime");

// /Script/SproutNativeRuntime.SproutNeighborhoodKnowledgeEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutNeighborhoodKnowledgeEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t KnowledgeValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNeighborhoodKnowledgeEntry, KnowledgeValue) == 16, "Offset mismatch for FSproutNeighborhoodKnowledgeEntry::KnowledgeValue");

// /Script/SproutNativeRuntime.SproutNeighborhoodKnowledgeFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutNeighborhoodKnowledgeFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* SproutNeighborhoodInfo; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutNeighborhoodKnowledgeFastArray, Entries) == 72, "Offset mismatch for FSproutNeighborhoodKnowledgeFastArray::Entries");
static_assert(offsetof(FSproutNeighborhoodKnowledgeFastArray, SproutNeighborhoodInfo) == 88, "Offset mismatch for FSproutNeighborhoodKnowledgeFastArray::SproutNeighborhoodInfo");

// /Script/SproutNativeRuntime.SproutNeighborhoodManagerSaveData
// Kind: ScriptStruct; super: none
struct FSproutNeighborhoodManagerSaveData
{
public:
    std::uint8_t NeighborhoodId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> MemberList; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Description[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNeighborhoodManagerSaveData, NeighborhoodId) == 0, "Offset mismatch for FSproutNeighborhoodManagerSaveData::NeighborhoodId");
static_assert(offsetof(FSproutNeighborhoodManagerSaveData, MemberList) == 16, "Offset mismatch for FSproutNeighborhoodManagerSaveData::MemberList");
static_assert(offsetof(FSproutNeighborhoodManagerSaveData, Description) == 32, "Offset mismatch for FSproutNeighborhoodManagerSaveData::Description");

// /Script/SproutNativeRuntime.SproutNeighborhoodThemeRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutNeighborhoodThemeRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bThemeIsEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDefaultTheme; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000A
    std::uint8_t ThemeTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    TArray<void*> DataLayersToActivate; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutNeighborhoodThemeRow, bThemeIsEnabled) == 8, "Offset mismatch for FSproutNeighborhoodThemeRow::bThemeIsEnabled");
static_assert(offsetof(FSproutNeighborhoodThemeRow, bIsDefaultTheme) == 9, "Offset mismatch for FSproutNeighborhoodThemeRow::bIsDefaultTheme");
static_assert(offsetof(FSproutNeighborhoodThemeRow, ThemeTag) == 12, "Offset mismatch for FSproutNeighborhoodThemeRow::ThemeTag");
static_assert(offsetof(FSproutNeighborhoodThemeRow, DataLayersToActivate) == 16, "Offset mismatch for FSproutNeighborhoodThemeRow::DataLayersToActivate");

// /Script/SproutNativeRuntime.SproutNeighborhoodThemeSaveData
// Kind: ScriptStruct; super: none
struct FSproutNeighborhoodThemeSaveData
{
public:
    std::uint8_t ActiveTheme[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNeighborhoodThemeSaveData, ActiveTheme) == 0, "Offset mismatch for FSproutNeighborhoodThemeSaveData::ActiveTheme");

// /Script/SproutNativeRuntime.SproutNotification
// Kind: ScriptStruct; super: none
struct FSproutNotification
{
public:
    std::uint8_t MessageId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Timestamp[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutNotification, MessageId) == 0, "Offset mismatch for FSproutNotification::MessageId");
static_assert(offsetof(FSproutNotification, Timestamp) == 8, "Offset mismatch for FSproutNotification::Timestamp");

// /Script/SproutNativeRuntime.SproutObjectiveFilter_FailedRequest
// Kind: ScriptStruct; super: ObjectiveFilter
struct FSproutObjectiveFilter_FailedRequest
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t RequestTagQuery[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutObjectiveFilter_FailedRequest, RequestTagQuery) == 160, "Offset mismatch for FSproutObjectiveFilter_FailedRequest::RequestTagQuery");

// /Script/SproutNativeRuntime.SproutObjectiveFilter_FulfilledOtherRequest
// Kind: ScriptStruct; super: ObjectiveFilter
struct FSproutObjectiveFilter_FulfilledOtherRequest
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t RequestTagQuery[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExtraTagsQuery[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequesterActor[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutObjectiveFilter_FulfilledOtherRequest, RequestTagQuery) == 160, "Offset mismatch for FSproutObjectiveFilter_FulfilledOtherRequest::RequestTagQuery");
static_assert(offsetof(FSproutObjectiveFilter_FulfilledOtherRequest, ExtraTagsQuery) == 232, "Offset mismatch for FSproutObjectiveFilter_FulfilledOtherRequest::ExtraTagsQuery");
static_assert(offsetof(FSproutObjectiveFilter_FulfilledOtherRequest, RequesterActor) == 304, "Offset mismatch for FSproutObjectiveFilter_FulfilledOtherRequest::RequesterActor");

// /Script/SproutNativeRuntime.SproutObjectiveFilter_ItemGiven
// Kind: ScriptStruct; super: ObjectiveFilter
struct FSproutObjectiveFilter_ItemGiven
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t Item[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bIncrementByItemCount; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t Recipient[0x48]; // 0x00F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExtraTagsQuery[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutObjectiveFilter_ItemGiven, Item) == 160, "Offset mismatch for FSproutObjectiveFilter_ItemGiven::Item");
static_assert(offsetof(FSproutObjectiveFilter_ItemGiven, bIncrementByItemCount) == 232, "Offset mismatch for FSproutObjectiveFilter_ItemGiven::bIncrementByItemCount");
static_assert(offsetof(FSproutObjectiveFilter_ItemGiven, Recipient) == 240, "Offset mismatch for FSproutObjectiveFilter_ItemGiven::Recipient");
static_assert(offsetof(FSproutObjectiveFilter_ItemGiven, ExtraTagsQuery) == 312, "Offset mismatch for FSproutObjectiveFilter_ItemGiven::ExtraTagsQuery");

// /Script/SproutNativeRuntime.SproutObjectiveFilter_SelfRequestFulfilled
// Kind: ScriptStruct; super: ObjectiveFilter
struct FSproutObjectiveFilter_SelfRequestFulfilled
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t RequestTagQuery[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t ExtraTagsQuery[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t FulfillerActor[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutObjectiveFilter_SelfRequestFulfilled, RequestTagQuery) == 160, "Offset mismatch for FSproutObjectiveFilter_SelfRequestFulfilled::RequestTagQuery");
static_assert(offsetof(FSproutObjectiveFilter_SelfRequestFulfilled, ExtraTagsQuery) == 232, "Offset mismatch for FSproutObjectiveFilter_SelfRequestFulfilled::ExtraTagsQuery");
static_assert(offsetof(FSproutObjectiveFilter_SelfRequestFulfilled, FulfillerActor) == 304, "Offset mismatch for FSproutObjectiveFilter_SelfRequestFulfilled::FulfillerActor");

// /Script/SproutNativeRuntime.SproutObjectiveFilter_SetRequest
// Kind: ScriptStruct; super: ObjectiveFilter
struct FSproutObjectiveFilter_SetRequest
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t RequestTagQuery[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutObjectiveFilter_SetRequest, RequestTagQuery) == 160, "Offset mismatch for FSproutObjectiveFilter_SetRequest::RequestTagQuery");

// /Script/SproutNativeRuntime.SproutOneTimeMailTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutOneTimeMailTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName OneTimeEventID; // 0x0008 (Size: 0x8, Type: NameProperty)
    std::uint8_t TimeToStartSending[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t TimeToStopSending[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t Sender[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t SubjectMessageId[0x8]; // 0x0024 (Size: 0x8, Type: StructProperty)
    std::uint8_t BodyMessageId[0x8]; // 0x002C (Size: 0x8, Type: StructProperty)
    std::uint8_t AttachedAsset[0x8]; // 0x0034 (Size: 0x8, Type: StructProperty)
    std::int32_t AttachedAssetCount; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutOneTimeMailTableRow, OneTimeEventID) == 8, "Offset mismatch for FSproutOneTimeMailTableRow::OneTimeEventID");
static_assert(offsetof(FSproutOneTimeMailTableRow, TimeToStartSending) == 16, "Offset mismatch for FSproutOneTimeMailTableRow::TimeToStartSending");
static_assert(offsetof(FSproutOneTimeMailTableRow, TimeToStopSending) == 24, "Offset mismatch for FSproutOneTimeMailTableRow::TimeToStopSending");
static_assert(offsetof(FSproutOneTimeMailTableRow, Sender) == 32, "Offset mismatch for FSproutOneTimeMailTableRow::Sender");
static_assert(offsetof(FSproutOneTimeMailTableRow, SubjectMessageId) == 36, "Offset mismatch for FSproutOneTimeMailTableRow::SubjectMessageId");
static_assert(offsetof(FSproutOneTimeMailTableRow, BodyMessageId) == 44, "Offset mismatch for FSproutOneTimeMailTableRow::BodyMessageId");
static_assert(offsetof(FSproutOneTimeMailTableRow, AttachedAsset) == 52, "Offset mismatch for FSproutOneTimeMailTableRow::AttachedAsset");
static_assert(offsetof(FSproutOneTimeMailTableRow, AttachedAssetCount) == 60, "Offset mismatch for FSproutOneTimeMailTableRow::AttachedAssetCount");

// /Script/SproutNativeRuntime.SproutOverflowEntry
// Kind: ScriptStruct; super: none
struct FSproutOverflowEntry
{
public:
    std::uint8_t EntryId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Sender[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t AttachedAsset[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::int32_t AttachedAssetCount; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t TimeRecieved[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t SubjectMessage[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t BodyMessage[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAttachmentClaimed; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMessageRead; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutOverflowEntry, EntryId) == 0, "Offset mismatch for FSproutOverflowEntry::EntryId");
static_assert(offsetof(FSproutOverflowEntry, Sender) == 16, "Offset mismatch for FSproutOverflowEntry::Sender");
static_assert(offsetof(FSproutOverflowEntry, AttachedAsset) == 20, "Offset mismatch for FSproutOverflowEntry::AttachedAsset");
static_assert(offsetof(FSproutOverflowEntry, AttachedAssetCount) == 28, "Offset mismatch for FSproutOverflowEntry::AttachedAssetCount");
static_assert(offsetof(FSproutOverflowEntry, TimeRecieved) == 32, "Offset mismatch for FSproutOverflowEntry::TimeRecieved");
static_assert(offsetof(FSproutOverflowEntry, SubjectMessage) == 40, "Offset mismatch for FSproutOverflowEntry::SubjectMessage");
static_assert(offsetof(FSproutOverflowEntry, BodyMessage) == 48, "Offset mismatch for FSproutOverflowEntry::BodyMessage");
static_assert(offsetof(FSproutOverflowEntry, bAttachmentClaimed) == 56, "Offset mismatch for FSproutOverflowEntry::bAttachmentClaimed");
static_assert(offsetof(FSproutOverflowEntry, bMessageRead) == 57, "Offset mismatch for FSproutOverflowEntry::bMessageRead");

// /Script/SproutNativeRuntime.SproutOverflowFastArrayEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutOverflowFastArrayEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OverflowEntry[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutOverflowFastArrayEntry, OverflowEntry) == 16, "Offset mismatch for FSproutOverflowFastArrayEntry::OverflowEntry");

// /Script/SproutNativeRuntime.SproutOverflowInventoryFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutOverflowInventoryFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* InventoryOverflowComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutOverflowInventoryFastArray, Entries) == 72, "Offset mismatch for FSproutOverflowInventoryFastArray::Entries");
static_assert(offsetof(FSproutOverflowInventoryFastArray, InventoryOverflowComponent) == 88, "Offset mismatch for FSproutOverflowInventoryFastArray::InventoryOverflowComponent");

// /Script/SproutNativeRuntime.SproutPersistedJobProgressionEntry
// Kind: ScriptStruct; super: none
struct FSproutPersistedJobProgressionEntry
{
public:
    std::int32_t JobLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalExperienceGained; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bInitialTaskCompleted; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t GrantedLootBundles[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutPersistedJobProgressionEntry, JobLevel) == 0, "Offset mismatch for FSproutPersistedJobProgressionEntry::JobLevel");
static_assert(offsetof(FSproutPersistedJobProgressionEntry, TotalExperienceGained) == 4, "Offset mismatch for FSproutPersistedJobProgressionEntry::TotalExperienceGained");
static_assert(offsetof(FSproutPersistedJobProgressionEntry, bInitialTaskCompleted) == 8, "Offset mismatch for FSproutPersistedJobProgressionEntry::bInitialTaskCompleted");
static_assert(offsetof(FSproutPersistedJobProgressionEntry, GrantedLootBundles) == 16, "Offset mismatch for FSproutPersistedJobProgressionEntry::GrantedLootBundles");

// /Script/SproutNativeRuntime.SproutPersistedUnlockDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutPersistedUnlockDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t LockedAssetId[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t ItemDefinition[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TransientOwnershipTags[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutPersistedUnlockDataRow, LockedAssetId) == 8, "Offset mismatch for FSproutPersistedUnlockDataRow::LockedAssetId");
static_assert(offsetof(FSproutPersistedUnlockDataRow, ItemDefinition) == 16, "Offset mismatch for FSproutPersistedUnlockDataRow::ItemDefinition");
static_assert(offsetof(FSproutPersistedUnlockDataRow, TransientOwnershipTags) == 48, "Offset mismatch for FSproutPersistedUnlockDataRow::TransientOwnershipTags");

// /Script/SproutNativeRuntime.SproutPersistedUnlockRuntimeData
// Kind: ScriptStruct; super: none
struct FSproutPersistedUnlockRuntimeData
{
public:
    std::uint8_t TransientOwnershipTags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutPersistedUnlockRuntimeData, TransientOwnershipTags) == 0, "Offset mismatch for FSproutPersistedUnlockRuntimeData::TransientOwnershipTags");

// /Script/SproutNativeRuntime.SproutPettingThreshold
// Kind: ScriptStruct; super: none
struct FSproutPettingThreshold
{
public:
    std::uint8_t ThresholdQuality[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float ThresholdLimit; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutPettingThreshold, ThresholdQuality) == 0, "Offset mismatch for FSproutPettingThreshold::ThresholdQuality");
static_assert(offsetof(FSproutPettingThreshold, ThresholdLimit) == 4, "Offset mismatch for FSproutPettingThreshold::ThresholdLimit");

// /Script/SproutNativeRuntime.SproutPlayerCollectionsSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerCollectionsSaveData
{
public:
    TArray<void*> AllItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerCollectionsSaveData, AllItems) == 0, "Offset mismatch for FSproutPlayerCollectionsSaveData::AllItems");

// /Script/SproutNativeRuntime.SproutPlayerDollHouseNPCMapData
// Kind: ScriptStruct; super: none
struct FSproutPlayerDollHouseNPCMapData
{
public:
    std::uint8_t PlayerNetId[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t UniqueNPCTag[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutPlayerDollHouseNPCMapData, PlayerNetId) == 0, "Offset mismatch for FSproutPlayerDollHouseNPCMapData::PlayerNetId");
static_assert(offsetof(FSproutPlayerDollHouseNPCMapData, UniqueNPCTag) == 48, "Offset mismatch for FSproutPlayerDollHouseNPCMapData::UniqueNPCTag");

// /Script/SproutNativeRuntime.SproutPlayerDollHouseSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerDollHouseSaveData
{
public:
    TArray<void*> AllNPCs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerDollHouseSaveData, AllNPCs) == 0, "Offset mismatch for FSproutPlayerDollHouseSaveData::AllNPCs");

// /Script/SproutNativeRuntime.SproutPlayerEventsSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerEventsSaveData
{
public:
    TMap<void*, void*> BoolEvents; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> IntegerEvents; // 0x0010 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StringEvents; // 0x0020 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TimeEvents; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GuidEvents; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSproutPlayerEventsSaveData, BoolEvents) == 0, "Offset mismatch for FSproutPlayerEventsSaveData::BoolEvents");
static_assert(offsetof(FSproutPlayerEventsSaveData, IntegerEvents) == 16, "Offset mismatch for FSproutPlayerEventsSaveData::IntegerEvents");
static_assert(offsetof(FSproutPlayerEventsSaveData, StringEvents) == 32, "Offset mismatch for FSproutPlayerEventsSaveData::StringEvents");
static_assert(offsetof(FSproutPlayerEventsSaveData, TimeEvents) == 48, "Offset mismatch for FSproutPlayerEventsSaveData::TimeEvents");
static_assert(offsetof(FSproutPlayerEventsSaveData, GuidEvents) == 64, "Offset mismatch for FSproutPlayerEventsSaveData::GuidEvents");

// /Script/SproutNativeRuntime.SproutPlayerHouseSanctionData
// Kind: ScriptStruct; super: none
struct FSproutPlayerHouseSanctionData
{
public:
    std::uint8_t SanctionType; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSproutPlayerHouseSanctionData, SanctionType) == 0, "Offset mismatch for FSproutPlayerHouseSanctionData::SanctionType");

// /Script/SproutNativeRuntime.SproutPlayerHousingSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerHousingSaveData
{
public:
    TMap<void*, void*> SavedHouses; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSproutPlayerHousingSaveData, SavedHouses) == 0, "Offset mismatch for FSproutPlayerHousingSaveData::SavedHouses");

// /Script/SproutNativeRuntime.SproutPlayerInventoryOverflowSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerInventoryOverflowSaveData
{
public:
    TArray<void*> OverflowArray; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OneTimeMailEvents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerInventoryOverflowSaveData, OverflowArray) == 0, "Offset mismatch for FSproutPlayerInventoryOverflowSaveData::OverflowArray");
static_assert(offsetof(FSproutPlayerInventoryOverflowSaveData, OneTimeMailEvents) == 16, "Offset mismatch for FSproutPlayerInventoryOverflowSaveData::OneTimeMailEvents");

// /Script/SproutNativeRuntime.SproutPlayerInventorySaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerInventorySaveData
{
public:
    TArray<void*> SavedInventoryItems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerInventorySaveData, SavedInventoryItems) == 0, "Offset mismatch for FSproutPlayerInventorySaveData::SavedInventoryItems");

// /Script/SproutNativeRuntime.SproutPlayerJobProgressionSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerJobProgressionSaveData
{
public:
    TMap<void*, void*> JobProgressionMap; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSproutPlayerJobProgressionSaveData, JobProgressionMap) == 0, "Offset mismatch for FSproutPlayerJobProgressionSaveData::JobProgressionMap");

// /Script/SproutNativeRuntime.SproutPlayerNeighborhoodSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerNeighborhoodSaveData
{
public:
    std::uint8_t bIsMemberOfNeighborhood; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t HomeNeighborhoodId[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    TArray<void*> NeighborhoodKnowledge; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerNeighborhoodSaveData, bIsMemberOfNeighborhood) == 0, "Offset mismatch for FSproutPlayerNeighborhoodSaveData::bIsMemberOfNeighborhood");
static_assert(offsetof(FSproutPlayerNeighborhoodSaveData, HomeNeighborhoodId) == 4, "Offset mismatch for FSproutPlayerNeighborhoodSaveData::HomeNeighborhoodId");
static_assert(offsetof(FSproutPlayerNeighborhoodSaveData, NeighborhoodKnowledge) == 24, "Offset mismatch for FSproutPlayerNeighborhoodSaveData::NeighborhoodKnowledge");

// /Script/SproutNativeRuntime.SproutPlayerPersistedUnlocksSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerPersistedUnlocksSaveData
{
public:
    TArray<void*> UnlockedAssets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerPersistedUnlocksSaveData, UnlockedAssets) == 0, "Offset mismatch for FSproutPlayerPersistedUnlocksSaveData::UnlockedAssets");

// /Script/SproutNativeRuntime.SproutPlayerReactedToHouseEventMessage
// Kind: ScriptStruct; super: none
struct FSproutPlayerReactedToHouseEventMessage
{
public:
    void* ReactingPlayer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* OwningPlayer; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HouseId[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t NewVote[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t OldVote[0x4]; // 0x0024 (Size: 0x4, Type: StructProperty)
    std::uint8_t bFirstVote; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutPlayerReactedToHouseEventMessage, ReactingPlayer) == 0, "Offset mismatch for FSproutPlayerReactedToHouseEventMessage::ReactingPlayer");
static_assert(offsetof(FSproutPlayerReactedToHouseEventMessage, OwningPlayer) == 8, "Offset mismatch for FSproutPlayerReactedToHouseEventMessage::OwningPlayer");
static_assert(offsetof(FSproutPlayerReactedToHouseEventMessage, HouseId) == 16, "Offset mismatch for FSproutPlayerReactedToHouseEventMessage::HouseId");
static_assert(offsetof(FSproutPlayerReactedToHouseEventMessage, NewVote) == 32, "Offset mismatch for FSproutPlayerReactedToHouseEventMessage::NewVote");
static_assert(offsetof(FSproutPlayerReactedToHouseEventMessage, OldVote) == 36, "Offset mismatch for FSproutPlayerReactedToHouseEventMessage::OldVote");
static_assert(offsetof(FSproutPlayerReactedToHouseEventMessage, bFirstVote) == 40, "Offset mismatch for FSproutPlayerReactedToHouseEventMessage::bFirstVote");

// /Script/SproutNativeRuntime.SproutPlayerRoommatesSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerRoommatesSaveData
{
public:
    TArray<void*> Roommates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerRoommatesSaveData, Roommates) == 0, "Offset mismatch for FSproutPlayerRoommatesSaveData::Roommates");

// /Script/SproutNativeRuntime.SproutPlayerSanctionedSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerSanctionedSaveData
{
public:
    TMap<void*, void*> SanctionedHouseSaves; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSproutPlayerSanctionedSaveData, SanctionedHouseSaves) == 0, "Offset mismatch for FSproutPlayerSanctionedSaveData::SanctionedHouseSaves");

// /Script/SproutNativeRuntime.SproutPlayerSessionSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerSessionSaveData
{
public:
    FString LatestGameSessionId; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSproutPlayerSessionSaveData, LatestGameSessionId) == 0, "Offset mismatch for FSproutPlayerSessionSaveData::LatestGameSessionId");

// /Script/SproutNativeRuntime.SproutPlayerUGCUsersSaveData
// Kind: ScriptStruct; super: none
struct FSproutPlayerUGCUsersSaveData
{
public:
    TArray<void*> UGCUsers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutPlayerUGCUsersSaveData, UGCUsers) == 0, "Offset mismatch for FSproutPlayerUGCUsersSaveData::UGCUsers");

// /Script/SproutNativeRuntime.SproutPlayerVehicleManagementEntry
// Kind: ScriptStruct; super: none
struct FSproutPlayerVehicleManagementEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutPurchaseRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutPurchaseRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ItemDefinition[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutPurchaseRow, ItemDefinition) == 8, "Offset mismatch for FSproutPurchaseRow::ItemDefinition");
static_assert(offsetof(FSproutPurchaseRow, bEnabled) == 40, "Offset mismatch for FSproutPurchaseRow::bEnabled");

// /Script/SproutNativeRuntime.SproutRecipeData
// Kind: ScriptStruct; super: none
struct FSproutRecipeData
{
public:
    std::uint8_t ResultItem[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CookTopTag[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t IngredientTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutRecipeData, ResultItem) == 0, "Offset mismatch for FSproutRecipeData::ResultItem");
static_assert(offsetof(FSproutRecipeData, CookTopTag) == 32, "Offset mismatch for FSproutRecipeData::CookTopTag");
static_assert(offsetof(FSproutRecipeData, IngredientTags) == 40, "Offset mismatch for FSproutRecipeData::IngredientTags");

// /Script/SproutNativeRuntime.SproutRequestAndCost
// Kind: ScriptStruct; super: none
struct FSproutRequestAndCost
{
public:
    std::uint8_t Request[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::int32_t Cost; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t CanAfford; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutRequestAndCost, Request) == 0, "Offset mismatch for FSproutRequestAndCost::Request");
static_assert(offsetof(FSproutRequestAndCost, Cost) == 20, "Offset mismatch for FSproutRequestAndCost::Cost");
static_assert(offsetof(FSproutRequestAndCost, CanAfford) == 24, "Offset mismatch for FSproutRequestAndCost::CanAfford");

// /Script/SproutNativeRuntime.SproutRequestAutomaticRequestsData
// Kind: ScriptStruct; super: none
struct FSproutRequestAutomaticRequestsData
{
public:
    std::uint8_t Weight; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Condition[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutRequestAutomaticRequestsData, Weight) == 0, "Offset mismatch for FSproutRequestAutomaticRequestsData::Weight");
static_assert(offsetof(FSproutRequestAutomaticRequestsData, Condition) == 8, "Offset mismatch for FSproutRequestAutomaticRequestsData::Condition");

// /Script/SproutNativeRuntime.SproutRequestDynamicRewardMultiplier
// Kind: ScriptStruct; super: none
struct FSproutRequestDynamicRewardMultiplier
{
public:
    std::uint8_t RequestTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t SubjectTagsQuery[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t ContextTagsQuery[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    std::int32_t RewardsMultiplier; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x00DC
    std::uint8_t VerbExtraTags[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutRequestDynamicRewardMultiplier, RequestTagQuery) == 0, "Offset mismatch for FSproutRequestDynamicRewardMultiplier::RequestTagQuery");
static_assert(offsetof(FSproutRequestDynamicRewardMultiplier, SubjectTagsQuery) == 72, "Offset mismatch for FSproutRequestDynamicRewardMultiplier::SubjectTagsQuery");
static_assert(offsetof(FSproutRequestDynamicRewardMultiplier, ContextTagsQuery) == 144, "Offset mismatch for FSproutRequestDynamicRewardMultiplier::ContextTagsQuery");
static_assert(offsetof(FSproutRequestDynamicRewardMultiplier, RewardsMultiplier) == 216, "Offset mismatch for FSproutRequestDynamicRewardMultiplier::RewardsMultiplier");
static_assert(offsetof(FSproutRequestDynamicRewardMultiplier, VerbExtraTags) == 224, "Offset mismatch for FSproutRequestDynamicRewardMultiplier::VerbExtraTags");

// /Script/SproutNativeRuntime.SproutRequestRuntime
// Kind: ScriptStruct; super: none
struct FSproutRequestRuntime
{
public:
    std::uint8_t RequestTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float StartTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PickedInJobVolumeJobTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::int32_t PickedForJobLevel; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutRequestRuntime, RequestTag) == 0, "Offset mismatch for FSproutRequestRuntime::RequestTag");
static_assert(offsetof(FSproutRequestRuntime, StartTime) == 4, "Offset mismatch for FSproutRequestRuntime::StartTime");
static_assert(offsetof(FSproutRequestRuntime, EndTime) == 8, "Offset mismatch for FSproutRequestRuntime::EndTime");
static_assert(offsetof(FSproutRequestRuntime, PickedInJobVolumeJobTag) == 12, "Offset mismatch for FSproutRequestRuntime::PickedInJobVolumeJobTag");
static_assert(offsetof(FSproutRequestRuntime, PickedForJobLevel) == 16, "Offset mismatch for FSproutRequestRuntime::PickedForJobLevel");

// /Script/SproutNativeRuntime.SproutRequestTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutRequestTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RequestTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t RequiredJobLevel; // 0x000C (Size: 0x4, Type: IntProperty)
    TArray<void*> VerbFilters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t VerbAuthorCategories; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t VerbSubjectsRequirement; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t JobLocationTagQuery[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    std::uint8_t CTATags[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::int32_t Cost; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    TArray<void*> AutomaticRequestsData; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutRequestTableRow, RequestTag) == 8, "Offset mismatch for FSproutRequestTableRow::RequestTag");
static_assert(offsetof(FSproutRequestTableRow, RequiredJobLevel) == 12, "Offset mismatch for FSproutRequestTableRow::RequiredJobLevel");
static_assert(offsetof(FSproutRequestTableRow, VerbFilters) == 16, "Offset mismatch for FSproutRequestTableRow::VerbFilters");
static_assert(offsetof(FSproutRequestTableRow, VerbAuthorCategories) == 32, "Offset mismatch for FSproutRequestTableRow::VerbAuthorCategories");
static_assert(offsetof(FSproutRequestTableRow, VerbSubjectsRequirement) == 36, "Offset mismatch for FSproutRequestTableRow::VerbSubjectsRequirement");
static_assert(offsetof(FSproutRequestTableRow, JobLocationTagQuery) == 40, "Offset mismatch for FSproutRequestTableRow::JobLocationTagQuery");
static_assert(offsetof(FSproutRequestTableRow, CTATags) == 112, "Offset mismatch for FSproutRequestTableRow::CTATags");
static_assert(offsetof(FSproutRequestTableRow, Cost) == 144, "Offset mismatch for FSproutRequestTableRow::Cost");
static_assert(offsetof(FSproutRequestTableRow, AutomaticRequestsData) == 152, "Offset mismatch for FSproutRequestTableRow::AutomaticRequestsData");

// /Script/SproutNativeRuntime.SproutRewardEntry_JobExperience
// Kind: ScriptStruct; super: FortRewardEntry
struct FSproutRewardEntry_JobExperience
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t JobTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::int32_t ExperiencePoints; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutRewardEntry_JobExperience, JobTags) == 16, "Offset mismatch for FSproutRewardEntry_JobExperience::JobTags");
static_assert(offsetof(FSproutRewardEntry_JobExperience, ExperiencePoints) == 48, "Offset mismatch for FSproutRewardEntry_JobExperience::ExperiencePoints");

// /Script/SproutNativeRuntime.SproutRewardEntry_LootBundle
// Kind: ScriptStruct; super: FortRewardEntry
struct FSproutRewardEntry_LootBundle
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t LootBundleIdentifiers[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutRewardEntry_LootBundle, LootBundleIdentifiers) == 16, "Offset mismatch for FSproutRewardEntry_LootBundle::LootBundleIdentifiers");

// /Script/SproutNativeRuntime.SproutRewardEntry_Mail
// Kind: ScriptStruct; super: FortRewardEntry
struct FSproutRewardEntry_Mail
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Sender[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t SubjectMessageId[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t BodyMessageId[0x8]; // 0x001C (Size: 0x8, Type: StructProperty)
    std::uint8_t AttachedAsset[0x8]; // 0x0024 (Size: 0x8, Type: StructProperty)
    std::int32_t AttachedAssetCount; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutRewardEntry_Mail, Sender) == 16, "Offset mismatch for FSproutRewardEntry_Mail::Sender");
static_assert(offsetof(FSproutRewardEntry_Mail, SubjectMessageId) == 20, "Offset mismatch for FSproutRewardEntry_Mail::SubjectMessageId");
static_assert(offsetof(FSproutRewardEntry_Mail, BodyMessageId) == 28, "Offset mismatch for FSproutRewardEntry_Mail::BodyMessageId");
static_assert(offsetof(FSproutRewardEntry_Mail, AttachedAsset) == 36, "Offset mismatch for FSproutRewardEntry_Mail::AttachedAsset");
static_assert(offsetof(FSproutRewardEntry_Mail, AttachedAssetCount) == 44, "Offset mismatch for FSproutRewardEntry_Mail::AttachedAssetCount");

// /Script/SproutNativeRuntime.SproutSavedInventoryItem
// Kind: ScriptStruct; super: none
struct FSproutSavedInventoryItem
{
public:
    std::uint8_t ItemID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int32_t ItemCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t ItemData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutSavedInventoryItem, ItemID) == 0, "Offset mismatch for FSproutSavedInventoryItem::ItemID");
static_assert(offsetof(FSproutSavedInventoryItem, ItemCount) == 8, "Offset mismatch for FSproutSavedInventoryItem::ItemCount");
static_assert(offsetof(FSproutSavedInventoryItem, ItemData) == 16, "Offset mismatch for FSproutSavedInventoryItem::ItemData");

// /Script/SproutNativeRuntime.SproutSavedInventoryPairs
// Kind: ScriptStruct; super: none
struct FSproutSavedInventoryPairs
{
public:
    std::uint8_t InventoryItem[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int32_t Quantity; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutSavedInventoryPairs, InventoryItem) == 0, "Offset mismatch for FSproutSavedInventoryPairs::InventoryItem");
static_assert(offsetof(FSproutSavedInventoryPairs, Quantity) == 8, "Offset mismatch for FSproutSavedInventoryPairs::Quantity");

// /Script/SproutNativeRuntime.SproutSingleHousingEntry
// Kind: ScriptStruct; super: none
struct FSproutSingleHousingEntry
{
public:
    std::uint8_t BinarySaveData[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FName HousingShellID; // 0x0010 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> DecorPlacedItems; // 0x0018 (Size: 0x10, Type: MapProperty)
    TArray<void*> HouseReactions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EditPermissions[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t NeighborhoodId[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutSingleHousingEntry, BinarySaveData) == 0, "Offset mismatch for FSproutSingleHousingEntry::BinarySaveData");
static_assert(offsetof(FSproutSingleHousingEntry, HousingShellID) == 16, "Offset mismatch for FSproutSingleHousingEntry::HousingShellID");
static_assert(offsetof(FSproutSingleHousingEntry, DecorPlacedItems) == 24, "Offset mismatch for FSproutSingleHousingEntry::DecorPlacedItems");
static_assert(offsetof(FSproutSingleHousingEntry, HouseReactions) == 40, "Offset mismatch for FSproutSingleHousingEntry::HouseReactions");
static_assert(offsetof(FSproutSingleHousingEntry, EditPermissions) == 56, "Offset mismatch for FSproutSingleHousingEntry::EditPermissions");
static_assert(offsetof(FSproutSingleHousingEntry, NeighborhoodId) == 80, "Offset mismatch for FSproutSingleHousingEntry::NeighborhoodId");

// /Script/SproutNativeRuntime.SproutStateTreeItemExchangeItemsConfiguration
// Kind: ScriptStruct; super: none
struct FSproutStateTreeItemExchangeItemsConfiguration
{
public:
    TArray<void*> ItemsToConsumeQuery; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bGiveConsumedItems; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    TArray<void*> ItemsToGive; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    FName LootTierGroupToGive; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSproutStateTreeItemExchangeItemsConfiguration, ItemsToConsumeQuery) == 0, "Offset mismatch for FSproutStateTreeItemExchangeItemsConfiguration::ItemsToConsumeQuery");
static_assert(offsetof(FSproutStateTreeItemExchangeItemsConfiguration, bGiveConsumedItems) == 16, "Offset mismatch for FSproutStateTreeItemExchangeItemsConfiguration::bGiveConsumedItems");
static_assert(offsetof(FSproutStateTreeItemExchangeItemsConfiguration, ItemsToGive) == 24, "Offset mismatch for FSproutStateTreeItemExchangeItemsConfiguration::ItemsToGive");
static_assert(offsetof(FSproutStateTreeItemExchangeItemsConfiguration, LootTierGroupToGive) == 40, "Offset mismatch for FSproutStateTreeItemExchangeItemsConfiguration::LootTierGroupToGive");

// /Script/SproutNativeRuntime.SproutStateTreeItemExchangeTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FSproutStateTreeItemExchangeTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Trigger; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFailOnItemGiveFailure; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDontConsumeItemOnFailingGivingItems; // 0x002A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutStateTreeItemExchangeTask, Trigger) == 40, "Offset mismatch for FSproutStateTreeItemExchangeTask::Trigger");
static_assert(offsetof(FSproutStateTreeItemExchangeTask, bFailOnItemGiveFailure) == 41, "Offset mismatch for FSproutStateTreeItemExchangeTask::bFailOnItemGiveFailure");
static_assert(offsetof(FSproutStateTreeItemExchangeTask, bDontConsumeItemOnFailingGivingItems) == 42, "Offset mismatch for FSproutStateTreeItemExchangeTask::bDontConsumeItemOnFailingGivingItems");

// /Script/SproutNativeRuntime.SproutStateTreeItemExchangeTaskInstanceData
// Kind: ScriptStruct; super: none
struct FSproutStateTreeItemExchangeTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* TargetActor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAddDirectlyToInventoryIfPossible; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    TArray<void*> PossibleConfigurations; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutStateTreeItemExchangeTaskInstanceData, Actor) == 0, "Offset mismatch for FSproutStateTreeItemExchangeTaskInstanceData::Actor");
static_assert(offsetof(FSproutStateTreeItemExchangeTaskInstanceData, UserActor) == 8, "Offset mismatch for FSproutStateTreeItemExchangeTaskInstanceData::UserActor");
static_assert(offsetof(FSproutStateTreeItemExchangeTaskInstanceData, TargetActor) == 16, "Offset mismatch for FSproutStateTreeItemExchangeTaskInstanceData::TargetActor");
static_assert(offsetof(FSproutStateTreeItemExchangeTaskInstanceData, bAddDirectlyToInventoryIfPossible) == 24, "Offset mismatch for FSproutStateTreeItemExchangeTaskInstanceData::bAddDirectlyToInventoryIfPossible");
static_assert(offsetof(FSproutStateTreeItemExchangeTaskInstanceData, PossibleConfigurations) == 32, "Offset mismatch for FSproutStateTreeItemExchangeTaskInstanceData::PossibleConfigurations");

// /Script/SproutNativeRuntime.SproutStateTreeProcessActivityStateRewardsStateTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FSproutStateTreeProcessActivityStateRewardsStateTask
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bFailTaskOnRewardProcessingFailure; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutStateTreeProcessActivityStateRewardsStateTask, bFailTaskOnRewardProcessingFailure) == 40, "Offset mismatch for FSproutStateTreeProcessActivityStateRewardsStateTask::bFailTaskOnRewardProcessingFailure");

// /Script/SproutNativeRuntime.SproutStateTreeProcessActivityStateRewardsTaskInstanceData
// Kind: ScriptStruct; super: none
struct FSproutStateTreeProcessActivityStateRewardsTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutStateTreeProcessActivityStateRewardsTaskInstanceData, Actor) == 0, "Offset mismatch for FSproutStateTreeProcessActivityStateRewardsTaskInstanceData::Actor");
static_assert(offsetof(FSproutStateTreeProcessActivityStateRewardsTaskInstanceData, UserActor) == 8, "Offset mismatch for FSproutStateTreeProcessActivityStateRewardsTaskInstanceData::UserActor");

// /Script/SproutNativeRuntime.SproutStateTreeSetActivityStateTask
// Kind: ScriptStruct; super: StateTreeTaskCommonBase
struct FSproutStateTreeSetActivityStateTask
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t bTaskEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTaskCompletionDelegateDispatcher; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransitionHandlingPriority; // 0x0022 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSproutStateTreeSetActivityStateTask, bTaskEnabled) == 32, "Offset mismatch for FSproutStateTreeSetActivityStateTask::bTaskEnabled");
static_assert(offsetof(FSproutStateTreeSetActivityStateTask, bHasTaskCompletionDelegateDispatcher) == 33, "Offset mismatch for FSproutStateTreeSetActivityStateTask::bHasTaskCompletionDelegateDispatcher");
static_assert(offsetof(FSproutStateTreeSetActivityStateTask, TransitionHandlingPriority) == 34, "Offset mismatch for FSproutStateTreeSetActivityStateTask::TransitionHandlingPriority");

// /Script/SproutNativeRuntime.SproutStateTreeSetActivityStateTaskInstanceData
// Kind: ScriptStruct; super: none
struct FSproutStateTreeSetActivityStateTaskInstanceData
{
public:
    void* Actor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* UserActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CategoryTag[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewState[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutStateTreeSetActivityStateTaskInstanceData, Actor) == 0, "Offset mismatch for FSproutStateTreeSetActivityStateTaskInstanceData::Actor");
static_assert(offsetof(FSproutStateTreeSetActivityStateTaskInstanceData, UserActor) == 8, "Offset mismatch for FSproutStateTreeSetActivityStateTaskInstanceData::UserActor");
static_assert(offsetof(FSproutStateTreeSetActivityStateTaskInstanceData, CategoryTag) == 16, "Offset mismatch for FSproutStateTreeSetActivityStateTaskInstanceData::CategoryTag");
static_assert(offsetof(FSproutStateTreeSetActivityStateTaskInstanceData, NewState) == 20, "Offset mismatch for FSproutStateTreeSetActivityStateTaskInstanceData::NewState");

// /Script/SproutNativeRuntime.SproutTrendingJobsConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutTrendingJobsConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t JobsToBoost[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutTrendingJobsConfigTableRow, JobsToBoost) == 8, "Offset mismatch for FSproutTrendingJobsConfigTableRow::JobsToBoost");

// /Script/SproutNativeRuntime.SproutTrendingLootEntry
// Kind: ScriptStruct; super: none
struct FSproutTrendingLootEntry
{
public:
    std::uint8_t LootEntry[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldStompIdenticalLootItemRewards; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutTrendingLootEntry, LootEntry) == 0, "Offset mismatch for FSproutTrendingLootEntry::LootEntry");
static_assert(offsetof(FSproutTrendingLootEntry, bShouldStompIdenticalLootItemRewards) == 40, "Offset mismatch for FSproutTrendingLootEntry::bShouldStompIdenticalLootItemRewards");

// /Script/SproutNativeRuntime.SproutVehicleConfigTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutVehicleConfigTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> VehicleItemDefinition; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSproutVehicleConfigTableRow, VehicleItemDefinition) == 8, "Offset mismatch for FSproutVehicleConfigTableRow::VehicleItemDefinition");

// /Script/SproutNativeRuntime.SproutVehicleSpawnRequestParams
// Kind: ScriptStruct; super: none
struct FSproutVehicleSpawnRequestParams
{
public:
    TWeakObjectPtr<void> VehicleDefinition; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    float GroundHeightOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSproutVehicleSpawnRequestParams, VehicleDefinition) == 0, "Offset mismatch for FSproutVehicleSpawnRequestParams::VehicleDefinition");
static_assert(offsetof(FSproutVehicleSpawnRequestParams, GroundHeightOffset) == 8, "Offset mismatch for FSproutVehicleSpawnRequestParams::GroundHeightOffset");

// /Script/SproutNativeRuntime.SproutVerbMessage_FailedRequest
// Kind: ScriptStruct; super: VerbMessage
struct FSproutVerbMessage_FailedRequest
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t RequestTag[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutVerbMessage_FailedRequest, RequestTag) == 120, "Offset mismatch for FSproutVerbMessage_FailedRequest::RequestTag");

// /Script/SproutNativeRuntime.SproutVerbMessage_FulfilledOtherRequest
// Kind: ScriptStruct; super: VerbMessage
struct FSproutVerbMessage_FulfilledOtherRequest
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t RequestTag[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExtraTags[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequesterActor[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutVerbMessage_FulfilledOtherRequest, RequestTag) == 120, "Offset mismatch for FSproutVerbMessage_FulfilledOtherRequest::RequestTag");
static_assert(offsetof(FSproutVerbMessage_FulfilledOtherRequest, ExtraTags) == 128, "Offset mismatch for FSproutVerbMessage_FulfilledOtherRequest::ExtraTags");
static_assert(offsetof(FSproutVerbMessage_FulfilledOtherRequest, RequesterActor) == 160, "Offset mismatch for FSproutVerbMessage_FulfilledOtherRequest::RequesterActor");

// /Script/SproutNativeRuntime.SproutVerbMessage_ItemGiven
// Kind: ScriptStruct; super: VerbMessage
struct FSproutVerbMessage_ItemGiven
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t Amount; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x007C
    std::uint8_t Recipient[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t Item[0x38]; // 0x00B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtraTags[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutVerbMessage_ItemGiven, Amount) == 120, "Offset mismatch for FSproutVerbMessage_ItemGiven::Amount");
static_assert(offsetof(FSproutVerbMessage_ItemGiven, Recipient) == 128, "Offset mismatch for FSproutVerbMessage_ItemGiven::Recipient");
static_assert(offsetof(FSproutVerbMessage_ItemGiven, Item) == 184, "Offset mismatch for FSproutVerbMessage_ItemGiven::Item");
static_assert(offsetof(FSproutVerbMessage_ItemGiven, ExtraTags) == 240, "Offset mismatch for FSproutVerbMessage_ItemGiven::ExtraTags");

// /Script/SproutNativeRuntime.SproutVerbMessage_SelfRequestFulfilled
// Kind: ScriptStruct; super: VerbMessage
struct FSproutVerbMessage_SelfRequestFulfilled
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t RequestTag[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    std::uint8_t ExtraTags[0x20]; // 0x0080 (Size: 0x20, Type: StructProperty)
    std::uint8_t FulfillerActor[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutVerbMessage_SelfRequestFulfilled, RequestTag) == 120, "Offset mismatch for FSproutVerbMessage_SelfRequestFulfilled::RequestTag");
static_assert(offsetof(FSproutVerbMessage_SelfRequestFulfilled, ExtraTags) == 128, "Offset mismatch for FSproutVerbMessage_SelfRequestFulfilled::ExtraTags");
static_assert(offsetof(FSproutVerbMessage_SelfRequestFulfilled, FulfillerActor) == 160, "Offset mismatch for FSproutVerbMessage_SelfRequestFulfilled::FulfillerActor");

// /Script/SproutNativeRuntime.SproutVerbMessage_SetRequest
// Kind: ScriptStruct; super: VerbMessage
struct FSproutVerbMessage_SetRequest
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t RequestTag[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutVerbMessage_SetRequest, RequestTag) == 120, "Offset mismatch for FSproutVerbMessage_SetRequest::RequestTag");

// /Script/SproutNativeRuntime.SproutWorkerJobExperienceChangeData
// Kind: ScriptStruct; super: none
struct FSproutWorkerJobExperienceChangeData
{
public:
    std::uint8_t ModifiedJobProgressionEntry[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::int32_t ResultExperiencePointDelta; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t bJobLevelChanged; // 0x004C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutWorkerJobExperienceChangeData, ModifiedJobProgressionEntry) == 0, "Offset mismatch for FSproutWorkerJobExperienceChangeData::ModifiedJobProgressionEntry");
static_assert(offsetof(FSproutWorkerJobExperienceChangeData, ResultExperiencePointDelta) == 72, "Offset mismatch for FSproutWorkerJobExperienceChangeData::ResultExperiencePointDelta");
static_assert(offsetof(FSproutWorkerJobExperienceChangeData, bJobLevelChanged) == 76, "Offset mismatch for FSproutWorkerJobExperienceChangeData::bJobLevelChanged");

// /Script/SproutNativeRuntime.SproutWorkerJobLevelChangeData
// Kind: ScriptStruct; super: none
struct FSproutWorkerJobLevelChangeData
{
public:
    std::int32_t PreviousJobLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NewJobLevel; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutWorkerJobLevelChangeData, PreviousJobLevel) == 0, "Offset mismatch for FSproutWorkerJobLevelChangeData::PreviousJobLevel");
static_assert(offsetof(FSproutWorkerJobLevelChangeData, NewJobLevel) == 4, "Offset mismatch for FSproutWorkerJobLevelChangeData::NewJobLevel");

// /Script/SproutNativeRuntime.SproutWorkerJobTagChangeData
// Kind: ScriptStruct; super: none
struct FSproutWorkerJobTagChangeData
{
public:
    std::uint8_t PlayerID[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t OldJobTags[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t NewJobTags[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutWorkerJobTagChangeData, PlayerID) == 0, "Offset mismatch for FSproutWorkerJobTagChangeData::PlayerID");
static_assert(offsetof(FSproutWorkerJobTagChangeData, OldJobTags) == 48, "Offset mismatch for FSproutWorkerJobTagChangeData::OldJobTags");
static_assert(offsetof(FSproutWorkerJobTagChangeData, NewJobTags) == 80, "Offset mismatch for FSproutWorkerJobTagChangeData::NewJobTags");

// /Script/SproutNativeRuntime.SproutWorkerJobTaskChangedData
// Kind: ScriptStruct; super: none
struct FSproutWorkerJobTaskChangedData
{
public:
    std::uint8_t OldJobTask[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t NewJobTask[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutWorkerJobTaskChangedData, OldJobTask) == 0, "Offset mismatch for FSproutWorkerJobTaskChangedData::OldJobTask");
static_assert(offsetof(FSproutWorkerJobTaskChangedData, NewJobTask) == 112, "Offset mismatch for FSproutWorkerJobTaskChangedData::NewJobTask");

// /Script/SproutNativeRuntime.SproutWorkerJobTaskCompletedData
// Kind: ScriptStruct; super: none
struct FSproutWorkerJobTaskCompletedData
{
public:
    std::uint8_t CurrentJobTask[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutWorkerJobTaskCompletedData, CurrentJobTask) == 0, "Offset mismatch for FSproutWorkerJobTaskCompletedData::CurrentJobTask");

// /Script/SproutNativeRuntime.SproutWorkerJobTaskCooldownChangeData
// Kind: ScriptStruct; super: none
struct FSproutWorkerJobTaskCooldownChangeData
{
public:
    std::uint8_t bIsCooldownActive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutWorkerJobTaskCooldownChangeData, bIsCooldownActive) == 0, "Offset mismatch for FSproutWorkerJobTaskCooldownChangeData::bIsCooldownActive");

// /Script/SproutNativeRuntime.SproutWorldConditionEvents
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FSproutWorldConditionEvents
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PlayerRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventKey[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t RequiresEventDateTime; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFailIfEventDateTimeNotValid; // 0x001D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutWorldConditionEvents, PlayerRef) == 16, "Offset mismatch for FSproutWorldConditionEvents::PlayerRef");
static_assert(offsetof(FSproutWorldConditionEvents, EventKey) == 24, "Offset mismatch for FSproutWorldConditionEvents::EventKey");
static_assert(offsetof(FSproutWorldConditionEvents, RequiresEventDateTime) == 28, "Offset mismatch for FSproutWorldConditionEvents::RequiresEventDateTime");
static_assert(offsetof(FSproutWorldConditionEvents, bFailIfEventDateTimeNotValid) == 29, "Offset mismatch for FSproutWorldConditionEvents::bFailIfEventDateTimeNotValid");

// /Script/SproutNativeRuntime.SproutWorldConditionHasInventorySpace
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FSproutWorldConditionHasInventorySpace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InventoryActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t QueryType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> ItemsToCheck; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SproutLootBundlesToCheck[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint32_t RequiredEmptySlots; // 0x0050 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bCheckOnlyQuickbarForPlayers; // 0x0054 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutWorldConditionHasInventorySpace, InventoryActorRef) == 16, "Offset mismatch for FSproutWorldConditionHasInventorySpace::InventoryActorRef");
static_assert(offsetof(FSproutWorldConditionHasInventorySpace, QueryType) == 24, "Offset mismatch for FSproutWorldConditionHasInventorySpace::QueryType");
static_assert(offsetof(FSproutWorldConditionHasInventorySpace, ItemsToCheck) == 32, "Offset mismatch for FSproutWorldConditionHasInventorySpace::ItemsToCheck");
static_assert(offsetof(FSproutWorldConditionHasInventorySpace, SproutLootBundlesToCheck) == 48, "Offset mismatch for FSproutWorldConditionHasInventorySpace::SproutLootBundlesToCheck");
static_assert(offsetof(FSproutWorldConditionHasInventorySpace, RequiredEmptySlots) == 80, "Offset mismatch for FSproutWorldConditionHasInventorySpace::RequiredEmptySlots");
static_assert(offsetof(FSproutWorldConditionHasInventorySpace, bCheckOnlyQuickbarForPlayers) == 84, "Offset mismatch for FSproutWorldConditionHasInventorySpace::bCheckOnlyQuickbarForPlayers");

// /Script/SproutNativeRuntime.SproutWorldConditionHasItem
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FSproutWorldConditionHasItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t InventoryActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    TArray<void*> RequiredConfigurations; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireAllConfigurationsToBeValid; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutWorldConditionHasItem, InventoryActorRef) == 16, "Offset mismatch for FSproutWorldConditionHasItem::InventoryActorRef");
static_assert(offsetof(FSproutWorldConditionHasItem, RequiredConfigurations) == 24, "Offset mismatch for FSproutWorldConditionHasItem::RequiredConfigurations");
static_assert(offsetof(FSproutWorldConditionHasItem, bRequireAllConfigurationsToBeValid) == 40, "Offset mismatch for FSproutWorldConditionHasItem::bRequireAllConfigurationsToBeValid");

// /Script/SproutNativeRuntime.SproutWorldConditionHousing
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FSproutWorldConditionHousing
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t ActorUsedForLocationRef[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t bRequiresHomeVolume; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresOwnedHomeVolume; // 0x0021 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutWorldConditionHousing, ActorRef) == 16, "Offset mismatch for FSproutWorldConditionHousing::ActorRef");
static_assert(offsetof(FSproutWorldConditionHousing, ActorUsedForLocationRef) == 24, "Offset mismatch for FSproutWorldConditionHousing::ActorUsedForLocationRef");
static_assert(offsetof(FSproutWorldConditionHousing, bRequiresHomeVolume) == 32, "Offset mismatch for FSproutWorldConditionHousing::bRequiresHomeVolume");
static_assert(offsetof(FSproutWorldConditionHousing, bRequiresOwnedHomeVolume) == 33, "Offset mismatch for FSproutWorldConditionHousing::bRequiresOwnedHomeVolume");

// /Script/SproutNativeRuntime.SproutWorldConditionJob
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FSproutWorldConditionJob
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t SpecificJobConditionPick; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t SpecificJobTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::int32_t MinJobLevel; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxJobLevel; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::uint8_t SpecificJobProgressionThresholdCheck; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpecificJobProgressionFlowCheck; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpecificJobPendingGatingTaskCheck; // 0x004A (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpecificJobInitialTaskCheck; // 0x004B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x4]; // 0x004C
    std::uint8_t JobVolumeJobTagQuery[0x48]; // 0x0050 (Size: 0x48, Type: StructProperty)
    std::uint8_t JobVolumeLocationTagQuery[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutWorldConditionJob, ActorRef) == 16, "Offset mismatch for FSproutWorldConditionJob::ActorRef");
static_assert(offsetof(FSproutWorldConditionJob, SpecificJobConditionPick) == 24, "Offset mismatch for FSproutWorldConditionJob::SpecificJobConditionPick");
static_assert(offsetof(FSproutWorldConditionJob, SpecificJobTags) == 32, "Offset mismatch for FSproutWorldConditionJob::SpecificJobTags");
static_assert(offsetof(FSproutWorldConditionJob, MinJobLevel) == 64, "Offset mismatch for FSproutWorldConditionJob::MinJobLevel");
static_assert(offsetof(FSproutWorldConditionJob, MaxJobLevel) == 68, "Offset mismatch for FSproutWorldConditionJob::MaxJobLevel");
static_assert(offsetof(FSproutWorldConditionJob, SpecificJobProgressionThresholdCheck) == 72, "Offset mismatch for FSproutWorldConditionJob::SpecificJobProgressionThresholdCheck");
static_assert(offsetof(FSproutWorldConditionJob, SpecificJobProgressionFlowCheck) == 73, "Offset mismatch for FSproutWorldConditionJob::SpecificJobProgressionFlowCheck");
static_assert(offsetof(FSproutWorldConditionJob, SpecificJobPendingGatingTaskCheck) == 74, "Offset mismatch for FSproutWorldConditionJob::SpecificJobPendingGatingTaskCheck");
static_assert(offsetof(FSproutWorldConditionJob, SpecificJobInitialTaskCheck) == 75, "Offset mismatch for FSproutWorldConditionJob::SpecificJobInitialTaskCheck");
static_assert(offsetof(FSproutWorldConditionJob, JobVolumeJobTagQuery) == 80, "Offset mismatch for FSproutWorldConditionJob::JobVolumeJobTagQuery");
static_assert(offsetof(FSproutWorldConditionJob, JobVolumeLocationTagQuery) == 152, "Offset mismatch for FSproutWorldConditionJob::JobVolumeLocationTagQuery");

// /Script/SproutNativeRuntime.SproutWorldConditionRequests
// Kind: ScriptStruct; super: WorldConditionCommonActorBase
struct FSproutWorldConditionRequests
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RequestActorRef[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t FulfillerActorRef[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t RequestTag[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t bFailsIfRequestActorHasNoRunningRequestAndNoRequestTag; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFailsIfFulfillerActorHasNoHandheld; // 0x0025 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSproutWorldConditionRequests, RequestActorRef) == 16, "Offset mismatch for FSproutWorldConditionRequests::RequestActorRef");
static_assert(offsetof(FSproutWorldConditionRequests, FulfillerActorRef) == 24, "Offset mismatch for FSproutWorldConditionRequests::FulfillerActorRef");
static_assert(offsetof(FSproutWorldConditionRequests, RequestTag) == 32, "Offset mismatch for FSproutWorldConditionRequests::RequestTag");
static_assert(offsetof(FSproutWorldConditionRequests, bFailsIfRequestActorHasNoRunningRequestAndNoRequestTag) == 36, "Offset mismatch for FSproutWorldConditionRequests::bFailsIfRequestActorHasNoRunningRequestAndNoRequestTag");
static_assert(offsetof(FSproutWorldConditionRequests, bFailsIfFulfillerActorHasNoHandheld) == 37, "Offset mismatch for FSproutWorldConditionRequests::bFailsIfFulfillerActorHasNoHandheld");

// /Script/SproutNativeRuntime.TrackedClass
// Kind: ScriptStruct; super: none
struct FTrackedClass
{
public:
    void* Class; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t InstanceCount; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t min; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t DebugColor[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTrackedClass, Class) == 0, "Offset mismatch for FTrackedClass::Class");
static_assert(offsetof(FTrackedClass, InstanceCount) == 8, "Offset mismatch for FTrackedClass::InstanceCount");
static_assert(offsetof(FTrackedClass, max) == 12, "Offset mismatch for FTrackedClass::max");
static_assert(offsetof(FTrackedClass, min) == 16, "Offset mismatch for FTrackedClass::min");
static_assert(offsetof(FTrackedClass, DebugColor) == 20, "Offset mismatch for FTrackedClass::DebugColor");

// /Script/SproutNativeRuntime.DollHouseLightStaticPointProvider
// Kind: Class; super: FortAthenaLivingWorldLightStaticPointProvider
class UDollHouseLightStaticPointProvider
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FMulticastInlineDelegate OnActorSpawned; // 0x0038 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventRequested_BP; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventSpawned_BP; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t SpawnLimiter[0x68]; // 0x0068 (Size: 0x68, Type: StructProperty)
    std::uint8_t FiltersTags[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bRandomizePointRotation; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t DebugInfo[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SpawnPoint[0x60]; // 0x0110 (Size: 0x60, Type: StructProperty)
    std::uint8_t DensityGridID[0x8]; // 0x0170 (Size: 0x8, Type: OptionalProperty)
    void* CachedGameState; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* CachedLivingWorldManager; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDollHouseLightStaticPointProvider, OnActorSpawned) == 56, "Offset mismatch for UDollHouseLightStaticPointProvider::OnActorSpawned");
static_assert(offsetof(UDollHouseLightStaticPointProvider, OnEventRequested_BP) == 72, "Offset mismatch for UDollHouseLightStaticPointProvider::OnEventRequested_BP");
static_assert(offsetof(UDollHouseLightStaticPointProvider, OnEventSpawned_BP) == 88, "Offset mismatch for UDollHouseLightStaticPointProvider::OnEventSpawned_BP");
static_assert(offsetof(UDollHouseLightStaticPointProvider, SpawnLimiter) == 104, "Offset mismatch for UDollHouseLightStaticPointProvider::SpawnLimiter");
static_assert(offsetof(UDollHouseLightStaticPointProvider, FiltersTags) == 208, "Offset mismatch for UDollHouseLightStaticPointProvider::FiltersTags");
static_assert(offsetof(UDollHouseLightStaticPointProvider, bRandomizePointRotation) == 240, "Offset mismatch for UDollHouseLightStaticPointProvider::bRandomizePointRotation");
static_assert(offsetof(UDollHouseLightStaticPointProvider, DebugInfo) == 248, "Offset mismatch for UDollHouseLightStaticPointProvider::DebugInfo");
static_assert(offsetof(UDollHouseLightStaticPointProvider, SpawnPoint) == 272, "Offset mismatch for UDollHouseLightStaticPointProvider::SpawnPoint");
static_assert(offsetof(UDollHouseLightStaticPointProvider, DensityGridID) == 368, "Offset mismatch for UDollHouseLightStaticPointProvider::DensityGridID");
static_assert(offsetof(UDollHouseLightStaticPointProvider, CachedGameState) == 376, "Offset mismatch for UDollHouseLightStaticPointProvider::CachedGameState");
static_assert(offsetof(UDollHouseLightStaticPointProvider, CachedLivingWorldManager) == 384, "Offset mismatch for UDollHouseLightStaticPointProvider::CachedLivingWorldManager");

// /Script/SproutNativeRuntime.DollHouseLivingWorldSpawnAction
// Kind: Class; super: FortAthenaLivingWorldSpawnAction
class UDollHouseLivingWorldSpawnAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.DollHouseSpawnerComponent
// Kind: Class; super: FortAthenaLivingWorldRuntimeStaticPointProviderComponent
class UDollHouseSpawnerComponent
{
public:
    std::uint8_t Pad_0000[0x1E8]; // 0x0000
    std::uint8_t SpawnOffset[0x18]; // 0x01E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DelayInSecondsAfterCloudLoad[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t DelayInSecondsAfterNewSpawn[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxWaitInSecondsForNoDirtyNavArea[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t FrequencyInSecondsForNoDirtyNavAreaChecks[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t NavAreaChecksExtent[0x18]; // 0x02A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DefaultUniqueNPCTag[0x4]; // 0x02B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t bSetToRandomPlayerWhenNoValidOwner; // 0x02BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireDirectInitialization; // 0x02BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreSpawnLimits; // 0x02BE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x02BF
    std::uint8_t RespawnOnPersistentDataChanged[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    TWeakObjectPtr<void> SpawnedNPC; // 0x02E8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PersistentSpawnerData[0x1]; // 0x02F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDollHouseSpawnerComponent, SpawnOffset) == 488, "Offset mismatch for UDollHouseSpawnerComponent::SpawnOffset");
static_assert(offsetof(UDollHouseSpawnerComponent, DelayInSecondsAfterCloudLoad) == 512, "Offset mismatch for UDollHouseSpawnerComponent::DelayInSecondsAfterCloudLoad");
static_assert(offsetof(UDollHouseSpawnerComponent, DelayInSecondsAfterNewSpawn) == 552, "Offset mismatch for UDollHouseSpawnerComponent::DelayInSecondsAfterNewSpawn");
static_assert(offsetof(UDollHouseSpawnerComponent, MaxWaitInSecondsForNoDirtyNavArea) == 592, "Offset mismatch for UDollHouseSpawnerComponent::MaxWaitInSecondsForNoDirtyNavArea");
static_assert(offsetof(UDollHouseSpawnerComponent, FrequencyInSecondsForNoDirtyNavAreaChecks) == 632, "Offset mismatch for UDollHouseSpawnerComponent::FrequencyInSecondsForNoDirtyNavAreaChecks");
static_assert(offsetof(UDollHouseSpawnerComponent, NavAreaChecksExtent) == 672, "Offset mismatch for UDollHouseSpawnerComponent::NavAreaChecksExtent");
static_assert(offsetof(UDollHouseSpawnerComponent, DefaultUniqueNPCTag) == 696, "Offset mismatch for UDollHouseSpawnerComponent::DefaultUniqueNPCTag");
static_assert(offsetof(UDollHouseSpawnerComponent, bSetToRandomPlayerWhenNoValidOwner) == 700, "Offset mismatch for UDollHouseSpawnerComponent::bSetToRandomPlayerWhenNoValidOwner");
static_assert(offsetof(UDollHouseSpawnerComponent, bRequireDirectInitialization) == 701, "Offset mismatch for UDollHouseSpawnerComponent::bRequireDirectInitialization");
static_assert(offsetof(UDollHouseSpawnerComponent, bIgnoreSpawnLimits) == 702, "Offset mismatch for UDollHouseSpawnerComponent::bIgnoreSpawnLimits");
static_assert(offsetof(UDollHouseSpawnerComponent, RespawnOnPersistentDataChanged) == 704, "Offset mismatch for UDollHouseSpawnerComponent::RespawnOnPersistentDataChanged");
static_assert(offsetof(UDollHouseSpawnerComponent, SpawnedNPC) == 744, "Offset mismatch for UDollHouseSpawnerComponent::SpawnedNPC");
static_assert(offsetof(UDollHouseSpawnerComponent, PersistentSpawnerData) == 752, "Offset mismatch for UDollHouseSpawnerComponent::PersistentSpawnerData");

// /Script/SproutNativeRuntime.FortAutomationRpcManager_Sprout
// Kind: Class; super: FortAutomationRpcManager
class UFortAutomationRpcManager_Sprout
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.FortGameStateComponent_SproutHousing
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_SproutHousing
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnHousingOwnershipInfoChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FName HousingShellRegistryType; // 0x00D0 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> SessionReactionVoteMap; // 0x00D8 (Size: 0x10, Type: MapProperty)
    TArray<void*> DecorReinitItemArray; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DecorReinitItemTable; // 0x00F8 (Size: 0x10, Type: MapProperty)
    TArray<void*> DecorRemapItemArray; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DecorRemapAssetTable; // 0x0118 (Size: 0x10, Type: MapProperty)
    void* InjectedObjectsWorldPartition; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InjectedLevels[0xA0]; // 0x0130 (Size: 0xA0, Type: StructProperty)
    std::uint8_t SproutHousingLotOwnershipArray[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameStateComponent_SproutHousing, OnHousingOwnershipInfoChanged) == 192, "Offset mismatch for UFortGameStateComponent_SproutHousing::OnHousingOwnershipInfoChanged");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, HousingShellRegistryType) == 208, "Offset mismatch for UFortGameStateComponent_SproutHousing::HousingShellRegistryType");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, SessionReactionVoteMap) == 216, "Offset mismatch for UFortGameStateComponent_SproutHousing::SessionReactionVoteMap");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, DecorReinitItemArray) == 232, "Offset mismatch for UFortGameStateComponent_SproutHousing::DecorReinitItemArray");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, DecorReinitItemTable) == 248, "Offset mismatch for UFortGameStateComponent_SproutHousing::DecorReinitItemTable");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, DecorRemapItemArray) == 264, "Offset mismatch for UFortGameStateComponent_SproutHousing::DecorRemapItemArray");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, DecorRemapAssetTable) == 280, "Offset mismatch for UFortGameStateComponent_SproutHousing::DecorRemapAssetTable");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, InjectedObjectsWorldPartition) == 296, "Offset mismatch for UFortGameStateComponent_SproutHousing::InjectedObjectsWorldPartition");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, InjectedLevels) == 304, "Offset mismatch for UFortGameStateComponent_SproutHousing::InjectedLevels");
static_assert(offsetof(UFortGameStateComponent_SproutHousing, SproutHousingLotOwnershipArray) == 464, "Offset mismatch for UFortGameStateComponent_SproutHousing::SproutHousingLotOwnershipArray");

// /Script/SproutNativeRuntime.JunoPlayerControllerComponent_SproutSessionAnalytics
// Kind: Class; super: JunoPlayerControllerComponent_SessionAnalytics
class UJunoPlayerControllerComponent_SproutSessionAnalytics
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    double JunoPlaySessionStartedTime; // 0x00F0 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> RecipesUnlockedDuringSession; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    float AccumulatedDistanceTraveled; // 0x0108 (Size: 0x4, Type: FloatProperty)
    float LastIdleCheckTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    float AccumulatedIdleTime; // 0x0110 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0114
    std::uint8_t LastPlayerPawnLocation[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    FString SavedDisconnectReason; // 0x0140 (Size: 0x10, Type: StrProperty)
    std::uint8_t GracefulShutdownInitiatedEventHandle[0x1C]; // 0x0150 (Size: 0x1C, Type: StructProperty)
    std::uint8_t bGracefulShutdownStarted; // 0x016C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x016D
    std::int32_t GracefulShutdownExitCode; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::int32_t GracefulShutdownMaxTime; // 0x0174 (Size: 0x4, Type: IntProperty)
    FString SavedPlayerPermadeathStatus; // 0x0178 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0188
    std::uint8_t PawnEliminatedEventHandle[0xB8]; // 0x0198 (Size: 0xB8, Type: StructProperty)
    float HeartbeatIntervalSeconds; // 0x0250 (Size: 0x4, Type: FloatProperty)
    float PlayerStatsUpdateIntervalSeconds; // 0x0254 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, JunoPlaySessionStartedTime) == 240, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::JunoPlaySessionStartedTime");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, RecipesUnlockedDuringSession) == 248, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::RecipesUnlockedDuringSession");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, AccumulatedDistanceTraveled) == 264, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::AccumulatedDistanceTraveled");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, LastIdleCheckTime) == 268, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::LastIdleCheckTime");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, AccumulatedIdleTime) == 272, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::AccumulatedIdleTime");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, LastPlayerPawnLocation) == 280, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::LastPlayerPawnLocation");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, SavedDisconnectReason) == 320, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::SavedDisconnectReason");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, GracefulShutdownInitiatedEventHandle) == 336, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::GracefulShutdownInitiatedEventHandle");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, bGracefulShutdownStarted) == 364, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::bGracefulShutdownStarted");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, GracefulShutdownExitCode) == 368, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::GracefulShutdownExitCode");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, GracefulShutdownMaxTime) == 372, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::GracefulShutdownMaxTime");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, SavedPlayerPermadeathStatus) == 376, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::SavedPlayerPermadeathStatus");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, PawnEliminatedEventHandle) == 408, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::PawnEliminatedEventHandle");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, HeartbeatIntervalSeconds) == 592, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::HeartbeatIntervalSeconds");
static_assert(offsetof(UJunoPlayerControllerComponent_SproutSessionAnalytics, PlayerStatsUpdateIntervalSeconds) == 596, "Offset mismatch for UJunoPlayerControllerComponent_SproutSessionAnalytics::PlayerStatsUpdateIntervalSeconds");

// /Script/SproutNativeRuntime.MuteInteractHandlerComponent
// Kind: Class; super: FortActorComponent_FortInteractExtension
class UMuteInteractHandlerComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t MuteOnInteractText[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t MuteOffInteractText[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SupportedInteractionType; // 0x00F8 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UMuteInteractHandlerComponent, MuteOnInteractText) == 216, "Offset mismatch for UMuteInteractHandlerComponent::MuteOnInteractText");
static_assert(offsetof(UMuteInteractHandlerComponent, MuteOffInteractText) == 232, "Offset mismatch for UMuteInteractHandlerComponent::MuteOffInteractText");
static_assert(offsetof(UMuteInteractHandlerComponent, SupportedInteractionType) == 248, "Offset mismatch for UMuteInteractHandlerComponent::SupportedInteractionType");

// /Script/SproutNativeRuntime.PlayspaceComponent_Root_SproutJobManagement
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_Root_SproutJobManagement
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    TMap<void*, void*> ActiveServerJobDataEntries; // 0x0118 (Size: 0x10, Type: MapProperty)
    std::uint8_t ActiveJobDataArray[0x98]; // 0x0128 (Size: 0x98, Type: StructProperty)
    TArray<void*> ReplicatedJobVolumeEntries; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x01D0
    std::uint8_t CurrentBoostedJobs[0x20]; // 0x01E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t PermanentBoostedJobs[0x20]; // 0x0208 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoostedJobExperienceRewardMultiplier[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostedJobCurrencyRewardMultiplier[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t BoostedJobNotificationId_Available[0x8]; // 0x0278 (Size: 0x8, Type: StructProperty)
    std::uint8_t BoostedJobsNotificationId_Unavailable[0x8]; // 0x0280 (Size: 0x8, Type: StructProperty)
    std::uint8_t TrendingJobsChangeEventTag[0x4]; // 0x0288 (Size: 0x4, Type: StructProperty)
    std::uint8_t TrendingJobsDatabaseRegistryType[0x4]; // 0x028C (Size: 0x4, Type: StructProperty)
    TArray<void*> ChosenTrendingJobsConfigIds; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x02A0
    std::uint8_t JobTaskCooldown_Floor[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t JobTaskCooldown_Ceiling[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t PlayerJobTaskCooldownTag[0x20]; // 0x0310 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIsJobXPEnabled; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0331
    std::uint8_t JobDatabaseRegistryType[0x34]; // 0x0334 (Size: 0x34, Type: StructProperty)
    std::uint8_t JobTaskDatabaseRegistryType[0x1]; // 0x0368 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, ActiveServerJobDataEntries) == 280, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::ActiveServerJobDataEntries");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, ActiveJobDataArray) == 296, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::ActiveJobDataArray");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, ReplicatedJobVolumeEntries) == 448, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::ReplicatedJobVolumeEntries");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, CurrentBoostedJobs) == 488, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::CurrentBoostedJobs");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, PermanentBoostedJobs) == 520, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::PermanentBoostedJobs");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, BoostedJobExperienceRewardMultiplier) == 552, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::BoostedJobExperienceRewardMultiplier");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, BoostedJobCurrencyRewardMultiplier) == 592, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::BoostedJobCurrencyRewardMultiplier");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, BoostedJobNotificationId_Available) == 632, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::BoostedJobNotificationId_Available");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, BoostedJobsNotificationId_Unavailable) == 640, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::BoostedJobsNotificationId_Unavailable");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, TrendingJobsChangeEventTag) == 648, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::TrendingJobsChangeEventTag");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, TrendingJobsDatabaseRegistryType) == 652, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::TrendingJobsDatabaseRegistryType");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, ChosenTrendingJobsConfigIds) == 656, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::ChosenTrendingJobsConfigIds");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, JobTaskCooldown_Floor) == 704, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::JobTaskCooldown_Floor");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, JobTaskCooldown_Ceiling) == 744, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::JobTaskCooldown_Ceiling");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, PlayerJobTaskCooldownTag) == 784, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::PlayerJobTaskCooldownTag");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, bIsJobXPEnabled) == 816, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::bIsJobXPEnabled");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, JobDatabaseRegistryType) == 820, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::JobDatabaseRegistryType");
static_assert(offsetof(UPlayspaceComponent_Root_SproutJobManagement, JobTaskDatabaseRegistryType) == 872, "Offset mismatch for UPlayspaceComponent_Root_SproutJobManagement::JobTaskDatabaseRegistryType");

// /Script/SproutNativeRuntime.PlayspaceComponent_Root_SproutLootDatabase
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_Root_SproutLootDatabase
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t GenericCurrentJobIdentifier[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t GenericLocalJobIdentifier[0x4]; // 0x011C (Size: 0x4, Type: StructProperty)
    std::uint8_t LootBundleRegistryType[0x1C]; // 0x0120 (Size: 0x1C, Type: StructProperty)
    std::uint8_t CTARewardsRegistryType[0x24]; // 0x013C (Size: 0x24, Type: StructProperty)
    void* CashItemDefinition; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LootOverflowSender[0x4]; // 0x0168 (Size: 0x4, Type: StructProperty)
    std::uint8_t LootOverflowHeadingId[0x8]; // 0x016C (Size: 0x8, Type: StructProperty)
    std::uint8_t LootOverflowBodyId[0x1]; // 0x0174 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, GenericCurrentJobIdentifier) == 280, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::GenericCurrentJobIdentifier");
static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, GenericLocalJobIdentifier) == 284, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::GenericLocalJobIdentifier");
static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, LootBundleRegistryType) == 288, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::LootBundleRegistryType");
static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, CTARewardsRegistryType) == 316, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::CTARewardsRegistryType");
static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, CashItemDefinition) == 352, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::CashItemDefinition");
static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, LootOverflowSender) == 360, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::LootOverflowSender");
static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, LootOverflowHeadingId) == 364, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::LootOverflowHeadingId");
static_assert(offsetof(UPlayspaceComponent_Root_SproutLootDatabase, LootOverflowBodyId) == 372, "Offset mismatch for UPlayspaceComponent_Root_SproutLootDatabase::LootOverflowBodyId");

// /Script/SproutNativeRuntime.PlayspaceComponent_Root_SproutVehicleManagement
// Kind: Class; super: FortPlayspaceComponent
class UPlayspaceComponent_Root_SproutVehicleManagement
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t MaxVehicleCountPerPlayer[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnBlockTraceChannel; // 0x0140 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0141
    std::uint8_t SpawnBlockTag[0x4]; // 0x0144 (Size: 0x4, Type: StructProperty)
    TArray<void*> SpawnBlockClasses; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VehicleDatabaseRegistryType[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayspaceComponent_Root_SproutVehicleManagement, MaxVehicleCountPerPlayer) == 280, "Offset mismatch for UPlayspaceComponent_Root_SproutVehicleManagement::MaxVehicleCountPerPlayer");
static_assert(offsetof(UPlayspaceComponent_Root_SproutVehicleManagement, SpawnBlockTraceChannel) == 320, "Offset mismatch for UPlayspaceComponent_Root_SproutVehicleManagement::SpawnBlockTraceChannel");
static_assert(offsetof(UPlayspaceComponent_Root_SproutVehicleManagement, SpawnBlockTag) == 324, "Offset mismatch for UPlayspaceComponent_Root_SproutVehicleManagement::SpawnBlockTag");
static_assert(offsetof(UPlayspaceComponent_Root_SproutVehicleManagement, SpawnBlockClasses) == 328, "Offset mismatch for UPlayspaceComponent_Root_SproutVehicleManagement::SpawnBlockClasses");
static_assert(offsetof(UPlayspaceComponent_Root_SproutVehicleManagement, VehicleDatabaseRegistryType) == 344, "Offset mismatch for UPlayspaceComponent_Root_SproutVehicleManagement::VehicleDatabaseRegistryType");

// /Script/SproutNativeRuntime.PlayspaceComponent_SproutServerExpiration
// Kind: Class; super: PlayspaceComponent_JunoServerExpiration
class UPlayspaceComponent_SproutServerExpiration
{
public:
    std::uint8_t Pad_0000[0x228]; // 0x0000
    std::uint8_t bUseConfigAlertDataList; // 0x0228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0229
    TArray<void*> ConfigAlertDataList; // 0x0230 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayspaceComponent_SproutServerExpiration, bUseConfigAlertDataList) == 552, "Offset mismatch for UPlayspaceComponent_SproutServerExpiration::bUseConfigAlertDataList");
static_assert(offsetof(UPlayspaceComponent_SproutServerExpiration, ConfigAlertDataList) == 560, "Offset mismatch for UPlayspaceComponent_SproutServerExpiration::ConfigAlertDataList");

// /Script/SproutNativeRuntime.SproutAIBotEvaluator_ReactToVerb
// Kind: Class; super: JunoAIBotEvaluator_ReactToVerb
class USproutAIBotEvaluator_ReactToVerb
{
public:
    std::uint8_t Pad_0000[0x750]; // 0x0000
    std::uint8_t GiveItemEmoteTagQuery[0x48]; // 0x0750 (Size: 0x48, Type: StructProperty)
    std::uint8_t GiveItemEmoteItemRequiredTagQuery[0x48]; // 0x0798 (Size: 0x48, Type: StructProperty)
    std::uint8_t DistanceDecreaseIfMatchingItemGiveRequest[0x28]; // 0x07E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RequiredTagQueryOnAIForDistanceDecreaseForGiveEmote[0x48]; // 0x0808 (Size: 0x48, Type: StructProperty)
    std::uint8_t DistanceDecreaseForGiveEmoteIfMatchingTagQuery[0x1]; // 0x0850 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutAIBotEvaluator_ReactToVerb, GiveItemEmoteTagQuery) == 1872, "Offset mismatch for USproutAIBotEvaluator_ReactToVerb::GiveItemEmoteTagQuery");
static_assert(offsetof(USproutAIBotEvaluator_ReactToVerb, GiveItemEmoteItemRequiredTagQuery) == 1944, "Offset mismatch for USproutAIBotEvaluator_ReactToVerb::GiveItemEmoteItemRequiredTagQuery");
static_assert(offsetof(USproutAIBotEvaluator_ReactToVerb, DistanceDecreaseIfMatchingItemGiveRequest) == 2016, "Offset mismatch for USproutAIBotEvaluator_ReactToVerb::DistanceDecreaseIfMatchingItemGiveRequest");
static_assert(offsetof(USproutAIBotEvaluator_ReactToVerb, RequiredTagQueryOnAIForDistanceDecreaseForGiveEmote) == 2056, "Offset mismatch for USproutAIBotEvaluator_ReactToVerb::RequiredTagQueryOnAIForDistanceDecreaseForGiveEmote");
static_assert(offsetof(USproutAIBotEvaluator_ReactToVerb, DistanceDecreaseForGiveEmoteIfMatchingTagQuery) == 2128, "Offset mismatch for USproutAIBotEvaluator_ReactToVerb::DistanceDecreaseForGiveEmoteIfMatchingTagQuery");

// /Script/SproutNativeRuntime.SproutAIComponent_Requests
// Kind: Class; super: SproutActorComponent_AutomaticRequests
class USproutAIComponent_Requests
{
public:
    std::uint8_t Pad_0000[0x3D0]; // 0x0000
    std::uint8_t RequiredTagsOnPawn[0x1]; // 0x03D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutAIComponent_Requests, RequiredTagsOnPawn) == 976, "Offset mismatch for USproutAIComponent_Requests::RequiredTagsOnPawn");

// /Script/SproutNativeRuntime.SproutAMUManager
// Kind: Class; super: TickableWorldSubsystem
class USproutAMUManager
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t PlayerCollection[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t NPCCollection[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutAMUManager, PlayerCollection) == 72, "Offset mismatch for USproutAMUManager::PlayerCollection");
static_assert(offsetof(USproutAMUManager, NPCCollection) == 112, "Offset mismatch for USproutAMUManager::NPCCollection");

// /Script/SproutNativeRuntime.SproutActivityStateWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class USproutActivityStateWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutActivityStateWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for USproutActivityStateWorldConditionSchema::ContextDataDescs");

// /Script/SproutNativeRuntime.SproutActorComponent_ActivityState
// Kind: Class; super: ActorComponent
class USproutActorComponent_ActivityState
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnSetState; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D8
    FMulticastInlineDelegate OnProcessedStateRewards; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0100
    FMulticastInlineDelegate OnStartedAutomaticStateChange; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0128
    std::uint8_t CurrentStateConfigurationRuntime[0x10]; // 0x0140 (Size: 0x10, Type: StructProperty)
    TArray<void*> AllActivePersistentStates; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LastReceivedStateConfigurationRuntime[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    TArray<void*> CategoriesConfigurations; // 0x0178 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutActorComponent_ActivityState, OnSetState) == 200, "Offset mismatch for USproutActorComponent_ActivityState::OnSetState");
static_assert(offsetof(USproutActorComponent_ActivityState, OnProcessedStateRewards) == 240, "Offset mismatch for USproutActorComponent_ActivityState::OnProcessedStateRewards");
static_assert(offsetof(USproutActorComponent_ActivityState, OnStartedAutomaticStateChange) == 280, "Offset mismatch for USproutActorComponent_ActivityState::OnStartedAutomaticStateChange");
static_assert(offsetof(USproutActorComponent_ActivityState, CurrentStateConfigurationRuntime) == 320, "Offset mismatch for USproutActorComponent_ActivityState::CurrentStateConfigurationRuntime");
static_assert(offsetof(USproutActorComponent_ActivityState, AllActivePersistentStates) == 336, "Offset mismatch for USproutActorComponent_ActivityState::AllActivePersistentStates");
static_assert(offsetof(USproutActorComponent_ActivityState, LastReceivedStateConfigurationRuntime) == 352, "Offset mismatch for USproutActorComponent_ActivityState::LastReceivedStateConfigurationRuntime");
static_assert(offsetof(USproutActorComponent_ActivityState, CategoriesConfigurations) == 376, "Offset mismatch for USproutActorComponent_ActivityState::CategoriesConfigurations");

// /Script/SproutNativeRuntime.SproutActorComponent_AutomaticRequests
// Kind: Class; super: SproutActorComponent_Requests
class USproutActorComponent_AutomaticRequests
{
public:
    std::uint8_t Pad_0000[0x210]; // 0x0000
    std::uint8_t MinCooldownOnFulfil[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCooldownOnFulfil[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinTimeToFail[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxTimeToFail[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinCooldownOnFail[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCooldownOnFail[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WeightMultiplierOnLastPickedRequest[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    TArray<void*> ConditionalRerollPercentages; // 0x0328 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MinRerollCooldown[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxRerollCooldown[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCanRollOutsideJobVolume; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0389
    FMulticastInlineDelegate OnFailedRequestDelegate; // 0x0390 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t LastAutomaticallyPickedRequest[0x1]; // 0x03A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutActorComponent_AutomaticRequests, MinCooldownOnFulfil) == 528, "Offset mismatch for USproutActorComponent_AutomaticRequests::MinCooldownOnFulfil");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, MaxCooldownOnFulfil) == 568, "Offset mismatch for USproutActorComponent_AutomaticRequests::MaxCooldownOnFulfil");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, MinTimeToFail) == 608, "Offset mismatch for USproutActorComponent_AutomaticRequests::MinTimeToFail");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, MaxTimeToFail) == 648, "Offset mismatch for USproutActorComponent_AutomaticRequests::MaxTimeToFail");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, MinCooldownOnFail) == 688, "Offset mismatch for USproutActorComponent_AutomaticRequests::MinCooldownOnFail");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, MaxCooldownOnFail) == 728, "Offset mismatch for USproutActorComponent_AutomaticRequests::MaxCooldownOnFail");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, WeightMultiplierOnLastPickedRequest) == 768, "Offset mismatch for USproutActorComponent_AutomaticRequests::WeightMultiplierOnLastPickedRequest");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, ConditionalRerollPercentages) == 808, "Offset mismatch for USproutActorComponent_AutomaticRequests::ConditionalRerollPercentages");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, MinRerollCooldown) == 824, "Offset mismatch for USproutActorComponent_AutomaticRequests::MinRerollCooldown");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, MaxRerollCooldown) == 864, "Offset mismatch for USproutActorComponent_AutomaticRequests::MaxRerollCooldown");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, bCanRollOutsideJobVolume) == 904, "Offset mismatch for USproutActorComponent_AutomaticRequests::bCanRollOutsideJobVolume");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, OnFailedRequestDelegate) == 912, "Offset mismatch for USproutActorComponent_AutomaticRequests::OnFailedRequestDelegate");
static_assert(offsetof(USproutActorComponent_AutomaticRequests, LastAutomaticallyPickedRequest) == 928, "Offset mismatch for USproutActorComponent_AutomaticRequests::LastAutomaticallyPickedRequest");

// /Script/SproutNativeRuntime.SproutActorComponent_DecorInventoryPersistence
// Kind: Class; super: GameFrameworkComponent
class USproutActorComponent_DecorInventoryPersistence
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> PersistedInventory; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutActorComponent_DecorInventoryPersistence, PersistedInventory) == 200, "Offset mismatch for USproutActorComponent_DecorInventoryPersistence::PersistedInventory");

// /Script/SproutNativeRuntime.SproutActorComponent_ItemRecipient
// Kind: Class; super: GameFrameworkComponent
class USproutActorComponent_ItemRecipient
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnItemsReceived; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t GoalItem[0x20]; // 0x00D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GoalItemTags[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    TWeakObjectPtr<void> InteractorCache; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LastAdderCache; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t RemainingItemEventsToReceiveForInteractor; // 0x0120 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutActorComponent_ItemRecipient, OnItemsReceived) == 192, "Offset mismatch for USproutActorComponent_ItemRecipient::OnItemsReceived");
static_assert(offsetof(USproutActorComponent_ItemRecipient, GoalItem) == 208, "Offset mismatch for USproutActorComponent_ItemRecipient::GoalItem");
static_assert(offsetof(USproutActorComponent_ItemRecipient, GoalItemTags) == 240, "Offset mismatch for USproutActorComponent_ItemRecipient::GoalItemTags");
static_assert(offsetof(USproutActorComponent_ItemRecipient, InteractorCache) == 272, "Offset mismatch for USproutActorComponent_ItemRecipient::InteractorCache");
static_assert(offsetof(USproutActorComponent_ItemRecipient, LastAdderCache) == 280, "Offset mismatch for USproutActorComponent_ItemRecipient::LastAdderCache");
static_assert(offsetof(USproutActorComponent_ItemRecipient, RemainingItemEventsToReceiveForInteractor) == 288, "Offset mismatch for USproutActorComponent_ItemRecipient::RemainingItemEventsToReceiveForInteractor");

// /Script/SproutNativeRuntime.SproutActorComponent_RecipeHolder
// Kind: Class; super: GameFrameworkComponent
class USproutActorComponent_RecipeHolder
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> HeldRecipes; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RecipeRegistryType[0x4]; // 0x00D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t CookTopParentTag[0x1]; // 0x00D4 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutActorComponent_RecipeHolder, HeldRecipes) == 192, "Offset mismatch for USproutActorComponent_RecipeHolder::HeldRecipes");
static_assert(offsetof(USproutActorComponent_RecipeHolder, RecipeRegistryType) == 208, "Offset mismatch for USproutActorComponent_RecipeHolder::RecipeRegistryType");
static_assert(offsetof(USproutActorComponent_RecipeHolder, CookTopParentTag) == 212, "Offset mismatch for USproutActorComponent_RecipeHolder::CookTopParentTag");

// /Script/SproutNativeRuntime.SproutActorComponent_Requests
// Kind: Class; super: ActorComponent
class USproutActorComponent_Requests
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UsedCategoryTag[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PerceptionConfiguration[0xC0]; // 0x00D0 (Size: 0xC0, Type: StructProperty)
    std::uint8_t MaxDistanceFromAuthor[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    TArray<void*> RewardsMultiplier; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RunningRequest[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    TArray<void*> LocalRequests; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnSetRunningRequestDelegate; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFulfilledRequestDelegate; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutActorComponent_Requests, UsedCategoryTag) == 192, "Offset mismatch for USproutActorComponent_Requests::UsedCategoryTag");
static_assert(offsetof(USproutActorComponent_Requests, PerceptionConfiguration) == 208, "Offset mismatch for USproutActorComponent_Requests::PerceptionConfiguration");
static_assert(offsetof(USproutActorComponent_Requests, MaxDistanceFromAuthor) == 400, "Offset mismatch for USproutActorComponent_Requests::MaxDistanceFromAuthor");
static_assert(offsetof(USproutActorComponent_Requests, RewardsMultiplier) == 440, "Offset mismatch for USproutActorComponent_Requests::RewardsMultiplier");
static_assert(offsetof(USproutActorComponent_Requests, RunningRequest) == 456, "Offset mismatch for USproutActorComponent_Requests::RunningRequest");
static_assert(offsetof(USproutActorComponent_Requests, LocalRequests) == 480, "Offset mismatch for USproutActorComponent_Requests::LocalRequests");
static_assert(offsetof(USproutActorComponent_Requests, OnSetRunningRequestDelegate) == 496, "Offset mismatch for USproutActorComponent_Requests::OnSetRunningRequestDelegate");
static_assert(offsetof(USproutActorComponent_Requests, OnFulfilledRequestDelegate) == 512, "Offset mismatch for USproutActorComponent_Requests::OnFulfilledRequestDelegate");

// /Script/SproutNativeRuntime.SproutActorSpawner
// Kind: Class; super: Actor
class USproutActorSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t LocationTag[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    std::uint8_t DescriptiveTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    std::uint8_t SmallestCompatibleSize; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LargestCompatibleSize; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x029A
    std::int32_t Priority; // 0x029C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutActorSpawner, LocationTag) == 624, "Offset mismatch for USproutActorSpawner::LocationTag");
static_assert(offsetof(USproutActorSpawner, DescriptiveTags) == 632, "Offset mismatch for USproutActorSpawner::DescriptiveTags");
static_assert(offsetof(USproutActorSpawner, SmallestCompatibleSize) == 664, "Offset mismatch for USproutActorSpawner::SmallestCompatibleSize");
static_assert(offsetof(USproutActorSpawner, LargestCompatibleSize) == 665, "Offset mismatch for USproutActorSpawner::LargestCompatibleSize");
static_assert(offsetof(USproutActorSpawner, Priority) == 668, "Offset mismatch for USproutActorSpawner::Priority");

// /Script/SproutNativeRuntime.SproutActorSpawnerInterface
// Kind: Class; super: Interface
class USproutActorSpawnerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutActorSpawnerManager
// Kind: Class; super: FortGameStateComponent
class USproutActorSpawnerManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> RegistryEntries; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutActorSpawnerManager, RegistryEntries) == 192, "Offset mismatch for USproutActorSpawnerManager::RegistryEntries");

// /Script/SproutNativeRuntime.SproutActorTrackerSubsystem
// Kind: Class; super: TickableWorldSubsystem
class USproutActorTrackerSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutAnalytics
// Kind: Class; super: Object
class USproutAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutAsyncAction_OnSproutEventManagerReady
// Kind: Class; super: BlueprintAsyncActionBase
class USproutAsyncAction_OnSproutEventManagerReady
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnManagerReady; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutAsyncAction_OnSproutEventManagerReady, OnManagerReady) == 48, "Offset mismatch for USproutAsyncAction_OnSproutEventManagerReady::OnManagerReady");

// /Script/SproutNativeRuntime.SproutBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USproutBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutBudgetedAssembledMeshUserComponent
// Kind: Class; super: FortAssembledMeshUserComponent
class USproutBudgetedAssembledMeshUserComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> LoadedAssets; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00D0
    TArray<void*> MeshParts; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshPartSoftRefs; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0120
    TArray<void*> MeshPartComponents; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDuplicateCOIs; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssignMeshPartsOnBeginPlay; // 0x0141 (Size: 0x1, Type: BoolProperty)
    // 0x0141 BoolProperty bSetRootMeshOnAttachComponent (shared storage)
};

static_assert(offsetof(USproutBudgetedAssembledMeshUserComponent, LoadedAssets) == 192, "Offset mismatch for USproutBudgetedAssembledMeshUserComponent::LoadedAssets");
static_assert(offsetof(USproutBudgetedAssembledMeshUserComponent, MeshParts) == 256, "Offset mismatch for USproutBudgetedAssembledMeshUserComponent::MeshParts");
static_assert(offsetof(USproutBudgetedAssembledMeshUserComponent, MeshPartSoftRefs) == 272, "Offset mismatch for USproutBudgetedAssembledMeshUserComponent::MeshPartSoftRefs");
static_assert(offsetof(USproutBudgetedAssembledMeshUserComponent, MeshPartComponents) == 304, "Offset mismatch for USproutBudgetedAssembledMeshUserComponent::MeshPartComponents");
static_assert(offsetof(USproutBudgetedAssembledMeshUserComponent, bDuplicateCOIs) == 320, "Offset mismatch for USproutBudgetedAssembledMeshUserComponent::bDuplicateCOIs");
static_assert(offsetof(USproutBudgetedAssembledMeshUserComponent, bAssignMeshPartsOnBeginPlay) == 321, "Offset mismatch for USproutBudgetedAssembledMeshUserComponent::bAssignMeshPartsOnBeginPlay");

// /Script/SproutNativeRuntime.SproutCellTransformerAtom
// Kind: Class; super: LFNCellTransformer
class USproutCellTransformerAtom
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutCellTransformerAtom, bEnabled) == 40, "Offset mismatch for USproutCellTransformerAtom::bEnabled");

// /Script/SproutNativeRuntime.SproutCheatManager
// Kind: Class; super: ChildCheatManager
class USproutCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutCheatProfilerSubsystem
// Kind: Class; super: TickableWorldSubsystem
class USproutCheatProfilerSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutCityMapManager
// Kind: Class; super: JunoMapManager
class USproutCityMapManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    float TileSize; // 0x0270 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USproutCityMapManager, TileSize) == 624, "Offset mismatch for USproutCityMapManager::TileSize");

// /Script/SproutNativeRuntime.SproutCityMarkerManager
// Kind: Class; super: JunoMarkerManager
class USproutCityMarkerManager
{
public:
    std::uint8_t Pad_0000[0x380]; // 0x0000
    std::uint8_t HousingIndicatorSettingName[0x4]; // 0x0380 (Size: 0x4, Type: NameProperty)
    std::uint8_t ApartmentIndicatorSettingName[0x4]; // 0x0384 (Size: 0x4, Type: NameProperty)
    std::uint8_t XLHousingIndicatorSettingName[0x4]; // 0x0388 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoostedJobIndicatorSettingName[0x4]; // 0x038C (Size: 0x4, Type: NameProperty)
    std::uint8_t ApartmentVolumeTags[0x20]; // 0x0390 (Size: 0x20, Type: StructProperty)
    std::uint8_t XLHousingVolumeTags[0x1]; // 0x03B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutCityMarkerManager, HousingIndicatorSettingName) == 896, "Offset mismatch for USproutCityMarkerManager::HousingIndicatorSettingName");
static_assert(offsetof(USproutCityMarkerManager, ApartmentIndicatorSettingName) == 900, "Offset mismatch for USproutCityMarkerManager::ApartmentIndicatorSettingName");
static_assert(offsetof(USproutCityMarkerManager, XLHousingIndicatorSettingName) == 904, "Offset mismatch for USproutCityMarkerManager::XLHousingIndicatorSettingName");
static_assert(offsetof(USproutCityMarkerManager, BoostedJobIndicatorSettingName) == 908, "Offset mismatch for USproutCityMarkerManager::BoostedJobIndicatorSettingName");
static_assert(offsetof(USproutCityMarkerManager, ApartmentVolumeTags) == 912, "Offset mismatch for USproutCityMarkerManager::ApartmentVolumeTags");
static_assert(offsetof(USproutCityMarkerManager, XLHousingVolumeTags) == 944, "Offset mismatch for USproutCityMarkerManager::XLHousingVolumeTags");

// /Script/SproutNativeRuntime.SproutColorComponent
// Kind: Class; super: LFNColorComponent
class USproutColorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ColorLUTAtlas; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* ColorLUTTexture; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutColorComponent, ColorLUTAtlas) == 192, "Offset mismatch for USproutColorComponent::ColorLUTAtlas");
static_assert(offsetof(USproutColorComponent, ColorLUTTexture) == 200, "Offset mismatch for USproutColorComponent::ColorLUTTexture");

// /Script/SproutNativeRuntime.SproutConnectivityComponent
// Kind: Class; super: JunoConnectivityComponentBase
class USproutConnectivityComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t AutomaticConnectionMethod; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    TArray<void*> CustomConnectionDirections; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GraphHandle[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutConnectivityComponent, AutomaticConnectionMethod) == 192, "Offset mismatch for USproutConnectivityComponent::AutomaticConnectionMethod");
static_assert(offsetof(USproutConnectivityComponent, CustomConnectionDirections) == 200, "Offset mismatch for USproutConnectivityComponent::CustomConnectionDirections");
static_assert(offsetof(USproutConnectivityComponent, GraphHandle) == 216, "Offset mismatch for USproutConnectivityComponent::GraphHandle");

// /Script/SproutNativeRuntime.SproutConnectivityManagerComponent
// Kind: Class; super: ActorComponent
class USproutConnectivityManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* Graph; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutConnectivityManagerComponent, Graph) == 192, "Offset mismatch for USproutConnectivityManagerComponent::Graph");

// /Script/SproutNativeRuntime.SproutConnectivityManagerDebugComponent
// Kind: Class; super: ActorComponent
class USproutConnectivityManagerDebugComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ManagerComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DebugDrawData[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutConnectivityManagerDebugComponent, ManagerComponent) == 192, "Offset mismatch for USproutConnectivityManagerDebugComponent::ManagerComponent");
static_assert(offsetof(USproutConnectivityManagerDebugComponent, DebugDrawData) == 200, "Offset mismatch for USproutConnectivityManagerDebugComponent::DebugDrawData");

// /Script/SproutNativeRuntime.SproutControllerComponent_AccountItemsUnlock
// Kind: Class; super: JunoControllerComponent_AccountItemsUnlock
class USproutControllerComponent_AccountItemsUnlock
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    TArray<void*> ReplicatedMcpOwnershipTags; // 0x0170 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutControllerComponent_AccountItemsUnlock, ReplicatedMcpOwnershipTags) == 368, "Offset mismatch for USproutControllerComponent_AccountItemsUnlock::ReplicatedMcpOwnershipTags");

// /Script/SproutNativeRuntime.SproutControllerComponent_ActionBar
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_ActionBar
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnActionBarStateChange; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActionBarActivated; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActionBarShutdown; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ActionBarRegistryType[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActionBarRowRegistryType[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::uint8_t ActionBarOptionRegistryType[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutControllerComponent_ActionBar, OnActionBarStateChange) == 200, "Offset mismatch for USproutControllerComponent_ActionBar::OnActionBarStateChange");
static_assert(offsetof(USproutControllerComponent_ActionBar, OnActionBarActivated) == 216, "Offset mismatch for USproutControllerComponent_ActionBar::OnActionBarActivated");
static_assert(offsetof(USproutControllerComponent_ActionBar, OnActionBarShutdown) == 232, "Offset mismatch for USproutControllerComponent_ActionBar::OnActionBarShutdown");
static_assert(offsetof(USproutControllerComponent_ActionBar, ActionBarRegistryType) == 248, "Offset mismatch for USproutControllerComponent_ActionBar::ActionBarRegistryType");
static_assert(offsetof(USproutControllerComponent_ActionBar, ActionBarRowRegistryType) == 252, "Offset mismatch for USproutControllerComponent_ActionBar::ActionBarRowRegistryType");
static_assert(offsetof(USproutControllerComponent_ActionBar, ActionBarOptionRegistryType) == 256, "Offset mismatch for USproutControllerComponent_ActionBar::ActionBarOptionRegistryType");

// /Script/SproutNativeRuntime.SproutControllerComponent_AnimalCare
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_AnimalCare
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnActiveRequestChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnActiveRequestComplete; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusedAnimalChanged; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPreferredFoodChanged; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFeedingProgressChanged; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCleaningProgressChanged; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPettingComplete; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPettingAttemptFailed; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPettingStateChanged; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t FocusedAnimalName[0x10]; // 0x0158 (Size: 0x10, Type: TextProperty)
    std::uint8_t PreferredFoodName[0x10]; // 0x0168 (Size: 0x10, Type: TextProperty)
    std::uint8_t ActiveRequestTag[0x4]; // 0x0178 (Size: 0x4, Type: StructProperty)
    float FeedingProgress; // 0x017C (Size: 0x4, Type: FloatProperty)
    float CleaningProgress; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0184
    std::uint8_t PettingState[0x20]; // 0x0188 (Size: 0x20, Type: StructProperty)
    FName AnalyticsActivityName; // 0x01A8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USproutControllerComponent_AnimalCare, OnActiveRequestChanged) == 200, "Offset mismatch for USproutControllerComponent_AnimalCare::OnActiveRequestChanged");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnActiveRequestComplete) == 216, "Offset mismatch for USproutControllerComponent_AnimalCare::OnActiveRequestComplete");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnFocusedAnimalChanged) == 232, "Offset mismatch for USproutControllerComponent_AnimalCare::OnFocusedAnimalChanged");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnPreferredFoodChanged) == 248, "Offset mismatch for USproutControllerComponent_AnimalCare::OnPreferredFoodChanged");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnFeedingProgressChanged) == 264, "Offset mismatch for USproutControllerComponent_AnimalCare::OnFeedingProgressChanged");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnCleaningProgressChanged) == 280, "Offset mismatch for USproutControllerComponent_AnimalCare::OnCleaningProgressChanged");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnPettingComplete) == 296, "Offset mismatch for USproutControllerComponent_AnimalCare::OnPettingComplete");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnPettingAttemptFailed) == 312, "Offset mismatch for USproutControllerComponent_AnimalCare::OnPettingAttemptFailed");
static_assert(offsetof(USproutControllerComponent_AnimalCare, OnPettingStateChanged) == 328, "Offset mismatch for USproutControllerComponent_AnimalCare::OnPettingStateChanged");
static_assert(offsetof(USproutControllerComponent_AnimalCare, FocusedAnimalName) == 344, "Offset mismatch for USproutControllerComponent_AnimalCare::FocusedAnimalName");
static_assert(offsetof(USproutControllerComponent_AnimalCare, PreferredFoodName) == 360, "Offset mismatch for USproutControllerComponent_AnimalCare::PreferredFoodName");
static_assert(offsetof(USproutControllerComponent_AnimalCare, ActiveRequestTag) == 376, "Offset mismatch for USproutControllerComponent_AnimalCare::ActiveRequestTag");
static_assert(offsetof(USproutControllerComponent_AnimalCare, FeedingProgress) == 380, "Offset mismatch for USproutControllerComponent_AnimalCare::FeedingProgress");
static_assert(offsetof(USproutControllerComponent_AnimalCare, CleaningProgress) == 384, "Offset mismatch for USproutControllerComponent_AnimalCare::CleaningProgress");
static_assert(offsetof(USproutControllerComponent_AnimalCare, PettingState) == 392, "Offset mismatch for USproutControllerComponent_AnimalCare::PettingState");
static_assert(offsetof(USproutControllerComponent_AnimalCare, AnalyticsActivityName) == 424, "Offset mismatch for USproutControllerComponent_AnimalCare::AnalyticsActivityName");

// /Script/SproutNativeRuntime.SproutControllerComponent_CTA
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_CTA
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

static_assert(offsetof(USproutControllerComponent_CTA, PrimaryComponentTick) == 56, "Offset mismatch for USproutControllerComponent_CTA::PrimaryComponentTick");
static_assert(offsetof(USproutControllerComponent_CTA, ComponentTags) == 104, "Offset mismatch for USproutControllerComponent_CTA::ComponentTags");
static_assert(offsetof(USproutControllerComponent_CTA, AssetUserData) == 120, "Offset mismatch for USproutControllerComponent_CTA::AssetUserData");
static_assert(offsetof(USproutControllerComponent_CTA, UCSSerializationIndex) == 144, "Offset mismatch for USproutControllerComponent_CTA::UCSSerializationIndex");
static_assert(offsetof(USproutControllerComponent_CTA, bNetAddressable) == 152, "Offset mismatch for USproutControllerComponent_CTA::bNetAddressable");
static_assert(offsetof(USproutControllerComponent_CTA, bAutoActivate) == 154, "Offset mismatch for USproutControllerComponent_CTA::bAutoActivate");
static_assert(offsetof(USproutControllerComponent_CTA, bIsEditorOnly) == 155, "Offset mismatch for USproutControllerComponent_CTA::bIsEditorOnly");
static_assert(offsetof(USproutControllerComponent_CTA, CreationMethod) == 185, "Offset mismatch for USproutControllerComponent_CTA::CreationMethod");
static_assert(offsetof(USproutControllerComponent_CTA, OnComponentActivated) == 186, "Offset mismatch for USproutControllerComponent_CTA::OnComponentActivated");
static_assert(offsetof(USproutControllerComponent_CTA, OnComponentDeactivated) == 187, "Offset mismatch for USproutControllerComponent_CTA::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutControllerComponent_Cinematics
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_Cinematics
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnIntroCinematicResolved; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MatchStartCinematicConfig[0x8]; // 0x00D8 (Size: 0x8, Type: StructProperty)
    std::uint8_t MidCinematicTag[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t IntroWarmupCameraTransform[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    void* IntroWarmupCameraClass; // 0x0150 (Size: 0x8, Type: ClassProperty)
    void* CinematicInputContext; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CinematicInputPriority; // 0x0160 (Size: 0x4, Type: IntProperty)
    std::uint8_t CinematicInputModeTag[0xC]; // 0x0164 (Size: 0xC, Type: StructProperty)
    void* CurrentLevelSequence; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* CurrentLevelSequencePlayer; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* CurrentLevelSequenceActor; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* IntroWarmupCameraActor; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutControllerComponent_Cinematics, OnIntroCinematicResolved) == 200, "Offset mismatch for USproutControllerComponent_Cinematics::OnIntroCinematicResolved");
static_assert(offsetof(USproutControllerComponent_Cinematics, MatchStartCinematicConfig) == 216, "Offset mismatch for USproutControllerComponent_Cinematics::MatchStartCinematicConfig");
static_assert(offsetof(USproutControllerComponent_Cinematics, MidCinematicTag) == 224, "Offset mismatch for USproutControllerComponent_Cinematics::MidCinematicTag");
static_assert(offsetof(USproutControllerComponent_Cinematics, IntroWarmupCameraTransform) == 240, "Offset mismatch for USproutControllerComponent_Cinematics::IntroWarmupCameraTransform");
static_assert(offsetof(USproutControllerComponent_Cinematics, IntroWarmupCameraClass) == 336, "Offset mismatch for USproutControllerComponent_Cinematics::IntroWarmupCameraClass");
static_assert(offsetof(USproutControllerComponent_Cinematics, CinematicInputContext) == 344, "Offset mismatch for USproutControllerComponent_Cinematics::CinematicInputContext");
static_assert(offsetof(USproutControllerComponent_Cinematics, CinematicInputPriority) == 352, "Offset mismatch for USproutControllerComponent_Cinematics::CinematicInputPriority");
static_assert(offsetof(USproutControllerComponent_Cinematics, CinematicInputModeTag) == 356, "Offset mismatch for USproutControllerComponent_Cinematics::CinematicInputModeTag");
static_assert(offsetof(USproutControllerComponent_Cinematics, CurrentLevelSequence) == 368, "Offset mismatch for USproutControllerComponent_Cinematics::CurrentLevelSequence");
static_assert(offsetof(USproutControllerComponent_Cinematics, CurrentLevelSequencePlayer) == 376, "Offset mismatch for USproutControllerComponent_Cinematics::CurrentLevelSequencePlayer");
static_assert(offsetof(USproutControllerComponent_Cinematics, CurrentLevelSequenceActor) == 384, "Offset mismatch for USproutControllerComponent_Cinematics::CurrentLevelSequenceActor");
static_assert(offsetof(USproutControllerComponent_Cinematics, IntroWarmupCameraActor) == 392, "Offset mismatch for USproutControllerComponent_Cinematics::IntroWarmupCameraActor");

// /Script/SproutNativeRuntime.SproutControllerComponent_Collections
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_Collections
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t CollectionsItemRegistryType[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    std::uint8_t AllCollections[0x78]; // 0x00D0 (Size: 0x78, Type: StructProperty)
    void* LatestInventoryItemProcessed; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutControllerComponent_Collections, CollectionsItemRegistryType) == 200, "Offset mismatch for USproutControllerComponent_Collections::CollectionsItemRegistryType");
static_assert(offsetof(USproutControllerComponent_Collections, AllCollections) == 208, "Offset mismatch for USproutControllerComponent_Collections::AllCollections");
static_assert(offsetof(USproutControllerComponent_Collections, LatestInventoryItemProcessed) == 328, "Offset mismatch for USproutControllerComponent_Collections::LatestInventoryItemProcessed");

// /Script/SproutNativeRuntime.SproutControllerComponent_Housing
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_Housing
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnHousingSlotsUpdated; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingSaveSlotPurchaseApproved; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingSaveSlotPurchaseDenied; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingSaveSlotDeleteApproved; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingSaveSlotDeleteDenied; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingLotClaimApproved; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingLotClaimLost; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingLotClaimDenied; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSetHousingVolumeInLockdownDenied; // 0x0148 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0158
    std::uint8_t DecorOverflowMessageSender[0x4]; // 0x0180 (Size: 0x4, Type: StructProperty)
    std::uint8_t DecorOverflowMessageSubjectId[0x8]; // 0x0184 (Size: 0x8, Type: StructProperty)
    std::uint8_t DecorOverflowMessageId[0x8]; // 0x018C (Size: 0x8, Type: StructProperty)
    std::uint8_t CurrentHousingClaim[0x30]; // 0x0194 (Size: 0x30, Type: StructProperty)
    std::uint8_t LotPurchaseData[0x14]; // 0x01C4 (Size: 0x14, Type: StructProperty)
    TArray<void*> HousingSlots; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHousingControlerIsReady; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01E9
    TArray<void*> SessionHouseReactionList; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutControllerComponent_Housing, OnHousingSlotsUpdated) == 200, "Offset mismatch for USproutControllerComponent_Housing::OnHousingSlotsUpdated");
static_assert(offsetof(USproutControllerComponent_Housing, OnHousingSaveSlotPurchaseApproved) == 216, "Offset mismatch for USproutControllerComponent_Housing::OnHousingSaveSlotPurchaseApproved");
static_assert(offsetof(USproutControllerComponent_Housing, OnHousingSaveSlotPurchaseDenied) == 232, "Offset mismatch for USproutControllerComponent_Housing::OnHousingSaveSlotPurchaseDenied");
static_assert(offsetof(USproutControllerComponent_Housing, OnHousingSaveSlotDeleteApproved) == 248, "Offset mismatch for USproutControllerComponent_Housing::OnHousingSaveSlotDeleteApproved");
static_assert(offsetof(USproutControllerComponent_Housing, OnHousingSaveSlotDeleteDenied) == 264, "Offset mismatch for USproutControllerComponent_Housing::OnHousingSaveSlotDeleteDenied");
static_assert(offsetof(USproutControllerComponent_Housing, OnHousingLotClaimApproved) == 280, "Offset mismatch for USproutControllerComponent_Housing::OnHousingLotClaimApproved");
static_assert(offsetof(USproutControllerComponent_Housing, OnHousingLotClaimLost) == 296, "Offset mismatch for USproutControllerComponent_Housing::OnHousingLotClaimLost");
static_assert(offsetof(USproutControllerComponent_Housing, OnHousingLotClaimDenied) == 312, "Offset mismatch for USproutControllerComponent_Housing::OnHousingLotClaimDenied");
static_assert(offsetof(USproutControllerComponent_Housing, OnSetHousingVolumeInLockdownDenied) == 328, "Offset mismatch for USproutControllerComponent_Housing::OnSetHousingVolumeInLockdownDenied");
static_assert(offsetof(USproutControllerComponent_Housing, DecorOverflowMessageSender) == 384, "Offset mismatch for USproutControllerComponent_Housing::DecorOverflowMessageSender");
static_assert(offsetof(USproutControllerComponent_Housing, DecorOverflowMessageSubjectId) == 388, "Offset mismatch for USproutControllerComponent_Housing::DecorOverflowMessageSubjectId");
static_assert(offsetof(USproutControllerComponent_Housing, DecorOverflowMessageId) == 396, "Offset mismatch for USproutControllerComponent_Housing::DecorOverflowMessageId");
static_assert(offsetof(USproutControllerComponent_Housing, CurrentHousingClaim) == 404, "Offset mismatch for USproutControllerComponent_Housing::CurrentHousingClaim");
static_assert(offsetof(USproutControllerComponent_Housing, LotPurchaseData) == 452, "Offset mismatch for USproutControllerComponent_Housing::LotPurchaseData");
static_assert(offsetof(USproutControllerComponent_Housing, HousingSlots) == 472, "Offset mismatch for USproutControllerComponent_Housing::HousingSlots");
static_assert(offsetof(USproutControllerComponent_Housing, bHousingControlerIsReady) == 488, "Offset mismatch for USproutControllerComponent_Housing::bHousingControlerIsReady");
static_assert(offsetof(USproutControllerComponent_Housing, SessionHouseReactionList) == 496, "Offset mismatch for USproutControllerComponent_Housing::SessionHouseReactionList");

// /Script/SproutNativeRuntime.SproutControllerComponent_InventoryOverflow
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_InventoryOverflow
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnInventoryOverflowChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInventoryOverflowEntriesRemoved; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInventoryOverflowEntriesAdded; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInventoryOverflowEntriesUpdated; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDestroyEntryFromOverflowInventoryDenied; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClaimEntryAttachmentFromOverflowInventoryDenied; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t OverflowInventory[0x60]; // 0x0128 (Size: 0x60, Type: StructProperty)
    TArray<void*> OneTimeMailEvents; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxOverflowMessages; // 0x0198 (Size: 0x4, Type: IntProperty)
    FName OneTimeMailRegistryType; // 0x019C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OnInventoryOverflowChanged) == 200, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OnInventoryOverflowChanged");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OnInventoryOverflowEntriesRemoved) == 216, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OnInventoryOverflowEntriesRemoved");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OnInventoryOverflowEntriesAdded) == 232, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OnInventoryOverflowEntriesAdded");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OnInventoryOverflowEntriesUpdated) == 248, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OnInventoryOverflowEntriesUpdated");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OnDestroyEntryFromOverflowInventoryDenied) == 264, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OnDestroyEntryFromOverflowInventoryDenied");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OnClaimEntryAttachmentFromOverflowInventoryDenied) == 280, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OnClaimEntryAttachmentFromOverflowInventoryDenied");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OverflowInventory) == 296, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OverflowInventory");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OneTimeMailEvents) == 392, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OneTimeMailEvents");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, MaxOverflowMessages) == 408, "Offset mismatch for USproutControllerComponent_InventoryOverflow::MaxOverflowMessages");
static_assert(offsetof(USproutControllerComponent_InventoryOverflow, OneTimeMailRegistryType) == 412, "Offset mismatch for USproutControllerComponent_InventoryOverflow::OneTimeMailRegistryType");

// /Script/SproutNativeRuntime.SproutControllerComponent_Jobs
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_Jobs
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

static_assert(offsetof(USproutControllerComponent_Jobs, PrimaryComponentTick) == 56, "Offset mismatch for USproutControllerComponent_Jobs::PrimaryComponentTick");
static_assert(offsetof(USproutControllerComponent_Jobs, ComponentTags) == 104, "Offset mismatch for USproutControllerComponent_Jobs::ComponentTags");
static_assert(offsetof(USproutControllerComponent_Jobs, AssetUserData) == 120, "Offset mismatch for USproutControllerComponent_Jobs::AssetUserData");
static_assert(offsetof(USproutControllerComponent_Jobs, UCSSerializationIndex) == 144, "Offset mismatch for USproutControllerComponent_Jobs::UCSSerializationIndex");
static_assert(offsetof(USproutControllerComponent_Jobs, bNetAddressable) == 152, "Offset mismatch for USproutControllerComponent_Jobs::bNetAddressable");
static_assert(offsetof(USproutControllerComponent_Jobs, bAutoActivate) == 154, "Offset mismatch for USproutControllerComponent_Jobs::bAutoActivate");
static_assert(offsetof(USproutControllerComponent_Jobs, bIsEditorOnly) == 155, "Offset mismatch for USproutControllerComponent_Jobs::bIsEditorOnly");
static_assert(offsetof(USproutControllerComponent_Jobs, CreationMethod) == 185, "Offset mismatch for USproutControllerComponent_Jobs::CreationMethod");
static_assert(offsetof(USproutControllerComponent_Jobs, OnComponentActivated) == 186, "Offset mismatch for USproutControllerComponent_Jobs::OnComponentActivated");
static_assert(offsetof(USproutControllerComponent_Jobs, OnComponentDeactivated) == 187, "Offset mismatch for USproutControllerComponent_Jobs::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutControllerComponent_NeighborhoodInfo
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_NeighborhoodInfo
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnSproutNeighborhoodInfoChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSproutNeighborhoodKnowledgeChanged; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsMemberOfNeighborhood; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    std::uint8_t HomeNeighborhoodId[0x14]; // 0x00EC (Size: 0x14, Type: StructProperty)
    std::uint8_t NeighborhoodKnowledge[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutControllerComponent_NeighborhoodInfo, OnSproutNeighborhoodInfoChanged) == 200, "Offset mismatch for USproutControllerComponent_NeighborhoodInfo::OnSproutNeighborhoodInfoChanged");
static_assert(offsetof(USproutControllerComponent_NeighborhoodInfo, OnSproutNeighborhoodKnowledgeChanged) == 216, "Offset mismatch for USproutControllerComponent_NeighborhoodInfo::OnSproutNeighborhoodKnowledgeChanged");
static_assert(offsetof(USproutControllerComponent_NeighborhoodInfo, bIsMemberOfNeighborhood) == 232, "Offset mismatch for USproutControllerComponent_NeighborhoodInfo::bIsMemberOfNeighborhood");
static_assert(offsetof(USproutControllerComponent_NeighborhoodInfo, HomeNeighborhoodId) == 236, "Offset mismatch for USproutControllerComponent_NeighborhoodInfo::HomeNeighborhoodId");
static_assert(offsetof(USproutControllerComponent_NeighborhoodInfo, NeighborhoodKnowledge) == 256, "Offset mismatch for USproutControllerComponent_NeighborhoodInfo::NeighborhoodKnowledge");

// /Script/SproutNativeRuntime.SproutControllerComponent_NeighborhoodThemes
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_NeighborhoodThemes
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

static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, PrimaryComponentTick) == 56, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::PrimaryComponentTick");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, ComponentTags) == 104, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::ComponentTags");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, AssetUserData) == 120, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::AssetUserData");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, UCSSerializationIndex) == 144, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::UCSSerializationIndex");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, bNetAddressable) == 152, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::bNetAddressable");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, bAutoActivate) == 154, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::bAutoActivate");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, bIsEditorOnly) == 155, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::bIsEditorOnly");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, CreationMethod) == 185, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::CreationMethod");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, OnComponentActivated) == 186, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::OnComponentActivated");
static_assert(offsetof(USproutControllerComponent_NeighborhoodThemes, OnComponentDeactivated) == 187, "Offset mismatch for USproutControllerComponent_NeighborhoodThemes::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutControllerComponent_PersistedUnlocks
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_PersistedUnlocks
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bAllItemsAreUnlocked; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    TArray<void*> TrackedPersistedUnlockItems; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackedTransientUnlockItems; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00F0
    FMulticastInlineDelegate OnSproutPersistedUnlocksChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutControllerComponent_PersistedUnlocks, bAllItemsAreUnlocked) == 200, "Offset mismatch for USproutControllerComponent_PersistedUnlocks::bAllItemsAreUnlocked");
static_assert(offsetof(USproutControllerComponent_PersistedUnlocks, TrackedPersistedUnlockItems) == 208, "Offset mismatch for USproutControllerComponent_PersistedUnlocks::TrackedPersistedUnlockItems");
static_assert(offsetof(USproutControllerComponent_PersistedUnlocks, TrackedTransientUnlockItems) == 224, "Offset mismatch for USproutControllerComponent_PersistedUnlocks::TrackedTransientUnlockItems");
static_assert(offsetof(USproutControllerComponent_PersistedUnlocks, OnSproutPersistedUnlocksChanged) == 256, "Offset mismatch for USproutControllerComponent_PersistedUnlocks::OnSproutPersistedUnlocksChanged");

// /Script/SproutNativeRuntime.SproutControllerComponent_PersistentEventData
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_PersistentEventData
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

static_assert(offsetof(USproutControllerComponent_PersistentEventData, PrimaryComponentTick) == 56, "Offset mismatch for USproutControllerComponent_PersistentEventData::PrimaryComponentTick");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, ComponentTags) == 104, "Offset mismatch for USproutControllerComponent_PersistentEventData::ComponentTags");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, AssetUserData) == 120, "Offset mismatch for USproutControllerComponent_PersistentEventData::AssetUserData");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, UCSSerializationIndex) == 144, "Offset mismatch for USproutControllerComponent_PersistentEventData::UCSSerializationIndex");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, bNetAddressable) == 152, "Offset mismatch for USproutControllerComponent_PersistentEventData::bNetAddressable");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, bAutoActivate) == 154, "Offset mismatch for USproutControllerComponent_PersistentEventData::bAutoActivate");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, bIsEditorOnly) == 155, "Offset mismatch for USproutControllerComponent_PersistentEventData::bIsEditorOnly");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, CreationMethod) == 185, "Offset mismatch for USproutControllerComponent_PersistentEventData::CreationMethod");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, OnComponentActivated) == 186, "Offset mismatch for USproutControllerComponent_PersistentEventData::OnComponentActivated");
static_assert(offsetof(USproutControllerComponent_PersistentEventData, OnComponentDeactivated) == 187, "Offset mismatch for USproutControllerComponent_PersistentEventData::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutControllerComponent_Roommates
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_Roommates
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> MyRoommatesList; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0108
    TArray<void*> RoommateInvitesList; // 0x0120 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutControllerComponent_Roommates, MyRoommatesList) == 248, "Offset mismatch for USproutControllerComponent_Roommates::MyRoommatesList");
static_assert(offsetof(USproutControllerComponent_Roommates, RoommateInvitesList) == 288, "Offset mismatch for USproutControllerComponent_Roommates::RoommateInvitesList");

// /Script/SproutNativeRuntime.SproutControllerComponent_UGCUsers
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_UGCUsers
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> UGCUsersList; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutControllerComponent_UGCUsers, UGCUsersList) == 224, "Offset mismatch for USproutControllerComponent_UGCUsers::UGCUsersList");

// /Script/SproutNativeRuntime.SproutControllerComponent_Vehicles
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_Vehicles
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

static_assert(offsetof(USproutControllerComponent_Vehicles, PrimaryComponentTick) == 56, "Offset mismatch for USproutControllerComponent_Vehicles::PrimaryComponentTick");
static_assert(offsetof(USproutControllerComponent_Vehicles, ComponentTags) == 104, "Offset mismatch for USproutControllerComponent_Vehicles::ComponentTags");
static_assert(offsetof(USproutControllerComponent_Vehicles, AssetUserData) == 120, "Offset mismatch for USproutControllerComponent_Vehicles::AssetUserData");
static_assert(offsetof(USproutControllerComponent_Vehicles, UCSSerializationIndex) == 144, "Offset mismatch for USproutControllerComponent_Vehicles::UCSSerializationIndex");
static_assert(offsetof(USproutControllerComponent_Vehicles, bNetAddressable) == 152, "Offset mismatch for USproutControllerComponent_Vehicles::bNetAddressable");
static_assert(offsetof(USproutControllerComponent_Vehicles, bAutoActivate) == 154, "Offset mismatch for USproutControllerComponent_Vehicles::bAutoActivate");
static_assert(offsetof(USproutControllerComponent_Vehicles, bIsEditorOnly) == 155, "Offset mismatch for USproutControllerComponent_Vehicles::bIsEditorOnly");
static_assert(offsetof(USproutControllerComponent_Vehicles, CreationMethod) == 185, "Offset mismatch for USproutControllerComponent_Vehicles::CreationMethod");
static_assert(offsetof(USproutControllerComponent_Vehicles, OnComponentActivated) == 186, "Offset mismatch for USproutControllerComponent_Vehicles::OnComponentActivated");
static_assert(offsetof(USproutControllerComponent_Vehicles, OnComponentDeactivated) == 187, "Offset mismatch for USproutControllerComponent_Vehicles::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutControllerRequirement_AreActiveJobTasksGrantable
// Kind: Class; super: JunoControllerRequirement
class USproutControllerRequirement_AreActiveJobTasksGrantable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutControllerRequirement_AreActiveJobTasksGrantable, bInverseCondition) == 40, "Offset mismatch for USproutControllerRequirement_AreActiveJobTasksGrantable::bInverseCondition");

// /Script/SproutNativeRuntime.SproutControllerRequirement_HasInventorySpaceForHandheld
// Kind: Class; super: JunoControllerRequirement
class USproutControllerRequirement_HasInventorySpaceForHandheld
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutControllerRequirement_HasInventorySpaceForHandheld, bInverseCondition) == 40, "Offset mismatch for USproutControllerRequirement_HasInventorySpaceForHandheld::bInverseCondition");

// /Script/SproutNativeRuntime.SproutControllerRequirement_HasJobRewardTokens
// Kind: Class; super: JunoControllerRequirement
class USproutControllerRequirement_HasJobRewardTokens
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TokenTag[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::int32_t RequiredTokenCount; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(USproutControllerRequirement_HasJobRewardTokens, TokenTag) == 48, "Offset mismatch for USproutControllerRequirement_HasJobRewardTokens::TokenTag");
static_assert(offsetof(USproutControllerRequirement_HasJobRewardTokens, RequiredTokenCount) == 52, "Offset mismatch for USproutControllerRequirement_HasJobRewardTokens::RequiredTokenCount");

// /Script/SproutNativeRuntime.SproutControllerRequirement_HasJobTaskAtState
// Kind: Class; super: JunoControllerRequirement
class USproutControllerRequirement_HasJobTaskAtState
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TaskIdentifier[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t JobTaskProgressionState; // 0x0034 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USproutControllerRequirement_HasJobTaskAtState, TaskIdentifier) == 48, "Offset mismatch for USproutControllerRequirement_HasJobTaskAtState::TaskIdentifier");
static_assert(offsetof(USproutControllerRequirement_HasJobTaskAtState, JobTaskProgressionState) == 52, "Offset mismatch for USproutControllerRequirement_HasJobTaskAtState::JobTaskProgressionState");

// /Script/SproutNativeRuntime.SproutControllerRequirement_IsNPCJobTagPlayerAssignable
// Kind: Class; super: JunoControllerRequirement
class USproutControllerRequirement_IsNPCJobTagPlayerAssignable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutControllerRequirement_IsNPCJobTagPlayerAssignable, bInverseCondition) == 40, "Offset mismatch for USproutControllerRequirement_IsNPCJobTagPlayerAssignable::bInverseCondition");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_AssignJob
// Kind: Class; super: FortConversationTaskNode
class USproutConversationTaskNode_AssignJob
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t bAutoAssignUsingSpeakingNpcJob; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0171
    std::uint8_t JobTagToAssign[0x4]; // 0x0174 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParentJobTags[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutConversationTaskNode_AssignJob, bAutoAssignUsingSpeakingNpcJob) == 368, "Offset mismatch for USproutConversationTaskNode_AssignJob::bAutoAssignUsingSpeakingNpcJob");
static_assert(offsetof(USproutConversationTaskNode_AssignJob, JobTagToAssign) == 372, "Offset mismatch for USproutConversationTaskNode_AssignJob::JobTagToAssign");
static_assert(offsetof(USproutConversationTaskNode_AssignJob, ParentJobTags) == 376, "Offset mismatch for USproutConversationTaskNode_AssignJob::ParentJobTags");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_ConsumeJobRewardTokens
// Kind: Class; super: FortConversationTaskNode
class USproutConversationTaskNode_ConsumeJobRewardTokens
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    TMap<void*, void*> JobRewardTokensToConsume; // 0x0170 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USproutConversationTaskNode_ConsumeJobRewardTokens, JobRewardTokensToConsume) == 368, "Offset mismatch for USproutConversationTaskNode_ConsumeJobRewardTokens::JobRewardTokensToConsume");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_GrantActiveJobTask
// Kind: Class; super: FortConversationTaskNode
class USproutConversationTaskNode_GrantActiveJobTask
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t bGrantRandomTask; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0171
    std::uint8_t JobTaskToGrantIdentifier[0x1]; // 0x0174 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutConversationTaskNode_GrantActiveJobTask, bGrantRandomTask) == 368, "Offset mismatch for USproutConversationTaskNode_GrantActiveJobTask::bGrantRandomTask");
static_assert(offsetof(USproutConversationTaskNode_GrantActiveJobTask, JobTaskToGrantIdentifier) == 372, "Offset mismatch for USproutConversationTaskNode_GrantActiveJobTask::JobTaskToGrantIdentifier");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_GrantLootBundle
// Kind: Class; super: FortConversationTaskNode
class USproutConversationTaskNode_GrantLootBundle
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t LootBundleIdentifier[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutConversationTaskNode_GrantLootBundle, LootBundleIdentifier) == 368, "Offset mismatch for USproutConversationTaskNode_GrantLootBundle::LootBundleIdentifier");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_SellOrGiftHandheld
// Kind: Class; super: FortConversationTaskNode_Service
class USproutConversationTaskNode_SellOrGiftHandheld
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t bGiftSetup; // 0x0190 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0191
    std::uint8_t GiftTextFormat[0x10]; // 0x0198 (Size: 0x10, Type: TextProperty)
    std::uint8_t SellTextFormat[0x10]; // 0x01A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t SellingDataTable[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    TArray<void*> PossibleChoicesCounts; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GiftCTATags[0x20]; // 0x01F8 (Size: 0x20, Type: StructProperty)
    void* ContextualAnimScene; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContextualAnimAbilityTag[0x4]; // 0x0220 (Size: 0x4, Type: StructProperty)
    std::uint8_t bGrantRewardAfterCAS; // 0x0224 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendItemGivenVerb; // 0x0225 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSendItemGivenVerbBeforeCompletion; // 0x0226 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0227
    std::uint8_t ItemGivenExtraTags[0x1]; // 0x0228 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, bGiftSetup) == 400, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::bGiftSetup");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, GiftTextFormat) == 408, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::GiftTextFormat");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, SellTextFormat) == 424, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::SellTextFormat");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, SellingDataTable) == 440, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::SellingDataTable");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, PossibleChoicesCounts) == 488, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::PossibleChoicesCounts");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, GiftCTATags) == 504, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::GiftCTATags");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, ContextualAnimScene) == 536, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::ContextualAnimScene");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, ContextualAnimAbilityTag) == 544, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::ContextualAnimAbilityTag");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, bGrantRewardAfterCAS) == 548, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::bGrantRewardAfterCAS");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, bSendItemGivenVerb) == 549, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::bSendItemGivenVerb");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, bSendItemGivenVerbBeforeCompletion) == 550, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::bSendItemGivenVerbBeforeCompletion");
static_assert(offsetof(USproutConversationTaskNode_SellOrGiftHandheld, ItemGivenExtraTags) == 552, "Offset mismatch for USproutConversationTaskNode_SellOrGiftHandheld::ItemGivenExtraTags");

// /Script/SproutNativeRuntime.SproutConversationTaskNode_SetPersistentEventData
// Kind: Class; super: FortConversationTaskNode
class USproutConversationTaskNode_SetPersistentEventData
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t EventKey[0x4]; // 0x0170 (Size: 0x4, Type: StructProperty)
    std::uint8_t DataType; // 0x0174 (Size: 0x1, Type: EnumProperty)
    std::uint8_t IntModificationType; // 0x0175 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0176
    std::int32_t IntModificationAmount; // 0x0178 (Size: 0x4, Type: IntProperty)
    std::uint8_t BoolModificationValue; // 0x017C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutConversationTaskNode_SetPersistentEventData, EventKey) == 368, "Offset mismatch for USproutConversationTaskNode_SetPersistentEventData::EventKey");
static_assert(offsetof(USproutConversationTaskNode_SetPersistentEventData, DataType) == 372, "Offset mismatch for USproutConversationTaskNode_SetPersistentEventData::DataType");
static_assert(offsetof(USproutConversationTaskNode_SetPersistentEventData, IntModificationType) == 373, "Offset mismatch for USproutConversationTaskNode_SetPersistentEventData::IntModificationType");
static_assert(offsetof(USproutConversationTaskNode_SetPersistentEventData, IntModificationAmount) == 376, "Offset mismatch for USproutConversationTaskNode_SetPersistentEventData::IntModificationAmount");
static_assert(offsetof(USproutConversationTaskNode_SetPersistentEventData, BoolModificationValue) == 380, "Offset mismatch for USproutConversationTaskNode_SetPersistentEventData::BoolModificationValue");

// /Script/SproutNativeRuntime.SproutCoreBuildingItemDefinition
// Kind: Class; super: BuilderToolItemDefinition
class USproutCoreBuildingItemDefinition
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t ItemType; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrimaryAssetIdItemTypeOverride; // 0x0099 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShouldDisplayQuantity; // 0x009A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutCoreBuildingItemDefinition, ItemType) == 152, "Offset mismatch for USproutCoreBuildingItemDefinition::ItemType");
static_assert(offsetof(USproutCoreBuildingItemDefinition, PrimaryAssetIdItemTypeOverride) == 153, "Offset mismatch for USproutCoreBuildingItemDefinition::PrimaryAssetIdItemTypeOverride");
static_assert(offsetof(USproutCoreBuildingItemDefinition, bShouldDisplayQuantity) == 154, "Offset mismatch for USproutCoreBuildingItemDefinition::bShouldDisplayQuantity");

// /Script/SproutNativeRuntime.SproutDynamicRelevancyComponent
// Kind: Class; super: LFNDynamicRelevancyComponent
class USproutDynamicRelevancyComponent
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    std::uint8_t CullDistanceJobVolume[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t RequiredJobLocationTagQuery[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutDynamicRelevancyComponent, CullDistanceJobVolume) == 392, "Offset mismatch for USproutDynamicRelevancyComponent::CullDistanceJobVolume");
static_assert(offsetof(USproutDynamicRelevancyComponent, RequiredJobLocationTagQuery) == 432, "Offset mismatch for USproutDynamicRelevancyComponent::RequiredJobLocationTagQuery");

// /Script/SproutNativeRuntime.SproutEndSessionAnalytics
// Kind: Class; super: Interface
class USproutEndSessionAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutEventManager
// Kind: Class; super: FortGameStateComponent
class USproutEventManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FName SproutEventsRegistryType; // 0x00C0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00C8
    std::uint8_t EventArray[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutEventManager, SproutEventsRegistryType) == 192, "Offset mismatch for USproutEventManager::SproutEventsRegistryType");
static_assert(offsetof(USproutEventManager, EventArray) == 232, "Offset mismatch for USproutEventManager::EventArray");

// /Script/SproutNativeRuntime.SproutEventRouterLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USproutEventRouterLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutFilteredEventContextCollector
// Kind: Class; super: FilteredEventContextCollectorBase
class USproutFilteredEventContextCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutGameFeatureAction_AddSproutAnalytics
// Kind: Class; super: GameFeatureAction
class USproutGameFeatureAction_AddSproutAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutGameStateComponent
// Kind: Class; super: GameStateComponent
class USproutGameStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> DisabledItems; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutGameStateComponent, DisabledItems) == 192, "Offset mismatch for USproutGameStateComponent::DisabledItems");

// /Script/SproutNativeRuntime.SproutGameStateComponent_CinematicsRelevency
// Kind: Class; super: FortGameStateComponent
class USproutGameStateComponent_CinematicsRelevency
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CinematicReleventTrackedClassesRegistry[0x8]; // 0x00C0 (Size: 0x8, Type: StructProperty)
    TArray<void*> TrackedClassesArray; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutGameStateComponent_CinematicsRelevency, CinematicReleventTrackedClassesRegistry) == 192, "Offset mismatch for USproutGameStateComponent_CinematicsRelevency::CinematicReleventTrackedClassesRegistry");
static_assert(offsetof(USproutGameStateComponent_CinematicsRelevency, TrackedClassesArray) == 200, "Offset mismatch for USproutGameStateComponent_CinematicsRelevency::TrackedClassesArray");

// /Script/SproutNativeRuntime.SproutGameStateComponent_CommunicationOverride
// Kind: Class; super: FortGameStateComponent_CommunicationOverride
class USproutGameStateComponent_CommunicationOverride
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnBubbleChatSettingsUpdated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D0
    std::uint8_t TextChatSetting[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TextChatWholeWorldSetting[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t BubbleChatSettings[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutGameStateComponent_CommunicationOverride, OnBubbleChatSettingsUpdated) == 192, "Offset mismatch for USproutGameStateComponent_CommunicationOverride::OnBubbleChatSettingsUpdated");
static_assert(offsetof(USproutGameStateComponent_CommunicationOverride, TextChatSetting) == 232, "Offset mismatch for USproutGameStateComponent_CommunicationOverride::TextChatSetting");
static_assert(offsetof(USproutGameStateComponent_CommunicationOverride, TextChatWholeWorldSetting) == 272, "Offset mismatch for USproutGameStateComponent_CommunicationOverride::TextChatWholeWorldSetting");
static_assert(offsetof(USproutGameStateComponent_CommunicationOverride, BubbleChatSettings) == 312, "Offset mismatch for USproutGameStateComponent_CommunicationOverride::BubbleChatSettings");

// /Script/SproutNativeRuntime.SproutGameStateComponent_DollHouse
// Kind: Class; super: GameStateComponent
class USproutGameStateComponent_DollHouse
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t BasePossibleConfiguration[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t DebugSpawner[0x20]; // 0x00F0 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> TemporarySaveDataPerPlayer; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedDigestedPossibleOptions[0x120]; // 0x0120 (Size: 0x120, Type: StructProperty)
    std::uint8_t bIsPersistentStateInitialized; // 0x0240 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutGameStateComponent_DollHouse, BasePossibleConfiguration) == 192, "Offset mismatch for USproutGameStateComponent_DollHouse::BasePossibleConfiguration");
static_assert(offsetof(USproutGameStateComponent_DollHouse, DebugSpawner) == 240, "Offset mismatch for USproutGameStateComponent_DollHouse::DebugSpawner");
static_assert(offsetof(USproutGameStateComponent_DollHouse, TemporarySaveDataPerPlayer) == 272, "Offset mismatch for USproutGameStateComponent_DollHouse::TemporarySaveDataPerPlayer");
static_assert(offsetof(USproutGameStateComponent_DollHouse, ReplicatedDigestedPossibleOptions) == 288, "Offset mismatch for USproutGameStateComponent_DollHouse::ReplicatedDigestedPossibleOptions");
static_assert(offsetof(USproutGameStateComponent_DollHouse, bIsPersistentStateInitialized) == 576, "Offset mismatch for USproutGameStateComponent_DollHouse::bIsPersistentStateInitialized");

// /Script/SproutNativeRuntime.SproutGameStateComponent_NeighborhoodHousing
// Kind: Class; super: GameStateComponent
class USproutGameStateComponent_NeighborhoodHousing
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    FMulticastInlineDelegate OnNeighborhoodHousingSlotsUpdated; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNeighborhoodHousingSaveSlotPurchaseApproved; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNeighborhoodHousingSaveSlotDeleteApproved; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0108
    TArray<void*> HousingSlots; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutGameStateComponent_NeighborhoodHousing, OnNeighborhoodHousingSlotsUpdated) == 216, "Offset mismatch for USproutGameStateComponent_NeighborhoodHousing::OnNeighborhoodHousingSlotsUpdated");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodHousing, OnNeighborhoodHousingSaveSlotPurchaseApproved) == 232, "Offset mismatch for USproutGameStateComponent_NeighborhoodHousing::OnNeighborhoodHousingSaveSlotPurchaseApproved");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodHousing, OnNeighborhoodHousingSaveSlotDeleteApproved) == 248, "Offset mismatch for USproutGameStateComponent_NeighborhoodHousing::OnNeighborhoodHousingSaveSlotDeleteApproved");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodHousing, HousingSlots) == 312, "Offset mismatch for USproutGameStateComponent_NeighborhoodHousing::HousingSlots");

// /Script/SproutNativeRuntime.SproutGameStateComponent_NeighborhoodManager
// Kind: Class; super: GameStateComponent
class USproutGameStateComponent_NeighborhoodManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnSproutNeighborhoodMembershipChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x48]; // 0x00D0
    std::uint8_t MaxNeighborhoodMembers[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    TArray<void*> MemberList; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t NeighborhoodId[0x10]; // 0x0150 (Size: 0x10, Type: StructProperty)
    std::uint8_t CurrentDescription[0x1]; // 0x0160 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutGameStateComponent_NeighborhoodManager, OnSproutNeighborhoodMembershipChanged) == 192, "Offset mismatch for USproutGameStateComponent_NeighborhoodManager::OnSproutNeighborhoodMembershipChanged");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodManager, MaxNeighborhoodMembers) == 280, "Offset mismatch for USproutGameStateComponent_NeighborhoodManager::MaxNeighborhoodMembers");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodManager, MemberList) == 320, "Offset mismatch for USproutGameStateComponent_NeighborhoodManager::MemberList");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodManager, NeighborhoodId) == 336, "Offset mismatch for USproutGameStateComponent_NeighborhoodManager::NeighborhoodId");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodManager, CurrentDescription) == 352, "Offset mismatch for USproutGameStateComponent_NeighborhoodManager::CurrentDescription");

// /Script/SproutNativeRuntime.SproutGameStateComponent_NeighborhoodThemes
// Kind: Class; super: GameStateComponent
class USproutGameStateComponent_NeighborhoodThemes
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnSproutNeighborhoodThemeChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ThemeRegistryType[0x4]; // 0x00D0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveTheme[0x4]; // 0x00D4 (Size: 0x4, Type: StructProperty)
    TArray<void*> ActiveDataLayers; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutGameStateComponent_NeighborhoodThemes, OnSproutNeighborhoodThemeChanged) == 192, "Offset mismatch for USproutGameStateComponent_NeighborhoodThemes::OnSproutNeighborhoodThemeChanged");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodThemes, ThemeRegistryType) == 208, "Offset mismatch for USproutGameStateComponent_NeighborhoodThemes::ThemeRegistryType");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodThemes, ActiveTheme) == 212, "Offset mismatch for USproutGameStateComponent_NeighborhoodThemes::ActiveTheme");
static_assert(offsetof(USproutGameStateComponent_NeighborhoodThemes, ActiveDataLayers) == 216, "Offset mismatch for USproutGameStateComponent_NeighborhoodThemes::ActiveDataLayers");

// /Script/SproutNativeRuntime.SproutGameStateComponent_Notifications
// Kind: Class; super: GameStateComponent
class USproutGameStateComponent_Notifications
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

static_assert(offsetof(USproutGameStateComponent_Notifications, PrimaryComponentTick) == 56, "Offset mismatch for USproutGameStateComponent_Notifications::PrimaryComponentTick");
static_assert(offsetof(USproutGameStateComponent_Notifications, ComponentTags) == 104, "Offset mismatch for USproutGameStateComponent_Notifications::ComponentTags");
static_assert(offsetof(USproutGameStateComponent_Notifications, AssetUserData) == 120, "Offset mismatch for USproutGameStateComponent_Notifications::AssetUserData");
static_assert(offsetof(USproutGameStateComponent_Notifications, UCSSerializationIndex) == 144, "Offset mismatch for USproutGameStateComponent_Notifications::UCSSerializationIndex");
static_assert(offsetof(USproutGameStateComponent_Notifications, bNetAddressable) == 152, "Offset mismatch for USproutGameStateComponent_Notifications::bNetAddressable");
static_assert(offsetof(USproutGameStateComponent_Notifications, bAutoActivate) == 154, "Offset mismatch for USproutGameStateComponent_Notifications::bAutoActivate");
static_assert(offsetof(USproutGameStateComponent_Notifications, bIsEditorOnly) == 155, "Offset mismatch for USproutGameStateComponent_Notifications::bIsEditorOnly");
static_assert(offsetof(USproutGameStateComponent_Notifications, CreationMethod) == 185, "Offset mismatch for USproutGameStateComponent_Notifications::CreationMethod");
static_assert(offsetof(USproutGameStateComponent_Notifications, OnComponentActivated) == 186, "Offset mismatch for USproutGameStateComponent_Notifications::OnComponentActivated");
static_assert(offsetof(USproutGameStateComponent_Notifications, OnComponentDeactivated) == 187, "Offset mismatch for USproutGameStateComponent_Notifications::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutGameStateComponent_Requests
// Kind: Class; super: GameStateComponent
class USproutGameStateComponent_Requests
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> PerCategoryRequestsDataRegistryType; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> PerCategoryRequestsDataDigested; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutGameStateComponent_Requests, PerCategoryRequestsDataRegistryType) == 192, "Offset mismatch for USproutGameStateComponent_Requests::PerCategoryRequestsDataRegistryType");
static_assert(offsetof(USproutGameStateComponent_Requests, PerCategoryRequestsDataDigested) == 208, "Offset mismatch for USproutGameStateComponent_Requests::PerCategoryRequestsDataDigested");

// /Script/SproutNativeRuntime.SproutGrantPoseEmoteControllerComponent
// Kind: Class; super: FortControllerComponent
class USproutGrantPoseEmoteControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> EmotesToGrant; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutGrantPoseEmoteControllerComponent, EmotesToGrant) == 200, "Offset mismatch for USproutGrantPoseEmoteControllerComponent::EmotesToGrant");

// /Script/SproutNativeRuntime.SproutHousingGameplayVolume
// Kind: Class; super: GameplayVolume
class USproutHousingGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    FMulticastInlineDelegate OnHouseOwnerChanged; // 0x0348 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHousingShellStreamedIn; // 0x0358 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDecorCountChanged; // 0x0368 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PlayerStartType; // 0x0378 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0379
    std::uint8_t MainLevel_GridName[0x4]; // 0x037C (Size: 0x4, Type: NameProperty)
    std::uint8_t HLODLevel_GridName[0x4]; // 0x0380 (Size: 0x4, Type: NameProperty)
    std::int32_t LevelStreamingPriority; // 0x0384 (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceClusterNetFilter; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0389
    std::uint8_t OwnershipPriceTag[0x4]; // 0x038C (Size: 0x4, Type: StructProperty)
    std::uint8_t LotOwnershipInfo[0x48]; // 0x0390 (Size: 0x48, Type: StructProperty)
    TArray<void*> TrackedShellActors; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x78]; // 0x03E8
    std::uint8_t RegisteredLevel[0x11]; // 0x0460 (Size: 0x11, Type: StructProperty)
    std::uint8_t BuildLocation; // 0x0471 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x96]; // 0x0472
    std::uint8_t MaxDecorCount[0x28]; // 0x0508 (Size: 0x28, Type: StructProperty)
    std::int32_t CurrentDecorCount; // 0x0530 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x1C]; // 0x0534
    void* WaitForEventRouterAction; // 0x0550 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UnoccupiedHousingMarker[0x1]; // 0x0558 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutHousingGameplayVolume, OnHouseOwnerChanged) == 840, "Offset mismatch for USproutHousingGameplayVolume::OnHouseOwnerChanged");
static_assert(offsetof(USproutHousingGameplayVolume, OnHousingShellStreamedIn) == 856, "Offset mismatch for USproutHousingGameplayVolume::OnHousingShellStreamedIn");
static_assert(offsetof(USproutHousingGameplayVolume, OnDecorCountChanged) == 872, "Offset mismatch for USproutHousingGameplayVolume::OnDecorCountChanged");
static_assert(offsetof(USproutHousingGameplayVolume, PlayerStartType) == 888, "Offset mismatch for USproutHousingGameplayVolume::PlayerStartType");
static_assert(offsetof(USproutHousingGameplayVolume, MainLevel_GridName) == 892, "Offset mismatch for USproutHousingGameplayVolume::MainLevel_GridName");
static_assert(offsetof(USproutHousingGameplayVolume, HLODLevel_GridName) == 896, "Offset mismatch for USproutHousingGameplayVolume::HLODLevel_GridName");
static_assert(offsetof(USproutHousingGameplayVolume, LevelStreamingPriority) == 900, "Offset mismatch for USproutHousingGameplayVolume::LevelStreamingPriority");
static_assert(offsetof(USproutHousingGameplayVolume, bForceClusterNetFilter) == 904, "Offset mismatch for USproutHousingGameplayVolume::bForceClusterNetFilter");
static_assert(offsetof(USproutHousingGameplayVolume, OwnershipPriceTag) == 908, "Offset mismatch for USproutHousingGameplayVolume::OwnershipPriceTag");
static_assert(offsetof(USproutHousingGameplayVolume, LotOwnershipInfo) == 912, "Offset mismatch for USproutHousingGameplayVolume::LotOwnershipInfo");
static_assert(offsetof(USproutHousingGameplayVolume, TrackedShellActors) == 984, "Offset mismatch for USproutHousingGameplayVolume::TrackedShellActors");
static_assert(offsetof(USproutHousingGameplayVolume, RegisteredLevel) == 1120, "Offset mismatch for USproutHousingGameplayVolume::RegisteredLevel");
static_assert(offsetof(USproutHousingGameplayVolume, BuildLocation) == 1137, "Offset mismatch for USproutHousingGameplayVolume::BuildLocation");
static_assert(offsetof(USproutHousingGameplayVolume, MaxDecorCount) == 1288, "Offset mismatch for USproutHousingGameplayVolume::MaxDecorCount");
static_assert(offsetof(USproutHousingGameplayVolume, CurrentDecorCount) == 1328, "Offset mismatch for USproutHousingGameplayVolume::CurrentDecorCount");
static_assert(offsetof(USproutHousingGameplayVolume, WaitForEventRouterAction) == 1360, "Offset mismatch for USproutHousingGameplayVolume::WaitForEventRouterAction");
static_assert(offsetof(USproutHousingGameplayVolume, UnoccupiedHousingMarker) == 1368, "Offset mismatch for USproutHousingGameplayVolume::UnoccupiedHousingMarker");

// /Script/SproutNativeRuntime.SproutHousingISM
// Kind: Class; super: LFNWorldPartitionActor
class USproutHousingISM
{
public:
    std::uint8_t Pad_0000[0x3B8]; // 0x0000
    std::uint8_t bShouldBeGridAligned; // 0x03B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutHousingISM, bShouldBeGridAligned) == 952, "Offset mismatch for USproutHousingISM::bShouldBeGridAligned");

// /Script/SproutNativeRuntime.SproutHousingItemDefinition
// Kind: Class; super: FortWorldItemDefinition
class USproutHousingItemDefinition
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t HousingShellLevel[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> HousingShellLevelHLOD; // 0x00C8 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t OffsetTransform[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutHousingItemDefinition, HousingShellLevel) == 168, "Offset mismatch for USproutHousingItemDefinition::HousingShellLevel");
static_assert(offsetof(USproutHousingItemDefinition, HousingShellLevelHLOD) == 200, "Offset mismatch for USproutHousingItemDefinition::HousingShellLevelHLOD");
static_assert(offsetof(USproutHousingItemDefinition, OffsetTransform) == 240, "Offset mismatch for USproutHousingItemDefinition::OffsetTransform");

// /Script/SproutNativeRuntime.SproutHousingPlayspace
// Kind: Class; super: FortPlayspace
class USproutHousingPlayspace
{
public:
    std::uint8_t Pad_0000[0x528]; // 0x0000
    FMulticastInlineDelegate NotifyInactivePlayspaceUserAdded; // 0x0528 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0538
    FMulticastInlineDelegate NotifyInactivePlayspaceUserRemoved; // 0x0550 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0560
    std::uint8_t InactivePlayspaceUsers[0x78]; // 0x0578 (Size: 0x78, Type: StructProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x05F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x05F1
    std::uint8_t UserAcceptanceType; // 0x05F3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x4]; // 0x05F4
    std::uint8_t MatchmakingSettings[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    void* ReplicatedStateClass; // 0x0620 (Size: 0x8, Type: ClassProperty)
    void* ReplicatedState; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* EventRouter; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bShouldCreateEventRouter; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0639
    TArray<void*> InactivePendingUsers; // 0x0640 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutHousingPlayspace, NotifyInactivePlayspaceUserAdded) == 1320, "Offset mismatch for USproutHousingPlayspace::NotifyInactivePlayspaceUserAdded");
static_assert(offsetof(USproutHousingPlayspace, NotifyInactivePlayspaceUserRemoved) == 1360, "Offset mismatch for USproutHousingPlayspace::NotifyInactivePlayspaceUserRemoved");
static_assert(offsetof(USproutHousingPlayspace, InactivePlayspaceUsers) == 1400, "Offset mismatch for USproutHousingPlayspace::InactivePlayspaceUsers");
static_assert(offsetof(USproutHousingPlayspace, bSubscribeToMeshNetwork) == 1520, "Offset mismatch for USproutHousingPlayspace::bSubscribeToMeshNetwork");
static_assert(offsetof(USproutHousingPlayspace, UserAcceptanceType) == 1523, "Offset mismatch for USproutHousingPlayspace::UserAcceptanceType");
static_assert(offsetof(USproutHousingPlayspace, MatchmakingSettings) == 1528, "Offset mismatch for USproutHousingPlayspace::MatchmakingSettings");
static_assert(offsetof(USproutHousingPlayspace, ReplicatedStateClass) == 1568, "Offset mismatch for USproutHousingPlayspace::ReplicatedStateClass");
static_assert(offsetof(USproutHousingPlayspace, ReplicatedState) == 1576, "Offset mismatch for USproutHousingPlayspace::ReplicatedState");
static_assert(offsetof(USproutHousingPlayspace, EventRouter) == 1584, "Offset mismatch for USproutHousingPlayspace::EventRouter");
static_assert(offsetof(USproutHousingPlayspace, bShouldCreateEventRouter) == 1592, "Offset mismatch for USproutHousingPlayspace::bShouldCreateEventRouter");
static_assert(offsetof(USproutHousingPlayspace, InactivePendingUsers) == 1600, "Offset mismatch for USproutHousingPlayspace::InactivePendingUsers");

// /Script/SproutNativeRuntime.SproutInstancedActorsSubsystem
// Kind: Class; super: InstancedActorsSubsystem
class USproutInstancedActorsSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* ProjectSettings; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* DataRegistrySubsystem; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ActorPartitionSubsystem; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* InstancedActorsManagerClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x1C8]; // 0x0088
    void* ExemplarActorWorld; // 0x0250 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0258
    void* SettingsType; // 0x0268 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutInstancedActorsSubsystem, ProjectSettings) == 104, "Offset mismatch for USproutInstancedActorsSubsystem::ProjectSettings");
static_assert(offsetof(USproutInstancedActorsSubsystem, DataRegistrySubsystem) == 112, "Offset mismatch for USproutInstancedActorsSubsystem::DataRegistrySubsystem");
static_assert(offsetof(USproutInstancedActorsSubsystem, ActorPartitionSubsystem) == 120, "Offset mismatch for USproutInstancedActorsSubsystem::ActorPartitionSubsystem");
static_assert(offsetof(USproutInstancedActorsSubsystem, InstancedActorsManagerClass) == 128, "Offset mismatch for USproutInstancedActorsSubsystem::InstancedActorsManagerClass");
static_assert(offsetof(USproutInstancedActorsSubsystem, ExemplarActorWorld) == 592, "Offset mismatch for USproutInstancedActorsSubsystem::ExemplarActorWorld");
static_assert(offsetof(USproutInstancedActorsSubsystem, SettingsType) == 616, "Offset mismatch for USproutInstancedActorsSubsystem::SettingsType");

// /Script/SproutNativeRuntime.SproutInteriorVolume
// Kind: Class; super: GameplayVolume
class USproutInteriorVolume
{
public:
    std::uint8_t Pad_0000[0x348]; // 0x0000
    std::uint8_t EnableInteriorStreaming; // 0x0348 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnableEntranceVolume; // 0x0349 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x034A
    TArray<void*> EntranceVolumes; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StreamingSourceLocation[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    std::uint8_t GameplayTags[0x20]; // 0x0378 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocationTag[0x1]; // 0x0398 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutInteriorVolume, EnableInteriorStreaming) == 840, "Offset mismatch for USproutInteriorVolume::EnableInteriorStreaming");
static_assert(offsetof(USproutInteriorVolume, EnableEntranceVolume) == 841, "Offset mismatch for USproutInteriorVolume::EnableEntranceVolume");
static_assert(offsetof(USproutInteriorVolume, EntranceVolumes) == 848, "Offset mismatch for USproutInteriorVolume::EntranceVolumes");
static_assert(offsetof(USproutInteriorVolume, StreamingSourceLocation) == 864, "Offset mismatch for USproutInteriorVolume::StreamingSourceLocation");
static_assert(offsetof(USproutInteriorVolume, GameplayTags) == 888, "Offset mismatch for USproutInteriorVolume::GameplayTags");
static_assert(offsetof(USproutInteriorVolume, LocationTag) == 920, "Offset mismatch for USproutInteriorVolume::LocationTag");

// /Script/SproutNativeRuntime.SproutInteriorVolumeLoader
// Kind: Class; super: GameplayVolume
class USproutInteriorVolumeLoader
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* RootSceneComponent; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* EntranceBoxComponent; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* EntranceOverlapComponent; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutInteriorVolumeLoader, RootSceneComponent) == 824, "Offset mismatch for USproutInteriorVolumeLoader::RootSceneComponent");
static_assert(offsetof(USproutInteriorVolumeLoader, EntranceBoxComponent) == 832, "Offset mismatch for USproutInteriorVolumeLoader::EntranceBoxComponent");
static_assert(offsetof(USproutInteriorVolumeLoader, EntranceOverlapComponent) == 840, "Offset mismatch for USproutInteriorVolumeLoader::EntranceOverlapComponent");

// /Script/SproutNativeRuntime.SproutInventoryManagerComponent
// Kind: Class; super: JunoInventoryManagerComponent
class USproutInventoryManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> InventoryHandles; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InventoryInstances; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutInventoryManagerComponent, InventoryHandles) == 192, "Offset mismatch for USproutInventoryManagerComponent::InventoryHandles");
static_assert(offsetof(USproutInventoryManagerComponent, InventoryInstances) == 208, "Offset mismatch for USproutInventoryManagerComponent::InventoryInstances");

// /Script/SproutNativeRuntime.SproutItemExchangeAudioComponent
// Kind: Class; super: ActorComponent
class USproutItemExchangeAudioComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> PickupSoundsToLoad; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedPickupSounds; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutItemExchangeAudioComponent, PickupSoundsToLoad) == 192, "Offset mismatch for USproutItemExchangeAudioComponent::PickupSoundsToLoad");
static_assert(offsetof(USproutItemExchangeAudioComponent, LoadedPickupSounds) == 208, "Offset mismatch for USproutItemExchangeAudioComponent::LoadedPickupSounds");

// /Script/SproutNativeRuntime.SproutJobTrackerComponent
// Kind: Class; super: GameFrameworkComponent
class USproutJobTrackerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ToleranceForMovementUpdates[0x50]; // 0x00C0 (Size: 0x50, Type: StructProperty)
    TWeakObjectPtr<void> EnclosingJobVolume; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> LastReceivedJobVolumeOnClient; // 0x0118 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutJobTrackerComponent, ToleranceForMovementUpdates) == 192, "Offset mismatch for USproutJobTrackerComponent::ToleranceForMovementUpdates");
static_assert(offsetof(USproutJobTrackerComponent, EnclosingJobVolume) == 272, "Offset mismatch for USproutJobTrackerComponent::EnclosingJobVolume");
static_assert(offsetof(USproutJobTrackerComponent, LastReceivedJobVolumeOnClient) == 280, "Offset mismatch for USproutJobTrackerComponent::LastReceivedJobVolumeOnClient");

// /Script/SproutNativeRuntime.SproutJobVolume
// Kind: Class; super: Actor
class USproutJobVolume
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t AssociatedJobTags[0x20]; // 0x0278 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocationTags[0x1]; // 0x0298 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutJobVolume, AssociatedJobTags) == 632, "Offset mismatch for USproutJobVolume::AssociatedJobTags");
static_assert(offsetof(USproutJobVolume, LocationTags) == 664, "Offset mismatch for USproutJobVolume::LocationTags");

// /Script/SproutNativeRuntime.SproutJobWorkerStateComponent
// Kind: Class; super: GameFrameworkComponent
class USproutJobWorkerStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CurrentJobTags[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CurrentJobTask[0xE8]; // 0x00E0 (Size: 0xE8, Type: StructProperty)
    std::uint8_t bIsJobTaskCooldownActive; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x01C9
    TMap<void*, void*> TrendingJobFirstTimeCompletionTracker; // 0x01D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasCompletedActiveTask; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01E9
    std::uint8_t BoostedJobsCopy[0x20]; // 0x01F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t JobProgressionArray[0xA8]; // 0x0210 (Size: 0xA8, Type: StructProperty)
    TMap<void*, void*> JobRewardTokens; // 0x02B8 (Size: 0x10, Type: MapProperty)
    std::uint8_t JobRewardTokenCap[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bIsPersistentStateInitialized; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xF]; // 0x02F1
    FMulticastInlineDelegate OnWorkerPersistentStateInitialized; // 0x0300 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorkerJobTagsChanged; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorkerJobExperienceChanged; // 0x0320 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorkerJobLevelChanged; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorkerJobTaskChanged; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorkerJobTaskCompleted; // 0x0350 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWorkerJobTaskCooldownStateChanged; // 0x0360 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutJobWorkerStateComponent, CurrentJobTags) == 192, "Offset mismatch for USproutJobWorkerStateComponent::CurrentJobTags");
static_assert(offsetof(USproutJobWorkerStateComponent, CurrentJobTask) == 224, "Offset mismatch for USproutJobWorkerStateComponent::CurrentJobTask");
static_assert(offsetof(USproutJobWorkerStateComponent, bIsJobTaskCooldownActive) == 456, "Offset mismatch for USproutJobWorkerStateComponent::bIsJobTaskCooldownActive");
static_assert(offsetof(USproutJobWorkerStateComponent, TrendingJobFirstTimeCompletionTracker) == 472, "Offset mismatch for USproutJobWorkerStateComponent::TrendingJobFirstTimeCompletionTracker");
static_assert(offsetof(USproutJobWorkerStateComponent, bHasCompletedActiveTask) == 488, "Offset mismatch for USproutJobWorkerStateComponent::bHasCompletedActiveTask");
static_assert(offsetof(USproutJobWorkerStateComponent, BoostedJobsCopy) == 496, "Offset mismatch for USproutJobWorkerStateComponent::BoostedJobsCopy");
static_assert(offsetof(USproutJobWorkerStateComponent, JobProgressionArray) == 528, "Offset mismatch for USproutJobWorkerStateComponent::JobProgressionArray");
static_assert(offsetof(USproutJobWorkerStateComponent, JobRewardTokens) == 696, "Offset mismatch for USproutJobWorkerStateComponent::JobRewardTokens");
static_assert(offsetof(USproutJobWorkerStateComponent, JobRewardTokenCap) == 712, "Offset mismatch for USproutJobWorkerStateComponent::JobRewardTokenCap");
static_assert(offsetof(USproutJobWorkerStateComponent, bIsPersistentStateInitialized) == 752, "Offset mismatch for USproutJobWorkerStateComponent::bIsPersistentStateInitialized");
static_assert(offsetof(USproutJobWorkerStateComponent, OnWorkerPersistentStateInitialized) == 768, "Offset mismatch for USproutJobWorkerStateComponent::OnWorkerPersistentStateInitialized");
static_assert(offsetof(USproutJobWorkerStateComponent, OnWorkerJobTagsChanged) == 784, "Offset mismatch for USproutJobWorkerStateComponent::OnWorkerJobTagsChanged");
static_assert(offsetof(USproutJobWorkerStateComponent, OnWorkerJobExperienceChanged) == 800, "Offset mismatch for USproutJobWorkerStateComponent::OnWorkerJobExperienceChanged");
static_assert(offsetof(USproutJobWorkerStateComponent, OnWorkerJobLevelChanged) == 816, "Offset mismatch for USproutJobWorkerStateComponent::OnWorkerJobLevelChanged");
static_assert(offsetof(USproutJobWorkerStateComponent, OnWorkerJobTaskChanged) == 832, "Offset mismatch for USproutJobWorkerStateComponent::OnWorkerJobTaskChanged");
static_assert(offsetof(USproutJobWorkerStateComponent, OnWorkerJobTaskCompleted) == 848, "Offset mismatch for USproutJobWorkerStateComponent::OnWorkerJobTaskCompleted");
static_assert(offsetof(USproutJobWorkerStateComponent, OnWorkerJobTaskCooldownStateChanged) == 864, "Offset mismatch for USproutJobWorkerStateComponent::OnWorkerJobTaskCooldownStateChanged");

// /Script/SproutNativeRuntime.SproutNPCPawnComponent
// Kind: Class; super: ActorComponent
class USproutNPCPawnComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t DefaultJobs[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t AdditionalJobs[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bEnableAutomaticJobsAssignment; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    std::uint8_t ExcludedJobsFromAutomaticAssignment[0x20]; // 0x0108 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAutomaticallyAssignToLeashVolumeOnSpawn; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutomaticallyAssignToHousingGameplayVolumeOnSpawn; // 0x0129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x012A
    TMap<void*, void*> GenderToTagMap; // 0x0130 (Size: 0x10, Type: MapProperty)
    std::uint8_t FollowerTraitTag[0x8]; // 0x0140 (Size: 0x8, Type: StructProperty)
    std::uint8_t DollHouseData[0xC0]; // 0x0148 (Size: 0xC0, Type: StructProperty)
    void* SpeechProvider; // 0x0208 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutNPCPawnComponent, DefaultJobs) == 192, "Offset mismatch for USproutNPCPawnComponent::DefaultJobs");
static_assert(offsetof(USproutNPCPawnComponent, AdditionalJobs) == 224, "Offset mismatch for USproutNPCPawnComponent::AdditionalJobs");
static_assert(offsetof(USproutNPCPawnComponent, bEnableAutomaticJobsAssignment) == 256, "Offset mismatch for USproutNPCPawnComponent::bEnableAutomaticJobsAssignment");
static_assert(offsetof(USproutNPCPawnComponent, ExcludedJobsFromAutomaticAssignment) == 264, "Offset mismatch for USproutNPCPawnComponent::ExcludedJobsFromAutomaticAssignment");
static_assert(offsetof(USproutNPCPawnComponent, bAutomaticallyAssignToLeashVolumeOnSpawn) == 296, "Offset mismatch for USproutNPCPawnComponent::bAutomaticallyAssignToLeashVolumeOnSpawn");
static_assert(offsetof(USproutNPCPawnComponent, bAutomaticallyAssignToHousingGameplayVolumeOnSpawn) == 297, "Offset mismatch for USproutNPCPawnComponent::bAutomaticallyAssignToHousingGameplayVolumeOnSpawn");
static_assert(offsetof(USproutNPCPawnComponent, GenderToTagMap) == 304, "Offset mismatch for USproutNPCPawnComponent::GenderToTagMap");
static_assert(offsetof(USproutNPCPawnComponent, FollowerTraitTag) == 320, "Offset mismatch for USproutNPCPawnComponent::FollowerTraitTag");
static_assert(offsetof(USproutNPCPawnComponent, DollHouseData) == 328, "Offset mismatch for USproutNPCPawnComponent::DollHouseData");
static_assert(offsetof(USproutNPCPawnComponent, SpeechProvider) == 520, "Offset mismatch for USproutNPCPawnComponent::SpeechProvider");

// /Script/SproutNativeRuntime.SproutNeighborhoodHousingPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutNeighborhoodHousingPersistenceFeatureModule
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

static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutNeighborhoodHousingPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutNeighborhoodHousingPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutNeighborhoodManagerPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutNeighborhoodManagerPersistenceFeatureModule
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

static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutNeighborhoodManagerPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutNeighborhoodManagerPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutNeighborhoodPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class USproutNeighborhoodPersistenceComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t ActiveSaveID[0x1]; // 0x0118 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutNeighborhoodPersistenceComponent, ActiveSaveID) == 280, "Offset mismatch for USproutNeighborhoodPersistenceComponent::ActiveSaveID");

// /Script/SproutNativeRuntime.SproutNeighborhoodPlayerSpawningComponent
// Kind: Class; super: SproutPlayerSpawningComponent
class USproutNeighborhoodPlayerSpawningComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> PriorityHouseSpawnPointQueue; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E0
    TArray<void*> FullHouseSpawnPointQueue; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutNeighborhoodPlayerSpawningComponent, PriorityHouseSpawnPointQueue) == 208, "Offset mismatch for USproutNeighborhoodPlayerSpawningComponent::PriorityHouseSpawnPointQueue");
static_assert(offsetof(USproutNeighborhoodPlayerSpawningComponent, FullHouseSpawnPointQueue) == 232, "Offset mismatch for USproutNeighborhoodPlayerSpawningComponent::FullHouseSpawnPointQueue");

// /Script/SproutNativeRuntime.SproutNeighborhoodThemePersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutNeighborhoodThemePersistenceFeatureModule
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

static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::Containers");
static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutNeighborhoodThemePersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutNeighborhoodThemePersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutObjectiveProcessor_FailedRequest
// Kind: Class; super: FortObjectiveProcessor
class USproutObjectiveProcessor_FailedRequest
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutObjectiveProcessor_FailedRequest, OwningProcessorSubsystem) == 56, "Offset mismatch for USproutObjectiveProcessor_FailedRequest::OwningProcessorSubsystem");

// /Script/SproutNativeRuntime.SproutObjectiveProcessor_FulfilledOtherRequest
// Kind: Class; super: FortObjectiveProcessor
class USproutObjectiveProcessor_FulfilledOtherRequest
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutObjectiveProcessor_FulfilledOtherRequest, OwningProcessorSubsystem) == 56, "Offset mismatch for USproutObjectiveProcessor_FulfilledOtherRequest::OwningProcessorSubsystem");

// /Script/SproutNativeRuntime.SproutObjectiveProcessor_ItemGiven
// Kind: Class; super: FortObjectiveProcessor
class USproutObjectiveProcessor_ItemGiven
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutObjectiveProcessor_ItemGiven, OwningProcessorSubsystem) == 56, "Offset mismatch for USproutObjectiveProcessor_ItemGiven::OwningProcessorSubsystem");

// /Script/SproutNativeRuntime.SproutObjectiveProcessor_SelfRequestFulfilled
// Kind: Class; super: FortObjectiveProcessor
class USproutObjectiveProcessor_SelfRequestFulfilled
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutObjectiveProcessor_SelfRequestFulfilled, OwningProcessorSubsystem) == 56, "Offset mismatch for USproutObjectiveProcessor_SelfRequestFulfilled::OwningProcessorSubsystem");

// /Script/SproutNativeRuntime.SproutObjectiveProcessor_SetRequest
// Kind: Class; super: FortObjectiveProcessor
class USproutObjectiveProcessor_SetRequest
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutObjectiveProcessor_SetRequest, OwningProcessorSubsystem) == 56, "Offset mismatch for USproutObjectiveProcessor_SetRequest::OwningProcessorSubsystem");

// /Script/SproutNativeRuntime.SproutOratorComponent
// Kind: Class; super: FNRedwoodOratorComponent
class USproutOratorComponent
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    void* DialogueEventType; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USproutOratorComponent, DialogueEventType) == 696, "Offset mismatch for USproutOratorComponent::DialogueEventType");

// /Script/SproutNativeRuntime.SproutPawnComponent_AMSCopier
// Kind: Class; super: GameFrameworkComponent
class USproutPawnComponent_AMSCopier
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t CopyBehavior; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USproutPawnComponent_AMSCopier, CopyBehavior) == 192, "Offset mismatch for USproutPawnComponent_AMSCopier::CopyBehavior");

// /Script/SproutNativeRuntime.SproutPlayerCollectionsPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerCollectionsPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerCollectionsPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerCollectionsPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerComponent_Requests
// Kind: Class; super: SproutActorComponent_Requests
class USproutPlayerComponent_Requests
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UsedCategoryTag[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PerceptionConfiguration[0xC0]; // 0x00D0 (Size: 0xC0, Type: StructProperty)
    std::uint8_t MaxDistanceFromAuthor[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    TArray<void*> RewardsMultiplier; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RunningRequest[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    TArray<void*> LocalRequests; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnSetRunningRequestDelegate; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFulfilledRequestDelegate; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutPlayerComponent_Requests, UsedCategoryTag) == 192, "Offset mismatch for USproutPlayerComponent_Requests::UsedCategoryTag");
static_assert(offsetof(USproutPlayerComponent_Requests, PerceptionConfiguration) == 208, "Offset mismatch for USproutPlayerComponent_Requests::PerceptionConfiguration");
static_assert(offsetof(USproutPlayerComponent_Requests, MaxDistanceFromAuthor) == 400, "Offset mismatch for USproutPlayerComponent_Requests::MaxDistanceFromAuthor");
static_assert(offsetof(USproutPlayerComponent_Requests, RewardsMultiplier) == 440, "Offset mismatch for USproutPlayerComponent_Requests::RewardsMultiplier");
static_assert(offsetof(USproutPlayerComponent_Requests, RunningRequest) == 456, "Offset mismatch for USproutPlayerComponent_Requests::RunningRequest");
static_assert(offsetof(USproutPlayerComponent_Requests, LocalRequests) == 480, "Offset mismatch for USproutPlayerComponent_Requests::LocalRequests");
static_assert(offsetof(USproutPlayerComponent_Requests, OnSetRunningRequestDelegate) == 496, "Offset mismatch for USproutPlayerComponent_Requests::OnSetRunningRequestDelegate");
static_assert(offsetof(USproutPlayerComponent_Requests, OnFulfilledRequestDelegate) == 512, "Offset mismatch for USproutPlayerComponent_Requests::OnFulfilledRequestDelegate");

// /Script/SproutNativeRuntime.SproutPlayerControllerComponent_DollHouse
// Kind: Class; super: FortControllerComponent
class USproutPlayerControllerComponent_DollHouse
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

static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, PrimaryComponentTick) == 56, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::PrimaryComponentTick");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, ComponentTags) == 104, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::ComponentTags");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, AssetUserData) == 120, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::AssetUserData");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, UCSSerializationIndex) == 144, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::UCSSerializationIndex");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, bNetAddressable) == 152, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::bNetAddressable");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, bAutoActivate) == 154, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::bAutoActivate");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, bIsEditorOnly) == 155, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::bIsEditorOnly");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, CreationMethod) == 185, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::CreationMethod");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, OnComponentActivated) == 186, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::OnComponentActivated");
static_assert(offsetof(USproutPlayerControllerComponent_DollHouse, OnComponentDeactivated) == 187, "Offset mismatch for USproutPlayerControllerComponent_DollHouse::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutPlayerDollHousePersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerDollHousePersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerDollHousePersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerDollHousePersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerEventsPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerEventsPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerEventsPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerEventsPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerHousingPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerHousingPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerHousingPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerHousingPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerInventoryComponent
// Kind: Class; super: JunoPlayerInventoryComponent
class USproutPlayerInventoryComponent
{
public:
    std::uint8_t Pad_0000[0x390]; // 0x0000
    std::uint8_t FirstTimeInventoryRegistryType[0x1]; // 0x0390 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPlayerInventoryComponent, FirstTimeInventoryRegistryType) == 912, "Offset mismatch for USproutPlayerInventoryComponent::FirstTimeInventoryRegistryType");

// /Script/SproutNativeRuntime.SproutPlayerInventoryOverflowPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerInventoryOverflowPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerInventoryOverflowPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerInventoryOverflowPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerInventoryPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerInventoryPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerInventoryPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerInventoryPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerInventorySourceComponent
// Kind: Class; super: FortControllerComponent
class USproutPlayerInventorySourceComponent
{
public:
    std::uint8_t Pad_0000[0x138]; // 0x0000
    TWeakObjectPtr<void> Inventory; // 0x0138 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutPlayerInventorySourceComponent, Inventory) == 312, "Offset mismatch for USproutPlayerInventorySourceComponent::Inventory");

// /Script/SproutNativeRuntime.SproutPlayerItemTransactionComponent
// Kind: Class; super: ItemTransactionComponent
class USproutPlayerItemTransactionComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnTransactionComplete; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TransactionData[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPlayerItemTransactionComponent, OnTransactionComplete) == 192, "Offset mismatch for USproutPlayerItemTransactionComponent::OnTransactionComplete");
static_assert(offsetof(USproutPlayerItemTransactionComponent, TransactionData) == 208, "Offset mismatch for USproutPlayerItemTransactionComponent::TransactionData");

// /Script/SproutNativeRuntime.SproutPlayerJobProgressionPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerJobProgressionPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerJobProgressionPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerJobProgressionPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerNeighborhoodPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerNeighborhoodPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerNeighborhoodPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerNeighborhoodPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerPersistedUnlocksPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerPersistedUnlocksPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerPersistedUnlocksPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerPersistedUnlocksPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerRoommatesPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerRoommatesPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerRoommatesPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerRoommatesPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerSanctionedPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerSanctionedPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerSanctionedPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerSanctionedPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerSessionPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerSessionPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerSessionPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerSessionPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayerSpawningComponent
// Kind: Class; super: PlayspaceComponent_PlayerSpawning
class USproutPlayerSpawningComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    TArray<void*> PriorityHouseSpawnPointQueue; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E0
    TArray<void*> FullHouseSpawnPointQueue; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutPlayerSpawningComponent, PriorityHouseSpawnPointQueue) == 208, "Offset mismatch for USproutPlayerSpawningComponent::PriorityHouseSpawnPointQueue");
static_assert(offsetof(USproutPlayerSpawningComponent, FullHouseSpawnPointQueue) == 232, "Offset mismatch for USproutPlayerSpawningComponent::FullHouseSpawnPointQueue");

// /Script/SproutNativeRuntime.SproutPlayerStateComp_Neighborhood
// Kind: Class; super: FortPlayerStateComponent
class USproutPlayerStateComp_Neighborhood
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnHomeNeighborhoodIdChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t HomeNeighborhoodId[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPlayerStateComp_Neighborhood, OnHomeNeighborhoodIdChanged) == 192, "Offset mismatch for USproutPlayerStateComp_Neighborhood::OnHomeNeighborhoodIdChanged");
static_assert(offsetof(USproutPlayerStateComp_Neighborhood, HomeNeighborhoodId) == 208, "Offset mismatch for USproutPlayerStateComp_Neighborhood::HomeNeighborhoodId");

// /Script/SproutNativeRuntime.SproutPlayerStateComponent_Bounties
// Kind: Class; super: FortPlayerStateComponent
class USproutPlayerStateComponent_Bounties
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnDailyBountiesChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventBountiesChanged; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClaimableBountiesChanged; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> CurrentDailyBounties; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0100
    TArray<void*> CurrentEventBounties; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0130
    std::uint8_t ClaimableBounties[0x20]; // 0x0150 (Size: 0x20, Type: StructProperty)
    std::uint8_t PinnedBountyID[0x8]; // 0x0170 (Size: 0x8, Type: StructProperty)
    std::uint8_t BountyBoardConfig[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPlayerStateComponent_Bounties, OnDailyBountiesChanged) == 192, "Offset mismatch for USproutPlayerStateComponent_Bounties::OnDailyBountiesChanged");
static_assert(offsetof(USproutPlayerStateComponent_Bounties, OnEventBountiesChanged) == 208, "Offset mismatch for USproutPlayerStateComponent_Bounties::OnEventBountiesChanged");
static_assert(offsetof(USproutPlayerStateComponent_Bounties, OnClaimableBountiesChanged) == 224, "Offset mismatch for USproutPlayerStateComponent_Bounties::OnClaimableBountiesChanged");
static_assert(offsetof(USproutPlayerStateComponent_Bounties, CurrentDailyBounties) == 240, "Offset mismatch for USproutPlayerStateComponent_Bounties::CurrentDailyBounties");
static_assert(offsetof(USproutPlayerStateComponent_Bounties, CurrentEventBounties) == 288, "Offset mismatch for USproutPlayerStateComponent_Bounties::CurrentEventBounties");
static_assert(offsetof(USproutPlayerStateComponent_Bounties, ClaimableBounties) == 336, "Offset mismatch for USproutPlayerStateComponent_Bounties::ClaimableBounties");
static_assert(offsetof(USproutPlayerStateComponent_Bounties, PinnedBountyID) == 368, "Offset mismatch for USproutPlayerStateComponent_Bounties::PinnedBountyID");
static_assert(offsetof(USproutPlayerStateComponent_Bounties, BountyBoardConfig) == 376, "Offset mismatch for USproutPlayerStateComponent_Bounties::BountyBoardConfig");

// /Script/SproutNativeRuntime.SproutPlayerStateComponent_Notifications
// Kind: Class; super: FortPlayerStateComponent
class USproutPlayerStateComponent_Notifications
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

static_assert(offsetof(USproutPlayerStateComponent_Notifications, PrimaryComponentTick) == 56, "Offset mismatch for USproutPlayerStateComponent_Notifications::PrimaryComponentTick");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, ComponentTags) == 104, "Offset mismatch for USproutPlayerStateComponent_Notifications::ComponentTags");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, AssetUserData) == 120, "Offset mismatch for USproutPlayerStateComponent_Notifications::AssetUserData");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, UCSSerializationIndex) == 144, "Offset mismatch for USproutPlayerStateComponent_Notifications::UCSSerializationIndex");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, bNetAddressable) == 152, "Offset mismatch for USproutPlayerStateComponent_Notifications::bNetAddressable");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, bAutoActivate) == 154, "Offset mismatch for USproutPlayerStateComponent_Notifications::bAutoActivate");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, bIsEditorOnly) == 155, "Offset mismatch for USproutPlayerStateComponent_Notifications::bIsEditorOnly");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, CreationMethod) == 185, "Offset mismatch for USproutPlayerStateComponent_Notifications::CreationMethod");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, OnComponentActivated) == 186, "Offset mismatch for USproutPlayerStateComponent_Notifications::OnComponentActivated");
static_assert(offsetof(USproutPlayerStateComponent_Notifications, OnComponentDeactivated) == 187, "Offset mismatch for USproutPlayerStateComponent_Notifications::OnComponentDeactivated");

// /Script/SproutNativeRuntime.SproutPlayerUGCUsersPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class USproutPlayerUGCUsersPersistenceFeatureModule
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

static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, Containers) == 72, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::Containers");
static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::ServiceData");
static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::PersistentName");
static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(USproutPlayerUGCUsersPersistenceFeatureModule, Description) == 136, "Offset mismatch for USproutPlayerUGCUsersPersistenceFeatureModule::Description");

// /Script/SproutNativeRuntime.SproutPlayspaceComponent_PersistedUnlocksManager
// Kind: Class; super: FortPlayspaceComponent
class USproutPlayspaceComponent_PersistedUnlocksManager
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t PersistedUnlockItemsRegistryType[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> CachedPersistedUnlockItems; // 0x0120 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0130
    FMulticastInlineDelegate OnSproutPersistedUnlocksManagerReady; // 0x0138 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutPlayspaceComponent_PersistedUnlocksManager, PersistedUnlockItemsRegistryType) == 280, "Offset mismatch for USproutPlayspaceComponent_PersistedUnlocksManager::PersistedUnlockItemsRegistryType");
static_assert(offsetof(USproutPlayspaceComponent_PersistedUnlocksManager, CachedPersistedUnlockItems) == 288, "Offset mismatch for USproutPlayspaceComponent_PersistedUnlocksManager::CachedPersistedUnlockItems");
static_assert(offsetof(USproutPlayspaceComponent_PersistedUnlocksManager, OnSproutPersistedUnlocksManagerReady) == 312, "Offset mismatch for USproutPlayspaceComponent_PersistedUnlocksManager::OnSproutPersistedUnlocksManagerReady");

// /Script/SproutNativeRuntime.SproutPlayspaceItemTransactionComponent
// Kind: Class; super: ItemTransactionComponent
class USproutPlayspaceItemTransactionComponent
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t ShoppingAppData[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutPlayspaceItemTransactionComponent, ShoppingAppData) == 256, "Offset mismatch for USproutPlayspaceItemTransactionComponent::ShoppingAppData");

// /Script/SproutNativeRuntime.SproutRedwoodBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USproutRedwoodBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutRedwoodManagerComponent
// Kind: Class; super: FNRedwoodManagerComponent
class USproutRedwoodManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Configurations[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ManagerConfiguration[0x38]; // 0x00F0 (Size: 0x38, Type: StructProperty)
    TArray<void*> RunningRequests; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RunningDirectUtterances; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DigestedConfigurations; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DigestedManagerConfiguration[0x18]; // 0x0158 (Size: 0x18, Type: OptionalProperty)
    FMulticastInlineDelegate OnRequestedOratorDialogueDelegate; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TraitRequiredQueryForFeelingsChange[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutRedwoodManagerComponent, Configurations) == 192, "Offset mismatch for USproutRedwoodManagerComponent::Configurations");
static_assert(offsetof(USproutRedwoodManagerComponent, ManagerConfiguration) == 240, "Offset mismatch for USproutRedwoodManagerComponent::ManagerConfiguration");
static_assert(offsetof(USproutRedwoodManagerComponent, RunningRequests) == 296, "Offset mismatch for USproutRedwoodManagerComponent::RunningRequests");
static_assert(offsetof(USproutRedwoodManagerComponent, RunningDirectUtterances) == 312, "Offset mismatch for USproutRedwoodManagerComponent::RunningDirectUtterances");
static_assert(offsetof(USproutRedwoodManagerComponent, DigestedConfigurations) == 328, "Offset mismatch for USproutRedwoodManagerComponent::DigestedConfigurations");
static_assert(offsetof(USproutRedwoodManagerComponent, DigestedManagerConfiguration) == 344, "Offset mismatch for USproutRedwoodManagerComponent::DigestedManagerConfiguration");
static_assert(offsetof(USproutRedwoodManagerComponent, OnRequestedOratorDialogueDelegate) == 368, "Offset mismatch for USproutRedwoodManagerComponent::OnRequestedOratorDialogueDelegate");
static_assert(offsetof(USproutRedwoodManagerComponent, TraitRequiredQueryForFeelingsChange) == 384, "Offset mismatch for USproutRedwoodManagerComponent::TraitRequiredQueryForFeelingsChange");

// /Script/SproutNativeRuntime.SproutRequestsWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class USproutRequestsWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USproutRequestsWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for USproutRequestsWorldConditionSchema::ContextDataDescs");

// /Script/SproutNativeRuntime.SproutRoommatesPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class USproutRoommatesPersistenceComponent
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

static_assert(offsetof(USproutRoommatesPersistenceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for USproutRoommatesPersistenceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(USproutRoommatesPersistenceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for USproutRoommatesPersistenceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(USproutRoommatesPersistenceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for USproutRoommatesPersistenceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(USproutRoommatesPersistenceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for USproutRoommatesPersistenceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(USproutRoommatesPersistenceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for USproutRoommatesPersistenceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(USproutRoommatesPersistenceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for USproutRoommatesPersistenceComponent::bSubscribeToMeshNetwork");

// /Script/SproutNativeRuntime.SproutServerInstancedActorSpawnerSubsystem
// Kind: Class; super: JunoServerInstancedActorSpawnerSubsystem
class USproutServerInstancedActorSpawnerSubsystem
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* TransientActorBeingSpawned; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TransientActorSpawningInstance[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutServerInstancedActorSpawnerSubsystem, TransientActorBeingSpawned) == 200, "Offset mismatch for USproutServerInstancedActorSpawnerSubsystem::TransientActorBeingSpawned");
static_assert(offsetof(USproutServerInstancedActorSpawnerSubsystem, TransientActorSpawningInstance) == 208, "Offset mismatch for USproutServerInstancedActorSpawnerSubsystem::TransientActorSpawningInstance");

// /Script/SproutNativeRuntime.SproutSmartObjectComponent_Requests
// Kind: Class; super: SproutActorComponent_AutomaticRequests
class USproutSmartObjectComponent_Requests
{
public:
    std::uint8_t Pad_0000[0x210]; // 0x0000
    std::uint8_t MinCooldownOnFulfil[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCooldownOnFulfil[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinTimeToFail[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxTimeToFail[0x28]; // 0x0288 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinCooldownOnFail[0x28]; // 0x02B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxCooldownOnFail[0x28]; // 0x02D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t WeightMultiplierOnLastPickedRequest[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    TArray<void*> ConditionalRerollPercentages; // 0x0328 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MinRerollCooldown[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxRerollCooldown[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t bCanRollOutsideJobVolume; // 0x0388 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0389
    FMulticastInlineDelegate OnFailedRequestDelegate; // 0x0390 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t LastAutomaticallyPickedRequest[0x1]; // 0x03A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USproutSmartObjectComponent_Requests, MinCooldownOnFulfil) == 528, "Offset mismatch for USproutSmartObjectComponent_Requests::MinCooldownOnFulfil");
static_assert(offsetof(USproutSmartObjectComponent_Requests, MaxCooldownOnFulfil) == 568, "Offset mismatch for USproutSmartObjectComponent_Requests::MaxCooldownOnFulfil");
static_assert(offsetof(USproutSmartObjectComponent_Requests, MinTimeToFail) == 608, "Offset mismatch for USproutSmartObjectComponent_Requests::MinTimeToFail");
static_assert(offsetof(USproutSmartObjectComponent_Requests, MaxTimeToFail) == 648, "Offset mismatch for USproutSmartObjectComponent_Requests::MaxTimeToFail");
static_assert(offsetof(USproutSmartObjectComponent_Requests, MinCooldownOnFail) == 688, "Offset mismatch for USproutSmartObjectComponent_Requests::MinCooldownOnFail");
static_assert(offsetof(USproutSmartObjectComponent_Requests, MaxCooldownOnFail) == 728, "Offset mismatch for USproutSmartObjectComponent_Requests::MaxCooldownOnFail");
static_assert(offsetof(USproutSmartObjectComponent_Requests, WeightMultiplierOnLastPickedRequest) == 768, "Offset mismatch for USproutSmartObjectComponent_Requests::WeightMultiplierOnLastPickedRequest");
static_assert(offsetof(USproutSmartObjectComponent_Requests, ConditionalRerollPercentages) == 808, "Offset mismatch for USproutSmartObjectComponent_Requests::ConditionalRerollPercentages");
static_assert(offsetof(USproutSmartObjectComponent_Requests, MinRerollCooldown) == 824, "Offset mismatch for USproutSmartObjectComponent_Requests::MinRerollCooldown");
static_assert(offsetof(USproutSmartObjectComponent_Requests, MaxRerollCooldown) == 864, "Offset mismatch for USproutSmartObjectComponent_Requests::MaxRerollCooldown");
static_assert(offsetof(USproutSmartObjectComponent_Requests, bCanRollOutsideJobVolume) == 904, "Offset mismatch for USproutSmartObjectComponent_Requests::bCanRollOutsideJobVolume");
static_assert(offsetof(USproutSmartObjectComponent_Requests, OnFailedRequestDelegate) == 912, "Offset mismatch for USproutSmartObjectComponent_Requests::OnFailedRequestDelegate");
static_assert(offsetof(USproutSmartObjectComponent_Requests, LastAutomaticallyPickedRequest) == 928, "Offset mismatch for USproutSmartObjectComponent_Requests::LastAutomaticallyPickedRequest");

// /Script/SproutNativeRuntime.SproutWorldPartitionActorDescMutatorConfig
// Kind: Class; super: FortWorldPartitionActorDescMutatorConfig
class USproutWorldPartitionActorDescMutatorConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SproutNativeRuntime.SproutWorldPartitionActorDescMutatorRuleVolume
// Kind: Class; super: FortWorldPartitionActorDescMutatorRule
class USproutWorldPartitionActorDescMutatorRuleVolume
{
public:
    std::uint8_t Opaque[1];
};
