/**
 * decamp dumper generated SDK
 * Package: /Script/PlayerCompanionRuntime
 */
#pragma once
#include "Basic.h"

// /Script/PlayerCompanionRuntime.CompanionBehavior
// Kind: ScriptStruct; super: none
struct FCompanionBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionBehavior, Companion) == 8, "Offset mismatch for FCompanionBehavior::Companion");
static_assert(offsetof(FCompanionBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionBehaviorConditions
// Kind: ScriptStruct; super: none
struct FCompanionBehaviorConditions
{
public:
    TArray<void*> Moods; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SpeedLowerThan[0x8]; // 0x0010 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t SpeedFasterThan[0x8]; // 0x0018 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t LeaderMovement[0x4]; // 0x0020 (Size: 0x4, Type: OptionalProperty)
    std::uint8_t LeaderCloserThan[0x8]; // 0x0024 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t LeaderFurtherThan[0x8]; // 0x002C (Size: 0x8, Type: OptionalProperty)
    std::uint8_t LeaderPredictedLocationCloserThan[0x10]; // 0x0034 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t LeaderPredictedLocationFurtherThan[0x1]; // 0x0044 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FCompanionBehaviorConditions, Moods) == 0, "Offset mismatch for FCompanionBehaviorConditions::Moods");
static_assert(offsetof(FCompanionBehaviorConditions, SpeedLowerThan) == 16, "Offset mismatch for FCompanionBehaviorConditions::SpeedLowerThan");
static_assert(offsetof(FCompanionBehaviorConditions, SpeedFasterThan) == 24, "Offset mismatch for FCompanionBehaviorConditions::SpeedFasterThan");
static_assert(offsetof(FCompanionBehaviorConditions, LeaderMovement) == 32, "Offset mismatch for FCompanionBehaviorConditions::LeaderMovement");
static_assert(offsetof(FCompanionBehaviorConditions, LeaderCloserThan) == 36, "Offset mismatch for FCompanionBehaviorConditions::LeaderCloserThan");
static_assert(offsetof(FCompanionBehaviorConditions, LeaderFurtherThan) == 44, "Offset mismatch for FCompanionBehaviorConditions::LeaderFurtherThan");
static_assert(offsetof(FCompanionBehaviorConditions, LeaderPredictedLocationCloserThan) == 52, "Offset mismatch for FCompanionBehaviorConditions::LeaderPredictedLocationCloserThan");
static_assert(offsetof(FCompanionBehaviorConditions, LeaderPredictedLocationFurtherThan) == 68, "Offset mismatch for FCompanionBehaviorConditions::LeaderPredictedLocationFurtherThan");

// /Script/PlayerCompanionRuntime.CompanionBehaviorDescriptor
// Kind: ScriptStruct; super: none
struct FCompanionBehaviorDescriptor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.CompanionBehaviorEvaluator
// Kind: ScriptStruct; super: none
struct FCompanionBehaviorEvaluator
{
public:
    std::uint8_t Settings[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* LoadedTable; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCompanionBehaviorEvaluator, Settings) == 0, "Offset mismatch for FCompanionBehaviorEvaluator::Settings");
static_assert(offsetof(FCompanionBehaviorEvaluator, LoadedTable) == 40, "Offset mismatch for FCompanionBehaviorEvaluator::LoadedTable");

// /Script/PlayerCompanionRuntime.CompanionBehaviorSettings
// Kind: ScriptStruct; super: none
struct FCompanionBehaviorSettings
{
public:
    std::uint8_t BehaviorTable[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    float MinTimeBetweenEvaluations; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxTimeBetweenEvaluations; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompanionBehaviorSettings, BehaviorTable) == 0, "Offset mismatch for FCompanionBehaviorSettings::BehaviorTable");
static_assert(offsetof(FCompanionBehaviorSettings, MinTimeBetweenEvaluations) == 32, "Offset mismatch for FCompanionBehaviorSettings::MinTimeBetweenEvaluations");
static_assert(offsetof(FCompanionBehaviorSettings, MaxTimeBetweenEvaluations) == 36, "Offset mismatch for FCompanionBehaviorSettings::MaxTimeBetweenEvaluations");

// /Script/PlayerCompanionRuntime.CompanionBehaviorTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FCompanionBehaviorTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Behavior[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t EnterConditions[0x58]; // 0x0018 (Size: 0x58, Type: StructProperty)
    std::uint8_t ContinueConditionsMode; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    std::uint8_t ContinueConditions[0x58]; // 0x0078 (Size: 0x58, Type: StructProperty)
    float CooldownAfterFailure; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float CooldownAfterCompletion; // 0x00D4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompanionBehaviorTableRow, Behavior) == 8, "Offset mismatch for FCompanionBehaviorTableRow::Behavior");
static_assert(offsetof(FCompanionBehaviorTableRow, EnterConditions) == 24, "Offset mismatch for FCompanionBehaviorTableRow::EnterConditions");
static_assert(offsetof(FCompanionBehaviorTableRow, ContinueConditionsMode) == 112, "Offset mismatch for FCompanionBehaviorTableRow::ContinueConditionsMode");
static_assert(offsetof(FCompanionBehaviorTableRow, ContinueConditions) == 120, "Offset mismatch for FCompanionBehaviorTableRow::ContinueConditions");
static_assert(offsetof(FCompanionBehaviorTableRow, CooldownAfterFailure) == 208, "Offset mismatch for FCompanionBehaviorTableRow::CooldownAfterFailure");
static_assert(offsetof(FCompanionBehaviorTableRow, CooldownAfterCompletion) == 212, "Offset mismatch for FCompanionBehaviorTableRow::CooldownAfterCompletion");

// /Script/PlayerCompanionRuntime.CompanionCustomBehavior
// Kind: ScriptStruct; super: CompanionIdleBehavior
struct FCompanionCustomBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionCustomBehavior, Companion) == 8, "Offset mismatch for FCompanionCustomBehavior::Companion");
static_assert(offsetof(FCompanionCustomBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionCustomBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionCustomBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionIdleBehaviorDescriptor
struct FCompanionCustomBehaviorDescriptor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.CompanionFollowTrailBehavior
// Kind: ScriptStruct; super: CompanionBehavior
struct FCompanionFollowTrailBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionFollowTrailBehavior, Companion) == 8, "Offset mismatch for FCompanionFollowTrailBehavior::Companion");
static_assert(offsetof(FCompanionFollowTrailBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionFollowTrailBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionFollowTrailBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionBehaviorDescriptor
struct FCompanionFollowTrailBehaviorDescriptor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float TrailPointReachRadius2D; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DistanceToLeaderToStopFollowing; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompanionFollowTrailBehaviorDescriptor, TrailPointReachRadius2D) == 8, "Offset mismatch for FCompanionFollowTrailBehaviorDescriptor::TrailPointReachRadius2D");
static_assert(offsetof(FCompanionFollowTrailBehaviorDescriptor, DistanceToLeaderToStopFollowing) == 12, "Offset mismatch for FCompanionFollowTrailBehaviorDescriptor::DistanceToLeaderToStopFollowing");

// /Script/PlayerCompanionRuntime.CompanionForcedSparkBehavior
// Kind: ScriptStruct; super: CompanionBehavior
struct FCompanionForcedSparkBehavior
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> ReappearVolume; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
    void* ReappearSpot; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCompanionForcedSparkBehavior, ReappearVolume) == 48, "Offset mismatch for FCompanionForcedSparkBehavior::ReappearVolume");
static_assert(offsetof(FCompanionForcedSparkBehavior, ReappearSpot) == 64, "Offset mismatch for FCompanionForcedSparkBehavior::ReappearSpot");

// /Script/PlayerCompanionRuntime.CompanionForcedSparkBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionBehaviorDescriptor
struct FCompanionForcedSparkBehaviorDescriptor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* ReappearPositionQuery; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float MinTimeBetweenEQSQueries; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxReappearWaitTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float TimeToMoveSparkToLeader; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxDurationInNavigationSparkBeforeForcedSpark; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxDistanceToGoal; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaxVerticalDistanceToGoal; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float DistanceFromLeaderToTeleport; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float UnableToFindGoalMaxDurationToTriggerSpark; // 0x002C (Size: 0x4, Type: FloatProperty)
    float UnableToFindGoalPlayerDistance2dToTriggerSpark; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float UnableToFindGoalPlayerDistanceZToTriggerSpark; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SparkPositionOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float SurfaceSwimmingSparkOffset; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, ReappearPositionQuery) == 8, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::ReappearPositionQuery");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, MinTimeBetweenEQSQueries) == 16, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::MinTimeBetweenEQSQueries");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, MaxReappearWaitTime) == 20, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::MaxReappearWaitTime");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, TimeToMoveSparkToLeader) == 24, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::TimeToMoveSparkToLeader");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, MaxDurationInNavigationSparkBeforeForcedSpark) == 28, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::MaxDurationInNavigationSparkBeforeForcedSpark");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, MaxDistanceToGoal) == 32, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::MaxDistanceToGoal");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, MaxVerticalDistanceToGoal) == 36, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::MaxVerticalDistanceToGoal");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, DistanceFromLeaderToTeleport) == 40, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::DistanceFromLeaderToTeleport");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, UnableToFindGoalMaxDurationToTriggerSpark) == 44, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::UnableToFindGoalMaxDurationToTriggerSpark");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, UnableToFindGoalPlayerDistance2dToTriggerSpark) == 48, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::UnableToFindGoalPlayerDistance2dToTriggerSpark");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, UnableToFindGoalPlayerDistanceZToTriggerSpark) == 52, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::UnableToFindGoalPlayerDistanceZToTriggerSpark");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, SparkPositionOffset) == 56, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::SparkPositionOffset");
