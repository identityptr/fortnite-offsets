/**
 * decamp dumper generated SDK
 * Package: /Script/TrendConcentrateRuntime
 */
#pragma once
#include "Basic.h"

// /Script/TrendConcentrateRuntime.DBNODirectionalRollEntry
// Kind: ScriptStruct; super: none
struct FDBNODirectionalRollEntry
{
public:
    float MaxAngleDegrees; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* Montage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RollDirectionTag[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDBNODirectionalRollEntry, MaxAngleDegrees) == 0, "Offset mismatch for FDBNODirectionalRollEntry::MaxAngleDegrees");
static_assert(offsetof(FDBNODirectionalRollEntry, Montage) == 8, "Offset mismatch for FDBNODirectionalRollEntry::Montage");
static_assert(offsetof(FDBNODirectionalRollEntry, RollDirectionTag) == 16, "Offset mismatch for FDBNODirectionalRollEntry::RollDirectionTag");

// /Script/TrendConcentrateRuntime.ABPTrendConcentrateDBNORagdollLayerAnimInstance
// Kind: Class; super: FortDBNOAnimInstance
class UABPTrendConcentrateDBNORagdollLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x11B0]; // 0x0000
    std::uint8_t bIsDBNORagdoll; // 0x11B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x11B1
    double TumblePlayRate; // 0x11B8 (Size: 0x8, Type: DoubleProperty)
    float MinRollSpeed; // 0x11C0 (Size: 0x4, Type: FloatProperty)
    float MaxRollSpeed; // 0x11C4 (Size: 0x4, Type: FloatProperty)
    float MinRollAnimSpeed; // 0x11C8 (Size: 0x4, Type: FloatProperty)
    float MaxRollAnimSpeed; // 0x11CC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UABPTrendConcentrateDBNORagdollLayerAnimInstance, bIsDBNORagdoll) == 4528, "Offset mismatch for UABPTrendConcentrateDBNORagdollLayerAnimInstance::bIsDBNORagdoll");
static_assert(offsetof(UABPTrendConcentrateDBNORagdollLayerAnimInstance, TumblePlayRate) == 4536, "Offset mismatch for UABPTrendConcentrateDBNORagdollLayerAnimInstance::TumblePlayRate");
static_assert(offsetof(UABPTrendConcentrateDBNORagdollLayerAnimInstance, MinRollSpeed) == 4544, "Offset mismatch for UABPTrendConcentrateDBNORagdollLayerAnimInstance::MinRollSpeed");
static_assert(offsetof(UABPTrendConcentrateDBNORagdollLayerAnimInstance, MaxRollSpeed) == 4548, "Offset mismatch for UABPTrendConcentrateDBNORagdollLayerAnimInstance::MaxRollSpeed");
static_assert(offsetof(UABPTrendConcentrateDBNORagdollLayerAnimInstance, MinRollAnimSpeed) == 4552, "Offset mismatch for UABPTrendConcentrateDBNORagdollLayerAnimInstance::MinRollAnimSpeed");
static_assert(offsetof(UABPTrendConcentrateDBNORagdollLayerAnimInstance, MaxRollAnimSpeed) == 4556, "Offset mismatch for UABPTrendConcentrateDBNORagdollLayerAnimInstance::MaxRollAnimSpeed");

// /Script/TrendConcentrateRuntime.ABPTrendConcentrateImpulseRollLayerAnimInstance
// Kind: Class; super: FortDBNOAnimInstance
class UABPTrendConcentrateImpulseRollLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x11B0]; // 0x0000
    float RootOffsetAlpha; // 0x11B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x11B4
    double RootOffset; // 0x11B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TagContainerBwd[0x20]; // 0x11C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagContainerFwd[0x20]; // 0x11E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ImpulsedTagName[0x1]; // 0x1200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UABPTrendConcentrateImpulseRollLayerAnimInstance, RootOffsetAlpha) == 4528, "Offset mismatch for UABPTrendConcentrateImpulseRollLayerAnimInstance::RootOffsetAlpha");
