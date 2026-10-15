/**
 * decamp dumper generated SDK
 * Package: /Script/MassActors
 */
#pragma once
#include "Basic.h"

// /Script/MassActors.CapsuleComponentWrapperFragment
// Kind: ScriptStruct; super: ObjectWrapperFragment
struct FCapsuleComponentWrapperFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.CharacterMovementComponentWrapperFragment
// Kind: ScriptStruct; super: ObjectWrapperFragment
struct FCharacterMovementComponentWrapperFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.DataFragment_BehaviorTreeComponentWrapper
// Kind: ScriptStruct; super: ObjectWrapperFragment
struct FDataFragment_BehaviorTreeComponentWrapper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassActorFragment
// Kind: ScriptStruct; super: ObjectWrapperFragment
struct FMassActorFragment
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMassActorFragment, Actor) == 0, "Offset mismatch for FMassActorFragment::Actor");

// /Script/MassActors.MassActorInstanceFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassActorInstanceFragment
{
public:
    std::uint8_t Handle[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassActorInstanceFragment, Handle) == 0, "Offset mismatch for FMassActorInstanceFragment::Handle");

// /Script/MassActors.MassActorSpawnRequest
// Kind: ScriptStruct; super: none
struct FMassActorSpawnRequest
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Template; // 0x0008 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x90]; // 0x0010
    void* SpawnedActor; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMassActorSpawnRequest, Template) == 8, "Offset mismatch for FMassActorSpawnRequest::Template");
static_assert(offsetof(FMassActorSpawnRequest, SpawnedActor) == 160, "Offset mismatch for FMassActorSpawnRequest::SpawnedActor");

// /Script/MassActors.MassActorSpawnRequestHandle
// Kind: ScriptStruct; super: IndexedHandleBase
struct FMassActorSpawnRequestHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassAgentInitializationQueue
// Kind: ScriptStruct; super: none
struct FMassAgentInitializationQueue
{
public:
    TArray<void*> AgentComponents; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMassAgentInitializationQueue, AgentComponents) == 0, "Offset mismatch for FMassAgentInitializationQueue::AgentComponents");

// /Script/MassActors.MassCapsuleTransformCopyToActorTag
// Kind: ScriptStruct; super: MassTag
struct FMassCapsuleTransformCopyToActorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassCapsuleTransformCopyToMassTag
// Kind: ScriptStruct; super: MassTag
struct FMassCapsuleTransformCopyToMassTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassCharacterMovementCopyToActorTag
// Kind: ScriptStruct; super: MassTag
struct FMassCharacterMovementCopyToActorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassCharacterMovementCopyToMassTag
// Kind: ScriptStruct; super: MassTag
struct FMassCharacterMovementCopyToMassTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassCharacterOrientationCopyToActorTag
// Kind: ScriptStruct; super: MassTag
struct FMassCharacterOrientationCopyToActorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassCharacterOrientationCopyToMassTag
// Kind: ScriptStruct; super: MassTag
struct FMassCharacterOrientationCopyToMassTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassGuidFragment
// Kind: ScriptStruct; super: ObjectWrapperFragment
struct FMassGuidFragment
{
public:
    std::uint8_t Guid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassGuidFragment, Guid) == 0, "Offset mismatch for FMassGuidFragment::Guid");