static_assert(offsetof(FCompanionForcedSparkBehaviorDescriptor, SurfaceSwimmingSparkOffset) == 80, "Offset mismatch for FCompanionForcedSparkBehaviorDescriptor::SurfaceSwimmingSparkOffset");

// /Script/PlayerCompanionRuntime.CompanionIdleBehavior
// Kind: ScriptStruct; super: CompanionBehavior
struct FCompanionIdleBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionIdleBehavior, Companion) == 8, "Offset mismatch for FCompanionIdleBehavior::Companion");
static_assert(offsetof(FCompanionIdleBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionIdleBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionIdleBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionBehaviorDescriptor
struct FCompanionIdleBehaviorDescriptor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.CompanionInteractBehavior
// Kind: ScriptStruct; super: CompanionBehavior
struct FCompanionInteractBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionInteractBehavior, Companion) == 8, "Offset mismatch for FCompanionInteractBehavior::Companion");
static_assert(offsetof(FCompanionInteractBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionInteractBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionInteractBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionBehaviorDescriptor
struct FCompanionInteractBehaviorDescriptor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t StationaryTimeAfterInteraction[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionInteractBehaviorDescriptor, StationaryTimeAfterInteraction) == 8, "Offset mismatch for FCompanionInteractBehaviorDescriptor::StationaryTimeAfterInteraction");

// /Script/PlayerCompanionRuntime.CompanionMoveToBehavior
// Kind: ScriptStruct; super: CompanionBehavior
struct FCompanionMoveToBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionMoveToBehavior, Companion) == 8, "Offset mismatch for FCompanionMoveToBehavior::Companion");
static_assert(offsetof(FCompanionMoveToBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionMoveToBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionMoveToDestinationParams
// Kind: ScriptStruct; super: none
struct FCompanionMoveToDestinationParams
{
public:
    float DistanceFromLeaderToUpdateGoal; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RefreshDestinationPeriodDuringMovement; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WaitTimeAtDestination[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionMoveToDestinationParams, DistanceFromLeaderToUpdateGoal) == 0, "Offset mismatch for FCompanionMoveToDestinationParams::DistanceFromLeaderToUpdateGoal");
static_assert(offsetof(FCompanionMoveToDestinationParams, RefreshDestinationPeriodDuringMovement) == 4, "Offset mismatch for FCompanionMoveToDestinationParams::RefreshDestinationPeriodDuringMovement");
static_assert(offsetof(FCompanionMoveToDestinationParams, WaitTimeAtDestination) == 8, "Offset mismatch for FCompanionMoveToDestinationParams::WaitTimeAtDestination");

// /Script/PlayerCompanionRuntime.CompanionMoveToEQSBehavior
// Kind: ScriptStruct; super: CompanionMoveToBehavior
struct FCompanionMoveToEQSBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionMoveToEQSBehavior, Companion) == 8, "Offset mismatch for FCompanionMoveToEQSBehavior::Companion");
static_assert(offsetof(FCompanionMoveToEQSBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionMoveToEQSBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionMoveToEQSBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionBehaviorDescriptor
struct FCompanionMoveToEQSBehaviorDescriptor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* PositionQuery; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MoveToParameters[0x14]; // 0x0010 (Size: 0x14, Type: StructProperty)
    std::uint8_t DestinationParameters[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    std::uint8_t bRequestImmediateEQS; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompanionMoveToEQSBehaviorDescriptor, PositionQuery) == 8, "Offset mismatch for FCompanionMoveToEQSBehaviorDescriptor::PositionQuery");
static_assert(offsetof(FCompanionMoveToEQSBehaviorDescriptor, MoveToParameters) == 16, "Offset mismatch for FCompanionMoveToEQSBehaviorDescriptor::MoveToParameters");
static_assert(offsetof(FCompanionMoveToEQSBehaviorDescriptor, DestinationParameters) == 36, "Offset mismatch for FCompanionMoveToEQSBehaviorDescriptor::DestinationParameters");
static_assert(offsetof(FCompanionMoveToEQSBehaviorDescriptor, bRequestImmediateEQS) == 52, "Offset mismatch for FCompanionMoveToEQSBehaviorDescriptor::bRequestImmediateEQS");

// /Script/PlayerCompanionRuntime.CompanionMoveToParams
// Kind: ScriptStruct; super: none
struct FCompanionMoveToParams
{
public:
    float AcceptanceRadius2D; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MovementSpeed; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float CustomMovementSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FacingAtDestination; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bStopAtGoal; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRelativeToLeader; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTeleportToDestination; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSparkNavigation; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompanionMoveToParams, AcceptanceRadius2D) == 0, "Offset mismatch for FCompanionMoveToParams::AcceptanceRadius2D");
static_assert(offsetof(FCompanionMoveToParams, MovementSpeed) == 4, "Offset mismatch for FCompanionMoveToParams::MovementSpeed");
static_assert(offsetof(FCompanionMoveToParams, CustomMovementSpeed) == 8, "Offset mismatch for FCompanionMoveToParams::CustomMovementSpeed");
static_assert(offsetof(FCompanionMoveToParams, FacingAtDestination) == 12, "Offset mismatch for FCompanionMoveToParams::FacingAtDestination");
static_assert(offsetof(FCompanionMoveToParams, bStopAtGoal) == 13, "Offset mismatch for FCompanionMoveToParams::bStopAtGoal");
static_assert(offsetof(FCompanionMoveToParams, bRelativeToLeader) == 14, "Offset mismatch for FCompanionMoveToParams::bRelativeToLeader");
static_assert(offsetof(FCompanionMoveToParams, bTeleportToDestination) == 15, "Offset mismatch for FCompanionMoveToParams::bTeleportToDestination");
static_assert(offsetof(FCompanionMoveToParams, bAllowSparkNavigation) == 16, "Offset mismatch for FCompanionMoveToParams::bAllowSparkNavigation");

// /Script/PlayerCompanionRuntime.CompanionReactBehavior
// Kind: ScriptStruct; super: CompanionBehavior
struct FCompanionReactBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionReactBehavior, Companion) == 8, "Offset mismatch for FCompanionReactBehavior::Companion");
static_assert(offsetof(FCompanionReactBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionReactBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionReactBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionBehaviorDescriptor
struct FCompanionReactBehaviorDescriptor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float ReactionDelayAtMaxSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompanionReactBehaviorDescriptor, ReactionDelayAtMaxSpeed) == 8, "Offset mismatch for FCompanionReactBehaviorDescriptor::ReactionDelayAtMaxSpeed");

// /Script/PlayerCompanionRuntime.CompanionVolumePositionBehavior
// Kind: ScriptStruct; super: CompanionMoveToBehavior
struct FCompanionVolumePositionBehavior
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Companion; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedDescriptor[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCompanionVolumePositionBehavior, Companion) == 8, "Offset mismatch for FCompanionVolumePositionBehavior::Companion");
static_assert(offsetof(FCompanionVolumePositionBehavior, InstancedDescriptor) == 16, "Offset mismatch for FCompanionVolumePositionBehavior::InstancedDescriptor");

// /Script/PlayerCompanionRuntime.CompanionVolumePositionBehaviorDescriptor
// Kind: ScriptStruct; super: CompanionBehaviorDescriptor
struct FCompanionVolumePositionBehaviorDescriptor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t DestinationParameters[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    float DistanceFromLeaderToTeleportOnComplete; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCompanionVolumePositionBehaviorDescriptor, DestinationParameters) == 8, "Offset mismatch for FCompanionVolumePositionBehaviorDescriptor::DestinationParameters");
static_assert(offsetof(FCompanionVolumePositionBehaviorDescriptor, DistanceFromLeaderToTeleportOnComplete) == 24, "Offset mismatch for FCompanionVolumePositionBehaviorDescriptor::DistanceFromLeaderToTeleportOnComplete");

