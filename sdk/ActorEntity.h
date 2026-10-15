/**
 * decamp dumper generated SDK
 * Package: /Script/ActorEntity
 */
#pragma once
#include "Basic.h"

// /Script/ActorEntity.ActorEntityInteropRules
// Kind: ScriptStruct; super: none
struct FActorEntityInteropRules
{
public:
    std::uint8_t ActorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ActorEntityConsidered; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    TArray<void*> AllowedEntityComponents; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SubEntitiesConsidered; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> SubEntityRules; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableEntityReplication; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableRootEntityTransformReplication; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0052
    TArray<void*> ClientActorComponents; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FActorEntityInteropRules, ActorClass) == 0, "Offset mismatch for FActorEntityInteropRules::ActorClass");
static_assert(offsetof(FActorEntityInteropRules, ActorEntityConsidered) == 32, "Offset mismatch for FActorEntityInteropRules::ActorEntityConsidered");
static_assert(offsetof(FActorEntityInteropRules, AllowedEntityComponents) == 40, "Offset mismatch for FActorEntityInteropRules::AllowedEntityComponents");
static_assert(offsetof(FActorEntityInteropRules, SubEntitiesConsidered) == 56, "Offset mismatch for FActorEntityInteropRules::SubEntitiesConsidered");
static_assert(offsetof(FActorEntityInteropRules, SubEntityRules) == 64, "Offset mismatch for FActorEntityInteropRules::SubEntityRules");
static_assert(offsetof(FActorEntityInteropRules, bEnableEntityReplication) == 80, "Offset mismatch for FActorEntityInteropRules::bEnableEntityReplication");
static_assert(offsetof(FActorEntityInteropRules, bDisableRootEntityTransformReplication) == 81, "Offset mismatch for FActorEntityInteropRules::bDisableRootEntityTransformReplication");
static_assert(offsetof(FActorEntityInteropRules, ClientActorComponents) == 88, "Offset mismatch for FActorEntityInteropRules::ClientActorComponents");

// /Script/ActorEntity.ActorEntityMappingArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FActorEntityMappingArray
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> Entities; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FActorEntityMappingArray, Entities) == 96, "Offset mismatch for FActorEntityMappingArray::Entities");

// /Script/ActorEntity.ActorEntityMappingArrayItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FActorEntityMappingArrayItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Entity; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* Object; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActorEntityMappingArrayItem, Entity) == 16, "Offset mismatch for FActorEntityMappingArrayItem::Entity");
static_assert(offsetof(FActorEntityMappingArrayItem, Object) == 24, "Offset mismatch for FActorEntityMappingArrayItem::Object");

// /Script/ActorEntity.SubEntityInteropRules
// Kind: ScriptStruct; super: none
struct FSubEntityInteropRules
{
public:
    std::uint8_t ComponentName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Considered; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TArray<void*> AllowedEntityComponents; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSubEntityInteropRules, ComponentName) == 0, "Offset mismatch for FSubEntityInteropRules::ComponentName");
static_assert(offsetof(FSubEntityInteropRules, Considered) == 4, "Offset mismatch for FSubEntityInteropRules::Considered");
static_assert(offsetof(FSubEntityInteropRules, AllowedEntityComponents) == 8, "Offset mismatch for FSubEntityInteropRules::AllowedEntityComponents");

// /Script/ActorEntity.ActorEntityComponent
// Kind: Class; super: ActorComponent
class UActorEntityComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t EntityMappingArray[0x70]; // 0x00C0 (Size: 0x70, Type: StructProperty)
    std::uint8_t bRemoveEntityOnDestruction; // 0x0130 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UActorEntityComponent, EntityMappingArray) == 192, "Offset mismatch for UActorEntityComponent::EntityMappingArray");
static_assert(offsetof(UActorEntityComponent, bRemoveEntityOnDestruction) == 304, "Offset mismatch for UActorEntityComponent::bRemoveEntityOnDestruction");

// /Script/ActorEntity.ActorEntityPrefabComponent
// Kind: Class; super: ActorComponent
class UActorEntityPrefabComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TSoftClassPtr<void> EntityClass; // 0x00C0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UActorEntityPrefabComponent, EntityClass) == 192, "Offset mismatch for UActorEntityPrefabComponent::EntityClass");

// /Script/ActorEntity.ActorEntitySubsystem
// Kind: Class; super: WorldSubsystem
class UActorEntitySubsystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* PhysicsQueryConvertor; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UActorEntitySubsystem, PhysicsQueryConvertor) == 96, "Offset mismatch for UActorEntitySubsystem::PhysicsQueryConvertor");

// /Script/ActorEntity.PhysicsComponentBridgeHelper
// Kind: Class; super: Object
class UPhysicsComponentBridgeHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ActorEntity.PhysicsQueryConvertor
// Kind: Class; super: Object
class UPhysicsQueryConvertor
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ActorEntitySubsystem; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPhysicsQueryConvertor, ActorEntitySubsystem) == 48, "Offset mismatch for UPhysicsQueryConvertor::ActorEntitySubsystem");

// /Script/ActorEntity.PossessableComponentBridgeHelper
// Kind: Class; super: Object
class UPossessableComponentBridgeHelper
{
public:
    std::uint8_t Opaque[1];
};