// /Script/MassActors.MassSceneComponentLocationCopyToActorTag
// Kind: ScriptStruct; super: MassTag
struct FMassSceneComponentLocationCopyToActorTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassSceneComponentLocationCopyToMassTag
// Kind: ScriptStruct; super: MassTag
struct FMassSceneComponentLocationCopyToMassTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassSceneComponentVelocityCopyToMassTag
// Kind: ScriptStruct; super: MassTag
struct FMassSceneComponentVelocityCopyToMassTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassSceneComponentWrapperFragment
// Kind: ScriptStruct; super: ObjectWrapperFragment
struct FMassSceneComponentWrapperFragment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassActorPoolableInterface
// Kind: Class; super: Interface
class UMassActorPoolableInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassActorSpawnerSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassActorSpawnerSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> SpawnRequests; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorsToDestroy; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeactivatedActorsToDestroy; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMassActorSpawnerSubsystem, SpawnRequests) == 64, "Offset mismatch for UMassActorSpawnerSubsystem::SpawnRequests");
static_assert(offsetof(UMassActorSpawnerSubsystem, ActorsToDestroy) == 80, "Offset mismatch for UMassActorSpawnerSubsystem::ActorsToDestroy");
static_assert(offsetof(UMassActorSpawnerSubsystem, DeactivatedActorsToDestroy) == 96, "Offset mismatch for UMassActorSpawnerSubsystem::DeactivatedActorsToDestroy");

// /Script/MassActors.MassActorSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassActorSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassActors.MassAgentCapsuleCollisionSyncTrait
// Kind: Class; super: MassAgentSyncTrait
class UMassAgentCapsuleCollisionSyncTrait
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bSyncTransform; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassAgentCapsuleCollisionSyncTrait, bSyncTransform) == 56, "Offset mismatch for UMassAgentCapsuleCollisionSyncTrait::bSyncTransform");

// /Script/MassActors.MassAgentComponent
// Kind: Class; super: ActorComponent
class UMassAgentComponent
{
public:
    std::uint8_t Pad_0000[0x1E0]; // 0x0000
    std::uint8_t EntityConfig[0x5C]; // 0x01E0 (Size: 0x5C, Type: StructProperty)
    std::uint8_t NetID[0x1]; // 0x023C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassAgentComponent, EntityConfig) == 480, "Offset mismatch for UMassAgentComponent::EntityConfig");
static_assert(offsetof(UMassAgentComponent, NetID) == 572, "Offset mismatch for UMassAgentComponent::NetID");

// /Script/MassActors.MassAgentFeetLocationSyncTrait
// Kind: Class; super: MassAgentSyncTrait
class UMassAgentFeetLocationSyncTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SyncDirection; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassAgentFeetLocationSyncTrait, SyncDirection) == 48, "Offset mismatch for UMassAgentFeetLocationSyncTrait::SyncDirection");

// /Script/MassActors.MassAgentMovementSyncTrait
// Kind: Class; super: MassAgentSyncTrait
class UMassAgentMovementSyncTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SyncDirection; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassAgentMovementSyncTrait, SyncDirection) == 48, "Offset mismatch for UMassAgentMovementSyncTrait::SyncDirection");

// /Script/MassActors.MassAgentOrientationSyncTrait
// Kind: Class; super: MassAgentSyncTrait
class UMassAgentOrientationSyncTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SyncDirection; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassAgentOrientationSyncTrait, SyncDirection) == 48, "Offset mismatch for UMassAgentOrientationSyncTrait::SyncDirection");

// /Script/MassActors.MassAgentSubsystem
// Kind: Class; super: MassSubsystemBase
class UMassAgentSubsystem
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SpawnerSystem; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* SimulationSystem; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> PendingAgentEntities; // 0x0060 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PendingPuppets; // 0x0070 (Size: 0x10, Type: MapProperty)
    void* NetworkSubsystem; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* ReplicationSubsystem; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ReplicatedAgentComponents; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMassAgentSubsystem, SpawnerSystem) == 80, "Offset mismatch for UMassAgentSubsystem::SpawnerSystem");
