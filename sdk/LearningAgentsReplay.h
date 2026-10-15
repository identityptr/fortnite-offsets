/**
 * decamp dumper generated SDK
 * Package: /Script/LearningAgentsReplay
 */
#pragma once
#include "Basic.h"

// /Script/LearningAgentsReplay.AsyncAction_LearningAgentsQueryReplays
// Kind: Class; super: BlueprintAsyncActionBase
class UAsyncAction_LearningAgentsQueryReplays
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate QueryComplete; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ResultList; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAsyncAction_LearningAgentsQueryReplays, QueryComplete) == 48, "Offset mismatch for UAsyncAction_LearningAgentsQueryReplays::QueryComplete");
static_assert(offsetof(UAsyncAction_LearningAgentsQueryReplays, ResultList) == 64, "Offset mismatch for UAsyncAction_LearningAgentsQueryReplays::ResultList");

// /Script/LearningAgentsReplay.LearningAgentsReplayList
// Kind: Class; super: Object
class ULearningAgentsReplayList
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Results; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULearningAgentsReplayList, Results) == 40, "Offset mismatch for ULearningAgentsReplayList::Results");

// /Script/LearningAgentsReplay.LearningAgentsReplayListEntry
// Kind: Class; super: Object
class ULearningAgentsReplayListEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgentsReplay.LearningAgentsReplaySubsystem
// Kind: Class; super: GameInstanceSubsystem
class ULearningAgentsReplaySubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* LocalPlayerDeletingReplays; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningAgentsReplaySubsystem, LocalPlayerDeletingReplays) == 64, "Offset mismatch for ULearningAgentsReplaySubsystem::LocalPlayerDeletingReplays");
