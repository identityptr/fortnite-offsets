/**
 * decamp dumper generated SDK
 * Package: /Script/SmartObjectsModule
 */
#pragma once
#include "Basic.h"

// /Script/SmartObjectsModule.ConstSmartObjectSlotView
// Kind: ScriptStruct; super: none
struct FConstSmartObjectSlotView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.ConstSmartObjectView
// Kind: ScriptStruct; super: none
struct FConstSmartObjectView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectActorOwnerData
// Kind: ScriptStruct; super: none
struct FSmartObjectActorOwnerData
{
public:
    std::uint8_t Handle[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectActorOwnerData, Handle) == 0, "Offset mismatch for FSmartObjectActorOwnerData::Handle");

// /Script/SmartObjectsModule.SmartObjectActorUserData
// Kind: ScriptStruct; super: none
struct FSmartObjectActorUserData
{
public:
    TWeakObjectPtr<void> UserActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FSmartObjectActorUserData, UserActor) == 0, "Offset mismatch for FSmartObjectActorUserData::UserActor");

// /Script/SmartObjectsModule.SmartObjectAnnotation_SlotUserCollision
// Kind: ScriptStruct; super: SmartObjectSlotAnnotation
struct FSmartObjectAnnotation_SlotUserCollision
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bUseUserCapsuleSize; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Capsule[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectAnnotation_SlotUserCollision, bUseUserCapsuleSize) == 8, "Offset mismatch for FSmartObjectAnnotation_SlotUserCollision::bUseUserCapsuleSize");
static_assert(offsetof(FSmartObjectAnnotation_SlotUserCollision, Capsule) == 12, "Offset mismatch for FSmartObjectAnnotation_SlotUserCollision::Capsule");

// /Script/SmartObjectsModule.SmartObjectBindingCollection
// Kind: ScriptStruct; super: PropertyBindingBindingCollection
struct FSmartObjectBindingCollection
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> BindableStructs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyBindings; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSmartObjectBindingCollection, BindableStructs) == 192, "Offset mismatch for FSmartObjectBindingCollection::BindableStructs");
static_assert(offsetof(FSmartObjectBindingCollection, PropertyBindings) == 208, "Offset mismatch for FSmartObjectBindingCollection::PropertyBindings");

