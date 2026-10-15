/**
 * decamp dumper generated SDK
 * Package: /Script/DeltaFileSystem
 */
#pragma once
#include "Basic.h"

// /Script/DeltaFileSystem.AddAction
// Kind: ScriptStruct; super: DeltaAction
struct FAddAction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t ActorClass[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    FString JsonStringObjectForPropertyData; // 0x0040 (Size: 0x10, Type: StrProperty)
    std::uint8_t Transform[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAddAction, ActorClass) == 32, "Offset mismatch for FAddAction::ActorClass");
static_assert(offsetof(FAddAction, JsonStringObjectForPropertyData) == 64, "Offset mismatch for FAddAction::JsonStringObjectForPropertyData");
static_assert(offsetof(FAddAction, Transform) == 80, "Offset mismatch for FAddAction::Transform");

// /Script/DeltaFileSystem.DeleteAction
// Kind: ScriptStruct; super: DeltaAction
struct FDeleteAction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    FString ActorName; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t Transform[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDeleteAction, ActorName) == 32, "Offset mismatch for FDeleteAction::ActorName");
static_assert(offsetof(FDeleteAction, Transform) == 48, "Offset mismatch for FDeleteAction::Transform");

// /Script/DeltaFileSystem.DeltaAction
// Kind: ScriptStruct; super: none
struct FDeltaAction
{
public:
    std::uint8_t ActorGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t CommitTime[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint32_t DataHash; // 0x0018 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FDeltaAction, ActorGuid) == 0, "Offset mismatch for FDeltaAction::ActorGuid");
static_assert(offsetof(FDeltaAction, CommitTime) == 16, "Offset mismatch for FDeltaAction::CommitTime");
static_assert(offsetof(FDeltaAction, DataHash) == 24, "Offset mismatch for FDeltaAction::DataHash");

// /Script/DeltaFileSystem.DeltaTrackingHandles
// Kind: ScriptStruct; super: none
struct FDeltaTrackingHandles
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DeltaFileSystem.UpdateAction
// Kind: ScriptStruct; super: DeltaAction
struct FUpdateAction
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    FString JsonStringObjectForPropertyData; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FUpdateAction, JsonStringObjectForPropertyData) == 32, "Offset mismatch for FUpdateAction::JsonStringObjectForPropertyData");

// /Script/DeltaFileSystem.DeltaComponent
// Kind: Class; super: ActorComponent
class UDeltaComponent
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

static_assert(offsetof(UDeltaComponent, PrimaryComponentTick) == 56, "Offset mismatch for UDeltaComponent::PrimaryComponentTick");
static_assert(offsetof(UDeltaComponent, ComponentTags) == 104, "Offset mismatch for UDeltaComponent::ComponentTags");
static_assert(offsetof(UDeltaComponent, AssetUserData) == 120, "Offset mismatch for UDeltaComponent::AssetUserData");
static_assert(offsetof(UDeltaComponent, UCSSerializationIndex) == 144, "Offset mismatch for UDeltaComponent::UCSSerializationIndex");
static_assert(offsetof(UDeltaComponent, bNetAddressable) == 152, "Offset mismatch for UDeltaComponent::bNetAddressable");
static_assert(offsetof(UDeltaComponent, bAutoActivate) == 154, "Offset mismatch for UDeltaComponent::bAutoActivate");
static_assert(offsetof(UDeltaComponent, bIsEditorOnly) == 155, "Offset mismatch for UDeltaComponent::bIsEditorOnly");
static_assert(offsetof(UDeltaComponent, CreationMethod) == 185, "Offset mismatch for UDeltaComponent::CreationMethod");
static_assert(offsetof(UDeltaComponent, OnComponentActivated) == 186, "Offset mismatch for UDeltaComponent::OnComponentActivated");
static_assert(offsetof(UDeltaComponent, OnComponentDeactivated) == 187, "Offset mismatch for UDeltaComponent::OnComponentDeactivated");

// /Script/DeltaFileSystem.DeltaFile
// Kind: Class; super: Interface
class UDeltaFile
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DeltaFileSystem.DeltaFileApplier
// Kind: Class; super: Interface
class UDeltaFileApplier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DeltaFileSystem.DeltaFileSaveHandler
// Kind: Class; super: Object
class UDeltaFileSaveHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DeltaFileSystem.DeltaFileSaveHandlerTestContext
// Kind: Class; super: Object
class UDeltaFileSaveHandlerTestContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SaveHandler; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDeltaFileSaveHandlerTestContext, SaveHandler) == 40, "Offset mismatch for UDeltaFileSaveHandlerTestContext::SaveHandler");

// /Script/DeltaFileSystem.DeltaFileSubsystem
// Kind: Class; super: EngineSubsystem
class UDeltaFileSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> WorldToTrackingHandles; // 0x0030 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DeltaFiles; // 0x0040 (Size: 0x10, Type: MapProperty)
    TArray<void*> ActiveAsyncDeltaFileAppliers; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultDeltaFileClass[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDeltaFileSubsystem, WorldToTrackingHandles) == 48, "Offset mismatch for UDeltaFileSubsystem::WorldToTrackingHandles");
static_assert(offsetof(UDeltaFileSubsystem, DeltaFiles) == 64, "Offset mismatch for UDeltaFileSubsystem::DeltaFiles");
static_assert(offsetof(UDeltaFileSubsystem, ActiveAsyncDeltaFileAppliers) == 80, "Offset mismatch for UDeltaFileSubsystem::ActiveAsyncDeltaFileAppliers");
static_assert(offsetof(UDeltaFileSubsystem, DefaultDeltaFileClass) == 96, "Offset mismatch for UDeltaFileSubsystem::DefaultDeltaFileClass");

// /Script/DeltaFileSystem.MapDelta
// Kind: Class; super: Object
class UMapDelta
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString PackageToApplyTo; // 0x0030 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> AddActions; // 0x0040 (Size: 0x10, Type: MapProperty)
    TArray<void*> UpdateActions; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DeleteActions; // 0x0060 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMapDelta, PackageToApplyTo) == 48, "Offset mismatch for UMapDelta::PackageToApplyTo");
static_assert(offsetof(UMapDelta, AddActions) == 64, "Offset mismatch for UMapDelta::AddActions");
static_assert(offsetof(UMapDelta, UpdateActions) == 80, "Offset mismatch for UMapDelta::UpdateActions");
static_assert(offsetof(UMapDelta, DeleteActions) == 96, "Offset mismatch for UMapDelta::DeleteActions");

// /Script/DeltaFileSystem.MapDeltaApplier
// Kind: Class; super: Object
class UMapDeltaApplier
{
public:
    std::uint8_t Opaque[1];
};
