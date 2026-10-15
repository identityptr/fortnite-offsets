/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryFramework
 */
#pragma once
#include "Basic.h"

// /Script/GeometryFramework.DynamicMeshChangeInfo
// Kind: ScriptStruct; super: none
struct FDynamicMeshChangeInfo
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Flags; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsRevertChange; // 0x0002 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDynamicMeshChangeInfo, Type) == 0, "Offset mismatch for FDynamicMeshChangeInfo::Type");
static_assert(offsetof(FDynamicMeshChangeInfo, Flags) == 1, "Offset mismatch for FDynamicMeshChangeInfo::Flags");
static_assert(offsetof(FDynamicMeshChangeInfo, bIsRevertChange) == 2, "Offset mismatch for FDynamicMeshChangeInfo::bIsRevertChange");

// /Script/GeometryFramework.BaseDynamicMeshComponent
// Kind: Class; super: MeshComponent
class UBaseDynamicMeshComponent
{
public:
    std::uint8_t Pad_0000[0x5F0]; // 0x0000
    std::uint8_t bExplicitShowWireframe; // 0x05F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05F1
    std::uint8_t WireframeColor[0x10]; // 0x05F4 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorMode; // 0x0604 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0605
    std::uint8_t ConstantColor[0x4]; // 0x0608 (Size: 0x4, Type: StructProperty)
    std::uint8_t ColorSpaceMode; // 0x060C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bTwoSided; // 0x060D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableFlatShading; // 0x060E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableViewModeOverrides; // 0x060F (Size: 0x1, Type: BoolProperty)
    void* OverrideRenderMaterial; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryRenderMaterial; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0620
    void* WireframeMaterialOverride; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryWireframeMaterialOverride; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableRayTracing; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DrawPath; // 0x0639 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DistanceFieldMode; // 0x063A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x5]; // 0x063B
    TArray<void*> BaseMaterials; // 0x0640 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBaseDynamicMeshComponent, bExplicitShowWireframe) == 1520, "Offset mismatch for UBaseDynamicMeshComponent::bExplicitShowWireframe");
static_assert(offsetof(UBaseDynamicMeshComponent, WireframeColor) == 1524, "Offset mismatch for UBaseDynamicMeshComponent::WireframeColor");
static_assert(offsetof(UBaseDynamicMeshComponent, ColorMode) == 1540, "Offset mismatch for UBaseDynamicMeshComponent::ColorMode");
static_assert(offsetof(UBaseDynamicMeshComponent, ConstantColor) == 1544, "Offset mismatch for UBaseDynamicMeshComponent::ConstantColor");
static_assert(offsetof(UBaseDynamicMeshComponent, ColorSpaceMode) == 1548, "Offset mismatch for UBaseDynamicMeshComponent::ColorSpaceMode");
static_assert(offsetof(UBaseDynamicMeshComponent, bTwoSided) == 1549, "Offset mismatch for UBaseDynamicMeshComponent::bTwoSided");
static_assert(offsetof(UBaseDynamicMeshComponent, bEnableFlatShading) == 1550, "Offset mismatch for UBaseDynamicMeshComponent::bEnableFlatShading");
static_assert(offsetof(UBaseDynamicMeshComponent, bEnableViewModeOverrides) == 1551, "Offset mismatch for UBaseDynamicMeshComponent::bEnableViewModeOverrides");
static_assert(offsetof(UBaseDynamicMeshComponent, OverrideRenderMaterial) == 1552, "Offset mismatch for UBaseDynamicMeshComponent::OverrideRenderMaterial");
static_assert(offsetof(UBaseDynamicMeshComponent, SecondaryRenderMaterial) == 1560, "Offset mismatch for UBaseDynamicMeshComponent::SecondaryRenderMaterial");
static_assert(offsetof(UBaseDynamicMeshComponent, WireframeMaterialOverride) == 1576, "Offset mismatch for UBaseDynamicMeshComponent::WireframeMaterialOverride");
static_assert(offsetof(UBaseDynamicMeshComponent, SecondaryWireframeMaterialOverride) == 1584, "Offset mismatch for UBaseDynamicMeshComponent::SecondaryWireframeMaterialOverride");
static_assert(offsetof(UBaseDynamicMeshComponent, bEnableRayTracing) == 1592, "Offset mismatch for UBaseDynamicMeshComponent::bEnableRayTracing");
static_assert(offsetof(UBaseDynamicMeshComponent, DrawPath) == 1593, "Offset mismatch for UBaseDynamicMeshComponent::DrawPath");
static_assert(offsetof(UBaseDynamicMeshComponent, DistanceFieldMode) == 1594, "Offset mismatch for UBaseDynamicMeshComponent::DistanceFieldMode");
static_assert(offsetof(UBaseDynamicMeshComponent, BaseMaterials) == 1600, "Offset mismatch for UBaseDynamicMeshComponent::BaseMaterials");

// /Script/GeometryFramework.DynamicMesh
// Kind: Class; super: Object
class UDynamicMesh
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    FMulticastInlineDelegate MeshModifiedBPEvent; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0080
    void* MeshGenerator; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableMeshGenerator; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicMesh, MeshModifiedBPEvent) == 112, "Offset mismatch for UDynamicMesh::MeshModifiedBPEvent");