// /Script/PlayerCompanionRuntime.FortLODLevel
// Kind: ScriptStruct; super: none
struct FFortLODLevel
{
public:
    float MaxDistanceFromPlayer; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortLODLevel, MaxDistanceFromPlayer) == 0, "Offset mismatch for FFortLODLevel::MaxDistanceFromPlayer");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionBodyState
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionBodyState
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortPlayerCompanionBodyState, Type) == 0, "Offset mismatch for FFortPlayerCompanionBodyState::Type");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionCASOverride
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionCASOverride
{
public:
    std::uint8_t AssetTag[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t CharacterGender; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t CharacterBodyType; // 0x0021 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0xE]; // 0x0022
    std::uint8_t MeshToScene[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortPlayerCompanionCASOverride, AssetTag) == 0, "Offset mismatch for FFortPlayerCompanionCASOverride::AssetTag");
static_assert(offsetof(FFortPlayerCompanionCASOverride, CharacterGender) == 32, "Offset mismatch for FFortPlayerCompanionCASOverride::CharacterGender");
static_assert(offsetof(FFortPlayerCompanionCASOverride, CharacterBodyType) == 33, "Offset mismatch for FFortPlayerCompanionCASOverride::CharacterBodyType");
static_assert(offsetof(FFortPlayerCompanionCASOverride, MeshToScene) == 48, "Offset mismatch for FFortPlayerCompanionCASOverride::MeshToScene");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionClientSmoothingConfig
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionClientSmoothingConfig
{
public:
    std::uint8_t MeshRotationOffset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    double VerticalDistanceThresholdToStop; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    double HorizontalDistanceThresholdToStop; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double ServerStoppedSpeedThreshold; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double InterpolationBias; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double MinApproachSpeed; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    double MaxClientAcceleration; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    double SpeedDiffToApplyMaxAcceleration; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    double MinClientDeceleration; // 0x0050 (Size: 0x8, Type: DoubleProperty)
    double MaxClientDeceleration; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    double SpeedDiffToApplyMaxDeceleration; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    double MaxServerSpeedRatioOnClient; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double DistanceToStartBlendingInServerSpeed; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double DistanceThresholdForTeleport; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    float MinAngularSpeedDegrees; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float AngleDiffForMaxAngularSpeedDegrees; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, MeshRotationOffset) == 0, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::MeshRotationOffset");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, VerticalDistanceThresholdToStop) == 24, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::VerticalDistanceThresholdToStop");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, HorizontalDistanceThresholdToStop) == 32, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::HorizontalDistanceThresholdToStop");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, ServerStoppedSpeedThreshold) == 40, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::ServerStoppedSpeedThreshold");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, InterpolationBias) == 48, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::InterpolationBias");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, MinApproachSpeed) == 56, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::MinApproachSpeed");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, MaxClientAcceleration) == 64, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::MaxClientAcceleration");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, SpeedDiffToApplyMaxAcceleration) == 72, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::SpeedDiffToApplyMaxAcceleration");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, MinClientDeceleration) == 80, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::MinClientDeceleration");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, MaxClientDeceleration) == 88, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::MaxClientDeceleration");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, SpeedDiffToApplyMaxDeceleration) == 96, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::SpeedDiffToApplyMaxDeceleration");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, MaxServerSpeedRatioOnClient) == 104, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::MaxServerSpeedRatioOnClient");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, DistanceToStartBlendingInServerSpeed) == 112, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::DistanceToStartBlendingInServerSpeed");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, DistanceThresholdForTeleport) == 120, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::DistanceThresholdForTeleport");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, MinAngularSpeedDegrees) == 128, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::MinAngularSpeedDegrees");
static_assert(offsetof(FFortPlayerCompanionClientSmoothingConfig, AngleDiffForMaxAngularSpeedDegrees) == 132, "Offset mismatch for FFortPlayerCompanionClientSmoothingConfig::AngleDiffForMaxAngularSpeedDegrees");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionGenericMovementConfiguration
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionGenericMovementConfiguration
{
public:
    float NormalSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FollowTrailSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* MovementSpeedRatioVsDesiredTurningAngle; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float MinSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeedDegrees; // 0x001C (Size: 0x4, Type: FloatProperty)
    float DistanceToApplyGoalRotation; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    void* AngularSpeedRatioVsMovementSpeed; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float MaxAccelerationPerSecond; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaxDecelerationPerSecond; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float StepUpHeight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WalkableSurfaceMaxAngle; // 0x003C (Size: 0x4, Type: FloatProperty)
    float AcceptanceRadius2D; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float AcceptanceHeight; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float SpeedMatchRadius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float StopAnimationTriggerDistance; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, NormalSpeed) == 0, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::NormalSpeed");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, MaxSpeed) == 4, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::MaxSpeed");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, FollowTrailSpeed) == 8, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::FollowTrailSpeed");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, MovementSpeedRatioVsDesiredTurningAngle) == 16, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::MovementSpeedRatioVsDesiredTurningAngle");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, MinSpeed) == 24, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::MinSpeed");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, MaxAngularSpeedDegrees) == 28, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::MaxAngularSpeedDegrees");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, DistanceToApplyGoalRotation) == 32, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::DistanceToApplyGoalRotation");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, AngularSpeedRatioVsMovementSpeed) == 40, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::AngularSpeedRatioVsMovementSpeed");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, MaxAccelerationPerSecond) == 48, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::MaxAccelerationPerSecond");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, MaxDecelerationPerSecond) == 52, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::MaxDecelerationPerSecond");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, StepUpHeight) == 56, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::StepUpHeight");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, WalkableSurfaceMaxAngle) == 60, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::WalkableSurfaceMaxAngle");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, AcceptanceRadius2D) == 64, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::AcceptanceRadius2D");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, AcceptanceHeight) == 68, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::AcceptanceHeight");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, SpeedMatchRadius) == 72, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::SpeedMatchRadius");
static_assert(offsetof(FFortPlayerCompanionGenericMovementConfiguration, StopAnimationTriggerDistance) == 76, "Offset mismatch for FFortPlayerCompanionGenericMovementConfiguration::StopAnimationTriggerDistance");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionGenericReactionTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortPlayerCompanionGenericReactionTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Reaction[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::int32_t LookAtSubjectIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t VerbAuthorCategories; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t bClearMood; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortPlayerCompanionGenericReactionTableRow, Reaction) == 8, "Offset mismatch for FFortPlayerCompanionGenericReactionTableRow::Reaction");
static_assert(offsetof(FFortPlayerCompanionGenericReactionTableRow, LookAtSubjectIndex) == 20, "Offset mismatch for FFortPlayerCompanionGenericReactionTableRow::LookAtSubjectIndex");
static_assert(offsetof(FFortPlayerCompanionGenericReactionTableRow, VerbAuthorCategories) == 24, "Offset mismatch for FFortPlayerCompanionGenericReactionTableRow::VerbAuthorCategories");
static_assert(offsetof(FFortPlayerCompanionGenericReactionTableRow, bClearMood) == 28, "Offset mismatch for FFortPlayerCompanionGenericReactionTableRow::bClearMood");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionGoal
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionGoal
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t DestinationOrOffset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsRelativeToLeader; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1F]; // 0x0031
    std::uint8_t DesiredYawAtGoal[0x1]; // 0x0050 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FFortPlayerCompanionGoal, DestinationOrOffset) == 24, "Offset mismatch for FFortPlayerCompanionGoal::DestinationOrOffset");
static_assert(offsetof(FFortPlayerCompanionGoal, bIsRelativeToLeader) == 48, "Offset mismatch for FFortPlayerCompanionGoal::bIsRelativeToLeader");
static_assert(offsetof(FFortPlayerCompanionGoal, DesiredYawAtGoal) == 80, "Offset mismatch for FFortPlayerCompanionGoal::DesiredYawAtGoal");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionInstigatorState
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionInstigatorState
{
public:
    void* Pawn; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CharacterMovementComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* CompanionComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortPlayerCompanionInstigatorState, Pawn) == 0, "Offset mismatch for FFortPlayerCompanionInstigatorState::Pawn");
