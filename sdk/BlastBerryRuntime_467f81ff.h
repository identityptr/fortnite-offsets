/**
 * decamp dumper generated SDK
 * Package: /Script/BlastBerryRuntime
 */
#pragma once
#include "Basic.h"

// /Script/BlastBerryRuntime.BlastBerryObjectiveFilter_PlayerRespawned
// Kind: ScriptStruct; super: ObjectiveFilter
struct FBlastBerryObjectiveFilter_PlayerRespawned
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t TeamLivesRemaining[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBlastBerryObjectiveFilter_PlayerRespawned, TeamLivesRemaining) == 160, "Offset mismatch for FBlastBerryObjectiveFilter_PlayerRespawned::TeamLivesRemaining");

// /Script/BlastBerryRuntime.BlastBerryObjectiveFilter_RespawnsDisabled
// Kind: ScriptStruct; super: ObjectiveFilter
struct FBlastBerryObjectiveFilter_RespawnsDisabled
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t TeamLivesRemaining[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBlastBerryObjectiveFilter_RespawnsDisabled, TeamLivesRemaining) == 160, "Offset mismatch for FBlastBerryObjectiveFilter_RespawnsDisabled::TeamLivesRemaining");

// /Script/BlastBerryRuntime.BlastBerryObjectiveFilter_TeamEliminated
// Kind: ScriptStruct; super: ObjectiveFilter
struct FBlastBerryObjectiveFilter_TeamEliminated
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t EliminatedPlayer[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::uint8_t DamageType[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t KillerHandling; // 0x0130 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FBlastBerryObjectiveFilter_TeamEliminated, EliminatedPlayer) == 160, "Offset mismatch for FBlastBerryObjectiveFilter_TeamEliminated::EliminatedPlayer");
static_assert(offsetof(FBlastBerryObjectiveFilter_TeamEliminated, DamageType) == 232, "Offset mismatch for FBlastBerryObjectiveFilter_TeamEliminated::DamageType");
static_assert(offsetof(FBlastBerryObjectiveFilter_TeamEliminated, KillerHandling) == 304, "Offset mismatch for FBlastBerryObjectiveFilter_TeamEliminated::KillerHandling");

// /Script/BlastBerryRuntime.BlastBerryRespawnRewardDef
// Kind: ScriptStruct; super: none
struct FBlastBerryRespawnRewardDef
{
public:
    std::uint8_t RewardId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t TimeReward[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    FText RewardMessage; // 0x0030 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FBlastBerryRespawnRewardDef, RewardId) == 0, "Offset mismatch for FBlastBerryRespawnRewardDef::RewardId");
static_assert(offsetof(FBlastBerryRespawnRewardDef, TimeReward) == 8, "Offset mismatch for FBlastBerryRespawnRewardDef::TimeReward");
static_assert(offsetof(FBlastBerryRespawnRewardDef, RewardMessage) == 48, "Offset mismatch for FBlastBerryRespawnRewardDef::RewardMessage");

// /Script/BlastBerryRuntime.BlastBerrySoloRespawnData
// Kind: ScriptStruct; super: none
struct FBlastBerrySoloRespawnData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlastBerryRuntime.BlastBerryTeamLives
// Kind: ScriptStruct; super: none
struct FBlastBerryTeamLives
{
public:
    std::uint8_t TeamId; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::int8_t TeamLivesUsed; // 0x0001 (Size: 0x1, Type: Int8Property)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float ServerTimeForRecharge; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FBlastBerryTeamLives, TeamId) == 0, "Offset mismatch for FBlastBerryTeamLives::TeamId");
static_assert(offsetof(FBlastBerryTeamLives, TeamLivesUsed) == 1, "Offset mismatch for FBlastBerryTeamLives::TeamLivesUsed");
static_assert(offsetof(FBlastBerryTeamLives, ServerTimeForRecharge) == 4, "Offset mismatch for FBlastBerryTeamLives::ServerTimeForRecharge");

// /Script/BlastBerryRuntime.BlastBerryVerbMessage_PlayerRespawned
// Kind: ScriptStruct; super: VerbMessage
struct FBlastBerryVerbMessage_PlayerRespawned
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t TeamLivesRemaining; // 0x0078 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBlastBerryVerbMessage_PlayerRespawned, TeamLivesRemaining) == 120, "Offset mismatch for FBlastBerryVerbMessage_PlayerRespawned::TeamLivesRemaining");

// /Script/BlastBerryRuntime.BlastBerryVerbMessage_RespawnsDisabled
// Kind: ScriptStruct; super: VerbMessage
struct FBlastBerryVerbMessage_RespawnsDisabled
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t TeamLivesRemaining; // 0x0078 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FBlastBerryVerbMessage_RespawnsDisabled, TeamLivesRemaining) == 120, "Offset mismatch for FBlastBerryVerbMessage_RespawnsDisabled::TeamLivesRemaining");

// /Script/BlastBerryRuntime.BlastBerryVerbMessage_TeamEliminated
// Kind: ScriptStruct; super: VerbMessage
struct FBlastBerryVerbMessage_TeamEliminated
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t EliminatedPlayer[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t DamageType[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bWasAuthorKiller; // 0x00E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBlastBerryVerbMessage_TeamEliminated, EliminatedPlayer) == 120, "Offset mismatch for FBlastBerryVerbMessage_TeamEliminated::EliminatedPlayer");
static_assert(offsetof(FBlastBerryVerbMessage_TeamEliminated, DamageType) == 176, "Offset mismatch for FBlastBerryVerbMessage_TeamEliminated::DamageType");
static_assert(offsetof(FBlastBerryVerbMessage_TeamEliminated, bWasAuthorKiller) == 232, "Offset mismatch for FBlastBerryVerbMessage_TeamEliminated::bWasAuthorKiller");

// /Script/BlastBerryRuntime.BlastBerryObjectiveProcessor_PlayerRespawned
// Kind: Class; super: FortObjectiveProcessor
class UBlastBerryObjectiveProcessor_PlayerRespawned
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlastBerryObjectiveProcessor_PlayerRespawned, OwningProcessorSubsystem) == 56, "Offset mismatch for UBlastBerryObjectiveProcessor_PlayerRespawned::OwningProcessorSubsystem");

// /Script/BlastBerryRuntime.BlastBerryObjectiveProcessor_RespawnsDisabled
// Kind: Class; super: FortObjectiveProcessor
class UBlastBerryObjectiveProcessor_RespawnsDisabled
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlastBerryObjectiveProcessor_RespawnsDisabled, OwningProcessorSubsystem) == 56, "Offset mismatch for UBlastBerryObjectiveProcessor_RespawnsDisabled::OwningProcessorSubsystem");

// /Script/BlastBerryRuntime.BlastBerryObjectiveProcessor_TeamEliminated
// Kind: Class; super: FortObjectiveProcessor
class UBlastBerryObjectiveProcessor_TeamEliminated
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBlastBerryObjectiveProcessor_TeamEliminated, OwningProcessorSubsystem) == 56, "Offset mismatch for UBlastBerryObjectiveProcessor_TeamEliminated::OwningProcessorSubsystem");

// /Script/BlastBerryRuntime.BlastBerryVerseRespawnLogic
// Kind: Class; super: Object
class UBlastBerryVerseRespawnLogic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlastBerryRuntime.FortAthenaMutator_BlastBerry
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_BlastBerry
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t DBNOReviveTime[0x1]; // 0x0400 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_BlastBerry, DBNOReviveTime) == 1024, "Offset mismatch for UFortAthenaMutator_BlastBerry::DBNOReviveTime");

// /Script/BlastBerryRuntime.FortBlastBerryNPCSpawner
// Kind: Class; super: Actor
class UFortBlastBerryNPCSpawner
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TSoftClassPtr<void> NPCSpawnerDataClass; // 0x0270 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortBlastBerryNPCSpawner, NPCSpawnerDataClass) == 624, "Offset mismatch for UFortBlastBerryNPCSpawner::NPCSpawnerDataClass");

// /Script/BlastBerryRuntime.FortCheatManager_BlastBerry
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_BlastBerry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlastBerryRuntime.FortControllerComponent_BlastBerry
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_BlastBerry
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnNoRebootsRemaining; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTeammateRespawned; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTeammateRevived; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortControllerComponent_BlastBerry, OnNoRebootsRemaining) == 200, "Offset mismatch for UFortControllerComponent_BlastBerry::OnNoRebootsRemaining");
static_assert(offsetof(UFortControllerComponent_BlastBerry, OnTeammateRespawned) == 216, "Offset mismatch for UFortControllerComponent_BlastBerry::OnTeammateRespawned");
static_assert(offsetof(UFortControllerComponent_BlastBerry, OnTeammateRevived) == 232, "Offset mismatch for UFortControllerComponent_BlastBerry::OnTeammateRevived");

