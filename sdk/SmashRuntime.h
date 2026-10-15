/**
 * decamp dumper generated SDK
 * Package: /Script/SmashRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SmashRuntime.SmashEncounterAlterationWeights
// Kind: ScriptStruct; super: none
struct FSmashEncounterAlterationWeights
{
public:
    std::uint8_t EnabledPercentChance[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> AlterationClassWithWeightMap; // 0x0030 (Size: 0x10, Type: MapProperty)
    std::uint8_t ChosenEncounterAlterationSoftClassPtr[0x20]; // 0x0040 (Size: 0x20, Type: SoftClassProperty)
    void* ChosenEncounterAlterationClass; // 0x0060 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSmashEncounterAlterationWeights, EnabledPercentChance) == 0, "Offset mismatch for FSmashEncounterAlterationWeights::EnabledPercentChance");
static_assert(offsetof(FSmashEncounterAlterationWeights, AlterationClassWithWeightMap) == 48, "Offset mismatch for FSmashEncounterAlterationWeights::AlterationClassWithWeightMap");
static_assert(offsetof(FSmashEncounterAlterationWeights, ChosenEncounterAlterationSoftClassPtr) == 64, "Offset mismatch for FSmashEncounterAlterationWeights::ChosenEncounterAlterationSoftClassPtr");
static_assert(offsetof(FSmashEncounterAlterationWeights, ChosenEncounterAlterationClass) == 96, "Offset mismatch for FSmashEncounterAlterationWeights::ChosenEncounterAlterationClass");

// /Script/SmashRuntime.SmashEncounterData
// Kind: ScriptStruct; super: none
struct FSmashEncounterData
{
public:
    std::uint8_t SpecialEncounterWeights[0x98]; // 0x0000 (Size: 0x98, Type: StructProperty)
    std::uint8_t EncounterAlterationWeights[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmashEncounterData, SpecialEncounterWeights) == 0, "Offset mismatch for FSmashEncounterData::SpecialEncounterWeights");
static_assert(offsetof(FSmashEncounterData, EncounterAlterationWeights) == 152, "Offset mismatch for FSmashEncounterData::EncounterAlterationWeights");

// /Script/SmashRuntime.SmashReplicatedEncounterData
// Kind: ScriptStruct; super: none
struct FSmashReplicatedEncounterData
{
public:
    std::int32_t SafeZoneIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t ChosenSpecialEncounterSoftClassPtr[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> ChosenEncounterAlterationSoftClassPtr; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FSmashReplicatedEncounterData, SafeZoneIndex) == 0, "Offset mismatch for FSmashReplicatedEncounterData::SafeZoneIndex");
static_assert(offsetof(FSmashReplicatedEncounterData, ChosenSpecialEncounterSoftClassPtr) == 8, "Offset mismatch for FSmashReplicatedEncounterData::ChosenSpecialEncounterSoftClassPtr");
static_assert(offsetof(FSmashReplicatedEncounterData, ChosenEncounterAlterationSoftClassPtr) == 40, "Offset mismatch for FSmashReplicatedEncounterData::ChosenEncounterAlterationSoftClassPtr");

// /Script/SmashRuntime.SmashSpecialEncounterWeights
// Kind: ScriptStruct; super: none
struct FSmashSpecialEncounterWeights
{
public:
    std::uint8_t EnabledPercentChance[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpawnDelay[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> EncounterClassWithWeightMap; // 0x0060 (Size: 0x10, Type: MapProperty)
    std::uint8_t ChosenSpecialEncounterSoftClassPtr[0x20]; // 0x0070 (Size: 0x20, Type: SoftClassProperty)
    void* ChosenSpecialEncounterClass; // 0x0090 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FSmashSpecialEncounterWeights, EnabledPercentChance) == 0, "Offset mismatch for FSmashSpecialEncounterWeights::EnabledPercentChance");
static_assert(offsetof(FSmashSpecialEncounterWeights, SpawnDelay) == 48, "Offset mismatch for FSmashSpecialEncounterWeights::SpawnDelay");
static_assert(offsetof(FSmashSpecialEncounterWeights, EncounterClassWithWeightMap) == 96, "Offset mismatch for FSmashSpecialEncounterWeights::EncounterClassWithWeightMap");
static_assert(offsetof(FSmashSpecialEncounterWeights, ChosenSpecialEncounterSoftClassPtr) == 112, "Offset mismatch for FSmashSpecialEncounterWeights::ChosenSpecialEncounterSoftClassPtr");
static_assert(offsetof(FSmashSpecialEncounterWeights, ChosenSpecialEncounterClass) == 144, "Offset mismatch for FSmashSpecialEncounterWeights::ChosenSpecialEncounterClass");

// /Script/SmashRuntime.SpecialEncounterQuestActorSpawnInfo
// Kind: ScriptStruct; super: none
struct FSpecialEncounterQuestActorSpawnInfo
{
public:
    void* ActorClass; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Count[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpawnLocationOffset[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpecialEncounterQuestActorSpawnInfo, ActorClass) == 0, "Offset mismatch for FSpecialEncounterQuestActorSpawnInfo::ActorClass");
static_assert(offsetof(FSpecialEncounterQuestActorSpawnInfo, Count) == 8, "Offset mismatch for FSpecialEncounterQuestActorSpawnInfo::Count");
static_assert(offsetof(FSpecialEncounterQuestActorSpawnInfo, SpawnLocationOffset) == 56, "Offset mismatch for FSpecialEncounterQuestActorSpawnInfo::SpawnLocationOffset");

// /Script/SmashRuntime.FortAIEncounterInfo_Smash
// Kind: Class; super: FortAIEncounterInfo
class UFortAIEncounterInfo_Smash
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SpawnGroupProgressionInfo; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpawnPointsPercentageCurveSequence[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t IntensityCurveSequence[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    float BurstSpawnPointsPercentage; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float SpawnPointsMultiplier; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseBreathers; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t LowPlayerPerformanceBreatherTimeSecondsCurve[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t NormalPlayerPerformanceBreatherTimeSecondsCurve[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t HighPlayerPerformanceBreatherTimeSecondsCurve[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    float EncounterTimeSeconds; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00A4
    TArray<void*> LockedUtilityValues; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumFreeUtilities; // 0x00B8 (Size: 0x4, Type: IntProperty)
    float UtilityAdjustmentPeriodSeconds; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float MinSpawnDistance; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float MaxSpawnDistance; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumDirections; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bChangeDirectionsOnRest; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x00CD
    float SpawnPointsPercentageLimit; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::int32_t PawnNumberLimit; // 0x00D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t PawnNumberCaps[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    float SpawningIntervalSeconds; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float PreSpawnRequeryTime; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EncounterSettingsFixed[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate OnEncounterSpawnDirectionsChosen; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    float NextRiftReplacementTime; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float NextSpawningTime; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EncounterSpawnGroupCapsProfile[0x30]; // 0x0128 (Size: 0x30, Type: StructProperty)
    TArray<void*> AdditionalSpawnGroupCapsCategories; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EncounterSpawnPointsProfile[0x40]; // 0x0168 (Size: 0x40, Type: StructProperty)
    TArray<void*> AvailableUpgrades; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PawnDifficultyLevelModifiers; // 0x01B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BaseLootDropRows; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LootDropModifierRows; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequiresReinitializationFromProfile; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x01E9
    std::uint8_t DesiredHostilityCurve[0x10]; // 0x01F0 (Size: 0x10, Type: StructProperty)
    void* IntensitySequenceProgression; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x70]; // 0x0208
    float AliveMultiplier; // 0x0278 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpawnLimitType; // 0x027C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0006[0x3]; // 0x027D
    std::int32_t SpawnLimit; // 0x0280 (Size: 0x4, Type: IntProperty)
    std::int32_t PawnNumberLimitProgress; // 0x0284 (Size: 0x4, Type: IntProperty)
    std::int32_t SpawnPointsLimitProgress; // 0x0288 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSpawnLimitReached; // 0x028C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasSpawnedAllBurstSpawnAI; // 0x028D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideAliveCounts; // 0x028E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x028F
    std::int32_t MinAliveOverride; // 0x0290 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxAliveOverride; // 0x0294 (Size: 0x4, Type: IntProperty)
    float HostilityThreshold; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float PeakTimeSeconds; // 0x029C (Size: 0x4, Type: FloatProperty)
    float BreatherTimeSeconds; // 0x02A0 (Size: 0x4, Type: FloatProperty)
    float MaxRampTimeSeconds; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    float MinTimeBetweenBreathesSeconds; // 0x02A8 (Size: 0x4, Type: FloatProperty)
    float MaxFadeTimeSeconds; // 0x02AC (Size: 0x4, Type: FloatProperty)
    float FadeEndIntensity; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float FadeEndRemainingSpawnPointsPercentage; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float CompletionPercentageToDisableBreathers; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x02BC
    FMulticastInlineDelegate OnEncounterAllEnemiesKilled; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterEnemySpawned; // 0x02D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterEnemySpawnFailed; // 0x02E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterAllBurstEnemiesSpawned; // 0x02F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterCompleted; // 0x0300 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterPawnDied; // 0x0310 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterSpawnedFinalEnemy; // 0x0320 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterRiftSpawned; // 0x0330 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBuildingRiftBlockedShouldDie; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0350
    std::uint8_t bDisplayThreatVisuals; // 0x0353 (Size: 0x1, Type: BoolProperty)
    float BaseDesiredUtilities; // 0x0354 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000A[0x40]; // 0x0358
    std::uint8_t UtilitiesRequiredTags[0x200]; // 0x0398 (Size: 0x200, Type: StructProperty)
    std::uint8_t InjectedTagForUtilityCheck[0x24]; // 0x0598 (Size: 0x24, Type: StructProperty)
    float MaxLargeSpawnGroupDiscountInterval; // 0x05BC (Size: 0x4, Type: FloatProperty)
    float MaxSelectionToSpawningDelay; // 0x05C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000B[0x14]; // 0x05C4
    TArray<void*> CurrentDesiredUtilities; // 0x05D8 (Size: 0x10, Type: ArrayProperty)
    float UtilityRecentSelectionPenalties; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000C[0x3C]; // 0x05EC
    float UtilityEffectivenessMeasurements; // 0x0628 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000D[0x3C]; // 0x062C
    std::uint8_t UtilityEffectivenessMultiplierCurve[0x10]; // 0x0668 (Size: 0x10, Type: StructProperty)
    float UtilityEffectivenessInfluenceCap; // 0x0678 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_000E[0x4]; // 0x067C
    TArray<void*> CurrentTopUtilityPercentages; // 0x0680 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UsedTopUtilities; // 0x0690 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentlySelectedFreeUtilities; // 0x06A0 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumUtilitiesConsidered; // 0x06B0 (Size: 0x4, Type: IntProperty)
    float ReactivityPercentage; // 0x06B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAdjustUtilitiesDuringRest; // 0x06B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDespawnAIsDuringRest; // 0x06B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000F[0x2]; // 0x06BA
    float LastPlayerCombatFactorUpdateTime; // 0x06BC (Size: 0x4, Type: FloatProperty)
    float LastUtilityAdjustTime; // 0x06C0 (Size: 0x4, Type: FloatProperty)
    float LastSpawnPointAdjustmentTime; // 0x06C4 (Size: 0x4, Type: FloatProperty)
    float LastLargeGroupSpawnTime; // 0x06C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0010[0x4]; // 0x06CC
    TArray<void*> EnemySpawnData; // 0x06D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EncounterPIDController[0x68]; // 0x06E0 (Size: 0x68, Type: StructProperty)
    std::int32_t CurrentSpawnPointsCap; // 0x0748 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentSpawnPointsUsed; // 0x074C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0011[0x8]; // 0x0750
    std::int32_t FailSafeMinSpawnPoints; // 0x0758 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0012[0x4]; // 0x075C
    TArray<void*> ActiveSpawnGroups; // 0x0760 (Size: 0x10, Type: ArrayProperty)
    float EncounterEngagementDistance; // 0x0770 (Size: 0x4, Type: FloatProperty)
    float MinRelevantBuildingDamagedDistance; // 0x0774 (Size: 0x4, Type: FloatProperty)
    float MaxRelevantBuildingDamagedDistance; // 0x0778 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0013[0x14]; // 0x077C
    void* CurrentGroupSpawnPoint; // 0x0790 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EncounterState; // 0x0798 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PacingState; // 0x0799 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0014[0x2]; // 0x079A
    float LastPacingStateTransitionTime; // 0x079C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WaveProgressEstimate[0x1C]; // 0x07A0 (Size: 0x1C, Type: StructProperty)
    float DesiredDifficultyLevel; // 0x07BC (Size: 0x4, Type: FloatProperty)
    float DifficultyLevelOverride; // 0x07C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0015[0x4]; // 0x07C4
    void* MyAIDirector; // 0x07C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DataManagers; // 0x07D0 (Size: 0x10, Type: ArrayProperty)
    void* TargetObjective; // 0x07E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOnlyActiveAtNight; // 0x07E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0016[0x3]; // 0x07E9
    std::int32_t NumRiftsToUse; // 0x07EC (Size: 0x4, Type: IntProperty)
    std::int32_t MinRiftsToUse; // 0x07F0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumRiftsUsed; // 0x07F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t EncounterSettings[0xE8]; // 0x07F8 (Size: 0xE8, Type: StructProperty)
    float EncounterStartTime; // 0x08E0 (Size: 0x4, Type: FloatProperty)
    float HostilityCurveStartTime; // 0x08E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultEnvironmentQueryInfo[0x28]; // 0x08E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FallbackEnvironmentQueryInfo[0x28]; // 0x0910 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverrideEnvironmentQueryInfo[0x28]; // 0x0938 (Size: 0x28, Type: StructProperty)
    std::uint8_t CurrentEnvironmentQueryInfo[0x28]; // 0x0960 (Size: 0x28, Type: StructProperty)
    std::uint8_t bNukeWavesAtDaybreak; // 0x0988 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNukeWavesAtEncounterEnd; // 0x0989 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNukeWavesAtEncounterDeactivation; // 0x098A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0017[0x1]; // 0x098B
    std::int32_t ActiveEnemyCap; // 0x098C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0018[0x8]; // 0x0990
    float CurrentHostilityLevel; // 0x0998 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0019[0x4]; // 0x099C
    FMulticastInlineDelegate OnEncounterRampStarted; // 0x09A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterPeakStarted; // 0x09B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterFadeStarted; // 0x09C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterRestStarted; // 0x09D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterCombatParticipation; // 0x09E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEncounterOptionsChanged; // 0x09F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* RiftClassTemplate; // 0x0A00 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_001A[0x20]; // 0x0A08
    TMap<void*, void*> ExternalAISpawners; // 0x0A28 (Size: 0x10, Type: MapProperty)
    std::uint8_t EncounterQueryData[0x20]; // 0x0A38 (Size: 0x20, Type: StructProperty)
    void* RiftManager; // 0x0A58 (Size: 0x8, Type: ObjectProperty)
    FString AssociatedMissionName; // 0x0A60 (Size: 0x10, Type: StrProperty)
    std::uint8_t AssociatedMissionType; // 0x0A70 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_001B[0x3]; // 0x0A71
    std::uint8_t bCanBeActive; // 0x0A74 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001C[0x3]; // 0x0A75
    TArray<void*> EncounterAssignments; // 0x0A78 (Size: 0x10, Type: ArrayProperty)
    void* DefaultEncounterAssignmentSettings; // 0x0A88 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_001D[0x30]; // 0x0A90
    std::int32_t MaxActiveAlive; // 0x0AC0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSpawnPointsUsed; // 0x0AC4 (Size: 0x4, Type: IntProperty)
    void* OverrideSpawnPointsCurve; // 0x0AC8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_001E[0x178]; // 0x0AD0
    std::uint8_t bSendFullAnalyticsReport; // 0x0C48 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseAILifespans; // 0x0C49 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTrackCombatParticipation; // 0x0C4A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_001F[0x5]; // 0x0C4B
    std::uint8_t ModifierTags[0x20]; // 0x0C50 (Size: 0x20, Type: StructProperty)
    TArray<void*> TimedModifierTags; // 0x0C70 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GameContextTags[0x20]; // 0x0C80 (Size: 0x20, Type: StructProperty)
    void* AILevelMutator; // 0x0CA0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EncounterModifierTagsMutators; // 0x0CA8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawnGroupProgressionInfo) == 56, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawnGroupProgressionInfo");
static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawnPointsPercentageCurveSequence) == 64, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawnPointsPercentageCurveSequence");
static_assert(offsetof(UFortAIEncounterInfo_Smash, IntensityCurveSequence) == 80, "Offset mismatch for UFortAIEncounterInfo_Smash::IntensityCurveSequence");
static_assert(offsetof(UFortAIEncounterInfo_Smash, BurstSpawnPointsPercentage) == 96, "Offset mismatch for UFortAIEncounterInfo_Smash::BurstSpawnPointsPercentage");
static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawnPointsMultiplier) == 100, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawnPointsMultiplier");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bUseBreathers) == 104, "Offset mismatch for UFortAIEncounterInfo_Smash::bUseBreathers");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LowPlayerPerformanceBreatherTimeSecondsCurve) == 112, "Offset mismatch for UFortAIEncounterInfo_Smash::LowPlayerPerformanceBreatherTimeSecondsCurve");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NormalPlayerPerformanceBreatherTimeSecondsCurve) == 128, "Offset mismatch for UFortAIEncounterInfo_Smash::NormalPlayerPerformanceBreatherTimeSecondsCurve");
static_assert(offsetof(UFortAIEncounterInfo_Smash, HighPlayerPerformanceBreatherTimeSecondsCurve) == 144, "Offset mismatch for UFortAIEncounterInfo_Smash::HighPlayerPerformanceBreatherTimeSecondsCurve");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterTimeSeconds) == 160, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterTimeSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LockedUtilityValues) == 168, "Offset mismatch for UFortAIEncounterInfo_Smash::LockedUtilityValues");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NumFreeUtilities) == 184, "Offset mismatch for UFortAIEncounterInfo_Smash::NumFreeUtilities");
static_assert(offsetof(UFortAIEncounterInfo_Smash, UtilityAdjustmentPeriodSeconds) == 188, "Offset mismatch for UFortAIEncounterInfo_Smash::UtilityAdjustmentPeriodSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MinSpawnDistance) == 192, "Offset mismatch for UFortAIEncounterInfo_Smash::MinSpawnDistance");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxSpawnDistance) == 196, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxSpawnDistance");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NumDirections) == 200, "Offset mismatch for UFortAIEncounterInfo_Smash::NumDirections");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bChangeDirectionsOnRest) == 204, "Offset mismatch for UFortAIEncounterInfo_Smash::bChangeDirectionsOnRest");
static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawnPointsPercentageLimit) == 208, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawnPointsPercentageLimit");
static_assert(offsetof(UFortAIEncounterInfo_Smash, PawnNumberLimit) == 212, "Offset mismatch for UFortAIEncounterInfo_Smash::PawnNumberLimit");
static_assert(offsetof(UFortAIEncounterInfo_Smash, PawnNumberCaps) == 216, "Offset mismatch for UFortAIEncounterInfo_Smash::PawnNumberCaps");
static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawningIntervalSeconds) == 240, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawningIntervalSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, PreSpawnRequeryTime) == 244, "Offset mismatch for UFortAIEncounterInfo_Smash::PreSpawnRequeryTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterSettingsFixed) == 248, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterSettingsFixed");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterSpawnDirectionsChosen) == 272, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterSpawnDirectionsChosen");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NextRiftReplacementTime) == 288, "Offset mismatch for UFortAIEncounterInfo_Smash::NextRiftReplacementTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NextSpawningTime) == 292, "Offset mismatch for UFortAIEncounterInfo_Smash::NextSpawningTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterSpawnGroupCapsProfile) == 296, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterSpawnGroupCapsProfile");
static_assert(offsetof(UFortAIEncounterInfo_Smash, AdditionalSpawnGroupCapsCategories) == 344, "Offset mismatch for UFortAIEncounterInfo_Smash::AdditionalSpawnGroupCapsCategories");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterSpawnPointsProfile) == 360, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterSpawnPointsProfile");
static_assert(offsetof(UFortAIEncounterInfo_Smash, AvailableUpgrades) == 424, "Offset mismatch for UFortAIEncounterInfo_Smash::AvailableUpgrades");
static_assert(offsetof(UFortAIEncounterInfo_Smash, PawnDifficultyLevelModifiers) == 440, "Offset mismatch for UFortAIEncounterInfo_Smash::PawnDifficultyLevelModifiers");
static_assert(offsetof(UFortAIEncounterInfo_Smash, BaseLootDropRows) == 456, "Offset mismatch for UFortAIEncounterInfo_Smash::BaseLootDropRows");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LootDropModifierRows) == 472, "Offset mismatch for UFortAIEncounterInfo_Smash::LootDropModifierRows");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bRequiresReinitializationFromProfile) == 488, "Offset mismatch for UFortAIEncounterInfo_Smash::bRequiresReinitializationFromProfile");
static_assert(offsetof(UFortAIEncounterInfo_Smash, DesiredHostilityCurve) == 496, "Offset mismatch for UFortAIEncounterInfo_Smash::DesiredHostilityCurve");
static_assert(offsetof(UFortAIEncounterInfo_Smash, IntensitySequenceProgression) == 512, "Offset mismatch for UFortAIEncounterInfo_Smash::IntensitySequenceProgression");
static_assert(offsetof(UFortAIEncounterInfo_Smash, AliveMultiplier) == 632, "Offset mismatch for UFortAIEncounterInfo_Smash::AliveMultiplier");
static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawnLimitType) == 636, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawnLimitType");
static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawnLimit) == 640, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawnLimit");
static_assert(offsetof(UFortAIEncounterInfo_Smash, PawnNumberLimitProgress) == 644, "Offset mismatch for UFortAIEncounterInfo_Smash::PawnNumberLimitProgress");
static_assert(offsetof(UFortAIEncounterInfo_Smash, SpawnPointsLimitProgress) == 648, "Offset mismatch for UFortAIEncounterInfo_Smash::SpawnPointsLimitProgress");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bSpawnLimitReached) == 652, "Offset mismatch for UFortAIEncounterInfo_Smash::bSpawnLimitReached");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bHasSpawnedAllBurstSpawnAI) == 653, "Offset mismatch for UFortAIEncounterInfo_Smash::bHasSpawnedAllBurstSpawnAI");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bOverrideAliveCounts) == 654, "Offset mismatch for UFortAIEncounterInfo_Smash::bOverrideAliveCounts");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MinAliveOverride) == 656, "Offset mismatch for UFortAIEncounterInfo_Smash::MinAliveOverride");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxAliveOverride) == 660, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxAliveOverride");
static_assert(offsetof(UFortAIEncounterInfo_Smash, HostilityThreshold) == 664, "Offset mismatch for UFortAIEncounterInfo_Smash::HostilityThreshold");
static_assert(offsetof(UFortAIEncounterInfo_Smash, PeakTimeSeconds) == 668, "Offset mismatch for UFortAIEncounterInfo_Smash::PeakTimeSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, BreatherTimeSeconds) == 672, "Offset mismatch for UFortAIEncounterInfo_Smash::BreatherTimeSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxRampTimeSeconds) == 676, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxRampTimeSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MinTimeBetweenBreathesSeconds) == 680, "Offset mismatch for UFortAIEncounterInfo_Smash::MinTimeBetweenBreathesSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxFadeTimeSeconds) == 684, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxFadeTimeSeconds");
static_assert(offsetof(UFortAIEncounterInfo_Smash, FadeEndIntensity) == 688, "Offset mismatch for UFortAIEncounterInfo_Smash::FadeEndIntensity");
static_assert(offsetof(UFortAIEncounterInfo_Smash, FadeEndRemainingSpawnPointsPercentage) == 692, "Offset mismatch for UFortAIEncounterInfo_Smash::FadeEndRemainingSpawnPointsPercentage");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CompletionPercentageToDisableBreathers) == 696, "Offset mismatch for UFortAIEncounterInfo_Smash::CompletionPercentageToDisableBreathers");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterAllEnemiesKilled) == 704, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterAllEnemiesKilled");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterEnemySpawned) == 720, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterEnemySpawned");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterEnemySpawnFailed) == 736, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterEnemySpawnFailed");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterAllBurstEnemiesSpawned) == 752, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterAllBurstEnemiesSpawned");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterCompleted) == 768, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterCompleted");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterPawnDied) == 784, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterPawnDied");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterSpawnedFinalEnemy) == 800, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterSpawnedFinalEnemy");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterRiftSpawned) == 816, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterRiftSpawned");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnBuildingRiftBlockedShouldDie) == 832, "Offset mismatch for UFortAIEncounterInfo_Smash::OnBuildingRiftBlockedShouldDie");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bDisplayThreatVisuals) == 851, "Offset mismatch for UFortAIEncounterInfo_Smash::bDisplayThreatVisuals");
static_assert(offsetof(UFortAIEncounterInfo_Smash, BaseDesiredUtilities) == 852, "Offset mismatch for UFortAIEncounterInfo_Smash::BaseDesiredUtilities");
static_assert(offsetof(UFortAIEncounterInfo_Smash, UtilitiesRequiredTags) == 920, "Offset mismatch for UFortAIEncounterInfo_Smash::UtilitiesRequiredTags");
static_assert(offsetof(UFortAIEncounterInfo_Smash, InjectedTagForUtilityCheck) == 1432, "Offset mismatch for UFortAIEncounterInfo_Smash::InjectedTagForUtilityCheck");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxLargeSpawnGroupDiscountInterval) == 1468, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxLargeSpawnGroupDiscountInterval");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxSelectionToSpawningDelay) == 1472, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxSelectionToSpawningDelay");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentDesiredUtilities) == 1496, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentDesiredUtilities");
static_assert(offsetof(UFortAIEncounterInfo_Smash, UtilityRecentSelectionPenalties) == 1512, "Offset mismatch for UFortAIEncounterInfo_Smash::UtilityRecentSelectionPenalties");
static_assert(offsetof(UFortAIEncounterInfo_Smash, UtilityEffectivenessMeasurements) == 1576, "Offset mismatch for UFortAIEncounterInfo_Smash::UtilityEffectivenessMeasurements");
static_assert(offsetof(UFortAIEncounterInfo_Smash, UtilityEffectivenessMultiplierCurve) == 1640, "Offset mismatch for UFortAIEncounterInfo_Smash::UtilityEffectivenessMultiplierCurve");
static_assert(offsetof(UFortAIEncounterInfo_Smash, UtilityEffectivenessInfluenceCap) == 1656, "Offset mismatch for UFortAIEncounterInfo_Smash::UtilityEffectivenessInfluenceCap");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentTopUtilityPercentages) == 1664, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentTopUtilityPercentages");
static_assert(offsetof(UFortAIEncounterInfo_Smash, UsedTopUtilities) == 1680, "Offset mismatch for UFortAIEncounterInfo_Smash::UsedTopUtilities");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentlySelectedFreeUtilities) == 1696, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentlySelectedFreeUtilities");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NumUtilitiesConsidered) == 1712, "Offset mismatch for UFortAIEncounterInfo_Smash::NumUtilitiesConsidered");
static_assert(offsetof(UFortAIEncounterInfo_Smash, ReactivityPercentage) == 1716, "Offset mismatch for UFortAIEncounterInfo_Smash::ReactivityPercentage");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bAdjustUtilitiesDuringRest) == 1720, "Offset mismatch for UFortAIEncounterInfo_Smash::bAdjustUtilitiesDuringRest");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bDespawnAIsDuringRest) == 1721, "Offset mismatch for UFortAIEncounterInfo_Smash::bDespawnAIsDuringRest");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LastPlayerCombatFactorUpdateTime) == 1724, "Offset mismatch for UFortAIEncounterInfo_Smash::LastPlayerCombatFactorUpdateTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LastUtilityAdjustTime) == 1728, "Offset mismatch for UFortAIEncounterInfo_Smash::LastUtilityAdjustTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LastSpawnPointAdjustmentTime) == 1732, "Offset mismatch for UFortAIEncounterInfo_Smash::LastSpawnPointAdjustmentTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LastLargeGroupSpawnTime) == 1736, "Offset mismatch for UFortAIEncounterInfo_Smash::LastLargeGroupSpawnTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EnemySpawnData) == 1744, "Offset mismatch for UFortAIEncounterInfo_Smash::EnemySpawnData");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterPIDController) == 1760, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterPIDController");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentSpawnPointsCap) == 1864, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentSpawnPointsCap");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentSpawnPointsUsed) == 1868, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentSpawnPointsUsed");
static_assert(offsetof(UFortAIEncounterInfo_Smash, FailSafeMinSpawnPoints) == 1880, "Offset mismatch for UFortAIEncounterInfo_Smash::FailSafeMinSpawnPoints");
static_assert(offsetof(UFortAIEncounterInfo_Smash, ActiveSpawnGroups) == 1888, "Offset mismatch for UFortAIEncounterInfo_Smash::ActiveSpawnGroups");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterEngagementDistance) == 1904, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterEngagementDistance");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MinRelevantBuildingDamagedDistance) == 1908, "Offset mismatch for UFortAIEncounterInfo_Smash::MinRelevantBuildingDamagedDistance");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxRelevantBuildingDamagedDistance) == 1912, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxRelevantBuildingDamagedDistance");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentGroupSpawnPoint) == 1936, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentGroupSpawnPoint");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterState) == 1944, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterState");
static_assert(offsetof(UFortAIEncounterInfo_Smash, PacingState) == 1945, "Offset mismatch for UFortAIEncounterInfo_Smash::PacingState");
static_assert(offsetof(UFortAIEncounterInfo_Smash, LastPacingStateTransitionTime) == 1948, "Offset mismatch for UFortAIEncounterInfo_Smash::LastPacingStateTransitionTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, WaveProgressEstimate) == 1952, "Offset mismatch for UFortAIEncounterInfo_Smash::WaveProgressEstimate");
static_assert(offsetof(UFortAIEncounterInfo_Smash, DesiredDifficultyLevel) == 1980, "Offset mismatch for UFortAIEncounterInfo_Smash::DesiredDifficultyLevel");
static_assert(offsetof(UFortAIEncounterInfo_Smash, DifficultyLevelOverride) == 1984, "Offset mismatch for UFortAIEncounterInfo_Smash::DifficultyLevelOverride");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MyAIDirector) == 1992, "Offset mismatch for UFortAIEncounterInfo_Smash::MyAIDirector");
static_assert(offsetof(UFortAIEncounterInfo_Smash, DataManagers) == 2000, "Offset mismatch for UFortAIEncounterInfo_Smash::DataManagers");
static_assert(offsetof(UFortAIEncounterInfo_Smash, TargetObjective) == 2016, "Offset mismatch for UFortAIEncounterInfo_Smash::TargetObjective");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bOnlyActiveAtNight) == 2024, "Offset mismatch for UFortAIEncounterInfo_Smash::bOnlyActiveAtNight");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NumRiftsToUse) == 2028, "Offset mismatch for UFortAIEncounterInfo_Smash::NumRiftsToUse");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MinRiftsToUse) == 2032, "Offset mismatch for UFortAIEncounterInfo_Smash::MinRiftsToUse");
static_assert(offsetof(UFortAIEncounterInfo_Smash, NumRiftsUsed) == 2036, "Offset mismatch for UFortAIEncounterInfo_Smash::NumRiftsUsed");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterSettings) == 2040, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterSettings");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterStartTime) == 2272, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterStartTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, HostilityCurveStartTime) == 2276, "Offset mismatch for UFortAIEncounterInfo_Smash::HostilityCurveStartTime");
static_assert(offsetof(UFortAIEncounterInfo_Smash, DefaultEnvironmentQueryInfo) == 2280, "Offset mismatch for UFortAIEncounterInfo_Smash::DefaultEnvironmentQueryInfo");
static_assert(offsetof(UFortAIEncounterInfo_Smash, FallbackEnvironmentQueryInfo) == 2320, "Offset mismatch for UFortAIEncounterInfo_Smash::FallbackEnvironmentQueryInfo");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OverrideEnvironmentQueryInfo) == 2360, "Offset mismatch for UFortAIEncounterInfo_Smash::OverrideEnvironmentQueryInfo");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentEnvironmentQueryInfo) == 2400, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentEnvironmentQueryInfo");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bNukeWavesAtDaybreak) == 2440, "Offset mismatch for UFortAIEncounterInfo_Smash::bNukeWavesAtDaybreak");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bNukeWavesAtEncounterEnd) == 2441, "Offset mismatch for UFortAIEncounterInfo_Smash::bNukeWavesAtEncounterEnd");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bNukeWavesAtEncounterDeactivation) == 2442, "Offset mismatch for UFortAIEncounterInfo_Smash::bNukeWavesAtEncounterDeactivation");
static_assert(offsetof(UFortAIEncounterInfo_Smash, ActiveEnemyCap) == 2444, "Offset mismatch for UFortAIEncounterInfo_Smash::ActiveEnemyCap");
static_assert(offsetof(UFortAIEncounterInfo_Smash, CurrentHostilityLevel) == 2456, "Offset mismatch for UFortAIEncounterInfo_Smash::CurrentHostilityLevel");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterRampStarted) == 2464, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterRampStarted");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterPeakStarted) == 2480, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterPeakStarted");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterFadeStarted) == 2496, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterFadeStarted");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterRestStarted) == 2512, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterRestStarted");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterCombatParticipation) == 2528, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterCombatParticipation");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OnEncounterOptionsChanged) == 2544, "Offset mismatch for UFortAIEncounterInfo_Smash::OnEncounterOptionsChanged");
static_assert(offsetof(UFortAIEncounterInfo_Smash, RiftClassTemplate) == 2560, "Offset mismatch for UFortAIEncounterInfo_Smash::RiftClassTemplate");
static_assert(offsetof(UFortAIEncounterInfo_Smash, ExternalAISpawners) == 2600, "Offset mismatch for UFortAIEncounterInfo_Smash::ExternalAISpawners");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterQueryData) == 2616, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterQueryData");
static_assert(offsetof(UFortAIEncounterInfo_Smash, RiftManager) == 2648, "Offset mismatch for UFortAIEncounterInfo_Smash::RiftManager");
static_assert(offsetof(UFortAIEncounterInfo_Smash, AssociatedMissionName) == 2656, "Offset mismatch for UFortAIEncounterInfo_Smash::AssociatedMissionName");
static_assert(offsetof(UFortAIEncounterInfo_Smash, AssociatedMissionType) == 2672, "Offset mismatch for UFortAIEncounterInfo_Smash::AssociatedMissionType");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bCanBeActive) == 2676, "Offset mismatch for UFortAIEncounterInfo_Smash::bCanBeActive");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterAssignments) == 2680, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterAssignments");
static_assert(offsetof(UFortAIEncounterInfo_Smash, DefaultEncounterAssignmentSettings) == 2696, "Offset mismatch for UFortAIEncounterInfo_Smash::DefaultEncounterAssignmentSettings");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxActiveAlive) == 2752, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxActiveAlive");
static_assert(offsetof(UFortAIEncounterInfo_Smash, MaxSpawnPointsUsed) == 2756, "Offset mismatch for UFortAIEncounterInfo_Smash::MaxSpawnPointsUsed");
static_assert(offsetof(UFortAIEncounterInfo_Smash, OverrideSpawnPointsCurve) == 2760, "Offset mismatch for UFortAIEncounterInfo_Smash::OverrideSpawnPointsCurve");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bSendFullAnalyticsReport) == 3144, "Offset mismatch for UFortAIEncounterInfo_Smash::bSendFullAnalyticsReport");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bUseAILifespans) == 3145, "Offset mismatch for UFortAIEncounterInfo_Smash::bUseAILifespans");
static_assert(offsetof(UFortAIEncounterInfo_Smash, bTrackCombatParticipation) == 3146, "Offset mismatch for UFortAIEncounterInfo_Smash::bTrackCombatParticipation");
static_assert(offsetof(UFortAIEncounterInfo_Smash, ModifierTags) == 3152, "Offset mismatch for UFortAIEncounterInfo_Smash::ModifierTags");
static_assert(offsetof(UFortAIEncounterInfo_Smash, TimedModifierTags) == 3184, "Offset mismatch for UFortAIEncounterInfo_Smash::TimedModifierTags");
static_assert(offsetof(UFortAIEncounterInfo_Smash, GameContextTags) == 3200, "Offset mismatch for UFortAIEncounterInfo_Smash::GameContextTags");
static_assert(offsetof(UFortAIEncounterInfo_Smash, AILevelMutator) == 3232, "Offset mismatch for UFortAIEncounterInfo_Smash::AILevelMutator");
static_assert(offsetof(UFortAIEncounterInfo_Smash, EncounterModifierTagsMutators) == 3240, "Offset mismatch for UFortAIEncounterInfo_Smash::EncounterModifierTagsMutators");

// /Script/SmashRuntime.FortCheatManager_Smash
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_Smash
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmashRuntime.FortDifficultyOptionEncounter_Smash
// Kind: Class; super: FortDifficultyOptionEncounter_FixedPace
class UFortDifficultyOptionEncounter_Smash
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t RiftSpawnInterval[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t RiftSpawnCount[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t AIMaxCount[0x28]; // 0x0098 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIMaxCountPlayerMultiplier[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIMaxCountDifficultyMultiplier[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIIntervalTime[0x28]; // 0x0110 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIIntervalTimePlayerMultiplier[0x28]; // 0x0138 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIIntervalTimeDifficultyMultiplier[0x28]; // 0x0160 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIIntervalCount[0x28]; // 0x0188 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIIntervalCountPlayerMultiplier[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnAIIntervalCountDifficultyMultiplier[0x1]; // 0x01D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, RiftSpawnInterval) == 72, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::RiftSpawnInterval");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, RiftSpawnCount) == 112, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::RiftSpawnCount");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, AIMaxCount) == 152, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::AIMaxCount");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIMaxCountPlayerMultiplier) == 192, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIMaxCountPlayerMultiplier");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIMaxCountDifficultyMultiplier) == 232, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIMaxCountDifficultyMultiplier");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIIntervalTime) == 272, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIIntervalTime");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIIntervalTimePlayerMultiplier) == 312, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIIntervalTimePlayerMultiplier");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIIntervalTimeDifficultyMultiplier) == 352, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIIntervalTimeDifficultyMultiplier");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIIntervalCount) == 392, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIIntervalCount");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIIntervalCountPlayerMultiplier) == 432, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIIntervalCountPlayerMultiplier");
static_assert(offsetof(UFortDifficultyOptionEncounter_Smash, SpawnAIIntervalCountDifficultyMultiplier) == 472, "Offset mismatch for UFortDifficultyOptionEncounter_Smash::SpawnAIIntervalCountDifficultyMultiplier");

// /Script/SmashRuntime.FortGameStateComponent_Smash
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_Smash
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TMap<void*, void*> EncounterDataBySafeZoneIndexMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
    void* EncounterInfoClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ReplicatedEncounterData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00F0
    std::uint8_t bAllowStackingAISpecialEncountersInEndlessMode[0x30]; // 0x00F8 (Size: 0x30, Type: StructProperty)
    void* CurrentSpecialEncounter; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0130
    TArray<void*> StackedEndlessAISpecialEncounters; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    void* CurrentEncounterAlteration; // 0x0148 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameStateComponent_Smash, EncounterDataBySafeZoneIndexMap) == 200, "Offset mismatch for UFortGameStateComponent_Smash::EncounterDataBySafeZoneIndexMap");
static_assert(offsetof(UFortGameStateComponent_Smash, EncounterInfoClass) == 216, "Offset mismatch for UFortGameStateComponent_Smash::EncounterInfoClass");
static_assert(offsetof(UFortGameStateComponent_Smash, ReplicatedEncounterData) == 224, "Offset mismatch for UFortGameStateComponent_Smash::ReplicatedEncounterData");
static_assert(offsetof(UFortGameStateComponent_Smash, bAllowStackingAISpecialEncountersInEndlessMode) == 248, "Offset mismatch for UFortGameStateComponent_Smash::bAllowStackingAISpecialEncountersInEndlessMode");
static_assert(offsetof(UFortGameStateComponent_Smash, CurrentSpecialEncounter) == 296, "Offset mismatch for UFortGameStateComponent_Smash::CurrentSpecialEncounter");
static_assert(offsetof(UFortGameStateComponent_Smash, StackedEndlessAISpecialEncounters) == 312, "Offset mismatch for UFortGameStateComponent_Smash::StackedEndlessAISpecialEncounters");
static_assert(offsetof(UFortGameStateComponent_Smash, CurrentEncounterAlteration) == 328, "Offset mismatch for UFortGameStateComponent_Smash::CurrentEncounterAlteration");

// /Script/SmashRuntime.SmashEncounterAlteration
// Kind: Class; super: SmashEncounterSharedBase
class USmashEncounterAlteration
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* PlayerGE; // 0x0038 (Size: 0x8, Type: ClassProperty)
    void* EnemyGE; // 0x0040 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bApplyEnemyGEToSpecialEnemies[0x30]; // 0x0048 (Size: 0x30, Type: StructProperty)
    TMap<void*, void*> OverrideSpawnGroupWeights; // 0x0078 (Size: 0x10, Type: MapProperty)
    std::uint8_t bZeroOutNonSpecifiedSpawnGroupWeights[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    std::uint8_t OverrideRiftSpawnInterval[0x30]; // 0x00B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OverrideRiftSpawnCount[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t OverrideAIMaxCount[0x30]; // 0x0118 (Size: 0x30, Type: StructProperty)
    std::uint8_t OverrideSpawnAIIntervalTime[0x30]; // 0x0148 (Size: 0x30, Type: StructProperty)
    std::uint8_t OverrideSpawnAIIntervalCount[0x30]; // 0x0178 (Size: 0x30, Type: StructProperty)
    void* UrgentQuest; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmashEncounterAlteration, PlayerGE) == 56, "Offset mismatch for USmashEncounterAlteration::PlayerGE");
static_assert(offsetof(USmashEncounterAlteration, EnemyGE) == 64, "Offset mismatch for USmashEncounterAlteration::EnemyGE");
static_assert(offsetof(USmashEncounterAlteration, bApplyEnemyGEToSpecialEnemies) == 72, "Offset mismatch for USmashEncounterAlteration::bApplyEnemyGEToSpecialEnemies");
static_assert(offsetof(USmashEncounterAlteration, OverrideSpawnGroupWeights) == 120, "Offset mismatch for USmashEncounterAlteration::OverrideSpawnGroupWeights");
static_assert(offsetof(USmashEncounterAlteration, bZeroOutNonSpecifiedSpawnGroupWeights) == 136, "Offset mismatch for USmashEncounterAlteration::bZeroOutNonSpecifiedSpawnGroupWeights");
static_assert(offsetof(USmashEncounterAlteration, OverrideRiftSpawnInterval) == 184, "Offset mismatch for USmashEncounterAlteration::OverrideRiftSpawnInterval");
static_assert(offsetof(USmashEncounterAlteration, OverrideRiftSpawnCount) == 232, "Offset mismatch for USmashEncounterAlteration::OverrideRiftSpawnCount");
static_assert(offsetof(USmashEncounterAlteration, OverrideAIMaxCount) == 280, "Offset mismatch for USmashEncounterAlteration::OverrideAIMaxCount");
static_assert(offsetof(USmashEncounterAlteration, OverrideSpawnAIIntervalTime) == 328, "Offset mismatch for USmashEncounterAlteration::OverrideSpawnAIIntervalTime");
static_assert(offsetof(USmashEncounterAlteration, OverrideSpawnAIIntervalCount) == 376, "Offset mismatch for USmashEncounterAlteration::OverrideSpawnAIIntervalCount");
static_assert(offsetof(USmashEncounterAlteration, UrgentQuest) == 424, "Offset mismatch for USmashEncounterAlteration::UrgentQuest");

// /Script/SmashRuntime.SmashEncounterSharedBase
// Kind: Class; super: Object
class USmashEncounterSharedBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmashRuntime.SmashSpecialEncounter
// Kind: Class; super: SmashEncounterSharedBase
class USmashSpecialEncounter
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t OverrideSafeZoneRadius[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USmashSpecialEncounter, OverrideSafeZoneRadius) == 56, "Offset mismatch for USmashSpecialEncounter::OverrideSafeZoneRadius");

// /Script/SmashRuntime.SmashSpecialEncounter_AI
// Kind: Class; super: SmashSpecialEncounter_Actor
class USmashSpecialEncounter_AI
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t AIEncounterType; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t AISkillValue[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    TArray<void*> InitialGameplayEffectByPlayerCount; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USmashSpecialEncounter_AI, AIEncounterType) == 128, "Offset mismatch for USmashSpecialEncounter_AI::AIEncounterType");
static_assert(offsetof(USmashSpecialEncounter_AI, AISkillValue) == 136, "Offset mismatch for USmashSpecialEncounter_AI::AISkillValue");
static_assert(offsetof(USmashSpecialEncounter_AI, InitialGameplayEffectByPlayerCount) == 184, "Offset mismatch for USmashSpecialEncounter_AI::InitialGameplayEffectByPlayerCount");

// /Script/SmashRuntime.SmashSpecialEncounter_Actor
// Kind: Class; super: SmashSpecialEncounter
class USmashSpecialEncounter_Actor
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SpawnerDataAssetId[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    void* SpawnLocationQuery; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* EncounterActor; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmashSpecialEncounter_Actor, SpawnerDataAssetId) == 104, "Offset mismatch for USmashSpecialEncounter_Actor::SpawnerDataAssetId");
static_assert(offsetof(USmashSpecialEncounter_Actor, SpawnLocationQuery) == 112, "Offset mismatch for USmashSpecialEncounter_Actor::SpawnLocationQuery");
static_assert(offsetof(USmashSpecialEncounter_Actor, EncounterActor) == 120, "Offset mismatch for USmashSpecialEncounter_Actor::EncounterActor");

// /Script/SmashRuntime.SmashSpecialEncounter_Quest
// Kind: Class; super: SmashSpecialEncounter
class USmashSpecialEncounter_Quest
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* QuestToGive; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> QuestActorSpawnInfo; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    void* QuestActorSpawnLocationQuery; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    float QuestActorLifeSpan; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x008C
    TArray<void*> QuestActorsSpawned; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USmashSpecialEncounter_Quest, QuestToGive) == 104, "Offset mismatch for USmashSpecialEncounter_Quest::QuestToGive");
static_assert(offsetof(USmashSpecialEncounter_Quest, QuestActorSpawnInfo) == 112, "Offset mismatch for USmashSpecialEncounter_Quest::QuestActorSpawnInfo");
static_assert(offsetof(USmashSpecialEncounter_Quest, QuestActorSpawnLocationQuery) == 128, "Offset mismatch for USmashSpecialEncounter_Quest::QuestActorSpawnLocationQuery");
static_assert(offsetof(USmashSpecialEncounter_Quest, QuestActorLifeSpan) == 136, "Offset mismatch for USmashSpecialEncounter_Quest::QuestActorLifeSpan");
static_assert(offsetof(USmashSpecialEncounter_Quest, QuestActorsSpawned) == 144, "Offset mismatch for USmashSpecialEncounter_Quest::QuestActorsSpawned");