static_assert(offsetof(FFortPlayerCompanionInstigatorState, CharacterMovementComponent) == 8, "Offset mismatch for FFortPlayerCompanionInstigatorState::CharacterMovementComponent");
static_assert(offsetof(FFortPlayerCompanionInstigatorState, CompanionComponent) == 16, "Offset mismatch for FFortPlayerCompanionInstigatorState::CompanionComponent");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionInteractionConfiguration
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionInteractionConfiguration
{
public:
    FName SecondaryRole; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t PrimaryActorExternalTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t SecondaryActorExternalTags[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TArray<void*> WarpTargets; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    float MaxSpeedForInteraction; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxDistanceForInteraction; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t RequestingPawnCanInteractTagQuery[0x48]; // 0x0060 (Size: 0x48, Type: StructProperty)
    float MaxAllowedHeightDifference; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float MaxAllowedDownwardHeightDifference; // 0x00AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, SecondaryRole) == 0, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::SecondaryRole");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, PrimaryActorExternalTags) == 8, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::PrimaryActorExternalTags");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, SecondaryActorExternalTags) == 40, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::SecondaryActorExternalTags");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, WarpTargets) == 72, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::WarpTargets");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, MaxSpeedForInteraction) == 88, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::MaxSpeedForInteraction");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, MaxDistanceForInteraction) == 92, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::MaxDistanceForInteraction");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, RequestingPawnCanInteractTagQuery) == 96, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::RequestingPawnCanInteractTagQuery");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, MaxAllowedHeightDifference) == 168, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::MaxAllowedHeightDifference");
static_assert(offsetof(FFortPlayerCompanionInteractionConfiguration, MaxAllowedDownwardHeightDifference) == 172, "Offset mismatch for FFortPlayerCompanionInteractionConfiguration::MaxAllowedDownwardHeightDifference");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionLocationConfiguration
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionLocationConfiguration
{
public:
    float MinSpeedForMovingPlayerState; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MinTimeInMinSpeedForMovingPlayerState; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinTimeBelowMinSpeedForStationaryPlayerState; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float ForceSparkModeWhilePlayerIsInCombatForSeconds; // 0x000C (Size: 0x4, Type: FloatProperty)
    float SweepStartAbovePosition; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SweepEndBelowPosition; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceChannel; // 0x0018 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TraceCollisionResponses[0x47]; // 0x0019 (Size: 0x47, Type: StructProperty)
    TArray<void*> UnwalkableObjectTypes; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnwalkableActorClasses; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UnwalkableSurfaceTypes; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PassThroughObjectTypes; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    float SweepCapsuleRadius; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float SweepCapsuleHalfHeight; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float MinDistanceFromExistingGoal; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float MinDistanceFromPlayerToForceSparkBodyType; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float MinPlayerSpeedToForceSparkBodyType; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float MinDistanceFromPlayerForNormalBodyType; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float OverlapTimerWithSpecialActorsToTriggerSpark; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float OverlapTimerWithNormalActorsToTriggerSpark; // 0x00BC (Size: 0x4, Type: FloatProperty)
    float OverlapDelayToChangePosition; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlockedMovementAttemptsToTriggerSpark; // 0x00C4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00C5
    float BlockedMovementTimeWindowToTriggerSpark; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float ExtraZOffsetOnLocationSet; // 0x00CC (Size: 0x4, Type: FloatProperty)
    float MinTimeToSwapFromSparkToNormal; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    float TimeBetweenPhysicsTestsWhenStatic; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ForceRotationToPlayerWhenStopped; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D9
    float MovementModeRunThreshold; // 0x00DC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinSpeedForMovingPlayerState) == 0, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinSpeedForMovingPlayerState");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinTimeInMinSpeedForMovingPlayerState) == 4, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinTimeInMinSpeedForMovingPlayerState");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinTimeBelowMinSpeedForStationaryPlayerState) == 8, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinTimeBelowMinSpeedForStationaryPlayerState");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, ForceSparkModeWhilePlayerIsInCombatForSeconds) == 12, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::ForceSparkModeWhilePlayerIsInCombatForSeconds");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, SweepStartAbovePosition) == 16, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::SweepStartAbovePosition");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, SweepEndBelowPosition) == 20, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::SweepEndBelowPosition");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, TraceChannel) == 24, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::TraceChannel");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, TraceCollisionResponses) == 25, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::TraceCollisionResponses");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, UnwalkableObjectTypes) == 96, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::UnwalkableObjectTypes");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, UnwalkableActorClasses) == 112, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::UnwalkableActorClasses");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, UnwalkableSurfaceTypes) == 128, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::UnwalkableSurfaceTypes");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, PassThroughObjectTypes) == 144, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::PassThroughObjectTypes");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, SweepCapsuleRadius) == 160, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::SweepCapsuleRadius");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, SweepCapsuleHalfHeight) == 164, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::SweepCapsuleHalfHeight");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinDistanceFromExistingGoal) == 168, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinDistanceFromExistingGoal");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinDistanceFromPlayerToForceSparkBodyType) == 172, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinDistanceFromPlayerToForceSparkBodyType");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinPlayerSpeedToForceSparkBodyType) == 176, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinPlayerSpeedToForceSparkBodyType");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinDistanceFromPlayerForNormalBodyType) == 180, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinDistanceFromPlayerForNormalBodyType");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, OverlapTimerWithSpecialActorsToTriggerSpark) == 184, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::OverlapTimerWithSpecialActorsToTriggerSpark");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, OverlapTimerWithNormalActorsToTriggerSpark) == 188, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::OverlapTimerWithNormalActorsToTriggerSpark");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, OverlapDelayToChangePosition) == 192, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::OverlapDelayToChangePosition");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, BlockedMovementAttemptsToTriggerSpark) == 196, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::BlockedMovementAttemptsToTriggerSpark");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, BlockedMovementTimeWindowToTriggerSpark) == 200, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::BlockedMovementTimeWindowToTriggerSpark");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, ExtraZOffsetOnLocationSet) == 204, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::ExtraZOffsetOnLocationSet");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MinTimeToSwapFromSparkToNormal) == 208, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MinTimeToSwapFromSparkToNormal");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, TimeBetweenPhysicsTestsWhenStatic) == 212, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::TimeBetweenPhysicsTestsWhenStatic");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, ForceRotationToPlayerWhenStopped) == 216, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::ForceRotationToPlayerWhenStopped");
static_assert(offsetof(FFortPlayerCompanionLocationConfiguration, MovementModeRunThreshold) == 220, "Offset mismatch for FFortPlayerCompanionLocationConfiguration::MovementModeRunThreshold");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionNormalMovementConfiguration
// Kind: ScriptStruct; super: FortPlayerCompanionGenericMovementConfiguration
struct FFortPlayerCompanionNormalMovementConfiguration
{
public:
    float NormalSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FollowTrailSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* MovementSpeedRatioVsDesiredTurningAngle; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float MinSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeedDegrees; // 0x001C (Size: 0x4, Type: FloatProperty)
    float DistanceToApplyGoalRotation; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    void* AngularSpeedRatioVsMovementSpeed; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float MaxAccelerationPerSecond; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaxDecelerationPerSecond; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float StepUpHeight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WalkableSurfaceMaxAngle; // 0x003C (Size: 0x4, Type: FloatProperty)
    float AcceptanceRadius2D; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float AcceptanceHeight; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float SpeedMatchRadius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float StopAnimationTriggerDistance; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, NormalSpeed) == 0, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::NormalSpeed");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, MaxSpeed) == 4, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::MaxSpeed");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, FollowTrailSpeed) == 8, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::FollowTrailSpeed");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, MovementSpeedRatioVsDesiredTurningAngle) == 16, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::MovementSpeedRatioVsDesiredTurningAngle");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, MinSpeed) == 24, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::MinSpeed");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, MaxAngularSpeedDegrees) == 28, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::MaxAngularSpeedDegrees");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, DistanceToApplyGoalRotation) == 32, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::DistanceToApplyGoalRotation");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, AngularSpeedRatioVsMovementSpeed) == 40, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::AngularSpeedRatioVsMovementSpeed");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, MaxAccelerationPerSecond) == 48, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::MaxAccelerationPerSecond");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, MaxDecelerationPerSecond) == 52, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::MaxDecelerationPerSecond");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, StepUpHeight) == 56, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::StepUpHeight");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, WalkableSurfaceMaxAngle) == 60, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::WalkableSurfaceMaxAngle");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, AcceptanceRadius2D) == 64, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::AcceptanceRadius2D");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, AcceptanceHeight) == 68, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::AcceptanceHeight");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, SpeedMatchRadius) == 72, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::SpeedMatchRadius");
static_assert(offsetof(FFortPlayerCompanionNormalMovementConfiguration, StopAnimationTriggerDistance) == 76, "Offset mismatch for FFortPlayerCompanionNormalMovementConfiguration::StopAnimationTriggerDistance");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionReactionRequest
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionReactionRequest
{
public:
    std::uint8_t Identifier[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    float Cooldown; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Priority; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortPlayerCompanionReactionRequest, Identifier) == 0, "Offset mismatch for FFortPlayerCompanionReactionRequest::Identifier");
static_assert(offsetof(FFortPlayerCompanionReactionRequest, Cooldown) == 4, "Offset mismatch for FFortPlayerCompanionReactionRequest::Cooldown");
static_assert(offsetof(FFortPlayerCompanionReactionRequest, Priority) == 8, "Offset mismatch for FFortPlayerCompanionReactionRequest::Priority");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionRunningInteraction
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionRunningInteraction
{
public:
    std::uint8_t bIsRunning; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    TWeakObjectPtr<void> LookAtTarget; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortPlayerCompanionRunningInteraction, bIsRunning) == 0, "Offset mismatch for FFortPlayerCompanionRunningInteraction::bIsRunning");
static_assert(offsetof(FFortPlayerCompanionRunningInteraction, LookAtTarget) == 4, "Offset mismatch for FFortPlayerCompanionRunningInteraction::LookAtTarget");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionRunningReaction
// Kind: ScriptStruct; super: none
struct FFortPlayerCompanionRunningReaction
{
public:
    std::uint8_t Reaction[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    float ReactionTimestamp; // 0x000C (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> LookAtTarget; // 0x0010 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortPlayerCompanionRunningReaction, Reaction) == 0, "Offset mismatch for FFortPlayerCompanionRunningReaction::Reaction");
static_assert(offsetof(FFortPlayerCompanionRunningReaction, ReactionTimestamp) == 12, "Offset mismatch for FFortPlayerCompanionRunningReaction::ReactionTimestamp");
static_assert(offsetof(FFortPlayerCompanionRunningReaction, LookAtTarget) == 16, "Offset mismatch for FFortPlayerCompanionRunningReaction::LookAtTarget");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionSparkMovementConfiguration
// Kind: ScriptStruct; super: FortPlayerCompanionGenericMovementConfiguration
struct FFortPlayerCompanionSparkMovementConfiguration
{
public:
    float NormalSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxSpeed; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float FollowTrailSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* MovementSpeedRatioVsDesiredTurningAngle; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float MinSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MaxAngularSpeedDegrees; // 0x001C (Size: 0x4, Type: FloatProperty)
    float DistanceToApplyGoalRotation; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    void* AngularSpeedRatioVsMovementSpeed; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float MaxAccelerationPerSecond; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MaxDecelerationPerSecond; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float StepUpHeight; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WalkableSurfaceMaxAngle; // 0x003C (Size: 0x4, Type: FloatProperty)
    float AcceptanceRadius2D; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float AcceptanceHeight; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float SpeedMatchRadius; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float StopAnimationTriggerDistance; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, NormalSpeed) == 0, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::NormalSpeed");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, MaxSpeed) == 4, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::MaxSpeed");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, FollowTrailSpeed) == 8, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::FollowTrailSpeed");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, MovementSpeedRatioVsDesiredTurningAngle) == 16, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::MovementSpeedRatioVsDesiredTurningAngle");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, MinSpeed) == 24, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::MinSpeed");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, MaxAngularSpeedDegrees) == 28, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::MaxAngularSpeedDegrees");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, DistanceToApplyGoalRotation) == 32, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::DistanceToApplyGoalRotation");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, AngularSpeedRatioVsMovementSpeed) == 40, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::AngularSpeedRatioVsMovementSpeed");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, MaxAccelerationPerSecond) == 48, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::MaxAccelerationPerSecond");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, MaxDecelerationPerSecond) == 52, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::MaxDecelerationPerSecond");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, StepUpHeight) == 56, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::StepUpHeight");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, WalkableSurfaceMaxAngle) == 60, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::WalkableSurfaceMaxAngle");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, AcceptanceRadius2D) == 64, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::AcceptanceRadius2D");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, AcceptanceHeight) == 68, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::AcceptanceHeight");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, SpeedMatchRadius) == 72, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::SpeedMatchRadius");
