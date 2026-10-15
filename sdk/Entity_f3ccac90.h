/**
 * decamp dumper generated SDK
 * Package: /Script/Entity
 */
#pragma once
#include "Basic.h"

// /Script/Entity.ActorOriginData
// Kind: ScriptStruct; super: none
struct FActorOriginData
{
public:
    TWeakObjectPtr<void> WeakActor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FActorOriginData, WeakActor) == 0, "Offset mismatch for FActorOriginData::WeakActor");

// /Script/Entity.EntityPrefabMetaData
// Kind: ScriptStruct; super: none
struct FEntityPrefabMetaData
{
public:
    std::uint8_t bIsConcrete; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ReadAccess[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConstructAccess[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEntityPrefabMetaData, bIsConcrete) == 0, "Offset mismatch for FEntityPrefabMetaData::bIsConcrete");
static_assert(offsetof(FEntityPrefabMetaData, ReadAccess) == 8, "Offset mismatch for FEntityPrefabMetaData::ReadAccess");
static_assert(offsetof(FEntityPrefabMetaData, ConstructAccess) == 32, "Offset mismatch for FEntityPrefabMetaData::ConstructAccess");

// /Script/Entity.FastEntityComponentArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FFastEntityComponentArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Components; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFastEntityComponentArray, Components) == 72, "Offset mismatch for FFastEntityComponentArray::Components");

// /Script/Entity.FastEntityComponentArrayItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FFastEntityComponentArrayItem
{
public:
    std::uint8_t Pad_0000[0xC]; // 0x0000
    FName ComponentName; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFastEntityComponentArrayItem, ComponentName) == 12, "Offset mismatch for FFastEntityComponentArrayItem::ComponentName");

// /Script/Entity.ReplicatedDataRegistry
// Kind: ScriptStruct; super: none
struct FReplicatedDataRegistry
{
public:
    TArray<void*> ChildrenLists; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FReplicatedDataRegistry, ChildrenLists) == 0, "Offset mismatch for FReplicatedDataRegistry::ChildrenLists");

// /Script/Entity.SubObjectEntry
// Kind: ScriptStruct; super: none
struct FSubObjectEntry
{
public:
    void* SubObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSubObjectEntry, SubObject) == 0, "Offset mismatch for FSubObjectEntry::SubObject");

// /Script/Entity.SubObjectsOfParent
// Kind: ScriptStruct; super: none
struct FSubObjectsOfParent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Children; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubObjectsOfParent, Children) == 8, "Offset mismatch for FSubObjectsOfParent::Children");

// /Script/Entity.VerseEntityFragment
// Kind: ScriptStruct; super: MassFragment
struct FVerseEntityFragment
{
public:
    TWeakObjectPtr<void> Entity; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FVerseEntityFragment, Entity) == 0, "Offset mismatch for FVerseEntityFragment::Entity");

// /Script/Entity.WorldExecutionPhase
// Kind: ScriptStruct; super: TickFunction
struct FWorldExecutionPhase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWorldExecutionPhase, TickGroup) == 8, "Offset mismatch for FWorldExecutionPhase::TickGroup");
static_assert(offsetof(FWorldExecutionPhase, EndTickGroup) == 9, "Offset mismatch for FWorldExecutionPhase::EndTickGroup");
static_assert(offsetof(FWorldExecutionPhase, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FWorldExecutionPhase::bAllowTickOnDedicatedServer");
static_assert(offsetof(FWorldExecutionPhase, TickInterval) == 12, "Offset mismatch for FWorldExecutionPhase::TickInterval");

// /Script/Entity.BaseComponent
// Kind: Class; super: BaseVerseSubobject
class UBaseComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t VerseAccessibility[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBaseComponent, VerseAccessibility) == 40, "Offset mismatch for UBaseComponent::VerseAccessibility");

// /Script/Entity.BaseEntity
// Kind: Class; super: BaseVerseSubobject
class UBaseEntity
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Components; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OwnedEntities; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBaseEntity, Components) == 72, "Offset mismatch for UBaseEntity::Components");
static_assert(offsetof(UBaseEntity, OwnedEntities) == 88, "Offset mismatch for UBaseEntity::OwnedEntities");