static_assert(offsetof(UABPTrendConcentrateImpulseRollLayerAnimInstance, RootOffset) == 4536, "Offset mismatch for UABPTrendConcentrateImpulseRollLayerAnimInstance::RootOffset");
static_assert(offsetof(UABPTrendConcentrateImpulseRollLayerAnimInstance, TagContainerBwd) == 4544, "Offset mismatch for UABPTrendConcentrateImpulseRollLayerAnimInstance::TagContainerBwd");
static_assert(offsetof(UABPTrendConcentrateImpulseRollLayerAnimInstance, TagContainerFwd) == 4576, "Offset mismatch for UABPTrendConcentrateImpulseRollLayerAnimInstance::TagContainerFwd");
static_assert(offsetof(UABPTrendConcentrateImpulseRollLayerAnimInstance, ImpulsedTagName) == 4608, "Offset mismatch for UABPTrendConcentrateImpulseRollLayerAnimInstance::ImpulsedTagName");

// /Script/TrendConcentrateRuntime.FortBTService_TrendConcentrateActions
// Kind: Class; super: BTService
class UFortBTService_TrendConcentrateActions
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float Interval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float RandomDeviation; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCallTickOnSearchStart; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bRestartTimerOnEachActivation (shared storage)
};

static_assert(offsetof(UFortBTService_TrendConcentrateActions, Interval) == 96, "Offset mismatch for UFortBTService_TrendConcentrateActions::Interval");
static_assert(offsetof(UFortBTService_TrendConcentrateActions, RandomDeviation) == 100, "Offset mismatch for UFortBTService_TrendConcentrateActions::RandomDeviation");
static_assert(offsetof(UFortBTService_TrendConcentrateActions, bCallTickOnSearchStart) == 104, "Offset mismatch for UFortBTService_TrendConcentrateActions::bCallTickOnSearchStart");

// /Script/TrendConcentrateRuntime.FortMovementMode_DBNOSprintRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_DBNOSprintRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_DBNOSprintRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_DBNOSprintRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_DBNOSprintRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_DBNOSprintRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_DBNOSprintRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_DBNOSprintRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_DBNOSprintRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_DBNOSprintRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_DBNOSprintRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_DBNOSprintRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_DBNOSprintRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_DBNOSprintRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_DBNOSprintRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_DBNOSprintRuntimeData::EndReasonFlags");

// /Script/TrendConcentrateRuntime.FortMovementMode_ExtLogicDBNORoll
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_ExtLogicDBNORoll
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    std::uint8_t RollEnergyCost[0x28]; // 0x05A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollDuration[0x28]; // 0x05C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollDistance[0x28]; // 0x05F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RollTags[0x20]; // 0x0618 (Size: 0x20, Type: StructProperty)
    std::uint8_t DBNORollEnabled[0x28]; // 0x0638 (Size: 0x28, Type: StructProperty)
    std::uint8_t TagsThatBlockRoll[0x20]; // 0x0660 (Size: 0x20, Type: StructProperty)
    std::uint8_t DBNORollCooldown[0x28]; // 0x0680 (Size: 0x28, Type: StructProperty)
    void* AnimLayer; // 0x06A8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> SortedDBNORollEntries; // 0x06B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, RollEnergyCost) == 1440, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::RollEnergyCost");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, RollDuration) == 1480, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::RollDuration");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, RollDistance) == 1520, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::RollDistance");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, RollTags) == 1560, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::RollTags");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, DBNORollEnabled) == 1592, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::DBNORollEnabled");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, TagsThatBlockRoll) == 1632, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::TagsThatBlockRoll");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, DBNORollCooldown) == 1664, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::DBNORollCooldown");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, AnimLayer) == 1704, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::AnimLayer");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNORoll, SortedDBNORollEntries) == 1712, "Offset mismatch for UFortMovementMode_ExtLogicDBNORoll::SortedDBNORollEntries");

// /Script/TrendConcentrateRuntime.FortMovementMode_ExtLogicDBNOSprint
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicDBNOSprint
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t MinimumEnergy[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SprintCostPerSecond[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t EnergyUseIdentifier[0x4]; // 0x0208 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpeedlinesCue[0x4]; // 0x020C (Size: 0x4, Type: StructProperty)
    std::uint8_t CamShakeCue[0x8]; // 0x0210 (Size: 0x8, Type: StructProperty)
    void* DBNOSprintGE; // 0x0218 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SprintSpeedMultiplier[0x28]; // 0x0220 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNOSprintEnabled[0x28]; // 0x0248 (Size: 0x28, Type: StructProperty)
    std::uint8_t TagsThatBlockSprint[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, MinimumEnergy) == 440, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::MinimumEnergy");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, SprintCostPerSecond) == 480, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::SprintCostPerSecond");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, EnergyUseIdentifier) == 520, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::EnergyUseIdentifier");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, SpeedlinesCue) == 524, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::SpeedlinesCue");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, CamShakeCue) == 528, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::CamShakeCue");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, DBNOSprintGE) == 536, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::DBNOSprintGE");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, SprintSpeedMultiplier) == 544, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::SprintSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, DBNOSprintEnabled) == 584, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::DBNOSprintEnabled");
