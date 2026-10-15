/**
 * decamp dumper generated SDK
 * Package: /Script/SpecialEventGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpecialEventGameplayRuntime.BuffetBubblesDebugData
// Kind: ScriptStruct; super: none
struct FBuffetBubblesDebugData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
// Kind: ScriptStruct; super: none
struct FBuffetBubblesReplicatedData
{
public:
    std::uint8_t RelativeTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t RelativeVelocity[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBuffetBubblesReplicatedData, RelativeTransform) == 0, "Offset mismatch for FBuffetBubblesReplicatedData::RelativeTransform");
static_assert(offsetof(FBuffetBubblesReplicatedData, RelativeVelocity) == 96, "Offset mismatch for FBuffetBubblesReplicatedData::RelativeVelocity");

// /Script/SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
// Kind: ScriptStruct; super: none
struct FBuffetFlyingRicochetReplicatedData
{
public:
    float StartTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Velocity[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBuffetFlyingRicochetReplicatedData, StartTime) == 0, "Offset mismatch for FBuffetFlyingRicochetReplicatedData::StartTime");
static_assert(offsetof(FBuffetFlyingRicochetReplicatedData, Velocity) == 8, "Offset mismatch for FBuffetFlyingRicochetReplicatedData::Velocity");

// /Script/SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
// Kind: ScriptStruct; super: none
struct FCustomTickComonentQualitySettings
{
public:
    std::int32_t NumFramesToSkipBetweenEvaluations; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MinFramesToSkipBetweenCustomTicks; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxFramesToSkipBetweenCustomTicks; // 0x0008 (Size: 0x4, Type: IntProperty)
    float InnerDistance; // 0x000C (Size: 0x4, Type: FloatProperty)
    float OuterDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCustomTickComonentQualitySettings, NumFramesToSkipBetweenEvaluations) == 0, "Offset mismatch for FCustomTickComonentQualitySettings::NumFramesToSkipBetweenEvaluations");
static_assert(offsetof(FCustomTickComonentQualitySettings, MinFramesToSkipBetweenCustomTicks) == 4, "Offset mismatch for FCustomTickComonentQualitySettings::MinFramesToSkipBetweenCustomTicks");
static_assert(offsetof(FCustomTickComonentQualitySettings, MaxFramesToSkipBetweenCustomTicks) == 8, "Offset mismatch for FCustomTickComonentQualitySettings::MaxFramesToSkipBetweenCustomTicks");
static_assert(offsetof(FCustomTickComonentQualitySettings, InnerDistance) == 12, "Offset mismatch for FCustomTickComonentQualitySettings::InnerDistance");
static_assert(offsetof(FCustomTickComonentQualitySettings, OuterDistance) == 16, "Offset mismatch for FCustomTickComonentQualitySettings::OuterDistance");

// /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
// Kind: ScriptStruct; super: none
struct FDestroyActorsAndComponentsMutator_ActorDefinition
{
public:
    std::uint8_t Tags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t SoftActorClass[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bStartEnabled; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDestroyActorOnServer; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDestroyActorOnClient; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNetForceOnActorDestroy; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldModifyLevelOnActorDestroy; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0045
    TArray<void*> ComponentDefinitions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCurrentlyEnabled; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPermanentlyDisabled; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x005A
    TArray<void*> ActorsToProcess; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, Tags) == 0, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::Tags");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, SoftActorClass) == 32, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::SoftActorClass");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bStartEnabled) == 64, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::bStartEnabled");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bDestroyActorOnServer) == 65, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::bDestroyActorOnServer");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bDestroyActorOnClient) == 66, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::bDestroyActorOnClient");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bNetForceOnActorDestroy) == 67, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::bNetForceOnActorDestroy");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bShouldModifyLevelOnActorDestroy) == 68, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::bShouldModifyLevelOnActorDestroy");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, ComponentDefinitions) == 72, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::ComponentDefinitions");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bCurrentlyEnabled) == 88, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::bCurrentlyEnabled");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, bPermanentlyDisabled) == 89, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::bPermanentlyDisabled");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ActorDefinition, ActorsToProcess) == 96, "Offset mismatch for FDestroyActorsAndComponentsMutator_ActorDefinition::ActorsToProcess");

// /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
// Kind: ScriptStruct; super: none
struct FDestroyActorsAndComponentsMutator_ComponentDefinition
{
public:
    FString ComponentName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t NameComparisonType; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDestroyOnServer; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDestroyOnClient; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPromoteChildrenOfDestroyedComponents; // 0x0013 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, ComponentName) == 0, "Offset mismatch for FDestroyActorsAndComponentsMutator_ComponentDefinition::ComponentName");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, NameComparisonType) == 16, "Offset mismatch for FDestroyActorsAndComponentsMutator_ComponentDefinition::NameComparisonType");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, bDestroyOnServer) == 17, "Offset mismatch for FDestroyActorsAndComponentsMutator_ComponentDefinition::bDestroyOnServer");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, bDestroyOnClient) == 18, "Offset mismatch for FDestroyActorsAndComponentsMutator_ComponentDefinition::bDestroyOnClient");
static_assert(offsetof(FDestroyActorsAndComponentsMutator_ComponentDefinition, bPromoteChildrenOfDestroyedComponents) == 19, "Offset mismatch for FDestroyActorsAndComponentsMutator_ComponentDefinition::bPromoteChildrenOfDestroyedComponents");

// /Script/SpecialEventGameplayRuntime.ExampleMetadataStruct
// Kind: ScriptStruct; super: none
struct FExampleMetadataStruct
{
public:
    float ExampleFloat; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString ExampleString; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FExampleMetadataStruct, ExampleFloat) == 0, "Offset mismatch for FExampleMetadataStruct::ExampleFloat");
static_assert(offsetof(FExampleMetadataStruct, ExampleString) == 8, "Offset mismatch for FExampleMetadataStruct::ExampleString");

// /Script/SpecialEventGameplayRuntime.FakeKillRelevancyBucket
// Kind: ScriptStruct; super: none
struct FFakeKillRelevancyBucket
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
// Kind: ScriptStruct; super: none
struct FFakeKillRelevancyPhaseData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Reason[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::int32_t NumWavesExpected; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t WaveNum; // 0x0018 (Size: 0x4, Type: IntProperty)
    float RelevancyDelay; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFakeKillRelevancyPhaseData, Reason) == 16, "Offset mismatch for FFakeKillRelevancyPhaseData::Reason");
static_assert(offsetof(FFakeKillRelevancyPhaseData, NumWavesExpected) == 20, "Offset mismatch for FFakeKillRelevancyPhaseData::NumWavesExpected");
static_assert(offsetof(FFakeKillRelevancyPhaseData, WaveNum) == 24, "Offset mismatch for FFakeKillRelevancyPhaseData::WaveNum");
static_assert(offsetof(FFakeKillRelevancyPhaseData, RelevancyDelay) == 28, "Offset mismatch for FFakeKillRelevancyPhaseData::RelevancyDelay");

// /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFakeKillRelevancyPlayerDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ControllerComponent; // 0x0058 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFakeKillRelevancyPlayerDataArray, Entries) == 72, "Offset mismatch for FFakeKillRelevancyPlayerDataArray::Entries");
static_assert(offsetof(FFakeKillRelevancyPlayerDataArray, ControllerComponent) == 88, "Offset mismatch for FFakeKillRelevancyPlayerDataArray::ControllerComponent");

// /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFakeKillRelevancyPlayerDataEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Victims; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Reason[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::int32_t PhaseNum; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t WaveNum; // 0x0028 (Size: 0x4, Type: IntProperty)
    float RelevancyDelay; // 0x002C (Size: 0x4, Type: FloatProperty)
    float RelevancyChangeServerWorldTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, Victims) == 16, "Offset mismatch for FFakeKillRelevancyPlayerDataEntry::Victims");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, Reason) == 32, "Offset mismatch for FFakeKillRelevancyPlayerDataEntry::Reason");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, PhaseNum) == 36, "Offset mismatch for FFakeKillRelevancyPlayerDataEntry::PhaseNum");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, WaveNum) == 40, "Offset mismatch for FFakeKillRelevancyPlayerDataEntry::WaveNum");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, RelevancyDelay) == 44, "Offset mismatch for FFakeKillRelevancyPlayerDataEntry::RelevancyDelay");
static_assert(offsetof(FFakeKillRelevancyPlayerDataEntry, RelevancyChangeServerWorldTime) == 48, "Offset mismatch for FFakeKillRelevancyPlayerDataEntry::RelevancyChangeServerWorldTime");

// /Script/SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
// Kind: ScriptStruct; super: none
struct FFakeKillRelevancySupergroup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
// Kind: ScriptStruct; super: none
struct FFakeKillRelevancyTestParameters
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecialEventGameplayRuntime.FakeKillRelevancyVictim
// Kind: ScriptStruct; super: none
struct FFakeKillRelevancyVictim
{
public:
    void* PlayerState; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DeathLocation[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFakeKillRelevancyVictim, PlayerState) == 0, "Offset mismatch for FFakeKillRelevancyVictim::PlayerState");
static_assert(offsetof(FFakeKillRelevancyVictim, DeathLocation) == 8, "Offset mismatch for FFakeKillRelevancyVictim::DeathLocation");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_Respawn_AllowedPlayers
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortAthenaMutator_SE_Respawn_AllowedPlayers
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAthenaMutator_SE_Respawn_AllowedPlayers, Entries) == 72, "Offset mismatch for FFortAthenaMutator_SE_Respawn_AllowedPlayers::Entries");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_Respawn_PlayerEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortAthenaMutator_SE_Respawn_PlayerEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t PlayerNetId[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    TArray<void*> RequestingActors; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRespawning; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortAthenaMutator_SE_Respawn_PlayerEntry, PlayerNetId) == 16, "Offset mismatch for FFortAthenaMutator_SE_Respawn_PlayerEntry::PlayerNetId");
static_assert(offsetof(FFortAthenaMutator_SE_Respawn_PlayerEntry, RequestingActors) == 64, "Offset mismatch for FFortAthenaMutator_SE_Respawn_PlayerEntry::RequestingActors");
static_assert(offsetof(FFortAthenaMutator_SE_Respawn_PlayerEntry, bRespawning) == 80, "Offset mismatch for FFortAthenaMutator_SE_Respawn_PlayerEntry::bRespawning");

// /Script/SpecialEventGameplayRuntime.FortDelayRTMMData
// Kind: ScriptStruct; super: none
struct FFortDelayRTMMData
{
public:
    std::uint8_t bDelayRTTM; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleRTMMCalls; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float MinRTTMDelay; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxRTTMDelay; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Timestamp; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortDelayRTMMData, bDelayRTTM) == 0, "Offset mismatch for FFortDelayRTMMData::bDelayRTTM");
static_assert(offsetof(FFortDelayRTMMData, bAllowMultipleRTMMCalls) == 1, "Offset mismatch for FFortDelayRTMMData::bAllowMultipleRTMMCalls");
static_assert(offsetof(FFortDelayRTMMData, MinRTTMDelay) == 4, "Offset mismatch for FFortDelayRTMMData::MinRTTMDelay");
static_assert(offsetof(FFortDelayRTMMData, MaxRTTMDelay) == 8, "Offset mismatch for FFortDelayRTMMData::MaxRTTMDelay");
static_assert(offsetof(FFortDelayRTMMData, Timestamp) == 12, "Offset mismatch for FFortDelayRTMMData::Timestamp");

// /Script/SpecialEventGameplayRuntime.FortMeshLeaderboardPlayerData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFortMeshLeaderboardPlayerData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t UniqueNetId[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    FString PlayerName; // 0x0040 (Size: 0x10, Type: StrProperty)
    float Score; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::int32_t LeaderboardPosition; // 0x0054 (Size: 0x4, Type: IntProperty)
    float RequestCreationTime; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMeshLeaderboardPlayerData, UniqueNetId) == 16, "Offset mismatch for FFortMeshLeaderboardPlayerData::UniqueNetId");
static_assert(offsetof(FFortMeshLeaderboardPlayerData, PlayerName) == 64, "Offset mismatch for FFortMeshLeaderboardPlayerData::PlayerName");
static_assert(offsetof(FFortMeshLeaderboardPlayerData, Score) == 80, "Offset mismatch for FFortMeshLeaderboardPlayerData::Score");
static_assert(offsetof(FFortMeshLeaderboardPlayerData, LeaderboardPosition) == 84, "Offset mismatch for FFortMeshLeaderboardPlayerData::LeaderboardPosition");
static_assert(offsetof(FFortMeshLeaderboardPlayerData, RequestCreationTime) == 88, "Offset mismatch for FFortMeshLeaderboardPlayerData::RequestCreationTime");

// /Script/SpecialEventGameplayRuntime.FortMeshLeaderboardPlayerDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFortMeshLeaderboardPlayerDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsGlobalLeaderboard; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    TArray<void*> CachedSortedIndices; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwnerManager; // 0x0070 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortMeshLeaderboardPlayerDataArray, Items) == 72, "Offset mismatch for FFortMeshLeaderboardPlayerDataArray::Items");
static_assert(offsetof(FFortMeshLeaderboardPlayerDataArray, bIsGlobalLeaderboard) == 88, "Offset mismatch for FFortMeshLeaderboardPlayerDataArray::bIsGlobalLeaderboard");
static_assert(offsetof(FFortMeshLeaderboardPlayerDataArray, CachedSortedIndices) == 96, "Offset mismatch for FFortMeshLeaderboardPlayerDataArray::CachedSortedIndices");
static_assert(offsetof(FFortMeshLeaderboardPlayerDataArray, OwnerManager) == 112, "Offset mismatch for FFortMeshLeaderboardPlayerDataArray::OwnerManager");

// /Script/SpecialEventGameplayRuntime.FortSpecialEventGEData
// Kind: ScriptStruct; super: none
struct FFortSpecialEventGEData
{
public:
    void* GameplayEffect; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t Level; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortSpecialEventGEData, GameplayEffect) == 0, "Offset mismatch for FFortSpecialEventGEData::GameplayEffect");
static_assert(offsetof(FFortSpecialEventGEData, Level) == 8, "Offset mismatch for FFortSpecialEventGEData::Level");

// /Script/SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
// Kind: ScriptStruct; super: none
struct FFortSpecialEventOverrideParts
{
public:
    TArray<void*> OverrideParts; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayEffectToApplyOnSwap[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortSpecialEventOverrideParts, OverrideParts) == 0, "Offset mismatch for FFortSpecialEventOverrideParts::OverrideParts");
static_assert(offsetof(FFortSpecialEventOverrideParts, GameplayEffectToApplyOnSwap) == 16, "Offset mismatch for FFortSpecialEventOverrideParts::GameplayEffectToApplyOnSwap");

// /Script/SpecialEventGameplayRuntime.GameplayScope
// Kind: ScriptStruct; super: none
struct FGameplayScope
{
public:
    TArray<void*> DataLayersToActivate; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* GameplayModifier; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* DaySequenceActorClass; // 0x0018 (Size: 0x8, Type: ClassProperty)
    float TimeOfDayInHours; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float TimeOfDayPlayRate; // 0x0024 (Size: 0x4, Type: FloatProperty)
    void* LevelSequence; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LevelSequencePlaybackSettings[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    void* BurnInClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    void* World; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0068
    void* LevelSequenceActor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayScope, DataLayersToActivate) == 0, "Offset mismatch for FGameplayScope::DataLayersToActivate");
static_assert(offsetof(FGameplayScope, GameplayModifier) == 16, "Offset mismatch for FGameplayScope::GameplayModifier");
static_assert(offsetof(FGameplayScope, DaySequenceActorClass) == 24, "Offset mismatch for FGameplayScope::DaySequenceActorClass");
static_assert(offsetof(FGameplayScope, TimeOfDayInHours) == 32, "Offset mismatch for FGameplayScope::TimeOfDayInHours");
static_assert(offsetof(FGameplayScope, TimeOfDayPlayRate) == 36, "Offset mismatch for FGameplayScope::TimeOfDayPlayRate");
static_assert(offsetof(FGameplayScope, LevelSequence) == 40, "Offset mismatch for FGameplayScope::LevelSequence");
static_assert(offsetof(FGameplayScope, LevelSequencePlaybackSettings) == 48, "Offset mismatch for FGameplayScope::LevelSequencePlaybackSettings");
static_assert(offsetof(FGameplayScope, BurnInClass) == 88, "Offset mismatch for FGameplayScope::BurnInClass");
static_assert(offsetof(FGameplayScope, World) == 96, "Offset mismatch for FGameplayScope::World");
static_assert(offsetof(FGameplayScope, LevelSequenceActor) == 112, "Offset mismatch for FGameplayScope::LevelSequenceActor");

// /Script/SpecialEventGameplayRuntime.MeshLeaderboardConfig
// Kind: ScriptStruct; super: none
struct FMeshLeaderboardConfig
{
public:
    std::uint8_t bIsLeaderboardFeatureEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGlobalLeaderboardEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SortStrategy; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    float RequestRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t GlobalLeaderboardSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    float MinScoreToEnterGlobalLeaderboard; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldSetGlobalLeaderboardIntoMeshMetadata; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldGetGlobalLeaderboardFromMeshMetadata; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0012
    float GlobalLeaderboardMetadataUpdateRate; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMeshLeaderboardConfig, bIsLeaderboardFeatureEnabled) == 0, "Offset mismatch for FMeshLeaderboardConfig::bIsLeaderboardFeatureEnabled");
static_assert(offsetof(FMeshLeaderboardConfig, bIsGlobalLeaderboardEnabled) == 1, "Offset mismatch for FMeshLeaderboardConfig::bIsGlobalLeaderboardEnabled");
static_assert(offsetof(FMeshLeaderboardConfig, SortStrategy) == 2, "Offset mismatch for FMeshLeaderboardConfig::SortStrategy");
static_assert(offsetof(FMeshLeaderboardConfig, RequestRate) == 4, "Offset mismatch for FMeshLeaderboardConfig::RequestRate");
static_assert(offsetof(FMeshLeaderboardConfig, GlobalLeaderboardSize) == 8, "Offset mismatch for FMeshLeaderboardConfig::GlobalLeaderboardSize");
static_assert(offsetof(FMeshLeaderboardConfig, MinScoreToEnterGlobalLeaderboard) == 12, "Offset mismatch for FMeshLeaderboardConfig::MinScoreToEnterGlobalLeaderboard");
static_assert(offsetof(FMeshLeaderboardConfig, bShouldSetGlobalLeaderboardIntoMeshMetadata) == 16, "Offset mismatch for FMeshLeaderboardConfig::bShouldSetGlobalLeaderboardIntoMeshMetadata");
static_assert(offsetof(FMeshLeaderboardConfig, bShouldGetGlobalLeaderboardFromMeshMetadata) == 17, "Offset mismatch for FMeshLeaderboardConfig::bShouldGetGlobalLeaderboardFromMeshMetadata");
static_assert(offsetof(FMeshLeaderboardConfig, GlobalLeaderboardMetadataUpdateRate) == 20, "Offset mismatch for FMeshLeaderboardConfig::GlobalLeaderboardMetadataUpdateRate");

// /Script/SpecialEventGameplayRuntime.PhaseDataLayerEntry
// Kind: ScriptStruct; super: PhaseLevelEntryBase
struct FPhaseDataLayerEntry
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* DataLayerAsset; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsRecursive; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPhaseDataLayerEntry, DataLayerAsset) == 96, "Offset mismatch for FPhaseDataLayerEntry::DataLayerAsset");
static_assert(offsetof(FPhaseDataLayerEntry, bIsRecursive) == 104, "Offset mismatch for FPhaseDataLayerEntry::bIsRecursive");

// /Script/SpecialEventGameplayRuntime.PhaseInfo
// Kind: ScriptStruct; super: none
struct FPhaseInfo
{
public:
    std::uint8_t PhaseTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float PhaseDuration; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSetRelevancyMode; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RelevancyMode; // 0x0009 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x000A
    std::int32_t NumOfPlayersInRelevancyGroup; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t RequireLevelsFromPhaseTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t bStartNextPhaseOnPhaseFinished; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGarbageCollectAtPhaseStartOnServer; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGarbageCollectAtPhaseStartOnClient; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    std::uint8_t ReplicatedLevelSequenceActorClass[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    void* ReplicatedLevelSequenceActorClass_HardRef; // 0x0058 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> LevelSequenceActor; // 0x0060 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0068
    std::uint8_t bDestroySpawnedLevelSequenceActorOnPhaseEnd; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x006A
    std::uint8_t NextPhaseTagOverride[0x4]; // 0x006C (Size: 0x4, Type: StructProperty)
    void* PhaseActor; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Levels; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataLayers; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhaseInfo, PhaseTag) == 0, "Offset mismatch for FPhaseInfo::PhaseTag");
static_assert(offsetof(FPhaseInfo, PhaseDuration) == 4, "Offset mismatch for FPhaseInfo::PhaseDuration");
static_assert(offsetof(FPhaseInfo, bSetRelevancyMode) == 8, "Offset mismatch for FPhaseInfo::bSetRelevancyMode");
static_assert(offsetof(FPhaseInfo, RelevancyMode) == 9, "Offset mismatch for FPhaseInfo::RelevancyMode");
static_assert(offsetof(FPhaseInfo, NumOfPlayersInRelevancyGroup) == 12, "Offset mismatch for FPhaseInfo::NumOfPlayersInRelevancyGroup");
static_assert(offsetof(FPhaseInfo, RequireLevelsFromPhaseTags) == 16, "Offset mismatch for FPhaseInfo::RequireLevelsFromPhaseTags");
static_assert(offsetof(FPhaseInfo, bStartNextPhaseOnPhaseFinished) == 48, "Offset mismatch for FPhaseInfo::bStartNextPhaseOnPhaseFinished");
static_assert(offsetof(FPhaseInfo, bGarbageCollectAtPhaseStartOnServer) == 49, "Offset mismatch for FPhaseInfo::bGarbageCollectAtPhaseStartOnServer");
static_assert(offsetof(FPhaseInfo, bGarbageCollectAtPhaseStartOnClient) == 50, "Offset mismatch for FPhaseInfo::bGarbageCollectAtPhaseStartOnClient");
static_assert(offsetof(FPhaseInfo, ReplicatedLevelSequenceActorClass) == 56, "Offset mismatch for FPhaseInfo::ReplicatedLevelSequenceActorClass");
static_assert(offsetof(FPhaseInfo, ReplicatedLevelSequenceActorClass_HardRef) == 88, "Offset mismatch for FPhaseInfo::ReplicatedLevelSequenceActorClass_HardRef");
static_assert(offsetof(FPhaseInfo, LevelSequenceActor) == 96, "Offset mismatch for FPhaseInfo::LevelSequenceActor");
static_assert(offsetof(FPhaseInfo, bDestroySpawnedLevelSequenceActorOnPhaseEnd) == 105, "Offset mismatch for FPhaseInfo::bDestroySpawnedLevelSequenceActorOnPhaseEnd");
static_assert(offsetof(FPhaseInfo, NextPhaseTagOverride) == 108, "Offset mismatch for FPhaseInfo::NextPhaseTagOverride");
static_assert(offsetof(FPhaseInfo, PhaseActor) == 112, "Offset mismatch for FPhaseInfo::PhaseActor");
static_assert(offsetof(FPhaseInfo, Levels) == 120, "Offset mismatch for FPhaseInfo::Levels");
static_assert(offsetof(FPhaseInfo, DataLayers) == 136, "Offset mismatch for FPhaseInfo::DataLayers");

// /Script/SpecialEventGameplayRuntime.PhaseLevelEntry
// Kind: ScriptStruct; super: PhaseLevelEntryBase
struct FPhaseLevelEntry
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t LevelToLoad[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    FString LevelName; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bExcludeFromServerPreload; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    std::uint8_t Location[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    void* LevelInstance; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPhaseLevelEntry, LevelToLoad) == 96, "Offset mismatch for FPhaseLevelEntry::LevelToLoad");
static_assert(offsetof(FPhaseLevelEntry, LevelName) == 128, "Offset mismatch for FPhaseLevelEntry::LevelName");
static_assert(offsetof(FPhaseLevelEntry, bExcludeFromServerPreload) == 144, "Offset mismatch for FPhaseLevelEntry::bExcludeFromServerPreload");
static_assert(offsetof(FPhaseLevelEntry, Location) == 152, "Offset mismatch for FPhaseLevelEntry::Location");
static_assert(offsetof(FPhaseLevelEntry, Rotation) == 176, "Offset mismatch for FPhaseLevelEntry::Rotation");
static_assert(offsetof(FPhaseLevelEntry, LevelInstance) == 200, "Offset mismatch for FPhaseLevelEntry::LevelInstance");

// /Script/SpecialEventGameplayRuntime.PhaseLevelEntryBase
// Kind: ScriptStruct; super: none
struct FPhaseLevelEntryBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bLoadLevelOnScriptStart; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLevelStartsVisible; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnloadLevelOnPhaseEnd; // 0x000A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMakeVisibleOnPhaseStart; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t MakeVisibleAtPhaseTags[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t UnloadLevelAtPhaseTags[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhaseLevelEntryBase, bLoadLevelOnScriptStart) == 8, "Offset mismatch for FPhaseLevelEntryBase::bLoadLevelOnScriptStart");
static_assert(offsetof(FPhaseLevelEntryBase, bLevelStartsVisible) == 9, "Offset mismatch for FPhaseLevelEntryBase::bLevelStartsVisible");
static_assert(offsetof(FPhaseLevelEntryBase, bUnloadLevelOnPhaseEnd) == 10, "Offset mismatch for FPhaseLevelEntryBase::bUnloadLevelOnPhaseEnd");
static_assert(offsetof(FPhaseLevelEntryBase, bMakeVisibleOnPhaseStart) == 11, "Offset mismatch for FPhaseLevelEntryBase::bMakeVisibleOnPhaseStart");
static_assert(offsetof(FPhaseLevelEntryBase, MakeVisibleAtPhaseTags) == 16, "Offset mismatch for FPhaseLevelEntryBase::MakeVisibleAtPhaseTags");
static_assert(offsetof(FPhaseLevelEntryBase, UnloadLevelAtPhaseTags) == 48, "Offset mismatch for FPhaseLevelEntryBase::UnloadLevelAtPhaseTags");

// /Script/SpecialEventGameplayRuntime.PlayerCatchupState
// Kind: ScriptStruct; super: none
struct FPlayerCatchupState
{
public:
    TWeakObjectPtr<void> PlayerState; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CheckpointGameplayTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t HasReachedCheckpoint; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayerCatchupState, PlayerState) == 0, "Offset mismatch for FPlayerCatchupState::PlayerState");
static_assert(offsetof(FPlayerCatchupState, CheckpointGameplayTag) == 8, "Offset mismatch for FPlayerCatchupState::CheckpointGameplayTag");
static_assert(offsetof(FPlayerCatchupState, HasReachedCheckpoint) == 12, "Offset mismatch for FPlayerCatchupState::HasReachedCheckpoint");

// /Script/SpecialEventGameplayRuntime.PlayerStateCleanupParams
// Kind: ScriptStruct; super: none
struct FPlayerStateCleanupParams
{
public:
    std::uint8_t RespawnMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bForceExitVehicle; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceExitAircraft; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetInventory; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceRemoveAllExistingInventory; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReinitializeAbilities; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HealthShieldMode; // 0x0006 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    std::uint8_t EventTagsToSend[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t LooseTagsToAdd[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t LooseTagsToRemove[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    TArray<void*> GameplayEffectsToApply; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCancelActiveEmotes; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayerStateCleanupParams, RespawnMode) == 0, "Offset mismatch for FPlayerStateCleanupParams::RespawnMode");
static_assert(offsetof(FPlayerStateCleanupParams, bForceExitVehicle) == 1, "Offset mismatch for FPlayerStateCleanupParams::bForceExitVehicle");
static_assert(offsetof(FPlayerStateCleanupParams, bForceExitAircraft) == 2, "Offset mismatch for FPlayerStateCleanupParams::bForceExitAircraft");
static_assert(offsetof(FPlayerStateCleanupParams, bResetInventory) == 3, "Offset mismatch for FPlayerStateCleanupParams::bResetInventory");
static_assert(offsetof(FPlayerStateCleanupParams, bForceRemoveAllExistingInventory) == 4, "Offset mismatch for FPlayerStateCleanupParams::bForceRemoveAllExistingInventory");
static_assert(offsetof(FPlayerStateCleanupParams, bReinitializeAbilities) == 5, "Offset mismatch for FPlayerStateCleanupParams::bReinitializeAbilities");
static_assert(offsetof(FPlayerStateCleanupParams, HealthShieldMode) == 6, "Offset mismatch for FPlayerStateCleanupParams::HealthShieldMode");
static_assert(offsetof(FPlayerStateCleanupParams, EventTagsToSend) == 8, "Offset mismatch for FPlayerStateCleanupParams::EventTagsToSend");
static_assert(offsetof(FPlayerStateCleanupParams, LooseTagsToAdd) == 40, "Offset mismatch for FPlayerStateCleanupParams::LooseTagsToAdd");
static_assert(offsetof(FPlayerStateCleanupParams, LooseTagsToRemove) == 72, "Offset mismatch for FPlayerStateCleanupParams::LooseTagsToRemove");
static_assert(offsetof(FPlayerStateCleanupParams, GameplayEffectsToApply) == 104, "Offset mismatch for FPlayerStateCleanupParams::GameplayEffectsToApply");
static_assert(offsetof(FPlayerStateCleanupParams, bCancelActiveEmotes) == 120, "Offset mismatch for FPlayerStateCleanupParams::bCancelActiveEmotes");

// /Script/SpecialEventGameplayRuntime.PreEventPhase
// Kind: ScriptStruct; super: none
struct FPreEventPhase
{
public:
    std::uint8_t ID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Scope[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPreEventPhase, ID) == 0, "Offset mismatch for FPreEventPhase::ID");
static_assert(offsetof(FPreEventPhase, Scope) == 8, "Offset mismatch for FPreEventPhase::Scope");

// /Script/SpecialEventGameplayRuntime.SpecialClientEvent
// Kind: ScriptStruct; super: none
struct FSpecialClientEvent
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float TimeSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EventTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::int32_t Count; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpecialClientEvent, PlayerController) == 0, "Offset mismatch for FSpecialClientEvent::PlayerController");
static_assert(offsetof(FSpecialClientEvent, TimeSeconds) == 8, "Offset mismatch for FSpecialClientEvent::TimeSeconds");
static_assert(offsetof(FSpecialClientEvent, EventTag) == 12, "Offset mismatch for FSpecialClientEvent::EventTag");
static_assert(offsetof(FSpecialClientEvent, Count) == 16, "Offset mismatch for FSpecialClientEvent::Count");

// /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
// Kind: ScriptStruct; super: none
struct FSpecialEventAudioHapticsAction
{
public:
    float LoudnessFloor; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LoudnessCeiling; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float HapticsIntensity; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t ChannelIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bAffectsLeftLarge; // 0x0010 (Size: 0x1, Type: BoolProperty)
    // 0x0010 BoolProperty bAffectsLeftSmall (shared storage)
    // 0x0010 BoolProperty bAffectsRightLarge (shared storage)
    // 0x0010 BoolProperty bAffectsRightSmall (shared storage)
};

static_assert(offsetof(FSpecialEventAudioHapticsAction, LoudnessFloor) == 0, "Offset mismatch for FSpecialEventAudioHapticsAction::LoudnessFloor");
static_assert(offsetof(FSpecialEventAudioHapticsAction, LoudnessCeiling) == 4, "Offset mismatch for FSpecialEventAudioHapticsAction::LoudnessCeiling");
static_assert(offsetof(FSpecialEventAudioHapticsAction, HapticsIntensity) == 8, "Offset mismatch for FSpecialEventAudioHapticsAction::HapticsIntensity");
static_assert(offsetof(FSpecialEventAudioHapticsAction, ChannelIndex) == 12, "Offset mismatch for FSpecialEventAudioHapticsAction::ChannelIndex");
static_assert(offsetof(FSpecialEventAudioHapticsAction, bAffectsLeftLarge) == 16, "Offset mismatch for FSpecialEventAudioHapticsAction::bAffectsLeftLarge");

// /Script/SpecialEventGameplayRuntime.SpecialEventBoneInfo
// Kind: ScriptStruct; super: none
struct FSpecialEventBoneInfo
{
public:
    FName BoneName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t BoneScale[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpecialEventBoneInfo, BoneName) == 0, "Offset mismatch for FSpecialEventBoneInfo::BoneName");
static_assert(offsetof(FSpecialEventBoneInfo, BoneScale) == 8, "Offset mismatch for FSpecialEventBoneInfo::BoneScale");

// /Script/SpecialEventGameplayRuntime.SpecialEventCharacterBones
// Kind: ScriptStruct; super: none
struct FSpecialEventCharacterBones
{
public:
    TArray<void*> BonesToScale; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpecialEventCharacterBones, BonesToScale) == 0, "Offset mismatch for FSpecialEventCharacterBones::BonesToScale");

// /Script/SpecialEventGameplayRuntime.SpecialEventCharacterDefinitionBones
// Kind: ScriptStruct; super: none
struct FSpecialEventCharacterDefinitionBones
{
public:
    std::uint8_t CharacterDefinitionId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t CharacterScaleOverrideData[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpecialEventCharacterDefinitionBones, CharacterDefinitionId) == 0, "Offset mismatch for FSpecialEventCharacterDefinitionBones::CharacterDefinitionId");
static_assert(offsetof(FSpecialEventCharacterDefinitionBones, CharacterScaleOverrideData) == 8, "Offset mismatch for FSpecialEventCharacterDefinitionBones::CharacterScaleOverrideData");

// /Script/SpecialEventGameplayRuntime.SpecialEventCursorMode
// Kind: ScriptStruct; super: none
struct FSpecialEventCursorMode
{
public:
    void* WidgetClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowDebugCursorDrawing; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t GamepadMoveEaseData[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t GamepadMoveSpeed[0x28]; // 0x0018 (Size: 0x28, Type: StructProperty)
    std::uint8_t TouchMoveEaseData[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t TouchMoveSpeed[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    float TouchDeadzoneTreshold; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float TouchAttenuator; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MinCursorPercentForAdditiveRotationPitch[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinCursorPercentForAdditiveRotationYaw[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAdditiveRotationPitch[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAdditiveRotationYaw[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdditiveRotationInterpSpeed[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZoomInInterpSpeed[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZoomOutInterpSpeed[0x28]; // 0x0170 (Size: 0x28, Type: StructProperty)
    std::uint8_t ZoomAdditiveFOV[0x28]; // 0x0198 (Size: 0x28, Type: StructProperty)
    std::uint8_t GamepadZoomMoveSpeed[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t TouchZoomMoveSpeed[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllowTrace; // 0x0210 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TraceChannel; // 0x0211 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0212
    std::uint8_t SweepRadius[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t TraceDistance[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t bTraceComplex[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    std::uint8_t RecenterAfterNoInputDelay[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t RecenterInterpSpeed[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LeftBound[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RightBound[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t TopBound[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    std::uint8_t BottomBound[0x28]; // 0x0358 (Size: 0x28, Type: StructProperty)
    std::uint8_t bUseEllipseForBound; // 0x0380 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSupportSplitscreen; // 0x0381 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpecialEventCursorMode, WidgetClass) == 0, "Offset mismatch for FSpecialEventCursorMode::WidgetClass");
static_assert(offsetof(FSpecialEventCursorMode, bAllowDebugCursorDrawing) == 8, "Offset mismatch for FSpecialEventCursorMode::bAllowDebugCursorDrawing");
static_assert(offsetof(FSpecialEventCursorMode, GamepadMoveEaseData) == 12, "Offset mismatch for FSpecialEventCursorMode::GamepadMoveEaseData");
static_assert(offsetof(FSpecialEventCursorMode, GamepadMoveSpeed) == 24, "Offset mismatch for FSpecialEventCursorMode::GamepadMoveSpeed");
static_assert(offsetof(FSpecialEventCursorMode, TouchMoveEaseData) == 64, "Offset mismatch for FSpecialEventCursorMode::TouchMoveEaseData");
static_assert(offsetof(FSpecialEventCursorMode, TouchMoveSpeed) == 80, "Offset mismatch for FSpecialEventCursorMode::TouchMoveSpeed");
static_assert(offsetof(FSpecialEventCursorMode, TouchDeadzoneTreshold) == 120, "Offset mismatch for FSpecialEventCursorMode::TouchDeadzoneTreshold");
static_assert(offsetof(FSpecialEventCursorMode, TouchAttenuator) == 124, "Offset mismatch for FSpecialEventCursorMode::TouchAttenuator");
static_assert(offsetof(FSpecialEventCursorMode, MinCursorPercentForAdditiveRotationPitch) == 128, "Offset mismatch for FSpecialEventCursorMode::MinCursorPercentForAdditiveRotationPitch");
static_assert(offsetof(FSpecialEventCursorMode, MinCursorPercentForAdditiveRotationYaw) == 168, "Offset mismatch for FSpecialEventCursorMode::MinCursorPercentForAdditiveRotationYaw");
static_assert(offsetof(FSpecialEventCursorMode, MaxAdditiveRotationPitch) == 208, "Offset mismatch for FSpecialEventCursorMode::MaxAdditiveRotationPitch");
static_assert(offsetof(FSpecialEventCursorMode, MaxAdditiveRotationYaw) == 248, "Offset mismatch for FSpecialEventCursorMode::MaxAdditiveRotationYaw");
static_assert(offsetof(FSpecialEventCursorMode, AdditiveRotationInterpSpeed) == 288, "Offset mismatch for FSpecialEventCursorMode::AdditiveRotationInterpSpeed");
static_assert(offsetof(FSpecialEventCursorMode, ZoomInInterpSpeed) == 328, "Offset mismatch for FSpecialEventCursorMode::ZoomInInterpSpeed");
static_assert(offsetof(FSpecialEventCursorMode, ZoomOutInterpSpeed) == 368, "Offset mismatch for FSpecialEventCursorMode::ZoomOutInterpSpeed");
static_assert(offsetof(FSpecialEventCursorMode, ZoomAdditiveFOV) == 408, "Offset mismatch for FSpecialEventCursorMode::ZoomAdditiveFOV");
static_assert(offsetof(FSpecialEventCursorMode, GamepadZoomMoveSpeed) == 448, "Offset mismatch for FSpecialEventCursorMode::GamepadZoomMoveSpeed");
static_assert(offsetof(FSpecialEventCursorMode, TouchZoomMoveSpeed) == 488, "Offset mismatch for FSpecialEventCursorMode::TouchZoomMoveSpeed");
static_assert(offsetof(FSpecialEventCursorMode, bAllowTrace) == 528, "Offset mismatch for FSpecialEventCursorMode::bAllowTrace");
static_assert(offsetof(FSpecialEventCursorMode, TraceChannel) == 529, "Offset mismatch for FSpecialEventCursorMode::TraceChannel");
static_assert(offsetof(FSpecialEventCursorMode, SweepRadius) == 536, "Offset mismatch for FSpecialEventCursorMode::SweepRadius");
static_assert(offsetof(FSpecialEventCursorMode, TraceDistance) == 576, "Offset mismatch for FSpecialEventCursorMode::TraceDistance");
static_assert(offsetof(FSpecialEventCursorMode, bTraceComplex) == 616, "Offset mismatch for FSpecialEventCursorMode::bTraceComplex");
static_assert(offsetof(FSpecialEventCursorMode, RecenterAfterNoInputDelay) == 656, "Offset mismatch for FSpecialEventCursorMode::RecenterAfterNoInputDelay");
static_assert(offsetof(FSpecialEventCursorMode, RecenterInterpSpeed) == 696, "Offset mismatch for FSpecialEventCursorMode::RecenterInterpSpeed");
static_assert(offsetof(FSpecialEventCursorMode, LeftBound) == 736, "Offset mismatch for FSpecialEventCursorMode::LeftBound");
static_assert(offsetof(FSpecialEventCursorMode, RightBound) == 776, "Offset mismatch for FSpecialEventCursorMode::RightBound");
static_assert(offsetof(FSpecialEventCursorMode, TopBound) == 816, "Offset mismatch for FSpecialEventCursorMode::TopBound");
static_assert(offsetof(FSpecialEventCursorMode, BottomBound) == 856, "Offset mismatch for FSpecialEventCursorMode::BottomBound");
static_assert(offsetof(FSpecialEventCursorMode, bUseEllipseForBound) == 896, "Offset mismatch for FSpecialEventCursorMode::bUseEllipseForBound");
static_assert(offsetof(FSpecialEventCursorMode, bSupportSplitscreen) == 897, "Offset mismatch for FSpecialEventCursorMode::bSupportSplitscreen");

// /Script/SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
// Kind: ScriptStruct; super: none
struct FSpecialEventCursorStackEntry
{
public:
    std::uint8_t CursorModeTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    TWeakObjectPtr<void> InstigatingObject; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSpecialEventCursorStackEntry, CursorModeTag) == 0, "Offset mismatch for FSpecialEventCursorStackEntry::CursorModeTag");
static_assert(offsetof(FSpecialEventCursorStackEntry, InstigatingObject) == 4, "Offset mismatch for FSpecialEventCursorStackEntry::InstigatingObject");

// /Script/SpecialEventGameplayRuntime.SpecialEventEnemyGuardAimAnimInfoStruct
// Kind: ScriptStruct; super: none
struct FSpecialEventEnemyGuardAimAnimInfoStruct
{
public:
    float AimYaw; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AimPitch; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float RootYaw; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TargetAimYaw; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TargetAimPitch; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TargetRootYaw; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventEnemyGuardAimAnimInfoStruct, AimYaw) == 0, "Offset mismatch for FSpecialEventEnemyGuardAimAnimInfoStruct::AimYaw");
static_assert(offsetof(FSpecialEventEnemyGuardAimAnimInfoStruct, AimPitch) == 4, "Offset mismatch for FSpecialEventEnemyGuardAimAnimInfoStruct::AimPitch");
static_assert(offsetof(FSpecialEventEnemyGuardAimAnimInfoStruct, RootYaw) == 8, "Offset mismatch for FSpecialEventEnemyGuardAimAnimInfoStruct::RootYaw");
static_assert(offsetof(FSpecialEventEnemyGuardAimAnimInfoStruct, TargetAimYaw) == 12, "Offset mismatch for FSpecialEventEnemyGuardAimAnimInfoStruct::TargetAimYaw");
static_assert(offsetof(FSpecialEventEnemyGuardAimAnimInfoStruct, TargetAimPitch) == 16, "Offset mismatch for FSpecialEventEnemyGuardAimAnimInfoStruct::TargetAimPitch");
static_assert(offsetof(FSpecialEventEnemyGuardAimAnimInfoStruct, TargetRootYaw) == 20, "Offset mismatch for FSpecialEventEnemyGuardAimAnimInfoStruct::TargetRootYaw");

// /Script/SpecialEventGameplayRuntime.SpecialEventMapData
// Kind: ScriptStruct; super: none
struct FSpecialEventMapData
{
public:
    std::uint8_t MapTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> MapNames; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bReplicatedHasBeenUnloaded; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasBeenUnloaded; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpecialEventMapData, MapTag) == 0, "Offset mismatch for FSpecialEventMapData::MapTag");
static_assert(offsetof(FSpecialEventMapData, MapNames) == 8, "Offset mismatch for FSpecialEventMapData::MapNames");
static_assert(offsetof(FSpecialEventMapData, bReplicatedHasBeenUnloaded) == 24, "Offset mismatch for FSpecialEventMapData::bReplicatedHasBeenUnloaded");
static_assert(offsetof(FSpecialEventMapData, bHasBeenUnloaded) == 25, "Offset mismatch for FSpecialEventMapData::bHasBeenUnloaded");

// /Script/SpecialEventGameplayRuntime.SpecialEventMathEaseData
// Kind: ScriptStruct; super: none
struct FSpecialEventMathEaseData
{
public:
    std::uint8_t EasingFunc; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float BlendExp; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t Steps; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpecialEventMathEaseData, EasingFunc) == 0, "Offset mismatch for FSpecialEventMathEaseData::EasingFunc");
static_assert(offsetof(FSpecialEventMathEaseData, BlendExp) == 4, "Offset mismatch for FSpecialEventMathEaseData::BlendExp");
static_assert(offsetof(FSpecialEventMathEaseData, Steps) == 8, "Offset mismatch for FSpecialEventMathEaseData::Steps");

// /Script/SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
// Kind: ScriptStruct; super: none
struct FSpecialEventPhaseComponentNetModeInfo
{
public:
    std::uint8_t NetModeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ComponentClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSpecialEventPhaseComponentNetModeInfo, NetModeType) == 0, "Offset mismatch for FSpecialEventPhaseComponentNetModeInfo::NetModeType");
static_assert(offsetof(FSpecialEventPhaseComponentNetModeInfo, ComponentClass) == 8, "Offset mismatch for FSpecialEventPhaseComponentNetModeInfo::ComponentClass");

// /Script/SpecialEventGameplayRuntime.SpecialEventReturnToMainMenuParams
// Kind: ScriptStruct; super: none
struct FSpecialEventReturnToMainMenuParams
{
public:
    float OverrideTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventReturnToMainMenuParams, OverrideTime) == 0, "Offset mismatch for FSpecialEventReturnToMainMenuParams::OverrideTime");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSpecialEventRewindComponentFrame
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    float ServerWorldTime; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventRewindComponentFrame, ServerWorldTime) == 12, "Offset mismatch for FSpecialEventRewindComponentFrame::ServerWorldTime");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
// Kind: ScriptStruct; super: SpecialEventRewindComponentFrame
struct FSpecialEventRewindComponentFrame_PlayerPawn
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t CompressedYaw; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CompressedControlRotationPitch; // 0x0029 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSpecialEventRewindComponentFrame_PlayerPawn, Location) == 16, "Offset mismatch for FSpecialEventRewindComponentFrame_PlayerPawn::Location");
static_assert(offsetof(FSpecialEventRewindComponentFrame_PlayerPawn, CompressedYaw) == 40, "Offset mismatch for FSpecialEventRewindComponentFrame_PlayerPawn::CompressedYaw");
static_assert(offsetof(FSpecialEventRewindComponentFrame_PlayerPawn, CompressedControlRotationPitch) == 41, "Offset mismatch for FSpecialEventRewindComponentFrame_PlayerPawn::CompressedControlRotationPitch");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
// Kind: ScriptStruct; super: none
struct FSpecialEventRewindComponentRecording
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* RewindComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t StartFrameIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrameIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpecialEventRewindComponentRecording, RewindComponent) == 8, "Offset mismatch for FSpecialEventRewindComponentRecording::RewindComponent");
static_assert(offsetof(FSpecialEventRewindComponentRecording, StartFrameIndex) == 16, "Offset mismatch for FSpecialEventRewindComponentRecording::StartFrameIndex");
static_assert(offsetof(FSpecialEventRewindComponentRecording, EndFrameIndex) == 20, "Offset mismatch for FSpecialEventRewindComponentRecording::EndFrameIndex");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
// Kind: ScriptStruct; super: FastArraySerializer
struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Frames; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpecialEventRewindComponentRecordingFastArray_PlayerPawn, Frames) == 72, "Offset mismatch for FSpecialEventRewindComponentRecordingFastArray_PlayerPawn::Frames");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
// Kind: ScriptStruct; super: SpecialEventRewindComponentRecording
struct FSpecialEventRewindComponentRecording_PlayerPawn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* RewindComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t StartFrameIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrameIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpecialEventRewindComponentRecording_PlayerPawn, RewindComponent) == 8, "Offset mismatch for FSpecialEventRewindComponentRecording_PlayerPawn::RewindComponent");
static_assert(offsetof(FSpecialEventRewindComponentRecording_PlayerPawn, StartFrameIndex) == 16, "Offset mismatch for FSpecialEventRewindComponentRecording_PlayerPawn::StartFrameIndex");
static_assert(offsetof(FSpecialEventRewindComponentRecording_PlayerPawn, EndFrameIndex) == 20, "Offset mismatch for FSpecialEventRewindComponentRecording_PlayerPawn::EndFrameIndex");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
// Kind: ScriptStruct; super: none
struct FSpecialEventRewindComponentStateData
{
public:
    std::uint8_t State; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StateChangedCount; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float ServerWorldTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventRewindComponentStateData, State) == 0, "Offset mismatch for FSpecialEventRewindComponentStateData::State");
static_assert(offsetof(FSpecialEventRewindComponentStateData, StateChangedCount) == 1, "Offset mismatch for FSpecialEventRewindComponentStateData::StateChangedCount");
static_assert(offsetof(FSpecialEventRewindComponentStateData, ServerWorldTime) == 4, "Offset mismatch for FSpecialEventRewindComponentStateData::ServerWorldTime");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_CameraShiftStatusChanged
// Kind: ScriptStruct; super: none
struct FSpecialEventScriptMeshActor_CameraShiftStatusChanged
{
public:
    std::uint8_t bCurrentStatus; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpecialEventScriptMeshActor_CameraShiftStatusChanged, bCurrentStatus) == 0, "Offset mismatch for FSpecialEventScriptMeshActor_CameraShiftStatusChanged::bCurrentStatus");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_EventStartTimeChanged
// Kind: ScriptStruct; super: none
struct FSpecialEventScriptMeshActor_EventStartTimeChanged
{
public:
    std::uint8_t CurrentStartTime[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpecialEventScriptMeshActor_EventStartTimeChanged, CurrentStartTime) == 0, "Offset mismatch for FSpecialEventScriptMeshActor_EventStartTimeChanged::CurrentStartTime");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_ExitScreenDisableStatusChanged
// Kind: ScriptStruct; super: none
struct FSpecialEventScriptMeshActor_ExitScreenDisableStatusChanged
{
public:
    std::uint8_t bCurrentStatus; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpecialEventScriptMeshActor_ExitScreenDisableStatusChanged, bCurrentStatus) == 0, "Offset mismatch for FSpecialEventScriptMeshActor_ExitScreenDisableStatusChanged::bCurrentStatus");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_InitialPreEventPhase
// Kind: ScriptStruct; super: none
struct FSpecialEventScriptMeshActor_InitialPreEventPhase
{
public:
    std::uint8_t InitialPreEventPhase[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpecialEventScriptMeshActor_InitialPreEventPhase, InitialPreEventPhase) == 0, "Offset mismatch for FSpecialEventScriptMeshActor_InitialPreEventPhase::InitialPreEventPhase");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_MaxEventPlaybackCountChanged
// Kind: ScriptStruct; super: none
struct FSpecialEventScriptMeshActor_MaxEventPlaybackCountChanged
{
public:
    std::int32_t CurrentMaxCount; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpecialEventScriptMeshActor_MaxEventPlaybackCountChanged, CurrentMaxCount) == 0, "Offset mismatch for FSpecialEventScriptMeshActor_MaxEventPlaybackCountChanged::CurrentMaxCount");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_NightNightStatusChanged
// Kind: ScriptStruct; super: none
struct FSpecialEventScriptMeshActor_NightNightStatusChanged
{
public:
    std::uint8_t bCurrentStatus; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpecialEventScriptMeshActor_NightNightStatusChanged, bCurrentStatus) == 0, "Offset mismatch for FSpecialEventScriptMeshActor_NightNightStatusChanged::bCurrentStatus");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_VideoPlaybackConfigChanged
// Kind: ScriptStruct; super: none
struct FSpecialEventScriptMeshActor_VideoPlaybackConfigChanged
{
public:
    std::uint8_t bExitButtonDisabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackButtonDisabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    FString PlaybackVuid; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSpecialEventScriptMeshActor_VideoPlaybackConfigChanged, bExitButtonDisabled) == 0, "Offset mismatch for FSpecialEventScriptMeshActor_VideoPlaybackConfigChanged::bExitButtonDisabled");
static_assert(offsetof(FSpecialEventScriptMeshActor_VideoPlaybackConfigChanged, bPlaybackButtonDisabled) == 1, "Offset mismatch for FSpecialEventScriptMeshActor_VideoPlaybackConfigChanged::bPlaybackButtonDisabled");
static_assert(offsetof(FSpecialEventScriptMeshActor_VideoPlaybackConfigChanged, PlaybackVuid) == 8, "Offset mismatch for FSpecialEventScriptMeshActor_VideoPlaybackConfigChanged::PlaybackVuid");

// /Script/SpecialEventGameplayRuntime.SpecialEventStatArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FSpecialEventStatArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Stats; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* StatComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSpecialEventStatArray, Stats) == 72, "Offset mismatch for FSpecialEventStatArray::Stats");
static_assert(offsetof(FSpecialEventStatArray, StatComponent) == 88, "Offset mismatch for FSpecialEventStatArray::StatComponent");

// /Script/SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FSpecialEventStatArrayEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* StatComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* Owner; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::int32_t StatDefinitionIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t StatDefinitionCopy[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    float Value; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventStatArrayEntry, StatComponent) == 16, "Offset mismatch for FSpecialEventStatArrayEntry::StatComponent");
static_assert(offsetof(FSpecialEventStatArrayEntry, Owner) == 24, "Offset mismatch for FSpecialEventStatArrayEntry::Owner");
static_assert(offsetof(FSpecialEventStatArrayEntry, StatDefinitionIndex) == 32, "Offset mismatch for FSpecialEventStatArrayEntry::StatDefinitionIndex");
static_assert(offsetof(FSpecialEventStatArrayEntry, StatDefinitionCopy) == 36, "Offset mismatch for FSpecialEventStatArrayEntry::StatDefinitionCopy");
static_assert(offsetof(FSpecialEventStatArrayEntry, Value) == 52, "Offset mismatch for FSpecialEventStatArrayEntry::Value");

// /Script/SpecialEventGameplayRuntime.SpecialEventStatDefinition
// Kind: ScriptStruct; super: none
struct FSpecialEventStatDefinition
{
public:
    std::uint8_t LookupTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float min; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DefaultValue; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventStatDefinition, LookupTag) == 0, "Offset mismatch for FSpecialEventStatDefinition::LookupTag");
static_assert(offsetof(FSpecialEventStatDefinition, min) == 4, "Offset mismatch for FSpecialEventStatDefinition::min");
static_assert(offsetof(FSpecialEventStatDefinition, max) == 8, "Offset mismatch for FSpecialEventStatDefinition::max");
static_assert(offsetof(FSpecialEventStatDefinition, DefaultValue) == 12, "Offset mismatch for FSpecialEventStatDefinition::DefaultValue");

// /Script/SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
// Kind: ScriptStruct; super: none
struct FSpecialEventTODMPhaseData
{
public:
    std::uint8_t PhaseTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> SubphaseDataArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSpecialEventTODMPhaseData, PhaseTag) == 0, "Offset mismatch for FSpecialEventTODMPhaseData::PhaseTag");
static_assert(offsetof(FSpecialEventTODMPhaseData, SubphaseDataArray) == 8, "Offset mismatch for FSpecialEventTODMPhaseData::SubphaseDataArray");

// /Script/SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
// Kind: ScriptStruct; super: none
struct FSpecialEventTODMSubphaseData
{
public:
    float PhaseTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ModifyType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    void* SpawnClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
    float TimeOfDay; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SpeedFactor; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpecialEventTODMSubphaseData, PhaseTime) == 0, "Offset mismatch for FSpecialEventTODMSubphaseData::PhaseTime");
static_assert(offsetof(FSpecialEventTODMSubphaseData, ModifyType) == 4, "Offset mismatch for FSpecialEventTODMSubphaseData::ModifyType");
static_assert(offsetof(FSpecialEventTODMSubphaseData, SpawnClass) == 8, "Offset mismatch for FSpecialEventTODMSubphaseData::SpawnClass");
static_assert(offsetof(FSpecialEventTODMSubphaseData, TimeOfDay) == 16, "Offset mismatch for FSpecialEventTODMSubphaseData::TimeOfDay");
static_assert(offsetof(FSpecialEventTODMSubphaseData, SpeedFactor) == 20, "Offset mismatch for FSpecialEventTODMSubphaseData::SpeedFactor");

// /Script/SpecialEventGameplayRuntime.SpecialEvent_OnBeforeEarliestPhaseActivation
// Kind: ScriptStruct; super: none
struct FSpecialEvent_OnBeforeEarliestPhaseActivation
{
public:
    std::int32_t Phase; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpecialEvent_OnBeforeEarliestPhaseActivation, Phase) == 0, "Offset mismatch for FSpecialEvent_OnBeforeEarliestPhaseActivation::Phase");

// /Script/SpecialEventGameplayRuntime.SpecialEvent_PreEventManagerAvailable
// Kind: ScriptStruct; super: none
struct FSpecialEvent_PreEventManagerAvailable
{
public:
    TWeakObjectPtr<void> PreEventManager; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSpecialEvent_PreEventManagerAvailable, PreEventManager) == 0, "Offset mismatch for FSpecialEvent_PreEventManagerAvailable::PreEventManager");

// /Script/SpecialEventGameplayRuntime.SpecialEvent_PreEventPhaseChanged
// Kind: ScriptStruct; super: none
struct FSpecialEvent_PreEventPhaseChanged
{
public:
    std::uint8_t OldPhase[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t NewPhase[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpecialEvent_PreEventPhaseChanged, OldPhase) == 0, "Offset mismatch for FSpecialEvent_PreEventPhaseChanged::OldPhase");
static_assert(offsetof(FSpecialEvent_PreEventPhaseChanged, NewPhase) == 4, "Offset mismatch for FSpecialEvent_PreEventPhaseChanged::NewPhase");

// /Script/SpecialEventGameplayRuntime.DamageRecordEntry
// Kind: Class; super: ActorComponent
class UDamageRecordEntry
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float DamageTotal; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float EndReplicationTime; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DamageTags[0x20]; // 0x00C8 (Size: 0x20, Type: StructProperty)
    std::uint8_t EffectContext[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t GameplayCueParams[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDamageRecordEntry, DamageTotal) == 192, "Offset mismatch for UDamageRecordEntry::DamageTotal");
static_assert(offsetof(UDamageRecordEntry, EndReplicationTime) == 196, "Offset mismatch for UDamageRecordEntry::EndReplicationTime");
static_assert(offsetof(UDamageRecordEntry, DamageTags) == 200, "Offset mismatch for UDamageRecordEntry::DamageTags");
static_assert(offsetof(UDamageRecordEntry, EffectContext) == 232, "Offset mismatch for UDamageRecordEntry::EffectContext");
static_assert(offsetof(UDamageRecordEntry, GameplayCueParams) == 256, "Offset mismatch for UDamageRecordEntry::GameplayCueParams");

// /Script/SpecialEventGameplayRuntime.DowntimeSettings
// Kind: Class; super: PrimaryDataAsset
class UDowntimeSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bActivateNightNight; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDowntimeSettings, bActivateNightNight) == 48, "Offset mismatch for UDowntimeSettings::bActivateNightNight");

// /Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
// Kind: Class; super: BlueprintAsyncActionBase
class UFortAsyncAction_GameplayCinematicComponentReady
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnReady; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAsyncAction_GameplayCinematicComponentReady, OnReady) == 48, "Offset mismatch for UFortAsyncAction_GameplayCinematicComponentReady::OnReady");

// /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
// Kind: Class; super: BlueprintAsyncActionBase
class UFortAsyncAction_SpecialEventGameUserSettingsReady
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnReady; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAsyncAction_SpecialEventGameUserSettingsReady, OnReady) == 48, "Offset mismatch for UFortAsyncAction_SpecialEventGameUserSettingsReady::OnReady");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_BackFillControl
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_BackFillControl
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t FinalPhase; // 0x02F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02F1
    float MinPlayerPercent; // 0x02F4 (Size: 0x4, Type: FloatProperty)
    float MaxPlayerPercent; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float UpdateTimeInterval; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowDisableBackfillAndDestroyMutator; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0301
    float DisableBackfillStaggerTime; // 0x0304 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ControlFlowIndex; // 0x0308 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0309
    std::int32_t MinPlayersForBackfill; // 0x030C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxPlayersForBackfill; // 0x0310 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsGameSessionInBackfillMode; // 0x0314 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0315
    std::int32_t NumPlayers; // 0x0318 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortAthenaMutator_BackFillControl, FinalPhase) == 752, "Offset mismatch for UFortAthenaMutator_BackFillControl::FinalPhase");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, MinPlayerPercent) == 756, "Offset mismatch for UFortAthenaMutator_BackFillControl::MinPlayerPercent");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, MaxPlayerPercent) == 760, "Offset mismatch for UFortAthenaMutator_BackFillControl::MaxPlayerPercent");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, UpdateTimeInterval) == 764, "Offset mismatch for UFortAthenaMutator_BackFillControl::UpdateTimeInterval");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, bAllowDisableBackfillAndDestroyMutator) == 768, "Offset mismatch for UFortAthenaMutator_BackFillControl::bAllowDisableBackfillAndDestroyMutator");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, DisableBackfillStaggerTime) == 772, "Offset mismatch for UFortAthenaMutator_BackFillControl::DisableBackfillStaggerTime");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, ControlFlowIndex) == 776, "Offset mismatch for UFortAthenaMutator_BackFillControl::ControlFlowIndex");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, MinPlayersForBackfill) == 780, "Offset mismatch for UFortAthenaMutator_BackFillControl::MinPlayersForBackfill");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, MaxPlayersForBackfill) == 784, "Offset mismatch for UFortAthenaMutator_BackFillControl::MaxPlayersForBackfill");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, bIsGameSessionInBackfillMode) == 788, "Offset mismatch for UFortAthenaMutator_BackFillControl::bIsGameSessionInBackfillMode");
static_assert(offsetof(UFortAthenaMutator_BackFillControl, NumPlayers) == 792, "Offset mismatch for UFortAthenaMutator_BackFillControl::NumPlayers");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_DestroyActorsAndComponents
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TArray<void*> ActorDefinitions; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_DestroyActorsAndComponents, ActorDefinitions) == 736, "Offset mismatch for UFortAthenaMutator_DestroyActorsAndComponents::ActorDefinitions");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
// Kind: Class; super: FortAthenaMutator_SpecialRelevancy
class UFortAthenaMutator_FakeKillRelevancy
{
public:
    std::uint8_t Pad_0000[0x488]; // 0x0000
    void* FakeKillControllerComponentClass; // 0x0488 (Size: 0x8, Type: ClassProperty)
    TArray<void*> RelevancyPhaseDataArray; // 0x0490 (Size: 0x10, Type: ArrayProperty)
    std::int32_t PhaseNum; // 0x04A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortAthenaMutator_FakeKillRelevancy, FakeKillControllerComponentClass) == 1160, "Offset mismatch for UFortAthenaMutator_FakeKillRelevancy::FakeKillControllerComponentClass");
static_assert(offsetof(UFortAthenaMutator_FakeKillRelevancy, RelevancyPhaseDataArray) == 1168, "Offset mismatch for UFortAthenaMutator_FakeKillRelevancy::RelevancyPhaseDataArray");
static_assert(offsetof(UFortAthenaMutator_FakeKillRelevancy, PhaseNum) == 1184, "Offset mismatch for UFortAthenaMutator_FakeKillRelevancy::PhaseNum");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_LoadGameFeature
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    FString GameFeatureToLoad; // 0x02E0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UFortAthenaMutator_LoadGameFeature, GameFeatureToLoad) == 736, "Offset mismatch for UFortAthenaMutator_LoadGameFeature::GameFeatureToLoad");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_RemoveGameFeatures
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TArray<void*> AllowedGameFeatures; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_RemoveGameFeatures, AllowedGameFeatures) == 736, "Offset mismatch for UFortAthenaMutator_RemoveGameFeatures::AllowedGameFeatures");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BindEmotes
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BindEmotes
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    TArray<void*> EmoteDataArray; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BindEmotes, EmoteDataArray) == 752, "Offset mismatch for UFortAthenaMutator_SE_BindEmotes::EmoteDataArray");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockDamageToPlayer
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockDamageToPlayer
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockDamageToPlayer, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockDamageToPlayer::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockEndGamePhase
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockEndGamePhase
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockEndGamePhase, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockEndGamePhase::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockFullScreenMap
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockFullScreenMap
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockFullScreenMap, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockFullScreenMap::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockGlider
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockGlider
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t bStartWithGliderDisabled; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCancelRedeploy; // 0x02F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableGlider; // 0x02F2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockGlider, bStartWithGliderDisabled) == 752, "Offset mismatch for UFortAthenaMutator_SE_BlockGlider::bStartWithGliderDisabled");
static_assert(offsetof(UFortAthenaMutator_SE_BlockGlider, bCancelRedeploy) == 753, "Offset mismatch for UFortAthenaMutator_SE_BlockGlider::bCancelRedeploy");
static_assert(offsetof(UFortAthenaMutator_SE_BlockGlider, bDisableGlider) == 754, "Offset mismatch for UFortAthenaMutator_SE_BlockGlider::bDisableGlider");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockHUD
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockHUD
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t HideUITags[0x1]; // 0x02F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockHUD, HideUITags) == 752, "Offset mismatch for UFortAthenaMutator_SE_BlockHUD::HideUITags");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockInventory
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockInventory
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockInventory, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockInventory::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockNativeActions
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockNativeActions
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t BlockedNativeActions[0x1]; // 0x02F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockNativeActions, BlockedNativeActions) == 752, "Offset mismatch for UFortAthenaMutator_SE_BlockNativeActions::BlockedNativeActions");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockReplayRecording
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockReplayRecording
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockReplayRecording, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockReplayRecording::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockScoring
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockScoring
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockScoring, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockScoring::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockSupplyDrop
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockSupplyDrop
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockSupplyDrop, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockSupplyDrop::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_BlockTeamIndicators
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_BlockTeamIndicators
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_BlockTeamIndicators, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_BlockTeamIndicators::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_HoldWinConditionForEvent
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_HoldWinConditionForEvent
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::int32_t MinRealPlayersAliveToHoldWin; // 0x02F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPauseSafeZoneWhileHoldingWin; // 0x02F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlsoPauseStormDamageWhileHoldingWin; // 0x02F5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRestartStormOnEventEnd; // 0x02F6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableKillFeed; // 0x02F7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableQuestMessaging; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableXPMessaging; // 0x02F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableAccolades; // 0x02FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x02FB
    std::uint8_t ExtraHideUITags[0x20]; // 0x0300 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSuppressNotificationsWhileActive; // 0x0320 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressEventFeedsWhileActive; // 0x0321 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressRiftAnomaliesWhileActive; // 0x0322 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, MinRealPlayersAliveToHoldWin) == 752, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::MinRealPlayersAliveToHoldWin");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bPauseSafeZoneWhileHoldingWin) == 756, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bPauseSafeZoneWhileHoldingWin");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bAlsoPauseStormDamageWhileHoldingWin) == 757, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bAlsoPauseStormDamageWhileHoldingWin");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bRestartStormOnEventEnd) == 758, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bRestartStormOnEventEnd");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bDisableKillFeed) == 759, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bDisableKillFeed");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bDisableQuestMessaging) == 760, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bDisableQuestMessaging");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bDisableXPMessaging) == 761, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bDisableXPMessaging");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bDisableAccolades) == 762, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bDisableAccolades");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, ExtraHideUITags) == 768, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::ExtraHideUITags");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bSuppressNotificationsWhileActive) == 800, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bSuppressNotificationsWhileActive");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bSuppressEventFeedsWhileActive) == 801, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bSuppressEventFeedsWhileActive");
static_assert(offsetof(UFortAthenaMutator_SE_HoldWinConditionForEvent, bSuppressRiftAnomaliesWhileActive) == 802, "Offset mismatch for UFortAthenaMutator_SE_HoldWinConditionForEvent::bSuppressRiftAnomaliesWhileActive");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_LockingOnFocalPoint
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_LockingOnFocalPoint
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_LockingOnFocalPoint, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_LockingOnFocalPoint::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_OverrideCharacterScale
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_SE_OverrideCharacterScale
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t DefaultCharacterScaleOverrideData[0x10]; // 0x02E0 (Size: 0x10, Type: StructProperty)
    TArray<void*> CharacterScaleOverrideDataPerCID; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExcludedCosmeticItemDefinitionsByHotfix[0x10]; // 0x0300 (Size: 0x10, Type: SetProperty)
    std::uint8_t bStartEnabled; // 0x0310 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_OverrideCharacterScale, DefaultCharacterScaleOverrideData) == 736, "Offset mismatch for UFortAthenaMutator_SE_OverrideCharacterScale::DefaultCharacterScaleOverrideData");
static_assert(offsetof(UFortAthenaMutator_SE_OverrideCharacterScale, CharacterScaleOverrideDataPerCID) == 752, "Offset mismatch for UFortAthenaMutator_SE_OverrideCharacterScale::CharacterScaleOverrideDataPerCID");
static_assert(offsetof(UFortAthenaMutator_SE_OverrideCharacterScale, ExcludedCosmeticItemDefinitionsByHotfix) == 768, "Offset mismatch for UFortAthenaMutator_SE_OverrideCharacterScale::ExcludedCosmeticItemDefinitionsByHotfix");
static_assert(offsetof(UFortAthenaMutator_SE_OverrideCharacterScale, bStartEnabled) == 784, "Offset mismatch for UFortAthenaMutator_SE_OverrideCharacterScale::bStartEnabled");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_OverrideTimeDilationData
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_SE_OverrideTimeDilationData
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    void* TimeDilationCurve; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TimeDilationDuration[0x1]; // 0x02E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_OverrideTimeDilationData, TimeDilationCurve) == 736, "Offset mismatch for UFortAthenaMutator_SE_OverrideTimeDilationData::TimeDilationCurve");
static_assert(offsetof(UFortAthenaMutator_SE_OverrideTimeDilationData, TimeDilationDuration) == 744, "Offset mismatch for UFortAthenaMutator_SE_OverrideTimeDilationData::TimeDilationDuration");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_Respawn
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_Respawn
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t bRespawnAllPlayers; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldCalculateRespawnData; // 0x02F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x02F2
    std::uint8_t RespawnLogicData[0x170]; // 0x02F8 (Size: 0x170, Type: StructProperty)
    std::uint8_t AllowedPlayers[0x1]; // 0x0468 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_Respawn, bRespawnAllPlayers) == 752, "Offset mismatch for UFortAthenaMutator_SE_Respawn::bRespawnAllPlayers");
static_assert(offsetof(UFortAthenaMutator_SE_Respawn, bShouldCalculateRespawnData) == 753, "Offset mismatch for UFortAthenaMutator_SE_Respawn::bShouldCalculateRespawnData");
static_assert(offsetof(UFortAthenaMutator_SE_Respawn, RespawnLogicData) == 760, "Offset mismatch for UFortAthenaMutator_SE_Respawn::RespawnLogicData");
static_assert(offsetof(UFortAthenaMutator_SE_Respawn, AllowedPlayers) == 1128, "Offset mismatch for UFortAthenaMutator_SE_Respawn::AllowedPlayers");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_SafeZone
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_SafeZone
{
public:
    std::uint8_t Pad_0000[0x2F1]; // 0x0000
    std::uint8_t bSetFinalLocationOnFirstActive; // 0x02F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x02F2
    std::uint8_t FinalLocation[0x10]; // 0x02F8 (Size: 0x10, Type: StructProperty)
    float DefaultAircraftOffsetFromMidLine; // 0x0308 (Size: 0x4, Type: FloatProperty)
    float MinDefaultMidlineAngle; // 0x030C (Size: 0x4, Type: FloatProperty)
    float MaxDefaultMidlineAngle; // 0x0310 (Size: 0x4, Type: FloatProperty)
    std::int32_t PauseSafeZoneIndex; // 0x0314 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_SafeZone, bSetFinalLocationOnFirstActive) == 753, "Offset mismatch for UFortAthenaMutator_SE_SafeZone::bSetFinalLocationOnFirstActive");
static_assert(offsetof(UFortAthenaMutator_SE_SafeZone, FinalLocation) == 760, "Offset mismatch for UFortAthenaMutator_SE_SafeZone::FinalLocation");
static_assert(offsetof(UFortAthenaMutator_SE_SafeZone, DefaultAircraftOffsetFromMidLine) == 776, "Offset mismatch for UFortAthenaMutator_SE_SafeZone::DefaultAircraftOffsetFromMidLine");
static_assert(offsetof(UFortAthenaMutator_SE_SafeZone, MinDefaultMidlineAngle) == 780, "Offset mismatch for UFortAthenaMutator_SE_SafeZone::MinDefaultMidlineAngle");
static_assert(offsetof(UFortAthenaMutator_SE_SafeZone, MaxDefaultMidlineAngle) == 784, "Offset mismatch for UFortAthenaMutator_SE_SafeZone::MaxDefaultMidlineAngle");
static_assert(offsetof(UFortAthenaMutator_SE_SafeZone, PauseSafeZoneIndex) == 788, "Offset mismatch for UFortAthenaMutator_SE_SafeZone::PauseSafeZoneIndex");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SE_SkipAircraft
// Kind: Class; super: FortAthenaMutator_SpecialEventBase
class UFortAthenaMutator_SE_SkipAircraft
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SE_SkipAircraft, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SE_SkipAircraft::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_SpecialEvent
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    FMulticastInlineDelegate TeleportAllPlayersFinished; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPawnLoaded; // 0x02F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInitController; // 0x0300 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResumeGame; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpecialClientEvent; // 0x0320 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHandleLogout; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientInitialLoadingFinished; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x68]; // 0x0350
    std::uint8_t bPlayersAreInvincible; // 0x03B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x27]; // 0x03B9
    std::int32_t MinimumScoreBumpForAutomadeGoal; // 0x03E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x03E4
    TArray<void*> ScoreBrackets; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnforceInfiniteSafeZonePhase; // 0x03F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x03F9
    std::uint8_t WarmupIslandPlayerStartTag[0x4]; // 0x03FC (Size: 0x4, Type: NameProperty)
    std::uint8_t bAllowInventoryOpen; // 0x0400 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0401
    std::uint8_t bAllowFullScreenMap[0x28]; // 0x0408 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldClearFrontEndMapMarkers; // 0x0430 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockTeamIndicators; // 0x0431 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x0432
    std::int32_t ForceDisplaySquadInfoDuringGamePhases; // 0x0434 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowSquadListLocalPlayerInSplitscreen; // 0x0438 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldHideHUDOnInit; // 0x0439 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x6]; // 0x043A
    std::uint8_t UIToHideDuringSpecialEvent[0x20]; // 0x0440 (Size: 0x20, Type: StructProperty)
    std::uint8_t UIToHideWhenInInfiniteWarmup[0x20]; // 0x0460 (Size: 0x20, Type: StructProperty)
    std::uint8_t ClientEventsThatUnhideHiddenWhileLoadingHUDElements[0x20]; // 0x0480 (Size: 0x20, Type: StructProperty)
    std::uint8_t bSkipPostGameScreens; // 0x04A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceGarbageCollectionAfterUnloadOnServer; // 0x04A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceGarbageCollectionAfterUnloadOnClient; // 0x04A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFullPurgeGC; // 0x04A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x4]; // 0x04A4
    void* EventAircraft; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EventAircraftInfo[0x48]; // 0x04B0 (Size: 0x48, Type: StructProperty)
    void* EventAircraftClass; // 0x04F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDisableHUD; // 0x0500 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GameResumed; // 0x0501 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0009[0x6]; // 0x0502
    std::uint8_t AdditionalViewpoint[0x18]; // 0x0508 (Size: 0x18, Type: StructProperty)
    std::uint8_t bParachutesDisabled; // 0x0520 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x7]; // 0x0521
    FString LastCSVEventName; // 0x0528 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCanStreamBuildingFoundationsIn; // 0x0538 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x0539
    std::int32_t AllPlayerTeleportedCount; // 0x053C (Size: 0x4, Type: IntProperty)
    std::uint8_t DelayPlayersFromReturningToLobbyData[0x10]; // 0x0540 (Size: 0x10, Type: StructProperty)
    std::uint8_t NamedWeightForContainerLootRoll[0x4]; // 0x0550 (Size: 0x4, Type: NameProperty)
    float WeightForContainerLootRoll; // 0x0554 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000C[0x30]; // 0x0558
    TArray<void*> SpecialEventEmoteData; // 0x0588 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BlockedNativeActions[0x20]; // 0x0598 (Size: 0x20, Type: StructProperty)
    std::uint8_t DesiredQuickbarItemTypeAfterRemove; // 0x05B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000D[0x7]; // 0x05B9
    void* SpecialEventsInputComponent; // 0x05C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLockingOnFocalPoint; // 0x05C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x7]; // 0x05C9
    TArray<void*> SpecialEventOverrideParts; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameplayEffectToApplyOnSwapToDefault[0x10]; // 0x05E0 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> OverridePartsArrayIndexMap; // 0x05F0 (Size: 0x10, Type: MapProperty)
    TArray<void*> GameplayEffectsToApplyOnLogin; // 0x0600 (Size: 0x10, Type: ArrayProperty)
    void* ControllerComponentClassOverride; // 0x0610 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bForceRespawningEnabled; // 0x0618 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x7]; // 0x0619
    TArray<void*> TerrainMapsToUnload; // 0x0620 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0010[0x10]; // 0x0630
    TArray<void*> UnhandledPlayerControllers; // 0x0640 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HLODActorsToHideNames; // 0x0650 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAllowInventoryServiceComponent; // 0x0660 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanToggleCursorModeInStasis; // 0x0661 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSpawnSafeZoneIndicator; // 0x0662 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0011[0x5]; // 0x0663
    std::uint8_t MannequinRecentlyRenderedCheckToleranceValue[0x28]; // 0x0668 (Size: 0x28, Type: StructProperty)
    TArray<void*> SpecialEventMannequins; // 0x0690 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorSpawnDelegateClasses; // 0x06A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAthenaMutator_SpecialEvent, TeleportAllPlayersFinished) == 736, "Offset mismatch for UFortAthenaMutator_SpecialEvent::TeleportAllPlayersFinished");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, OnPawnLoaded) == 752, "Offset mismatch for UFortAthenaMutator_SpecialEvent::OnPawnLoaded");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, OnInitController) == 768, "Offset mismatch for UFortAthenaMutator_SpecialEvent::OnInitController");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, OnResumeGame) == 784, "Offset mismatch for UFortAthenaMutator_SpecialEvent::OnResumeGame");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, OnSpecialClientEvent) == 800, "Offset mismatch for UFortAthenaMutator_SpecialEvent::OnSpecialClientEvent");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, OnHandleLogout) == 816, "Offset mismatch for UFortAthenaMutator_SpecialEvent::OnHandleLogout");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, OnClientInitialLoadingFinished) == 832, "Offset mismatch for UFortAthenaMutator_SpecialEvent::OnClientInitialLoadingFinished");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bPlayersAreInvincible) == 952, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bPlayersAreInvincible");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, MinimumScoreBumpForAutomadeGoal) == 992, "Offset mismatch for UFortAthenaMutator_SpecialEvent::MinimumScoreBumpForAutomadeGoal");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, ScoreBrackets) == 1000, "Offset mismatch for UFortAthenaMutator_SpecialEvent::ScoreBrackets");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bEnforceInfiniteSafeZonePhase) == 1016, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bEnforceInfiniteSafeZonePhase");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, WarmupIslandPlayerStartTag) == 1020, "Offset mismatch for UFortAthenaMutator_SpecialEvent::WarmupIslandPlayerStartTag");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bAllowInventoryOpen) == 1024, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bAllowInventoryOpen");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bAllowFullScreenMap) == 1032, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bAllowFullScreenMap");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bShouldClearFrontEndMapMarkers) == 1072, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bShouldClearFrontEndMapMarkers");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bBlockTeamIndicators) == 1073, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bBlockTeamIndicators");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, ForceDisplaySquadInfoDuringGamePhases) == 1076, "Offset mismatch for UFortAthenaMutator_SpecialEvent::ForceDisplaySquadInfoDuringGamePhases");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bAllowSquadListLocalPlayerInSplitscreen) == 1080, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bAllowSquadListLocalPlayerInSplitscreen");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bShouldHideHUDOnInit) == 1081, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bShouldHideHUDOnInit");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, UIToHideDuringSpecialEvent) == 1088, "Offset mismatch for UFortAthenaMutator_SpecialEvent::UIToHideDuringSpecialEvent");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, UIToHideWhenInInfiniteWarmup) == 1120, "Offset mismatch for UFortAthenaMutator_SpecialEvent::UIToHideWhenInInfiniteWarmup");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, ClientEventsThatUnhideHiddenWhileLoadingHUDElements) == 1152, "Offset mismatch for UFortAthenaMutator_SpecialEvent::ClientEventsThatUnhideHiddenWhileLoadingHUDElements");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bSkipPostGameScreens) == 1184, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bSkipPostGameScreens");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bForceGarbageCollectionAfterUnloadOnServer) == 1185, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bForceGarbageCollectionAfterUnloadOnServer");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bForceGarbageCollectionAfterUnloadOnClient) == 1186, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bForceGarbageCollectionAfterUnloadOnClient");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bFullPurgeGC) == 1187, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bFullPurgeGC");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, EventAircraft) == 1192, "Offset mismatch for UFortAthenaMutator_SpecialEvent::EventAircraft");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, EventAircraftInfo) == 1200, "Offset mismatch for UFortAthenaMutator_SpecialEvent::EventAircraftInfo");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, EventAircraftClass) == 1272, "Offset mismatch for UFortAthenaMutator_SpecialEvent::EventAircraftClass");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bDisableHUD) == 1280, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bDisableHUD");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, GameResumed) == 1281, "Offset mismatch for UFortAthenaMutator_SpecialEvent::GameResumed");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, AdditionalViewpoint) == 1288, "Offset mismatch for UFortAthenaMutator_SpecialEvent::AdditionalViewpoint");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bParachutesDisabled) == 1312, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bParachutesDisabled");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, LastCSVEventName) == 1320, "Offset mismatch for UFortAthenaMutator_SpecialEvent::LastCSVEventName");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bCanStreamBuildingFoundationsIn) == 1336, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bCanStreamBuildingFoundationsIn");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, AllPlayerTeleportedCount) == 1340, "Offset mismatch for UFortAthenaMutator_SpecialEvent::AllPlayerTeleportedCount");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, DelayPlayersFromReturningToLobbyData) == 1344, "Offset mismatch for UFortAthenaMutator_SpecialEvent::DelayPlayersFromReturningToLobbyData");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, NamedWeightForContainerLootRoll) == 1360, "Offset mismatch for UFortAthenaMutator_SpecialEvent::NamedWeightForContainerLootRoll");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, WeightForContainerLootRoll) == 1364, "Offset mismatch for UFortAthenaMutator_SpecialEvent::WeightForContainerLootRoll");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, SpecialEventEmoteData) == 1416, "Offset mismatch for UFortAthenaMutator_SpecialEvent::SpecialEventEmoteData");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, BlockedNativeActions) == 1432, "Offset mismatch for UFortAthenaMutator_SpecialEvent::BlockedNativeActions");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, DesiredQuickbarItemTypeAfterRemove) == 1464, "Offset mismatch for UFortAthenaMutator_SpecialEvent::DesiredQuickbarItemTypeAfterRemove");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, SpecialEventsInputComponent) == 1472, "Offset mismatch for UFortAthenaMutator_SpecialEvent::SpecialEventsInputComponent");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bLockingOnFocalPoint) == 1480, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bLockingOnFocalPoint");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, SpecialEventOverrideParts) == 1488, "Offset mismatch for UFortAthenaMutator_SpecialEvent::SpecialEventOverrideParts");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, GameplayEffectToApplyOnSwapToDefault) == 1504, "Offset mismatch for UFortAthenaMutator_SpecialEvent::GameplayEffectToApplyOnSwapToDefault");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, OverridePartsArrayIndexMap) == 1520, "Offset mismatch for UFortAthenaMutator_SpecialEvent::OverridePartsArrayIndexMap");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, GameplayEffectsToApplyOnLogin) == 1536, "Offset mismatch for UFortAthenaMutator_SpecialEvent::GameplayEffectsToApplyOnLogin");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, ControllerComponentClassOverride) == 1552, "Offset mismatch for UFortAthenaMutator_SpecialEvent::ControllerComponentClassOverride");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bForceRespawningEnabled) == 1560, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bForceRespawningEnabled");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, TerrainMapsToUnload) == 1568, "Offset mismatch for UFortAthenaMutator_SpecialEvent::TerrainMapsToUnload");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, UnhandledPlayerControllers) == 1600, "Offset mismatch for UFortAthenaMutator_SpecialEvent::UnhandledPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, HLODActorsToHideNames) == 1616, "Offset mismatch for UFortAthenaMutator_SpecialEvent::HLODActorsToHideNames");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bAllowInventoryServiceComponent) == 1632, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bAllowInventoryServiceComponent");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bCanToggleCursorModeInStasis) == 1633, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bCanToggleCursorModeInStasis");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, bAllowSpawnSafeZoneIndicator) == 1634, "Offset mismatch for UFortAthenaMutator_SpecialEvent::bAllowSpawnSafeZoneIndicator");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, MannequinRecentlyRenderedCheckToleranceValue) == 1640, "Offset mismatch for UFortAthenaMutator_SpecialEvent::MannequinRecentlyRenderedCheckToleranceValue");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, SpecialEventMannequins) == 1680, "Offset mismatch for UFortAthenaMutator_SpecialEvent::SpecialEventMannequins");
static_assert(offsetof(UFortAthenaMutator_SpecialEvent, ActorSpawnDelegateClasses) == 1696, "Offset mismatch for UFortAthenaMutator_SpecialEvent::ActorSpawnDelegateClasses");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventBase
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_SpecialEventBase
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t bDestroyInBeginPlay; // 0x02E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SpecialEventBase, bDestroyInBeginPlay) == 736, "Offset mismatch for UFortAthenaMutator_SpecialEventBase::bDestroyInBeginPlay");

// /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_SpecialEventTODM
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    TArray<void*> PhaseDataArray; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
    void* SpecialEventScript; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PhaseIndexInProgress; // 0x02F8 (Size: 0x4, Type: IntProperty)
    std::int32_t SubphaseIndexInProgress; // 0x02FC (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0300
    TScriptInterface<void> SpawnedTODM; // 0x0308 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t bDebug; // 0x0318 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_SpecialEventTODM, PhaseDataArray) == 736, "Offset mismatch for UFortAthenaMutator_SpecialEventTODM::PhaseDataArray");
static_assert(offsetof(UFortAthenaMutator_SpecialEventTODM, SpecialEventScript) == 752, "Offset mismatch for UFortAthenaMutator_SpecialEventTODM::SpecialEventScript");
static_assert(offsetof(UFortAthenaMutator_SpecialEventTODM, PhaseIndexInProgress) == 760, "Offset mismatch for UFortAthenaMutator_SpecialEventTODM::PhaseIndexInProgress");
static_assert(offsetof(UFortAthenaMutator_SpecialEventTODM, SubphaseIndexInProgress) == 764, "Offset mismatch for UFortAthenaMutator_SpecialEventTODM::SubphaseIndexInProgress");
static_assert(offsetof(UFortAthenaMutator_SpecialEventTODM, SpawnedTODM) == 776, "Offset mismatch for UFortAthenaMutator_SpecialEventTODM::SpawnedTODM");
static_assert(offsetof(UFortAthenaMutator_SpecialEventTODM, bDebug) == 792, "Offset mismatch for UFortAthenaMutator_SpecialEventTODM::bDebug");

// /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
// Kind: Class; super: FortCameraMode_FocalPoint
class UFortCameraMode_SpecialEventFocalPoint
{
public:
    std::uint8_t Pad_0000[0x2090]; // 0x0000
    float OverrideTransitionTime; // 0x2090 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCameraMode_SpecialEventFocalPoint, OverrideTransitionTime) == 8336, "Offset mismatch for UFortCameraMode_SpecialEventFocalPoint::OverrideTransitionTime");

// /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator
// Kind: Class; super: FortAthenaMutator
class UFortCharacterMovementMutator
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    void* MovementMutatorComponentClass; // 0x02E0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortCharacterMovementMutator, MovementMutatorComponentClass) == 736, "Offset mismatch for UFortCharacterMovementMutator::MovementMutatorComponentClass");

// /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
// Kind: Class; super: ActorComponent
class UFortCharacterMovementMutatorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* CharacterOwner; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* MovementComponent; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* CDOMovementComponent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00D8
    std::uint8_t BuffetBubblesMoveToBoxSpeed[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesRelativeVelocityInterpSpeed[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesLocationInterpSpeed[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesRotationInterpSpeed[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesMinRelativeX[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesMaxRelativeX[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesMinRelativeY[0x28]; // 0x01D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesMaxRelativeY[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesMinRelativeZ[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesMaxRelativeZ[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesRotationRate[0x18]; // 0x0278 (Size: 0x18, Type: StructProperty)
    std::uint8_t BuffetBubblesMaxAcceleration[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesMaxRelativeSpeed[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesRelativeDeceleration[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetBubblesSphereRadius[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    void* BuffetBubblesFollowActor; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BuffetBubblesInitialFollowBoxOffsetPercent[0xF8]; // 0x0338 (Size: 0xF8, Type: StructProperty)
    std::uint8_t BuffetBubblesReplicatedData[0x300]; // 0x0430 (Size: 0x300, Type: StructProperty)
    std::uint8_t BuffetBubblesIntroSpeed[0x30]; // 0x0730 (Size: 0x30, Type: StructProperty)
    std::uint8_t BuffetBubblesIntroTargetTransform[0x60]; // 0x0760 (Size: 0x60, Type: StructProperty)
    std::uint8_t BuffetFlyingMaxPitchDegrees[0x28]; // 0x07C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetFlyingMaxSpeed[0x28]; // 0x07E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetFlyingVelocityDirectionInterpSpeed[0x28]; // 0x0810 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetFlyingRotationRate[0x18]; // 0x0838 (Size: 0x18, Type: StructProperty)
    float BuffetFlyingMaxSpeedOverride; // 0x0850 (Size: 0x4, Type: FloatProperty)
    float BuffetFlyingMaxSpeedInterpSpeed; // 0x0854 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0858
    float BuffetFlyingVelocityDirectionInterpSpeedOverride; // 0x085C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BuffetFlyingRicochetSphereSize[0x28]; // 0x0860 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetFlyingRicochetRotationDuration[0x28]; // 0x0888 (Size: 0x28, Type: StructProperty)
    std::uint8_t BuffetFlyingRicochetControlRotationInterpSpeed[0x70]; // 0x08B0 (Size: 0x70, Type: StructProperty)
    std::uint8_t BuffetFlyingRicochetReplicatedData[0x1]; // 0x0920 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCharacterMovementMutatorComponent, CharacterOwner) == 192, "Offset mismatch for UFortCharacterMovementMutatorComponent::CharacterOwner");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, MovementComponent) == 200, "Offset mismatch for UFortCharacterMovementMutatorComponent::MovementComponent");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, CDOMovementComponent) == 208, "Offset mismatch for UFortCharacterMovementMutatorComponent::CDOMovementComponent");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMoveToBoxSpeed) == 232, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMoveToBoxSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRelativeVelocityInterpSpeed) == 272, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesRelativeVelocityInterpSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesLocationInterpSpeed) == 312, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesLocationInterpSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRotationInterpSpeed) == 352, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesRotationInterpSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMinRelativeX) == 392, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMinRelativeX");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeX) == 432, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeX");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMinRelativeY) == 472, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMinRelativeY");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeY) == 512, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeY");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMinRelativeZ) == 552, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMinRelativeZ");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeZ) == 592, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeZ");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRotationRate) == 632, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesRotationRate");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxAcceleration) == 656, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMaxAcceleration");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesMaxRelativeSpeed) == 696, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesMaxRelativeSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesRelativeDeceleration) == 736, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesRelativeDeceleration");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesSphereRadius) == 776, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesSphereRadius");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesFollowActor) == 816, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesFollowActor");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesInitialFollowBoxOffsetPercent) == 824, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesInitialFollowBoxOffsetPercent");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesReplicatedData) == 1072, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesReplicatedData");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesIntroSpeed) == 1840, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesIntroSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetBubblesIntroTargetTransform) == 1888, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetBubblesIntroTargetTransform");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxPitchDegrees) == 1984, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingMaxPitchDegrees");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeed) == 2024, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingMaxSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingVelocityDirectionInterpSpeed) == 2064, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingVelocityDirectionInterpSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRotationRate) == 2104, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingRotationRate");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeedOverride) == 2128, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingMaxSpeedOverride");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingMaxSpeedInterpSpeed) == 2132, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingMaxSpeedInterpSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingVelocityDirectionInterpSpeedOverride) == 2140, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingVelocityDirectionInterpSpeedOverride");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetSphereSize) == 2144, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetSphereSize");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetRotationDuration) == 2184, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetRotationDuration");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetControlRotationInterpSpeed) == 2224, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetControlRotationInterpSpeed");
static_assert(offsetof(UFortCharacterMovementMutatorComponent, BuffetFlyingRicochetReplicatedData) == 2336, "Offset mismatch for UFortCharacterMovementMutatorComponent::BuffetFlyingRicochetReplicatedData");

// /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
// Kind: Class; super: FortCheatManager_Coupled
class UFortCheatManager_DestroyActorsAndComponents
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TargetedObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* OwningController; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCheatManager_DestroyActorsAndComponents, TargetedObject) == 40, "Offset mismatch for UFortCheatManager_DestroyActorsAndComponents::TargetedObject");
static_assert(offsetof(UFortCheatManager_DestroyActorsAndComponents, OwningController) == 48, "Offset mismatch for UFortCheatManager_DestroyActorsAndComponents::OwningController");

// /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
// Kind: Class; super: FortCheatManager_Coupled
class UFortCheatManager_FakeKillRelevancy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TargetedObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* OwningController; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCheatManager_FakeKillRelevancy, TargetedObject) == 40, "Offset mismatch for UFortCheatManager_FakeKillRelevancy::TargetedObject");
static_assert(offsetof(UFortCheatManager_FakeKillRelevancy, OwningController) == 48, "Offset mismatch for UFortCheatManager_FakeKillRelevancy::OwningController");

// /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
// Kind: Class; super: FortCheatManager_Coupled
class UFortCheatManager_SpecialEvent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TargetedObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* OwningController; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCheatManager_SpecialEvent, TargetedObject) == 40, "Offset mismatch for UFortCheatManager_SpecialEvent::TargetedObject");
static_assert(offsetof(UFortCheatManager_SpecialEvent, OwningController) == 48, "Offset mismatch for UFortCheatManager_SpecialEvent::OwningController");

// /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEventTODM
// Kind: Class; super: FortCheatManager_Coupled
class UFortCheatManager_SpecialEventTODM
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* TargetedObject; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* OwningController; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCheatManager_SpecialEventTODM, TargetedObject) == 40, "Offset mismatch for UFortCheatManager_SpecialEventTODM::TargetedObject");
static_assert(offsetof(UFortCheatManager_SpecialEventTODM, OwningController) == 48, "Offset mismatch for UFortCheatManager_SpecialEventTODM::OwningController");

// /Script/SpecialEventGameplayRuntime.FortControllerComponent_DelayReturnToMainMenu
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_DelayReturnToMainMenu
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bAutoDelayReturnToMainMenu; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowMultipleReturnToMainMenuDelays; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00CA
    float MinDelay; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float MaxDelay; // 0x00D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortControllerComponent_DelayReturnToMainMenu, bAutoDelayReturnToMainMenu) == 200, "Offset mismatch for UFortControllerComponent_DelayReturnToMainMenu::bAutoDelayReturnToMainMenu");
static_assert(offsetof(UFortControllerComponent_DelayReturnToMainMenu, bAllowMultipleReturnToMainMenuDelays) == 201, "Offset mismatch for UFortControllerComponent_DelayReturnToMainMenu::bAllowMultipleReturnToMainMenuDelays");
static_assert(offsetof(UFortControllerComponent_DelayReturnToMainMenu, MinDelay) == 204, "Offset mismatch for UFortControllerComponent_DelayReturnToMainMenu::MinDelay");
static_assert(offsetof(UFortControllerComponent_DelayReturnToMainMenu, MaxDelay) == 208, "Offset mismatch for UFortControllerComponent_DelayReturnToMainMenu::MaxDelay");

// /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_FakeKillRelevancy
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t PlayerDataArray[0x60]; // 0x00C8 (Size: 0x60, Type: StructProperty)
    TMap<void*, void*> ClientPlayerStateKillStepMap; // 0x0128 (Size: 0x10, Type: MapProperty)
    std::uint8_t ResetCounter; // 0x0138 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0139
    TArray<void*> DebugSupergroupPlayerStates; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, PlayerDataArray) == 200, "Offset mismatch for UFortControllerComponent_FakeKillRelevancy::PlayerDataArray");
static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, ClientPlayerStateKillStepMap) == 296, "Offset mismatch for UFortControllerComponent_FakeKillRelevancy::ClientPlayerStateKillStepMap");
static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, ResetCounter) == 312, "Offset mismatch for UFortControllerComponent_FakeKillRelevancy::ResetCounter");
static_assert(offsetof(UFortControllerComponent_FakeKillRelevancy, DebugSupergroupPlayerStates) == 320, "Offset mismatch for UFortControllerComponent_FakeKillRelevancy::DebugSupergroupPlayerStates");

// /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_GameplayCinematic
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    FMulticastInlineDelegate BP_OnStartGameplayOutro; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnGameplayIntroFinished; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsReadyForGameplay; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortControllerComponent_GameplayCinematic, BP_OnStartGameplayOutro) == 248, "Offset mismatch for UFortControllerComponent_GameplayCinematic::BP_OnStartGameplayOutro");
static_assert(offsetof(UFortControllerComponent_GameplayCinematic, BP_OnGameplayIntroFinished) == 264, "Offset mismatch for UFortControllerComponent_GameplayCinematic::BP_OnGameplayIntroFinished");
static_assert(offsetof(UFortControllerComponent_GameplayCinematic, bIsReadyForGameplay) == 280, "Offset mismatch for UFortControllerComponent_GameplayCinematic::bIsReadyForGameplay");

// /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_SpecialEvent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bForceBuildModeInputComponentToNotConsumeInputs; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C9
    TWeakObjectPtr<void> SpecialEventMutator; // 0x00CC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_SpecialEvent, bForceBuildModeInputComponentToNotConsumeInputs) == 200, "Offset mismatch for UFortControllerComponent_SpecialEvent::bForceBuildModeInputComponentToNotConsumeInputs");
static_assert(offsetof(UFortControllerComponent_SpecialEvent, SpecialEventMutator) == 204, "Offset mismatch for UFortControllerComponent_SpecialEvent::SpecialEventMutator");

// /Script/SpecialEventGameplayRuntime.FortCustomTickComponent
// Kind: Class; super: ActorComponent
class UFortCustomTickComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Condition; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    std::uint8_t AuthorityQualitySettingsTag[0x4]; // 0x00C4 (Size: 0x4, Type: StructProperty)
    std::uint8_t DefaultClientQualitySettingsTag[0x8]; // 0x00C8 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> ClientPlatformQualitySettingsTagMap; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> QualitySettingsMap; // 0x00E0 (Size: 0x10, Type: MapProperty)
    float WasRecentlyRenderedTolerance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00F4
    FMulticastInlineDelegate OnCustomTick; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortCustomTickComponent, Condition) == 192, "Offset mismatch for UFortCustomTickComponent::Condition");
static_assert(offsetof(UFortCustomTickComponent, AuthorityQualitySettingsTag) == 196, "Offset mismatch for UFortCustomTickComponent::AuthorityQualitySettingsTag");
static_assert(offsetof(UFortCustomTickComponent, DefaultClientQualitySettingsTag) == 200, "Offset mismatch for UFortCustomTickComponent::DefaultClientQualitySettingsTag");
static_assert(offsetof(UFortCustomTickComponent, ClientPlatformQualitySettingsTagMap) == 208, "Offset mismatch for UFortCustomTickComponent::ClientPlatformQualitySettingsTagMap");
static_assert(offsetof(UFortCustomTickComponent, QualitySettingsMap) == 224, "Offset mismatch for UFortCustomTickComponent::QualitySettingsMap");
static_assert(offsetof(UFortCustomTickComponent, WasRecentlyRenderedTolerance) == 240, "Offset mismatch for UFortCustomTickComponent::WasRecentlyRenderedTolerance");
static_assert(offsetof(UFortCustomTickComponent, OnCustomTick) == 248, "Offset mismatch for UFortCustomTickComponent::OnCustomTick");

// /Script/SpecialEventGameplayRuntime.FortGameplayAbility_VortexOverride
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_VortexOverride
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t bOverrideParachuteParams; // 0x0B20 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B21
    std::uint8_t VortexParachuteControlParamsOverride[0x140]; // 0x0B28 (Size: 0x140, Type: StructProperty)
    std::uint8_t bOverridePassiveSkyDivingParams; // 0x0C68 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0C69
    std::uint8_t VortexSkydivingControlParamsPassive[0x140]; // 0x0C70 (Size: 0x140, Type: StructProperty)
    std::uint8_t bOverrideActiveSkyDivingParams; // 0x0DB0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0DB1
    std::uint8_t VortexSkydivingControlParamsActive[0x140]; // 0x0DB8 (Size: 0x140, Type: StructProperty)
    std::uint8_t bOverrideActiveSkyDivingUpwardParams; // 0x0EF8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0EF9
    std::uint8_t VortexSkydivingControlParamsActiveUpward[0x1]; // 0x0F00 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_VortexOverride, bOverrideParachuteParams) == 2848, "Offset mismatch for UFortGameplayAbility_VortexOverride::bOverrideParachuteParams");
static_assert(offsetof(UFortGameplayAbility_VortexOverride, VortexParachuteControlParamsOverride) == 2856, "Offset mismatch for UFortGameplayAbility_VortexOverride::VortexParachuteControlParamsOverride");
static_assert(offsetof(UFortGameplayAbility_VortexOverride, bOverridePassiveSkyDivingParams) == 3176, "Offset mismatch for UFortGameplayAbility_VortexOverride::bOverridePassiveSkyDivingParams");
static_assert(offsetof(UFortGameplayAbility_VortexOverride, VortexSkydivingControlParamsPassive) == 3184, "Offset mismatch for UFortGameplayAbility_VortexOverride::VortexSkydivingControlParamsPassive");
static_assert(offsetof(UFortGameplayAbility_VortexOverride, bOverrideActiveSkyDivingParams) == 3504, "Offset mismatch for UFortGameplayAbility_VortexOverride::bOverrideActiveSkyDivingParams");
static_assert(offsetof(UFortGameplayAbility_VortexOverride, VortexSkydivingControlParamsActive) == 3512, "Offset mismatch for UFortGameplayAbility_VortexOverride::VortexSkydivingControlParamsActive");
static_assert(offsetof(UFortGameplayAbility_VortexOverride, bOverrideActiveSkyDivingUpwardParams) == 3832, "Offset mismatch for UFortGameplayAbility_VortexOverride::bOverrideActiveSkyDivingUpwardParams");
static_assert(offsetof(UFortGameplayAbility_VortexOverride, VortexSkydivingControlParamsActiveUpward) == 3840, "Offset mismatch for UFortGameplayAbility_VortexOverride::VortexSkydivingControlParamsActiveUpward");

// /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
// Kind: Class; super: FortActorSpawner
class UFortSpecialRelevancyActorSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ActorClassToSpawn[0x20]; // 0x0270 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SpawnerAuthority; // 0x0290 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDestroyAfterSpawn; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bSpawnOnBeginPlay (shared storage)
};

static_assert(offsetof(UFortSpecialRelevancyActorSpawner, ActorClassToSpawn) == 624, "Offset mismatch for UFortSpecialRelevancyActorSpawner::ActorClassToSpawn");
static_assert(offsetof(UFortSpecialRelevancyActorSpawner, SpawnerAuthority) == 656, "Offset mismatch for UFortSpecialRelevancyActorSpawner::SpawnerAuthority");
static_assert(offsetof(UFortSpecialRelevancyActorSpawner, bDestroyAfterSpawn) == 657, "Offset mismatch for UFortSpecialRelevancyActorSpawner::bDestroyAfterSpawn");

// /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyAttachComponent
// Kind: Class; super: ActorComponent
class UFortSpecialRelevancyAttachComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAttached; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDetached; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FName AttachComponentTag; // 0x00E0 (Size: 0x8, Type: NameProperty)
    TArray<void*> SocketNames; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* AttachComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSpecialRelevancyAttachComponent, OnAttached) == 192, "Offset mismatch for UFortSpecialRelevancyAttachComponent::OnAttached");
static_assert(offsetof(UFortSpecialRelevancyAttachComponent, OnDetached) == 208, "Offset mismatch for UFortSpecialRelevancyAttachComponent::OnDetached");
static_assert(offsetof(UFortSpecialRelevancyAttachComponent, AttachComponentTag) == 224, "Offset mismatch for UFortSpecialRelevancyAttachComponent::AttachComponentTag");
static_assert(offsetof(UFortSpecialRelevancyAttachComponent, SocketNames) == 232, "Offset mismatch for UFortSpecialRelevancyAttachComponent::SocketNames");
static_assert(offsetof(UFortSpecialRelevancyAttachComponent, AttachComponent) == 248, "Offset mismatch for UFortSpecialRelevancyAttachComponent::AttachComponent");

// /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyPawnAttachComponent
// Kind: Class; super: FortSpecialRelevancyAttachComponent
class UFortSpecialRelevancyPawnAttachComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAttached; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDetached; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FName AttachComponentTag; // 0x00E0 (Size: 0x8, Type: NameProperty)
    TArray<void*> SocketNames; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    void* AttachComponent; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSpecialRelevancyPawnAttachComponent, OnAttached) == 192, "Offset mismatch for UFortSpecialRelevancyPawnAttachComponent::OnAttached");
static_assert(offsetof(UFortSpecialRelevancyPawnAttachComponent, OnDetached) == 208, "Offset mismatch for UFortSpecialRelevancyPawnAttachComponent::OnDetached");
static_assert(offsetof(UFortSpecialRelevancyPawnAttachComponent, AttachComponentTag) == 224, "Offset mismatch for UFortSpecialRelevancyPawnAttachComponent::AttachComponentTag");
static_assert(offsetof(UFortSpecialRelevancyPawnAttachComponent, SocketNames) == 232, "Offset mismatch for UFortSpecialRelevancyPawnAttachComponent::SocketNames");
static_assert(offsetof(UFortSpecialRelevancyPawnAttachComponent, AttachComponent) == 248, "Offset mismatch for UFortSpecialRelevancyPawnAttachComponent::AttachComponent");

// /Script/SpecialEventGameplayRuntime.PreEventManager
// Kind: Class; super: Actor
class UPreEventManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t PreEventScope[0x78]; // 0x0270 (Size: 0x78, Type: StructProperty)
    TArray<void*> Phases; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShowBurnInCurve[0x28]; // 0x02F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialPhaseTag[0x4]; // 0x0320 (Size: 0x4, Type: StructProperty)
    std::uint8_t InitialPhaseTagOverride[0xC]; // 0x0324 (Size: 0xC, Type: StructProperty)
    std::int32_t CurrentPhaseIndex; // 0x0330 (Size: 0x4, Type: IntProperty)
    std::uint8_t bWaitForInitialStateFromMesh; // 0x0334 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipPreEventScopeSequencePastInitialPhase; // 0x0335 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipPreEventScopeSequenceAfterEventStarted; // 0x0336 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0337
    std::uint8_t SkipPreEventScopeSequenceForPhaseTags[0xA0]; // 0x0338 (Size: 0xA0, Type: StructProperty)
    void* SpecialEventScript; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPreEventManager, PreEventScope) == 624, "Offset mismatch for UPreEventManager::PreEventScope");
static_assert(offsetof(UPreEventManager, Phases) == 744, "Offset mismatch for UPreEventManager::Phases");
static_assert(offsetof(UPreEventManager, ShowBurnInCurve) == 760, "Offset mismatch for UPreEventManager::ShowBurnInCurve");
static_assert(offsetof(UPreEventManager, InitialPhaseTag) == 800, "Offset mismatch for UPreEventManager::InitialPhaseTag");
static_assert(offsetof(UPreEventManager, InitialPhaseTagOverride) == 804, "Offset mismatch for UPreEventManager::InitialPhaseTagOverride");
static_assert(offsetof(UPreEventManager, CurrentPhaseIndex) == 816, "Offset mismatch for UPreEventManager::CurrentPhaseIndex");
static_assert(offsetof(UPreEventManager, bWaitForInitialStateFromMesh) == 820, "Offset mismatch for UPreEventManager::bWaitForInitialStateFromMesh");
static_assert(offsetof(UPreEventManager, bSkipPreEventScopeSequencePastInitialPhase) == 821, "Offset mismatch for UPreEventManager::bSkipPreEventScopeSequencePastInitialPhase");
static_assert(offsetof(UPreEventManager, bSkipPreEventScopeSequenceAfterEventStarted) == 822, "Offset mismatch for UPreEventManager::bSkipPreEventScopeSequenceAfterEventStarted");
static_assert(offsetof(UPreEventManager, SkipPreEventScopeSequenceForPhaseTags) == 824, "Offset mismatch for UPreEventManager::SkipPreEventScopeSequenceForPhaseTags");
static_assert(offsetof(UPreEventManager, SpecialEventScript) == 984, "Offset mismatch for UPreEventManager::SpecialEventScript");

// /Script/SpecialEventGameplayRuntime.SpecialEventAnimInstance_BGAEnemyGuard
// Kind: Class; super: AnimInstance
class USpecialEventAnimInstance_BGAEnemyGuard
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bAttack; // 0x0260 (Size: 0x1, Type: BoolProperty)
    // 0x0260 BoolProperty bCrouch (shared storage)
    // 0x0260 BoolProperty bIsMoving (shared storage)
    // 0x0260 BoolProperty bJogging (shared storage)
    // 0x0260 BoolProperty bRunNativeUpdateAnimation (shared storage)
    // 0x0260 BoolProperty bShouldWalkRightFootForward (shared storage)
    // 0x0260 BoolProperty bTurnLeft (shared storage)
    // 0x0260 BoolProperty bWantsToTurn (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0261
    float DeltaTimeValue; // 0x0264 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviousUpdateLocation[0x18]; // 0x0268 (Size: 0x18, Type: StructProperty)
    std::uint8_t Velocity[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    float MinimumSpeedForMovingSquared; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float TargetTurnRootYaw; // 0x029C (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceAngleErrorTolerance; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceRotationSpeed; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceEnableAimYawThreshold; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float WantsToTurnAimYawInterpSpeed; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float MinAimYawInterpSpeed; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float MaxAimYawInterpSpeed; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float MinAimPitchInterpSpeed; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float MaxAimPitchInterpSpeed; // 0x02BC (Size: 0x4, Type: FloatProperty)
    float MinRootYawInterpSpeed; // 0x02C0 (Size: 0x4, Type: FloatProperty)
    float MaxRootYawInterpSpeed; // 0x02C4 (Size: 0x4, Type: FloatProperty)
    float WalkRightFootForwardDirectionBwdMin; // 0x02C8 (Size: 0x4, Type: FloatProperty)
    float WalkRightFootForwardDirectionBwdMax; // 0x02CC (Size: 0x4, Type: FloatProperty)
    float WalkRightFootForwardDirectionFwdMin; // 0x02D0 (Size: 0x4, Type: FloatProperty)
    float WalkRightFootForwardDirectionFwdMax; // 0x02D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AnimInfo[0x18]; // 0x02D8 (Size: 0x18, Type: StructProperty)
    FName ZeroOutPitchWeightCurveName; // 0x02F0 (Size: 0x8, Type: NameProperty)
    std::uint8_t MannequinAimStartLocationOffset[0x18]; // 0x02F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MannequinRotationOffset[0x18]; // 0x0310 (Size: 0x18, Type: StructProperty)
    std::uint8_t RootSocketName[0x4]; // 0x0328 (Size: 0x4, Type: NameProperty)
    float TurnInPlaceYawMagnitude; // 0x032C (Size: 0x4, Type: FloatProperty)
    float AuthoredWalkSpeed; // 0x0330 (Size: 0x4, Type: FloatProperty)
    float AuthoredJogSpeed; // 0x0334 (Size: 0x4, Type: FloatProperty)
    float MovementDirection; // 0x0338 (Size: 0x4, Type: FloatProperty)
    float SpeedAdjustedPlayRate; // 0x033C (Size: 0x4, Type: FloatProperty)
    float Speed2D; // 0x0340 (Size: 0x4, Type: FloatProperty)
    float SpeedAdjustedPlayRateInterpSpeed; // 0x0344 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CrouchStateActorTag[0x4]; // 0x0348 (Size: 0x4, Type: NameProperty)
    FName AttackStateActorTag; // 0x034C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, bAttack) == 608, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::bAttack");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, DeltaTimeValue) == 612, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::DeltaTimeValue");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, PreviousUpdateLocation) == 616, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::PreviousUpdateLocation");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, Velocity) == 640, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::Velocity");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MinimumSpeedForMovingSquared) == 664, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MinimumSpeedForMovingSquared");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, TargetTurnRootYaw) == 668, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::TargetTurnRootYaw");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, TurnInPlaceAngleErrorTolerance) == 672, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::TurnInPlaceAngleErrorTolerance");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, TurnInPlaceRotationSpeed) == 676, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::TurnInPlaceRotationSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, TurnInPlaceEnableAimYawThreshold) == 680, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::TurnInPlaceEnableAimYawThreshold");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, WantsToTurnAimYawInterpSpeed) == 684, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::WantsToTurnAimYawInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MinAimYawInterpSpeed) == 688, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MinAimYawInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MaxAimYawInterpSpeed) == 692, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MaxAimYawInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MinAimPitchInterpSpeed) == 696, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MinAimPitchInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MaxAimPitchInterpSpeed) == 700, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MaxAimPitchInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MinRootYawInterpSpeed) == 704, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MinRootYawInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MaxRootYawInterpSpeed) == 708, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MaxRootYawInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, WalkRightFootForwardDirectionBwdMin) == 712, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::WalkRightFootForwardDirectionBwdMin");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, WalkRightFootForwardDirectionBwdMax) == 716, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::WalkRightFootForwardDirectionBwdMax");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, WalkRightFootForwardDirectionFwdMin) == 720, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::WalkRightFootForwardDirectionFwdMin");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, WalkRightFootForwardDirectionFwdMax) == 724, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::WalkRightFootForwardDirectionFwdMax");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, AnimInfo) == 728, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::AnimInfo");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, ZeroOutPitchWeightCurveName) == 752, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::ZeroOutPitchWeightCurveName");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MannequinAimStartLocationOffset) == 760, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MannequinAimStartLocationOffset");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MannequinRotationOffset) == 784, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MannequinRotationOffset");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, RootSocketName) == 808, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::RootSocketName");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, TurnInPlaceYawMagnitude) == 812, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::TurnInPlaceYawMagnitude");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, AuthoredWalkSpeed) == 816, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::AuthoredWalkSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, AuthoredJogSpeed) == 820, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::AuthoredJogSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, MovementDirection) == 824, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::MovementDirection");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, SpeedAdjustedPlayRate) == 828, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::SpeedAdjustedPlayRate");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, Speed2D) == 832, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::Speed2D");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, SpeedAdjustedPlayRateInterpSpeed) == 836, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::SpeedAdjustedPlayRateInterpSpeed");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, CrouchStateActorTag) == 840, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::CrouchStateActorTag");
static_assert(offsetof(USpecialEventAnimInstance_BGAEnemyGuard, AttackStateActorTag) == 844, "Offset mismatch for USpecialEventAnimInstance_BGAEnemyGuard::AttackStateActorTag");

// /Script/SpecialEventGameplayRuntime.SpecialEventAnimInstance_PlayerMannequin
// Kind: Class; super: FortBaseAnimInstance
class USpecialEventAnimInstance_PlayerMannequin
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> AnimInputEventList; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> BoneSets; // 0x0280 (Size: 0x10, Type: MapProperty)
    TArray<void*> AnimPropertyGameplayTagBindings; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimPropertyCurveFloatBindings; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimPropertyCurveCompareBindings; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnGameplayTagNotifyBegin; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGameplayTagNotifyEnd; // 0x02D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x38]; // 0x02E0
    float LastUpdateTimestamp; // 0x0318 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, AnimInputEventList) == 624, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::AnimInputEventList");
static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, BoneSets) == 640, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::BoneSets");
static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, AnimPropertyGameplayTagBindings) == 656, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::AnimPropertyGameplayTagBindings");
static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, AnimPropertyCurveFloatBindings) == 672, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::AnimPropertyCurveFloatBindings");
static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, AnimPropertyCurveCompareBindings) == 688, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::AnimPropertyCurveCompareBindings");
static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, OnGameplayTagNotifyBegin) == 704, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::OnGameplayTagNotifyBegin");
static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, OnGameplayTagNotifyEnd) == 720, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::OnGameplayTagNotifyEnd");
static_assert(offsetof(USpecialEventAnimInstance_PlayerMannequin, LastUpdateTimestamp) == 792, "Offset mismatch for USpecialEventAnimInstance_PlayerMannequin::LastUpdateTimestamp");

// /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
// Kind: Class; super: ActorComponent
class USpecialEventAudioAnalysisBaseComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float CurrentTime; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* LoudnessNRT; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* OnsetNRT; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ConstantQNRT; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, CurrentTime) == 192, "Offset mismatch for USpecialEventAudioAnalysisBaseComponent::CurrentTime");
static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, LoudnessNRT) == 200, "Offset mismatch for USpecialEventAudioAnalysisBaseComponent::LoudnessNRT");
static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, OnsetNRT) == 208, "Offset mismatch for USpecialEventAudioAnalysisBaseComponent::OnsetNRT");
static_assert(offsetof(USpecialEventAudioAnalysisBaseComponent, ConstantQNRT) == 216, "Offset mismatch for USpecialEventAudioAnalysisBaseComponent::ConstantQNRT");

// /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
// Kind: Class; super: SpecialEventAudioAnalysisBaseComponent
class USpecialEventAudioHapticsComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TArray<void*> HapticsActions; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bStartHapticsOnBeginPlay; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F1
    float IntensityMultiplier; // 0x00F4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpecialEventAudioHapticsComponent, HapticsActions) == 224, "Offset mismatch for USpecialEventAudioHapticsComponent::HapticsActions");
static_assert(offsetof(USpecialEventAudioHapticsComponent, bStartHapticsOnBeginPlay) == 240, "Offset mismatch for USpecialEventAudioHapticsComponent::bStartHapticsOnBeginPlay");
static_assert(offsetof(USpecialEventAudioHapticsComponent, IntensityMultiplier) == 244, "Offset mismatch for USpecialEventAudioHapticsComponent::IntensityMultiplier");

// /Script/SpecialEventGameplayRuntime.SpecialEventBackfillComponent
// Kind: Class; super: ActorComponent
class USpecialEventBackfillComponent
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t BackfillState; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    float MinPlayerPercent; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MaxPlayerPercent; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float UpdateTimeInterval; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float GlobalStaggerTime; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowImmediateDisable; // 0x00FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableServerInit; // 0x00FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bContinueFlowOnGamePhaseNone; // 0x00FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableBackfillAfterInitIfDisabled; // 0x00FF (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x38]; // 0x0100
    void* MeshNetworkComponent; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventBackfillComponent, BackfillState) == 232, "Offset mismatch for USpecialEventBackfillComponent::BackfillState");
static_assert(offsetof(USpecialEventBackfillComponent, MinPlayerPercent) == 236, "Offset mismatch for USpecialEventBackfillComponent::MinPlayerPercent");
static_assert(offsetof(USpecialEventBackfillComponent, MaxPlayerPercent) == 240, "Offset mismatch for USpecialEventBackfillComponent::MaxPlayerPercent");
static_assert(offsetof(USpecialEventBackfillComponent, UpdateTimeInterval) == 244, "Offset mismatch for USpecialEventBackfillComponent::UpdateTimeInterval");
static_assert(offsetof(USpecialEventBackfillComponent, GlobalStaggerTime) == 248, "Offset mismatch for USpecialEventBackfillComponent::GlobalStaggerTime");
static_assert(offsetof(USpecialEventBackfillComponent, bAllowImmediateDisable) == 252, "Offset mismatch for USpecialEventBackfillComponent::bAllowImmediateDisable");
static_assert(offsetof(USpecialEventBackfillComponent, bDisableServerInit) == 253, "Offset mismatch for USpecialEventBackfillComponent::bDisableServerInit");
static_assert(offsetof(USpecialEventBackfillComponent, bContinueFlowOnGamePhaseNone) == 254, "Offset mismatch for USpecialEventBackfillComponent::bContinueFlowOnGamePhaseNone");
static_assert(offsetof(USpecialEventBackfillComponent, bDisableBackfillAfterInitIfDisabled) == 255, "Offset mismatch for USpecialEventBackfillComponent::bDisableBackfillAfterInitIfDisabled");
static_assert(offsetof(USpecialEventBackfillComponent, MeshNetworkComponent) == 312, "Offset mismatch for USpecialEventBackfillComponent::MeshNetworkComponent");

// /Script/SpecialEventGameplayRuntime.SpecialEventBackfillManager
// Kind: Class; super: Actor
class USpecialEventBackfillManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* MeshNetworkComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* BackfillComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventBackfillManager, MeshNetworkComponent) == 624, "Offset mismatch for USpecialEventBackfillManager::MeshNetworkComponent");
static_assert(offsetof(USpecialEventBackfillManager, BackfillComponent) == 632, "Offset mismatch for USpecialEventBackfillManager::BackfillComponent");

// /Script/SpecialEventGameplayRuntime.SpecialEventCatchupCheckpoint
// Kind: Class; super: Actor
class USpecialEventCatchupCheckpoint
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> TeleportPoints; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CheckpointPathName[0x1]; // 0x0280 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpecialEventCatchupCheckpoint, TeleportPoints) == 624, "Offset mismatch for USpecialEventCatchupCheckpoint::TeleportPoints");
static_assert(offsetof(USpecialEventCatchupCheckpoint, CheckpointPathName) == 640, "Offset mismatch for USpecialEventCatchupCheckpoint::CheckpointPathName");

// /Script/SpecialEventGameplayRuntime.SpecialEventCatchupManager
// Kind: Class; super: GameStateComponent
class USpecialEventCatchupManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerTeleported; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    TArray<void*> PlayersCatchupStates; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Checkpoints; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpecialEventCatchupManager, OnPlayerTeleported) == 192, "Offset mismatch for USpecialEventCatchupManager::OnPlayerTeleported");
static_assert(offsetof(USpecialEventCatchupManager, PlayersCatchupStates) == 216, "Offset mismatch for USpecialEventCatchupManager::PlayersCatchupStates");
static_assert(offsetof(USpecialEventCatchupManager, Checkpoints) == 232, "Offset mismatch for USpecialEventCatchupManager::Checkpoints");

// /Script/SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
// Kind: Class; super: FortCinematicCamera
class USpecialEventCinematicCameraMode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    void* SpectatorPC; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventCinematicCameraMode, SpectatorPC) == 128, "Offset mismatch for USpecialEventCinematicCameraMode::SpectatorPC");

// /Script/SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
// Kind: Class; super: Interface
class USpecialEventCursorInstigatorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
// Kind: Class; super: PawnComponent
class USpecialEventCursorPawnComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnDesiredVisibilityChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bAllowOnNonOwningClients; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    void* OwningPawn; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* OwningController; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x00F0
    FMulticastInlineDelegate OnCursorModeChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t DefaultCursorModeTag[0x4]; // 0x0110 (Size: 0x4, Type: StructProperty)
    std::uint8_t bDefaultCursorModeAutoActivate; // 0x0114 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0115
    TMap<void*, void*> CursorModes; // 0x0118 (Size: 0x10, Type: MapProperty)
    TArray<void*> CursorStack; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplicatedCursorStackEntry[0x10]; // 0x0138 (Size: 0x10, Type: StructProperty)
    void* InputHelperClass; // 0x0148 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bUseGamepadLookInput; // 0x0150 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseGamepadMoveInput; // 0x0151 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseGyroInput; // 0x0152 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bObeyInvertedPitchUserSetting; // 0x0153 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x4]; // 0x0154
    void* CommonInputSubsystem; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* InputHelperComponent; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x40]; // 0x0168
    FMulticastInlineDelegate OnViewportLocationChanged; // 0x01A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t NonOwningInterpSpeed[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDeltaToSendWorldLocationToServer[0x30]; // 0x01E0 (Size: 0x30, Type: StructProperty)
    std::uint8_t ReplicatedWorldLocation[0x78]; // 0x0210 (Size: 0x78, Type: StructProperty)
    TArray<void*> Widgets; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0x101]; // 0x0298
    std::uint8_t bAdditiveRotationAllowedByDefault; // 0x0399 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x039A
    std::uint8_t bZoomAllowedByDefault; // 0x039B (Size: 0x1, Type: BoolProperty)
    FName ZoomActionName; // 0x039C (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0008[0x4]; // 0x03A4
    void* AdditiveOffsetCameraComponent; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0009[0x8]; // 0x03B0
    std::int32_t DebugEllipseBoundsNumSides; // 0x03B8 (Size: 0x4, Type: IntProperty)
    float DebugBoundsLineThickness; // 0x03BC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpecialEventCursorPawnComponent, OnDesiredVisibilityChanged) == 200, "Offset mismatch for USpecialEventCursorPawnComponent::OnDesiredVisibilityChanged");
static_assert(offsetof(USpecialEventCursorPawnComponent, bAllowOnNonOwningClients) == 216, "Offset mismatch for USpecialEventCursorPawnComponent::bAllowOnNonOwningClients");
static_assert(offsetof(USpecialEventCursorPawnComponent, OwningPawn) == 224, "Offset mismatch for USpecialEventCursorPawnComponent::OwningPawn");
static_assert(offsetof(USpecialEventCursorPawnComponent, OwningController) == 232, "Offset mismatch for USpecialEventCursorPawnComponent::OwningController");
static_assert(offsetof(USpecialEventCursorPawnComponent, OnCursorModeChanged) == 256, "Offset mismatch for USpecialEventCursorPawnComponent::OnCursorModeChanged");
static_assert(offsetof(USpecialEventCursorPawnComponent, DefaultCursorModeTag) == 272, "Offset mismatch for USpecialEventCursorPawnComponent::DefaultCursorModeTag");
static_assert(offsetof(USpecialEventCursorPawnComponent, bDefaultCursorModeAutoActivate) == 276, "Offset mismatch for USpecialEventCursorPawnComponent::bDefaultCursorModeAutoActivate");
static_assert(offsetof(USpecialEventCursorPawnComponent, CursorModes) == 280, "Offset mismatch for USpecialEventCursorPawnComponent::CursorModes");
static_assert(offsetof(USpecialEventCursorPawnComponent, CursorStack) == 296, "Offset mismatch for USpecialEventCursorPawnComponent::CursorStack");
static_assert(offsetof(USpecialEventCursorPawnComponent, ReplicatedCursorStackEntry) == 312, "Offset mismatch for USpecialEventCursorPawnComponent::ReplicatedCursorStackEntry");
static_assert(offsetof(USpecialEventCursorPawnComponent, InputHelperClass) == 328, "Offset mismatch for USpecialEventCursorPawnComponent::InputHelperClass");
static_assert(offsetof(USpecialEventCursorPawnComponent, bUseGamepadLookInput) == 336, "Offset mismatch for USpecialEventCursorPawnComponent::bUseGamepadLookInput");
static_assert(offsetof(USpecialEventCursorPawnComponent, bUseGamepadMoveInput) == 337, "Offset mismatch for USpecialEventCursorPawnComponent::bUseGamepadMoveInput");
static_assert(offsetof(USpecialEventCursorPawnComponent, bUseGyroInput) == 338, "Offset mismatch for USpecialEventCursorPawnComponent::bUseGyroInput");
static_assert(offsetof(USpecialEventCursorPawnComponent, bObeyInvertedPitchUserSetting) == 339, "Offset mismatch for USpecialEventCursorPawnComponent::bObeyInvertedPitchUserSetting");
static_assert(offsetof(USpecialEventCursorPawnComponent, CommonInputSubsystem) == 344, "Offset mismatch for USpecialEventCursorPawnComponent::CommonInputSubsystem");
static_assert(offsetof(USpecialEventCursorPawnComponent, InputHelperComponent) == 352, "Offset mismatch for USpecialEventCursorPawnComponent::InputHelperComponent");
static_assert(offsetof(USpecialEventCursorPawnComponent, OnViewportLocationChanged) == 424, "Offset mismatch for USpecialEventCursorPawnComponent::OnViewportLocationChanged");
static_assert(offsetof(USpecialEventCursorPawnComponent, NonOwningInterpSpeed) == 440, "Offset mismatch for USpecialEventCursorPawnComponent::NonOwningInterpSpeed");
static_assert(offsetof(USpecialEventCursorPawnComponent, MinDeltaToSendWorldLocationToServer) == 480, "Offset mismatch for USpecialEventCursorPawnComponent::MinDeltaToSendWorldLocationToServer");
static_assert(offsetof(USpecialEventCursorPawnComponent, ReplicatedWorldLocation) == 528, "Offset mismatch for USpecialEventCursorPawnComponent::ReplicatedWorldLocation");
static_assert(offsetof(USpecialEventCursorPawnComponent, Widgets) == 648, "Offset mismatch for USpecialEventCursorPawnComponent::Widgets");
static_assert(offsetof(USpecialEventCursorPawnComponent, bAdditiveRotationAllowedByDefault) == 921, "Offset mismatch for USpecialEventCursorPawnComponent::bAdditiveRotationAllowedByDefault");
static_assert(offsetof(USpecialEventCursorPawnComponent, bZoomAllowedByDefault) == 923, "Offset mismatch for USpecialEventCursorPawnComponent::bZoomAllowedByDefault");
static_assert(offsetof(USpecialEventCursorPawnComponent, ZoomActionName) == 924, "Offset mismatch for USpecialEventCursorPawnComponent::ZoomActionName");
static_assert(offsetof(USpecialEventCursorPawnComponent, AdditiveOffsetCameraComponent) == 936, "Offset mismatch for USpecialEventCursorPawnComponent::AdditiveOffsetCameraComponent");
static_assert(offsetof(USpecialEventCursorPawnComponent, DebugEllipseBoundsNumSides) == 952, "Offset mismatch for USpecialEventCursorPawnComponent::DebugEllipseBoundsNumSides");
static_assert(offsetof(USpecialEventCursorPawnComponent, DebugBoundsLineThickness) == 956, "Offset mismatch for USpecialEventCursorPawnComponent::DebugBoundsLineThickness");

// /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
// Kind: Class; super: FortWeaponComponent
class USpecialEventCursorWeaponComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnCursorPawnComponentSet; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CursorPawnComponentClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CursorModeTag[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t bAlignFXToCursor; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x00E5
    TWeakObjectPtr<void> CursorPawnComponent; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USpecialEventCursorWeaponComponent, OnCursorPawnComponentSet) == 200, "Offset mismatch for USpecialEventCursorWeaponComponent::OnCursorPawnComponentSet");
static_assert(offsetof(USpecialEventCursorWeaponComponent, CursorPawnComponentClass) == 216, "Offset mismatch for USpecialEventCursorWeaponComponent::CursorPawnComponentClass");
static_assert(offsetof(USpecialEventCursorWeaponComponent, CursorModeTag) == 224, "Offset mismatch for USpecialEventCursorWeaponComponent::CursorModeTag");
static_assert(offsetof(USpecialEventCursorWeaponComponent, bAlignFXToCursor) == 228, "Offset mismatch for USpecialEventCursorWeaponComponent::bAlignFXToCursor");
static_assert(offsetof(USpecialEventCursorWeaponComponent, CursorPawnComponent) == 240, "Offset mismatch for USpecialEventCursorWeaponComponent::CursorPawnComponent");

// /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
// Kind: Class; super: ActorComponent
class USpecialEventGameUserSettingsControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnLoaded; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FString Version; // 0x00D0 (Size: 0x10, Type: StrProperty)
    float MinTimeBetweenSaves; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpecialEventGameUserSettingsControllerComponent, OnLoaded) == 192, "Offset mismatch for USpecialEventGameUserSettingsControllerComponent::OnLoaded");
static_assert(offsetof(USpecialEventGameUserSettingsControllerComponent, Version) == 208, "Offset mismatch for USpecialEventGameUserSettingsControllerComponent::Version");
static_assert(offsetof(USpecialEventGameUserSettingsControllerComponent, MinTimeBetweenSaves) == 224, "Offset mismatch for USpecialEventGameUserSettingsControllerComponent::MinTimeBetweenSaves");

// /Script/SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
// Kind: Class; super: Object
class USpecialEventGameplayGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USpecialEventGameplayLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SpecialEventGameplayRuntime.SpecialEventMeshLeaderboardManager
// Kind: Class; super: Actor
class USpecialEventMeshLeaderboardManager
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    FMulticastInlineDelegate OnGlobalLeaderboardUpdated; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnGlobalLeaderboardRemoved; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLocalLeaderboardUpdated; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLocalLeaderboardRemoved; // 0x02B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x40]; // 0x02C0
    std::uint8_t LeaderboardConfig[0x18]; // 0x0300 (Size: 0x18, Type: StructProperty)
    std::uint8_t GlobalLeaderboardPlayerDatas[0x78]; // 0x0318 (Size: 0x78, Type: StructProperty)
    std::uint8_t LocalLeaderboardPlayerDatas[0x88]; // 0x0390 (Size: 0x88, Type: StructProperty)
    float ScoreToEnterGlobalLeaderboard; // 0x0418 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x34]; // 0x041C
    void* MeshNetworkComponent; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsZoneLeaderboard; // 0x0458 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpecialEventMeshLeaderboardManager, OnGlobalLeaderboardUpdated) == 640, "Offset mismatch for USpecialEventMeshLeaderboardManager::OnGlobalLeaderboardUpdated");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, OnGlobalLeaderboardRemoved) == 656, "Offset mismatch for USpecialEventMeshLeaderboardManager::OnGlobalLeaderboardRemoved");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, OnLocalLeaderboardUpdated) == 672, "Offset mismatch for USpecialEventMeshLeaderboardManager::OnLocalLeaderboardUpdated");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, OnLocalLeaderboardRemoved) == 688, "Offset mismatch for USpecialEventMeshLeaderboardManager::OnLocalLeaderboardRemoved");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, LeaderboardConfig) == 768, "Offset mismatch for USpecialEventMeshLeaderboardManager::LeaderboardConfig");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, GlobalLeaderboardPlayerDatas) == 792, "Offset mismatch for USpecialEventMeshLeaderboardManager::GlobalLeaderboardPlayerDatas");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, LocalLeaderboardPlayerDatas) == 912, "Offset mismatch for USpecialEventMeshLeaderboardManager::LocalLeaderboardPlayerDatas");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, ScoreToEnterGlobalLeaderboard) == 1048, "Offset mismatch for USpecialEventMeshLeaderboardManager::ScoreToEnterGlobalLeaderboard");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, MeshNetworkComponent) == 1104, "Offset mismatch for USpecialEventMeshLeaderboardManager::MeshNetworkComponent");
static_assert(offsetof(USpecialEventMeshLeaderboardManager, bIsZoneLeaderboard) == 1112, "Offset mismatch for USpecialEventMeshLeaderboardManager::bIsZoneLeaderboard");

// /Script/SpecialEventGameplayRuntime.SpecialEventMeshLeaderboardNetworkComponent
// Kind: Class; super: MeshNetworkComponent
class USpecialEventMeshLeaderboardNetworkComponent
{
public:
    std::uint8_t Pad_0000[0x10C]; // 0x0000
    float RequestRate; // 0x010C (Size: 0x4, Type: FloatProperty)
    TArray<void*> LocalLeaderboardRequests; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpecialEventMeshLeaderboardNetworkComponent, RequestRate) == 268, "Offset mismatch for USpecialEventMeshLeaderboardNetworkComponent::RequestRate");
static_assert(offsetof(USpecialEventMeshLeaderboardNetworkComponent, LocalLeaderboardRequests) == 272, "Offset mismatch for USpecialEventMeshLeaderboardNetworkComponent::LocalLeaderboardRequests");

// /Script/SpecialEventGameplayRuntime.SpecialEventMeshMetadataExampleActor
// Kind: Class; super: Actor
class USpecialEventMeshMetadataExampleActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t MetadataExampleStruct[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    void* MeshNetworkComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventMeshMetadataExampleActor, MetadataExampleStruct) == 624, "Offset mismatch for USpecialEventMeshMetadataExampleActor::MetadataExampleStruct");
static_assert(offsetof(USpecialEventMeshMetadataExampleActor, MeshNetworkComponent) == 648, "Offset mismatch for USpecialEventMeshMetadataExampleActor::MeshNetworkComponent");

// /Script/SpecialEventGameplayRuntime.SpecialEventMusicClockManager
// Kind: Class; super: Info
class USpecialEventMusicClockManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* MusicClock; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> AudioComponent; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bRegisterWithMusicEventSubsystem; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0281
    std::uint8_t MusicEventSubsystemEventTag[0x4]; // 0x0284 (Size: 0x4, Type: StructProperty)
    std::uint8_t MusicEventSubsystemBehaviorTags[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpecialEventMusicClockManager, MusicClock) == 624, "Offset mismatch for USpecialEventMusicClockManager::MusicClock");
static_assert(offsetof(USpecialEventMusicClockManager, AudioComponent) == 632, "Offset mismatch for USpecialEventMusicClockManager::AudioComponent");
static_assert(offsetof(USpecialEventMusicClockManager, bRegisterWithMusicEventSubsystem) == 640, "Offset mismatch for USpecialEventMusicClockManager::bRegisterWithMusicEventSubsystem");
static_assert(offsetof(USpecialEventMusicClockManager, MusicEventSubsystemEventTag) == 644, "Offset mismatch for USpecialEventMusicClockManager::MusicEventSubsystemEventTag");
static_assert(offsetof(USpecialEventMusicClockManager, MusicEventSubsystemBehaviorTags) == 648, "Offset mismatch for USpecialEventMusicClockManager::MusicEventSubsystemBehaviorTags");

// /Script/SpecialEventGameplayRuntime.SpecialEventMusicClockManagerComponent
// Kind: Class; super: SceneComponent
class USpecialEventMusicClockManagerComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    void* MusicClockManager; // 0x0240 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventMusicClockManagerComponent, MusicClockManager) == 576, "Offset mismatch for USpecialEventMusicClockManagerComponent::MusicClockManager");

// /Script/SpecialEventGameplayRuntime.SpecialEventPawnComponent_InvertedMovementInputOverride
// Kind: Class; super: ActorComponent
class USpecialEventPawnComponent_InvertedMovementInputOverride
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

static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, PrimaryComponentTick) == 56, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::PrimaryComponentTick");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, ComponentTags) == 104, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::ComponentTags");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, AssetUserData) == 120, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::AssetUserData");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, UCSSerializationIndex) == 144, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::UCSSerializationIndex");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, bNetAddressable) == 152, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::bNetAddressable");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, bAutoActivate) == 154, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::bAutoActivate");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, bIsEditorOnly) == 155, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::bIsEditorOnly");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, CreationMethod) == 185, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::CreationMethod");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, OnComponentActivated) == 186, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::OnComponentActivated");
static_assert(offsetof(USpecialEventPawnComponent_InvertedMovementInputOverride, OnComponentDeactivated) == 187, "Offset mismatch for USpecialEventPawnComponent_InvertedMovementInputOverride::OnComponentDeactivated");

// /Script/SpecialEventGameplayRuntime.SpecialEventPhase
// Kind: Class; super: Actor
class USpecialEventPhase
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    std::uint8_t PhaseTag[0x4]; // 0x0288 (Size: 0x4, Type: StructProperty)
    float LevelSequenceTime; // 0x028C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyGameplayEffects; // 0x0290 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0291
    TArray<void*> GameplayEffectsToApply; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ControllerComponentsToApplyInfoList; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnComponentsToApplyInfoList; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
    void* CameraModifierToApply; // 0x02C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bRemoveModifierOnPhaseDeactivation; // 0x02D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveGameplayEffects; // 0x02D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x02D2
    TArray<void*> GameplayEffectsToRemove; // 0x02D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ControllerComponentsToRemoveInfoList; // 0x02E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnComponentsToRemoveInfoList; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    void* AppliedCameraModifier; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> SpecialEventScript; // 0x0310 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PhaseState; // 0x0318 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USpecialEventPhase, PhaseTag) == 648, "Offset mismatch for USpecialEventPhase::PhaseTag");
static_assert(offsetof(USpecialEventPhase, LevelSequenceTime) == 652, "Offset mismatch for USpecialEventPhase::LevelSequenceTime");
static_assert(offsetof(USpecialEventPhase, bApplyGameplayEffects) == 656, "Offset mismatch for USpecialEventPhase::bApplyGameplayEffects");
static_assert(offsetof(USpecialEventPhase, GameplayEffectsToApply) == 664, "Offset mismatch for USpecialEventPhase::GameplayEffectsToApply");
static_assert(offsetof(USpecialEventPhase, ControllerComponentsToApplyInfoList) == 680, "Offset mismatch for USpecialEventPhase::ControllerComponentsToApplyInfoList");
static_assert(offsetof(USpecialEventPhase, PawnComponentsToApplyInfoList) == 696, "Offset mismatch for USpecialEventPhase::PawnComponentsToApplyInfoList");
static_assert(offsetof(USpecialEventPhase, CameraModifierToApply) == 712, "Offset mismatch for USpecialEventPhase::CameraModifierToApply");
static_assert(offsetof(USpecialEventPhase, bRemoveModifierOnPhaseDeactivation) == 720, "Offset mismatch for USpecialEventPhase::bRemoveModifierOnPhaseDeactivation");
static_assert(offsetof(USpecialEventPhase, bRemoveGameplayEffects) == 721, "Offset mismatch for USpecialEventPhase::bRemoveGameplayEffects");
static_assert(offsetof(USpecialEventPhase, GameplayEffectsToRemove) == 728, "Offset mismatch for USpecialEventPhase::GameplayEffectsToRemove");
static_assert(offsetof(USpecialEventPhase, ControllerComponentsToRemoveInfoList) == 744, "Offset mismatch for USpecialEventPhase::ControllerComponentsToRemoveInfoList");
static_assert(offsetof(USpecialEventPhase, PawnComponentsToRemoveInfoList) == 760, "Offset mismatch for USpecialEventPhase::PawnComponentsToRemoveInfoList");
static_assert(offsetof(USpecialEventPhase, AppliedCameraModifier) == 776, "Offset mismatch for USpecialEventPhase::AppliedCameraModifier");
static_assert(offsetof(USpecialEventPhase, SpecialEventScript) == 784, "Offset mismatch for USpecialEventPhase::SpecialEventScript");
static_assert(offsetof(USpecialEventPhase, PhaseState) == 792, "Offset mismatch for USpecialEventPhase::PhaseState");

// /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
// Kind: Class; super: FortPlayerMannequin
class USpecialEventPlayerMannequin
{
public:
    std::uint8_t Pad_0000[0x8F8]; // 0x0000
    std::uint8_t bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization; // 0x08F8 (Size: 0x1, Type: BoolProperty)
    // 0x08F8 BoolProperty bDisableCollisionOnBeginPlay (shared storage)
    // 0x08F8 BoolProperty bDisableComponentsTickOnServer (shared storage)
    // 0x08F8 BoolProperty bRegisterWithSpecialEventMutatorOnClient (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x08F9
    std::int32_t PlayerIndex; // 0x08FC (Size: 0x4, Type: IntProperty)
    std::uint8_t bUpdateLoadoutByPlayerIndexAtStartup[0x28]; // 0x0900 (Size: 0x28, Type: StructProperty)
    std::uint8_t bHideUntilPlayerIndexLoadoutApplied[0x28]; // 0x0928 (Size: 0x28, Type: StructProperty)
    TArray<void*> DefaultCosmeticLoadouts; // 0x0950 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideCosmeticLoadouts; // 0x0960 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpecialEventPlayerMannequin, bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization) == 2296, "Offset mismatch for USpecialEventPlayerMannequin::bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization");
static_assert(offsetof(USpecialEventPlayerMannequin, PlayerIndex) == 2300, "Offset mismatch for USpecialEventPlayerMannequin::PlayerIndex");
static_assert(offsetof(USpecialEventPlayerMannequin, bUpdateLoadoutByPlayerIndexAtStartup) == 2304, "Offset mismatch for USpecialEventPlayerMannequin::bUpdateLoadoutByPlayerIndexAtStartup");
static_assert(offsetof(USpecialEventPlayerMannequin, bHideUntilPlayerIndexLoadoutApplied) == 2344, "Offset mismatch for USpecialEventPlayerMannequin::bHideUntilPlayerIndexLoadoutApplied");
static_assert(offsetof(USpecialEventPlayerMannequin, DefaultCosmeticLoadouts) == 2384, "Offset mismatch for USpecialEventPlayerMannequin::DefaultCosmeticLoadouts");
static_assert(offsetof(USpecialEventPlayerMannequin, OverrideCosmeticLoadouts) == 2400, "Offset mismatch for USpecialEventPlayerMannequin::OverrideCosmeticLoadouts");

// /Script/SpecialEventGameplayRuntime.SpecialEventPlayerSpawnLocationComponent
// Kind: Class; super: SceneComponent
class USpecialEventPlayerSpawnLocationComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::int32_t Priority; // 0x0240 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0244
    TArray<void*> PlayersReservations; // 0x0248 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USpecialEventPlayerSpawnLocationComponent, Priority) == 576, "Offset mismatch for USpecialEventPlayerSpawnLocationComponent::Priority");
static_assert(offsetof(USpecialEventPlayerSpawnLocationComponent, PlayersReservations) == 584, "Offset mismatch for USpecialEventPlayerSpawnLocationComponent::PlayersReservations");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent
// Kind: Class; super: ActorComponent
class USpecialEventRewindComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    float MaxRecordingDuration; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float LocalRecordingFPS; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float ReplicatedRecordingFPS; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoStartRecording; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00CD
    float RewindLerpTime; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float DefaultRewindDuration; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    float DefaultRewindPlaybackSpeed; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StateData[0x8]; // 0x00DC (Size: 0x8, Type: StructProperty)
    float ReplicatedRewindDuration; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpecialEventRewindComponent, MaxRecordingDuration) == 192, "Offset mismatch for USpecialEventRewindComponent::MaxRecordingDuration");
static_assert(offsetof(USpecialEventRewindComponent, LocalRecordingFPS) == 196, "Offset mismatch for USpecialEventRewindComponent::LocalRecordingFPS");
static_assert(offsetof(USpecialEventRewindComponent, ReplicatedRecordingFPS) == 200, "Offset mismatch for USpecialEventRewindComponent::ReplicatedRecordingFPS");
static_assert(offsetof(USpecialEventRewindComponent, bAutoStartRecording) == 204, "Offset mismatch for USpecialEventRewindComponent::bAutoStartRecording");
static_assert(offsetof(USpecialEventRewindComponent, RewindLerpTime) == 208, "Offset mismatch for USpecialEventRewindComponent::RewindLerpTime");
static_assert(offsetof(USpecialEventRewindComponent, DefaultRewindDuration) == 212, "Offset mismatch for USpecialEventRewindComponent::DefaultRewindDuration");
static_assert(offsetof(USpecialEventRewindComponent, DefaultRewindPlaybackSpeed) == 216, "Offset mismatch for USpecialEventRewindComponent::DefaultRewindPlaybackSpeed");
static_assert(offsetof(USpecialEventRewindComponent, StateData) == 220, "Offset mismatch for USpecialEventRewindComponent::StateData");
static_assert(offsetof(USpecialEventRewindComponent, ReplicatedRewindDuration) == 228, "Offset mismatch for USpecialEventRewindComponent::ReplicatedRewindDuration");

// /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
// Kind: Class; super: SpecialEventRewindComponent
class USpecialEventRewindComponent_PlayerPawn
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t bStartServerRecordingOnLastGroundFrame; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x27]; // 0x00E9
    std::uint8_t ReplicatedRecording[0x78]; // 0x0110 (Size: 0x78, Type: StructProperty)
    std::uint8_t ReplicatedRecordingFastArray[0x1]; // 0x0188 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpecialEventRewindComponent_PlayerPawn, bStartServerRecordingOnLastGroundFrame) == 232, "Offset mismatch for USpecialEventRewindComponent_PlayerPawn::bStartServerRecordingOnLastGroundFrame");
static_assert(offsetof(USpecialEventRewindComponent_PlayerPawn, ReplicatedRecording) == 272, "Offset mismatch for USpecialEventRewindComponent_PlayerPawn::ReplicatedRecording");
static_assert(offsetof(USpecialEventRewindComponent_PlayerPawn, ReplicatedRecordingFastArray) == 392, "Offset mismatch for USpecialEventRewindComponent_PlayerPawn::ReplicatedRecordingFastArray");

// /Script/SpecialEventGameplayRuntime.SpecialEventScript
// Kind: Class; super: Info
class USpecialEventScript
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnSpecialEventPhaseActivated; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpecialEventPhaseDeactivated; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0290
    void* PreEventManager; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PhaseInfoArray; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
    void* MainEventGameplayModifier; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DropDeadWindowSizeInSeconds[0x28]; // 0x02E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DelayAfterConentLoad[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t bWaitForSEMutator; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0331
    std::uint8_t FinalPreEventPhase[0x4]; // 0x0334 (Size: 0x4, Type: StructProperty)
    std::uint8_t bWaitForWarmupToEnd[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t DelayAfterWarmup[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceReturnToMainMenuTime[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t ForceReturnToMainMenuTimeRandomness[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinDelayReturnToMainMenu[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxDelayReturnToMainMenu[0x28]; // 0x0400 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPreloadAllLevelsOnServer[0x28]; // 0x0428 (Size: 0x28, Type: StructProperty)
    std::uint8_t bAllowGarbageCollectionAfterUnload[0x28]; // 0x0450 (Size: 0x28, Type: StructProperty)
    std::uint8_t bFullPurgeGC[0x28]; // 0x0478 (Size: 0x28, Type: StructProperty)
    std::uint8_t bEnableEndOfEventTimer[0x28]; // 0x04A0 (Size: 0x28, Type: StructProperty)
    std::int32_t ReplicatedActivePhaseIndex; // 0x04C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x24]; // 0x04CC
    void* MeshNetworkComponent; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x10]; // 0x04F8
    std::uint8_t bShouldActivateNightNight; // 0x0508 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USpecialEventScript, OnSpecialEventPhaseActivated) == 624, "Offset mismatch for USpecialEventScript::OnSpecialEventPhaseActivated");
static_assert(offsetof(USpecialEventScript, OnSpecialEventPhaseDeactivated) == 640, "Offset mismatch for USpecialEventScript::OnSpecialEventPhaseDeactivated");
static_assert(offsetof(USpecialEventScript, PreEventManager) == 704, "Offset mismatch for USpecialEventScript::PreEventManager");
static_assert(offsetof(USpecialEventScript, PhaseInfoArray) == 712, "Offset mismatch for USpecialEventScript::PhaseInfoArray");
static_assert(offsetof(USpecialEventScript, MainEventGameplayModifier) == 728, "Offset mismatch for USpecialEventScript::MainEventGameplayModifier");
static_assert(offsetof(USpecialEventScript, DropDeadWindowSizeInSeconds) == 736, "Offset mismatch for USpecialEventScript::DropDeadWindowSizeInSeconds");
static_assert(offsetof(USpecialEventScript, DelayAfterConentLoad) == 776, "Offset mismatch for USpecialEventScript::DelayAfterConentLoad");
static_assert(offsetof(USpecialEventScript, bWaitForSEMutator) == 816, "Offset mismatch for USpecialEventScript::bWaitForSEMutator");
static_assert(offsetof(USpecialEventScript, FinalPreEventPhase) == 820, "Offset mismatch for USpecialEventScript::FinalPreEventPhase");
static_assert(offsetof(USpecialEventScript, bWaitForWarmupToEnd) == 824, "Offset mismatch for USpecialEventScript::bWaitForWarmupToEnd");
static_assert(offsetof(USpecialEventScript, DelayAfterWarmup) == 864, "Offset mismatch for USpecialEventScript::DelayAfterWarmup");
static_assert(offsetof(USpecialEventScript, ForceReturnToMainMenuTime) == 904, "Offset mismatch for USpecialEventScript::ForceReturnToMainMenuTime");
static_assert(offsetof(USpecialEventScript, ForceReturnToMainMenuTimeRandomness) == 944, "Offset mismatch for USpecialEventScript::ForceReturnToMainMenuTimeRandomness");
static_assert(offsetof(USpecialEventScript, MinDelayReturnToMainMenu) == 984, "Offset mismatch for USpecialEventScript::MinDelayReturnToMainMenu");
static_assert(offsetof(USpecialEventScript, MaxDelayReturnToMainMenu) == 1024, "Offset mismatch for USpecialEventScript::MaxDelayReturnToMainMenu");
static_assert(offsetof(USpecialEventScript, bPreloadAllLevelsOnServer) == 1064, "Offset mismatch for USpecialEventScript::bPreloadAllLevelsOnServer");
static_assert(offsetof(USpecialEventScript, bAllowGarbageCollectionAfterUnload) == 1104, "Offset mismatch for USpecialEventScript::bAllowGarbageCollectionAfterUnload");
static_assert(offsetof(USpecialEventScript, bFullPurgeGC) == 1144, "Offset mismatch for USpecialEventScript::bFullPurgeGC");
static_assert(offsetof(USpecialEventScript, bEnableEndOfEventTimer) == 1184, "Offset mismatch for USpecialEventScript::bEnableEndOfEventTimer");
static_assert(offsetof(USpecialEventScript, ReplicatedActivePhaseIndex) == 1224, "Offset mismatch for USpecialEventScript::ReplicatedActivePhaseIndex");
static_assert(offsetof(USpecialEventScript, MeshNetworkComponent) == 1264, "Offset mismatch for USpecialEventScript::MeshNetworkComponent");
static_assert(offsetof(USpecialEventScript, bShouldActivateNightNight) == 1288, "Offset mismatch for USpecialEventScript::bShouldActivateNightNight");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
// Kind: Class; super: Info
class USpecialEventScriptMeshActor
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    std::uint8_t RootStartTime[0x8]; // 0x0298 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsNightNightEnabled; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02A1
    std::int32_t MaxEventPlaybackCount; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCameraShiftEnabled; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitScreenDisabled; // 0x02A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitButtonDisabled; // 0x02AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackButtonDisabled; // 0x02AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02AC
    FString PlaybackVuid; // 0x02B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bDisableBackfill; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateSafeZoneMutator; // 0x02C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPauseSafeZonesAtIndex; // 0x02C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPawnsCanBeDamaged; // 0x02C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InitialPreEventPhase[0x4]; // 0x02C4 (Size: 0x4, Type: StructProperty)
    std::int32_t TeleportPlayersToSafeZoneRequestId; // 0x02C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x02CC
    FString ForceEmoteTemplateId; // 0x02D0 (Size: 0x10, Type: StrProperty)
    std::int32_t ForceEmoteRequestId; // 0x02E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x02E4
    FString CalendarEventName; // 0x02E8 (Size: 0x10, Type: StrProperty)
    float CalenderEventOffsetInSeconds; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float EncryptionKeyDeliveryTimeOffset; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRestoreFromMeshMetaData; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSpawnSafeZoneMutator; // 0x0301 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0302
    float SafeZoneFinalLocationXCoord; // 0x0304 (Size: 0x4, Type: FloatProperty)
    float SafeZoneFinalLocationYCoord; // 0x0308 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSafeZoneFinalLocationSet; // 0x030C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x030D
    std::int32_t SafeZonePhaseToForcePause; // 0x0310 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExcludeBotsFromInvulnerability; // 0x0314 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0315
    std::uint8_t InvulnerabilityGameplayCue[0x4]; // 0x0318 (Size: 0x4, Type: StructProperty)
    std::uint8_t bForceAllSafeZonesToFinalLocation; // 0x031C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x031D
    float TeleportRingRadius; // 0x0320 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTeleportExcludePlayersAlreadyInRadius; // 0x0324 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRingRadiusForExclusion; // 0x0325 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x2]; // 0x0326
    float TeleportSpawnAltitude; // 0x0328 (Size: 0x4, Type: FloatProperty)
    float TeleportMinPlayerSpacing; // 0x032C (Size: 0x4, Type: FloatProperty)
    float TeleportShapeInwardScaleFactor; // 0x0330 (Size: 0x4, Type: FloatProperty)
    std::int32_t TeleportBatchSize; // 0x0334 (Size: 0x4, Type: IntProperty)
    float TeleportBatchDelaySeconds; // 0x0338 (Size: 0x4, Type: FloatProperty)
    std::int32_t StasisReleaseBatchSize; // 0x033C (Size: 0x4, Type: IntProperty)
    float StasisReleaseBatchDelaySeconds; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0xC]; // 0x0344
    void* MeshNetworkComponent; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventScriptMeshActor, RootStartTime) == 664, "Offset mismatch for USpecialEventScriptMeshActor::RootStartTime");
static_assert(offsetof(USpecialEventScriptMeshActor, bIsNightNightEnabled) == 672, "Offset mismatch for USpecialEventScriptMeshActor::bIsNightNightEnabled");
static_assert(offsetof(USpecialEventScriptMeshActor, MaxEventPlaybackCount) == 676, "Offset mismatch for USpecialEventScriptMeshActor::MaxEventPlaybackCount");
static_assert(offsetof(USpecialEventScriptMeshActor, bCameraShiftEnabled) == 680, "Offset mismatch for USpecialEventScriptMeshActor::bCameraShiftEnabled");
static_assert(offsetof(USpecialEventScriptMeshActor, bExitScreenDisabled) == 681, "Offset mismatch for USpecialEventScriptMeshActor::bExitScreenDisabled");
static_assert(offsetof(USpecialEventScriptMeshActor, bExitButtonDisabled) == 682, "Offset mismatch for USpecialEventScriptMeshActor::bExitButtonDisabled");
static_assert(offsetof(USpecialEventScriptMeshActor, bPlaybackButtonDisabled) == 683, "Offset mismatch for USpecialEventScriptMeshActor::bPlaybackButtonDisabled");
static_assert(offsetof(USpecialEventScriptMeshActor, PlaybackVuid) == 688, "Offset mismatch for USpecialEventScriptMeshActor::PlaybackVuid");
static_assert(offsetof(USpecialEventScriptMeshActor, bDisableBackfill) == 704, "Offset mismatch for USpecialEventScriptMeshActor::bDisableBackfill");
static_assert(offsetof(USpecialEventScriptMeshActor, bActivateSafeZoneMutator) == 705, "Offset mismatch for USpecialEventScriptMeshActor::bActivateSafeZoneMutator");
static_assert(offsetof(USpecialEventScriptMeshActor, bPauseSafeZonesAtIndex) == 706, "Offset mismatch for USpecialEventScriptMeshActor::bPauseSafeZonesAtIndex");
static_assert(offsetof(USpecialEventScriptMeshActor, bPawnsCanBeDamaged) == 707, "Offset mismatch for USpecialEventScriptMeshActor::bPawnsCanBeDamaged");
static_assert(offsetof(USpecialEventScriptMeshActor, InitialPreEventPhase) == 708, "Offset mismatch for USpecialEventScriptMeshActor::InitialPreEventPhase");
static_assert(offsetof(USpecialEventScriptMeshActor, TeleportPlayersToSafeZoneRequestId) == 712, "Offset mismatch for USpecialEventScriptMeshActor::TeleportPlayersToSafeZoneRequestId");
static_assert(offsetof(USpecialEventScriptMeshActor, ForceEmoteTemplateId) == 720, "Offset mismatch for USpecialEventScriptMeshActor::ForceEmoteTemplateId");
static_assert(offsetof(USpecialEventScriptMeshActor, ForceEmoteRequestId) == 736, "Offset mismatch for USpecialEventScriptMeshActor::ForceEmoteRequestId");
static_assert(offsetof(USpecialEventScriptMeshActor, CalendarEventName) == 744, "Offset mismatch for USpecialEventScriptMeshActor::CalendarEventName");
static_assert(offsetof(USpecialEventScriptMeshActor, CalenderEventOffsetInSeconds) == 760, "Offset mismatch for USpecialEventScriptMeshActor::CalenderEventOffsetInSeconds");
static_assert(offsetof(USpecialEventScriptMeshActor, EncryptionKeyDeliveryTimeOffset) == 764, "Offset mismatch for USpecialEventScriptMeshActor::EncryptionKeyDeliveryTimeOffset");
static_assert(offsetof(USpecialEventScriptMeshActor, bRestoreFromMeshMetaData) == 768, "Offset mismatch for USpecialEventScriptMeshActor::bRestoreFromMeshMetaData");
static_assert(offsetof(USpecialEventScriptMeshActor, bShouldSpawnSafeZoneMutator) == 769, "Offset mismatch for USpecialEventScriptMeshActor::bShouldSpawnSafeZoneMutator");
static_assert(offsetof(USpecialEventScriptMeshActor, SafeZoneFinalLocationXCoord) == 772, "Offset mismatch for USpecialEventScriptMeshActor::SafeZoneFinalLocationXCoord");
static_assert(offsetof(USpecialEventScriptMeshActor, SafeZoneFinalLocationYCoord) == 776, "Offset mismatch for USpecialEventScriptMeshActor::SafeZoneFinalLocationYCoord");
static_assert(offsetof(USpecialEventScriptMeshActor, bSafeZoneFinalLocationSet) == 780, "Offset mismatch for USpecialEventScriptMeshActor::bSafeZoneFinalLocationSet");
static_assert(offsetof(USpecialEventScriptMeshActor, SafeZonePhaseToForcePause) == 784, "Offset mismatch for USpecialEventScriptMeshActor::SafeZonePhaseToForcePause");
static_assert(offsetof(USpecialEventScriptMeshActor, bExcludeBotsFromInvulnerability) == 788, "Offset mismatch for USpecialEventScriptMeshActor::bExcludeBotsFromInvulnerability");
static_assert(offsetof(USpecialEventScriptMeshActor, InvulnerabilityGameplayCue) == 792, "Offset mismatch for USpecialEventScriptMeshActor::InvulnerabilityGameplayCue");
static_assert(offsetof(USpecialEventScriptMeshActor, bForceAllSafeZonesToFinalLocation) == 796, "Offset mismatch for USpecialEventScriptMeshActor::bForceAllSafeZonesToFinalLocation");
static_assert(offsetof(USpecialEventScriptMeshActor, TeleportRingRadius) == 800, "Offset mismatch for USpecialEventScriptMeshActor::TeleportRingRadius");
static_assert(offsetof(USpecialEventScriptMeshActor, bTeleportExcludePlayersAlreadyInRadius) == 804, "Offset mismatch for USpecialEventScriptMeshActor::bTeleportExcludePlayersAlreadyInRadius");
static_assert(offsetof(USpecialEventScriptMeshActor, bUseRingRadiusForExclusion) == 805, "Offset mismatch for USpecialEventScriptMeshActor::bUseRingRadiusForExclusion");
static_assert(offsetof(USpecialEventScriptMeshActor, TeleportSpawnAltitude) == 808, "Offset mismatch for USpecialEventScriptMeshActor::TeleportSpawnAltitude");
static_assert(offsetof(USpecialEventScriptMeshActor, TeleportMinPlayerSpacing) == 812, "Offset mismatch for USpecialEventScriptMeshActor::TeleportMinPlayerSpacing");
static_assert(offsetof(USpecialEventScriptMeshActor, TeleportShapeInwardScaleFactor) == 816, "Offset mismatch for USpecialEventScriptMeshActor::TeleportShapeInwardScaleFactor");
static_assert(offsetof(USpecialEventScriptMeshActor, TeleportBatchSize) == 820, "Offset mismatch for USpecialEventScriptMeshActor::TeleportBatchSize");
static_assert(offsetof(USpecialEventScriptMeshActor, TeleportBatchDelaySeconds) == 824, "Offset mismatch for USpecialEventScriptMeshActor::TeleportBatchDelaySeconds");
static_assert(offsetof(USpecialEventScriptMeshActor, StasisReleaseBatchSize) == 828, "Offset mismatch for USpecialEventScriptMeshActor::StasisReleaseBatchSize");
static_assert(offsetof(USpecialEventScriptMeshActor, StasisReleaseBatchDelaySeconds) == 832, "Offset mismatch for USpecialEventScriptMeshActor::StasisReleaseBatchDelaySeconds");
static_assert(offsetof(USpecialEventScriptMeshActor, MeshNetworkComponent) == 848, "Offset mismatch for USpecialEventScriptMeshActor::MeshNetworkComponent");

// /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor_RelevantToServers
// Kind: Class; super: SpecialEventScriptMeshActor
class USpecialEventScriptMeshActor_RelevantToServers
{
public:
    std::uint8_t Pad_0000[0x298]; // 0x0000
    std::uint8_t RootStartTime[0x8]; // 0x0298 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsNightNightEnabled; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02A1
    std::int32_t MaxEventPlaybackCount; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCameraShiftEnabled; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitScreenDisabled; // 0x02A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExitButtonDisabled; // 0x02AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlaybackButtonDisabled; // 0x02AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02AC
    FString PlaybackVuid; // 0x02B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bDisableBackfill; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivateSafeZoneMutator; // 0x02C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPauseSafeZonesAtIndex; // 0x02C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPawnsCanBeDamaged; // 0x02C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InitialPreEventPhase[0x4]; // 0x02C4 (Size: 0x4, Type: StructProperty)
    std::int32_t TeleportPlayersToSafeZoneRequestId; // 0x02C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x02CC
    FString ForceEmoteTemplateId; // 0x02D0 (Size: 0x10, Type: StrProperty)
    std::int32_t ForceEmoteRequestId; // 0x02E0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x02E4
    FString CalendarEventName; // 0x02E8 (Size: 0x10, Type: StrProperty)
    float CalenderEventOffsetInSeconds; // 0x02F8 (Size: 0x4, Type: FloatProperty)
    float EncryptionKeyDeliveryTimeOffset; // 0x02FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRestoreFromMeshMetaData; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSpawnSafeZoneMutator; // 0x0301 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0302
    float SafeZoneFinalLocationXCoord; // 0x0304 (Size: 0x4, Type: FloatProperty)
    float SafeZoneFinalLocationYCoord; // 0x0308 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSafeZoneFinalLocationSet; // 0x030C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x030D
    std::int32_t SafeZonePhaseToForcePause; // 0x0310 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExcludeBotsFromInvulnerability; // 0x0314 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0315
    std::uint8_t InvulnerabilityGameplayCue[0x4]; // 0x0318 (Size: 0x4, Type: StructProperty)
    std::uint8_t bForceAllSafeZonesToFinalLocation; // 0x031C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x031D
    float TeleportRingRadius; // 0x0320 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTeleportExcludePlayersAlreadyInRadius; // 0x0324 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRingRadiusForExclusion; // 0x0325 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x2]; // 0x0326
    float TeleportSpawnAltitude; // 0x0328 (Size: 0x4, Type: FloatProperty)
    float TeleportMinPlayerSpacing; // 0x032C (Size: 0x4, Type: FloatProperty)
    float TeleportShapeInwardScaleFactor; // 0x0330 (Size: 0x4, Type: FloatProperty)
    std::int32_t TeleportBatchSize; // 0x0334 (Size: 0x4, Type: IntProperty)
    float TeleportBatchDelaySeconds; // 0x0338 (Size: 0x4, Type: FloatProperty)
    std::int32_t StasisReleaseBatchSize; // 0x033C (Size: 0x4, Type: IntProperty)
    float StasisReleaseBatchDelaySeconds; // 0x0340 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0xC]; // 0x0344
    void* MeshNetworkComponent; // 0x0350 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, RootStartTime) == 664, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::RootStartTime");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bIsNightNightEnabled) == 672, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bIsNightNightEnabled");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, MaxEventPlaybackCount) == 676, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::MaxEventPlaybackCount");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bCameraShiftEnabled) == 680, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bCameraShiftEnabled");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bExitScreenDisabled) == 681, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bExitScreenDisabled");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bExitButtonDisabled) == 682, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bExitButtonDisabled");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bPlaybackButtonDisabled) == 683, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bPlaybackButtonDisabled");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, PlaybackVuid) == 688, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::PlaybackVuid");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bDisableBackfill) == 704, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bDisableBackfill");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bActivateSafeZoneMutator) == 705, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bActivateSafeZoneMutator");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bPauseSafeZonesAtIndex) == 706, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bPauseSafeZonesAtIndex");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bPawnsCanBeDamaged) == 707, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bPawnsCanBeDamaged");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, InitialPreEventPhase) == 708, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::InitialPreEventPhase");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, TeleportPlayersToSafeZoneRequestId) == 712, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::TeleportPlayersToSafeZoneRequestId");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, ForceEmoteTemplateId) == 720, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::ForceEmoteTemplateId");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, ForceEmoteRequestId) == 736, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::ForceEmoteRequestId");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, CalendarEventName) == 744, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::CalendarEventName");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, CalenderEventOffsetInSeconds) == 760, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::CalenderEventOffsetInSeconds");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, EncryptionKeyDeliveryTimeOffset) == 764, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::EncryptionKeyDeliveryTimeOffset");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bRestoreFromMeshMetaData) == 768, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bRestoreFromMeshMetaData");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bShouldSpawnSafeZoneMutator) == 769, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bShouldSpawnSafeZoneMutator");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, SafeZoneFinalLocationXCoord) == 772, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::SafeZoneFinalLocationXCoord");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, SafeZoneFinalLocationYCoord) == 776, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::SafeZoneFinalLocationYCoord");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bSafeZoneFinalLocationSet) == 780, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bSafeZoneFinalLocationSet");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, SafeZonePhaseToForcePause) == 784, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::SafeZonePhaseToForcePause");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bExcludeBotsFromInvulnerability) == 788, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bExcludeBotsFromInvulnerability");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, InvulnerabilityGameplayCue) == 792, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::InvulnerabilityGameplayCue");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bForceAllSafeZonesToFinalLocation) == 796, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bForceAllSafeZonesToFinalLocation");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, TeleportRingRadius) == 800, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::TeleportRingRadius");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bTeleportExcludePlayersAlreadyInRadius) == 804, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bTeleportExcludePlayersAlreadyInRadius");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, bUseRingRadiusForExclusion) == 805, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::bUseRingRadiusForExclusion");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, TeleportSpawnAltitude) == 808, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::TeleportSpawnAltitude");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, TeleportMinPlayerSpacing) == 812, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::TeleportMinPlayerSpacing");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, TeleportShapeInwardScaleFactor) == 816, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::TeleportShapeInwardScaleFactor");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, TeleportBatchSize) == 820, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::TeleportBatchSize");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, TeleportBatchDelaySeconds) == 824, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::TeleportBatchDelaySeconds");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, StasisReleaseBatchSize) == 828, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::StasisReleaseBatchSize");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, StasisReleaseBatchDelaySeconds) == 832, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::StasisReleaseBatchDelaySeconds");
static_assert(offsetof(USpecialEventScriptMeshActor_RelevantToServers, MeshNetworkComponent) == 848, "Offset mismatch for USpecialEventScriptMeshActor_RelevantToServers::MeshNetworkComponent");

// /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent
// Kind: Class; super: ActorComponent
class USpecialEventStatComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnValueChangedDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> StatDefinitions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t StatFastArray[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpecialEventStatComponent, OnValueChangedDelegate) == 192, "Offset mismatch for USpecialEventStatComponent::OnValueChangedDelegate");
static_assert(offsetof(USpecialEventStatComponent, StatDefinitions) == 208, "Offset mismatch for USpecialEventStatComponent::StatDefinitions");
static_assert(offsetof(USpecialEventStatComponent, StatFastArray) == 224, "Offset mismatch for USpecialEventStatComponent::StatFastArray");

// /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
// Kind: Class; super: SpecialRelevancyComponentBase
class USpecialRelevancyHealthComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t RelevancyDeathTimeLength[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t bSetLifespanOnLastRelevancyDeath; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F9
    float OwnerMaxHealthCached; // 0x00FC (Size: 0x4, Type: FloatProperty)
    TArray<void*> ReplicatedDamageRecords; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnSpecialRelevancyDeath; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpecialRelevancyDamage; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CachedMutator; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpecialRelevancyHealthComponent, RelevancyDeathTimeLength) == 208, "Offset mismatch for USpecialRelevancyHealthComponent::RelevancyDeathTimeLength");
static_assert(offsetof(USpecialRelevancyHealthComponent, bSetLifespanOnLastRelevancyDeath) == 248, "Offset mismatch for USpecialRelevancyHealthComponent::bSetLifespanOnLastRelevancyDeath");
static_assert(offsetof(USpecialRelevancyHealthComponent, OwnerMaxHealthCached) == 252, "Offset mismatch for USpecialRelevancyHealthComponent::OwnerMaxHealthCached");
static_assert(offsetof(USpecialRelevancyHealthComponent, ReplicatedDamageRecords) == 256, "Offset mismatch for USpecialRelevancyHealthComponent::ReplicatedDamageRecords");
static_assert(offsetof(USpecialRelevancyHealthComponent, OnSpecialRelevancyDeath) == 272, "Offset mismatch for USpecialRelevancyHealthComponent::OnSpecialRelevancyDeath");
static_assert(offsetof(USpecialRelevancyHealthComponent, OnSpecialRelevancyDamage) == 288, "Offset mismatch for USpecialRelevancyHealthComponent::OnSpecialRelevancyDamage");
static_assert(offsetof(USpecialRelevancyHealthComponent, CachedMutator) == 304, "Offset mismatch for USpecialRelevancyHealthComponent::CachedMutator");