// /Script/Entity.EntityContainerInterface
// Kind: Class; super: Interface
class UEntityContainerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Entity.EntityPlayspaceRegistryBase
// Kind: Class; super: WorldSubsystem
class UEntityPlayspaceRegistryBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Entity.EntityPrefab
// Kind: Class; super: Blueprint
class UEntityPrefab
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ReadAccess[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConstructAccess[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEntityPrefab, ReadAccess) == 168, "Offset mismatch for UEntityPrefab::ReadAccess");
static_assert(offsetof(UEntityPrefab, ConstructAccess) == 192, "Offset mismatch for UEntityPrefab::ConstructAccess");

// /Script/Entity.EntityRegistryBase
// Kind: Class; super: WorldSubsystem
class UEntityRegistryBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Entity.EntityReplicationSupport
// Kind: Class; super: Interface
class UEntityReplicationSupport
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Entity.EntityReplicator
// Kind: Class; super: Actor
class UEntityReplicator
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t bIsNetInitialized; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    std::uint8_t EntityPtr[0x20]; // 0x0280 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EntityOwnerPtr[0x20]; // 0x02A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EntityServerPath[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t EntityOwnerServerPath[0x18]; // 0x02D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t NonDynamicEntityComponents[0x58]; // 0x02F0 (Size: 0x58, Type: StructProperty)
    void* EntityPendingInitialization; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EntityComponentsPendingInitialization; // 0x0350 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEntityReplicator, bIsNetInitialized) == 632, "Offset mismatch for UEntityReplicator::bIsNetInitialized");
static_assert(offsetof(UEntityReplicator, EntityPtr) == 640, "Offset mismatch for UEntityReplicator::EntityPtr");
static_assert(offsetof(UEntityReplicator, EntityOwnerPtr) == 672, "Offset mismatch for UEntityReplicator::EntityOwnerPtr");
static_assert(offsetof(UEntityReplicator, EntityServerPath) == 704, "Offset mismatch for UEntityReplicator::EntityServerPath");
static_assert(offsetof(UEntityReplicator, EntityOwnerServerPath) == 728, "Offset mismatch for UEntityReplicator::EntityOwnerServerPath");
static_assert(offsetof(UEntityReplicator, NonDynamicEntityComponents) == 752, "Offset mismatch for UEntityReplicator::NonDynamicEntityComponents");
static_assert(offsetof(UEntityReplicator, EntityPendingInitialization) == 840, "Offset mismatch for UEntityReplicator::EntityPendingInitialization");
static_assert(offsetof(UEntityReplicator, EntityComponentsPendingInitialization) == 848, "Offset mismatch for UEntityReplicator::EntityComponentsPendingInitialization");

// /Script/Entity.EntityReplicator_AlwaysRelevant
// Kind: Class; super: EntityReplicator
class UEntityReplicator_AlwaysRelevant
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    std::uint8_t bIsNetInitialized; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    std::uint8_t EntityPtr[0x20]; // 0x0280 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EntityOwnerPtr[0x20]; // 0x02A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t EntityServerPath[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t EntityOwnerServerPath[0x18]; // 0x02D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t NonDynamicEntityComponents[0x58]; // 0x02F0 (Size: 0x58, Type: StructProperty)
    void* EntityPendingInitialization; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EntityComponentsPendingInitialization; // 0x0350 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEntityReplicator_AlwaysRelevant, bIsNetInitialized) == 632, "Offset mismatch for UEntityReplicator_AlwaysRelevant::bIsNetInitialized");
