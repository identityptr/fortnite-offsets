/**
 * decamp dumper generated SDK
 * Package: /Script/MassNavigation
 */
#pragma once
#include "Basic.h"

// /Script/MassNavigation.MassAvoidanceColliderFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassAvoidanceColliderFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassAvoidanceEntitiesToIgnoreFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassAvoidanceEntitiesToIgnoreFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassAvoidancePreventBackwardMovementTag
// Kind: ScriptStruct; super: MassTag
struct FMassAvoidancePreventBackwardMovementTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassGhostLocationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassGhostLocationFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassInNavigationObstacleGridTag
// Kind: ScriptStruct; super: MassTag
struct FMassInNavigationObstacleGridTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassMoveTargetFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassMoveTargetFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassMovingAvoidanceParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassMovingAvoidanceParameters
{
public:
    float ObstacleDetectionDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StartOfPathDuration; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EndOfPathDuration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float StartOfPathAvoidanceScale; // 0x000C (Size: 0x4, Type: FloatProperty)
    float EndOfPathAvoidanceScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float StandingObstacleAvoidanceScale; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float StaticObstacleClearanceScale; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float SeparationRadiusScale; // 0x001C (Size: 0x4, Type: FloatProperty)
    float ObstacleSeparationStiffness; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float ObstacleSeparationDistance; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float EnvironmentSeparationStiffness; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float EnvironmentSeparationDistance; // 0x002C (Size: 0x4, Type: FloatProperty)
    float EnvironmentSeparationBehindEdgeDistanceScale; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float PredictiveAvoidanceTime; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float EnvironmentPredictiveAvoidanceTime; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float PredictiveAvoidanceRadiusScale; // 0x003C (Size: 0x4, Type: FloatProperty)
    float PredictiveAvoidanceDistance; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float EnvironmentPredictiveAvoidanceDistance; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float ObstaclePredictiveAvoidanceStiffness; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float EnvironmentPredictiveAvoidanceStiffness; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassMovingAvoidanceParameters, ObstacleDetectionDistance) == 0, "Offset mismatch for FMassMovingAvoidanceParameters::ObstacleDetectionDistance");
