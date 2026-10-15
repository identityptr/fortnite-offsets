/**
 * decamp dumper generated SDK
 * Package: /Script/MassAIDebug
 */
#pragma once
#include "Basic.h"

// /Script/MassAIDebug.MassDebugStateTreeProcessor
// Kind: Class; super: MassProcessor
class UMassDebugStateTreeProcessor
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

static_assert(offsetof(UMassDebugStateTreeProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassDebugStateTreeProcessor::ExecutionOrder");
static_assert(offsetof(UMassDebugStateTreeProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassDebugStateTreeProcessor::ProcessingPhase");
static_assert(offsetof(UMassDebugStateTreeProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassDebugStateTreeProcessor::ExecutionFlags");
static_assert(offsetof(UMassDebugStateTreeProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassDebugStateTreeProcessor::bAggregateRequirements");
static_assert(offsetof(UMassDebugStateTreeProcessor, ActivationState) == 83, "Offset mismatch for UMassDebugStateTreeProcessor::ActivationState");
static_assert(offsetof(UMassDebugStateTreeProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassDebugStateTreeProcessor::ExecutionPriority");
