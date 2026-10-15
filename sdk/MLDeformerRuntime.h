/**
 * decamp dumper generated SDK
 * Package: /Script/MLDeformerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MLDeformerRuntime.FortMLDeformerComponent
// Kind: Class; super: MLDeformerComponent
class UFortMLDeformerComponent
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* RequestedMLDeformerAsset; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* RequestedMeshDeformerAsset; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortMLDeformerComponent, RequestedMLDeformerAsset) == 248, "Offset mismatch for UFortMLDeformerComponent::RequestedMLDeformerAsset");
static_assert(offsetof(UFortMLDeformerComponent, RequestedMeshDeformerAsset) == 256, "Offset mismatch for UFortMLDeformerComponent::RequestedMeshDeformerAsset");

// /Script/MLDeformerRuntime.MLDeformerAssetMapping
// Kind: Class; super: PrimaryDataAsset
class UMLDeformerAssetMapping
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CharacterItemDefinitionToMLDeformerAssetMappingKeys; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CharacterItemDefinitionToMLDeformerAssetMappingValues; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CharacterPartToMLDeformerAssetMappingKeys; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CharacterPartToMLDeformerAssetMappingValues; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> MLDeformerToMeshDeformerAssetMap; // 0x0068 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CharacterItemDefinitionToMLDeformerAssetMap; // 0x0078 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CharacterPartToMLDeformerAssetMap; // 0x0088 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMLDeformerAssetMapping, CharacterItemDefinitionToMLDeformerAssetMappingKeys) == 40, "Offset mismatch for UMLDeformerAssetMapping::CharacterItemDefinitionToMLDeformerAssetMappingKeys");
static_assert(offsetof(UMLDeformerAssetMapping, CharacterItemDefinitionToMLDeformerAssetMappingValues) == 56, "Offset mismatch for UMLDeformerAssetMapping::CharacterItemDefinitionToMLDeformerAssetMappingValues");
static_assert(offsetof(UMLDeformerAssetMapping, CharacterPartToMLDeformerAssetMappingKeys) == 72, "Offset mismatch for UMLDeformerAssetMapping::CharacterPartToMLDeformerAssetMappingKeys");
static_assert(offsetof(UMLDeformerAssetMapping, CharacterPartToMLDeformerAssetMappingValues) == 88, "Offset mismatch for UMLDeformerAssetMapping::CharacterPartToMLDeformerAssetMappingValues");
static_assert(offsetof(UMLDeformerAssetMapping, MLDeformerToMeshDeformerAssetMap) == 104, "Offset mismatch for UMLDeformerAssetMapping::MLDeformerToMeshDeformerAssetMap");
static_assert(offsetof(UMLDeformerAssetMapping, CharacterItemDefinitionToMLDeformerAssetMap) == 120, "Offset mismatch for UMLDeformerAssetMapping::CharacterItemDefinitionToMLDeformerAssetMap");
static_assert(offsetof(UMLDeformerAssetMapping, CharacterPartToMLDeformerAssetMap) == 136, "Offset mismatch for UMLDeformerAssetMapping::CharacterPartToMLDeformerAssetMap");

// /Script/MLDeformerRuntime.MLDeformerComponentManager
// Kind: Class; super: ActorComponent
class UMLDeformerComponentManager
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

static_assert(offsetof(UMLDeformerComponentManager, PrimaryComponentTick) == 56, "Offset mismatch for UMLDeformerComponentManager::PrimaryComponentTick");
static_assert(offsetof(UMLDeformerComponentManager, ComponentTags) == 104, "Offset mismatch for UMLDeformerComponentManager::ComponentTags");
static_assert(offsetof(UMLDeformerComponentManager, AssetUserData) == 120, "Offset mismatch for UMLDeformerComponentManager::AssetUserData");
static_assert(offsetof(UMLDeformerComponentManager, UCSSerializationIndex) == 144, "Offset mismatch for UMLDeformerComponentManager::UCSSerializationIndex");
static_assert(offsetof(UMLDeformerComponentManager, bNetAddressable) == 152, "Offset mismatch for UMLDeformerComponentManager::bNetAddressable");
static_assert(offsetof(UMLDeformerComponentManager, bAutoActivate) == 154, "Offset mismatch for UMLDeformerComponentManager::bAutoActivate");
static_assert(offsetof(UMLDeformerComponentManager, bIsEditorOnly) == 155, "Offset mismatch for UMLDeformerComponentManager::bIsEditorOnly");
static_assert(offsetof(UMLDeformerComponentManager, CreationMethod) == 185, "Offset mismatch for UMLDeformerComponentManager::CreationMethod");
static_assert(offsetof(UMLDeformerComponentManager, OnComponentActivated) == 186, "Offset mismatch for UMLDeformerComponentManager::OnComponentActivated");
static_assert(offsetof(UMLDeformerComponentManager, OnComponentDeactivated) == 187, "Offset mismatch for UMLDeformerComponentManager::OnComponentDeactivated");

// /Script/MLDeformerRuntime.MLDeformerGameFeatureData
// Kind: Class; super: FortGameFeatureData
class UMLDeformerGameFeatureData
{
public:
    std::uint8_t Pad_0000[0x448]; // 0x0000
    std::uint8_t bDisableWhenOwnerIsNotViewTarget; // 0x0448 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldRampUpWeightWhenEnabled; // 0x0449 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x044A
    float WeightIncreasePerSecond; // 0x044C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMLDeformerGameFeatureData, bDisableWhenOwnerIsNotViewTarget) == 1096, "Offset mismatch for UMLDeformerGameFeatureData::bDisableWhenOwnerIsNotViewTarget");
static_assert(offsetof(UMLDeformerGameFeatureData, bShouldRampUpWeightWhenEnabled) == 1097, "Offset mismatch for UMLDeformerGameFeatureData::bShouldRampUpWeightWhenEnabled");
static_assert(offsetof(UMLDeformerGameFeatureData, WeightIncreasePerSecond) == 1100, "Offset mismatch for UMLDeformerGameFeatureData::WeightIncreasePerSecond");
