/**
 * decamp dumper generated SDK
 * Package: /Script/ShellMesh
 */
#pragma once
#include "Basic.h"

// /Script/ShellMesh.ShellMeshAssetResources
// Kind: ScriptStruct; super: none
struct FShellMeshAssetResources
{
public:
    void* MeshDeformer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ShellMaterials; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BaseLayerMaterialOverrides; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FShellMeshAssetResources, MeshDeformer) == 0, "Offset mismatch for FShellMeshAssetResources::MeshDeformer");
static_assert(offsetof(FShellMeshAssetResources, ShellMaterials) == 8, "Offset mismatch for FShellMeshAssetResources::ShellMaterials");
static_assert(offsetof(FShellMeshAssetResources, BaseLayerMaterialOverrides) == 24, "Offset mismatch for FShellMeshAssetResources::BaseLayerMaterialOverrides");

// /Script/ShellMesh.ShellMeshLodProperties
// Kind: ScriptStruct; super: none
struct FShellMeshLodProperties
{
public:
    std::uint8_t ShellCount[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FShellMeshLodProperties, ShellCount) == 0, "Offset mismatch for FShellMeshLodProperties::ShellCount");

// /Script/ShellMesh.OptimusShellMeshWriteDataProvider
// Kind: Class; super: ComputeDataProvider
class UOptimusShellMeshWriteDataProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ShellMesh; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOptimusShellMeshWriteDataProvider, ShellMesh) == 40, "Offset mismatch for UOptimusShellMeshWriteDataProvider::ShellMesh");

// /Script/ShellMesh.ShellMeshAsset
// Kind: Class; super: Object
class UShellMeshAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* BaseSkeletalMeshAsset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    float TotalShellDepth; // 0x0030 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    TArray<void*> ShellLods; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EnabledByPlatform[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCastContactShadow; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bCastShadows (shared storage)
    // 0x0060 BoolProperty bRequiresAntiAliasing (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0061
    std::uint8_t RuntimeResources[0x1]; // 0x0068 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UShellMeshAsset, BaseSkeletalMeshAsset) == 40, "Offset mismatch for UShellMeshAsset::BaseSkeletalMeshAsset");
static_assert(offsetof(UShellMeshAsset, TotalShellDepth) == 48, "Offset mismatch for UShellMeshAsset::TotalShellDepth");
static_assert(offsetof(UShellMeshAsset, ShellLods) == 56, "Offset mismatch for UShellMeshAsset::ShellLods");
static_assert(offsetof(UShellMeshAsset, EnabledByPlatform) == 72, "Offset mismatch for UShellMeshAsset::EnabledByPlatform");
static_assert(offsetof(UShellMeshAsset, bCastContactShadow) == 96, "Offset mismatch for UShellMeshAsset::bCastContactShadow");
static_assert(offsetof(UShellMeshAsset, RuntimeResources) == 104, "Offset mismatch for UShellMeshAsset::RuntimeResources");

// /Script/ShellMesh.ShellMeshOptimusComponentSource
// Kind: Class; super: OptimusComponentSource
class UShellMeshOptimusComponentSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ShellMesh.ShellMeshOptimusDataInterfaceWrite
// Kind: Class; super: OptimusComputeDataInterface
class UShellMeshOptimusDataInterfaceWrite
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ShellMesh.ShellMeshSkeletalMeshComponent
// Kind: Class; super: SkeletalMeshComponentBudgeted
class UShellMeshSkeletalMeshComponent
{
public:
    std::uint8_t Pad_0000[0x1040]; // 0x0000
    void* ShellMeshAsset; // 0x1040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShellMeshSkeletalMeshComponent, ShellMeshAsset) == 4160, "Offset mismatch for UShellMeshSkeletalMeshComponent::ShellMeshAsset");
