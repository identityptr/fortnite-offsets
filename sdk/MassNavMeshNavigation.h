/**
 * decamp dumper generated SDK
 * Package: /Script/MassNavMeshNavigation
 */
#pragma once
#include "Basic.h"

// /Script/MassNavMeshNavigation.MassNavMeshBoundaryFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassNavMeshBoundaryFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavMeshNavigation.MassNavMeshCachedPathFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassNavMeshCachedPathFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavMeshNavigation.MassNavMeshPathPoint
// Kind: ScriptStruct; super: none
struct FMassNavMeshPathPoint
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavMeshNavigation.MassNavMeshShortPathFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassNavMeshShortPathFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassNavMeshNavigation.MassNavMeshNavigationBoundaryProcessor
// Kind: Class; super: MassProcessor
class UMassNavMeshNavigationBoundaryProcessor
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

static_assert(offsetof(UMassNavMeshNavigationBoundaryProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassNavMeshNavigationBoundaryProcessor::ExecutionOrder");
static_assert(offsetof(UMassNavMeshNavigationBoundaryProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassNavMeshNavigationBoundaryProcessor::ProcessingPhase");
static_assert(offsetof(UMassNavMeshNavigationBoundaryProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassNavMeshNavigationBoundaryProcessor::ExecutionFlags");
static_assert(offsetof(UMassNavMeshNavigationBoundaryProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassNavMeshNavigationBoundaryProcessor::bAggregateRequirements");
static_assert(offsetof(UMassNavMeshNavigationBoundaryProcessor, ActivationState) == 83, "Offset mismatch for UMassNavMeshNavigationBoundaryProcessor::ActivationState");
static_assert(offsetof(UMassNavMeshNavigationBoundaryProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassNavMeshNavigationBoundaryProcessor::ExecutionPriority");

// /Script/MassNavMeshNavigation.MassNavMeshNavigationTrait
// Kind: Class; super: MassEntityTraitBase
class UMassNavMeshNavigationTrait
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ValidTargetConfig; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassNavMeshNavigationTrait, ValidTargetConfig) == 40, "Offset mismatch for UMassNavMeshNavigationTrait::ValidTargetConfig");

// /Script/MassNavMeshNavigation.MassNavMeshPathFollowProcessor
// Kind: Class; super: MassProcessor
class UMassNavMeshPathFollowProcessor
{
public:
    std::uint8_t Pad_0000[0x710]; // 0x0000
    void* SignalSubsystem; // 0x0710 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMassNavMeshPathFollowProcessor, SignalSubsystem) == 1808, "Offset mismatch for UMassNavMeshPathFollowProcessor::SignalSubsystem");