static_assert(offsetof(UEntityReplicator_AlwaysRelevant, EntityPtr) == 640, "Offset mismatch for UEntityReplicator_AlwaysRelevant::EntityPtr");
static_assert(offsetof(UEntityReplicator_AlwaysRelevant, EntityOwnerPtr) == 672, "Offset mismatch for UEntityReplicator_AlwaysRelevant::EntityOwnerPtr");
static_assert(offsetof(UEntityReplicator_AlwaysRelevant, EntityServerPath) == 704, "Offset mismatch for UEntityReplicator_AlwaysRelevant::EntityServerPath");
static_assert(offsetof(UEntityReplicator_AlwaysRelevant, EntityOwnerServerPath) == 728, "Offset mismatch for UEntityReplicator_AlwaysRelevant::EntityOwnerServerPath");
static_assert(offsetof(UEntityReplicator_AlwaysRelevant, NonDynamicEntityComponents) == 752, "Offset mismatch for UEntityReplicator_AlwaysRelevant::NonDynamicEntityComponents");
static_assert(offsetof(UEntityReplicator_AlwaysRelevant, EntityPendingInitialization) == 840, "Offset mismatch for UEntityReplicator_AlwaysRelevant::EntityPendingInitialization");
static_assert(offsetof(UEntityReplicator_AlwaysRelevant, EntityComponentsPendingInitialization) == 848, "Offset mismatch for UEntityReplicator_AlwaysRelevant::EntityComponentsPendingInitialization");

// /Script/Entity.EntityVerseAnalyticsSubsystem
// Kind: Class; super: WorldSubsystem
class UEntityVerseAnalyticsSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> VerseEntityPrefabCountMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::int32_t CurrentEntityCount; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalEntityCount; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxEntityCount; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0054
    std::uint8_t CrashContextUpdateHandle[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEntityVerseAnalyticsSubsystem, VerseEntityPrefabCountMap) == 56, "Offset mismatch for UEntityVerseAnalyticsSubsystem::VerseEntityPrefabCountMap");
static_assert(offsetof(UEntityVerseAnalyticsSubsystem, CurrentEntityCount) == 72, "Offset mismatch for UEntityVerseAnalyticsSubsystem::CurrentEntityCount");
static_assert(offsetof(UEntityVerseAnalyticsSubsystem, TotalEntityCount) == 76, "Offset mismatch for UEntityVerseAnalyticsSubsystem::TotalEntityCount");
static_assert(offsetof(UEntityVerseAnalyticsSubsystem, MaxEntityCount) == 80, "Offset mismatch for UEntityVerseAnalyticsSubsystem::MaxEntityCount");
static_assert(offsetof(UEntityVerseAnalyticsSubsystem, CrashContextUpdateHandle) == 88, "Offset mismatch for UEntityVerseAnalyticsSubsystem::CrashContextUpdateHandle");

// /Script/Entity.EntityVerseEngineSubsystem
// Kind: Class; super: EngineSubsystem
class UEntityVerseEngineSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Entity.MassVerseEntityAdderProcessor
// Kind: Class; super: MassObserverProcessor
class UMassVerseEntityAdderProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassVerseEntityAdderProcessor, ObservedType) == 256, "Offset mismatch for UMassVerseEntityAdderProcessor::ObservedType");
static_assert(offsetof(UMassVerseEntityAdderProcessor, ObservedTypes) == 264, "Offset mismatch for UMassVerseEntityAdderProcessor::ObservedTypes");
static_assert(offsetof(UMassVerseEntityAdderProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassVerseEntityAdderProcessor::bAutoRegisterWithObserverRegistry");

// /Script/Entity.MassVerseEntityRemoverProcessor
// Kind: Class; super: MassObserverProcessor
class UMassVerseEntityRemoverProcessor
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    void* ObservedType; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservedTypes; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAutoRegisterWithObserverRegistry; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMassVerseEntityRemoverProcessor, ObservedType) == 256, "Offset mismatch for UMassVerseEntityRemoverProcessor::ObservedType");
static_assert(offsetof(UMassVerseEntityRemoverProcessor, ObservedTypes) == 264, "Offset mismatch for UMassVerseEntityRemoverProcessor::ObservedTypes");
static_assert(offsetof(UMassVerseEntityRemoverProcessor, bAutoRegisterWithObserverRegistry) == 280, "Offset mismatch for UMassVerseEntityRemoverProcessor::bAutoRegisterWithObserverRegistry");