static_assert(offsetof(FMassMovingAvoidanceParameters, StartOfPathDuration) == 4, "Offset mismatch for FMassMovingAvoidanceParameters::StartOfPathDuration");
static_assert(offsetof(FMassMovingAvoidanceParameters, EndOfPathDuration) == 8, "Offset mismatch for FMassMovingAvoidanceParameters::EndOfPathDuration");
static_assert(offsetof(FMassMovingAvoidanceParameters, StartOfPathAvoidanceScale) == 12, "Offset mismatch for FMassMovingAvoidanceParameters::StartOfPathAvoidanceScale");
static_assert(offsetof(FMassMovingAvoidanceParameters, EndOfPathAvoidanceScale) == 16, "Offset mismatch for FMassMovingAvoidanceParameters::EndOfPathAvoidanceScale");
static_assert(offsetof(FMassMovingAvoidanceParameters, StandingObstacleAvoidanceScale) == 20, "Offset mismatch for FMassMovingAvoidanceParameters::StandingObstacleAvoidanceScale");
static_assert(offsetof(FMassMovingAvoidanceParameters, StaticObstacleClearanceScale) == 24, "Offset mismatch for FMassMovingAvoidanceParameters::StaticObstacleClearanceScale");
static_assert(offsetof(FMassMovingAvoidanceParameters, SeparationRadiusScale) == 28, "Offset mismatch for FMassMovingAvoidanceParameters::SeparationRadiusScale");
static_assert(offsetof(FMassMovingAvoidanceParameters, ObstacleSeparationStiffness) == 32, "Offset mismatch for FMassMovingAvoidanceParameters::ObstacleSeparationStiffness");
static_assert(offsetof(FMassMovingAvoidanceParameters, ObstacleSeparationDistance) == 36, "Offset mismatch for FMassMovingAvoidanceParameters::ObstacleSeparationDistance");
static_assert(offsetof(FMassMovingAvoidanceParameters, EnvironmentSeparationStiffness) == 40, "Offset mismatch for FMassMovingAvoidanceParameters::EnvironmentSeparationStiffness");
static_assert(offsetof(FMassMovingAvoidanceParameters, EnvironmentSeparationDistance) == 44, "Offset mismatch for FMassMovingAvoidanceParameters::EnvironmentSeparationDistance");
static_assert(offsetof(FMassMovingAvoidanceParameters, EnvironmentSeparationBehindEdgeDistanceScale) == 48, "Offset mismatch for FMassMovingAvoidanceParameters::EnvironmentSeparationBehindEdgeDistanceScale");
static_assert(offsetof(FMassMovingAvoidanceParameters, PredictiveAvoidanceTime) == 52, "Offset mismatch for FMassMovingAvoidanceParameters::PredictiveAvoidanceTime");
static_assert(offsetof(FMassMovingAvoidanceParameters, EnvironmentPredictiveAvoidanceTime) == 56, "Offset mismatch for FMassMovingAvoidanceParameters::EnvironmentPredictiveAvoidanceTime");
static_assert(offsetof(FMassMovingAvoidanceParameters, PredictiveAvoidanceRadiusScale) == 60, "Offset mismatch for FMassMovingAvoidanceParameters::PredictiveAvoidanceRadiusScale");
static_assert(offsetof(FMassMovingAvoidanceParameters, PredictiveAvoidanceDistance) == 64, "Offset mismatch for FMassMovingAvoidanceParameters::PredictiveAvoidanceDistance");
static_assert(offsetof(FMassMovingAvoidanceParameters, EnvironmentPredictiveAvoidanceDistance) == 68, "Offset mismatch for FMassMovingAvoidanceParameters::EnvironmentPredictiveAvoidanceDistance");
static_assert(offsetof(FMassMovingAvoidanceParameters, ObstaclePredictiveAvoidanceStiffness) == 72, "Offset mismatch for FMassMovingAvoidanceParameters::ObstaclePredictiveAvoidanceStiffness");
static_assert(offsetof(FMassMovingAvoidanceParameters, EnvironmentPredictiveAvoidanceStiffness) == 76, "Offset mismatch for FMassMovingAvoidanceParameters::EnvironmentPredictiveAvoidanceStiffness");

// /Script/MassNavigation.MassMovingSteeringParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassMovingSteeringParameters
{
public:
    float ReactionTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LookAheadTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SteeringPreventSlowdownAttenuationDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowSpeedVariance; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassMovingSteeringParameters, ReactionTime) == 0, "Offset mismatch for FMassMovingSteeringParameters::ReactionTime");
static_assert(offsetof(FMassMovingSteeringParameters, LookAheadTime) == 4, "Offset mismatch for FMassMovingSteeringParameters::LookAheadTime");
static_assert(offsetof(FMassMovingSteeringParameters, SteeringPreventSlowdownAttenuationDistance) == 8, "Offset mismatch for FMassMovingSteeringParameters::SteeringPreventSlowdownAttenuationDistance");
static_assert(offsetof(FMassMovingSteeringParameters, bAllowSpeedVariance) == 12, "Offset mismatch for FMassMovingSteeringParameters::bAllowSpeedVariance");

// /Script/MassNavigation.MassNavigationEdgesFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassNavigationEdgesFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassNavigationObstacleGridCellLocationFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassNavigationObstacleGridCellLocationFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassSmoothOrientationParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassSmoothOrientationParameters
{
public:
    float EndOfPathDuration; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float OrientationSmoothingTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Moving[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Standing[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassSmoothOrientationParameters, EndOfPathDuration) == 0, "Offset mismatch for FMassSmoothOrientationParameters::EndOfPathDuration");
static_assert(offsetof(FMassSmoothOrientationParameters, OrientationSmoothingTime) == 4, "Offset mismatch for FMassSmoothOrientationParameters::OrientationSmoothingTime");
static_assert(offsetof(FMassSmoothOrientationParameters, Moving) == 8, "Offset mismatch for FMassSmoothOrientationParameters::Moving");
static_assert(offsetof(FMassSmoothOrientationParameters, Standing) == 16, "Offset mismatch for FMassSmoothOrientationParameters::Standing");

// /Script/MassNavigation.MassSmoothOrientationWeights
// Kind: ScriptStruct; super: MassSharedFragment
struct FMassSmoothOrientationWeights
{
public:
    float MoveTargetWeight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float VelocityWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassSmoothOrientationWeights, MoveTargetWeight) == 0, "Offset mismatch for FMassSmoothOrientationWeights::MoveTargetWeight");