static_assert(offsetof(FFortPlayerCompanionSparkMovementConfiguration, StopAnimationTriggerDistance) == 76, "Offset mismatch for FFortPlayerCompanionSparkMovementConfiguration::StopAnimationTriggerDistance");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionVerbReactionTableRow
// Kind: ScriptStruct; super: FortPlayerCompanionGenericReactionTableRow
struct FFortPlayerCompanionVerbReactionTableRow
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> VerbFilters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortPlayerCompanionVerbReactionTableRow, VerbFilters) == 32, "Offset mismatch for FFortPlayerCompanionVerbReactionTableRow::VerbFilters");

// /Script/PlayerCompanionRuntime.PredictionCondition
// Kind: ScriptStruct; super: none
struct FPredictionCondition
{
public:
    float PredictionTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Threshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAveragedVelocity; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPredictionCondition, PredictionTime) == 0, "Offset mismatch for FPredictionCondition::PredictionTime");
static_assert(offsetof(FPredictionCondition, Threshold) == 4, "Offset mismatch for FPredictionCondition::Threshold");
static_assert(offsetof(FPredictionCondition, bUseAveragedVelocity) == 8, "Offset mismatch for FPredictionCondition::bUseAveragedVelocity");

// /Script/PlayerCompanionRuntime.CompanionBehaviorVolumeEditorComponent
// Kind: Class; super: ActorComponent
class UCompanionBehaviorVolumeEditorComponent
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

static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, PrimaryComponentTick) == 56, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::PrimaryComponentTick");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, ComponentTags) == 104, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::ComponentTags");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, AssetUserData) == 120, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::AssetUserData");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, UCSSerializationIndex) == 144, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::UCSSerializationIndex");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, bNetAddressable) == 152, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::bNetAddressable");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, bAutoActivate) == 154, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::bAutoActivate");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, bIsEditorOnly) == 155, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::bIsEditorOnly");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, CreationMethod) == 185, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::CreationMethod");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, OnComponentActivated) == 186, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::OnComponentActivated");
static_assert(offsetof(UCompanionBehaviorVolumeEditorComponent, OnComponentDeactivated) == 187, "Offset mismatch for UCompanionBehaviorVolumeEditorComponent::OnComponentDeactivated");

// /Script/PlayerCompanionRuntime.CompanionVolumeComponent
// Kind: Class; super: ActorComponent
class UCompanionVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t VolumeType; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    std::uint8_t BoxExtent[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    float SphereRadius; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDrawDebug; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00ED
    TArray<void*> PickedShapeComponents; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Behavior; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0101
    TArray<void*> WaitingSpots; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bProjectWaitingSpotsToGround; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0119
    float ProjectToGroundRange; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MoveToParameters[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    TArray<void*> WaitingActors; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ShapeComponents; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReservationOwners; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCompanionVolumeComponent, VolumeType) == 200, "Offset mismatch for UCompanionVolumeComponent::VolumeType");
static_assert(offsetof(UCompanionVolumeComponent, BoxExtent) == 208, "Offset mismatch for UCompanionVolumeComponent::BoxExtent");
static_assert(offsetof(UCompanionVolumeComponent, SphereRadius) == 232, "Offset mismatch for UCompanionVolumeComponent::SphereRadius");
static_assert(offsetof(UCompanionVolumeComponent, bDrawDebug) == 236, "Offset mismatch for UCompanionVolumeComponent::bDrawDebug");
static_assert(offsetof(UCompanionVolumeComponent, PickedShapeComponents) == 240, "Offset mismatch for UCompanionVolumeComponent::PickedShapeComponents");
static_assert(offsetof(UCompanionVolumeComponent, Behavior) == 256, "Offset mismatch for UCompanionVolumeComponent::Behavior");
static_assert(offsetof(UCompanionVolumeComponent, WaitingSpots) == 264, "Offset mismatch for UCompanionVolumeComponent::WaitingSpots");
static_assert(offsetof(UCompanionVolumeComponent, bProjectWaitingSpotsToGround) == 280, "Offset mismatch for UCompanionVolumeComponent::bProjectWaitingSpotsToGround");
static_assert(offsetof(UCompanionVolumeComponent, ProjectToGroundRange) == 284, "Offset mismatch for UCompanionVolumeComponent::ProjectToGroundRange");
static_assert(offsetof(UCompanionVolumeComponent, MoveToParameters) == 288, "Offset mismatch for UCompanionVolumeComponent::MoveToParameters");
static_assert(offsetof(UCompanionVolumeComponent, WaitingActors) == 312, "Offset mismatch for UCompanionVolumeComponent::WaitingActors");
static_assert(offsetof(UCompanionVolumeComponent, ShapeComponents) == 328, "Offset mismatch for UCompanionVolumeComponent::ShapeComponents");
static_assert(offsetof(UCompanionVolumeComponent, ReservationOwners) == 344, "Offset mismatch for UCompanionVolumeComponent::ReservationOwners");

// /Script/PlayerCompanionRuntime.FortCheatManager_PlayerCompanion
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_PlayerCompanion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.FortGameFeatureAction_SetCompanionOptions
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_SetCompanionOptions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PlayerCompanionClass[0x28]; // 0x0028 (Size: 0x28, Type: OptionalProperty)
    std::uint8_t VisibilityOverride[0x1]; // 0x0050 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UFortGameFeatureAction_SetCompanionOptions, PlayerCompanionClass) == 40, "Offset mismatch for UFortGameFeatureAction_SetCompanionOptions::PlayerCompanionClass");
static_assert(offsetof(UFortGameFeatureAction_SetCompanionOptions, VisibilityOverride) == 80, "Offset mismatch for UFortGameFeatureAction_SetCompanionOptions::VisibilityOverride");