static_assert(offsetof(UFortMovementMode_ExtLogicDBNOSprint, TagsThatBlockSprint) == 624, "Offset mismatch for UFortMovementMode_ExtLogicDBNOSprint::TagsThatBlockSprint");

// /Script/TrendConcentrateRuntime.FortMovementMode_ExtLogicRagdollBase
// Kind: Class; super: FortMovementMode_ExtLogicRagdoll
class UFortMovementMode_ExtLogicRagdollBase
{
public:
    std::uint8_t Pad_0000[0x1C0]; // 0x0000
    std::uint8_t MaxGroundActiveTime[0x28]; // 0x01C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinimumGroundActiveTime[0x28]; // 0x01E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinHorizontalSpeed[0x28]; // 0x0210 (Size: 0x28, Type: StructProperty)
    std::uint8_t AcceptableMaxSlopeAngle[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t InputInfluenceMultiplier[0x28]; // 0x0260 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBrakingDeceleration[0x8]; // 0x0288 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t DBNORagdollEnabled[0x28]; // 0x0290 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORagdollCooldown[0x28]; // 0x02B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t RagdollStatusTag[0x4]; // 0x02E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t RagdollIsAllowedTag[0x4]; // 0x02E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AdditionalTagsToPush[0x20]; // 0x02E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t PreventHolsterTags[0x20]; // 0x0308 (Size: 0x20, Type: StructProperty)
    std::uint8_t bWeaponHolsterIsApplicable; // 0x0328 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0329
    std::uint8_t DisableJumpInputTime[0x28]; // 0x0330 (Size: 0x28, Type: StructProperty)
    void* IntroAnimMontageDefault; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* OutroAnimMontageDefault; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    void* OutroAnimMontageOnHit; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowRagdollInAir; // 0x0370 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseRagdollSlowdown; // 0x0371 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0372
    std::uint8_t RagdollSlowdownLength[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    float RagdollDeactivatedTime; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x03A4
    std::uint8_t OutroTimeReductionFactor[0x28]; // 0x03A8 (Size: 0x28, Type: StructProperty)
    void* SlopeAccelerationCurve; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* IntroSpeedCurve; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* OutroSpeedCurve; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x18]; // 0x03E8
    void* RagdollAnimLayer; // 0x0400 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AudioLoopHandle[0x18]; // 0x0408 (Size: 0x18, Type: StructProperty)
    void* AudioLoopGameplayEffect; // 0x0420 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, MaxGroundActiveTime) == 448, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::MaxGroundActiveTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, MinimumGroundActiveTime) == 488, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::MinimumGroundActiveTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, MinHorizontalSpeed) == 528, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::MinHorizontalSpeed");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, AcceptableMaxSlopeAngle) == 568, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::AcceptableMaxSlopeAngle");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, InputInfluenceMultiplier) == 608, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::InputInfluenceMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, MaxBrakingDeceleration) == 648, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::MaxBrakingDeceleration");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, DBNORagdollEnabled) == 656, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::DBNORagdollEnabled");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, DBNORagdollCooldown) == 696, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::DBNORagdollCooldown");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, RagdollStatusTag) == 736, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::RagdollStatusTag");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, RagdollIsAllowedTag) == 740, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::RagdollIsAllowedTag");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, AdditionalTagsToPush) == 744, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::AdditionalTagsToPush");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, PreventHolsterTags) == 776, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::PreventHolsterTags");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, bWeaponHolsterIsApplicable) == 808, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::bWeaponHolsterIsApplicable");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, DisableJumpInputTime) == 816, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::DisableJumpInputTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, IntroAnimMontageDefault) == 856, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::IntroAnimMontageDefault");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, OutroAnimMontageDefault) == 864, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::OutroAnimMontageDefault");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, OutroAnimMontageOnHit) == 872, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::OutroAnimMontageOnHit");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, bAllowRagdollInAir) == 880, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::bAllowRagdollInAir");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, bUseRagdollSlowdown) == 881, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::bUseRagdollSlowdown");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, RagdollSlowdownLength) == 888, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::RagdollSlowdownLength");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, RagdollDeactivatedTime) == 928, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::RagdollDeactivatedTime");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, OutroTimeReductionFactor) == 936, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::OutroTimeReductionFactor");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, SlopeAccelerationCurve) == 976, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::SlopeAccelerationCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, IntroSpeedCurve) == 984, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::IntroSpeedCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, OutroSpeedCurve) == 992, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::OutroSpeedCurve");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, RagdollAnimLayer) == 1024, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::RagdollAnimLayer");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, AudioLoopHandle) == 1032, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::AudioLoopHandle");
static_assert(offsetof(UFortMovementMode_ExtLogicRagdollBase, AudioLoopGameplayEffect) == 1056, "Offset mismatch for UFortMovementMode_ExtLogicRagdollBase::AudioLoopGameplayEffect");

// /Script/TrendConcentrateRuntime.FortTrendConcentratePawnComponent
// Kind: Class; super: FortPawnComponent
class UFortTrendConcentratePawnComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t CleanUpDBNOStatusTagsForBots[0x30]; // 0x00C8 (Size: 0x30, Type: StructProperty)
    void* SprintMovementModeExtension; // 0x00F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DBNOSprintStatusTag[0x4]; // 0x0100 (Size: 0x4, Type: StructProperty)
    std::uint8_t EnoughEnergyToDBNOSprintTag[0xC]; // 0x0104 (Size: 0xC, Type: StructProperty)
    std::uint8_t BotRollDirection[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    void* RollMovementModeExtension; // 0x0128 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DBNORollCooldown[0x28]; // 0x0130 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORollMinEnergyRequired[0x28]; // 0x0158 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORollStatusTag[0x4]; // 0x0180 (Size: 0x4, Type: StructProperty)
    std::uint8_t DBNORollMovementModeTag[0x4]; // 0x0184 (Size: 0x4, Type: StructProperty)
    float DBNORollTriggeredTime; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float FallStartZ; // 0x018C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DBNORagdollSlopeThresholdFromRoll[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORagdollSlopeThresholdFromFall[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORagdollHorizontalSpeedThreshold[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORagdollMinimumFallHeightTrigger[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORagdollInitSpeedFromRoll[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNORagdollInitSpeedFromFall[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    void* RagdollMovementModeExtension; // 0x0280 (Size: 0x8, Type: ClassProperty)
    void* FallSplatAnimMontage; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DBNORagdollExclusionTag[0x4]; // 0x0290 (Size: 0x4, Type: StructProperty)
    std::uint8_t DBNORagdollMovementModeTag[0x4]; // 0x0294 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbilitiesToCancelOnRagdoll[0x20]; // 0x0298 (Size: 0x20, Type: StructProperty)
    std::uint8_t DBNORagdollStatusTag[0x1]; // 0x02B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortTrendConcentratePawnComponent, CleanUpDBNOStatusTagsForBots) == 200, "Offset mismatch for UFortTrendConcentratePawnComponent::CleanUpDBNOStatusTagsForBots");
static_assert(offsetof(UFortTrendConcentratePawnComponent, SprintMovementModeExtension) == 248, "Offset mismatch for UFortTrendConcentratePawnComponent::SprintMovementModeExtension");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNOSprintStatusTag) == 256, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNOSprintStatusTag");
static_assert(offsetof(UFortTrendConcentratePawnComponent, EnoughEnergyToDBNOSprintTag) == 260, "Offset mismatch for UFortTrendConcentratePawnComponent::EnoughEnergyToDBNOSprintTag");
static_assert(offsetof(UFortTrendConcentratePawnComponent, BotRollDirection) == 272, "Offset mismatch for UFortTrendConcentratePawnComponent::BotRollDirection");
static_assert(offsetof(UFortTrendConcentratePawnComponent, RollMovementModeExtension) == 296, "Offset mismatch for UFortTrendConcentratePawnComponent::RollMovementModeExtension");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORollCooldown) == 304, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORollCooldown");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORollMinEnergyRequired) == 344, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORollMinEnergyRequired");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORollStatusTag) == 384, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORollStatusTag");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORollMovementModeTag) == 388, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORollMovementModeTag");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORollTriggeredTime) == 392, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORollTriggeredTime");
static_assert(offsetof(UFortTrendConcentratePawnComponent, FallStartZ) == 396, "Offset mismatch for UFortTrendConcentratePawnComponent::FallStartZ");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollSlopeThresholdFromRoll) == 400, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollSlopeThresholdFromRoll");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollSlopeThresholdFromFall) == 440, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollSlopeThresholdFromFall");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollHorizontalSpeedThreshold) == 480, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollHorizontalSpeedThreshold");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollMinimumFallHeightTrigger) == 520, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollMinimumFallHeightTrigger");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollInitSpeedFromRoll) == 560, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollInitSpeedFromRoll");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollInitSpeedFromFall) == 600, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollInitSpeedFromFall");
static_assert(offsetof(UFortTrendConcentratePawnComponent, RagdollMovementModeExtension) == 640, "Offset mismatch for UFortTrendConcentratePawnComponent::RagdollMovementModeExtension");
static_assert(offsetof(UFortTrendConcentratePawnComponent, FallSplatAnimMontage) == 648, "Offset mismatch for UFortTrendConcentratePawnComponent::FallSplatAnimMontage");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollExclusionTag) == 656, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollExclusionTag");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollMovementModeTag) == 660, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollMovementModeTag");
static_assert(offsetof(UFortTrendConcentratePawnComponent, AbilitiesToCancelOnRagdoll) == 664, "Offset mismatch for UFortTrendConcentratePawnComponent::AbilitiesToCancelOnRagdoll");
static_assert(offsetof(UFortTrendConcentratePawnComponent, DBNORagdollStatusTag) == 696, "Offset mismatch for UFortTrendConcentratePawnComponent::DBNORagdollStatusTag");