static_assert(offsetof(UMassAgentSubsystem, SimulationSystem) == 88, "Offset mismatch for UMassAgentSubsystem::SimulationSystem");
static_assert(offsetof(UMassAgentSubsystem, PendingAgentEntities) == 96, "Offset mismatch for UMassAgentSubsystem::PendingAgentEntities");
static_assert(offsetof(UMassAgentSubsystem, PendingPuppets) == 112, "Offset mismatch for UMassAgentSubsystem::PendingPuppets");
static_assert(offsetof(UMassAgentSubsystem, NetworkSubsystem) == 128, "Offset mismatch for UMassAgentSubsystem::NetworkSubsystem");
static_assert(offsetof(UMassAgentSubsystem, ReplicationSubsystem) == 136, "Offset mismatch for UMassAgentSubsystem::ReplicationSubsystem");
static_assert(offsetof(UMassAgentSubsystem, ReplicatedAgentComponents) == 144, "Offset mismatch for UMassAgentSubsystem::ReplicatedAgentComponents");

// /Script/MassActors.MassAgentSyncTrait
// Kind: Class; super: MassEntityTraitBase
class UMassAgentSyncTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SyncDirection; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMassAgentSyncTrait, SyncDirection) == 48, "Offset mismatch for UMassAgentSyncTrait::SyncDirection");

// /Script/MassActors.MassCapsuleTransformToMassTranslator
// Kind: Class; super: MassTranslator
class UMassCapsuleTransformToMassTranslator
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