// /Script/PlayerCompanionRuntime.FortLODObjectInterface
// Kind: Class; super: Interface
class UFortLODObjectInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.FortLODSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UFortLODSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.FortPlayerCompanion
// Kind: Class; super: Actor
class UFortPlayerCompanion
{
public:
    std::uint8_t Pad_0000[0x2D0]; // 0x0000
    void* DefaultNavigationFilter; // 0x02D0 (Size: 0x8, Type: ClassProperty)
    float LeaderMovementPredictionTime; // 0x02D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x02DC
    std::uint8_t LocationConfiguration[0xE0]; // 0x02E0 (Size: 0xE0, Type: StructProperty)
    std::uint8_t NormalMovementConfiguration[0x50]; // 0x03C0 (Size: 0x50, Type: StructProperty)
    std::uint8_t SparkMovementConfiguration[0x50]; // 0x0410 (Size: 0x50, Type: StructProperty)
    std::uint8_t ClientSmoothingConfig[0x88]; // 0x0460 (Size: 0x88, Type: StructProperty)
    std::uint8_t VerbReactionsTable[0x30]; // 0x04E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t CombatMoodPersistenceAfterLastCombatEvent[0x8]; // 0x0518 (Size: 0x8, Type: StructProperty)
    std::uint8_t LeaderIdleDetectionTimeToStartWandering[0x8]; // 0x0520 (Size: 0x8, Type: StructProperty)
    std::uint8_t WanderMoodToBoredMoodTimeInterval[0x8]; // 0x0528 (Size: 0x8, Type: StructProperty)
    void* InteractionOverrideData; // 0x0530 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InteractionConfiguration[0xB0]; // 0x0538 (Size: 0xB0, Type: StructProperty)
    float OverrideInteractAimRadius; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x05EC
    std::uint8_t InteractAimOffset[0x18]; // 0x05F0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SecondaryInteractType; // 0x0608 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0609
    std::uint8_t SecondaryInteractionHandheldItemTagQuery[0x48]; // 0x0610 (Size: 0x48, Type: StructProperty)
    std::int32_t RemoveInteractorHandheldCountDuringSecondaryInteraction; // 0x0658 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0004[0x4]; // 0x065C
    std::uint8_t ForceSparkModeLeaderTags[0x20]; // 0x0660 (Size: 0x20, Type: StructProperty)
    float ForceSparkModeLeaderTagRemovedDelay; // 0x0680 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x0684
    std::uint8_t InteractOffsetFromLeader[0x10]; // 0x0688 (Size: 0x10, Type: StructProperty)
    void* PlayerInteractAbility; // 0x0698 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CombatMoodExcludeWeaponsTagQuery[0x48]; // 0x06A0 (Size: 0x48, Type: StructProperty)
    float MaxReactionDelayAfterEvent; // 0x06E8 (Size: 0x4, Type: FloatProperty)
    float BaseReactionDelay; // 0x06EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSimplifiedInteractionForTouch; // 0x06F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x06F1
    std::uint8_t SurfaceSwimmingSparkLocalOffset[0x18]; // 0x06F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t VehicleSparkLocalOffset[0x18]; // 0x0710 (Size: 0x18, Type: StructProperty)
    void* DisappearVFX; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* LoadedReactionTable; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    void* CachedCharacterMovementComponent; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentGoal[0x58]; // 0x0740 (Size: 0x58, Type: StructProperty)
    std::uint8_t BehaviorSettings[0x28]; // 0x0798 (Size: 0x28, Type: StructProperty)
    std::uint8_t BehaviorEvaluator[0xC0]; // 0x07C0 (Size: 0xC0, Type: StructProperty)
    std::uint8_t BodyState[0xC]; // 0x0880 (Size: 0xC, Type: StructProperty)
    std::uint8_t RunningReaction[0x34]; // 0x088C (Size: 0x34, Type: StructProperty)
    void* RunningReactionMontage; // 0x08C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t QueuedReaction[0x18]; // 0x08C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RunningInteraction[0xC]; // 0x08E0 (Size: 0xC, Type: StructProperty)
    std::uint8_t bHasInteractionRotationOverride; // 0x08EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x08ED
    std::uint8_t InteractionRotationOverride[0x18]; // 0x08F0 (Size: 0x18, Type: StructProperty)
    void* AbilitySystemComponent; // 0x0908 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentMood; // 0x0910 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0911
    TWeakObjectPtr<void> CachedSceneActorComponent; // 0x0914 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0009[0x4]; // 0x091C
    void* CachedSparkNiagaraComponent; // 0x0920 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CachedInteractBoundsComponents; // 0x0928 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bServerIsStopping; // 0x0938 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCompanionInteractionsEnabled; // 0x0939 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnticsEnabled; // 0x093A (Size: 0x1, Type: BoolProperty)
    std::uint8_t SparkLocalOffsetType; // 0x093B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x4]; // 0x093C
    std::uint8_t SparkLocalOffset[0x18]; // 0x0940 (Size: 0x18, Type: StructProperty)
    std::uint8_t SparkWorldOffset[0x18]; // 0x0958 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate OnFortPlayerCompanionChangedRunningReactionDelegate; // 0x0970 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFortPlayerCompanionChangedBodyStateTypeDelegate; // 0x0980 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_000B[0x10]; // 0x0990
    FMulticastInlineDelegate OnSparkLocalOffsetUpdatedDelegate; // 0x09A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnClientMovementModeChanged; // 0x09B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t InstigatorState[0x288]; // 0x09C0 (Size: 0x288, Type: StructProperty)
    TArray<void*> VerbReactionHandles; // 0x0C48 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_000C[0xA0]; // 0x0C58
    void* Mesh; // 0x0CF8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultTags[0x20]; // 0x0D00 (Size: 0x20, Type: StructProperty)
    void* CosmeticComponent; // 0x0D20 (Size: 0x8, Type: ObjectProperty)
    void* CosmeticDownloadCandidateComponent; // 0x0D28 (Size: 0x8, Type: ObjectProperty)
    void* SlopeWarpingComponent; // 0x0D30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUsingCustomBehavior; // 0x0D38 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x7]; // 0x0D39
    TScriptInterface<void> WeakBehaviorVolume; // 0x0D40 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFortPlayerCompanion, DefaultNavigationFilter) == 720, "Offset mismatch for UFortPlayerCompanion::DefaultNavigationFilter");
static_assert(offsetof(UFortPlayerCompanion, LeaderMovementPredictionTime) == 728, "Offset mismatch for UFortPlayerCompanion::LeaderMovementPredictionTime");
static_assert(offsetof(UFortPlayerCompanion, LocationConfiguration) == 736, "Offset mismatch for UFortPlayerCompanion::LocationConfiguration");
static_assert(offsetof(UFortPlayerCompanion, NormalMovementConfiguration) == 960, "Offset mismatch for UFortPlayerCompanion::NormalMovementConfiguration");
static_assert(offsetof(UFortPlayerCompanion, SparkMovementConfiguration) == 1040, "Offset mismatch for UFortPlayerCompanion::SparkMovementConfiguration");
static_assert(offsetof(UFortPlayerCompanion, ClientSmoothingConfig) == 1120, "Offset mismatch for UFortPlayerCompanion::ClientSmoothingConfig");
static_assert(offsetof(UFortPlayerCompanion, VerbReactionsTable) == 1256, "Offset mismatch for UFortPlayerCompanion::VerbReactionsTable");
static_assert(offsetof(UFortPlayerCompanion, CombatMoodPersistenceAfterLastCombatEvent) == 1304, "Offset mismatch for UFortPlayerCompanion::CombatMoodPersistenceAfterLastCombatEvent");
static_assert(offsetof(UFortPlayerCompanion, LeaderIdleDetectionTimeToStartWandering) == 1312, "Offset mismatch for UFortPlayerCompanion::LeaderIdleDetectionTimeToStartWandering");
static_assert(offsetof(UFortPlayerCompanion, WanderMoodToBoredMoodTimeInterval) == 1320, "Offset mismatch for UFortPlayerCompanion::WanderMoodToBoredMoodTimeInterval");
static_assert(offsetof(UFortPlayerCompanion, InteractionOverrideData) == 1328, "Offset mismatch for UFortPlayerCompanion::InteractionOverrideData");
static_assert(offsetof(UFortPlayerCompanion, InteractionConfiguration) == 1336, "Offset mismatch for UFortPlayerCompanion::InteractionConfiguration");
static_assert(offsetof(UFortPlayerCompanion, OverrideInteractAimRadius) == 1512, "Offset mismatch for UFortPlayerCompanion::OverrideInteractAimRadius");
static_assert(offsetof(UFortPlayerCompanion, InteractAimOffset) == 1520, "Offset mismatch for UFortPlayerCompanion::InteractAimOffset");
static_assert(offsetof(UFortPlayerCompanion, SecondaryInteractType) == 1544, "Offset mismatch for UFortPlayerCompanion::SecondaryInteractType");
static_assert(offsetof(UFortPlayerCompanion, SecondaryInteractionHandheldItemTagQuery) == 1552, "Offset mismatch for UFortPlayerCompanion::SecondaryInteractionHandheldItemTagQuery");
static_assert(offsetof(UFortPlayerCompanion, RemoveInteractorHandheldCountDuringSecondaryInteraction) == 1624, "Offset mismatch for UFortPlayerCompanion::RemoveInteractorHandheldCountDuringSecondaryInteraction");
static_assert(offsetof(UFortPlayerCompanion, ForceSparkModeLeaderTags) == 1632, "Offset mismatch for UFortPlayerCompanion::ForceSparkModeLeaderTags");
static_assert(offsetof(UFortPlayerCompanion, ForceSparkModeLeaderTagRemovedDelay) == 1664, "Offset mismatch for UFortPlayerCompanion::ForceSparkModeLeaderTagRemovedDelay");
static_assert(offsetof(UFortPlayerCompanion, InteractOffsetFromLeader) == 1672, "Offset mismatch for UFortPlayerCompanion::InteractOffsetFromLeader");
static_assert(offsetof(UFortPlayerCompanion, PlayerInteractAbility) == 1688, "Offset mismatch for UFortPlayerCompanion::PlayerInteractAbility");
static_assert(offsetof(UFortPlayerCompanion, CombatMoodExcludeWeaponsTagQuery) == 1696, "Offset mismatch for UFortPlayerCompanion::CombatMoodExcludeWeaponsTagQuery");
static_assert(offsetof(UFortPlayerCompanion, MaxReactionDelayAfterEvent) == 1768, "Offset mismatch for UFortPlayerCompanion::MaxReactionDelayAfterEvent");
static_assert(offsetof(UFortPlayerCompanion, BaseReactionDelay) == 1772, "Offset mismatch for UFortPlayerCompanion::BaseReactionDelay");
static_assert(offsetof(UFortPlayerCompanion, bUseSimplifiedInteractionForTouch) == 1776, "Offset mismatch for UFortPlayerCompanion::bUseSimplifiedInteractionForTouch");
static_assert(offsetof(UFortPlayerCompanion, SurfaceSwimmingSparkLocalOffset) == 1784, "Offset mismatch for UFortPlayerCompanion::SurfaceSwimmingSparkLocalOffset");
static_assert(offsetof(UFortPlayerCompanion, VehicleSparkLocalOffset) == 1808, "Offset mismatch for UFortPlayerCompanion::VehicleSparkLocalOffset");
static_assert(offsetof(UFortPlayerCompanion, DisappearVFX) == 1832, "Offset mismatch for UFortPlayerCompanion::DisappearVFX");
static_assert(offsetof(UFortPlayerCompanion, LoadedReactionTable) == 1840, "Offset mismatch for UFortPlayerCompanion::LoadedReactionTable");
static_assert(offsetof(UFortPlayerCompanion, CachedCharacterMovementComponent) == 1848, "Offset mismatch for UFortPlayerCompanion::CachedCharacterMovementComponent");
static_assert(offsetof(UFortPlayerCompanion, CurrentGoal) == 1856, "Offset mismatch for UFortPlayerCompanion::CurrentGoal");
static_assert(offsetof(UFortPlayerCompanion, BehaviorSettings) == 1944, "Offset mismatch for UFortPlayerCompanion::BehaviorSettings");
static_assert(offsetof(UFortPlayerCompanion, BehaviorEvaluator) == 1984, "Offset mismatch for UFortPlayerCompanion::BehaviorEvaluator");
static_assert(offsetof(UFortPlayerCompanion, BodyState) == 2176, "Offset mismatch for UFortPlayerCompanion::BodyState");
static_assert(offsetof(UFortPlayerCompanion, RunningReaction) == 2188, "Offset mismatch for UFortPlayerCompanion::RunningReaction");
static_assert(offsetof(UFortPlayerCompanion, RunningReactionMontage) == 2240, "Offset mismatch for UFortPlayerCompanion::RunningReactionMontage");
static_assert(offsetof(UFortPlayerCompanion, QueuedReaction) == 2248, "Offset mismatch for UFortPlayerCompanion::QueuedReaction");
static_assert(offsetof(UFortPlayerCompanion, RunningInteraction) == 2272, "Offset mismatch for UFortPlayerCompanion::RunningInteraction");
static_assert(offsetof(UFortPlayerCompanion, bHasInteractionRotationOverride) == 2284, "Offset mismatch for UFortPlayerCompanion::bHasInteractionRotationOverride");
static_assert(offsetof(UFortPlayerCompanion, InteractionRotationOverride) == 2288, "Offset mismatch for UFortPlayerCompanion::InteractionRotationOverride");
static_assert(offsetof(UFortPlayerCompanion, AbilitySystemComponent) == 2312, "Offset mismatch for UFortPlayerCompanion::AbilitySystemComponent");
static_assert(offsetof(UFortPlayerCompanion, CurrentMood) == 2320, "Offset mismatch for UFortPlayerCompanion::CurrentMood");
static_assert(offsetof(UFortPlayerCompanion, CachedSceneActorComponent) == 2324, "Offset mismatch for UFortPlayerCompanion::CachedSceneActorComponent");
static_assert(offsetof(UFortPlayerCompanion, CachedSparkNiagaraComponent) == 2336, "Offset mismatch for UFortPlayerCompanion::CachedSparkNiagaraComponent");
static_assert(offsetof(UFortPlayerCompanion, CachedInteractBoundsComponents) == 2344, "Offset mismatch for UFortPlayerCompanion::CachedInteractBoundsComponents");
static_assert(offsetof(UFortPlayerCompanion, bServerIsStopping) == 2360, "Offset mismatch for UFortPlayerCompanion::bServerIsStopping");
static_assert(offsetof(UFortPlayerCompanion, bCompanionInteractionsEnabled) == 2361, "Offset mismatch for UFortPlayerCompanion::bCompanionInteractionsEnabled");
static_assert(offsetof(UFortPlayerCompanion, bAnticsEnabled) == 2362, "Offset mismatch for UFortPlayerCompanion::bAnticsEnabled");
static_assert(offsetof(UFortPlayerCompanion, SparkLocalOffsetType) == 2363, "Offset mismatch for UFortPlayerCompanion::SparkLocalOffsetType");
static_assert(offsetof(UFortPlayerCompanion, SparkLocalOffset) == 2368, "Offset mismatch for UFortPlayerCompanion::SparkLocalOffset");
static_assert(offsetof(UFortPlayerCompanion, SparkWorldOffset) == 2392, "Offset mismatch for UFortPlayerCompanion::SparkWorldOffset");
static_assert(offsetof(UFortPlayerCompanion, OnFortPlayerCompanionChangedRunningReactionDelegate) == 2416, "Offset mismatch for UFortPlayerCompanion::OnFortPlayerCompanionChangedRunningReactionDelegate");
static_assert(offsetof(UFortPlayerCompanion, OnFortPlayerCompanionChangedBodyStateTypeDelegate) == 2432, "Offset mismatch for UFortPlayerCompanion::OnFortPlayerCompanionChangedBodyStateTypeDelegate");
static_assert(offsetof(UFortPlayerCompanion, OnSparkLocalOffsetUpdatedDelegate) == 2464, "Offset mismatch for UFortPlayerCompanion::OnSparkLocalOffsetUpdatedDelegate");
static_assert(offsetof(UFortPlayerCompanion, OnClientMovementModeChanged) == 2480, "Offset mismatch for UFortPlayerCompanion::OnClientMovementModeChanged");
static_assert(offsetof(UFortPlayerCompanion, InstigatorState) == 2496, "Offset mismatch for UFortPlayerCompanion::InstigatorState");
static_assert(offsetof(UFortPlayerCompanion, VerbReactionHandles) == 3144, "Offset mismatch for UFortPlayerCompanion::VerbReactionHandles");
static_assert(offsetof(UFortPlayerCompanion, Mesh) == 3320, "Offset mismatch for UFortPlayerCompanion::Mesh");
static_assert(offsetof(UFortPlayerCompanion, DefaultTags) == 3328, "Offset mismatch for UFortPlayerCompanion::DefaultTags");
static_assert(offsetof(UFortPlayerCompanion, CosmeticComponent) == 3360, "Offset mismatch for UFortPlayerCompanion::CosmeticComponent");
static_assert(offsetof(UFortPlayerCompanion, CosmeticDownloadCandidateComponent) == 3368, "Offset mismatch for UFortPlayerCompanion::CosmeticDownloadCandidateComponent");
static_assert(offsetof(UFortPlayerCompanion, SlopeWarpingComponent) == 3376, "Offset mismatch for UFortPlayerCompanion::SlopeWarpingComponent");
static_assert(offsetof(UFortPlayerCompanion, bUsingCustomBehavior) == 3384, "Offset mismatch for UFortPlayerCompanion::bUsingCustomBehavior");
static_assert(offsetof(UFortPlayerCompanion, WeakBehaviorVolume) == 3392, "Offset mismatch for UFortPlayerCompanion::WeakBehaviorVolume");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionBehaviorInterface
// Kind: Class; super: Interface
class UFortPlayerCompanionBehaviorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.FortPlayerCompanionBehaviorVolume
// Kind: Class; super: Volume
class UFortPlayerCompanionBehaviorVolume
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t Behavior; // 0x02B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    TArray<void*> CompanionWaitingSpots; // 0x02B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MoveToParameters[0x14]; // 0x02C8 (Size: 0x14, Type: StructProperty)
    std::uint8_t MoodOnWaitingSpots; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02DD
    TArray<void*> ReservationOwners; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerCompanionBehaviorVolume, Behavior) == 688, "Offset mismatch for UFortPlayerCompanionBehaviorVolume::Behavior");
