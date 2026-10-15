/**
 * decamp dumper generated SDK
 * Package: /Script/POIDiscoveryRuntime
 */
#pragma once
#include "Basic.h"

// /Script/POIDiscoveryRuntime.POIDiscoveryPersistenceData
// Kind: ScriptStruct; super: none
struct FPOIDiscoveryPersistenceData
{
public:
    TMap<void*, void*> MapStates; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FPOIDiscoveryPersistenceData, MapStates) == 0, "Offset mismatch for FPOIDiscoveryPersistenceData::MapStates");

// /Script/POIDiscoveryRuntime.POIMapDiscoveryState
// Kind: ScriptStruct; super: none
struct FPOIMapDiscoveryState
{
public:
    std::uint8_t DiscoveredPOIs[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t bMigrationComplete; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bMilestoneGranted; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0012
    std::int32_t Version; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPOIMapDiscoveryState, DiscoveredPOIs) == 0, "Offset mismatch for FPOIMapDiscoveryState::DiscoveredPOIs");
static_assert(offsetof(FPOIMapDiscoveryState, bMigrationComplete) == 16, "Offset mismatch for FPOIMapDiscoveryState::bMigrationComplete");
static_assert(offsetof(FPOIMapDiscoveryState, bMilestoneGranted) == 17, "Offset mismatch for FPOIMapDiscoveryState::bMilestoneGranted");
static_assert(offsetof(FPOIMapDiscoveryState, Version) == 20, "Offset mismatch for FPOIMapDiscoveryState::Version");

// /Script/POIDiscoveryRuntime.FortControllerComponent_POIDiscoveryFrontend
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_POIDiscoveryFrontend
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

static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, PrimaryComponentTick) == 56, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::PrimaryComponentTick");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, ComponentTags) == 104, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::ComponentTags");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, AssetUserData) == 120, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::AssetUserData");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, UCSSerializationIndex) == 144, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::UCSSerializationIndex");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, bNetAddressable) == 152, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::bNetAddressable");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, bAutoActivate) == 154, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::bAutoActivate");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, bIsEditorOnly) == 155, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::bIsEditorOnly");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, CreationMethod) == 185, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::CreationMethod");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, OnComponentActivated) == 186, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::OnComponentActivated");
static_assert(offsetof(UFortControllerComponent_POIDiscoveryFrontend, OnComponentDeactivated) == 187, "Offset mismatch for UFortControllerComponent_POIDiscoveryFrontend::OnComponentDeactivated");

// /Script/POIDiscoveryRuntime.FortPlayerStateComponent_POIDiscovery
// Kind: Class; super: FortPlayerStateComponent_SaveFrameworkPersistence
class UFortPlayerStateComponent_POIDiscovery
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t NamedPOIAccoladeTag[0x4]; // 0x0190 (Size: 0x4, Type: StructProperty)
    std::uint8_t LandmarkAccoladeTag[0x4]; // 0x0194 (Size: 0x4, Type: StructProperty)
    std::uint8_t MilestoneAccoladeTag[0x4]; // 0x0198 (Size: 0x4, Type: StructProperty)
    std::int32_t MilestoneThreshold; // 0x019C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortPlayerStateComponent_POIDiscovery, NamedPOIAccoladeTag) == 400, "Offset mismatch for UFortPlayerStateComponent_POIDiscovery::NamedPOIAccoladeTag");
static_assert(offsetof(UFortPlayerStateComponent_POIDiscovery, LandmarkAccoladeTag) == 404, "Offset mismatch for UFortPlayerStateComponent_POIDiscovery::LandmarkAccoladeTag");
static_assert(offsetof(UFortPlayerStateComponent_POIDiscovery, MilestoneAccoladeTag) == 408, "Offset mismatch for UFortPlayerStateComponent_POIDiscovery::MilestoneAccoladeTag");
static_assert(offsetof(UFortPlayerStateComponent_POIDiscovery, MilestoneThreshold) == 412, "Offset mismatch for UFortPlayerStateComponent_POIDiscovery::MilestoneThreshold");
