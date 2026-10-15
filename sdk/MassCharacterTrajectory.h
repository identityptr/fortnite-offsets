/**
 * decamp dumper generated SDK
 * Package: /Script/MassCharacterTrajectory
 */
#pragma once
#include "Basic.h"

// /Script/MassCharacterTrajectory.CharacterTrajectoryFragment
// Kind: ScriptStruct; super: MassFragment
struct FCharacterTrajectoryFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharacterTrajectory.CharacterTrajectoryMovementTag
// Kind: ScriptStruct; super: MassTag
struct FCharacterTrajectoryMovementTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassCharacterTrajectory.CharacterTrajectoryParameters
// Kind: ScriptStruct; super: MassConstSharedFragment
struct FCharacterTrajectoryParameters
{
public:
    std::int32_t NumHistorySamples; // 0x0000 (Size: 0x4, Type: IntProperty)
    float PredictionSamplingInterval; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumPredictionSamples; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t Offset[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCharacterTrajectoryParameters, NumHistorySamples) == 0, "Offset mismatch for FCharacterTrajectoryParameters::NumHistorySamples");
static_assert(offsetof(FCharacterTrajectoryParameters, PredictionSamplingInterval) == 4, "Offset mismatch for FCharacterTrajectoryParameters::PredictionSamplingInterval");
static_assert(offsetof(FCharacterTrajectoryParameters, NumPredictionSamples) == 8, "Offset mismatch for FCharacterTrajectoryParameters::NumPredictionSamples");
static_assert(offsetof(FCharacterTrajectoryParameters, Offset) == 16, "Offset mismatch for FCharacterTrajectoryParameters::Offset");

// /Script/MassCharacterTrajectory.CharacterTrajectoryDebugProcessor
// Kind: Class; super: MassProcessor
class UCharacterTrajectoryDebugProcessor
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

static_assert(offsetof(UCharacterTrajectoryDebugProcessor, ExecutionOrder) == 40, "Offset mismatch for UCharacterTrajectoryDebugProcessor::ExecutionOrder");
static_assert(offsetof(UCharacterTrajectoryDebugProcessor, ProcessingPhase) == 80, "Offset mismatch for UCharacterTrajectoryDebugProcessor::ProcessingPhase");
static_assert(offsetof(UCharacterTrajectoryDebugProcessor, ExecutionFlags) == 81, "Offset mismatch for UCharacterTrajectoryDebugProcessor::ExecutionFlags");
static_assert(offsetof(UCharacterTrajectoryDebugProcessor, bAggregateRequirements) == 82, "Offset mismatch for UCharacterTrajectoryDebugProcessor::bAggregateRequirements");
static_assert(offsetof(UCharacterTrajectoryDebugProcessor, ActivationState) == 83, "Offset mismatch for UCharacterTrajectoryDebugProcessor::ActivationState");
static_assert(offsetof(UCharacterTrajectoryDebugProcessor, ExecutionPriority) == 84, "Offset mismatch for UCharacterTrajectoryDebugProcessor::ExecutionPriority");

// /Script/MassCharacterTrajectory.CharacterTrajectoryMovementTrait
// Kind: Class; super: MassMovementTrait
class UCharacterTrajectoryMovementTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Movement[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCharacterTrajectoryMovementTrait, Movement) == 48, "Offset mismatch for UCharacterTrajectoryMovementTrait::Movement");

// /Script/MassCharacterTrajectory.CharacterTrajectoryToMovementProcessor
// Kind: Class; super: MassProcessor
class UCharacterTrajectoryToMovementProcessor
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

