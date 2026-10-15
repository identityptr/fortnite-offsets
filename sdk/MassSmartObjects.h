/**
 * decamp dumper generated SDK
 * Package: /Script/MassSmartObjects
 */
#pragma once
#include "Basic.h"

// /Script/MassSmartObjects.FindCandidatesParameters
// Kind: ScriptStruct; super: none
struct FFindCandidatesParameters
{
public:
    std::uint8_t UserTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivityRequirements[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t LaneLocation[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t MRUSlots[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFindCandidatesParameters, UserTags) == 0, "Offset mismatch for FFindCandidatesParameters::UserTags");
static_assert(offsetof(FFindCandidatesParameters, ActivityRequirements) == 32, "Offset mismatch for FFindCandidatesParameters::ActivityRequirements");
static_assert(offsetof(FFindCandidatesParameters, LaneLocation) == 104, "Offset mismatch for FFindCandidatesParameters::LaneLocation");
static_assert(offsetof(FFindCandidatesParameters, Location) == 120, "Offset mismatch for FFindCandidatesParameters::Location");
static_assert(offsetof(FFindCandidatesParameters, MRUSlots) == 144, "Offset mismatch for FFindCandidatesParameters::MRUSlots");

// /Script/MassSmartObjects.MRUSlot
// Kind: ScriptStruct; super: none
struct FMRUSlot
{
public:
    std::uint8_t Slot[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    float RemainingTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMRUSlot, Slot) == 0, "Offset mismatch for FMRUSlot::Slot");
static_assert(offsetof(FMRUSlot, RemainingTime) == 20, "Offset mismatch for FMRUSlot::RemainingTime");

// /Script/MassSmartObjects.MRUSlots
// Kind: ScriptStruct; super: none
struct FMRUSlots
{
public:
    std::uint8_t Slots[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t NumSlots; // 0x0060 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMRUSlots, Slots) == 0, "Offset mismatch for FMRUSlots::Slots");
static_assert(offsetof(FMRUSlots, NumSlots) == 96, "Offset mismatch for FMRUSlots::NumSlots");

// /Script/MassSmartObjects.MRUSlotsFragment
// Kind: ScriptStruct; super: MassFragment
struct FMRUSlotsFragment
{
public:
    std::uint8_t Slots[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMRUSlotsFragment, Slots) == 0, "Offset mismatch for FMRUSlotsFragment::Slots");

// /Script/MassSmartObjects.MassInActiveSmartObjectsRangeTag
// Kind: ScriptStruct; super: MassTag
struct FMassInActiveSmartObjectsRangeTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassSmartObjects.MassSmartObjectCandidateSlots
// Kind: ScriptStruct; super: none
struct FMassSmartObjectCandidateSlots
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t NumSlots; // 0x00A0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMassSmartObjectCandidateSlots, NumSlots) == 160, "Offset mismatch for FMassSmartObjectCandidateSlots::NumSlots");

// /Script/MassSmartObjects.MassSmartObjectCompletedRequestTag
// Kind: ScriptStruct; super: MassTag
struct FMassSmartObjectCompletedRequestTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MassSmartObjects.MassSmartObjectLaneLocationRequestFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSmartObjectLaneLocationRequestFragment
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t RequestingEntity[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t UserTags[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivityRequirements[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassSmartObjectLaneLocationRequestFragment, RequestingEntity) == 16, "Offset mismatch for FMassSmartObjectLaneLocationRequestFragment::RequestingEntity");
static_assert(offsetof(FMassSmartObjectLaneLocationRequestFragment, UserTags) == 24, "Offset mismatch for FMassSmartObjectLaneLocationRequestFragment::UserTags");
static_assert(offsetof(FMassSmartObjectLaneLocationRequestFragment, ActivityRequirements) == 56, "Offset mismatch for FMassSmartObjectLaneLocationRequestFragment::ActivityRequirements");

// /Script/MassSmartObjects.MassSmartObjectRequestID
// Kind: ScriptStruct; super: none
struct FMassSmartObjectRequestID
{
public:
    std::uint8_t Entity[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassSmartObjectRequestID, Entity) == 0, "Offset mismatch for FMassSmartObjectRequestID::Entity");

// /Script/MassSmartObjects.MassSmartObjectRequestResultFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSmartObjectRequestResultFragment
{
public:
    std::uint8_t Candidates[0xA4]; // 0x0000 (Size: 0xA4, Type: StructProperty)
    std::uint8_t bProcessed; // 0x00A4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMassSmartObjectRequestResultFragment, Candidates) == 0, "Offset mismatch for FMassSmartObjectRequestResultFragment::Candidates");
static_assert(offsetof(FMassSmartObjectRequestResultFragment, bProcessed) == 164, "Offset mismatch for FMassSmartObjectRequestResultFragment::bProcessed");

// /Script/MassSmartObjects.MassSmartObjectTimedBehaviorFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSmartObjectTimedBehaviorFragment
{
public:
    float UseTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMassSmartObjectTimedBehaviorFragment, UseTime) == 0, "Offset mismatch for FMassSmartObjectTimedBehaviorFragment::UseTime");

// /Script/MassSmartObjects.MassSmartObjectUserFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSmartObjectUserFragment
{
public:
    std::uint8_t UserTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t InteractionHandle[0x28]; // 0x0020 (Size: 0x28, Type: StructProperty)
    std::uint8_t InteractionStatus; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0049
    double InteractionCooldownEndTime; // 0x0050 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FMassSmartObjectUserFragment, UserTags) == 0, "Offset mismatch for FMassSmartObjectUserFragment::UserTags");
static_assert(offsetof(FMassSmartObjectUserFragment, InteractionHandle) == 32, "Offset mismatch for FMassSmartObjectUserFragment::InteractionHandle");
static_assert(offsetof(FMassSmartObjectUserFragment, InteractionStatus) == 72, "Offset mismatch for FMassSmartObjectUserFragment::InteractionStatus");
static_assert(offsetof(FMassSmartObjectUserFragment, InteractionCooldownEndTime) == 80, "Offset mismatch for FMassSmartObjectUserFragment::InteractionCooldownEndTime");

// /Script/MassSmartObjects.MassSmartObjectWorldLocationRequestFragment
// Kind: ScriptStruct; super: MassFragment
struct FMassSmartObjectWorldLocationRequestFragment
{
public:
    std::uint8_t SearchOrigin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t RequestingEntity[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t UserTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActivityRequirements[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMassSmartObjectWorldLocationRequestFragment, SearchOrigin) == 0, "Offset mismatch for FMassSmartObjectWorldLocationRequestFragment::SearchOrigin");
static_assert(offsetof(FMassSmartObjectWorldLocationRequestFragment, RequestingEntity) == 24, "Offset mismatch for FMassSmartObjectWorldLocationRequestFragment::RequestingEntity");
static_assert(offsetof(FMassSmartObjectWorldLocationRequestFragment, UserTags) == 32, "Offset mismatch for FMassSmartObjectWorldLocationRequestFragment::UserTags");
static_assert(offsetof(FMassSmartObjectWorldLocationRequestFragment, ActivityRequirements) == 64, "Offset mismatch for FMassSmartObjectWorldLocationRequestFragment::ActivityRequirements");

// /Script/MassSmartObjects.SmartObjectAnnotationData
// Kind: ScriptStruct; super: none
struct FSmartObjectAnnotationData
{
public:
    std::uint8_t DataHandle[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> AffectedLanes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SmartObjectLaneLocations; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SmartObjectToLaneLocationIndexLookup; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LaneToLaneLocationIndicesLookup; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FSmartObjectAnnotationData, DataHandle) == 0, "Offset mismatch for FSmartObjectAnnotationData::DataHandle");
static_assert(offsetof(FSmartObjectAnnotationData, AffectedLanes) == 8, "Offset mismatch for FSmartObjectAnnotationData::AffectedLanes");
static_assert(offsetof(FSmartObjectAnnotationData, SmartObjectLaneLocations) == 24, "Offset mismatch for FSmartObjectAnnotationData::SmartObjectLaneLocations");
static_assert(offsetof(FSmartObjectAnnotationData, SmartObjectToLaneLocationIndexLookup) == 40, "Offset mismatch for FSmartObjectAnnotationData::SmartObjectToLaneLocationIndexLookup");
static_assert(offsetof(FSmartObjectAnnotationData, LaneToLaneLocationIndicesLookup) == 56, "Offset mismatch for FSmartObjectAnnotationData::LaneToLaneLocationIndicesLookup");

// /Script/MassSmartObjects.SmartObjectCandidateSlot
// Kind: ScriptStruct; super: none
struct FSmartObjectCandidateSlot
{
public:
    std::uint8_t Result[0x24]; // 0x0000 (Size: 0x24, Type: StructProperty)
    float Cost; // 0x0024 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSmartObjectCandidateSlot, Result) == 0, "Offset mismatch for FSmartObjectCandidateSlot::Result");
static_assert(offsetof(FSmartObjectCandidateSlot, Cost) == 36, "Offset mismatch for FSmartObjectCandidateSlot::Cost");

// /Script/MassSmartObjects.SmartObjectLaneLocation
// Kind: ScriptStruct; super: none
struct FSmartObjectLaneLocation
{
public:
    std::uint8_t ObjectHandle[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t LaneIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    float DistanceAlongLane; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSmartObjectLaneLocation, ObjectHandle) == 0, "Offset mismatch for FSmartObjectLaneLocation::ObjectHandle");
static_assert(offsetof(FSmartObjectLaneLocation, LaneIndex) == 16, "Offset mismatch for FSmartObjectLaneLocation::LaneIndex");
static_assert(offsetof(FSmartObjectLaneLocation, DistanceAlongLane) == 20, "Offset mismatch for FSmartObjectLaneLocation::DistanceAlongLane");

// /Script/MassSmartObjects.SmartObjectLaneLocationIndices
// Kind: ScriptStruct; super: none
struct FSmartObjectLaneLocationIndices
{
public:
    TArray<void*> SmartObjectLaneLocationIndices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSmartObjectLaneLocationIndices, SmartObjectLaneLocationIndices) == 0, "Offset mismatch for FSmartObjectLaneLocationIndices::SmartObjectLaneLocationIndices");

// /Script/MassSmartObjects.SmartObjectMassEntityUserData
// Kind: ScriptStruct; super: none
struct FSmartObjectMassEntityUserData
{
public:
    std::uint8_t UserEntity[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectMassEntityUserData, UserEntity) == 0, "Offset mismatch for FSmartObjectMassEntityUserData::UserEntity");

// /Script/MassSmartObjects.SmartObjectRegistrationFragment
// Kind: ScriptStruct; super: MassFragment
struct FSmartObjectRegistrationFragment
{
public:
    TWeakObjectPtr<void> Asset; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Handle[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectRegistrationFragment, Asset) == 0, "Offset mismatch for FSmartObjectRegistrationFragment::Asset");
static_assert(offsetof(FSmartObjectRegistrationFragment, Handle) == 8, "Offset mismatch for FSmartObjectRegistrationFragment::Handle");

// /Script/MassSmartObjects.SmartObjectZoneAnnotationsInstanceData
// Kind: ScriptStruct; super: ActorComponentInstanceData
struct FSmartObjectZoneAnnotationsInstanceData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> SmartObjectAnnotations; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSmartObjectZoneAnnotationsInstanceData, SmartObjectAnnotations) == 104, "Offset mismatch for FSmartObjectZoneAnnotationsInstanceData::SmartObjectAnnotations");

// /Script/MassSmartObjects.MRUSlotsProcessor
// Kind: Class; super: MassProcessor
class UMRUSlotsProcessor
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

static_assert(offsetof(UMRUSlotsProcessor, ExecutionOrder) == 40, "Offset mismatch for UMRUSlotsProcessor::ExecutionOrder");
static_assert(offsetof(UMRUSlotsProcessor, ProcessingPhase) == 80, "Offset mismatch for UMRUSlotsProcessor::ProcessingPhase");
static_assert(offsetof(UMRUSlotsProcessor, ExecutionFlags) == 81, "Offset mismatch for UMRUSlotsProcessor::ExecutionFlags");
static_assert(offsetof(UMRUSlotsProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMRUSlotsProcessor::bAggregateRequirements");
static_assert(offsetof(UMRUSlotsProcessor, ActivationState) == 83, "Offset mismatch for UMRUSlotsProcessor::ActivationState");
static_assert(offsetof(UMRUSlotsProcessor, ExecutionPriority) == 84, "Offset mismatch for UMRUSlotsProcessor::ExecutionPriority");

// /Script/MassSmartObjects.MassActiveSmartObjectDeinitializer
// Kind: Class; super: MassSmartObjectDeinitializerBase
class UMassActiveSmartObjectDeinitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassActiveSmartObjectDeinitializer, ObservedType) == 256, "Offset mismatch for UMassActiveSmartObjectDeinitializer::ObservedType");
static_assert(offsetof(UMassActiveSmartObjectDeinitializer, ObservedTypes) == 264, "Offset mismatch for UMassActiveSmartObjectDeinitializer::ObservedTypes");
static_assert(offsetof(UMassActiveSmartObjectDeinitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassActiveSmartObjectDeinitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassSmartObjects.MassActiveSmartObjectInitializer
// Kind: Class; super: MassSmartObjectInitializerBase
class UMassActiveSmartObjectInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassActiveSmartObjectInitializer, ObservedType) == 256, "Offset mismatch for UMassActiveSmartObjectInitializer::ObservedType");
static_assert(offsetof(UMassActiveSmartObjectInitializer, ObservedTypes) == 264, "Offset mismatch for UMassActiveSmartObjectInitializer::ObservedTypes");
static_assert(offsetof(UMassActiveSmartObjectInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassActiveSmartObjectInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassSmartObjects.MassActiveSmartObjectSignalProcessor
// Kind: Class; super: MassSignalProcessorBase
class UMassActiveSmartObjectSignalProcessor
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

static_assert(offsetof(UMassActiveSmartObjectSignalProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassActiveSmartObjectSignalProcessor::ExecutionOrder");
static_assert(offsetof(UMassActiveSmartObjectSignalProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassActiveSmartObjectSignalProcessor::ProcessingPhase");
static_assert(offsetof(UMassActiveSmartObjectSignalProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassActiveSmartObjectSignalProcessor::ExecutionFlags");
static_assert(offsetof(UMassActiveSmartObjectSignalProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassActiveSmartObjectSignalProcessor::bAggregateRequirements");
static_assert(offsetof(UMassActiveSmartObjectSignalProcessor, ActivationState) == 83, "Offset mismatch for UMassActiveSmartObjectSignalProcessor::ActivationState");
static_assert(offsetof(UMassActiveSmartObjectSignalProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassActiveSmartObjectSignalProcessor::ExecutionPriority");

// /Script/MassSmartObjects.MassActorInstanceHandleDeinitializer
// Kind: Class; super: MassSmartObjectDeinitializerBase
class UMassActorInstanceHandleDeinitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassActorInstanceHandleDeinitializer, ObservedType) == 256, "Offset mismatch for UMassActorInstanceHandleDeinitializer::ObservedType");
static_assert(offsetof(UMassActorInstanceHandleDeinitializer, ObservedTypes) == 264, "Offset mismatch for UMassActorInstanceHandleDeinitializer::ObservedTypes");
static_assert(offsetof(UMassActorInstanceHandleDeinitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassActorInstanceHandleDeinitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassSmartObjects.MassActorInstanceHandleInitializer
// Kind: Class; super: MassSmartObjectInitializerBase
class UMassActorInstanceHandleInitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassActorInstanceHandleInitializer, ObservedType) == 256, "Offset mismatch for UMassActorInstanceHandleInitializer::ObservedType");
static_assert(offsetof(UMassActorInstanceHandleInitializer, ObservedTypes) == 264, "Offset mismatch for UMassActorInstanceHandleInitializer::ObservedTypes");
static_assert(offsetof(UMassActorInstanceHandleInitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassActorInstanceHandleInitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassSmartObjects.MassSmartObjectCandidatesFinderProcessor
// Kind: Class; super: MassProcessor
class UMassSmartObjectCandidatesFinderProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    float SearchExtents; // 0x0100 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassSmartObjectCandidatesFinderProcessor, SearchExtents) == 256, "Offset mismatch for UMassSmartObjectCandidatesFinderProcessor::SearchExtents");

// /Script/MassSmartObjects.MassSmartObjectDeinitializerBase
// Kind: Class; super: MassObserverProcessor
class UMassSmartObjectDeinitializerBase
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassSmartObjectDeinitializerBase, ObservedType) == 256, "Offset mismatch for UMassSmartObjectDeinitializerBase::ObservedType");
static_assert(offsetof(UMassSmartObjectDeinitializerBase, ObservedTypes) == 264, "Offset mismatch for UMassSmartObjectDeinitializerBase::ObservedTypes");
static_assert(offsetof(UMassSmartObjectDeinitializerBase, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassSmartObjectDeinitializerBase::bAutoRegisterWithObserverRegistry");

// /Script/MassSmartObjects.MassSmartObjectInitializerBase
// Kind: Class; super: MassObserverProcessor
class UMassSmartObjectInitializerBase
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassSmartObjectInitializerBase, ObservedType) == 256, "Offset mismatch for UMassSmartObjectInitializerBase::ObservedType");
static_assert(offsetof(UMassSmartObjectInitializerBase, ObservedTypes) == 264, "Offset mismatch for UMassSmartObjectInitializerBase::ObservedTypes");
static_assert(offsetof(UMassSmartObjectInitializerBase, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassSmartObjectInitializerBase::bAutoRegisterWithObserverRegistry");

// /Script/MassSmartObjects.MassSmartObjectSettings
// Kind: Class; super: MassModuleSettings
class UMassSmartObjectSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SmartObjectTag[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    float SearchExtents; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t MRUSlotsMaxCount; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseCooldownForMRUSlots; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    float MRUSlotsCooldown; // 0x0038 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMassSmartObjectSettings, SmartObjectTag) == 40, "Offset mismatch for UMassSmartObjectSettings::SmartObjectTag");
static_assert(offsetof(UMassSmartObjectSettings, SearchExtents) == 44, "Offset mismatch for UMassSmartObjectSettings::SearchExtents");
static_assert(offsetof(UMassSmartObjectSettings, MRUSlotsMaxCount) == 48, "Offset mismatch for UMassSmartObjectSettings::MRUSlotsMaxCount");
static_assert(offsetof(UMassSmartObjectSettings, bUseCooldownForMRUSlots) == 52, "Offset mismatch for UMassSmartObjectSettings::bUseCooldownForMRUSlots");
static_assert(offsetof(UMassSmartObjectSettings, MRUSlotsCooldown) == 56, "Offset mismatch for UMassSmartObjectSettings::MRUSlotsCooldown");

// /Script/MassSmartObjects.MassSmartObjectTimedBehaviorProcessor
// Kind: Class; super: MassProcessor
class UMassSmartObjectTimedBehaviorProcessor
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

static_assert(offsetof(UMassSmartObjectTimedBehaviorProcessor, ExecutionOrder) == 40, "Offset mismatch for UMassSmartObjectTimedBehaviorProcessor::ExecutionOrder");
static_assert(offsetof(UMassSmartObjectTimedBehaviorProcessor, ProcessingPhase) == 80, "Offset mismatch for UMassSmartObjectTimedBehaviorProcessor::ProcessingPhase");
static_assert(offsetof(UMassSmartObjectTimedBehaviorProcessor, ExecutionFlags) == 81, "Offset mismatch for UMassSmartObjectTimedBehaviorProcessor::ExecutionFlags");
static_assert(offsetof(UMassSmartObjectTimedBehaviorProcessor, bAggregateRequirements) == 82, "Offset mismatch for UMassSmartObjectTimedBehaviorProcessor::bAggregateRequirements");
static_assert(offsetof(UMassSmartObjectTimedBehaviorProcessor, ActivationState) == 83, "Offset mismatch for UMassSmartObjectTimedBehaviorProcessor::ActivationState");
static_assert(offsetof(UMassSmartObjectTimedBehaviorProcessor, ExecutionPriority) == 84, "Offset mismatch for UMassSmartObjectTimedBehaviorProcessor::ExecutionPriority");

// /Script/MassSmartObjects.MassSmartObjectUserFragmentDeinitializer
// Kind: Class; super: MassObserverProcessor
class UMassSmartObjectUserFragmentDeinitializer
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassSmartObjectUserFragmentDeinitializer, ObservedType) == 256, "Offset mismatch for UMassSmartObjectUserFragmentDeinitializer::ObservedType");
static_assert(offsetof(UMassSmartObjectUserFragmentDeinitializer, ObservedTypes) == 264, "Offset mismatch for UMassSmartObjectUserFragmentDeinitializer::ObservedTypes");
static_assert(offsetof(UMassSmartObjectUserFragmentDeinitializer, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassSmartObjectUserFragmentDeinitializer::bAutoRegisterWithObserverRegistry");

// /Script/MassSmartObjects.MassSmartObjectUserTrait
// Kind: Class; super: MassEntityTraitBase
class UMassSmartObjectUserTrait
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t UserTags[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMassSmartObjectUserTrait, UserTags) == 48, "Offset mismatch for UMassSmartObjectUserTrait::UserTags");

// /Script/MassSmartObjects.SmartObjectMassBehaviorDefinition
// Kind: Class; super: SmartObjectBehaviorDefinition
class USmartObjectMassBehaviorDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float UseTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USmartObjectMassBehaviorDefinition, UseTime) == 40, "Offset mismatch for USmartObjectMassBehaviorDefinition::UseTime");

// /Script/MassSmartObjects.SmartObjectZoneAnnotations
// Kind: Class; super: ZoneGraphAnnotationComponent
class USmartObjectZoneAnnotations
{
public:
    std::uint8_t Pad_0000[0x5F0]; // 0x0000
    std::uint8_t AffectedLaneTags[0x10]; // 0x05F0 (Size: 0x10, Type: StructProperty)
    TArray<void*> SmartObjectAnnotationDataArray; // 0x0600 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BehaviorTag[0x8]; // 0x0610 (Size: 0x8, Type: StructProperty)
    void* SmartObjectSubsystem; // 0x0618 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectZoneAnnotations, AffectedLaneTags) == 1520, "Offset mismatch for USmartObjectZoneAnnotations::AffectedLaneTags");
static_assert(offsetof(USmartObjectZoneAnnotations, SmartObjectAnnotationDataArray) == 1536, "Offset mismatch for USmartObjectZoneAnnotations::SmartObjectAnnotationDataArray");
static_assert(offsetof(USmartObjectZoneAnnotations, BehaviorTag) == 1552, "Offset mismatch for USmartObjectZoneAnnotations::BehaviorTag");
static_assert(offsetof(USmartObjectZoneAnnotations, SmartObjectSubsystem) == 1560, "Offset mismatch for USmartObjectZoneAnnotations::SmartObjectSubsystem");