static_assert(offsetof(FMassSmoothOrientationWeights, VelocityWeight) == 4, "Offset mismatch for FMassSmoothOrientationWeights::VelocityWeight");

// /Script/MassNavigation.MassStandingAvoidanceParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassStandingAvoidanceParameters
{
public:
    float GhostObstacleDetectionDistance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float GhostToTargetMaxDeviation; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float GhostSteeringReactionTime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float GhostStandSlowdownRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
    float GhostMaxSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float GhostMaxAcceleration; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float GhostVelocityDampingTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float GhostSeparationRadiusScale; // 0x001C (Size: 0x4, Type: FloatProperty)
    float GhostSeparationDistance; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float GhostSeparationStiffness; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MovingObstacleAvoidanceScale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float MovingObstacleDirectionalScale; // 0x002C (Size: 0x4, Type: FloatProperty)
    float MovingObstaclePersonalSpaceScale; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassStandingAvoidanceParameters, GhostObstacleDetectionDistance) == 0, "Offset mismatch for FMassStandingAvoidanceParameters::GhostObstacleDetectionDistance");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostToTargetMaxDeviation) == 4, "Offset mismatch for FMassStandingAvoidanceParameters::GhostToTargetMaxDeviation");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostSteeringReactionTime) == 8, "Offset mismatch for FMassStandingAvoidanceParameters::GhostSteeringReactionTime");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostStandSlowdownRadius) == 12, "Offset mismatch for FMassStandingAvoidanceParameters::GhostStandSlowdownRadius");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostMaxSpeed) == 16, "Offset mismatch for FMassStandingAvoidanceParameters::GhostMaxSpeed");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostMaxAcceleration) == 20, "Offset mismatch for FMassStandingAvoidanceParameters::GhostMaxAcceleration");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostVelocityDampingTime) == 24, "Offset mismatch for FMassStandingAvoidanceParameters::GhostVelocityDampingTime");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostSeparationRadiusScale) == 28, "Offset mismatch for FMassStandingAvoidanceParameters::GhostSeparationRadiusScale");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostSeparationDistance) == 32, "Offset mismatch for FMassStandingAvoidanceParameters::GhostSeparationDistance");
static_assert(offsetof(FMassStandingAvoidanceParameters, GhostSeparationStiffness) == 36, "Offset mismatch for FMassStandingAvoidanceParameters::GhostSeparationStiffness");
static_assert(offsetof(FMassStandingAvoidanceParameters, MovingObstacleAvoidanceScale) == 40, "Offset mismatch for FMassStandingAvoidanceParameters::MovingObstacleAvoidanceScale");
static_assert(offsetof(FMassStandingAvoidanceParameters, MovingObstacleDirectionalScale) == 44, "Offset mismatch for FMassStandingAvoidanceParameters::MovingObstacleDirectionalScale");
static_assert(offsetof(FMassStandingAvoidanceParameters, MovingObstaclePersonalSpaceScale) == 48, "Offset mismatch for FMassStandingAvoidanceParameters::MovingObstaclePersonalSpaceScale");

// /Script/MassNavigation.MassStandingSteeringFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassStandingSteeringFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassStandingSteeringParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FMassStandingSteeringParameters
{
public:
    float TargetMoveThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float TargetMoveThresholdVariance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float LowSpeedThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TargetSpeedHysteresisScale; // 0x000C (Size: 0x4, Type: FloatProperty)
    float TargetSelectionCooldown; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float TargetSelectionCooldownVariance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float DeadZoneRadius; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassStandingSteeringParameters, TargetMoveThreshold) == 0, "Offset mismatch for FMassStandingSteeringParameters::TargetMoveThreshold");