static_assert(offsetof(UFortPlayerCompanionBehaviorVolume, CompanionWaitingSpots) == 696, "Offset mismatch for UFortPlayerCompanionBehaviorVolume::CompanionWaitingSpots");
static_assert(offsetof(UFortPlayerCompanionBehaviorVolume, MoveToParameters) == 712, "Offset mismatch for UFortPlayerCompanionBehaviorVolume::MoveToParameters");
static_assert(offsetof(UFortPlayerCompanionBehaviorVolume, MoodOnWaitingSpots) == 732, "Offset mismatch for UFortPlayerCompanionBehaviorVolume::MoodOnWaitingSpots");
static_assert(offsetof(UFortPlayerCompanionBehaviorVolume, ReservationOwners) == 736, "Offset mismatch for UFortPlayerCompanionBehaviorVolume::ReservationOwners");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionComponent
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t PlayerCompanionClass[0x20]; // 0x00D0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t InitialReplicationVisibility; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F1
    std::uint8_t PlayerInteractingWithCompanionTag[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    float PropagateCombatMoodOnDamagedRange; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    float PropagateCombatMoodOnDidDamageRange; // 0x00FC (Size: 0x4, Type: FloatProperty)
    std::uint8_t CheatBehaviorSettings[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    void* PlayerCompanion; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* CompanionSubsystem; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* OwnerPlayerState; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* OwnerPlayerController; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RunningInteraction[0x10]; // 0x0148 (Size: 0x10, Type: StructProperty)
    TArray<void*> CompanionBehaviorInterfaces; // 0x0158 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerCompanionComponent, PlayerCompanionClass) == 208, "Offset mismatch for UFortPlayerCompanionComponent::PlayerCompanionClass");
static_assert(offsetof(UFortPlayerCompanionComponent, InitialReplicationVisibility) == 240, "Offset mismatch for UFortPlayerCompanionComponent::InitialReplicationVisibility");
static_assert(offsetof(UFortPlayerCompanionComponent, PlayerInteractingWithCompanionTag) == 244, "Offset mismatch for UFortPlayerCompanionComponent::PlayerInteractingWithCompanionTag");
static_assert(offsetof(UFortPlayerCompanionComponent, PropagateCombatMoodOnDamagedRange) == 248, "Offset mismatch for UFortPlayerCompanionComponent::PropagateCombatMoodOnDamagedRange");
static_assert(offsetof(UFortPlayerCompanionComponent, PropagateCombatMoodOnDidDamageRange) == 252, "Offset mismatch for UFortPlayerCompanionComponent::PropagateCombatMoodOnDidDamageRange");
static_assert(offsetof(UFortPlayerCompanionComponent, CheatBehaviorSettings) == 256, "Offset mismatch for UFortPlayerCompanionComponent::CheatBehaviorSettings");
static_assert(offsetof(UFortPlayerCompanionComponent, PlayerCompanion) == 296, "Offset mismatch for UFortPlayerCompanionComponent::PlayerCompanion");
static_assert(offsetof(UFortPlayerCompanionComponent, CompanionSubsystem) == 304, "Offset mismatch for UFortPlayerCompanionComponent::CompanionSubsystem");
static_assert(offsetof(UFortPlayerCompanionComponent, OwnerPlayerState) == 312, "Offset mismatch for UFortPlayerCompanionComponent::OwnerPlayerState");
static_assert(offsetof(UFortPlayerCompanionComponent, OwnerPlayerController) == 320, "Offset mismatch for UFortPlayerCompanionComponent::OwnerPlayerController");
static_assert(offsetof(UFortPlayerCompanionComponent, RunningInteraction) == 328, "Offset mismatch for UFortPlayerCompanionComponent::RunningInteraction");
static_assert(offsetof(UFortPlayerCompanionComponent, CompanionBehaviorInterfaces) == 344, "Offset mismatch for UFortPlayerCompanionComponent::CompanionBehaviorInterfaces");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionComponent_Verse
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionComponent_Verse
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TSoftClassPtr<void> CompanionPrefab; // 0x00C8 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00F0
    TMap<void*, void*> ReactionTags; // 0x00F8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortPlayerCompanionComponent_Verse, CompanionPrefab) == 200, "Offset mismatch for UFortPlayerCompanionComponent_Verse::CompanionPrefab");
static_assert(offsetof(UFortPlayerCompanionComponent_Verse, ReactionTags) == 248, "Offset mismatch for UFortPlayerCompanionComponent_Verse::ReactionTags");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionContextualAnimSceneActorComponent
// Kind: Class; super: FortContextualAnimSceneActorComponent
class UFortPlayerCompanionContextualAnimSceneActorComponent
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    std::uint8_t PlayerInteractingWithCompanionTag[0x1]; // 0x0460 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPlayerCompanionContextualAnimSceneActorComponent, PlayerInteractingWithCompanionTag) == 1120, "Offset mismatch for UFortPlayerCompanionContextualAnimSceneActorComponent::PlayerInteractingWithCompanionTag");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionFootstepFXComponent
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionFootstepFXComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* CosmeticComponent; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> CompanionMovementInterface; // 0x00D0 (Size: 0x10, Type: InterfaceProperty)
    FName FootstepNiagaraParamName; // 0x00E0 (Size: 0x8, Type: NameProperty)
    void* NiagaraCompanionFootstepFXComp; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* WalkFootstepFX; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* RunFootstepFX; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerCompanionFootstepFXComponent, CosmeticComponent) == 200, "Offset mismatch for UFortPlayerCompanionFootstepFXComponent::CosmeticComponent");
