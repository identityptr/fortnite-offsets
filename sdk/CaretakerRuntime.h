/**
 * decamp dumper generated SDK
 * Package: /Script/CaretakerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker
// Kind: Class; super: FortAIAnimInstance
class UFortAIAnimInstance_Caretaker
{
public:
    std::uint8_t Pad_0000[0x490]; // 0x0000
    std::uint8_t bIsMoving; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0491
    float WalkPlayrate; // 0x0494 (Size: 0x4, Type: FloatProperty)
    float AimOffsetCurve; // 0x0498 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFootPhase_StopLeftPlant; // 0x049C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFootPhase_StopLeftPass; // 0x049D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFootPhase_StopRightPlant; // 0x049E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFootPhase_StopRightPass; // 0x049F (Size: 0x1, Type: BoolProperty)
    float BreathingCurve; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    float MovingTreshold; // 0x04A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveName_AimOffsetCurve[0x4]; // 0x04A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_FootPhase[0x4]; // 0x04AC (Size: 0x4, Type: NameProperty)
    std::uint8_t CurveName_BreathingCurve[0x4]; // 0x04B0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SocketName_FX_Chest[0x4]; // 0x04B4 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParamName_ChestSocketLocation[0x4]; // 0x04B8 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParamName_ChestSocketVector[0x4]; // 0x04BC (Size: 0x4, Type: NameProperty)
    float FirstFootPhaseMin; // 0x04C0 (Size: 0x4, Type: FloatProperty)
    float SecondFootPhaseMin; // 0x04C4 (Size: 0x4, Type: FloatProperty)
    float ThirdFootPhaseMin; // 0x04C8 (Size: 0x4, Type: FloatProperty)
    float FourthFootPhaseMin; // 0x04CC (Size: 0x4, Type: FloatProperty)
    float FootPhaseMax; // 0x04D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x04D4
    void* WorldStriderComponent; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAIAnimInstance_Caretaker, bIsMoving) == 1168, "Offset mismatch for UFortAIAnimInstance_Caretaker::bIsMoving");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, WalkPlayrate) == 1172, "Offset mismatch for UFortAIAnimInstance_Caretaker::WalkPlayrate");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, AimOffsetCurve) == 1176, "Offset mismatch for UFortAIAnimInstance_Caretaker::AimOffsetCurve");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopLeftPlant) == 1180, "Offset mismatch for UFortAIAnimInstance_Caretaker::bFootPhase_StopLeftPlant");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopLeftPass) == 1181, "Offset mismatch for UFortAIAnimInstance_Caretaker::bFootPhase_StopLeftPass");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopRightPlant) == 1182, "Offset mismatch for UFortAIAnimInstance_Caretaker::bFootPhase_StopRightPlant");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, bFootPhase_StopRightPass) == 1183, "Offset mismatch for UFortAIAnimInstance_Caretaker::bFootPhase_StopRightPass");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, BreathingCurve) == 1184, "Offset mismatch for UFortAIAnimInstance_Caretaker::BreathingCurve");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, MovingTreshold) == 1188, "Offset mismatch for UFortAIAnimInstance_Caretaker::MovingTreshold");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, CurveName_AimOffsetCurve) == 1192, "Offset mismatch for UFortAIAnimInstance_Caretaker::CurveName_AimOffsetCurve");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, CurveName_FootPhase) == 1196, "Offset mismatch for UFortAIAnimInstance_Caretaker::CurveName_FootPhase");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, CurveName_BreathingCurve) == 1200, "Offset mismatch for UFortAIAnimInstance_Caretaker::CurveName_BreathingCurve");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, SocketName_FX_Chest) == 1204, "Offset mismatch for UFortAIAnimInstance_Caretaker::SocketName_FX_Chest");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, ParamName_ChestSocketLocation) == 1208, "Offset mismatch for UFortAIAnimInstance_Caretaker::ParamName_ChestSocketLocation");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, ParamName_ChestSocketVector) == 1212, "Offset mismatch for UFortAIAnimInstance_Caretaker::ParamName_ChestSocketVector");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, FirstFootPhaseMin) == 1216, "Offset mismatch for UFortAIAnimInstance_Caretaker::FirstFootPhaseMin");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, SecondFootPhaseMin) == 1220, "Offset mismatch for UFortAIAnimInstance_Caretaker::SecondFootPhaseMin");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, ThirdFootPhaseMin) == 1224, "Offset mismatch for UFortAIAnimInstance_Caretaker::ThirdFootPhaseMin");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, FourthFootPhaseMin) == 1228, "Offset mismatch for UFortAIAnimInstance_Caretaker::FourthFootPhaseMin");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, FootPhaseMax) == 1232, "Offset mismatch for UFortAIAnimInstance_Caretaker::FootPhaseMax");
static_assert(offsetof(UFortAIAnimInstance_Caretaker, WorldStriderComponent) == 1240, "Offset mismatch for UFortAIAnimInstance_Caretaker::WorldStriderComponent");

// /Script/CaretakerRuntime.FortAITask_CaretakerMove
// Kind: Class; super: FortAbilityTask_MoveAI
class UFortAITask_CaretakerMove
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    FMulticastInlineDelegate OnComplete; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterrupted; // 0x0188 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnCancelled; // 0x0198 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortAITask_CaretakerMove, OnComplete) == 376, "Offset mismatch for UFortAITask_CaretakerMove::OnComplete");
static_assert(offsetof(UFortAITask_CaretakerMove, OnInterrupted) == 392, "Offset mismatch for UFortAITask_CaretakerMove::OnInterrupted");
static_assert(offsetof(UFortAITask_CaretakerMove, OnCancelled) == 408, "Offset mismatch for UFortAITask_CaretakerMove::OnCancelled");

// /Script/CaretakerRuntime.FortAthenaCaretakerAIController
// Kind: Class; super: AthenaAIController
class UFortAthenaCaretakerAIController
{
public:
    std::uint8_t Pad_0000[0x5A8]; // 0x0000
    TArray<void*> GoalActorDistancesNotifies; // 0x05A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x48]; // 0x05B8
    void* PrimaryMeleeAttackAbilityInstance; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryRangedAttackAbilityInstance; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NavWalkingSearchExtentScale[0x18]; // 0x0610 (Size: 0x18, Type: StructProperty)
    float CheapFlyingNavPointHorizontalGridRatio; // 0x0628 (Size: 0x4, Type: FloatProperty)
    float CheapFlyingNavNavPointVerticalGridRatio; // 0x062C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CheapFlyingNavSmashableAbilityTag[0x20]; // 0x0630 (Size: 0x20, Type: StructProperty)
    std::uint8_t bAllowBacktrackPathfinding; // 0x0650 (Size: 0x1, Type: BoolProperty)
    // 0x0650 BoolProperty bAutoAttackOnMovedHit (shared storage)
    // 0x0650 BoolProperty bAutoGenerateHotspotOnPlayerBuildings (shared storage)
    // 0x0650 BoolProperty bAutomaticallyChooseClosestTargetAsGoal (shared storage)
    // 0x0650 BoolProperty bEnableCheapFlyingNavigation (shared storage)
    // 0x0650 BoolProperty bIsGoalRequiredForBehavior (shared storage)
    std::uint8_t bRegisterToAthenaAIDropper; // 0x0651 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0652
    void* SecondaryGoalActor; // 0x0658 (Size: 0x8, Type: ObjectProperty)
    float AttackCheckInterval; // 0x0660 (Size: 0x4, Type: FloatProperty)
    float MeleeAttackCheckDistance; // 0x0664 (Size: 0x4, Type: FloatProperty)
    float RangedAttackCheckDistance; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float BacktrackingZThreshold; // 0x066C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowBacktracking; // 0x0670 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowPawnRVOWeightOverrides; // 0x0671 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xE]; // 0x0672
    void* AthenaPFC; // 0x0680 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaCaretakerAIController, GoalActorDistancesNotifies) == 1448, "Offset mismatch for UFortAthenaCaretakerAIController::GoalActorDistancesNotifies");
static_assert(offsetof(UFortAthenaCaretakerAIController, PrimaryMeleeAttackAbilityInstance) == 1536, "Offset mismatch for UFortAthenaCaretakerAIController::PrimaryMeleeAttackAbilityInstance");
static_assert(offsetof(UFortAthenaCaretakerAIController, PrimaryRangedAttackAbilityInstance) == 1544, "Offset mismatch for UFortAthenaCaretakerAIController::PrimaryRangedAttackAbilityInstance");
static_assert(offsetof(UFortAthenaCaretakerAIController, NavWalkingSearchExtentScale) == 1552, "Offset mismatch for UFortAthenaCaretakerAIController::NavWalkingSearchExtentScale");
static_assert(offsetof(UFortAthenaCaretakerAIController, CheapFlyingNavPointHorizontalGridRatio) == 1576, "Offset mismatch for UFortAthenaCaretakerAIController::CheapFlyingNavPointHorizontalGridRatio");
static_assert(offsetof(UFortAthenaCaretakerAIController, CheapFlyingNavNavPointVerticalGridRatio) == 1580, "Offset mismatch for UFortAthenaCaretakerAIController::CheapFlyingNavNavPointVerticalGridRatio");
static_assert(offsetof(UFortAthenaCaretakerAIController, CheapFlyingNavSmashableAbilityTag) == 1584, "Offset mismatch for UFortAthenaCaretakerAIController::CheapFlyingNavSmashableAbilityTag");
static_assert(offsetof(UFortAthenaCaretakerAIController, bAllowBacktrackPathfinding) == 1616, "Offset mismatch for UFortAthenaCaretakerAIController::bAllowBacktrackPathfinding");
static_assert(offsetof(UFortAthenaCaretakerAIController, bRegisterToAthenaAIDropper) == 1617, "Offset mismatch for UFortAthenaCaretakerAIController::bRegisterToAthenaAIDropper");
static_assert(offsetof(UFortAthenaCaretakerAIController, SecondaryGoalActor) == 1624, "Offset mismatch for UFortAthenaCaretakerAIController::SecondaryGoalActor");
static_assert(offsetof(UFortAthenaCaretakerAIController, AttackCheckInterval) == 1632, "Offset mismatch for UFortAthenaCaretakerAIController::AttackCheckInterval");
static_assert(offsetof(UFortAthenaCaretakerAIController, MeleeAttackCheckDistance) == 1636, "Offset mismatch for UFortAthenaCaretakerAIController::MeleeAttackCheckDistance");
static_assert(offsetof(UFortAthenaCaretakerAIController, RangedAttackCheckDistance) == 1640, "Offset mismatch for UFortAthenaCaretakerAIController::RangedAttackCheckDistance");
static_assert(offsetof(UFortAthenaCaretakerAIController, BacktrackingZThreshold) == 1644, "Offset mismatch for UFortAthenaCaretakerAIController::BacktrackingZThreshold");
static_assert(offsetof(UFortAthenaCaretakerAIController, bAllowBacktracking) == 1648, "Offset mismatch for UFortAthenaCaretakerAIController::bAllowBacktracking");
static_assert(offsetof(UFortAthenaCaretakerAIController, bAllowPawnRVOWeightOverrides) == 1649, "Offset mismatch for UFortAthenaCaretakerAIController::bAllowPawnRVOWeightOverrides");
static_assert(offsetof(UFortAthenaCaretakerAIController, AthenaPFC) == 1664, "Offset mismatch for UFortAthenaCaretakerAIController::AthenaPFC");

// /Script/CaretakerRuntime.FortBTTask_CaretakerMoveTo
// Kind: Class; super: BTTask_MoveTo
class UFortBTTask_CaretakerMoveTo
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t FocalPointWhileMoving[0x28]; // 0x01B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t PathObstacleAction; // 0x01D8 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01D9
    std::uint8_t bEnableSlowdownAtGoal; // 0x01DC (Size: 0x1, Type: BoolProperty)
    // 0x01DC BoolProperty bFinishMoveOnOverlap (shared storage)
    // 0x01DC BoolProperty bMoveDirectlyTowards (shared storage)
    // 0x01DC BoolProperty bStopAtGoal (shared storage)
};

static_assert(offsetof(UFortBTTask_CaretakerMoveTo, FocalPointWhileMoving) == 432, "Offset mismatch for UFortBTTask_CaretakerMoveTo::FocalPointWhileMoving");
static_assert(offsetof(UFortBTTask_CaretakerMoveTo, PathObstacleAction) == 472, "Offset mismatch for UFortBTTask_CaretakerMoveTo::PathObstacleAction");
static_assert(offsetof(UFortBTTask_CaretakerMoveTo, bEnableSlowdownAtGoal) == 476, "Offset mismatch for UFortBTTask_CaretakerMoveTo::bEnableSlowdownAtGoal");

// /Script/CaretakerRuntime.FortNavigationFilter_Caretaker
// Kind: Class; super: FortNavigationFilter
class UFortNavigationFilter_Caretaker
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float EndPointAcceptableRadius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x004C
    void* EndPointFilterClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bEndPointReachTestIncludesAgentRadius; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bEndPointReachTestIncludesGoalRadius (shared storage)
};

static_assert(offsetof(UFortNavigationFilter_Caretaker, EndPointAcceptableRadius) == 72, "Offset mismatch for UFortNavigationFilter_Caretaker::EndPointAcceptableRadius");
static_assert(offsetof(UFortNavigationFilter_Caretaker, EndPointFilterClass) == 80, "Offset mismatch for UFortNavigationFilter_Caretaker::EndPointFilterClass");
static_assert(offsetof(UFortNavigationFilter_Caretaker, bEndPointReachTestIncludesAgentRadius) == 88, "Offset mismatch for UFortNavigationFilter_Caretaker::bEndPointReachTestIncludesAgentRadius");
