/**
 * decamp dumper generated SDK
 * Package: /Script/MassSignals
 */
#pragma once
#include "Basic.h"

// /Script/MassSignals.MassSignalProcessorBase
// Kind: Class; super: MassProcessor
class UMassSignalProcessorBase
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

static_assert(offsetof(UMassSignalProcessorBase, ExecutionOrder) == 40, "Offset mismatch for UMassSignalProcessorBase::ExecutionOrder");
static_assert(offsetof(UMassSignalProcessorBase, ProcessingPhase) == 80, "Offset mismatch for UMassSignalProcessorBase::ProcessingPhase");
static_assert(offsetof(UMassSignalProcessorBase, ExecutionFlags) == 81, "Offset mismatch for UMassSignalProcessorBase::ExecutionFlags");
static_assert(offsetof(UMassSignalProcessorBase, bAggregateRequirements) == 82, "Offset mismatch for UMassSignalProcessorBase::bAggregateRequirements");
static_assert(offsetof(UMassSignalProcessorBase, ActivationState) == 83, "Offset mismatch for UMassSignalProcessorBase::ActivationState");
static_assert(offsetof(UMassSignalProcessorBase, ExecutionPriority) == 84, "Offset mismatch for UMassSignalProcessorBase::ExecutionPriority");

// /Script/MassSignals.MassSignalSubsystem
// Kind: Class; super: MassTickableSubsystemBase
class UMassSignalSubsystem
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* CachedWorld; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassSignalSubsystem, CachedWorld) == 112, "Offset mismatch for UMassSignalSubsystem::CachedWorld");
