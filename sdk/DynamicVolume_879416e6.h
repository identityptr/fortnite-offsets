/**
 * decamp dumper generated SDK
 * Package: /Script/DynamicVolume
 */
#pragma once
#include "Basic.h"

// /Script/DynamicVolume.DynamicVolumeBaseMinigameRoundSettingsOverrides
// Kind: ScriptStruct; super: none
struct FDynamicVolumeBaseMinigameRoundSettingsOverrides
{
public:
    std::uint8_t bKeepItemsBetweenRounds; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float PercentageOfResourcesKeptBetweenRounds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReloadAndRestockWeaponsEachRound; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLastTeamStandingWinsThisRound; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDynamicVolumeBaseMinigameRoundSettingsOverrides, bKeepItemsBetweenRounds) == 0, "Offset mismatch for FDynamicVolumeBaseMinigameRoundSettingsOverrides::bKeepItemsBetweenRounds");
static_assert(offsetof(FDynamicVolumeBaseMinigameRoundSettingsOverrides, PercentageOfResourcesKeptBetweenRounds) == 4, "Offset mismatch for FDynamicVolumeBaseMinigameRoundSettingsOverrides::PercentageOfResourcesKeptBetweenRounds");
static_assert(offsetof(FDynamicVolumeBaseMinigameRoundSettingsOverrides, bReloadAndRestockWeaponsEachRound) == 8, "Offset mismatch for FDynamicVolumeBaseMinigameRoundSettingsOverrides::bReloadAndRestockWeaponsEachRound");
static_assert(offsetof(FDynamicVolumeBaseMinigameRoundSettingsOverrides, bLastTeamStandingWinsThisRound) == 9, "Offset mismatch for FDynamicVolumeBaseMinigameRoundSettingsOverrides::bLastTeamStandingWinsThisRound");

// /Script/DynamicVolume.DynamicVolumeBaseMinigameSettingsOverrides
// Kind: ScriptStruct; super: none
struct FDynamicVolumeBaseMinigameSettingsOverrides
{
public:
    std::uint8_t bForceSpawnAtCurrentLocation; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetInsideNestedVolume; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowStandardEndGameConditions; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDynamicVolumeBaseMinigameSettingsOverrides, bForceSpawnAtCurrentLocation) == 0, "Offset mismatch for FDynamicVolumeBaseMinigameSettingsOverrides::bForceSpawnAtCurrentLocation");
static_assert(offsetof(FDynamicVolumeBaseMinigameSettingsOverrides, bSetInsideNestedVolume) == 1, "Offset mismatch for FDynamicVolumeBaseMinigameSettingsOverrides::bSetInsideNestedVolume");
static_assert(offsetof(FDynamicVolumeBaseMinigameSettingsOverrides, bAllowStandardEndGameConditions) == 2, "Offset mismatch for FDynamicVolumeBaseMinigameSettingsOverrides::bAllowStandardEndGameConditions");

// /Script/DynamicVolume.DynamicVolumeNestedMinigameMatchmakingSettingsOverrides
// Kind: ScriptStruct; super: none
struct FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides
{
public:
    std::uint8_t SocialJoining; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MMSBackfill; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t JoinInProgressBehavior; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bJoinInProgressAssignedTeamOverride; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::int32_t JoinInProgressAssignedTeam; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceStartAtMaxPlayers; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t ForceStartDelay; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides, SocialJoining) == 0, "Offset mismatch for FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides::SocialJoining");
static_assert(offsetof(FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides, MMSBackfill) == 1, "Offset mismatch for FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides::MMSBackfill");
static_assert(offsetof(FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides, JoinInProgressBehavior) == 2, "Offset mismatch for FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides::JoinInProgressBehavior");
static_assert(offsetof(FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides, bJoinInProgressAssignedTeamOverride) == 3, "Offset mismatch for FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides::bJoinInProgressAssignedTeamOverride");
static_assert(offsetof(FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides, JoinInProgressAssignedTeam) == 4, "Offset mismatch for FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides::JoinInProgressAssignedTeam");
static_assert(offsetof(FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides, bForceStartAtMaxPlayers) == 8, "Offset mismatch for FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides::bForceStartAtMaxPlayers");
static_assert(offsetof(FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides, ForceStartDelay) == 12, "Offset mismatch for FDynamicVolumeNestedMinigameMatchmakingSettingsOverrides::ForceStartDelay");

// /Script/DynamicVolume.DynamicVolumeNestedMinigameSettingsOverrides
// Kind: ScriptStruct; super: none
struct FDynamicVolumeNestedMinigameSettingsOverrides
{
public:
    std::int32_t ClampMaxPlayers; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bForceStartAtMaxPlayers; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::int32_t ForceStartDelay; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FDynamicVolumeNestedMinigameSettingsOverrides, ClampMaxPlayers) == 0, "Offset mismatch for FDynamicVolumeNestedMinigameSettingsOverrides::ClampMaxPlayers");
