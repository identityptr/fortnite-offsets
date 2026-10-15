/**
 * decamp dumper generated SDK
 * Package: /Script/SproutOnlinePollRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SproutOnlinePollRuntime.OnlinePollMetaData
// Kind: ScriptStruct; super: MeshMetaDataStruct
struct FOnlinePollMetaData
{
public:
    TArray<void*> Tallies; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOnlinePollMetaData, Tallies) == 0, "Offset mismatch for FOnlinePollMetaData::Tallies");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollDefinitionTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSproutOnlinePollDefinitionTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PollId[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bPollEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    TArray<void*> VoteTypes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VoteTemplates; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutOnlinePollDefinitionTableRow, PollId) == 8, "Offset mismatch for FSproutOnlinePollDefinitionTableRow::PollId");
static_assert(offsetof(FSproutOnlinePollDefinitionTableRow, bPollEnabled) == 12, "Offset mismatch for FSproutOnlinePollDefinitionTableRow::bPollEnabled");
static_assert(offsetof(FSproutOnlinePollDefinitionTableRow, VoteTypes) == 16, "Offset mismatch for FSproutOnlinePollDefinitionTableRow::VoteTypes");
static_assert(offsetof(FSproutOnlinePollDefinitionTableRow, VoteTemplates) == 32, "Offset mismatch for FSproutOnlinePollDefinitionTableRow::VoteTemplates");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollRootTally
// Kind: ScriptStruct; super: none
struct FSproutOnlinePollRootTally
{
public:
    std::int32_t EncodedOnlinePollId; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> Votes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutOnlinePollRootTally, EncodedOnlinePollId) == 0, "Offset mismatch for FSproutOnlinePollRootTally::EncodedOnlinePollId");
static_assert(offsetof(FSproutOnlinePollRootTally, Votes) == 8, "Offset mismatch for FSproutOnlinePollRootTally::Votes");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollRootTallyEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutOnlinePollRootTallyEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Tally[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutOnlinePollRootTallyEntry, Tally) == 16, "Offset mismatch for FSproutOnlinePollRootTallyEntry::Tally");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollRootTallyFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutOnlinePollRootTallyFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* UplinkComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutOnlinePollRootTallyFastArray, Entries) == 72, "Offset mismatch for FSproutOnlinePollRootTallyFastArray::Entries");
static_assert(offsetof(FSproutOnlinePollRootTallyFastArray, UplinkComponent) == 88, "Offset mismatch for FSproutOnlinePollRootTallyFastArray::UplinkComponent");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollRootTallyVote
// Kind: ScriptStruct; super: none
struct FSproutOnlinePollRootTallyVote
{
public:
    std::int32_t EncodedVoteName; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::int64_t VoteTotal; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FSproutOnlinePollRootTallyVote, EncodedVoteName) == 0, "Offset mismatch for FSproutOnlinePollRootTallyVote::EncodedVoteName");
static_assert(offsetof(FSproutOnlinePollRootTallyVote, VoteTotal) == 8, "Offset mismatch for FSproutOnlinePollRootTallyVote::VoteTotal");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollTally
// Kind: ScriptStruct; super: none
struct FSproutOnlinePollTally
{
public:
    std::uint8_t OnlinePollId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Votes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutOnlinePollTally, OnlinePollId) == 0, "Offset mismatch for FSproutOnlinePollTally::OnlinePollId");
static_assert(offsetof(FSproutOnlinePollTally, Votes) == 8, "Offset mismatch for FSproutOnlinePollTally::Votes");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollTallyEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSproutOnlinePollTallyEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Tally[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutOnlinePollTallyEntry, Tally) == 16, "Offset mismatch for FSproutOnlinePollTallyEntry::Tally");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollTallyFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSproutOnlinePollTallyFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* OnlinePollManager; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSproutOnlinePollTallyFastArray, Entries) == 72, "Offset mismatch for FSproutOnlinePollTallyFastArray::Entries");
static_assert(offsetof(FSproutOnlinePollTallyFastArray, OnlinePollManager) == 88, "Offset mismatch for FSproutOnlinePollTallyFastArray::OnlinePollManager");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollTallyVote
// Kind: ScriptStruct; super: none
struct FSproutOnlinePollTallyVote
{
public:
    std::uint8_t VoteName[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int64_t VoteTotal; // 0x0008 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FSproutOnlinePollTallyVote, VoteName) == 0, "Offset mismatch for FSproutOnlinePollTallyVote::VoteName");
static_assert(offsetof(FSproutOnlinePollTallyVote, VoteTotal) == 8, "Offset mismatch for FSproutOnlinePollTallyVote::VoteTotal");

// /Script/SproutOnlinePollRuntime.SproutWorldConditionOnlinePoll
// Kind: ScriptStruct; super: WorldConditionCommonBase
struct FSproutWorldConditionOnlinePoll
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t OnlinePollId[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoteId[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    std::uint8_t PollSourceNumber; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ComparisonType; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x001A
    std::int64_t ComparisionValue; // 0x0020 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FSproutWorldConditionOnlinePoll, OnlinePollId) == 16, "Offset mismatch for FSproutWorldConditionOnlinePoll::OnlinePollId");
static_assert(offsetof(FSproutWorldConditionOnlinePoll, VoteId) == 20, "Offset mismatch for FSproutWorldConditionOnlinePoll::VoteId");
static_assert(offsetof(FSproutWorldConditionOnlinePoll, PollSourceNumber) == 24, "Offset mismatch for FSproutWorldConditionOnlinePoll::PollSourceNumber");
static_assert(offsetof(FSproutWorldConditionOnlinePoll, ComparisonType) == 25, "Offset mismatch for FSproutWorldConditionOnlinePoll::ComparisonType");
static_assert(offsetof(FSproutWorldConditionOnlinePoll, ComparisionValue) == 32, "Offset mismatch for FSproutWorldConditionOnlinePoll::ComparisionValue");

// /Script/SproutOnlinePollRuntime.VoteTemplate
// Kind: ScriptStruct; super: none
struct FVoteTemplate
{
public:
    std::uint8_t TemplateId[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoteName[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::int64_t NumVotes; // 0x0008 (Size: 0x8, Type: Int64Property)
    std::uint8_t PriceTag[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t CustomVerb[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    TSoftObjectPtr<void> SuccessfulInteractionSound; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVoteTemplate, TemplateId) == 0, "Offset mismatch for FVoteTemplate::TemplateId");
static_assert(offsetof(FVoteTemplate, VoteName) == 4, "Offset mismatch for FVoteTemplate::VoteName");
static_assert(offsetof(FVoteTemplate, NumVotes) == 8, "Offset mismatch for FVoteTemplate::NumVotes");
static_assert(offsetof(FVoteTemplate, PriceTag) == 16, "Offset mismatch for FVoteTemplate::PriceTag");
static_assert(offsetof(FVoteTemplate, CustomVerb) == 20, "Offset mismatch for FVoteTemplate::CustomVerb");
static_assert(offsetof(FVoteTemplate, SuccessfulInteractionSound) == 24, "Offset mismatch for FVoteTemplate::SuccessfulInteractionSound");

// /Script/SproutOnlinePollRuntime.AsyncAction_ListenToOnlinePoll
// Kind: Class; super: BlueprintAsyncActionBase
class UAsyncAction_ListenToOnlinePoll
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnlinePollUpdated; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t TargetPollId[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAsyncAction_ListenToOnlinePoll, OnlinePollUpdated) == 48, "Offset mismatch for UAsyncAction_ListenToOnlinePoll::OnlinePollUpdated");
static_assert(offsetof(UAsyncAction_ListenToOnlinePoll, TargetPollId) == 64, "Offset mismatch for UAsyncAction_ListenToOnlinePoll::TargetPollId");

// /Script/SproutOnlinePollRuntime.OnlinePollMeshNetUplinkComponent
// Kind: Class; super: MeshNetworkComponent
class UOnlinePollMeshNetUplinkComponent
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    FName MetaDataKey; // 0x00F0 (Size: 0x8, Type: NameProperty)
    std::uint8_t PollTallies[0x60]; // 0x00F8 (Size: 0x60, Type: StructProperty)
    std::uint8_t OnlinePollMetaData[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UOnlinePollMeshNetUplinkComponent, MetaDataKey) == 240, "Offset mismatch for UOnlinePollMeshNetUplinkComponent::MetaDataKey");
static_assert(offsetof(UOnlinePollMeshNetUplinkComponent, PollTallies) == 248, "Offset mismatch for UOnlinePollMeshNetUplinkComponent::PollTallies");
static_assert(offsetof(UOnlinePollMeshNetUplinkComponent, OnlinePollMetaData) == 344, "Offset mismatch for UOnlinePollMeshNetUplinkComponent::OnlinePollMetaData");

// /Script/SproutOnlinePollRuntime.SproutControllerComponent_OnlinePoll
// Kind: Class; super: FortControllerComponent
class USproutControllerComponent_OnlinePoll
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnTemplateVoteCast; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USproutControllerComponent_OnlinePoll, OnTemplateVoteCast) == 208, "Offset mismatch for USproutControllerComponent_OnlinePoll::OnTemplateVoteCast");

// /Script/SproutOnlinePollRuntime.SproutGameStateComponent_OnlinePoll
// Kind: Class; super: FortGameStateComponent
class USproutGameStateComponent_OnlinePoll
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPollTallyChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOnlinePollingAvailable; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOnlineRegistryLoaded; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t OnlinePollDatabaseRegistryType[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t VoteCostData[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t DedicatedTallies[0x60]; // 0x00F8 (Size: 0x60, Type: StructProperty)
    TMap<void*, void*> OnlinePolls; // 0x0158 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> EncodedTagMap; // 0x0168 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAreOnlinePollConfigsDigested; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x17]; // 0x0179
    std::uint8_t bIsPollingAvailable; // 0x0190 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutGameStateComponent_OnlinePoll, OnPollTallyChanged) == 192, "Offset mismatch for USproutGameStateComponent_OnlinePoll::OnPollTallyChanged");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, OnOnlinePollingAvailable) == 208, "Offset mismatch for USproutGameStateComponent_OnlinePoll::OnOnlinePollingAvailable");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, OnOnlineRegistryLoaded) == 224, "Offset mismatch for USproutGameStateComponent_OnlinePoll::OnOnlineRegistryLoaded");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, OnlinePollDatabaseRegistryType) == 240, "Offset mismatch for USproutGameStateComponent_OnlinePoll::OnlinePollDatabaseRegistryType");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, VoteCostData) == 244, "Offset mismatch for USproutGameStateComponent_OnlinePoll::VoteCostData");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, DedicatedTallies) == 248, "Offset mismatch for USproutGameStateComponent_OnlinePoll::DedicatedTallies");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, OnlinePolls) == 344, "Offset mismatch for USproutGameStateComponent_OnlinePoll::OnlinePolls");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, EncodedTagMap) == 360, "Offset mismatch for USproutGameStateComponent_OnlinePoll::EncodedTagMap");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, bAreOnlinePollConfigsDigested) == 376, "Offset mismatch for USproutGameStateComponent_OnlinePoll::bAreOnlinePollConfigsDigested");
static_assert(offsetof(USproutGameStateComponent_OnlinePoll, bIsPollingAvailable) == 400, "Offset mismatch for USproutGameStateComponent_OnlinePoll::bIsPollingAvailable");

// /Script/SproutOnlinePollRuntime.SproutOnlinePollCheatManager
// Kind: Class; super: ChildCheatManager
class USproutOnlinePollCheatManager
{
public:
    std::uint8_t Opaque[1];
};
