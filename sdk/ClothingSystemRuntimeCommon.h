/**
 * decamp dumper generated SDK
 * Package: /Script/ClothingSystemRuntimeCommon
 */
#pragma once
#include "Basic.h"

// /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
// Kind: ScriptStruct; super: none
struct FClothConfig_Legacy
{
public:
    std::uint8_t WindMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t VerticalConstraintConfig[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalConstraintConfig[0x10]; // 0x0014 (Size: 0x10, Type: StructProperty)
    std::uint8_t BendConstraintConfig[0x10]; // 0x0024 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShearConstraintConfig[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    float SelfCollisionRadius; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float SelfCollisionStiffness; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float SelfCollisionCullScale; // 0x004C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Damping[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    float Friction; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float WindDragCoefficient; // 0x006C (Size: 0x4, Type: FloatProperty)
    float WindLiftCoefficient; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    std::uint8_t LinearDrag[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularDrag[0x18]; // 0x0090 (Size: 0x18, Type: StructProperty)
    std::uint8_t LinearInertiaScale[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AngularInertiaScale[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CentrifugalInertiaScale[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    float SolverFrequency; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float StiffnessFrequency; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    float GravityScale; // 0x00F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00FC
    std::uint8_t GravityOverride[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseGravityOverride; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0119
    float TetherStiffness; // 0x011C (Size: 0x4, Type: FloatProperty)
    float TetherLimit; // 0x0120 (Size: 0x4, Type: FloatProperty)
    float CollisionThickness; // 0x0124 (Size: 0x4, Type: FloatProperty)
    float AnimDriveSpringStiffness; // 0x0128 (Size: 0x4, Type: FloatProperty)
    float AnimDriveDamperStiffness; // 0x012C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClothConfig_Legacy, WindMethod) == 0, "Offset mismatch for FClothConfig_Legacy::WindMethod");
static_assert(offsetof(FClothConfig_Legacy, VerticalConstraintConfig) == 4, "Offset mismatch for FClothConfig_Legacy::VerticalConstraintConfig");
static_assert(offsetof(FClothConfig_Legacy, HorizontalConstraintConfig) == 20, "Offset mismatch for FClothConfig_Legacy::HorizontalConstraintConfig");
static_assert(offsetof(FClothConfig_Legacy, BendConstraintConfig) == 36, "Offset mismatch for FClothConfig_Legacy::BendConstraintConfig");
static_assert(offsetof(FClothConfig_Legacy, ShearConstraintConfig) == 52, "Offset mismatch for FClothConfig_Legacy::ShearConstraintConfig");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionRadius) == 68, "Offset mismatch for FClothConfig_Legacy::SelfCollisionRadius");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionStiffness) == 72, "Offset mismatch for FClothConfig_Legacy::SelfCollisionStiffness");
static_assert(offsetof(FClothConfig_Legacy, SelfCollisionCullScale) == 76, "Offset mismatch for FClothConfig_Legacy::SelfCollisionCullScale");
static_assert(offsetof(FClothConfig_Legacy, Damping) == 80, "Offset mismatch for FClothConfig_Legacy::Damping");
static_assert(offsetof(FClothConfig_Legacy, Friction) == 104, "Offset mismatch for FClothConfig_Legacy::Friction");
static_assert(offsetof(FClothConfig_Legacy, WindDragCoefficient) == 108, "Offset mismatch for FClothConfig_Legacy::WindDragCoefficient");
static_assert(offsetof(FClothConfig_Legacy, WindLiftCoefficient) == 112, "Offset mismatch for FClothConfig_Legacy::WindLiftCoefficient");
static_assert(offsetof(FClothConfig_Legacy, LinearDrag) == 120, "Offset mismatch for FClothConfig_Legacy::LinearDrag");
static_assert(offsetof(FClothConfig_Legacy, AngularDrag) == 144, "Offset mismatch for FClothConfig_Legacy::AngularDrag");
static_assert(offsetof(FClothConfig_Legacy, LinearInertiaScale) == 168, "Offset mismatch for FClothConfig_Legacy::LinearInertiaScale");
static_assert(offsetof(FClothConfig_Legacy, AngularInertiaScale) == 192, "Offset mismatch for FClothConfig_Legacy::AngularInertiaScale");
static_assert(offsetof(FClothConfig_Legacy, CentrifugalInertiaScale) == 216, "Offset mismatch for FClothConfig_Legacy::CentrifugalInertiaScale");
static_assert(offsetof(FClothConfig_Legacy, SolverFrequency) == 240, "Offset mismatch for FClothConfig_Legacy::SolverFrequency");
static_assert(offsetof(FClothConfig_Legacy, StiffnessFrequency) == 244, "Offset mismatch for FClothConfig_Legacy::StiffnessFrequency");
static_assert(offsetof(FClothConfig_Legacy, GravityScale) == 248, "Offset mismatch for FClothConfig_Legacy::GravityScale");
static_assert(offsetof(FClothConfig_Legacy, GravityOverride) == 256, "Offset mismatch for FClothConfig_Legacy::GravityOverride");
static_assert(offsetof(FClothConfig_Legacy, bUseGravityOverride) == 280, "Offset mismatch for FClothConfig_Legacy::bUseGravityOverride");
static_assert(offsetof(FClothConfig_Legacy, TetherStiffness) == 284, "Offset mismatch for FClothConfig_Legacy::TetherStiffness");
static_assert(offsetof(FClothConfig_Legacy, TetherLimit) == 288, "Offset mismatch for FClothConfig_Legacy::TetherLimit");
static_assert(offsetof(FClothConfig_Legacy, CollisionThickness) == 292, "Offset mismatch for FClothConfig_Legacy::CollisionThickness");
static_assert(offsetof(FClothConfig_Legacy, AnimDriveSpringStiffness) == 296, "Offset mismatch for FClothConfig_Legacy::AnimDriveSpringStiffness");
static_assert(offsetof(FClothConfig_Legacy, AnimDriveDamperStiffness) == 300, "Offset mismatch for FClothConfig_Legacy::AnimDriveDamperStiffness");

// /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// Kind: ScriptStruct; super: none
struct FClothConstraintSetup_Legacy
{
public:
    float Stiffness; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StiffnessMultiplier; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float StretchLimit; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float CompressionLimit; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FClothConstraintSetup_Legacy, Stiffness) == 0, "Offset mismatch for FClothConstraintSetup_Legacy::Stiffness");
static_assert(offsetof(FClothConstraintSetup_Legacy, StiffnessMultiplier) == 4, "Offset mismatch for FClothConstraintSetup_Legacy::StiffnessMultiplier");
static_assert(offsetof(FClothConstraintSetup_Legacy, StretchLimit) == 8, "Offset mismatch for FClothConstraintSetup_Legacy::StretchLimit");
static_assert(offsetof(FClothConstraintSetup_Legacy, CompressionLimit) == 12, "Offset mismatch for FClothConstraintSetup_Legacy::CompressionLimit");

// /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
// Kind: ScriptStruct; super: none
struct FClothLODDataCommon
{
public:
    std::uint8_t PhysicalMeshData[0xA8]; // 0x0000 (Size: 0xA8, Type: StructProperty)
    std::uint8_t bUseMultipleInfluences; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x00A9
    float SkinningKernelRadius; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSmoothTransition; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FClothLODDataCommon, PhysicalMeshData) == 0, "Offset mismatch for FClothLODDataCommon::PhysicalMeshData");
static_assert(offsetof(FClothLODDataCommon, bUseMultipleInfluences) == 168, "Offset mismatch for FClothLODDataCommon::bUseMultipleInfluences");
static_assert(offsetof(FClothLODDataCommon, SkinningKernelRadius) == 172, "Offset mismatch for FClothLODDataCommon::SkinningKernelRadius");
static_assert(offsetof(FClothLODDataCommon, bSmoothTransition) == 176, "Offset mismatch for FClothLODDataCommon::bSmoothTransition");

// /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// Kind: ScriptStruct; super: none
struct FClothParameterMask_Legacy
{
public:
    std::uint8_t MaskName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t CurrentTarget; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    float MaxValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MinValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    TArray<void*> Values; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnabled; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FClothParameterMask_Legacy, MaskName) == 0, "Offset mismatch for FClothParameterMask_Legacy::MaskName");
