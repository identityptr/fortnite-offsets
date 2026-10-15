/**
 * decamp dumper generated SDK
 * Package: /Script/JunoModularMatchStats
 */
#pragma once
#include "Basic.h"

// /Script/JunoModularMatchStats.JunoCanResearchModularStatResult
// Kind: ScriptStruct; super: JunoCanResearchReasonChunk
struct FJunoCanResearchModularStatResult
{
public:
    std::uint8_t bIsRequirementMet; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoCanResearchModularStatResult, bIsRequirementMet) == 0, "Offset mismatch for FJunoCanResearchModularStatResult::bIsRequirementMet");

// /Script/JunoModularMatchStats.JunoEventReaction_UpdateModularMatchStat
// Kind: ScriptStruct; super: EventReactionBase
struct FJunoEventReaction_UpdateModularMatchStat
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MatchStatTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoEventReaction_UpdateModularMatchStat, MatchStatTag) == 8, "Offset mismatch for FJunoEventReaction_UpdateModularMatchStat::MatchStatTag");

// /Script/JunoModularMatchStats.JunoModularMatchStatFastArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FJunoModularMatchStatFastArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoModularMatchStatFastArray, Entries) == 72, "Offset mismatch for FJunoModularMatchStatFastArray::Entries");

// /Script/JunoModularMatchStats.JunoModularMatchStatFastEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FJunoModularMatchStatFastEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t StatInfo[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoModularMatchStatFastEntry, StatInfo) == 16, "Offset mismatch for FJunoModularMatchStatFastEntry::StatInfo");

// /Script/JunoModularMatchStats.JunoModularMatchStatInfo
// Kind: ScriptStruct; super: none
struct FJunoModularMatchStatInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t MatchStatTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoModularMatchStatInfo, MatchStatTag) == 8, "Offset mismatch for FJunoModularMatchStatInfo::MatchStatTag");

// /Script/JunoModularMatchStats.JunoModularMatchStatUpdateInfo
// Kind: ScriptStruct; super: none
struct FJunoModularMatchStatUpdateInfo
{
public:
    std::uint8_t StatIdentifier[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t StatAmount; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoModularMatchStatUpdateInfo, StatIdentifier) == 0, "Offset mismatch for FJunoModularMatchStatUpdateInfo::StatIdentifier");
static_assert(offsetof(FJunoModularMatchStatUpdateInfo, StatAmount) == 16, "Offset mismatch for FJunoModularMatchStatUpdateInfo::StatAmount");

// /Script/JunoModularMatchStats.JunoModularMatchStatUpdatedMessage
// Kind: ScriptStruct; super: none
struct FJunoModularMatchStatUpdatedMessage
{
public:
    TArray<void*> UpdatedStats; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoModularMatchStatUpdatedMessage, UpdatedStats) == 0, "Offset mismatch for FJunoModularMatchStatUpdatedMessage::UpdatedStats");

// /Script/JunoModularMatchStats.JunoResearchModularStatRequirement
// Kind: ScriptStruct; super: JunoResearchRequirement
struct FJunoResearchModularStatRequirement
{
public:
    TArray<void*> RequiredMatchStats; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t RequiredStatAmount; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoResearchModularStatRequirement, RequiredMatchStats) == 0, "Offset mismatch for FJunoResearchModularStatRequirement::RequiredMatchStats");
static_assert(offsetof(FJunoResearchModularStatRequirement, RequiredStatAmount) == 16, "Offset mismatch for FJunoResearchModularStatRequirement::RequiredStatAmount");

// /Script/JunoModularMatchStats.JunoCheatManager_ModularMatchStats
// Kind: Class; super: ChildCheatManager
class UJunoCheatManager_ModularMatchStats
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoModularMatchStats.JunoGameFrameworkComponent_ModularMatchStats
// Kind: Class; super: GameFrameworkComponent
class UJunoGameFrameworkComponent_ModularMatchStats
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMatchStatsUpdated; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ReplicatedMatchStats[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameFrameworkComponent_ModularMatchStats, OnMatchStatsUpdated) == 192, "Offset mismatch for UJunoGameFrameworkComponent_ModularMatchStats::OnMatchStatsUpdated");
static_assert(offsetof(UJunoGameFrameworkComponent_ModularMatchStats, ReplicatedMatchStats) == 208, "Offset mismatch for UJunoGameFrameworkComponent_ModularMatchStats::ReplicatedMatchStats");

// /Script/JunoModularMatchStats.JunoGameStateComponent_ModularMatchStatResearch
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_ModularMatchStatResearch
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

static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_ModularMatchStatResearch, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_ModularMatchStatResearch::OnComponentDeactivated");
