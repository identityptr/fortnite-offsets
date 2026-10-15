/**
 * decamp dumper generated SDK
 * Package: /Script/StaticLandscapeSystem
 */
#pragma once
#include "Basic.h"

// /Script/StaticLandscapeSystem.LandscapeStaticMeshGenerationLODParams
// Kind: ScriptStruct; super: none
struct FLandscapeStaticMeshGenerationLODParams
{
public:
    std::int32_t TargetEdgeVertexCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    float TargetHeightError; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLandscapeStaticMeshGenerationLODParams, TargetEdgeVertexCount) == 0, "Offset mismatch for FLandscapeStaticMeshGenerationLODParams::TargetEdgeVertexCount");
static_assert(offsetof(FLandscapeStaticMeshGenerationLODParams, TargetHeightError) == 4, "Offset mismatch for FLandscapeStaticMeshGenerationLODParams::TargetHeightError");

// /Script/StaticLandscapeSystem.LandscapeStaticMesh
// Kind: Class; super: AssetUserData
class ULandscapeStaticMesh
{
public:
    std::uint8_t Opaque[1];
};


// /Script/StaticLandscapeSystem.LandscapeStaticMeshComponent
// Kind: Class; super: ActorComponent
class ULandscapeStaticMeshComponent
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

static_assert(offsetof(ULandscapeStaticMeshComponent, PrimaryComponentTick) == 56, "Offset mismatch for ULandscapeStaticMeshComponent::PrimaryComponentTick");
static_assert(offsetof(ULandscapeStaticMeshComponent, ComponentTags) == 104, "Offset mismatch for ULandscapeStaticMeshComponent::ComponentTags");
static_assert(offsetof(ULandscapeStaticMeshComponent, AssetUserData) == 120, "Offset mismatch for ULandscapeStaticMeshComponent::AssetUserData");
static_assert(offsetof(ULandscapeStaticMeshComponent, UCSSerializationIndex) == 144, "Offset mismatch for ULandscapeStaticMeshComponent::UCSSerializationIndex");
static_assert(offsetof(ULandscapeStaticMeshComponent, bNetAddressable) == 152, "Offset mismatch for ULandscapeStaticMeshComponent::bNetAddressable");
static_assert(offsetof(ULandscapeStaticMeshComponent, bAutoActivate) == 154, "Offset mismatch for ULandscapeStaticMeshComponent::bAutoActivate");
static_assert(offsetof(ULandscapeStaticMeshComponent, bIsEditorOnly) == 155, "Offset mismatch for ULandscapeStaticMeshComponent::bIsEditorOnly");
static_assert(offsetof(ULandscapeStaticMeshComponent, CreationMethod) == 185, "Offset mismatch for ULandscapeStaticMeshComponent::CreationMethod");
static_assert(offsetof(ULandscapeStaticMeshComponent, OnComponentActivated) == 186, "Offset mismatch for ULandscapeStaticMeshComponent::OnComponentActivated");
static_assert(offsetof(ULandscapeStaticMeshComponent, OnComponentDeactivated) == 187, "Offset mismatch for ULandscapeStaticMeshComponent::OnComponentDeactivated");