static_assert(offsetof(FMassStandingSteeringParameters, TargetMoveThresholdVariance) == 4, "Offset mismatch for FMassStandingSteeringParameters::TargetMoveThresholdVariance");
static_assert(offsetof(FMassStandingSteeringParameters, LowSpeedThreshold) == 8, "Offset mismatch for FMassStandingSteeringParameters::LowSpeedThreshold");
static_assert(offsetof(FMassStandingSteeringParameters, TargetSpeedHysteresisScale) == 12, "Offset mismatch for FMassStandingSteeringParameters::TargetSpeedHysteresisScale");
static_assert(offsetof(FMassStandingSteeringParameters, TargetSelectionCooldown) == 16, "Offset mismatch for FMassStandingSteeringParameters::TargetSelectionCooldown");
static_assert(offsetof(FMassStandingSteeringParameters, TargetSelectionCooldownVariance) == 20, "Offset mismatch for FMassStandingSteeringParameters::TargetSelectionCooldownVariance");
static_assert(offsetof(FMassStandingSteeringParameters, DeadZoneRadius) == 24, "Offset mismatch for FMassStandingSteeringParameters::DeadZoneRadius");

// /Script/MassNavigation.MassSteerToMoveTargetPreventSlowdownTag
// Kind: ScriptStruct; super: MassTag
struct FMassSteerToMoveTargetPreventSlowdownTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassSteeringFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSteeringFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassTargetLocation
// Kind: ScriptStruct; super: none
struct FMassTargetLocation
{
public:
    std::uint8_t EndOfPathPosition[0x20]; // 0x0000 (Size: 0x20, Type: OptionalProperty)
    std::uint8_t EndOfPathRotation[0x30]; // 0x0020 (Size: 0x30, Type: OptionalProperty)
    std::uint8_t EndOfPathIntent; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMassTargetLocation, EndOfPathPosition) == 0, "Offset mismatch for FMassTargetLocation::EndOfPathPosition");
static_assert(offsetof(FMassTargetLocation, EndOfPathRotation) == 32, "Offset mismatch for FMassTargetLocation::EndOfPathRotation");
static_assert(offsetof(FMassTargetLocation, EndOfPathIntent) == 80, "Offset mismatch for FMassTargetLocation::EndOfPathIntent");

