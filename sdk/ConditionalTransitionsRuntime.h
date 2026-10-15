/**
 * decamp dumper generated SDK
 * Package: /Script/ConditionalTransitionsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ConditionalTransitionsRuntime.BatchedConditionalTransitionEntry
// Kind: ScriptStruct; super: none
struct FBatchedConditionalTransitionEntry
{
public:
    TWeakObjectPtr<void> TransitionComponent; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> InstigatorObject; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    FName PhaseName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBatchedConditionalTransitionEntry, TransitionComponent) == 0, "Offset mismatch for FBatchedConditionalTransitionEntry::TransitionComponent");
static_assert(offsetof(FBatchedConditionalTransitionEntry, InstigatorObject) == 8, "Offset mismatch for FBatchedConditionalTransitionEntry::InstigatorObject");
static_assert(offsetof(FBatchedConditionalTransitionEntry, PhaseName) == 16, "Offset mismatch for FBatchedConditionalTransitionEntry::PhaseName");

// /Script/ConditionalTransitionsRuntime.ConditionalParticipantCTCEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FConditionalParticipantCTCEntry
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    TWeakObjectPtr<void> CachedConditionalTransitionObject; // 0x000C (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t CurrentPhaseID; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t PersistentGuid[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> PhaseEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConditionalParticipantCTCEntry, CachedConditionalTransitionObject) == 12, "Offset mismatch for FConditionalParticipantCTCEntry::CachedConditionalTransitionObject");
static_assert(offsetof(FConditionalParticipantCTCEntry, CurrentPhaseID) == 20, "Offset mismatch for FConditionalParticipantCTCEntry::CurrentPhaseID");
static_assert(offsetof(FConditionalParticipantCTCEntry, PersistentGuid) == 24, "Offset mismatch for FConditionalParticipantCTCEntry::PersistentGuid");
static_assert(offsetof(FConditionalParticipantCTCEntry, PhaseEntries) == 40, "Offset mismatch for FConditionalParticipantCTCEntry::PhaseEntries");

// /Script/ConditionalTransitionsRuntime.ConditionalParticipantPhaseArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FConditionalParticipantPhaseArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TWeakObjectPtr<void> CachedConditionalReplicationObject; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> CTCPhaseEntries; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConditionalParticipantPhaseArray, CachedConditionalReplicationObject) == 72, "Offset mismatch for FConditionalParticipantPhaseArray::CachedConditionalReplicationObject");
static_assert(offsetof(FConditionalParticipantPhaseArray, CTCPhaseEntries) == 80, "Offset mismatch for FConditionalParticipantPhaseArray::CTCPhaseEntries");

// /Script/ConditionalTransitionsRuntime.ConditionalParticipantPhaseEntry
// Kind: ScriptStruct; super: none
struct FConditionalParticipantPhaseEntry
{
public:
    std::int32_t PhaseTransitionID; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t InstigatorID[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t PhaseName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    FName PreviousPhaseName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FConditionalParticipantPhaseEntry, PhaseTransitionID) == 0, "Offset mismatch for FConditionalParticipantPhaseEntry::PhaseTransitionID");
static_assert(offsetof(FConditionalParticipantPhaseEntry, InstigatorID) == 4, "Offset mismatch for FConditionalParticipantPhaseEntry::InstigatorID");
static_assert(offsetof(FConditionalParticipantPhaseEntry, PhaseName) == 8, "Offset mismatch for FConditionalParticipantPhaseEntry::PhaseName");
static_assert(offsetof(FConditionalParticipantPhaseEntry, PreviousPhaseName) == 12, "Offset mismatch for FConditionalParticipantPhaseEntry::PreviousPhaseName");

// /Script/ConditionalTransitionsRuntime.ConditionalTransitionEntry
// Kind: ScriptStruct; super: none
struct FConditionalTransitionEntry
{
public:
    std::uint8_t bIsInstantTransition; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Condition[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> PhaseSelectionRules; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConditionalTransitionEntry, bIsInstantTransition) == 0, "Offset mismatch for FConditionalTransitionEntry::bIsInstantTransition");
static_assert(offsetof(FConditionalTransitionEntry, Condition) == 8, "Offset mismatch for FConditionalTransitionEntry::Condition");
static_assert(offsetof(FConditionalTransitionEntry, PhaseSelectionRules) == 24, "Offset mismatch for FConditionalTransitionEntry::PhaseSelectionRules");

// /Script/ConditionalTransitionsRuntime.ConditionalTransitionHashedInstigatorId
// Kind: ScriptStruct; super: none
struct FConditionalTransitionHashedInstigatorId
{
public:
    std::uint32_t HashId; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FConditionalTransitionHashedInstigatorId, HashId) == 0, "Offset mismatch for FConditionalTransitionHashedInstigatorId::HashId");

// /Script/ConditionalTransitionsRuntime.ConditionalTransitionParticipationType_Base
// Kind: ScriptStruct; super: none
struct FConditionalTransitionParticipationType_Base
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalTransitionParticipation_OwnerOnly
// Kind: ScriptStruct; super: ConditionalTransitionParticipationType_Base
struct FConditionalTransitionParticipation_OwnerOnly
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalTransitionParticipation_PlayerInstanced
// Kind: ScriptStruct; super: ConditionalTransitionParticipationType_Base
struct FConditionalTransitionParticipation_PlayerInstanced
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalTransitionParticipation_SquadOwnedPlayerInstanced
// Kind: ScriptStruct; super: ConditionalTransitionParticipationType_Base
struct FConditionalTransitionParticipation_SquadOwnedPlayerInstanced
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalTransitionParticipation_WorldInstanced
// Kind: ScriptStruct; super: ConditionalTransitionParticipationType_Base
struct FConditionalTransitionParticipation_WorldInstanced
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalTransitionPersistence_Base
// Kind: ScriptStruct; super: none
struct FConditionalTransitionPersistence_Base
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalTransitionPersistence_SessionDataStorage
// Kind: ScriptStruct; super: ConditionalTransitionPersistence_Base
struct FConditionalTransitionPersistence_SessionDataStorage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalTransitionPersistentId
// Kind: ScriptStruct; super: none
struct FConditionalTransitionPersistentId
{
public:
    std::uint8_t PersistentGuid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FConditionalTransitionPersistentId, PersistentGuid) == 0, "Offset mismatch for FConditionalTransitionPersistentId::PersistentGuid");

// /Script/ConditionalTransitionsRuntime.ConditionalTransition_ConditionalListenerHandles
// Kind: ScriptStruct; super: none
struct FConditionalTransition_ConditionalListenerHandles
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.PhaseSelection
// Kind: ScriptStruct; super: none
struct FPhaseSelection
{
public:
    std::uint8_t Phase[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t QueryTarget; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t SelectionQuery[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPhaseSelection, Phase) == 0, "Offset mismatch for FPhaseSelection::Phase");
static_assert(offsetof(FPhaseSelection, QueryTarget) == 4, "Offset mismatch for FPhaseSelection::QueryTarget");
static_assert(offsetof(FPhaseSelection, SelectionQuery) == 8, "Offset mismatch for FPhaseSelection::SelectionQuery");

// /Script/ConditionalTransitionsRuntime.PhaseTransitionData
// Kind: ScriptStruct; super: none
struct FPhaseTransitionData
{
public:
    TArray<void*> EnterTransitionReactions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Transitions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPhaseTransitionData, EnterTransitionReactions) == 0, "Offset mismatch for FPhaseTransitionData::EnterTransitionReactions");
static_assert(offsetof(FPhaseTransitionData, Transitions) == 16, "Offset mismatch for FPhaseTransitionData::Transitions");

// /Script/ConditionalTransitionsRuntime.SessionDataStorage_ConditionalTransitions
// Kind: ScriptStruct; super: SessionDataStorage_ExtensionBase
struct FSessionDataStorage_ConditionalTransitions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ConditionalTransitionsRuntime.ConditionalReplicationFilterObject
// Kind: Class; super: Actor
class UConditionalReplicationFilterObject
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t PhasedTransitions[0x68]; // 0x0270 (Size: 0x68, Type: StructProperty)
    std::uint8_t HashedID[0x1]; // 0x02D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UConditionalReplicationFilterObject, PhasedTransitions) == 624, "Offset mismatch for UConditionalReplicationFilterObject::PhasedTransitions");
static_assert(offsetof(UConditionalReplicationFilterObject, HashedID) == 728, "Offset mismatch for UConditionalReplicationFilterObject::HashedID");

// /Script/ConditionalTransitionsRuntime.ConditionalTransitionComponent
// Kind: Class; super: GameFrameworkComponent
class UConditionalTransitionComponent
{
public:
    std::uint8_t Pad_0000[0xC4]; // 0x0000
    std::uint8_t PersistentGuid[0x14]; // 0x00C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t ParticipationScope[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PersistenceHandling[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    FName StartingPhase; // 0x00F8 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> Phases; // 0x0100 (Size: 0x10, Type: MapProperty)
    TArray<void*> RuntimeObjectsToKeepInMemory; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0120
    TArray<void*> Client_QueuedPhaseEntries; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0140
    TMap<void*, void*> PhaseCountPerTick; // 0x0150 (Size: 0x10, Type: MapProperty)
    std::int32_t MaxTransitionsPerTick; // 0x0160 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UConditionalTransitionComponent, PersistentGuid) == 196, "Offset mismatch for UConditionalTransitionComponent::PersistentGuid");
static_assert(offsetof(UConditionalTransitionComponent, ParticipationScope) == 216, "Offset mismatch for UConditionalTransitionComponent::ParticipationScope");
static_assert(offsetof(UConditionalTransitionComponent, PersistenceHandling) == 232, "Offset mismatch for UConditionalTransitionComponent::PersistenceHandling");
static_assert(offsetof(UConditionalTransitionComponent, StartingPhase) == 248, "Offset mismatch for UConditionalTransitionComponent::StartingPhase");
static_assert(offsetof(UConditionalTransitionComponent, Phases) == 256, "Offset mismatch for UConditionalTransitionComponent::Phases");
static_assert(offsetof(UConditionalTransitionComponent, RuntimeObjectsToKeepInMemory) == 272, "Offset mismatch for UConditionalTransitionComponent::RuntimeObjectsToKeepInMemory");
static_assert(offsetof(UConditionalTransitionComponent, Client_QueuedPhaseEntries) == 304, "Offset mismatch for UConditionalTransitionComponent::Client_QueuedPhaseEntries");
static_assert(offsetof(UConditionalTransitionComponent, PhaseCountPerTick) == 336, "Offset mismatch for UConditionalTransitionComponent::PhaseCountPerTick");
static_assert(offsetof(UConditionalTransitionComponent, MaxTransitionsPerTick) == 352, "Offset mismatch for UConditionalTransitionComponent::MaxTransitionsPerTick");

// /Script/ConditionalTransitionsRuntime.FortConditionalTransitionComponent
// Kind: Class; super: ConditionalTransitionComponent
class UFortConditionalTransitionComponent
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t bBypassZonePhaseCheck; // 0x0168 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortConditionalTransitionComponent, bBypassZonePhaseCheck) == 360, "Offset mismatch for UFortConditionalTransitionComponent::bBypassZonePhaseCheck");

// /Script/ConditionalTransitionsRuntime.GameStateComponent_PhaseObservation
// Kind: Class; super: GameStateComponent
class UGameStateComponent_PhaseObservation
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> ReplicationObjects; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> BatchedTransitionQueue; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameStateComponent_PhaseObservation, ReplicationObjects) == 192, "Offset mismatch for UGameStateComponent_PhaseObservation::ReplicationObjects");
static_assert(offsetof(UGameStateComponent_PhaseObservation, BatchedTransitionQueue) == 208, "Offset mismatch for UGameStateComponent_PhaseObservation::BatchedTransitionQueue");