// /Script/BlastBerryRuntime.FortControllerComponent_BlastBerryUI
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_BlastBerryUI
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DeathLocationIndicatorDuration[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DeathLocationIndicatorWidget[0x20]; // 0x00F0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DeathLocationIndicatorIconBrush[0xB0]; // 0x0110 (Size: 0xB0, Type: StructProperty)
    std::uint8_t DeathLocationIndicatorClampedIconBrush[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortControllerComponent_BlastBerryUI, DeathLocationIndicatorDuration) == 200, "Offset mismatch for UFortControllerComponent_BlastBerryUI::DeathLocationIndicatorDuration");
static_assert(offsetof(UFortControllerComponent_BlastBerryUI, DeathLocationIndicatorWidget) == 240, "Offset mismatch for UFortControllerComponent_BlastBerryUI::DeathLocationIndicatorWidget");
static_assert(offsetof(UFortControllerComponent_BlastBerryUI, DeathLocationIndicatorIconBrush) == 272, "Offset mismatch for UFortControllerComponent_BlastBerryUI::DeathLocationIndicatorIconBrush");
static_assert(offsetof(UFortControllerComponent_BlastBerryUI, DeathLocationIndicatorClampedIconBrush) == 448, "Offset mismatch for UFortControllerComponent_BlastBerryUI::DeathLocationIndicatorClampedIconBrush");