// /Script/MassNavigation.MassMoveTargetFragmentInitializer
// Kind: Class; super: MassObserverProcessor
class UMassMoveTargetFragmentInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassMoveTargetFragmentInitializer, ObservedType) == 256, "Offset mismatch for UMassMoveTargetFragmentInitializer::ObservedType");
static_assert(offsetof(UMassMoveTargetFragmentInitializer, ObservedTypes) == 264, "Offset mismatch for UMassMoveTargetFragmentInitializer::ObservedTypes");
static_assert(offsetof(UMassMoveTargetFragmentInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassMoveTargetFragmentInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassNavigation.MassMovingAvoidanceProcessor
// Kind: Class; super: MassProcessor
class UMassMovingAvoidanceProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassMovingAvoidanceProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassMovingAvoidanceProcessor::ExecutionOrder");
static_assert(offsetof(UMassMovingAvoidanceProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassMovingAvoidanceProcessor::ProcessingPhase");
static_assert(offsetof(UMassMovingAvoidanceProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassMovingAvoidanceProcessor::ExecutionFlags");
static_assert(offsetof(UMassMovingAvoidanceProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassMovingAvoidanceProcessor::bAggregateRequirements");
static_assert(offsetof(UMassMovingAvoidanceProcessor, ActivationState) == 83, "Offset mismatch for UMassMovingAvoidanceProcessor::ActivationState");
static_assert(offsetof(UMassMovingAvoidanceProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassMovingAvoidanceProcessor::ExecutionPriority");

// /Script/MassNavigation.MassNavigationObstacleGridProcessor
// Kind: Class; super: MassProcessor
class UMassNavigationObstacleGridProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassNavigationObstacleGridProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassNavigationObstacleGridProcessor::ExecutionOrder");
static_assert(offsetof(UMassNavigationObstacleGridProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassNavigationObstacleGridProcessor::ProcessingPhase");
static_assert(offsetof(UMassNavigationObstacleGridProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassNavigationObstacleGridProcessor::ExecutionFlags");
static_assert(offsetof(UMassNavigationObstacleGridProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassNavigationObstacleGridProcessor::bAggregateRequirements");
static_assert(offsetof(UMassNavigationObstacleGridProcessor, ActivationState) == 83, "Offset mismatch for UMassNavigationObstacleGridProcessor::ActivationState");
static_assert(offsetof(UMassNavigationObstacleGridProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassNavigationObstacleGridProcessor::ExecutionPriority");

// /Script/MassNavigation.MassNavigationObstacleRemoverProcessor
// Kind: Class; super: MassObserverProcessor
class UMassNavigationObstacleRemoverProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassNavigationObstacleRemoverProcessor, ObservedType) == 256, "Offset mismatch for UMassNavigationObstacleRemoverProcessor::ObservedType");
static_assert(offsetof(UMassNavigationObstacleRemoverProcessor, ObservedTypes) == 264, "Offset mismatch for UMassNavigationObstacleRemoverProcessor::ObservedTypes");
static_assert(offsetof(UMassNavigationObstacleRemoverProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassNavigationObstacleRemoverProcessor::bAutoRegisterWithObserverRegistry");

// /Script/MassNavigation.MassNavigationObstacleTrait
// Kind: Class; super: MassEntityTraitBase
class UMassNavigationObstacleTrait
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassNavigationObstacleTrait, ValidTargetConfig) == 40, "Offset mismatch for UMassNavigationObstacleTrait::ValidTargetConfig");

// /Script/MassNavigation.MassNavigationSmoothHeightProcessor
// Kind: Class; super: MassProcessor
class UMassNavigationSmoothHeightProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassNavigationSmoothHeightProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassNavigationSmoothHeightProcessor::ExecutionOrder");
static_assert(offsetof(UMassNavigationSmoothHeightProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassNavigationSmoothHeightProcessor::ProcessingPhase");
static_assert(offsetof(UMassNavigationSmoothHeightProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassNavigationSmoothHeightProcessor::ExecutionFlags");
static_assert(offsetof(UMassNavigationSmoothHeightProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassNavigationSmoothHeightProcessor::bAggregateRequirements");
static_assert(offsetof(UMassNavigationSmoothHeightProcessor, ActivationState) == 83, "Offset mismatch for UMassNavigationSmoothHeightProcessor::ActivationState");
static_assert(offsetof(UMassNavigationSmoothHeightProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassNavigationSmoothHeightProcessor::ExecutionPriority");

// /Script/MassNavigation.MassNavigationSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassNavigationSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavigation.MassObstacleAvoidanceTrait
// Kind: Class; super: MassEntityTraitBase
class UMassObstacleAvoidanceTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MovingParameters[0x50]; // 0x0030 (Size: 0x50, Type: StructProperty)
    std::uint8_t StandingParameters[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassObstacleAvoidanceTrait, MovingParameters) == 48, "Offset mismatch for UMassObstacleAvoidanceTrait::MovingParameters");
static_assert(offsetof(UMassObstacleAvoidanceTrait, StandingParameters) == 128, "Offset mismatch for UMassObstacleAvoidanceTrait::StandingParameters");

// /Script/MassNavigation.MassOffLODNavigationProcessor
// Kind: Class; super: MassProcessor
class UMassOffLODNavigationProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassOffLODNavigationProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassOffLODNavigationProcessor::ExecutionOrder");
static_assert(offsetof(UMassOffLODNavigationProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassOffLODNavigationProcessor::ProcessingPhase");
static_assert(offsetof(UMassOffLODNavigationProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassOffLODNavigationProcessor::ExecutionFlags");
static_assert(offsetof(UMassOffLODNavigationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassOffLODNavigationProcessor::bAggregateRequirements");
static_assert(offsetof(UMassOffLODNavigationProcessor, ActivationState) == 83, "Offset mismatch for UMassOffLODNavigationProcessor::ActivationState");
static_assert(offsetof(UMassOffLODNavigationProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassOffLODNavigationProcessor::ExecutionPriority");

// /Script/MassNavigation.MassSmoothOrientationProcessor
// Kind: Class; super: MassProcessor
class UMassSmoothOrientationProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassSmoothOrientationProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassSmoothOrientationProcessor::ExecutionOrder");
static_assert(offsetof(UMassSmoothOrientationProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassSmoothOrientationProcessor::ProcessingPhase");
static_assert(offsetof(UMassSmoothOrientationProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassSmoothOrientationProcessor::ExecutionFlags");
static_assert(offsetof(UMassSmoothOrientationProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassSmoothOrientationProcessor::bAggregateRequirements");
static_assert(offsetof(UMassSmoothOrientationProcessor, ActivationState) == 83, "Offset mismatch for UMassSmoothOrientationProcessor::ActivationState");
static_assert(offsetof(UMassSmoothOrientationProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassSmoothOrientationProcessor::ExecutionPriority");

// /Script/MassNavigation.MassSmoothOrientationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassSmoothOrientationTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t orientation[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassSmoothOrientationTrait, orientation) == 48, "Offset mismatch for UMassSmoothOrientationTrait::orientation");

// /Script/MassNavigation.MassStandingAvoidanceProcessor
// Kind: Class; super: MassProcessor
class UMassStandingAvoidanceProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassStandingAvoidanceProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassStandingAvoidanceProcessor::ExecutionOrder");
static_assert(offsetof(UMassStandingAvoidanceProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassStandingAvoidanceProcessor::ProcessingPhase");
static_assert(offsetof(UMassStandingAvoidanceProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassStandingAvoidanceProcessor::ExecutionFlags");
static_assert(offsetof(UMassStandingAvoidanceProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassStandingAvoidanceProcessor::bAggregateRequirements");
static_assert(offsetof(UMassStandingAvoidanceProcessor, ActivationState) == 83, "Offset mismatch for UMassStandingAvoidanceProcessor::ActivationState");
static_assert(offsetof(UMassStandingAvoidanceProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassStandingAvoidanceProcessor::ExecutionPriority");

// /Script/MassNavigation.MassSteerToMoveTargetProcessor
// Kind: Class; super: MassProcessor
class UMassSteerToMoveTargetProcessor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionOrder[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t ProcessingPhase; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExecutionFlags; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAggregateRequirements; // 0x0052 (Size: 0x1, Type: BoolProperty)
    // 0x0052 BoolProperty bAutoRegisterWithProcessingPhases (shared storage)
    // 0x0052 BoolProperty bRequiresGameThreadExecution (shared storage)
    std::uint8_t ActivationState; // 0x0053 (Size: 0x1, Type: EnumProperty)
    std::int16_t ExecutionPriority; // 0x0054 (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(UMassSteerToMoveTargetProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassSteerToMoveTargetProcessor::ExecutionOrder");
static_assert(offsetof(UMassSteerToMoveTargetProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassSteerToMoveTargetProcessor::ProcessingPhase");
static_assert(offsetof(UMassSteerToMoveTargetProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassSteerToMoveTargetProcessor::ExecutionFlags");
static_assert(offsetof(UMassSteerToMoveTargetProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassSteerToMoveTargetProcessor::bAggregateRequirements");
static_assert(offsetof(UMassSteerToMoveTargetProcessor, ActivationState) == 83, "Offset mismatch for UMassSteerToMoveTargetProcessor::ActivationState");
static_assert(offsetof(UMassSteerToMoveTargetProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassSteerToMoveTargetProcessor::ExecutionPriority");

// /Script/MassNavigation.MassSteeringTrait
// Kind: Class; super: MassEntityTraitBase
class UMassSteeringTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MovingSteering[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t StandingSteering[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassSteeringTrait, MovingSteering) == 48, "Offset mismatch for UMassSteeringTrait::MovingSteering");
static_assert(offsetof(UMassSteeringTrait, StandingSteering) == 64, "Offset mismatch for UMassSteeringTrait::StandingSteering");