static_assert(offsetof(UDynamicMesh, MeshGenerator) == 160, "Offset mismatch for UDynamicMesh::MeshGenerator");
static_assert(offsetof(UDynamicMesh, bEnableMeshGenerator) == 168, "Offset mismatch for UDynamicMesh::bEnableMeshGenerator");

// /Script/GeometryFramework.DynamicMeshActor
// Kind: Class; super: Actor
class UDynamicMeshActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* DynamicMeshComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableComputeMeshPool; // 0x0278 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    void* DynamicMeshPool; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDynamicMeshActor, DynamicMeshComponent) == 624, "Offset mismatch for UDynamicMeshActor::DynamicMeshComponent");
static_assert(offsetof(UDynamicMeshActor, bEnableComputeMeshPool) == 632, "Offset mismatch for UDynamicMeshActor::bEnableComputeMeshPool");
static_assert(offsetof(UDynamicMeshActor, DynamicMeshPool) == 640, "Offset mismatch for UDynamicMeshActor::DynamicMeshPool");

// /Script/GeometryFramework.DynamicMeshComponent
// Kind: Class; super: BaseDynamicMeshComponent
class UDynamicMeshComponent
{
public:
    std::uint8_t Pad_0000[0x658]; // 0x0000
    void* MeshObject; // 0x0658 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x59]; // 0x0660
    std::uint8_t bAllowsGeometrySelection; // 0x06B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xC6]; // 0x06BA
    std::uint8_t TangentsType; // 0x0780 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0xEF]; // 0x0781
    std::uint8_t CollisionType; // 0x0870 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bUseAsyncCooking; // 0x0871 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableComplexCollision; // 0x0872 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeferCollisionUpdates; // 0x0873 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableMeshUVHitResults; // 0x0874 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0875
    void* MeshBodySetup; // 0x0878 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x38]; // 0x0880
    std::uint8_t AggGeom[0xA0]; // 0x08B8 (Size: 0xA0, Type: StructProperty)
    TArray<void*> AsyncBodySetupQueue; // 0x0958 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicMeshComponent, MeshObject) == 1624, "Offset mismatch for UDynamicMeshComponent::MeshObject");
static_assert(offsetof(UDynamicMeshComponent, bAllowsGeometrySelection) == 1721, "Offset mismatch for UDynamicMeshComponent::bAllowsGeometrySelection");
static_assert(offsetof(UDynamicMeshComponent, TangentsType) == 1920, "Offset mismatch for UDynamicMeshComponent::TangentsType");
static_assert(offsetof(UDynamicMeshComponent, CollisionType) == 2160, "Offset mismatch for UDynamicMeshComponent::CollisionType");
static_assert(offsetof(UDynamicMeshComponent, bUseAsyncCooking) == 2161, "Offset mismatch for UDynamicMeshComponent::bUseAsyncCooking");
static_assert(offsetof(UDynamicMeshComponent, bEnableComplexCollision) == 2162, "Offset mismatch for UDynamicMeshComponent::bEnableComplexCollision");
static_assert(offsetof(UDynamicMeshComponent, bDeferCollisionUpdates) == 2163, "Offset mismatch for UDynamicMeshComponent::bDeferCollisionUpdates");
static_assert(offsetof(UDynamicMeshComponent, bDisableMeshUVHitResults) == 2164, "Offset mismatch for UDynamicMeshComponent::bDisableMeshUVHitResults");
static_assert(offsetof(UDynamicMeshComponent, MeshBodySetup) == 2168, "Offset mismatch for UDynamicMeshComponent::MeshBodySetup");
static_assert(offsetof(UDynamicMeshComponent, AggGeom) == 2232, "Offset mismatch for UDynamicMeshComponent::AggGeom");
static_assert(offsetof(UDynamicMeshComponent, AsyncBodySetupQueue) == 2392, "Offset mismatch for UDynamicMeshComponent::AsyncBodySetupQueue");

// /Script/GeometryFramework.DynamicMeshGenerator
// Kind: Class; super: Object
class UDynamicMeshGenerator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryFramework.DynamicMeshPool
// Kind: Class; super: Object
class UDynamicMeshPool
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CachedMeshes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllCreatedMeshes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicMeshPool, CachedMeshes) == 40, "Offset mismatch for UDynamicMeshPool::CachedMeshes");
static_assert(offsetof(UDynamicMeshPool, AllCreatedMeshes) == 56, "Offset mismatch for UDynamicMeshPool::AllCreatedMeshes");

// /Script/GeometryFramework.DynamicMeshProcessorBlueprint
// Kind: Class; super: Object
class UDynamicMeshProcessorBlueprint
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bRequiresGameThread; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicMeshProcessorBlueprint, bRequiresGameThread) == 40, "Offset mismatch for UDynamicMeshProcessorBlueprint::bRequiresGameThread");

// /Script/GeometryFramework.MeshCommandChangeTarget
// Kind: Class; super: Interface
class UMeshCommandChangeTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryFramework.MeshReplacementCommandChangeTarget
// Kind: Class; super: Interface
class UMeshReplacementCommandChangeTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GeometryFramework.MeshVertexCommandChangeTarget
// Kind: Class; super: Interface
class UMeshVertexCommandChangeTarget
{
public:
    std::uint8_t Opaque[1];
};