static_assert(offsetof(FDynamicVolumeNestedMinigameSettingsOverrides, bForceStartAtMaxPlayers) == 4, "Offset mismatch for FDynamicVolumeNestedMinigameSettingsOverrides::bForceStartAtMaxPlayers");
static_assert(offsetof(FDynamicVolumeNestedMinigameSettingsOverrides, ForceStartDelay) == 8, "Offset mismatch for FDynamicVolumeNestedMinigameSettingsOverrides::ForceStartDelay");

// /Script/DynamicVolume.DynamicVolumeRuntimeSettings
// Kind: ScriptStruct; super: none
struct FDynamicVolumeRuntimeSettings
{
public:
    std::uint8_t bOverrideMinigameSettings; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BaseMinigameSettingsOverrides[0x3]; // 0x0001 (Size: 0x3, Type: StructProperty)
    std::uint8_t bOverrideMinigameRoundSettings; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t BaseMinigameRoundSettingsOverrides[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t bPreventNestedMinigameSettingsBuildingSpawn; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideNestedMinigameSettings; // 0x0015 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    std::uint8_t NestedMinigameSettingsOverrides[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t bOverrideNestedMinigameMatchmakingSettings; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0025
    std::uint8_t NestedMatchmakingSettingsOverrides[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDynamicVolumeRuntimeSettings, bOverrideMinigameSettings) == 0, "Offset mismatch for FDynamicVolumeRuntimeSettings::bOverrideMinigameSettings");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, BaseMinigameSettingsOverrides) == 1, "Offset mismatch for FDynamicVolumeRuntimeSettings::BaseMinigameSettingsOverrides");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, bOverrideMinigameRoundSettings) == 4, "Offset mismatch for FDynamicVolumeRuntimeSettings::bOverrideMinigameRoundSettings");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, BaseMinigameRoundSettingsOverrides) == 8, "Offset mismatch for FDynamicVolumeRuntimeSettings::BaseMinigameRoundSettingsOverrides");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, bPreventNestedMinigameSettingsBuildingSpawn) == 20, "Offset mismatch for FDynamicVolumeRuntimeSettings::bPreventNestedMinigameSettingsBuildingSpawn");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, bOverrideNestedMinigameSettings) == 21, "Offset mismatch for FDynamicVolumeRuntimeSettings::bOverrideNestedMinigameSettings");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, NestedMinigameSettingsOverrides) == 24, "Offset mismatch for FDynamicVolumeRuntimeSettings::NestedMinigameSettingsOverrides");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, bOverrideNestedMinigameMatchmakingSettings) == 36, "Offset mismatch for FDynamicVolumeRuntimeSettings::bOverrideNestedMinigameMatchmakingSettings");
static_assert(offsetof(FDynamicVolumeRuntimeSettings, NestedMatchmakingSettingsOverrides) == 40, "Offset mismatch for FDynamicVolumeRuntimeSettings::NestedMatchmakingSettingsOverrides");

// /Script/DynamicVolume.FortDynamicVolume
// Kind: Class; super: Interface
class UFortDynamicVolume
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicVolume.FortDynamicVolumeClientStatusComponent
// Kind: Class; super: ActorComponent
class UFortDynamicVolumeClientStatusComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TSet<void*> LoadingDynamicVolumes; // 0x00C0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFortDynamicVolumeClientStatusComponent, LoadingDynamicVolumes) == 192, "Offset mismatch for UFortDynamicVolumeClientStatusComponent::LoadingDynamicVolumes");

// /Script/DynamicVolume.FortDynamicVolumeComponent
// Kind: Class; super: ActorComponent
class UFortDynamicVolumeComponent
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    std::uint8_t bAutoLoad; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    FString DefaultLinkCode; // 0x0138 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAutoStartMinigameOnContentLoad; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0149
    std::uint8_t UnloadedProxyEntityClass[0x20]; // 0x0150 (Size: 0x20, Type: SoftClassProperty)
    void* UnloadedProxyActorClass; // 0x0170 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RuntimeSettings[0x38]; // 0x0178 (Size: 0x38, Type: StructProperty)
    std::uint8_t bAdoptParentPlayspaceUsers; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCancelRequestOnContentFailure; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bQueryLinkMetadata; // 0x01B2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortDynamicVolumeComponent, bAutoLoad) == 304, "Offset mismatch for UFortDynamicVolumeComponent::bAutoLoad");