static_assert(offsetof(UCharacterTrajectoryToMovementProcessor, ExecutionOrder) == 40, "Offset mismatch for UCharacterTrajectoryToMovementProcessor::ExecutionOrder");
static_assert(offsetof(UCharacterTrajectoryToMovementProcessor, ProcessingPhase) == 80, "Offset mismatch for UCharacterTrajectoryToMovementProcessor::ProcessingPhase");
static_assert(offsetof(UCharacterTrajectoryToMovementProcessor, ExecutionFlags) == 81, "Offset mismatch for UCharacterTrajectoryToMovementProcessor::ExecutionFlags");
static_assert(offsetof(UCharacterTrajectoryToMovementProcessor, bAggregateRequirements) == 82, "Offset mismatch for UCharacterTrajectoryToMovementProcessor::bAggregateRequirements");
static_assert(offsetof(UCharacterTrajectoryToMovementProcessor, ActivationState) == 83, "Offset mismatch for UCharacterTrajectoryToMovementProcessor::ActivationState");
static_assert(offsetof(UCharacterTrajectoryToMovementProcessor, ExecutionPriority) == 84, "Offset mismatch for UCharacterTrajectoryToMovementProcessor::ExecutionPriority");

// /Script/MassCharacterTrajectory.CharacterTrajectoryTrait
// Kind: Class; super: MassEntityTraitBase
class UCharacterTrajectoryTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PoseTrajectoryParameters[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCharacterTrajectoryTrait, PoseTrajectoryParameters) == 48, "Offset mismatch for UCharacterTrajectoryTrait::PoseTrajectoryParameters");

// /Script/MassCharacterTrajectory.MovementToCharacterTrajectoryProcessor
// Kind: Class; super: MassProcessor
class UMovementToCharacterTrajectoryProcessor
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

static_assert(offsetof(UMovementToCharacterTrajectoryProcessor, ExecutionOrder) == 40, "Offset mismatch for UMovementToCharacterTrajectoryProcessor::ExecutionOrder");
static_assert(offsetof(UMovementToCharacterTrajectoryProcessor, ProcessingPhase) == 80, "Offset mismatch for UMovementToCharacterTrajectoryProcessor::ProcessingPhase");
static_assert(offsetof(UMovementToCharacterTrajectoryProcessor, ExecutionFlags) == 81, "Offset mismatch for UMovementToCharacterTrajectoryProcessor::ExecutionFlags");
static_assert(offsetof(UMovementToCharacterTrajectoryProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMovementToCharacterTrajectoryProcessor::bAggregateRequirements");
static_assert(offsetof(UMovementToCharacterTrajectoryProcessor, ActivationState) == 83, "Offset mismatch for UMovementToCharacterTrajectoryProcessor::ActivationState");
static_assert(offsetof(UMovementToCharacterTrajectoryProcessor, ExecutionPriority) == 84, "Offset mismatch for UMovementToCharacterTrajectoryProcessor::ExecutionPriority");

// /Script/MassCharacterTrajectory.SpringMovementToCharacterTrajectoryProcessor
// Kind: Class; super: MassProcessor
class USpringMovementToCharacterTrajectoryProcessor
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

static_assert(offsetof(USpringMovementToCharacterTrajectoryProcessor, ExecutionOrder) == 40, "Offset mismatch for USpringMovementToCharacterTrajectoryProcessor::ExecutionOrder");
static_assert(offsetof(USpringMovementToCharacterTrajectoryProcessor, ProcessingPhase) == 80, "Offset mismatch for USpringMovementToCharacterTrajectoryProcessor::ProcessingPhase");
static_assert(offsetof(USpringMovementToCharacterTrajectoryProcessor, ExecutionFlags) == 81, "Offset mismatch for USpringMovementToCharacterTrajectoryProcessor::ExecutionFlags");
static_assert(offsetof(USpringMovementToCharacterTrajectoryProcessor, bAggregateRequirements) == 82, "Offset mismatch for USpringMovementToCharacterTrajectoryProcessor::bAggregateRequirements");
static_assert(offsetof(USpringMovementToCharacterTrajectoryProcessor, ActivationState) == 83, "Offset mismatch for USpringMovementToCharacterTrajectoryProcessor::ActivationState");
static_assert(offsetof(USpringMovementToCharacterTrajectoryProcessor, ExecutionPriority) == 84, "Offset mismatch for USpringMovementToCharacterTrajectoryProcessor::ExecutionPriority");