static_assert(offsetof(FClothParameterMask_Legacy, CurrentTarget) == 4, "Offset mismatch for FClothParameterMask_Legacy::CurrentTarget");
static_assert(offsetof(FClothParameterMask_Legacy, MaxValue) == 8, "Offset mismatch for FClothParameterMask_Legacy::MaxValue");
static_assert(offsetof(FClothParameterMask_Legacy, MinValue) == 12, "Offset mismatch for FClothParameterMask_Legacy::MinValue");
static_assert(offsetof(FClothParameterMask_Legacy, Values) == 16, "Offset mismatch for FClothParameterMask_Legacy::Values");
static_assert(offsetof(FClothParameterMask_Legacy, bEnabled) == 32, "Offset mismatch for FClothParameterMask_Legacy::bEnabled");

// /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// Kind: ScriptStruct; super: none
struct FClothPhysicalMeshData
{
public:
    TArray<void*> Vertices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Normals; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Indices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> WeightMaps; // 0x0030 (Size: 0x10, Type: MapProperty)
    TArray<void*> InverseMasses; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoneData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SelfCollisionVertexSet[0x10]; // 0x0060 (Size: 0x10, Type: SetProperty)
    std::uint8_t EuclideanTethers[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t GeodesicTethers[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::int32_t MaxBoneWeights; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t NumFixedVerts; // 0x0094 (Size: 0x4, Type: IntProperty)
    TArray<void*> SelfCollisionIndices; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0, "Offset mismatch for FClothPhysicalMeshData::Vertices");
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 16, "Offset mismatch for FClothPhysicalMeshData::Normals");
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 32, "Offset mismatch for FClothPhysicalMeshData::Indices");
static_assert(offsetof(FClothPhysicalMeshData, WeightMaps) == 48, "Offset mismatch for FClothPhysicalMeshData::WeightMaps");
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 64, "Offset mismatch for FClothPhysicalMeshData::InverseMasses");
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 80, "Offset mismatch for FClothPhysicalMeshData::BoneData");
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionVertexSet) == 96, "Offset mismatch for FClothPhysicalMeshData::SelfCollisionVertexSet");
static_assert(offsetof(FClothPhysicalMeshData, EuclideanTethers) == 112, "Offset mismatch for FClothPhysicalMeshData::EuclideanTethers");
static_assert(offsetof(FClothPhysicalMeshData, GeodesicTethers) == 128, "Offset mismatch for FClothPhysicalMeshData::GeodesicTethers");
static_assert(offsetof(FClothPhysicalMeshData, MaxBoneWeights) == 144, "Offset mismatch for FClothPhysicalMeshData::MaxBoneWeights");
static_assert(offsetof(FClothPhysicalMeshData, NumFixedVerts) == 148, "Offset mismatch for FClothPhysicalMeshData::NumFixedVerts");
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 152, "Offset mismatch for FClothPhysicalMeshData::SelfCollisionIndices");