// /Script/BlastBerryRuntime.FortGameStateComponent_BlastBerryManager
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_BlastBerryManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerPawnRespawned; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerPawnDied; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTeamWon; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLocalTeamLivesChanged; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLocalTimeUntilTeamLivesRechargeChanged; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRespawnsEnabled; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRespawnsDisabled; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTimeUntilRespawnsDisabledUpdated; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnConsumedRemainingTeamLives; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHuntEnabledChanged; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float ServerTimeForRespawnsDisabled; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0164
    TArray<void*> RespawnPendingPlayerStates; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHuntEnabled; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentGamePhaseStep; // 0x0179 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x017A
    std::int32_t CurrentSafeZonePhaseIndex; // 0x017C (Size: 0x4, Type: IntProperty)
    std::uint8_t MaxTeamLives[0x28]; // 0x0180 (Size: 0x28, Type: StructProperty)
    std::uint8_t TeamLivesRechargeDuration[0x28]; // 0x01A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RespawnHeight[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RespawnRange[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RespawnCameraDistance[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseAdvancedSpawnBehavior[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t UseSoloSpawnEQS[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoloDisableEQSRadius[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t SoloSpawnMaxDistanceFromDeathLocation[0x28]; // 0x02C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdvancedSpawnSafeZonePredictionTime[0x28]; // 0x02E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdvancedSpawnSafeZoneRadiusBuffer[0x28]; // 0x0310 (Size: 0x28, Type: StructProperty)
    std::uint8_t AdvancedSpawnGroupProximityDistance[0x28]; // 0x0338 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveRespawnEnabled[0x28]; // 0x0360 (Size: 0x28, Type: StructProperty)
    std::uint8_t WaveRespawnDelay[0x28]; // 0x0388 (Size: 0x28, Type: StructProperty)
    std::uint8_t IndividualRespawnDelay[0x28]; // 0x03B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RespawnTimeLimitBuffer[0x28]; // 0x03D8 (Size: 0x28, Type: StructProperty)
    TArray<void*> RespawnRewards; // 0x0400 (Size: 0x10, Type: ArrayProperty)
    void* SoloRespawnLocationQueryTemplate; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TeamLives; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviousTeamLives; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x30]; // 0x0438
    TMap<void*, void*> ActiveViewTargetValidationTimersMap; // 0x0468 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RespawnTimeLimitTimersMap; // 0x0478 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SoloRespawnDataMap; // 0x0488 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0498
    void* RespawnLogicScript; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnPlayerPawnRespawned) == 192, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnPlayerPawnRespawned");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnPlayerPawnDied) == 208, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnPlayerPawnDied");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnTeamWon) == 224, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnTeamWon");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnLocalTeamLivesChanged) == 240, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnLocalTeamLivesChanged");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnLocalTimeUntilTeamLivesRechargeChanged) == 256, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnLocalTimeUntilTeamLivesRechargeChanged");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnRespawnsEnabled) == 272, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnRespawnsEnabled");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnRespawnsDisabled) == 288, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnRespawnsDisabled");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnTimeUntilRespawnsDisabledUpdated) == 304, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnTimeUntilRespawnsDisabledUpdated");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnConsumedRemainingTeamLives) == 320, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnConsumedRemainingTeamLives");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, OnHuntEnabledChanged) == 336, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::OnHuntEnabledChanged");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, ServerTimeForRespawnsDisabled) == 352, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::ServerTimeForRespawnsDisabled");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnPendingPlayerStates) == 360, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnPendingPlayerStates");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, bHuntEnabled) == 376, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::bHuntEnabled");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, CurrentGamePhaseStep) == 377, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::CurrentGamePhaseStep");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, CurrentSafeZonePhaseIndex) == 380, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::CurrentSafeZonePhaseIndex");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, MaxTeamLives) == 384, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::MaxTeamLives");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, TeamLivesRechargeDuration) == 424, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::TeamLivesRechargeDuration");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnHeight) == 464, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnHeight");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnRange) == 504, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnRange");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnCameraDistance) == 544, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnCameraDistance");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, UseAdvancedSpawnBehavior) == 584, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::UseAdvancedSpawnBehavior");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, UseSoloSpawnEQS) == 624, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::UseSoloSpawnEQS");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, SoloDisableEQSRadius) == 664, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::SoloDisableEQSRadius");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, SoloSpawnMaxDistanceFromDeathLocation) == 704, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::SoloSpawnMaxDistanceFromDeathLocation");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, AdvancedSpawnSafeZonePredictionTime) == 744, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::AdvancedSpawnSafeZonePredictionTime");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, AdvancedSpawnSafeZoneRadiusBuffer) == 784, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::AdvancedSpawnSafeZoneRadiusBuffer");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, AdvancedSpawnGroupProximityDistance) == 824, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::AdvancedSpawnGroupProximityDistance");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, WaveRespawnEnabled) == 864, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::WaveRespawnEnabled");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, WaveRespawnDelay) == 904, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::WaveRespawnDelay");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, IndividualRespawnDelay) == 944, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::IndividualRespawnDelay");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnTimeLimitBuffer) == 984, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnTimeLimitBuffer");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnRewards) == 1024, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnRewards");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, SoloRespawnLocationQueryTemplate) == 1040, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::SoloRespawnLocationQueryTemplate");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, TeamLives) == 1048, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::TeamLives");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, PreviousTeamLives) == 1064, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::PreviousTeamLives");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, ActiveViewTargetValidationTimersMap) == 1128, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::ActiveViewTargetValidationTimersMap");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnTimeLimitTimersMap) == 1144, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnTimeLimitTimersMap");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, SoloRespawnDataMap) == 1160, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::SoloRespawnDataMap");
static_assert(offsetof(UFortGameStateComponent_BlastBerryManager, RespawnLogicScript) == 1184, "Offset mismatch for UFortGameStateComponent_BlastBerryManager::RespawnLogicScript");

// /Script/BlastBerryRuntime.FortQueryContext_BlastBerryAllEnemies
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_BlastBerryAllEnemies
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlastBerryRuntime.FortQueryContext_BlastBerryDeathLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_BlastBerryDeathLocation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BlastBerryRuntime.FortQueryContext_BlastBerryDefaultSpawnLocation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_BlastBerryDefaultSpawnLocation
{
public:
    std::uint8_t Opaque[1];
};