// /Script/TrendConcentrateRuntime.RagdollCameraMode
// Kind: Class; super: FortCameraMode_ThirdPerson
class URagdollCameraMode
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    FName BoneToTrack; // 0x2080 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(URagdollCameraMode, BoneToTrack) == 8320, "Offset mismatch for URagdollCameraMode::BoneToTrack");

// /Script/TrendConcentrateRuntime.TrendConcentrateDBNOOverride
// Kind: Class; super: DBNOBehaviorOverrideComponent
class UTrendConcentrateDBNOOverride
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DBNOEnhancementsEnabled[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNOAllowDodgeRoll[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNOAllowSprint[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNOSprintingStaminaCost[0x28]; // 0x0140 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNOAllowRagdoll[0x28]; // 0x0168 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNOAllowHurdle[0x28]; // 0x0190 (Size: 0x28, Type: StructProperty)
    std::uint8_t DBNOAllowInteractions[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTrendConcentrateDBNOOverride, DBNOEnhancementsEnabled) == 200, "Offset mismatch for UTrendConcentrateDBNOOverride::DBNOEnhancementsEnabled");
static_assert(offsetof(UTrendConcentrateDBNOOverride, DBNOAllowDodgeRoll) == 240, "Offset mismatch for UTrendConcentrateDBNOOverride::DBNOAllowDodgeRoll");
static_assert(offsetof(UTrendConcentrateDBNOOverride, DBNOAllowSprint) == 280, "Offset mismatch for UTrendConcentrateDBNOOverride::DBNOAllowSprint");
static_assert(offsetof(UTrendConcentrateDBNOOverride, DBNOSprintingStaminaCost) == 320, "Offset mismatch for UTrendConcentrateDBNOOverride::DBNOSprintingStaminaCost");
static_assert(offsetof(UTrendConcentrateDBNOOverride, DBNOAllowRagdoll) == 360, "Offset mismatch for UTrendConcentrateDBNOOverride::DBNOAllowRagdoll");
static_assert(offsetof(UTrendConcentrateDBNOOverride, DBNOAllowHurdle) == 400, "Offset mismatch for UTrendConcentrateDBNOOverride::DBNOAllowHurdle");
static_assert(offsetof(UTrendConcentrateDBNOOverride, DBNOAllowInteractions) == 440, "Offset mismatch for UTrendConcentrateDBNOOverride::DBNOAllowInteractions");