// /Script/ClothingSystemRuntimeCommon.ClothTetherData
// Kind: ScriptStruct; super: none
struct FClothTetherData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeCommon.PointWeightMap
// Kind: ScriptStruct; super: none
struct FPointWeightMap
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPointWeightMap, Values) == 0, "Offset mismatch for FPointWeightMap::Values");

// /Script/ClothingSystemRuntimeCommon.ClothConfigCommon
// Kind: Class; super: ClothConfigBase
class UClothConfigCommon
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Kind: Class; super: Object
class UClothLODDataCommon_Legacy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PhysicalMeshData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ClothPhysicalMeshData[0xA8]; // 0x0030 (Size: 0xA8, Type: StructProperty)
    std::uint8_t CollisionData[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 40, "Offset mismatch for UClothLODDataCommon_Legacy::PhysicalMeshData");
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 48, "Offset mismatch for UClothLODDataCommon_Legacy::ClothPhysicalMeshData");
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 216, "Offset mismatch for UClothLODDataCommon_Legacy::CollisionData");

// /Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Kind: Class; super: ClothConfigCommon
class UClothSharedConfigCommon
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
// Kind: Class; super: ClothingAssetBase
class UClothingAssetCommon
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* PhysicsAsset; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ClothConfigs; // 0x0040 (Size: 0x10, Type: MapProperty)
    TArray<void*> LODData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LodMap; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UsedBoneNames; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UsedBoneIndices; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ReferenceBoneIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 56, "Offset mismatch for UClothingAssetCommon::PhysicsAsset");
static_assert(offsetof(UClothingAssetCommon, ClothConfigs) == 64, "Offset mismatch for UClothingAssetCommon::ClothConfigs");
static_assert(offsetof(UClothingAssetCommon, LODData) == 80, "Offset mismatch for UClothingAssetCommon::LODData");
static_assert(offsetof(UClothingAssetCommon, LodMap) == 96, "Offset mismatch for UClothingAssetCommon::LodMap");
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 112, "Offset mismatch for UClothingAssetCommon::UsedBoneNames");
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 128, "Offset mismatch for UClothingAssetCommon::UsedBoneIndices");
static_assert(offsetof(UClothingAssetCommon, ReferenceBoneIndex) == 144, "Offset mismatch for UClothingAssetCommon::ReferenceBoneIndex");

// /Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Kind: Class; super: Object
class UClothingAssetCustomData
{
public:
    std::uint8_t Opaque[1];
};