// /Script/SmartObjectsModule.SmartObjectClaimHandle
// Kind: ScriptStruct; super: none
struct FSmartObjectClaimHandle
{
public:
    std::uint8_t SmartObjectHandle[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SlotHandle[0x14]; // 0x0010 (Size: 0x14, Type: StructProperty)
    std::uint8_t UserHandle[0x1]; // 0x0024 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectClaimHandle, SmartObjectHandle) == 0, "Offset mismatch for FSmartObjectClaimHandle::SmartObjectHandle");
static_assert(offsetof(FSmartObjectClaimHandle, SlotHandle) == 16, "Offset mismatch for FSmartObjectClaimHandle::SlotHandle");
static_assert(offsetof(FSmartObjectClaimHandle, UserHandle) == 36, "Offset mismatch for FSmartObjectClaimHandle::UserHandle");

// /Script/SmartObjectsModule.SmartObjectCollectionEntry
// Kind: ScriptStruct; super: none
struct FSmartObjectCollectionEntry
{
public:
    std::uint8_t Tags[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t Transform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    std::uint8_t Bounds[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t Handle[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint32_t DefinitionIdx; // 0x00D8 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FSmartObjectCollectionEntry, Tags) == 0, "Offset mismatch for FSmartObjectCollectionEntry::Tags");
static_assert(offsetof(FSmartObjectCollectionEntry, Transform) == 48, "Offset mismatch for FSmartObjectCollectionEntry::Transform");
static_assert(offsetof(FSmartObjectCollectionEntry, Bounds) == 144, "Offset mismatch for FSmartObjectCollectionEntry::Bounds");
static_assert(offsetof(FSmartObjectCollectionEntry, Handle) == 200, "Offset mismatch for FSmartObjectCollectionEntry::Handle");
static_assert(offsetof(FSmartObjectCollectionEntry, DefinitionIdx) == 216, "Offset mismatch for FSmartObjectCollectionEntry::DefinitionIdx");

// /Script/SmartObjectsModule.SmartObjectComponentInstanceData
// Kind: ScriptStruct; super: ActorComponentInstanceData
struct FSmartObjectComponentInstanceData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SmartObjectDefinitionRef[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t OriginalGuid[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectComponentInstanceData, SmartObjectDefinitionRef) == 104, "Offset mismatch for FSmartObjectComponentInstanceData::SmartObjectDefinitionRef");
static_assert(offsetof(FSmartObjectComponentInstanceData, OriginalGuid) == 144, "Offset mismatch for FSmartObjectComponentInstanceData::OriginalGuid");

// /Script/SmartObjectsModule.SmartObjectContainer
// Kind: ScriptStruct; super: none
struct FSmartObjectContainer
{
public:
    std::uint8_t Bounds[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    TArray<void*> CollectionEntries; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> HandleToComponentMappings; // 0x0048 (Size: 0x10, Type: MapProperty)
    TArray<void*> DefinitionReferences; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSmartObjectContainer, Bounds) == 0, "Offset mismatch for FSmartObjectContainer::Bounds");
static_assert(offsetof(FSmartObjectContainer, CollectionEntries) == 56, "Offset mismatch for FSmartObjectContainer::CollectionEntries");
static_assert(offsetof(FSmartObjectContainer, HandleToComponentMappings) == 72, "Offset mismatch for FSmartObjectContainer::HandleToComponentMappings");
static_assert(offsetof(FSmartObjectContainer, DefinitionReferences) == 88, "Offset mismatch for FSmartObjectContainer::DefinitionReferences");
static_assert(offsetof(FSmartObjectContainer, Owner) == 104, "Offset mismatch for FSmartObjectContainer::Owner");

// /Script/SmartObjectsModule.SmartObjectDefinitionBindableStructDescriptor
// Kind: ScriptStruct; super: PropertyBindingBindableStructDescriptor
struct FSmartObjectDefinitionBindableStructDescriptor
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t DataHandle[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectDefinitionBindableStructDescriptor, DataHandle) == 24, "Offset mismatch for FSmartObjectDefinitionBindableStructDescriptor::DataHandle");

// /Script/SmartObjectsModule.SmartObjectDefinitionData
// Kind: ScriptStruct; super: none
struct FSmartObjectDefinitionData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectDefinitionDataHandle
// Kind: ScriptStruct; super: none
struct FSmartObjectDefinitionDataHandle
{
public:
    std::uint16_t SlotIndex; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t DataIndex; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FSmartObjectDefinitionDataHandle, SlotIndex) == 0, "Offset mismatch for FSmartObjectDefinitionDataHandle::SlotIndex");
static_assert(offsetof(FSmartObjectDefinitionDataHandle, DataIndex) == 2, "Offset mismatch for FSmartObjectDefinitionDataHandle::DataIndex");

// /Script/SmartObjectsModule.SmartObjectDefinitionDataProxy
// Kind: ScriptStruct; super: none
struct FSmartObjectDefinitionDataProxy
{
public:
    std::uint8_t Data[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectDefinitionDataProxy, Data) == 0, "Offset mismatch for FSmartObjectDefinitionDataProxy::Data");

// /Script/SmartObjectsModule.SmartObjectDefinitionPreviewData
// Kind: ScriptStruct; super: none
struct FSmartObjectDefinitionPreviewData
{
public:
    std::uint8_t ObjectActorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ObjectMeshPath[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t UserActorClass[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> UserValidationFilterClass; // 0x0058 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FSmartObjectDefinitionPreviewData, ObjectActorClass) == 0, "Offset mismatch for FSmartObjectDefinitionPreviewData::ObjectActorClass");
static_assert(offsetof(FSmartObjectDefinitionPreviewData, ObjectMeshPath) == 32, "Offset mismatch for FSmartObjectDefinitionPreviewData::ObjectMeshPath");
static_assert(offsetof(FSmartObjectDefinitionPreviewData, UserActorClass) == 56, "Offset mismatch for FSmartObjectDefinitionPreviewData::UserActorClass");
static_assert(offsetof(FSmartObjectDefinitionPreviewData, UserValidationFilterClass) == 88, "Offset mismatch for FSmartObjectDefinitionPreviewData::UserValidationFilterClass");

// /Script/SmartObjectsModule.SmartObjectDefinitionPropertyBinding
// Kind: ScriptStruct; super: PropertyBindingBinding
struct FSmartObjectDefinitionPropertyBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SourceDataHandle[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t TargetDataHandle[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectDefinitionPropertyBinding, SourceDataHandle) == 40, "Offset mismatch for FSmartObjectDefinitionPropertyBinding::SourceDataHandle");
static_assert(offsetof(FSmartObjectDefinitionPropertyBinding, TargetDataHandle) == 44, "Offset mismatch for FSmartObjectDefinitionPropertyBinding::TargetDataHandle");

// /Script/SmartObjectsModule.SmartObjectDefinitionReference
// Kind: ScriptStruct; super: none
struct FSmartObjectDefinitionReference
{
public:
    void* SmartObjectDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Parameters[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> PropertyOverrides; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSmartObjectDefinitionReference, SmartObjectDefinition) == 0, "Offset mismatch for FSmartObjectDefinitionReference::SmartObjectDefinition");
static_assert(offsetof(FSmartObjectDefinitionReference, Parameters) == 8, "Offset mismatch for FSmartObjectDefinitionReference::Parameters");
static_assert(offsetof(FSmartObjectDefinitionReference, PropertyOverrides) == 24, "Offset mismatch for FSmartObjectDefinitionReference::PropertyOverrides");

// /Script/SmartObjectsModule.SmartObjectEventData
// Kind: ScriptStruct; super: none
struct FSmartObjectEventData
{
public:
    std::uint8_t SmartObjectHandle[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SlotHandle[0x14]; // 0x0010 (Size: 0x14, Type: StructProperty)
    std::uint8_t Reason; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t Tag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectEventData, SmartObjectHandle) == 0, "Offset mismatch for FSmartObjectEventData::SmartObjectHandle");
static_assert(offsetof(FSmartObjectEventData, SlotHandle) == 16, "Offset mismatch for FSmartObjectEventData::SlotHandle");
static_assert(offsetof(FSmartObjectEventData, Reason) == 36, "Offset mismatch for FSmartObjectEventData::Reason");
static_assert(offsetof(FSmartObjectEventData, Tag) == 40, "Offset mismatch for FSmartObjectEventData::Tag");

// /Script/SmartObjectsModule.SmartObjectHandle
// Kind: ScriptStruct; super: none
struct FSmartObjectHandle
{
public:
    std::uint8_t Guid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectHandle, Guid) == 0, "Offset mismatch for FSmartObjectHandle::Guid");

// /Script/SmartObjectsModule.SmartObjectHashGridEntryData
// Kind: ScriptStruct; super: SmartObjectSpatialEntryData
struct FSmartObjectHashGridEntryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectOctreeEntryData
// Kind: ScriptStruct; super: SmartObjectSpatialEntryData
struct FSmartObjectOctreeEntryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectRequest
// Kind: ScriptStruct; super: none
struct FSmartObjectRequest
{
public:
    std::uint8_t QueryBox[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::uint8_t Filter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectRequest, QueryBox) == 0, "Offset mismatch for FSmartObjectRequest::QueryBox");
static_assert(offsetof(FSmartObjectRequest, Filter) == 64, "Offset mismatch for FSmartObjectRequest::Filter");

// /Script/SmartObjectsModule.SmartObjectRequestFilter
// Kind: ScriptStruct; super: none
struct FSmartObjectRequestFilter
{
public:
    std::uint8_t UserTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t ClaimPriority; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    std::uint8_t ActivityRequirements[0x48]; // 0x0028 (Size: 0x48, Type: StructProperty)
    TArray<void*> BehaviorDefinitionClasses; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldEvaluateConditions; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldIncludeClaimedSlots; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldIncludeDisabledSlots; // 0x0082 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSmartObjectRequestFilter, UserTags) == 0, "Offset mismatch for FSmartObjectRequestFilter::UserTags");
static_assert(offsetof(FSmartObjectRequestFilter, ClaimPriority) == 32, "Offset mismatch for FSmartObjectRequestFilter::ClaimPriority");
static_assert(offsetof(FSmartObjectRequestFilter, ActivityRequirements) == 40, "Offset mismatch for FSmartObjectRequestFilter::ActivityRequirements");
static_assert(offsetof(FSmartObjectRequestFilter, BehaviorDefinitionClasses) == 112, "Offset mismatch for FSmartObjectRequestFilter::BehaviorDefinitionClasses");
static_assert(offsetof(FSmartObjectRequestFilter, bShouldEvaluateConditions) == 128, "Offset mismatch for FSmartObjectRequestFilter::bShouldEvaluateConditions");
static_assert(offsetof(FSmartObjectRequestFilter, bShouldIncludeClaimedSlots) == 129, "Offset mismatch for FSmartObjectRequestFilter::bShouldIncludeClaimedSlots");
static_assert(offsetof(FSmartObjectRequestFilter, bShouldIncludeDisabledSlots) == 130, "Offset mismatch for FSmartObjectRequestFilter::bShouldIncludeDisabledSlots");

// /Script/SmartObjectsModule.SmartObjectRequestResult
// Kind: ScriptStruct; super: none
struct FSmartObjectRequestResult
{
public:
    std::uint8_t SmartObjectHandle[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SlotHandle[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectRequestResult, SmartObjectHandle) == 0, "Offset mismatch for FSmartObjectRequestResult::SmartObjectHandle");
static_assert(offsetof(FSmartObjectRequestResult, SlotHandle) == 16, "Offset mismatch for FSmartObjectRequestResult::SlotHandle");

// /Script/SmartObjectsModule.SmartObjectRuntime
// Kind: ScriptStruct; super: none
struct FSmartObjectRuntime
{
public:
    std::uint8_t PreconditionState[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    TArray<void*> Slots; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* Definition; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> OwnerComponent; // 0x0048 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0050
    std::uint8_t Transform[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    std::uint8_t Tags[0x38]; // 0x00C0 (Size: 0x38, Type: StructProperty)
    std::uint8_t RegisteredHandle[0x10]; // 0x00F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpatialEntryData[0x10]; // 0x0108 (Size: 0x10, Type: StructProperty)
    std::uint16_t DisableFlags; // 0x0118 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FSmartObjectRuntime, PreconditionState) == 0, "Offset mismatch for FSmartObjectRuntime::PreconditionState");
static_assert(offsetof(FSmartObjectRuntime, Slots) == 48, "Offset mismatch for FSmartObjectRuntime::Slots");
static_assert(offsetof(FSmartObjectRuntime, Definition) == 64, "Offset mismatch for FSmartObjectRuntime::Definition");
static_assert(offsetof(FSmartObjectRuntime, OwnerComponent) == 72, "Offset mismatch for FSmartObjectRuntime::OwnerComponent");
static_assert(offsetof(FSmartObjectRuntime, Transform) == 96, "Offset mismatch for FSmartObjectRuntime::Transform");
static_assert(offsetof(FSmartObjectRuntime, Tags) == 192, "Offset mismatch for FSmartObjectRuntime::Tags");
static_assert(offsetof(FSmartObjectRuntime, RegisteredHandle) == 248, "Offset mismatch for FSmartObjectRuntime::RegisteredHandle");
static_assert(offsetof(FSmartObjectRuntime, SpatialEntryData) == 264, "Offset mismatch for FSmartObjectRuntime::SpatialEntryData");
static_assert(offsetof(FSmartObjectRuntime, DisableFlags) == 280, "Offset mismatch for FSmartObjectRuntime::DisableFlags");

// /Script/SmartObjectsModule.SmartObjectRuntimeSlot
// Kind: ScriptStruct; super: none
struct FSmartObjectRuntimeSlot
{
public:
    std::uint8_t Offset[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Rotation[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t Tags[0x50]; // 0x0018 (Size: 0x50, Type: StructProperty)
    std::uint8_t User[0x8]; // 0x0068 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreconditionState[0x30]; // 0x0070 (Size: 0x30, Type: StructProperty)
    std::uint8_t State; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ClaimedPriority; // 0x00A1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bObjectEnabled; // 0x00A2 (Size: 0x1, Type: BoolProperty)
    // 0x00A2 BoolProperty bSlotEnabled (shared storage)
};

static_assert(offsetof(FSmartObjectRuntimeSlot, Offset) == 0, "Offset mismatch for FSmartObjectRuntimeSlot::Offset");
static_assert(offsetof(FSmartObjectRuntimeSlot, Rotation) == 12, "Offset mismatch for FSmartObjectRuntimeSlot::Rotation");
static_assert(offsetof(FSmartObjectRuntimeSlot, Tags) == 24, "Offset mismatch for FSmartObjectRuntimeSlot::Tags");
static_assert(offsetof(FSmartObjectRuntimeSlot, User) == 104, "Offset mismatch for FSmartObjectRuntimeSlot::User");
static_assert(offsetof(FSmartObjectRuntimeSlot, PreconditionState) == 112, "Offset mismatch for FSmartObjectRuntimeSlot::PreconditionState");
static_assert(offsetof(FSmartObjectRuntimeSlot, State) == 160, "Offset mismatch for FSmartObjectRuntimeSlot::State");
static_assert(offsetof(FSmartObjectRuntimeSlot, ClaimedPriority) == 161, "Offset mismatch for FSmartObjectRuntimeSlot::ClaimedPriority");
static_assert(offsetof(FSmartObjectRuntimeSlot, bObjectEnabled) == 162, "Offset mismatch for FSmartObjectRuntimeSlot::bObjectEnabled");

// /Script/SmartObjectsModule.SmartObjectSlotAnnotation
// Kind: ScriptStruct; super: SmartObjectDefinitionData
struct FSmartObjectSlotAnnotation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectSlotDefinition
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotDefinition
{
public:
    std::uint8_t Offset[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Rotation[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t UserTagFilter[0x48]; // 0x0020 (Size: 0x48, Type: StructProperty)
    std::uint8_t ActivityTags[0x20]; // 0x0068 (Size: 0x20, Type: StructProperty)
    std::uint8_t RuntimeTags[0x20]; // 0x0088 (Size: 0x20, Type: StructProperty)
    std::uint8_t SelectionPreconditions[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    TArray<void*> BehaviorDefinitions; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefinitionData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSmartObjectSlotDefinition, Offset) == 0, "Offset mismatch for FSmartObjectSlotDefinition::Offset");
static_assert(offsetof(FSmartObjectSlotDefinition, Rotation) == 12, "Offset mismatch for FSmartObjectSlotDefinition::Rotation");
static_assert(offsetof(FSmartObjectSlotDefinition, bEnabled) == 24, "Offset mismatch for FSmartObjectSlotDefinition::bEnabled");
static_assert(offsetof(FSmartObjectSlotDefinition, UserTagFilter) == 32, "Offset mismatch for FSmartObjectSlotDefinition::UserTagFilter");
static_assert(offsetof(FSmartObjectSlotDefinition, ActivityTags) == 104, "Offset mismatch for FSmartObjectSlotDefinition::ActivityTags");
static_assert(offsetof(FSmartObjectSlotDefinition, RuntimeTags) == 136, "Offset mismatch for FSmartObjectSlotDefinition::RuntimeTags");
static_assert(offsetof(FSmartObjectSlotDefinition, SelectionPreconditions) == 168, "Offset mismatch for FSmartObjectSlotDefinition::SelectionPreconditions");
static_assert(offsetof(FSmartObjectSlotDefinition, BehaviorDefinitions) == 208, "Offset mismatch for FSmartObjectSlotDefinition::BehaviorDefinitions");
static_assert(offsetof(FSmartObjectSlotDefinition, DefinitionData) == 224, "Offset mismatch for FSmartObjectSlotDefinition::DefinitionData");

// /Script/SmartObjectsModule.SmartObjectSlotEntranceAnnotation
// Kind: ScriptStruct; super: SmartObjectSlotAnnotation
struct FSmartObjectSlotEntranceAnnotation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Offset[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    std::uint8_t Rotation[0xC]; // 0x0014 (Size: 0xC, Type: StructProperty)
    std::uint8_t Tags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t bCheckTransitionTrajectory; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bIsEntry (shared storage)
    // 0x0040 BoolProperty bIsExit (shared storage)
    // 0x0040 BoolProperty bTraceGroundLocation (shared storage)
    std::uint8_t SelectionPriority; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0042
    float TrajectoryStartHeightOffset; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float TrajectorySlotHeightOffset; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float TransitionCheckRadius; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, Offset) == 8, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::Offset");
static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, Rotation) == 20, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::Rotation");
static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, Tags) == 32, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::Tags");
static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, bCheckTransitionTrajectory) == 64, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::bCheckTransitionTrajectory");
static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, SelectionPriority) == 65, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::SelectionPriority");
static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, TrajectoryStartHeightOffset) == 68, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::TrajectoryStartHeightOffset");
static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, TrajectorySlotHeightOffset) == 72, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::TrajectorySlotHeightOffset");
static_assert(offsetof(FSmartObjectSlotEntranceAnnotation, TransitionCheckRadius) == 76, "Offset mismatch for FSmartObjectSlotEntranceAnnotation::TransitionCheckRadius");

// /Script/SmartObjectsModule.SmartObjectSlotEntranceHandle
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotEntranceHandle
{
public:
    std::uint8_t SlotHandle[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectSlotEntranceHandle, SlotHandle) == 0, "Offset mismatch for FSmartObjectSlotEntranceHandle::SlotHandle");

// /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationRequest
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotEntranceLocationRequest
{
public:
    void* UserActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ValidationFilter; // 0x0008 (Size: 0x8, Type: ClassProperty)
    void* NavigationData; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UserCapsuleParams[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t SearchLocation[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t SelectMethod; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LocationType; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bProjectNavigationLocation; // 0x0042 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTraceGroundLocation; // 0x0043 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckTransitionTrajectory; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckEntranceLocationOverlap; // 0x0045 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCheckSlotLocationOverlap; // 0x0046 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseSlotLocationAsFallback; // 0x0047 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseUpAxisLockedRotation; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, UserActor) == 0, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::UserActor");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, ValidationFilter) == 8, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::ValidationFilter");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, NavigationData) == 16, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::NavigationData");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, UserCapsuleParams) == 24, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::UserCapsuleParams");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, SearchLocation) == 40, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::SearchLocation");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, SelectMethod) == 64, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::SelectMethod");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, LocationType) == 65, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::LocationType");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, bProjectNavigationLocation) == 66, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::bProjectNavigationLocation");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, bTraceGroundLocation) == 67, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::bTraceGroundLocation");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, bCheckTransitionTrajectory) == 68, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::bCheckTransitionTrajectory");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, bCheckEntranceLocationOverlap) == 69, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::bCheckEntranceLocationOverlap");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, bCheckSlotLocationOverlap) == 70, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::bCheckSlotLocationOverlap");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, bUseSlotLocationAsFallback) == 71, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::bUseSlotLocationAsFallback");
static_assert(offsetof(FSmartObjectSlotEntranceLocationRequest, bUseUpAxisLockedRotation) == 72, "Offset mismatch for FSmartObjectSlotEntranceLocationRequest::bUseUpAxisLockedRotation");

// /Script/SmartObjectsModule.SmartObjectSlotEntranceLocationResult
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotEntranceLocationResult
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t Tags[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t EntranceHandle[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsValid; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSmartObjectSlotEntranceLocationResult, Location) == 0, "Offset mismatch for FSmartObjectSlotEntranceLocationResult::Location");
static_assert(offsetof(FSmartObjectSlotEntranceLocationResult, Rotation) == 24, "Offset mismatch for FSmartObjectSlotEntranceLocationResult::Rotation");
static_assert(offsetof(FSmartObjectSlotEntranceLocationResult, Tags) == 56, "Offset mismatch for FSmartObjectSlotEntranceLocationResult::Tags");
static_assert(offsetof(FSmartObjectSlotEntranceLocationResult, EntranceHandle) == 88, "Offset mismatch for FSmartObjectSlotEntranceLocationResult::EntranceHandle");
static_assert(offsetof(FSmartObjectSlotEntranceLocationResult, bIsValid) == 112, "Offset mismatch for FSmartObjectSlotEntranceLocationResult::bIsValid");

// /Script/SmartObjectsModule.SmartObjectSlotHandle
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotHandle
{
public:
    std::uint8_t SmartObjectHandle[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t SlotIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSmartObjectSlotHandle, SmartObjectHandle) == 0, "Offset mismatch for FSmartObjectSlotHandle::SmartObjectHandle");
static_assert(offsetof(FSmartObjectSlotHandle, SlotIndex) == 16, "Offset mismatch for FSmartObjectSlotHandle::SlotIndex");

// /Script/SmartObjectsModule.SmartObjectSlotIndex
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotIndex
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSmartObjectSlotIndex, Index) == 0, "Offset mismatch for FSmartObjectSlotIndex::Index");

// /Script/SmartObjectsModule.SmartObjectSlotLinkAnnotation
// Kind: ScriptStruct; super: SmartObjectSlotAnnotation
struct FSmartObjectSlotLinkAnnotation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Tag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t LinkedSlot[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectSlotLinkAnnotation, Tag) == 8, "Offset mismatch for FSmartObjectSlotLinkAnnotation::Tag");
static_assert(offsetof(FSmartObjectSlotLinkAnnotation, LinkedSlot) == 12, "Offset mismatch for FSmartObjectSlotLinkAnnotation::LinkedSlot");

// /Script/SmartObjectsModule.SmartObjectSlotReference
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotReference
{
public:
    std::uint8_t Index; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSmartObjectSlotReference, Index) == 0, "Offset mismatch for FSmartObjectSlotReference::Index");

// /Script/SmartObjectsModule.SmartObjectSlotStateData
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotStateData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectSlotTransform
// Kind: ScriptStruct; super: SmartObjectSlotStateData
struct FSmartObjectSlotTransform
{
public:
    std::uint8_t Transform[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectSlotTransform, Transform) == 0, "Offset mismatch for FSmartObjectSlotTransform::Transform");

// /Script/SmartObjectsModule.SmartObjectSlotValidationParams
// Kind: ScriptStruct; super: none
struct FSmartObjectSlotValidationParams
{
public:
    void* NavigationFilter; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SearchExtents[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t GroundTraceParameters[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t TransitionTraceParameters[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseNavigationCapsuleSize; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0061
    std::uint8_t UserCapsule[0x1]; // 0x0064 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectSlotValidationParams, NavigationFilter) == 0, "Offset mismatch for FSmartObjectSlotValidationParams::NavigationFilter");
static_assert(offsetof(FSmartObjectSlotValidationParams, SearchExtents) == 8, "Offset mismatch for FSmartObjectSlotValidationParams::SearchExtents");
static_assert(offsetof(FSmartObjectSlotValidationParams, GroundTraceParameters) == 32, "Offset mismatch for FSmartObjectSlotValidationParams::GroundTraceParameters");
static_assert(offsetof(FSmartObjectSlotValidationParams, TransitionTraceParameters) == 64, "Offset mismatch for FSmartObjectSlotValidationParams::TransitionTraceParameters");
static_assert(offsetof(FSmartObjectSlotValidationParams, bUseNavigationCapsuleSize) == 96, "Offset mismatch for FSmartObjectSlotValidationParams::bUseNavigationCapsuleSize");
static_assert(offsetof(FSmartObjectSlotValidationParams, UserCapsule) == 100, "Offset mismatch for FSmartObjectSlotValidationParams::UserCapsule");

// /Script/SmartObjectsModule.SmartObjectSlotView
// Kind: ScriptStruct; super: ConstSmartObjectSlotView
struct FSmartObjectSlotView
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectSpatialEntryData
// Kind: ScriptStruct; super: none
struct FSmartObjectSpatialEntryData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectTraceParams
// Kind: ScriptStruct; super: none
struct FSmartObjectTraceParams
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TraceChannel; // 0x0001 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    TArray<void*> ObjectTypes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CollisionProfile[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t bTraceComplex; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSmartObjectTraceParams, Type) == 0, "Offset mismatch for FSmartObjectTraceParams::Type");
static_assert(offsetof(FSmartObjectTraceParams, TraceChannel) == 1, "Offset mismatch for FSmartObjectTraceParams::TraceChannel");
static_assert(offsetof(FSmartObjectTraceParams, ObjectTypes) == 8, "Offset mismatch for FSmartObjectTraceParams::ObjectTypes");
static_assert(offsetof(FSmartObjectTraceParams, CollisionProfile) == 24, "Offset mismatch for FSmartObjectTraceParams::CollisionProfile");
static_assert(offsetof(FSmartObjectTraceParams, bTraceComplex) == 28, "Offset mismatch for FSmartObjectTraceParams::bTraceComplex");

// /Script/SmartObjectsModule.SmartObjectUserCapsuleParams
// Kind: ScriptStruct; super: none
struct FSmartObjectUserCapsuleParams
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StepHeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSmartObjectUserCapsuleParams, Radius) == 0, "Offset mismatch for FSmartObjectUserCapsuleParams::Radius");
static_assert(offsetof(FSmartObjectUserCapsuleParams, Height) == 4, "Offset mismatch for FSmartObjectUserCapsuleParams::Height");
static_assert(offsetof(FSmartObjectUserCapsuleParams, StepHeight) == 8, "Offset mismatch for FSmartObjectUserCapsuleParams::StepHeight");

// /Script/SmartObjectsModule.SmartObjectUserHandle
// Kind: ScriptStruct; super: none
struct FSmartObjectUserHandle
{
public:
    std::uint32_t ID; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FSmartObjectUserHandle, ID) == 0, "Offset mismatch for FSmartObjectUserHandle::ID");

// /Script/SmartObjectsModule.SmartObjectWorldConditionBase
// Kind: ScriptStruct; super: WorldConditionBase
struct FSmartObjectWorldConditionBase
{
public:
    std::uint8_t Pad_0000[0xB]; // 0x0000
    std::uint8_t bInvert; // 0x000B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Operator; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t NextExpressionDepth; // 0x000D (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSmartObjectWorldConditionBase, bInvert) == 11, "Offset mismatch for FSmartObjectWorldConditionBase::bInvert");
static_assert(offsetof(FSmartObjectWorldConditionBase, Operator) == 12, "Offset mismatch for FSmartObjectWorldConditionBase::Operator");
static_assert(offsetof(FSmartObjectWorldConditionBase, NextExpressionDepth) == 13, "Offset mismatch for FSmartObjectWorldConditionBase::NextExpressionDepth");

// /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQuery
// Kind: ScriptStruct; super: SmartObjectWorldConditionBase
struct FSmartObjectWorldConditionObjectTagQuery
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t TagQuery[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectWorldConditionObjectTagQuery, TagQuery) == 32, "Offset mismatch for FSmartObjectWorldConditionObjectTagQuery::TagQuery");

// /Script/SmartObjectsModule.SmartObjectWorldConditionObjectTagQueryState
// Kind: ScriptStruct; super: none
struct FSmartObjectWorldConditionObjectTagQueryState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQuery
// Kind: ScriptStruct; super: SmartObjectWorldConditionBase
struct FSmartObjectWorldConditionSlotTagQuery
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t TagQuery[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSmartObjectWorldConditionSlotTagQuery, TagQuery) == 32, "Offset mismatch for FSmartObjectWorldConditionSlotTagQuery::TagQuery");

// /Script/SmartObjectsModule.SmartObjectWorldConditionSlotTagQueryState
// Kind: ScriptStruct; super: none
struct FSmartObjectWorldConditionSlotTagQueryState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQuery
// Kind: ScriptStruct; super: SmartObjectWorldConditionBase
struct FWorldCondition_SmartObjectActorTagQuery
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t TagQuery[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWorldCondition_SmartObjectActorTagQuery, TagQuery) == 24, "Offset mismatch for FWorldCondition_SmartObjectActorTagQuery::TagQuery");

// /Script/SmartObjectsModule.WorldCondition_SmartObjectActorTagQueryState
// Kind: ScriptStruct; super: none
struct FWorldCondition_SmartObjectActorTagQueryState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.BlackboardKeyType_SOClaimHandle
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_SOClaimHandle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Handle[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBlackboardKeyType_SOClaimHandle, Handle) == 48, "Offset mismatch for UBlackboardKeyType_SOClaimHandle::Handle");

// /Script/SmartObjectsModule.EnvQueryGenerator_SmartObjects
// Kind: Class; super: EnvQueryGenerator
class UEnvQueryGenerator_SmartObjects
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* QueryOriginContext; // 0x0050 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0058
    std::uint8_t SmartObjectRequestFilter[0xC0]; // 0x0060 (Size: 0xC0, Type: StructProperty)
    std::uint8_t QueryBoxExtent[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOnlyClaimable; // 0x0138 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnvQueryGenerator_SmartObjects, QueryOriginContext) == 80, "Offset mismatch for UEnvQueryGenerator_SmartObjects::QueryOriginContext");
static_assert(offsetof(UEnvQueryGenerator_SmartObjects, SmartObjectRequestFilter) == 96, "Offset mismatch for UEnvQueryGenerator_SmartObjects::SmartObjectRequestFilter");
static_assert(offsetof(UEnvQueryGenerator_SmartObjects, QueryBoxExtent) == 288, "Offset mismatch for UEnvQueryGenerator_SmartObjects::QueryBoxExtent");
static_assert(offsetof(UEnvQueryGenerator_SmartObjects, bOnlyClaimable) == 312, "Offset mismatch for UEnvQueryGenerator_SmartObjects::bOnlyClaimable");

// /Script/SmartObjectsModule.EnvQueryItemType_SmartObject
// Kind: Class; super: EnvQueryItemType_VectorBase
class UEnvQueryItemType_SmartObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.GenericSmartObject
// Kind: Class; super: Actor
class UGenericSmartObject
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SOComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGenericSmartObject, SOComponent) == 624, "Offset mismatch for UGenericSmartObject::SOComponent");

// /Script/SmartObjectsModule.SmartObjectBehaviorDefinition
// Kind: Class; super: Object
class USmartObjectBehaviorDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USmartObjectBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectCollection
// Kind: Class; super: Actor
class USmartObjectCollection
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t Bounds[0x38]; // 0x0270 (Size: 0x38, Type: StructProperty)
    TArray<void*> CollectionEntries; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RegisteredIdToObjectMap; // 0x02B8 (Size: 0x10, Type: MapProperty)
    TArray<void*> Definitions; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USmartObjectCollection, Bounds) == 624, "Offset mismatch for USmartObjectCollection::Bounds");
static_assert(offsetof(USmartObjectCollection, CollectionEntries) == 680, "Offset mismatch for USmartObjectCollection::CollectionEntries");
static_assert(offsetof(USmartObjectCollection, RegisteredIdToObjectMap) == 696, "Offset mismatch for USmartObjectCollection::RegisteredIdToObjectMap");
static_assert(offsetof(USmartObjectCollection, Definitions) == 712, "Offset mismatch for USmartObjectCollection::Definitions");

// /Script/SmartObjectsModule.SmartObjectComponent
// Kind: Class; super: SceneComponent
class USmartObjectComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    FMulticastInlineDelegate OnSmartObjectEvent; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0250
    std::uint8_t ComponentGuid[0x10]; // 0x0268 (Size: 0x10, Type: StructProperty)
    std::uint8_t DefinitionRef[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t RegisteredHandle[0x19]; // 0x02A0 (Size: 0x19, Type: StructProperty)
    std::uint8_t bCanBePartOfCollection; // 0x02B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x02BA
    void* CachedDefinitionAssetVariation; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectComponent, OnSmartObjectEvent) == 576, "Offset mismatch for USmartObjectComponent::OnSmartObjectEvent");
static_assert(offsetof(USmartObjectComponent, ComponentGuid) == 616, "Offset mismatch for USmartObjectComponent::ComponentGuid");
static_assert(offsetof(USmartObjectComponent, DefinitionRef) == 632, "Offset mismatch for USmartObjectComponent::DefinitionRef");
static_assert(offsetof(USmartObjectComponent, RegisteredHandle) == 672, "Offset mismatch for USmartObjectComponent::RegisteredHandle");
static_assert(offsetof(USmartObjectComponent, bCanBePartOfCollection) == 697, "Offset mismatch for USmartObjectComponent::bCanBePartOfCollection");
static_assert(offsetof(USmartObjectComponent, CachedDefinitionAssetVariation) == 704, "Offset mismatch for USmartObjectComponent::CachedDefinitionAssetVariation");

// /Script/SmartObjectsModule.SmartObjectContainerRenderingComponent
// Kind: Class; super: PrimitiveComponent
class USmartObjectContainerRenderingComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectContainerRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for USmartObjectContainerRenderingComponent::MinDrawDistance");
static_assert(offsetof(USmartObjectContainerRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for USmartObjectContainerRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(USmartObjectContainerRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for USmartObjectContainerRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(USmartObjectContainerRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for USmartObjectContainerRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(USmartObjectContainerRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for USmartObjectContainerRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(USmartObjectContainerRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for USmartObjectContainerRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(USmartObjectContainerRenderingComponent, LightmapType) == 647, "Offset mismatch for USmartObjectContainerRenderingComponent::LightmapType");
static_assert(offsetof(USmartObjectContainerRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for USmartObjectContainerRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(USmartObjectContainerRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for USmartObjectContainerRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for USmartObjectContainerRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for USmartObjectContainerRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bHoldout) == 652, "Offset mismatch for USmartObjectContainerRenderingComponent::bHoldout");
static_assert(offsetof(USmartObjectContainerRenderingComponent, CastShadow) == 653, "Offset mismatch for USmartObjectContainerRenderingComponent::CastShadow");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for USmartObjectContainerRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for USmartObjectContainerRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(USmartObjectContainerRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for USmartObjectContainerRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for USmartObjectContainerRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(USmartObjectContainerRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for USmartObjectContainerRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for USmartObjectContainerRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(USmartObjectContainerRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for USmartObjectContainerRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(USmartObjectContainerRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for USmartObjectContainerRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(USmartObjectContainerRenderingComponent, LightingChannels) == 663, "Offset mismatch for USmartObjectContainerRenderingComponent::LightingChannels");
static_assert(offsetof(USmartObjectContainerRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for USmartObjectContainerRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(USmartObjectContainerRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for USmartObjectContainerRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(USmartObjectContainerRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for USmartObjectContainerRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(USmartObjectContainerRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for USmartObjectContainerRenderingComponent::RayTracingGroupId");
static_assert(offsetof(USmartObjectContainerRenderingComponent, VisibilityId) == 672, "Offset mismatch for USmartObjectContainerRenderingComponent::VisibilityId");
static_assert(offsetof(USmartObjectContainerRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for USmartObjectContainerRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(USmartObjectContainerRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for USmartObjectContainerRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(USmartObjectContainerRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for USmartObjectContainerRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(USmartObjectContainerRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for USmartObjectContainerRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(USmartObjectContainerRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for USmartObjectContainerRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(USmartObjectContainerRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for USmartObjectContainerRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(USmartObjectContainerRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for USmartObjectContainerRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(USmartObjectContainerRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for USmartObjectContainerRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(USmartObjectContainerRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for USmartObjectContainerRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(USmartObjectContainerRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for USmartObjectContainerRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(USmartObjectContainerRenderingComponent, BoundsScale) == 840, "Offset mismatch for USmartObjectContainerRenderingComponent::BoundsScale");
static_assert(offsetof(USmartObjectContainerRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for USmartObjectContainerRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(USmartObjectContainerRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for USmartObjectContainerRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(USmartObjectContainerRenderingComponent, BodyInstance) == 896, "Offset mismatch for USmartObjectContainerRenderingComponent::BodyInstance");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for USmartObjectContainerRenderingComponent::OnComponentHit");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for USmartObjectContainerRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for USmartObjectContainerRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for USmartObjectContainerRenderingComponent::OnComponentWake");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for USmartObjectContainerRenderingComponent::OnComponentSleep");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for USmartObjectContainerRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for USmartObjectContainerRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for USmartObjectContainerRenderingComponent::OnEndCursorOver");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnClicked) == 1329, "Offset mismatch for USmartObjectContainerRenderingComponent::OnClicked");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnReleased) == 1330, "Offset mismatch for USmartObjectContainerRenderingComponent::OnReleased");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for USmartObjectContainerRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for USmartObjectContainerRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for USmartObjectContainerRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for USmartObjectContainerRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for USmartObjectContainerRenderingComponent::OnTouchBegan");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for USmartObjectContainerRenderingComponent::OnTouchEnded");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for USmartObjectContainerRenderingComponent::OnTouchEntered");
static_assert(offsetof(USmartObjectContainerRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for USmartObjectContainerRenderingComponent::OnTouchExited");
static_assert(offsetof(USmartObjectContainerRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for USmartObjectContainerRenderingComponent::LODParentPrimitive");

// /Script/SmartObjectsModule.SmartObjectDebugRenderingComponent
// Kind: Class; super: DebugDrawComponent
class USmartObjectDebugRenderingComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectDebugRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for USmartObjectDebugRenderingComponent::MinDrawDistance");
static_assert(offsetof(USmartObjectDebugRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for USmartObjectDebugRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(USmartObjectDebugRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for USmartObjectDebugRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(USmartObjectDebugRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for USmartObjectDebugRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(USmartObjectDebugRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for USmartObjectDebugRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(USmartObjectDebugRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for USmartObjectDebugRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(USmartObjectDebugRenderingComponent, LightmapType) == 647, "Offset mismatch for USmartObjectDebugRenderingComponent::LightmapType");
static_assert(offsetof(USmartObjectDebugRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for USmartObjectDebugRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(USmartObjectDebugRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for USmartObjectDebugRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for USmartObjectDebugRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for USmartObjectDebugRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bHoldout) == 652, "Offset mismatch for USmartObjectDebugRenderingComponent::bHoldout");
static_assert(offsetof(USmartObjectDebugRenderingComponent, CastShadow) == 653, "Offset mismatch for USmartObjectDebugRenderingComponent::CastShadow");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for USmartObjectDebugRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for USmartObjectDebugRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(USmartObjectDebugRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for USmartObjectDebugRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for USmartObjectDebugRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(USmartObjectDebugRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for USmartObjectDebugRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for USmartObjectDebugRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(USmartObjectDebugRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for USmartObjectDebugRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(USmartObjectDebugRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for USmartObjectDebugRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(USmartObjectDebugRenderingComponent, LightingChannels) == 663, "Offset mismatch for USmartObjectDebugRenderingComponent::LightingChannels");
static_assert(offsetof(USmartObjectDebugRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for USmartObjectDebugRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(USmartObjectDebugRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for USmartObjectDebugRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(USmartObjectDebugRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for USmartObjectDebugRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(USmartObjectDebugRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for USmartObjectDebugRenderingComponent::RayTracingGroupId");
static_assert(offsetof(USmartObjectDebugRenderingComponent, VisibilityId) == 672, "Offset mismatch for USmartObjectDebugRenderingComponent::VisibilityId");
static_assert(offsetof(USmartObjectDebugRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for USmartObjectDebugRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(USmartObjectDebugRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for USmartObjectDebugRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(USmartObjectDebugRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for USmartObjectDebugRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(USmartObjectDebugRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for USmartObjectDebugRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(USmartObjectDebugRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for USmartObjectDebugRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(USmartObjectDebugRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for USmartObjectDebugRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(USmartObjectDebugRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for USmartObjectDebugRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(USmartObjectDebugRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for USmartObjectDebugRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(USmartObjectDebugRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for USmartObjectDebugRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(USmartObjectDebugRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for USmartObjectDebugRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(USmartObjectDebugRenderingComponent, BoundsScale) == 840, "Offset mismatch for USmartObjectDebugRenderingComponent::BoundsScale");
static_assert(offsetof(USmartObjectDebugRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for USmartObjectDebugRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(USmartObjectDebugRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for USmartObjectDebugRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(USmartObjectDebugRenderingComponent, BodyInstance) == 896, "Offset mismatch for USmartObjectDebugRenderingComponent::BodyInstance");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for USmartObjectDebugRenderingComponent::OnComponentHit");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for USmartObjectDebugRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for USmartObjectDebugRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for USmartObjectDebugRenderingComponent::OnComponentWake");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for USmartObjectDebugRenderingComponent::OnComponentSleep");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for USmartObjectDebugRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for USmartObjectDebugRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for USmartObjectDebugRenderingComponent::OnEndCursorOver");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnClicked) == 1329, "Offset mismatch for USmartObjectDebugRenderingComponent::OnClicked");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnReleased) == 1330, "Offset mismatch for USmartObjectDebugRenderingComponent::OnReleased");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for USmartObjectDebugRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for USmartObjectDebugRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for USmartObjectDebugRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for USmartObjectDebugRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for USmartObjectDebugRenderingComponent::OnTouchBegan");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for USmartObjectDebugRenderingComponent::OnTouchEnded");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for USmartObjectDebugRenderingComponent::OnTouchEntered");
static_assert(offsetof(USmartObjectDebugRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for USmartObjectDebugRenderingComponent::OnTouchExited");
static_assert(offsetof(USmartObjectDebugRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for USmartObjectDebugRenderingComponent::LODParentPrimitive");

// /Script/SmartObjectsModule.SmartObjectDefinition
// Kind: Class; super: DataAsset
class USmartObjectDefinition
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Parameters[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParametersID[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t RootID[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t BindingCollection[0xE0]; // 0x0070 (Size: 0xE0, Type: StructProperty)
    TArray<void*> Slots; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefaultBehaviorDefinitions; // 0x0160 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UserTagFilter[0x48]; // 0x0170 (Size: 0x48, Type: StructProperty)
    std::uint8_t Preconditions[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActivityTags[0x20]; // 0x01E0 (Size: 0x20, Type: StructProperty)
    TArray<void*> DefinitionData; // 0x0200 (Size: 0x10, Type: ArrayProperty)
    void* WorldConditionSchemaClass; // 0x0210 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ActivityTagsMergingPolicy; // 0x0218 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UserTagsFilteringPolicy; // 0x0219 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USmartObjectDefinition, Parameters) == 64, "Offset mismatch for USmartObjectDefinition::Parameters");
static_assert(offsetof(USmartObjectDefinition, ParametersID) == 80, "Offset mismatch for USmartObjectDefinition::ParametersID");
static_assert(offsetof(USmartObjectDefinition, RootID) == 96, "Offset mismatch for USmartObjectDefinition::RootID");
static_assert(offsetof(USmartObjectDefinition, BindingCollection) == 112, "Offset mismatch for USmartObjectDefinition::BindingCollection");
static_assert(offsetof(USmartObjectDefinition, Slots) == 336, "Offset mismatch for USmartObjectDefinition::Slots");
static_assert(offsetof(USmartObjectDefinition, DefaultBehaviorDefinitions) == 352, "Offset mismatch for USmartObjectDefinition::DefaultBehaviorDefinitions");
static_assert(offsetof(USmartObjectDefinition, UserTagFilter) == 368, "Offset mismatch for USmartObjectDefinition::UserTagFilter");
static_assert(offsetof(USmartObjectDefinition, Preconditions) == 440, "Offset mismatch for USmartObjectDefinition::Preconditions");
static_assert(offsetof(USmartObjectDefinition, ActivityTags) == 480, "Offset mismatch for USmartObjectDefinition::ActivityTags");
static_assert(offsetof(USmartObjectDefinition, DefinitionData) == 512, "Offset mismatch for USmartObjectDefinition::DefinitionData");
static_assert(offsetof(USmartObjectDefinition, WorldConditionSchemaClass) == 528, "Offset mismatch for USmartObjectDefinition::WorldConditionSchemaClass");
static_assert(offsetof(USmartObjectDefinition, ActivityTagsMergingPolicy) == 536, "Offset mismatch for USmartObjectDefinition::ActivityTagsMergingPolicy");
static_assert(offsetof(USmartObjectDefinition, UserTagsFilteringPolicy) == 537, "Offset mismatch for USmartObjectDefinition::UserTagsFilteringPolicy");

// /Script/SmartObjectsModule.SmartObjectHashGrid
// Kind: Class; super: SmartObjectSpacePartition
class USmartObjectHashGrid
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectOctree
// Kind: Class; super: SmartObjectSpacePartition
class USmartObjectOctree
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectPersistentCollection
// Kind: Class; super: Actor
class USmartObjectPersistentCollection
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t SmartObjectContainer[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USmartObjectPersistentCollection, SmartObjectContainer) == 624, "Offset mismatch for USmartObjectPersistentCollection::SmartObjectContainer");

// /Script/SmartObjectsModule.SmartObjectRenderingComponent
// Kind: Class; super: PrimitiveComponent
class USmartObjectRenderingComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for USmartObjectRenderingComponent::MinDrawDistance");
static_assert(offsetof(USmartObjectRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for USmartObjectRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(USmartObjectRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for USmartObjectRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(USmartObjectRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for USmartObjectRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(USmartObjectRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for USmartObjectRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(USmartObjectRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for USmartObjectRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(USmartObjectRenderingComponent, LightmapType) == 647, "Offset mismatch for USmartObjectRenderingComponent::LightmapType");
static_assert(offsetof(USmartObjectRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for USmartObjectRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(USmartObjectRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for USmartObjectRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(USmartObjectRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for USmartObjectRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(USmartObjectRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for USmartObjectRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(USmartObjectRenderingComponent, bHoldout) == 652, "Offset mismatch for USmartObjectRenderingComponent::bHoldout");
static_assert(offsetof(USmartObjectRenderingComponent, CastShadow) == 653, "Offset mismatch for USmartObjectRenderingComponent::CastShadow");
static_assert(offsetof(USmartObjectRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for USmartObjectRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(USmartObjectRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for USmartObjectRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(USmartObjectRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for USmartObjectRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(USmartObjectRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for USmartObjectRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(USmartObjectRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for USmartObjectRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(USmartObjectRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for USmartObjectRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(USmartObjectRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for USmartObjectRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(USmartObjectRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for USmartObjectRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(USmartObjectRenderingComponent, LightingChannels) == 663, "Offset mismatch for USmartObjectRenderingComponent::LightingChannels");
static_assert(offsetof(USmartObjectRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for USmartObjectRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(USmartObjectRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for USmartObjectRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(USmartObjectRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for USmartObjectRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(USmartObjectRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for USmartObjectRenderingComponent::RayTracingGroupId");
static_assert(offsetof(USmartObjectRenderingComponent, VisibilityId) == 672, "Offset mismatch for USmartObjectRenderingComponent::VisibilityId");
static_assert(offsetof(USmartObjectRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for USmartObjectRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(USmartObjectRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for USmartObjectRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(USmartObjectRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for USmartObjectRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(USmartObjectRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for USmartObjectRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(USmartObjectRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for USmartObjectRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(USmartObjectRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for USmartObjectRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(USmartObjectRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for USmartObjectRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(USmartObjectRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for USmartObjectRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(USmartObjectRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for USmartObjectRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(USmartObjectRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for USmartObjectRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(USmartObjectRenderingComponent, BoundsScale) == 840, "Offset mismatch for USmartObjectRenderingComponent::BoundsScale");
static_assert(offsetof(USmartObjectRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for USmartObjectRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(USmartObjectRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for USmartObjectRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(USmartObjectRenderingComponent, BodyInstance) == 896, "Offset mismatch for USmartObjectRenderingComponent::BodyInstance");
static_assert(offsetof(USmartObjectRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for USmartObjectRenderingComponent::OnComponentHit");
static_assert(offsetof(USmartObjectRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for USmartObjectRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(USmartObjectRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for USmartObjectRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(USmartObjectRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for USmartObjectRenderingComponent::OnComponentWake");
static_assert(offsetof(USmartObjectRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for USmartObjectRenderingComponent::OnComponentSleep");
static_assert(offsetof(USmartObjectRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for USmartObjectRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(USmartObjectRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for USmartObjectRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(USmartObjectRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for USmartObjectRenderingComponent::OnEndCursorOver");
static_assert(offsetof(USmartObjectRenderingComponent, OnClicked) == 1329, "Offset mismatch for USmartObjectRenderingComponent::OnClicked");
static_assert(offsetof(USmartObjectRenderingComponent, OnReleased) == 1330, "Offset mismatch for USmartObjectRenderingComponent::OnReleased");
static_assert(offsetof(USmartObjectRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for USmartObjectRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(USmartObjectRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for USmartObjectRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(USmartObjectRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for USmartObjectRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(USmartObjectRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for USmartObjectRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(USmartObjectRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for USmartObjectRenderingComponent::OnTouchBegan");
static_assert(offsetof(USmartObjectRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for USmartObjectRenderingComponent::OnTouchEnded");
static_assert(offsetof(USmartObjectRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for USmartObjectRenderingComponent::OnTouchEntered");
static_assert(offsetof(USmartObjectRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for USmartObjectRenderingComponent::OnTouchExited");
static_assert(offsetof(USmartObjectRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for USmartObjectRenderingComponent::LODParentPrimitive");

// /Script/SmartObjectsModule.SmartObjectSettings
// Kind: Class; super: DeveloperSettings
class USmartObjectSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultUserTagsFilteringPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultActivityTagsMergingPolicy; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    void* DefaultWorldConditionSchemaClass; // 0x0038 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bShouldExcludePreConditionsOnDedicatedClient; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USmartObjectSettings, DefaultUserTagsFilteringPolicy) == 48, "Offset mismatch for USmartObjectSettings::DefaultUserTagsFilteringPolicy");
static_assert(offsetof(USmartObjectSettings, DefaultActivityTagsMergingPolicy) == 49, "Offset mismatch for USmartObjectSettings::DefaultActivityTagsMergingPolicy");
static_assert(offsetof(USmartObjectSettings, DefaultWorldConditionSchemaClass) == 56, "Offset mismatch for USmartObjectSettings::DefaultWorldConditionSchemaClass");
static_assert(offsetof(USmartObjectSettings, bShouldExcludePreConditionsOnDedicatedClient) == 64, "Offset mismatch for USmartObjectSettings::bShouldExcludePreConditionsOnDedicatedClient");

// /Script/SmartObjectsModule.SmartObjectSimpleQueryTest
// Kind: Class; super: SmartObjectTest
class USmartObjectSimpleQueryTest
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Request[0x100]; // 0x0030 (Size: 0x100, Type: StructProperty)
    TArray<void*> Results; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USmartObjectSimpleQueryTest, Request) == 48, "Offset mismatch for USmartObjectSimpleQueryTest::Request");
static_assert(offsetof(USmartObjectSimpleQueryTest, Results) == 304, "Offset mismatch for USmartObjectSimpleQueryTest::Results");

// /Script/SmartObjectsModule.SmartObjectSlotValidationFilter
// Kind: Class; super: Object
class USmartObjectSlotValidationFilter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EntryParameters[0x70]; // 0x0028 (Size: 0x70, Type: StructProperty)
    std::uint8_t bUseEntryParametersForExit; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    std::uint8_t ExitParameters[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USmartObjectSlotValidationFilter, EntryParameters) == 40, "Offset mismatch for USmartObjectSlotValidationFilter::EntryParameters");
static_assert(offsetof(USmartObjectSlotValidationFilter, bUseEntryParametersForExit) == 152, "Offset mismatch for USmartObjectSlotValidationFilter::bUseEntryParametersForExit");
static_assert(offsetof(USmartObjectSlotValidationFilter, ExitParameters) == 160, "Offset mismatch for USmartObjectSlotValidationFilter::ExitParameters");

// /Script/SmartObjectsModule.SmartObjectSpacePartition
// Kind: Class; super: Object
class USmartObjectSpacePartition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SmartObjectsModule.SmartObjectSubsystem
// Kind: Class; super: WorldSubsystem
class USmartObjectSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SpacePartitionClassName[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    void* SpacePartitionClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    void* SpacePartition; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* RenderingActor; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SmartObjectContainer[0x80]; // 0x0068 (Size: 0x80, Type: StructProperty)
    TMap<void*, void*> RuntimeSmartObjects; // 0x00E8 (Size: 0x10, Type: MapProperty)
    TArray<void*> RegisteredSOComponents; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingSmartObjectRegistration; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USmartObjectSubsystem, SpacePartitionClassName) == 56, "Offset mismatch for USmartObjectSubsystem::SpacePartitionClassName");
static_assert(offsetof(USmartObjectSubsystem, SpacePartitionClass) == 80, "Offset mismatch for USmartObjectSubsystem::SpacePartitionClass");
static_assert(offsetof(USmartObjectSubsystem, SpacePartition) == 88, "Offset mismatch for USmartObjectSubsystem::SpacePartition");
static_assert(offsetof(USmartObjectSubsystem, RenderingActor) == 96, "Offset mismatch for USmartObjectSubsystem::RenderingActor");
static_assert(offsetof(USmartObjectSubsystem, SmartObjectContainer) == 104, "Offset mismatch for USmartObjectSubsystem::SmartObjectContainer");
static_assert(offsetof(USmartObjectSubsystem, RuntimeSmartObjects) == 232, "Offset mismatch for USmartObjectSubsystem::RuntimeSmartObjects");
static_assert(offsetof(USmartObjectSubsystem, RegisteredSOComponents) == 248, "Offset mismatch for USmartObjectSubsystem::RegisteredSOComponents");
static_assert(offsetof(USmartObjectSubsystem, PendingSmartObjectRegistration) == 264, "Offset mismatch for USmartObjectSubsystem::PendingSmartObjectRegistration");

// /Script/SmartObjectsModule.SmartObjectSubsystemRenderingActor
// Kind: Class; super: Actor
class USmartObjectSubsystemRenderingActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* RenderingComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectSubsystemRenderingActor, RenderingComponent) == 624, "Offset mismatch for USmartObjectSubsystemRenderingActor::RenderingComponent");

// /Script/SmartObjectsModule.SmartObjectSubsystemRenderingComponent
// Kind: Class; super: SmartObjectDebugRenderingComponent
class USmartObjectSubsystemRenderingComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectSubsystemRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for USmartObjectSubsystemRenderingComponent::MinDrawDistance");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for USmartObjectSubsystemRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for USmartObjectSubsystemRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for USmartObjectSubsystemRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for USmartObjectSubsystemRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for USmartObjectSubsystemRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, LightmapType) == 647, "Offset mismatch for USmartObjectSubsystemRenderingComponent::LightmapType");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for USmartObjectSubsystemRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for USmartObjectSubsystemRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bHoldout) == 652, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bHoldout");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, CastShadow) == 653, "Offset mismatch for USmartObjectSubsystemRenderingComponent::CastShadow");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for USmartObjectSubsystemRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for USmartObjectSubsystemRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for USmartObjectSubsystemRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for USmartObjectSubsystemRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, LightingChannels) == 663, "Offset mismatch for USmartObjectSubsystemRenderingComponent::LightingChannels");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for USmartObjectSubsystemRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for USmartObjectSubsystemRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for USmartObjectSubsystemRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for USmartObjectSubsystemRenderingComponent::RayTracingGroupId");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, VisibilityId) == 672, "Offset mismatch for USmartObjectSubsystemRenderingComponent::VisibilityId");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for USmartObjectSubsystemRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for USmartObjectSubsystemRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for USmartObjectSubsystemRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for USmartObjectSubsystemRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for USmartObjectSubsystemRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for USmartObjectSubsystemRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for USmartObjectSubsystemRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for USmartObjectSubsystemRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for USmartObjectSubsystemRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for USmartObjectSubsystemRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, BoundsScale) == 840, "Offset mismatch for USmartObjectSubsystemRenderingComponent::BoundsScale");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for USmartObjectSubsystemRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for USmartObjectSubsystemRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, BodyInstance) == 896, "Offset mismatch for USmartObjectSubsystemRenderingComponent::BodyInstance");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnComponentHit");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnComponentWake");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnComponentSleep");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnEndCursorOver");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnClicked) == 1329, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnClicked");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnReleased) == 1330, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnReleased");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnTouchBegan");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnTouchEnded");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnTouchEntered");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for USmartObjectSubsystemRenderingComponent::OnTouchExited");
static_assert(offsetof(USmartObjectSubsystemRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for USmartObjectSubsystemRenderingComponent::LODParentPrimitive");

// /Script/SmartObjectsModule.SmartObjectTest
// Kind: Class; super: Object
class USmartObjectTest
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SmartObjectTestingActor; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectTest, SmartObjectTestingActor) == 40, "Offset mismatch for USmartObjectTest::SmartObjectTestingActor");

// /Script/SmartObjectsModule.SmartObjectTestRenderingComponent
// Kind: Class; super: SmartObjectDebugRenderingComponent
class USmartObjectTestRenderingComponent
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    float MinDrawDistance; // 0x0278 (Size: 0x4, Type: FloatProperty)
    float LDMaxDrawDistance; // 0x027C (Size: 0x4, Type: FloatProperty)
    float CachedMaxDrawDistance; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DepthPriorityGroup; // 0x0284 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ViewOwnerDepthPriorityGroup; // 0x0285 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IndirectLightingCacheQuality; // 0x0286 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightmapType; // 0x0287 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HLODBatchingPolicy; // 0x0288 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShadowCacheInvalidationBehavior; // 0x0289 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAlwaysCreatePhysicsState; // 0x028A (Size: 0x1, Type: BoolProperty)
    // 0x028A BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x028A BoolProperty bGenerateOverlapEvents (shared storage)
    // 0x028A BoolProperty bIsActorTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bIsValidTextureStreamingBuiltData (shared storage)
    // 0x028A BoolProperty bMultiBodyOverlap (shared storage)
    // 0x028A BoolProperty bNeverDistanceCull (shared storage)
    std::uint8_t bAllowCullDistanceVolume; // 0x028B (Size: 0x1, Type: BoolProperty)
    // 0x028B BoolProperty bReturnMaterialOnMove (shared storage)
    // 0x028B BoolProperty bTraceComplexOnMove (shared storage)
    // 0x028B BoolProperty bUseViewOwnerDepthPriorityGroup (shared storage)
    // 0x028B BoolProperty bVisibleInRayTracing (shared storage)
    // 0x028B BoolProperty bVisibleInRealTimeSkyCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflectionCaptures (shared storage)
    // 0x028B BoolProperty bVisibleInReflections (shared storage)
    std::uint8_t bHoldout; // 0x028C (Size: 0x1, Type: BoolProperty)
    // 0x028C BoolProperty bOnlyOwnerSee (shared storage)
    // 0x028C BoolProperty bOwnerNoSee (shared storage)
    // 0x028C BoolProperty bReceivesDecals (shared storage)
    // 0x028C BoolProperty bRenderInDepthPass (shared storage)
    // 0x028C BoolProperty bRenderInMainPass (shared storage)
    // 0x028C BoolProperty bTreatAsBackgroundForOcclusion (shared storage)
    // 0x028C BoolProperty bUseAsOccluder (shared storage)
    std::uint8_t CastShadow; // 0x028D (Size: 0x1, Type: BoolProperty)
    // 0x028D BoolProperty bAffectDynamicIndirectLighting (shared storage)
    // 0x028D BoolProperty bAffectIndirectLightingWhileHidden (shared storage)
    // 0x028D BoolProperty bEmissiveLightSource (shared storage)
    // 0x028D BoolProperty bForceMipStreaming (shared storage)
    // 0x028D BoolProperty bHasPerInstanceHitProxies (shared storage)
    // 0x028D BoolProperty bSelectable (shared storage)
    // 0x028D BoolProperty bWantsEditorEffects (shared storage)
    std::uint8_t bAffectDistanceFieldLighting; // 0x028E (Size: 0x1, Type: BoolProperty)
    // 0x028E BoolProperty bCastContactShadow (shared storage)
    // 0x028E BoolProperty bCastDynamicShadow (shared storage)
    // 0x028E BoolProperty bCastFarShadow (shared storage)
    // 0x028E BoolProperty bCastInsetShadow (shared storage)
    // 0x028E BoolProperty bCastStaticShadow (shared storage)
    // 0x028E BoolProperty bCastVolumetricTranslucentShadow (shared storage)
    // 0x028E BoolProperty bSelfShadowOnly (shared storage)
    std::uint8_t bCastCinematicShadow; // 0x028F (Size: 0x1, Type: BoolProperty)
    // 0x028F BoolProperty bCastHiddenShadow (shared storage)
    // 0x028F BoolProperty bCastShadowAsTwoSided (shared storage)
    // 0x028F BoolProperty bExcludeFromLightAttachmentGroup (shared storage)
    // 0x028F BoolProperty bLightAsIfStatic (shared storage)
    // 0x028F BoolProperty bLightAttachmentsAsGroup (shared storage)
    // 0x028F BoolProperty bReceiveMobileCSMShadows (shared storage)
    // 0x028F BoolProperty bSingleSampleShadowFromStationaryLights (shared storage)
    std::uint8_t AlwaysLoadOnClient; // 0x0290 (Size: 0x1, Type: BoolProperty)
    // 0x0290 BoolProperty AlwaysLoadOnServer (shared storage)
    // 0x0290 BoolProperty bApplyImpulseOnDamage (shared storage)
    // 0x0290 BoolProperty bFillCollisionUnderneathForNavmesh (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialForce (shared storage)
    // 0x0290 BoolProperty bIgnoreRadialImpulse (shared storage)
    // 0x0290 BoolProperty bRasterizeAsFilledConvexVolume (shared storage)
    // 0x0290 BoolProperty bReplicatePhysicsToAutonomousProxy (shared storage)
    std::uint8_t bHiddenInSceneCapture; // 0x0291 (Size: 0x1, Type: BoolProperty)
    // 0x0291 BoolProperty bIsBeingMovedByEditor (shared storage)
    // 0x0291 BoolProperty bLumenHeightfield (shared storage)
    // 0x0291 BoolProperty bRayTracingFarField (shared storage)
    // 0x0291 BoolProperty bRenderCustomDepth (shared storage)
    // 0x0291 BoolProperty bUseEditorCompositing (shared storage)
    // 0x0291 BoolProperty bVisibleInSceneCaptureOnly (shared storage)
    std::uint8_t FirstPersonPrimitiveType; // 0x0292 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasNoStreamableTextures; // 0x0293 (Size: 0x1, Type: BoolProperty)
    // 0x0293 BoolProperty bStaticWhenNotMoveable (shared storage)
    std::uint8_t bHasCustomNavigableGeometry; // 0x0294 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0295
    std::uint8_t CanCharacterStepUpOn; // 0x0296 (Size: 0x1, Type: ByteProperty)
    std::uint8_t LightingChannels[0x1]; // 0x0297 (Size: 0x1, Type: StructProperty)
    std::uint8_t RayTracingGroupCullingPriority; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ExcludeFromHLODLevels; // 0x029A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x1]; // 0x029B
    std::int32_t RayTracingGroupId; // 0x029C (Size: 0x4, Type: IntProperty)
    std::int32_t VisibilityId; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CustomDepthStencilValue; // 0x02A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CustomPrimitiveData[0x10]; // 0x02A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t CustomPrimitiveDataInternal[0x50]; // 0x02B8 (Size: 0x50, Type: StructProperty)
    std::int32_t TranslucencySortPriority; // 0x0308 (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x030C (Size: 0x4, Type: FloatProperty)
    TArray<void*> RuntimeVirtualTextures; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    std::int8_t VirtualTextureLodBias; // 0x0320 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureCullMips; // 0x0321 (Size: 0x1, Type: Int8Property)
    std::int8_t VirtualTextureMinCoverage; // 0x0322 (Size: 0x1, Type: Int8Property)
    std::uint8_t VirtualTextureRenderPassType; // 0x0323 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x24]; // 0x0324
    float BoundsScale; // 0x0348 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x034C
    TArray<void*> MoveIgnoreActors; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MoveIgnoreComponents; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0370
    std::uint8_t BodyInstance[0x1A8]; // 0x0380 (Size: 0x1A8, Type: StructProperty)
    std::uint8_t OnComponentHit[0x1]; // 0x0528 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentBeginOverlap[0x1]; // 0x0529 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentEndOverlap[0x1]; // 0x052A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentWake[0x1]; // 0x052B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentSleep[0x2]; // 0x052C (Size: 0x2, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnComponentPhysicsStateChanged[0x1]; // 0x052E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x052F (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0530 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0531 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0532 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0533 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x0534 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x0535 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x0536 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchBegan[0x1]; // 0x0537 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEnded[0x1]; // 0x0538 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTouchEntered[0x1]; // 0x0539 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnTouchExited; // 0x053A (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0006[0xE]; // 0x054A
    void* LODParentPrimitive; // 0x0558 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmartObjectTestRenderingComponent, MinDrawDistance) == 632, "Offset mismatch for USmartObjectTestRenderingComponent::MinDrawDistance");
static_assert(offsetof(USmartObjectTestRenderingComponent, LDMaxDrawDistance) == 636, "Offset mismatch for USmartObjectTestRenderingComponent::LDMaxDrawDistance");
static_assert(offsetof(USmartObjectTestRenderingComponent, CachedMaxDrawDistance) == 640, "Offset mismatch for USmartObjectTestRenderingComponent::CachedMaxDrawDistance");
static_assert(offsetof(USmartObjectTestRenderingComponent, DepthPriorityGroup) == 644, "Offset mismatch for USmartObjectTestRenderingComponent::DepthPriorityGroup");
static_assert(offsetof(USmartObjectTestRenderingComponent, ViewOwnerDepthPriorityGroup) == 645, "Offset mismatch for USmartObjectTestRenderingComponent::ViewOwnerDepthPriorityGroup");
static_assert(offsetof(USmartObjectTestRenderingComponent, IndirectLightingCacheQuality) == 646, "Offset mismatch for USmartObjectTestRenderingComponent::IndirectLightingCacheQuality");
static_assert(offsetof(USmartObjectTestRenderingComponent, LightmapType) == 647, "Offset mismatch for USmartObjectTestRenderingComponent::LightmapType");
static_assert(offsetof(USmartObjectTestRenderingComponent, HLODBatchingPolicy) == 648, "Offset mismatch for USmartObjectTestRenderingComponent::HLODBatchingPolicy");
static_assert(offsetof(USmartObjectTestRenderingComponent, ShadowCacheInvalidationBehavior) == 649, "Offset mismatch for USmartObjectTestRenderingComponent::ShadowCacheInvalidationBehavior");
static_assert(offsetof(USmartObjectTestRenderingComponent, bAlwaysCreatePhysicsState) == 650, "Offset mismatch for USmartObjectTestRenderingComponent::bAlwaysCreatePhysicsState");
static_assert(offsetof(USmartObjectTestRenderingComponent, bAllowCullDistanceVolume) == 651, "Offset mismatch for USmartObjectTestRenderingComponent::bAllowCullDistanceVolume");
static_assert(offsetof(USmartObjectTestRenderingComponent, bHoldout) == 652, "Offset mismatch for USmartObjectTestRenderingComponent::bHoldout");
static_assert(offsetof(USmartObjectTestRenderingComponent, CastShadow) == 653, "Offset mismatch for USmartObjectTestRenderingComponent::CastShadow");
static_assert(offsetof(USmartObjectTestRenderingComponent, bAffectDistanceFieldLighting) == 654, "Offset mismatch for USmartObjectTestRenderingComponent::bAffectDistanceFieldLighting");
static_assert(offsetof(USmartObjectTestRenderingComponent, bCastCinematicShadow) == 655, "Offset mismatch for USmartObjectTestRenderingComponent::bCastCinematicShadow");
static_assert(offsetof(USmartObjectTestRenderingComponent, AlwaysLoadOnClient) == 656, "Offset mismatch for USmartObjectTestRenderingComponent::AlwaysLoadOnClient");
static_assert(offsetof(USmartObjectTestRenderingComponent, bHiddenInSceneCapture) == 657, "Offset mismatch for USmartObjectTestRenderingComponent::bHiddenInSceneCapture");
static_assert(offsetof(USmartObjectTestRenderingComponent, FirstPersonPrimitiveType) == 658, "Offset mismatch for USmartObjectTestRenderingComponent::FirstPersonPrimitiveType");
static_assert(offsetof(USmartObjectTestRenderingComponent, bHasNoStreamableTextures) == 659, "Offset mismatch for USmartObjectTestRenderingComponent::bHasNoStreamableTextures");
static_assert(offsetof(USmartObjectTestRenderingComponent, bHasCustomNavigableGeometry) == 660, "Offset mismatch for USmartObjectTestRenderingComponent::bHasCustomNavigableGeometry");
static_assert(offsetof(USmartObjectTestRenderingComponent, CanCharacterStepUpOn) == 662, "Offset mismatch for USmartObjectTestRenderingComponent::CanCharacterStepUpOn");
static_assert(offsetof(USmartObjectTestRenderingComponent, LightingChannels) == 663, "Offset mismatch for USmartObjectTestRenderingComponent::LightingChannels");
static_assert(offsetof(USmartObjectTestRenderingComponent, RayTracingGroupCullingPriority) == 664, "Offset mismatch for USmartObjectTestRenderingComponent::RayTracingGroupCullingPriority");
static_assert(offsetof(USmartObjectTestRenderingComponent, CustomDepthStencilWriteMask) == 665, "Offset mismatch for USmartObjectTestRenderingComponent::CustomDepthStencilWriteMask");
static_assert(offsetof(USmartObjectTestRenderingComponent, ExcludeFromHLODLevels) == 666, "Offset mismatch for USmartObjectTestRenderingComponent::ExcludeFromHLODLevels");
static_assert(offsetof(USmartObjectTestRenderingComponent, RayTracingGroupId) == 668, "Offset mismatch for USmartObjectTestRenderingComponent::RayTracingGroupId");
static_assert(offsetof(USmartObjectTestRenderingComponent, VisibilityId) == 672, "Offset mismatch for USmartObjectTestRenderingComponent::VisibilityId");
static_assert(offsetof(USmartObjectTestRenderingComponent, CustomDepthStencilValue) == 676, "Offset mismatch for USmartObjectTestRenderingComponent::CustomDepthStencilValue");
static_assert(offsetof(USmartObjectTestRenderingComponent, CustomPrimitiveData) == 680, "Offset mismatch for USmartObjectTestRenderingComponent::CustomPrimitiveData");
static_assert(offsetof(USmartObjectTestRenderingComponent, CustomPrimitiveDataInternal) == 696, "Offset mismatch for USmartObjectTestRenderingComponent::CustomPrimitiveDataInternal");
static_assert(offsetof(USmartObjectTestRenderingComponent, TranslucencySortPriority) == 776, "Offset mismatch for USmartObjectTestRenderingComponent::TranslucencySortPriority");
static_assert(offsetof(USmartObjectTestRenderingComponent, TranslucencySortDistanceOffset) == 780, "Offset mismatch for USmartObjectTestRenderingComponent::TranslucencySortDistanceOffset");
static_assert(offsetof(USmartObjectTestRenderingComponent, RuntimeVirtualTextures) == 784, "Offset mismatch for USmartObjectTestRenderingComponent::RuntimeVirtualTextures");
static_assert(offsetof(USmartObjectTestRenderingComponent, VirtualTextureLodBias) == 800, "Offset mismatch for USmartObjectTestRenderingComponent::VirtualTextureLodBias");
static_assert(offsetof(USmartObjectTestRenderingComponent, VirtualTextureCullMips) == 801, "Offset mismatch for USmartObjectTestRenderingComponent::VirtualTextureCullMips");
static_assert(offsetof(USmartObjectTestRenderingComponent, VirtualTextureMinCoverage) == 802, "Offset mismatch for USmartObjectTestRenderingComponent::VirtualTextureMinCoverage");
static_assert(offsetof(USmartObjectTestRenderingComponent, VirtualTextureRenderPassType) == 803, "Offset mismatch for USmartObjectTestRenderingComponent::VirtualTextureRenderPassType");
static_assert(offsetof(USmartObjectTestRenderingComponent, BoundsScale) == 840, "Offset mismatch for USmartObjectTestRenderingComponent::BoundsScale");
static_assert(offsetof(USmartObjectTestRenderingComponent, MoveIgnoreActors) == 848, "Offset mismatch for USmartObjectTestRenderingComponent::MoveIgnoreActors");
static_assert(offsetof(USmartObjectTestRenderingComponent, MoveIgnoreComponents) == 864, "Offset mismatch for USmartObjectTestRenderingComponent::MoveIgnoreComponents");
static_assert(offsetof(USmartObjectTestRenderingComponent, BodyInstance) == 896, "Offset mismatch for USmartObjectTestRenderingComponent::BodyInstance");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnComponentHit) == 1320, "Offset mismatch for USmartObjectTestRenderingComponent::OnComponentHit");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnComponentBeginOverlap) == 1321, "Offset mismatch for USmartObjectTestRenderingComponent::OnComponentBeginOverlap");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnComponentEndOverlap) == 1322, "Offset mismatch for USmartObjectTestRenderingComponent::OnComponentEndOverlap");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnComponentWake) == 1323, "Offset mismatch for USmartObjectTestRenderingComponent::OnComponentWake");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnComponentSleep) == 1324, "Offset mismatch for USmartObjectTestRenderingComponent::OnComponentSleep");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnComponentPhysicsStateChanged) == 1326, "Offset mismatch for USmartObjectTestRenderingComponent::OnComponentPhysicsStateChanged");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnBeginCursorOver) == 1327, "Offset mismatch for USmartObjectTestRenderingComponent::OnBeginCursorOver");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnEndCursorOver) == 1328, "Offset mismatch for USmartObjectTestRenderingComponent::OnEndCursorOver");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnClicked) == 1329, "Offset mismatch for USmartObjectTestRenderingComponent::OnClicked");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnReleased) == 1330, "Offset mismatch for USmartObjectTestRenderingComponent::OnReleased");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnInputTouchBegin) == 1331, "Offset mismatch for USmartObjectTestRenderingComponent::OnInputTouchBegin");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnInputTouchEnd) == 1332, "Offset mismatch for USmartObjectTestRenderingComponent::OnInputTouchEnd");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnInputTouchEnter) == 1333, "Offset mismatch for USmartObjectTestRenderingComponent::OnInputTouchEnter");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnInputTouchLeave) == 1334, "Offset mismatch for USmartObjectTestRenderingComponent::OnInputTouchLeave");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnTouchBegan) == 1335, "Offset mismatch for USmartObjectTestRenderingComponent::OnTouchBegan");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnTouchEnded) == 1336, "Offset mismatch for USmartObjectTestRenderingComponent::OnTouchEnded");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnTouchEntered) == 1337, "Offset mismatch for USmartObjectTestRenderingComponent::OnTouchEntered");
static_assert(offsetof(USmartObjectTestRenderingComponent, OnTouchExited) == 1338, "Offset mismatch for USmartObjectTestRenderingComponent::OnTouchExited");
static_assert(offsetof(USmartObjectTestRenderingComponent, LODParentPrimitive) == 1368, "Offset mismatch for USmartObjectTestRenderingComponent::LODParentPrimitive");

// /Script/SmartObjectsModule.SmartObjectTestingActor
// Kind: Class; super: Actor
class USmartObjectTestingActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> Tests; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    void* RenderingComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* SmartObjectSubsystem; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRunTestsEachFrame; // 0x0290 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USmartObjectTestingActor, Tests) == 624, "Offset mismatch for USmartObjectTestingActor::Tests");
static_assert(offsetof(USmartObjectTestingActor, RenderingComponent) == 640, "Offset mismatch for USmartObjectTestingActor::RenderingComponent");
static_assert(offsetof(USmartObjectTestingActor, SmartObjectSubsystem) == 648, "Offset mismatch for USmartObjectTestingActor::SmartObjectSubsystem");
static_assert(offsetof(USmartObjectTestingActor, bRunTestsEachFrame) == 656, "Offset mismatch for USmartObjectTestingActor::bRunTestsEachFrame");

// /Script/SmartObjectsModule.SmartObjectUserComponent
// Kind: Class; super: ActorComponent
class USmartObjectUserComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ValidationFilter; // 0x00C0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(USmartObjectUserComponent, ValidationFilter) == 192, "Offset mismatch for USmartObjectUserComponent::ValidationFilter");

// /Script/SmartObjectsModule.SmartObjectWorldConditionSchema
// Kind: Class; super: WorldConditionSchema
class USmartObjectWorldConditionSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextDataDescs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USmartObjectWorldConditionSchema, ContextDataDescs) == 40, "Offset mismatch for USmartObjectWorldConditionSchema::ContextDataDescs");