static_assert(offsetof(UFortDynamicVolumeComponent, DefaultLinkCode) == 312, "Offset mismatch for UFortDynamicVolumeComponent::DefaultLinkCode");
static_assert(offsetof(UFortDynamicVolumeComponent, bAutoStartMinigameOnContentLoad) == 328, "Offset mismatch for UFortDynamicVolumeComponent::bAutoStartMinigameOnContentLoad");
static_assert(offsetof(UFortDynamicVolumeComponent, UnloadedProxyEntityClass) == 336, "Offset mismatch for UFortDynamicVolumeComponent::UnloadedProxyEntityClass");
static_assert(offsetof(UFortDynamicVolumeComponent, UnloadedProxyActorClass) == 368, "Offset mismatch for UFortDynamicVolumeComponent::UnloadedProxyActorClass");
static_assert(offsetof(UFortDynamicVolumeComponent, RuntimeSettings) == 376, "Offset mismatch for UFortDynamicVolumeComponent::RuntimeSettings");
static_assert(offsetof(UFortDynamicVolumeComponent, bAdoptParentPlayspaceUsers) == 432, "Offset mismatch for UFortDynamicVolumeComponent::bAdoptParentPlayspaceUsers");
static_assert(offsetof(UFortDynamicVolumeComponent, bCancelRequestOnContentFailure) == 433, "Offset mismatch for UFortDynamicVolumeComponent::bCancelRequestOnContentFailure");
static_assert(offsetof(UFortDynamicVolumeComponent, bQueryLinkMetadata) == 434, "Offset mismatch for UFortDynamicVolumeComponent::bQueryLinkMetadata");

// /Script/DynamicVolume.FortDynamicVolumePlayspaceComponent
// Kind: Class; super: FortPlayspaceComponent
class UFortDynamicVolumePlayspaceComponent
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t AllActorsBounds[0x38]; // 0x01B8 (Size: 0x38, Type: StructProperty)
    std::uint8_t LevelBoundsActorBounds[0x38]; // 0x01F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t CurrentLinkId[0x18]; // 0x0228 (Size: 0x18, Type: StructProperty)
    std::uint8_t bScaleVolumeBounds; // 0x0240 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0241
    std::uint8_t ProhibitedTags[0x10]; // 0x0248 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProhibitedGameplayTags[0x20]; // 0x0258 (Size: 0x20, Type: StructProperty)
    std::uint8_t RuntimeSettings[0x38]; // 0x0278 (Size: 0x38, Type: StructProperty)
    std::uint8_t BoundsScale[0x18]; // 0x02B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t EstimatedGameplayBounds[0x38]; // 0x02C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ServerVerseRuntimeErrorEncountered; // 0x0300 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0301
    std::uint8_t UnrecoverableErrorMessage[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t bLevelShownOnServer; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWaitForAssetPreloadOnAllClientsBeforeStartingLevel; // 0x0331 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x46]; // 0x0332
    std::uint8_t TargetLinkId[0x90]; // 0x0378 (Size: 0x90, Type: StructProperty)
    TArray<void*> ReceivedLoadedPlayerStates; // 0x0408 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, AllActorsBounds) == 440, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::AllActorsBounds");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, LevelBoundsActorBounds) == 496, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::LevelBoundsActorBounds");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, CurrentLinkId) == 552, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::CurrentLinkId");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, bScaleVolumeBounds) == 576, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::bScaleVolumeBounds");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, ProhibitedTags) == 584, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::ProhibitedTags");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, ProhibitedGameplayTags) == 600, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::ProhibitedGameplayTags");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, RuntimeSettings) == 632, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::RuntimeSettings");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, BoundsScale) == 688, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::BoundsScale");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, EstimatedGameplayBounds) == 712, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::EstimatedGameplayBounds");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, ServerVerseRuntimeErrorEncountered) == 768, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::ServerVerseRuntimeErrorEncountered");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, UnrecoverableErrorMessage) == 776, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::UnrecoverableErrorMessage");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, bLevelShownOnServer) == 816, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::bLevelShownOnServer");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, bWaitForAssetPreloadOnAllClientsBeforeStartingLevel) == 817, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::bWaitForAssetPreloadOnAllClientsBeforeStartingLevel");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, TargetLinkId) == 888, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::TargetLinkId");
static_assert(offsetof(UFortDynamicVolumePlayspaceComponent, ReceivedLoadedPlayerStates) == 1032, "Offset mismatch for UFortDynamicVolumePlayspaceComponent::ReceivedLoadedPlayerStates");

// /Script/DynamicVolume.FortDynamicVolumeWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UFortDynamicVolumeWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> ActorEntitySubsystem; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortDynamicVolumeWorldSubsystem, ActorEntitySubsystem) == 56, "Offset mismatch for UFortDynamicVolumeWorldSubsystem::ActorEntitySubsystem");
