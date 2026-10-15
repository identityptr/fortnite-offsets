/**
 * decamp dumper generated SDK
 * Package: /Script/MassSimulation
 */
#pragma once
#include "Basic.h"

// /Script/MassSimulation.MassSimulationSettings
// Kind: Class; super: MassModuleSettings
class UMassSimulationSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double DesiredActorSpawningTimeSlicePerTick; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double DesiredActorDestructionTimeSlicePerTick; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEntityCompactionEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    double DesiredEntityCompactionTimeSlicePerTick; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    float DesiredActorFailedSpawningRetryTimeInterval; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float DesiredActorFailedSpawningRetryMoveDistance; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassSimulationSettings, DesiredActorSpawningTimeSlicePerTick) == 40, "Offset mismatch for UMassSimulationSettings::DesiredActorSpawningTimeSlicePerTick");
static_assert(offsetof(UMassSimulationSettings, DesiredActorDestructionTimeSlicePerTick) == 48, "Offset mismatch for UMassSimulationSettings::DesiredActorDestructionTimeSlicePerTick");
static_assert(offsetof(UMassSimulationSettings, bEntityCompactionEnabled) == 56, "Offset mismatch for UMassSimulationSettings::bEntityCompactionEnabled");
static_assert(offsetof(UMassSimulationSettings, DesiredEntityCompactionTimeSlicePerTick) == 64, "Offset mismatch for UMassSimulationSettings::DesiredEntityCompactionTimeSlicePerTick");
static_assert(offsetof(UMassSimulationSettings, DesiredActorFailedSpawningRetryTimeInterval) == 72, "Offset mismatch for UMassSimulationSettings::DesiredActorFailedSpawningRetryTimeInterval");
static_assert(offsetof(UMassSimulationSettings, DesiredActorFailedSpawningRetryMoveDistance) == 76, "Offset mismatch for UMassSimulationSettings::DesiredActorFailedSpawningRetryMoveDistance");

// /Script/MassSimulation.MassSimulationSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassSimulationSubsystem
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t RuntimePipeline[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassSimulationSubsystem, RuntimePipeline) == 144, "Offset mismatch for UMassSimulationSubsystem::RuntimePipeline");