static_assert(offsetof(UFortPlayerCompanionFootstepFXComponent, CompanionMovementInterface) == 208, "Offset mismatch for UFortPlayerCompanionFootstepFXComponent::CompanionMovementInterface");
static_assert(offsetof(UFortPlayerCompanionFootstepFXComponent, FootstepNiagaraParamName) == 224, "Offset mismatch for UFortPlayerCompanionFootstepFXComponent::FootstepNiagaraParamName");
static_assert(offsetof(UFortPlayerCompanionFootstepFXComponent, NiagaraCompanionFootstepFXComp) == 232, "Offset mismatch for UFortPlayerCompanionFootstepFXComponent::NiagaraCompanionFootstepFXComp");
static_assert(offsetof(UFortPlayerCompanionFootstepFXComponent, WalkFootstepFX) == 240, "Offset mismatch for UFortPlayerCompanionFootstepFXComponent::WalkFootstepFX");
static_assert(offsetof(UFortPlayerCompanionFootstepFXComponent, RunFootstepFX) == 248, "Offset mismatch for UFortPlayerCompanionFootstepFXComponent::RunFootstepFX");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionGridFilter
// Kind: Class; super: NetObjectGridWorldLocFilter
class UFortPlayerCompanionGridFilter
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    void* ReplicationSystem; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* Config; // 0x0188 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlayerCompanionGridFilter, ReplicationSystem) == 384, "Offset mismatch for UFortPlayerCompanionGridFilter::ReplicationSystem");
static_assert(offsetof(UFortPlayerCompanionGridFilter, Config) == 392, "Offset mismatch for UFortPlayerCompanionGridFilter::Config");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionGridFilterConfig
// Kind: Class; super: NetObjectGridFilterConfig
class UFortPlayerCompanionGridFilterConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t ViewPosRelevancyFrameCount; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint16_t DefaultFrameCountBeforeCulling; // 0x002C (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x2]; // 0x002E
    float CellSizeX; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float CellSizeY; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float DefaultCullDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseExactCullDistance; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDefaultUse2DCullDistance; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x003E
    TArray<void*> FilterProfiles; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, ViewPosRelevancyFrameCount) == 40, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::ViewPosRelevancyFrameCount");
static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, DefaultFrameCountBeforeCulling) == 44, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::DefaultFrameCountBeforeCulling");
static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, CellSizeX) == 48, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::CellSizeX");
static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, CellSizeY) == 52, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::CellSizeY");
static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, DefaultCullDistance) == 56, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::DefaultCullDistance");
static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, bUseExactCullDistance) == 60, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::bUseExactCullDistance");
static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, bDefaultUse2DCullDistance) == 61, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::bDefaultUse2DCullDistance");
static_assert(offsetof(UFortPlayerCompanionGridFilterConfig, FilterProfiles) == 64, "Offset mismatch for UFortPlayerCompanionGridFilterConfig::FilterProfiles");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionSnapToPlayerComponent
// Kind: Class; super: ActorComponent
class UFortPlayerCompanionSnapToPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t MoveToParameters[0x14]; // 0x00C8 (Size: 0x14, Type: StructProperty)
    float ForwardOffset; // 0x00DC (Size: 0x4, Type: FloatProperty)
    float SidewaysOffset; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortPlayerCompanionSnapToPlayerComponent, MoveToParameters) == 200, "Offset mismatch for UFortPlayerCompanionSnapToPlayerComponent::MoveToParameters");
static_assert(offsetof(UFortPlayerCompanionSnapToPlayerComponent, ForwardOffset) == 220, "Offset mismatch for UFortPlayerCompanionSnapToPlayerComponent::ForwardOffset");
static_assert(offsetof(UFortPlayerCompanionSnapToPlayerComponent, SidewaysOffset) == 224, "Offset mismatch for UFortPlayerCompanionSnapToPlayerComponent::SidewaysOffset");

// /Script/PlayerCompanionRuntime.FortPlayerCompanionSubsystem
// Kind: Class; super: GameInstanceSubsystem
class UFortPlayerCompanionSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> CompanionComponents; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPlayerCompanionSubsystem, CompanionComponents) == 48, "Offset mismatch for UFortPlayerCompanionSubsystem::CompanionComponents");

// /Script/PlayerCompanionRuntime.FortQueryContext_CompanionLeader
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_CompanionLeader
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.FortQueryContext_CompanionLeaderMovementDirection
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_CompanionLeaderMovementDirection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.FortQueryContext_CompanionLeaderPredictedPosition
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_CompanionLeaderPredictedPosition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PlayerCompanionRuntime.FortQueryContext_CompanionLeaderViewRotation
// Kind: Class; super: EnvQueryContext
class UFortQueryContext_CompanionLeaderViewRotation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bYawOnly; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryContext_CompanionLeaderViewRotation, bYawOnly) == 40, "Offset mismatch for UFortQueryContext_CompanionLeaderViewRotation::bYawOnly");

// /Script/PlayerCompanionRuntime.FortQueryTest_CompanionBodyState
// Kind: Class; super: EnvQueryTest
class UFortQueryTest_CompanionBodyState
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t bAcceptNormalBodyState; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAcceptNavigationSparkBodyState; // 0x01F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAcceptForcedSparkBodyState; // 0x01FA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortQueryTest_CompanionBodyState, bAcceptNormalBodyState) == 504, "Offset mismatch for UFortQueryTest_CompanionBodyState::bAcceptNormalBodyState");
static_assert(offsetof(UFortQueryTest_CompanionBodyState, bAcceptNavigationSparkBodyState) == 505, "Offset mismatch for UFortQueryTest_CompanionBodyState::bAcceptNavigationSparkBodyState");
static_assert(offsetof(UFortQueryTest_CompanionBodyState, bAcceptForcedSparkBodyState) == 506, "Offset mismatch for UFortQueryTest_CompanionBodyState::bAcceptForcedSparkBodyState");

// /Script/PlayerCompanionRuntime.SparkModeInterface
// Kind: Class; super: Interface
class USparkModeInterface
{
public:
    std::uint8_t Opaque[1];
};
