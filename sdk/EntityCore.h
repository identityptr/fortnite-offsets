/**
 * decamp dumper generated SDK
 * Package: /Script/EntityCore
 */
#pragma once
#include "Basic.h"

// /Script/EntityCore.ComponentData
// Kind: ScriptStruct; super: none
struct FComponentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityComponentContainer
// Kind: ScriptStruct; super: none
struct FEntityComponentContainer
{
public:
    TArray<void*> Array; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEntityComponentContainer, Array) == 0, "Offset mismatch for FEntityComponentContainer::Array");

// /Script/EntityCore.EntityCoreSystemRelativePositionComponentData
// Kind: ScriptStruct; super: ComponentData
struct FEntityCoreSystemRelativePositionComponentData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityPositionComponentData
// Kind: ScriptStruct; super: ComponentData
struct FEntityPositionComponentData
{
public:
    std::uint8_t WorldPosition[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEntityPositionComponentData, WorldPosition) == 0, "Offset mismatch for FEntityPositionComponentData::WorldPosition");

// /Script/EntityCore.EntityRotationComponentData
// Kind: ScriptStruct; super: ComponentData
struct FEntityRotationComponentData
{
public:
    std::uint8_t WorldRotation[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEntityRotationComponentData, WorldRotation) == 0, "Offset mismatch for FEntityRotationComponentData::WorldRotation");

// /Script/EntityCore.EntityScaleComponentData
// Kind: ScriptStruct; super: ComponentData
struct FEntityScaleComponentData
{
public:
    std::uint8_t WorldScale3D[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEntityScaleComponentData, WorldScale3D) == 0, "Offset mismatch for FEntityScaleComponentData::WorldScale3D");

// /Script/EntityCore.EntityTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FEntityTickFunction
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

static_assert(offsetof(FEntityTickFunction, TickGroup) == 8, "Offset mismatch for FEntityTickFunction::TickGroup");
static_assert(offsetof(FEntityTickFunction, EndTickGroup) == 9, "Offset mismatch for FEntityTickFunction::EndTickGroup");
static_assert(offsetof(FEntityTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FEntityTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FEntityTickFunction, TickInterval) == 12, "Offset mismatch for FEntityTickFunction::TickInterval");

// /Script/EntityCore.Entity
// Kind: Class; super: Object
class UEntity
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Level; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEntity, Level) == 48, "Offset mismatch for UEntity::Level");

// /Script/EntityCore.EntityComponent
// Kind: Class; super: Object
class UEntityComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityCoreDataBackedRelativePositionComponent
// Kind: Class; super: EntityDataBackedComponent
class UEntityCoreDataBackedRelativePositionComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityCoreSubsystem
// Kind: Class; super: WorldSubsystem
class UEntityCoreSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TMap<void*, void*> ComponentMap; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0058
    TArray<void*> ComponentArray; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> Entities; // 0x0080 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UEntityCoreSubsystem, ComponentMap) == 72, "Offset mismatch for UEntityCoreSubsystem::ComponentMap");
static_assert(offsetof(UEntityCoreSubsystem, ComponentArray) == 112, "Offset mismatch for UEntityCoreSubsystem::ComponentArray");
static_assert(offsetof(UEntityCoreSubsystem, Entities) == 128, "Offset mismatch for UEntityCoreSubsystem::Entities");

// /Script/EntityCore.EntityDataBackedComponent
// Kind: Class; super: EntityComponent
class UEntityDataBackedComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityEnableableComponent
// Kind: Class; super: EntityComponent
class UEntityEnableableComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t IsEnabled; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty LastIsEnabled (shared storage)
};

static_assert(offsetof(UEntityEnableableComponent, IsEnabled) == 88, "Offset mismatch for UEntityEnableableComponent::IsEnabled");

// /Script/EntityCore.EntityPositionComponent
// Kind: Class; super: EntityDataBackedComponent
class UEntityPositionComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityRotationComponent
// Kind: Class; super: EntityDataBackedComponent
class UEntityRotationComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityScaleComponent
// Kind: Class; super: EntityDataBackedComponent
class UEntityScaleComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EntityCore.EntityScriptComponent
// Kind: Class; super: EntityTickableComponent
class UEntityScriptComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t IsEnabled; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty LastIsEnabled (shared storage)
};

static_assert(offsetof(UEntityScriptComponent, IsEnabled) == 88, "Offset mismatch for UEntityScriptComponent::IsEnabled");

// /Script/EntityCore.EntityTickableComponent
// Kind: Class; super: EntityEnableableComponent
class UEntityTickableComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t IsEnabled; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty LastIsEnabled (shared storage)
};

static_assert(offsetof(UEntityTickableComponent, IsEnabled) == 88, "Offset mismatch for UEntityTickableComponent::IsEnabled");