// /Script/Entity.NetComponentFactory
// Kind: Class; super: NetSubObjectFactory
class UNetComponentFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Entity.NetEntityFactory
// Kind: Class; super: NetObjectFactory
class UNetEntityFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Entity.SimulationEntity
// Kind: Class; super: Actor
class USimulationEntity
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SimulationEntity; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* SavedEntityClass; // 0x0278 (Size: 0x8, Type: ClassProperty)
    void* SavedEntityComponentClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    TArray<void*> DefaultComponentClassNames; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefaultComponentClasses; // 0x0298 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USimulationEntity, SimulationEntity) == 624, "Offset mismatch for USimulationEntity::SimulationEntity");
static_assert(offsetof(USimulationEntity, SavedEntityClass) == 632, "Offset mismatch for USimulationEntity::SavedEntityClass");
static_assert(offsetof(USimulationEntity, SavedEntityComponentClass) == 640, "Offset mismatch for USimulationEntity::SavedEntityComponentClass");
static_assert(offsetof(USimulationEntity, DefaultComponentClassNames) == 648, "Offset mismatch for USimulationEntity::DefaultComponentClassNames");
static_assert(offsetof(USimulationEntity, DefaultComponentClasses) == 664, "Offset mismatch for USimulationEntity::DefaultComponentClasses");

// /Script/Entity.SimulationEntitySubsystem
// Kind: Class; super: WorldSubsystem
class USimulationEntitySubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SimulationEntityActor; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USimulationEntitySubsystem, SimulationEntityActor) == 56, "Offset mismatch for USimulationEntitySubsystem::SimulationEntityActor");

// /Script/Entity.SimulationLifetimeComponent
// Kind: Class; super: ActorComponent
class USimulationLifetimeComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(USimulationLifetimeComponent, PrimaryComponentTick) == 56, "Offset mismatch for USimulationLifetimeComponent::PrimaryComponentTick");
static_assert(offsetof(USimulationLifetimeComponent, ComponentTags) == 104, "Offset mismatch for USimulationLifetimeComponent::ComponentTags");
static_assert(offsetof(USimulationLifetimeComponent, AssetUserData) == 120, "Offset mismatch for USimulationLifetimeComponent::AssetUserData");
static_assert(offsetof(USimulationLifetimeComponent, UCSSerializationIndex) == 144, "Offset mismatch for USimulationLifetimeComponent::UCSSerializationIndex");
static_assert(offsetof(USimulationLifetimeComponent, bNetAddressable) == 152, "Offset mismatch for USimulationLifetimeComponent::bNetAddressable");
static_assert(offsetof(USimulationLifetimeComponent, bAutoActivate) == 154, "Offset mismatch for USimulationLifetimeComponent::bAutoActivate");
static_assert(offsetof(USimulationLifetimeComponent, bIsEditorOnly) == 155, "Offset mismatch for USimulationLifetimeComponent::bIsEditorOnly");
static_assert(offsetof(USimulationLifetimeComponent, CreationMethod) == 185, "Offset mismatch for USimulationLifetimeComponent::CreationMethod");
static_assert(offsetof(USimulationLifetimeComponent, OnComponentActivated) == 186, "Offset mismatch for USimulationLifetimeComponent::OnComponentActivated");
static_assert(offsetof(USimulationLifetimeComponent, OnComponentDeactivated) == 187, "Offset mismatch for USimulationLifetimeComponent::OnComponentDeactivated");

// /Script/Entity.WorldExecutionSubsystem
// Kind: Class; super: WorldSubsystem
class UWorldExecutionSubsystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* ExecutionSystem; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWorldExecutionSubsystem, ExecutionSystem) == 64, "Offset mismatch for UWorldExecutionSubsystem::ExecutionSystem");
