/**
 * decamp dumper generated SDK
 * Package: /Script/AIProgressBarRuntime
 */
#pragma once
#include "Basic.h"

// /Script/AIProgressBarRuntime.AIProgressBarStageData
// Kind: ScriptStruct; super: none
struct FAIProgressBarStageData
{
public:
    TArray<void*> GoalTarget; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Phase; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bDespawnWave; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float PostStageDelay; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAdvancesLWEncounterStage; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldPlayTransitionOnStageFinished; // 0x001D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAIProgressBarStageData, GoalTarget) == 0, "Offset mismatch for FAIProgressBarStageData::GoalTarget");
static_assert(offsetof(FAIProgressBarStageData, Phase) == 16, "Offset mismatch for FAIProgressBarStageData::Phase");
static_assert(offsetof(FAIProgressBarStageData, bDespawnWave) == 20, "Offset mismatch for FAIProgressBarStageData::bDespawnWave");
static_assert(offsetof(FAIProgressBarStageData, PostStageDelay) == 24, "Offset mismatch for FAIProgressBarStageData::PostStageDelay");
static_assert(offsetof(FAIProgressBarStageData, bAdvancesLWEncounterStage) == 28, "Offset mismatch for FAIProgressBarStageData::bAdvancesLWEncounterStage");
static_assert(offsetof(FAIProgressBarStageData, bShouldPlayTransitionOnStageFinished) == 29, "Offset mismatch for FAIProgressBarStageData::bShouldPlayTransitionOnStageFinished");

// /Script/AIProgressBarRuntime.ChallengeManagerBase
// Kind: Class; super: Actor
class UChallengeManagerBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FMulticastInlineDelegate OnBossProgressUpdated; // 0x0270 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCurrentStateUpdated; // 0x0280 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnChallengeBegun; // 0x0290 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStageAdvanced; // 0x02A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBossReadyForFinalFight; // 0x02B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTotalProgressUpdated; // 0x02C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* EncounterRef; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ChallengeIDTag[0x8]; // 0x02D8 (Size: 0x8, Type: StructProperty)
    std::uint8_t LooseTagToApplyWhileInChallenge[0x20]; // 0x02E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CurrentChallengeID[0x4]; // 0x0300 (Size: 0x4, Type: StructProperty)
    std::uint8_t bBossDeathCompletesChallenge; // 0x0304 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0305
    std::uint8_t BossIDTag[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* BossActor; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsBossReadyForFinalFight; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0319
    TArray<void*> StageData; // 0x0320 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCountMinionDeathForProgress; // 0x0330 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0331
    double BossProgress; // 0x0338 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t CurrentState; // 0x0340 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0341
    std::int32_t CurrentStage; // 0x0344 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPhase; // 0x0348 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPhaseProgress; // 0x034C (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentPhaseProgressTarget; // 0x0350 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0354
    TArray<void*> PhaseProgressTargets; // 0x0358 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TotalProgress; // 0x0368 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0006[0x4]; // 0x036C
    TArray<void*> TotalProgressToStageAdvance; // 0x0370 (Size: 0x10, Type: ArrayProperty)
    std::int32_t GoalTargetIndexByPlaylist; // 0x0380 (Size: 0x4, Type: IntProperty)
    std::uint8_t CurrentPhaseMusicTag[0x4]; // 0x0384 (Size: 0x4, Type: StructProperty)
    TArray<void*> PhaseMusicTags; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RowDisableMapIconOnBossSpawn[0x1]; // 0x0398 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UChallengeManagerBase, OnBossProgressUpdated) == 624, "Offset mismatch for UChallengeManagerBase::OnBossProgressUpdated");
static_assert(offsetof(UChallengeManagerBase, OnCurrentStateUpdated) == 640, "Offset mismatch for UChallengeManagerBase::OnCurrentStateUpdated");
static_assert(offsetof(UChallengeManagerBase, OnChallengeBegun) == 656, "Offset mismatch for UChallengeManagerBase::OnChallengeBegun");
static_assert(offsetof(UChallengeManagerBase, OnStageAdvanced) == 672, "Offset mismatch for UChallengeManagerBase::OnStageAdvanced");
static_assert(offsetof(UChallengeManagerBase, OnBossReadyForFinalFight) == 688, "Offset mismatch for UChallengeManagerBase::OnBossReadyForFinalFight");
static_assert(offsetof(UChallengeManagerBase, OnTotalProgressUpdated) == 704, "Offset mismatch for UChallengeManagerBase::OnTotalProgressUpdated");
static_assert(offsetof(UChallengeManagerBase, EncounterRef) == 720, "Offset mismatch for UChallengeManagerBase::EncounterRef");
static_assert(offsetof(UChallengeManagerBase, ChallengeIDTag) == 728, "Offset mismatch for UChallengeManagerBase::ChallengeIDTag");
static_assert(offsetof(UChallengeManagerBase, LooseTagToApplyWhileInChallenge) == 736, "Offset mismatch for UChallengeManagerBase::LooseTagToApplyWhileInChallenge");
static_assert(offsetof(UChallengeManagerBase, CurrentChallengeID) == 768, "Offset mismatch for UChallengeManagerBase::CurrentChallengeID");
static_assert(offsetof(UChallengeManagerBase, bBossDeathCompletesChallenge) == 772, "Offset mismatch for UChallengeManagerBase::bBossDeathCompletesChallenge");
static_assert(offsetof(UChallengeManagerBase, BossIDTag) == 776, "Offset mismatch for UChallengeManagerBase::BossIDTag");
static_assert(offsetof(UChallengeManagerBase, BossActor) == 784, "Offset mismatch for UChallengeManagerBase::BossActor");
static_assert(offsetof(UChallengeManagerBase, bIsBossReadyForFinalFight) == 792, "Offset mismatch for UChallengeManagerBase::bIsBossReadyForFinalFight");
static_assert(offsetof(UChallengeManagerBase, StageData) == 800, "Offset mismatch for UChallengeManagerBase::StageData");
static_assert(offsetof(UChallengeManagerBase, bCountMinionDeathForProgress) == 816, "Offset mismatch for UChallengeManagerBase::bCountMinionDeathForProgress");
static_assert(offsetof(UChallengeManagerBase, BossProgress) == 824, "Offset mismatch for UChallengeManagerBase::BossProgress");
static_assert(offsetof(UChallengeManagerBase, CurrentState) == 832, "Offset mismatch for UChallengeManagerBase::CurrentState");
static_assert(offsetof(UChallengeManagerBase, CurrentStage) == 836, "Offset mismatch for UChallengeManagerBase::CurrentStage");
static_assert(offsetof(UChallengeManagerBase, CurrentPhase) == 840, "Offset mismatch for UChallengeManagerBase::CurrentPhase");
static_assert(offsetof(UChallengeManagerBase, CurrentPhaseProgress) == 844, "Offset mismatch for UChallengeManagerBase::CurrentPhaseProgress");
static_assert(offsetof(UChallengeManagerBase, CurrentPhaseProgressTarget) == 848, "Offset mismatch for UChallengeManagerBase::CurrentPhaseProgressTarget");
static_assert(offsetof(UChallengeManagerBase, PhaseProgressTargets) == 856, "Offset mismatch for UChallengeManagerBase::PhaseProgressTargets");
static_assert(offsetof(UChallengeManagerBase, TotalProgress) == 872, "Offset mismatch for UChallengeManagerBase::TotalProgress");
static_assert(offsetof(UChallengeManagerBase, TotalProgressToStageAdvance) == 880, "Offset mismatch for UChallengeManagerBase::TotalProgressToStageAdvance");
static_assert(offsetof(UChallengeManagerBase, GoalTargetIndexByPlaylist) == 896, "Offset mismatch for UChallengeManagerBase::GoalTargetIndexByPlaylist");
static_assert(offsetof(UChallengeManagerBase, CurrentPhaseMusicTag) == 900, "Offset mismatch for UChallengeManagerBase::CurrentPhaseMusicTag");
static_assert(offsetof(UChallengeManagerBase, PhaseMusicTags) == 904, "Offset mismatch for UChallengeManagerBase::PhaseMusicTags");
static_assert(offsetof(UChallengeManagerBase, RowDisableMapIconOnBossSpawn) == 920, "Offset mismatch for UChallengeManagerBase::RowDisableMapIconOnBossSpawn");
