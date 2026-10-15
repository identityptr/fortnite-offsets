/**
 * decamp dumper generated SDK
 * Package: /Script/MRMesh
 */
#pragma once
#include "Basic.h"

// /Script/MRMesh.MRMeshConfiguration
// Kind: ScriptStruct; super: none
struct FMRMeshConfiguration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MRMesh.MRMeshBodyHolder
// Kind: Class; super: Object
class UMRMeshBodyHolder
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* BodySetup; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BodyInstance[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMRMeshBodyHolder, BodySetup) == 48, "Offset mismatch for UMRMeshBodyHolder::BodySetup");
static_assert(offsetof(UMRMeshBodyHolder, BodyInstance) == 56, "Offset mismatch for UMRMeshBodyHolder::BodyInstance");

// /Script/MRMesh.MRMeshComponent
// Kind: Class; super: PrimitiveComponent
class UMRMeshComponent
{
public:
    std::uint8_t Pad_0000[0x578]; // 0x0000
    void* Material; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    void* WireframeMaterial; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCreateMeshProxySections; // 0x0588 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateNavMeshOnMeshUpdate; // 0x0589 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x058A
    std::uint8_t bNeverCreateCollisionMesh; // 0x058B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x44]; // 0x058C
    TArray<void*> BodyHolders; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMRMeshComponent, Material) == 1400, "Offset mismatch for UMRMeshComponent::Material");
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 1408, "Offset mismatch for UMRMeshComponent::WireframeMaterial");
static_assert(offsetof(UMRMeshComponent, bCreateMeshProxySections) == 1416, "Offset mismatch for UMRMeshComponent::bCreateMeshProxySections");
static_assert(offsetof(UMRMeshComponent, bUpdateNavMeshOnMeshUpdate) == 1417, "Offset mismatch for UMRMeshComponent::bUpdateNavMeshOnMeshUpdate");
static_assert(offsetof(UMRMeshComponent, bNeverCreateCollisionMesh) == 1419, "Offset mismatch for UMRMeshComponent::bNeverCreateCollisionMesh");
static_assert(offsetof(UMRMeshComponent, BodyHolders) == 1488, "Offset mismatch for UMRMeshComponent::BodyHolders");

// /Script/MRMesh.MeshReconstructorBase
// Kind: Class; super: Object
class UMeshReconstructorBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MRMesh.MockDataMeshTrackerComponent
// Kind: Class; super: SceneComponent
class UMockDataMeshTrackerComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t ScanWorld; // 0x0250 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequestNormals; // 0x0251 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequestVertexConfidence; // 0x0252 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VertexColorMode; // 0x0253 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0254
    TArray<void*> BlockVertexColors; // 0x0258 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t VertexColorFromConfidenceZero[0x10]; // 0x0268 (Size: 0x10, Type: StructProperty)
    std::uint8_t VertexColorFromConfidenceOne[0x10]; // 0x0278 (Size: 0x10, Type: StructProperty)
    float UpdateInterval; // 0x0288 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x028C
    void* MRMesh; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMockDataMeshTrackerComponent, OnMeshTrackerUpdated) == 576, "Offset mismatch for UMockDataMeshTrackerComponent::OnMeshTrackerUpdated");
static_assert(offsetof(UMockDataMeshTrackerComponent, ScanWorld) == 592, "Offset mismatch for UMockDataMeshTrackerComponent::ScanWorld");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestNormals) == 593, "Offset mismatch for UMockDataMeshTrackerComponent::RequestNormals");
static_assert(offsetof(UMockDataMeshTrackerComponent, RequestVertexConfidence) == 594, "Offset mismatch for UMockDataMeshTrackerComponent::RequestVertexConfidence");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 595, "Offset mismatch for UMockDataMeshTrackerComponent::VertexColorMode");
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 600, "Offset mismatch for UMockDataMeshTrackerComponent::BlockVertexColors");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 616, "Offset mismatch for UMockDataMeshTrackerComponent::VertexColorFromConfidenceZero");
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 632, "Offset mismatch for UMockDataMeshTrackerComponent::VertexColorFromConfidenceOne");
static_assert(offsetof(UMockDataMeshTrackerComponent, UpdateInterval) == 648, "Offset mismatch for UMockDataMeshTrackerComponent::UpdateInterval");
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 656, "Offset mismatch for UMockDataMeshTrackerComponent::MRMesh");
