/**
 * decamp dumper generated SDK
 * Package: /Script/ClothingSystemRuntimeInterface
 */
#pragma once
#include "Basic.h"

// /Script/ClothingSystemRuntimeInterface.ClothCollisionData
// Kind: ScriptStruct; super: none
struct FClothCollisionData
{
public:
    TArray<void*> Spheres; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SphereConnections; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Convexes; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Boxes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExtrudedTaperedCapsules; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClothCollisionData, Spheres) == 0, "Offset mismatch for FClothCollisionData::Spheres");
static_assert(offsetof(FClothCollisionData, SphereConnections) == 16, "Offset mismatch for FClothCollisionData::SphereConnections");
static_assert(offsetof(FClothCollisionData, Convexes) == 32, "Offset mismatch for FClothCollisionData::Convexes");
static_assert(offsetof(FClothCollisionData, Boxes) == 48, "Offset mismatch for FClothCollisionData::Boxes");
static_assert(offsetof(FClothCollisionData, ExtrudedTaperedCapsules) == 64, "Offset mismatch for FClothCollisionData::ExtrudedTaperedCapsules");

// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// Kind: ScriptStruct; super: none
struct FClothCollisionPrim_Box
{
public:
    std::uint8_t LocalPosition[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocalRotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t HalfExtents[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::int32_t BoneIndex; // 0x0058 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FClothCollisionPrim_Box, LocalPosition) == 0, "Offset mismatch for FClothCollisionPrim_Box::LocalPosition");
static_assert(offsetof(FClothCollisionPrim_Box, LocalRotation) == 32, "Offset mismatch for FClothCollisionPrim_Box::LocalRotation");
static_assert(offsetof(FClothCollisionPrim_Box, HalfExtents) == 64, "Offset mismatch for FClothCollisionPrim_Box::HalfExtents");
static_assert(offsetof(FClothCollisionPrim_Box, BoneIndex) == 88, "Offset mismatch for FClothCollisionPrim_Box::BoneIndex");

// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// Kind: ScriptStruct; super: none
struct FClothCollisionPrim_Convex
{
public:
    TArray<void*> Faces; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SurfacePoints; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LocalPosition[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocalRotation[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    std::int32_t BoneIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FClothCollisionPrim_Convex, Faces) == 0, "Offset mismatch for FClothCollisionPrim_Convex::Faces");
static_assert(offsetof(FClothCollisionPrim_Convex, SurfacePoints) == 16, "Offset mismatch for FClothCollisionPrim_Convex::SurfacePoints");
static_assert(offsetof(FClothCollisionPrim_Convex, LocalPosition) == 32, "Offset mismatch for FClothCollisionPrim_Convex::LocalPosition");
static_assert(offsetof(FClothCollisionPrim_Convex, LocalRotation) == 64, "Offset mismatch for FClothCollisionPrim_Convex::LocalRotation");
static_assert(offsetof(FClothCollisionPrim_Convex, BoneIndex) == 96, "Offset mismatch for FClothCollisionPrim_Convex::BoneIndex");

// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
// Kind: ScriptStruct; super: none
struct FClothCollisionPrim_ConvexFace
{
public:
    std::uint8_t Plane[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    TArray<void*> Indices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClothCollisionPrim_ConvexFace, Plane) == 0, "Offset mismatch for FClothCollisionPrim_ConvexFace::Plane");
static_assert(offsetof(FClothCollisionPrim_ConvexFace, Indices) == 32, "Offset mismatch for FClothCollisionPrim_ConvexFace::Indices");

// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ExtrudedTaperedCapsule
// Kind: ScriptStruct; super: none
struct FClothCollisionPrim_ExtrudedTaperedCapsule
{
public:
    std::uint8_t LocalPosition[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t LocalRotation[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    float Length; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float Width; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float Radius1; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float Radius2; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::int32_t BoneIndex; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FClothCollisionPrim_ExtrudedTaperedCapsule, LocalPosition) == 0, "Offset mismatch for FClothCollisionPrim_ExtrudedTaperedCapsule::LocalPosition");
static_assert(offsetof(FClothCollisionPrim_ExtrudedTaperedCapsule, LocalRotation) == 32, "Offset mismatch for FClothCollisionPrim_ExtrudedTaperedCapsule::LocalRotation");
static_assert(offsetof(FClothCollisionPrim_ExtrudedTaperedCapsule, Length) == 64, "Offset mismatch for FClothCollisionPrim_ExtrudedTaperedCapsule::Length");
static_assert(offsetof(FClothCollisionPrim_ExtrudedTaperedCapsule, Width) == 68, "Offset mismatch for FClothCollisionPrim_ExtrudedTaperedCapsule::Width");
static_assert(offsetof(FClothCollisionPrim_ExtrudedTaperedCapsule, Radius1) == 72, "Offset mismatch for FClothCollisionPrim_ExtrudedTaperedCapsule::Radius1");
static_assert(offsetof(FClothCollisionPrim_ExtrudedTaperedCapsule, Radius2) == 76, "Offset mismatch for FClothCollisionPrim_ExtrudedTaperedCapsule::Radius2");
static_assert(offsetof(FClothCollisionPrim_ExtrudedTaperedCapsule, BoneIndex) == 80, "Offset mismatch for FClothCollisionPrim_ExtrudedTaperedCapsule::BoneIndex");

// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// Kind: ScriptStruct; super: none
struct FClothCollisionPrim_Sphere
{
public:
    std::int32_t BoneIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Radius; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LocalPosition[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClothCollisionPrim_Sphere, BoneIndex) == 0, "Offset mismatch for FClothCollisionPrim_Sphere::BoneIndex");
static_assert(offsetof(FClothCollisionPrim_Sphere, Radius) == 4, "Offset mismatch for FClothCollisionPrim_Sphere::Radius");
static_assert(offsetof(FClothCollisionPrim_Sphere, LocalPosition) == 8, "Offset mismatch for FClothCollisionPrim_Sphere::LocalPosition");

// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// Kind: ScriptStruct; super: none
struct FClothCollisionPrim_SphereConnection
{
public:
    std::int32_t SphereIndices; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t OneSidedPlaneNormal[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FClothCollisionPrim_SphereConnection, SphereIndices) == 0, "Offset mismatch for FClothCollisionPrim_SphereConnection::SphereIndices");
static_assert(offsetof(FClothCollisionPrim_SphereConnection, OneSidedPlaneNormal) == 8, "Offset mismatch for FClothCollisionPrim_SphereConnection::OneSidedPlaneNormal");

// /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
// Kind: ScriptStruct; super: none
struct FClothVertBoneData
{
public:
    std::int32_t NumInfluences; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint16_t BoneIndices; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x16]; // 0x0006
    float BoneWeights; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClothVertBoneData, NumInfluences) == 0, "Offset mismatch for FClothVertBoneData::NumInfluences");
static_assert(offsetof(FClothVertBoneData, BoneIndices) == 4, "Offset mismatch for FClothVertBoneData::BoneIndices");
static_assert(offsetof(FClothVertBoneData, BoneWeights) == 28, "Offset mismatch for FClothVertBoneData::BoneWeights");

// /Script/ClothingSystemRuntimeInterface.ClothingSimulationInstance
// Kind: ScriptStruct; super: none
struct FClothingSimulationInstance
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* ClothingSimulationInteractor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ClothingSimulationFactory; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FClothingSimulationInstance, ClothingSimulationInteractor) == 16, "Offset mismatch for FClothingSimulationInstance::ClothingSimulationInteractor");
static_assert(offsetof(FClothingSimulationInstance, ClothingSimulationFactory) == 24, "Offset mismatch for FClothingSimulationInstance::ClothingSimulationFactory");

// /Script/ClothingSystemRuntimeInterface.ClothConfigBase
// Kind: Class; super: Object
class UClothConfigBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Kind: Class; super: Object
class UClothPhysicalMeshDataBase_Legacy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Vertices; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Normals; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Indices; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InverseMasses; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneData; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumFixedVerts; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxBoneWeights; // 0x007C (Size: 0x4, Type: IntProperty)
    TArray<void*> SelfCollisionIndices; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Vertices) == 40, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::Vertices");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Normals) == 56, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::Normals");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, Indices) == 72, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::Indices");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, InverseMasses) == 88, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::InverseMasses");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, BoneData) == 104, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::BoneData");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, NumFixedVerts) == 120, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::NumFixedVerts");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, MaxBoneWeights) == 124, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::MaxBoneWeights");
static_assert(offsetof(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices) == 128, "Offset mismatch for UClothPhysicalMeshDataBase_Legacy::SelfCollisionIndices");

// /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Kind: Class; super: Object
class UClothSharedSimConfigBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
// Kind: Class; super: Object
class UClothingAssetBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AssetGuid[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UClothingAssetBase, AssetGuid) == 40, "Offset mismatch for UClothingAssetBase::AssetGuid");

// /Script/ClothingSystemRuntimeInterface.ClothingInteractor
// Kind: Class; super: Object
class UClothingInteractor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Kind: Class; super: Object
class UClothingSimulationFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Kind: Class; super: Object
class UClothingSimulationInteractor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ClothingInteractors; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UClothingSimulationInteractor, ClothingInteractors) == 40, "Offset mismatch for UClothingSimulationInteractor::ClothingInteractors");