static_assert(offsetof(UMassCapsuleTransformToMassTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassCapsuleTransformToMassTranslator::ExecutionOrder");
static_assert(offsetof(UMassCapsuleTransformToMassTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassCapsuleTransformToMassTranslator::ProcessingPhase");
static_assert(offsetof(UMassCapsuleTransformToMassTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassCapsuleTransformToMassTranslator::ExecutionFlags");
static_assert(offsetof(UMassCapsuleTransformToMassTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassCapsuleTransformToMassTranslator::bAggregateRequirements");
static_assert(offsetof(UMassCapsuleTransformToMassTranslator, ActivationState) == 83, "Offset mismatch for UMassCapsuleTransformToMassTranslator::ActivationState");
static_assert(offsetof(UMassCapsuleTransformToMassTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassCapsuleTransformToMassTranslator::ExecutionPriority");

// /Script/MassActors.MassCharacterMovementToActorTranslator
// Kind: Class; super: MassTranslator
class UMassCharacterMovementToActorTranslator
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

static_assert(offsetof(UMassCharacterMovementToActorTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterMovementToActorTranslator::ExecutionOrder");
static_assert(offsetof(UMassCharacterMovementToActorTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterMovementToActorTranslator::ProcessingPhase");
static_assert(offsetof(UMassCharacterMovementToActorTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterMovementToActorTranslator::ExecutionFlags");
static_assert(offsetof(UMassCharacterMovementToActorTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterMovementToActorTranslator::bAggregateRequirements");
static_assert(offsetof(UMassCharacterMovementToActorTranslator, ActivationState) == 83, "Offset mismatch for UMassCharacterMovementToActorTranslator::ActivationState");
static_assert(offsetof(UMassCharacterMovementToActorTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterMovementToActorTranslator::ExecutionPriority");

// /Script/MassActors.MassCharacterMovementToMassTranslator
// Kind: Class; super: MassTranslator
class UMassCharacterMovementToMassTranslator
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

static_assert(offsetof(UMassCharacterMovementToMassTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterMovementToMassTranslator::ExecutionOrder");
static_assert(offsetof(UMassCharacterMovementToMassTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterMovementToMassTranslator::ProcessingPhase");
static_assert(offsetof(UMassCharacterMovementToMassTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterMovementToMassTranslator::ExecutionFlags");
static_assert(offsetof(UMassCharacterMovementToMassTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterMovementToMassTranslator::bAggregateRequirements");
static_assert(offsetof(UMassCharacterMovementToMassTranslator, ActivationState) == 83, "Offset mismatch for UMassCharacterMovementToMassTranslator::ActivationState");
static_assert(offsetof(UMassCharacterMovementToMassTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterMovementToMassTranslator::ExecutionPriority");

// /Script/MassActors.MassCharacterOrientationToActorTranslator
// Kind: Class; super: MassTranslator
class UMassCharacterOrientationToActorTranslator
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

static_assert(offsetof(UMassCharacterOrientationToActorTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterOrientationToActorTranslator::ExecutionOrder");
static_assert(offsetof(UMassCharacterOrientationToActorTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterOrientationToActorTranslator::ProcessingPhase");
static_assert(offsetof(UMassCharacterOrientationToActorTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterOrientationToActorTranslator::ExecutionFlags");
static_assert(offsetof(UMassCharacterOrientationToActorTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterOrientationToActorTranslator::bAggregateRequirements");
static_assert(offsetof(UMassCharacterOrientationToActorTranslator, ActivationState) == 83, "Offset mismatch for UMassCharacterOrientationToActorTranslator::ActivationState");
static_assert(offsetof(UMassCharacterOrientationToActorTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterOrientationToActorTranslator::ExecutionPriority");

// /Script/MassActors.MassCharacterOrientationToMassTranslator
// Kind: Class; super: MassTranslator
class UMassCharacterOrientationToMassTranslator
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

static_assert(offsetof(UMassCharacterOrientationToMassTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassCharacterOrientationToMassTranslator::ExecutionOrder");
static_assert(offsetof(UMassCharacterOrientationToMassTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassCharacterOrientationToMassTranslator::ProcessingPhase");
static_assert(offsetof(UMassCharacterOrientationToMassTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassCharacterOrientationToMassTranslator::ExecutionFlags");
static_assert(offsetof(UMassCharacterOrientationToMassTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassCharacterOrientationToMassTranslator::bAggregateRequirements");
static_assert(offsetof(UMassCharacterOrientationToMassTranslator, ActivationState) == 83, "Offset mismatch for UMassCharacterOrientationToMassTranslator::ActivationState");
static_assert(offsetof(UMassCharacterOrientationToMassTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassCharacterOrientationToMassTranslator::ExecutionPriority");

// /Script/MassActors.MassSceneComponentLocationToActorTranslator
// Kind: Class; super: MassTranslator
class UMassSceneComponentLocationToActorTranslator
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

static_assert(offsetof(UMassSceneComponentLocationToActorTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassSceneComponentLocationToActorTranslator::ExecutionOrder");
static_assert(offsetof(UMassSceneComponentLocationToActorTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassSceneComponentLocationToActorTranslator::ProcessingPhase");
static_assert(offsetof(UMassSceneComponentLocationToActorTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassSceneComponentLocationToActorTranslator::ExecutionFlags");
static_assert(offsetof(UMassSceneComponentLocationToActorTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassSceneComponentLocationToActorTranslator::bAggregateRequirements");
static_assert(offsetof(UMassSceneComponentLocationToActorTranslator, ActivationState) == 83, "Offset mismatch for UMassSceneComponentLocationToActorTranslator::ActivationState");
static_assert(offsetof(UMassSceneComponentLocationToActorTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassSceneComponentLocationToActorTranslator::ExecutionPriority");

// /Script/MassActors.MassSceneComponentLocationToMassTranslator
// Kind: Class; super: MassTranslator
class UMassSceneComponentLocationToMassTranslator
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

static_assert(offsetof(UMassSceneComponentLocationToMassTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassSceneComponentLocationToMassTranslator::ExecutionOrder");
static_assert(offsetof(UMassSceneComponentLocationToMassTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassSceneComponentLocationToMassTranslator::ProcessingPhase");
static_assert(offsetof(UMassSceneComponentLocationToMassTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassSceneComponentLocationToMassTranslator::ExecutionFlags");
static_assert(offsetof(UMassSceneComponentLocationToMassTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassSceneComponentLocationToMassTranslator::bAggregateRequirements");
static_assert(offsetof(UMassSceneComponentLocationToMassTranslator, ActivationState) == 83, "Offset mismatch for UMassSceneComponentLocationToMassTranslator::ActivationState");
static_assert(offsetof(UMassSceneComponentLocationToMassTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassSceneComponentLocationToMassTranslator::ExecutionPriority");

// /Script/MassActors.MassSceneComponentVelocityToMassTranslator
// Kind: Class; super: MassTranslator
class UMassSceneComponentVelocityToMassTranslator
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

static_assert(offsetof(UMassSceneComponentVelocityToMassTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassSceneComponentVelocityToMassTranslator::ExecutionOrder");
static_assert(offsetof(UMassSceneComponentVelocityToMassTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassSceneComponentVelocityToMassTranslator::ProcessingPhase");
static_assert(offsetof(UMassSceneComponentVelocityToMassTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassSceneComponentVelocityToMassTranslator::ExecutionFlags");
static_assert(offsetof(UMassSceneComponentVelocityToMassTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassSceneComponentVelocityToMassTranslator::bAggregateRequirements");
static_assert(offsetof(UMassSceneComponentVelocityToMassTranslator, ActivationState) == 83, "Offset mismatch for UMassSceneComponentVelocityToMassTranslator::ActivationState");
static_assert(offsetof(UMassSceneComponentVelocityToMassTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassSceneComponentVelocityToMassTranslator::ExecutionPriority");

// /Script/MassActors.MassTransformToActorCapsuleTranslator
// Kind: Class; super: MassTranslator
class UMassTransformToActorCapsuleTranslator
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

static_assert(offsetof(UMassTransformToActorCapsuleTranslator, ExecutionOrder) == 40, "Offset mismatch for UMassTransformToActorCapsuleTranslator::ExecutionOrder");
static_assert(offsetof(UMassTransformToActorCapsuleTranslator, ProcessingPhase) == 80, "Offset mismatch for UMassTransformToActorCapsuleTranslator::ProcessingPhase");
static_assert(offsetof(UMassTransformToActorCapsuleTranslator, ExecutionFlags) == 81, "Offset mismatch for UMassTransformToActorCapsuleTranslator::ExecutionFlags");
static_assert(offsetof(UMassTransformToActorCapsuleTranslator, bAggregateRequirements) == 82, "Offset mismatch for UMassTransformToActorCapsuleTranslator::bAggregateRequirements");
static_assert(offsetof(UMassTransformToActorCapsuleTranslator, ActivationState) == 83, "Offset mismatch for UMassTransformToActorCapsuleTranslator::ActivationState");
static_assert(offsetof(UMassTransformToActorCapsuleTranslator, ExecutionPriority) == 84, "Offset mismatch for UMassTransformToActorCapsuleTranslator::ExecutionPriority");

// /Script/MassActors.MassTranslator_BehaviorTree
// Kind: Class; super: MassTranslator
class UMassTranslator_BehaviorTree
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

static_assert(offsetof(UMassTranslator_BehaviorTree, ExecutionOrder) == 40, "Offset mismatch for UMassTranslator_BehaviorTree::ExecutionOrder");
static_assert(offsetof(UMassTranslator_BehaviorTree, ProcessingPhase) == 80, "Offset mismatch for UMassTranslator_BehaviorTree::ProcessingPhase");
static_assert(offsetof(UMassTranslator_BehaviorTree, ExecutionFlags) == 81, "Offset mismatch for UMassTranslator_BehaviorTree::ExecutionFlags");
static_assert(offsetof(UMassTranslator_BehaviorTree, bAggregateRequirements) == 82, "Offset mismatch for UMassTranslator_BehaviorTree::bAggregateRequirements");
static_assert(offsetof(UMassTranslator_BehaviorTree, ActivationState) == 83, "Offset mismatch for UMassTranslator_BehaviorTree::ActivationState");
static_assert(offsetof(UMassTranslator_BehaviorTree, ExecutionPriority) == 84, "Offset mismatch for UMassTranslator_BehaviorTree::ExecutionPriority");
