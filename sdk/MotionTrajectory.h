/**
 * decamp dumper generated SDK
 * Package: /Script/MotionTrajectory
 */
#pragma once
#include "Basic.h"

// /Script/MotionTrajectory.CharacterTrajectoryData
// Kind: ScriptStruct; super: none
struct FCharacterTrajectoryData
{
public:
    float RotateTowardsMovementSpeed; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float MaxControllerYawRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float BendVelocityTowardsAcceleration; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSpeedRemappingCurve; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::uint8_t SpeedRemappingCurve[0x48]; // 0x0010 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseAccelerationRemappingCurve; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    std::uint8_t AccelerationRemappingCurve[0x48]; // 0x0060 (Size: 0x48, Type: StructProperty)
    std::uint8_t bEnableNonStandardGravity; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCharacterTrajectoryData, RotateTowardsMovementSpeed) == 0, "Offset mismatch for FCharacterTrajectoryData::RotateTowardsMovementSpeed");
static_assert(offsetof(FCharacterTrajectoryData, MaxControllerYawRate) == 4, "Offset mismatch for FCharacterTrajectoryData::MaxControllerYawRate");
static_assert(offsetof(FCharacterTrajectoryData, BendVelocityTowardsAcceleration) == 8, "Offset mismatch for FCharacterTrajectoryData::BendVelocityTowardsAcceleration");
static_assert(offsetof(FCharacterTrajectoryData, bUseSpeedRemappingCurve) == 12, "Offset mismatch for FCharacterTrajectoryData::bUseSpeedRemappingCurve");
static_assert(offsetof(FCharacterTrajectoryData, SpeedRemappingCurve) == 16, "Offset mismatch for FCharacterTrajectoryData::SpeedRemappingCurve");
static_assert(offsetof(FCharacterTrajectoryData, bUseAccelerationRemappingCurve) == 88, "Offset mismatch for FCharacterTrajectoryData::bUseAccelerationRemappingCurve");
static_assert(offsetof(FCharacterTrajectoryData, AccelerationRemappingCurve) == 96, "Offset mismatch for FCharacterTrajectoryData::AccelerationRemappingCurve");
static_assert(offsetof(FCharacterTrajectoryData, bEnableNonStandardGravity) == 168, "Offset mismatch for FCharacterTrajectoryData::bEnableNonStandardGravity");

// /Script/MotionTrajectory.MotionTrajectorySettings
// Kind: ScriptStruct; super: none
struct FMotionTrajectorySettings
{
public:
    float Seconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMotionTrajectorySettings, Seconds) == 0, "Offset mismatch for FMotionTrajectorySettings::Seconds");

// /Script/MotionTrajectory.TrajectorySamplingData
// Kind: ScriptStruct; super: none
struct FTrajectorySamplingData
{
public:
    float HistoryLengthSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::int32_t HistorySamplesPerSecond; // 0x0004 (Size: 0x4, Type: IntProperty)
    float PredictionLengthSeconds; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t PredictionSamplesPerSecond; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTrajectorySamplingData, HistoryLengthSeconds) == 0, "Offset mismatch for FTrajectorySamplingData::HistoryLengthSeconds");
static_assert(offsetof(FTrajectorySamplingData, HistorySamplesPerSecond) == 4, "Offset mismatch for FTrajectorySamplingData::HistorySamplesPerSecond");
static_assert(offsetof(FTrajectorySamplingData, PredictionLengthSeconds) == 8, "Offset mismatch for FTrajectorySamplingData::PredictionLengthSeconds");
static_assert(offsetof(FTrajectorySamplingData, PredictionSamplesPerSecond) == 12, "Offset mismatch for FTrajectorySamplingData::PredictionSamplesPerSecond");

// /Script/MotionTrajectory.CharacterTrajectoryComponent
// Kind: Class; super: ActorComponent
class UCharacterTrajectoryComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Trajectory[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SamplingData[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t CharacterTrajectoryData[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCharacterTrajectoryComponent, Trajectory) == 192, "Offset mismatch for UCharacterTrajectoryComponent::Trajectory");
static_assert(offsetof(UCharacterTrajectoryComponent, SamplingData) == 208, "Offset mismatch for UCharacterTrajectoryComponent::SamplingData");
static_assert(offsetof(UCharacterTrajectoryComponent, CharacterTrajectoryData) == 240, "Offset mismatch for UCharacterTrajectoryComponent::CharacterTrajectoryData");
